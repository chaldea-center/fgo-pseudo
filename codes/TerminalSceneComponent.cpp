void TerminalSceneComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  TerminalSceneComponent_c *v3; // x8
  int32_t v4; // w1
  struct TerminalSceneComponent_StaticFields *static_fields; // x0
  int32_t v6; // w1
  struct TerminalSceneComponent_StaticFields *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  struct TerminalSceneComponent_StaticFields *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  struct TerminalSceneComponent_StaticFields *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  struct TerminalSceneComponent_StaticFields *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4C45388 & 1) == 0 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    sub_1C37058(&StringLiteral_10081/*"OverwriteCommonBG2"*/);
    sub_1C37058(&StringLiteral_10080/*"OverwriteCommonBG1"*/);
    sub_1C37058(&StringLiteral_21456/*"masterMissionResetKey"*/);
    sub_1C37058(&StringLiteral_13683/*"Terminal/EarthCore/{0:D2}"*/);
    sub_1C37058(&StringLiteral_10058/*"OrdealCallChapterPlayState"*/);
    byte_4C45388 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  TerminalSceneComponent_TypeInfo->static_fields->DEFAULT_AMBIENT_LIGHT_COLOR = (struct UnityEngine_Color_o)xmmword_C0F980;
  v4 = StringLiteral_21456/*"masterMissionResetKey"*/;
  static_fields = v3->static_fields;
  static_fields->MASTER_MISSION_RESET_KEY = (struct System_String_o *)StringLiteral_21456/*"masterMissionResetKey"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->MASTER_MISSION_RESET_KEY, v4, v1, v2);
  v6 = StringLiteral_13683/*"Terminal/EarthCore/{0:D2}"*/;
  v7 = TerminalSceneComponent_TypeInfo->static_fields;
  v7->EARTH_ASSET_NAME = (struct System_String_o *)StringLiteral_13683/*"Terminal/EarthCore/{0:D2}"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v7->EARTH_ASSET_NAME, v6, v8, v9);
  v10 = StringLiteral_10058/*"OrdealCallChapterPlayState"*/;
  v11 = TerminalSceneComponent_TypeInfo->static_fields;
  v11->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY = (struct System_String_o *)StringLiteral_10058/*"OrdealCallChapterPlayState"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v11->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY, v10, v12, v13);
  v14 = StringLiteral_10080/*"OverwriteCommonBG1"*/;
  v15 = TerminalSceneComponent_TypeInfo->static_fields;
  v15->OVERWRITE_COMMON_BG_TYPE1_KEY = (struct System_String_o *)StringLiteral_10080/*"OverwriteCommonBG1"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v15->OVERWRITE_COMMON_BG_TYPE1_KEY, v14, v16, v17);
  v18 = StringLiteral_10081/*"OverwriteCommonBG2"*/;
  v19 = TerminalSceneComponent_TypeInfo->static_fields;
  v19->OVERWRITE_COMMON_BG_TYPE2_KEY = (struct System_String_o *)StringLiteral_10081/*"OverwriteCommonBG2"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v19->OVERWRITE_COMMON_BG_TYPE2_KEY, v18, v20, v21);
  *(_WORD *)&TerminalSceneComponent_TypeInfo->static_fields->isTitleToTerminalTransition = 0;
}


void TerminalSceneComponent___ctor(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  this->fields.TUTORIAL_SPOT_ARROW_POS = (struct UnityEngine_Vector2_o)3263954944LL;
  this->fields.TUTORIAL_SPOT_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_C0FE90;
  *(_OWORD *)&this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x = xmmword_C0FBC0;
  this->fields.TUTORIAL_QUEST_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_C0ECA0;
  *(_OWORD *)&this->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x = xmmword_C0FBD0;
  this->fields.TUTORIAL_MENU_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_C0FF50;
  *(_OWORD *)&this->fields.TUTORIAL_MENU_MESSAGE_POS.fields.x = xmmword_C0E610;
  this->fields.TUTORIAL_GACHA_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_C0EDE0;
  this->fields.TUTORIAL_MENU_ARROW_POS2 = (struct UnityEngine_Vector2_o)0xC366000043DB0000LL;
  this->fields.TUTORIAL_COMBINE_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_C0F130;
  this->fields.TUTORIAL_COMBINE_ARROW_POS = (struct UnityEngine_Vector2_o)0xC3200000C3058000LL;
  this->fields.isTopLoginBusy = 1;
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void TerminalSceneComponent__Awake(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalSceneComponent_c *v5; // x0
  UnityEngine_GameObject_o *UiFlag; // x0
  bool v7; // w1

  if ( (byte_4C4533A & 1) == 0 )
  {
    sub_1C37058(&ServantCommentManager_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C4533A = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  v5->static_fields->mInstance = this;
  sub_1C36FFC((CGThumbnailListItem_o *)TerminalSceneComponent_TypeInfo->static_fields, (int32_t)this, v2, v3);
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  UiFlag = (UnityEngine_GameObject_o *)ServantCommentManager__GetUiFlag(0);
  if ( !this->fields.mBgText )
    goto LABEL_16;
  if ( !(_DWORD)UiFlag )
  {
    UnityEngine_GameObject__SetActive(this->fields.mBgText, 1, 0);
    UiFlag = this->fields.mBgGradLeft;
    if ( UiFlag )
    {
      UnityEngine_GameObject__SetActive(UiFlag, 1, 0);
      UiFlag = this->fields.mBgGradRight;
      if ( UiFlag )
      {
        v7 = 1;
        goto LABEL_15;
      }
    }
LABEL_16:
    sub_1C372B4(UiFlag);
  }
  UnityEngine_GameObject__SetActive(this->fields.mBgText, 0, 0);
  UiFlag = this->fields.mBgGradLeft;
  if ( !UiFlag )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(UiFlag, 0, 0);
  UiFlag = this->fields.mBgGradRight;
  if ( !UiFlag )
    goto LABEL_16;
  v7 = 0;
LABEL_15:
  UnityEngine_GameObject__SetActive(UiFlag, v7, 0);
}


void TerminalSceneComponent__CallAfterTopHome(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( this->fields.isTopLoginBusy )
  {
    this->fields.afterTopLogin = callback;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.afterTopLogin, (int32_t)callback, (int32_t)method, v3);
  }
  else
  {
    ActionExtensions__Call(callback, 0);
  }
}


void TerminalSceneComponent__CallQuestClearReset(
        TerminalSceneComponent_o *this,
        QuestBoardListViewItem_o *item,
        const MethodInfo *method)
{
  ScrTerminalListTop_o *mTerminalList; // x0

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    sub_1C372B4(0);
  ScrTerminalListTop__OpenQuestResetDialog(mTerminalList, item, 0);
}


bool TerminalSceneComponent__CallQuestInfoAutoOpen(
        TerminalSceneComponent_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  QuestInformationComponent_o *mQuestInformation; // x0

  mQuestInformation = this->fields.mQuestInformation;
  if ( !mQuestInformation )
    sub_1C372B4(0);
  return QuestInformationComponent__AutoOpen(mQuestInformation, questId, 1, 0, 0, 0);
}


void TerminalSceneComponent__CallQuestInformation(
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
          0,
          0,
          0) )
    return;
  this = (TerminalSceneComponent_o *)v5->fields.mQuestInformation;
  if ( !this
    || (QuestInformationComponent__Open((QuestInformationComponent_o *)this, 0),
        (this = (TerminalSceneComponent_o *)v5->fields.mTerminalList) == 0)
    || (ScrTerminalListTop__InfoSettedUp((ScrTerminalListTop_o *)this, item, 0),
        (mTerminalList = v5->fields.mTerminalList) == 0)
    || (mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager) == 0 )
  {
LABEL_11:
    sub_1C372B4(this);
  }
  mQuestBoardListViewManager->fields._IsShowingInfo_k__BackingField = 1;
}


void TerminalSceneComponent__CallQuestInformationClose(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList
    || (mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager) == 0
    || (mQuestBoardListViewManager->fields._IsShowingInfo_k__BackingField = 0,
        (this = (TerminalSceneComponent_o *)this->fields.mQuestInformation) == 0) )
  {
    sub_1C372B4(this);
  }
  QuestInformationComponent__Close((QuestInformationComponent_o *)this, 0);
}


void TerminalSceneComponent__CallQuestInformationCloseAtAll(
        TerminalSceneComponent_o *this,
        bool isPlaySe,
        const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList
    || (mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager) == 0
    || (mQuestBoardListViewManager->fields._IsShowingInfo_k__BackingField = 0,
        (this = (TerminalSceneComponent_o *)this->fields.mQuestInformation) == 0) )
  {
    sub_1C372B4(this);
  }
  QuestInformationComponent__CloseWindow((QuestInformationComponent_o *)this, isPlaySe, 0);
}


void TerminalSceneComponent__CheckAfterQuestClearDialog(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  EventTutorialMaster__CheckTutorial(0, 93, callback, 0, 0, 0, 0, 0);
}


void TerminalSceneComponent__CheckConflictTutorialOnBlankEarth(
        TerminalSceneComponent_o *this,
        int32_t openType,
        const MethodInfo *method)
{
  EventTutorialMaster_EventTutorialArgs_o *v4; // x20
  System_Collections_ICollection_o *IsNullOrEmpty; // x0
  __int64 v6; // x21
  EventTutorialEntity_array *AvailableTutorialArray; // x19
  int max_length; // w8
  System_Collections_ICollection_o *v9; // x20
  unsigned int v10; // w21
  EventTutorialEntity_o *v11; // x24
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  EventTutorialEntity_TextTuto_o *v13; // x8
  struct EventTutorialEntity_TextTuto_array *v14; // x8
  EventTutorialEntity_TextTuto_o *v15; // x8
  System_Collections_ICollection_o *v16; // x8
  int klass; // w25
  struct EventTutorialEntity_TextTuto_array *v18; // x8
  EventTutorialEntity_TextTuto_o *v19; // x8

  if ( (byte_4C45387 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C45387 = 1;
  }
  v4 = (EventTutorialMaster_EventTutorialArgs_o *)sub_1C372A4(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor(v4, 0);
  if ( !v4
    || (v4->fields.eventId = 0,
        v4->fields.openKind = openType,
        v6 = sub_1C372A4(EventTutorialMaster_EventTutorialArgs_TypeInfo),
        EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v6, 0),
        !v6)
    || (*(_QWORD *)(v6 + 16) = 0x5300000000LL,
        AvailableTutorialArray = EventTutorialMaster__GetAvailableTutorialArray(v4, 0),
        IsNullOrEmpty = (System_Collections_ICollection_o *)EventTutorialMaster__GetAvailableTutorialArray(
                                                              (EventTutorialMaster_EventTutorialArgs_o *)v6,
                                                              0),
        !AvailableTutorialArray) )
  {
LABEL_31:
    sub_1C372B4(IsNullOrEmpty);
  }
  max_length = AvailableTutorialArray->max_length;
  if ( max_length >= 1 )
  {
    v9 = IsNullOrEmpty;
    v10 = 0;
    while ( v10 < max_length )
    {
      v11 = AvailableTutorialArray->m_Items[v10];
      if ( !v11 )
        goto LABEL_31;
      IsNullOrEmpty = (System_Collections_ICollection_o *)BasicHelper__IsNullOrEmpty(
                                                            (System_Collections_ICollection_o *)v11->fields.textJson,
                                                            0);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        textJson = v11->fields.textJson;
        if ( !textJson )
          goto LABEL_31;
        if ( !LODWORD(textJson->max_length) )
          break;
        v13 = textJson->m_Items[0];
        if ( !v13 )
          goto LABEL_31;
        if ( v13->fields.isQuestRelease )
        {
          IsNullOrEmpty = (System_Collections_ICollection_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( IsNullOrEmpty )
          {
            IsNullOrEmpty = (System_Collections_ICollection_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
            v14 = v11->fields.textJson;
            if ( !v14 )
              goto LABEL_31;
            if ( !LODWORD(v14->max_length) )
              break;
            v15 = v14->m_Items[0];
            if ( !v15 || !IsNullOrEmpty )
              goto LABEL_31;
            IsNullOrEmpty = (System_Collections_ICollection_o *)QuestTree__GetQuestInfo(
                                                                  (QuestTree_o *)IsNullOrEmpty,
                                                                  v15->fields.questId,
                                                                  0);
            if ( IsNullOrEmpty )
            {
              v16 = IsNullOrEmpty;
              IsNullOrEmpty = (System_Collections_ICollection_o *)BalanceConfig_TypeInfo;
              klass = (int)v16[4].klass;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                IsNullOrEmpty = (System_Collections_ICollection_o *)BalanceConfig_TypeInfo;
              }
              if ( klass == *((_DWORD *)IsNullOrEmpty[11].monitor + 215) )
              {
                IsNullOrEmpty = (System_Collections_ICollection_o *)BasicHelper__IsNullOrEmpty(v9, 0);
                if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
                {
                  v18 = v11->fields.textJson;
                  if ( !v18 )
                    goto LABEL_31;
                  if ( !LODWORD(v18->max_length) )
                    break;
                  v19 = v18->m_Items[0];
                  if ( !v19 )
                    goto LABEL_31;
                  v19->fields.isQuestRelease = 0;
                }
              }
            }
          }
        }
      }
      max_length = AvailableTutorialArray->max_length;
      if ( (int)++v10 >= max_length )
        return;
    }
    sub_1C372BC(IsNullOrEmpty);
  }
}


bool TerminalSceneComponent__CheckEventDailyPoint(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  TerminalPramsManager_c *v5; // x0
  int64_t BeforeTimeEventDailyPoint_k__BackingField; // x21
  System_DateTime_o v7; // x20
  TerminalPramsManager_c *v8; // x0
  System_DateTime_o v9; // x0
  int32_t Hour; // w19
  BalanceConfig_c *v11; // x8
  System_DateTime_o v12; // x0
  System_DateTime_o v13; // x0
  int32_t Year; // w19
  System_DateTime_o v15; // x0
  int32_t Month; // w21
  System_DateTime_o v17; // x0
  int32_t Day; // w0
  BalanceConfig_c *v19; // x8
  int32_t v20; // w22
  System_DateTime_o v21; // x0
  System_DateTime_o v22; // x1
  System_DateTime_o v23; // x0
  System_DateTime_o t2; // [xsp+0h] [xbp-50h] BYREF
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C4536C & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C37058(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C37058(&System_DateTime_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4536C = 1;
  }
  entity = 0;
  t2.fields._dateData = 0;
  dateData = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_40;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_33A10EC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_40:
    sub_1C372B4(Instance);
  if ( EventDetailEntity__IsEventDailyPoint((EventDetailEntity_o *)entity, 0) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C403EF )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C403EF = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    BeforeTimeEventDailyPoint_k__BackingField = v5->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v7.fields._dateData = NetworkManager__getDateTime_41367148(BeforeTimeEventDailyPoint_k__BackingField, 0).fields._dateData;
    if ( !byte_4C403EE )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C403EE = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
    }
    if ( BeforeTimeEventDailyPoint_k__BackingField < 1
      || v8->static_fields->_EventDailyPointEventId_k__BackingField != eventId )
    {
      return 1;
    }
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    dateData = NetworkManager__getServerDateTime(0).fields._dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v9.fields._dateData = (uint64_t)&dateData;
    Hour = System_DateTime__get_Hour(v9, 0);
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
      v12.fields._dateData = (uint64_t)&dateData;
      dateData = System_DateTime__AddDays(v12, -1.0, 0).fields._dateData;
    }
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v13.fields._dateData = (uint64_t)&dateData;
    Year = System_DateTime__get_Year(v13, 0);
    v15.fields._dateData = (uint64_t)&dateData;
    Month = System_DateTime__get_Month(v15, 0);
    v17.fields._dateData = (uint64_t)&dateData;
    Day = System_DateTime__get_Day(v17, 0);
    v19 = BalanceConfig_TypeInfo;
    v20 = Day;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v19 = BalanceConfig_TypeInfo;
    }
    v21.fields._dateData = (uint64_t)&t2;
    System_DateTime___ctor_64948000(v21, Year, Month, v20, v19->static_fields->EventDailyPointResetAt, 0, 0, 0);
    v22.fields._dateData = t2.fields._dateData;
    v23.fields._dateData = v7.fields._dateData;
    if ( System_DateTime__op_LessThanOrEqual(v23, v22, 0) )
      return 1;
  }
  return 0;
}


void TerminalSceneComponent__CheckExchangeDialogTheFree(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *String_71225564; // x0
  const MethodInfo *v6; // x5

  if ( (byte_4C4537C & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1908/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_TITLE"*/);
    sub_1C37058(&StringLiteral_19664/*"freeShopIds"*/);
    sub_1C37058(&StringLiteral_1907/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_DETAIL"*/);
    byte_4C4537C = 1;
  }
  String_71225564 = UnityEngine_PlayerPrefs__GetString_71225564((System_String_o *)StringLiteral_19664/*"freeShopIds"*/, 0);
  if ( System_String__IsNullOrEmpty(String_71225564, 0) )
    ActionExtensions__Call(callback, 0);
  else
    TerminalSceneComponent__OpenExchangeDialogue(
      this,
      (System_String_o *)StringLiteral_19664/*"freeShopIds"*/,
      (System_String_o *)StringLiteral_1908/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_TITLE"*/,
      (System_String_o *)StringLiteral_1907/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_DETAIL"*/,
      callback,
      v6);
}


void TerminalSceneComponent__CheckExchangeDialogTheReturn(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *String_71225564; // x0
  const MethodInfo *v6; // x5

  if ( (byte_4C4537D & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1910/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_TITLE"*/);
    sub_1C37058(&StringLiteral_23091/*"returnRarePriShopIds"*/);
    sub_1C37058(&StringLiteral_1909/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_DETAIL"*/);
    byte_4C4537D = 1;
  }
  String_71225564 = UnityEngine_PlayerPrefs__GetString_71225564((System_String_o *)StringLiteral_23091/*"returnRarePriShopIds"*/, 0);
  if ( System_String__IsNullOrEmpty(String_71225564, 0) )
    ActionExtensions__Call(callback, 0);
  else
    TerminalSceneComponent__OpenExchangeDialogue(
      this,
      (System_String_o *)StringLiteral_23091/*"returnRarePriShopIds"*/,
      (System_String_o *)StringLiteral_1910/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_TITLE"*/,
      (System_String_o *)StringLiteral_1909/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_DETAIL"*/,
      callback,
      v6);
}


void TerminalSceneComponent__CheckLastPlayBgm(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTerminalList; // x20
  ScrTerminalListTop_o *v4; // x0

  if ( (byte_4C45360 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45360 = 1;
  }
  mTerminalList = (UnityEngine_Object_o *)this->fields.mTerminalList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mTerminalList, 0, 0) )
  {
    v4 = this->fields.mTerminalList;
    if ( !v4 )
      sub_1C372B4(0);
    ScrTerminalListTop__CheckLastPlayBgm(v4, 0);
  }
}


void TerminalSceneComponent__CheckMasterMissionReset(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  ScrPlayerStatus_o *mPlayerStatus; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Action_o **v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  _QWORD *v12; // x21
  TerminalSceneComponent_c *v13; // x0
  System_String_o *String; // x0
  int64_t v15; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v17; // x21
  System_String_o *v18; // x22
  System_String_o *v19; // x23
  CommonConfirmDialog_ClickDelegate_o *v20; // x24
  TerminalSceneComponent_c *v21; // x0
  struct TerminalSceneComponent_StaticFields *static_fields; // x8
  int64_t v23; // x0
  System_String_o *MASTER_MISSION_RESET_KEY; // x19
  System_String_o *v25; // x0

  if ( (byte_4C45380 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass267_0__CheckMasterMissionReset_b__0__);
    sub_1C37058(&TerminalSceneComponent___c__DisplayClass267_0_TypeInfo);
    sub_1C37058(&StringLiteral_8812/*"MST_MISSION_CHANGE_MSG"*/);
    sub_1C37058(&StringLiteral_8811/*"MST_MISSION_CHANGE_DECIDE"*/);
    sub_1C37058(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_1122/*"0"*/);
    byte_4C45380 = 1;
  }
  v5 = sub_1C372A4(TerminalSceneComponent___c__DisplayClass267_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass267_0___ctor((TerminalSceneComponent___c__DisplayClass267_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_20;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 32) = callback;
  v9 = (System_Action_o **)(v5 + 32);
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)callback, v10, v11);
  mPlayerStatus = this->fields.mPlayerStatus;
  if ( !mPlayerStatus )
    goto LABEL_20;
  *(_QWORD *)(v5 + 16) = ScrPlayerStatus__GetMstMissionStarts(mPlayerStatus, 0);
  v12 = (_QWORD *)(v5 + 16);
  v13 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v13 = TerminalSceneComponent_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             v13->static_fields->MASTER_MISSION_RESET_KEY,
             (System_String_o *)StringLiteral_1122/*"0"*/,
             0);
  v15 = System_Int64__Parse(String, 0);
  if ( *v12 )
  {
    if ( v15 )
    {
      if ( v15 != *v12 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v17 = LocalizationManager__Get((System_String_o *)StringLiteral_8812/*"MST_MISSION_CHANGE_MSG"*/, 0);
        v18 = LocalizationManager__Get((System_String_o *)StringLiteral_8811/*"MST_MISSION_CHANGE_DECIDE"*/, 0);
        v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0);
        v20 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C372A4(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v20,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent___c__DisplayClass267_0__CheckMasterMissionReset_b__0__,
          0);
        mPlayerStatus = (ScrPlayerStatus_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        if ( Instance )
        {
          CommonUI__OpenConfirmDecideDlg(
            (CommonUI_o *)Instance,
            (System_String_o *)StringLiteral_1/*""*/,
            v17,
            v18,
            v19,
            v20,
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
            0);
          return;
        }
LABEL_20:
        sub_1C372B4(mPlayerStatus);
      }
    }
    else
    {
      v21 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v21 = TerminalSceneComponent_TypeInfo;
      }
      static_fields = v21->static_fields;
      v23 = v5 + 16;
      MASTER_MISSION_RESET_KEY = static_fields->MASTER_MISSION_RESET_KEY;
      v25 = System_Int64__ToString(v23, 0);
      UnityEngine_PlayerPrefs__SetString(MASTER_MISSION_RESET_KEY, v25, 0);
    }
  }
  ActionExtensions__Call(*v9, 0);
}


void TerminalSceneComponent__CheckNotificationDialog(
        TerminalSceneComponent_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v4; // x19
  DataManager_o *Instance; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Action_o **v8; // x20
  BattleResultBondsComponent_c *v9; // x0
  BattleResultBondsComponent_c *v10; // x0
  Il2CppObject *String_71225564; // x21
  System_Object_array *v12; // x0
  System_Object_array *v13; // x22
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x23
  __int64 v16; // x25
  Il2CppObject *v17; // x8
  BattleResultBondsComponent_c *v18; // x0
  BattleResultBondsComponent_c *v19; // x0
  System_Action_o *v20; // x20
  EventServantEntity_o *v21; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x22
  __int64 v25; // x22
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x19
  __int64 v29; // x20
  Il2CppObject *v30; // x8
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_String_o *v35; // x19
  Il2CppObject *v36; // x22
  __int64 v37; // x0
  Il2CppObject *v38; // [xsp+40h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4C45381 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&BattleResultBondsComponent_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C37058(&GetSvtCoin___TypeInfo);
    sub_1C37058(&GetSvtCoin_TypeInfo);
    sub_1C37058(&Method_JsonManager_DeserializeArray_GetSvts___);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass268_0__CheckNotificationDialog_b__0__);
    sub_1C37058(&TerminalSceneComponent___c__DisplayClass268_0_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass268_1__CheckNotificationDialog_b__1__);
    sub_1C37058(&TerminalSceneComponent___c__DisplayClass268_1_TypeInfo);
    sub_1C37058(&StringLiteral_12440/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/);
    byte_4C45381 = 1;
  }
  v38 = 0;
  entity = 0;
  v4 = sub_1C372A4(TerminalSceneComponent___c__DisplayClass268_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass268_0___ctor((TerminalSceneComponent___c__DisplayClass268_0_o *)v4, 0);
  if ( !v4 )
    goto LABEL_54;
  *(_QWORD *)(v4 + 16) = callBack;
  v8 = (System_Action_o **)(v4 + 16);
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 16), (int32_t)callBack, v6, v7);
  v9 = BattleResultBondsComponent_TypeInfo;
  if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
    v9 = BattleResultBondsComponent_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v9->static_fields->GET_EXIST_SVT_KEY, 0) )
  {
    v10 = BattleResultBondsComponent_TypeInfo;
    if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
      v10 = BattleResultBondsComponent_TypeInfo;
    }
    String_71225564 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_71225564(
                                        v10->static_fields->GET_EXIST_SVT_KEY,
                                        0);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v12 = JsonManager__DeserializeArray_object_(
            String_71225564,
            (const MethodInfo_31570C4 *)Method_JsonManager_DeserializeArray_GetSvts___);
    if ( v12 )
    {
      v13 = v12;
      if ( v12->max_length )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_54;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
        max_length = v13->max_length;
        if ( max_length >= 1 )
        {
          v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v16 = 0;
          while ( 1 )
          {
            if ( (unsigned int)v16 >= max_length )
              goto LABEL_55;
            v17 = v13->m_Items[v16];
            if ( !v17 || !v15 )
              goto LABEL_54;
            Instance = (DataManager_o *)DataMasterBase_object__object__long___TryGetEntity(
                                          v15,
                                          &entity,
                                          (int64_t)v17[1].klass,
                                          (const MethodInfo_33A3648 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (DataManager_o *)entity;
              if ( !entity )
                goto LABEL_54;
              Instance = (DataManager_o *)UserServantEntity__getEventServant((UserServantEntity_o *)entity, 0);
              if ( Instance )
                break;
              Instance = (DataManager_o *)entity;
              if ( !entity )
                goto LABEL_54;
              Instance = (DataManager_o *)UserServantEntity__getEventServantIgnoreEnd((UserServantEntity_o *)entity, 0);
              if ( Instance )
                break;
            }
            if ( (_DWORD)v16 == LODWORD(v13->max_length) - 1 )
            {
              v18 = BattleResultBondsComponent_TypeInfo;
              if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
                v18 = BattleResultBondsComponent_TypeInfo;
              }
              UnityEngine_PlayerPrefs__DeleteKey(v18->static_fields->GET_EXIST_SVT_KEY, 0);
              ActionExtensions__Call(*v8, 0);
            }
            max_length = v13->max_length;
            if ( (int)++v16 >= max_length )
              goto LABEL_29;
          }
          v20 = *(System_Action_o **)(v4 + 24);
          v21 = (EventServantEntity_o *)Instance;
          if ( !v20 )
          {
            v20 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
            System_Action___ctor(
              v20,
              (Il2CppObject *)v4,
              Method_TerminalSceneComponent___c__DisplayClass268_0__CheckNotificationDialog_b__0__,
              0);
            *(_QWORD *)(v4 + 24) = v20;
            sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 24), (int32_t)v20, v22, v23);
          }
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SvtCoinMaster___);
          if ( entity )
          {
            v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
            Instance = (DataManager_o *)UserServantEntity__getSvtId((UserServantEntity_o *)entity, 0);
            if ( v24 )
            {
              Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            v24,
                                            &v38,
                                            (int32_t)Instance,
                                            (const MethodInfo_33A10EC *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !v38 )
                  goto LABEL_54;
                if ( SHIDWORD(v38[1].klass) >= 1 )
                {
                  v25 = sub_1C372A4(TerminalSceneComponent___c__DisplayClass268_1_TypeInfo);
                  TerminalSceneComponent___c__DisplayClass268_1___ctor(
                    (TerminalSceneComponent___c__DisplayClass268_1_o *)v25,
                    0);
                  if ( !v25 )
                    goto LABEL_54;
                  *(_QWORD *)(v25 + 24) = v4;
                  sub_1C36FFC((CGThumbnailListItem_o *)(v25 + 24), v4, v26, v27);
                  v28 = sub_1C37100(GetSvtCoin___TypeInfo, 1);
                  v29 = sub_1C372A4(GetSvtCoin_TypeInfo);
                  GetSvtCoin___ctor((GetSvtCoin_o *)v29, 0);
                  v30 = v38;
                  if ( !v38 )
                    goto LABEL_54;
                  if ( !v29 )
                    goto LABEL_54;
                  *(_DWORD *)(v29 + 16) = v38[1].klass;
                  *(int32x2_t *)(v29 + 20) = vrev64_s32(*(int32x2_t *)((char *)&v30[1].klass + 4));
                  if ( !v28 )
                    goto LABEL_54;
                  Instance = (DataManager_o *)sub_1C37194(v29, *(_QWORD *)(*(_QWORD *)v28 + 64LL));
                  if ( !Instance )
                  {
                    v37 = sub_1C372D8(0);
                    sub_1C37180(v37, 0);
                  }
                  if ( !*(_DWORD *)(v28 + 24) )
LABEL_55:
                    sub_1C372BC(Instance);
                  *(_QWORD *)(v28 + 32) = v29;
                  sub_1C36FFC((CGThumbnailListItem_o *)(v28 + 32), v29, v31, v32);
                  *(_QWORD *)(v25 + 16) = v28;
                  sub_1C36FFC((CGThumbnailListItem_o *)(v25 + 16), v28, v33, v34);
                  v20 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
                  System_Action___ctor(
                    v20,
                    (Il2CppObject *)v25,
                    Method_TerminalSceneComponent___c__DisplayClass268_1__CheckNotificationDialog_b__1__,
                    0);
                }
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v35 = LocalizationManager__Get((System_String_o *)StringLiteral_12440/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, 0);
              v36 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              Instance = (DataManager_o *)EventServantEntity__GetGetMessage(v21, 0);
              if ( v36 )
              {
                CommonUI__OpenNotificationDialog(
                  (CommonUI_o *)v36,
                  v35,
                  (System_String_o *)Instance,
                  v20,
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
                return;
              }
            }
          }
LABEL_54:
          sub_1C372B4(Instance);
        }
      }
    }
LABEL_29:
    v19 = BattleResultBondsComponent_TypeInfo;
    if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
      v19 = BattleResultBondsComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__DeleteKey(v19->static_fields->GET_EXIST_SVT_KEY, 0);
  }
  ActionExtensions__Call(*v8, 0);
}


void TerminalSceneComponent__CheckOnTerminalMap(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  EventTutorialMaster__CheckTutorial(0, 98, callback, 0, 0, 0, 0, 0);
}


void TerminalSceneComponent__CheckOpenCampaignDirectBonus(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  char *mTerminalList; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Action_o **v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  _BOOL4 v12; // w27
  void *v13; // x22
  bool IsBlankEarthAction; // w23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  TerminalSceneComponent___c_c *v17; // x8
  char *v18; // x24
  System_Action_object__o *_9__257_0; // x25
  Il2CppObject *v20; // x26
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Action_object__o *v26; // x25
  Il2CppObject *v27; // x26
  CGThumbnailListItem_o *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Action_object__o *v31; // x25
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  ActionChain_o *v34; // x21
  const MethodInfo *v35; // x2
  System_Collections_IEnumerator_o *v36; // x0

  if ( (byte_4C45379 & 1) == 0 )
  {
    sub_1C37058(&ActionChain_TypeInfo);
    sub_1C37058(&System_Action_Action____TypeInfo);
    sub_1C37058(&System_Action_Action__TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent___c__CheckOpenCampaignDirectBonus_b__257_0__);
    sub_1C37058(&Method_TerminalSceneComponent___c__CheckOpenCampaignDirectBonus_b__257_1__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass257_0__CheckOpenCampaignDirectBonus_b__2__);
    sub_1C37058(&TerminalSceneComponent___c__DisplayClass257_0_TypeInfo);
    sub_1C37058(&TerminalSceneComponent___c_TypeInfo);
    byte_4C45379 = 1;
  }
  v5 = sub_1C372A4(TerminalSceneComponent___c__DisplayClass257_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass257_0___ctor((TerminalSceneComponent___c__DisplayClass257_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_37;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = callback;
  v9 = (System_Action_o **)(v5 + 24);
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v10, v11);
  mTerminalList = (char *)this->fields.mTerminalList;
  this->fields._IsPlayingCampaignDirectBonus_k__BackingField = 1;
  if ( !mTerminalList )
    goto LABEL_37;
  if ( ScrTerminalListTop__CheckTerminalTopEffect((ScrTerminalListTop_o *)mTerminalList, 0) )
  {
    mTerminalList = (char *)this->fields.mTerminalList;
    if ( !mTerminalList )
      goto LABEL_37;
    v12 = !ScrTerminalListTop__get_IsActiveBlankEarth((ScrTerminalListTop_o *)mTerminalList, 0);
  }
  else
  {
    v12 = 0;
  }
  mTerminalList = (char *)this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_37;
  mTerminalList = (char *)ScrTerminalListTop__GetCurrentLoginEntity((ScrTerminalListTop_o *)mTerminalList, 0);
  if ( !this->fields.mTerminalList )
    goto LABEL_37;
  v13 = mTerminalList;
  IsBlankEarthAction = ScrTerminalListTop__IsBlankEarthAction(this->fields.mTerminalList, 0);
  mTerminalList = (char *)sub_1C37100(System_Action_Action____TypeInfo, 3);
  v17 = TerminalSceneComponent___c_TypeInfo;
  v18 = mTerminalList;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v17 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__257_0 = (System_Action_object__o *)v17->static_fields->__9__257_0;
  if ( !_9__257_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = TerminalSceneComponent___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__257_0 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
    System_Action_object____ctor(
      _9__257_0,
      v20,
      Method_TerminalSceneComponent___c__CheckOpenCampaignDirectBonus_b__257_0__,
      0);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__257_0 = (struct System_Action_Action__o *)_9__257_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__257_0, (int32_t)_9__257_0, v22, v23);
  }
  if ( !v18 )
LABEL_37:
    sub_1C372B4(mTerminalList);
  if ( !*((_DWORD *)v18 + 6) )
    goto LABEL_38;
  *((_QWORD *)v18 + 4) = _9__257_0;
  sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 32), (int32_t)_9__257_0, v15, v16);
  mTerminalList = (char *)TerminalSceneComponent___c_TypeInfo;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    mTerminalList = (char *)TerminalSceneComponent___c_TypeInfo;
  }
  v26 = *(System_Action_object__o **)(*((_QWORD *)mTerminalList + 23) + 144LL);
  if ( !v26 )
  {
    if ( !*((_DWORD *)mTerminalList + 56) )
    {
      j_il2cpp_runtime_class_init_0(mTerminalList);
      mTerminalList = (char *)TerminalSceneComponent___c_TypeInfo;
    }
    v27 = (Il2CppObject *)**((_QWORD **)mTerminalList + 23);
    v26 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
    System_Action_object____ctor(
      v26,
      v27,
      Method_TerminalSceneComponent___c__CheckOpenCampaignDirectBonus_b__257_1__,
      0);
    v28 = (CGThumbnailListItem_o *)TerminalSceneComponent___c_TypeInfo->static_fields;
    v28[1].klass = (CGThumbnailListItem_c *)v26;
    sub_1C36FFC(v28 + 1, (int32_t)v26, v29, v30);
  }
  if ( *((_DWORD *)v18 + 6) <= 1u
    || (*((_QWORD *)v18 + 5) = v26,
        sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 40), (int32_t)v26, v24, v25),
        v31 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo),
        System_Action_object____ctor(
          v31,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent___c__DisplayClass257_0__CheckOpenCampaignDirectBonus_b__2__,
          0),
        *((_DWORD *)v18 + 6) <= 2u) )
  {
LABEL_38:
    sub_1C372BC(mTerminalList);
  }
  *((_QWORD *)v18 + 6) = v31;
  sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 48), (int32_t)v31, v32, v33);
  v34 = (ActionChain_o *)sub_1C372A4(ActionChain_TypeInfo);
  ActionChain___ctor_49040972(v34, (System_Action_Action__array *)v18, 0);
  if ( !v12 && v13 == 0 && !IsBlankEarthAction )
  {
    if ( v34 )
    {
      ChainableActionBase__Execute((ChainableActionBase_o *)v34, 0);
      return;
    }
    goto LABEL_37;
  }
  if ( !v13 && v12 )
  {
    v36 = TerminalSceneComponent__CoWaitTerminalTopEffectEnd(this, v34, v35);
LABEL_35:
    UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v36, 0);
    return;
  }
  if ( IsBlankEarthAction )
  {
    v36 = TerminalSceneComponent__CoWaitBlankEarthActionEnd(this, v34, v35);
    goto LABEL_35;
  }
  this->fields._IsPlayingCampaignDirectBonus_k__BackingField = 0;
  ActionExtensions__Call(*v9, 0);
}


bool TerminalSceneComponent__CheckPlayChapterStart(
        TerminalSceneComponent_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v6; // x20
  int32_t StartType; // w0
  int64_t targetId; // x19

  if ( (byte_4C4536E & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4536E = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Instance, warId, 0);
  if ( !WarEntityByWarID )
    return (char)WarEntityByWarID;
  v6 = WarEntityByWarID;
  StartType = WarEntity__GetStartType(WarEntityByWarID, 0);
  if ( StartType != 2 )
  {
    if ( StartType != 1 )
      goto LABEL_10;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( TerminalPramsManager__IsWarStartedId(warId, 0) )
      goto LABEL_10;
LABEL_13:
    LOBYTE(WarEntityByWarID) = 1;
    return (char)WarEntityByWarID;
  }
  targetId = v6->fields.targetId;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_1C372B4(Instance);
  if ( !clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, targetId, 0, 0) )
    goto LABEL_13;
LABEL_10:
  LOBYTE(WarEntityByWarID) = 0;
  return (char)WarEntityByWarID;
}


void TerminalSceneComponent__CheckRewardPopupChain(
        TerminalSceneComponent_o *this,
        System_Action_o *afterChain,
        bool checkTutorialEnded,
        bool noExecuteCondition,
        const MethodInfo *method)
{
  __int64 v9; // x20
  void *Instance; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Action_o **v13; // x24
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  TerminalPramsManager_c *v16; // x0
  TerminalSceneComponent_o *CampaignDirectBonus; // x0
  const MethodInfo *v18; // x2
  __int64 v19; // x0
  Il2CppObject *mTerminalList; // x23
  __int64 v21; // x21
  System_Action_object__o *v22; // x22
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Action_object__o *v25; // x22
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Action_object__o *v28; // x22
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x24
  System_Action_object__o *v32; // x22
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  Il2CppObject *v35; // x24
  System_Action_object__o *v36; // x22
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  Il2CppObject *v39; // x24
  System_Action_object__o *v40; // x22
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  Il2CppObject *v43; // x24
  System_Action_object__o *v44; // x22
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  System_Action_object__o *v47; // x22
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  System_Action_object__o *v50; // x22
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  System_Action_object__o *v53; // x22
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  System_Action_object__o *v56; // x22
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  System_Action_object__o *v59; // x22
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  System_Action_object__o *v62; // x22
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  System_Action_object__o *v65; // x22
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  System_Action_object__o *v68; // x22
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  System_Action_object__o *v71; // x22
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  Il2CppObject *v74; // x24
  System_Action_object__o *v75; // x22
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  System_Action_object__o *v80; // x22
  Il2CppObject *v81; // x23
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  System_Action_object__o *v85; // x22
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  System_Action_object__o *v88; // x19
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  ActionChain_o *v91; // x19
  __int64 v92; // x21
  System_Action_o *v93; // x22
  int32_t v94; // w2
  const MethodInfo *v95; // x3

  if ( (byte_4C45377 & 1) == 0 )
  {
    sub_1C37058(&ActionChain_TypeInfo);
    sub_1C37058(&System_Action___TypeInfo);
    sub_1C37058(&System_Action_Action____TypeInfo);
    sub_1C37058(&System_Action_Action__TypeInfo);
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CommonUI_StartLoginMessages__);
    sub_1C37058(&Method_CommonUI_StartServantEventJoinLeaveNotification__);
    sub_1C37058(&Method_ScrTerminalListTop_CheckLimitCountUnSealQuestOpen__);
    sub_1C37058(&Method_ScrTerminalListTop_ShowTerminalMessagesDialogue__);
    sub_1C37058(&Method_ScrTerminalListTop_ShowTerminalTransitionMessagesDialogue__);
    sub_1C37058(&Method_ScrTerminalListTop_StartShowWarClearReward__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent_CheckAfterQuestClearDialog__);
    sub_1C37058(&Method_TerminalSceneComponent_CheckExchangeDialogTheFree__);
    sub_1C37058(&Method_TerminalSceneComponent_CheckExchangeDialogTheReturn__);
    sub_1C37058(&Method_TerminalSceneComponent_CheckMasterMissionReset__);
    sub_1C37058(&Method_TerminalSceneComponent_CheckNotificationDialog__);
    sub_1C37058(&Method_TerminalSceneComponent_CheckOnTerminalMap__);
    sub_1C37058(&Method_TerminalSceneComponent_CheckSaveRouteSelect__);
    sub_1C37058(&Method_TerminalSceneComponent_CheckSpecialAscensionTutorial__);
    sub_1C37058(&Method_TerminalSceneComponent_CheckTutorialOnTerminalAfterFreeExchangeDialog__);
    sub_1C37058(&Method_TerminalSceneComponent_CheckTutorialOnTerminal__);
    sub_1C37058(&TutorialFlag_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__255_2__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass255_0__CheckRewardPopupChain_b__0__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass255_0__CheckRewardPopupChain_b__1__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass255_0__CheckRewardPopupChain_b__3__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass255_0__CheckRewardPopupChain_b__4__);
    sub_1C37058(&TerminalSceneComponent___c__DisplayClass255_0_TypeInfo);
    sub_1C37058(&TerminalSceneComponent___c_TypeInfo);
    byte_4C45377 = 1;
  }
  v9 = sub_1C372A4(TerminalSceneComponent___c__DisplayClass255_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass255_0___ctor((TerminalSceneComponent___c__DisplayClass255_0_o *)v9, 0);
  if ( !v9 )
    goto LABEL_55;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 24) = afterChain;
  v13 = (System_Action_o **)(v9 + 24);
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 24), (int32_t)afterChain, v14, v15);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FFAF )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FFAF = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  if ( v16->static_fields->_IsTransFromOrdealCall_k__BackingField )
  {
    ActionExtensions__Call(*v13, 0);
    return;
  }
  if ( checkTutorialEnded )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_40427704(102, 0) )
      goto LABEL_50;
  }
  if ( noExecuteCondition )
  {
LABEL_50:
    ActionExtensions__Call(*v13, 0);
    goto LABEL_51;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_55;
  CampaignDirectBonus = (TerminalSceneComponent_o *)CommonUI__get_CampaignDirectBonus((CommonUI_o *)Instance, 0);
  TerminalSceneComponent__SaveCampaignDirectBonusData(
    CampaignDirectBonus,
    (CommonUI_CampaignDirectBonusData_array *)CampaignDirectBonus,
    v18);
  v19 = sub_1C37100(System_Action_Action____TypeInfo, 20);
  mTerminalList = (Il2CppObject *)this->fields.mTerminalList;
  v21 = v19;
  v22 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v22, mTerminalList, Method_ScrTerminalListTop_StartShowWarClearReward__, 0);
  if ( !v21 )
    goto LABEL_55;
  if ( !*(_DWORD *)(v21 + 24) )
    goto LABEL_54;
  *(_QWORD *)(v21 + 32) = v22;
  sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 32), (int32_t)v22, v23, v24);
  v25 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v25, (Il2CppObject *)this, Method_TerminalSceneComponent_CheckAfterQuestClearDialog__, 0);
  if ( *(_DWORD *)(v21 + 24) <= 1u )
    goto LABEL_54;
  *(_QWORD *)(v21 + 40) = v25;
  sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 40), (int32_t)v25, v26, v27);
  v28 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v28,
    (Il2CppObject *)v9,
    Method_TerminalSceneComponent___c__DisplayClass255_0__CheckRewardPopupChain_b__0__,
    0);
  if ( *(_DWORD *)(v21 + 24) <= 2u )
    goto LABEL_54;
  *(_QWORD *)(v21 + 48) = v28;
  sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 48), (int32_t)v28, v29, v30);
  v31 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v32 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v32, v31, Method_CommonUI_StartServantEventJoinLeaveNotification__, 0);
  if ( *(_DWORD *)(v21 + 24) <= 3u )
    goto LABEL_54;
  *(_QWORD *)(v21 + 56) = v32;
  sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 56), (int32_t)v32, v33, v34);
  v35 = (Il2CppObject *)this->fields.mTerminalList;
  v36 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v36, v35, Method_ScrTerminalListTop_ShowTerminalMessagesDialogue__, 0);
  if ( *(_DWORD *)(v21 + 24) <= 4u )
    goto LABEL_54;
  *(_QWORD *)(v21 + 64) = v36;
  sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 64), (int32_t)v36, v37, v38);
  v39 = (Il2CppObject *)this->fields.mTerminalList;
  v40 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v40, v39, Method_ScrTerminalListTop_CheckLimitCountUnSealQuestOpen__, 0);
  if ( *(_DWORD *)(v21 + 24) <= 5u )
    goto LABEL_54;
  *(_QWORD *)(v21 + 72) = v40;
  sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 72), (int32_t)v40, v41, v42);
  v43 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v44 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v44, v43, Method_CommonUI_StartLoginMessages__, 0);
  if ( *(_DWORD *)(v21 + 24) <= 6u )
    goto LABEL_54;
  *(_QWORD *)(v21 + 80) = v44;
  sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 80), (int32_t)v44, v45, v46);
  v47 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v47,
    (Il2CppObject *)v9,
    Method_TerminalSceneComponent___c__DisplayClass255_0__CheckRewardPopupChain_b__1__,
    0);
  if ( *(_DWORD *)(v21 + 24) <= 7u )
    goto LABEL_54;
  *(_QWORD *)(v21 + 88) = v47;
  sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 88), (int32_t)v47, v48, v49);
  v50 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v50,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckSpecialAscensionTutorial__,
    0);
  if ( *(_DWORD *)(v21 + 24) <= 8u )
    goto LABEL_54;
  *(_QWORD *)(v21 + 96) = v50;
  sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 96), (int32_t)v50, v51, v52);
  v53 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v53, (Il2CppObject *)this, Method_TerminalSceneComponent_CheckOnTerminalMap__, 0);
  if ( *(_DWORD *)(v21 + 24) <= 9u )
    goto LABEL_54;
  *(_QWORD *)(v21 + 104) = v53;
  sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 104), (int32_t)v53, v54, v55);
  v56 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v56, (Il2CppObject *)this, Method_TerminalSceneComponent_CheckTutorialOnTerminal__, 0);
  if ( *(_DWORD *)(v21 + 24) <= 0xAu )
    goto LABEL_54;
  *(_QWORD *)(v21 + 112) = v56;
  sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 112), (int32_t)v56, v57, v58);
  v59 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v59, (Il2CppObject *)this, Method_TerminalSceneComponent_CheckNotificationDialog__, 0);
  if ( *(_DWORD *)(v21 + 24) <= 0xBu )
    goto LABEL_54;
  *(_QWORD *)(v21 + 120) = v59;
  sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 120), (int32_t)v59, v60, v61);
  v62 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v62, (Il2CppObject *)this, Method_TerminalSceneComponent_CheckSaveRouteSelect__, 0);
  if ( *(_DWORD *)(v21 + 24) <= 0xCu )
    goto LABEL_54;
  *(_QWORD *)(v21 + 128) = v62;
  sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 128), (int32_t)v62, v63, v64);
  v65 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v65, (Il2CppObject *)this, Method_TerminalSceneComponent_CheckExchangeDialogTheFree__, 0);
  if ( *(_DWORD *)(v21 + 24) <= 0xDu )
    goto LABEL_54;
  *(_QWORD *)(v21 + 136) = v65;
  sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 136), (int32_t)v65, v66, v67);
  v68 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v68,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckExchangeDialogTheReturn__,
    0);
  if ( *(_DWORD *)(v21 + 24) <= 0xEu )
    goto LABEL_54;
  *(_QWORD *)(v21 + 144) = v68;
  sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 144), (int32_t)v68, v69, v70);
  v71 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v71,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckTutorialOnTerminalAfterFreeExchangeDialog__,
    0);
  if ( *(_DWORD *)(v21 + 24) <= 0xFu )
    goto LABEL_54;
  *(_QWORD *)(v21 + 152) = v71;
  sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 152), (int32_t)v71, v72, v73);
  v74 = (Il2CppObject *)this->fields.mTerminalList;
  v75 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v75, v74, Method_ScrTerminalListTop_ShowTerminalTransitionMessagesDialogue__, 0);
  if ( *(_DWORD *)(v21 + 24) <= 0x10u )
    goto LABEL_54;
  *(_QWORD *)(v21 + 160) = v75;
  sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 160), (int32_t)v75, v76, v77);
  Instance = TerminalSceneComponent___c_TypeInfo;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    Instance = TerminalSceneComponent___c_TypeInfo;
  }
  v80 = *(System_Action_object__o **)(*((_QWORD *)Instance + 23) + 120LL);
  if ( !v80 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = TerminalSceneComponent___c_TypeInfo;
    }
    v81 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v80 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
    System_Action_object____ctor(v80, v81, Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__255_2__, 0);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__255_2 = (struct System_Action_Action__o *)v80;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__255_2, (int32_t)v80, v83, v84);
  }
  if ( *(_DWORD *)(v21 + 24) <= 0x11u )
    goto LABEL_54;
  *(_QWORD *)(v21 + 168) = v80;
  sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 168), (int32_t)v80, v78, v79);
  v85 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v85, (Il2CppObject *)this, Method_TerminalSceneComponent_CheckMasterMissionReset__, 0);
  if ( *(_DWORD *)(v21 + 24) <= 0x12u )
    goto LABEL_54;
  *(_QWORD *)(v21 + 176) = v85;
  sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 176), (int32_t)v85, v86, v87);
  v88 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v88,
    (Il2CppObject *)v9,
    Method_TerminalSceneComponent___c__DisplayClass255_0__CheckRewardPopupChain_b__3__,
    0);
  if ( *(_DWORD *)(v21 + 24) <= 0x13u )
    goto LABEL_54;
  *(_QWORD *)(v21 + 184) = v88;
  sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 184), (int32_t)v88, v89, v90);
  v91 = (ActionChain_o *)sub_1C372A4(ActionChain_TypeInfo);
  ActionChain___ctor_49040972(v91, (System_Action_Action__array *)v21, 0);
  v92 = sub_1C37100(System_Action___TypeInfo, 1);
  v93 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v93,
    (Il2CppObject *)v9,
    Method_TerminalSceneComponent___c__DisplayClass255_0__CheckRewardPopupChain_b__4__,
    0);
  if ( !v92 )
    goto LABEL_55;
  if ( !*(_DWORD *)(v92 + 24) )
LABEL_54:
    sub_1C372BC(Instance);
  *(_QWORD *)(v92 + 32) = v93;
  sub_1C36FFC((CGThumbnailListItem_o *)(v92 + 32), (int32_t)v93, v94, v95);
  if ( !v91 || (Instance = ChainableActionBase__Final((ChainableActionBase_o *)v91, (System_Action_array *)v92, 0)) == 0 )
LABEL_55:
    sub_1C372B4(Instance);
  ChainableActionBase__Execute((ChainableActionBase_o *)Instance, 0);
LABEL_51:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__DeleteClearDatas(0);
}


void TerminalSceneComponent__CheckSaveRouteSelect(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x19
  Il2CppObject *Instance; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  NetworkManager_ResultCallbackFunc_o *v8; // x20
  System_Int32_array *routes; // [xsp+8h] [xbp-38h] BYREF
  int32_t phase; // [xsp+18h] [xbp-28h] BYREF
  int32_t questId; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4C4537F & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C37058(&Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&ScriptManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass264_0__CheckSaveRouteSelect_b__0__);
    sub_1C37058(&TerminalSceneComponent___c__DisplayClass264_0_TypeInfo);
    byte_4C4537F = 1;
  }
  v4 = sub_1C372A4(TerminalSceneComponent___c__DisplayClass264_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass264_0___ctor((TerminalSceneComponent___c__DisplayClass264_0_o *)v4, 0);
  if ( !v4 )
    goto LABEL_19;
  *(_QWORD *)(v4 + 16) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 16), (int32_t)callback, v6, v7);
  phase = -1;
  questId = -1;
  routes = 0;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( ScriptManager__GetSelectRouteArrayInCollection(&questId, &phase, &routes, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    if ( !Instance )
      goto LABEL_19;
    if ( QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, phase, 0) )
    {
      v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v8,
        (Il2CppObject *)v4,
        Method_TerminalSceneComponent___c__DisplayClass264_0__CheckSaveRouteSelect_b__0__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__getRequest_object_(
                   v8,
                   (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
      if ( Instance )
      {
        BattleRouteSelectRequest__beginRequest((BattleRouteSelectRequest_o *)Instance, questId, phase, routes, 0);
        return;
      }
LABEL_19:
      sub_1C372B4(Instance);
    }
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__ClearSelectRouteArray(0);
    ScriptManager__ClearSelectRouteArrayInCollection(0);
  }
  ActionExtensions__Call(*(System_Action_o **)(v4 + 16), 0);
}


void TerminalSceneComponent__CheckSpecialAscensionTutorial(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *v4; // x20
  struct ScrTerminalMap_o *mTerminalMap; // x8

  v4 = this;
  if ( (byte_4C45382 & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_1C37058(&CombineRootComponent_TypeInfo);
    byte_4C45382 = 1;
  }
  if ( !v4->fields.isTutorialAfter )
  {
    mTerminalMap = v4->fields.mTerminalMap;
    if ( !mTerminalMap || (this = (TerminalSceneComponent_o *)mTerminalMap->fields.dispRoot) == 0 )
      sub_1C372B4(this);
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0) )
      goto LABEL_11;
  }
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
  if ( CombineRootComponent__IsEnableSpecialAscension(0) )
  {
    v4->fields.isTutorialAfter = 0;
    EventTutorialMaster__CheckTutorial(0, 60, callback, 0, 0, 0, 0, 0);
  }
  else
  {
LABEL_11:
    ActionExtensions__Call(callback, 0);
  }
}


bool TerminalSceneComponent__CheckTutorial(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  bool v4; // w20
  TerminalPramsManager_c *v5; // x0
  int32_t FirstWarId; // w21
  TerminalPramsManager_c *v7; // x0
  Il2CppObject *v8; // x0
  clsQuestCheck_o *v9; // x21
  int32_t v10; // w0
  int32_t v11; // w0
  int32_t v12; // w0
  int32_t v13; // w0
  int32_t v14; // w8
  int32_t Value; // w21
  TerminalPramsManager_c *v16; // x0
  TerminalPramsManager_c *v18; // x0
  int32_t v19; // w1

  if ( (byte_4C4536B & 1) == 0 )
  {
    sub_1C37058(&OpeningMovieData_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&TutorialFlag_TypeInfo);
    sub_1C37058(&StringLiteral_13606/*"TUTORIAL_QUEST_ID1"*/);
    sub_1C37058(&StringLiteral_13607/*"TUTORIAL_QUEST_ID2"*/);
    sub_1C37058(&StringLiteral_13608/*"TUTORIAL_QUEST_ID3"*/);
    sub_1C37058(&StringLiteral_13609/*"TUTORIAL_QUEST_ID4"*/);
    byte_4C4536B = 1;
  }
  this->fields.mTutorialKind = 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40427704(102, 0) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__GetProgress(0) == 4 )
      return 0;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseTutorialNotificationDialogArrow(Instance, 0);
      this->fields.isTutorialAfter = 1;
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      TutorialFlag__CompleteProgress(0);
      return 0;
    }
LABEL_83:
    sub_1C372B4(Instance);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3F9BB )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F9BB = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  this->fields.mIsStart_LoginBonusWhiteBg = !v5->static_fields->_IsAutoResume_k__BackingField;
  if ( !byte_4C3D786 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4C3D786 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_4C3F898 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4C3F898 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_DispState_k__BackingField = 2;
  if ( !OpeningMovieData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo);
  FirstWarId = OpeningMovieData__GetFirstWarId(0);
  if ( !byte_4C3F89C )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F89C = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_WarId_k__BackingField = FirstWarId;
  if ( !byte_4C3F89B )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4C3F89B = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_SpotId_k__BackingField = -1;
  Instance = (CommonUI_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_83;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, 0);
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0);
  Instance = (CommonUI_o *)this->fields.mPlayerStatus;
  if ( !Instance )
    goto LABEL_83;
  ScrPlayerStatus__DisableAllBtn((ScrPlayerStatus_o *)Instance, 0);
  v8 = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  this->fields.mTutorialKind = 5;
  v9 = (clsQuestCheck_o *)v8;
  Instance = (CommonUI_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_13606/*"TUTORIAL_QUEST_ID1"*/, 0);
  if ( !v9 )
    goto LABEL_83;
  if ( !clsQuestCheck__IsQuestClear(v9, (int32_t)Instance, 0, 0) )
  {
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_13606/*"TUTORIAL_QUEST_ID1"*/, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3F896 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3F896 = 1;
    }
    v16 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v16 = TerminalPramsManager_TypeInfo;
    }
    v16->static_fields->_QuestId_k__BackingField = Value;
    Instance = (CommonUI_o *)this->fields.mTerminalList;
    if ( Instance )
    {
      ScrTerminalListTop__SelectedQuest((ScrTerminalListTop_o *)Instance, 0);
      return 1;
    }
    goto LABEL_83;
  }
  v10 = ConstantMaster__getValue((System_String_o *)StringLiteral_13607/*"TUTORIAL_QUEST_ID2"*/, 0);
  if ( !clsQuestCheck__IsQuestClear(v9, v10, 0, 0) )
  {
    v4 = 0;
    v14 = 1;
    goto LABEL_70;
  }
  v11 = ConstantMaster__getValue((System_String_o *)StringLiteral_13608/*"TUTORIAL_QUEST_ID3"*/, 0);
  if ( !clsQuestCheck__IsQuestClear(v9, v11, 0, 0) )
  {
    v4 = 0;
    v14 = 2;
    goto LABEL_70;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(1, 0) )
  {
    v4 = 0;
    v14 = 3;
    goto LABEL_70;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_40427704(101, 0) )
    goto LABEL_86;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(2, 0) )
  {
LABEL_86:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3F524 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3F524 = 1;
    }
    v18 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v18 = TerminalPramsManager_TypeInfo;
    }
    v18->static_fields->_SummonType_k__BackingField = 1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_83;
    v19 = 20;
LABEL_80:
    v4 = 1;
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v19, 1, 0, 0);
    return v4;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(3, 0) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_83;
    v19 = 40;
    goto LABEL_80;
  }
  v12 = ConstantMaster__getValue((System_String_o *)StringLiteral_13609/*"TUTORIAL_QUEST_ID4"*/, 0);
  v4 = 0;
  if ( clsQuestCheck__IsQuestClear(v9, v12, 0, 0) )
    return v4;
  v13 = ConstantMaster__getValue((System_String_o *)StringLiteral_13609/*"TUTORIAL_QUEST_ID4"*/, 0);
  if ( clsQuestCheck__mfGetQuestPhaseByQuestID(v9, v13, 0) <= 0 )
  {
    v4 = 0;
    v14 = 4;
LABEL_70:
    this->fields.mTutorialKind = v14;
    return v4;
  }
  return 0;
}


void TerminalSceneComponent__CheckTutorialOnTerminal(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct ScrTerminalMap_o *mTerminalMap; // x8
  _BOOL8 activeSelf; // x0
  const MethodInfo *v6; // x2

  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap || (this = (TerminalSceneComponent_o *)mTerminalMap->fields.dispRoot) == 0 )
    sub_1C372B4(this);
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
  if ( activeSelf )
  {
    ActionExtensions__Call(callback, 0);
  }
  else
  {
    TerminalSceneComponent__CheckConflictTutorialOnBlankEarth((TerminalSceneComponent_o *)activeSelf, 2, v6);
    EventTutorialMaster__CheckTutorial(0, 2, callback, 0, 0, 0, 0, 0);
  }
}


void TerminalSceneComponent__CheckTutorialOnTerminalAfterFreeExchangeDialog(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  TerminalSceneComponent__CheckConflictTutorialOnBlankEarth(this, 80, method);
  EventTutorialMaster__CheckTutorial(0, 80, callback, 0, 0, 0, 0, 0);
}


void TerminalSceneComponent__ClearTransitionInfo(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalTransitionInfo_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C45343 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&TerminalTransitionInfo_TypeInfo);
    byte_4C45343 = 1;
  }
  v3 = (TerminalTransitionInfo_o *)sub_1C372A4(TerminalTransitionInfo_TypeInfo);
  TerminalTransitionInfo___ctor(v3, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__TerminalTransitionInfoSave_SaveData(v3, 0);
  this->fields._TransitionInfo_k__BackingField = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._TransitionInfo_k__BackingField, 0, v4, v5);
}


System_Collections_IEnumerator_o *TerminalSceneComponent__CoWaitBlankEarthActionEnd(
        TerminalSceneComponent_o *this,
        ActionChain_o *openCampaignDirectBonus,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C4537B & 1) == 0 )
  {
    sub_1C37058(&TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__259_TypeInfo);
    byte_4C4537B = 1;
  }
  v5 = sub_1C372A4(TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__259_TypeInfo);
  TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__259___ctor(
    (TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__259_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 40) = openCampaignDirectBonus;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)openCampaignDirectBonus, v9, v10);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *TerminalSceneComponent__CoWaitTerminalTopEffectEnd(
        TerminalSceneComponent_o *this,
        ActionChain_o *openCampaignDirectBonus,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C4537A & 1) == 0 )
  {
    sub_1C37058(&TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__258_TypeInfo);
    byte_4C4537A = 1;
  }
  v5 = sub_1C372A4(TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__258_TypeInfo);
  TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__258___ctor(
    (TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__258_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 40) = openCampaignDirectBonus;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)openCampaignDirectBonus, v9, v10);
  return (System_Collections_IEnumerator_o *)v5;
}


void TerminalSceneComponent__CreateTransitionInfo(
        TerminalSceneComponent_o *this,
        TerminalTransitionInfo_o *info,
        const MethodInfo *method)
{
  TerminalTransitionInfo_o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x0

  if ( (byte_4C45342 & 1) == 0 )
  {
    sub_1C37058(&TerminalTransitionInfo_TypeInfo);
    byte_4C45342 = 1;
  }
  v5 = (TerminalTransitionInfo_o *)sub_1C372A4(TerminalTransitionInfo_TypeInfo);
  TerminalTransitionInfo___ctor(v5, 0);
  this->fields._TransitionInfo_k__BackingField = v5;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._TransitionInfo_k__BackingField, (int32_t)v5, v6, v7);
  TransitionInfo_k__BackingField = this->fields._TransitionInfo_k__BackingField;
  if ( !TransitionInfo_k__BackingField )
    sub_1C372B4(0);
  TerminalTransitionInfo__SetParameters(TransitionInfo_k__BackingField, info, 0);
}


void TerminalSceneComponent__EndAuto(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  EventTutorialMaster_EventTutorialArgs_o *v3; // x20
  TerminalPramsManager_c *v4; // x0
  QuestAfterAction_o *EventID; // x0
  TerminalPramsManager_c *v6; // x0
  System_Collections_Generic_IEnumerable_TSource__o *AvailableTutorialArray; // x20
  TerminalPramsManager_c *v8; // x0
  ScrPlayerStatus_o *mPlayerStatus; // x19

  if ( (byte_4C45354 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Any_EventTutorialEntity___);
    sub_1C37058(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C45354 = 1;
  }
  v3 = (EventTutorialMaster_EventTutorialArgs_o *)sub_1C372A4(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor(v3, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3D397 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D397 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  EventID = (QuestAfterAction_o *)WarMaster__getEventID(v4->static_fields->_WarId_k__BackingField, 0);
  if ( !v3 )
    goto LABEL_40;
  v3->fields.eventId = (int)EventID;
  v3->fields.openKind = 18;
  if ( !byte_4C3D397 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D397 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v3->fields.qId = v6->static_fields->_WarId_k__BackingField;
  AvailableTutorialArray = (System_Collections_Generic_IEnumerable_TSource__o *)EventTutorialMaster__GetAvailableTutorialArray(
                                                                                  v3,
                                                                                  0);
  if ( !byte_4C453C9 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C453C9 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  if ( v8->static_fields->mIsAutoOpenMasterMission )
  {
    if ( System_Linq_Enumerable__Any_object_(
           AvailableTutorialArray,
           (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_EventTutorialEntity___) )
    {
      v8 = TerminalPramsManager_TypeInfo;
    }
    else
    {
      mPlayerStatus = this->fields.mPlayerStatus;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C453CA )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C453CA = 1;
      }
      EventID = (QuestAfterAction_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        EventID = (QuestAfterAction_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !mPlayerStatus )
        goto LABEL_40;
      ScrPlayerStatus__OpenMasterMission(
        mPlayerStatus,
        0,
        HIDWORD(EventID->fields.lastDispSpot[2].fields.mStateEndAct),
        0);
      if ( !byte_4C3CF08 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3CF08 = 1;
      }
      v8 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v8 = TerminalPramsManager_TypeInfo;
      }
      v8->static_fields->_MasterMissionTargetType_k__BackingField = -1;
    }
  }
  if ( !v8->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v8);
  TerminalPramsManager__AutoOff(0);
  EventID = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !EventID )
    goto LABEL_40;
  if ( QuestAfterAction__IsExistTerminalTransition(EventID, 0) )
  {
    EventID = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( EventID )
    {
      QuestAfterAction__Clear(EventID, 0);
      return;
    }
LABEL_40:
    sub_1C372B4(EventID);
  }
}


float TerminalSceneComponent__FSMenuOffsetX(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C45335 & 1) == 0 )
  {
    sub_1C37058(&FSUtility_TypeInfo);
    byte_4C45335 = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  return FSUtility__GetOffsetX(54.0, 0, 0);
}


float TerminalSceneComponent__FSMenuOffsetY(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  return 33.0;
}


float TerminalSceneComponent__FSRatioNormX(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int32_t width; // w19
  float v3; // s0
  bool v4; // nf
  float result; // s0

  width = UnityEngine_Screen__get_width(0);
  v3 = (float)width / (float)UnityEngine_Screen__get_height(0);
  v4 = v3 < 2.1444;
  result = (float)(fminf(v3, 2.3333) + -2.1444) / 0.18889;
  if ( v4 )
    return 0.0;
  return result;
}


float TerminalSceneComponent__FSRatioNormY(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int32_t width; // w19
  float v3; // s0
  bool v4; // nf
  float result; // s0

  width = UnityEngine_Screen__get_width(0);
  v3 = (float)width / (float)UnityEngine_Screen__get_height(0);
  v4 = v3 < 1.8333;
  result = (float)(fminf(v3, 2.3333) + -1.8333) / 0.5;
  if ( v4 )
    return 0.0;
  return result;
}


UnityEngine_Vector2_o TerminalSceneComponent__FSSpotArrowPosLerp(
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


UnityEngine_Rect_o TerminalSceneComponent__FSSpotArrowRectLerp(
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


void TerminalSceneComponent__FadeInAndTriggerEventEffects(
        TerminalSceneComponent_o *this,
        float fadeTime,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x20
  AvalonSceneManager_o *Instance; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  struct ScrTerminalListTop_o *mTerminalList; // x8
  int32_t v17; // w1
  System_Action_o *v18; // x2
  Il2CppClass *klass; // x8
  Il2CppClass *v20; // x8
  Il2CppClass *v21; // x8
  Il2CppClass *v22; // x8
  const char *namespaze; // x22
  _BOOL8 IsNullOrEmpty; // x0
  int32_t v25; // w23
  int32_t v26; // w24
  SceneJumpInfo_o *v27; // x22
  TerminalPramsManager_c *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  TerminalPramsManager_c *v31; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  TerminalPramsManager_c *v33; // x0
  int32_t WarId_k__BackingField; // w22
  _BOOL8 IsGrandQuestWarId; // x0
  const MethodInfo *v36; // x2
  ScrTerminalMap_o *mTerminalMap; // x22
  int32_t monitor_high; // w23
  System_String_o *MapModelEntryAnimationName; // x22
  TerminalPramsManager_c *v40; // x0
  Il2CppObject *v41; // x0
  float v42; // s8
  CommonUI_o *v43; // x19
  System_Action_o *v44; // x21
  __int64 v45; // x19
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  Il2CppObject *v48; // x20
  System_Action_o *v49; // x21
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  Il2CppObject *v52; // x20
  System_Action_o *v53; // x21
  CommonUI_o *v54; // x21
  ScrTerminalMap_o *v55; // x19
  System_Action_o *v56; // x21

  if ( (byte_4C45356 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&SceneJumpInfo_TypeInfo);
    sub_1C37058(&ScrTerminalListTop_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass202_0__FadeInAndTriggerEventEffects_b__0__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass202_0__FadeInAndTriggerEventEffects_b__1__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass202_0__FadeInAndTriggerEventEffects_b__4__);
    sub_1C37058(&TerminalSceneComponent___c__DisplayClass202_0_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass202_1__FadeInAndTriggerEventEffects_b__2__);
    sub_1C37058(&TerminalSceneComponent___c__DisplayClass202_1_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C45356 = 1;
  }
  v9 = sub_1C372A4(TerminalSceneComponent___c__DisplayClass202_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass202_0___ctor((TerminalSceneComponent___c__DisplayClass202_0_o *)v9, 0);
  if ( !v9 )
    goto LABEL_109;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 32) = callback;
  *(_DWORD *)(v9 + 24) = eventId;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)callback, v13, v14);
  *(float *)(v9 + 40) = fadeTime;
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_109;
  v17 = *(_DWORD *)(v9 + 24);
  if ( mTerminalList->fields.isBackFromBlankEarthMap )
  {
    v18 = *(System_Action_o **)(v9 + 32);
LABEL_7:
    TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(this, v17, v18, v15);
    return;
  }
  Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( v17 >= 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C40401 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C40401 = 1;
    }
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    }
    if ( Instance[1].fields.sendData[13].klass )
    {
      if ( !LODWORD(Instance[2].klass) )
        j_il2cpp_runtime_class_init_0(Instance);
      if ( !byte_4C40401 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C40401 = 1;
      }
      Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
      }
      klass = Instance[1].fields.sendData[13].klass;
      if ( !klass )
        goto LABEL_109;
      if ( LODWORD(klass->_1.name) == *(_DWORD *)(v9 + 24) )
      {
        if ( !LODWORD(Instance[2].klass) )
          j_il2cpp_runtime_class_init_0(Instance);
        if ( !byte_4C40401 )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C40401 = 1;
        }
        Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
        }
        v20 = Instance[1].fields.sendData[13].klass;
        if ( !v20 )
          goto LABEL_109;
        if ( HIDWORD(v20->_1.name) )
        {
          if ( !LODWORD(Instance[2].klass) )
            j_il2cpp_runtime_class_init_0(Instance);
          if ( !byte_4C40401 )
          {
            sub_1C37058(&TerminalPramsManager_TypeInfo);
            byte_4C40401 = 1;
          }
          Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
          }
          v21 = Instance[1].fields.sendData[13].klass;
          if ( v21 )
          {
            if ( HIDWORD(v21->_1.name) == 1 )
            {
              if ( !LODWORD(Instance[2].klass) )
                j_il2cpp_runtime_class_init_0(Instance);
              if ( !byte_4C40401 )
              {
                sub_1C37058(&TerminalPramsManager_TypeInfo);
                byte_4C40401 = 1;
              }
              Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
              }
              v22 = Instance[1].fields.sendData[13].klass;
              if ( !v22 )
                goto LABEL_109;
              namespaze = v22->_1.namespaze;
              if ( namespaze
                && *((int *)namespaze + 6) >= 1
                && !(IsNullOrEmpty = System_String__IsNullOrEmpty(*((System_String_o **)namespaze + 4), 0)) )
              {
                if ( !*((_DWORD *)namespaze + 6) )
                  sub_1C372BC(IsNullOrEmpty);
                v25 = System_Int32__Parse(*((System_String_o **)namespaze + 4), 0) + 1;
              }
              else
              {
                v25 = 0;
              }
              v26 = *(_DWORD *)(v9 + 24);
              v27 = (SceneJumpInfo_o *)sub_1C372A4(SceneJumpInfo_TypeInfo);
              SceneJumpInfo___ctor_41479180(v27, (System_String_o *)StringLiteral_1/*""*/, v26, v25, 0);
              Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !Instance )
                goto LABEL_109;
              AvalonSceneManager__transitionScene(Instance, 72, 1, (Il2CppObject *)v27, 0);
              Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
            }
            if ( !LODWORD(Instance[2].klass) )
              j_il2cpp_runtime_class_init_0(Instance);
            if ( !byte_4C40401 )
            {
              sub_1C37058(&TerminalPramsManager_TypeInfo);
              byte_4C40401 = 1;
            }
            v28 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v28 = TerminalPramsManager_TypeInfo;
            }
            Instance = (AvalonSceneManager_o *)v28->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
            if ( Instance )
            {
              SpecifiedSceneInfo__InitParameter((SpecifiedSceneInfo_o *)Instance, 0);
              if ( !byte_4C403E2 )
              {
                sub_1C37058(&TerminalPramsManager_TypeInfo);
                byte_4C403E2 = 1;
              }
              v31 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v31 = TerminalPramsManager_TypeInfo;
              }
              static_fields = v31->static_fields;
              static_fields->_SpecifiedChangeSceneInfo_k__BackingField = 0;
              sub_1C36FFC(
                (CGThumbnailListItem_o *)&static_fields->_SpecifiedChangeSceneInfo_k__BackingField,
                0,
                v29,
                v30);
              v17 = *(_DWORD *)(v9 + 24);
              v18 = *(System_Action_o **)(v9 + 32);
              goto LABEL_7;
            }
          }
LABEL_109:
          sub_1C372B4(Instance);
        }
      }
    }
  }
  if ( !LODWORD(Instance[2].klass) )
    j_il2cpp_runtime_class_init_0(Instance);
  if ( !byte_4C3D397 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D397 = 1;
  }
  v33 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v33 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v33->static_fields->_WarId_k__BackingField;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  IsGrandQuestWarId = ScrTerminalListTop__IsGrandQuestWarId(WarId_k__BackingField, 0);
  if ( IsGrandQuestWarId
    || !TerminalSceneComponent__IsEnabledMapOnEvent(
          (TerminalSceneComponent_o *)IsGrandQuestWarId,
          *(_DWORD *)(v9 + 24),
          v36) )
  {
    v45 = sub_1C372A4(TerminalSceneComponent___c__DisplayClass202_1_TypeInfo);
    TerminalSceneComponent___c__DisplayClass202_1___ctor((TerminalSceneComponent___c__DisplayClass202_1_o *)v45, 0);
    if ( !v45 )
      goto LABEL_109;
    *(_QWORD *)(v45 + 24) = v9;
    sub_1C36FFC((CGThumbnailListItem_o *)(v45 + 24), v9, v46, v47);
    v48 = *(Il2CppObject **)(v45 + 24);
    v49 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v49,
      v48,
      Method_TerminalSceneComponent___c__DisplayClass202_0__FadeInAndTriggerEventEffects_b__1__,
      0);
    *(_QWORD *)(v45 + 16) = v49;
    sub_1C36FFC((CGThumbnailListItem_o *)(v45 + 16), (int32_t)v49, v50, v51);
    v52 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    v53 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v53,
      (Il2CppObject *)v45,
      Method_TerminalSceneComponent___c__DisplayClass202_1__FadeInAndTriggerEventEffects_b__2__,
      0);
    if ( !v52 )
      goto LABEL_109;
    QuestAfterAction__LoadVoice((QuestAfterAction_o *)v52, v53, 0);
  }
  else
  {
    Instance = (AvalonSceneManager_o *)this->fields.mTerminalMap;
    if ( !Instance )
      goto LABEL_109;
    if ( !ScrTerminalMap__IsMapModel((ScrTerminalMap_o *)Instance, 0) )
      goto LABEL_97;
    mTerminalMap = this->fields.mTerminalMap;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3FA9B )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3FA9B = 1;
    }
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    }
    monitor_high = HIDWORD(Instance[1].fields.sendData[8].monitor);
    if ( !byte_4C3FA9C )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
      byte_4C3FA9C = 1;
    }
    if ( !LODWORD(Instance[2].klass) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    }
    if ( !mTerminalMap )
      goto LABEL_109;
    MapModelEntryAnimationName = ScrTerminalMap__GetMapModelEntryAnimationName(
                                   mTerminalMap,
                                   monitor_high,
                                   (int32_t)Instance[1].fields.sendData[9].klass,
                                   0);
    if ( !byte_4C403E4 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C403E4 = 1;
    }
    v40 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v40 = TerminalPramsManager_TypeInfo;
    }
    v40->static_fields->_MapModelClearQuestId_k__BackingField = 0;
    if ( !byte_4C403E5 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      v40 = TerminalPramsManager_TypeInfo;
      byte_4C403E5 = 1;
    }
    if ( !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      v40 = TerminalPramsManager_TypeInfo;
    }
    v40->static_fields->_MapModelClearPhaseCount_k__BackingField = 0;
    if ( !System_String__IsNullOrEmpty(MapModelEntryAnimationName, 0) )
    {
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v54 = (CommonUI_o *)Instance;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v54 )
        goto LABEL_109;
      CommonUI__maskFadein(v54, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
      v55 = this->fields.mTerminalMap;
      v56 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v56,
        (Il2CppObject *)v9,
        Method_TerminalSceneComponent___c__DisplayClass202_0__FadeInAndTriggerEventEffects_b__4__,
        0);
      if ( !v55 )
        goto LABEL_109;
      ScrTerminalMap__PlayMapModelEntryAnimation(v55, MapModelEntryAnimationName, v56, 0);
    }
    else
    {
LABEL_97:
      v41 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v42 = *(float *)(v9 + 40);
      v43 = (CommonUI_o *)v41;
      v44 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v44,
        (Il2CppObject *)v9,
        Method_TerminalSceneComponent___c__DisplayClass202_0__FadeInAndTriggerEventEffects_b__0__,
        0);
      if ( !v43 )
        goto LABEL_109;
      CommonUI__maskFadein(v43, v42, v44, 0);
    }
  }
}


void TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  DataManager_o *Instance; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Action_o **v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Action_o *v14; // x2
  Il2CppObject *v15; // x1
  struct TitleInfoControl_o *mTitleInfo; // x19
  Il2CppObject *v17; // x20
  System_Action_o *v18; // x21
  struct TitleInfoControl_o *v19; // x23
  TerminalPramsManager_c *v20; // x0
  System_Action_o *v21; // x19
  System_Action_o *v22; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C45359 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_EventUiMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass205_0__FadeInAndTriggerEventEffectsNext_b__0__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass205_0__FadeInAndTriggerEventEffectsNext_b__1__);
    sub_1C37058(&TerminalSceneComponent___c__DisplayClass205_0_TypeInfo);
    byte_4C45359 = 1;
  }
  entity = 0;
  v7 = sub_1C372A4(TerminalSceneComponent___c__DisplayClass205_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass205_0___ctor((TerminalSceneComponent___c__DisplayClass205_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_72;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = callback;
  v11 = (System_Action_o **)(v7 + 24);
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)callback, v12, v13);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_72;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_33A10EC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_68;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_72;
  if ( EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0) )
  {
    Instance = (DataManager_o *)this->fields.mTitleInfo;
    if ( !Instance )
      goto LABEL_72;
    TitleInfoControl__PlayEventTimeStateAnime((TitleInfoControl_o *)Instance, 0);
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_72:
    sub_1C372B4(Instance);
  if ( EventDetailEntity__isRaidDefeatCount((EventDetailEntity_o *)entity, 0) )
  {
    Instance = (DataManager_o *)this->fields.mTitleInfo;
    if ( Instance )
    {
      TitleInfoControl__PlayEventRaidDefeatedEffect((TitleInfoControl_o *)Instance, eventId, 0, *v11, 0);
      return;
    }
    goto LABEL_72;
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_72;
  if ( EventDetailEntity__IsSuperBoss((EventDetailEntity_o *)entity, 0) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_72;
    if ( !EventDetailEntity__isTower((EventDetailEntity_o *)entity, 0) )
    {
      Instance = (DataManager_o *)this->fields.mTitleInfo;
      if ( !Instance )
        goto LABEL_72;
      TitleInfoControl__CheckSuperBossHpAnim((TitleInfoControl_o *)Instance, *v11, 0);
      return;
    }
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_72;
  if ( !EventDetailEntity__IsSuperBoss((EventDetailEntity_o *)entity, 0) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_72;
    if ( EventDetailEntity__isTower((EventDetailEntity_o *)entity, 0) )
    {
      Instance = (DataManager_o *)this->fields.mTitleInfo;
      if ( !Instance )
        goto LABEL_72;
      v14 = *v11;
      v15 = entity;
LABEL_31:
      TitleInfoControl__EventTowerStart((TitleInfoControl_o *)Instance, (EventDetailEntity_o *)v15, v14, 0);
      return;
    }
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_72;
  if ( EventDetailEntity__IsSuperBoss((EventDetailEntity_o *)entity, 0) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_72;
    if ( EventDetailEntity__isTower((EventDetailEntity_o *)entity, 0) )
    {
      mTitleInfo = this->fields.mTitleInfo;
      v17 = entity;
      v18 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v18,
        (Il2CppObject *)v7,
        Method_TerminalSceneComponent___c__DisplayClass205_0__FadeInAndTriggerEventEffectsNext_b__0__,
        0);
      if ( !mTitleInfo )
        goto LABEL_72;
      Instance = (DataManager_o *)mTitleInfo;
      v15 = v17;
      v14 = v18;
      goto LABEL_31;
    }
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_72;
  Instance = (DataManager_o *)EventDetailEntity__IsGroupPoint((EventDetailEntity_o *)entity, 0);
  v19 = this->fields.mTitleInfo;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v19 )
      goto LABEL_72;
    TitleInfoControl__CheckEventPointGroupReward(this->fields.mTitleInfo, eventId, *v11, 0);
    v20 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v20 = TerminalPramsManager_TypeInfo;
    }
    if ( v20->static_fields->joinGroupId >= 1 )
    {
      Instance = (DataManager_o *)this->fields.mTitleInfo;
      if ( !Instance )
        goto LABEL_72;
      TitleInfoControl__vsGaugeEvent((TitleInfoControl_o *)Instance, eventId, 0);
    }
    return;
  }
  if ( !v19 )
    goto LABEL_72;
  if ( v19->fields.needPlayDailyPointItemEffect )
  {
    v21 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v21,
      (Il2CppObject *)v7,
      Method_TerminalSceneComponent___c__DisplayClass205_0__FadeInAndTriggerEventEffectsNext_b__1__,
      0);
    TitleInfoControl__UpdateDailyPointWithEffect(v19, v21, 0);
    return;
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_72;
  if ( EventDetailEntity__IsEventActivityPoint((EventDetailEntity_o *)entity, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventUiMaster___);
    if ( !Instance )
      goto LABEL_72;
    if ( !EventUiMaster__HasEntity((EventUiMaster_o *)Instance, eventId, 0) )
    {
      Instance = (DataManager_o *)this->fields.mTitleInfo;
      if ( !Instance )
        goto LABEL_72;
      TitleInfoControl__CheckEventPointGaugeAnim((TitleInfoControl_o *)Instance, (EventDetailEntity_o *)entity, *v11, 0);
      return;
    }
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_72;
  if ( EventDetailEntity__IsEventPanel((EventDetailEntity_o *)entity, 0) )
  {
    Instance = (DataManager_o *)this->fields.mTitleInfo;
    if ( !Instance )
      goto LABEL_72;
    TitleInfoControl__CheckEventSubmarineStatusAnim(
      (TitleInfoControl_o *)Instance,
      (EventDetailEntity_o *)entity,
      *v11,
      0);
    return;
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_72;
  if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)entity, 0) )
  {
    Instance = (DataManager_o *)this->fields.mTerminalMap;
    if ( !Instance )
      goto LABEL_72;
    if ( Instance[2].fields.datalist )
    {
      ScrTerminalMap__UpdateEventBoardGame((ScrTerminalMap_o *)Instance, *v11, 0);
      return;
    }
    v22 = *v11;
    goto LABEL_69;
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_72;
  if ( !EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)entity, 0) )
    goto LABEL_68;
  Instance = (DataManager_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_72;
  if ( !TitleInfoControl__IsPlayEventUIAnimation((TitleInfoControl_o *)Instance, 1, 0) )
  {
LABEL_68:
    v22 = *v11;
LABEL_69:
    ActionExtensions__Call(v22, 0);
    return;
  }
  Instance = (DataManager_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_72;
  TitleInfoControl__StartEventUIAnimation((TitleInfoControl_o *)Instance, 1, *v11, 0);
}


void TerminalSceneComponent__FadeinWorldDispNoneExecuteUnusedAssets(
        TerminalSceneComponent_o *this,
        bool isExecuteUnusedAssets,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  AvalonSceneManager_c *v7; // x0
  System_Collections_IEnumerator_o *v8; // x1

  if ( (byte_4C4534D & 1) == 0 )
  {
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    byte_4C4534D = 1;
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
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v8, 0);
}


void TerminalSceneComponent__Fadein_MapDisp(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  Il2CppObject *Instance; // x19
  AvalonSceneManager_c *v15; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21

  if ( (byte_4C45351 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass197_0__Fadein_MapDisp_b__0__);
    sub_1C37058(&TerminalSceneComponent___c__DisplayClass197_0_TypeInfo);
    byte_4C45351 = 1;
  }
  v7 = sub_1C372A4(TerminalSceneComponent___c__DisplayClass197_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_10;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = end_act;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)end_act, v11, v12);
  if ( this->fields._FirstFadeTime_k__BackingField > 0.0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v15 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
    v17 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v17,
      (Il2CppObject *)v7,
      Method_TerminalSceneComponent___c__DisplayClass197_0__Fadein_MapDisp_b__0__,
      0);
    if ( Instance )
    {
      CommonUI__maskFadeChangeColor((CommonUI_o *)Instance, 2, DEFAULT_FADE_TIME, v17, 0);
      return;
    }
LABEL_10:
    sub_1C372B4(v8);
  }
  TerminalSceneComponent__Fadein_MapDisp_Load(this, fade_time, *(System_Action_o **)(v7 + 24), v13);
}


void TerminalSceneComponent__Fadein_MapDisp_Load(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v7; // x20
  void *mTerminalMap; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  TerminalPramsManager_c *v14; // x0
  __int64 v15; // x8
  __int64 v16; // x8
  WarEntity_o *v17; // x21
  TerminalPramsManager_c *v18; // x0
  _BOOL4 isInvisibleConnectAndLoad; // w22
  TitleInfoControl_o *mTitleInfo; // x19
  System_Action_o *v21; // x22

  if ( (byte_4C45352 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass198_0__Fadein_MapDisp_Load_b__0__);
    sub_1C37058(&TerminalSceneComponent___c__DisplayClass198_0_TypeInfo);
    byte_4C45352 = 1;
  }
  v7 = sub_1C372A4(TerminalSceneComponent___c__DisplayClass198_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_32;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 32) = end_act;
  *(float *)(v7 + 24) = fade_time;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)end_act, v11, v12);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3EC65 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3EC65 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  if ( !v14->static_fields->_IsDispOnly_k__BackingField )
  {
    TerminalSceneComponent__EndAuto(this, v13);
    goto LABEL_22;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
  }
  mTerminalMap = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mTerminalMap = TerminalSceneComponent_TypeInfo;
  }
  v15 = **((_QWORD **)mTerminalMap + 23);
  if ( !v15 || (v16 = *(_QWORD *)(v15 + 264)) == 0 || (mTerminalMap = *(void **)(v16 + 552)) == 0 )
LABEL_32:
    sub_1C372B4(mTerminalMap);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mTerminalMap, 1, 0);
LABEL_22:
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_32;
  v17 = (WarEntity_o *)*((_QWORD *)mTerminalMap + 45);
  ScrTerminalMap__SetDisp((ScrTerminalMap_o *)mTerminalMap, 1, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FE39 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FE39 = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  isInvisibleConnectAndLoad = v18->static_fields->isInvisibleConnectAndLoad;
  mTerminalMap = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_32;
  CommonUI__SetLoadMode((CommonUI_o *)mTerminalMap, !isInvisibleConnectAndLoad, 0);
  mTitleInfo = this->fields.mTitleInfo;
  v21 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v7,
    Method_TerminalSceneComponent___c__DisplayClass198_0__Fadein_MapDisp_Load_b__0__,
    0);
  if ( !mTitleInfo )
    goto LABEL_32;
  TitleInfoControl__SetActiveEventInfo(mTitleInfo, v17, 32, v21, 0);
}


void TerminalSceneComponent__Fadein_MapDisp_Start(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 Instance; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct WarEntity_o *mWarEnt; // x1
  __int64 v18; // x22
  struct ScrTerminalMap_o *v19; // x8
  MapEntity_o *mMapEnt; // x23
  System_String_o *ActiveStateName; // x24
  bool v22; // w1
  System_String_o *PrioredBgmName; // x0
  const MethodInfo *v24; // x3
  TerminalPramsManager_c *v25; // x0
  struct ScrTerminalMap_o *v26; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  TerminalPramsManager_c *v28; // x0
  __int64 v29; // x21
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject **v32; // x22
  __int64 v33; // x8
  __int64 v34; // x8
  __int64 v35; // x8
  __int64 v36; // x8
  __int64 v37; // x8
  __int64 v38; // x8
  __int64 v39; // x0
  Il2CppObject *v40; // x24
  __int64 v41; // x20
  System_Action_object__o *v42; // x23
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  Il2CppObject *v45; // x23
  System_Action_object__o *v46; // x22
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  System_Action_object__o *v51; // x22
  Il2CppObject *v52; // x23
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  Il2CppObject *v56; // x24
  System_Action_object__o *v57; // x22
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  ActionChain_o *v60; // x22
  __int64 v61; // x20
  System_Action_o *v62; // x23
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  ChainableActionBase_o *v65; // x0
  System_Action_array *v66; // x1
  int32_t v67; // w21
  System_Action_o *v68; // x22
  const MethodInfo *v69; // x3
  struct ScrTerminalMap_o *v70; // x8
  struct MapControl_MapInfo_o *mMapInfo; // x8
  __int64 v72; // x22
  Il2CppObject *v73; // x24
  System_Action_object__o *v74; // x23
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  System_Action_object__o *v79; // x23
  Il2CppObject *v80; // x24
  struct TerminalSceneComponent___c_StaticFields *v81; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  System_Action_object__o *v86; // x23
  Il2CppObject *v87; // x24
  struct TerminalSceneComponent___c_StaticFields *v88; // x0
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  System_Action_object__o *v91; // x23
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  ActionChain_o *v94; // x20
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  System_Action_array *v97; // x22
  __int64 v98; // x1

  if ( (byte_4C45353 & 1) == 0 )
  {
    sub_1C37058(&ActionChain_TypeInfo);
    sub_1C37058(&System_Action___TypeInfo);
    sub_1C37058(&System_Action_Action____TypeInfo);
    sub_1C37058(&System_Action_Action__TypeInfo);
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CommonUI_StartLoginMessages__);
    sub_1C37058(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_QuestAfterAction_Play__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C37058(&SoundManager_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    sub_1C37058(&TutorialFlag_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__199_0__);
    sub_1C37058(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__199_1__);
    sub_1C37058(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__199_6__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass199_0__Fadein_MapDisp_Start_b__2__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass199_0__Fadein_MapDisp_Start_b__3__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass199_0__Fadein_MapDisp_Start_b__4__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass199_0__Fadein_MapDisp_Start_b__5__);
    sub_1C37058(&TerminalSceneComponent___c__DisplayClass199_0_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass199_1__Fadein_MapDisp_Start_b__7__);
    sub_1C37058(&TerminalSceneComponent___c__DisplayClass199_1_TypeInfo);
    sub_1C37058(&TerminalSceneComponent___c_TypeInfo);
    sub_1C37058(&StringLiteral_3292/*"CAPTER INIT"*/);
    sub_1C37058(&StringLiteral_3291/*"CAPTER CREATE"*/);
    sub_1C37058(&StringLiteral_3293/*"CAPTER WAIT"*/);
    byte_4C45353 = 1;
  }
  v7 = sub_1C372A4(TerminalSceneComponent___c__DisplayClass199_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_165;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 40) = end_act;
  v11 = (__int64 *)(v7 + 40);
  *(float *)(v7 + 32) = fade_time;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 40), (int32_t)end_act, v12, v13);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_165;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_165;
  mWarEnt = mTerminalMap->fields.mWarEnt;
  *(_QWORD *)(v7 + 24) = mWarEnt;
  v18 = v7 + 24;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)mWarEnt, v14, v15);
  v19 = this->fields.mTerminalMap;
  if ( !v19 )
    goto LABEL_165;
  Instance = (__int64)this->fields.mTerminalList;
  if ( !Instance )
    goto LABEL_165;
  mMapEnt = v19->fields.mMapEnt;
  Instance = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_165;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)Instance, 0);
  v22 = System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3291/*"CAPTER CREATE"*/, 0)
     || System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3292/*"CAPTER INIT"*/, 0)
     || System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3293/*"CAPTER WAIT"*/, 0);
  Instance = (__int64)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_165;
  TitleInfoControl__setBackBtnSprite_39841600((TitleInfoControl_o *)Instance, v22, 0, 0, 0);
  Instance = (__int64)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_165;
  TitleInfoControl__FrameIn((TitleInfoControl_o *)Instance, 0, 0);
  MainMenuBar__FrameIn(0, 0);
  Instance = (__int64)this->fields.mPlayerStatus;
  if ( !Instance )
    goto LABEL_165;
  ScrPlayerStatus__FrameIn((ScrPlayerStatus_o *)Instance, 0, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_165;
  if ( *(_BYTE *)(Instance + 192) )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopBgm(0);
  }
  else
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3FFC0 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3FFC0 = 1;
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
        goto LABEL_165;
      PrioredBgmName = MapEntity__GetPrioredBgmName(mMapEnt, 0);
      TerminalSceneComponent__playBgm(this, PrioredBgmName, 0, v24);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FFC0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FFC0 = 1;
  }
  v25 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v25 = TerminalPramsManager_TypeInfo;
  }
  if ( v25->static_fields->_IsPlayScriptWithMap_k__BackingField )
  {
    Instance = (__int64)this->fields.mTerminalMap;
    if ( !Instance )
      goto LABEL_165;
    ScrTerminalMap__AllMaskStart((ScrTerminalMap_o *)Instance, 0, 1, 0);
    MainMenuBar__FrameOut(0, 0);
    Instance = (__int64)this->fields.mTitleInfo;
    if ( !Instance )
      goto LABEL_165;
    TitleInfoControl__FrameOut((TitleInfoControl_o *)Instance, 0, 0);
    Instance = (__int64)this->fields.mPlayerStatus;
    if ( !Instance )
      goto LABEL_165;
    ScrPlayerStatus__FrameOut((ScrPlayerStatus_o *)Instance, 1, 0);
    v25 = TerminalPramsManager_TypeInfo;
  }
  if ( !v25->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v25);
  if ( !byte_4C3EC65 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3EC65 = 1;
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
    if ( !byte_4C3FFAC )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3FFAC = 1;
    }
    Instance = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( *(_BYTE *)(*(_QWORD *)(Instance + 184) + 106LL) )
    {
      v26 = this->fields.mTerminalMap;
      if ( !v26 )
        goto LABEL_165;
      Instance = (__int64)v26->fields.spotMaskObj;
      if ( !Instance )
        goto LABEL_165;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      MainMenuBar__FrameOut(0, 0);
      Instance = (__int64)this->fields.mTitleInfo;
      if ( !Instance )
        goto LABEL_165;
      TitleInfoControl__FrameOut((TitleInfoControl_o *)Instance, 0, 0);
      Instance = (__int64)this->fields.mPlayerStatus;
      if ( !Instance )
        goto LABEL_165;
      ScrPlayerStatus__FrameOut((ScrPlayerStatus_o *)Instance, 1, 0);
      mTerminalList = this->fields.mTerminalList;
      if ( !mTerminalList )
        goto LABEL_165;
      Instance = (__int64)mTerminalList->fields.mQuestBoardListViewManager;
      if ( !Instance )
        goto LABEL_165;
      QuestBoardListViewManager__SetMode((QuestBoardListViewManager_o *)Instance, 4, 0, 0, 0, 0, 0);
      Instance = (__int64)TerminalPramsManager_TypeInfo;
    }
  }
  if ( !*(_DWORD *)(Instance + 224) )
    j_il2cpp_runtime_class_init_0(Instance);
  if ( !byte_4C3FFAC )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FFAC = 1;
  }
  v28 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v28 = TerminalPramsManager_TypeInfo;
  }
  if ( !v28->static_fields->_IsScriptDisp_k__BackingField )
  {
    if ( !v28->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v28);
    if ( !byte_4C3EC65 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3EC65 = 1;
    }
    Instance = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( *(_BYTE *)(*(_QWORD *)(Instance + 184) + 103LL) )
    {
      v29 = sub_1C372A4(TerminalSceneComponent___c__DisplayClass199_1_TypeInfo);
      TerminalSceneComponent___c__DisplayClass199_1___ctor((TerminalSceneComponent___c__DisplayClass199_1_o *)v29, 0);
      if ( v29 )
      {
        *(_QWORD *)(v29 + 24) = v7;
        v32 = (Il2CppObject **)(v29 + 24);
        sub_1C36FFC((CGThumbnailListItem_o *)(v29 + 24), v7, v30, v31);
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4C3CF06 )
        {
          sub_1C37058(&TerminalSceneComponent_TypeInfo);
          byte_4C3CF06 = 1;
        }
        Instance = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          Instance = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v33 = **(_QWORD **)(Instance + 184);
        if ( v33 )
        {
          v34 = *(_QWORD *)(v33 + 264);
          if ( v34 )
          {
            Instance = *(_QWORD *)(v34 + 552);
            if ( Instance )
            {
              *(_BYTE *)(v29 + 16) = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0);
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
              if ( Instance )
              {
                QuestAfterAction__Init((QuestAfterAction_o *)Instance, 0);
                Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                if ( Instance )
                {
                  QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)Instance, 1, 0);
                  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                  if ( Instance )
                  {
                    if ( QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0) )
                    {
                      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                      if ( !byte_4C3CF06 )
                      {
                        sub_1C37058(&TerminalSceneComponent_TypeInfo);
                        byte_4C3CF06 = 1;
                      }
                      Instance = (__int64)TerminalSceneComponent_TypeInfo;
                      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                        Instance = (__int64)TerminalSceneComponent_TypeInfo;
                      }
                      v35 = **(_QWORD **)(Instance + 184);
                      if ( !v35 )
                        goto LABEL_165;
                      v36 = *(_QWORD *)(v35 + 264);
                      if ( !v36 )
                        goto LABEL_165;
                      Instance = *(_QWORD *)(v36 + 552);
                      if ( !Instance )
                        goto LABEL_165;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
                    }
                    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    if ( !byte_4C3CF06 )
                    {
                      sub_1C37058(&TerminalSceneComponent_TypeInfo);
                      byte_4C3CF06 = 1;
                    }
                    Instance = (__int64)TerminalSceneComponent_TypeInfo;
                    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                      Instance = (__int64)TerminalSceneComponent_TypeInfo;
                    }
                    v37 = **(_QWORD **)(Instance + 184);
                    if ( v37 )
                    {
                      v38 = *(_QWORD *)(v37 + 264);
                      if ( v38 )
                      {
                        Instance = *(_QWORD *)(v38 + 552);
                        if ( Instance )
                        {
                          if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
                          {
                            Instance = (__int64)this->fields.mTerminalMap;
                            if ( !Instance )
                              goto LABEL_165;
                            ScrTerminalMap__AllMaskStart((ScrTerminalMap_o *)Instance, 0, 1, 0);
                          }
                          v39 = sub_1C37100(System_Action_Action____TypeInfo, 4);
                          v40 = *v32;
                          v41 = v39;
                          v42 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
                          System_Action_object____ctor(
                            v42,
                            v40,
                            Method_TerminalSceneComponent___c__DisplayClass199_0__Fadein_MapDisp_Start_b__4__,
                            0);
                          if ( v41 )
                          {
                            if ( *(_DWORD *)(v41 + 24) )
                            {
                              *(_QWORD *)(v41 + 32) = v42;
                              sub_1C36FFC((CGThumbnailListItem_o *)(v41 + 32), (int32_t)v42, v43, v44);
                              v45 = *v32;
                              v46 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
                              System_Action_object____ctor(
                                v46,
                                v45,
                                Method_TerminalSceneComponent___c__DisplayClass199_0__Fadein_MapDisp_Start_b__5__,
                                0);
                              if ( *(_DWORD *)(v41 + 24) > 1u )
                              {
                                *(_QWORD *)(v41 + 40) = v46;
                                sub_1C36FFC((CGThumbnailListItem_o *)(v41 + 40), (int32_t)v46, v47, v48);
                                Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
                                if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
                                  Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
                                }
                                v51 = *(System_Action_object__o **)(*(_QWORD *)(Instance + 184) + 16LL);
                                if ( !v51 )
                                {
                                  if ( !*(_DWORD *)(Instance + 224) )
                                  {
                                    j_il2cpp_runtime_class_init_0(Instance);
                                    Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
                                  }
                                  v52 = **(Il2CppObject ***)(Instance + 184);
                                  v51 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
                                  System_Action_object____ctor(
                                    v51,
                                    v52,
                                    Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__199_6__,
                                    0);
                                  static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
                                  static_fields->__9__199_6 = (struct System_Action_Action__o *)v51;
                                  sub_1C36FFC(
                                    (CGThumbnailListItem_o *)&static_fields->__9__199_6,
                                    (int32_t)v51,
                                    v54,
                                    v55);
                                }
                                if ( *(_DWORD *)(v41 + 24) > 2u )
                                {
                                  *(_QWORD *)(v41 + 48) = v51;
                                  sub_1C36FFC((CGThumbnailListItem_o *)(v41 + 48), (int32_t)v51, v49, v50);
                                  v56 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                                  v57 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
                                  System_Action_object____ctor(v57, v56, Method_QuestAfterAction_Play__, 0);
                                  if ( *(_DWORD *)(v41 + 24) > 3u )
                                  {
                                    *(_QWORD *)(v41 + 56) = v57;
                                    sub_1C36FFC((CGThumbnailListItem_o *)(v41 + 56), (int32_t)v57, v58, v59);
                                    v60 = (ActionChain_o *)sub_1C372A4(ActionChain_TypeInfo);
                                    ActionChain___ctor_49040972(v60, (System_Action_Action__array *)v41, 0);
                                    v61 = sub_1C37100(System_Action___TypeInfo, 1);
                                    v62 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
                                    System_Action___ctor(
                                      v62,
                                      (Il2CppObject *)v29,
                                      Method_TerminalSceneComponent___c__DisplayClass199_1__Fadein_MapDisp_Start_b__7__,
                                      0);
                                    if ( !v61 )
                                      goto LABEL_165;
                                    if ( *(_DWORD *)(v61 + 24) )
                                    {
                                      *(_QWORD *)(v61 + 32) = v62;
                                      sub_1C36FFC((CGThumbnailListItem_o *)(v61 + 32), (int32_t)v62, v63, v64);
                                      if ( !v60 )
                                        goto LABEL_165;
                                      v65 = (ChainableActionBase_o *)v60;
                                      v66 = (System_Action_array *)v61;
LABEL_127:
                                      Instance = (__int64)ChainableActionBase__Final(v65, v66, 0);
                                      if ( !Instance )
                                        goto LABEL_165;
                                      ChainableActionBase__Execute((ChainableActionBase_o *)Instance, 0);
                                      goto LABEL_136;
                                    }
                                  }
                                }
                              }
                            }
                            goto LABEL_166;
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
LABEL_165:
      sub_1C372B4(Instance);
    }
    if ( this->fields.mIsStart_LoginBonusWhiteBg )
    {
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      Instance = TutorialFlag__Get_40427704(102, 0);
      if ( (Instance & 1) != 0 && !this->fields.isTutorialAfter )
      {
        this->fields.mIsStart_LoginBonusWhiteBg = 0;
        Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !Instance )
          goto LABEL_165;
        CommonUI__SetupLoginResultData((CommonUI_o *)Instance, 0, 0);
        v72 = sub_1C37100(System_Action_Action____TypeInfo, 4);
        v73 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v74 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
        System_Action_object____ctor(v74, v73, Method_CommonUI_StartLoginMessages__, 0);
        if ( !v72 )
          goto LABEL_165;
        if ( *(_DWORD *)(v72 + 24) )
        {
          *(_QWORD *)(v72 + 32) = v74;
          sub_1C36FFC((CGThumbnailListItem_o *)(v72 + 32), (int32_t)v74, v75, v76);
          Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
          if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
            Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
          }
          v79 = *(System_Action_object__o **)(*(_QWORD *)(Instance + 184) + 24LL);
          if ( !v79 )
          {
            if ( !*(_DWORD *)(Instance + 224) )
            {
              j_il2cpp_runtime_class_init_0(Instance);
              Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
            }
            v80 = **(Il2CppObject ***)(Instance + 184);
            v79 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
            System_Action_object____ctor(
              v79,
              v80,
              Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__199_0__,
              0);
            v81 = TerminalSceneComponent___c_TypeInfo->static_fields;
            v81->__9__199_0 = (struct System_Action_Action__o *)v79;
            sub_1C36FFC((CGThumbnailListItem_o *)&v81->__9__199_0, (int32_t)v79, v82, v83);
          }
          if ( *(_DWORD *)(v72 + 24) > 1u )
          {
            *(_QWORD *)(v72 + 40) = v79;
            sub_1C36FFC((CGThumbnailListItem_o *)(v72 + 40), (int32_t)v79, v77, v78);
            Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
            if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
              Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
            }
            v86 = *(System_Action_object__o **)(*(_QWORD *)(Instance + 184) + 32LL);
            if ( !v86 )
            {
              if ( !*(_DWORD *)(Instance + 224) )
              {
                j_il2cpp_runtime_class_init_0(Instance);
                Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
              }
              v87 = **(Il2CppObject ***)(Instance + 184);
              v86 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
              System_Action_object____ctor(
                v86,
                v87,
                Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__199_1__,
                0);
              v88 = TerminalSceneComponent___c_TypeInfo->static_fields;
              v88->__9__199_1 = (struct System_Action_Action__o *)v86;
              sub_1C36FFC((CGThumbnailListItem_o *)&v88->__9__199_1, (int32_t)v86, v89, v90);
            }
            if ( *(_DWORD *)(v72 + 24) > 2u )
            {
              *(_QWORD *)(v72 + 48) = v86;
              sub_1C36FFC((CGThumbnailListItem_o *)(v72 + 48), (int32_t)v86, v84, v85);
              v91 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
              System_Action_object____ctor(
                v91,
                (Il2CppObject *)v7,
                Method_TerminalSceneComponent___c__DisplayClass199_0__Fadein_MapDisp_Start_b__2__,
                0);
              if ( *(_DWORD *)(v72 + 24) > 3u )
              {
                *(_QWORD *)(v72 + 56) = v91;
                sub_1C36FFC((CGThumbnailListItem_o *)(v72 + 56), (int32_t)v91, v92, v93);
                v94 = (ActionChain_o *)sub_1C372A4(ActionChain_TypeInfo);
                ActionChain___ctor_49040972(v94, (System_Action_Action__array *)v72, 0);
                Instance = sub_1C37100(System_Action___TypeInfo, 1);
                if ( !Instance )
                  goto LABEL_165;
                v97 = (System_Action_array *)Instance;
                if ( *(_DWORD *)(Instance + 24) )
                {
                  v98 = *v11;
                  *(_QWORD *)(Instance + 32) = *v11;
                  sub_1C36FFC((CGThumbnailListItem_o *)(Instance + 32), v98, v95, v96);
                  if ( !v94 )
                    goto LABEL_165;
                  v65 = (ChainableActionBase_o *)v94;
                  v66 = v97;
                  goto LABEL_127;
                }
              }
            }
          }
        }
LABEL_166:
        sub_1C372BC(Instance);
      }
    }
    if ( !*(_QWORD *)v18 )
      goto LABEL_165;
    v67 = *(_DWORD *)(*(_QWORD *)v18 + 96LL);
    v68 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v68,
      (Il2CppObject *)v7,
      Method_TerminalSceneComponent___c__DisplayClass199_0__Fadein_MapDisp_Start_b__3__,
      0);
    TerminalSceneComponent__StartEventDailyPoint(this, v67, v68, v69);
  }
LABEL_136:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventTutorialMaster___);
  v70 = this->fields.mTerminalMap;
  if ( !v70 )
    goto LABEL_165;
  mMapInfo = v70->fields.mMapInfo;
  if ( !mMapInfo )
    goto LABEL_165;
  if ( !Instance )
    goto LABEL_165;
  EventTutorialMaster__PlayTutorialSetUpAction((EventTutorialMaster_o *)Instance, mMapInfo->fields.mapId, 0);
  Instance = (__int64)this->fields.mTerminalMap;
  if ( !Instance )
    goto LABEL_165;
  ScrTerminalMap__Fadein_MapDisp_Start((ScrTerminalMap_o *)Instance, 0);
}


void TerminalSceneComponent__Fadein_WorldDisp(
        TerminalSceneComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AvalonSceneManager_c *v6; // x0
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_4C4534E & 1) == 0 )
  {
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    byte_4C4534E = 1;
  }
  v6 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v6 = AvalonSceneManager_TypeInfo;
  }
  v7 = TerminalSceneComponent__coFadein_WorldDisp(this, v6->static_fields->DEFAULT_FADE_TIME, end_act, 1, v3);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v7, 0);
}


void TerminalSceneComponent__Fadein_WorldDisp_45305704(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  System_Collections_IEnumerator_o *v6; // x1

  v6 = TerminalSceneComponent__coFadein_WorldDisp(this, fade_time, end_act, 1, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v6, 0);
}


UserServantEntity_o *TerminalSceneComponent__GetNextStandServant(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_array *mStandSvtDatas; // x11
  il2cpp_array_size_t max_length; // x9
  int v4; // w10
  int32_t mStandSvtIdx; // w8
  int32_t v6; // w8
  UserServantEntity_o *v7; // x8

  mStandSvtDatas = this->fields.mStandSvtDatas;
  if ( !mStandSvtDatas )
    sub_1C372B4(this);
  max_length = mStandSvtDatas->max_length;
  if ( (int)max_length < 1 )
  {
    v4 = 0;
LABEL_12:
    v7 = 0;
  }
  else
  {
    v4 = 0;
    while ( 1 )
    {
      mStandSvtIdx = this->fields.mStandSvtIdx;
      if ( mStandSvtIdx + 1 < (int)max_length )
        v6 = mStandSvtIdx + 1;
      else
        v6 = 0;
      this->fields.mStandSvtIdx = v6;
      if ( v6 >= (unsigned int)max_length )
        sub_1C372BC(this);
      v7 = mStandSvtDatas->m_Items[v6];
      if ( v7 )
        break;
      max_length = mStandSvtDatas->max_length;
      if ( ++v4 >= (int)max_length )
        goto LABEL_12;
    }
  }
  if ( v4 == (_DWORD)max_length )
    this->fields.mStandSvtIdx = 0;
  return v7;
}


System_String_o *TerminalSceneComponent__GetOverwriteCommonBg(int32_t skinType, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  System_String_o *OVERWRITE_COMMON_BG_TYPE2_KEY; // x0
  TerminalSceneComponent_c *v5; // x0

  if ( (byte_4C45386 & 1) == 0 )
  {
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C45386 = 1;
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
    return UnityEngine_PlayerPrefs__GetString_71225564(OVERWRITE_COMMON_BG_TYPE2_KEY, 0);
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
    return UnityEngine_PlayerPrefs__GetString_71225564(OVERWRITE_COMMON_BG_TYPE2_KEY, 0);
  }
  return string_TypeInfo->static_fields->Empty;
}


QuestEntity_o *TerminalSceneComponent__GetPlayAutoExecuteQuestEntity(
        TerminalSceneComponent_o *this,
        QuestEntity_array *questEntList,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Instance; // x0
  int max_length; // w8
  unsigned int v6; // w23
  QuestEntity_o *v7; // x21
  int32_t id; // w22
  int klass_high; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C45371 & 1) == 0 )
  {
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_SpotMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C45371 = 1;
  }
  entity = 0;
  Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  if ( !BYTE4(Instance[2].fields._lookup) )
  {
    if ( !questEntList )
      goto LABEL_28;
    max_length = questEntList->max_length;
    if ( max_length >= 1 )
    {
      v6 = 0;
      while ( 1 )
      {
        if ( v6 >= max_length )
          sub_1C372BC(Instance);
        v7 = questEntList->m_Items[v6];
        if ( !v7 )
          break;
        id = v7->fields.id;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)CondType__IsQuestClear_40324848(id, -1, 0, 0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SpotMaster___);
          if ( !Instance )
            break;
          Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                     Instance,
                                                                     &entity,
                                                                     v7->fields.spotId,
                                                                     (const MethodInfo_33A10EC *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              break;
            klass_high = HIDWORD(entity[1].klass);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4C3D397 )
            {
              sub_1C37058(&TerminalPramsManager_TypeInfo);
              byte_4C3D397 = 1;
            }
            Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
            }
            if ( klass_high == HIDWORD(Instance[2].fields.list->klass) )
              return v7;
          }
        }
        max_length = questEntList->max_length;
        if ( (int)++v6 >= max_length )
          return 0;
      }
LABEL_28:
      sub_1C372B4(Instance);
    }
  }
  return 0;
}


int32_t TerminalSceneComponent__GetState(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_o *v2; // x19
  struct CStateManager_TerminalSceneComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_4C45374 & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_1C37058(&Method_CStateManager_TerminalSceneComponent__getState__);
    byte_4C45374 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C372B4(this);
  return mFSM->fields.m_state;
}


void TerminalSceneComponent__InitLighting(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4C45384 & 1) == 0 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C45384 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  UnityEngine_RenderSettings__set_ambientLight(v3->static_fields->DEFAULT_AMBIENT_LIGHT_COLOR, 0);
  TerminalSceneComponent__SetDirectionalLightActive(this, 1, v4);
}


bool TerminalSceneComponent__IsEnabledMapOnEvent(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  MapEntity_array *Instance; // x0
  WarEntity_o *v5; // x0
  WarEntity_o *v6; // x19
  int max_length; // w8
  int v8; // w9
  int *v9; // x10

  if ( (byte_4C45357 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_MapMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C45357 = 1;
  }
  if ( !eventId )
    return 1;
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_19;
  v5 = WarMaster__getByEventId((WarMaster_o *)Instance, eventId, 0);
  if ( !v5 )
    return 1;
  v6 = v5;
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_MapMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = MapMaster__getList((MapMaster_o *)Instance, v6->fields.id, 0);
  if ( !Instance )
    goto LABEL_19;
  max_length = Instance->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = (int *)Instance->m_Items[v8];
      if ( !v9 )
        break;
      if ( v9[6] >= 1 && v9[7] >= 1 && v9[8] > 0 )
        return 1;
      if ( max_length == ++v8 )
        return 0;
    }
LABEL_19:
    sub_1C372B4(Instance);
  }
  return 0;
}


bool TerminalSceneComponent__IsMapActive(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalMap_o *mTerminalMap; // x8

  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap || (this = (TerminalSceneComponent_o *)mTerminalMap->fields.dispRoot) == 0 )
    sub_1C372B4(this);
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
}


bool TerminalSceneComponent__IsMapTouchEnabled(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *mTerminalMap; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  System_String_o *v5; // x20

  if ( (byte_4C4535B & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C37058(&StringLiteral_8893/*"Map Touch Enable"*/);
    byte_4C4535B = 1;
  }
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_62;
  mTerminalMap = (ScrTerminalMap_o *)ScrTerminalMap__mfGetMyFsmP(mTerminalMap, 0);
  if ( !mTerminalMap )
    goto LABEL_62;
  mTerminalMap = (ScrTerminalMap_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)mTerminalMap, 0);
  if ( !this->fields.mTutorialKind )
  {
    mTerminalList = this->fields.mTerminalList;
    if ( !mTerminalList )
      goto LABEL_62;
    v5 = (System_String_o *)mTerminalMap;
    mTerminalMap = (ScrTerminalMap_o *)mTerminalList->fields.mActionBgColl;
    if ( !mTerminalMap )
      goto LABEL_62;
    mTerminalMap = (ScrTerminalMap_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mTerminalMap, 0);
    if ( !mTerminalMap )
      goto LABEL_62;
    mTerminalMap = (ScrTerminalMap_o *)UnityEngine_GameObject__get_activeSelf(
                                         (UnityEngine_GameObject_o *)mTerminalMap,
                                         0);
    if ( ((unsigned __int8)mTerminalMap & 1) == 0 )
    {
      if ( !v5 )
        goto LABEL_62;
      if ( System_String__IndexOf_63620032(v5, (System_String_o *)StringLiteral_8893/*"Map Touch Enable"*/, 0) < 0
        || MainMenuBar__get_IsEnableOutSideCollider(0) )
      {
        return 0;
      }
      mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !mTerminalMap )
        goto LABEL_62;
      if ( !CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)mTerminalMap, 0) )
      {
        mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !mTerminalMap )
          goto LABEL_62;
        if ( !CommonUI__IsActive_ApRecvDlgComp((CommonUI_o *)mTerminalMap, 0) )
        {
          mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !mTerminalMap )
            goto LABEL_62;
          if ( !CommonUI__IsActive_EventItemSelectDlgComp((CommonUI_o *)mTerminalMap, 0) )
          {
            mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !mTerminalMap )
              goto LABEL_62;
            if ( !CommonUI__IsActive_CommonConfirmDialog((CommonUI_o *)mTerminalMap, 0) )
            {
              mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !mTerminalMap )
                goto LABEL_62;
              if ( !CommonUI__IsActive_NotifiDialog((CommonUI_o *)mTerminalMap, 0) )
              {
                mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !mTerminalMap )
                  goto LABEL_62;
                if ( !CommonUI__IsActive_TutorialBigDialog((CommonUI_o *)mTerminalMap, 0) )
                {
                  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !mTerminalMap )
                    goto LABEL_62;
                  if ( !CommonUI__IsActive_MasterMission((CommonUI_o *)mTerminalMap, 0) )
                  {
                    mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( !mTerminalMap )
                      goto LABEL_62;
                    if ( !CommonUI__IsActive_MasterProfile((CommonUI_o *)mTerminalMap, 0) )
                    {
                      mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      if ( !mTerminalMap )
                        goto LABEL_62;
                      if ( !CommonUI__IsActive_MissionListDialog((CommonUI_o *)mTerminalMap, 0) )
                      {
                        mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        if ( !mTerminalMap )
                          goto LABEL_62;
                        if ( !CommonUI__IsActive_AssistEffectConfirmDialog((CommonUI_o *)mTerminalMap, 0) )
                        {
                          mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          if ( !mTerminalMap )
                            goto LABEL_62;
                          if ( !CommonUI__IsActive_CommandAssistConfirmDialog((CommonUI_o *)mTerminalMap, 0) )
                          {
                            mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            if ( !mTerminalMap )
                              goto LABEL_62;
                            if ( !CommonUI__IsActive_AchievementExchangeConditionsDialog((CommonUI_o *)mTerminalMap, 0) )
                            {
                              mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                              if ( !mTerminalMap )
                                goto LABEL_62;
                              if ( !CommonUI__IsActive_SvtFrameShortDialog((CommonUI_o *)mTerminalMap, 0) )
                              {
                                mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                if ( !mTerminalMap )
                                  goto LABEL_62;
                                if ( !CommonUI__isBusyDialog((CommonUI_o *)mTerminalMap, 0) )
                                {
                                  mTerminalMap = (ScrTerminalMap_o *)this->fields.mPlayerStatus;
                                  if ( !mTerminalMap )
                                    goto LABEL_62;
                                  if ( BYTE4(mTerminalMap[1].fields.m_CancellationTokenSource)
                                    || ScrPlayerStatus__IsCommandSpellActive((ScrPlayerStatus_o *)mTerminalMap, 0) )
                                  {
                                    return 0;
                                  }
                                  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                                  if ( !mTerminalMap )
                                    goto LABEL_62;
                                  if ( !QuestAfterAction__IsPlaying((QuestAfterAction_o *)mTerminalMap, 0) )
                                  {
                                    mTerminalMap = (ScrTerminalMap_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
                                    if ( !mTerminalMap )
                                      goto LABEL_62;
                                    if ( !MissionNotifyManager__IsPress((MissionNotifyManager_o *)mTerminalMap, 0) )
                                    {
                                      mTerminalMap = (ScrTerminalMap_o *)this->fields.mTitleInfo;
                                      if ( !mTerminalMap )
                                        goto LABEL_62;
                                      if ( TitleInfoControl__IsTouchEnable((TitleInfoControl_o *)mTerminalMap, 0) )
                                      {
                                        mTerminalMap = (ScrTerminalMap_o *)this->fields.mTitleInfo;
                                        if ( !mTerminalMap )
                                          goto LABEL_62;
                                        if ( !TitleInfoControl__IsBusyOnEventUI((TitleInfoControl_o *)mTerminalMap, 0) )
                                        {
                                          mTerminalMap = this->fields.mTerminalMap;
                                          if ( !mTerminalMap )
                                            goto LABEL_62;
                                          if ( !ScrTerminalMap__IsActive_SpotCooltimeRewardDialog(mTerminalMap, 0) )
                                          {
                                            mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                                            if ( !mTerminalMap )
                                              goto LABEL_62;
                                            if ( !BYTE4(mTerminalMap->fields.rootEffectP) )
                                            {
                                              mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                              if ( mTerminalMap )
                                              {
                                                if ( CommonUI__IsActive_MessageAndScrollDetailConfirmDialog(
                                                       (CommonUI_o *)mTerminalMap,
                                                       0) )
                                                {
                                                  return 0;
                                                }
                                                mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                                if ( mTerminalMap )
                                                  return !CommonUI__IsActive_ScrollMessageDialog(
                                                            (CommonUI_o *)mTerminalMap,
                                                            0);
                                              }
LABEL_62:
                                              sub_1C372B4(mTerminalMap);
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
  }
  return 0;
}


bool TerminalSceneComponent__IsNotDisplayCostume(
        TerminalSceneComponent_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  if ( !shopEntity )
    sub_1C372B4(this);
  return shopEntity->fields.shopType == 11
      && shopEntity->fields.purchaseType == 14
      && !ShopEntity__IsEligibleForFreeFeaturesTheCostumeRelease(shopEntity, 0);
}


bool TerminalSceneComponent__IsPlayChapterStart(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  _BOOL4 IsWarStartAnim_k__BackingField; // w23
  _BOOL4 v4; // w24
  _BOOL4 IsWarStartActionSkip; // w19
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v7; // x0
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v9; // x20
  int64_t targetId; // x19
  const MethodInfo *v11; // x2
  TerminalPramsManager_c *v12; // x0

  if ( (byte_4C4536D & 1) == 0 )
  {
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4536D = 1;
  }
  IsWarStartAnim_k__BackingField = this->fields._IsWarStartAnim_k__BackingField;
  v4 = this->fields.mTutorialKind == 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IsWarStartActionSkip = TerminalPramsManager__get_Debug_IsWarStartActionSkip(0);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3D397 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D397 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    sub_1C372B4(v7);
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(
                       (QuestTree_o *)Instance,
                       v7->static_fields->_WarId_k__BackingField,
                       0);
  if ( !WarEntityByWarID )
    return 0;
  v9 = WarEntityByWarID;
  if ( WarEntity__IsMainInterlude(WarEntityByWarID, 0)
    && WarEntity__IsPurchasedByRarePrism(v9, 0)
    && WarEntity__IsStartTypeQuest(v9, 0) )
  {
    targetId = v9->fields.targetId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsQuestPhaseClear_40385476(targetId, 1, -1, 0, 0) )
      return 0;
  }
  else if ( !IsWarStartAnim_k__BackingField && !v4 || IsWarStartActionSkip )
  {
    return 0;
  }
  if ( !WarEntity__GetStartType(v9, 0) )
    return 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3D397 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D397 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  return TerminalSceneComponent__CheckPlayChapterStart(
           (TerminalSceneComponent_o *)v12,
           v12->static_fields->_WarId_k__BackingField,
           v11);
}


bool TerminalSceneComponent__IsTerminalListAreaWait(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ScrTerminalListTop_o *mTerminalList; // x0

  if ( (byte_4C45333 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_2038/*"AREA WAIT"*/);
    byte_4C45333 = 1;
  }
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList
    || (mTerminalList = (ScrTerminalListTop_o *)ScrTerminalListTop__mfGetMyFsmP(mTerminalList, 0)) == 0
    || (mTerminalList = (ScrTerminalListTop_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)mTerminalList, 0)) == 0 )
  {
    sub_1C372B4(mTerminalList);
  }
  return System_String__IndexOf_63620032((System_String_o *)mTerminalList, (System_String_o *)StringLiteral_2038/*"AREA WAIT"*/, 0) >= 0;
}


bool TerminalSceneComponent__IsValidGrandBgm(TerminalSceneComponent_o *this, int32_t *index, const MethodInfo *method)
{
  BalanceConfig_c *v4; // x8
  TerminalSceneComponent___c_c *v5; // x0
  System_Int32_array *TerminalGrandBgmCommonReleaseIds; // x20
  System_Predicate_int__o *_9__213_0; // x21
  Il2CppObject *v8; // x22
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t Index_int; // w0

  if ( (byte_4C45361 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_FindIndex_int___);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&System_Predicate_int__TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent___c__IsValidGrandBgm_b__213_0__);
    sub_1C37058(&TerminalSceneComponent___c_TypeInfo);
    byte_4C45361 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = TerminalSceneComponent___c_TypeInfo;
  TerminalGrandBgmCommonReleaseIds = v4->static_fields->TerminalGrandBgmCommonReleaseIds;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v5 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__213_0 = v5->static_fields->__9__213_0;
  if ( !_9__213_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = TerminalSceneComponent___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__213_0 = (System_Predicate_int__o *)sub_1C372A4(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(_9__213_0, v8, Method_TerminalSceneComponent___c__IsValidGrandBgm_b__213_0__, 0);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__213_0 = _9__213_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__213_0, (int32_t)_9__213_0, v10, v11);
  }
  Index_int = System_Array__FindIndex_int_(
                TerminalGrandBgmCommonReleaseIds,
                (System_Predicate_T__o *)_9__213_0,
                (const MethodInfo_31ED814 *)Method_System_Array_FindIndex_int___);
  *index = Index_int;
  return Index_int >= 0;
}


System_Collections_IEnumerator_o *TerminalSceneComponent__LoadAsync(
        TerminalSceneComponent_o *this,
        UserServantEntity_o *usd,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C45340 & 1) == 0 )
  {
    sub_1C37058(&TerminalSceneComponent__LoadAsync_d__177_TypeInfo);
    byte_4C45340 = 1;
  }
  v7 = sub_1C372A4(TerminalSceneComponent__LoadAsync_d__177_TypeInfo);
  TerminalSceneComponent__LoadAsync_d__177___ctor((TerminalSceneComponent__LoadAsync_d__177_o *)v7, 0, 0);
  if ( !v7 )
    sub_1C372B4(v8);
  *(_QWORD *)(v7 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 40) = usd;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 40), (int32_t)usd, v11, v12);
  *(_QWORD *)(v7 + 48) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 48), (int32_t)callback, v13, v14);
  return (System_Collections_IEnumerator_o *)v7;
}


void TerminalSceneComponent__LocateDialogToUiRoot(
        TerminalSceneComponent_o *this,
        BaseDialog_o *dialog,
        System_Nullable_Vector3__o localScale,
        const MethodInfo *method)
{
  bool hasValue; // w20
  TerminalSceneComponent_o *v6; // x21
  UnityEngine_Component_o *uiRoot; // x8
  TerminalSceneComponent_o *v8; // x21
  const MethodInfo_38CD384 *v9; // x2
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
  if ( (byte_4C45383 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Nullable_Vector3__get_HasValue__);
    this = (TerminalSceneComponent_o *)sub_1C37058(&Method_System_Nullable_Vector3__get_Value__);
    byte_4C45383 = 1;
  }
  if ( !dialog )
    goto LABEL_13;
  this = (TerminalSceneComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0);
  uiRoot = (UnityEngine_Component_o *)v6->fields.uiRoot;
  if ( !uiRoot )
    goto LABEL_13;
  v8 = this;
  this = (TerminalSceneComponent_o *)UnityEngine_Component__get_transform(uiRoot, 0);
  if ( !v8 )
    goto LABEL_13;
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)v8, (UnityEngine_Transform_o *)this, 0);
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
    if ( !byte_4C3C926 )
    {
      sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C926 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->oneVector.fields.x;
    y = static_fields->oneVector.fields.y;
    z = static_fields->oneVector.fields.z;
  }
  this = (TerminalSceneComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0);
  if ( !this )
LABEL_13:
    sub_1C372B4(this);
  v17.fields.x = x;
  v17.fields.y = y;
  v17.fields.z = z;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v17, 0);
}


void TerminalSceneComponent__OnCorePress(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct BaseCore_o *mEarthCore; // x0

  mEarthCore = this->fields.mEarthCore;
  if ( !mEarthCore )
    sub_1C372B4(0);
  ((void (__fastcall *)(struct BaseCore_o *, const MethodInfo *))mEarthCore->klass->vtable._7_OnPress.methodPtr)(
    mEarthCore,
    mEarthCore->klass->vtable._7_OnPress.method);
}


void TerminalSceneComponent__OnCoreRelease(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  BaseCore_o *mEarthCore; // x0

  mEarthCore = this->fields.mEarthCore;
  if ( !mEarthCore )
    sub_1C372B4(0);
  BaseCore__OnRelease(mEarthCore, 0);
}


void TerminalSceneComponent__OnDestroy(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  TerminalSceneComponent_c *v7; // x0
  long double v8; // q0
  __int64 v9; // x0
  __int64 v10; // x0
  UnityEngine_Object_o *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_String_o *loadEarthAssetName; // x20
  const MethodInfo *v15; // x1

  if ( (byte_4C4533B & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AssetManager__getInstance__);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C4533B = 1;
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
  if ( UnityEngine_Object__op_Equality(mInstance, (UnityEngine_Object_o *)this, 0) )
  {
    v7 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v7 = TerminalSceneComponent_TypeInfo;
    }
    v7->static_fields->mInstance = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)TerminalSceneComponent_TypeInfo->static_fields, 0, v5, v6);
    v9 = *((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C8776C(v8);
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C8776C(v8);
    v11 = **(UnityEngine_Object_o ***)(v10 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Implicit(v11, 0) )
    {
      loadEarthAssetName = this->fields.loadEarthAssetName;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage(loadEarthAssetName, 0);
    }
    this->fields.loadEarthAssetName = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.loadEarthAssetName, 0, v12, v13);
    StandFigureManager__ReleaseCharaFigure(0);
    TerminalSceneComponent__ReleaseAssetToResume(this, v15);
  }
}


void TerminalSceneComponent__OpenExchangeDialogue(
        TerminalSceneComponent_o *this,
        System_String_o *playerPrefsKey,
        System_String_o *localizationKeyForTitle,
        System_String_o *localizationKeyForDetail,
        System_Action_o *action,
        const MethodInfo *method)
{
  System_String_o *String_71225564; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x24
  System_Func_object__int__o *v11; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  System_Int32_array *v13; // x0
  TerminalSceneComponent___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x24
  System_Func_T__TResult__o *_9__262_0; // x25
  Il2CppObject *v17; // x26
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Collections_Generic_List_TSource__o *v22; // x0
  TerminalSceneComponent___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x24
  System_Func_object__bool__o *_9__262_1; // x25
  Il2CppObject *v26; // x26
  struct TerminalSceneComponent___c_StaticFields *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  TerminalSceneComponent___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x24
  System_Func_object__bool__o *_9__262_2; // x25
  Il2CppObject *v34; // x26
  struct TerminalSceneComponent___c_StaticFields *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x24
  System_Func_object__bool__o *v39; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_Collections_Generic_List_TSource__o *v41; // x0
  TerminalSceneComponent___c_c *v42; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x23
  System_Func_object__int__o *_9__262_4; // x24
  Il2CppObject *v45; // x25
  struct TerminalSceneComponent___c_StaticFields *v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x23
  Il2CppObject *Instance; // x24
  System_String_o *v52; // x22
  TerminalSceneComponent___c_c *v53; // x0
  System_Func_T__TResult__o *_9__262_5; // x24
  Il2CppObject *v55; // x25
  struct TerminalSceneComponent___c_StaticFields *v56; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x25
  System_String_o *v61; // x0
  TerminalSceneComponent___c_c *v62; // x8
  System_String_o *v63; // x21
  System_Func_object__int__o *_9__262_6; // x26
  Il2CppObject *v65; // x27
  struct TerminalSceneComponent___c_StaticFields *v66; // x0
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  __int64 v72; // x5
  __int64 v73; // x6
  __int64 v74; // x7
  Il2CppObject *v75; // x0
  int32_t v78; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4C4537E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Select_int__ShopEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_ShopEntity__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Sum_ShopEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_ShopEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_ShopEntity___);
    sub_1C37058(&System_Func_int__ShopEntity__TypeInfo);
    sub_1C37058(&System_Func_ShopEntity__int__TypeInfo);
    sub_1C37058(&System_Func_ShopEntity__bool__TypeInfo);
    sub_1C37058(&System_Func_string__int__TypeInfo);
    sub_1C37058(&Method_System_Int32_Parse__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_TerminalSceneComponent__OpenExchangeDialogue_b__262_3__);
    sub_1C37058(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__262_0__);
    sub_1C37058(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__262_1__);
    sub_1C37058(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__262_2__);
    sub_1C37058(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__262_4__);
    sub_1C37058(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__262_5__);
    sub_1C37058(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__262_6__);
    sub_1C37058(&TerminalSceneComponent___c_TypeInfo);
    sub_1C37058(&StringLiteral_19664/*"freeShopIds"*/);
    byte_4C4537E = 1;
  }
  String_71225564 = UnityEngine_PlayerPrefs__GetString_71225564(playerPrefsKey, 0);
  if ( !String_71225564 )
    goto LABEL_34;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_71225564, 0x2Cu, 0, 0);
  v11 = (System_Func_object__int__o *)sub_1C372A4(System_Func_string__int__TypeInfo);
  System_Func_object__int____ctor(v11, 0, Method_System_Int32_Parse__, 0);
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v10,
                                                               (System_Func_TSource__TResult__o *)v11,
                                                               (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_string__int___);
  v13 = System_Linq_Enumerable__ToArray_int_(
          v12,
          (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
  v14 = TerminalSceneComponent___c_TypeInfo;
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)v13;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v14 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__262_0 = (System_Func_T__TResult__o *)v14->static_fields->__9__262_0;
  if ( !_9__262_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = TerminalSceneComponent___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__262_0 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_int__ShopEntity__TypeInfo);
    System_Func_int__object____ctor(
      _9__262_0,
      v17,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__262_0__,
      0);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__262_0 = (struct System_Func_int__ShopEntity__o *)_9__262_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__262_0, (int32_t)_9__262_0, v19, v20);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               v15,
                                                               (System_Func_TSource__TResult__o *)_9__262_0,
                                                               (const MethodInfo_311B668 *)Method_System_Linq_Enumerable_Select_int__ShopEntity___);
  v22 = System_Linq_Enumerable__ToList_object_(
          v21,
          (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
  v23 = TerminalSceneComponent___c_TypeInfo;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)v22;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v23 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__262_1 = (System_Func_object__bool__o *)v23->static_fields->__9__262_1;
  if ( !_9__262_1 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = TerminalSceneComponent___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__262_1 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__262_1,
      v26,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__262_1__,
      0);
    v27 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v27->__9__262_1 = (struct System_Func_ShopEntity__bool__o *)_9__262_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v27->__9__262_1, (int32_t)_9__262_1, v28, v29);
  }
  v30 = System_Linq_Enumerable__Where_object_(
          v24,
          (System_Func_TSource__bool__o *)_9__262_1,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v31 = TerminalSceneComponent___c_TypeInfo;
  v32 = v30;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v31 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__262_2 = (System_Func_object__bool__o *)v31->static_fields->__9__262_2;
  if ( !_9__262_2 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = TerminalSceneComponent___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v31->static_fields->__9;
    _9__262_2 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__262_2,
      v34,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__262_2__,
      0);
    v35 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v35->__9__262_2 = (struct System_Func_ShopEntity__bool__o *)_9__262_2;
    sub_1C36FFC((CGThumbnailListItem_o *)&v35->__9__262_2, (int32_t)_9__262_2, v36, v37);
  }
  v38 = System_Linq_Enumerable__Where_object_(
          v32,
          (System_Func_TSource__bool__o *)_9__262_2,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v39 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_ShopEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v39,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent__OpenExchangeDialogue_b__262_3__,
    0);
  v40 = System_Linq_Enumerable__Where_object_(
          v38,
          (System_Func_TSource__bool__o *)v39,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v41 = System_Linq_Enumerable__ToList_object_(
          v40,
          (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
  v42 = TerminalSceneComponent___c_TypeInfo;
  v43 = (System_Collections_Generic_IEnumerable_TSource__o *)v41;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v42 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__262_4 = (System_Func_object__int__o *)v42->static_fields->__9__262_4;
  if ( !_9__262_4 )
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v42 = TerminalSceneComponent___c_TypeInfo;
    }
    v45 = (Il2CppObject *)v42->static_fields->__9;
    _9__262_4 = (System_Func_object__int__o *)sub_1C372A4(System_Func_ShopEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__262_4,
      v45,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__262_4__,
      0);
    v46 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v46->__9__262_4 = (struct System_Func_ShopEntity__int__o *)_9__262_4;
    sub_1C36FFC((CGThumbnailListItem_o *)&v46->__9__262_4, (int32_t)_9__262_4, v47, v48);
  }
  v49 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v43,
                                                               (System_Func_TSource__TResult__o *)_9__262_4,
                                                               (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_ShopEntity__int___);
  String_71225564 = (System_String_o *)System_Linq_Enumerable__ToArray_int_(
                                         v49,
                                         (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !String_71225564 )
    goto LABEL_34;
  v50 = (System_Collections_Generic_IEnumerable_TSource__o *)String_71225564;
  if ( String_71225564[1].klass )
  {
    if ( System_String__op_Equality(playerPrefsKey, (System_String_o *)StringLiteral_19664/*"freeShopIds"*/, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v52 = LocalizationManager__Get(localizationKeyForTitle, 0);
      String_71225564 = LocalizationManager__Get(localizationKeyForDetail, 0);
      if ( !Instance )
        goto LABEL_34;
      goto LABEL_51;
    }
    v53 = TerminalSceneComponent___c_TypeInfo;
    if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v53 = TerminalSceneComponent___c_TypeInfo;
    }
    _9__262_5 = (System_Func_T__TResult__o *)v53->static_fields->__9__262_5;
    if ( !_9__262_5 )
    {
      if ( !v53->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v53);
        v53 = TerminalSceneComponent___c_TypeInfo;
      }
      v55 = (Il2CppObject *)v53->static_fields->__9;
      _9__262_5 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_int__ShopEntity__TypeInfo);
      System_Func_int__object____ctor(
        _9__262_5,
        v55,
        Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__262_5__,
        0);
      v56 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v56->__9__262_5 = (struct System_Func_int__ShopEntity__o *)_9__262_5;
      sub_1C36FFC((CGThumbnailListItem_o *)&v56->__9__262_5, (int32_t)_9__262_5, v57, v58);
    }
    v59 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                 v50,
                                                                 (System_Func_TSource__TResult__o *)_9__262_5,
                                                                 (const MethodInfo_311B668 *)Method_System_Linq_Enumerable_Select_int__ShopEntity___);
    v60 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                 v59,
                                                                 (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v52 = LocalizationManager__Get(localizationKeyForTitle, 0);
    v61 = LocalizationManager__Get(localizationKeyForDetail, 0);
    v62 = TerminalSceneComponent___c_TypeInfo;
    v63 = v61;
    if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v62 = TerminalSceneComponent___c_TypeInfo;
    }
    _9__262_6 = (System_Func_object__int__o *)v62->static_fields->__9__262_6;
    if ( !_9__262_6 )
    {
      if ( !v62->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v62);
        v62 = TerminalSceneComponent___c_TypeInfo;
      }
      v65 = (Il2CppObject *)v62->static_fields->__9;
      _9__262_6 = (System_Func_object__int__o *)sub_1C372A4(System_Func_ShopEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__262_6,
        v65,
        Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__262_6__,
        0);
      v66 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v66->__9__262_6 = (struct System_Func_ShopEntity__int__o *)_9__262_6;
      sub_1C36FFC((CGThumbnailListItem_o *)&v66->__9__262_6, (int32_t)_9__262_6, v67, v68);
    }
    v78 = System_Linq_Enumerable__Sum_object_(
            v60,
            (System_Func_TSource__int__o *)_9__262_6,
            (const MethodInfo_31259AC *)Method_System_Linq_Enumerable_Sum_ShopEntity___);
    v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v78, v69, v70, v71, v72, v73, v74);
    String_71225564 = System_String__Format(v63, v75, 0);
    if ( Instance )
    {
LABEL_51:
      CommonUI__OpenAchievementExchangeConditionsDialog(
        (CommonUI_o *)Instance,
        (System_Int32_array *)v50,
        v52,
        String_71225564,
        action,
        0);
      goto LABEL_52;
    }
LABEL_34:
    sub_1C372B4(String_71225564);
  }
  ActionExtensions__Call(action, 0);
LABEL_52:
  UnityEngine_PlayerPrefs__DeleteKey(playerPrefsKey, 0);
}


void TerminalSceneComponent__PlayAutoExecuteQuest(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x21
  QuestMaster_o *Master_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  TerminalSceneComponent_o *QuestEntityListByType; // x0
  const MethodInfo *v11; // x2
  QuestEntity_o *PlayAutoExecuteQuestEntity; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  QuestMaster_o *v15; // x23
  int32_t v16; // w24
  TerminalPramsManager_c *v17; // x0
  int32_t list_high; // w23
  NetworkManager_ResultCallbackFunc_o *v19; // x19
  Il2CppObject *Request_object; // x19
  int32_t items_high; // w21
  bool HasFlag; // w0
  ScrTerminalListTop_o *mTerminalList; // x22
  bool v24; // w23
  TerminalPramsManager_c *v25; // x0
  int32_t QuestId_k__BackingField; // w19
  int32_t PhaseCnt_k__BackingField; // w23
  System_Action_o *v28; // x20
  int32_t klass_high; // w21
  int32_t v30; // w23

  if ( (byte_4C45370 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass232_0__PlayAutoExecuteQuest_b__0__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass232_0__PlayAutoExecuteQuest_b__1__);
    sub_1C37058(&TerminalSceneComponent___c__DisplayClass232_0_TypeInfo);
    byte_4C45370 = 1;
  }
  v3 = sub_1C372A4(TerminalSceneComponent___c__DisplayClass232_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass232_0___ctor((TerminalSceneComponent___c__DisplayClass232_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_71;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)this, v5, v6);
  *(_QWORD *)(v3 + 16) = 0;
  v7 = v3 + 16;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), 0, v8, v9);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_71;
  QuestEntityListByType = (TerminalSceneComponent_o *)QuestMaster__GetQuestEntityListByType(Master_object, 8, 0);
  if ( QuestEntityListByType )
  {
    PlayAutoExecuteQuestEntity = TerminalSceneComponent__GetPlayAutoExecuteQuestEntity(
                                   QuestEntityListByType,
                                   (QuestEntity_array *)QuestEntityListByType,
                                   v11);
    *(_QWORD *)v7 = PlayAutoExecuteQuestEntity;
    sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)PlayAutoExecuteQuestEntity, v13, v14);
    if ( *(_QWORD *)v7 )
    {
      Master_object = (QuestMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !*(_QWORD *)v7 )
        goto LABEL_71;
      if ( !Master_object )
        goto LABEL_71;
      Master_object = (QuestMaster_o *)QuestTree__GetQuestInfo(
                                         (QuestTree_o *)Master_object,
                                         *(_DWORD *)(*(_QWORD *)v7 + 16LL),
                                         0);
      if ( !Master_object )
        goto LABEL_71;
      v15 = Master_object;
      if ( Master_object->fields.revision == 1 )
      {
        if ( !*(_QWORD *)v7 )
          goto LABEL_71;
        v16 = *(_DWORD *)(*(_QWORD *)v7 + 16LL);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C3F896 )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C3F896 = 1;
        }
        v17 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v17 = TerminalPramsManager_TypeInfo;
        }
        v17->static_fields->_QuestId_k__BackingField = v16;
        list_high = HIDWORD(v15->fields.list);
        if ( !byte_4C3F89A )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          v17 = TerminalPramsManager_TypeInfo;
          byte_4C3F89A = 1;
        }
        if ( !v17->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v17);
          v17 = TerminalPramsManager_TypeInfo;
        }
        v17->static_fields->_PhaseCnt_k__BackingField = list_high;
        Master_object = *(QuestMaster_o **)v7;
        if ( !*(_QWORD *)v7 )
          goto LABEL_71;
        if ( QuestEntity__HasFlag((QuestEntity_o *)Master_object, 2, 0) )
        {
          Master_object = (QuestMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
          if ( Master_object )
          {
            BYTE4(Master_object[2].fields._lookup) = 1;
            v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
            NetworkManager_ResultCallbackFunc___ctor(
              v19,
              (Il2CppObject *)v3,
              Method_TerminalSceneComponent___c__DisplayClass232_0__PlayAutoExecuteQuest_b__1__,
              0);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Request_object = NetworkManager__getRequest_object_(
                               v19,
                               (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4C3CFE7 )
            {
              sub_1C37058(&TerminalPramsManager_TypeInfo);
              byte_4C3CFE7 = 1;
            }
            Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
            }
            items_high = HIDWORD(Master_object[2].fields.list->fields.items);
            if ( !byte_4C3CFE6 )
            {
              sub_1C37058(&TerminalPramsManager_TypeInfo);
              Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
              byte_4C3CFE6 = 1;
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
                0);
              return;
            }
          }
LABEL_71:
          sub_1C372B4(Master_object);
        }
        Master_object = *(QuestMaster_o **)v7;
        if ( !*(_QWORD *)v7 )
          goto LABEL_71;
        HasFlag = QuestEntity__HasFlag((QuestEntity_o *)Master_object, 0x400000, 0);
        mTerminalList = this->fields.mTerminalList;
        v24 = HasFlag;
        if ( TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          if ( HasFlag )
          {
LABEL_45:
            if ( !byte_4C3CFE7 )
            {
              sub_1C37058(&TerminalPramsManager_TypeInfo);
              byte_4C3CFE7 = 1;
            }
            v25 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v25 = TerminalPramsManager_TypeInfo;
            }
            QuestId_k__BackingField = v25->static_fields->_QuestId_k__BackingField;
            if ( !byte_4C3CFE6 )
            {
              sub_1C37058(&TerminalPramsManager_TypeInfo);
              v25 = TerminalPramsManager_TypeInfo;
              byte_4C3CFE6 = 1;
            }
            if ( !v25->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v25);
              v25 = TerminalPramsManager_TypeInfo;
            }
            PhaseCnt_k__BackingField = v25->static_fields->_PhaseCnt_k__BackingField;
            v28 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
            System_Action___ctor(
              v28,
              (Il2CppObject *)v3,
              Method_TerminalSceneComponent___c__DisplayClass232_0__PlayAutoExecuteQuest_b__0__,
              0);
            if ( !mTerminalList )
              goto LABEL_71;
            ScrTerminalListTop__StartQuestBeforeAction(
              mTerminalList,
              QuestId_k__BackingField,
              PhaseCnt_k__BackingField + 1,
              v28,
              0);
            return;
          }
        }
        else
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( v24 )
            goto LABEL_45;
        }
        if ( !byte_4C3D397 )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C3D397 = 1;
        }
        Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
        }
        klass_high = HIDWORD(Master_object[2].fields.list->klass);
        if ( !byte_4C3CFE7 )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
          byte_4C3CFE7 = 1;
        }
        if ( !LODWORD(Master_object[3].monitor) )
        {
          j_il2cpp_runtime_class_init_0(Master_object);
          Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
        }
        v30 = HIDWORD(Master_object[2].fields.list->fields.items);
        if ( !byte_4C3CFE6 )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
          byte_4C3CFE6 = 1;
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
          v30,
          LODWORD(Master_object[2].fields.list->fields._monitor) + 1,
          0,
          0,
          0,
          0);
        Master_object = (QuestMaster_o *)this->fields.mTerminalList;
        if ( !Master_object )
          goto LABEL_71;
        ScrTerminalListTop__StartFollower((ScrTerminalListTop_o *)Master_object, 0);
      }
    }
  }
}


void TerminalSceneComponent__PlayChapterStart(
        TerminalSceneComponent_o *this,
        TerminalSceneComponent_PlayChapterStartCallback_o *end_act,
        const MethodInfo *method)
{
  WarEntity_o *IsPlayChapterStart; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  Il2CppObject *Instance; // x20
  WarEntity_o *v9; // x20
  int32_t StartType; // w0
  BattleScriptRootComponent_TalkScriptInfo_o *v11; // x21
  TerminalPramsManager_c *v12; // x0
  int32_t v13; // w22
  TerminalPramsManager_c *v14; // x0
  int32_t targetId; // w22
  int32_t WarId_k__BackingField; // w23
  TerminalPramsManager_c *v17; // x0
  BalanceConfig_c *v18; // x8
  int32_t v19; // w22
  TerminalSceneComponent_c *v20; // x0
  int64_t v21; // x22
  TerminalPramsManager_c *v22; // x0
  int32_t v23; // w22
  TerminalPramsManager_c *v24; // x0

  if ( (byte_4C4536F & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C37058(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C4536F = 1;
  }
  IsPlayChapterStart = (WarEntity_o *)TerminalSceneComponent__IsPlayChapterStart(this, (const MethodInfo *)end_act);
  if ( ((unsigned __int8)IsPlayChapterStart & 1) == 0 )
  {
    if ( end_act )
    {
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))end_act->fields.invoke_impl)(
        end_act->fields.method_code,
        0,
        end_act->fields.method);
      return;
    }
    goto LABEL_64;
  }
  this->fields.OnResumeFromChapterStart = end_act;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.OnResumeFromChapterStart, (int32_t)end_act, v6, v7);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3D397 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D397 = 1;
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
                         0);
  if ( !IsPlayChapterStart )
    goto LABEL_64;
  v9 = IsPlayChapterStart;
  StartType = WarEntity__GetStartType(IsPlayChapterStart, 0);
  if ( StartType == 2 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3D397 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3D397 = 1;
    }
    v14 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v14 = TerminalPramsManager_TypeInfo;
    }
    targetId = v9->fields.targetId;
    WarId_k__BackingField = v14->static_fields->_WarId_k__BackingField;
    v11 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_1C372A4(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    BattleScriptRootComponent_TalkScriptInfo___ctor_47827504(v11, WarId_k__BackingField, targetId, 0, 1, 0, 0, 0, 0);
  }
  else
  {
    v11 = 0;
    if ( StartType == 1 )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3D397 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3D397 = 1;
      }
      v12 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v12 = TerminalPramsManager_TypeInfo;
      }
      v13 = v12->static_fields->_WarId_k__BackingField;
      v11 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_1C372A4(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
      BattleScriptRootComponent_TalkScriptInfo___ctor_47827504(v11, v13, 0, 0, 1, 0, 0, 0, 0);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3D397 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D397 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  v18 = BalanceConfig_TypeInfo;
  v19 = v17->static_fields->_WarId_k__BackingField;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  if ( v19 == v18->static_fields->OrdealCallWarId )
  {
    v20 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v20 = TerminalSceneComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v20->static_fields->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY, 1, 0);
  }
  if ( WarEntity__HasFlag(v9, 0x8000, 0) )
  {
    v21 = v9->fields.targetId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3F896 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3F896 = 1;
    }
    v22 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v22 = TerminalPramsManager_TypeInfo;
    }
    v22->static_fields->_QuestId_k__BackingField = v21;
    v23 = v9->fields.targetId;
    if ( !byte_4C3FCAA )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      v22 = TerminalPramsManager_TypeInfo;
      byte_4C3FCAA = 1;
    }
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = TerminalPramsManager_TypeInfo;
    }
    v22->static_fields->_LastPlayedQuestId_k__BackingField = v23;
    TerminalPramsManager__CheckClearSelectedStoryQuestId(v9->fields.targetId, 0);
    TerminalPramsManager__PlayQuestSave_SaveData(0);
    IsPlayChapterStart = (WarEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( IsPlayChapterStart )
    {
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)IsPlayChapterStart, 0);
      IsPlayChapterStart = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( IsPlayChapterStart )
      {
        AvalonSceneManager__changeScene((AvalonSceneManager_o *)IsPlayChapterStart, 38, 2, (Il2CppObject *)v11, 0);
        return;
      }
    }
LABEL_64:
    sub_1C372B4(IsPlayChapterStart);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FB58 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FB58 = 1;
  }
  v24 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
  }
  v24->static_fields->meSceneStatus = 3;
  IsPlayChapterStart = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !IsPlayChapterStart )
    goto LABEL_64;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)IsPlayChapterStart, 38, 2, (Il2CppObject *)v11, 0);
}


void TerminalSceneComponent__PlayEventTutorial(
        TerminalSceneComponent_o *this,
        System_Action_o *callbackAfter,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_Component_o *EventID; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  TerminalPramsManager_c *v11; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  int32_t v13; // w21
  System_Action_o *v14; // x22
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct MapControl_MapInfo_o *mMapInfo; // x8

  if ( (byte_4C45372 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass237_0__PlayEventTutorial_b__0__);
    sub_1C37058(&TerminalSceneComponent___c__DisplayClass237_0_TypeInfo);
    byte_4C45372 = 1;
  }
  v5 = sub_1C372A4(TerminalSceneComponent___c__DisplayClass237_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass237_0___ctor((TerminalSceneComponent___c__DisplayClass237_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_16;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = callbackAfter;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callbackAfter, v9, v10);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3D397 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D397 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  EventID = (UnityEngine_Component_o *)WarMaster__getEventID(v11->static_fields->_WarId_k__BackingField, 0);
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_16;
  v13 = (int)EventID;
  EventID = (UnityEngine_Component_o *)mTerminalList->fields.mActionBgColl;
  if ( !EventID
    || (EventID = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(EventID, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EventID, 1, 0),
        v14 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent___c__DisplayClass237_0__PlayEventTutorial_b__0__,
          0),
        (mTerminalMap = this->fields.mTerminalMap) == 0)
    || (mMapInfo = mTerminalMap->fields.mMapInfo) == 0 )
  {
LABEL_16:
    sub_1C372B4(EventID);
  }
  EventTutorialMaster__CheckTutorial(v13, 1, v14, mMapInfo->fields.mapId, 0, 0, 0, 0);
}


void TerminalSceneComponent__PlayEventTutorialWithoutAfterAction(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  TerminalPramsManager_c *v6; // x0
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct MapControl_MapInfo_o *mMapInfo; // x8

  if ( (byte_4C45373 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C45373 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  if ( QuestAfterAction__IsPlaying((QuestAfterAction_o *)Instance, 0) )
  {
    ActionExtensions__Call(callback, 0);
    return;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3D397 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D397 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  Instance = (Il2CppObject *)WarMaster__getEventID(v6->static_fields->_WarId_k__BackingField, 0);
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap || (mMapInfo = mTerminalMap->fields.mMapInfo) == 0 )
LABEL_15:
    sub_1C372B4(Instance);
  EventTutorialMaster__CheckTutorial((int32_t)Instance, 90, callback, mMapInfo->fields.mapId, 0, 0, 0, 0);
}


void TerminalSceneComponent__PlayGrandBgm(
        TerminalSceneComponent_o *this,
        int32_t index,
        System_Action_o *onLoadFinishCallback,
        const MethodInfo *method)
{
  BalanceConfig_c *v7; // x0
  struct System_String_array *TerminalGrandBgmNames; // x8

  if ( (byte_4C45362 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    byte_4C45362 = 1;
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
    if ( SLODWORD(TerminalGrandBgmNames->max_length) <= index )
      return;
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      TerminalGrandBgmNames = BalanceConfig_TypeInfo->static_fields->TerminalGrandBgmNames;
      if ( !TerminalGrandBgmNames )
LABEL_13:
        sub_1C372B4(v7);
    }
    if ( LODWORD(TerminalGrandBgmNames->max_length) <= index )
      sub_1C372BC(v7);
    TerminalSceneComponent__playBgm(this, TerminalGrandBgmNames->m_Items[index], onLoadFinishCallback, method);
  }
}


void TerminalSceneComponent__PlayRaidTutorial(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent__PlayTutorial(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  unsigned int v3; // w8

  v3 = this->fields.mTutorialKind - 1;
  if ( v3 <= 4 )
    TerminalSceneComponent__SetState(this, (2 * v3) | 1, v2);
}


bool TerminalSceneComponent__QuestInfoBusy(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  QuestInformationComponent_o *mQuestInformation; // x0

  mQuestInformation = this->fields.mQuestInformation;
  if ( !mQuestInformation )
    goto LABEL_6;
  if ( QuestInformationComponent__isMoving(mQuestInformation, 0) )
    return 1;
  mQuestInformation = this->fields.mQuestInformation;
  if ( !mQuestInformation )
LABEL_6:
    sub_1C372B4(mQuestInformation);
  return QuestInformationComponent__isListBuilding(mQuestInformation, 0);
}


int32_t TerminalSceneComponent__QuestInfoShowing(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct QuestInformationComponent_o *mQuestInformation; // x8

  mQuestInformation = this->fields.mQuestInformation;
  if ( !mQuestInformation )
    sub_1C372B4(this);
  return mQuestInformation->fields.settedQuestId;
}


void TerminalSceneComponent__RebootToNetworkError(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  System_String_o *v3; // x20
  System_String_o *v4; // x0
  TerminalSceneComponent___c_c *v5; // x8
  System_String_o *v6; // x21
  ErrorDialog_ClickDelegate_o *_9__219_0; // x22
  Il2CppObject *v8; // x23
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C45366 & 1) == 0 )
  {
    sub_1C37058(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_TerminalSceneComponent___c__RebootToNetworkError_b__219_0__);
    sub_1C37058(&TerminalSceneComponent___c_TypeInfo);
    sub_1C37058(&StringLiteral_13370/*"TERMINAL_NETWORK_ERROR_DIALOG_TITLE"*/);
    sub_1C37058(&StringLiteral_13369/*"TERMINAL_NETWORK_ERROR_DIALOG_MESSAGE"*/);
    byte_4C45366 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_13370/*"TERMINAL_NETWORK_ERROR_DIALOG_TITLE"*/, 0);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13369/*"TERMINAL_NETWORK_ERROR_DIALOG_MESSAGE"*/, 0);
  v5 = TerminalSceneComponent___c_TypeInfo;
  v6 = v4;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v5 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__219_0 = v5->static_fields->__9__219_0;
  if ( !_9__219_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = TerminalSceneComponent___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__219_0 = (ErrorDialog_ClickDelegate_o *)sub_1C372A4(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(
      _9__219_0,
      v8,
      Method_TerminalSceneComponent___c__RebootToNetworkError_b__219_0__,
      0);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__219_0 = _9__219_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__219_0, (int32_t)_9__219_0, v10, v11);
  }
  if ( !Instance )
    sub_1C372B4(v4);
  CommonUI__OpenErrorDialog((CommonUI_o *)Instance, v3, v6, _9__219_0, 1, 0);
}


void TerminalSceneComponent__RegenerateEarthView(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_GameObject_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UnityEngine_Object_o *mEarthCoreObj; // x22
  struct UnityEngine_GameObject_o **p_mEarthCoreObj; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *v15; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Action_o *v18; // x21
  const MethodInfo *v19; // x2

  if ( (byte_4C4533E & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass174_0__RegenerateEarthView_b__0__);
    sub_1C37058(&TerminalSceneComponent___c__DisplayClass174_0_TypeInfo);
    byte_4C4533E = 1;
  }
  v5 = sub_1C372A4(TerminalSceneComponent___c__DisplayClass174_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v9, v10);
  mEarthCoreObj = (UnityEngine_Object_o *)this->fields.mEarthCoreObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_mEarthCoreObj = &this->fields.mEarthCoreObj;
  if ( UnityEngine_Object__op_Inequality(mEarthCoreObj, 0, 0) )
  {
    v6 = *p_mEarthCoreObj;
    if ( *p_mEarthCoreObj )
    {
      UnityEngine_GameObject__SetActive(v6, 0, 0);
      v15 = (UnityEngine_Object_o *)*p_mEarthCoreObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71266752(v15, 0);
      goto LABEL_11;
    }
LABEL_12:
    sub_1C372B4(v6);
  }
LABEL_11:
  this->fields.mEarthCoreObj = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mEarthCoreObj, 0, v13, v14);
  this->fields.mEarthCore = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mEarthCore, 0, v16, v17);
  v18 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass174_0__RegenerateEarthView_b__0__,
    0);
  TerminalSceneComponent__SetEarthView(this, v18, v19);
}


void TerminalSceneComponent__ReleaseAssetToResume(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTerminalList; // x20
  TitleInfoControl_o *v4; // x0
  struct ScrTerminalListTop_o *v5; // x8
  UnityEngine_Object_o *mQuestBoardListViewManager; // x20
  UnityEngine_Object_o *mTitleInfo; // x20

  if ( (byte_4C45347 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45347 = 1;
  }
  mTerminalList = (UnityEngine_Object_o *)this->fields.mTerminalList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (TitleInfoControl_o *)UnityEngine_Object__op_Inequality(0, mTerminalList, 0);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v5 = this->fields.mTerminalList;
    if ( !v5 )
      goto LABEL_18;
    mQuestBoardListViewManager = (UnityEngine_Object_o *)v5->fields.mQuestBoardListViewManager;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = (TitleInfoControl_o *)UnityEngine_Object__op_Inequality(0, mQuestBoardListViewManager, 0);
    if ( ((unsigned __int8)v4 & 1) != 0 )
    {
      if ( !mQuestBoardListViewManager )
        goto LABEL_18;
      QuestBoardListViewManager__ReleaseTerminalAsset((QuestBoardListViewManager_o *)mQuestBoardListViewManager, 0);
    }
  }
  mTitleInfo = (UnityEngine_Object_o *)this->fields.mTitleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(0, mTitleInfo, 0) )
  {
    v4 = this->fields.mTitleInfo;
    if ( v4 )
    {
      TitleInfoControl__ReleaseTitleInfoAsset(v4, 0);
      return;
    }
LABEL_18:
    sub_1C372B4(v4);
  }
}


void TerminalSceneComponent__SaveCampaignDirectBonusData(
        TerminalSceneComponent_o *this,
        CommonUI_CampaignDirectBonusData_array *campaignDirectBonus,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4C45378 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C45378 = 1;
  }
  if ( campaignDirectBonus )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C403E9 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C403E9 = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v5->static_fields;
    static_fields->_CampaignDirectBonus_k__BackingField = campaignDirectBonus;
    sub_1C36FFC(
      (CGThumbnailListItem_o *)&static_fields->_CampaignDirectBonus_k__BackingField,
      (int32_t)campaignDirectBonus,
      (int32_t)method,
      v3);
    TerminalPramsManager__CampaignDirectBonus_SaveData(0);
  }
}


void TerminalSceneComponent__SendMessageStartUpAndResume(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  CommonUI_o *v4; // x20
  struct TerminalSceneComponent_PlayChapterStartCallback_o *v5; // x8
  CGThumbnailListItem_o *p_OnResumeFromChapterStart; // x19
  struct TerminalSceneComponent_PlayChapterStartCallback_o *OnResumeFromChapterStart; // t1
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C45341 & 1) == 0 )
  {
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C45341 = 1;
  }
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0);
  if ( this->fields.isFadeInAfterResumeLoad )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v4 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v4 )
      sub_1C372B4(Instance);
    CommonUI__maskFadein(v4, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
    this->fields.isFadeInAfterResumeLoad = 0;
  }
  OnResumeFromChapterStart = this->fields.OnResumeFromChapterStart;
  p_OnResumeFromChapterStart = (CGThumbnailListItem_o *)&this->fields.OnResumeFromChapterStart;
  v5 = OnResumeFromChapterStart;
  if ( OnResumeFromChapterStart )
  {
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      1,
      v5->fields.method);
    p_OnResumeFromChapterStart->klass = 0;
    sub_1C36FFC(p_OnResumeFromChapterStart, 0, v8, v9);
  }
}


void TerminalSceneComponent__SetActionBGColl(
        TerminalSceneComponent_o *this,
        bool isEnable,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x8

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList
    || (this = (TerminalSceneComponent_o *)mTerminalList->fields.mActionBgColl) == 0
    || (this = (TerminalSceneComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0 )
  {
    sub_1C372B4(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isEnable, 0);
  ActionExtensions__Call(callback, 0);
}


void TerminalSceneComponent__SetDirectionalLightActive(
        TerminalSceneComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *GameObjectWithLog; // x20
  _BOOL8 v6; // x0

  if ( (byte_4C45385 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_5282/*"Directional light"*/);
    byte_4C45385 = 1;
  }
  GameObjectWithLog = (UnityEngine_Object_o *)GameObjectExtensions__FindGameObjectWithLog(
                                                this->fields.mEarthCoreObj,
                                                (System_String_o *)StringLiteral_5282/*"Directional light"*/,
                                                0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(GameObjectWithLog, 0, 0);
  if ( !v6 )
  {
    if ( !GameObjectWithLog )
      sub_1C372B4(v6);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)GameObjectWithLog, isActive, 0);
  }
}


void TerminalSceneComponent__SetDispStandServant(TerminalSceneComponent_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Component_o *mTerminalServant; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  long double v7; // q0

  if ( (byte_4C4534C & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    byte_4C4534C = 1;
  }
  mTerminalServant = (UnityEngine_Component_o *)this->fields.mTerminalServant;
  if ( !mTerminalServant
    || (gameObject = UnityEngine_Component__get_gameObject(mTerminalServant, 0),
        (mTerminalServant = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0)) == 0)
    || (mTerminalServant = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mTerminalServant, 0)) == 0
    || (mTerminalServant = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        (UnityEngine_GameObject_o *)mTerminalServant,
                                                        (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___)) == 0 )
  {
    sub_1C372B4(mTerminalServant);
  }
  LODWORD(v7) = 0;
  if ( isDisp )
    *(float *)&v7 = 1.0;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, long double))mTerminalServant->klass[1]._1.element_class)(
    mTerminalServant,
    mTerminalServant->klass[1]._1.castClass,
    v7);
}


void TerminalSceneComponent__SetEarthView(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_Camera_o *mEarthEffCamera; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UnityEngine_Object_o *mEarthCore; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v13; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  TerminalSceneComponent_c *v20; // x0
  System_String_o *EARTH_ASSET_NAME; // x21
  System_Int32_c *v22; // x0
  int v23; // w8
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  TerminalSceneComponent_c *v26; // x0
  Il2CppObject *v27; // x0
  struct System_String_o *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  TerminalSceneComponent_c *v31; // x0
  struct System_String_o *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  Il2CppObject *Instance; // x0
  System_String_o *loadEarthAssetName; // x19
  AssetManager_o *v37; // x21
  AssetLoader_LoadEndDataHandler_o *v38; // x22
  int v39; // [xsp+4h] [xbp-4Ch] BYREF
  TerminalOverwriteEntity_o *overwriteEntity; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *overwriteId; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C4533D & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_TerminalOverwriteMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ServantCommentManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass173_0__SetEarthView_b__0__);
    sub_1C37058(&TerminalSceneComponent___c__DisplayClass173_0_TypeInfo);
    byte_4C4533D = 1;
  }
  overwriteId = 0;
  overwriteEntity = 0;
  v5 = sub_1C372A4(TerminalSceneComponent___c__DisplayClass173_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_37;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v9, v10);
  mEarthCore = (UnityEngine_Object_o *)this->fields.mEarthCore;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mEarthCore, 0, 0) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0);
    return;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  mEarthEffCamera = (UnityEngine_Camera_o *)ServantCommentManager__GetUiChangeType(0);
  if ( !this->fields.mEarthCamera )
    goto LABEL_37;
  if ( (_DWORD)mEarthEffCamera == 1 )
  {
    UnityEngine_Camera__set_orthographic(this->fields.mEarthCamera, 0, 0);
    mEarthEffCamera = this->fields.mEarthEffCamera;
    if ( !mEarthEffCamera )
      goto LABEL_37;
    UnityEngine_Camera__set_orthographic(mEarthEffCamera, 0, 0);
    mEarthEffCamera = this->fields.mEarthCamera;
    if ( !mEarthEffCamera )
      goto LABEL_37;
    UnityEngine_Camera__set_fieldOfView(mEarthEffCamera, 32.269, 0);
    mEarthEffCamera = this->fields.mEarthEffCamera;
    if ( !mEarthEffCamera )
      goto LABEL_37;
    UnityEngine_Camera__set_fieldOfView(mEarthEffCamera, 32.269, 0);
    mEarthEffCamera = this->fields.mEarthCamera;
    if ( !mEarthEffCamera )
      goto LABEL_37;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0);
    GameObjectExtensions__SetLocalPositionZ(gameObject, -792.87, 0);
    mEarthEffCamera = this->fields.mEarthEffCamera;
    if ( !mEarthEffCamera )
      goto LABEL_37;
    v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0);
    GameObjectExtensions__SetLocalPositionZ(v13, -792.87, 0);
    v20 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v20 = TerminalSceneComponent_TypeInfo;
    }
    EARTH_ASSET_NAME = v20->static_fields->EARTH_ASSET_NAME;
    v22 = int_TypeInfo;
    v23 = 2;
  }
  else
  {
    UnityEngine_Camera__set_orthographic(this->fields.mEarthCamera, 1, 0);
    mEarthEffCamera = this->fields.mEarthEffCamera;
    if ( !mEarthEffCamera )
      goto LABEL_37;
    UnityEngine_Camera__set_orthographic(mEarthEffCamera, 1, 0);
    mEarthEffCamera = this->fields.mEarthCamera;
    if ( !mEarthEffCamera )
      goto LABEL_37;
    UnityEngine_Camera__set_orthographicSize(mEarthEffCamera, 1.0, 0);
    mEarthEffCamera = this->fields.mEarthEffCamera;
    if ( !mEarthEffCamera )
      goto LABEL_37;
    UnityEngine_Camera__set_orthographicSize(mEarthEffCamera, 1.0, 0);
    mEarthEffCamera = this->fields.mEarthCamera;
    if ( !mEarthEffCamera )
      goto LABEL_37;
    v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0);
    GameObjectExtensions__SetLocalPositionZ(v24, -50000.0, 0);
    mEarthEffCamera = this->fields.mEarthEffCamera;
    if ( !mEarthEffCamera )
      goto LABEL_37;
    v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0);
    GameObjectExtensions__SetLocalPositionZ(v25, -50000.0, 0);
    v26 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v26 = TerminalSceneComponent_TypeInfo;
    }
    EARTH_ASSET_NAME = v26->static_fields->EARTH_ASSET_NAME;
    v22 = int_TypeInfo;
    v23 = 1;
  }
  v39 = v23;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(v22, &v39, v14, v15, v16, v17, v18, v19);
  v28 = System_String__Format(EARTH_ASSET_NAME, v27, 0);
  this->fields.loadEarthAssetName = v28;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.loadEarthAssetName, (int32_t)v28, v29, v30);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  mEarthEffCamera = (UnityEngine_Camera_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_TerminalOverwriteMaster___);
  if ( !mEarthEffCamera )
    goto LABEL_37;
  if ( TerminalOverwriteMaster__TryGetOverwriteId(
         (TerminalOverwriteMaster_o *)mEarthEffCamera,
         9,
         &overwriteId,
         &overwriteEntity,
         0) )
  {
    v31 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v31 = TerminalSceneComponent_TypeInfo;
    }
    v32 = System_String__Format(v31->static_fields->EARTH_ASSET_NAME, (Il2CppObject *)overwriteId, 0);
    this->fields.loadEarthAssetName = v32;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.loadEarthAssetName, (int32_t)v32, v33, v34);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  loadEarthAssetName = this->fields.loadEarthAssetName;
  v37 = (AssetManager_o *)Instance;
  v38 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v38,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass173_0__SetEarthView_b__0__,
    0);
  if ( !v37 )
LABEL_37:
    sub_1C372B4(mEarthEffCamera);
  AssetManager__LoadAssetStorage(v37, loadEarthAssetName, v38, 1, 0);
}


void TerminalSceneComponent__SetQuestBoardInfoOff(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x0
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList || (mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager) == 0 )
    sub_1C372B4(mTerminalList);
  mQuestBoardListViewManager->fields._IsShowingInfo_k__BackingField = 0;
  ScrTerminalListTop__ShowingInfoAllOff(mTerminalList, 0);
}


void TerminalSceneComponent__SetQuestInfoResetReady(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  QuestInformationComponent_o *mQuestInformation; // x0

  mQuestInformation = this->fields.mQuestInformation;
  if ( !mQuestInformation )
    sub_1C372B4(0);
  QuestInformationComponent__SetResetReady(mQuestInformation, 0);
}


void TerminalSceneComponent__SetState(TerminalSceneComponent_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4C45375 & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_TerminalSceneComponent__setState__);
    byte_4C45375 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C372B4(0);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_332D0A4 *)Method_CStateManager_TerminalSceneComponent__setState__);
}


void TerminalSceneComponent__SetupStandServant(
        TerminalSceneComponent_o *this,
        UserServantEntity_o *usd,
        bool isSlideIn,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v9; // x21
  __int64 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  StandFigureSlideComponent_o *mTerminalServant; // x22
  System_Action_o *v16; // x23
  struct StandFigureSlideComponent_o *v17; // x19
  System_Action_o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C4534B & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass190_0__SetupStandServant_b__0__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass190_0__SetupStandServant_b__1__);
    sub_1C37058(&TerminalSceneComponent___c__DisplayClass190_0_TypeInfo);
    byte_4C4534B = 1;
  }
  v9 = sub_1C372A4(TerminalSceneComponent___c__DisplayClass190_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_7;
  *(_BYTE *)(v9 + 16) = isSlideIn;
  *(_QWORD *)(v9 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 32) = endAction;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)endAction, v13, v14);
  mTerminalServant = this->fields.mTerminalServant;
  v16 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v9,
    Method_TerminalSceneComponent___c__DisplayClass190_0__SetupStandServant_b__0__,
    0);
  if ( !mTerminalServant
    || (StandFigureSlideComponent__Setup(mTerminalServant, usd, 0, v16, 0),
        v17 = this->fields.mTerminalServant,
        v18 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v9,
          Method_TerminalSceneComponent___c__DisplayClass190_0__SetupStandServant_b__1__,
          0),
        !v17) )
  {
LABEL_7:
    sub_1C372B4(v10);
  }
  v17->fields.mBtnAct = v18;
  sub_1C36FFC((CGThumbnailListItem_o *)&v17->fields.mBtnAct, (int32_t)v18, v19, v20);
}


void TerminalSceneComponent__StartEventDailyPoint(
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
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.afterEventDailyPoint, (int32_t)callback, v7, v8);
    TerminalSceneComponent__requestEventDailyPoint(this, eventId, v9);
  }
  else
  {
    ActionExtensions__Call(callback, 0);
  }
}


void TerminalSceneComponent__StartWindowMessage(
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Action_object__o *v16; // x20
  Il2CppObject *v17; // x21
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Action_object__o *v23; // x20
  Il2CppObject *v24; // x21
  struct TerminalSceneComponent___c_StaticFields *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Action_object__o *v30; // x20
  Il2CppObject *v31; // x21
  struct TerminalSceneComponent___c_StaticFields *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  ActionChain_o *v35; // x20

  if ( (byte_4C45355 & 1) == 0 )
  {
    sub_1C37058(&ActionChain_TypeInfo);
    sub_1C37058(&System_Action_Action____TypeInfo);
    sub_1C37058(&System_Action_Action__TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent__StartWindowMessage_b__201_0__);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent___c__StartWindowMessage_b__201_1__);
    sub_1C37058(&Method_TerminalSceneComponent___c__StartWindowMessage_b__201_2__);
    sub_1C37058(&Method_TerminalSceneComponent___c__StartWindowMessage_b__201_3__);
    sub_1C37058(&TerminalSceneComponent___c_TypeInfo);
    byte_4C45355 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3EC65 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3EC65 = 1;
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
    if ( !byte_4C453CB )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C453CB = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    if ( !System_String__IsNullOrEmpty(v6->static_fields->_QuestWindowMessage_k__BackingField, 0) )
    {
      v10 = sub_1C37100(System_Action_Action____TypeInfo, 4);
      v11 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
      System_Action_object____ctor(
        v11,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent__StartWindowMessage_b__201_0__,
        0);
      if ( v10 )
      {
        if ( !*(_DWORD *)(v10 + 24) )
          goto LABEL_55;
        *(_QWORD *)(v10 + 32) = v11;
        sub_1C36FFC((CGThumbnailListItem_o *)(v10 + 32), (int32_t)v11, v12, v13);
        v7 = TerminalSceneComponent___c_TypeInfo;
        if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
          v7 = TerminalSceneComponent___c_TypeInfo;
        }
        v16 = *(System_Action_object__o **)(*((_QWORD *)v7 + 23) + 40LL);
        if ( !v16 )
        {
          if ( !*((_DWORD *)v7 + 56) )
          {
            j_il2cpp_runtime_class_init_0(v7);
            v7 = TerminalSceneComponent___c_TypeInfo;
          }
          v17 = (Il2CppObject *)**((_QWORD **)v7 + 23);
          v16 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
          System_Action_object____ctor(v16, v17, Method_TerminalSceneComponent___c__StartWindowMessage_b__201_1__, 0);
          static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
          static_fields->__9__201_1 = (struct System_Action_Action__o *)v16;
          sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__201_1, (int32_t)v16, v19, v20);
        }
        if ( *(_DWORD *)(v10 + 24) <= 1u )
          goto LABEL_55;
        *(_QWORD *)(v10 + 40) = v16;
        sub_1C36FFC((CGThumbnailListItem_o *)(v10 + 40), (int32_t)v16, v14, v15);
        v7 = TerminalSceneComponent___c_TypeInfo;
        if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
          v7 = TerminalSceneComponent___c_TypeInfo;
        }
        v23 = *(System_Action_object__o **)(*((_QWORD *)v7 + 23) + 48LL);
        if ( !v23 )
        {
          if ( !*((_DWORD *)v7 + 56) )
          {
            j_il2cpp_runtime_class_init_0(v7);
            v7 = TerminalSceneComponent___c_TypeInfo;
          }
          v24 = (Il2CppObject *)**((_QWORD **)v7 + 23);
          v23 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
          System_Action_object____ctor(v23, v24, Method_TerminalSceneComponent___c__StartWindowMessage_b__201_2__, 0);
          v25 = TerminalSceneComponent___c_TypeInfo->static_fields;
          v25->__9__201_2 = (struct System_Action_Action__o *)v23;
          sub_1C36FFC((CGThumbnailListItem_o *)&v25->__9__201_2, (int32_t)v23, v26, v27);
        }
        if ( *(_DWORD *)(v10 + 24) <= 2u )
          goto LABEL_55;
        *(_QWORD *)(v10 + 48) = v23;
        sub_1C36FFC((CGThumbnailListItem_o *)(v10 + 48), (int32_t)v23, v21, v22);
        v7 = TerminalSceneComponent___c_TypeInfo;
        if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
          v7 = TerminalSceneComponent___c_TypeInfo;
        }
        v30 = *(System_Action_object__o **)(*((_QWORD *)v7 + 23) + 56LL);
        if ( !v30 )
        {
          if ( !*((_DWORD *)v7 + 56) )
          {
            j_il2cpp_runtime_class_init_0(v7);
            v7 = TerminalSceneComponent___c_TypeInfo;
          }
          v31 = (Il2CppObject *)**((_QWORD **)v7 + 23);
          v30 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
          System_Action_object____ctor(v30, v31, Method_TerminalSceneComponent___c__StartWindowMessage_b__201_3__, 0);
          v32 = TerminalSceneComponent___c_TypeInfo->static_fields;
          v32->__9__201_3 = (struct System_Action_Action__o *)v30;
          sub_1C36FFC((CGThumbnailListItem_o *)&v32->__9__201_3, (int32_t)v30, v33, v34);
        }
        if ( *(_DWORD *)(v10 + 24) <= 3u )
LABEL_55:
          sub_1C372BC(v7);
        *(_QWORD *)(v10 + 56) = v30;
        sub_1C36FFC((CGThumbnailListItem_o *)(v10 + 56), (int32_t)v30, v28, v29);
        v35 = (ActionChain_o *)sub_1C372A4(ActionChain_TypeInfo);
        ActionChain___ctor_49040972(v35, (System_Action_Action__array *)v10, 0);
        if ( v35 )
        {
          ChainableActionBase__Execute((ChainableActionBase_o *)v35, 0);
          return;
        }
      }
LABEL_54:
      sub_1C372B4(v7);
    }
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v7, 0, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__InitMessageWindowData(0);
  ActionExtensions__Call(callbackFunc, 0);
}


void TerminalSceneComponent__TriggerEventEffectsNext(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C45358 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C37058(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C45358 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_33A10EC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_15;
  if ( EventDetailEntity__isTower((EventDetailEntity_o *)entity, 0) )
  {
    Instance = (DataManager_o *)this->fields.mTitleInfo;
    if ( !Instance )
      goto LABEL_15;
    TitleInfoControl__EventTowerStart((TitleInfoControl_o *)Instance, (EventDetailEntity_o *)entity, callback, 0);
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_15;
  if ( !EventDetailEntity__IsSuperBoss((EventDetailEntity_o *)entity, 0) )
    return;
  Instance = (DataManager_o *)this->fields.mTitleInfo;
  if ( !Instance )
LABEL_15:
    sub_1C372B4(Instance);
  TitleInfoControl__CheckSuperBossHpAnim((TitleInfoControl_o *)Instance, callback, 0);
}


bool TerminalSceneComponent__TryPlayGrandBgm(
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


void TerminalSceneComponent__Update(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  CStateManager_T__o *mFSM; // x0
  ScrTerminalMap_o *mTerminalMap; // x20
  _BOOL8 IsMapTouchEnabled; // x0

  if ( (byte_4C4535A & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_TerminalSceneComponent__update__);
    sub_1C37058(&CTouch_TypeInfo);
    byte_4C4535A = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0);
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_332D080 *)Method_CStateManager_TerminalSceneComponent__update__);
  mTerminalMap = this->fields.mTerminalMap;
  IsMapTouchEnabled = TerminalSceneComponent__IsMapTouchEnabled(this, v3);
  if ( !mTerminalMap )
    sub_1C372B4(IsMapTouchEnabled);
  ScrTerminalMap__ProcessMapCamera(mTerminalMap, IsMapTouchEnabled, 0);
}


void TerminalSceneComponent__UpdateCompleteMissionIconUI(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ScrPlayerStatus_o *mPlayerStatus; // x0

  mPlayerStatus = this->fields.mPlayerStatus;
  if ( !mPlayerStatus )
    sub_1C372B4(0);
  ScrPlayerStatus__UpdateCompleteMissionIconUI(mPlayerStatus, 0);
}


void TerminalSceneComponent__UpdateQuestBoardList(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x8

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList || (this = (TerminalSceneComponent_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0 )
    sub_1C372B4(this);
  QuestBoardListViewManager__SetupDisp((QuestBoardListViewManager_o *)this, 1, 0);
}


void TerminalSceneComponent__UpdateTitleEventInfo(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *mTitleInfo; // x0

  mTitleInfo = this->fields.mTitleInfo;
  if ( !mTitleInfo )
    sub_1C372B4(0);
  TitleInfoControl__UpdateEventItemInfo(mTitleInfo, 0);
}


System_Collections_IEnumerator_o *TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195_o *v2; // x19

  if ( (byte_4C4534F & 1) == 0 )
  {
    sub_1C37058(&TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195_TypeInfo);
    byte_4C4534F = 1;
  }
  v2 = (TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195_o *)sub_1C372A4(TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195_TypeInfo);
  TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195___ctor(v2, 0, 0);
  return (System_Collections_IEnumerator_o *)v2;
}


bool TerminalSceneComponent___CoWaitBlankEarthActionEnd_b__259_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *mTerminalList; // x0

  if ( (byte_4C4538E & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C4538E = 1;
  }
  mTerminalList = (CommonUI_o *)this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_9;
  if ( !ScrTerminalListTop__IsBlankEarthAction((ScrTerminalListTop_o *)mTerminalList, 0) )
  {
    mTerminalList = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( mTerminalList )
      return !CommonUI__IsActive_NotifiDialog(mTerminalList, 0);
LABEL_9:
    sub_1C372B4(mTerminalList);
  }
  return 0;
}


bool TerminalSceneComponent___CoWaitTerminalTopEffectEnd_b__258_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *mTerminalList; // x0

  if ( (byte_4C4538D & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C4538D = 1;
  }
  mTerminalList = (CommonUI_o *)this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_9;
  if ( !ScrTerminalListTop__CheckTerminalTopEffect((ScrTerminalListTop_o *)mTerminalList, 0) )
  {
    mTerminalList = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( mTerminalList )
      return !CommonUI__IsActive_NotifiDialog(mTerminalList, 0);
LABEL_9:
    sub_1C372B4(mTerminalList);
  }
  return 0;
}


bool TerminalSceneComponent___OpenExchangeDialogue_b__262_3(
        TerminalSceneComponent_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  return !TerminalSceneComponent__IsNotDisplayCostume(this, x, method);
}


void TerminalSceneComponent___StartWindowMessage_b__201_0(
        TerminalSceneComponent_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct ScrTerminalMap_o *mTerminalMap; // x8
  TerminalSceneComponent_o *v4; // x20
  struct ScrTerminalListTop_o *mTerminalList; // x8

  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap
    || (v4 = this, (this = (TerminalSceneComponent_o *)mTerminalMap->fields.spotMaskObj) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0),
        (mTerminalList = v4->fields.mTerminalList) == 0)
    || (this = (TerminalSceneComponent_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0 )
  {
    sub_1C372B4(this);
  }
  QuestBoardListViewManager__SetMode((QuestBoardListViewManager_o *)this, 4, action, 0, 0, 0, 0);
}


bool TerminalSceneComponent___beginInitialize_b__172_0(
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
  if ( (byte_4C45389 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_EventRaidMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent__beginInitialize_b__172_3__);
    this = (TerminalSceneComponent_o *)sub_1C37058(&Method_TerminalSceneComponent__beginInitialize_b__172_4__);
    byte_4C45389 = 1;
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
    this = (TerminalSceneComponent_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_25;
    v7 = v4->fields.mTerminalMap;
    if ( !v7 )
      goto LABEL_30;
    if ( !v7->fields.isRaidMap )
      goto LABEL_25;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (TerminalSceneComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventRaidMaster___);
    v8 = v4->fields.mTerminalMap;
    if ( !v8 )
      goto LABEL_30;
    mWarEnt = v8->fields.mWarEnt;
    if ( !mWarEnt || !this )
      goto LABEL_30;
    if ( EventRaidMaster__GetRaidGorupMax((EventRaidMaster_o *)this, mWarEnt->fields.eventId, 0) >= 1 )
    {
      v10 = v4->fields.mTerminalMap;
      v11 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)v4, Method_TerminalSceneComponent__beginInitialize_b__172_3__, 0);
      if ( v10 )
      {
        ScrTerminalMap__BeginRaidUpdateRequest(v10, v11, 0);
        return !gotNewServant;
      }
    }
    else
    {
LABEL_25:
      this = (TerminalSceneComponent_o *)v4->fields.mTitleInfo;
      if ( this )
      {
        TitleInfoControl__InitEventAlphaAnim((TitleInfoControl_o *)this, 0);
        mTitleInfo = v4->fields.mTitleInfo;
        v13 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(v13, (Il2CppObject *)v4, Method_TerminalSceneComponent__beginInitialize_b__172_4__, 0);
        if ( mTitleInfo )
        {
          TitleInfoControl__UpdateEventInfo(mTitleInfo, v13, 0);
          this = (TerminalSceneComponent_o *)v4->fields.mTitleInfo;
          if ( this )
          {
            TitleInfoControl__FrameIn((TitleInfoControl_o *)this, 0, 0);
            return !gotNewServant;
          }
        }
      }
    }
LABEL_30:
    sub_1C372B4(this);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3D786 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D786 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsAutoResume_k__BackingField = 1;
  this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 34, 1, 0, 0);
  return !gotNewServant;
}


void TerminalSceneComponent___beginInitialize_b__172_1(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ScrPlayerStatus_o *mPlayerStatus; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8

  mPlayerStatus = this->fields.mPlayerStatus;
  if ( !mPlayerStatus
    || (ScrPlayerStatus__mfInitUserData(mPlayerStatus, 0), (mTerminalList = this->fields.mTerminalList) == 0)
    || (mPlayerStatus = (ScrPlayerStatus_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0 )
  {
    sub_1C372B4(mPlayerStatus);
  }
  QuestBoardListViewManager__SetupDisp((QuestBoardListViewManager_o *)mPlayerStatus, 1, 0);
}


void TerminalSceneComponent___beginInitialize_b__172_2(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  ScrTerminalMap_o *mTerminalMap; // x19

  if ( (byte_4C4538B & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C4538B = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0),
        (Instance = (AvalonSceneManager_o *)this->fields.mEarthCore) == 0)
    || (mTerminalMap = this->fields.mTerminalMap,
        Instance = (AvalonSceneManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0),
        !mTerminalMap) )
  {
    sub_1C372B4(Instance);
  }
  ScrTerminalMap__SetCore(mTerminalMap, (UnityEngine_GameObject_o *)Instance, 0);
}


void TerminalSceneComponent___beginInitialize_b__172_3(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v4; // x0
  int32_t WarId_k__BackingField; // w21
  System_Action_o *v6; // x22
  __int64 v7; // x0
  System_Collections_IEnumerator_o *v8; // x1

  if ( (byte_4C4538A & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent__beginInitialize_b__172_5__);
    byte_4C4538A = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3D397 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D397 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v4->static_fields->_WarId_k__BackingField;
  v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__172_5__, 0);
  if ( !Instance )
    sub_1C372B4(v7);
  v8 = QuestTree__mfBaseTreeUpdateWithOpenCheck((QuestTree_o *)Instance, WarId_k__BackingField, v6, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v8, 0);
}


void TerminalSceneComponent___beginInitialize_b__172_4(TerminalSceneComponent_o *this, const MethodInfo *method)
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
  this = (TerminalSceneComponent_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v3->fields.mTerminalMap;
    if ( v5 )
    {
      mWarEnt = v5->fields.mWarEnt;
      if ( mWarEnt )
      {
        TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(v3, mWarEnt->fields.eventId, 0, v4);
        return;
      }
    }
LABEL_8:
    sub_1C372B4(this);
  }
}


void TerminalSceneComponent___beginInitialize_b__172_5(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ScrTerminalListTop_o *mTerminalList; // x0

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList
    || (ScrTerminalListTop__UpdateList(mTerminalList, 0),
        (mTerminalList = (ScrTerminalListTop_o *)this->fields.mTerminalMap) == 0)
    || (ScrTerminalMap__UpdateAllSpotGameObject((ScrTerminalMap_o *)mTerminalList, 0),
        (mTerminalList = (ScrTerminalListTop_o *)this->fields.mTerminalMap) == 0)
    || (ScrTerminalMap__UpdateAllMapGimmickComponent((ScrTerminalMap_o *)mTerminalList, 0),
        (mTerminalList = (ScrTerminalListTop_o *)this->fields.mTerminalMap) == 0) )
  {
    sub_1C372B4(mTerminalList);
  }
  ScrTerminalMap__UpdateEventRaidUI((ScrTerminalMap_o *)mTerminalList, 0);
}


void TerminalSceneComponent___callbackEventDailyPoint_b__224_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.afterEventDailyPoint, 0);
}


void TerminalSceneComponent___mfsmfInitTable_b__221_0(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_o *v2; // x19
  PlayMakerFSM_o *myFSM; // x0

  v2 = this;
  if ( (byte_4C4538C & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_1C37058(&StringLiteral_5504/*"EVENTLISTUP_END"*/);
    byte_4C4538C = 1;
  }
  TerminalSceneComponent__deleteQuestMovie(this, method);
  myFSM = v2->fields.myFSM;
  if ( !myFSM )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_5504/*"EVENTLISTUP_END"*/, 0);
}


void TerminalSceneComponent__beginFinish(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int32_t quitType; // w8

  quitType = this->fields.quitType;
  if ( !quitType )
    quitType = 2;
  this->fields.quitType = quitType;
  TerminalSceneComponent__quit(this, method);
}


void TerminalSceneComponent__beginInitialize(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  TerminalPramsManager_c *v5; // x0
  QuestAfterAction_o *Instance; // x0
  CommonUI_o *v7; // x21
  TerminalPramsManager_c *v8; // x0
  BalanceConfig_c *v9; // x0
  int32_t OrdealCallWarId; // w21
  TerminalPramsManager_c *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct UnityEngine_Camera_o *mUICamera; // x20
  CTouch_c *v15; // x0
  struct CTouch_StaticFields *static_fields; // x0
  struct CStateManager_TerminalSceneComponent__o **p_mFSM; // x20
  CStateManager_T__o *v18; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v22; // x22
  CStateManager_T__o *v23; // x21
  Il2CppObject *v24; // x22
  CStateManager_T__o *v25; // x21
  Il2CppObject *v26; // x22
  CStateManager_T__o *v27; // x21
  Il2CppObject *v28; // x22
  CStateManager_T__o *v29; // x21
  Il2CppObject *v30; // x22
  CStateManager_T__o *v31; // x21
  Il2CppObject *v32; // x22
  CStateManager_T__o *v33; // x21
  Il2CppObject *v34; // x22
  CStateManager_T__o *v35; // x21
  Il2CppObject *v36; // x22
  CStateManager_T__o *v37; // x21
  Il2CppObject *v38; // x22
  CStateManager_T__o *v39; // x21
  Il2CppObject *v40; // x22
  CStateManager_T__o *v41; // x20
  Il2CppObject *v42; // x21
  const MethodInfo *v43; // x2
  ScrPlayerStatus_o *mPlayerStatus; // x20
  System_Func_bool__bool__o *v45; // x21
  struct ScrPlayerStatus_o *v46; // x21
  System_Action_o *v47; // x20
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct ScrTerminalMap_o *mTerminalMap; // x8
  System_Action_o *v51; // x20
  const MethodInfo *v52; // x2

  if ( (byte_4C4533C & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AndroidUtil_TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_CStateManager_TerminalSceneComponent___ctor__);
    sub_1C37058(&Method_CStateManager_TerminalSceneComponent__add__);
    sub_1C37058(&CStateManager_TerminalSceneComponent__TypeInfo);
    sub_1C37058(&CTouch_TypeInfo);
    sub_1C37058(&System_Func_bool__bool__TypeInfo);
    sub_1C37058(&ServantProfileEventJoinManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C37058(&TerminalSceneComponent_StateNormal_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_StateTutorial1_QuestArrow_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_StateTutorial1_SpotArrow_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_StateTutorial2_QuestArrow_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_StateTutorial2_SpotArrow_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_StateTutorial3_GachaArrow_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_StateTutorial3_MenuArrow_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_StateTutorial4_QuestArrow_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_StateTutorial4_SpotArrow_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_StateTutorial5_CombineArrow_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_StateTutorial5_MenuArrow_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent__beginInitialize_b__172_0__);
    sub_1C37058(&Method_TerminalSceneComponent__beginInitialize_b__172_1__);
    sub_1C37058(&Method_TerminalSceneComponent__beginInitialize_b__172_2__);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C4533C = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  AndroidUtil__DeleteOldSaveData(0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__Load_SaveData(0);
  if ( !byte_4C3F9BB )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F9BB = 1;
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
    if ( !byte_4C3F898 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3F898 = 1;
    }
    v4 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v4 = TerminalPramsManager_TypeInfo;
    }
    v4->static_fields->_DispState_k__BackingField = 0;
    if ( !byte_4C3FCB0 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      v4 = TerminalPramsManager_TypeInfo;
      byte_4C3FCB0 = 1;
    }
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = TerminalPramsManager_TypeInfo;
    }
    v4->static_fields->_SelectedStoryQuestId_k__BackingField = 0;
    TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(0);
    if ( !byte_4C3EBA0 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3EBA0 = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    v5->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
    TerminalPramsManager__TerminalSelectedRecollectionWarId_SaveData(0);
  }
  Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !v7 )
    goto LABEL_88;
  CommonUI__CheckChangeOtherConnectMarkFromEventId(
    v7,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId,
    1,
    0);
  Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  if ( QuestAfterAction__CheckChangeBlankEarth(Instance, 0) )
    goto LABEL_39;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C453C4 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C453C4 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  if ( v8->static_fields->_IsTransOrdealCall_k__BackingField )
  {
LABEL_39:
    v9 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    OrdealCallWarId = v9->static_fields->OrdealCallWarId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__SetAutoResumeByWarId(OrdealCallWarId, 0);
    if ( !byte_4C3FB5C )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3FB5C = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
    }
    v8->static_fields->_IsTransOrdealCall_k__BackingField = 0;
  }
  if ( !v8->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v8);
  if ( !byte_4C3FB58 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FB58 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->meSceneStatus = 1;
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  this->fields._IsReq_InitEarthRotateY_k__BackingField = 1;
  this->fields._onClosePresentBoxFlag_k__BackingField = 0;
  this->fields._FirstFadeTime_k__BackingField = 0.0;
  SkillLvMaster__AssertionSkillOverwriteByNowTime(0);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__init(0);
  mUICamera = this->fields.mUICamera;
  if ( !byte_4C3D498 )
  {
    sub_1C37058(&CTouch_TypeInfo);
    byte_4C3D498 = 1;
  }
  v15 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v15 = CTouch_TypeInfo;
  }
  static_fields = v15->static_fields;
  static_fields->mScreenCam = mUICamera;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->mScreenCam, (int32_t)mUICamera, v12, v13);
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v18 = (CStateManager_T__o *)sub_1C372A4(CStateManager_TerminalSceneComponent__TypeInfo);
    CStateManager_object____ctor(
      v18,
      (Il2CppObject *)this,
      11,
      (const MethodInfo_332CF70 *)Method_CStateManager_TerminalSceneComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_TerminalSceneComponent__o *)v18;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mFSM, (int32_t)v18, v19, v20);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v22 = (Il2CppObject *)sub_1C372A4(TerminalSceneComponent_StateNormal_TypeInfo);
    System_Object___ctor(v22, 0);
    if ( mFSM )
    {
      CStateManager_object___add(
        mFSM,
        0,
        (IState_T__o *)v22,
        (const MethodInfo_332D018 *)Method_CStateManager_TerminalSceneComponent__add__);
      v23 = (CStateManager_T__o *)*p_mFSM;
      v24 = (Il2CppObject *)sub_1C372A4(TerminalSceneComponent_StateTutorial1_SpotArrow_TypeInfo);
      System_Object___ctor(v24, 0);
      if ( v23 )
      {
        CStateManager_object___add(
          v23,
          1,
          (IState_T__o *)v24,
          (const MethodInfo_332D018 *)Method_CStateManager_TerminalSceneComponent__add__);
        v25 = (CStateManager_T__o *)*p_mFSM;
        v26 = (Il2CppObject *)sub_1C372A4(TerminalSceneComponent_StateTutorial1_QuestArrow_TypeInfo);
        System_Object___ctor(v26, 0);
        if ( v25 )
        {
          CStateManager_object___add(
            v25,
            2,
            (IState_T__o *)v26,
            (const MethodInfo_332D018 *)Method_CStateManager_TerminalSceneComponent__add__);
          v27 = (CStateManager_T__o *)*p_mFSM;
          v28 = (Il2CppObject *)sub_1C372A4(TerminalSceneComponent_StateTutorial2_SpotArrow_TypeInfo);
          System_Object___ctor(v28, 0);
          if ( v27 )
          {
            CStateManager_object___add(
              v27,
              3,
              (IState_T__o *)v28,
              (const MethodInfo_332D018 *)Method_CStateManager_TerminalSceneComponent__add__);
            v29 = (CStateManager_T__o *)*p_mFSM;
            v30 = (Il2CppObject *)sub_1C372A4(TerminalSceneComponent_StateTutorial2_QuestArrow_TypeInfo);
            System_Object___ctor(v30, 0);
            if ( v29 )
            {
              CStateManager_object___add(
                v29,
                4,
                (IState_T__o *)v30,
                (const MethodInfo_332D018 *)Method_CStateManager_TerminalSceneComponent__add__);
              v31 = (CStateManager_T__o *)*p_mFSM;
              v32 = (Il2CppObject *)sub_1C372A4(TerminalSceneComponent_StateTutorial3_MenuArrow_TypeInfo);
              System_Object___ctor(v32, 0);
              if ( v31 )
              {
                CStateManager_object___add(
                  v31,
                  5,
                  (IState_T__o *)v32,
                  (const MethodInfo_332D018 *)Method_CStateManager_TerminalSceneComponent__add__);
                v33 = (CStateManager_T__o *)*p_mFSM;
                v34 = (Il2CppObject *)sub_1C372A4(TerminalSceneComponent_StateTutorial3_GachaArrow_TypeInfo);
                System_Object___ctor(v34, 0);
                if ( v33 )
                {
                  CStateManager_object___add(
                    v33,
                    6,
                    (IState_T__o *)v34,
                    (const MethodInfo_332D018 *)Method_CStateManager_TerminalSceneComponent__add__);
                  v35 = (CStateManager_T__o *)*p_mFSM;
                  v36 = (Il2CppObject *)sub_1C372A4(TerminalSceneComponent_StateTutorial4_SpotArrow_TypeInfo);
                  System_Object___ctor(v36, 0);
                  if ( v35 )
                  {
                    CStateManager_object___add(
                      v35,
                      7,
                      (IState_T__o *)v36,
                      (const MethodInfo_332D018 *)Method_CStateManager_TerminalSceneComponent__add__);
                    v37 = (CStateManager_T__o *)*p_mFSM;
                    v38 = (Il2CppObject *)sub_1C372A4(TerminalSceneComponent_StateTutorial4_QuestArrow_TypeInfo);
                    System_Object___ctor(v38, 0);
                    if ( v37 )
                    {
                      CStateManager_object___add(
                        v37,
                        8,
                        (IState_T__o *)v38,
                        (const MethodInfo_332D018 *)Method_CStateManager_TerminalSceneComponent__add__);
                      v39 = (CStateManager_T__o *)*p_mFSM;
                      v40 = (Il2CppObject *)sub_1C372A4(TerminalSceneComponent_StateTutorial5_MenuArrow_TypeInfo);
                      System_Object___ctor(v40, 0);
                      if ( v39 )
                      {
                        CStateManager_object___add(
                          v39,
                          9,
                          (IState_T__o *)v40,
                          (const MethodInfo_332D018 *)Method_CStateManager_TerminalSceneComponent__add__);
                        v41 = (CStateManager_T__o *)*p_mFSM;
                        v42 = (Il2CppObject *)sub_1C372A4(TerminalSceneComponent_StateTutorial5_CombineArrow_TypeInfo);
                        System_Object___ctor(v42, 0);
                        if ( v41 )
                        {
                          CStateManager_object___add(
                            v41,
                            10,
                            (IState_T__o *)v42,
                            (const MethodInfo_332D018 *)Method_CStateManager_TerminalSceneComponent__add__);
                          TerminalSceneComponent__SetState(this, 0, v43);
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
    sub_1C372B4(Instance);
  }
LABEL_73:
  Instance = (QuestAfterAction_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_88;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Instance, 0, 1, (System_String_o *)StringLiteral_1/*""*/, 1, 0);
  Instance = (QuestAfterAction_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_88;
  TitleInfoControl__changeTitleInfo_39845736((TitleInfoControl_o *)Instance, 1, 1, 0, 0);
  Instance = (QuestAfterAction_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_88;
  TitleInfoControl__setBackBtn_Terminal((TitleInfoControl_o *)Instance, 0, 0);
  Instance = (QuestAfterAction_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_88;
  TitleInfoControl__SetBackStoryButtonEnable((TitleInfoControl_o *)Instance, 0, 0);
  Instance = (QuestAfterAction_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_88;
  TitleInfoControl__SetBackRecollectionButtonEnable((TitleInfoControl_o *)Instance, 0, 0);
  Instance = (QuestAfterAction_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_88;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)Instance, 24, 0);
  Instance = (QuestAfterAction_o *)this->fields.mTerminalMap;
  if ( !Instance )
    goto LABEL_88;
  ScrTerminalMap__InitMapCamera((ScrTerminalMap_o *)Instance, 0);
  mPlayerStatus = this->fields.mPlayerStatus;
  v45 = (System_Func_bool__bool__o *)sub_1C372A4(System_Func_bool__bool__TypeInfo);
  System_Func_bool__bool____ctor(
    v45,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent__beginInitialize_b__172_0__,
    0);
  if ( !mPlayerStatus )
    goto LABEL_88;
  ScrPlayerStatus__SetCloseGiftAct(mPlayerStatus, v45, 0);
  v46 = this->fields.mPlayerStatus;
  v47 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v47, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__172_1__, 0);
  if ( !v46 )
    goto LABEL_88;
  v46->fields.mRecoverAct = v47;
  sub_1C36FFC((CGThumbnailListItem_o *)&v46->fields.mRecoverAct, (int32_t)v47, v48, v49);
  Instance = (QuestAfterAction_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_88;
  TitleInfoControl__setHeaderBgImg((TitleInfoControl_o *)Instance, 0, 0);
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_88;
  Instance = (QuestAfterAction_o *)mTerminalMap->fields.spotMaskObj;
  if ( !Instance )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  v51 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v51, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__172_2__, 0);
  TerminalSceneComponent__SetEarthView(this, v51, v52);
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  ServantProfileEventJoinManager__UpdateProfileServantEventJoin(0);
}


void TerminalSceneComponent__beginPause(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C45349 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C45349 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  this->fields.quitType = 3;
  TerminalSceneComponent__quit(this, v4);
}


void TerminalSceneComponent__beginResume(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct WarEntity_o *mWarEnt; // x8
  int32_t eventId; // w21
  TerminalPramsManager_c *v8; // x0
  TerminalPramsManager_c *v9; // x0
  int32_t WarId_k__BackingField; // w20
  bool IsGrandQuestWarId; // w20
  const MethodInfo *v12; // x2
  bool IsEventPeriod; // w21
  TerminalPramsManager_c *v14; // x0
  TerminalPramsManager_c *v15; // x0
  struct ScrTerminalMap_o *v16; // x8
  const MethodInfo *v17; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C45348 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C37058(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C37058(&ScrTerminalListTop_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C45348 = 1;
  }
  entity = 0;
  this->fields.isFadeInAfterResumeLoad = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
  mTerminalList = this->fields.mTerminalList;
  this->fields._IsReq_InitEarthRotateY_k__BackingField = 0;
  if ( !mTerminalList )
    goto LABEL_51;
  Instance = (Il2CppObject *)mTerminalList->fields.mQuestBoardListViewManager;
  if ( !Instance )
    goto LABEL_51;
  ListViewManager__DestroyList((ListViewManager_o *)Instance, 0);
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_51;
  mWarEnt = mTerminalMap->fields.mWarEnt;
  if ( mWarEnt )
    eventId = mWarEnt->fields.eventId;
  else
    eventId = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FFAA )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FFAA = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  if ( v8->static_fields->meSceneStatus != 3 )
  {
    if ( !v8->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v8);
    if ( !byte_4C3D397 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3D397 = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    WarId_k__BackingField = v9->static_fields->_WarId_k__BackingField;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    IsGrandQuestWarId = ScrTerminalListTop__IsGrandQuestWarId(WarId_k__BackingField, 0);
    if ( !eventId )
      goto LABEL_54;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_51;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_51;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            &entity,
            eventId,
            (const MethodInfo_33A10EC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    {
LABEL_54:
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( byte_4C3FB58 )
        goto LABEL_39;
      goto LABEL_38;
    }
    Instance = entity;
    if ( entity )
    {
      IsEventPeriod = EventEntity__IsEventPeriod((EventEntity_o *)entity, 0, 0);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( IsEventPeriod )
      {
        if ( byte_4C3FB58 )
        {
LABEL_39:
          v14 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v14 = TerminalPramsManager_TypeInfo;
          }
          v14->static_fields->meSceneStatus = 2;
          if ( !IsGrandQuestWarId )
            this->fields.isFadeInAfterResumeLoad = 1;
          goto LABEL_50;
        }
LABEL_38:
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3FB58 = 1;
        goto LABEL_39;
      }
      if ( !byte_4C3FB58 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3FB58 = 1;
      }
      v15 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v15 = TerminalPramsManager_TypeInfo;
      }
      v15->static_fields->meSceneStatus = 1;
      TerminalSceneComponent__CallQuestInformationCloseAtAll(this, 0, v12);
      v16 = this->fields.mTerminalMap;
      if ( v16 )
      {
        Instance = (Il2CppObject *)v16->fields.spotMaskObj;
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
          TerminalSceneComponent__SetQuestBoardInfoOff(this, v17);
          goto LABEL_50;
        }
      }
    }
LABEL_51:
    sub_1C372B4(Instance);
  }
LABEL_50:
  this->fields.quitType = 1;
  SceneRootComponent__beginResume_41481372((SceneRootComponent_o *)this, 0);
}


void TerminalSceneComponent__beginStartUp(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(TerminalSceneComponent_o *, _QWORD, const MethodInfo *))this->klass->vtable._5_beginStartUp.methodPtr)(
    this,
    0,
    this->klass->vtable._5_beginStartUp.method);
}


void TerminalSceneComponent__beginStartUp_45300560(
        TerminalSceneComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 naturalAligment; // x10
  Il2CppObject *v7; // x1
  TerminalSceneComponent_c *v8; // x0
  const MethodInfo *v9; // x2
  TerminalPramsManager_c *v10; // x0
  TerminalPramsManager_c *v11; // x0
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  struct UserServantEntity_array *UserServantListFromDeckIsTerminal; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1
  struct UserServantEntity_array *mStandSvtDatas; // x8
  __int64 mStandSvtIdx; // x9
  UserServantEntity_o *NextStandServant; // x20
  bool isSavedMemoryMode; // w22
  System_Action_o *v22; // x0
  System_Action_o *v23; // x21
  const MethodInfo *v24; // x4
  const MethodInfo *v25; // x3
  System_Collections_IEnumerator_o *Async; // x1

  if ( (byte_4C4533F & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C37058(&OptionManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent_SendMessageStartUpAndResume__);
    sub_1C37058(&Method_TerminalSceneComponent__beginStartUp_b__176_0__);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    sub_1C37058(&TerminalTransitionInfo_TypeInfo);
    sub_1C37058(&TutorialFlag_TypeInfo);
    byte_4C4533F = 1;
  }
  if ( data
    && (naturalAligment = TerminalTransitionInfo_TypeInfo->_2.naturalAligment,
        data->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (TerminalTransitionInfo_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == TerminalTransitionInfo_TypeInfo )
      v7 = data;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  this->fields._TransitionInfo_k__BackingField = (struct TerminalTransitionInfo_o *)v7;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._TransitionInfo_k__BackingField, (int32_t)v7, (int32_t)method, v3);
  v8 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v8 = TerminalSceneComponent_TypeInfo;
  }
  UnityEngine_RenderSettings__set_ambientLight(v8->static_fields->DEFAULT_AMBIENT_LIGHT_COLOR, 0);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 1, 32, 0);
  MainMenuBar__setMenuActive(1, this->fields.mUICamera, 0);
  TerminalSceneComponent__SetDispStandServant(this, 1, v9);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C453C5 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C453C5 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  if ( !v10->static_fields->_IsDispDone_UIStandFigure_k__BackingField )
  {
    if ( !v10->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v10);
    if ( !byte_4C453C6 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C453C6 = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    v11->static_fields->_IsDispDone_UIStandFigure_k__BackingField = 1;
    if ( !byte_4C453C7 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
      byte_4C453C7 = 1;
    }
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = TerminalPramsManager_TypeInfo;
    }
    v11->static_fields->_IsDispUIStandFigure_k__BackingField = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Instance = (Il2CppObject *)TutorialFlag__Get_40427704(126, 0);
  if ( !MasterData_object
    || (((unsigned __int8)Instance & 1) == 0
      ? (UserServantListFromDeckIsTerminal = UserDeckMaster__GetUserServantListFromDeckIsTerminal(
                                               (UserDeckMaster_o *)MasterData_object,
                                               0))
      : (UserServantListFromDeckIsTerminal = UserDeckMaster__GetUserServantListFromDeckReaveHeroine(
                                               (UserDeckMaster_o *)MasterData_object,
                                               0)),
        this->fields.mStandSvtDatas = UserServantListFromDeckIsTerminal,
        sub_1C36FFC(
          (CGThumbnailListItem_o *)&this->fields.mStandSvtDatas,
          (int32_t)UserServantListFromDeckIsTerminal,
          v15,
          v16),
        (mStandSvtDatas = this->fields.mStandSvtDatas) == 0) )
  {
LABEL_45:
    sub_1C372B4(Instance);
  }
  mStandSvtIdx = this->fields.mStandSvtIdx;
  if ( (unsigned int)mStandSvtIdx >= LODWORD(mStandSvtDatas->max_length) )
    sub_1C372BC(Instance);
  NextStandServant = mStandSvtDatas->m_Items[mStandSvtIdx];
  if ( !NextStandServant )
    NextStandServant = TerminalSceneComponent__GetNextStandServant(this, v17);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  isSavedMemoryMode = OptionManager__isSavedMemoryMode(0);
  v22 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  v23 = v22;
  if ( isSavedMemoryMode )
  {
    System_Action___ctor(v22, (Il2CppObject *)this, Method_TerminalSceneComponent__beginStartUp_b__176_0__, 0);
    TerminalSceneComponent__SetupStandServant(this, NextStandServant, 0, v23, v24);
  }
  else
  {
    System_Action___ctor(v22, (Il2CppObject *)this, Method_TerminalSceneComponent_SendMessageStartUpAndResume__, 0);
    Async = TerminalSceneComponent__LoadAsync(this, NextStandServant, v23, v25);
    UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, Async, 0);
  }
}


void TerminalSceneComponent__callbackEventDailyPoint(
        TerminalSceneComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *v4; // x19
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct WarEntity_o *mWarEnt; // x22
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *v9; // x21
  TerminalPramsManager_c *v10; // x0
  CGThumbnailListItem_o *p_eventDailyPoint_k__BackingField; // x0
  int32_t monitor_high; // w21
  TerminalPramsManager_c *v13; // x0
  System_DateTime_o v14; // x0
  int64_t Time_41366368; // x21
  TerminalPramsManager_c *v16; // x0
  int32_t eventId; // w21
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct ScrTerminalListTop_o *v19; // x8
  UnityEngine_GameObject_o *mActionPanel; // x21
  TitleInfoControl_o *mTitleInfo; // x20
  System_Action_o *v22; // x22
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4C4536A & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C37058(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C37058(&Method_JsonManager_Deserialize_EventDailyPoint___);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent__callbackEventDailyPoint_b__224_0__);
    sub_1C37058(&StringLiteral_11082/*"REQUEST_NG"*/);
    sub_1C37058(&StringLiteral_22215/*"ng"*/);
    this = (TerminalSceneComponent_o *)sub_1C37058(&StringLiteral_25245/*"{}"*/);
    byte_4C4536A = 1;
  }
  entity = 0;
  if ( !result )
    goto LABEL_46;
  if ( System_String__Equals_63596960(result, (System_String_o *)StringLiteral_22215/*"ng"*/, 0) )
  {
    this = (TerminalSceneComponent_o *)v4->fields.myFSM;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11082/*"REQUEST_NG"*/, 0);
      return;
    }
LABEL_46:
    sub_1C372B4(this);
  }
  this = (TerminalSceneComponent_o *)System_String__Equals_63596960(result, (System_String_o *)StringLiteral_25245/*"{}"*/, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_43;
  mTerminalMap = v4->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_46;
  mWarEnt = mTerminalMap->fields.mWarEnt;
  this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_46;
  this = (TerminalSceneComponent_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !mWarEnt || !this )
    goto LABEL_46;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          mWarEnt->fields.eventId,
          (const MethodInfo_33A10EC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
LABEL_43:
    this = (TerminalSceneComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !this )
      goto LABEL_46;
    MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0);
    ActionExtensions__Call(v4->fields.afterEventDailyPoint, 0);
  }
  else
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__Deserialize_object_(
           (Il2CppObject *)result,
           (const MethodInfo_3156F74 *)Method_JsonManager_Deserialize_EventDailyPoint___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C41BD9 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C41BD9 = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    p_eventDailyPoint_k__BackingField = (CGThumbnailListItem_o *)&v10->static_fields->_eventDailyPoint_k__BackingField;
    p_eventDailyPoint_k__BackingField->klass = (CGThumbnailListItem_c *)v9;
    sub_1C36FFC(p_eventDailyPoint_k__BackingField, (int32_t)v9, v7, v8);
    if ( !entity )
      goto LABEL_46;
    monitor_high = HIDWORD(entity[2].monitor);
    if ( !byte_4C453CC )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C453CC = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    v13->static_fields->_EventDailyPointItem_k__BackingField = monitor_high;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v14.fields._dateData = NetworkManager__getServerDateTime(0).fields._dateData;
    Time_41366368 = NetworkManager__getTime_41366368(v14, 0);
    if ( !byte_4C403DF )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C403DF = 1;
    }
    v16 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v16 = TerminalPramsManager_TypeInfo;
    }
    v16->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = Time_41366368;
    eventId = mWarEnt->fields.eventId;
    if ( !byte_4C403DE )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      v16 = TerminalPramsManager_TypeInfo;
      byte_4C403DE = 1;
    }
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = TerminalPramsManager_TypeInfo;
    }
    v16->static_fields->_EventDailyPointEventId_k__BackingField = eventId;
    TerminalPramsManager__EventDailyPointSave_SaveData(0);
    mTerminalList = v4->fields.mTerminalList;
    if ( !mTerminalList )
      goto LABEL_46;
    this = (TerminalSceneComponent_o *)mTerminalList->fields.mActionBgColl;
    if ( !this )
      goto LABEL_46;
    this = (TerminalSceneComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_46;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (TerminalSceneComponent_o *)v4->fields.mTitleInfo;
    if ( !this )
      goto LABEL_46;
    TitleInfoControl__UpdateEventInfo((TitleInfoControl_o *)this, 0, 0);
    v19 = v4->fields.mTerminalList;
    if ( !v19 )
      goto LABEL_46;
    mActionPanel = v19->fields.mActionPanel;
    mTitleInfo = v4->fields.mTitleInfo;
    v22 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v22, (Il2CppObject *)v4, Method_TerminalSceneComponent__callbackEventDailyPoint_b__224_0__, 0);
    if ( !mTitleInfo )
      goto LABEL_46;
    TitleInfoControl__EventDailyPointOpen(mTitleInfo, mActionPanel, v22, 0);
  }
}


void TerminalSceneComponent__callbackTopHome(
        TerminalSceneComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0
  System_Action_o *afterTopLogin; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C45365 & 1) == 0 )
  {
    sub_1C37058(&Method_JsonManager_Deserialize_TopHomeInfo___);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&StringLiteral_11084/*"REQUEST_OK"*/);
    sub_1C37058(&StringLiteral_11082/*"REQUEST_NG"*/);
    sub_1C37058(&StringLiteral_22215/*"ng"*/);
    byte_4C45365 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22215/*"ng"*/, 0) )
  {
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11082/*"REQUEST_NG"*/, 0);
      return;
    }
LABEL_11:
    sub_1C372B4(myFSM);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (PlayMakerFSM_o *)JsonManager__Deserialize_object_(
                              (Il2CppObject *)result,
                              (const MethodInfo_3156F74 *)Method_JsonManager_Deserialize_TopHomeInfo___);
  if ( !myFSM )
    goto LABEL_11;
  TopHomeRequest__setRecentRefreshTime(myFSM->fields.m_CachedPtr, 0);
  MainMenuBar__UpdateNoticeNumber(0);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_11;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11084/*"REQUEST_OK"*/, 0);
  afterTopLogin = this->fields.afterTopLogin;
  this->fields.isTopLoginBusy = 0;
  ActionExtensions__Call(afterTopLogin, 0);
  this->fields.afterTopLogin = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.afterTopLogin, 0, v7, v8);
}


void TerminalSceneComponent__callbackTopLogin(
        TerminalSceneComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x21
  Il2CppObject *Request_object; // x21
  PlayMakerFSM_o *myFSM; // x0
  PlayMakerFSM_o *v8; // x19
  System_Collections_Generic_IEnumerable_TSource__o *m_CachedPtr; // x0
  System_Collections_Generic_List_int__o *v10; // x20
  TerminalSceneComponent___c_c *v11; // x8
  System_Converter_TInput__TOutput__o *_9__217_0; // x21
  Il2CppObject *v13; // x22
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_String_array *v17; // x0
  System_String_o *v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x0
  System_Collections_Generic_List_int__o *v20; // x19
  TerminalSceneComponent___c_c *v21; // x8
  System_Converter_TInput__TOutput__o *_9__217_1; // x20
  Il2CppObject *v23; // x21
  struct TerminalSceneComponent___c_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_String_array *v27; // x0
  System_String_o *v28; // x0

  if ( (byte_4C45364 & 1) == 0 )
  {
    sub_1C37058(&System_Converter_int__string__TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C37058(&Method_JsonManager_Deserialize_CommonUI_LoginResultData___);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ConvertAll_string___);
    sub_1C37058(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C37058(&Method_NetworkManager_getRequest_TopHomeRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent_callbackTopHome__);
    sub_1C37058(&Method_TerminalSceneComponent___c__callbackTopLogin_b__217_0__);
    sub_1C37058(&Method_TerminalSceneComponent___c__callbackTopLogin_b__217_1__);
    sub_1C37058(&TerminalSceneComponent___c_TypeInfo);
    sub_1C37058(&StringLiteral_19664/*"freeShopIds"*/);
    sub_1C37058(&StringLiteral_11084/*"REQUEST_OK"*/);
    sub_1C37058(&StringLiteral_23091/*"returnRarePriShopIds"*/);
    sub_1C37058(&StringLiteral_811/*","*/);
    byte_4C45364 = 1;
  }
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v5, (Il2CppObject *)this, Method_TerminalSceneComponent_callbackTopHome__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_TopHomeRequest___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FE39 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FE39 = 1;
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
    (bool)myFSM[2].fields.addEventHandlers[4].fields.method_info,
    0);
  if ( (((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Request_object->klass->vtable[7].methodPtr)(
          Request_object,
          Request_object->klass->vtable[7].method)
      & 1) == 0 )
    goto LABEL_19;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !TerminalPramsManager__IsAutoForTimeProgressEvents(0) || TopHomeRequest__IsExpirationDateUpdateEventMap(0) )
  {
    myFSM = this->fields.myFSM;
    if ( !myFSM )
      goto LABEL_45;
    PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11084/*"REQUEST_OK"*/, 0);
    this->fields.isTopLoginBusy = 0;
  }
  else
  {
LABEL_19:
    RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
  }
  if ( System_String__IsNullOrEmpty(result, 0) )
    return;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (PlayMakerFSM_o *)JsonManager__Deserialize_object_(
                              (Il2CppObject *)result,
                              (const MethodInfo_3156F74 *)Method_JsonManager_Deserialize_CommonUI_LoginResultData___);
  if ( !myFSM )
LABEL_45:
    sub_1C372B4(myFSM);
  v8 = myFSM;
  m_CachedPtr = (System_Collections_Generic_IEnumerable_TSource__o *)myFSM[2].fields.m_CachedPtr;
  if ( m_CachedPtr )
  {
    myFSM = (PlayMakerFSM_o *)System_Linq_Enumerable__ToList_int_(
                                m_CachedPtr,
                                (const MethodInfo_312BD24 *)Method_System_Linq_Enumerable_ToList_int___);
    v10 = (System_Collections_Generic_List_int__o *)myFSM;
    v11 = TerminalSceneComponent___c_TypeInfo;
    if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v11 = TerminalSceneComponent___c_TypeInfo;
    }
    _9__217_0 = (System_Converter_TInput__TOutput__o *)v11->static_fields->__9__217_0;
    if ( !_9__217_0 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = TerminalSceneComponent___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v11->static_fields->__9;
      _9__217_0 = (System_Converter_TInput__TOutput__o *)sub_1C372A4(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(
        _9__217_0,
        v13,
        Method_TerminalSceneComponent___c__callbackTopLogin_b__217_0__,
        0);
      static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
      static_fields->__9__217_0 = (struct System_Converter_int__string__o *)_9__217_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__217_0, (int32_t)_9__217_0, v15, v16);
    }
    if ( !v10 )
      goto LABEL_45;
    myFSM = (PlayMakerFSM_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                v10,
                                (System_Converter_T__TOutput__o *)_9__217_0,
                                (const MethodInfo_300F058 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !myFSM )
      goto LABEL_45;
    v17 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)myFSM,
                                   (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_string__ToArray__);
    v18 = System_String__Join((System_String_o *)StringLiteral_811/*","*/, v17, 0);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_19664/*"freeShopIds"*/, v18, 0);
  }
  monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v8[2].monitor;
  if ( monitor )
  {
    myFSM = (PlayMakerFSM_o *)System_Linq_Enumerable__ToList_int_(
                                monitor,
                                (const MethodInfo_312BD24 *)Method_System_Linq_Enumerable_ToList_int___);
    v20 = (System_Collections_Generic_List_int__o *)myFSM;
    v21 = TerminalSceneComponent___c_TypeInfo;
    if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v21 = TerminalSceneComponent___c_TypeInfo;
    }
    _9__217_1 = (System_Converter_TInput__TOutput__o *)v21->static_fields->__9__217_1;
    if ( !_9__217_1 )
    {
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = TerminalSceneComponent___c_TypeInfo;
      }
      v23 = (Il2CppObject *)v21->static_fields->__9;
      _9__217_1 = (System_Converter_TInput__TOutput__o *)sub_1C372A4(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(
        _9__217_1,
        v23,
        Method_TerminalSceneComponent___c__callbackTopLogin_b__217_1__,
        0);
      v24 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v24->__9__217_1 = (struct System_Converter_int__string__o *)_9__217_1;
      sub_1C36FFC((CGThumbnailListItem_o *)&v24->__9__217_1, (int32_t)_9__217_1, v25, v26);
    }
    if ( v20 )
    {
      myFSM = (PlayMakerFSM_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                  v20,
                                  (System_Converter_T__TOutput__o *)_9__217_1,
                                  (const MethodInfo_300F058 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
      if ( myFSM )
      {
        v27 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                       (System_Collections_Generic_List_object__o *)myFSM,
                                       (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_string__ToArray__);
        v28 = System_String__Join((System_String_o *)StringLiteral_811/*","*/, v27, 0);
        UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_23091/*"returnRarePriShopIds"*/, v28, 0);
        goto LABEL_44;
      }
    }
    goto LABEL_45;
  }
LABEL_44:
  UnityEngine_PlayerPrefs__Save(0);
}


// local variable allocation has failed, the output may be wrong!
void TerminalSceneComponent__changeScene(TerminalSceneComponent_o *this, int32_t type, const MethodInfo *method)
{
  if ( type == 91 )
    TerminalSceneComponent__ReleaseAssetToResume(this, *(const MethodInfo **)&type);
}


System_Collections_IEnumerator_o *TerminalSceneComponent__coFadein_WorldDisp(
        TerminalSceneComponent_o *this,
        float fadeTime,
        System_Action_o *endAct,
        bool isExecuteUnusedAssets,
        const MethodInfo *method)
{
  __int64 v9; // x22
  __int64 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C45350 & 1) == 0 )
  {
    sub_1C37058(&TerminalSceneComponent__coFadein_WorldDisp_d__196_TypeInfo);
    byte_4C45350 = 1;
  }
  v9 = sub_1C372A4(TerminalSceneComponent__coFadein_WorldDisp_d__196_TypeInfo);
  TerminalSceneComponent__coFadein_WorldDisp_d__196___ctor(
    (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)v9,
    0,
    0);
  if ( !v9 )
    sub_1C372B4(v10);
  *(_QWORD *)(v9 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v11, v12);
  *(float *)(v9 + 64) = fadeTime;
  *(_QWORD *)(v9 + 40) = endAct;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 40), (int32_t)endAct, v13, v14);
  *(_BYTE *)(v9 + 48) = isExecuteUnusedAssets;
  return (System_Collections_IEnumerator_o *)v9;
}


void TerminalSceneComponent__deleteQuestMovie(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int64_t Time; // x20
  DataManager_o *Master_object; // x0
  System_Collections_ObjectModel_Collection_T__o *datalist; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x21
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0
  QuestPhaseEntity_o *v15; // x23
  QuestPhaseMaster_c *v16; // x0
  System_String_o *ScriptStr; // x0
  System_String_o *v18; // x22
  Il2CppObject *Entity; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0

  if ( (byte_4C45368 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__GetEnumerator__);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__getEntityList__);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&QuestPhaseMaster_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C45368 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object
    || (datalist = (System_Collections_ObjectModel_Collection_T__o *)Master_object->fields.datalist,
        (Master_object = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Master_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                           Master_object,
                                           (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestMaster___),
        !datalist) )
  {
    sub_1C372B4(Master_object);
  }
  v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 datalist,
                 (const MethodInfo_333AAE8 *)Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C372B4(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v8 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_15;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_15:
      v10 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v10)(
            Enumerator,
            *(_QWORD *)(v10 + 8))
        & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestPhaseEntity__c **)v13 - 1) != System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_22;
      }
      v14 = (__int64)&v11->vtable[*v13];
    }
    else
    {
LABEL_22:
      v14 = sub_1C87870(Enumerator, System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo, 0);
    }
    v15 = (QuestPhaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
                                  Enumerator,
                                  *(_QWORD *)(v14 + 8));
    v16 = QuestPhaseMaster_TypeInfo;
    if ( !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo);
    if ( !v15 )
      sub_1C372B4(v16);
    ScriptStr = QuestPhaseEntity__getScriptStr(
                  v15,
                  QuestPhaseMaster_TypeInfo->static_fields->MOVIE_QUEST_SCRIPT_STR,
                  0,
                  0);
    v18 = ScriptStr;
    if ( ScriptStr )
    {
      if ( !v5 )
        sub_1C372B4(ScriptStr);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v5,
                 v15->fields.questId,
                 (const MethodInfo_33A10A0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( Time >= QuestEntity__getClosedAt((QuestEntity_o *)Entity, 0) )
          MovieFileMerge__Delete(v18, 0);
      }
    }
  }
  v20 = Enumerator->klass;
  v21 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v22 = &v20->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
    {
      --v21;
      v22 += 4;
      if ( !v21 )
        goto LABEL_36;
    }
    v23 = (__int64)&v20->vtable[*v22];
  }
  else
  {
LABEL_36:
    v23 = sub_1C87870(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(Enumerator, *(_QWORD *)(v23 + 8));
}


void TerminalSceneComponent__fadeoutBgm(TerminalSceneComponent_o *this, float fadeoutTime, const MethodInfo *method)
{
  if ( (byte_4C4535F & 1) == 0 )
  {
    sub_1C37058(&SoundManager_TypeInfo);
    byte_4C4535F = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__fadeoutBgm(fadeoutTime, 0);
}


BaseCore_o *TerminalSceneComponent__get_EarthCore(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  return this->fields.mEarthCore;
}


UnityEngine_GameObject_o *TerminalSceneComponent__get_EarthCoreObj(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.mEarthCoreObj;
}


UnityEngine_Camera_o *TerminalSceneComponent__get_EarthEffectCamera(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.mEarthEffCamera;
}


UnityEngine_GameObject_o *TerminalSceneComponent__get_EffectMask(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.mEffectMask;
}


UnityEngine_GameObject_o *TerminalSceneComponent__get_EffectPanel(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.mEffectPanel;
}


float TerminalSceneComponent__get_FirstFadeTime(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  return this->fields._FirstFadeTime_k__BackingField;
}


TerminalSceneComponent_o *TerminalSceneComponent__get_Instance(const MethodInfo *method)
{
  TerminalSceneComponent_c *v1; // x0

  if ( (byte_4C45334 & 1) == 0 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C45334 = 1;
  }
  v1 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v1 = TerminalSceneComponent_TypeInfo;
  }
  return v1->static_fields->mInstance;
}


bool TerminalSceneComponent__get_IsPassCylinderCore(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  return this->fields._IsPassCylinderCore_k__BackingField;
}


bool TerminalSceneComponent__get_IsPassEarthCore(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  return this->fields._IsPassEarthCore_k__BackingField;
}


bool TerminalSceneComponent__get_IsPlayingCampaignDirectBonus(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  return this->fields._IsPlayingCampaignDirectBonus_k__BackingField;
}


bool TerminalSceneComponent__get_IsReq_InitEarthRotateY(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  return this->fields._IsReq_InitEarthRotateY_k__BackingField;
}


bool TerminalSceneComponent__get_IsTutorialActive(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  return this->fields.mTutorialKind != 0;
}


bool TerminalSceneComponent__get_IsWarStartAnim(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  return this->fields._IsWarStartAnim_k__BackingField;
}


System_String_o *TerminalSceneComponent__get_PlayBgmName(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  return this->fields.mPlayBgmName;
}


ScrPlayerStatus_o *TerminalSceneComponent__get_PlayerStatus(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  return this->fields.mPlayerStatus;
}


UnityEngine_Vector2_o TerminalSceneComponent__get_TUTORIAL_COMBINE_ARROW_POS_FS(
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


UnityEngine_Rect_o TerminalSceneComponent__get_TUTORIAL_COMBINE_ARROW_RECT_FS(
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


UnityEngine_Vector2_o TerminalSceneComponent__get_TUTORIAL_GACHA_ARROW_POS_FS(
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


UnityEngine_Rect_o TerminalSceneComponent__get_TUTORIAL_GACHA_ARROW_RECT_FS(
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


UnityEngine_Vector2_o TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_POS2_FS(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  float v5; // s0
  float v6; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C45337 & 1) == 0 )
  {
    sub_1C37058(&FSUtility_TypeInfo);
    byte_4C45337 = 1;
  }
  x = this->fields.TUTORIAL_MENU_ARROW_POS2.fields.x;
  y = this->fields.TUTORIAL_MENU_ARROW_POS2.fields.y;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v5 = x + (float)(FSUtility__GetOffsetX(68.0, 0, 0) + -2.0);
  v6 = y + 33.0;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}


UnityEngine_Vector2_o TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_POS_FS(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  float v5; // s0
  float v6; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C45336 & 1) == 0 )
  {
    sub_1C37058(&FSUtility_TypeInfo);
    byte_4C45336 = 1;
  }
  x = this->fields.TUTORIAL_MENU_ARROW_POS.fields.x;
  y = this->fields.TUTORIAL_MENU_ARROW_POS.fields.y;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v5 = x + (float)(FSUtility__GetOffsetX(68.0, 0, 0) + -14.0);
  v6 = y + 33.0;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}


UnityEngine_Rect_o TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_RECT_FS(
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


UnityEngine_Vector2_o TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  float v5; // s0
  float v6; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C45338 & 1) == 0 )
  {
    sub_1C37058(&FSUtility_TypeInfo);
    byte_4C45338 = 1;
  }
  x = this->fields.TUTORIAL_QUEST_ARROW_POS.fields.x;
  y = this->fields.TUTORIAL_QUEST_ARROW_POS.fields.y;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v5 = x + FSUtility__GetOffsetX(64.0, 0, 0);
  v6 = y;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}


UnityEngine_Rect_o TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(
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

  if ( (byte_4C45339 & 1) == 0 )
  {
    sub_1C37058(&FSUtility_TypeInfo);
    byte_4C45339 = 1;
  }
  m_XMin = this->fields.TUTORIAL_QUEST_ARROW_RECT.fields.m_XMin;
  m_YMin = this->fields.TUTORIAL_QUEST_ARROW_RECT.fields.m_YMin;
  m_Width = this->fields.TUTORIAL_QUEST_ARROW_RECT.fields.m_Width;
  m_Height = this->fields.TUTORIAL_QUEST_ARROW_RECT.fields.m_Height;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  OffsetX = FSUtility__GetOffsetX(64.0, 0, 0);
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


UnityEngine_Vector2_o TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_POS1_FS(
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


UnityEngine_Vector2_o TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_POS2_FS(
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


UnityEngine_Vector2_o TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_POS4_FS(
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


UnityEngine_Rect_o TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_RECT1_FS(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Vector2_o v2; // 0:s0.4,4:s1.4

  v2.fields.y = 0.0;
  v2.fields.x = -55.0;
  return TerminalSceneComponent__FSSpotArrowRectLerp(this, v2, method);
}


UnityEngine_Rect_o TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_RECT2_FS(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Vector2_o v2; // 0:s0.4,4:s1.4

  v2.fields.x = 0.0;
  v2.fields.y = 0.0;
  return TerminalSceneComponent__FSSpotArrowRectLerp(this, v2, method);
}


UnityEngine_Rect_o TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_RECT4_FS(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Vector2_o v2; // 0:s0.4,4:s1.4

  v2.fields.x = 0.0;
  v2.fields.y = 0.0;
  return TerminalSceneComponent__FSSpotArrowRectLerp(this, v2, method);
}


UIAtlas_o *TerminalSceneComponent__get_TerminalAtlas(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  return this->fields.mTerminalAtlas;
}


ScrTerminalListTop_o *TerminalSceneComponent__get_TerminalList(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.mTerminalList;
}


ScrTerminalMap_o *TerminalSceneComponent__get_TerminalMap(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  return this->fields.mTerminalMap;
}


StandFigureSlideComponent_o *TerminalSceneComponent__get_TerminalServant(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.mTerminalServant;
}


TitleInfoControl_o *TerminalSceneComponent__get_TitleInfo(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  return this->fields.mTitleInfo;
}


TerminalTransitionInfo_o *TerminalSceneComponent__get_TransitionInfo(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._TransitionInfo_k__BackingField;
}


bool TerminalSceneComponent__get_onClosePresentBoxFlag(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  return this->fields._onClosePresentBoxFlag_k__BackingField;
}


void TerminalSceneComponent__loadCommonBG(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4C45344 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1C37058(&Method_TerminalSceneComponent__loadCommonBG_b__181_0__);
    byte_4C45344 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 4, 0) )
  {
    TerminalSceneComponent__loadOutGameAtlas(this, v4);
  }
  else
  {
    v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_TerminalSceneComponent__loadCommonBG_b__181_0__, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadUISkin(v5, 4, 1, 0);
  }
}


void TerminalSceneComponent__loadOutGameAtlas(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C45345 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent__loadOutGameAtlas_b__182_0__);
    byte_4C45345 = 1;
  }
  v3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_TerminalSceneComponent__loadOutGameAtlas_b__182_0__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v3, 0);
}


void TerminalSceneComponent__loadVoice(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x8
  Il2CppObject *Instance; // x0
  struct TerminalTransitionInfo_o *v5; // x8
  System_String_o *voiceAssetName; // x21
  SoundManager_o *v7; // x20
  System_Action_o *v8; // x22

  if ( (byte_4C45346 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C37058(&Method_TerminalSceneComponent_SendMessageStartUpAndResume__);
    byte_4C45346 = 1;
  }
  TransitionInfo_k__BackingField = this->fields._TransitionInfo_k__BackingField;
  if ( TransitionInfo_k__BackingField
    && !System_String__IsNullOrEmpty(TransitionInfo_k__BackingField->fields.voiceAssetName, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v5 = this->fields._TransitionInfo_k__BackingField;
    if ( !v5
      || (voiceAssetName = v5->fields.voiceAssetName,
          v7 = (SoundManager_o *)Instance,
          v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
          System_Action___ctor(v8, (Il2CppObject *)this, Method_TerminalSceneComponent_SendMessageStartUpAndResume__, 0),
          !v7) )
    {
      sub_1C372B4(Instance);
    }
    SoundManager__LoadAudioAssetStorage(v7, voiceAssetName, v8, 1, 0);
  }
  else
  {
    TerminalSceneComponent__SendMessageStartUpAndResume(this, method);
  }
}


void TerminalSceneComponent__mcbfCheckSceneStatus(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  int32_t meSceneStatus; // w8
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v6; // x8

  if ( (byte_4C45376 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_5747/*"EV_SCENE_STATUS_INIT"*/);
    sub_1C37058(&StringLiteral_5748/*"EV_SCENE_STATUS_RESUME"*/);
    byte_4C45376 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FFAA )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FFAA = 1;
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
      v6 = &StringLiteral_5747/*"EV_SCENE_STATUS_INIT"*/;
      goto LABEL_15;
    }
LABEL_16:
    sub_1C372B4(myFSM);
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_16;
  v6 = &StringLiteral_5748/*"EV_SCENE_STATUS_RESUME"*/;
LABEL_15:
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v6, 0);
}


void TerminalSceneComponent__mfCallFsmEvent(
        TerminalSceneComponent_o *this,
        System_String_o *sEventStr,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFSM, sEventStr, 0);
}


void TerminalSceneComponent__mfsmfInitTable(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *mTerminalMap; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_4C45367 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C37058(&Method_TerminalSceneComponent__mfsmfInitTable_b__221_0__);
    byte_4C45367 = 1;
  }
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__ReleaseMap(mTerminalMap, 0, 0), (mTerminalList = this->fields.mTerminalList) == 0)
    || (mTerminalMap = (ScrTerminalMap_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0
    || (ListViewManager__DestroyList((ListViewManager_o *)mTerminalMap, 0),
        Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__),
        v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_TerminalSceneComponent__mfsmfInitTable_b__221_0__, 0),
        !Instance) )
  {
    sub_1C372B4(mTerminalMap);
  }
  v7 = QuestTree__Init((QuestTree_o *)Instance, v6, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v7, 0);
}


void TerminalSceneComponent__playBgm(
        TerminalSceneComponent_o *this,
        System_String_o *bgmName,
        System_Action_o *onLoadFinishCallback,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x3
  System_String_o *mPlayBgmName; // x20

  if ( (byte_4C4535C & 1) == 0 )
  {
    sub_1C37058(&SoundManager_TypeInfo);
    byte_4C4535C = 1;
  }
  if ( System_String__IsNullOrEmpty(bgmName, 0) )
  {
    TerminalSceneComponent__playDefaultBgm(this, onLoadFinishCallback, v7);
  }
  else
  {
    this->fields.mPlayBgmName = bgmName;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mPlayBgmName, (int32_t)bgmName, (int32_t)v7, v8);
    mPlayBgmName = this->fields.mPlayBgmName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm_41512348(mPlayBgmName, onLoadFinishCallback, 0);
  }
}


void TerminalSceneComponent__playBgm_45317100(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  System_String_o *mPlayBgmName; // x19

  if ( (byte_4C4535E & 1) == 0 )
  {
    sub_1C37058(&SoundManager_TypeInfo);
    byte_4C4535E = 1;
  }
  mPlayBgmName = this->fields.mPlayBgmName;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(mPlayBgmName, 0);
}


void TerminalSceneComponent__playDefaultBgm(
        TerminalSceneComponent_o *this,
        System_Action_o *onLoadFinishCallback,
        const MethodInfo *method)
{
  System_String_o *MainBgmName; // x1
  const MethodInfo *v6; // x3

  if ( (byte_4C4535D & 1) == 0 )
  {
    sub_1C37058(&BgmManager_TypeInfo);
    byte_4C4535D = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0, 0);
  TerminalSceneComponent__playBgm(this, MainBgmName, onLoadFinishCallback, v6);
}


void TerminalSceneComponent__quit(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  TerminalPramsManager_c *v4; // x0
  TerminalPramsManager_c *v5; // x0
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x8
  struct TerminalTransitionInfo_o *v7; // x8
  System_String_o *voiceAssetName; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *MasterData_object; // x0
  TerminalOverwriteMaster_o *v12; // x20
  bool OverwriteSkinName; // w0
  TerminalSceneComponent_c *v14; // x8
  bool v15; // w22
  System_String_o *OVERWRITE_COMMON_BG_TYPE1_KEY; // x21
  System_String_o *Empty; // x1
  bool v18; // w0
  TerminalSceneComponent_c *v19; // x8
  bool v20; // w21
  System_String_o *OVERWRITE_COMMON_BG_TYPE2_KEY; // x20
  System_String_o *v22; // x1
  System_String_o *str1; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *skinName; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C4534A & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C37058(&SoundManager_TypeInfo);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    sub_1C37058(&StringLiteral_14789/*"UISkin/"*/);
    byte_4C4534A = 1;
  }
  skinName = 0;
  str1 = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  AutomatedAction__TerminateMissionAction((AutomatedAction_o *)Instance, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C453C8 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C453C8 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( v4->static_fields->_isWarBoardPlay_k__BackingField )
  {
    if ( !v4->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v4);
    if ( !byte_4C400C3 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C400C3 = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    v5->static_fields->_isWarBoardPlay_k__BackingField = 0;
  }
  else
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopSe(0.0, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  QuestAfterAction__releaseVoice((QuestAfterAction_o *)Instance, 0);
  TransitionInfo_k__BackingField = this->fields._TransitionInfo_k__BackingField;
  if ( TransitionInfo_k__BackingField )
  {
    Instance = (void *)System_String__IsNullOrEmpty(TransitionInfo_k__BackingField->fields.voiceAssetName, 0);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      v7 = this->fields._TransitionInfo_k__BackingField;
      if ( !v7 )
        goto LABEL_50;
      voiceAssetName = v7->fields.voiceAssetName;
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__releaseAudioAssetStorage(voiceAssetName, 0);
      Instance = this->fields._TransitionInfo_k__BackingField;
      if ( !Instance )
        goto LABEL_50;
      *((_QWORD *)Instance + 5) = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)((char *)Instance + 40), 0, v9, v10);
    }
  }
  Instance = this->fields.mTerminalMap;
  if ( !Instance )
    goto LABEL_50;
  ScrTerminalMap__Quit((ScrTerminalMap_o *)Instance, this->fields.quitType, 0);
  if ( this->fields.quitType == 2 )
  {
    Instance = this->fields.mTitleInfo;
    if ( Instance )
    {
      TitleInfoControl__releaseAssetData((TitleInfoControl_o *)Instance, 0);
      Instance = this->fields.mTerminalList;
      if ( Instance )
      {
        ScrTerminalListTop__ReleaseAsset((ScrTerminalListTop_o *)Instance, 0);
        goto LABEL_34;
      }
    }
LABEL_50:
    sub_1C372B4(Instance);
  }
LABEL_34:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
  if ( MasterData_object )
  {
    v12 = (TerminalOverwriteMaster_o *)MasterData_object;
    OverwriteSkinName = TerminalOverwriteMaster__TryGetOverwriteSkinName(
                          (TerminalOverwriteMaster_o *)MasterData_object,
                          2,
                          &skinName,
                          0);
    v14 = TerminalSceneComponent_TypeInfo;
    v15 = OverwriteSkinName;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v14 = TerminalSceneComponent_TypeInfo;
    }
    OVERWRITE_COMMON_BG_TYPE1_KEY = v14->static_fields->OVERWRITE_COMMON_BG_TYPE1_KEY;
    if ( v15 )
      Empty = System_String__Concat_63561656((System_String_o *)StringLiteral_14789/*"UISkin/"*/, skinName, 0);
    else
      Empty = string_TypeInfo->static_fields->Empty;
    UnityEngine_PlayerPrefs__SetString(OVERWRITE_COMMON_BG_TYPE1_KEY, Empty, 0);
    v18 = TerminalOverwriteMaster__TryGetOverwriteSkinName(v12, 4, &str1, 0);
    v19 = TerminalSceneComponent_TypeInfo;
    v20 = v18;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v19 = TerminalSceneComponent_TypeInfo;
    }
    OVERWRITE_COMMON_BG_TYPE2_KEY = v19->static_fields->OVERWRITE_COMMON_BG_TYPE2_KEY;
    if ( v20 )
      v22 = System_String__Concat_63561656((System_String_o *)StringLiteral_14789/*"UISkin/"*/, str1, 0);
    else
      v22 = string_TypeInfo->static_fields->Empty;
    UnityEngine_PlayerPrefs__SetString(OVERWRITE_COMMON_BG_TYPE2_KEY, v22, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__Save_SaveData(0);
  this->fields.quitType = 0;
}


void TerminalSceneComponent__requestEventDailyPoint(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  NetworkManager_ResultCallbackFunc_o *v6; // x21

  if ( (byte_4C45369 & 1) == 0 )
  {
    sub_1C37058(&Method_NetworkManager_getRequest_EventDailyPointRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C37058(&Method_TerminalSceneComponent_callbackEventDailyPoint__);
    byte_4C45369 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_callbackEventDailyPoint__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               v6,
               (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_EventDailyPointRequest___);
  if ( !Instance )
LABEL_8:
    sub_1C372B4(Instance);
  EventDailyPointRequest__beginRequest((EventDailyPointRequest_o *)Instance, eventId, 0);
}


void TerminalSceneComponent__requestTopHome(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  PlayMakerFSM_o *myFSM; // x0
  Il2CppObject *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v6; // x21

  if ( (byte_4C45363 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_LoginCallbackFunc_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent_callbackTopLogin__);
    sub_1C37058(&TutorialFlag_TypeInfo);
    sub_1C37058(&StringLiteral_11084/*"REQUEST_OK"*/);
    byte_4C45363 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_40427704(102, 0) )
    goto LABEL_13;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FFC0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FFC0 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( v3->static_fields->_IsPlayScriptWithMap_k__BackingField )
  {
LABEL_13:
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11084/*"REQUEST_OK"*/, 0);
      this->fields.isTopLoginBusy = 0;
      return;
    }
LABEL_17:
    sub_1C372B4(myFSM);
  }
  this->fields.isTopLoginBusy = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v6 = (NetworkManager_LoginCallbackFunc_o *)sub_1C372A4(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(v6, (Il2CppObject *)this, Method_TerminalSceneComponent_callbackTopLogin__, 0);
  if ( !Instance )
    goto LABEL_17;
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v6, 0, 0);
}


void TerminalSceneComponent__set_FirstFadeTime(TerminalSceneComponent_o *this, float value, const MethodInfo *method)
{
  this->fields._FirstFadeTime_k__BackingField = value;
}


void TerminalSceneComponent__set_IsPassCylinderCore(
        TerminalSceneComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsPassCylinderCore_k__BackingField = value;
}


void TerminalSceneComponent__set_IsPassEarthCore(TerminalSceneComponent_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsPassEarthCore_k__BackingField = value;
}


void TerminalSceneComponent__set_IsPlayingCampaignDirectBonus(
        TerminalSceneComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsPlayingCampaignDirectBonus_k__BackingField = value;
}


void TerminalSceneComponent__set_IsReq_InitEarthRotateY(
        TerminalSceneComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsReq_InitEarthRotateY_k__BackingField = value;
}


void TerminalSceneComponent__set_IsTutorialActive(TerminalSceneComponent_o *this, bool value, const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent__set_IsWarStartAnim(TerminalSceneComponent_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsWarStartAnim_k__BackingField = value;
}


void TerminalSceneComponent__set_TransitionInfo(
        TerminalSceneComponent_o *this,
        TerminalTransitionInfo_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._TransitionInfo_k__BackingField = value;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields._TransitionInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void TerminalSceneComponent__set_onClosePresentBoxFlag(
        TerminalSceneComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._onClosePresentBoxFlag_k__BackingField = value;
}


void TerminalSceneComponent_PlayChapterStartCallback___ctor(
        TerminalSceneComponent_PlayChapterStartCallback_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A7D940;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7D8F8;
}


System_IAsyncResult_o *TerminalSceneComponent_PlayChapterStartCallback__BeginInvoke(
        TerminalSceneComponent_PlayChapterStartCallback_o *this,
        bool isPlay,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = isPlay;
  if ( (byte_4C4538F & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    byte_4C4538F = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v12, callback, object);
}


void TerminalSceneComponent_PlayChapterStartCallback__EndInvoke(
        TerminalSceneComponent_PlayChapterStartCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void TerminalSceneComponent_PlayChapterStartCallback__Invoke(
        TerminalSceneComponent_PlayChapterStartCallback_o *this,
        bool isPlay,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isPlay,
    this->fields.method);
}


void TerminalSceneComponent_StateNormal___ctor(TerminalSceneComponent_StateNormal_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent_StateNormal__begin(
        TerminalSceneComponent_StateNormal_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent_StateNormal__end(
        TerminalSceneComponent_StateNormal_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent_StateNormal__update(
        TerminalSceneComponent_StateNormal_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent_StateTutorial1_QuestArrow___ctor(
        TerminalSceneComponent_StateTutorial1_QuestArrow_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent_StateTutorial1_QuestArrow__begin(
        TerminalSceneComponent_StateTutorial1_QuestArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x19
  TerminalSceneComponent_o *mFG; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  TerminalSceneComponent_o **v8; // x20
  QuestBoardListViewObject_o *FocusQuest; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8
  struct UIScrollView_o *scrollView; // x8
  struct UIProgressBar_o *verticalScrollBar; // x23
  System_String_o *v16; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v18; // x0
  const MethodInfo *v19; // x1
  CommonUI_o *v20; // x22
  UnityEngine_Vector2_o v21; // x1
  UnityEngine_Vector2_o TUTORIAL_QUEST_ARROW_POS_FS; // kr00_8
  TerminalSceneComponent_o *v23; // x8
  float x; // s14
  float y; // s15
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v30; // x23
  struct ScrTerminalListTop_o *v31; // x21
  System_Action_o *v32; // x20
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  UnityEngine_Rect_o TUTORIAL_QUEST_ARROW_RECT_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v36; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4C45392 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_GameObjectExtensions_RemoveComponent_Collider___);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__0__);
    sub_1C37058(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__1__);
    sub_1C37058(&TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_TypeInfo);
    sub_1C37058(&StringLiteral_13601/*"TUTORIAL_MESSAGE_TERMINAL_QUEST1"*/);
    byte_4C45392 = 1;
  }
  v4 = sub_1C372A4(TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_22;
  *(_QWORD *)(v4 + 16) = that;
  v8 = (TerminalSceneComponent_o **)(v4 + 16);
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 16), (int32_t)that, v6, v7);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_22;
  mFG = *(TerminalSceneComponent_o **)(*(_QWORD *)(v4 + 16) + 256LL);
  if ( !mFG )
    goto LABEL_22;
  FocusQuest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mFG, 0);
  *(_QWORD *)(v4 + 24) = FocusQuest;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 24), (int32_t)FocusQuest, v10, v11);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  mFG = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13601/*"TUTORIAL_MESSAGE_TERMINAL_QUEST1"*/, 0);
  if ( !*v8 )
    goto LABEL_22;
  mTerminalList = (*v8)->fields.mTerminalList;
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
  v16 = (System_String_o *)mFG;
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mFG;
  if ( !mFG )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0);
  GameObjectExtensions__RemoveComponent_object_(
    gameObject,
    (const MethodInfo_3140B7C *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mBG;
  if ( !mFG )
    goto LABEL_22;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0);
  GameObjectExtensions__RemoveComponent_object_(
    v18,
    (const MethodInfo_3140B7C *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v8 )
    goto LABEL_22;
  v20 = (CommonUI_o *)mFG;
  TUTORIAL_QUEST_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(*v8, v19);
  mFG = *v8;
  if ( !*v8 )
    goto LABEL_22;
  TUTORIAL_QUEST_ARROW_RECT_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(
                                   mFG,
                                   (const MethodInfo *)*(_QWORD *)&v21);
  v23 = *v8;
  if ( !*v8 )
    goto LABEL_22;
  x = v23->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x;
  y = v23->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.y;
  m_XMin = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_XMin;
  m_YMin = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_YMin;
  m_Width = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_Width;
  m_Height = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_Height;
  v30 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__0__,
    0);
  if ( !v20 )
    goto LABEL_22;
  v36.fields.m_XMin = m_XMin;
  v36.fields.m_YMin = m_YMin;
  v36.fields.m_Width = m_Width;
  v36.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v20,
    v16,
    TUTORIAL_QUEST_ARROW_POS_FS,
    v36,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v30,
    0);
  if ( !*v8
    || (v31 = (*v8)->fields.mTerminalList,
        v32 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v32,
          (Il2CppObject *)v4,
          Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0),
        !v31) )
  {
LABEL_22:
    sub_1C372B4(mFG);
  }
  v31->fields.mQuestClickAct = v32;
  sub_1C36FFC((CGThumbnailListItem_o *)&v31->fields.mQuestClickAct, (int32_t)v32, v33, v34);
}


void TerminalSceneComponent_StateTutorial1_QuestArrow__end(
        TerminalSceneComponent_StateTutorial1_QuestArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent_StateTutorial1_QuestArrow__update(
        TerminalSceneComponent_StateTutorial1_QuestArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0___ctor(
        TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0___begin_b__0(
        TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *v2; // x19
  struct TerminalSceneComponent_o *that; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8

  v2 = this;
  if ( (byte_4C45393 & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
    byte_4C45393 = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_12;
  mTerminalList = that->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_12;
  mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager;
  if ( !mQuestBoardListViewManager
    || (this = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)mQuestBoardListViewManager->fields.scrollView) == 0
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0),
        (this = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)v2->fields.focus_quest) == 0)
    || (((void (__fastcall *)(TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *, __int64, Il2CppClass *))this->klass[1]._1.declaringType)(
          this,
          1,
          this->klass[1]._1.parent),
        (this = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)v2->fields.focus_quest) == 0)
    || (this = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)UnityEngine_Component__get_gameObject(
                                                                                            (UnityEngine_Component_o *)this,
                                                                                            0)) == 0
    || (this = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                            (UnityEngine_GameObject_o *)this,
                                                                                            (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0 )
  {
LABEL_12:
    sub_1C372B4(this);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
}


void TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_Action_o *_9__2; // x22
  CommonUI_o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C45394 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__2__);
    byte_4C45394 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v5 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v6, v7);
  }
  if ( !v5 )
    sub_1C372B4(Instance);
  CommonUI__CloseTutorialNotificationDialogArrow_31233804(v5, _9__2, 0);
}


void TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1C372B4(0);
  TerminalSceneComponent__SetState(that, 0, v2);
}


void TerminalSceneComponent_StateTutorial1_SpotArrow___ctor(
        TerminalSceneComponent_StateTutorial1_SpotArrow_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent_StateTutorial1_SpotArrow__begin(
        TerminalSceneComponent_StateTutorial1_SpotArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x20
  ScrTerminalMap_o *mTerminalMap; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  SrcSpotBasePrefab_o *FocusSpot; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_String_o *v12; // x21
  Il2CppObject *Instance; // x22
  const MethodInfo *v14; // x1
  UnityEngine_Vector2_o v15; // kr00_8
  const MethodInfo *v16; // x1
  float x; // s14
  float y; // s15
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v23; // x23
  struct ScrTerminalMap_o *v24; // x21
  System_Action_o *v25; // x19
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  UnityEngine_Vector2_o v28; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v29; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v31; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4C45390 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__0__);
    sub_1C37058(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__1__);
    sub_1C37058(&TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_TypeInfo);
    sub_1C37058(&StringLiteral_13604/*"TUTORIAL_MESSAGE_TERMINAL_SPOT1"*/);
    byte_4C45390 = 1;
  }
  v5 = sub_1C372A4(TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v7, v8);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_12;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_12;
  FocusSpot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0);
  *(_QWORD *)(v5 + 16) = FocusSpot;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)FocusSpot, v10, v11);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_13604/*"TUTORIAL_MESSAGE_TERMINAL_SPOT1"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v28.fields.y = -97.0;
  v28.fields.x = -55.0;
  v15 = TerminalSceneComponent__FSSpotArrowPosLerp(that, v28, v14);
  v29.fields.y = 0.0;
  v29.fields.x = -55.0;
  v30 = TerminalSceneComponent__FSSpotArrowRectLerp(that, v29, v16);
  x = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x;
  y = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.y;
  m_XMin = v30.fields.m_XMin;
  m_YMin = v30.fields.m_YMin;
  m_Width = v30.fields.m_Width;
  m_Height = v30.fields.m_Height;
  v23 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__0__,
    0);
  if ( !Instance )
    goto LABEL_12;
  v31.fields.m_XMin = m_XMin;
  v31.fields.m_YMin = m_YMin;
  v31.fields.m_Width = m_Width;
  v31.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    (CommonUI_o *)Instance,
    v12,
    v15,
    v31,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v23,
    0);
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__SetMapCamera_TutorialFocusSpot(mTerminalMap, *(SrcSpotBasePrefab_o **)(v5 + 16), 0.5, 0),
        v24 = that->fields.mTerminalMap,
        v25 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v25,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0),
        !v24) )
  {
LABEL_12:
    sub_1C372B4(mTerminalMap);
  }
  v24->fields.mSpotClickAct = v25;
  sub_1C36FFC((CGThumbnailListItem_o *)&v24->fields.mSpotClickAct, (int32_t)v25, v26, v27);
}


void TerminalSceneComponent_StateTutorial1_SpotArrow__end(
        TerminalSceneComponent_StateTutorial1_SpotArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent_StateTutorial1_SpotArrow__update(
        TerminalSceneComponent_StateTutorial1_SpotArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8

  if ( this->fields.mIsGoNext )
  {
    if ( !that
      || (mTerminalList = that->fields.mTerminalList) == 0
      || (mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager) == 0 )
    {
      sub_1C372B4(that);
    }
    if ( mQuestBoardListViewManager->fields.initMode == 1 )
      TerminalSceneComponent__SetState(that, 2, method);
  }
}


void TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0___ctor(
        TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0___begin_b__0(
        TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  SrcSpotBasePrefab_o *focus_spot; // x0

  focus_spot = this->fields.focus_spot;
  if ( !focus_spot )
    sub_1C372B4(0);
  SrcSpotBasePrefab__SetBtnColliderEnable(focus_spot, 1, 0);
}


void TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0___begin_b__1(
        TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_Action_o *_9__2; // x22
  CommonUI_o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C45391 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__2__);
    byte_4C45391 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v5 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v6, v7);
  }
  if ( !v5 )
    sub_1C372B4(Instance);
  CommonUI__CloseTutorialNotificationDialogArrow_31233804(v5, _9__2, 0);
}


void TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial1_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(this);
  _4__this->fields.mIsGoNext = 1;
}


void TerminalSceneComponent_StateTutorial2_QuestArrow___ctor(
        TerminalSceneComponent_StateTutorial2_QuestArrow_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent_StateTutorial2_QuestArrow__begin(
        TerminalSceneComponent_StateTutorial2_QuestArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x19
  TerminalSceneComponent_o *mFG; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  TerminalSceneComponent_o **v8; // x20
  QuestBoardListViewObject_o *FocusQuest; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8
  struct UIScrollView_o *scrollView; // x8
  struct UIProgressBar_o *verticalScrollBar; // x23
  System_String_o *v16; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v18; // x0
  const MethodInfo *v19; // x1
  CommonUI_o *v20; // x22
  UnityEngine_Vector2_o v21; // x1
  UnityEngine_Vector2_o TUTORIAL_QUEST_ARROW_POS_FS; // kr00_8
  TerminalSceneComponent_o *v23; // x8
  float x; // s14
  float y; // s15
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v30; // x23
  struct ScrTerminalListTop_o *v31; // x21
  System_Action_o *v32; // x20
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  UnityEngine_Rect_o TUTORIAL_QUEST_ARROW_RECT_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v36; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4C45397 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_GameObjectExtensions_RemoveComponent_Collider___);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__0__);
    sub_1C37058(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__1__);
    sub_1C37058(&TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_TypeInfo);
    sub_1C37058(&StringLiteral_13602/*"TUTORIAL_MESSAGE_TERMINAL_QUEST2"*/);
    byte_4C45397 = 1;
  }
  v4 = sub_1C372A4(TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_22;
  *(_QWORD *)(v4 + 16) = that;
  v8 = (TerminalSceneComponent_o **)(v4 + 16);
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 16), (int32_t)that, v6, v7);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_22;
  mFG = *(TerminalSceneComponent_o **)(*(_QWORD *)(v4 + 16) + 256LL);
  if ( !mFG )
    goto LABEL_22;
  FocusQuest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mFG, 0);
  *(_QWORD *)(v4 + 24) = FocusQuest;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 24), (int32_t)FocusQuest, v10, v11);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  mFG = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13602/*"TUTORIAL_MESSAGE_TERMINAL_QUEST2"*/, 0);
  if ( !*v8 )
    goto LABEL_22;
  mTerminalList = (*v8)->fields.mTerminalList;
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
  v16 = (System_String_o *)mFG;
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mFG;
  if ( !mFG )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0);
  GameObjectExtensions__RemoveComponent_object_(
    gameObject,
    (const MethodInfo_3140B7C *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mBG;
  if ( !mFG )
    goto LABEL_22;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0);
  GameObjectExtensions__RemoveComponent_object_(
    v18,
    (const MethodInfo_3140B7C *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v8 )
    goto LABEL_22;
  v20 = (CommonUI_o *)mFG;
  TUTORIAL_QUEST_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(*v8, v19);
  mFG = *v8;
  if ( !*v8 )
    goto LABEL_22;
  TUTORIAL_QUEST_ARROW_RECT_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(
                                   mFG,
                                   (const MethodInfo *)*(_QWORD *)&v21);
  v23 = *v8;
  if ( !*v8 )
    goto LABEL_22;
  x = v23->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x;
  y = v23->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.y;
  m_XMin = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_XMin;
  m_YMin = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_YMin;
  m_Width = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_Width;
  m_Height = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_Height;
  v30 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__0__,
    0);
  if ( !v20 )
    goto LABEL_22;
  v36.fields.m_XMin = m_XMin;
  v36.fields.m_YMin = m_YMin;
  v36.fields.m_Width = m_Width;
  v36.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v20,
    v16,
    TUTORIAL_QUEST_ARROW_POS_FS,
    v36,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v30,
    0);
  if ( !*v8
    || (v31 = (*v8)->fields.mTerminalList,
        v32 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v32,
          (Il2CppObject *)v4,
          Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0),
        !v31) )
  {
LABEL_22:
    sub_1C372B4(mFG);
  }
  v31->fields.mQuestClickAct = v32;
  sub_1C36FFC((CGThumbnailListItem_o *)&v31->fields.mQuestClickAct, (int32_t)v32, v33, v34);
}


void TerminalSceneComponent_StateTutorial2_QuestArrow__end(
        TerminalSceneComponent_StateTutorial2_QuestArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent_StateTutorial2_QuestArrow__update(
        TerminalSceneComponent_StateTutorial2_QuestArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0___ctor(
        TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0___begin_b__0(
        TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *v2; // x19
  struct TerminalSceneComponent_o *that; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8

  v2 = this;
  if ( (byte_4C45398 & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
    byte_4C45398 = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_12;
  mTerminalList = that->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_12;
  mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager;
  if ( !mQuestBoardListViewManager
    || (this = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)mQuestBoardListViewManager->fields.scrollView) == 0
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0),
        (this = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)v2->fields.focus_quest) == 0)
    || (((void (__fastcall *)(TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *, __int64, Il2CppClass *))this->klass[1]._1.declaringType)(
          this,
          1,
          this->klass[1]._1.parent),
        (this = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)v2->fields.focus_quest) == 0)
    || (this = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)UnityEngine_Component__get_gameObject(
                                                                                            (UnityEngine_Component_o *)this,
                                                                                            0)) == 0
    || (this = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                            (UnityEngine_GameObject_o *)this,
                                                                                            (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0 )
  {
LABEL_12:
    sub_1C372B4(this);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
}


void TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_Action_o *_9__2; // x22
  CommonUI_o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C45399 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__2__);
    byte_4C45399 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v5 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v6, v7);
  }
  if ( !v5 )
    sub_1C372B4(Instance);
  CommonUI__CloseTutorialNotificationDialogArrow_31233804(v5, _9__2, 0);
}


void TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1C372B4(0);
  TerminalSceneComponent__SetState(that, 0, v2);
}


void TerminalSceneComponent_StateTutorial2_SpotArrow___ctor(
        TerminalSceneComponent_StateTutorial2_SpotArrow_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent_StateTutorial2_SpotArrow__begin(
        TerminalSceneComponent_StateTutorial2_SpotArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x20
  ScrTerminalMap_o *mTerminalMap; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  SrcSpotBasePrefab_o *FocusSpot; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_String_o *v12; // x21
  Il2CppObject *Instance; // x22
  const MethodInfo *v14; // x1
  UnityEngine_Vector2_o v15; // kr00_8
  const MethodInfo *v16; // x1
  float x; // s14
  float y; // s15
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v23; // x23
  struct ScrTerminalMap_o *v24; // x21
  System_Action_o *v25; // x19
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  UnityEngine_Vector2_o v28; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v29; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v31; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4C45395 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__0__);
    sub_1C37058(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__1__);
    sub_1C37058(&TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_TypeInfo);
    sub_1C37058(&StringLiteral_13605/*"TUTORIAL_MESSAGE_TERMINAL_SPOT2"*/);
    byte_4C45395 = 1;
  }
  v5 = sub_1C372A4(TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v7, v8);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_12;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_12;
  FocusSpot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0);
  *(_QWORD *)(v5 + 16) = FocusSpot;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)FocusSpot, v10, v11);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_13605/*"TUTORIAL_MESSAGE_TERMINAL_SPOT2"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v28.fields.x = 0.0;
  v28.fields.y = -113.0;
  v15 = TerminalSceneComponent__FSSpotArrowPosLerp(that, v28, v14);
  v29.fields.x = 0.0;
  v29.fields.y = 0.0;
  v30 = TerminalSceneComponent__FSSpotArrowRectLerp(that, v29, v16);
  x = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x;
  y = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.y;
  m_XMin = v30.fields.m_XMin;
  m_YMin = v30.fields.m_YMin;
  m_Width = v30.fields.m_Width;
  m_Height = v30.fields.m_Height;
  v23 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__0__,
    0);
  if ( !Instance )
    goto LABEL_12;
  v31.fields.m_XMin = m_XMin;
  v31.fields.m_YMin = m_YMin;
  v31.fields.m_Width = m_Width;
  v31.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    (CommonUI_o *)Instance,
    v12,
    v15,
    v31,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v23,
    0);
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__SetMapCamera_TutorialFocusSpot(mTerminalMap, *(SrcSpotBasePrefab_o **)(v5 + 16), 0.5, 0),
        v24 = that->fields.mTerminalMap,
        v25 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v25,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0),
        !v24) )
  {
LABEL_12:
    sub_1C372B4(mTerminalMap);
  }
  v24->fields.mSpotClickAct = v25;
  sub_1C36FFC((CGThumbnailListItem_o *)&v24->fields.mSpotClickAct, (int32_t)v25, v26, v27);
}


void TerminalSceneComponent_StateTutorial2_SpotArrow__end(
        TerminalSceneComponent_StateTutorial2_SpotArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent_StateTutorial2_SpotArrow__update(
        TerminalSceneComponent_StateTutorial2_SpotArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8

  if ( this->fields.mIsGoNext )
  {
    if ( !that
      || (mTerminalList = that->fields.mTerminalList) == 0
      || (mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager) == 0 )
    {
      sub_1C372B4(that);
    }
    if ( mQuestBoardListViewManager->fields.initMode == 1 )
      TerminalSceneComponent__SetState(that, 4, method);
  }
}


void TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0___ctor(
        TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0___begin_b__0(
        TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  SrcSpotBasePrefab_o *focus_spot; // x0

  focus_spot = this->fields.focus_spot;
  if ( !focus_spot )
    sub_1C372B4(0);
  SrcSpotBasePrefab__SetBtnColliderEnable(focus_spot, 1, 0);
}


void TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0___begin_b__1(
        TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_Action_o *_9__2; // x22
  CommonUI_o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C45396 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__2__);
    byte_4C45396 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v5 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v6, v7);
  }
  if ( !v5 )
    sub_1C372B4(Instance);
  CommonUI__CloseTutorialNotificationDialogArrow_31233804(v5, _9__2, 0);
}


void TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial2_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(this);
  _4__this->fields.mIsGoNext = 1;
}


void TerminalSceneComponent_StateTutorial3_GachaArrow___ctor(
        TerminalSceneComponent_StateTutorial3_GachaArrow_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent_StateTutorial3_GachaArrow__begin(
        TerminalSceneComponent_StateTutorial3_GachaArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x19
  void *Instance; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 *v8; // x21
  System_String_o *v9; // x20
  __int64 v10; // x8
  CommonUI_o *v11; // x21
  float v12; // s8
  float v13; // s13
  float v14; // s9
  float v15; // s14
  float v16; // s10
  unsigned int v17; // s11
  unsigned int v18; // s12
  System_Action_o *v19; // x22
  Il2CppObject *v20; // x23
  struct TerminalSceneComponent_StateTutorial3_GachaArrow___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Action_o *v24; // x20
  UnityEngine_Vector2_o v25; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v26; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4C4539D & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__begin_b__0_0__);
    sub_1C37058(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__1__);
    sub_1C37058(&TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo);
    sub_1C37058(&StringLiteral_13599/*"TUTORIAL_MESSAGE_TERMINAL_GACHA"*/);
    byte_4C4539D = 1;
  }
  v4 = sub_1C372A4(TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_15;
  *(_QWORD *)(v4 + 16) = that;
  v8 = (__int64 *)(v4 + 16);
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 16), (int32_t)that, v6, v7);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_13599/*"TUTORIAL_MESSAGE_TERMINAL_GACHA"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = *v8;
  if ( !*v8 )
    goto LABEL_15;
  v11 = (CommonUI_o *)Instance;
  v12 = *(float *)(v10 + 160);
  v13 = *(float *)(v10 + 164);
  v14 = *(float *)(v10 + 168);
  v15 = *(float *)(v10 + 172);
  Instance = TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo;
  v16 = *(float *)(v10 + 176);
  v17 = *(_DWORD *)(v10 + 152);
  v18 = *(_DWORD *)(v10 + 156);
  if ( !TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo);
    Instance = TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo;
  }
  v19 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v19 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo;
    }
    v20 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v19 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v19, v20, Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__begin_b__0_0__, 0);
    static_fields = TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = v19;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)v19, v22, v23);
  }
  if ( !v11 )
LABEL_15:
    sub_1C372B4(Instance);
  v26.fields.m_YMin = v15 + 53.0;
  v25.fields.y = v13 + 33.0;
  v26.fields.m_Height = 135.0;
  v25.fields.x = v12;
  v26.fields.m_XMin = v14;
  v26.fields.m_Width = v16;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v11,
    v9,
    v25,
    v26,
    0.0,
    (UnityEngine_Vector2_o)__PAIR64__(v18, v17),
    -1,
    v19,
    0);
  v24 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__1__,
    0);
  MainMenuBar__SetDispBtnAct(2, v24, 0);
}


void TerminalSceneComponent_StateTutorial3_GachaArrow__end(
        TerminalSceneComponent_StateTutorial3_GachaArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent_StateTutorial3_GachaArrow__update(
        TerminalSceneComponent_StateTutorial3_GachaArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent_StateTutorial3_GachaArrow___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C4539E & 1) == 0 )
  {
    sub_1C37058(&TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo);
    byte_4C4539E = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial3_GachaArrow___c_o *)v1;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void TerminalSceneComponent_StateTutorial3_GachaArrow___c___ctor(
        TerminalSceneComponent_StateTutorial3_GachaArrow___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent_StateTutorial3_GachaArrow___c___begin_b__0_0(
        TerminalSceneComponent_StateTutorial3_GachaArrow___c_o *this,
        const MethodInfo *method)
{
  MainMenuBar__SetDispBtnColliderEnable(1, 2, 0);
}


void TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0___ctor(
        TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_Action_o *_9__2; // x22
  CommonUI_o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C4539F & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&TutorialFlag_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__2__);
    byte_4C4539F = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress(1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v5 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v6, v7);
  }
  if ( !v5 )
    sub_1C372B4(Instance);
  CommonUI__CloseTutorialNotificationDialogArrow_31233804(v5, _9__2, 0);
}


void TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1C372B4(0);
  TerminalSceneComponent__SetState(that, 0, v2);
}


void TerminalSceneComponent_StateTutorial3_MenuArrow___ctor(
        TerminalSceneComponent_StateTutorial3_MenuArrow_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent_StateTutorial3_MenuArrow__begin(
        TerminalSceneComponent_StateTutorial3_MenuArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x19
  void *Instance; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  TerminalSceneComponent_o **v8; // x22
  System_String_o *v9; // x20
  const MethodInfo *v10; // x1
  CommonUI_o *v11; // x21
  const MethodInfo *v12; // x1
  UnityEngine_Vector2_o TUTORIAL_MENU_ARROW_POS_FS; // kr00_8
  TerminalSceneComponent_o *v14; // x8
  float m_XMin; // s12
  float m_YMin; // s14
  float m_Height; // s8
  float m_Width; // s10
  float v19; // s0
  TerminalSceneComponent_o *v20; // x8
  float x; // s13
  float y; // s15
  float v23; // s11
  System_Action_o *v24; // x22
  Il2CppObject *v25; // x23
  struct TerminalSceneComponent_StateTutorial3_MenuArrow___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Action_o *v29; // x20
  UnityEngine_Rect_o v30; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4C4539A & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__begin_b__0_0__);
    sub_1C37058(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__1__);
    sub_1C37058(&TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo);
    sub_1C37058(&StringLiteral_13600/*"TUTORIAL_MESSAGE_TERMINAL_MENU"*/);
    byte_4C4539A = 1;
  }
  v4 = sub_1C372A4(TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_17;
  *(_QWORD *)(v4 + 16) = that;
  v8 = (TerminalSceneComponent_o **)(v4 + 16);
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 16), (int32_t)that, v6, v7);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_13600/*"TUTORIAL_MESSAGE_TERMINAL_MENU"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v8 )
    goto LABEL_17;
  v11 = (CommonUI_o *)Instance;
  TUTORIAL_MENU_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_POS_FS(*v8, v10);
  v14 = *v8;
  if ( !*v8 )
    goto LABEL_17;
  m_XMin = v14->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_XMin;
  m_YMin = v14->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_YMin;
  m_Width = v14->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width;
  m_Height = v14->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Height;
  v19 = TerminalSceneComponent__FSMenuOffsetX((TerminalSceneComponent_o *)Instance, v12);
  v20 = *v8;
  if ( !*v8 )
    goto LABEL_17;
  x = v20->fields.TUTORIAL_MENU_MESSAGE_POS.fields.x;
  y = v20->fields.TUTORIAL_MENU_MESSAGE_POS.fields.y;
  v23 = v19;
  Instance = TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo;
  if ( !TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo);
    Instance = TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo;
  }
  v24 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v24 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo;
    }
    v25 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v24 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v24, v25, Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__begin_b__0_0__, 0);
    static_fields = TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = v24;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)v24, v27, v28);
  }
  if ( !v11 )
LABEL_17:
    sub_1C372B4(Instance);
  v30.fields.m_Height = m_Height + 33.0;
  v30.fields.m_YMin = m_YMin + 33.0;
  v30.fields.m_XMin = m_XMin + v23;
  v30.fields.m_Width = m_Width;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v11,
    v9,
    TUTORIAL_MENU_ARROW_POS_FS,
    v30,
    0.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v24,
    0);
  v29 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__1__,
    0);
  MainMenuBar__SetMenuBtnAct(v29, 0);
}


void TerminalSceneComponent_StateTutorial3_MenuArrow__end(
        TerminalSceneComponent_StateTutorial3_MenuArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent_StateTutorial3_MenuArrow__update(
        TerminalSceneComponent_StateTutorial3_MenuArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent_StateTutorial3_MenuArrow___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C4539B & 1) == 0 )
  {
    sub_1C37058(&TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo);
    byte_4C4539B = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial3_MenuArrow___c_o *)v1;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void TerminalSceneComponent_StateTutorial3_MenuArrow___c___ctor(
        TerminalSceneComponent_StateTutorial3_MenuArrow___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent_StateTutorial3_MenuArrow___c___begin_b__0_0(
        TerminalSceneComponent_StateTutorial3_MenuArrow___c_o *this,
        const MethodInfo *method)
{
  MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0);
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0);
}


void TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0___ctor(
        TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_Action_o *_9__2; // x22
  CommonUI_o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C4539C & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__2__);
    byte_4C4539C = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v5 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v6, v7);
  }
  if ( !v5 )
    sub_1C372B4(Instance);
  CommonUI__CloseTutorialNotificationDialogArrow_31233804(v5, _9__2, 0);
}


void TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1C372B4(0);
  TerminalSceneComponent__SetState(that, 6, v2);
}


void TerminalSceneComponent_StateTutorial4_QuestArrow___ctor(
        TerminalSceneComponent_StateTutorial4_QuestArrow_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent_StateTutorial4_QuestArrow__begin(
        TerminalSceneComponent_StateTutorial4_QuestArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x19
  TerminalSceneComponent_o *mFG; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  TerminalSceneComponent_o **v8; // x20
  QuestBoardListViewObject_o *FocusQuest; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8
  struct UIScrollView_o *scrollView; // x8
  struct UIProgressBar_o *verticalScrollBar; // x23
  System_String_o *v16; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v18; // x0
  const MethodInfo *v19; // x1
  CommonUI_o *v20; // x22
  UnityEngine_Vector2_o v21; // x1
  UnityEngine_Vector2_o TUTORIAL_QUEST_ARROW_POS_FS; // kr00_8
  TerminalSceneComponent_o *v23; // x8
  float x; // s14
  float y; // s15
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v30; // x23
  struct ScrTerminalListTop_o *v31; // x21
  System_Action_o *v32; // x20
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  UnityEngine_Rect_o TUTORIAL_QUEST_ARROW_RECT_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v36; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4C453A2 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_GameObjectExtensions_RemoveComponent_Collider___);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__0__);
    sub_1C37058(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__1__);
    sub_1C37058(&TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_TypeInfo);
    sub_1C37058(&StringLiteral_13603/*"TUTORIAL_MESSAGE_TERMINAL_QUEST3"*/);
    byte_4C453A2 = 1;
  }
  v4 = sub_1C372A4(TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_22;
  *(_QWORD *)(v4 + 16) = that;
  v8 = (TerminalSceneComponent_o **)(v4 + 16);
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 16), (int32_t)that, v6, v7);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_22;
  mFG = *(TerminalSceneComponent_o **)(*(_QWORD *)(v4 + 16) + 256LL);
  if ( !mFG )
    goto LABEL_22;
  FocusQuest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mFG, 0);
  *(_QWORD *)(v4 + 24) = FocusQuest;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 24), (int32_t)FocusQuest, v10, v11);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  mFG = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13603/*"TUTORIAL_MESSAGE_TERMINAL_QUEST3"*/, 0);
  if ( !*v8 )
    goto LABEL_22;
  mTerminalList = (*v8)->fields.mTerminalList;
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
  v16 = (System_String_o *)mFG;
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mFG;
  if ( !mFG )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0);
  GameObjectExtensions__RemoveComponent_object_(
    gameObject,
    (const MethodInfo_3140B7C *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mBG;
  if ( !mFG )
    goto LABEL_22;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0);
  GameObjectExtensions__RemoveComponent_object_(
    v18,
    (const MethodInfo_3140B7C *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v8 )
    goto LABEL_22;
  v20 = (CommonUI_o *)mFG;
  TUTORIAL_QUEST_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(*v8, v19);
  mFG = *v8;
  if ( !*v8 )
    goto LABEL_22;
  TUTORIAL_QUEST_ARROW_RECT_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(
                                   mFG,
                                   (const MethodInfo *)*(_QWORD *)&v21);
  v23 = *v8;
  if ( !*v8 )
    goto LABEL_22;
  x = v23->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x;
  y = v23->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.y;
  m_XMin = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_XMin;
  m_YMin = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_YMin;
  m_Width = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_Width;
  m_Height = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_Height;
  v30 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__0__,
    0);
  if ( !v20 )
    goto LABEL_22;
  v36.fields.m_XMin = m_XMin;
  v36.fields.m_YMin = m_YMin;
  v36.fields.m_Width = m_Width;
  v36.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v20,
    v16,
    TUTORIAL_QUEST_ARROW_POS_FS,
    v36,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v30,
    0);
  if ( !*v8
    || (v31 = (*v8)->fields.mTerminalList,
        v32 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v32,
          (Il2CppObject *)v4,
          Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0),
        !v31) )
  {
LABEL_22:
    sub_1C372B4(mFG);
  }
  v31->fields.mQuestClickAct = v32;
  sub_1C36FFC((CGThumbnailListItem_o *)&v31->fields.mQuestClickAct, (int32_t)v32, v33, v34);
}


void TerminalSceneComponent_StateTutorial4_QuestArrow__end(
        TerminalSceneComponent_StateTutorial4_QuestArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent_StateTutorial4_QuestArrow__update(
        TerminalSceneComponent_StateTutorial4_QuestArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0___ctor(
        TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0___begin_b__0(
        TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *v2; // x19
  struct TerminalSceneComponent_o *that; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8

  v2 = this;
  if ( (byte_4C453A3 & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
    byte_4C453A3 = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_12;
  mTerminalList = that->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_12;
  mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager;
  if ( !mQuestBoardListViewManager
    || (this = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)mQuestBoardListViewManager->fields.scrollView) == 0
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0),
        (this = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)v2->fields.focus_quest) == 0)
    || (((void (__fastcall *)(TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *, __int64, Il2CppClass *))this->klass[1]._1.declaringType)(
          this,
          1,
          this->klass[1]._1.parent),
        (this = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)v2->fields.focus_quest) == 0)
    || (this = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)UnityEngine_Component__get_gameObject(
                                                                                            (UnityEngine_Component_o *)this,
                                                                                            0)) == 0
    || (this = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                            (UnityEngine_GameObject_o *)this,
                                                                                            (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0 )
  {
LABEL_12:
    sub_1C372B4(this);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
}


void TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_Action_o *_9__2; // x22
  CommonUI_o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C453A4 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__2__);
    byte_4C453A4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v5 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v6, v7);
  }
  if ( !v5 )
    sub_1C372B4(Instance);
  CommonUI__CloseTutorialNotificationDialogArrow_31233804(v5, _9__2, 0);
}


void TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1C372B4(0);
  TerminalSceneComponent__SetState(that, 0, v2);
}


void TerminalSceneComponent_StateTutorial4_SpotArrow___ctor(
        TerminalSceneComponent_StateTutorial4_SpotArrow_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent_StateTutorial4_SpotArrow__begin(
        TerminalSceneComponent_StateTutorial4_SpotArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x20
  ScrTerminalMap_o *mTerminalMap; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  SrcSpotBasePrefab_o *FocusSpot; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *Instance; // x21
  const MethodInfo *v13; // x1
  UnityEngine_Vector2_o v14; // kr00_8
  const MethodInfo *v15; // x1
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v20; // x22
  struct ScrTerminalMap_o *v21; // x21
  System_Action_o *v22; // x19
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  UnityEngine_Vector2_o v25; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v26; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v28; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4C453A0 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__0__);
    sub_1C37058(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__1__);
    sub_1C37058(&TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_TypeInfo);
    byte_4C453A0 = 1;
  }
  v5 = sub_1C372A4(TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v7, v8);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_10;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_10;
  FocusSpot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0);
  *(_QWORD *)(v5 + 16) = FocusSpot;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)FocusSpot, v10, v11);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v25.fields.x = 0.0;
  v25.fields.y = -113.0;
  v14 = TerminalSceneComponent__FSSpotArrowPosLerp(that, v25, v13);
  v26.fields.x = 0.0;
  v26.fields.y = 0.0;
  v27 = TerminalSceneComponent__FSSpotArrowRectLerp(that, v26, v15);
  m_XMin = v27.fields.m_XMin;
  m_YMin = v27.fields.m_YMin;
  m_Width = v27.fields.m_Width;
  m_Height = v27.fields.m_Height;
  v20 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__0__,
    0);
  if ( !Instance )
    goto LABEL_10;
  v28.fields.m_XMin = m_XMin;
  v28.fields.m_YMin = m_YMin;
  v28.fields.m_Width = m_Width;
  v28.fields.m_Height = m_Height;
  CommonUI__OpenTutorialArrowMark((CommonUI_o *)Instance, v14, 90.0, v28, v20, 0);
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__SetMapCamera_TutorialFocusSpot(mTerminalMap, *(SrcSpotBasePrefab_o **)(v5 + 16), 0.5, 0),
        v21 = that->fields.mTerminalMap,
        v22 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v22,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0),
        !v21) )
  {
LABEL_10:
    sub_1C372B4(mTerminalMap);
  }
  v21->fields.mSpotClickAct = v22;
  sub_1C36FFC((CGThumbnailListItem_o *)&v21->fields.mSpotClickAct, (int32_t)v22, v23, v24);
}


void TerminalSceneComponent_StateTutorial4_SpotArrow__end(
        TerminalSceneComponent_StateTutorial4_SpotArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent_StateTutorial4_SpotArrow__update(
        TerminalSceneComponent_StateTutorial4_SpotArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8

  if ( this->fields.mIsGoNext )
  {
    if ( !that
      || (mTerminalList = that->fields.mTerminalList) == 0
      || (mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager) == 0 )
    {
      sub_1C372B4(that);
    }
    if ( mQuestBoardListViewManager->fields.initMode == 1 )
      TerminalSceneComponent__SetState(that, 8, method);
  }
}


void TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0___ctor(
        TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0___begin_b__0(
        TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  SrcSpotBasePrefab_o *focus_spot; // x0

  focus_spot = this->fields.focus_spot;
  if ( !focus_spot )
    sub_1C372B4(0);
  SrcSpotBasePrefab__SetBtnColliderEnable(focus_spot, 1, 0);
}


void TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0___begin_b__1(
        TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_Action_o *_9__2; // x22
  CommonUI_o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C453A1 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__2__);
    byte_4C453A1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v5 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v6, v7);
  }
  if ( !v5 )
    sub_1C372B4(Instance);
  CommonUI__CloseTutorialArrowMark(v5, _9__2, 0);
}


void TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial4_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(this);
  _4__this->fields.mIsGoNext = 1;
}


void TerminalSceneComponent_StateTutorial5_CombineArrow___ctor(
        TerminalSceneComponent_StateTutorial5_CombineArrow_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent_StateTutorial5_CombineArrow__begin(
        TerminalSceneComponent_StateTutorial5_CombineArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x19
  void *Instance; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  float *v8; // x8
  CommonUI_o *v9; // x20
  float v10; // s9
  float v11; // s11
  float v12; // s8
  float v13; // s12
  float v14; // s10
  System_Action_o *v15; // x21
  Il2CppObject *v16; // x22
  struct TerminalSceneComponent_StateTutorial5_CombineArrow___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Action_o *v20; // x20
  UnityEngine_Vector2_o v21; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v22; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4C453A8 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__begin_b__0_0__);
    sub_1C37058(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__1__);
    sub_1C37058(&TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo);
    byte_4C453A8 = 1;
  }
  v4 = sub_1C372A4(TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_13;
  *(_QWORD *)(v4 + 16) = that;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 16), (int32_t)that, v6, v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = *(float **)(v4 + 16);
  if ( !v8 )
    goto LABEL_13;
  v9 = (CommonUI_o *)Instance;
  v10 = v8[52];
  v11 = v8[53];
  v12 = v8[48];
  v13 = v8[49];
  Instance = TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo;
  v14 = v8[50];
  if ( !TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo);
    Instance = TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo;
  }
  v15 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v15 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo;
    }
    v16 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v15 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v15, v16, Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__begin_b__0_0__, 0);
    static_fields = TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = v15;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)v15, v18, v19);
  }
  if ( !v9 )
LABEL_13:
    sub_1C372B4(Instance);
  v22.fields.m_YMin = v13 + 53.0;
  v21.fields.y = v11 + 33.0;
  v22.fields.m_Height = 135.0;
  v21.fields.x = v10;
  v22.fields.m_XMin = v12;
  v22.fields.m_Width = v14;
  CommonUI__OpenTutorialArrowMark(v9, v21, 0.0, v22, v15, 0);
  v20 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__1__,
    0);
  MainMenuBar__SetDispBtnAct(3, v20, 0);
}


void TerminalSceneComponent_StateTutorial5_CombineArrow__end(
        TerminalSceneComponent_StateTutorial5_CombineArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent_StateTutorial5_CombineArrow__update(
        TerminalSceneComponent_StateTutorial5_CombineArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent_StateTutorial5_CombineArrow___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C453A9 & 1) == 0 )
  {
    sub_1C37058(&TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo);
    byte_4C453A9 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial5_CombineArrow___c_o *)v1;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void TerminalSceneComponent_StateTutorial5_CombineArrow___c___ctor(
        TerminalSceneComponent_StateTutorial5_CombineArrow___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent_StateTutorial5_CombineArrow___c___begin_b__0_0(
        TerminalSceneComponent_StateTutorial5_CombineArrow___c_o *this,
        const MethodInfo *method)
{
  MainMenuBar__SetDispBtnColliderEnable(1, 3, 0);
}


void TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0___ctor(
        TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_Action_o *_9__2; // x22
  CommonUI_o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C453AA & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__2__);
    byte_4C453AA = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v5 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v6, v7);
  }
  if ( !v5 )
    sub_1C372B4(Instance);
  CommonUI__CloseTutorialArrowMark(v5, _9__2, 0);
}


void TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0
  struct TerminalSceneComponent_o *v5; // x8
  struct TerminalSceneComponent_o *v6; // x8

  that = this->fields.that;
  if ( !that
    || (TerminalSceneComponent__SetState(that, 0, v2), (v5 = this->fields.that) == 0)
    || (that = (TerminalSceneComponent_o *)v5->fields.mTitleInfo) == 0
    || (TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)that, 1, 0), (v6 = this->fields.that) == 0)
    || (that = (TerminalSceneComponent_o *)v6->fields.mPlayerStatus) == 0 )
  {
    sub_1C372B4(that);
  }
  ScrPlayerStatus__EnableAllBtn((ScrPlayerStatus_o *)that, 0);
}


void TerminalSceneComponent_StateTutorial5_MenuArrow___ctor(
        TerminalSceneComponent_StateTutorial5_MenuArrow_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent_StateTutorial5_MenuArrow__begin(
        TerminalSceneComponent_StateTutorial5_MenuArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x19
  void *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  TerminalSceneComponent_o **v8; // x22
  Il2CppObject *Instance; // x20
  const MethodInfo *v10; // x1
  System_String_o *v11; // x21
  const MethodInfo *v12; // x1
  UnityEngine_Vector2_o TUTORIAL_MENU_ARROW_POS2_FS; // kr00_8
  TerminalSceneComponent_o *v14; // x8
  float m_XMin; // s12
  float m_YMin; // s13
  float m_Width; // s10
  float m_Height; // s14
  float v19; // s0
  float v20; // s11
  System_Action_o *v21; // x22
  Il2CppObject *v22; // x23
  struct TerminalSceneComponent_StateTutorial5_MenuArrow___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Action_o *v26; // x20
  UnityEngine_Rect_o v27; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4C453A5 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__begin_b__0_0__);
    sub_1C37058(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__1__);
    sub_1C37058(&TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo);
    sub_1C37058(&StringLiteral_13581/*"TUTORIAL_MESSAGE_COMBINE1"*/);
    byte_4C453A5 = 1;
  }
  v4 = sub_1C372A4(TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_16;
  *(_QWORD *)(v4 + 16) = that;
  v8 = (TerminalSceneComponent_o **)(v4 + 16);
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 16), (int32_t)that, v6, v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_13581/*"TUTORIAL_MESSAGE_COMBINE1"*/, 0);
  if ( !*v8 )
    goto LABEL_16;
  v11 = (System_String_o *)v5;
  TUTORIAL_MENU_ARROW_POS2_FS = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_POS2_FS(*v8, v10);
  v14 = *v8;
  if ( !*v8 )
    goto LABEL_16;
  m_XMin = v14->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_XMin;
  m_YMin = v14->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_YMin;
  m_Width = v14->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width;
  m_Height = v14->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Height;
  v19 = TerminalSceneComponent__FSMenuOffsetX((TerminalSceneComponent_o *)v5, v12);
  v5 = TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo;
  v20 = v19;
  if ( !TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo);
    v5 = TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo;
  }
  v21 = *(System_Action_o **)(*((_QWORD *)v5 + 23) + 8LL);
  if ( !v21 )
  {
    if ( !*((_DWORD *)v5 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo;
    }
    v22 = (Il2CppObject *)**((_QWORD **)v5 + 23);
    v21 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v21, v22, Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__begin_b__0_0__, 0);
    static_fields = TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = v21;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)v21, v24, v25);
  }
  if ( !Instance )
LABEL_16:
    sub_1C372B4(v5);
  v27.fields.m_Height = m_Height + 33.0;
  v27.fields.m_YMin = m_YMin + 33.0;
  v27.fields.m_XMin = m_XMin + v20;
  v27.fields.m_Width = m_Width;
  CommonUI__OpenTutorialNotificationDialogArrow(
    (CommonUI_o *)Instance,
    v11,
    TUTORIAL_MENU_ARROW_POS2_FS,
    v27,
    0.0,
    (UnityEngine_Vector2_o)0xC224000000000000LL,
    -1,
    v21,
    0);
  v26 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__1__,
    0);
  MainMenuBar__SetMenuBtnAct(v26, 0);
}


void TerminalSceneComponent_StateTutorial5_MenuArrow__end(
        TerminalSceneComponent_StateTutorial5_MenuArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent_StateTutorial5_MenuArrow__update(
        TerminalSceneComponent_StateTutorial5_MenuArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent_StateTutorial5_MenuArrow___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C453A6 & 1) == 0 )
  {
    sub_1C37058(&TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo);
    byte_4C453A6 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial5_MenuArrow___c_o *)v1;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void TerminalSceneComponent_StateTutorial5_MenuArrow___c___ctor(
        TerminalSceneComponent_StateTutorial5_MenuArrow___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent_StateTutorial5_MenuArrow___c___begin_b__0_0(
        TerminalSceneComponent_StateTutorial5_MenuArrow___c_o *this,
        const MethodInfo *method)
{
  MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0);
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0);
}


void TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0___ctor(
        TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_Action_o *_9__2; // x22
  CommonUI_o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C453A7 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__2__);
    byte_4C453A7 = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0);
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v5 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v6, v7);
  }
  if ( !v5 )
    sub_1C372B4(Instance);
  CommonUI__CloseTutorialNotificationDialogArrow_31233804(v5, _9__2, 0);
}


void TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1C372B4(0);
  TerminalSceneComponent__SetState(that, 10, v2);
}


void TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__259___ctor(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__259_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__259__MoveNext(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__259_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v5; // x21
  UnityEngine_WaitUntil_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  bool result; // w0
  ChainableActionBase_o *openCampaignDirectBonus; // x0

  if ( (byte_4C453E0 & 1) == 0 )
  {
    sub_1C37058(&System_Func_bool__TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent__CoWaitBlankEarthActionEnd_b__259_0__);
    sub_1C37058(&UnityEngine_WaitUntil_TypeInfo);
    byte_4C453E0 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    openCampaignDirectBonus = (ChainableActionBase_o *)this->fields.openCampaignDirectBonus;
    this->fields.__1__state = -1;
    if ( !openCampaignDirectBonus )
      sub_1C372B4(0);
    ChainableActionBase__Execute(openCampaignDirectBonus, 0);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v5 = (System_Func_bool__o *)sub_1C372A4(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v5, _4__this, Method_TerminalSceneComponent__CoWaitBlankEarthActionEnd_b__259_0__, 0);
    v6 = (UnityEngine_WaitUntil_o *)sub_1C372A4(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v6, v5, 0);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v6, v7, v8);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__259__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__259_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__259__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__259_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__259_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__259__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__259_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__259__System_IDisposable_Dispose(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__259_o *this,
        const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__258___ctor(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__258_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__258__MoveNext(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__258_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v5; // x21
  UnityEngine_WaitUntil_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  bool result; // w0
  ChainableActionBase_o *openCampaignDirectBonus; // x0

  if ( (byte_4C453E1 & 1) == 0 )
  {
    sub_1C37058(&System_Func_bool__TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_b__258_0__);
    sub_1C37058(&UnityEngine_WaitUntil_TypeInfo);
    byte_4C453E1 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    openCampaignDirectBonus = (ChainableActionBase_o *)this->fields.openCampaignDirectBonus;
    this->fields.__1__state = -1;
    if ( !openCampaignDirectBonus )
      sub_1C372B4(0);
    ChainableActionBase__Execute(openCampaignDirectBonus, 0);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v5 = (System_Func_bool__o *)sub_1C372A4(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v5, _4__this, Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_b__258_0__, 0);
    v6 = (UnityEngine_WaitUntil_o *)sub_1C372A4(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v6, v5, 0);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v6, v7, v8);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__258__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__258_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__258__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__258_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__258_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__258__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__258_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__258__System_IDisposable_Dispose(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__258_o *this,
        const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent__LoadAsync_d__177___ctor(
        TerminalSceneComponent__LoadAsync_d__177_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool TerminalSceneComponent__LoadAsync_d__177__MoveNext(
        TerminalSceneComponent__LoadAsync_d__177_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent__LoadAsync_d__177_o *v2; // x19
  int32_t _1__state; // w8
  TerminalSceneComponent_o *_4__this; // x21
  __int64 v5; // x20
  UserServantEntity_o *usd; // x22
  System_Action_o *v7; // x23
  System_Action_o *v8; // x22
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x8
  struct TerminalTransitionInfo_o *v10; // x8
  SoundManager_o *v11; // x21
  System_String_o *voiceAssetName; // x22
  System_Action_o *v13; // x23
  System_Action_o *v14; // x21
  System_Action_o *v15; // x21
  System_Action_o *v16; // x21
  System_Action_o *v17; // x21
  System_Action_o *v18; // x21
  System_Action_o *v19; // x21
  System_Action_o *v20; // x21
  System_Action_o *v21; // x21
  System_Action_o *v22; // x21
  System_Action_o *v23; // x21
  System_Func_bool__o *v24; // x21
  UnityEngine_WaitUntil_o *v25; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  bool result; // w0
  struct System_Action_o *callback; // x8

  v2 = this;
  if ( (byte_4C453E2 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&System_Func_bool__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__0__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__10__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__11__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__12__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__13__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__1__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__2__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__3__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__4__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__5__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__6__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__7__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__8__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__9__);
    sub_1C37058(&TerminalSceneComponent___c__DisplayClass177_0_TypeInfo);
    this = (TerminalSceneComponent__LoadAsync_d__177_o *)sub_1C37058(&UnityEngine_WaitUntil_TypeInfo);
    byte_4C453E2 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = v2->fields.callback;
    v2->fields.__1__state = -1;
    if ( !callback )
      goto LABEL_23;
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
    return 0;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  _4__this = v2->fields.__4__this;
  v5 = sub_1C372A4(TerminalSceneComponent___c__DisplayClass177_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass177_0___ctor((TerminalSceneComponent___c__DisplayClass177_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_23;
  *(_DWORD *)(v5 + 19) = 0;
  *(_BYTE *)(v5 + 23) = 0;
  *(_DWORD *)(v5 + 24) = 0;
  *(_WORD *)(v5 + 16) = 256;
  *(_BYTE *)(v5 + 18) = 1;
  *(_BYTE *)(v5 + 28) = 1;
  usd = v2->fields.usd;
  v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__0__,
    0);
  if ( !_4__this )
    goto LABEL_23;
  TerminalSceneComponent__SetupStandServant(_4__this, usd, 0, v7, 0);
  this = (TerminalSceneComponent__LoadAsync_d__177_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !this )
    goto LABEL_23;
  if ( !AtlasManager__isLoadedSkinData((AtlasManager_o *)this, 4, 0) )
  {
    *(_BYTE *)(v5 + 17) = 0;
    v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      (Il2CppObject *)v5,
      Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__1__,
      0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadUISkin(v8, 4, 11, 0);
  }
  TransitionInfo_k__BackingField = _4__this->fields._TransitionInfo_k__BackingField;
  if ( !TransitionInfo_k__BackingField
    || System_String__IsNullOrEmpty(TransitionInfo_k__BackingField->fields.voiceAssetName, 0) )
  {
    goto LABEL_17;
  }
  *(_BYTE *)(v5 + 18) = 0;
  this = (TerminalSceneComponent__LoadAsync_d__177_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v10 = _4__this->fields._TransitionInfo_k__BackingField;
  if ( !v10
    || (v11 = (SoundManager_o *)this,
        voiceAssetName = v10->fields.voiceAssetName,
        v13 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v13,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__2__,
          0),
        !v11) )
  {
LABEL_23:
    sub_1C372B4(this);
  }
  SoundManager__LoadAudioAssetStorage(v11, voiceAssetName, v13, 1, 0);
LABEL_17:
  v14 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__3__,
    0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadBanner(v14, 11, 0);
  v15 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__4__,
    0);
  AtlasManager__LoadFaceAtlas(v15, 11, 0);
  v16 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__5__,
    0);
  AtlasManager__LoadEquipFace(v16, 11, 0);
  v17 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__6__,
    0);
  AtlasManager__LoadFriendshipExceed(v17, 11, 0);
  v18 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__7__,
    0);
  AtlasManager__LoadCommandCode(v18, 11, 0);
  v19 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__8__,
    0);
  AtlasManager__LoadCommandCodeMini(v19, 11, 0);
  v20 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__9__,
    0);
  AtlasManager__LoadEventAtlas(v20, 11, 0);
  v21 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__10__,
    0);
  AtlasManager__LoadEventUI(v21, 11, 0);
  v22 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__11__,
    0);
  AtlasManager__LoadCharaGraphOptionAtlas(v22, 11, 0);
  v23 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__12__,
    0);
  AtlasManager__LoadPartyOrganizationAtlas(v23, 11, 0);
  v24 = (System_Func_bool__o *)sub_1C372A4(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v24,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__13__,
    0);
  v25 = (UnityEngine_WaitUntil_o *)sub_1C372A4(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v25, v24, 0);
  v2->fields.__2__current = (Il2CppObject *)v25;
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1C36FFC(p__2__current, (int32_t)v25, v27, v28);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *TerminalSceneComponent__LoadAsync_d__177__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__LoadAsync_d__177_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TerminalSceneComponent__LoadAsync_d__177__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__LoadAsync_d__177_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_TerminalSceneComponent__LoadAsync_d__177_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *TerminalSceneComponent__LoadAsync_d__177__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__LoadAsync_d__177_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TerminalSceneComponent__LoadAsync_d__177__System_IDisposable_Dispose(
        TerminalSceneComponent__LoadAsync_d__177_o *this,
        const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195___ctor(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195__MoveNext(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  TerminalSceneComponent___c_c *v4; // x0
  System_Func_bool__o *_9__195_0; // x20
  Il2CppObject *v6; // x21
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_WaitWhile_o *v10; // x21
  Il2CppObject **p__2__current; // x19
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  bool result; // w0

  if ( (byte_4C453E3 & 1) == 0 )
  {
    sub_1C37058(&System_Func_bool__TypeInfo);
    sub_1C37058(&SoundManager_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent___c__WaitStopSEQuestPhaseRewardEffect_b__195_0__);
    sub_1C37058(&TerminalSceneComponent___c_TypeInfo);
    sub_1C37058(&UnityEngine_WaitWhile_TypeInfo);
    byte_4C453E3 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopSe(0.0, 0);
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
  _9__195_0 = v4->static_fields->__9__195_0;
  if ( !_9__195_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = TerminalSceneComponent___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__195_0 = (System_Func_bool__o *)sub_1C372A4(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      _9__195_0,
      v6,
      Method_TerminalSceneComponent___c__WaitStopSEQuestPhaseRewardEffect_b__195_0__,
      0);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__195_0 = _9__195_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__195_0, (int32_t)_9__195_0, v8, v9);
  }
  v10 = (UnityEngine_WaitWhile_o *)sub_1C372A4(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v10, _9__195_0, 0);
  this->fields.__2__current = (Il2CppObject *)v10;
  p__2__current = &this->fields.__2__current;
  sub_1C36FFC((CGThumbnailListItem_o *)p__2__current, (int32_t)v10, v12, v13);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195__System_IDisposable_Dispose(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195_o *this,
        const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C453AB & 1) == 0 )
  {
    sub_1C37058(&TerminalSceneComponent___c_TypeInfo);
    byte_4C453AB = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(TerminalSceneComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TerminalSceneComponent___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)TerminalSceneComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void TerminalSceneComponent___c___ctor(TerminalSceneComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c___CheckOpenCampaignDirectBonus_b__257_0(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4C453BA & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C453BA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3CF07 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3CF07 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    sub_1C372B4(v5);
  CommonUI__OpenCampaignDirectBonus(
    (CommonUI_o *)Instance,
    v5->static_fields->_CampaignDirectBonus_k__BackingField,
    action,
    0);
}


void TerminalSceneComponent___c___CheckOpenCampaignDirectBonus_b__257_1(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4C453BB & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C453BB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3CF07 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3CF07 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    sub_1C372B4(v5);
  CommonUI__OpenCampaignDirectBonusWithTransitionDialog(
    (CommonUI_o *)Instance,
    v5->static_fields->_CampaignDirectBonus_k__BackingField,
    action,
    0);
}


void TerminalSceneComponent___c___CheckRewardPopupChain_b__255_2(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C453B8 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C453B8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__StartFriendPointNotification((CommonUI_o *)Instance, action, 0);
}


void TerminalSceneComponent___c___CheckRewardPopupChain_b__255_6(
        TerminalSceneComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C453B9 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C453B9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ClearLoginResultData((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (CommonUI__ReleaseFortuneBonusAssetData((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (CommonUI__ReleaseSelectBonusDialogAsset((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C372B4(Instance);
  }
  CommonUI__ReleaseLoginBonusWithTransitionDialogAssetData((CommonUI_o *)Instance, 0);
}


void TerminalSceneComponent___c___Fadein_MapDisp_Start_b__199_0(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C453AE & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C453AE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__StartLoginAndCampaignBonus((CommonUI_o *)Instance, action, 0, 201, 0);
}


void TerminalSceneComponent___c___Fadein_MapDisp_Start_b__199_1(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  CommonUI_o *v5; // x20

  if ( (byte_4C453AF & 1) == 0 )
  {
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C453AF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v5
    || (CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (CommonUI__ClearLoginResultData((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (CommonUI__ReleaseFortuneBonusAssetData((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C372B4(Instance);
  }
  CommonUI__ReleaseLoginBonusWithTransitionDialogAssetData((CommonUI_o *)Instance, 0);
}


void TerminalSceneComponent___c___Fadein_MapDisp_Start_b__199_6(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  CommonUI_o *v5; // x20

  if ( (byte_4C453AD & 1) == 0 )
  {
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C453AD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v5 )
    sub_1C372B4(Instance);
  CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0);
}


bool TerminalSceneComponent___c___IsValidGrandBgm_b__213_0(
        TerminalSceneComponent___c_o *this,
        int32_t n,
        const MethodInfo *method)
{
  if ( (byte_4C453B3 & 1) == 0 )
  {
    sub_1C37058(&CondType_TypeInfo);
    byte_4C453B3 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(113, n, 0, 0, 0, 0);
}


ShopEntity_o *TerminalSceneComponent___c___OpenExchangeDialogue_b__262_0(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C453BC & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C37058(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C453BC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  return (ShopEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           x,
                           (const MethodInfo_33A10A0 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
}


bool TerminalSceneComponent___c___OpenExchangeDialogue_b__262_1(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return ShopEntity__IsAfterTheFreeShopReleaseDate(x, 0);
}


bool TerminalSceneComponent___c___OpenExchangeDialogue_b__262_2(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  bool isQuestNotClearItemClosed; // w8
  bool result; // w0

  if ( !x )
    sub_1C372B4(this);
  if ( !ShopEntity__isQuestNotClearItemClosed(x, 0, 0) )
    return 1;
  isQuestNotClearItemClosed = ShopEntity__isQuestNotClearItemClosed(x, 0, 0);
  result = 0;
  if ( isQuestNotClearItemClosed )
    return ShopEntity__IsSoldOut(x, 0);
  return result;
}


int32_t TerminalSceneComponent___c___OpenExchangeDialogue_b__262_4(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.id;
}


ShopEntity_o *TerminalSceneComponent___c___OpenExchangeDialogue_b__262_5(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C453BD & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C37058(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C453BD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  return (ShopEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           x,
                           (const MethodInfo_33A10A0 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
}


int32_t TerminalSceneComponent___c___OpenExchangeDialogue_b__262_6(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return ShopEntity__GetPrice(x, 0);
}


void TerminalSceneComponent___c___PlayAutoExecuteQuest_b__232_3(
        TerminalSceneComponent___c_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  int32_t WarId_k__BackingField; // w19
  int32_t QuestId_k__BackingField; // w20
  TerminalSceneComponent___c_c *v5; // x8
  int32_t PhaseCnt_k__BackingField; // w23
  ScriptManager_CallbackFunc_o *_9__232_4; // x21
  Il2CppObject *v8; // x22
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C453B5 & 1) == 0 )
  {
    sub_1C37058(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C37058(&ScriptManager_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__232_4__);
    sub_1C37058(&TerminalSceneComponent___c_TypeInfo);
    byte_4C453B5 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3D397 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D397 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v2->static_fields->_WarId_k__BackingField;
  if ( !byte_4C3CFE7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4C3CFE7 = 1;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v2->static_fields->_QuestId_k__BackingField;
  if ( !byte_4C3CFE6 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4C3CFE6 = 1;
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
  _9__232_4 = v5->static_fields->__9__232_4;
  if ( !_9__232_4 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = TerminalSceneComponent___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__232_4 = (ScriptManager_CallbackFunc_o *)sub_1C372A4(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(
      _9__232_4,
      v8,
      Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__232_4__,
      0);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__232_4 = _9__232_4;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__232_4, (int32_t)_9__232_4, v10, v11);
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayBattleStart(
    WarId_k__BackingField,
    QuestId_k__BackingField,
    PhaseCnt_k__BackingField + 1,
    _9__232_4,
    0,
    0,
    -1,
    0,
    0,
    0,
    0);
}


void TerminalSceneComponent___c___PlayAutoExecuteQuest_b__232_4(
        TerminalSceneComponent___c_o *this,
        bool isExit,
        const MethodInfo *method)
{
  TerminalSceneComponent___c_c *v3; // x0
  NetworkManager_ResultCallbackFunc_o *_9__232_5; // x19
  Il2CppObject *v5; // x20
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *Request_object; // x19
  TerminalPramsManager_c *v10; // x0
  int32_t QuestId_k__BackingField; // w21
  int32_t PhaseCnt_k__BackingField; // w20
  System_Int32_array *SelectRouteArray; // x0

  if ( (byte_4C453B6 & 1) == 0 )
  {
    sub_1C37058(&Method_NetworkManager_getRequest_BattleScenarioRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&ScriptManager_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__232_5__);
    sub_1C37058(&TerminalSceneComponent___c_TypeInfo);
    byte_4C453B6 = 1;
  }
  v3 = TerminalSceneComponent___c_TypeInfo;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v3 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__232_5 = v3->static_fields->__9__232_5;
  if ( !_9__232_5 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = TerminalSceneComponent___c_TypeInfo;
    }
    v5 = (Il2CppObject *)v3->static_fields->__9;
    _9__232_5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__232_5,
      v5,
      Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__232_5__,
      0);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__232_5 = _9__232_5;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__232_5, (int32_t)_9__232_5, v7, v8);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__232_5,
                     (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3CFE7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3CFE7 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v10->static_fields->_QuestId_k__BackingField;
  if ( !byte_4C3CFE6 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C3CFE6 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v10->static_fields->_PhaseCnt_k__BackingField;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  SelectRouteArray = ScriptManager__GetSelectRouteArray(0);
  if ( !Request_object )
    sub_1C372B4(SelectRouteArray);
  BattleScenarioRequest__beginRequest(
    (BattleScenarioRequest_o *)Request_object,
    QuestId_k__BackingField,
    PhaseCnt_k__BackingField + 1,
    SelectRouteArray,
    0);
}


void TerminalSceneComponent___c___PlayAutoExecuteQuest_b__232_5(
        TerminalSceneComponent___c_o *this,
        System_String_o *jsonStr,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  System_Object_array *v5; // x19
  TerminalPramsManager_c *v6; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_4C453B7 & 1) == 0 )
  {
    sub_1C37058(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&ScriptManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_15804/*"["*/);
    sub_1C37058(&StringLiteral_16058/*"]"*/);
    byte_4C453B7 = 1;
  }
  v4 = (Il2CppObject *)System_String__Concat_63599904(
                         (System_String_o *)StringLiteral_15804/*"["*/,
                         jsonStr,
                         (System_String_o *)StringLiteral_16058/*"]"*/,
                         0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v5 = JsonManager__DeserializeArray_object_(
         v4,
         (const MethodInfo_31570C4 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v5, 1, 0);
  if ( !byte_4C3D786 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D786 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


void TerminalSceneComponent___c___RebootToNetworkError_b__219_0(
        TerminalSceneComponent___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C453B4 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4C453B4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0);
}


void TerminalSceneComponent___c___StartWindowMessage_b__201_1(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  CommonUI_o *v5; // x20

  if ( (byte_4C453B0 & 1) == 0 )
  {
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C453B0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v5 )
    sub_1C372B4(Instance);
  CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0);
}


void TerminalSceneComponent___c___StartWindowMessage_b__201_2(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  System_String_o *QuestWindowMessage_k__BackingField; // x20

  if ( (byte_4C453B1 & 1) == 0 )
  {
    sub_1C37058(&ScriptManager_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C453B1 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C453CB )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C453CB = 1;
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
  ScriptManager__PlayMessage(QuestWindowMessage_k__BackingField, action, 0, 0, -1, 0);
}


void TerminalSceneComponent___c___StartWindowMessage_b__201_3(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  Il2CppObject *v5; // x20
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_4C453B2 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C453B2 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3EC66 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3EC66 = 1;
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
    TerminalPramsManager__InitMessageWindowData(0);
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0, 0, 0);
      goto LABEL_22;
    }
LABEL_23:
    sub_1C372B4(Instance);
  }
  v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C453CD )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C453CD = 1;
  }
  Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v5 )
    goto LABEL_23;
  AvalonSceneManager__transitionScene(
    (AvalonSceneManager_o *)v5,
    40,
    1,
    (Il2CppObject *)Instance[1].fields.sendData[7].monitor,
    0);
LABEL_22:
  ActionExtensions__Call(action, 0);
}


bool TerminalSceneComponent___c___WaitStopSEQuestPhaseRewardEffect_b__195_0(
        TerminalSceneComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C453AC & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
    byte_4C453AC = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return RewardMiniPopupExecutor__IsBusy((RewardMiniPopupExecutor_o *)Instance, 0);
}


System_String_o *TerminalSceneComponent___c___callbackTopLogin_b__217_0(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0);
}


System_String_o *TerminalSceneComponent___c___callbackTopLogin_b__217_1(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0);
}


void TerminalSceneComponent___c__DisplayClass173_0___ctor(
        TerminalSceneComponent___c__DisplayClass173_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass173_0___SetEarthView_b__0(
        TerminalSceneComponent___c__DisplayClass173_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass173_0_o *v4; // x19
  struct TerminalSceneComponent_o *_4__this; // x21
  Il2CppObject *Object_object__51154888; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct TerminalSceneComponent_o *v9; // x8
  struct TerminalSceneComponent_o *v10; // x20
  Il2CppObject *ComponentInChildren_object; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  v4 = this;
  if ( (byte_4C453BE & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentInChildren_BaseCore___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass173_0_o *)sub_1C37058(&StringLiteral_4726/*"CorePrefab"*/);
    byte_4C453BE = 1;
  }
  if ( !data )
    goto LABEL_11;
  _4__this = v4->fields.__4__this;
  Object_object__51154888 = AssetData__GetObject_object__51154888(
                              data,
                              (System_String_o *)StringLiteral_4726/*"CorePrefab"*/,
                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (TerminalSceneComponent___c__DisplayClass173_0_o *)UnityEngine_Object__Instantiate_object_(
                                                              Object_object__51154888,
                                                              (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !_4__this
    || (_4__this->fields.mEarthCoreObj = (struct UnityEngine_GameObject_o *)this,
        sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.mEarthCoreObj, (int32_t)this, v7, v8),
        (v9 = v4->fields.__4__this) == 0)
    || (GameObjectExtensions__SafeSetParent_36138184(v9->fields.mEarthCoreObj, v9->fields.mUiRoot, 0),
        (v10 = v4->fields.__4__this) == 0)
    || (this = (TerminalSceneComponent___c__DisplayClass173_0_o *)v10->fields.mEarthCoreObj) == 0 )
  {
LABEL_11:
    sub_1C372B4(this);
  }
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)this,
                                 (const MethodInfo_313F43C *)Method_UnityEngine_GameObject_GetComponentInChildren_BaseCore___);
  v10->fields.mEarthCore = (struct BaseCore_o *)ComponentInChildren_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&v10->fields.mEarthCore, (int32_t)ComponentInChildren_object, v12, v13);
  ActionExtensions__Call(v4->fields.callback, 0);
}


void TerminalSceneComponent___c__DisplayClass174_0___ctor(
        TerminalSceneComponent___c__DisplayClass174_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass174_0___RegenerateEarthView_b__0(
        TerminalSceneComponent___c__DisplayClass174_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass174_0_o *v2; // x19
  struct TerminalSceneComponent_o *_4__this; // x8
  struct BaseCore_o *mEarthCore; // x20
  System_Collections_Generic_List_MapControl_WarInfo__o *WarInfoAll_OrderReverse; // x21
  long double inited; // q0
  struct TerminalSceneComponent_o *v7; // x8
  System_Action_o *callback; // x0

  v2 = this;
  if ( (byte_4C453BF & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    this = (TerminalSceneComponent___c__DisplayClass174_0_o *)sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C453BF = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  mEarthCore = _4__this->fields.mEarthCore;
  this = (TerminalSceneComponent___c__DisplayClass174_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
    goto LABEL_17;
  WarInfoAll_OrderReverse = QuestTree__GetWarInfoAll_OrderReverse((QuestTree_o *)this, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FFA9 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FFA9 = 1;
  }
  this = (TerminalSceneComponent___c__DisplayClass174_0_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass174_0_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !mEarthCore
    || (this = (TerminalSceneComponent___c__DisplayClass174_0_o *)((__int64 (__fastcall *)(struct BaseCore_o *, System_Collections_Generic_List_MapControl_WarInfo__o *, bool, const MethodInfo *, long double))mEarthCore->klass->vtable._8_Setup.methodPtr)(
                                                                    mEarthCore,
                                                                    WarInfoAll_OrderReverse,
                                                                    BYTE2(this[5].fields.callback->fields.method_info) == 0,
                                                                    mEarthCore->klass->vtable._8_Setup.method,
                                                                    inited),
        (v7 = v2->fields.__4__this) == 0)
    || (this = (TerminalSceneComponent___c__DisplayClass174_0_o *)v7->fields.mEarthCore) == 0 )
  {
LABEL_17:
    sub_1C372B4(this);
  }
  ((void (__fastcall *)(TerminalSceneComponent___c__DisplayClass174_0_o *, Il2CppClass *))this->klass[1]._1.declaringType)(
    this,
    this->klass[1]._1.parent);
  callback = v2->fields.callback;
  if ( callback )
    ActionExtensions__Call(callback, 0);
}


void TerminalSceneComponent___c__DisplayClass177_0___ctor(
        TerminalSceneComponent___c__DisplayClass177_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass177_0___LoadAsync_b__0(
        TerminalSceneComponent___c__DisplayClass177_0_o *this,
        const MethodInfo *method)
{
  this->fields.isSetupStandServant = 1;
}


void TerminalSceneComponent___c__DisplayClass177_0___LoadAsync_b__1(
        TerminalSceneComponent___c__DisplayClass177_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadUISkin = 1;
}


void TerminalSceneComponent___c__DisplayClass177_0___LoadAsync_b__10(
        TerminalSceneComponent___c__DisplayClass177_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadEventUI = 1;
}


void TerminalSceneComponent___c__DisplayClass177_0___LoadAsync_b__11(
        TerminalSceneComponent___c__DisplayClass177_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadCharaGraphOptionAtlas = 1;
}


void TerminalSceneComponent___c__DisplayClass177_0___LoadAsync_b__12(
        TerminalSceneComponent___c__DisplayClass177_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadPartyOrganizationAtlas = 1;
}


bool TerminalSceneComponent___c__DisplayClass177_0___LoadAsync_b__13(
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


void TerminalSceneComponent___c__DisplayClass177_0___LoadAsync_b__2(
        TerminalSceneComponent___c__DisplayClass177_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadAudioAssetStorage = 1;
}


void TerminalSceneComponent___c__DisplayClass177_0___LoadAsync_b__3(
        TerminalSceneComponent___c__DisplayClass177_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadBanner = 1;
}


void TerminalSceneComponent___c__DisplayClass177_0___LoadAsync_b__4(
        TerminalSceneComponent___c__DisplayClass177_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadFaceAtlas = 1;
}


void TerminalSceneComponent___c__DisplayClass177_0___LoadAsync_b__5(
        TerminalSceneComponent___c__DisplayClass177_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadEquipFace = 1;
}


void TerminalSceneComponent___c__DisplayClass177_0___LoadAsync_b__6(
        TerminalSceneComponent___c__DisplayClass177_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadFriendshipExceed = 1;
}


void TerminalSceneComponent___c__DisplayClass177_0___LoadAsync_b__7(
        TerminalSceneComponent___c__DisplayClass177_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadCommandCode = 1;
}


void TerminalSceneComponent___c__DisplayClass177_0___LoadAsync_b__8(
        TerminalSceneComponent___c__DisplayClass177_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadCommandCodeMini = 1;
}


void TerminalSceneComponent___c__DisplayClass177_0___LoadAsync_b__9(
        TerminalSceneComponent___c__DisplayClass177_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadEventAtlas = 1;
}


void TerminalSceneComponent___c__DisplayClass190_0___ctor(
        TerminalSceneComponent___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass190_0___SetupStandServant_b__0(
        TerminalSceneComponent___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass190_0_o *v2; // x19
  struct TerminalSceneComponent_o *_4__this; // x8

  v2 = this;
  if ( this->fields.isSlideIn )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this || (this = (TerminalSceneComponent___c__DisplayClass190_0_o *)_4__this->fields.mTerminalServant) == 0 )
      sub_1C372B4(this);
    StandFigureSlideComponent__SlideIn((StandFigureSlideComponent_o *)this, 0, 0);
  }
  ActionExtensions__Call(v2->fields.endAction, 0);
}


void TerminalSceneComponent___c__DisplayClass190_0___SetupStandServant_b__1(
        TerminalSceneComponent___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass190_0_o *v2; // x19
  struct TerminalSceneComponent_o *_4__this; // x8
  struct TerminalSceneComponent_o *v4; // x8
  long double v5; // q0
  struct TerminalSceneComponent_o *v6; // x8
  struct StandFigureSlideComponent_o *mTerminalServant; // x9
  struct BaseCore_o *mEarthCore; // x8
  __int64 v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1
  UserServantEntity_o *NextStandServant; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  long double inited; // q0
  struct TerminalSceneComponent_o *v17; // x8
  int32_t mStandSvtIdx; // w22
  struct TerminalSceneComponent_o *v19; // x8
  struct BaseCore_o *v20; // x22
  struct TerminalSceneComponent_o *v21; // x8
  StandFigureSlideComponent_o *v22; // x19
  System_Action_o *v23; // x21
  struct TerminalSceneComponent_o *v24; // x8
  struct BaseCore_o *v25; // x21
  struct TerminalSceneComponent_o *v26; // x8

  v2 = this;
  if ( (byte_4C453C0 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass190_1__SetupStandServant_b__2__);
    this = (TerminalSceneComponent___c__DisplayClass190_0_o *)sub_1C37058(&TerminalSceneComponent___c__DisplayClass190_1_TypeInfo);
    byte_4C453C0 = 1;
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
                                                                0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v4 = v2->fields.__4__this;
      if ( !v4 )
        goto LABEL_54;
      this = (TerminalSceneComponent___c__DisplayClass190_0_o *)v4->fields.mEarthCore;
      if ( !this )
        goto LABEL_54;
      if ( !BYTE1(this[3].fields.__4__this) )
      {
        *(float *)&v5 = ((float (__fastcall *)(TerminalSceneComponent___c__DisplayClass190_0_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
                          this,
                          this->klass[1]._1.implementedInterfaces);
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
              v9 = sub_1C372A4(TerminalSceneComponent___c__DisplayClass190_1_TypeInfo);
              System_Object___ctor((Il2CppObject *)v9, 0);
              if ( v9 )
              {
                *(_QWORD *)(v9 + 24) = v2;
                sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 24), (int32_t)v2, v10, v11);
                this = (TerminalSceneComponent___c__DisplayClass190_0_o *)v2->fields.__4__this;
                if ( this )
                {
                  NextStandServant = TerminalSceneComponent__GetNextStandServant((TerminalSceneComponent_o *)this, v12);
                  *(_QWORD *)(v9 + 16) = NextStandServant;
                  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)NextStandServant, v14, v15);
                  v17 = v2->fields.__4__this;
                  if ( v17 )
                  {
                    mStandSvtIdx = v17->fields.mStandSvtIdx;
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                      inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    if ( !byte_4C453C7 )
                    {
                      sub_1C37058(&TerminalPramsManager_TypeInfo);
                      byte_4C453C7 = 1;
                    }
                    this = (TerminalSceneComponent___c__DisplayClass190_0_o *)TerminalPramsManager_TypeInfo;
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    {
                      inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                      this = (TerminalSceneComponent___c__DisplayClass190_0_o *)TerminalPramsManager_TypeInfo;
                    }
                    BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x) = mStandSvtIdx != 0;
                    v19 = v2->fields.__4__this;
                    if ( v19 )
                    {
                      v20 = v19->fields.mEarthCore;
                      if ( !byte_4C3FFA9 )
                      {
                        sub_1C37058(&TerminalPramsManager_TypeInfo);
                        this = (TerminalSceneComponent___c__DisplayClass190_0_o *)TerminalPramsManager_TypeInfo;
                        byte_4C3FFA9 = 1;
                      }
                      if ( !LODWORD(this[5].fields.__4__this) )
                      {
                        inited = j_il2cpp_runtime_class_init_0(this);
                        this = (TerminalSceneComponent___c__DisplayClass190_0_o *)TerminalPramsManager_TypeInfo;
                      }
                      if ( v20 )
                      {
                        this = (TerminalSceneComponent___c__DisplayClass190_0_o *)((__int64 (__fastcall *)(struct BaseCore_o *, bool, _QWORD, const MethodInfo *, long double))v20->klass->vtable._4_FocusInOut.methodPtr)(
                                                                                    v20,
                                                                                    BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x) == 0,
                                                                                    0,
                                                                                    v20->klass->vtable._4_FocusInOut.method,
                                                                                    inited);
                        v21 = v2->fields.__4__this;
                        if ( v21 )
                        {
                          v22 = v21->fields.mTerminalServant;
                          v23 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
                          System_Action___ctor(
                            v23,
                            (Il2CppObject *)v9,
                            Method_TerminalSceneComponent___c__DisplayClass190_1__SetupStandServant_b__2__,
                            0);
                          if ( v22 )
                          {
                            StandFigureSlideComponent__SlideOut(v22, v23, 0, 0);
LABEL_53:
                            TerminalPramsManager__PlaySystemSE(0, 0);
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
              if ( !byte_4C453C7 )
              {
                sub_1C37058(&TerminalPramsManager_TypeInfo);
                byte_4C453C7 = 1;
              }
              this = (TerminalSceneComponent___c__DisplayClass190_0_o *)TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                v5 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                this = (TerminalSceneComponent___c__DisplayClass190_0_o *)TerminalPramsManager_TypeInfo;
              }
              BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x) = 1;
              v24 = v2->fields.__4__this;
              if ( v24 )
              {
                v25 = v24->fields.mEarthCore;
                if ( !byte_4C3FFA9 )
                {
                  sub_1C37058(&TerminalPramsManager_TypeInfo);
                  this = (TerminalSceneComponent___c__DisplayClass190_0_o *)TerminalPramsManager_TypeInfo;
                  byte_4C3FFA9 = 1;
                }
                if ( !LODWORD(this[5].fields.__4__this) )
                {
                  v5 = j_il2cpp_runtime_class_init_0(this);
                  this = (TerminalSceneComponent___c__DisplayClass190_0_o *)TerminalPramsManager_TypeInfo;
                }
                if ( v25 )
                {
                  this = (TerminalSceneComponent___c__DisplayClass190_0_o *)((__int64 (__fastcall *)(struct BaseCore_o *, bool, _QWORD, const MethodInfo *, long double))v25->klass->vtable._4_FocusInOut.methodPtr)(
                                                                              v25,
                                                                              BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x) == 0,
                                                                              0,
                                                                              v25->klass->vtable._4_FocusInOut.method,
                                                                              v5);
                  v26 = v2->fields.__4__this;
                  if ( v26 )
                  {
                    this = (TerminalSceneComponent___c__DisplayClass190_0_o *)v26->fields.mTerminalServant;
                    if ( this )
                    {
                      StandFigureSlideComponent__SlideIn((StandFigureSlideComponent_o *)this, 0, 0);
                      goto LABEL_53;
                    }
                  }
                }
              }
LABEL_54:
              sub_1C372B4(this);
            }
          }
        }
      }
    }
  }
}


void TerminalSceneComponent___c__DisplayClass190_1___ctor(
        TerminalSceneComponent___c__DisplayClass190_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass190_1___SetupStandServant_b__2(
        TerminalSceneComponent___c__DisplayClass190_1_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  TerminalSceneComponent___c__DisplayClass190_1_o *v3; // x20
  struct TerminalSceneComponent___c__DisplayClass190_0_o *CS___8__locals1; // x8
  TerminalSceneComponent_o *_4__this; // x19
  UserServantEntity_o *usd; // x20

  v3 = this;
  if ( (byte_4C453C1 & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass190_1_o *)sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C453C1 = 1;
  }
  CS___8__locals1 = v3->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_12;
  _4__this = CS___8__locals1->fields.__4__this;
  usd = v3->fields._usd;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FFA9 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FFA9 = 1;
  }
  this = (TerminalSceneComponent___c__DisplayClass190_1_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass190_1_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !_4__this )
LABEL_12:
    sub_1C372B4(this);
  TerminalSceneComponent__SetupStandServant(_4__this, usd, BYTE2(this[5].fields.CS___8__locals1[2].monitor), 0, v2);
}


void TerminalSceneComponent___c__DisplayClass196_0___ctor(
        TerminalSceneComponent___c__DisplayClass196_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass196_0___coFadein_WorldDisp_b__0(
        TerminalSceneComponent___c__DisplayClass196_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAct, 0);
}


void TerminalSceneComponent___c__DisplayClass196_0___coFadein_WorldDisp_b__1(
        TerminalSceneComponent___c__DisplayClass196_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent___c__DisplayClass196_0_o *v3; // x19
  System_Action_o *_9__3; // x22
  TerminalSceneComponent_o *_4__this; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  v3 = this;
  if ( (byte_4C453C2 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass196_0_o *)sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass196_0__coFadein_WorldDisp_b__3__);
    byte_4C453C2 = 1;
  }
  _9__3 = v3->fields.__9__3;
  _4__this = v3->fields.__4__this;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v3,
      Method_TerminalSceneComponent___c__DisplayClass196_0__coFadein_WorldDisp_b__3__,
      0);
    v3->fields.__9__3 = _9__3;
    sub_1C36FFC((CGThumbnailListItem_o *)&v3->fields.__9__3, (int32_t)_9__3, v6, v7);
  }
  if ( !_4__this )
    sub_1C372B4(this);
  TerminalSceneComponent__StartWindowMessage(_4__this, _9__3, v2);
}


void TerminalSceneComponent___c__DisplayClass196_0___coFadein_WorldDisp_b__2(
        TerminalSceneComponent___c__DisplayClass196_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  TerminalSceneComponent__StartWindowMessage(_4__this, 0, v2);
}


void TerminalSceneComponent___c__DisplayClass196_0___coFadein_WorldDisp_b__3(
        TerminalSceneComponent___c__DisplayClass196_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAct, 0);
}


void TerminalSceneComponent___c__DisplayClass197_0___ctor(
        TerminalSceneComponent___c__DisplayClass197_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass197_0___Fadein_MapDisp_b__0(
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
        (v5 = this->fields.__4__this) == 0) )
  {
    sub_1C372B4(_4__this);
  }
  v5->fields._FirstFadeTime_k__BackingField = 0.0;
}


void TerminalSceneComponent___c__DisplayClass198_0___ctor(
        TerminalSceneComponent___c__DisplayClass198_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass198_0___Fadein_MapDisp_Load_b__0(
        TerminalSceneComponent___c__DisplayClass198_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C372B4(this);
  TerminalSceneComponent__Fadein_MapDisp_Start(this->fields.__4__this, this->fields.fade_time, this->fields.end_act, v2);
}


void TerminalSceneComponent___c__DisplayClass199_0___ctor(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass199_0___Fadein_MapDisp_Start_b__2(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct WarEntity_o *war_dat; // x8

  war_dat = this->fields.war_dat;
  if ( !war_dat || (this = (TerminalSceneComponent___c__DisplayClass199_0_o *)this->fields.__4__this) == 0 )
    sub_1C372B4(this);
  TerminalSceneComponent__StartEventDailyPoint((TerminalSceneComponent_o *)this, war_dat->fields.eventId, action, v3);
}


void TerminalSceneComponent___c__DisplayClass199_0___Fadein_MapDisp_Start_b__3(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct WarEntity_o *war_dat; // x9

  war_dat = this->fields.war_dat;
  if ( !war_dat || !this->fields.__4__this )
    sub_1C372B4(this);
  TerminalSceneComponent__FadeInAndTriggerEventEffects(
    this->fields.__4__this,
    this->fields.fade_time,
    war_dat->fields.eventId,
    this->fields.end_act,
    v2);
}


void TerminalSceneComponent___c__DisplayClass199_0___Fadein_MapDisp_Start_b__4(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (mTerminalList = _4__this->fields.mTerminalList) == 0
    || (this = (TerminalSceneComponent___c__DisplayClass199_0_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0 )
  {
    sub_1C372B4(this);
  }
  QuestBoardListViewManager__SetMode((QuestBoardListViewManager_o *)this, 4, action, 0, 0, 0, 0);
}


void TerminalSceneComponent___c__DisplayClass199_0___Fadein_MapDisp_Start_b__5(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass199_0_o *v4; // x20
  struct TerminalSceneComponent_o *_4__this; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  v4 = this;
  if ( (byte_4C453C3 & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass199_0_o *)sub_1C37058(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4C453C3 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (mTerminalMap = _4__this->fields.mTerminalMap) == 0
    || (this = (TerminalSceneComponent___c__DisplayClass199_0_o *)mTerminalMap->fields.spotMaskObj) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0),
        (this = (TerminalSceneComponent___c__DisplayClass199_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__)) == 0) )
  {
    sub_1C372B4(this);
  }
  QuestAfterAction__LoadVoice((QuestAfterAction_o *)this, action, 0);
}


void TerminalSceneComponent___c__DisplayClass199_1___ctor(
        TerminalSceneComponent___c__DisplayClass199_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass199_1___Fadein_MapDisp_Start_b__7(
        TerminalSceneComponent___c__DisplayClass199_1_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *IsNullOrEmpty; // x0
  __int64 v4; // x8
  __int64 v5; // x8
  TerminalPramsManager_c *v6; // x0
  Il2CppObject *Instance; // x19
  struct TerminalSceneComponent___c__DisplayClass199_0_o *CS___8__locals1; // x8

  if ( (byte_4C453CE & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C453CE = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
  }
  IsNullOrEmpty = (UnityEngine_GameObject_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    IsNullOrEmpty = (UnityEngine_GameObject_o *)TerminalSceneComponent_TypeInfo;
  }
  v4 = *(_QWORD *)IsNullOrEmpty[7].fields.m_CachedPtr;
  if ( !v4 )
    goto LABEL_30;
  v5 = *(_QWORD *)(v4 + 264);
  if ( !v5 )
    goto LABEL_30;
  IsNullOrEmpty = *(UnityEngine_GameObject_o **)(v5 + 552);
  if ( !IsNullOrEmpty )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive(IsNullOrEmpty, this->fields.oldActive, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C453CB )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C453CB = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  IsNullOrEmpty = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(
                                                v6->static_fields->_QuestWindowMessage_k__BackingField,
                                                0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C453CD )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C453CD = 1;
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
        *(Il2CppObject **)(IsNullOrEmpty[7].fields.m_CachedPtr + 120),
        0);
      return;
    }
LABEL_30:
    sub_1C372B4(IsNullOrEmpty);
  }
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_30;
  IsNullOrEmpty = (UnityEngine_GameObject_o *)CS___8__locals1->fields.__4__this;
  if ( !IsNullOrEmpty )
    goto LABEL_30;
  TerminalSceneComponent__StartWindowMessage((TerminalSceneComponent_o *)IsNullOrEmpty, 0, 0);
}


void TerminalSceneComponent___c__DisplayClass202_0___ctor(
        TerminalSceneComponent___c__DisplayClass202_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass202_0___FadeInAndTriggerEventEffects_b__0(
        TerminalSceneComponent___c__DisplayClass202_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(_4__this, this->fields.eventId, this->fields.callback, 0);
}


void TerminalSceneComponent___c__DisplayClass202_0___FadeInAndTriggerEventEffects_b__1(
        TerminalSceneComponent___c__DisplayClass202_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_Action_o *_9__3; // x22
  QuestAfterAction_o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C453CF & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass202_0__FadeInAndTriggerEventEffects_b__3__);
    byte_4C453CF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  _9__3 = this->fields.__9__3;
  v5 = (QuestAfterAction_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent___c__DisplayClass202_0__FadeInAndTriggerEventEffects_b__3__,
      0);
    this->fields.__9__3 = _9__3;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__3, (int32_t)_9__3, v6, v7);
  }
  if ( !v5 )
    sub_1C372B4(Instance);
  QuestAfterAction__Play(v5, _9__3, 0);
}


void TerminalSceneComponent___c__DisplayClass202_0___FadeInAndTriggerEventEffects_b__3(
        TerminalSceneComponent___c__DisplayClass202_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(_4__this, this->fields.eventId, this->fields.callback, 0);
}


void TerminalSceneComponent___c__DisplayClass202_0___FadeInAndTriggerEventEffects_b__4(
        TerminalSceneComponent___c__DisplayClass202_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(_4__this, this->fields.eventId, this->fields.callback, 0);
}


void TerminalSceneComponent___c__DisplayClass202_1___ctor(
        TerminalSceneComponent___c__DisplayClass202_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass202_1___FadeInAndTriggerEventEffects_b__2(
        TerminalSceneComponent___c__DisplayClass202_1_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct TerminalSceneComponent___c__DisplayClass202_0_o *CS___8__locals1; // x8

  if ( (byte_4C453D0 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4C453D0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  if ( BYTE3(Instance[12].klass) )
  {
    ActionExtensions__Call(this->fields.questAfterActionPlay, 0);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || !Instance )
LABEL_9:
    sub_1C372B4(Instance);
  CommonUI__maskFadein((CommonUI_o *)Instance, CS___8__locals1->fields.fadeTime, this->fields.questAfterActionPlay, 0);
}


void TerminalSceneComponent___c__DisplayClass205_0___ctor(
        TerminalSceneComponent___c__DisplayClass205_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass205_0___FadeInAndTriggerEventEffectsNext_b__0(
        TerminalSceneComponent___c__DisplayClass205_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  TitleInfoControl_o *mTitleInfo; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (mTitleInfo = _4__this->fields.mTitleInfo) == 0 )
    sub_1C372B4(this);
  TitleInfoControl__CheckSuperBossHpAnim(mTitleInfo, this->fields.callback, 0);
}


void TerminalSceneComponent___c__DisplayClass205_0___FadeInAndTriggerEventEffectsNext_b__1(
        TerminalSceneComponent___c__DisplayClass205_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  TerminalSceneComponent__SetActionBGColl(_4__this, 0, this->fields.callback, 0);
}


void TerminalSceneComponent___c__DisplayClass232_0___ctor(
        TerminalSceneComponent___c__DisplayClass232_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass232_0___PlayAutoExecuteQuest_b__0(
        TerminalSceneComponent___c__DisplayClass232_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass232_0_o *v2; // x19
  struct TerminalSceneComponent_o *_4__this; // x8
  ScrTerminalListTop_o *mTerminalList; // x20
  int32_t method_ptr_high; // w21
  int invoke_impl; // w24
  System_Action_o *_9__6; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  v2 = this;
  if ( (byte_4C453D3 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass232_0_o *)sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass232_0__PlayAutoExecuteQuest_b__6__);
    byte_4C453D3 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  mTerminalList = _4__this->fields.mTerminalList;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3CFE7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3CFE7 = 1;
  }
  this = (TerminalSceneComponent___c__DisplayClass232_0_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass232_0_o *)TerminalPramsManager_TypeInfo;
  }
  method_ptr_high = HIDWORD(this[3].fields.__9__6->fields.method_ptr);
  if ( !byte_4C3CFE6 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass232_0_o *)TerminalPramsManager_TypeInfo;
    byte_4C3CFE6 = 1;
  }
  if ( !LODWORD(this[4].fields.__9__2) )
  {
    j_il2cpp_runtime_class_init_0(this);
    this = (TerminalSceneComponent___c__DisplayClass232_0_o *)TerminalPramsManager_TypeInfo;
  }
  invoke_impl = this[3].fields.__9__6->fields.invoke_impl;
  _9__6 = v2->fields.__9__6;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)v2,
      Method_TerminalSceneComponent___c__DisplayClass232_0__PlayAutoExecuteQuest_b__6__,
      0);
    v2->fields.__9__6 = _9__6;
    sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.__9__6, (int32_t)_9__6, v8, v9);
  }
  if ( !mTerminalList )
LABEL_18:
    sub_1C372B4(this);
  ScrTerminalListTop__StartWindowMessage_36952584(mTerminalList, method_ptr_high, invoke_impl + 1, 2, _9__6, 0, 0);
}


void TerminalSceneComponent___c__DisplayClass232_0___PlayAutoExecuteQuest_b__1(
        TerminalSceneComponent___c__DisplayClass232_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  QuestEntity_o *questEnt; // x0
  struct TerminalSceneComponent_o *_4__this; // x8
  ScrTerminalListTop_o *mTerminalList; // x20
  int32_t name_high; // w21
  int namespaze; // w24
  System_Action_o *_9__2; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  clsQuestCheck_o *v12; // x19
  TerminalSceneComponent___c_c *v13; // x8
  System_Action_o *_9__232_3; // x20
  Il2CppObject *v15; // x21
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C453D1 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__232_3__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass232_0__PlayAutoExecuteQuest_b__2__);
    sub_1C37058(&TerminalSceneComponent___c_TypeInfo);
    byte_4C453D1 = 1;
  }
  questEnt = this->fields.questEnt;
  if ( !questEnt )
    goto LABEL_28;
  questEnt = (QuestEntity_o *)QuestEntity__HasFlag(questEnt, 0x800000000000LL, 0);
  if ( ((unsigned __int8)questEnt & 1) != 0 )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      mTerminalList = _4__this->fields.mTerminalList;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3CFE7 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3CFE7 = 1;
      }
      questEnt = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        questEnt = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      }
      name_high = HIDWORD(questEnt[1].klass->_1.name);
      if ( !byte_4C3CFE6 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        questEnt = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
        byte_4C3CFE6 = 1;
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
        _9__2 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(
          _9__2,
          (Il2CppObject *)this,
          Method_TerminalSceneComponent___c__DisplayClass232_0__PlayAutoExecuteQuest_b__2__,
          0);
        this->fields.__9__2 = _9__2;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v10, v11);
      }
      if ( mTerminalList )
      {
        ScrTerminalListTop__StartWindowMessage_36952584(mTerminalList, name_high, namespaze + 1, 2, _9__2, 1, 0);
        return;
      }
    }
LABEL_28:
    sub_1C372B4(questEnt);
  }
  questEnt = (QuestEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v12 = (clsQuestCheck_o *)questEnt;
  v13 = TerminalSceneComponent___c_TypeInfo;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v13 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__232_3 = v13->static_fields->__9__232_3;
  if ( !_9__232_3 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = TerminalSceneComponent___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__232_3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(_9__232_3, v15, Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__232_3__, 0);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__232_3 = _9__232_3;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__232_3, (int32_t)_9__232_3, v17, v18);
  }
  if ( !v12 )
    goto LABEL_28;
  clsQuestCheck__PlayQuestStartAction(v12, _9__232_3, 0);
}


void TerminalSceneComponent___c__DisplayClass232_0___PlayAutoExecuteQuest_b__2(
        TerminalSceneComponent___c__DisplayClass232_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass232_0_o *v2; // x20
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
  int32_t method_ptr_high; // w21

  v2 = this;
  if ( (byte_4C453D2 & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass232_0_o *)sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C453D2 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_60;
  this = (TerminalSceneComponent___c__DisplayClass232_0_o *)_4__this->fields.mTerminalMap;
  if ( !this )
    goto LABEL_60;
  this = (TerminalSceneComponent___c__DisplayClass232_0_o *)ScrTerminalMap__IsAllMaskActive((ScrTerminalMap_o *)this, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v4 = v2->fields.__4__this;
    if ( !v4 )
      goto LABEL_60;
    this = (TerminalSceneComponent___c__DisplayClass232_0_o *)v4->fields.mTerminalMap;
    if ( !this )
      goto LABEL_60;
    ScrTerminalMap__AllMaskEnd((ScrTerminalMap_o *)this, 0);
  }
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_60;
  this = (TerminalSceneComponent___c__DisplayClass232_0_o *)v5->fields.mTerminalList;
  if ( !this )
    goto LABEL_60;
  ScrTerminalListTop__IsAllTouchEnable((ScrTerminalListTop_o *)this, 0, 0, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3CFE7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3CFE7 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v6->static_fields->_QuestId_k__BackingField;
  if ( !byte_4C3FCAA )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4C3FCAA = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_LastPlayedQuestId_k__BackingField = QuestId_k__BackingField;
  if ( !byte_4C3CFE7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4C3CFE7 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  TerminalPramsManager__CheckClearSelectedStoryQuestId(v6->static_fields->_QuestId_k__BackingField, 0);
  if ( !byte_4C3CFE7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3CFE7 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  HasFlag = QuestMaster__HasFlag(v8->static_fields->_QuestId_k__BackingField, 0x8000000000LL, 0);
  v10 = TerminalPramsManager_TypeInfo;
  if ( HasFlag )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3CFE7 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3CFE7 = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    SpotId = QuestMaster__GetSpotId(v11->static_fields->_QuestId_k__BackingField, 0);
    if ( !byte_4C3FCAB )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3FCAB = 1;
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
  TerminalPramsManager__PlayQuestSave_SaveData(0);
  TerminalPramsManager__Save_SaveData(0);
  v13 = v2->fields.__4__this;
  if ( !v13 )
    goto LABEL_60;
  this = (TerminalSceneComponent___c__DisplayClass232_0_o *)v13->fields.mTerminalList;
  if ( !this )
    goto LABEL_60;
  Effect = ScrTerminalListTop__IsDisplayGetEffect((ScrTerminalListTop_o *)this, 0);
  if ( !byte_4C3FCAC )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FCAC = 1;
  }
  this = (TerminalSceneComponent___c__DisplayClass232_0_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass232_0_o *)TerminalPramsManager_TypeInfo;
  }
  BYTE2(this[3].fields.__9__6[1].fields.method) = Effect;
  v15 = v2->fields.__4__this;
  if ( !v15 )
    goto LABEL_60;
  mTerminalList = v15->fields.mTerminalList;
  if ( !byte_4C3CFE7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass232_0_o *)TerminalPramsManager_TypeInfo;
    byte_4C3CFE7 = 1;
  }
  if ( !LODWORD(this[4].fields.__9__2) )
  {
    j_il2cpp_runtime_class_init_0(this);
    this = (TerminalSceneComponent___c__DisplayClass232_0_o *)TerminalPramsManager_TypeInfo;
  }
  method_ptr_high = HIDWORD(this[3].fields.__9__6->fields.method_ptr);
  if ( !byte_4C3CFE6 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass232_0_o *)TerminalPramsManager_TypeInfo;
    byte_4C3CFE6 = 1;
  }
  if ( !LODWORD(this[4].fields.__9__2) )
  {
    j_il2cpp_runtime_class_init_0(this);
    this = (TerminalSceneComponent___c__DisplayClass232_0_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !mTerminalList )
LABEL_60:
    sub_1C372B4(this);
  ScrTerminalListTop__RequestBattleSecnario(
    mTerminalList,
    method_ptr_high,
    LODWORD(this[3].fields.__9__6->fields.invoke_impl) + 1,
    0);
}


void TerminalSceneComponent___c__DisplayClass232_0___PlayAutoExecuteQuest_b__6(
        TerminalSceneComponent___c__DisplayClass232_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass232_0_o *v2; // x19
  struct TerminalSceneComponent_o *_4__this; // x8
  ScrTerminalListTop_o *mTerminalList; // x20
  int32_t klass_high; // w22
  int32_t method_ptr_high; // w23
  struct TerminalSceneComponent_o *v7; // x8

  v2 = this;
  if ( (byte_4C453D4 & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass232_0_o *)sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C453D4 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_22;
  mTerminalList = _4__this->fields.mTerminalList;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3D397 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D397 = 1;
  }
  this = (TerminalSceneComponent___c__DisplayClass232_0_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass232_0_o *)TerminalPramsManager_TypeInfo;
  }
  klass_high = HIDWORD(this[3].fields.__9__6->klass);
  if ( !byte_4C3CFE7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass232_0_o *)TerminalPramsManager_TypeInfo;
    byte_4C3CFE7 = 1;
  }
  if ( !LODWORD(this[4].fields.__9__2) )
  {
    j_il2cpp_runtime_class_init_0(this);
    this = (TerminalSceneComponent___c__DisplayClass232_0_o *)TerminalPramsManager_TypeInfo;
  }
  method_ptr_high = HIDWORD(this[3].fields.__9__6->fields.method_ptr);
  if ( !byte_4C3CFE6 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass232_0_o *)TerminalPramsManager_TypeInfo;
    byte_4C3CFE6 = 1;
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
          method_ptr_high,
          LODWORD(this[3].fields.__9__6->fields.invoke_impl) + 1,
          1,
          0,
          0,
          0),
        (v7 = v2->fields.__4__this) == 0)
    || (this = (TerminalSceneComponent___c__DisplayClass232_0_o *)v7->fields.mTerminalList) == 0 )
  {
LABEL_22:
    sub_1C372B4(this);
  }
  ScrTerminalListTop__StartQuestBeforeFollower((ScrTerminalListTop_o *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass237_0___ctor(
        TerminalSceneComponent___c__DisplayClass237_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass237_0___PlayEventTutorial_b__0(
        TerminalSceneComponent___c__DisplayClass237_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass237_0_o *v2; // x19
  System_Action_o *_9__1; // x22
  TerminalSceneComponent_o *_4__this; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  v2 = this;
  if ( (byte_4C453D5 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass237_0_o *)sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass237_0__PlayEventTutorial_b__1__);
    byte_4C453D5 = 1;
  }
  _9__1 = v2->fields.__9__1;
  _4__this = v2->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_TerminalSceneComponent___c__DisplayClass237_0__PlayEventTutorial_b__1__,
      0);
    v2->fields.__9__1 = _9__1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v5, v6);
  }
  if ( !_4__this )
    sub_1C372B4(this);
  TerminalSceneComponent__PlayEventTutorialWithoutAfterAction(_4__this, _9__1, 0);
}


void TerminalSceneComponent___c__DisplayClass237_0___PlayEventTutorial_b__1(
        TerminalSceneComponent___c__DisplayClass237_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  TerminalSceneComponent___c__DisplayClass237_0_o *v4; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (mTerminalList = _4__this->fields.mTerminalList) == 0
    || (v4 = this, (this = (TerminalSceneComponent___c__DisplayClass237_0_o *)mTerminalList->fields.mActionBgColl) == 0)
    || (this = (TerminalSceneComponent___c__DisplayClass237_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0)) == 0 )
  {
    sub_1C372B4(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  ActionExtensions__Call(v4->fields.callbackAfter, 0);
}


void TerminalSceneComponent___c__DisplayClass255_0___ctor(
        TerminalSceneComponent___c__DisplayClass255_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass255_0___CheckRewardPopupChain_b__0(
        TerminalSceneComponent___c__DisplayClass255_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  ScrTerminalListTop_o *Instance; // x0
  struct TerminalSceneComponent_o *_4__this; // x8
  CommonUI_o *v7; // x21
  TerminalSceneComponent_o *v8; // x20

  if ( (byte_4C453D6 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_DialogMessageMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C453D6 = 1;
  }
  Instance = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v7 = (CommonUI_o *)Instance;
  Instance = _4__this->fields.mTerminalList;
  if ( !Instance )
    goto LABEL_11;
  Instance = (ScrTerminalListTop_o *)ScrTerminalListTop__PopEventSvtGets(Instance, 0);
  if ( !v7
    || (CommonUI__SetupLoginResultData(v7, (System_Int32_array *)Instance, 0),
        v8 = this->fields.__4__this,
        (Instance = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (Instance = (ScrTerminalListTop_o *)CommonUI__get_CampaignDirectBonus((CommonUI_o *)Instance, 0), !v8)
    || (TerminalSceneComponent__SaveCampaignDirectBonusData(v8, (CommonUI_CampaignDirectBonusData_array *)Instance, 0),
        (Instance = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (ScrTerminalListTop_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_DialogMessageMaster___)) == 0 )
  {
LABEL_11:
    sub_1C372B4(Instance);
  }
  DialogMessageMaster__ShowAvailables((DialogMessageMaster_o *)Instance, 1, action, 0, 0, 0, 0, 0);
}


void TerminalSceneComponent___c__DisplayClass255_0___CheckRewardPopupChain_b__1(
        TerminalSceneComponent___c__DisplayClass255_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_Action_o *_9__5; // x22
  CommonUI_o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C453D7 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass255_0__CheckRewardPopupChain_b__5__);
    byte_4C453D7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__5 = this->fields.__9__5;
  v7 = (CommonUI_o *)Instance;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent___c__DisplayClass255_0__CheckRewardPopupChain_b__5__,
      0);
    this->fields.__9__5 = _9__5;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__5, (int32_t)_9__5, v8, v9);
  }
  if ( !v7 )
    sub_1C372B4(Instance);
  CommonUI__StartLoginAndCampaignBonus(v7, action, _9__5, -1, 0);
}


void TerminalSceneComponent___c__DisplayClass255_0___CheckRewardPopupChain_b__3(
        TerminalSceneComponent___c__DisplayClass255_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (TerminalSceneComponent___c__DisplayClass255_0_o *)_4__this->fields.mTerminalList) == 0 )
    sub_1C372B4(this);
  ScrTerminalListTop__CheckLoginAfterTransitionDialog((ScrTerminalListTop_o *)this, action, 100, 0);
}


void TerminalSceneComponent___c__DisplayClass255_0___CheckRewardPopupChain_b__4(
        TerminalSceneComponent___c__DisplayClass255_0_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  int32_t EventID; // w20
  void *Master_object; // x0
  TerminalPramsManager_c *v7; // x0
  TerminalSceneComponent_o *_4__this; // x20
  System_Action_o *v9; // x21
  Il2CppObject *v10; // x22
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C453D8 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__255_6__);
    sub_1C37058(&TerminalSceneComponent___c_TypeInfo);
    byte_4C453D8 = 1;
  }
  entity = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3D397 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D397 = 1;
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
    if ( !byte_4C3D397 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3D397 = 1;
    }
    v4 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v4 = TerminalPramsManager_TypeInfo;
    }
    EventID = WarMaster__getEventID(v4->static_fields->_WarId_k__BackingField, 0);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_object )
    goto LABEL_39;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
    &entity,
    EventID,
    (const MethodInfo_33A10EC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FA9E )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FA9E = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  if ( v7->static_fields->_SpotId_k__BackingField < 1
    || !entity
    || !EventDetailEntity__IsMakeFarm((EventDetailEntity_o *)entity, 0) )
  {
    _4__this = this->fields.__4__this;
    Master_object = TerminalSceneComponent___c_TypeInfo;
    if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      Master_object = TerminalSceneComponent___c_TypeInfo;
    }
    v9 = *(System_Action_o **)(*((_QWORD *)Master_object + 23) + 128LL);
    if ( !v9 )
    {
      if ( !*((_DWORD *)Master_object + 56) )
      {
        j_il2cpp_runtime_class_init_0(Master_object);
        Master_object = TerminalSceneComponent___c_TypeInfo;
      }
      v10 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
      v9 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v9, v10, Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__255_6__, 0);
      static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
      static_fields->__9__255_6 = v9;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__255_6, (int32_t)v9, v12, v13);
    }
    if ( _4__this )
    {
      TerminalSceneComponent__CheckOpenCampaignDirectBonus(_4__this, v9, 0);
      goto LABEL_38;
    }
LABEL_39:
    sub_1C372B4(Master_object);
  }
LABEL_38:
  ActionExtensions__Call(this->fields.afterChain, 0);
}


void TerminalSceneComponent___c__DisplayClass255_0___CheckRewardPopupChain_b__5(
        TerminalSceneComponent___c__DisplayClass255_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (TerminalSceneComponent___c__DisplayClass255_0_o *)_4__this->fields.mPlayerStatus) == 0 )
    sub_1C372B4(this);
  ScrPlayerStatus__mfInitUserData((ScrPlayerStatus_o *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass257_0___ctor(
        TerminalSceneComponent___c__DisplayClass257_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass257_0___CheckOpenCampaignDirectBonus_b__2(
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
  if ( (byte_4C453D9 & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass257_0_o *)sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C453D9 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(this);
  _4__this->fields._IsPlayingCampaignDirectBonus_k__BackingField = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C403E9 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403E9 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v6->static_fields;
  static_fields->_CampaignDirectBonus_k__BackingField = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_CampaignDirectBonus_k__BackingField, 0, (int32_t)method, v3);
  TerminalPramsManager__CampaignDirectBonus_SaveData(0);
  ActionExtensions__Call(v4->fields.callback, 0);
}


void TerminalSceneComponent___c__DisplayClass264_0___ctor(
        TerminalSceneComponent___c__DisplayClass264_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass264_0___CheckSaveRouteSelect_b__0(
        TerminalSceneComponent___c__DisplayClass264_0_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  if ( (byte_4C453DA & 1) == 0 )
  {
    sub_1C37058(&ScriptManager_TypeInfo);
    byte_4C453DA = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0);
  ScriptManager__ClearSelectRouteArrayInCollection(0);
  ActionExtensions__Call(this->fields.callback, 0);
}


void TerminalSceneComponent___c__DisplayClass267_0___ctor(
        TerminalSceneComponent___c__DisplayClass267_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass267_0___CheckMasterMissionReset_b__0(
        TerminalSceneComponent___c__DisplayClass267_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  TerminalSceneComponent_c *v9; // x0
  System_String_o *MASTER_MISSION_RESET_KEY; // x21
  System_String_o *v11; // x0
  Il2CppObject *Instance; // x19
  System_Action_o *v13; // x21

  if ( (byte_4C453DB & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass267_1__CheckMasterMissionReset_b__1__);
    sub_1C37058(&TerminalSceneComponent___c__DisplayClass267_1_TypeInfo);
    byte_4C453DB = 1;
  }
  v5 = sub_1C372A4(TerminalSceneComponent___c__DisplayClass267_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v7, v8);
  *(_BYTE *)(v5 + 16) = isDecide;
  v9 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v9 = TerminalSceneComponent_TypeInfo;
  }
  MASTER_MISSION_RESET_KEY = v9->static_fields->MASTER_MISSION_RESET_KEY;
  v11 = System_Int64__ToString((int64_t)&this->fields, 0);
  UnityEngine_PlayerPrefs__SetString(MASTER_MISSION_RESET_KEY, v11, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v13,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass267_1__CheckMasterMissionReset_b__1__,
    0);
  if ( !Instance )
LABEL_8:
    sub_1C372B4(v6);
  CommonUI__CloseConfirmDialog_31208544((CommonUI_o *)Instance, v13, 0);
}


void TerminalSceneComponent___c__DisplayClass267_0___CheckMasterMissionReset_b__2(
        TerminalSceneComponent___c__DisplayClass267_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  ScrPlayerStatus_o *mPlayerStatus; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (mPlayerStatus = _4__this->fields.mPlayerStatus) == 0 )
    sub_1C372B4(this);
  ScrPlayerStatus__OpenMasterMission(mPlayerStatus, this->fields.callback, -1, 0);
}


void TerminalSceneComponent___c__DisplayClass267_1___ctor(
        TerminalSceneComponent___c__DisplayClass267_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass267_1___CheckMasterMissionReset_b__1(
        TerminalSceneComponent___c__DisplayClass267_1_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass267_1_o *v2; // x20
  AvalonSceneManager_c *v3; // x8
  CommonUI_o *v4; // x19
  struct TerminalSceneComponent___c__DisplayClass267_0_o *CS___8__locals1; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__2; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct TerminalSceneComponent___c__DisplayClass267_0_o *v10; // x8

  v2 = this;
  if ( (byte_4C453DC & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (TerminalSceneComponent___c__DisplayClass267_1_o *)sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass267_0__CheckMasterMissionReset_b__2__);
    byte_4C453DC = 1;
  }
  if ( v2->fields.isDecide )
  {
    this = (TerminalSceneComponent___c__DisplayClass267_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        _9__2 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(
          _9__2,
          (Il2CppObject *)CS___8__locals1,
          Method_TerminalSceneComponent___c__DisplayClass267_0__CheckMasterMissionReset_b__2__,
          0);
        CS___8__locals1->fields.__9__2 = _9__2;
        sub_1C36FFC((CGThumbnailListItem_o *)&CS___8__locals1->fields.__9__2, (int32_t)_9__2, v8, v9);
      }
      if ( v4 )
      {
        CommonUI__maskFadeout(v4, 1, DEFAULT_FADE_TIME, _9__2, 0);
        return;
      }
    }
LABEL_13:
    sub_1C372B4(this);
  }
  v10 = v2->fields.CS___8__locals1;
  if ( !v10 )
    goto LABEL_13;
  ActionExtensions__Call(v10->fields.callback, 0);
}


void TerminalSceneComponent___c__DisplayClass268_0___ctor(
        TerminalSceneComponent___c__DisplayClass268_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass268_0___CheckNotificationDialog_b__0(
        TerminalSceneComponent___c__DisplayClass268_0_o *this,
        const MethodInfo *method)
{
  BattleResultBondsComponent_c *v3; // x0

  if ( (byte_4C453DD & 1) == 0 )
  {
    sub_1C37058(&BattleResultBondsComponent_TypeInfo);
    byte_4C453DD = 1;
  }
  v3 = BattleResultBondsComponent_TypeInfo;
  if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
    v3 = BattleResultBondsComponent_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3->static_fields->GET_EXIST_SVT_KEY, 0);
  ActionExtensions__Call(this->fields.callBack, 0);
}


void TerminalSceneComponent___c__DisplayClass268_0___CheckNotificationDialog_b__2(
        TerminalSceneComponent___c__DisplayClass268_0_o *this,
        const MethodInfo *method)
{
  BattleResultBondsComponent_c *v3; // x0

  if ( (byte_4C453DE & 1) == 0 )
  {
    sub_1C37058(&BattleResultBondsComponent_TypeInfo);
    byte_4C453DE = 1;
  }
  v3 = BattleResultBondsComponent_TypeInfo;
  if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
    v3 = BattleResultBondsComponent_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3->static_fields->GET_EXIST_SVT_KEY, 0);
  ActionExtensions__Call(this->fields.callBack, 0);
}


void TerminalSceneComponent___c__DisplayClass268_1___ctor(
        TerminalSceneComponent___c__DisplayClass268_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass268_1___CheckNotificationDialog_b__1(
        TerminalSceneComponent___c__DisplayClass268_1_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct TerminalSceneComponent___c__DisplayClass268_0_o *CS___8__locals1; // x21
  GetSvtCoin_array *coin; // x20
  System_Action_o *_9__2; // x22
  CommonUI_o *v7; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C453DF & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass268_0__CheckNotificationDialog_b__2__);
    byte_4C453DF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  coin = this->fields.coin;
  _9__2 = CS___8__locals1->fields.__9__2;
  v7 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)CS___8__locals1,
      Method_TerminalSceneComponent___c__DisplayClass268_0__CheckNotificationDialog_b__2__,
      0);
    CS___8__locals1->fields.__9__2 = _9__2;
    sub_1C36FFC((CGThumbnailListItem_o *)&CS___8__locals1->fields.__9__2, (int32_t)_9__2, v8, v9);
  }
  if ( !v7 )
LABEL_8:
    sub_1C372B4(Instance);
  CommonUI__CreateServantCoinConfirmDialog(v7, 1, coin, _9__2, 0);
}


void TerminalSceneComponent__coFadein_WorldDisp_d__196___ctor(
        TerminalSceneComponent__coFadein_WorldDisp_d__196_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool TerminalSceneComponent__coFadein_WorldDisp_d__196__MoveNext(
        TerminalSceneComponent__coFadein_WorldDisp_d__196_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent__coFadein_WorldDisp_d__196_o *v2; // x19
  int32_t _1__state; // w8
  struct TerminalSceneComponent_o *_4__this; // x20
  bool result; // w0
  TerminalSceneComponent___c__DisplayClass196_0_o *v6; // x22
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct TerminalSceneComponent_o *v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *endAct; // x1
  TerminalPramsManager_c *v15; // x0
  System_Collections_IEnumerator_o *v16; // x0
  System_Action_c *klass; // x8
  __int64 v18; // x8
  TerminalPramsManager_c *v19; // x0
  System_Collections_IEnumerator_o *v20; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  Il2CppObject *Master_object; // x21
  System_String_o *ShowingFolderBGM; // x21
  int v26; // w24
  int32_t method_info_high; // w8
  int monitor; // w24
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct ScrTerminalListTop_o *v30; // x8
  Il2CppObject *v31; // x19
  System_Action_o *v32; // x21
  TerminalPramsManager_c *v33; // x0
  System_String_o *v34; // x0
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v36; // x8
  Il2CppObject *v37; // x21
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v39; // x0
  intptr_t *v40; // x8
  _QWORD *v41; // x0
  System_Reflection_MethodBase_o *v42; // x20
  ScrTerminalListTop_c *v43; // x8
  TerminalPramsManager_c *v44; // x0
  ScrTerminalListTop_c *v45; // x0
  float *p_GrandMovieFadeTime; // x8
  AvalonSceneManager_c *v47; // x0
  System_Action_o *v48; // x19
  struct TerminalSceneComponent___c__DisplayClass196_0_o *_8__1; // x9
  int32_t index; // [xsp+4h] [xbp-4Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4C453E4 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C37058(&System_GC_TypeInfo);
    sub_1C37058(&ScrTerminalListTop_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
    sub_1C37058(&SoundManager_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass196_0__coFadein_WorldDisp_b__0__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass196_0__coFadein_WorldDisp_b__1__);
    sub_1C37058(&Method_TerminalSceneComponent___c__DisplayClass196_0__coFadein_WorldDisp_b__2__);
    sub_1C37058(&TerminalSceneComponent___c__DisplayClass196_0_TypeInfo);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)sub_1C37058(&Method_TerminalSceneComponent__coFadein_WorldDisp_d__196_MoveNext__);
    byte_4C453E4 = 1;
  }
  entity = 0;
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
    v6 = (TerminalSceneComponent___c__DisplayClass196_0_o *)sub_1C372A4(TerminalSceneComponent___c__DisplayClass196_0_TypeInfo);
    TerminalSceneComponent___c__DisplayClass196_0___ctor(v6, 0);
    v2->fields.__8__1 = v6;
    sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.__8__1, (int32_t)v6, v7, v8);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_149;
    v11 = v2->fields.__4__this;
    *(_QWORD *)&this->fields.__1__state = v11;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)v11, v9, v10);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_149;
    endAct = (Il2CppObject *)v2->fields.endAct;
    this->fields.__2__current = endAct;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)endAct, v12, v13);
    v2->fields._isAuto_5__2 = 0;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3FFC6 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3FFC6 = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    if ( !v15->static_fields->_IsMapReturnFolder_k__BackingField )
    {
      if ( !v15->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v15);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)TerminalPramsManager__IsAuto(0);
      v2->fields._isAuto_5__2 = (unsigned __int8)this & 1;
      if ( !_4__this )
        goto LABEL_149;
      TerminalSceneComponent__EndAuto(_4__this, 0);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
      if ( !this )
        goto LABEL_149;
      if ( RewardMiniPopupExecutor__IsBusy((RewardMiniPopupExecutor_o *)this, 0) )
      {
        v16 = TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect(_4__this, 0);
        UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)_4__this, v16, 0);
      }
      else
      {
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__stopSe(0.0, 0);
      }
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3EC65 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3EC65 = 1;
    }
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)TerminalPramsManager_TypeInfo;
    }
    if ( HIBYTE(this[2].fields.endAct->fields.original_method_info) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4C3CF06 )
      {
        sub_1C37058(&TerminalSceneComponent_TypeInfo);
        byte_4C3CF06 = 1;
      }
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)TerminalSceneComponent_TypeInfo;
      }
      klass = this[2].fields.endAct->klass;
      if ( !klass )
        goto LABEL_149;
      v18 = *(_QWORD *)&klass->_2.static_fields_size;
      if ( !v18 )
        goto LABEL_149;
      this = *(TerminalSceneComponent__coFadein_WorldDisp_d__196_o **)(v18 + 552);
      if ( !this )
        goto LABEL_149;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    }
    if ( !_4__this )
      goto LABEL_149;
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)_4__this->fields.mTerminalMap;
    if ( !this )
      goto LABEL_149;
    ScrTerminalMap__SetDisp((ScrTerminalMap_o *)this, 0, 0);
    if ( _4__this->fields._IsReq_InitEarthRotateY_k__BackingField )
    {
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)_4__this->fields.mEarthCore;
      _4__this->fields._IsReq_InitEarthRotateY_k__BackingField = 0;
      if ( !this )
        goto LABEL_149;
      BaseCore__SetRotateY_PointInitAngle((BaseCore_o *)this, 0);
    }
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)_4__this->fields.mTerminalList;
    if ( !this )
      goto LABEL_149;
    if ( !ScrTerminalListTop__isShowingFolder((ScrTerminalListTop_o *)this, 0) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3F898 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3F898 = 1;
      }
      v19 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v19 = TerminalPramsManager_TypeInfo;
      }
      v19->static_fields->_DispState_k__BackingField = 1;
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)_4__this->fields.mTitleInfo;
      if ( !this )
        goto LABEL_149;
      TitleInfoControl__SetActiveEventInfo_39835452((TitleInfoControl_o *)this, 1, 16, 0, 0, 0, 0);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_149;
      CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, 0, 1, 0);
    }
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_149;
    CommonUI__SetBgCameraActive((CommonUI_o *)this, 1, 0);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)_4__this->fields.mTerminalMap;
    if ( !this )
      goto LABEL_149;
    ScrTerminalMap__ReleaseMap((ScrTerminalMap_o *)this, 1, 0);
    if ( !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
    System_GC__Collect(0);
    if ( v2->fields.isExecuteUnusedAssets )
    {
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( this )
      {
        AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0, 0);
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          v20 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0);
          v2->fields.__2__current = (Il2CppObject *)v20;
          p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
          sub_1C36FFC(p__2__current, (int32_t)v20, v22, v23);
          result = 1;
          LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
          return result;
        }
      }
      goto LABEL_149;
    }
  }
  if ( v2->fields._isAuto_5__2 )
  {
    if ( !_4__this )
      goto LABEL_149;
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)_4__this->fields.mTerminalList;
    if ( !this )
      goto LABEL_149;
    if ( ScrTerminalListTop__isShowingFolder((ScrTerminalListTop_o *)this, 0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3D397 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3D397 = 1;
      }
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !Master_object )
        goto LABEL_149;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             HIDWORD(this[2].fields.endAct->klass),
             (const MethodInfo_33A10EC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
      {
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)_4__this->fields.mTerminalList;
        if ( !this )
          goto LABEL_149;
        ShowingFolderBGM = ScrTerminalListTop__GetShowingFolderBGM((ScrTerminalListTop_o *)this, 0);
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)System_String__IsNullOrEmpty(ShowingFolderBGM, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_112;
        if ( !entity )
          goto LABEL_149;
        v26 = (int)entity[1].klass;
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)BalanceConfig_TypeInfo;
        }
        method_info_high = HIDWORD(this[2].fields.endAct[6].fields.method_info);
        if ( v26 == method_info_high )
          goto LABEL_112;
        if ( !entity )
          goto LABEL_149;
        monitor = (int)entity[3].monitor;
        if ( !LODWORD(this[3].monitor) )
        {
          j_il2cpp_runtime_class_init_0(this);
          method_info_high = BalanceConfig_TypeInfo->static_fields->OrdealCallWarId;
        }
        if ( monitor == method_info_high || !TerminalSceneComponent__IsValidGrandBgm(_4__this, &index, 0) )
LABEL_112:
          TerminalSceneComponent__playBgm(_4__this, ShowingFolderBGM, 0, 0);
        else
          TerminalSceneComponent__PlayGrandBgm(_4__this, index, 0, 0);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C3EC65 )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C3EC65 = 1;
        }
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)TerminalPramsManager_TypeInfo;
        }
        if ( !HIBYTE(this[2].fields.endAct->fields.original_method_info) )
        {
          if ( !entity )
            goto LABEL_149;
          _8__1 = v2->fields.__8__1;
          if ( !_8__1 )
            goto LABEL_149;
          TerminalSceneComponent__FadeInAndTriggerEventEffects(
            _4__this,
            v2->fields.fadeTime,
            (int32_t)entity[6].klass,
            _8__1->fields.endAct,
            0);
          return 0;
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v36 = AvalonSceneManager_TypeInfo;
        if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          v36 = AvalonSceneManager_TypeInfo;
        }
        v37 = (Il2CppObject *)v2->fields.__8__1;
        DEFAULT_FADE_TIME = v36->static_fields->DEFAULT_FADE_TIME;
        v39 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        v40 = &Method_TerminalSceneComponent___c__DisplayClass196_0__coFadein_WorldDisp_b__2__;
        goto LABEL_142;
      }
    }
  }
  else if ( !_4__this )
  {
    goto LABEL_149;
  }
  this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)_4__this->fields.mTerminalList;
  if ( !this )
    goto LABEL_149;
  this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)ScrTerminalListTop__get_IsActiveBlankEarth(
                                                                  (ScrTerminalListTop_o *)this,
                                                                  0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    mTerminalList = _4__this->fields.mTerminalList;
    if ( !mTerminalList )
      goto LABEL_149;
    if ( !mTerminalList->fields.isBackFromBlankEarthMap )
    {
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)TerminalSceneComponent__TryPlayGrandBgm(
                                                                      _4__this,
                                                                      0,
                                                                      0);
      if ( ((unsigned __int8)this & 1) == 0 )
        TerminalSceneComponent__playDefaultBgm(_4__this, 0, 0);
    }
  }
  v30 = _4__this->fields.mTerminalList;
  if ( !v30 )
LABEL_149:
    sub_1C372B4(this);
  if ( !v30->fields.isBackFromBlankEarthMap )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3FFAF )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3FFAF = 1;
    }
    v33 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v33 = TerminalPramsManager_TypeInfo;
    }
    if ( v33->static_fields->_IsTransFromOrdealCall_k__BackingField )
    {
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)_4__this->fields.mTerminalList;
      if ( !this )
        goto LABEL_149;
      v34 = ScrTerminalListTop__CheckTerminalTopEffect((ScrTerminalListTop_o *)this, 0);
      if ( System_String__IsNullOrEmpty(v34, 0) )
      {
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)_4__this->fields.mTerminalList;
        if ( !this )
          goto LABEL_149;
        ScrTerminalListTop__PlayBgmOpeningMovieAfter((ScrTerminalListTop_o *)this, 0);
      }
      else
      {
        v41 = Method_TerminalSceneComponent__coFadein_WorldDisp_d__196_MoveNext__;
        if ( (*((_BYTE *)Method_TerminalSceneComponent__coFadein_WorldDisp_d__196_MoveNext__ + 83) & 2) != 0 )
          v41 = (_QWORD *)sub_1C37070(Method_TerminalSceneComponent__coFadein_WorldDisp_d__196_MoveNext__);
        v42 = (System_Reflection_MethodBase_o *)sub_1C3703C(v41, v41[4]);
        v43 = ScrTerminalListTop_TypeInfo;
        if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
          v43 = ScrTerminalListTop_TypeInfo;
        }
        OverwriteAssetSoundName__PlaySe(v42, v43->static_fields->GrandMovieAfterSEName, 0, 0);
      }
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3FFAF )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3FFAF = 1;
    }
    v44 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v44 = TerminalPramsManager_TypeInfo;
    }
    if ( v44->static_fields->_IsTransFromOrdealCall_k__BackingField )
    {
      v45 = ScrTerminalListTop_TypeInfo;
      if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
        v45 = ScrTerminalListTop_TypeInfo;
      }
      p_GrandMovieFadeTime = &v45->static_fields->GrandMovieFadeTime;
    }
    else
    {
      v47 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v47 = AvalonSceneManager_TypeInfo;
      }
      p_GrandMovieFadeTime = &v47->static_fields->DEFAULT_FADE_TIME;
    }
    DEFAULT_FADE_TIME = *p_GrandMovieFadeTime;
    v37 = (Il2CppObject *)v2->fields.__8__1;
    v39 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    v40 = &Method_TerminalSceneComponent___c__DisplayClass196_0__coFadein_WorldDisp_b__1__;
LABEL_142:
    v48 = v39;
    System_Action___ctor(v39, v37, *v40, 0);
    if ( !Instance )
      goto LABEL_149;
    CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v48, 0);
    return 0;
  }
  v31 = (Il2CppObject *)v2->fields.__8__1;
  v32 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v32, v31, Method_TerminalSceneComponent___c__DisplayClass196_0__coFadein_WorldDisp_b__0__, 0);
  TerminalSceneComponent__StartWindowMessage(_4__this, v32, 0);
  return 0;
}


Il2CppObject *TerminalSceneComponent__coFadein_WorldDisp_d__196__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__coFadein_WorldDisp_d__196_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TerminalSceneComponent__coFadein_WorldDisp_d__196__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__coFadein_WorldDisp_d__196_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_TerminalSceneComponent__coFadein_WorldDisp_d__196_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *TerminalSceneComponent__coFadein_WorldDisp_d__196__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__coFadein_WorldDisp_d__196_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TerminalSceneComponent__coFadein_WorldDisp_d__196__System_IDisposable_Dispose(
        TerminalSceneComponent__coFadein_WorldDisp_d__196_o *this,
        const MethodInfo *method)
{
  ;
}