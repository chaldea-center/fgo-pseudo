void __fastcall TerminalSceneComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  TerminalSceneComponent_c *v3; // x8
  int32_t v4; // w1
  struct TerminalSceneComponent_StaticFields *static_fields; // x0
  int32_t v6; // w1
  struct TerminalSceneComponent_StaticFields *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w1
  struct TerminalSceneComponent_StaticFields *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w1
  struct TerminalSceneComponent_StaticFields *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  struct TerminalSceneComponent_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_4A5D113 & 1) == 0 )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_10107/*"OverwriteCommonBG2"*/);
    sub_1B885B0(&StringLiteral_10106/*"OverwriteCommonBG1"*/);
    sub_1B885B0(&StringLiteral_21306/*"masterMissionResetKey"*/);
    sub_1B885B0(&StringLiteral_13589/*"Terminal/EarthCore/{0:D2}"*/);
    sub_1B885B0(&StringLiteral_10056/*"OrdealCallChapterPlayState"*/);
    byte_4A5D113 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  TerminalSceneComponent_TypeInfo->static_fields->DEFAULT_AMBIENT_LIGHT_COLOR = (struct UnityEngine_Color_o)xmmword_BB5550;
  v4 = StringLiteral_21306/*"masterMissionResetKey"*/;
  static_fields = v3->static_fields;
  static_fields->MASTER_MISSION_RESET_KEY = (struct System_String_o *)StringLiteral_21306/*"masterMissionResetKey"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->MASTER_MISSION_RESET_KEY, v4, v1, v2);
  v6 = StringLiteral_13589/*"Terminal/EarthCore/{0:D2}"*/;
  v7 = TerminalSceneComponent_TypeInfo->static_fields;
  v7->EARTH_ASSET_NAME = (struct System_String_o *)StringLiteral_13589/*"Terminal/EarthCore/{0:D2}"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7->EARTH_ASSET_NAME, v6, v8, v9);
  v10 = StringLiteral_10056/*"OrdealCallChapterPlayState"*/;
  v11 = TerminalSceneComponent_TypeInfo->static_fields;
  v11->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY = (struct System_String_o *)StringLiteral_10056/*"OrdealCallChapterPlayState"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY, v10, v12, v13);
  v14 = StringLiteral_10106/*"OverwriteCommonBG1"*/;
  v15 = TerminalSceneComponent_TypeInfo->static_fields;
  v15->OVERWRITE_COMMON_BG_TYPE1_KEY = (struct System_String_o *)StringLiteral_10106/*"OverwriteCommonBG1"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->OVERWRITE_COMMON_BG_TYPE1_KEY, v14, v16, v17);
  v18 = StringLiteral_10107/*"OverwriteCommonBG2"*/;
  v19 = TerminalSceneComponent_TypeInfo->static_fields;
  v19->OVERWRITE_COMMON_BG_TYPE2_KEY = (struct System_String_o *)StringLiteral_10107/*"OverwriteCommonBG2"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->OVERWRITE_COMMON_BG_TYPE2_KEY, v18, v20, v21);
  *(_WORD *)&TerminalSceneComponent_TypeInfo->static_fields->isTitleToTerminalTransition = 0;
}


void __fastcall TerminalSceneComponent___ctor(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  this->fields.TUTORIAL_SPOT_ARROW_POS = (struct UnityEngine_Vector2_o)3263954944LL;
  this->fields.TUTORIAL_SPOT_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BB59D0;
  *(_OWORD *)&this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x = xmmword_BB5770;
  this->fields.TUTORIAL_QUEST_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BB48E0;
  *(_OWORD *)&this->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x = xmmword_BB5780;
  this->fields.TUTORIAL_MENU_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BB5A70;
  *(_OWORD *)&this->fields.TUTORIAL_MENU_MESSAGE_POS.fields.x = xmmword_BB42D0;
  this->fields.TUTORIAL_GACHA_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BB4A20;
  this->fields.TUTORIAL_MENU_ARROW_POS2 = (struct UnityEngine_Vector2_o)0xC366000043DB0000LL;
  this->fields.TUTORIAL_COMBINE_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BB4D20;
  this->fields.TUTORIAL_COMBINE_ARROW_POS = (struct UnityEngine_Vector2_o)0xC3200000C3058000LL;
  this->fields.isTopLoginBusy = 1;
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall TerminalSceneComponent__Awake(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalSceneComponent_c *v5; // x0
  UnityEngine_GameObject_o *UiFlag; // x0
  __int64 v7; // x1
  bool v8; // w1

  if ( (byte_4A5D0CC & 1) == 0 )
  {
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5D0CC = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  v5->static_fields->mInstance = this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)TerminalSceneComponent_TypeInfo->static_fields,
    (int32_t)this,
    v2,
    v3);
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
        v8 = 1;
        goto LABEL_15;
      }
    }
LABEL_16:
    sub_1B8880C(UiFlag, v7);
  }
  UnityEngine_GameObject__SetActive(this->fields.mBgText, 0, 0LL);
  UiFlag = this->fields.mBgGradLeft;
  if ( !UiFlag )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(UiFlag, 0, 0LL);
  UiFlag = this->fields.mBgGradRight;
  if ( !UiFlag )
    goto LABEL_16;
  v8 = 0;
LABEL_15:
  UnityEngine_GameObject__SetActive(UiFlag, v8, 0LL);
}


void __fastcall TerminalSceneComponent__CallAfterTopHome(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  if ( this->fields.isTopLoginBusy )
  {
    this->fields.afterTopLogin = callback;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.afterTopLogin,
      (int32_t)callback,
      (int32_t)method,
      v3);
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
    sub_1B8880C(0LL, item);
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
    sub_1B8880C(0LL, questId);
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
    sub_1B8880C(this, item);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, isPlaySe);
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

  if ( (byte_4A5D112 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4A5D112 = 1;
  }
  v4 = (EventTutorialMaster_EventTutorialArgs_o *)sub_1B887FC(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor(v4, 0LL);
  if ( !v4
    || (v4->fields.eventId = 0,
        v4->fields.openKind = openType,
        v7 = sub_1B887FC(EventTutorialMaster_EventTutorialArgs_TypeInfo),
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
    sub_1B8880C(IsNullOrEmpty, v6);
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
          IsNullOrEmpty = (System_Collections_ICollection_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( IsNullOrEmpty )
          {
            IsNullOrEmpty = (System_Collections_ICollection_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
              if ( klass == *((_DWORD *)IsNullOrEmpty[11].monitor + 200) )
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
    sub_1B88814(IsNullOrEmpty, v6);
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

  if ( (byte_4A5D0FA & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5D0FA = 1;
  }
  entity = 0LL;
  t2.fields._dateData = 0LL;
  v19 = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_40;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_311D988 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_40:
    sub_1B8880C(Instance, v5);
  if ( EventDetailEntity__IsEventDailyPoint((EventDetailEntity_o *)entity, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A588DC )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A588DC = 1;
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
    dateData = NetworkManager__getDateTime_38478840(BeforeTimeEventDailyPoint_k__BackingField, 0LL).fields._dateData;
    if ( !byte_4A588DB )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A588DB = 1;
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
    System_DateTime___ctor_62385476(v26, Year, Month, v16, v15->static_fields->EventDailyPointResetAt, 0, 0, 0LL);
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
  System_String_o *String_69417656; // x0
  const MethodInfo *v6; // x5

  if ( (byte_4A5D107 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_2035/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_TITLE"*/);
    sub_1B885B0(&StringLiteral_19627/*"freeShopIds"*/);
    sub_1B885B0(&StringLiteral_2034/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_DETAIL"*/);
    byte_4A5D107 = 1;
  }
  String_69417656 = UnityEngine_PlayerPrefs__GetString_69417656((System_String_o *)StringLiteral_19627/*"freeShopIds"*/, 0LL);
  if ( System_String__IsNullOrEmpty(String_69417656, 0LL) )
    ActionExtensions__Call(callback, 0LL);
  else
    TerminalSceneComponent__OpenExchangeDialogue(
      this,
      (System_String_o *)StringLiteral_19627/*"freeShopIds"*/,
      (System_String_o *)StringLiteral_2035/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_TITLE"*/,
      (System_String_o *)StringLiteral_2034/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_DETAIL"*/,
      callback,
      v6);
}


void __fastcall TerminalSceneComponent__CheckExchangeDialogTheReturn(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *String_69417656; // x0
  const MethodInfo *v6; // x5

  if ( (byte_4A5D108 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_2037/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_TITLE"*/);
    sub_1B885B0(&StringLiteral_22918/*"returnRarePriShopIds"*/);
    sub_1B885B0(&StringLiteral_2036/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_DETAIL"*/);
    byte_4A5D108 = 1;
  }
  String_69417656 = UnityEngine_PlayerPrefs__GetString_69417656((System_String_o *)StringLiteral_22918/*"returnRarePriShopIds"*/, 0LL);
  if ( System_String__IsNullOrEmpty(String_69417656, 0LL) )
    ActionExtensions__Call(callback, 0LL);
  else
    TerminalSceneComponent__OpenExchangeDialogue(
      this,
      (System_String_o *)StringLiteral_22918/*"returnRarePriShopIds"*/,
      (System_String_o *)StringLiteral_2037/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_TITLE"*/,
      (System_String_o *)StringLiteral_2036/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_DETAIL"*/,
      callback,
      v6);
}


void __fastcall TerminalSceneComponent__CheckLastPlayBgm(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTerminalList; // x20
  __int64 v4; // x1
  ScrTerminalListTop_o *v5; // x0

  if ( (byte_4A5D0F0 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D0F0 = 1;
  }
  mTerminalList = (UnityEngine_Object_o *)this->fields.mTerminalList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mTerminalList, 0LL, 0LL) )
  {
    v5 = this->fields.mTerminalList;
    if ( !v5 )
      sub_1B8880C(0LL, v4);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_Action_o **v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  _QWORD *v13; // x21
  TerminalSceneComponent_c *v14; // x0
  System_String_o *String; // x0
  int64_t v16; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v18; // x21
  System_String_o *v19; // x22
  System_String_o *v20; // x23
  CommonConfirmDialog_ClickDelegate_o *v21; // x24
  TerminalSceneComponent_c *v22; // x0
  struct TerminalSceneComponent_StaticFields *static_fields; // x8
  int64_t v24; // x0
  System_String_o *MASTER_MISSION_RESET_KEY; // x19
  System_String_o *v26; // x0

  if ( (byte_4A5D10B & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass254_0__CheckMasterMissionReset_b__0__);
    sub_1B885B0(&TerminalSceneComponent___c__DisplayClass254_0_TypeInfo);
    sub_1B885B0(&StringLiteral_8770/*"MST_MISSION_CHANGE_MSG"*/);
    sub_1B885B0(&StringLiteral_8769/*"MST_MISSION_CHANGE_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_1212/*"0"*/);
    byte_4A5D10B = 1;
  }
  v5 = sub_1B887FC(TerminalSceneComponent___c__DisplayClass254_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass254_0___ctor((TerminalSceneComponent___c__DisplayClass254_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_20;
  *(_QWORD *)(v5 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 32) = callback;
  v10 = (System_Action_o **)(v5 + 32);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)callback, v11, v12);
  mPlayerStatus = this->fields.mPlayerStatus;
  if ( !mPlayerStatus )
    goto LABEL_20;
  *(_QWORD *)(v5 + 16) = ScrPlayerStatus__GetMstMissionStarts(mPlayerStatus, 0LL);
  v13 = (_QWORD *)(v5 + 16);
  v14 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v14 = TerminalSceneComponent_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             v14->static_fields->MASTER_MISSION_RESET_KEY,
             (System_String_o *)StringLiteral_1212/*"0"*/,
             0LL);
  v16 = System_Int64__Parse(String, 0LL);
  if ( *v13 )
  {
    if ( v16 )
    {
      if ( v16 != *v13 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v18 = LocalizationManager__Get((System_String_o *)StringLiteral_8770/*"MST_MISSION_CHANGE_MSG"*/, 0LL);
        v19 = LocalizationManager__Get((System_String_o *)StringLiteral_8769/*"MST_MISSION_CHANGE_DECIDE"*/, 0LL);
        v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
        v21 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v21,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent___c__DisplayClass254_0__CheckMasterMissionReset_b__0__,
          0LL);
        mPlayerStatus = (ScrPlayerStatus_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        if ( Instance )
        {
          CommonUI__OpenConfirmDecideDlg(
            (CommonUI_o *)Instance,
            (System_String_o *)StringLiteral_1/*""*/,
            v18,
            v19,
            v20,
            v21,
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
            0LL);
          return;
        }
LABEL_20:
        sub_1B8880C(mPlayerStatus, v7);
      }
    }
    else
    {
      v22 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v22 = TerminalSceneComponent_TypeInfo;
      }
      static_fields = v22->static_fields;
      v24 = v5 + 16;
      MASTER_MISSION_RESET_KEY = static_fields->MASTER_MISSION_RESET_KEY;
      v26 = System_Int64__ToString(v24, 0LL);
      UnityEngine_PlayerPrefs__SetString(MASTER_MISSION_RESET_KEY, v26, 0LL);
    }
  }
  ActionExtensions__Call(*v10, 0LL);
}


void __fastcall TerminalSceneComponent__CheckNotificationDialog(
        TerminalSceneComponent_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v4; // x19
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_Action_o **v9; // x20
  BattleResultBondsComponent_c *v10; // x0
  BattleResultBondsComponent_c *v11; // x0
  Il2CppObject *String_69417656; // x21
  System_Object_array *v13; // x0
  System_Object_array *v14; // x22
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x23
  __int64 v17; // x25
  Il2CppObject *v18; // x8
  BattleResultBondsComponent_c *v19; // x0
  BattleResultBondsComponent_c *v20; // x0
  System_Action_o *v21; // x20
  EventServantEntity_o *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x22
  __int64 v26; // x22
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x19
  __int64 v30; // x20
  Il2CppObject *v31; // x8
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x19
  Il2CppObject *v37; // x22
  __int64 v38; // x0
  Il2CppObject *v39; // [xsp+30h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4A5D10C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&BattleResultBondsComponent_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&GetSvtCoin___TypeInfo);
    sub_1B885B0(&GetSvtCoin_TypeInfo);
    sub_1B885B0(&Method_JsonManager_DeserializeArray_GetSvts___);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass255_0__CheckNotificationDialog_b__0__);
    sub_1B885B0(&TerminalSceneComponent___c__DisplayClass255_0_TypeInfo);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass255_1__CheckNotificationDialog_b__1__);
    sub_1B885B0(&TerminalSceneComponent___c__DisplayClass255_1_TypeInfo);
    sub_1B885B0(&StringLiteral_12343/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/);
    byte_4A5D10C = 1;
  }
  v39 = 0LL;
  entity = 0LL;
  v4 = sub_1B887FC(TerminalSceneComponent___c__DisplayClass255_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass255_0___ctor((TerminalSceneComponent___c__DisplayClass255_0_o *)v4, 0LL);
  if ( !v4 )
    goto LABEL_54;
  *(_QWORD *)(v4 + 16) = callBack;
  v9 = (System_Action_o **)(v4 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 16), (int32_t)callBack, v7, v8);
  v10 = BattleResultBondsComponent_TypeInfo;
  if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
    v10 = BattleResultBondsComponent_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v10->static_fields->GET_EXIST_SVT_KEY, 0LL) )
  {
    v11 = BattleResultBondsComponent_TypeInfo;
    if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
      v11 = BattleResultBondsComponent_TypeInfo;
    }
    String_69417656 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_69417656(
                                        v11->static_fields->GET_EXIST_SVT_KEY,
                                        0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v13 = JsonManager__DeserializeArray_object_(
            String_69417656,
            (const MethodInfo_2EE5F40 *)Method_JsonManager_DeserializeArray_GetSvts___);
    if ( v13 )
    {
      v14 = v13;
      if ( *(_QWORD *)&v13->max_length )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_54;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
        max_length = v14->max_length;
        if ( max_length >= 1 )
        {
          v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v17 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v17 >= max_length )
              goto LABEL_55;
            v18 = v14->m_Items[v17];
            if ( !v18 || !v16 )
              goto LABEL_54;
            Instance = (DataManager_o *)DataMasterBase_object__object__long___TryGetEntity(
                                          v16,
                                          &entity,
                                          (int64_t)v18[1].klass,
                                          (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
            if ( (_DWORD)v17 == v14->max_length - 1 )
            {
              v19 = BattleResultBondsComponent_TypeInfo;
              if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
                v19 = BattleResultBondsComponent_TypeInfo;
              }
              UnityEngine_PlayerPrefs__DeleteKey(v19->static_fields->GET_EXIST_SVT_KEY, 0LL);
              ActionExtensions__Call(*v9, 0LL);
            }
            max_length = v14->max_length;
            if ( (int)++v17 >= max_length )
              goto LABEL_29;
          }
          v21 = *(System_Action_o **)(v4 + 24);
          v22 = (EventServantEntity_o *)Instance;
          if ( !v21 )
          {
            v21 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            System_Action___ctor(
              v21,
              (Il2CppObject *)v4,
              Method_TerminalSceneComponent___c__DisplayClass255_0__CheckNotificationDialog_b__0__,
              0LL);
            *(_QWORD *)(v4 + 24) = v21;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 24), (int32_t)v21, v23, v24);
          }
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SvtCoinMaster___);
          if ( entity )
          {
            v25 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
            Instance = (DataManager_o *)UserServantEntity__getSvtId((UserServantEntity_o *)entity, 0LL);
            if ( v25 )
            {
              Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            v25,
                                            &v39,
                                            (int32_t)Instance,
                                            (const MethodInfo_311D988 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !v39 )
                  goto LABEL_54;
                if ( SHIDWORD(v39[1].klass) >= 1 )
                {
                  v26 = sub_1B887FC(TerminalSceneComponent___c__DisplayClass255_1_TypeInfo);
                  TerminalSceneComponent___c__DisplayClass255_1___ctor(
                    (TerminalSceneComponent___c__DisplayClass255_1_o *)v26,
                    0LL);
                  if ( !v26 )
                    goto LABEL_54;
                  *(_QWORD *)(v26 + 24) = v4;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 24), v4, v27, v28);
                  v29 = sub_1B88658(GetSvtCoin___TypeInfo, 1LL);
                  v30 = sub_1B887FC(GetSvtCoin_TypeInfo);
                  GetSvtCoin___ctor((GetSvtCoin_o *)v30, 0LL);
                  v31 = v39;
                  if ( !v39 )
                    goto LABEL_54;
                  if ( !v30 )
                    goto LABEL_54;
                  *(_DWORD *)(v30 + 16) = v39[1].klass;
                  *(int32x2_t *)(v30 + 20) = vrev64_s32(*(int32x2_t *)((char *)&v31[1].klass + 4));
                  if ( !v29 )
                    goto LABEL_54;
                  Instance = (DataManager_o *)sub_1B886EC(v30, *(_QWORD *)(*(_QWORD *)v29 + 64LL));
                  if ( !Instance )
                  {
                    v38 = sub_1B88830(0LL);
                    sub_1B886D8(v38, 0LL);
                  }
                  if ( !*(_DWORD *)(v29 + 24) )
LABEL_55:
                    sub_1B88814(Instance, v6);
                  *(_QWORD *)(v29 + 32) = v30;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 32), v30, v32, v33);
                  *(_QWORD *)(v26 + 16) = v29;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 16), v29, v34, v35);
                  v21 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                  System_Action___ctor(
                    v21,
                    (Il2CppObject *)v26,
                    Method_TerminalSceneComponent___c__DisplayClass255_1__CheckNotificationDialog_b__1__,
                    0LL);
                }
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v36 = LocalizationManager__Get((System_String_o *)StringLiteral_12343/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, 0LL);
              v37 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              Instance = (DataManager_o *)EventServantEntity__GetGetMessage(v22, 0LL);
              if ( v37 )
              {
                CommonUI__OpenNotificationDialog(
                  (CommonUI_o *)v37,
                  v36,
                  (System_String_o *)Instance,
                  v21,
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
          sub_1B8880C(Instance, v6);
        }
      }
    }
LABEL_29:
    v20 = BattleResultBondsComponent_TypeInfo;
    if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
      v20 = BattleResultBondsComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__DeleteKey(v20->static_fields->GET_EXIST_SVT_KEY, 0LL);
  }
  ActionExtensions__Call(*v9, 0LL);
}


void __fastcall TerminalSceneComponent__CheckOpenCampaignDirectBonus(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  ScrTerminalListTop_o *mTerminalList; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_Action_o *v8; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  int v11; // w22
  ScrTerminalListTop_o *v12; // x23
  bool IsBlankEarthAction; // w25
  System_Action_o *v14; // x24
  const MethodInfo *v15; // x2
  System_Action_o *v16; // x0
  System_Collections_IEnumerator_o *v17; // x0

  if ( (byte_4A5D104 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass245_0__CheckOpenCampaignDirectBonus_b__0__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass245_0__CheckOpenCampaignDirectBonus_b__1__);
    sub_1B885B0(&TerminalSceneComponent___c__DisplayClass245_0_TypeInfo);
    byte_4A5D104 = 1;
  }
  v3 = sub_1B887FC(TerminalSceneComponent___c__DisplayClass245_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass245_0___ctor((TerminalSceneComponent___c__DisplayClass245_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_19;
  *(_QWORD *)(v3 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  this->fields._IsPlayingCampaignDirectBonus_k__BackingField = 1;
  v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v8,
    (Il2CppObject *)v3,
    Method_TerminalSceneComponent___c__DisplayClass245_0__CheckOpenCampaignDirectBonus_b__0__,
    0LL);
  *(_QWORD *)(v3 + 24) = v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), (int32_t)v8, v9, v10);
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList
    || (mTerminalList = (ScrTerminalListTop_o *)ScrTerminalListTop__CheckTerminalTopEffect(mTerminalList, 0LL),
        !this->fields.mTerminalList)
    || (v11 = (int)mTerminalList,
        mTerminalList = (ScrTerminalListTop_o *)ScrTerminalListTop__GetCurrentLoginEntity(
                                                  this->fields.mTerminalList,
                                                  0LL),
        !this->fields.mTerminalList) )
  {
LABEL_19:
    sub_1B8880C(mTerminalList, v5);
  }
  v12 = mTerminalList;
  IsBlankEarthAction = ScrTerminalListTop__IsBlankEarthAction(this->fields.mTerminalList, 0LL);
  v14 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v3,
    Method_TerminalSceneComponent___c__DisplayClass245_0__CheckOpenCampaignDirectBonus_b__1__,
    0LL);
  if ( v11 > 0 || v12 || IsBlankEarthAction )
  {
    if ( v12 || v11 < 1 )
    {
      if ( !IsBlankEarthAction )
      {
        v16 = *(System_Action_o **)(v3 + 24);
        goto LABEL_18;
      }
      v17 = TerminalSceneComponent__CoWaitBlankEerthActionEnd(this, v14, v15);
    }
    else
    {
      v17 = TerminalSceneComponent__CoWaitTerminalTopEffectEnd(this, v14, v15);
    }
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v17, 0LL);
    return;
  }
  v16 = v14;
LABEL_18:
  ActionExtensions__Call(v16, 0LL);
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

  if ( (byte_4A5D0FC & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5D0FC = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_1B8880C(Instance, v5);
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
        const MethodInfo *method)
{
  __int64 v7; // x20
  void *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  CommonUI_CampaignDirectBonusData_array *CampaignDirectBonus; // x21
  TerminalPramsManager_c *v17; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  __int64 v19; // x0
  Il2CppObject *mTerminalList; // x23
  __int64 v21; // x21
  System_Action_object__o *v22; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  System_Action_object__o *v25; // x22
  int32_t v26; // w2
  int32_t v27; // w3
  System_Action_object__o *v28; // x22
  int32_t v29; // w2
  int32_t v30; // w3
  Il2CppObject *v31; // x24
  System_Action_object__o *v32; // x22
  int32_t v33; // w2
  int32_t v34; // w3
  Il2CppObject *v35; // x24
  System_Action_object__o *v36; // x22
  int32_t v37; // w2
  int32_t v38; // w3
  Il2CppObject *v39; // x24
  System_Action_object__o *v40; // x22
  int32_t v41; // w2
  int32_t v42; // w3
  System_Action_object__o *v43; // x22
  int32_t v44; // w2
  int32_t v45; // w3
  System_Action_object__o *v46; // x22
  int32_t v47; // w2
  int32_t v48; // w3
  System_Action_object__o *v49; // x22
  int32_t v50; // w2
  int32_t v51; // w3
  int32_t v52; // w2
  int32_t v53; // w3
  System_Action_object__o *v54; // x22
  Il2CppObject *v55; // x23
  struct TerminalSceneComponent___c_StaticFields *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_Action_object__o *v59; // x22
  int32_t v60; // w2
  int32_t v61; // w3
  System_Action_object__o *v62; // x22
  int32_t v63; // w2
  int32_t v64; // w3
  System_Action_object__o *v65; // x22
  int32_t v66; // w2
  int32_t v67; // w3
  System_Action_object__o *v68; // x22
  int32_t v69; // w2
  int32_t v70; // w3
  System_Action_object__o *v71; // x22
  int32_t v72; // w2
  int32_t v73; // w3
  System_Action_object__o *v74; // x22
  int32_t v75; // w2
  int32_t v76; // w3
  System_Action_object__o *v77; // x19
  int32_t v78; // w2
  int32_t v79; // w3
  ActionChain_o *v80; // x19
  __int64 v81; // x21
  System_Action_o *v82; // x22
  int32_t v83; // w2
  int32_t v84; // w3

  if ( (byte_4A5D103 & 1) == 0 )
  {
    sub_1B885B0(&ActionChain_TypeInfo);
    sub_1B885B0(&System_Action___TypeInfo);
    sub_1B885B0(&System_Action_Action____TypeInfo);
    sub_1B885B0(&System_Action_Action__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CommonUI_StartLoginMessages__);
    sub_1B885B0(&Method_CommonUI_StartServantEventJoinLeaveNotification__);
    sub_1B885B0(&Method_ScrTerminalListTop_ShowTerminalMessagesDialogue__);
    sub_1B885B0(&Method_ScrTerminalListTop_StartShowWarClearReward__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_TerminalSceneComponent_CheckAfterQuestClearDialog__);
    sub_1B885B0(&Method_TerminalSceneComponent_CheckExchangeDialogTheFree__);
    sub_1B885B0(&Method_TerminalSceneComponent_CheckExchangeDialogTheReturn__);
    sub_1B885B0(&Method_TerminalSceneComponent_CheckMasterMissionReset__);
    sub_1B885B0(&Method_TerminalSceneComponent_CheckNotificationDialog__);
    sub_1B885B0(&Method_TerminalSceneComponent_CheckSaveRouteSelect__);
    sub_1B885B0(&Method_TerminalSceneComponent_CheckSpecialAscensionTutorial__);
    sub_1B885B0(&Method_TerminalSceneComponent_CheckTutorialOnTerminalAfterFreeExchangeDialog__);
    sub_1B885B0(&Method_TerminalSceneComponent_CheckTutorialOnTerminal__);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    sub_1B885B0(&Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__244_2__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass244_0__CheckRewardPopupChain_b__0__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass244_0__CheckRewardPopupChain_b__1__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass244_0__CheckRewardPopupChain_b__3__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass244_0__CheckRewardPopupChain_b__4__);
    sub_1B885B0(&TerminalSceneComponent___c__DisplayClass244_0_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent___c_TypeInfo);
    byte_4A5D103 = 1;
  }
  v7 = sub_1B887FC(TerminalSceneComponent___c__DisplayClass244_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass244_0___ctor((TerminalSceneComponent___c__DisplayClass244_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_52;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = afterChain;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)afterChain, v12, v13);
  if ( !checkTutorialEnded )
    goto LABEL_8;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_37688364(102, 0LL) )
  {
LABEL_8:
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_52;
    if ( CommonUI__get_CampaignDirectBonus((CommonUI_o *)Instance, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_52;
      CampaignDirectBonus = CommonUI__get_CampaignDirectBonus((CommonUI_o *)Instance, 0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A588D7 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A588D7 = 1;
      }
      v17 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v17 = TerminalPramsManager_TypeInfo;
      }
      static_fields = v17->static_fields;
      static_fields->_CampaignDirectBonus_k__BackingField = CampaignDirectBonus;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&static_fields->_CampaignDirectBonus_k__BackingField,
        (int32_t)CampaignDirectBonus,
        v14,
        v15);
      TerminalPramsManager__CampaignDirectBonus_SaveData(0LL);
    }
    v19 = sub_1B88658(System_Action_Action____TypeInfo, 17LL);
    mTerminalList = (Il2CppObject *)this->fields.mTerminalList;
    v21 = v19;
    v22 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
    System_Action_object____ctor(v22, mTerminalList, Method_ScrTerminalListTop_StartShowWarClearReward__, 0LL);
    if ( v21 )
    {
      if ( !*(_DWORD *)(v21 + 24) )
        goto LABEL_51;
      *(_QWORD *)(v21 + 32) = v22;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 32), (int32_t)v22, v23, v24);
      v25 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
      System_Action_object____ctor(
        v25,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent_CheckAfterQuestClearDialog__,
        0LL);
      if ( *(_DWORD *)(v21 + 24) <= 1u )
        goto LABEL_51;
      *(_QWORD *)(v21 + 40) = v25;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 40), (int32_t)v25, v26, v27);
      v28 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
      System_Action_object____ctor(
        v28,
        (Il2CppObject *)v7,
        Method_TerminalSceneComponent___c__DisplayClass244_0__CheckRewardPopupChain_b__0__,
        0LL);
      if ( *(_DWORD *)(v21 + 24) <= 2u )
        goto LABEL_51;
      *(_QWORD *)(v21 + 48) = v28;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 48), (int32_t)v28, v29, v30);
      v31 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v32 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
      System_Action_object____ctor(v32, v31, Method_CommonUI_StartServantEventJoinLeaveNotification__, 0LL);
      if ( *(_DWORD *)(v21 + 24) <= 3u )
        goto LABEL_51;
      *(_QWORD *)(v21 + 56) = v32;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 56), (int32_t)v32, v33, v34);
      v35 = (Il2CppObject *)this->fields.mTerminalList;
      v36 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
      System_Action_object____ctor(v36, v35, Method_ScrTerminalListTop_ShowTerminalMessagesDialogue__, 0LL);
      if ( *(_DWORD *)(v21 + 24) <= 4u )
        goto LABEL_51;
      *(_QWORD *)(v21 + 64) = v36;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 64), (int32_t)v36, v37, v38);
      v39 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v40 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
      System_Action_object____ctor(v40, v39, Method_CommonUI_StartLoginMessages__, 0LL);
      if ( *(_DWORD *)(v21 + 24) <= 5u )
        goto LABEL_51;
      *(_QWORD *)(v21 + 72) = v40;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 72), (int32_t)v40, v41, v42);
      v43 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
      System_Action_object____ctor(
        v43,
        (Il2CppObject *)v7,
        Method_TerminalSceneComponent___c__DisplayClass244_0__CheckRewardPopupChain_b__1__,
        0LL);
      if ( *(_DWORD *)(v21 + 24) <= 6u )
        goto LABEL_51;
      *(_QWORD *)(v21 + 80) = v43;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 80), (int32_t)v43, v44, v45);
      v46 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
      System_Action_object____ctor(
        v46,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent_CheckSpecialAscensionTutorial__,
        0LL);
      if ( *(_DWORD *)(v21 + 24) <= 7u )
        goto LABEL_51;
      *(_QWORD *)(v21 + 88) = v46;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 88), (int32_t)v46, v47, v48);
      v49 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
      System_Action_object____ctor(
        v49,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent_CheckTutorialOnTerminal__,
        0LL);
      if ( *(_DWORD *)(v21 + 24) <= 8u )
        goto LABEL_51;
      *(_QWORD *)(v21 + 96) = v49;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 96), (int32_t)v49, v50, v51);
      Instance = TerminalSceneComponent___c_TypeInfo;
      if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
        Instance = TerminalSceneComponent___c_TypeInfo;
      }
      v54 = *(System_Action_object__o **)(*((_QWORD *)Instance + 23) + 88LL);
      if ( !v54 )
      {
        if ( !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          Instance = TerminalSceneComponent___c_TypeInfo;
        }
        v55 = (Il2CppObject *)**((_QWORD **)Instance + 23);
        v54 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
        System_Action_object____ctor(v54, v55, Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__244_2__, 0LL);
        v56 = TerminalSceneComponent___c_TypeInfo->static_fields;
        v56->__9__244_2 = (struct System_Action_Action__o *)v54;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v56->__9__244_2, (int32_t)v54, v57, v58);
      }
      if ( *(_DWORD *)(v21 + 24) <= 9u )
        goto LABEL_51;
      *(_QWORD *)(v21 + 104) = v54;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 104), (int32_t)v54, v52, v53);
      v59 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
      System_Action_object____ctor(
        v59,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent_CheckNotificationDialog__,
        0LL);
      if ( *(_DWORD *)(v21 + 24) <= 0xAu )
        goto LABEL_51;
      *(_QWORD *)(v21 + 112) = v59;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 112), (int32_t)v59, v60, v61);
      v62 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
      System_Action_object____ctor(
        v62,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent_CheckMasterMissionReset__,
        0LL);
      if ( *(_DWORD *)(v21 + 24) <= 0xBu )
        goto LABEL_51;
      *(_QWORD *)(v21 + 120) = v62;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 120), (int32_t)v62, v63, v64);
      v65 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
      System_Action_object____ctor(v65, (Il2CppObject *)this, Method_TerminalSceneComponent_CheckSaveRouteSelect__, 0LL);
      if ( *(_DWORD *)(v21 + 24) <= 0xCu )
        goto LABEL_51;
      *(_QWORD *)(v21 + 128) = v65;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 128), (int32_t)v65, v66, v67);
      v68 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
      System_Action_object____ctor(
        v68,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent_CheckExchangeDialogTheFree__,
        0LL);
      if ( *(_DWORD *)(v21 + 24) <= 0xDu )
        goto LABEL_51;
      *(_QWORD *)(v21 + 136) = v68;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 136), (int32_t)v68, v69, v70);
      v71 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
      System_Action_object____ctor(
        v71,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent_CheckExchangeDialogTheReturn__,
        0LL);
      if ( *(_DWORD *)(v21 + 24) <= 0xEu )
        goto LABEL_51;
      *(_QWORD *)(v21 + 144) = v71;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 144), (int32_t)v71, v72, v73);
      v74 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
      System_Action_object____ctor(
        v74,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent_CheckTutorialOnTerminalAfterFreeExchangeDialog__,
        0LL);
      if ( *(_DWORD *)(v21 + 24) <= 0xFu )
        goto LABEL_51;
      *(_QWORD *)(v21 + 152) = v74;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 152), (int32_t)v74, v75, v76);
      v77 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
      System_Action_object____ctor(
        v77,
        (Il2CppObject *)v7,
        Method_TerminalSceneComponent___c__DisplayClass244_0__CheckRewardPopupChain_b__3__,
        0LL);
      if ( *(_DWORD *)(v21 + 24) <= 0x10u )
        goto LABEL_51;
      *(_QWORD *)(v21 + 160) = v77;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 160), (int32_t)v77, v78, v79);
      v80 = (ActionChain_o *)sub_1B887FC(ActionChain_TypeInfo);
      ActionChain___ctor_46556284(v80, (System_Action_Action__array *)v21, 0LL);
      v81 = sub_1B88658(System_Action___TypeInfo, 1LL);
      v82 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v82,
        (Il2CppObject *)v7,
        Method_TerminalSceneComponent___c__DisplayClass244_0__CheckRewardPopupChain_b__4__,
        0LL);
      if ( !v81 )
        goto LABEL_52;
      if ( !*(_DWORD *)(v81 + 24) )
LABEL_51:
        sub_1B88814(Instance, v9);
      *(_QWORD *)(v81 + 32) = v82;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v81 + 32), (int32_t)v82, v83, v84);
      if ( v80 )
      {
        Instance = ChainableActionBase__Final((ChainableActionBase_o *)v80, (System_Action_array *)v81, 0LL);
        if ( Instance )
        {
          ChainableActionBase__Execute((ChainableActionBase_o *)Instance, 0LL);
          goto LABEL_48;
        }
      }
    }
LABEL_52:
    sub_1B8880C(Instance, v9);
  }
  ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0LL);
LABEL_48:
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
  int32_t v7; // w2
  int32_t v8; // w3
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  System_Int32_array *routes; // [xsp+8h] [xbp-38h] BYREF
  int32_t phase; // [xsp+18h] [xbp-28h] BYREF
  int32_t questId; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4A5D10A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1B885B0(&Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&ScriptManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass252_0__CheckSaveRouteSelect_b__0__);
    sub_1B885B0(&TerminalSceneComponent___c__DisplayClass252_0_TypeInfo);
    byte_4A5D10A = 1;
  }
  v4 = sub_1B887FC(TerminalSceneComponent___c__DisplayClass252_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass252_0___ctor((TerminalSceneComponent___c__DisplayClass252_0_o *)v4, 0LL);
  if ( !v4 )
    goto LABEL_19;
  *(_QWORD *)(v4 + 16) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 16), (int32_t)callback, v7, v8);
  phase = -1;
  questId = -1;
  routes = 0LL;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( ScriptManager__GetSelectRouteArrayInCollection(&questId, &phase, &routes, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    if ( !Instance )
      goto LABEL_19;
    if ( QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, phase, 0LL) )
    {
      v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v9,
        (Il2CppObject *)v4,
        Method_TerminalSceneComponent___c__DisplayClass252_0__CheckSaveRouteSelect_b__0__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__getRequest_object_(
                   v9,
                   (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
      if ( Instance )
      {
        BattleRouteSelectRequest__beginRequest((BattleRouteSelectRequest_o *)Instance, questId, phase, routes, 0LL);
        return;
      }
LABEL_19:
      sub_1B8880C(Instance, v6);
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
  if ( (byte_4A5D10D & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_1B885B0(&CombineRootComponent_TypeInfo);
    byte_4A5D10D = 1;
  }
  if ( !v4->fields.isTutorialAfter )
  {
    mTerminalMap = v4->fields.mTerminalMap;
    if ( !mTerminalMap || (this = (TerminalSceneComponent_o *)mTerminalMap->fields.dispRoot) == 0LL )
      sub_1B8880C(this, callback);
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

  if ( (byte_4A5D0F9 & 1) == 0 )
  {
    sub_1B885B0(&OpeningMovieData_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    sub_1B885B0(&StringLiteral_13513/*"TUTORIAL_QUEST_ID1"*/);
    sub_1B885B0(&StringLiteral_13514/*"TUTORIAL_QUEST_ID2"*/);
    sub_1B885B0(&StringLiteral_13515/*"TUTORIAL_QUEST_ID3"*/);
    sub_1B885B0(&StringLiteral_13516/*"TUTORIAL_QUEST_ID4"*/);
    byte_4A5D0F9 = 1;
  }
  this->fields.mTutorialKind = 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_37688364(102, 0LL) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__GetProgress(0LL) == 4 )
      return 0;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1B8880C(Instance, v4);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DCC )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DCC = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  this->fields.mIsStart_LoginBonusWhiteBg = !v6->static_fields->_IsAutoResume_k__BackingField;
  if ( !byte_4A5644B )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4A5644B = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_4A57DC6 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4A57DC6 = 1;
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
  if ( !byte_4A57DCA )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DCA = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_WarId_k__BackingField = FirstWarId;
  if ( !byte_4A57DC9 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_4A57DC9 = 1;
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
  v9 = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  this->fields.mTutorialKind = 5;
  v10 = (clsQuestCheck_o *)v9;
  Instance = (CommonUI_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_13513/*"TUTORIAL_QUEST_ID1"*/, 0LL);
  if ( !v10 )
    goto LABEL_83;
  if ( !clsQuestCheck__IsQuestClear(v10, (int32_t)Instance, 0, 0LL) )
  {
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_13513/*"TUTORIAL_QUEST_ID1"*/, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57DC4 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC4 = 1;
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
  v11 = ConstantMaster__getValue((System_String_o *)StringLiteral_13514/*"TUTORIAL_QUEST_ID2"*/, 0LL);
  if ( !clsQuestCheck__IsQuestClear(v10, v11, 0, 0LL) )
  {
    v5 = 0;
    v15 = 1;
    goto LABEL_70;
  }
  v12 = ConstantMaster__getValue((System_String_o *)StringLiteral_13515/*"TUTORIAL_QUEST_ID3"*/, 0LL);
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
  if ( !TutorialFlag__Get_37688364(101, 0LL) )
    goto LABEL_86;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(2, 0LL) )
  {
LABEL_86:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A579F2 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A579F2 = 1;
    }
    v19 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v19 = TerminalPramsManager_TypeInfo;
    }
    v19->static_fields->_SummonType_k__BackingField = 1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_83;
    v20 = 40;
    goto LABEL_80;
  }
  v13 = ConstantMaster__getValue((System_String_o *)StringLiteral_13516/*"TUTORIAL_QUEST_ID4"*/, 0LL);
  v5 = 0;
  if ( clsQuestCheck__IsQuestClear(v10, v13, 0, 0LL) )
    return v5;
  v14 = ConstantMaster__getValue((System_String_o *)StringLiteral_13516/*"TUTORIAL_QUEST_ID4"*/, 0LL);
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
    sub_1B8880C(this, callback);
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
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5D0D4 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TerminalTransitionInfo_TypeInfo);
    byte_4A5D0D4 = 1;
  }
  v3 = (TerminalTransitionInfo_o *)sub_1B887FC(TerminalTransitionInfo_TypeInfo);
  TerminalTransitionInfo___ctor(v3, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__TerminalTransitionInfoSave_SaveData(v3, 0LL);
  this->fields._TransitionInfo_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._TransitionInfo_k__BackingField, 0, v4, v5);
}


System_Collections_IEnumerator_o *__fastcall TerminalSceneComponent__CoWaitBlankEerthActionEnd(
        TerminalSceneComponent_o *this,
        System_Action_o *openCampaignDirectBonus,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5D106 & 1) == 0 )
  {
    sub_1B885B0(&TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__247_TypeInfo);
    byte_4A5D106 = 1;
  }
  v5 = sub_1B887FC(TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__247_TypeInfo);
  TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__247___ctor(
    (TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__247_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = openCampaignDirectBonus;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)openCampaignDirectBonus, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd(
        TerminalSceneComponent_o *this,
        System_Action_o *openCampaignDirectBonus,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5D105 & 1) == 0 )
  {
    sub_1B885B0(&TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__246_TypeInfo);
    byte_4A5D105 = 1;
  }
  v5 = sub_1B887FC(TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__246_TypeInfo);
  TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__246___ctor(
    (TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__246_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = openCampaignDirectBonus;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)openCampaignDirectBonus, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall TerminalSceneComponent__CreateTransitionInfo(
        TerminalSceneComponent_o *this,
        TerminalTransitionInfo_o *info,
        const MethodInfo *method)
{
  TerminalTransitionInfo_o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x1
  TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x0

  if ( (byte_4A5D0D3 & 1) == 0 )
  {
    sub_1B885B0(&TerminalTransitionInfo_TypeInfo);
    byte_4A5D0D3 = 1;
  }
  v5 = (TerminalTransitionInfo_o *)sub_1B887FC(TerminalTransitionInfo_TypeInfo);
  TerminalTransitionInfo___ctor(v5, 0LL);
  this->fields._TransitionInfo_k__BackingField = v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._TransitionInfo_k__BackingField, (int32_t)v5, v6, v7);
  TransitionInfo_k__BackingField = this->fields._TransitionInfo_k__BackingField;
  if ( !TransitionInfo_k__BackingField )
    sub_1B8880C(0LL, v8);
  TerminalTransitionInfo__SetParameters(TransitionInfo_k__BackingField, info, 0LL);
}


void __fastcall TerminalSceneComponent__EndAuto(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  ScrPlayerStatus_o *mPlayerStatus; // x19
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4A5D0E4 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5D0E4 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A5D11F )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5D11F = 1;
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
    if ( !byte_4A5D120 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A5D120 = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    if ( !mPlayerStatus )
      sub_1B8880C(v5, method);
    ScrPlayerStatus__OpenMasterMission(
      mPlayerStatus,
      0LL,
      v5->static_fields->_MasterMissionTargetType_k__BackingField,
      0LL);
    if ( !byte_4A562A0 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A562A0 = 1;
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
}


float __fastcall TerminalSceneComponent__FSMenuOffsetX(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A5D0C7 & 1) == 0 )
  {
    sub_1B885B0(&FSUtility_TypeInfo);
    byte_4A5D0C7 = 1;
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x3
  struct ScrTerminalListTop_o *mTerminalList; // x8
  System_Action_o *v19; // x2
  _DWORD *monitor; // x8
  _DWORD *v21; // x8
  _DWORD *v22; // x8
  _QWORD *v23; // x8
  __int64 v24; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v26; // x1
  int32_t v27; // w22
  int32_t v28; // w23
  SceneJumpInfo_o *v29; // x21
  TerminalPramsManager_c *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  TerminalPramsManager_c *v33; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  ScrTerminalMap_o *mTerminalMap; // x22
  int32_t items_high; // w23
  System_String_o *MapModelEntryAnimationName; // x22
  TerminalPramsManager_c *v38; // x0
  Il2CppObject *v39; // x0
  float v40; // s8
  CommonUI_o *v41; // x19
  System_Action_o *v42; // x21
  Il2CppObject *v43; // x19
  System_Action_o *v44; // x21
  CommonUI_o *v45; // x21
  ScrTerminalMap_o *v46; // x19
  System_Action_o *v47; // x21

  if ( (byte_4A5D0E6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&SceneJumpInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass196_0__FadeInAndTriggerEventEffects_b__0__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass196_0__FadeInAndTriggerEventEffects_b__1__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass196_0__FadeInAndTriggerEventEffects_b__4__);
    sub_1B885B0(&TerminalSceneComponent___c__DisplayClass196_0_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5D0E6 = 1;
  }
  v9 = sub_1B887FC(TerminalSceneComponent___c__DisplayClass196_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass196_0___ctor((TerminalSceneComponent___c__DisplayClass196_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_99;
  *(float *)(v9 + 16) = fadeTime;
  *(_QWORD *)(v9 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 40) = callback;
  *(_DWORD *)(v9 + 32) = eventId;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 40), (int32_t)callback, v14, v15);
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_99;
  v11 = *(unsigned int *)(v9 + 32);
  if ( mTerminalList->fields.isBackFromBlankEarthMap )
  {
    v19 = *(System_Action_o **)(v9 + 40);
LABEL_7:
    TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(this, v11, v19, v17);
    return;
  }
  if ( (int)v11 >= 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A588F0 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A588F0 = 1;
    }
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    }
    if ( Instance[1].fields.m_listUnloadScenes[5].monitor )
    {
      if ( !LODWORD(Instance[2].fields.targetRoot) )
        j_il2cpp_runtime_class_init_0(Instance);
      if ( !byte_4A588F0 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A588F0 = 1;
      }
      Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
      }
      monitor = Instance[1].fields.m_listUnloadScenes[5].monitor;
      if ( !monitor )
        goto LABEL_99;
      if ( monitor[4] == *(_DWORD *)(v9 + 32) )
      {
        if ( !LODWORD(Instance[2].fields.targetRoot) )
          j_il2cpp_runtime_class_init_0(Instance);
        if ( !byte_4A588F0 )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A588F0 = 1;
        }
        Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
        }
        v21 = Instance[1].fields.m_listUnloadScenes[5].monitor;
        if ( !v21 )
          goto LABEL_99;
        if ( v21[5] )
        {
          if ( !LODWORD(Instance[2].fields.targetRoot) )
            j_il2cpp_runtime_class_init_0(Instance);
          if ( !byte_4A588F0 )
          {
            sub_1B885B0(&TerminalPramsManager_TypeInfo);
            byte_4A588F0 = 1;
          }
          Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
          }
          v22 = Instance[1].fields.m_listUnloadScenes[5].monitor;
          if ( v22 )
          {
            if ( v22[5] == 1 )
            {
              if ( !LODWORD(Instance[2].fields.targetRoot) )
                j_il2cpp_runtime_class_init_0(Instance);
              if ( !byte_4A588F0 )
              {
                sub_1B885B0(&TerminalPramsManager_TypeInfo);
                byte_4A588F0 = 1;
              }
              Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
              }
              v23 = Instance[1].fields.m_listUnloadScenes[5].monitor;
              if ( !v23 )
                goto LABEL_99;
              v24 = v23[3];
              if ( v24
                && *(int *)(v24 + 24) >= 1
                && !(IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v24 + 32), 0LL)) )
              {
                if ( !*(_DWORD *)(v24 + 24) )
                  sub_1B88814(IsNullOrEmpty, v26);
                v27 = System_Int32__Parse(*(System_String_o **)(v24 + 32), 0LL) + 1;
              }
              else
              {
                v27 = 0;
              }
              v28 = *(_DWORD *)(v9 + 32);
              v29 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
              SceneJumpInfo___ctor_38664492(v29, (System_String_o *)StringLiteral_1/*""*/, v28, v27, 0LL);
              Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !Instance )
                goto LABEL_99;
              AvalonSceneManager__transitionScene(Instance, 72, 1, (Il2CppObject *)v29, 0LL);
              Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
            }
            if ( !LODWORD(Instance[2].fields.targetRoot) )
              j_il2cpp_runtime_class_init_0(Instance);
            if ( !byte_4A588F0 )
            {
              sub_1B885B0(&TerminalPramsManager_TypeInfo);
              byte_4A588F0 = 1;
            }
            v30 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v30 = TerminalPramsManager_TypeInfo;
            }
            Instance = (AvalonSceneManager_o *)v30->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
            if ( Instance )
            {
              SpecifiedSceneInfo__InitParameter((SpecifiedSceneInfo_o *)Instance, 0LL);
              if ( !byte_4A588CF )
              {
                sub_1B885B0(&TerminalPramsManager_TypeInfo);
                byte_4A588CF = 1;
              }
              v33 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v33 = TerminalPramsManager_TypeInfo;
              }
              static_fields = v33->static_fields;
              static_fields->_SpecifiedChangeSceneInfo_k__BackingField = 0LL;
              sub_1B88554(
                (ServantStatusBattleListViewItem_o *)&static_fields->_SpecifiedChangeSceneInfo_k__BackingField,
                0,
                v31,
                v32);
              LODWORD(v11) = *(_DWORD *)(v9 + 32);
              v19 = *(System_Action_o **)(v9 + 40);
              goto LABEL_7;
            }
          }
LABEL_99:
          sub_1B8880C(Instance, v11);
        }
      }
    }
  }
  if ( TerminalSceneComponent__IsEnabledMapOnEvent((TerminalSceneComponent_o *)Instance, *(_DWORD *)(v9 + 32), v16) )
  {
    Instance = (AvalonSceneManager_o *)this->fields.mTerminalMap;
    if ( !Instance )
      goto LABEL_99;
    if ( !ScrTerminalMap__IsMapModel((ScrTerminalMap_o *)Instance, 0LL) )
      goto LABEL_88;
    mTerminalMap = this->fields.mTerminalMap;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57FF1 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57FF1 = 1;
    }
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    }
    items_high = HIDWORD(Instance[1].fields.m_listUnloadScenes[3].fields._items);
    if ( !byte_4A57FF2 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
      byte_4A57FF2 = 1;
    }
    if ( !LODWORD(Instance[2].fields.targetRoot) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    }
    if ( !mTerminalMap )
      goto LABEL_99;
    MapModelEntryAnimationName = ScrTerminalMap__GetMapModelEntryAnimationName(
                                   mTerminalMap,
                                   items_high,
                                   Instance[1].fields.m_listUnloadScenes[3].fields._size,
                                   0LL);
    if ( !byte_4A588D2 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A588D2 = 1;
    }
    v38 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v38 = TerminalPramsManager_TypeInfo;
    }
    v38->static_fields->_MapModelClearQuestId_k__BackingField = 0;
    if ( !byte_4A588D3 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      v38 = TerminalPramsManager_TypeInfo;
      byte_4A588D3 = 1;
    }
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      v38 = TerminalPramsManager_TypeInfo;
    }
    v38->static_fields->_MapModelClearPhaseCount_k__BackingField = 0;
    if ( !System_String__IsNullOrEmpty(MapModelEntryAnimationName, 0LL) )
    {
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v45 = (CommonUI_o *)Instance;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v45 )
        goto LABEL_99;
      CommonUI__maskFadein(v45, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
      v46 = this->fields.mTerminalMap;
      v47 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v47,
        (Il2CppObject *)v9,
        Method_TerminalSceneComponent___c__DisplayClass196_0__FadeInAndTriggerEventEffects_b__4__,
        0LL);
      if ( !v46 )
        goto LABEL_99;
      ScrTerminalMap__PlayMapModelEntryAnimation(v46, MapModelEntryAnimationName, v47, 0LL);
    }
    else
    {
LABEL_88:
      v39 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v40 = *(float *)(v9 + 16);
      v41 = (CommonUI_o *)v39;
      v42 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v42,
        (Il2CppObject *)v9,
        Method_TerminalSceneComponent___c__DisplayClass196_0__FadeInAndTriggerEventEffects_b__1__,
        0LL);
      if ( !v41 )
        goto LABEL_99;
      CommonUI__maskFadein(v41, v40, v42, 0LL);
    }
  }
  else
  {
    v43 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    v44 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v44,
      (Il2CppObject *)v9,
      Method_TerminalSceneComponent___c__DisplayClass196_0__FadeInAndTriggerEventEffects_b__0__,
      0LL);
    if ( !v43 )
      goto LABEL_99;
    QuestAfterAction__LoadVoice((QuestAfterAction_o *)v43, v44, 0LL);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_Action_o **v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_Action_o *v15; // x2
  Il2CppObject *v16; // x1
  struct TitleInfoControl_o *mTitleInfo; // x19
  Il2CppObject *v18; // x20
  System_Action_o *v19; // x21
  struct TitleInfoControl_o *v20; // x23
  TerminalPramsManager_c *v21; // x0
  System_Action_o *v22; // x19
  System_Action_o *v23; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5D0E9 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass199_0__FadeInAndTriggerEventEffectsNext_b__0__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass199_0__FadeInAndTriggerEventEffectsNext_b__1__);
    sub_1B885B0(&TerminalSceneComponent___c__DisplayClass199_0_TypeInfo);
    byte_4A5D0E9 = 1;
  }
  entity = 0LL;
  v7 = sub_1B887FC(TerminalSceneComponent___c__DisplayClass199_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass199_0___ctor((TerminalSceneComponent___c__DisplayClass199_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_68;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = callback;
  v12 = (System_Action_o **)(v7 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)callback, v13, v14);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_68;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_311D988 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
    sub_1B8880C(Instance, v9);
  if ( EventDetailEntity__isRaidDefeatCount((EventDetailEntity_o *)entity, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.mTitleInfo;
    if ( Instance )
    {
      TitleInfoControl__PlayEventRaidDefeatedEffect((TitleInfoControl_o *)Instance, eventId, 0, *v12, 0LL);
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
      TitleInfoControl__CheckSuperBossHpAnim((TitleInfoControl_o *)Instance, *v12, 0LL);
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
      v15 = *v12;
      v16 = entity;
LABEL_31:
      TitleInfoControl__EventTowerStart((TitleInfoControl_o *)Instance, (EventDetailEntity_o *)v16, v15, 0LL);
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
      v18 = entity;
      v19 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v19,
        (Il2CppObject *)v7,
        Method_TerminalSceneComponent___c__DisplayClass199_0__FadeInAndTriggerEventEffectsNext_b__0__,
        0LL);
      if ( !mTitleInfo )
        goto LABEL_68;
      Instance = (DataManager_o *)mTitleInfo;
      v16 = v18;
      v15 = v19;
      goto LABEL_31;
    }
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_68;
  Instance = (DataManager_o *)EventDetailEntity__IsGroupPoint((EventDetailEntity_o *)entity, 0LL);
  v20 = this->fields.mTitleInfo;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v20 )
      goto LABEL_68;
    TitleInfoControl__CheckEventPointGroupReward(this->fields.mTitleInfo, eventId, *v12, 0LL);
    v21 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v21 = TerminalPramsManager_TypeInfo;
    }
    if ( v21->static_fields->joinGroupId >= 1 )
    {
      Instance = (DataManager_o *)this->fields.mTitleInfo;
      if ( !Instance )
        goto LABEL_68;
      TitleInfoControl__vsGaugeEvent((TitleInfoControl_o *)Instance, eventId, 0LL);
    }
    return;
  }
  if ( !v20 )
    goto LABEL_68;
  if ( v20->fields.needPlayDailyPointItemEffect )
  {
    v22 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v22,
      (Il2CppObject *)v7,
      Method_TerminalSceneComponent___c__DisplayClass199_0__FadeInAndTriggerEventEffectsNext_b__1__,
      0LL);
    TitleInfoControl__UpdateDailyPointWithEffect(v20, v22, 0LL);
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
    TitleInfoControl__CheckEventPointGaugeAnim((TitleInfoControl_o *)Instance, (EventDetailEntity_o *)entity, *v12, 0LL);
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
      *v12,
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
    if ( *(_QWORD *)&Instance[2].fields._DispLog )
    {
      ScrTerminalMap__UpdateEventBoardGame((ScrTerminalMap_o *)Instance, *v12, 0LL);
      return;
    }
    v23 = *v12;
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
    v23 = *v12;
LABEL_65:
    ActionExtensions__Call(v23, 0LL);
    return;
  }
  Instance = (DataManager_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_68;
  TitleInfoControl__StartEventUIAnimation((TitleInfoControl_o *)Instance, 1, *v12, 0LL);
}


void __fastcall TerminalSceneComponent__FadeinWorldDispNoneExecuteUnusedAssets(
        TerminalSceneComponent_o *this,
        bool isExecuteUnusedAssets,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  AvalonSceneManager_c *v7; // x0
  System_Collections_IEnumerator_o *v8; // x1

  if ( (byte_4A5D0DD & 1) == 0 )
  {
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    byte_4A5D0DD = 1;
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
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v8, 0LL);
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
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  const MethodInfo *v14; // x2
  Il2CppObject *Instance; // x19
  AvalonSceneManager_c *v16; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  if ( (byte_4A5D0E1 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass191_0__Fadein_MapDisp_b__0__);
    sub_1B885B0(&TerminalSceneComponent___c__DisplayClass191_0_TypeInfo);
    byte_4A5D0E1 = 1;
  }
  v7 = sub_1B887FC(TerminalSceneComponent___c__DisplayClass191_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass191_0___ctor((TerminalSceneComponent___c__DisplayClass191_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_10;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = end_act;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)end_act, v12, v13);
  if ( this->fields._FirstFadeTime_k__BackingField > 0.0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v16 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
    v18 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v18,
      (Il2CppObject *)v7,
      Method_TerminalSceneComponent___c__DisplayClass191_0__Fadein_MapDisp_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeChangeColor((CommonUI_o *)Instance, 2, DEFAULT_FADE_TIME, v18, 0LL);
      return;
    }
LABEL_10:
    sub_1B8880C(v8, v9);
  }
  TerminalSceneComponent__Fadein_MapDisp_Load(this, fade_time, *(System_Action_o **)(v7 + 24), v14);
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
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  TerminalPramsManager_c *v14; // x0
  __int64 v15; // x8
  __int64 v16; // x8
  WarEntity_o *v17; // x21
  TerminalPramsManager_c *v18; // x0
  _BOOL4 isInvisibleConnectAndLoad; // w22
  TitleInfoControl_o *mTitleInfo; // x19
  System_Action_o *v21; // x22

  if ( (byte_4A5D0E2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass192_0__Fadein_MapDisp_Load_b__0__);
    sub_1B885B0(&TerminalSceneComponent___c__DisplayClass192_0_TypeInfo);
    byte_4A5D0E2 = 1;
  }
  v7 = sub_1B887FC(TerminalSceneComponent___c__DisplayClass192_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass192_0___ctor((TerminalSceneComponent___c__DisplayClass192_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_32;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 32) = end_act;
  *(float *)(v7 + 24) = fade_time;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)end_act, v12, v13);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57177 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57177 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  if ( !v14->static_fields->_IsDispOnly_k__BackingField )
  {
    TerminalSceneComponent__EndAuto(this, v9);
    goto LABEL_22;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
  }
  mTerminalMap = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mTerminalMap = TerminalSceneComponent_TypeInfo;
  }
  v15 = **((_QWORD **)mTerminalMap + 23);
  if ( !v15 || (v16 = *(_QWORD *)(v15 + 264)) == 0 || (mTerminalMap = *(void **)(v16 + 536)) == 0LL )
LABEL_32:
    sub_1B8880C(mTerminalMap, v9);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mTerminalMap, 1, 0LL);
LABEL_22:
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_32;
  v17 = (WarEntity_o *)*((_QWORD *)mTerminalMap + 44);
  ScrTerminalMap__SetDisp((ScrTerminalMap_o *)mTerminalMap, 1, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A58230 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58230 = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  isInvisibleConnectAndLoad = v18->static_fields->isInvisibleConnectAndLoad;
  mTerminalMap = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_32;
  CommonUI__SetLoadMode((CommonUI_o *)mTerminalMap, !isInvisibleConnectAndLoad, 0LL);
  mTitleInfo = this->fields.mTitleInfo;
  v21 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v7,
    Method_TerminalSceneComponent___c__DisplayClass192_0__Fadein_MapDisp_Load_b__0__,
    0LL);
  if ( !mTitleInfo )
    goto LABEL_32;
  TitleInfoControl__SetActiveEventInfo(mTitleInfo, v17, 32, v21, 0LL);
}


void __fastcall TerminalSceneComponent__Fadein_MapDisp_Start(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 Instance; // x0
  _BOOL8 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 *v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct WarEntity_o *mWarEnt; // x1
  __int64 v19; // x22
  struct ScrTerminalMap_o *v20; // x8
  MapEntity_o *mMapEnt; // x23
  System_String_o *ActiveStateName; // x24
  System_String_o *PrioredBgmName; // x0
  const MethodInfo *v24; // x2
  TerminalPramsManager_c *v25; // x0
  struct ScrTerminalMap_o *v26; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  TerminalPramsManager_c *v28; // x0
  __int64 v29; // x21
  int32_t v30; // w2
  int32_t v31; // w3
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
  int32_t v44; // w3
  Il2CppObject *v45; // x23
  System_Action_object__o *v46; // x22
  int32_t v47; // w2
  int32_t v48; // w3
  int32_t v49; // w2
  int32_t v50; // w3
  System_Action_object__o *v51; // x22
  Il2CppObject *v52; // x23
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  Il2CppObject *v56; // x24
  System_Action_object__o *v57; // x22
  int32_t v58; // w2
  int32_t v59; // w3
  ActionChain_o *v60; // x22
  __int64 v61; // x20
  System_Action_o *v62; // x23
  int32_t v63; // w2
  int32_t v64; // w3
  ChainableActionBase_o *v65; // x0
  System_Action_array *v66; // x1
  int32_t v67; // w21
  System_Action_o *v68; // x22
  const MethodInfo *v69; // x3
  __int64 v70; // x22
  Il2CppObject *v71; // x24
  System_Action_object__o *v72; // x23
  int32_t v73; // w2
  int32_t v74; // w3
  int32_t v75; // w2
  int32_t v76; // w3
  System_Action_object__o *v77; // x23
  Il2CppObject *v78; // x24
  struct TerminalSceneComponent___c_StaticFields *v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  int32_t v82; // w2
  int32_t v83; // w3
  System_Action_object__o *v84; // x23
  Il2CppObject *v85; // x24
  struct TerminalSceneComponent___c_StaticFields *v86; // x0
  int32_t v87; // w2
  int32_t v88; // w3
  System_Action_object__o *v89; // x23
  int32_t v90; // w2
  int32_t v91; // w3
  ActionChain_o *v92; // x20
  int32_t v93; // w2
  int32_t v94; // w3
  System_Action_array *v95; // x22
  __int64 v96; // x1

  if ( (byte_4A5D0E3 & 1) == 0 )
  {
    sub_1B885B0(&ActionChain_TypeInfo);
    sub_1B885B0(&System_Action___TypeInfo);
    sub_1B885B0(&System_Action_Action____TypeInfo);
    sub_1B885B0(&System_Action_Action__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CommonUI_StartLoginMessages__);
    sub_1B885B0(&Method_QuestAfterAction_Play__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1B885B0(&SoundManager_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    sub_1B885B0(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__193_0__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__193_1__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__193_6__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass193_0__Fadein_MapDisp_Start_b__2__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass193_0__Fadein_MapDisp_Start_b__3__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass193_0__Fadein_MapDisp_Start_b__4__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass193_0__Fadein_MapDisp_Start_b__5__);
    sub_1B885B0(&TerminalSceneComponent___c__DisplayClass193_0_TypeInfo);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass193_1__Fadein_MapDisp_Start_b__7__);
    sub_1B885B0(&TerminalSceneComponent___c__DisplayClass193_1_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_3406/*"CAPTER INIT"*/);
    sub_1B885B0(&StringLiteral_3405/*"CAPTER CREATE"*/);
    sub_1B885B0(&StringLiteral_3407/*"CAPTER WAIT"*/);
    byte_4A5D0E3 = 1;
  }
  v7 = sub_1B887FC(TerminalSceneComponent___c__DisplayClass193_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass193_0___ctor((TerminalSceneComponent___c__DisplayClass193_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_160;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 40) = end_act;
  v12 = (__int64 *)(v7 + 40);
  *(float *)(v7 + 32) = fade_time;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)end_act, v13, v14);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_160;
  mWarEnt = mTerminalMap->fields.mWarEnt;
  *(_QWORD *)(v7 + 24) = mWarEnt;
  v19 = v7 + 24;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)mWarEnt, v15, v16);
  v20 = this->fields.mTerminalMap;
  if ( !v20 )
    goto LABEL_160;
  Instance = (__int64)this->fields.mTerminalList;
  if ( !Instance )
    goto LABEL_160;
  mMapEnt = v20->fields.mMapEnt;
  Instance = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_160;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)Instance, 0LL);
  v9 = System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3405/*"CAPTER CREATE"*/, 0LL)
    || System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3406/*"CAPTER INIT"*/, 0LL)
    || System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3407/*"CAPTER WAIT"*/, 0LL);
  Instance = (__int64)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_160;
  TitleInfoControl__setBackBtnSprite_37184884((TitleInfoControl_o *)Instance, v9, 0, 0, 0LL);
  Instance = (__int64)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_160;
  TitleInfoControl__FrameIn((TitleInfoControl_o *)Instance, 0, 0LL);
  MainMenuBar__FrameIn(0, 0LL);
  Instance = (__int64)this->fields.mPlayerStatus;
  if ( !Instance )
    goto LABEL_160;
  ScrPlayerStatus__FrameIn((ScrPlayerStatus_o *)Instance, 0, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  if ( *(_BYTE *)(Instance + 185) )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopBgm(0LL);
  }
  else
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A58371 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A58371 = 1;
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
      TerminalSceneComponent__playBgm(this, PrioredBgmName, v24);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A58371 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58371 = 1;
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
    v25 = TerminalPramsManager_TypeInfo;
  }
  if ( !v25->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v25);
  if ( !byte_4A57177 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57177 = 1;
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
    if ( !byte_4A5835E )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A5835E = 1;
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
        goto LABEL_160;
      Instance = (__int64)v26->fields.spotMaskObj;
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
  if ( !byte_4A5835E )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5835E = 1;
  }
  v28 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v28 = TerminalPramsManager_TypeInfo;
  }
  if ( v28->static_fields->_IsScriptDisp_k__BackingField )
    goto LABEL_136;
  if ( !v28->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v28);
  if ( !byte_4A57177 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57177 = 1;
  }
  Instance = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(Instance + 184) + 103LL) )
  {
    v29 = sub_1B887FC(TerminalSceneComponent___c__DisplayClass193_1_TypeInfo);
    TerminalSceneComponent___c__DisplayClass193_1___ctor((TerminalSceneComponent___c__DisplayClass193_1_o *)v29, 0LL);
    if ( v29 )
    {
      *(_QWORD *)(v29 + 24) = v7;
      v32 = (Il2CppObject **)(v29 + 24);
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 24), v7, v30, v31);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4A5629D )
      {
        sub_1B885B0(&TerminalSceneComponent_TypeInfo);
        byte_4A5629D = 1;
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
          Instance = *(_QWORD *)(v34 + 536);
          if ( Instance )
          {
            *(_BYTE *)(v29 + 16) = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
            Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
            if ( Instance )
            {
              QuestAfterAction__Init((QuestAfterAction_o *)Instance, 0LL);
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
              if ( Instance )
              {
                QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)Instance, 1, 0LL);
                Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                if ( Instance )
                {
                  if ( QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0LL) )
                  {
                    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    if ( !byte_4A5629D )
                    {
                      sub_1B885B0(&TerminalSceneComponent_TypeInfo);
                      byte_4A5629D = 1;
                    }
                    Instance = (__int64)TerminalSceneComponent_TypeInfo;
                    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                      Instance = (__int64)TerminalSceneComponent_TypeInfo;
                    }
                    v35 = **(_QWORD **)(Instance + 184);
                    if ( !v35 )
                      goto LABEL_160;
                    v36 = *(_QWORD *)(v35 + 264);
                    if ( !v36 )
                      goto LABEL_160;
                    Instance = *(_QWORD *)(v36 + 536);
                    if ( !Instance )
                      goto LABEL_160;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                  }
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  if ( !byte_4A5629D )
                  {
                    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
                    byte_4A5629D = 1;
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
                      Instance = *(_QWORD *)(v38 + 536);
                      if ( Instance )
                      {
                        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
                        {
                          Instance = (__int64)this->fields.mTerminalMap;
                          if ( !Instance )
                            goto LABEL_160;
                          ScrTerminalMap__AllMaskStart((ScrTerminalMap_o *)Instance, 0, 1, 0LL);
                        }
                        v39 = sub_1B88658(System_Action_Action____TypeInfo, 4LL);
                        v40 = *v32;
                        v41 = v39;
                        v42 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
                        System_Action_object____ctor(
                          v42,
                          v40,
                          Method_TerminalSceneComponent___c__DisplayClass193_0__Fadein_MapDisp_Start_b__4__,
                          0LL);
                        if ( v41 )
                        {
                          if ( *(_DWORD *)(v41 + 24) )
                          {
                            *(_QWORD *)(v41 + 32) = v42;
                            sub_1B88554((ServantStatusBattleListViewItem_o *)(v41 + 32), (int32_t)v42, v43, v44);
                            v45 = *v32;
                            v46 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
                            System_Action_object____ctor(
                              v46,
                              v45,
                              Method_TerminalSceneComponent___c__DisplayClass193_0__Fadein_MapDisp_Start_b__5__,
                              0LL);
                            if ( *(_DWORD *)(v41 + 24) > 1u )
                            {
                              *(_QWORD *)(v41 + 40) = v46;
                              sub_1B88554((ServantStatusBattleListViewItem_o *)(v41 + 40), (int32_t)v46, v47, v48);
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
                                v51 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
                                System_Action_object____ctor(
                                  v51,
                                  v52,
                                  Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__193_6__,
                                  0LL);
                                static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
                                static_fields->__9__193_6 = (struct System_Action_Action__o *)v51;
                                sub_1B88554(
                                  (ServantStatusBattleListViewItem_o *)&static_fields->__9__193_6,
                                  (int32_t)v51,
                                  v54,
                                  v55);
                              }
                              if ( *(_DWORD *)(v41 + 24) > 2u )
                              {
                                *(_QWORD *)(v41 + 48) = v51;
                                sub_1B88554((ServantStatusBattleListViewItem_o *)(v41 + 48), (int32_t)v51, v49, v50);
                                v56 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                                v57 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
                                System_Action_object____ctor(v57, v56, Method_QuestAfterAction_Play__, 0LL);
                                if ( *(_DWORD *)(v41 + 24) > 3u )
                                {
                                  *(_QWORD *)(v41 + 56) = v57;
                                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v41 + 56), (int32_t)v57, v58, v59);
                                  v60 = (ActionChain_o *)sub_1B887FC(ActionChain_TypeInfo);
                                  ActionChain___ctor_46556284(v60, (System_Action_Action__array *)v41, 0LL);
                                  v61 = sub_1B88658(System_Action___TypeInfo, 1LL);
                                  v62 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                                  System_Action___ctor(
                                    v62,
                                    (Il2CppObject *)v29,
                                    Method_TerminalSceneComponent___c__DisplayClass193_1__Fadein_MapDisp_Start_b__7__,
                                    0LL);
                                  if ( !v61 )
                                    goto LABEL_160;
                                  if ( *(_DWORD *)(v61 + 24) )
                                  {
                                    *(_QWORD *)(v61 + 32) = v62;
                                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v61 + 32), (int32_t)v62, v63, v64);
                                    if ( !v60 )
                                      goto LABEL_160;
                                    v65 = (ChainableActionBase_o *)v60;
                                    v66 = (System_Action_array *)v61;
                                    goto LABEL_127;
                                  }
                                }
                              }
                            }
                          }
LABEL_161:
                          sub_1B88814(Instance, v9);
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
    sub_1B8880C(Instance, v9);
  }
  if ( this->fields.mIsStart_LoginBonusWhiteBg )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    Instance = TutorialFlag__Get_37688364(102, 0LL);
    if ( (Instance & 1) != 0 && !this->fields.isTutorialAfter )
    {
      this->fields.mIsStart_LoginBonusWhiteBg = 0;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetupLoginResultData((CommonUI_o *)Instance, 0LL, 0LL);
        v70 = sub_1B88658(System_Action_Action____TypeInfo, 4LL);
        v71 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v72 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
        System_Action_object____ctor(v72, v71, Method_CommonUI_StartLoginMessages__, 0LL);
        if ( v70 )
        {
          if ( !*(_DWORD *)(v70 + 24) )
            goto LABEL_161;
          *(_QWORD *)(v70 + 32) = v72;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v70 + 32), (int32_t)v72, v73, v74);
          Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
          if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
            Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
          }
          v77 = *(System_Action_object__o **)(*(_QWORD *)(Instance + 184) + 24LL);
          if ( !v77 )
          {
            if ( !*(_DWORD *)(Instance + 224) )
            {
              j_il2cpp_runtime_class_init_0(Instance);
              Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
            }
            v78 = **(Il2CppObject ***)(Instance + 184);
            v77 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
            System_Action_object____ctor(
              v77,
              v78,
              Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__193_0__,
              0LL);
            v79 = TerminalSceneComponent___c_TypeInfo->static_fields;
            v79->__9__193_0 = (struct System_Action_Action__o *)v77;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v79->__9__193_0, (int32_t)v77, v80, v81);
          }
          if ( *(_DWORD *)(v70 + 24) <= 1u )
            goto LABEL_161;
          *(_QWORD *)(v70 + 40) = v77;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v70 + 40), (int32_t)v77, v75, v76);
          Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
          if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
            Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
          }
          v84 = *(System_Action_object__o **)(*(_QWORD *)(Instance + 184) + 32LL);
          if ( !v84 )
          {
            if ( !*(_DWORD *)(Instance + 224) )
            {
              j_il2cpp_runtime_class_init_0(Instance);
              Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
            }
            v85 = **(Il2CppObject ***)(Instance + 184);
            v84 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
            System_Action_object____ctor(
              v84,
              v85,
              Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__193_1__,
              0LL);
            v86 = TerminalSceneComponent___c_TypeInfo->static_fields;
            v86->__9__193_1 = (struct System_Action_Action__o *)v84;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v86->__9__193_1, (int32_t)v84, v87, v88);
          }
          if ( *(_DWORD *)(v70 + 24) <= 2u )
            goto LABEL_161;
          *(_QWORD *)(v70 + 48) = v84;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v70 + 48), (int32_t)v84, v82, v83);
          v89 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v89,
            (Il2CppObject *)v7,
            Method_TerminalSceneComponent___c__DisplayClass193_0__Fadein_MapDisp_Start_b__2__,
            0LL);
          if ( *(_DWORD *)(v70 + 24) <= 3u )
            goto LABEL_161;
          *(_QWORD *)(v70 + 56) = v89;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v70 + 56), (int32_t)v89, v90, v91);
          v92 = (ActionChain_o *)sub_1B887FC(ActionChain_TypeInfo);
          ActionChain___ctor_46556284(v92, (System_Action_Action__array *)v70, 0LL);
          Instance = sub_1B88658(System_Action___TypeInfo, 1LL);
          if ( Instance )
          {
            v95 = (System_Action_array *)Instance;
            if ( !*(_DWORD *)(Instance + 24) )
              goto LABEL_161;
            v96 = *v12;
            *(_QWORD *)(Instance + 32) = *v12;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(Instance + 32), v96, v93, v94);
            if ( v92 )
            {
              v65 = (ChainableActionBase_o *)v92;
              v66 = v95;
LABEL_127:
              Instance = (__int64)ChainableActionBase__Final(v65, v66, 0LL);
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
  if ( !*(_QWORD *)v19 )
    goto LABEL_160;
  v67 = *(_DWORD *)(*(_QWORD *)v19 + 96LL);
  v68 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v68,
    (Il2CppObject *)v7,
    Method_TerminalSceneComponent___c__DisplayClass193_0__Fadein_MapDisp_Start_b__3__,
    0LL);
  TerminalSceneComponent__StartEventDailyPoint(this, v67, v68, v69);
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

  if ( (byte_4A5D0DE & 1) == 0 )
  {
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    byte_4A5D0DE = 1;
  }
  v6 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v6 = AvalonSceneManager_TypeInfo;
  }
  v7 = TerminalSceneComponent__coFadein_WorldDisp(this, v6->static_fields->DEFAULT_FADE_TIME, end_act, 1, v3);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
}


void __fastcall TerminalSceneComponent__Fadein_WorldDisp_42089608(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  System_Collections_IEnumerator_o *v6; // x1

  v6 = TerminalSceneComponent__coFadein_WorldDisp(this, fade_time, end_act, 1, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
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
    sub_1B8880C(this, method);
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
        sub_1B88814(this, method);
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

  if ( (byte_4A5D111 & 1) == 0 )
  {
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5D111 = 1;
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
    return UnityEngine_PlayerPrefs__GetString_69417656(OVERWRITE_COMMON_BG_TYPE2_KEY, 0LL);
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
    return UnityEngine_PlayerPrefs__GetString_69417656(OVERWRITE_COMMON_BG_TYPE2_KEY, 0LL);
  }
  return string_TypeInfo->static_fields->Empty;
}


int32_t __fastcall TerminalSceneComponent__GetState(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_o *v2; // x19
  struct CStateManager_TerminalSceneComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_4A5D100 & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_1B885B0(&Method_CStateManager_TerminalSceneComponent__getState__);
    byte_4A5D100 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B8880C(this, method);
  return mFSM->fields.m_state;
}


void __fastcall TerminalSceneComponent__InitLighting(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4A5D10F & 1) == 0 )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5D10F = 1;
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

  if ( (byte_4A5D0E7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_MapMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D0E7 = 1;
  }
  if ( !eventId )
    return 1;
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_19;
  v6 = WarMaster__getByEventId((WarMaster_o *)Instance, eventId, 0LL);
  if ( !v6 )
    return 1;
  v7 = v6;
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_MapMaster___);
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
    sub_1B8880C(Instance, v5);
  }
  return 0;
}


bool __fastcall TerminalSceneComponent__IsMapActive(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalMap_o *mTerminalMap; // x8

  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap || (this = (TerminalSceneComponent_o *)mTerminalMap->fields.dispRoot) == 0LL )
    sub_1B8880C(this, method);
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
}


bool __fastcall TerminalSceneComponent__IsMapTouchEnabled(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *mTerminalMap; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  System_String_o *v5; // x20

  if ( (byte_4A5D0EB & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1B885B0(&StringLiteral_8850/*"Map Touch Enable"*/);
    byte_4A5D0EB = 1;
  }
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_54;
  mTerminalMap = (ScrTerminalMap_o *)ScrTerminalMap__mfGetMyFsmP(mTerminalMap, 0LL);
  if ( !mTerminalMap )
    goto LABEL_54;
  mTerminalMap = (ScrTerminalMap_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)mTerminalMap, 0LL);
  if ( this->fields.mTutorialKind )
    return 0;
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList
    || (v5 = (System_String_o *)mTerminalMap,
        (mTerminalMap = (ScrTerminalMap_o *)mTerminalList->fields.mActionBgColl) == 0LL)
    || (mTerminalMap = (ScrTerminalMap_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)mTerminalMap,
                                             0LL)) == 0LL )
  {
LABEL_54:
    sub_1B8880C(mTerminalMap, method);
  }
  mTerminalMap = (ScrTerminalMap_o *)UnityEngine_GameObject__get_activeSelf(
                                       (UnityEngine_GameObject_o *)mTerminalMap,
                                       0LL);
  if ( ((unsigned __int8)mTerminalMap & 1) != 0 )
    return 0;
  if ( !v5 )
    goto LABEL_54;
  if ( (System_String__IndexOf_61738608(v5, (System_String_o *)StringLiteral_8850/*"Map Touch Enable"*/, 0LL) & 0x80000000) != 0
    || MainMenuBar__get_IsEnableOutSideCollider(0LL) )
  {
    return 0;
  }
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_54;
  if ( CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_54;
  if ( CommonUI__IsActive_ApRecvDlgComp((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_54;
  if ( CommonUI__IsActive_EventItemSelectDlgComp((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_54;
  if ( CommonUI__IsActive_CommonConfirmDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_54;
  if ( CommonUI__IsActive_NotifiDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_54;
  if ( CommonUI__IsActive_TutorialBigDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_54;
  if ( CommonUI__IsActive_MasterMission((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_54;
  if ( CommonUI__IsActive_MasterProfile((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_54;
  if ( CommonUI__IsActive_MissionListDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_54;
  if ( CommonUI__IsActive_AssistEffectConfirmDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_54;
  if ( CommonUI__IsActive_CommandAssistConfirmDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_54;
  if ( CommonUI__IsActive_AchievementExchangeConditionsDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_54;
  if ( CommonUI__IsActive_SvtFrameShortDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_54;
  if ( CommonUI__isBusyDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)this->fields.mPlayerStatus;
  if ( !mTerminalMap )
    goto LABEL_54;
  if ( LOBYTE(mTerminalMap[1].fields.currentAssetId)
    || ScrPlayerStatus__IsCommandSpellActive((ScrPlayerStatus_o *)mTerminalMap, 0LL) )
  {
    return 0;
  }
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_54;
  if ( QuestAfterAction__IsPlaying((QuestAfterAction_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_54;
  if ( MissionNotifyManager__IsPress((MissionNotifyManager_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)this->fields.mTitleInfo;
  if ( !mTerminalMap )
    goto LABEL_54;
  if ( !TitleInfoControl__IsTouchEnable((TitleInfoControl_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_54;
  return !ScrTerminalMap__IsActive_SpotCooltimeRewardDialog(mTerminalMap, 0LL);
}


bool __fastcall TerminalSceneComponent__IsNotDisplayCostume(
        TerminalSceneComponent_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  if ( !shopEntity )
    sub_1B8880C(this, 0LL);
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

  if ( (byte_4A5D0FB & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5D0FB = 1;
  }
  IsWarStartAnim_k__BackingField = this->fields._IsWarStartAnim_k__BackingField;
  v4 = this->fields.mTutorialKind == 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IsWarStartActionSkip = TerminalPramsManager__get_Debug_IsWarStartActionSkip(0LL);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC3 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC3 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    sub_1B8880C(v8, v6);
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
    if ( CondType__IsQuestPhaseClear_37650740(targetId, 1, -1, 0, 0LL) )
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
  if ( !byte_4A57DC3 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC3 = 1;
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

  if ( (byte_4A5D0C5 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_2133/*"AREA WAIT"*/);
    byte_4A5D0C5 = 1;
  }
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList
    || (mTerminalList = (ScrTerminalListTop_o *)ScrTerminalListTop__mfGetMyFsmP(mTerminalList, 0LL)) == 0LL
    || (mTerminalList = (ScrTerminalListTop_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)mTerminalList, 0LL)) == 0LL )
  {
    sub_1B8880C(mTerminalList, method);
  }
  return System_String__IndexOf_61738608((System_String_o *)mTerminalList, (System_String_o *)StringLiteral_2133/*"AREA WAIT"*/, 0LL) >= 0;
}


System_Collections_IEnumerator_o *__fastcall TerminalSceneComponent__LoadAsync(
        TerminalSceneComponent_o *this,
        UserServantEntity_o *usd,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A5D0D1 & 1) == 0 )
  {
    sub_1B885B0(&TerminalSceneComponent__LoadAsync_d__173_TypeInfo);
    byte_4A5D0D1 = 1;
  }
  v7 = sub_1B887FC(TerminalSceneComponent__LoadAsync_d__173_TypeInfo);
  TerminalSceneComponent__LoadAsync_d__173___ctor((TerminalSceneComponent__LoadAsync_d__173_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 40) = usd;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)usd, v12, v13);
  *(_QWORD *)(v7 + 48) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)callback, v14, v15);
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
  const MethodInfo_361E564 *v9; // x2
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
  if ( (byte_4A5D10E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Nullable_Vector3__get_HasValue__);
    this = (TerminalSceneComponent_o *)sub_1B885B0(&Method_System_Nullable_Vector3__get_Value__);
    byte_4A5D10E = 1;
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
    if ( !byte_4A55CE6 )
    {
      sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE6 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->oneVector.fields.x;
    y = static_fields->oneVector.fields.y;
    z = static_fields->oneVector.fields.z;
  }
  this = (TerminalSceneComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL);
  if ( !this )
LABEL_13:
    sub_1B8880C(this, dialog);
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
    sub_1B8880C(0LL, method);
  ((void (__fastcall *)(struct BaseCore_o *, Il2CppMethodPointer))mEarthCore->klass->vtable._7_OnPress.method)(
    mEarthCore,
    mEarthCore->klass->vtable._8_Setup.methodPtr);
}


void __fastcall TerminalSceneComponent__OnCoreRelease(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  BaseCore_o *mEarthCore; // x0

  mEarthCore = this->fields.mEarthCore;
  if ( !mEarthCore )
    sub_1B8880C(0LL, method);
  BaseCore__OnRelease(mEarthCore, 0LL);
}


void __fastcall TerminalSceneComponent__OnDestroy(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  TerminalSceneComponent_c *v7; // x0
  __int64 v8; // x0
  __int64 v9; // x0
  UnityEngine_Object_o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *loadEarthAssetName; // x20

  if ( (byte_4A5D0CD & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AssetManager__getInstance__);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5D0CD = 1;
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
    v7 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v7 = TerminalSceneComponent_TypeInfo;
    }
    v7->static_fields->mInstance = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)TerminalSceneComponent_TypeInfo->static_fields, 0, v5, v6);
    v8 = *((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1BDA48C(v8);
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1BDA48C(v9);
    v10 = **(UnityEngine_Object_o ***)(v9 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Implicit(v10, 0LL) )
    {
      loadEarthAssetName = this->fields.loadEarthAssetName;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage(loadEarthAssetName, 0LL);
    }
    this->fields.loadEarthAssetName = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.loadEarthAssetName, 0, v11, v12);
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
  System_String_o *String_69417656; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x24
  System_Func_object__int__o *v12; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  System_Int32_array *v14; // x0
  TerminalSceneComponent___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x24
  System_Func_T__TResult__o *_9__250_0; // x25
  Il2CppObject *v18; // x26
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Collections_Generic_List_TSource__o *v23; // x0
  TerminalSceneComponent___c_c *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x24
  System_Func_object__bool__o *_9__250_1; // x25
  Il2CppObject *v27; // x26
  struct TerminalSceneComponent___c_StaticFields *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  TerminalSceneComponent___c_c *v32; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x24
  System_Func_object__bool__o *_9__250_2; // x25
  Il2CppObject *v35; // x26
  struct TerminalSceneComponent___c_StaticFields *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x24
  System_Func_object__bool__o *v40; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  System_Collections_Generic_List_TSource__o *v42; // x0
  TerminalSceneComponent___c_c *v43; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x23
  System_Func_object__int__o *_9__250_4; // x24
  Il2CppObject *v46; // x25
  struct TerminalSceneComponent___c_StaticFields *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x23
  Il2CppObject *Instance; // x24
  System_String_o *v53; // x22
  TerminalSceneComponent___c_c *v54; // x0
  System_Func_T__TResult__o *_9__250_5; // x24
  Il2CppObject *v56; // x25
  struct TerminalSceneComponent___c_StaticFields *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x25
  System_String_o *v62; // x0
  TerminalSceneComponent___c_c *v63; // x8
  System_String_o *v64; // x21
  System_Func_object__int__o *_9__250_6; // x26
  Il2CppObject *v66; // x27
  struct TerminalSceneComponent___c_StaticFields *v67; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  Il2CppObject *v73; // x0
  int32_t v76; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4A5D109 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_int__ShopEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_ShopEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Sum_ShopEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_ShopEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_ShopEntity___);
    sub_1B885B0(&System_Func_int__ShopEntity__TypeInfo);
    sub_1B885B0(&System_Func_ShopEntity__int__TypeInfo);
    sub_1B885B0(&System_Func_ShopEntity__bool__TypeInfo);
    sub_1B885B0(&System_Func_string__int__TypeInfo);
    sub_1B885B0(&Method_System_Int32_Parse__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_TerminalSceneComponent__OpenExchangeDialogue_b__250_3__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__250_0__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__250_1__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__250_2__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__250_4__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__250_5__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__250_6__);
    sub_1B885B0(&TerminalSceneComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_19627/*"freeShopIds"*/);
    byte_4A5D109 = 1;
  }
  String_69417656 = UnityEngine_PlayerPrefs__GetString_69417656(playerPrefsKey, 0LL);
  if ( !String_69417656 )
    goto LABEL_34;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_69417656, 0x2Cu, 0, 0LL);
  v12 = (System_Func_object__int__o *)sub_1B887FC(System_Func_string__int__TypeInfo);
  System_Func_object__int____ctor(v12, 0LL, Method_System_Int32_Parse__, 0LL);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v11,
                                                               (System_Func_TSource__TResult__o *)v12,
                                                               (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_string__int___);
  v14 = System_Linq_Enumerable__ToArray_int_(
          v13,
          (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
  v15 = TerminalSceneComponent___c_TypeInfo;
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)v14;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v15 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__250_0 = (System_Func_T__TResult__o *)v15->static_fields->__9__250_0;
  if ( !_9__250_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = TerminalSceneComponent___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__250_0 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_int__ShopEntity__TypeInfo);
    System_Func_int__object____ctor(
      _9__250_0,
      v18,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__250_0__,
      0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__250_0 = (struct System_Func_int__ShopEntity__o *)_9__250_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__250_0, (int32_t)_9__250_0, v20, v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               v16,
                                                               (System_Func_TSource__TResult__o *)_9__250_0,
                                                               (const MethodInfo_2EADD38 *)Method_System_Linq_Enumerable_Select_int__ShopEntity___);
  v23 = System_Linq_Enumerable__ToList_object_(
          v22,
          (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
  v24 = TerminalSceneComponent___c_TypeInfo;
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)v23;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v24 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__250_1 = (System_Func_object__bool__o *)v24->static_fields->__9__250_1;
  if ( !_9__250_1 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = TerminalSceneComponent___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v24->static_fields->__9;
    _9__250_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__250_1,
      v27,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__250_1__,
      0LL);
    v28 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v28->__9__250_1 = (struct System_Func_ShopEntity__bool__o *)_9__250_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v28->__9__250_1, (int32_t)_9__250_1, v29, v30);
  }
  v31 = System_Linq_Enumerable__Where_object_(
          v25,
          (System_Func_TSource__bool__o *)_9__250_1,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v32 = TerminalSceneComponent___c_TypeInfo;
  v33 = v31;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v32 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__250_2 = (System_Func_object__bool__o *)v32->static_fields->__9__250_2;
  if ( !_9__250_2 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = TerminalSceneComponent___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v32->static_fields->__9;
    _9__250_2 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__250_2,
      v35,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__250_2__,
      0LL);
    v36 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v36->__9__250_2 = (struct System_Func_ShopEntity__bool__o *)_9__250_2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v36->__9__250_2, (int32_t)_9__250_2, v37, v38);
  }
  v39 = System_Linq_Enumerable__Where_object_(
          v33,
          (System_Func_TSource__bool__o *)_9__250_2,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v40 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_ShopEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v40,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent__OpenExchangeDialogue_b__250_3__,
    0LL);
  v41 = System_Linq_Enumerable__Where_object_(
          v39,
          (System_Func_TSource__bool__o *)v40,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v42 = System_Linq_Enumerable__ToList_object_(
          v41,
          (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
  v43 = TerminalSceneComponent___c_TypeInfo;
  v44 = (System_Collections_Generic_IEnumerable_TSource__o *)v42;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v43 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__250_4 = (System_Func_object__int__o *)v43->static_fields->__9__250_4;
  if ( !_9__250_4 )
  {
    if ( !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      v43 = TerminalSceneComponent___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v43->static_fields->__9;
    _9__250_4 = (System_Func_object__int__o *)sub_1B887FC(System_Func_ShopEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__250_4,
      v46,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__250_4__,
      0LL);
    v47 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v47->__9__250_4 = (struct System_Func_ShopEntity__int__o *)_9__250_4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v47->__9__250_4, (int32_t)_9__250_4, v48, v49);
  }
  v50 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v44,
                                                               (System_Func_TSource__TResult__o *)_9__250_4,
                                                               (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_ShopEntity__int___);
  String_69417656 = (System_String_o *)System_Linq_Enumerable__ToArray_int_(
                                         v50,
                                         (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !String_69417656 )
    goto LABEL_34;
  v51 = (System_Collections_Generic_IEnumerable_TSource__o *)String_69417656;
  if ( String_69417656[1].klass )
  {
    if ( System_String__op_Equality(playerPrefsKey, (System_String_o *)StringLiteral_19627/*"freeShopIds"*/, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v53 = LocalizationManager__Get(localizationKeyForTitle, 0LL);
      String_69417656 = LocalizationManager__Get(localizationKeyForDetail, 0LL);
      if ( !Instance )
        goto LABEL_34;
      goto LABEL_51;
    }
    v54 = TerminalSceneComponent___c_TypeInfo;
    if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v54 = TerminalSceneComponent___c_TypeInfo;
    }
    _9__250_5 = (System_Func_T__TResult__o *)v54->static_fields->__9__250_5;
    if ( !_9__250_5 )
    {
      if ( !v54->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v54);
        v54 = TerminalSceneComponent___c_TypeInfo;
      }
      v56 = (Il2CppObject *)v54->static_fields->__9;
      _9__250_5 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_int__ShopEntity__TypeInfo);
      System_Func_int__object____ctor(
        _9__250_5,
        v56,
        Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__250_5__,
        0LL);
      v57 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v57->__9__250_5 = (struct System_Func_int__ShopEntity__o *)_9__250_5;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v57->__9__250_5, (int32_t)_9__250_5, v58, v59);
    }
    v60 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                 v51,
                                                                 (System_Func_TSource__TResult__o *)_9__250_5,
                                                                 (const MethodInfo_2EADD38 *)Method_System_Linq_Enumerable_Select_int__ShopEntity___);
    v61 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                 v60,
                                                                 (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v53 = LocalizationManager__Get(localizationKeyForTitle, 0LL);
    v62 = LocalizationManager__Get(localizationKeyForDetail, 0LL);
    v63 = TerminalSceneComponent___c_TypeInfo;
    v64 = v62;
    if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v63 = TerminalSceneComponent___c_TypeInfo;
    }
    _9__250_6 = (System_Func_object__int__o *)v63->static_fields->__9__250_6;
    if ( !_9__250_6 )
    {
      if ( !v63->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v63);
        v63 = TerminalSceneComponent___c_TypeInfo;
      }
      v66 = (Il2CppObject *)v63->static_fields->__9;
      _9__250_6 = (System_Func_object__int__o *)sub_1B887FC(System_Func_ShopEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__250_6,
        v66,
        Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__250_6__,
        0LL);
      v67 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v67->__9__250_6 = (struct System_Func_ShopEntity__int__o *)_9__250_6;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v67->__9__250_6, (int32_t)_9__250_6, v68, v69);
    }
    v76 = System_Linq_Enumerable__Sum_object_(
            v61,
            (System_Func_TSource__int__o *)_9__250_6,
            (const MethodInfo_2EB7264 *)Method_System_Linq_Enumerable_Sum_ShopEntity___);
    v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v76, v70, v71, v72);
    String_69417656 = System_String__Format(v64, v73, 0LL);
    if ( Instance )
    {
LABEL_51:
      CommonUI__OpenAchievementExchangeConditionsDialog(
        (CommonUI_o *)Instance,
        (System_Int32_array *)v51,
        v53,
        String_69417656,
        action,
        0LL);
      goto LABEL_52;
    }
LABEL_34:
    sub_1B8880C(String_69417656, v10);
  }
  ActionExtensions__Call(action, 0LL);
LABEL_52:
  UnityEngine_PlayerPrefs__DeleteKey(playerPrefsKey, 0LL);
}


void __fastcall TerminalSceneComponent__PlayChapterStart(
        TerminalSceneComponent_o *this,
        TerminalSceneComponent_PlayChapterStartCallback_o *end_act,
        const MethodInfo *method)
{
  WarEntity_o *IsPlayChapterStart; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  Il2CppObject *Instance; // x20
  WarEntity_o *v10; // x20
  int32_t StartType; // w0
  BattleScriptRootComponent_TalkScriptInfo_o *v12; // x21
  TerminalPramsManager_c *v13; // x0
  int32_t v14; // w22
  TerminalPramsManager_c *v15; // x0
  int32_t targetId; // w22
  int32_t WarId_k__BackingField; // w23
  TerminalPramsManager_c *v18; // x0
  BalanceConfig_c *v19; // x8
  int32_t v20; // w22
  TerminalSceneComponent_c *v21; // x0
  int64_t v22; // x22
  TerminalPramsManager_c *v23; // x0
  int32_t v24; // w22
  TerminalPramsManager_c *v25; // x0

  if ( (byte_4A5D0FD & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5D0FD = 1;
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.OnResumeFromChapterStart, (int32_t)end_act, v7, v8);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC3 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC3 = 1;
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
  v10 = IsPlayChapterStart;
  StartType = WarEntity__GetStartType(IsPlayChapterStart, 0LL);
  if ( StartType == 2 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57DC3 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC3 = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    targetId = v10->fields.targetId;
    WarId_k__BackingField = v15->static_fields->_WarId_k__BackingField;
    v12 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_1B887FC(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    BattleScriptRootComponent_TalkScriptInfo___ctor_44384040(v12, WarId_k__BackingField, targetId, 0, 1, 0, 0, 0, 0LL);
  }
  else
  {
    v12 = 0LL;
    if ( StartType == 1 )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A57DC3 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A57DC3 = 1;
      }
      v13 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v13 = TerminalPramsManager_TypeInfo;
      }
      v14 = v13->static_fields->_WarId_k__BackingField;
      v12 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_1B887FC(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
      BattleScriptRootComponent_TalkScriptInfo___ctor_44384040(v12, v14, 0, 0, 1, 0, 0, 0, 0LL);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC3 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC3 = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v19 = BalanceConfig_TypeInfo;
  v20 = v18->static_fields->_WarId_k__BackingField;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
  }
  if ( v20 == v19->static_fields->OrdealCallWarId )
  {
    v21 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v21 = TerminalSceneComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v21->static_fields->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY, 1, 0LL);
  }
  if ( WarEntity__HasFlag(v10, 0x8000, 0LL) )
  {
    v22 = v10->fields.targetId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57DC4 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC4 = 1;
    }
    v23 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v23 = TerminalPramsManager_TypeInfo;
    }
    v23->static_fields->_QuestId_k__BackingField = v22;
    v24 = v10->fields.targetId;
    if ( !byte_4A58393 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      v23 = TerminalPramsManager_TypeInfo;
      byte_4A58393 = 1;
    }
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = TerminalPramsManager_TypeInfo;
    }
    v23->static_fields->_LastPlayedQuestId_k__BackingField = v24;
    TerminalPramsManager__CheckClearSelectedStoryQuestId(v10->fields.targetId, 0LL);
    TerminalPramsManager__PlayQuestSave_SaveData(0LL);
    IsPlayChapterStart = (WarEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( IsPlayChapterStart )
    {
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)IsPlayChapterStart, 0LL);
      IsPlayChapterStart = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( IsPlayChapterStart )
      {
        AvalonSceneManager__changeScene((AvalonSceneManager_o *)IsPlayChapterStart, 38, 2, (Il2CppObject *)v12, 0LL);
        return;
      }
    }
LABEL_64:
    sub_1B8880C(IsPlayChapterStart, v6);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A58084 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58084 = 1;
  }
  v25 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v25 = TerminalPramsManager_TypeInfo;
  }
  v25->static_fields->meSceneStatus = 3;
  IsPlayChapterStart = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !IsPlayChapterStart )
    goto LABEL_64;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)IsPlayChapterStart, 38, 2, (Il2CppObject *)v12, 0LL);
}


void __fastcall TerminalSceneComponent__PlayEventTutorial(
        TerminalSceneComponent_o *this,
        System_Action_o *callbackAfter,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_Component_o *EventID; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  TerminalPramsManager_c *v12; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  int32_t v14; // w21
  System_Action_o *v15; // x22
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct MapControl_MapInfo_o *mMapInfo; // x8

  if ( (byte_4A5D0FE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass226_0__PlayEventTutorial_b__0__);
    sub_1B885B0(&TerminalSceneComponent___c__DisplayClass226_0_TypeInfo);
    byte_4A5D0FE = 1;
  }
  v5 = sub_1B887FC(TerminalSceneComponent___c__DisplayClass226_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass226_0___ctor((TerminalSceneComponent___c__DisplayClass226_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_16;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callbackAfter;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)callbackAfter, v10, v11);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC3 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC3 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  EventID = (UnityEngine_Component_o *)WarMaster__getEventID(v12->static_fields->_WarId_k__BackingField, 0LL);
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_16;
  v14 = (int)EventID;
  EventID = (UnityEngine_Component_o *)mTerminalList->fields.mActionBgColl;
  if ( !EventID
    || (EventID = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(EventID, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EventID, 1, 0LL),
        v15 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent___c__DisplayClass226_0__PlayEventTutorial_b__0__,
          0LL),
        (mTerminalMap = this->fields.mTerminalMap) == 0LL)
    || (mMapInfo = mTerminalMap->fields.mMapInfo) == 0LL )
  {
LABEL_16:
    sub_1B8880C(EventID, v7);
  }
  EventTutorialMaster__CheckTutorial(v14, 1, v15, mMapInfo->fields.mapId, 0, 0, 0, 0LL);
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

  if ( (byte_4A5D0FF & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5D0FF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  if ( QuestAfterAction__IsPlaying((QuestAfterAction_o *)Instance, 0LL) )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC3 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC3 = 1;
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
    sub_1B8880C(Instance, v6);
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
    sub_1B8880C(mQuestInformation, method);
  return QuestInformationComponent__isListBuilding(mQuestInformation, 0LL);
}


int32_t __fastcall TerminalSceneComponent__QuestInfoShowing(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct QuestInformationComponent_o *mQuestInformation; // x8

  mQuestInformation = this->fields.mQuestInformation;
  if ( !mQuestInformation )
    sub_1B8880C(this, method);
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
  ErrorDialog_ClickDelegate_o *_9__210_0; // x22
  Il2CppObject *v9; // x23
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A5D0F4 & 1) == 0 )
  {
    sub_1B885B0(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__RebootToNetworkError_b__210_0__);
    sub_1B885B0(&TerminalSceneComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_13281/*"TERMINAL_NETWORK_ERROR_DIALOG_TITLE"*/);
    sub_1B885B0(&StringLiteral_13280/*"TERMINAL_NETWORK_ERROR_DIALOG_MESSAGE"*/);
    byte_4A5D0F4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_13281/*"TERMINAL_NETWORK_ERROR_DIALOG_TITLE"*/, 0LL);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13280/*"TERMINAL_NETWORK_ERROR_DIALOG_MESSAGE"*/, 0LL);
  v6 = TerminalSceneComponent___c_TypeInfo;
  v7 = v4;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v6 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__210_0 = v6->static_fields->__9__210_0;
  if ( !_9__210_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = TerminalSceneComponent___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__210_0 = (ErrorDialog_ClickDelegate_o *)sub_1B887FC(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(
      _9__210_0,
      v9,
      Method_TerminalSceneComponent___c__RebootToNetworkError_b__210_0__,
      0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__210_0 = _9__210_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__210_0, (int32_t)_9__210_0, v11, v12);
  }
  if ( !Instance )
    sub_1B8880C(v4, v5);
  CommonUI__OpenErrorDialog((CommonUI_o *)Instance, v3, v7, _9__210_0, 1, 0LL);
}


void __fastcall TerminalSceneComponent__SendMessageStartUpAndResume(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20
  struct TerminalSceneComponent_PlayChapterStartCallback_o *v6; // x8
  ServantStatusBattleListViewItem_o *p_OnResumeFromChapterStart; // x19
  struct TerminalSceneComponent_PlayChapterStartCallback_o *OnResumeFromChapterStart; // t1
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5D0D2 & 1) == 0 )
  {
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5D0D2 = 1;
  }
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
  if ( this->fields.isFadeInAfterResumeLoad )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v5 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v5 )
      sub_1B8880C(Instance, v4);
    CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
    this->fields.isFadeInAfterResumeLoad = 0;
  }
  OnResumeFromChapterStart = this->fields.OnResumeFromChapterStart;
  p_OnResumeFromChapterStart = (ServantStatusBattleListViewItem_o *)&this->fields.OnResumeFromChapterStart;
  v6 = OnResumeFromChapterStart;
  if ( OnResumeFromChapterStart )
  {
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      1LL,
      *(_QWORD *)&v6->fields.extra_arg);
    p_OnResumeFromChapterStart->klass = 0LL;
    sub_1B88554(p_OnResumeFromChapterStart, 0, v9, v10);
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
    sub_1B8880C(this, isEnable);
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

  if ( (byte_4A5D110 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_5316/*"Directional light"*/);
    byte_4A5D110 = 1;
  }
  GameObjectWithLog = (UnityEngine_Object_o *)GameObjectExtensions__FindGameObjectWithLog(
                                                this->fields.mEarthCoreObj,
                                                (System_String_o *)StringLiteral_5316/*"Directional light"*/,
                                                0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(GameObjectWithLog, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !GameObjectWithLog )
      sub_1B8880C(v6, v7);
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

  if ( (byte_4A5D0DC & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    byte_4A5D0DC = 1;
  }
  mTerminalServant = (UnityEngine_Component_o *)this->fields.mTerminalServant;
  if ( !mTerminalServant
    || (gameObject = UnityEngine_Component__get_gameObject(mTerminalServant, 0LL),
        (mTerminalServant = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL)) == 0LL)
    || (mTerminalServant = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mTerminalServant, 0LL)) == 0LL
    || (mTerminalServant = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        (UnityEngine_GameObject_o *)mTerminalServant,
                                                        (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___)) == 0LL )
  {
    sub_1B8880C(mTerminalServant, isDisp);
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
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_Object_o *mEarthCore; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v14; // x0
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  TerminalSceneComponent_c *v18; // x0
  int *v19; // x1
  System_String_o *EARTH_ASSET_NAME; // x21
  System_Int32_c *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  TerminalSceneComponent_c *v24; // x0
  Il2CppObject *v25; // x0
  struct System_String_o *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *Instance; // x0
  System_String_o *loadEarthAssetName; // x19
  AssetManager_o *v31; // x21
  AssetLoader_LoadEndDataHandler_o *v32; // x22
  int v33; // [xsp+8h] [xbp-38h] BYREF
  int v34; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5D0CF & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass170_0__SetEarthView_b__0__);
    sub_1B885B0(&TerminalSceneComponent___c__DisplayClass170_0_TypeInfo);
    byte_4A5D0CF = 1;
  }
  v5 = sub_1B887FC(TerminalSceneComponent___c__DisplayClass170_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass170_0___ctor((TerminalSceneComponent___c__DisplayClass170_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_30;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)callback, v10, v11);
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
              v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0LL);
              GameObjectExtensions__SetLocalPositionZ(v14, -792.87, 0LL);
              v18 = TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                v18 = TerminalSceneComponent_TypeInfo;
              }
              v19 = &v34;
              EARTH_ASSET_NAME = v18->static_fields->EARTH_ASSET_NAME;
              v21 = int_TypeInfo;
              v34 = 2;
              goto LABEL_28;
            }
          }
        }
      }
    }
LABEL_30:
    sub_1B8880C(mEarthEffCamera, v7);
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
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0LL);
  GameObjectExtensions__SetLocalPositionZ(v22, -50000.0, 0LL);
  mEarthEffCamera = this->fields.mEarthEffCamera;
  if ( !mEarthEffCamera )
    goto LABEL_30;
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0LL);
  GameObjectExtensions__SetLocalPositionZ(v23, -50000.0, 0LL);
  v24 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v24 = TerminalSceneComponent_TypeInfo;
  }
  v19 = &v33;
  EARTH_ASSET_NAME = v24->static_fields->EARTH_ASSET_NAME;
  v21 = int_TypeInfo;
  v33 = 1;
LABEL_28:
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(v21, v19, v15, v16, v17);
  v26 = System_String__Format(EARTH_ASSET_NAME, v25, 0LL);
  this->fields.loadEarthAssetName = v26;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.loadEarthAssetName, (int32_t)v26, v27, v28);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  loadEarthAssetName = this->fields.loadEarthAssetName;
  v31 = (AssetManager_o *)Instance;
  v32 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v32,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass170_0__SetEarthView_b__0__,
    0LL);
  if ( !v31 )
    goto LABEL_30;
  AssetManager__LoadAssetStorage(v31, loadEarthAssetName, v32, 1, 0LL);
}


void __fastcall TerminalSceneComponent__SetQuestBoardInfoOff(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x0
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList || (mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager) == 0LL )
    sub_1B8880C(mTerminalList, method);
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
    sub_1B8880C(0LL, method);
  QuestInformationComponent__SetResetReady(mQuestInformation, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent__SetState(
        TerminalSceneComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4A5D101 & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_TerminalSceneComponent__setState__);
    byte_4A5D101 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1B8880C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_30AAE68 *)Method_CStateManager_TerminalSceneComponent__setState__);
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  StandFigureSlideComponent_o *mTerminalServant; // x22
  System_Action_o *v17; // x23
  struct StandFigureSlideComponent_o *v18; // x19
  System_Action_o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_4A5D0DB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass184_0__SetupStandServant_b__0__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass184_0__SetupStandServant_b__1__);
    sub_1B885B0(&TerminalSceneComponent___c__DisplayClass184_0_TypeInfo);
    byte_4A5D0DB = 1;
  }
  v9 = sub_1B887FC(TerminalSceneComponent___c__DisplayClass184_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass184_0___ctor((TerminalSceneComponent___c__DisplayClass184_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_7;
  *(_BYTE *)(v9 + 16) = isSlideIn;
  *(_QWORD *)(v9 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 32) = endAction;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)endAction, v14, v15);
  mTerminalServant = this->fields.mTerminalServant;
  v17 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v9,
    Method_TerminalSceneComponent___c__DisplayClass184_0__SetupStandServant_b__0__,
    0LL);
  if ( !mTerminalServant
    || (StandFigureSlideComponent__Setup(mTerminalServant, usd, 0, v17, 0LL),
        v18 = this->fields.mTerminalServant,
        v19 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v19,
          (Il2CppObject *)v9,
          Method_TerminalSceneComponent___c__DisplayClass184_0__SetupStandServant_b__1__,
          0LL),
        !v18) )
  {
LABEL_7:
    sub_1B8880C(v10, v11);
  }
  v18->fields.mBtnAct = v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v18->fields.mBtnAct, (int32_t)v19, v20, v21);
}


void __fastcall TerminalSceneComponent__StartEventDailyPoint(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x2

  if ( TerminalSceneComponent__CheckEventDailyPoint(this, eventId, (const MethodInfo *)callback) )
  {
    this->fields.afterEventDailyPoint = callback;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.afterEventDailyPoint, (int32_t)callback, v7, v8);
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
  TerminalPramsManager_c *v5; // x0
  TerminalPramsManager_c *v6; // x0
  void *v7; // x0
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x19
  System_Action_object__o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  System_Action_object__o *v16; // x20
  Il2CppObject *v17; // x21
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  System_Action_object__o *v23; // x20
  Il2CppObject *v24; // x21
  struct TerminalSceneComponent___c_StaticFields *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  System_Action_object__o *v30; // x20
  Il2CppObject *v31; // x21
  struct TerminalSceneComponent___c_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  ActionChain_o *v35; // x20

  if ( (byte_4A5D0E5 & 1) == 0 )
  {
    sub_1B885B0(&ActionChain_TypeInfo);
    sub_1B885B0(&System_Action_Action____TypeInfo);
    sub_1B885B0(&System_Action_Action__TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_TerminalSceneComponent__StartWindowMessage_b__195_0__);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&Method_TerminalSceneComponent___c__StartWindowMessage_b__195_1__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__StartWindowMessage_b__195_2__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__StartWindowMessage_b__195_3__);
    sub_1B885B0(&TerminalSceneComponent___c_TypeInfo);
    byte_4A5D0E5 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57177 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57177 = 1;
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
    if ( !byte_4A5D121 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A5D121 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    if ( !System_String__IsNullOrEmpty(v6->static_fields->_QuestWindowMessage_k__BackingField, 0LL) )
    {
      v10 = sub_1B88658(System_Action_Action____TypeInfo, 4LL);
      v11 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
      System_Action_object____ctor(
        v11,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent__StartWindowMessage_b__195_0__,
        0LL);
      if ( v10 )
      {
        if ( !*(_DWORD *)(v10 + 24) )
          goto LABEL_55;
        *(_QWORD *)(v10 + 32) = v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 32), (int32_t)v11, v12, v13);
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
          v16 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
          System_Action_object____ctor(v16, v17, Method_TerminalSceneComponent___c__StartWindowMessage_b__195_1__, 0LL);
          static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
          static_fields->__9__195_1 = (struct System_Action_Action__o *)v16;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__195_1, (int32_t)v16, v19, v20);
        }
        if ( *(_DWORD *)(v10 + 24) <= 1u )
          goto LABEL_55;
        *(_QWORD *)(v10 + 40) = v16;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 40), (int32_t)v16, v14, v15);
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
          v23 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
          System_Action_object____ctor(v23, v24, Method_TerminalSceneComponent___c__StartWindowMessage_b__195_2__, 0LL);
          v25 = TerminalSceneComponent___c_TypeInfo->static_fields;
          v25->__9__195_2 = (struct System_Action_Action__o *)v23;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v25->__9__195_2, (int32_t)v23, v26, v27);
        }
        if ( *(_DWORD *)(v10 + 24) <= 2u )
          goto LABEL_55;
        *(_QWORD *)(v10 + 48) = v23;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 48), (int32_t)v23, v21, v22);
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
          v30 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
          System_Action_object____ctor(v30, v31, Method_TerminalSceneComponent___c__StartWindowMessage_b__195_3__, 0LL);
          v32 = TerminalSceneComponent___c_TypeInfo->static_fields;
          v32->__9__195_3 = (struct System_Action_Action__o *)v30;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v32->__9__195_3, (int32_t)v30, v33, v34);
        }
        if ( *(_DWORD *)(v10 + 24) <= 3u )
LABEL_55:
          sub_1B88814(v7, callbackFunc);
        *(_QWORD *)(v10 + 56) = v30;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 56), (int32_t)v30, v28, v29);
        v35 = (ActionChain_o *)sub_1B887FC(ActionChain_TypeInfo);
        ActionChain___ctor_46556284(v35, (System_Action_Action__array *)v10, 0LL);
        if ( v35 )
        {
          ChainableActionBase__Execute((ChainableActionBase_o *)v35, 0LL);
          return;
        }
      }
LABEL_54:
      sub_1B8880C(v7, callbackFunc);
    }
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
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
  v7 = *(void **)(v9 + 536);
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

  if ( (byte_4A5D0E8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D0E8 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_311D988 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
    sub_1B8880C(Instance, v8);
  TitleInfoControl__CheckSuperBossHpAnim((TitleInfoControl_o *)Instance, callback, 0LL);
}


void __fastcall TerminalSceneComponent__Update(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  CStateManager_T__o *mFSM; // x0
  ScrTerminalMap_o *mTerminalMap; // x20
  _BOOL8 IsMapTouchEnabled; // x0
  __int64 v7; // x1

  if ( (byte_4A5D0EA & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_TerminalSceneComponent__update__);
    sub_1B885B0(&CTouch_TypeInfo);
    byte_4A5D0EA = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_30AAE44 *)Method_CStateManager_TerminalSceneComponent__update__);
  mTerminalMap = this->fields.mTerminalMap;
  IsMapTouchEnabled = TerminalSceneComponent__IsMapTouchEnabled(this, v3);
  if ( !mTerminalMap )
    sub_1B8880C(IsMapTouchEnabled, v7);
  ScrTerminalMap__ProcessMapCamera(mTerminalMap, IsMapTouchEnabled, 0LL);
}


void __fastcall TerminalSceneComponent__UpdateCompleteMissionIconUI(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  ScrPlayerStatus_o *mPlayerStatus; // x0

  mPlayerStatus = this->fields.mPlayerStatus;
  if ( !mPlayerStatus )
    sub_1B8880C(0LL, method);
  ScrPlayerStatus__UpdateCompleteMissionIconUI(mPlayerStatus, 0LL);
}


void __fastcall TerminalSceneComponent__UpdateQuestBoardList(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x8

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList || (this = (TerminalSceneComponent_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0LL )
    sub_1B8880C(this, method);
  QuestBoardListViewManager__SetupDisp((QuestBoardListViewManager_o *)this, 0LL);
}


void __fastcall TerminalSceneComponent__UpdateTitleEventInfo(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *mTitleInfo; // x0

  mTitleInfo = this->fields.mTitleInfo;
  if ( !mTitleInfo )
    sub_1B8880C(0LL, method);
  TitleInfoControl__UpdateEventItemInfo(mTitleInfo, 0LL);
}


System_Collections_IEnumerator_o *__fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__189_o *v2; // x19

  if ( (byte_4A5D0DF & 1) == 0 )
  {
    sub_1B885B0(&TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__189_TypeInfo);
    byte_4A5D0DF = 1;
  }
  v2 = (TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__189_o *)sub_1B887FC(TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__189_TypeInfo);
  TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__189___ctor(v2, 0, 0LL);
  return (System_Collections_IEnumerator_o *)v2;
}


bool __fastcall TerminalSceneComponent___CoWaitBlankEerthActionEnd_b__247_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *mTerminalList; // x0

  if ( (byte_4A5D119 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5D119 = 1;
  }
  mTerminalList = (CommonUI_o *)this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_9;
  if ( !ScrTerminalListTop__IsBlankEarthAction((ScrTerminalListTop_o *)mTerminalList, 0LL) )
  {
    mTerminalList = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( mTerminalList )
      return !CommonUI__IsActive_NotifiDialog(mTerminalList, 0LL);
LABEL_9:
    sub_1B8880C(mTerminalList, method);
  }
  return 0;
}


bool __fastcall TerminalSceneComponent___CoWaitTerminalTopEffectEnd_b__246_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *mTerminalList; // x0

  if ( (byte_4A5D118 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5D118 = 1;
  }
  mTerminalList = (CommonUI_o *)this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_9;
  if ( ScrTerminalListTop__CheckTerminalTopEffect((ScrTerminalListTop_o *)mTerminalList, 0LL) <= 0 )
  {
    mTerminalList = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( mTerminalList )
      return !CommonUI__IsActive_NotifiDialog(mTerminalList, 0LL);
LABEL_9:
    sub_1B8880C(mTerminalList, method);
  }
  return 0;
}


bool __fastcall TerminalSceneComponent___OpenExchangeDialogue_b__250_3(
        TerminalSceneComponent_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  return !TerminalSceneComponent__IsNotDisplayCostume(this, x, method);
}


void __fastcall TerminalSceneComponent___StartWindowMessage_b__195_0(
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
    sub_1B8880C(this, action);
  }
  QuestBoardListViewManager__SetMode((QuestBoardListViewManager_o *)this, 4, action, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalSceneComponent___beginInitialize_b__169_0(
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
  if ( (byte_4A5D114 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EventRaidMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_TerminalSceneComponent__beginInitialize_b__169_3__);
    this = (TerminalSceneComponent_o *)sub_1B885B0(&Method_TerminalSceneComponent__beginInitialize_b__169_4__);
    byte_4A5D114 = 1;
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
    this = (TerminalSceneComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventRaidMaster___);
    v8 = v4->fields.mTerminalMap;
    if ( !v8 )
      goto LABEL_30;
    mWarEnt = v8->fields.mWarEnt;
    if ( !mWarEnt || !this )
      goto LABEL_30;
    if ( EventRaidMaster__GetRaidGorupMax((EventRaidMaster_o *)this, mWarEnt->fields.eventId, 0LL) >= 1 )
    {
      v10 = v4->fields.mTerminalMap;
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)v4, Method_TerminalSceneComponent__beginInitialize_b__169_3__, 0LL);
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
        v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(v13, (Il2CppObject *)v4, Method_TerminalSceneComponent__beginInitialize_b__169_4__, 0LL);
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
    sub_1B8880C(this, gotNewServant);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A5644B )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5644B = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsAutoResume_k__BackingField = 1;
  this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 34, 1, 0LL, 0LL);
  return !gotNewServant;
}


void __fastcall TerminalSceneComponent___beginInitialize_b__169_1(
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
    sub_1B8880C(mPlayerStatus, method);
  }
  QuestBoardListViewManager__SetupDisp((QuestBoardListViewManager_o *)mPlayerStatus, 0LL);
}


void __fastcall TerminalSceneComponent___beginInitialize_b__169_2(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1
  ScrTerminalMap_o *mTerminalMap; // x19

  if ( (byte_4A5D116 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A5D116 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL),
        (Instance = (AvalonSceneManager_o *)this->fields.mEarthCore) == 0LL)
    || (mTerminalMap = this->fields.mTerminalMap,
        Instance = (AvalonSceneManager_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)Instance,
                                             0LL),
        !mTerminalMap) )
  {
    sub_1B8880C(Instance, v4);
  }
  ScrTerminalMap__SetCore(mTerminalMap, (UnityEngine_GameObject_o *)Instance, 0LL);
}


void __fastcall TerminalSceneComponent___beginInitialize_b__169_3(
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

  if ( (byte_4A5D115 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_TerminalSceneComponent__beginInitialize_b__169_5__);
    byte_4A5D115 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC3 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC3 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v4->static_fields->_WarId_k__BackingField;
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__169_5__, 0LL);
  if ( !Instance )
    sub_1B8880C(v7, v8);
  v9 = QuestTree__mfBaseTreeUpdateWithOpenCheck((QuestTree_o *)Instance, WarId_k__BackingField, v6, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
}


void __fastcall TerminalSceneComponent___beginInitialize_b__169_4(
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
    sub_1B8880C(this, method);
  }
}


void __fastcall TerminalSceneComponent___beginInitialize_b__169_5(
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
    sub_1B8880C(mTerminalList, method);
  }
  ScrTerminalMap__UpdateEventRaidUI((ScrTerminalMap_o *)mTerminalList, 0LL);
}


void __fastcall TerminalSceneComponent___callbackEventDailyPoint_b__215_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.afterEventDailyPoint, 0LL);
}


void __fastcall TerminalSceneComponent___mfsmfInitTable_b__212_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *v2; // x19
  __int64 v3; // x1
  PlayMakerFSM_o *myFSM; // x0

  v2 = this;
  if ( (byte_4A5D117 & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_1B885B0(&StringLiteral_5528/*"EVENTLISTUP_END"*/);
    byte_4A5D117 = 1;
  }
  TerminalSceneComponent__deleteQuestMovie(this, method);
  myFSM = v2->fields.myFSM;
  if ( !myFSM )
    sub_1B8880C(0LL, v3);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_5528/*"EVENTLISTUP_END"*/, 0LL);
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
  int32_t v13; // w2
  int32_t v14; // w3
  struct UnityEngine_Camera_o *mUICamera; // x20
  CTouch_c *v16; // x0
  struct CTouch_StaticFields *static_fields; // x0
  struct CStateManager_TerminalSceneComponent__o **p_mFSM; // x20
  CStateManager_T__o *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  CStateManager_T__o *mFSM; // x21
  TerminalSceneComponent_StateNormal_o *v23; // x22
  CStateManager_T__o *v24; // x21
  TerminalSceneComponent_StateTutorial1_SpotArrow_o *v25; // x22
  CStateManager_T__o *v26; // x21
  TerminalSceneComponent_StateTutorial1_QuestArrow_o *v27; // x22
  CStateManager_T__o *v28; // x21
  TerminalSceneComponent_StateTutorial2_SpotArrow_o *v29; // x22
  CStateManager_T__o *v30; // x21
  TerminalSceneComponent_StateTutorial2_QuestArrow_o *v31; // x22
  CStateManager_T__o *v32; // x21
  TerminalSceneComponent_StateTutorial3_MenuArrow_o *v33; // x22
  CStateManager_T__o *v34; // x21
  TerminalSceneComponent_StateTutorial3_GachaArrow_o *v35; // x22
  CStateManager_T__o *v36; // x21
  TerminalSceneComponent_StateTutorial4_SpotArrow_o *v37; // x22
  CStateManager_T__o *v38; // x21
  TerminalSceneComponent_StateTutorial4_QuestArrow_o *v39; // x22
  CStateManager_T__o *v40; // x21
  TerminalSceneComponent_StateTutorial5_MenuArrow_o *v41; // x22
  CStateManager_T__o *v42; // x20
  TerminalSceneComponent_StateTutorial5_CombineArrow_o *v43; // x21
  const MethodInfo *v44; // x2
  ScrPlayerStatus_o *mPlayerStatus; // x20
  System_Func_bool__bool__o *v46; // x21
  struct ScrPlayerStatus_o *v47; // x21
  System_Action_o *v48; // x20
  int32_t v49; // w2
  int32_t v50; // w3
  struct ScrTerminalMap_o *mTerminalMap; // x8
  System_Action_o *v52; // x20
  const MethodInfo *v53; // x2

  if ( (byte_4A5D0CE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AndroidUtil_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_CStateManager_TerminalSceneComponent___ctor__);
    sub_1B885B0(&Method_CStateManager_TerminalSceneComponent__add__);
    sub_1B885B0(&CStateManager_TerminalSceneComponent__TypeInfo);
    sub_1B885B0(&CTouch_TypeInfo);
    sub_1B885B0(&System_Func_bool__bool__TypeInfo);
    sub_1B885B0(&ServantProfileEventJoinManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1B885B0(&TerminalSceneComponent_StateNormal_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_StateTutorial1_QuestArrow_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_StateTutorial1_SpotArrow_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_StateTutorial2_QuestArrow_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_StateTutorial2_SpotArrow_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_StateTutorial3_GachaArrow_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_StateTutorial3_MenuArrow_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_StateTutorial4_QuestArrow_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_StateTutorial4_SpotArrow_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_StateTutorial5_CombineArrow_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_StateTutorial5_MenuArrow_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_TerminalSceneComponent__beginInitialize_b__169_0__);
    sub_1B885B0(&Method_TerminalSceneComponent__beginInitialize_b__169_1__);
    sub_1B885B0(&Method_TerminalSceneComponent__beginInitialize_b__169_2__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5D0CE = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  AndroidUtil__DeleteOldSaveData(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__Load_SaveData(0LL);
  if ( !byte_4A57DCC )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DCC = 1;
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
    if ( !byte_4A57DC6 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC6 = 1;
    }
    v4 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v4 = TerminalPramsManager_TypeInfo;
    }
    v4->static_fields->_DispState_k__BackingField = 0;
    if ( !byte_4A5818A )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      v4 = TerminalPramsManager_TypeInfo;
      byte_4A5818A = 1;
    }
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = TerminalPramsManager_TypeInfo;
    }
    v4->static_fields->_SelectedStoryQuestId_k__BackingField = 0;
    TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(0LL);
    if ( !byte_4A56DA1 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A56DA1 = 1;
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
  Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  if ( QuestAfterAction__CheckChangeBlankEarth(Instance, 0LL) )
    goto LABEL_39;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A5D11A )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5D11A = 1;
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
    if ( !byte_4A58088 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A58088 = 1;
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
  if ( !byte_4A58084 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58084 = 1;
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
  if ( !byte_4A59024 )
  {
    sub_1B885B0(&CTouch_TypeInfo);
    byte_4A59024 = 1;
  }
  v16 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v16 = CTouch_TypeInfo;
  }
  static_fields = v16->static_fields;
  static_fields->mScreenCam = mUICamera;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->mScreenCam, (int32_t)mUICamera, v13, v14);
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v19 = (CStateManager_T__o *)sub_1B887FC(CStateManager_TerminalSceneComponent__TypeInfo);
    CStateManager_object____ctor(
      v19,
      (Il2CppObject *)this,
      11,
      (const MethodInfo_30AAD34 *)Method_CStateManager_TerminalSceneComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_TerminalSceneComponent__o *)v19;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mFSM, (int32_t)v19, v20, v21);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v23 = (TerminalSceneComponent_StateNormal_o *)sub_1B887FC(TerminalSceneComponent_StateNormal_TypeInfo);
    TerminalSceneComponent_StateNormal___ctor(v23, 0LL);
    if ( mFSM )
    {
      CStateManager_object___add(
        mFSM,
        0,
        (IState_T__o *)v23,
        (const MethodInfo_30AADDC *)Method_CStateManager_TerminalSceneComponent__add__);
      v24 = (CStateManager_T__o *)*p_mFSM;
      v25 = (TerminalSceneComponent_StateTutorial1_SpotArrow_o *)sub_1B887FC(TerminalSceneComponent_StateTutorial1_SpotArrow_TypeInfo);
      TerminalSceneComponent_StateTutorial1_SpotArrow___ctor(v25, 0LL);
      if ( v24 )
      {
        CStateManager_object___add(
          v24,
          1,
          (IState_T__o *)v25,
          (const MethodInfo_30AADDC *)Method_CStateManager_TerminalSceneComponent__add__);
        v26 = (CStateManager_T__o *)*p_mFSM;
        v27 = (TerminalSceneComponent_StateTutorial1_QuestArrow_o *)sub_1B887FC(TerminalSceneComponent_StateTutorial1_QuestArrow_TypeInfo);
        TerminalSceneComponent_StateTutorial1_QuestArrow___ctor(v27, 0LL);
        if ( v26 )
        {
          CStateManager_object___add(
            v26,
            2,
            (IState_T__o *)v27,
            (const MethodInfo_30AADDC *)Method_CStateManager_TerminalSceneComponent__add__);
          v28 = (CStateManager_T__o *)*p_mFSM;
          v29 = (TerminalSceneComponent_StateTutorial2_SpotArrow_o *)sub_1B887FC(TerminalSceneComponent_StateTutorial2_SpotArrow_TypeInfo);
          TerminalSceneComponent_StateTutorial2_SpotArrow___ctor(v29, 0LL);
          if ( v28 )
          {
            CStateManager_object___add(
              v28,
              3,
              (IState_T__o *)v29,
              (const MethodInfo_30AADDC *)Method_CStateManager_TerminalSceneComponent__add__);
            v30 = (CStateManager_T__o *)*p_mFSM;
            v31 = (TerminalSceneComponent_StateTutorial2_QuestArrow_o *)sub_1B887FC(TerminalSceneComponent_StateTutorial2_QuestArrow_TypeInfo);
            TerminalSceneComponent_StateTutorial2_QuestArrow___ctor(v31, 0LL);
            if ( v30 )
            {
              CStateManager_object___add(
                v30,
                4,
                (IState_T__o *)v31,
                (const MethodInfo_30AADDC *)Method_CStateManager_TerminalSceneComponent__add__);
              v32 = (CStateManager_T__o *)*p_mFSM;
              v33 = (TerminalSceneComponent_StateTutorial3_MenuArrow_o *)sub_1B887FC(TerminalSceneComponent_StateTutorial3_MenuArrow_TypeInfo);
              TerminalSceneComponent_StateTutorial3_MenuArrow___ctor(v33, 0LL);
              if ( v32 )
              {
                CStateManager_object___add(
                  v32,
                  5,
                  (IState_T__o *)v33,
                  (const MethodInfo_30AADDC *)Method_CStateManager_TerminalSceneComponent__add__);
                v34 = (CStateManager_T__o *)*p_mFSM;
                v35 = (TerminalSceneComponent_StateTutorial3_GachaArrow_o *)sub_1B887FC(TerminalSceneComponent_StateTutorial3_GachaArrow_TypeInfo);
                TerminalSceneComponent_StateTutorial3_GachaArrow___ctor(v35, 0LL);
                if ( v34 )
                {
                  CStateManager_object___add(
                    v34,
                    6,
                    (IState_T__o *)v35,
                    (const MethodInfo_30AADDC *)Method_CStateManager_TerminalSceneComponent__add__);
                  v36 = (CStateManager_T__o *)*p_mFSM;
                  v37 = (TerminalSceneComponent_StateTutorial4_SpotArrow_o *)sub_1B887FC(TerminalSceneComponent_StateTutorial4_SpotArrow_TypeInfo);
                  TerminalSceneComponent_StateTutorial4_SpotArrow___ctor(v37, 0LL);
                  if ( v36 )
                  {
                    CStateManager_object___add(
                      v36,
                      7,
                      (IState_T__o *)v37,
                      (const MethodInfo_30AADDC *)Method_CStateManager_TerminalSceneComponent__add__);
                    v38 = (CStateManager_T__o *)*p_mFSM;
                    v39 = (TerminalSceneComponent_StateTutorial4_QuestArrow_o *)sub_1B887FC(TerminalSceneComponent_StateTutorial4_QuestArrow_TypeInfo);
                    TerminalSceneComponent_StateTutorial4_QuestArrow___ctor(v39, 0LL);
                    if ( v38 )
                    {
                      CStateManager_object___add(
                        v38,
                        8,
                        (IState_T__o *)v39,
                        (const MethodInfo_30AADDC *)Method_CStateManager_TerminalSceneComponent__add__);
                      v40 = (CStateManager_T__o *)*p_mFSM;
                      v41 = (TerminalSceneComponent_StateTutorial5_MenuArrow_o *)sub_1B887FC(TerminalSceneComponent_StateTutorial5_MenuArrow_TypeInfo);
                      TerminalSceneComponent_StateTutorial5_MenuArrow___ctor(v41, 0LL);
                      if ( v40 )
                      {
                        CStateManager_object___add(
                          v40,
                          9,
                          (IState_T__o *)v41,
                          (const MethodInfo_30AADDC *)Method_CStateManager_TerminalSceneComponent__add__);
                        v42 = (CStateManager_T__o *)*p_mFSM;
                        v43 = (TerminalSceneComponent_StateTutorial5_CombineArrow_o *)sub_1B887FC(TerminalSceneComponent_StateTutorial5_CombineArrow_TypeInfo);
                        TerminalSceneComponent_StateTutorial5_CombineArrow___ctor(v43, 0LL);
                        if ( v42 )
                        {
                          CStateManager_object___add(
                            v42,
                            10,
                            (IState_T__o *)v43,
                            (const MethodInfo_30AADDC *)Method_CStateManager_TerminalSceneComponent__add__);
                          TerminalSceneComponent__SetState(this, 0, v44);
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
    sub_1B8880C(Instance, v7);
  }
LABEL_73:
  Instance = (QuestAfterAction_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_88;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Instance, 0LL, 1, (System_String_o *)StringLiteral_1/*""*/, 1, 0LL);
  Instance = (QuestAfterAction_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_88;
  TitleInfoControl__changeTitleInfo_37188552((TitleInfoControl_o *)Instance, 1, 1, 0, 0LL);
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
  v46 = (System_Func_bool__bool__o *)sub_1B887FC(System_Func_bool__bool__TypeInfo);
  System_Func_bool__bool____ctor(
    v46,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent__beginInitialize_b__169_0__,
    0LL);
  if ( !mPlayerStatus )
    goto LABEL_88;
  ScrPlayerStatus__SetCloseGiftAct(mPlayerStatus, v46, 0LL);
  v47 = this->fields.mPlayerStatus;
  v48 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v48, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__169_1__, 0LL);
  if ( !v47 )
    goto LABEL_88;
  v47->fields.mRecoverAct = v48;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v47->fields.mRecoverAct, (int32_t)v48, v49, v50);
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
  v52 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v52, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__169_2__, 0LL);
  TerminalSceneComponent__SetEarthView(this, v52, v53);
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  ServantProfileEventJoinManager__UpdateProfileServantEventJoin(0LL);
}


void __fastcall TerminalSceneComponent__beginPause(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4A5D0D9 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4A5D0D9 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
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

  if ( (byte_4A5D0D8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5D0D8 = 1;
  }
  entity = 0LL;
  this->fields.isFadeInAfterResumeLoad = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  if ( !byte_4A5835C )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5835C = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Instance )
        goto LABEL_43;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             &entity,
             eventId,
             (const MethodInfo_311D988 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      {
        Instance = entity;
        if ( entity )
        {
          IsEventPeriod = EventEntity__IsEventPeriod((EventEntity_o *)entity, 0LL, 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( IsEventPeriod )
          {
            if ( byte_4A58084 )
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
            sub_1B885B0(&TerminalPramsManager_TypeInfo);
            byte_4A58084 = 1;
            goto LABEL_32;
          }
          if ( !byte_4A58084 )
          {
            sub_1B885B0(&TerminalPramsManager_TypeInfo);
            byte_4A58084 = 1;
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
        sub_1B8880C(Instance, v4);
      }
      v9 = TerminalPramsManager_TypeInfo;
    }
    if ( !v9->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v9);
    if ( byte_4A58084 )
      goto LABEL_32;
    goto LABEL_31;
  }
LABEL_35:
  this->fields.quitType = 1;
  SceneRootComponent__beginResume_38666660((SceneRootComponent_o *)this, 0LL);
}


void __fastcall TerminalSceneComponent__beginStartUp(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(TerminalSceneComponent_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_beginStartUp.method)(
    this,
    0LL,
    this->klass->vtable._6_beginStartUp.methodPtr);
}


void __fastcall TerminalSceneComponent__beginStartUp_42084628(
        TerminalSceneComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 methodPtr_low; // x10
  Il2CppObject *v7; // x1
  TerminalSceneComponent_c *v8; // x0
  const MethodInfo *v9; // x2
  TerminalPramsManager_c *v10; // x0
  TerminalPramsManager_c *v11; // x0
  Il2CppObject *Instance; // x0
  const MethodInfo *v13; // x1
  Il2CppObject *MasterData_object; // x20
  struct UserServantEntity_array *UserServantListFromDeckIsTerminal; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  struct UserServantEntity_array *mStandSvtDatas; // x8
  __int64 mStandSvtIdx; // x9
  UserServantEntity_o *NextStandServant; // x20
  bool isSavedMemoryMode; // w22
  System_Action_o *v22; // x0
  System_Action_o *v23; // x21
  const MethodInfo *v24; // x4
  const MethodInfo *v25; // x3
  System_Collections_IEnumerator_o *Async; // x1

  if ( (byte_4A5D0D0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_TerminalSceneComponent_SendMessageStartUpAndResume__);
    sub_1B885B0(&Method_TerminalSceneComponent__beginStartUp_b__172_0__);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&TerminalTransitionInfo_TypeInfo);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5D0D0 = 1;
  }
  if ( data
    && (methodPtr_low = LOBYTE(TerminalTransitionInfo_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (TerminalTransitionInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == TerminalTransitionInfo_TypeInfo )
      v7 = data;
    else
      v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  this->fields._TransitionInfo_k__BackingField = (struct TerminalTransitionInfo_o *)v7;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._TransitionInfo_k__BackingField,
    (int32_t)v7,
    (int32_t)method,
    v3);
  v8 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v8 = TerminalSceneComponent_TypeInfo;
  }
  UnityEngine_RenderSettings__set_ambientLight(v8->static_fields->DEFAULT_AMBIENT_LIGHT_COLOR, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 1, 32, 0LL);
  MainMenuBar__setMenuActive(1, this->fields.mUICamera, 0LL);
  TerminalSceneComponent__SetDispStandServant(this, 1, v9);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A5D11B )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5D11B = 1;
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
    if ( !byte_4A5D11C )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A5D11C = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    v11->static_fields->_IsDispDone_UIStandFigure_k__BackingField = 1;
    if ( !byte_4A5D11D )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
      byte_4A5D11D = 1;
    }
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = TerminalPramsManager_TypeInfo;
    }
    v11->static_fields->_IsDispUIStandFigure_k__BackingField = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Instance = (Il2CppObject *)TutorialFlag__Get_37688364(126, 0LL);
  if ( !MasterData_object
    || (((unsigned __int8)Instance & 1) == 0
      ? (UserServantListFromDeckIsTerminal = UserDeckMaster__GetUserServantListFromDeckIsTerminal(
                                               (UserDeckMaster_o *)MasterData_object,
                                               0LL))
      : (UserServantListFromDeckIsTerminal = UserDeckMaster__GetUserServantListFromDeckReaveHeroine(
                                               (UserDeckMaster_o *)MasterData_object,
                                               0LL)),
        this->fields.mStandSvtDatas = UserServantListFromDeckIsTerminal,
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.mStandSvtDatas,
          (int32_t)UserServantListFromDeckIsTerminal,
          v16,
          v17),
        (mStandSvtDatas = this->fields.mStandSvtDatas) == 0LL) )
  {
LABEL_45:
    sub_1B8880C(Instance, v13);
  }
  mStandSvtIdx = this->fields.mStandSvtIdx;
  if ( (unsigned int)mStandSvtIdx >= mStandSvtDatas->max_length )
    sub_1B88814(Instance, v13);
  NextStandServant = mStandSvtDatas->m_Items[mStandSvtIdx];
  if ( !NextStandServant )
    NextStandServant = TerminalSceneComponent__GetNextStandServant(this, v13);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  isSavedMemoryMode = OptionManager__isSavedMemoryMode(0LL);
  v22 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  v23 = v22;
  if ( isSavedMemoryMode )
  {
    System_Action___ctor(v22, (Il2CppObject *)this, Method_TerminalSceneComponent__beginStartUp_b__172_0__, 0LL);
    TerminalSceneComponent__SetupStandServant(this, NextStandServant, 0, v23, v24);
  }
  else
  {
    System_Action___ctor(v22, (Il2CppObject *)this, Method_TerminalSceneComponent_SendMessageStartUpAndResume__, 0LL);
    Async = TerminalSceneComponent__LoadAsync(this, NextStandServant, v23, v25);
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, Async, 0LL);
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
  int32_t v7; // w2
  int32_t v8; // w3
  Il2CppObject *v9; // x21
  TerminalPramsManager_c *v10; // x0
  ServantStatusBattleListViewItem_o *p_eventDailyPoint_k__BackingField; // x0
  int32_t monitor_high; // w21
  TerminalPramsManager_c *v13; // x0
  int64_t Time_38478060; // x21
  TerminalPramsManager_c *v15; // x0
  int32_t eventId; // w21
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct ScrTerminalListTop_o *v18; // x8
  UnityEngine_GameObject_o *mActionPanel; // x21
  TitleInfoControl_o *mTitleInfo; // x20
  System_Action_o *v21; // x22
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  System_DateTime_o v23; // 0:x0.8

  v4 = this;
  if ( (byte_4A5D0F8 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_JsonManager_Deserialize_EventDailyPoint___);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_TerminalSceneComponent__callbackEventDailyPoint_b__215_0__);
    sub_1B885B0(&StringLiteral_11058/*"REQUEST_NG"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    this = (TerminalSceneComponent_o *)sub_1B885B0(&StringLiteral_25141/*"{}"*/);
    byte_4A5D0F8 = 1;
  }
  entity = 0LL;
  if ( !result )
    goto LABEL_46;
  if ( System_String__Equals_61715348(result, (System_String_o *)StringLiteral_22055/*"ng"*/, 0LL) )
  {
    this = (TerminalSceneComponent_o *)v4->fields.myFSM;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11058/*"REQUEST_NG"*/, 0LL);
      return;
    }
LABEL_46:
    sub_1B8880C(this, result);
  }
  this = (TerminalSceneComponent_o *)System_String__Equals_61715348(result, (System_String_o *)StringLiteral_25141/*"{}"*/, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_43;
  mTerminalMap = v4->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_46;
  mWarEnt = mTerminalMap->fields.mWarEnt;
  this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_46;
  this = (TerminalSceneComponent_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !mWarEnt || !this )
    goto LABEL_46;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          mWarEnt->fields.eventId,
          (const MethodInfo_311D988 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
LABEL_43:
    this = (TerminalSceneComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !this )
      goto LABEL_46;
    MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0LL);
    ActionExtensions__Call(v4->fields.afterEventDailyPoint, 0LL);
  }
  else
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__Deserialize_object_(
           (Il2CppObject *)result,
           (const MethodInfo_2EE5DF0 *)Method_JsonManager_Deserialize_EventDailyPoint___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A59E6C )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A59E6C = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    p_eventDailyPoint_k__BackingField = (ServantStatusBattleListViewItem_o *)&v10->static_fields->_eventDailyPoint_k__BackingField;
    p_eventDailyPoint_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v9;
    sub_1B88554(p_eventDailyPoint_k__BackingField, (int32_t)v9, v7, v8);
    if ( !entity )
      goto LABEL_46;
    monitor_high = HIDWORD(entity[2].monitor);
    if ( !byte_4A5D122 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A5D122 = 1;
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
    v23.fields._dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
    Time_38478060 = NetworkManager__getTime_38478060(v23, 0LL);
    if ( !byte_4A588CC )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A588CC = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    v15->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = Time_38478060;
    eventId = mWarEnt->fields.eventId;
    if ( !byte_4A588CB )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
      byte_4A588CB = 1;
    }
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = TerminalPramsManager_TypeInfo;
    }
    v15->static_fields->_EventDailyPointEventId_k__BackingField = eventId;
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
    v18 = v4->fields.mTerminalList;
    if ( !v18 )
      goto LABEL_46;
    mActionPanel = v18->fields.mActionPanel;
    mTitleInfo = v4->fields.mTitleInfo;
    v21 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v21,
      (Il2CppObject *)v4,
      Method_TerminalSceneComponent__callbackEventDailyPoint_b__215_0__,
      0LL);
    if ( !mTitleInfo )
      goto LABEL_46;
    TitleInfoControl__EventDailyPointOpen(mTitleInfo, mActionPanel, v21, 0LL);
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
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5D0F3 & 1) == 0 )
  {
    sub_1B885B0(&Method_JsonManager_Deserialize_TopHomeInfo___);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11060/*"REQUEST_OK"*/);
    sub_1B885B0(&StringLiteral_11058/*"REQUEST_NG"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5D0F3 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22055/*"ng"*/, 0LL) )
  {
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)StringLiteral_11058/*"REQUEST_NG"*/, 0LL);
      return;
    }
LABEL_11:
    sub_1B8880C(myFSM, v5);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = JsonManager__Deserialize_object_(
            (Il2CppObject *)result,
            (const MethodInfo_2EE5DF0 *)Method_JsonManager_Deserialize_TopHomeInfo___);
  if ( !myFSM )
    goto LABEL_11;
  TopHomeRequest__setRecentRefreshTime(*((_QWORD *)myFSM + 2), 0LL);
  MainMenuBar__UpdateNoticeNumber(0LL);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)StringLiteral_11060/*"REQUEST_OK"*/, 0LL);
  afterTopLogin = this->fields.afterTopLogin;
  this->fields.isTopLoginBusy = 0;
  ActionExtensions__Call(afterTopLogin, 0LL);
  this->fields.afterTopLogin = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.afterTopLogin, 0, v8, v9);
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
  System_Converter_TInput__TOutput__o *_9__208_0; // x21
  Il2CppObject *v14; // x22
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_array *v18; // x0
  System_String_o *v19; // x0
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x0
  System_Collections_Generic_List_int__o *v21; // x19
  TerminalSceneComponent___c_c *v22; // x8
  System_Converter_TInput__TOutput__o *_9__208_1; // x20
  Il2CppObject *v24; // x21
  struct TerminalSceneComponent___c_StaticFields *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_array *v28; // x0
  System_String_o *v29; // x0

  if ( (byte_4A5D0F2 & 1) == 0 )
  {
    sub_1B885B0(&System_Converter_int__string__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1B885B0(&Method_JsonManager_Deserialize_CommonUI_LoginResultData___);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ConvertAll_string___);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1B885B0(&Method_NetworkManager_getRequest_TopHomeRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_TerminalSceneComponent_callbackTopHome__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__callbackTopLogin_b__208_0__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__callbackTopLogin_b__208_1__);
    sub_1B885B0(&TerminalSceneComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_19627/*"freeShopIds"*/);
    sub_1B885B0(&StringLiteral_11060/*"REQUEST_OK"*/);
    sub_1B885B0(&StringLiteral_22918/*"returnRarePriShopIds"*/);
    sub_1B885B0(&StringLiteral_868/*","*/);
    byte_4A5D0F2 = 1;
  }
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_callbackTopHome__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_TopHomeRequest___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A58230 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58230 = 1;
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
    PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11060/*"REQUEST_OK"*/, 0LL);
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
                              (const MethodInfo_2EE5DF0 *)Method_JsonManager_Deserialize_CommonUI_LoginResultData___);
  if ( !myFSM )
LABEL_45:
    sub_1B8880C(myFSM, v6);
  v9 = myFSM;
  monitor = (System_Collections_Generic_IEnumerable_TSource__o *)myFSM[2].monitor;
  if ( monitor )
  {
    myFSM = (PlayMakerFSM_o *)System_Linq_Enumerable__ToList_int_(
                                monitor,
                                (const MethodInfo_2EBBD90 *)Method_System_Linq_Enumerable_ToList_int___);
    v11 = (System_Collections_Generic_List_int__o *)myFSM;
    v12 = TerminalSceneComponent___c_TypeInfo;
    if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v12 = TerminalSceneComponent___c_TypeInfo;
    }
    _9__208_0 = (System_Converter_TInput__TOutput__o *)v12->static_fields->__9__208_0;
    if ( !_9__208_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = TerminalSceneComponent___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v12->static_fields->__9;
      _9__208_0 = (System_Converter_TInput__TOutput__o *)sub_1B887FC(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(
        _9__208_0,
        v14,
        Method_TerminalSceneComponent___c__callbackTopLogin_b__208_0__,
        0LL);
      static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
      static_fields->__9__208_0 = (struct System_Converter_int__string__o *)_9__208_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__208_0, (int32_t)_9__208_0, v16, v17);
    }
    if ( !v11 )
      goto LABEL_45;
    myFSM = (PlayMakerFSM_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                v11,
                                (System_Converter_T__TOutput__o *)_9__208_0,
                                (const MethodInfo_2DB30D8 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !myFSM )
      goto LABEL_45;
    v18 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)myFSM,
                                   (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
    v19 = System_String__Join((System_String_o *)StringLiteral_868/*","*/, v18, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_19627/*"freeShopIds"*/, v19, 0LL);
  }
  klass = (System_Collections_Generic_IEnumerable_TSource__o *)v9[2].klass;
  if ( klass )
  {
    myFSM = (PlayMakerFSM_o *)System_Linq_Enumerable__ToList_int_(
                                klass,
                                (const MethodInfo_2EBBD90 *)Method_System_Linq_Enumerable_ToList_int___);
    v21 = (System_Collections_Generic_List_int__o *)myFSM;
    v22 = TerminalSceneComponent___c_TypeInfo;
    if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v22 = TerminalSceneComponent___c_TypeInfo;
    }
    _9__208_1 = (System_Converter_TInput__TOutput__o *)v22->static_fields->__9__208_1;
    if ( !_9__208_1 )
    {
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = TerminalSceneComponent___c_TypeInfo;
      }
      v24 = (Il2CppObject *)v22->static_fields->__9;
      _9__208_1 = (System_Converter_TInput__TOutput__o *)sub_1B887FC(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(
        _9__208_1,
        v24,
        Method_TerminalSceneComponent___c__callbackTopLogin_b__208_1__,
        0LL);
      v25 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v25->__9__208_1 = (struct System_Converter_int__string__o *)_9__208_1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v25->__9__208_1, (int32_t)_9__208_1, v26, v27);
    }
    if ( v21 )
    {
      myFSM = (PlayMakerFSM_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                  v21,
                                  (System_Converter_T__TOutput__o *)_9__208_1,
                                  (const MethodInfo_2DB30D8 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
      if ( myFSM )
      {
        v28 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                       (System_Collections_Generic_List_object__o *)myFSM,
                                       (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
        v29 = System_String__Join((System_String_o *)StringLiteral_868/*","*/, v28, 0LL);
        UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_22918/*"returnRarePriShopIds"*/, v29, 0LL);
        goto LABEL_44;
      }
    }
    goto LABEL_45;
  }
LABEL_44:
  UnityEngine_PlayerPrefs__Save(0LL);
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
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A5D0E0 & 1) == 0 )
  {
    sub_1B885B0(&TerminalSceneComponent__coFadein_WorldDisp_d__190_TypeInfo);
    byte_4A5D0E0 = 1;
  }
  v9 = sub_1B887FC(TerminalSceneComponent__coFadein_WorldDisp_d__190_TypeInfo);
  TerminalSceneComponent__coFadein_WorldDisp_d__190___ctor(
    (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)v9,
    0,
    0LL);
  if ( !v9 )
    sub_1B8880C(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)this, v12, v13);
  *(float *)(v9 + 64) = fadeTime;
  *(_QWORD *)(v9 + 40) = endAct;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 40), (int32_t)endAct, v14, v15);
  *(_BYTE *)(v9 + 48) = isExecuteUnusedAssets;
  return (System_Collections_IEnumerator_o *)v9;
}


void __fastcall TerminalSceneComponent__deleteQuestMovie(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int64_t Time; // x20
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *EntityList_object; // x19
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
  __int64 v17; // x0
  QuestPhaseEntity_c *v18; // x1
  QuestPhaseEntity_o *v19; // x22
  __int64 methodPtr_low; // x9
  QuestPhaseMaster_c *v21; // x0
  System_String_o *ScriptStr; // x0
  __int64 v23; // x1
  System_String_o *v24; // x23
  Il2CppObject *Entity; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0

  if ( (byte_4A5D0F6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_getEntityList_QuestPhaseMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&QuestPhaseEntity_TypeInfo);
    sub_1B885B0(&QuestPhaseMaster_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D0F6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (EntityList_object = (System_Collections_ObjectModel_Collection_T__o *)DataManager__getEntityList_object_(
                                                                                (DataManager_o *)Instance,
                                                                                (const MethodInfo_2E7FB04 *)Method_DataManager_getEntityList_QuestPhaseMaster___),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___),
        !EntityList_object) )
  {
    sub_1B8880C(Instance, v4);
  }
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 EntityList_object,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v7);
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
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_20;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_20:
      v16 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8));
    v19 = (QuestPhaseEntity_o *)v17;
    if ( v17 )
    {
      v18 = QuestPhaseEntity_TypeInfo;
      methodPtr_low = LOBYTE(QuestPhaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v17 + 304LL) < (unsigned int)methodPtr_low
        || *(QuestPhaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v17 + 200LL) + 8 * methodPtr_low - 8) != QuestPhaseEntity_TypeInfo )
      {
        sub_1B88ACC(v17);
LABEL_41:
        sub_1B8880C(v21, v18);
      }
    }
    v21 = QuestPhaseMaster_TypeInfo;
    if ( !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo);
    if ( !v19 )
      goto LABEL_41;
    ScriptStr = QuestPhaseEntity__getScriptStr(
                  v19,
                  QuestPhaseMaster_TypeInfo->static_fields->MOVIE_QUEST_SCRIPT_STR,
                  0LL,
                  0LL);
    v24 = ScriptStr;
    if ( ScriptStr )
    {
      if ( !v6 )
        sub_1B8880C(ScriptStr, v23);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v6,
                 v19->fields.questId,
                 (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( Time >= QuestEntity__getClosedAt((QuestEntity_o *)Entity, 0LL) )
          MovieFileMerge__Delete(v24, 0LL);
      }
    }
  }
  v26 = Enumerator->klass;
  v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_37;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_37:
    v29 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
}


void __fastcall TerminalSceneComponent__fadeoutBgm(
        TerminalSceneComponent_o *this,
        float fadeoutTime,
        const MethodInfo *method)
{
  if ( (byte_4A5D0EF & 1) == 0 )
  {
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A5D0EF = 1;
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

  if ( (byte_4A5D0C6 & 1) == 0 )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5D0C6 = 1;
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

  if ( (byte_4A5D0C9 & 1) == 0 )
  {
    sub_1B885B0(&FSUtility_TypeInfo);
    byte_4A5D0C9 = 1;
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

  if ( (byte_4A5D0C8 & 1) == 0 )
  {
    sub_1B885B0(&FSUtility_TypeInfo);
    byte_4A5D0C8 = 1;
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

  if ( (byte_4A5D0CA & 1) == 0 )
  {
    sub_1B885B0(&FSUtility_TypeInfo);
    byte_4A5D0CA = 1;
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

  if ( (byte_4A5D0CB & 1) == 0 )
  {
    sub_1B885B0(&FSUtility_TypeInfo);
    byte_4A5D0CB = 1;
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

  if ( (byte_4A5D0D5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1B885B0(&Method_TerminalSceneComponent__loadCommonBG_b__177_0__);
    byte_4A5D0D5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 4, 0LL) )
  {
    TerminalSceneComponent__loadOutGameAtlas(this, v5);
  }
  else
  {
    v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_TerminalSceneComponent__loadCommonBG_b__177_0__, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadUISkin(v6, 4, 1, 0LL);
  }
}


void __fastcall TerminalSceneComponent__loadOutGameAtlas(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4A5D0D6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_TerminalSceneComponent__loadOutGameAtlas_b__178_0__);
    byte_4A5D0D6 = 1;
  }
  v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_TerminalSceneComponent__loadOutGameAtlas_b__178_0__, 0LL);
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

  if ( (byte_4A5D0D7 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1B885B0(&Method_TerminalSceneComponent_SendMessageStartUpAndResume__);
    byte_4A5D0D7 = 1;
  }
  TransitionInfo_k__BackingField = this->fields._TransitionInfo_k__BackingField;
  if ( TransitionInfo_k__BackingField
    && !System_String__IsNullOrEmpty(TransitionInfo_k__BackingField->fields.voiceAssetName, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v6 = this->fields._TransitionInfo_k__BackingField;
    if ( !v6
      || (voiceAssetName = v6->fields.voiceAssetName,
          v8 = (SoundManager_o *)Instance,
          v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
          System_Action___ctor(
            v9,
            (Il2CppObject *)this,
            Method_TerminalSceneComponent_SendMessageStartUpAndResume__,
            0LL),
          !v8) )
    {
      sub_1B8880C(Instance, v5);
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

  if ( (byte_4A5D102 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_5742/*"EV_SCENE_STATUS_INIT"*/);
    sub_1B885B0(&StringLiteral_5743/*"EV_SCENE_STATUS_RESUME"*/);
    byte_4A5D102 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A5835C )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5835C = 1;
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
      v6 = &StringLiteral_5742/*"EV_SCENE_STATUS_INIT"*/;
      goto LABEL_15;
    }
LABEL_16:
    sub_1B8880C(myFSM, method);
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_16;
  v6 = &StringLiteral_5743/*"EV_SCENE_STATUS_RESUME"*/;
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
    sub_1B8880C(0LL, sEventStr);
  PlayMakerFSM__SendEvent(myFSM, sEventStr, 0LL);
}


void __fastcall TerminalSceneComponent__mfsmfInitTable(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *mTerminalMap; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_4A5D0F5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&Method_TerminalSceneComponent__mfsmfInitTable_b__212_0__);
    byte_4A5D0F5 = 1;
  }
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__ReleaseMap(mTerminalMap, 0, 0LL), (mTerminalList = this->fields.mTerminalList) == 0LL)
    || (mTerminalMap = (ScrTerminalMap_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0LL
    || (ListViewManager__DestroyList((ListViewManager_o *)mTerminalMap, 0LL),
        Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__),
        v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_TerminalSceneComponent__mfsmfInitTable_b__212_0__, 0LL),
        !Instance) )
  {
    sub_1B8880C(mTerminalMap, method);
  }
  v7 = QuestTree__Init((QuestTree_o *)Instance, v6, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
}


void __fastcall TerminalSceneComponent__playBgm(
        TerminalSceneComponent_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *mPlayBgmName; // x19

  if ( (byte_4A5D0EC & 1) == 0 )
  {
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A5D0EC = 1;
  }
  if ( System_String__IsNullOrEmpty(bgmName, 0LL) )
  {
    TerminalSceneComponent__playDefaultBgm(this, v5);
  }
  else
  {
    this->fields.mPlayBgmName = bgmName;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mPlayBgmName, (int32_t)bgmName, v6, v7);
    mPlayBgmName = this->fields.mPlayBgmName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm(mPlayBgmName, 0LL);
  }
}


void __fastcall TerminalSceneComponent__playBgm_42100076(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  System_String_o *mPlayBgmName; // x19

  if ( (byte_4A5D0EE & 1) == 0 )
  {
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A5D0EE = 1;
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

  if ( (byte_4A5D0ED & 1) == 0 )
  {
    sub_1B885B0(&BgmManager_TypeInfo);
    byte_4A5D0ED = 1;
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
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *MasterData_object; // x0
  TerminalOverwriteMaster_o *v13; // x20
  bool OverwriteSkinName; // w0
  TerminalSceneComponent_c *v15; // x8
  bool v16; // w22
  System_String_o *OVERWRITE_COMMON_BG_TYPE1_KEY; // x21
  System_String_o *Empty; // x1
  bool v19; // w0
  TerminalSceneComponent_c *v20; // x8
  bool v21; // w21
  System_String_o *OVERWRITE_COMMON_BG_TYPE2_KEY; // x20
  System_String_o *v23; // x1
  System_String_o *str1; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *skinName; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A5D0DA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1B885B0(&SoundManager_TypeInfo);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_14773/*"UISkin/"*/);
    byte_4A5D0DA = 1;
  }
  skinName = 0LL;
  str1 = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  AutomatedAction__TerminateMissionAction((AutomatedAction_o *)Instance, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A5D11E )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5D11E = 1;
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
    if ( !byte_4A58619 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A58619 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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
      sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)Instance + 40), 0, v10, v11);
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
    sub_1B8880C(Instance, v4);
  }
LABEL_34:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
  if ( MasterData_object )
  {
    v13 = (TerminalOverwriteMaster_o *)MasterData_object;
    OverwriteSkinName = TerminalOverwriteMaster__TryGetOverwriteSkinName(
                          (TerminalOverwriteMaster_o *)MasterData_object,
                          2,
                          &skinName,
                          0LL);
    v15 = TerminalSceneComponent_TypeInfo;
    v16 = OverwriteSkinName;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v15 = TerminalSceneComponent_TypeInfo;
    }
    OVERWRITE_COMMON_BG_TYPE1_KEY = v15->static_fields->OVERWRITE_COMMON_BG_TYPE1_KEY;
    if ( v16 )
      Empty = System_String__Concat_61707032((System_String_o *)StringLiteral_14773/*"UISkin/"*/, skinName, 0LL);
    else
      Empty = string_TypeInfo->static_fields->Empty;
    UnityEngine_PlayerPrefs__SetString(OVERWRITE_COMMON_BG_TYPE1_KEY, Empty, 0LL);
    v19 = TerminalOverwriteMaster__TryGetOverwriteSkinName(v13, 4, &str1, 0LL);
    v20 = TerminalSceneComponent_TypeInfo;
    v21 = v19;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v20 = TerminalSceneComponent_TypeInfo;
    }
    OVERWRITE_COMMON_BG_TYPE2_KEY = v20->static_fields->OVERWRITE_COMMON_BG_TYPE2_KEY;
    if ( v21 )
      v23 = System_String__Concat_61707032((System_String_o *)StringLiteral_14773/*"UISkin/"*/, str1, 0LL);
    else
      v23 = string_TypeInfo->static_fields->Empty;
    UnityEngine_PlayerPrefs__SetString(OVERWRITE_COMMON_BG_TYPE2_KEY, v23, 0LL);
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

  if ( (byte_4A5D0F7 & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_getRequest_EventDailyPointRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1B885B0(&Method_TerminalSceneComponent_callbackEventDailyPoint__);
    byte_4A5D0F7 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_callbackEventDailyPoint__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               v7,
               (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_EventDailyPointRequest___);
  if ( !Instance )
LABEL_8:
    sub_1B8880C(Instance, v6);
  EventDailyPointRequest__beginRequest((EventDailyPointRequest_o *)Instance, eventId, 0LL);
}


void __fastcall TerminalSceneComponent__requestTopHome(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  PlayMakerFSM_o *myFSM; // x0
  Il2CppObject *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v7; // x21

  if ( (byte_4A5D0F1 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_LoginCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_TerminalSceneComponent_callbackTopLogin__);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    sub_1B885B0(&StringLiteral_11060/*"REQUEST_OK"*/);
    byte_4A5D0F1 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_37688364(102, 0LL) )
    goto LABEL_13;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A58371 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58371 = 1;
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
      PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11060/*"REQUEST_OK"*/, 0LL);
      this->fields.isTopLoginBusy = 0;
      return;
    }
LABEL_17:
    sub_1B8880C(myFSM, v3);
  }
  this->fields.isTopLoginBusy = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v7 = (NetworkManager_LoginCallbackFunc_o *)sub_1B887FC(NetworkManager_LoginCallbackFunc_TypeInfo);
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

  this->fields._TransitionInfo_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._TransitionInfo_k__BackingField,
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19D0BF4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D0BAC;
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
  if ( (byte_4A5D213 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A5D213 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall TerminalSceneComponent_PlayChapterStartCallback__EndInvoke(
        TerminalSceneComponent_PlayChapterStartCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  TerminalSceneComponent_o **v9; // x20
  QuestBoardListViewObject_o *FocusQuest; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8
  struct UIScrollView_o *scrollView; // x8
  struct UIProgressBar_o *verticalScrollBar; // x23
  System_String_o *v17; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v19; // x0
  CommonUI_o *v20; // x22
  UnityEngine_Vector2_o TUTORIAL_QUEST_ARROW_POS_FS; // kr00_8
  float v22; // s0
  float v23; // s1
  float v24; // s2
  float v25; // s3
  TerminalSceneComponent_o *v26; // x8
  float x; // s14
  float y; // s15
  float v29; // s10
  float v30; // s11
  float v31; // s12
  float v32; // s13
  System_Action_o *v33; // x23
  struct ScrTerminalListTop_o *v34; // x21
  System_Action_o *v35; // x20
  int32_t v36; // w2
  int32_t v37; // w3
  UnityEngine_Rect_o v38; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4A5D216 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_GameObjectExtensions_RemoveComponent_Collider___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__0__);
    sub_1B885B0(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__1__);
    sub_1B885B0(&TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_TypeInfo);
    sub_1B885B0(&StringLiteral_13508/*"TUTORIAL_MESSAGE_TERMINAL_QUEST1"*/);
    byte_4A5D216 = 1;
  }
  v4 = sub_1B887FC(TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_22;
  *(_QWORD *)(v4 + 16) = that;
  v9 = (TerminalSceneComponent_o **)(v4 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 16), (int32_t)that, v7, v8);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_22;
  mFG = *(TerminalSceneComponent_o **)(*(_QWORD *)(v4 + 16) + 256LL);
  if ( !mFG )
    goto LABEL_22;
  FocusQuest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mFG, 0LL);
  *(_QWORD *)(v4 + 24) = FocusQuest;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 24), (int32_t)FocusQuest, v11, v12);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  mFG = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13508/*"TUTORIAL_MESSAGE_TERMINAL_QUEST1"*/, 0LL);
  if ( !*v9 )
    goto LABEL_22;
  mTerminalList = (*v9)->fields.mTerminalList;
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
  v17 = (System_String_o *)mFG;
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mFG;
  if ( !mFG )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0LL);
  GameObjectExtensions__RemoveComponent_object_(
    gameObject,
    (const MethodInfo_2ED085C *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mBG;
  if ( !mFG )
    goto LABEL_22;
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0LL);
  GameObjectExtensions__RemoveComponent_object_(
    v19,
    (const MethodInfo_2ED085C *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v9 )
    goto LABEL_22;
  v20 = (CommonUI_o *)mFG;
  TUTORIAL_QUEST_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(*v9, 0LL);
  mFG = *v9;
  if ( !*v9 )
    goto LABEL_22;
  *(UnityEngine_Rect_o *)&v22 = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(mFG, 0LL);
  v26 = *v9;
  if ( !*v9 )
    goto LABEL_22;
  x = v26->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x;
  y = v26->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.y;
  v29 = v22;
  v30 = v23;
  v31 = v24;
  v32 = v25;
  v33 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v20 )
    goto LABEL_22;
  v38.fields.m_XMin = v29;
  v38.fields.m_YMin = v30;
  v38.fields.m_Width = v31;
  v38.fields.m_Height = v32;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v20,
    v17,
    TUTORIAL_QUEST_ARROW_POS_FS,
    v38,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v33,
    0LL);
  if ( !*v9
    || (v34 = (*v9)->fields.mTerminalList,
        v35 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v35,
          (Il2CppObject *)v4,
          Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0LL),
        !v34) )
  {
LABEL_22:
    sub_1B8880C(mFG, v6);
  }
  v34->fields.mQuestClickAct = v35;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v34->fields.mQuestClickAct, (int32_t)v35, v36, v37);
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
  if ( (byte_4A5D217 & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
    byte_4A5D217 = 1;
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
                                                                                            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0LL )
  {
LABEL_12:
    sub_1B8880C(this, method);
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
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5D218 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__2__);
    byte_4A5D218 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8);
  }
  if ( !v6 )
    sub_1B8880C(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_30519592(v6, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1B8880C(0LL, method);
  TerminalSceneComponent__SetState(that, 0, 0LL);
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
  int32_t v8; // w2
  int32_t v9; // w3
  SrcSpotBasePrefab_o *FocusSpot; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x21
  Il2CppObject *Instance; // x22
  UnityEngine_Vector2_o TUTORIAL_SPOT_ARROW_POS1_FS; // kr00_8
  float x; // s14
  float y; // s15
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v22; // x23
  struct ScrTerminalMap_o *v23; // x21
  System_Action_o *v24; // x19
  int32_t v25; // w2
  int32_t v26; // w3
  UnityEngine_Rect_o TUTORIAL_SPOT_ARROW_RECT1_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v28; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4A5D214 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__0__);
    sub_1B885B0(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__1__);
    sub_1B885B0(&TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_TypeInfo);
    sub_1B885B0(&StringLiteral_13511/*"TUTORIAL_MESSAGE_TERMINAL_SPOT1"*/);
    byte_4A5D214 = 1;
  }
  v5 = sub_1B887FC(TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_12;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_12;
  FocusSpot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0LL);
  *(_QWORD *)(v5 + 16) = FocusSpot;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)FocusSpot, v11, v12);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_13511/*"TUTORIAL_MESSAGE_TERMINAL_SPOT1"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  TUTORIAL_SPOT_ARROW_POS1_FS = TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_POS1_FS(that, 0LL);
  TUTORIAL_SPOT_ARROW_RECT1_FS = TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_RECT1_FS(that, 0LL);
  x = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x;
  y = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.y;
  m_XMin = TUTORIAL_SPOT_ARROW_RECT1_FS.fields.m_XMin;
  m_YMin = TUTORIAL_SPOT_ARROW_RECT1_FS.fields.m_YMin;
  m_Width = TUTORIAL_SPOT_ARROW_RECT1_FS.fields.m_Width;
  m_Height = TUTORIAL_SPOT_ARROW_RECT1_FS.fields.m_Height;
  v22 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_12;
  v28.fields.m_XMin = m_XMin;
  v28.fields.m_YMin = m_YMin;
  v28.fields.m_Width = m_Width;
  v28.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    (CommonUI_o *)Instance,
    v13,
    TUTORIAL_SPOT_ARROW_POS1_FS,
    v28,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v22,
    0LL);
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__SetMapCamera_TutorialFocusSpot(mTerminalMap, *(SrcSpotBasePrefab_o **)(v5 + 16), 0.5, 0LL),
        v23 = that->fields.mTerminalMap,
        v24 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v24,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0LL),
        !v23) )
  {
LABEL_12:
    sub_1B8880C(mTerminalMap, v7);
  }
  v23->fields.mSpotClickAct = v24;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v23->fields.mSpotClickAct, (int32_t)v24, v25, v26);
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
      sub_1B8880C(that, that);
    }
    if ( mQuestBoardListViewManager->fields.initMode == 1 )
      TerminalSceneComponent__SetState(that, 2, 0LL);
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
    sub_1B8880C(0LL, method);
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
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5D215 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__2__);
    byte_4A5D215 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8);
  }
  if ( !v6 )
    sub_1B8880C(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_30519592(v6, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial1_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(this, method);
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
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  TerminalSceneComponent_o **v9; // x20
  QuestBoardListViewObject_o *FocusQuest; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8
  struct UIScrollView_o *scrollView; // x8
  struct UIProgressBar_o *verticalScrollBar; // x23
  System_String_o *v17; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v19; // x0
  CommonUI_o *v20; // x22
  UnityEngine_Vector2_o TUTORIAL_QUEST_ARROW_POS_FS; // kr00_8
  float v22; // s0
  float v23; // s1
  float v24; // s2
  float v25; // s3
  TerminalSceneComponent_o *v26; // x8
  float x; // s14
  float y; // s15
  float v29; // s10
  float v30; // s11
  float v31; // s12
  float v32; // s13
  System_Action_o *v33; // x23
  struct ScrTerminalListTop_o *v34; // x21
  System_Action_o *v35; // x20
  int32_t v36; // w2
  int32_t v37; // w3
  UnityEngine_Rect_o v38; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4A5D21B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_GameObjectExtensions_RemoveComponent_Collider___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__0__);
    sub_1B885B0(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__1__);
    sub_1B885B0(&TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_TypeInfo);
    sub_1B885B0(&StringLiteral_13509/*"TUTORIAL_MESSAGE_TERMINAL_QUEST2"*/);
    byte_4A5D21B = 1;
  }
  v4 = sub_1B887FC(TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_22;
  *(_QWORD *)(v4 + 16) = that;
  v9 = (TerminalSceneComponent_o **)(v4 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 16), (int32_t)that, v7, v8);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_22;
  mFG = *(TerminalSceneComponent_o **)(*(_QWORD *)(v4 + 16) + 256LL);
  if ( !mFG )
    goto LABEL_22;
  FocusQuest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mFG, 0LL);
  *(_QWORD *)(v4 + 24) = FocusQuest;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 24), (int32_t)FocusQuest, v11, v12);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  mFG = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13509/*"TUTORIAL_MESSAGE_TERMINAL_QUEST2"*/, 0LL);
  if ( !*v9 )
    goto LABEL_22;
  mTerminalList = (*v9)->fields.mTerminalList;
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
  v17 = (System_String_o *)mFG;
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mFG;
  if ( !mFG )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0LL);
  GameObjectExtensions__RemoveComponent_object_(
    gameObject,
    (const MethodInfo_2ED085C *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mBG;
  if ( !mFG )
    goto LABEL_22;
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0LL);
  GameObjectExtensions__RemoveComponent_object_(
    v19,
    (const MethodInfo_2ED085C *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v9 )
    goto LABEL_22;
  v20 = (CommonUI_o *)mFG;
  TUTORIAL_QUEST_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(*v9, 0LL);
  mFG = *v9;
  if ( !*v9 )
    goto LABEL_22;
  *(UnityEngine_Rect_o *)&v22 = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(mFG, 0LL);
  v26 = *v9;
  if ( !*v9 )
    goto LABEL_22;
  x = v26->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x;
  y = v26->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.y;
  v29 = v22;
  v30 = v23;
  v31 = v24;
  v32 = v25;
  v33 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v20 )
    goto LABEL_22;
  v38.fields.m_XMin = v29;
  v38.fields.m_YMin = v30;
  v38.fields.m_Width = v31;
  v38.fields.m_Height = v32;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v20,
    v17,
    TUTORIAL_QUEST_ARROW_POS_FS,
    v38,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v33,
    0LL);
  if ( !*v9
    || (v34 = (*v9)->fields.mTerminalList,
        v35 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v35,
          (Il2CppObject *)v4,
          Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0LL),
        !v34) )
  {
LABEL_22:
    sub_1B8880C(mFG, v6);
  }
  v34->fields.mQuestClickAct = v35;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v34->fields.mQuestClickAct, (int32_t)v35, v36, v37);
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
  if ( (byte_4A5D21C & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
    byte_4A5D21C = 1;
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
                                                                                            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0LL )
  {
LABEL_12:
    sub_1B8880C(this, method);
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
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5D21D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__2__);
    byte_4A5D21D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8);
  }
  if ( !v6 )
    sub_1B8880C(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_30519592(v6, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1B8880C(0LL, method);
  TerminalSceneComponent__SetState(that, 0, 0LL);
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
  int32_t v8; // w2
  int32_t v9; // w3
  SrcSpotBasePrefab_o *FocusSpot; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x21
  Il2CppObject *Instance; // x22
  UnityEngine_Vector2_o TUTORIAL_SPOT_ARROW_POS2_FS; // kr00_8
  float x; // s14
  float y; // s15
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v22; // x23
  struct ScrTerminalMap_o *v23; // x21
  System_Action_o *v24; // x19
  int32_t v25; // w2
  int32_t v26; // w3
  UnityEngine_Rect_o TUTORIAL_SPOT_ARROW_RECT2_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v28; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4A5D219 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__0__);
    sub_1B885B0(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__1__);
    sub_1B885B0(&TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_TypeInfo);
    sub_1B885B0(&StringLiteral_13512/*"TUTORIAL_MESSAGE_TERMINAL_SPOT2"*/);
    byte_4A5D219 = 1;
  }
  v5 = sub_1B887FC(TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_12;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_12;
  FocusSpot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0LL);
  *(_QWORD *)(v5 + 16) = FocusSpot;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)FocusSpot, v11, v12);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_13512/*"TUTORIAL_MESSAGE_TERMINAL_SPOT2"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  TUTORIAL_SPOT_ARROW_POS2_FS = TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_POS2_FS(that, 0LL);
  TUTORIAL_SPOT_ARROW_RECT2_FS = TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_RECT2_FS(that, 0LL);
  x = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x;
  y = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.y;
  m_XMin = TUTORIAL_SPOT_ARROW_RECT2_FS.fields.m_XMin;
  m_YMin = TUTORIAL_SPOT_ARROW_RECT2_FS.fields.m_YMin;
  m_Width = TUTORIAL_SPOT_ARROW_RECT2_FS.fields.m_Width;
  m_Height = TUTORIAL_SPOT_ARROW_RECT2_FS.fields.m_Height;
  v22 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_12;
  v28.fields.m_XMin = m_XMin;
  v28.fields.m_YMin = m_YMin;
  v28.fields.m_Width = m_Width;
  v28.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    (CommonUI_o *)Instance,
    v13,
    TUTORIAL_SPOT_ARROW_POS2_FS,
    v28,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v22,
    0LL);
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__SetMapCamera_TutorialFocusSpot(mTerminalMap, *(SrcSpotBasePrefab_o **)(v5 + 16), 0.5, 0LL),
        v23 = that->fields.mTerminalMap,
        v24 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v24,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0LL),
        !v23) )
  {
LABEL_12:
    sub_1B8880C(mTerminalMap, v7);
  }
  v23->fields.mSpotClickAct = v24;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v23->fields.mSpotClickAct, (int32_t)v24, v25, v26);
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
      sub_1B8880C(that, that);
    }
    if ( mQuestBoardListViewManager->fields.initMode == 1 )
      TerminalSceneComponent__SetState(that, 4, 0LL);
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
    sub_1B8880C(0LL, method);
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
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5D21A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__2__);
    byte_4A5D21A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8);
  }
  if ( !v6 )
    sub_1B8880C(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_30519592(v6, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial2_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(this, method);
  _4__this->fields.mIsGoNext = 1;
}


void __fastcall TerminalSceneComponent_StateTutorial3_GachaArrow___ctor(
        TerminalSceneComponent_StateTutorial3_GachaArrow_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent_StateTutorial3_GachaArrow__begin(
        TerminalSceneComponent_StateTutorial3_GachaArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x19
  TerminalSceneComponent_o *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  TerminalSceneComponent_o **v9; // x22
  System_String_o *v10; // x20
  CommonUI_o *v11; // x21
  UnityEngine_Vector2_o TUTORIAL_GACHA_ARROW_POS_FS; // kr00_8
  float v13; // s0
  float v14; // s1
  float v15; // s2
  float v16; // s3
  TerminalSceneComponent_o *v17; // x8
  float x; // s14
  float y; // s15
  float v20; // s10
  float v21; // s11
  float v22; // s12
  float v23; // s13
  System_Action_o *v24; // x22
  Il2CppObject *v25; // x23
  struct TerminalSceneComponent_StateTutorial3_GachaArrow___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_Action_o *v29; // x20
  UnityEngine_Rect_o v30; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4A5D221 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__begin_b__0_0__);
    sub_1B885B0(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__1__);
    sub_1B885B0(&TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo);
    sub_1B885B0(&StringLiteral_13506/*"TUTORIAL_MESSAGE_TERMINAL_GACHA"*/);
    byte_4A5D221 = 1;
  }
  v4 = sub_1B887FC(TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_17;
  *(_QWORD *)(v4 + 16) = that;
  v9 = (TerminalSceneComponent_o **)(v4 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 16), (int32_t)that, v7, v8);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_13506/*"TUTORIAL_MESSAGE_TERMINAL_GACHA"*/, 0LL);
  Instance = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v9 )
    goto LABEL_17;
  v11 = (CommonUI_o *)Instance;
  TUTORIAL_GACHA_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_GACHA_ARROW_POS_FS(*v9, 0LL);
  Instance = *v9;
  if ( !*v9 )
    goto LABEL_17;
  *(UnityEngine_Rect_o *)&v13 = TerminalSceneComponent__get_TUTORIAL_GACHA_ARROW_RECT_FS(Instance, 0LL);
  v17 = *v9;
  if ( !*v9 )
    goto LABEL_17;
  x = v17->fields.TUTORIAL_MENU_MESSAGE_POS.fields.x;
  y = v17->fields.TUTORIAL_MENU_MESSAGE_POS.fields.y;
  v20 = v13;
  v21 = v14;
  Instance = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo;
  v22 = v15;
  v23 = v16;
  if ( !TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo);
    Instance = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo;
  }
  v24 = *(System_Action_o **)(*(_QWORD *)&Instance->fields.TUTORIAL_MENU_ARROW_POS2 + 8LL);
  if ( !v24 )
  {
    if ( !LODWORD(Instance->fields.OnResumeFromChapterStart) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo;
    }
    v25 = **(Il2CppObject ***)&Instance->fields.TUTORIAL_MENU_ARROW_POS2;
    v24 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v24, v25, Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__begin_b__0_0__, 0LL);
    static_fields = TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = v24;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)v24, v27, v28);
  }
  if ( !v11 )
LABEL_17:
    sub_1B8880C(Instance, v6);
  v30.fields.m_XMin = v20;
  v30.fields.m_YMin = v21;
  v30.fields.m_Width = v22;
  v30.fields.m_Height = v23;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v11,
    v10,
    TUTORIAL_GACHA_ARROW_POS_FS,
    v30,
    0.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v24,
    0LL);
  v29 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__1__,
    0LL);
  MainMenuBar__SetDispBtnAct(2, v29, 0LL);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5D222 & 1) == 0 )
  {
    sub_1B885B0(&TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo);
    byte_4A5D222 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial3_GachaArrow___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5D223 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    sub_1B885B0(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__2__);
    byte_4A5D223 = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress(1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8);
  }
  if ( !v6 )
    sub_1B8880C(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_30519592(v6, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1B8880C(0LL, method);
  TerminalSceneComponent__SetState(that, 0, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial3_MenuArrow___ctor(
        TerminalSceneComponent_StateTutorial3_MenuArrow_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent_StateTutorial3_MenuArrow__begin(
        TerminalSceneComponent_StateTutorial3_MenuArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x19
  TerminalSceneComponent_o *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  TerminalSceneComponent_o **v9; // x22
  System_String_o *v10; // x20
  CommonUI_o *v11; // x21
  UnityEngine_Vector2_o TUTORIAL_MENU_ARROW_POS_FS; // kr00_8
  float v13; // s0
  float v14; // s1
  float v15; // s2
  float v16; // s3
  TerminalSceneComponent_o *v17; // x8
  float x; // s14
  float y; // s15
  float v20; // s10
  float v21; // s11
  float v22; // s12
  float v23; // s13
  System_Action_o *v24; // x22
  Il2CppObject *v25; // x23
  struct TerminalSceneComponent_StateTutorial3_MenuArrow___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_Action_o *v29; // x20
  UnityEngine_Rect_o v30; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4A5D21E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__begin_b__0_0__);
    sub_1B885B0(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__1__);
    sub_1B885B0(&TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo);
    sub_1B885B0(&StringLiteral_13507/*"TUTORIAL_MESSAGE_TERMINAL_MENU"*/);
    byte_4A5D21E = 1;
  }
  v4 = sub_1B887FC(TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_17;
  *(_QWORD *)(v4 + 16) = that;
  v9 = (TerminalSceneComponent_o **)(v4 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 16), (int32_t)that, v7, v8);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_13507/*"TUTORIAL_MESSAGE_TERMINAL_MENU"*/, 0LL);
  Instance = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v9 )
    goto LABEL_17;
  v11 = (CommonUI_o *)Instance;
  TUTORIAL_MENU_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_POS_FS(*v9, 0LL);
  Instance = *v9;
  if ( !*v9 )
    goto LABEL_17;
  *(UnityEngine_Rect_o *)&v13 = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_RECT_FS(Instance, 0LL);
  v17 = *v9;
  if ( !*v9 )
    goto LABEL_17;
  x = v17->fields.TUTORIAL_MENU_MESSAGE_POS.fields.x;
  y = v17->fields.TUTORIAL_MENU_MESSAGE_POS.fields.y;
  v20 = v13;
  v21 = v14;
  Instance = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo;
  v22 = v15;
  v23 = v16;
  if ( !TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo);
    Instance = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo;
  }
  v24 = *(System_Action_o **)(*(_QWORD *)&Instance->fields.TUTORIAL_MENU_ARROW_POS2 + 8LL);
  if ( !v24 )
  {
    if ( !LODWORD(Instance->fields.OnResumeFromChapterStart) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo;
    }
    v25 = **(Il2CppObject ***)&Instance->fields.TUTORIAL_MENU_ARROW_POS2;
    v24 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v24, v25, Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__begin_b__0_0__, 0LL);
    static_fields = TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = v24;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)v24, v27, v28);
  }
  if ( !v11 )
LABEL_17:
    sub_1B8880C(Instance, v6);
  v30.fields.m_XMin = v20;
  v30.fields.m_YMin = v21;
  v30.fields.m_Width = v22;
  v30.fields.m_Height = v23;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v11,
    v10,
    TUTORIAL_MENU_ARROW_POS_FS,
    v30,
    0.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v24,
    0LL);
  v29 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__1__,
    0LL);
  MainMenuBar__SetMenuBtnAct(v29, 0LL);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5D21F & 1) == 0 )
  {
    sub_1B885B0(&TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo);
    byte_4A5D21F = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial3_MenuArrow___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5D220 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__2__);
    byte_4A5D220 = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8);
  }
  if ( !v6 )
    sub_1B8880C(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_30519592(v6, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1B8880C(0LL, method);
  TerminalSceneComponent__SetState(that, 6, 0LL);
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
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  TerminalSceneComponent_o **v9; // x20
  QuestBoardListViewObject_o *FocusQuest; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8
  struct UIScrollView_o *scrollView; // x8
  struct UIProgressBar_o *verticalScrollBar; // x23
  System_String_o *v17; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v19; // x0
  CommonUI_o *v20; // x22
  UnityEngine_Vector2_o TUTORIAL_QUEST_ARROW_POS_FS; // kr00_8
  float v22; // s0
  float v23; // s1
  float v24; // s2
  float v25; // s3
  TerminalSceneComponent_o *v26; // x8
  float x; // s14
  float y; // s15
  float v29; // s10
  float v30; // s11
  float v31; // s12
  float v32; // s13
  System_Action_o *v33; // x23
  struct ScrTerminalListTop_o *v34; // x21
  System_Action_o *v35; // x20
  int32_t v36; // w2
  int32_t v37; // w3
  UnityEngine_Rect_o v38; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4A5D226 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_GameObjectExtensions_RemoveComponent_Collider___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__0__);
    sub_1B885B0(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__1__);
    sub_1B885B0(&TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_TypeInfo);
    sub_1B885B0(&StringLiteral_13510/*"TUTORIAL_MESSAGE_TERMINAL_QUEST3"*/);
    byte_4A5D226 = 1;
  }
  v4 = sub_1B887FC(TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_22;
  *(_QWORD *)(v4 + 16) = that;
  v9 = (TerminalSceneComponent_o **)(v4 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 16), (int32_t)that, v7, v8);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_22;
  mFG = *(TerminalSceneComponent_o **)(*(_QWORD *)(v4 + 16) + 256LL);
  if ( !mFG )
    goto LABEL_22;
  FocusQuest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mFG, 0LL);
  *(_QWORD *)(v4 + 24) = FocusQuest;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 24), (int32_t)FocusQuest, v11, v12);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  mFG = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13510/*"TUTORIAL_MESSAGE_TERMINAL_QUEST3"*/, 0LL);
  if ( !*v9 )
    goto LABEL_22;
  mTerminalList = (*v9)->fields.mTerminalList;
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
  v17 = (System_String_o *)mFG;
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mFG;
  if ( !mFG )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0LL);
  GameObjectExtensions__RemoveComponent_object_(
    gameObject,
    (const MethodInfo_2ED085C *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mBG;
  if ( !mFG )
    goto LABEL_22;
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0LL);
  GameObjectExtensions__RemoveComponent_object_(
    v19,
    (const MethodInfo_2ED085C *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v9 )
    goto LABEL_22;
  v20 = (CommonUI_o *)mFG;
  TUTORIAL_QUEST_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(*v9, 0LL);
  mFG = *v9;
  if ( !*v9 )
    goto LABEL_22;
  *(UnityEngine_Rect_o *)&v22 = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(mFG, 0LL);
  v26 = *v9;
  if ( !*v9 )
    goto LABEL_22;
  x = v26->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x;
  y = v26->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.y;
  v29 = v22;
  v30 = v23;
  v31 = v24;
  v32 = v25;
  v33 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v20 )
    goto LABEL_22;
  v38.fields.m_XMin = v29;
  v38.fields.m_YMin = v30;
  v38.fields.m_Width = v31;
  v38.fields.m_Height = v32;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v20,
    v17,
    TUTORIAL_QUEST_ARROW_POS_FS,
    v38,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v33,
    0LL);
  if ( !*v9
    || (v34 = (*v9)->fields.mTerminalList,
        v35 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v35,
          (Il2CppObject *)v4,
          Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0LL),
        !v34) )
  {
LABEL_22:
    sub_1B8880C(mFG, v6);
  }
  v34->fields.mQuestClickAct = v35;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v34->fields.mQuestClickAct, (int32_t)v35, v36, v37);
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
  if ( (byte_4A5D227 & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
    byte_4A5D227 = 1;
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
                                                                                            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0LL )
  {
LABEL_12:
    sub_1B8880C(this, method);
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
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5D228 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__2__);
    byte_4A5D228 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8);
  }
  if ( !v6 )
    sub_1B8880C(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_30519592(v6, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1B8880C(0LL, method);
  TerminalSceneComponent__SetState(that, 0, 0LL);
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
  int32_t v8; // w2
  int32_t v9; // w3
  SrcSpotBasePrefab_o *FocusSpot; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *Instance; // x21
  UnityEngine_Vector2_o TUTORIAL_SPOT_ARROW_POS4_FS; // kr00_8
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v19; // x22
  struct ScrTerminalMap_o *v20; // x21
  System_Action_o *v21; // x19
  int32_t v22; // w2
  int32_t v23; // w3
  UnityEngine_Rect_o TUTORIAL_SPOT_ARROW_RECT4_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v25; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4A5D224 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__0__);
    sub_1B885B0(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__1__);
    sub_1B885B0(&TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_TypeInfo);
    byte_4A5D224 = 1;
  }
  v5 = sub_1B887FC(TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_10;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_10;
  FocusSpot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0LL);
  *(_QWORD *)(v5 + 16) = FocusSpot;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)FocusSpot, v11, v12);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  TUTORIAL_SPOT_ARROW_POS4_FS = TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_POS4_FS(that, 0LL);
  TUTORIAL_SPOT_ARROW_RECT4_FS = TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_RECT4_FS(that, 0LL);
  m_XMin = TUTORIAL_SPOT_ARROW_RECT4_FS.fields.m_XMin;
  m_YMin = TUTORIAL_SPOT_ARROW_RECT4_FS.fields.m_YMin;
  m_Width = TUTORIAL_SPOT_ARROW_RECT4_FS.fields.m_Width;
  m_Height = TUTORIAL_SPOT_ARROW_RECT4_FS.fields.m_Height;
  v19 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_10;
  v25.fields.m_XMin = m_XMin;
  v25.fields.m_YMin = m_YMin;
  v25.fields.m_Width = m_Width;
  v25.fields.m_Height = m_Height;
  CommonUI__OpenTutorialArrowMark((CommonUI_o *)Instance, TUTORIAL_SPOT_ARROW_POS4_FS, 90.0, v25, v19, 0LL);
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__SetMapCamera_TutorialFocusSpot(mTerminalMap, *(SrcSpotBasePrefab_o **)(v5 + 16), 0.5, 0LL),
        v20 = that->fields.mTerminalMap,
        v21 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v21,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0LL),
        !v20) )
  {
LABEL_10:
    sub_1B8880C(mTerminalMap, v7);
  }
  v20->fields.mSpotClickAct = v21;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->fields.mSpotClickAct, (int32_t)v21, v22, v23);
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
      sub_1B8880C(that, that);
    }
    if ( mQuestBoardListViewManager->fields.initMode == 1 )
      TerminalSceneComponent__SetState(that, 8, 0LL);
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
    sub_1B8880C(0LL, method);
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
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5D225 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__2__);
    byte_4A5D225 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8);
  }
  if ( !v6 )
    sub_1B8880C(Instance, v4);
  CommonUI__CloseTutorialArrowMark(v6, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial4_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(this, method);
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
  TerminalSceneComponent_o *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  TerminalSceneComponent_o **v9; // x21
  CommonUI_o *v10; // x20
  UnityEngine_Vector2_o TUTORIAL_COMBINE_ARROW_POS_FS; // kr00_8
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v16; // x21
  Il2CppObject *v17; // x22
  struct TerminalSceneComponent_StateTutorial5_CombineArrow___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_Action_o *v21; // x20
  UnityEngine_Rect_o TUTORIAL_COMBINE_ARROW_RECT_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v23; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4A5D22C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__begin_b__0_0__);
    sub_1B885B0(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__1__);
    sub_1B885B0(&TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo);
    byte_4A5D22C = 1;
  }
  v4 = sub_1B887FC(TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_14;
  *(_QWORD *)(v4 + 16) = that;
  v9 = (TerminalSceneComponent_o **)(v4 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 16), (int32_t)that, v7, v8);
  Instance = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_14;
  v10 = (CommonUI_o *)Instance;
  TUTORIAL_COMBINE_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_COMBINE_ARROW_POS_FS(*v9, 0LL);
  Instance = *v9;
  if ( !*v9 )
    goto LABEL_14;
  TUTORIAL_COMBINE_ARROW_RECT_FS = TerminalSceneComponent__get_TUTORIAL_COMBINE_ARROW_RECT_FS(Instance, 0LL);
  Instance = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo;
  m_XMin = TUTORIAL_COMBINE_ARROW_RECT_FS.fields.m_XMin;
  m_YMin = TUTORIAL_COMBINE_ARROW_RECT_FS.fields.m_YMin;
  m_Width = TUTORIAL_COMBINE_ARROW_RECT_FS.fields.m_Width;
  m_Height = TUTORIAL_COMBINE_ARROW_RECT_FS.fields.m_Height;
  if ( !TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo);
    Instance = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo;
  }
  v16 = *(System_Action_o **)(*(_QWORD *)&Instance->fields.TUTORIAL_MENU_ARROW_POS2 + 8LL);
  if ( !v16 )
  {
    if ( !LODWORD(Instance->fields.OnResumeFromChapterStart) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo;
    }
    v17 = **(Il2CppObject ***)&Instance->fields.TUTORIAL_MENU_ARROW_POS2;
    v16 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v16, v17, Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__begin_b__0_0__, 0LL);
    static_fields = TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = v16;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)v16, v19, v20);
  }
  if ( !v10 )
LABEL_14:
    sub_1B8880C(Instance, v6);
  v23.fields.m_XMin = m_XMin;
  v23.fields.m_YMin = m_YMin;
  v23.fields.m_Width = m_Width;
  v23.fields.m_Height = m_Height;
  CommonUI__OpenTutorialArrowMark(v10, TUTORIAL_COMBINE_ARROW_POS_FS, 0.0, v23, v16, 0LL);
  v21 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__1__,
    0LL);
  MainMenuBar__SetDispBtnAct(3, v21, 0LL);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5D22D & 1) == 0 )
  {
    sub_1B885B0(&TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo);
    byte_4A5D22D = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial5_CombineArrow___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5D22E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__2__);
    byte_4A5D22E = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8);
  }
  if ( !v6 )
    sub_1B8880C(Instance, v4);
  CommonUI__CloseTutorialArrowMark(v6, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0
  struct TerminalSceneComponent_o *v4; // x8
  struct TerminalSceneComponent_o *v5; // x8

  that = this->fields.that;
  if ( !that
    || (TerminalSceneComponent__SetState(that, 0, 0LL), (v4 = this->fields.that) == 0LL)
    || (that = (TerminalSceneComponent_o *)v4->fields.mTitleInfo) == 0LL
    || (TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)that, 1, 0LL), (v5 = this->fields.that) == 0LL)
    || (that = (TerminalSceneComponent_o *)v5->fields.mPlayerStatus) == 0LL )
  {
    sub_1B8880C(that, method);
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
  System_String_o *v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  TerminalSceneComponent_o **v9; // x22
  Il2CppObject *Instance; // x20
  System_String_o *v11; // x21
  UnityEngine_Vector2_o TUTORIAL_MENU_ARROW_POS2_FS; // kr00_8
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v17; // x22
  Il2CppObject *v18; // x23
  struct TerminalSceneComponent_StateTutorial5_MenuArrow___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_Action_o *v22; // x20
  UnityEngine_Rect_o TUTORIAL_MENU_ARROW_RECT_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v24; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4A5D229 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__begin_b__0_0__);
    sub_1B885B0(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__1__);
    sub_1B885B0(&TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo);
    sub_1B885B0(&StringLiteral_13488/*"TUTORIAL_MESSAGE_COMBINE1"*/);
    byte_4A5D229 = 1;
  }
  v4 = sub_1B887FC(TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_16;
  *(_QWORD *)(v4 + 16) = that;
  v9 = (TerminalSceneComponent_o **)(v4 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 16), (int32_t)that, v7, v8);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_13488/*"TUTORIAL_MESSAGE_COMBINE1"*/, 0LL);
  if ( !*v9 )
    goto LABEL_16;
  v11 = v5;
  TUTORIAL_MENU_ARROW_POS2_FS = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_POS2_FS(*v9, 0LL);
  v5 = (System_String_o *)*v9;
  if ( !*v9 )
    goto LABEL_16;
  TUTORIAL_MENU_ARROW_RECT_FS = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_RECT_FS(
                                  (TerminalSceneComponent_o *)v5,
                                  0LL);
  v5 = (System_String_o *)TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo;
  m_XMin = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_XMin;
  m_YMin = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_YMin;
  m_Width = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_Width;
  m_Height = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_Height;
  if ( !TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo);
    v5 = (System_String_o *)TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo;
  }
  v17 = *(System_Action_o **)(*(_QWORD *)&v5[7].fields + 8LL);
  if ( !v17 )
  {
    if ( !LODWORD(v5[9].monitor) )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = (System_String_o *)TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo;
    }
    v18 = **(Il2CppObject ***)&v5[7].fields;
    v17 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v17, v18, Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__begin_b__0_0__, 0LL);
    static_fields = TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = v17;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)v17, v20, v21);
  }
  if ( !Instance )
LABEL_16:
    sub_1B8880C(v5, v6);
  v24.fields.m_XMin = m_XMin;
  v24.fields.m_YMin = m_YMin;
  v24.fields.m_Width = m_Width;
  v24.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    (CommonUI_o *)Instance,
    v11,
    TUTORIAL_MENU_ARROW_POS2_FS,
    v24,
    0.0,
    (UnityEngine_Vector2_o)0xC224000000000000LL,
    -1,
    v17,
    0LL);
  v22 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__1__,
    0LL);
  MainMenuBar__SetMenuBtnAct(v22, 0LL);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5D22A & 1) == 0 )
  {
    sub_1B885B0(&TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo);
    byte_4A5D22A = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial5_MenuArrow___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5D22B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__2__);
    byte_4A5D22B = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8);
  }
  if ( !v6 )
    sub_1B8880C(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_30519592(v6, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1B8880C(0LL, method);
  TerminalSceneComponent__SetState(that, 10, 0LL);
}


void __fastcall TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__247___ctor(
        TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__247_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__247__MoveNext(
        TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__247_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v5; // x21
  UnityEngine_WaitUntil_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  bool result; // w0
  System_Action_o *openCampaignDirectBonus; // x0

  if ( (byte_4A5D24E & 1) == 0 )
  {
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&Method_TerminalSceneComponent__CoWaitBlankEerthActionEnd_b__247_0__);
    sub_1B885B0(&UnityEngine_WaitUntil_TypeInfo);
    byte_4A5D24E = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    openCampaignDirectBonus = this->fields.openCampaignDirectBonus;
    this->fields.__1__state = -1;
    ActionExtensions__Call(openCampaignDirectBonus, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v5 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v5, _4__this, Method_TerminalSceneComponent__CoWaitBlankEerthActionEnd_b__247_0__, 0LL);
    v6 = (UnityEngine_WaitUntil_o *)sub_1B887FC(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v6, v5, 0LL);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v6, v7, v8);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__247__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__247_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__247__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__247_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__247_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__247__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__247_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__247__System_IDisposable_Dispose(
        TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__247_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__246___ctor(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__246_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__246__MoveNext(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__246_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v5; // x21
  UnityEngine_WaitUntil_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  bool result; // w0
  System_Action_o *openCampaignDirectBonus; // x0

  if ( (byte_4A5D24F & 1) == 0 )
  {
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_b__246_0__);
    sub_1B885B0(&UnityEngine_WaitUntil_TypeInfo);
    byte_4A5D24F = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    openCampaignDirectBonus = this->fields.openCampaignDirectBonus;
    this->fields.__1__state = -1;
    ActionExtensions__Call(openCampaignDirectBonus, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v5 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v5, _4__this, Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_b__246_0__, 0LL);
    v6 = (UnityEngine_WaitUntil_o *)sub_1B887FC(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v6, v5, 0LL);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v6, v7, v8);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__246__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__246_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__246__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__246_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__246_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__246__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__246_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__246__System_IDisposable_Dispose(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__246_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent__LoadAsync_d__173___ctor(
        TerminalSceneComponent__LoadAsync_d__173_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TerminalSceneComponent__LoadAsync_d__173__MoveNext(
        TerminalSceneComponent__LoadAsync_d__173_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent__LoadAsync_d__173_o *v2; // x19
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
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v27; // w2
  int32_t v28; // w3
  bool result; // w0
  struct System_Action_o *callback; // x8

  v2 = this;
  if ( (byte_4A5D250 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__0__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__10__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__11__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__12__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__13__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__1__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__2__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__3__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__4__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__5__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__6__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__7__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__8__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__9__);
    sub_1B885B0(&TerminalSceneComponent___c__DisplayClass173_0_TypeInfo);
    this = (TerminalSceneComponent__LoadAsync_d__173_o *)sub_1B885B0(&UnityEngine_WaitUntil_TypeInfo);
    byte_4A5D250 = 1;
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
  v5 = sub_1B887FC(TerminalSceneComponent___c__DisplayClass173_0_TypeInfo);
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
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__0__,
    0LL);
  if ( !_4__this )
    goto LABEL_23;
  TerminalSceneComponent__SetupStandServant(_4__this, usd, 0, v7, 0LL);
  this = (TerminalSceneComponent__LoadAsync_d__173_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !this )
    goto LABEL_23;
  if ( !AtlasManager__isLoadedSkinData((AtlasManager_o *)this, 4, 0LL) )
  {
    *(_BYTE *)(v5 + 17) = 0;
    v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      (Il2CppObject *)v5,
      Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__1__,
      0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadUISkin(v8, 4, 11, 0LL);
  }
  TransitionInfo_k__BackingField = _4__this->fields._TransitionInfo_k__BackingField;
  if ( !TransitionInfo_k__BackingField
    || System_String__IsNullOrEmpty(TransitionInfo_k__BackingField->fields.voiceAssetName, 0LL) )
  {
    goto LABEL_17;
  }
  *(_BYTE *)(v5 + 18) = 0;
  this = (TerminalSceneComponent__LoadAsync_d__173_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v10 = _4__this->fields._TransitionInfo_k__BackingField;
  if ( !v10
    || (v11 = (SoundManager_o *)this,
        voiceAssetName = v10->fields.voiceAssetName,
        v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v13,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__2__,
          0LL),
        !v11) )
  {
LABEL_23:
    sub_1B8880C(this, method);
  }
  SoundManager__LoadAudioAssetStorage(v11, voiceAssetName, v13, 1, 0LL);
LABEL_17:
  v14 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__3__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadBanner(v14, 11, 0LL);
  v15 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__4__,
    0LL);
  AtlasManager__LoadFaceAtlas(v15, 11, 0LL);
  v16 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__5__,
    0LL);
  AtlasManager__LoadEquipFace(v16, 11, 0LL);
  v17 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__6__,
    0LL);
  AtlasManager__LoadFriendshipExceed(v17, 11, 0LL);
  v18 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__7__,
    0LL);
  AtlasManager__LoadCommandCode(v18, 11, 0LL);
  v19 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__8__,
    0LL);
  AtlasManager__LoadCommandCodeMini(v19, 11, 0LL);
  v20 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__9__,
    0LL);
  AtlasManager__LoadEventAtlas(v20, 11, 0LL);
  v21 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__10__,
    0LL);
  AtlasManager__LoadEventUI(v21, 11, 0LL);
  v22 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__11__,
    0LL);
  AtlasManager__LoadCharaGraphOptionAtlas(v22, 11, 0LL);
  v23 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__12__,
    0LL);
  AtlasManager__LoadPartyOrganizationAtlas(v23, 11, 0LL);
  v24 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v24,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__13__,
    0LL);
  v25 = (UnityEngine_WaitUntil_o *)sub_1B887FC(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v25, v24, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v25;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B88554(p__2__current, (int32_t)v25, v27, v28);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
  return result;
}


Il2CppObject *__fastcall TerminalSceneComponent__LoadAsync_d__173__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__LoadAsync_d__173_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TerminalSceneComponent__LoadAsync_d__173__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__LoadAsync_d__173_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_TerminalSceneComponent__LoadAsync_d__173_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall TerminalSceneComponent__LoadAsync_d__173__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__LoadAsync_d__173_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TerminalSceneComponent__LoadAsync_d__173__System_IDisposable_Dispose(
        TerminalSceneComponent__LoadAsync_d__173_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__189___ctor(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__189_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__189__MoveNext(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__189_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  TerminalSceneComponent___c_c *v4; // x0
  System_Func_bool__o *_9__189_0; // x20
  Il2CppObject *v6; // x21
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  UnityEngine_WaitWhile_o *v10; // x21
  Il2CppObject **p__2__current; // x19
  int32_t v12; // w2
  int32_t v13; // w3
  bool result; // w0

  if ( (byte_4A5D251 & 1) == 0 )
  {
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&SoundManager_TypeInfo);
    sub_1B885B0(&Method_TerminalSceneComponent___c__WaitStopSEQuestPhaseRewardEffect_b__189_0__);
    sub_1B885B0(&TerminalSceneComponent___c_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitWhile_TypeInfo);
    byte_4A5D251 = 1;
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
  _9__189_0 = v4->static_fields->__9__189_0;
  if ( !_9__189_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = TerminalSceneComponent___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__189_0 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      _9__189_0,
      v6,
      Method_TerminalSceneComponent___c__WaitStopSEQuestPhaseRewardEffect_b__189_0__,
      0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__189_0 = _9__189_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__189_0, (int32_t)_9__189_0, v8, v9);
  }
  v10 = (UnityEngine_WaitWhile_o *)sub_1B887FC(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v10, _9__189_0, 0LL);
  this->fields.__2__current = (Il2CppObject *)v10;
  p__2__current = &this->fields.__2__current;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v10, v12, v13);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__189__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__189_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__189__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__189_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__189_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__189__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__189_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__189__System_IDisposable_Dispose(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__189_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5D22F & 1) == 0 )
  {
    sub_1B885B0(&TerminalSceneComponent___c_TypeInfo);
    byte_4A5D22F = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(TerminalSceneComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  TerminalSceneComponent___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)TerminalSceneComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall TerminalSceneComponent___c___ctor(TerminalSceneComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c___CheckRewardPopupChain_b__244_2(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A5D238 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5D238 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v5);
  CommonUI__StartFriendPointNotification((CommonUI_o *)Instance, action, 0LL);
}


void __fastcall TerminalSceneComponent___c___Fadein_MapDisp_Start_b__193_0(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A5D232 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5D232 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v5);
  CommonUI__StartLoginAndCampaignBonus((CommonUI_o *)Instance, action, 0LL, 201, 0LL);
}


void __fastcall TerminalSceneComponent___c___Fadein_MapDisp_Start_b__193_1(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20

  if ( (byte_4A5D233 & 1) == 0 )
  {
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5D233 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6
    || (CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__ClearLoginResultData((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(Instance, v5);
  }
  CommonUI__ReleaseFortuneBonusAssetData((CommonUI_o *)Instance, 0LL);
}


void __fastcall TerminalSceneComponent___c___Fadein_MapDisp_Start_b__193_6(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20

  if ( (byte_4A5D231 & 1) == 0 )
  {
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5D231 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6 )
    sub_1B8880C(Instance, v5);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0LL);
}


ShopEntity_o *__fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__250_0(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A5D239 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1B885B0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D239 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v5);
  }
  return (ShopEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           x,
                           (const MethodInfo_311D934 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
}


bool __fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__250_1(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return ShopEntity__IsAfterTheFreeShopReleaseDate(x, 0LL);
}


bool __fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__250_2(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  bool isQuestNotClearItemClosed; // w8
  bool result; // w0

  if ( !x )
    sub_1B8880C(this, 0LL);
  if ( !ShopEntity__isQuestNotClearItemClosed(x, 0, 0LL) )
    return 1;
  isQuestNotClearItemClosed = ShopEntity__isQuestNotClearItemClosed(x, 0, 0LL);
  result = 0;
  if ( isQuestNotClearItemClosed )
    return ShopEntity__IsSoldOut(x, 0LL);
  return result;
}


int32_t __fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__250_4(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.id;
}


ShopEntity_o *__fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__250_5(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A5D23A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1B885B0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D23A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v5);
  }
  return (ShopEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           x,
                           (const MethodInfo_311D934 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
}


int32_t __fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__250_6(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return ShopEntity__GetPrice(x, 0LL);
}


void __fastcall TerminalSceneComponent___c___RebootToNetworkError_b__210_0(
        TerminalSceneComponent___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5D237 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4A5D237 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0LL);
}


void __fastcall TerminalSceneComponent___c___StartWindowMessage_b__195_1(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20

  if ( (byte_4A5D234 & 1) == 0 )
  {
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5D234 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6 )
    sub_1B8880C(Instance, v5);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0LL);
}


void __fastcall TerminalSceneComponent___c___StartWindowMessage_b__195_2(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  System_String_o *QuestWindowMessage_k__BackingField; // x20

  if ( (byte_4A5D235 & 1) == 0 )
  {
    sub_1B885B0(&ScriptManager_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5D235 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A5D121 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5D121 = 1;
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


void __fastcall TerminalSceneComponent___c___StartWindowMessage_b__195_3(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  __int64 v5; // x1
  Il2CppObject *v6; // x20
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_4A5D236 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5D236 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57178 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57178 = 1;
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
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0LL, 0, 0LL);
      goto LABEL_22;
    }
LABEL_23:
    sub_1B8880C(Instance, v5);
  }
  v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A5D2FE )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5D2FE = 1;
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
    (Il2CppObject *)Instance[1].fields.m_listUnloadScenes[3].klass,
    0LL);
LABEL_22:
  ActionExtensions__Call(action, 0LL);
}


bool __fastcall TerminalSceneComponent___c___WaitStopSEQuestPhaseRewardEffect_b__189_0(
        TerminalSceneComponent___c_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4A5D230 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5D230 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A5629E )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5629E = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_isPlayingQuestPhaseRewardEffect_k__BackingField;
}


System_String_o *__fastcall TerminalSceneComponent___c___callbackTopLogin_b__208_0(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0LL);
}


System_String_o *__fastcall TerminalSceneComponent___c___callbackTopLogin_b__208_1(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass170_0___ctor(
        TerminalSceneComponent___c__DisplayClass170_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass170_0___SetEarthView_b__0(
        TerminalSceneComponent___c__DisplayClass170_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass170_0_o *v4; // x19
  struct TerminalSceneComponent_o *_4__this; // x21
  Il2CppObject *Object_object__48635516; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  struct TerminalSceneComponent_o *v9; // x8
  struct TerminalSceneComponent_o *v10; // x20
  Il2CppObject *ComponentInChildren_object; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  v4 = this;
  if ( (byte_4A5D23B & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_BaseCore___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass170_0_o *)sub_1B885B0(&StringLiteral_4763/*"CorePrefab"*/);
    byte_4A5D23B = 1;
  }
  if ( !data )
    goto LABEL_11;
  _4__this = v4->fields.__4__this;
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              data,
                              (System_String_o *)StringLiteral_4763/*"CorePrefab"*/,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (TerminalSceneComponent___c__DisplayClass170_0_o *)UnityEngine_Object__Instantiate_object_(
                                                              Object_object__48635516,
                                                              (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !_4__this
    || (_4__this->fields.mEarthCoreObj = (struct UnityEngine_GameObject_o *)this,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.mEarthCoreObj, (int32_t)this, v7, v8),
        (v9 = v4->fields.__4__this) == 0LL)
    || (GameObjectExtensions__SafeSetParent_33730068(v9->fields.mEarthCoreObj, v9->fields.mUiRoot, 0LL),
        (v10 = v4->fields.__4__this) == 0LL)
    || (this = (TerminalSceneComponent___c__DisplayClass170_0_o *)v10->fields.mEarthCoreObj) == 0LL )
  {
LABEL_11:
    sub_1B8880C(this, data);
  }
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)this,
                                 (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_BaseCore___);
  v10->fields.mEarthCore = (struct BaseCore_o *)ComponentInChildren_object;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v10->fields.mEarthCore,
    (int32_t)ComponentInChildren_object,
    v12,
    v13);
  ActionExtensions__Call(v4->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass173_0___ctor(
        TerminalSceneComponent___c__DisplayClass173_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass173_0___LoadAsync_b__0(
        TerminalSceneComponent___c__DisplayClass173_0_o *this,
        const MethodInfo *method)
{
  this->fields.isSetupStandServant = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass173_0___LoadAsync_b__1(
        TerminalSceneComponent___c__DisplayClass173_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadUISkin = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass173_0___LoadAsync_b__10(
        TerminalSceneComponent___c__DisplayClass173_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadEventUI = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass173_0___LoadAsync_b__11(
        TerminalSceneComponent___c__DisplayClass173_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadCharaGraphOptionAtlas = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass173_0___LoadAsync_b__12(
        TerminalSceneComponent___c__DisplayClass173_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadPartyOrganizationAtlas = 1;
}


bool __fastcall TerminalSceneComponent___c__DisplayClass173_0___LoadAsync_b__13(
        TerminalSceneComponent___c__DisplayClass173_0_o *this,
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


void __fastcall TerminalSceneComponent___c__DisplayClass173_0___LoadAsync_b__2(
        TerminalSceneComponent___c__DisplayClass173_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadAudioAssetStorage = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass173_0___LoadAsync_b__3(
        TerminalSceneComponent___c__DisplayClass173_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadBanner = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass173_0___LoadAsync_b__4(
        TerminalSceneComponent___c__DisplayClass173_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadFaceAtlas = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass173_0___LoadAsync_b__5(
        TerminalSceneComponent___c__DisplayClass173_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadEquipFace = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass173_0___LoadAsync_b__6(
        TerminalSceneComponent___c__DisplayClass173_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadFriendshipExceed = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass173_0___LoadAsync_b__7(
        TerminalSceneComponent___c__DisplayClass173_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadCommandCode = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass173_0___LoadAsync_b__8(
        TerminalSceneComponent___c__DisplayClass173_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadCommandCodeMini = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass173_0___LoadAsync_b__9(
        TerminalSceneComponent___c__DisplayClass173_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadEventAtlas = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass184_0___ctor(
        TerminalSceneComponent___c__DisplayClass184_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass184_0___SetupStandServant_b__0(
        TerminalSceneComponent___c__DisplayClass184_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass184_0_o *v2; // x19
  struct TerminalSceneComponent_o *_4__this; // x8

  v2 = this;
  if ( this->fields.isSlideIn )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (this = (TerminalSceneComponent___c__DisplayClass184_0_o *)_4__this->fields.mTerminalServant) == 0LL )
    {
      sub_1B8880C(this, method);
    }
    StandFigureSlideComponent__SlideIn((StandFigureSlideComponent_o *)this, 0LL, 0LL);
  }
  ActionExtensions__Call(v2->fields.endAction, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass184_0___SetupStandServant_b__1(
        TerminalSceneComponent___c__DisplayClass184_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass184_0_o *v2; // x19
  struct TerminalSceneComponent_o *_4__this; // x8
  struct TerminalSceneComponent_o *v4; // x8
  long double v5; // q0
  struct TerminalSceneComponent_o *v6; // x8
  struct StandFigureSlideComponent_o *mTerminalServant; // x9
  struct BaseCore_o *mEarthCore; // x8
  __int64 v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  UserServantEntity_o *NextStandServant; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  long double inited; // q0
  struct TerminalSceneComponent_o *v16; // x8
  int32_t mStandSvtIdx; // w22
  struct TerminalSceneComponent_o *v18; // x8
  struct BaseCore_o *v19; // x22
  struct TerminalSceneComponent_o *v20; // x8
  StandFigureSlideComponent_o *v21; // x19
  System_Action_o *v22; // x21
  struct TerminalSceneComponent_o *v23; // x8
  struct BaseCore_o *v24; // x21
  struct TerminalSceneComponent_o *v25; // x8

  v2 = this;
  if ( (byte_4A5D23C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass184_1__SetupStandServant_b__2__);
    this = (TerminalSceneComponent___c__DisplayClass184_0_o *)sub_1B885B0(&TerminalSceneComponent___c__DisplayClass184_1_TypeInfo);
    byte_4A5D23C = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_54;
  this = (TerminalSceneComponent___c__DisplayClass184_0_o *)_4__this->fields.mTerminalServant;
  if ( !this )
    goto LABEL_54;
  if ( !BYTE1(this[1].fields.__4__this) )
  {
    this = (TerminalSceneComponent___c__DisplayClass184_0_o *)StandFigureSlideComponent__IsMoving(
                                                                (StandFigureSlideComponent_o *)this,
                                                                0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v4 = v2->fields.__4__this;
      if ( !v4 )
        goto LABEL_54;
      this = (TerminalSceneComponent___c__DisplayClass184_0_o *)v4->fields.mEarthCore;
      if ( !this )
        goto LABEL_54;
      if ( !BYTE1(this[3].fields.__4__this) )
      {
        *(float *)&v5 = ((float (__fastcall *)(TerminalSceneComponent___c__DisplayClass184_0_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
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
              v9 = sub_1B887FC(TerminalSceneComponent___c__DisplayClass184_1_TypeInfo);
              System_Object___ctor((Il2CppObject *)v9, 0LL);
              if ( v9 )
              {
                *(_QWORD *)(v9 + 24) = v2;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)v2, v10, v11);
                this = (TerminalSceneComponent___c__DisplayClass184_0_o *)v2->fields.__4__this;
                if ( this )
                {
                  NextStandServant = TerminalSceneComponent__GetNextStandServant((TerminalSceneComponent_o *)this, 0LL);
                  *(_QWORD *)(v9 + 16) = NextStandServant;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)NextStandServant, v13, v14);
                  v16 = v2->fields.__4__this;
                  if ( v16 )
                  {
                    mStandSvtIdx = v16->fields.mStandSvtIdx;
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                      inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    if ( !byte_4A5D11D )
                    {
                      sub_1B885B0(&TerminalPramsManager_TypeInfo);
                      byte_4A5D11D = 1;
                    }
                    this = (TerminalSceneComponent___c__DisplayClass184_0_o *)TerminalPramsManager_TypeInfo;
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    {
                      inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                      this = (TerminalSceneComponent___c__DisplayClass184_0_o *)TerminalPramsManager_TypeInfo;
                    }
                    BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x) = mStandSvtIdx != 0;
                    v18 = v2->fields.__4__this;
                    if ( v18 )
                    {
                      v19 = v18->fields.mEarthCore;
                      if ( !byte_4A5835B )
                      {
                        sub_1B885B0(&TerminalPramsManager_TypeInfo);
                        this = (TerminalSceneComponent___c__DisplayClass184_0_o *)TerminalPramsManager_TypeInfo;
                        byte_4A5835B = 1;
                      }
                      if ( !LODWORD(this[5].fields.__4__this) )
                      {
                        inited = j_il2cpp_runtime_class_init_0(this);
                        this = (TerminalSceneComponent___c__DisplayClass184_0_o *)TerminalPramsManager_TypeInfo;
                      }
                      if ( v19 )
                      {
                        this = (TerminalSceneComponent___c__DisplayClass184_0_o *)((__int64 (__fastcall *)(struct BaseCore_o *, bool, _QWORD, Il2CppMethodPointer, long double))v19->klass->vtable._4_FocusInOut.method)(
                                                                                    v19,
                                                                                    BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x) == 0,
                                                                                    0LL,
                                                                                    v19->klass->vtable._5_Awake.methodPtr,
                                                                                    inited);
                        v20 = v2->fields.__4__this;
                        if ( v20 )
                        {
                          v21 = v20->fields.mTerminalServant;
                          v22 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                          System_Action___ctor(
                            v22,
                            (Il2CppObject *)v9,
                            Method_TerminalSceneComponent___c__DisplayClass184_1__SetupStandServant_b__2__,
                            0LL);
                          if ( v21 )
                          {
                            StandFigureSlideComponent__SlideOut(v21, v22, 0, 0LL);
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
              if ( !byte_4A5D11D )
              {
                sub_1B885B0(&TerminalPramsManager_TypeInfo);
                byte_4A5D11D = 1;
              }
              this = (TerminalSceneComponent___c__DisplayClass184_0_o *)TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                v5 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                this = (TerminalSceneComponent___c__DisplayClass184_0_o *)TerminalPramsManager_TypeInfo;
              }
              BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x) = 1;
              v23 = v2->fields.__4__this;
              if ( v23 )
              {
                v24 = v23->fields.mEarthCore;
                if ( !byte_4A5835B )
                {
                  sub_1B885B0(&TerminalPramsManager_TypeInfo);
                  this = (TerminalSceneComponent___c__DisplayClass184_0_o *)TerminalPramsManager_TypeInfo;
                  byte_4A5835B = 1;
                }
                if ( !LODWORD(this[5].fields.__4__this) )
                {
                  v5 = j_il2cpp_runtime_class_init_0(this);
                  this = (TerminalSceneComponent___c__DisplayClass184_0_o *)TerminalPramsManager_TypeInfo;
                }
                if ( v24 )
                {
                  this = (TerminalSceneComponent___c__DisplayClass184_0_o *)((__int64 (__fastcall *)(struct BaseCore_o *, bool, _QWORD, Il2CppMethodPointer, long double))v24->klass->vtable._4_FocusInOut.method)(
                                                                              v24,
                                                                              BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x) == 0,
                                                                              0LL,
                                                                              v24->klass->vtable._5_Awake.methodPtr,
                                                                              v5);
                  v25 = v2->fields.__4__this;
                  if ( v25 )
                  {
                    this = (TerminalSceneComponent___c__DisplayClass184_0_o *)v25->fields.mTerminalServant;
                    if ( this )
                    {
                      StandFigureSlideComponent__SlideIn((StandFigureSlideComponent_o *)this, 0LL, 0LL);
                      goto LABEL_53;
                    }
                  }
                }
              }
LABEL_54:
              sub_1B8880C(this, method);
            }
          }
        }
      }
    }
  }
}


void __fastcall TerminalSceneComponent___c__DisplayClass184_1___ctor(
        TerminalSceneComponent___c__DisplayClass184_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass184_1___SetupStandServant_b__2(
        TerminalSceneComponent___c__DisplayClass184_1_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass184_1_o *v2; // x20
  struct TerminalSceneComponent___c__DisplayClass184_0_o *CS___8__locals1; // x8
  TerminalSceneComponent_o *_4__this; // x19
  UserServantEntity_o *usd; // x20

  v2 = this;
  if ( (byte_4A5D23D & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass184_1_o *)sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5D23D = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_12;
  _4__this = CS___8__locals1->fields.__4__this;
  usd = v2->fields._usd;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A5835B )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5835B = 1;
  }
  this = (TerminalSceneComponent___c__DisplayClass184_1_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass184_1_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !_4__this )
LABEL_12:
    sub_1B8880C(this, method);
  TerminalSceneComponent__SetupStandServant(_4__this, usd, BYTE2(this[5].fields.CS___8__locals1[2].monitor), 0LL, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass190_0___ctor(
        TerminalSceneComponent___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass190_0___coFadein_WorldDisp_b__0(
        TerminalSceneComponent___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
  TerminalSceneComponent__StartWindowMessage(_4__this, 0LL, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass190_0___coFadein_WorldDisp_b__1(
        TerminalSceneComponent___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass190_0___coFadein_WorldDisp_b__2(
        TerminalSceneComponent___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass190_0_o *v2; // x19
  System_Action_o *_9__3; // x22
  TerminalSceneComponent_o *_4__this; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  v2 = this;
  if ( (byte_4A5D23E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass190_0_o *)sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass190_0__coFadein_WorldDisp_b__3__);
    byte_4A5D23E = 1;
  }
  _9__3 = v2->fields.__9__3;
  _4__this = v2->fields.__4__this;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v2,
      Method_TerminalSceneComponent___c__DisplayClass190_0__coFadein_WorldDisp_b__3__,
      0LL);
    v2->fields.__9__3 = _9__3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v5, v6);
  }
  if ( !_4__this )
    sub_1B8880C(this, method);
  TerminalSceneComponent__StartWindowMessage(_4__this, _9__3, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass190_0___coFadein_WorldDisp_b__3(
        TerminalSceneComponent___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass191_0___ctor(
        TerminalSceneComponent___c__DisplayClass191_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass191_0___Fadein_MapDisp_b__0(
        TerminalSceneComponent___c__DisplayClass191_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x0
  struct TerminalSceneComponent_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (TerminalSceneComponent__Fadein_MapDisp_Load(
          _4__this,
          _4__this->fields._FirstFadeTime_k__BackingField,
          this->fields.end_act,
          0LL),
        (v4 = this->fields.__4__this) == 0LL) )
  {
    sub_1B8880C(_4__this, method);
  }
  v4->fields._FirstFadeTime_k__BackingField = 0.0;
}


void __fastcall TerminalSceneComponent___c__DisplayClass192_0___ctor(
        TerminalSceneComponent___c__DisplayClass192_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass192_0___Fadein_MapDisp_Load_b__0(
        TerminalSceneComponent___c__DisplayClass192_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
  TerminalSceneComponent__Fadein_MapDisp_Start(_4__this, this->fields.fade_time, this->fields.end_act, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass193_0___ctor(
        TerminalSceneComponent___c__DisplayClass193_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass193_0___Fadein_MapDisp_Start_b__2(
        TerminalSceneComponent___c__DisplayClass193_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct WarEntity_o *war_dat; // x8

  war_dat = this->fields.war_dat;
  if ( !war_dat || (this = (TerminalSceneComponent___c__DisplayClass193_0_o *)this->fields.__4__this) == 0LL )
    sub_1B8880C(this, action);
  TerminalSceneComponent__StartEventDailyPoint((TerminalSceneComponent_o *)this, war_dat->fields.eventId, action, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass193_0___Fadein_MapDisp_Start_b__3(
        TerminalSceneComponent___c__DisplayClass193_0_o *this,
        const MethodInfo *method)
{
  struct WarEntity_o *war_dat; // x9

  war_dat = this->fields.war_dat;
  if ( !war_dat || !this->fields.__4__this )
    sub_1B8880C(this, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffects(
    this->fields.__4__this,
    this->fields.fade_time,
    war_dat->fields.eventId,
    this->fields.end_act,
    0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass193_0___Fadein_MapDisp_Start_b__4(
        TerminalSceneComponent___c__DisplayClass193_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (mTerminalList = _4__this->fields.mTerminalList) == 0LL
    || (this = (TerminalSceneComponent___c__DisplayClass193_0_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0LL )
  {
    sub_1B8880C(this, action);
  }
  QuestBoardListViewManager__SetMode((QuestBoardListViewManager_o *)this, 4, action, 0, 0, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass193_0___Fadein_MapDisp_Start_b__5(
        TerminalSceneComponent___c__DisplayClass193_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass193_0_o *v4; // x20
  struct TerminalSceneComponent_o *_4__this; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  v4 = this;
  if ( (byte_4A5D23F & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass193_0_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4A5D23F = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (mTerminalMap = _4__this->fields.mTerminalMap) == 0LL
    || (this = (TerminalSceneComponent___c__DisplayClass193_0_o *)mTerminalMap->fields.spotMaskObj) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (this = (TerminalSceneComponent___c__DisplayClass193_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(this, action);
  }
  QuestAfterAction__LoadVoice((QuestAfterAction_o *)this, action, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass193_1___ctor(
        TerminalSceneComponent___c__DisplayClass193_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass193_1___Fadein_MapDisp_Start_b__7(
        TerminalSceneComponent___c__DisplayClass193_1_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *IsNullOrEmpty; // x0
  __int64 v4; // x8
  __int64 v5; // x8
  TerminalPramsManager_c *v6; // x0
  Il2CppObject *Instance; // x19
  struct TerminalSceneComponent___c__DisplayClass193_0_o *CS___8__locals1; // x8

  if ( (byte_4A5D240 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5D240 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
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
  IsNullOrEmpty = *(UnityEngine_GameObject_o **)(v5 + 536);
  if ( !IsNullOrEmpty )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive(IsNullOrEmpty, this->fields.oldActive, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A5D121 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5D121 = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A5D2FE )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A5D2FE = 1;
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
    sub_1B8880C(IsNullOrEmpty, method);
  }
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_30;
  IsNullOrEmpty = (UnityEngine_GameObject_o *)CS___8__locals1->fields.__4__this;
  if ( !IsNullOrEmpty )
    goto LABEL_30;
  TerminalSceneComponent__StartWindowMessage((TerminalSceneComponent_o *)IsNullOrEmpty, 0LL, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass196_0___ctor(
        TerminalSceneComponent___c__DisplayClass196_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass196_0___FadeInAndTriggerEventEffects_b__0(
        TerminalSceneComponent___c__DisplayClass196_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x21
  CommonUI_o *v6; // x20
  float fadeTime; // s8
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5D241 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass196_0__FadeInAndTriggerEventEffects_b__2__);
    byte_4A5D241 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  fadeTime = this->fields.fadeTime;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent___c__DisplayClass196_0__FadeInAndTriggerEventEffects_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9);
  }
  if ( !v6 )
    sub_1B8880C(Instance, v4);
  CommonUI__maskFadein(v6, fadeTime, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass196_0___FadeInAndTriggerEventEffects_b__1(
        TerminalSceneComponent___c__DisplayClass196_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(_4__this, this->fields.eventId, this->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass196_0___FadeInAndTriggerEventEffects_b__2(
        TerminalSceneComponent___c__DisplayClass196_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__3; // x22
  QuestAfterAction_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5D242 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass196_0__FadeInAndTriggerEventEffects_b__3__);
    byte_4A5D242 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  _9__3 = this->fields.__9__3;
  v6 = (QuestAfterAction_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent___c__DisplayClass196_0__FadeInAndTriggerEventEffects_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__3, (int32_t)_9__3, v7, v8);
  }
  if ( !v6 )
    sub_1B8880C(Instance, v4);
  QuestAfterAction__Play(v6, _9__3, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass196_0___FadeInAndTriggerEventEffects_b__3(
        TerminalSceneComponent___c__DisplayClass196_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(_4__this, this->fields.eventId, this->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass196_0___FadeInAndTriggerEventEffects_b__4(
        TerminalSceneComponent___c__DisplayClass196_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(_4__this, this->fields.eventId, this->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass199_0___ctor(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass199_0___FadeInAndTriggerEventEffectsNext_b__0(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  TitleInfoControl_o *mTitleInfo; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (mTitleInfo = _4__this->fields.mTitleInfo) == 0LL )
    sub_1B8880C(this, method);
  TitleInfoControl__CheckSuperBossHpAnim(mTitleInfo, this->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass199_0___FadeInAndTriggerEventEffectsNext_b__1(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
  TerminalSceneComponent__SetActionBGColl(_4__this, 0, this->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass226_0___ctor(
        TerminalSceneComponent___c__DisplayClass226_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass226_0___PlayEventTutorial_b__0(
        TerminalSceneComponent___c__DisplayClass226_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass226_0_o *v2; // x19
  System_Action_o *_9__1; // x22
  TerminalSceneComponent_o *_4__this; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  v2 = this;
  if ( (byte_4A5D243 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass226_0_o *)sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass226_0__PlayEventTutorial_b__1__);
    byte_4A5D243 = 1;
  }
  _9__1 = v2->fields.__9__1;
  _4__this = v2->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_TerminalSceneComponent___c__DisplayClass226_0__PlayEventTutorial_b__1__,
      0LL);
    v2->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v5, v6);
  }
  if ( !_4__this )
    sub_1B8880C(this, method);
  TerminalSceneComponent__PlayEventTutorialWithoutAfterAction(_4__this, _9__1, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass226_0___PlayEventTutorial_b__1(
        TerminalSceneComponent___c__DisplayClass226_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  TerminalSceneComponent___c__DisplayClass226_0_o *v4; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (mTerminalList = _4__this->fields.mTerminalList) == 0LL
    || (v4 = this, (this = (TerminalSceneComponent___c__DisplayClass226_0_o *)mTerminalList->fields.mActionBgColl) == 0LL)
    || (this = (TerminalSceneComponent___c__DisplayClass226_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL)) == 0LL )
  {
    sub_1B8880C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  ActionExtensions__Call(v4->fields.callbackAfter, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass244_0___ctor(
        TerminalSceneComponent___c__DisplayClass244_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass244_0___CheckRewardPopupChain_b__0(
        TerminalSceneComponent___c__DisplayClass244_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  System_Int32_array *Instance; // x0
  __int64 v6; // x1
  struct TerminalSceneComponent_o *_4__this; // x8
  CommonUI_o *v8; // x20

  if ( (byte_4A5D244 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_DialogMessageMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D244 = 1;
  }
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v8 = (CommonUI_o *)Instance, (Instance = (System_Int32_array *)_4__this->fields.mTerminalList) == 0LL)
    || (Instance = ScrTerminalListTop__PopEventSvtGets((ScrTerminalListTop_o *)Instance, 0LL), !v8)
    || (CommonUI__SetupLoginResultData(v8, Instance, 0LL),
        (Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_DialogMessageMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
  }
  DialogMessageMaster__ShowAvailables((DialogMessageMaster_o *)Instance, 1, action, 0, 0, 0, 0, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass244_0___CheckRewardPopupChain_b__1(
        TerminalSceneComponent___c__DisplayClass244_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__5; // x22
  CommonUI_o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5D245 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass244_0__CheckRewardPopupChain_b__5__);
    byte_4A5D245 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__5 = this->fields.__9__5;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent___c__DisplayClass244_0__CheckRewardPopupChain_b__5__,
      0LL);
    this->fields.__9__5 = _9__5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__5, (int32_t)_9__5, v9, v10);
  }
  if ( !v8 )
    sub_1B8880C(Instance, v6);
  CommonUI__StartLoginAndCampaignBonus(v8, action, _9__5, -1, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass244_0___CheckRewardPopupChain_b__3(
        TerminalSceneComponent___c__DisplayClass244_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (TerminalSceneComponent___c__DisplayClass244_0_o *)_4__this->fields.mTerminalList) == 0LL )
    sub_1B8880C(this, action);
  ScrTerminalListTop__CheckLoginAfterTransitionDialog((ScrTerminalListTop_o *)this, action, 100, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass244_0___CheckRewardPopupChain_b__4(
        TerminalSceneComponent___c__DisplayClass244_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  if ( (byte_4A5D246 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5D246 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (TerminalSceneComponent__CheckOpenCampaignDirectBonus(_4__this, 0LL),
        (_4__this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__ClearLoginResultData((CommonUI_o *)_4__this, 0LL),
        (_4__this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__ReleaseFortuneBonusAssetData((CommonUI_o *)_4__this, 0LL),
        (_4__this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(_4__this, method);
  }
  CommonUI__ReleaseSelectBonusDialogAsset((CommonUI_o *)_4__this, 0LL);
  ActionExtensions__Call(this->fields.afterChain, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass244_0___CheckRewardPopupChain_b__5(
        TerminalSceneComponent___c__DisplayClass244_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (TerminalSceneComponent___c__DisplayClass244_0_o *)_4__this->fields.mPlayerStatus) == 0LL )
    sub_1B8880C(this, method);
  ScrPlayerStatus__mfInitUserData((ScrPlayerStatus_o *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass245_0___ctor(
        TerminalSceneComponent___c__DisplayClass245_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass245_0___CheckOpenCampaignDirectBonus_b__0(
        TerminalSceneComponent___c__DisplayClass245_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(this, method);
  _4__this->fields._IsPlayingCampaignDirectBonus_k__BackingField = 0;
}


void __fastcall TerminalSceneComponent___c__DisplayClass245_0___CheckOpenCampaignDirectBonus_b__1(
        TerminalSceneComponent___c__DisplayClass245_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  TerminalPramsManager_c *v8; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4A5D247 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5D247 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A588E1 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588E1 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    sub_1B8880C(v5, v3);
  CommonUI__OpenCampaignDirectBonus(
    (CommonUI_o *)Instance,
    v5->static_fields->_CampaignDirectBonus_k__BackingField,
    this->fields.endAction,
    0LL);
  if ( !byte_4A588D7 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588D7 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v8->static_fields;
  static_fields->_CampaignDirectBonus_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->_CampaignDirectBonus_k__BackingField, 0, v6, v7);
  TerminalPramsManager__CampaignDirectBonus_SaveData(0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass252_0___ctor(
        TerminalSceneComponent___c__DisplayClass252_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass252_0___CheckSaveRouteSelect_b__0(
        TerminalSceneComponent___c__DisplayClass252_0_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  if ( (byte_4A5D248 & 1) == 0 )
  {
    sub_1B885B0(&ScriptManager_TypeInfo);
    byte_4A5D248 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0LL);
  ScriptManager__ClearSelectRouteArrayInCollection(0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass254_0___ctor(
        TerminalSceneComponent___c__DisplayClass254_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass254_0___CheckMasterMissionReset_b__0(
        TerminalSceneComponent___c__DisplayClass254_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  TerminalSceneComponent_c *v10; // x0
  System_String_o *MASTER_MISSION_RESET_KEY; // x21
  System_String_o *v12; // x0
  Il2CppObject *Instance; // x19
  System_Action_o *v14; // x21

  if ( (byte_4A5D249 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass254_1__CheckMasterMissionReset_b__1__);
    sub_1B885B0(&TerminalSceneComponent___c__DisplayClass254_1_TypeInfo);
    byte_4A5D249 = 1;
  }
  v5 = sub_1B887FC(TerminalSceneComponent___c__DisplayClass254_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  *(_BYTE *)(v5 + 16) = isDecide;
  v10 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v10 = TerminalSceneComponent_TypeInfo;
  }
  MASTER_MISSION_RESET_KEY = v10->static_fields->MASTER_MISSION_RESET_KEY;
  v12 = System_Int64__ToString((int64_t)&this->fields, 0LL);
  UnityEngine_PlayerPrefs__SetString(MASTER_MISSION_RESET_KEY, v12, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass254_1__CheckMasterMissionReset_b__1__,
    0LL);
  if ( !Instance )
LABEL_8:
    sub_1B8880C(v6, v7);
  CommonUI__CloseConfirmDialog_30494572((CommonUI_o *)Instance, v14, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass254_0___CheckMasterMissionReset_b__2(
        TerminalSceneComponent___c__DisplayClass254_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  ScrPlayerStatus_o *mPlayerStatus; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (mPlayerStatus = _4__this->fields.mPlayerStatus) == 0LL )
    sub_1B8880C(this, method);
  ScrPlayerStatus__OpenMasterMission(mPlayerStatus, this->fields.callback, -1, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass254_1___ctor(
        TerminalSceneComponent___c__DisplayClass254_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass254_1___CheckMasterMissionReset_b__1(
        TerminalSceneComponent___c__DisplayClass254_1_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass254_1_o *v2; // x20
  AvalonSceneManager_c *v3; // x8
  CommonUI_o *v4; // x19
  struct TerminalSceneComponent___c__DisplayClass254_0_o *CS___8__locals1; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__2; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  struct TerminalSceneComponent___c__DisplayClass254_0_o *v10; // x8

  v2 = this;
  if ( (byte_4A5D24A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (TerminalSceneComponent___c__DisplayClass254_1_o *)sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass254_0__CheckMasterMissionReset_b__2__);
    byte_4A5D24A = 1;
  }
  if ( v2->fields.isDecide )
  {
    this = (TerminalSceneComponent___c__DisplayClass254_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__2,
          (Il2CppObject *)CS___8__locals1,
          Method_TerminalSceneComponent___c__DisplayClass254_0__CheckMasterMissionReset_b__2__,
          0LL);
        CS___8__locals1->fields.__9__2 = _9__2;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&CS___8__locals1->fields.__9__2, (int32_t)_9__2, v8, v9);
      }
      if ( v4 )
      {
        CommonUI__maskFadeout(v4, 1, DEFAULT_FADE_TIME, _9__2, 0LL);
        return;
      }
    }
LABEL_13:
    sub_1B8880C(this, method);
  }
  v10 = v2->fields.CS___8__locals1;
  if ( !v10 )
    goto LABEL_13;
  ActionExtensions__Call(v10->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass255_0___ctor(
        TerminalSceneComponent___c__DisplayClass255_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass255_0___CheckNotificationDialog_b__0(
        TerminalSceneComponent___c__DisplayClass255_0_o *this,
        const MethodInfo *method)
{
  BattleResultBondsComponent_c *v3; // x0

  if ( (byte_4A5D24B & 1) == 0 )
  {
    sub_1B885B0(&BattleResultBondsComponent_TypeInfo);
    byte_4A5D24B = 1;
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


void __fastcall TerminalSceneComponent___c__DisplayClass255_0___CheckNotificationDialog_b__2(
        TerminalSceneComponent___c__DisplayClass255_0_o *this,
        const MethodInfo *method)
{
  BattleResultBondsComponent_c *v3; // x0

  if ( (byte_4A5D24C & 1) == 0 )
  {
    sub_1B885B0(&BattleResultBondsComponent_TypeInfo);
    byte_4A5D24C = 1;
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


void __fastcall TerminalSceneComponent___c__DisplayClass255_1___ctor(
        TerminalSceneComponent___c__DisplayClass255_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass255_1___CheckNotificationDialog_b__1(
        TerminalSceneComponent___c__DisplayClass255_1_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct TerminalSceneComponent___c__DisplayClass255_0_o *CS___8__locals1; // x21
  GetSvtCoin_array *coin; // x20
  System_Action_o *_9__2; // x22
  CommonUI_o *v8; // x19
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5D24D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass255_0__CheckNotificationDialog_b__2__);
    byte_4A5D24D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  coin = this->fields.coin;
  _9__2 = CS___8__locals1->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)CS___8__locals1,
      Method_TerminalSceneComponent___c__DisplayClass255_0__CheckNotificationDialog_b__2__,
      0LL);
    CS___8__locals1->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&CS___8__locals1->fields.__9__2, (int32_t)_9__2, v9, v10);
  }
  if ( !v8 )
LABEL_8:
    sub_1B8880C(Instance, v4);
  CommonUI__CreateServantCoinConfirmDialog(v8, 1, coin, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent__coFadein_WorldDisp_d__190___ctor(
        TerminalSceneComponent__coFadein_WorldDisp_d__190_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TerminalSceneComponent__coFadein_WorldDisp_d__190__MoveNext(
        TerminalSceneComponent__coFadein_WorldDisp_d__190_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent__coFadein_WorldDisp_d__190_o *v2; // x19
  int32_t _1__state; // w8
  struct TerminalSceneComponent_o *_4__this; // x20
  Il2CppObject *v5; // x22
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3
  struct TerminalSceneComponent_o *v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *endAct; // x1
  TerminalPramsManager_c *v14; // x0
  TerminalPramsManager_c *v15; // x0
  System_Collections_IEnumerator_o *v16; // x0
  System_Action_c *klass; // x8
  __int64 v18; // x8
  TerminalPramsManager_c *v19; // x0
  System_Collections_IEnumerator_o *v20; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v22; // w2
  int32_t v23; // w3
  bool result; // w0
  Il2CppObject *Master_object; // x21
  System_String_o *ShowingFolderBGM; // x0
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v28; // x8
  Il2CppObject *v29; // x21
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v31; // x0
  __int64 *v32; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct ScrTerminalListTop_o *v34; // x8
  Il2CppObject *_8__1; // x19
  System_Action_o *v36; // x21
  AvalonSceneManager_c *v37; // x8
  System_Action_o *v38; // x19
  struct TerminalSceneComponent___c__DisplayClass190_0_o *v39; // x9
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4A5D252 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_WarMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1B885B0(&System_GC_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1B885B0(&SoundManager_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass190_0__coFadein_WorldDisp_b__0__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass190_0__coFadein_WorldDisp_b__1__);
    sub_1B885B0(&Method_TerminalSceneComponent___c__DisplayClass190_0__coFadein_WorldDisp_b__2__);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)sub_1B885B0(&TerminalSceneComponent___c__DisplayClass190_0_TypeInfo);
    byte_4A5D252 = 1;
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
    v5 = (Il2CppObject *)sub_1B887FC(TerminalSceneComponent___c__DisplayClass190_0_TypeInfo);
    System_Object___ctor(v5, 0LL);
    v2->fields.__8__1 = (struct TerminalSceneComponent___c__DisplayClass190_0_o *)v5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__8__1, (int32_t)v5, v6, v7);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_111;
    v10 = v2->fields.__4__this;
    *(_QWORD *)&this->fields.__1__state = v10;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v10, v8, v9);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_111;
    endAct = (Il2CppObject *)v2->fields.endAct;
    this->fields.__2__current = endAct;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)endAct, v11, v12);
    v2->fields._isAuto_5__2 = 0;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A58376 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A58376 = 1;
    }
    v14 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v14 = TerminalPramsManager_TypeInfo;
    }
    if ( !v14->static_fields->_IsMapReturnFolder_k__BackingField )
    {
      if ( !v14->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v14);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)TerminalPramsManager__IsAuto(0LL);
      v2->fields._isAuto_5__2 = (unsigned __int8)this & 1;
      if ( !_4__this )
        goto LABEL_111;
      TerminalSceneComponent__EndAuto(_4__this, 0LL);
      if ( !byte_4A5629E )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A5629E = 1;
      }
      v15 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v15 = TerminalPramsManager_TypeInfo;
      }
      if ( v15->static_fields->_isPlayingQuestPhaseRewardEffect_k__BackingField )
      {
        v16 = TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect(_4__this, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)_4__this, v16, 0LL);
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
    if ( !byte_4A57177 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57177 = 1;
    }
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)TerminalPramsManager_TypeInfo;
    }
    if ( HIBYTE(this[2].fields.endAct[1].klass) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4A5629D )
      {
        sub_1B885B0(&TerminalSceneComponent_TypeInfo);
        byte_4A5629D = 1;
      }
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)TerminalSceneComponent_TypeInfo;
      }
      klass = this[2].fields.endAct->klass;
      if ( !klass )
        goto LABEL_111;
      v18 = *(_QWORD *)&klass->_2.thread_static_fields_offset;
      if ( !v18 )
        goto LABEL_111;
      this = *(TerminalSceneComponent__coFadein_WorldDisp_d__190_o **)(v18 + 536);
      if ( !this )
        goto LABEL_111;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    }
    if ( !_4__this )
      goto LABEL_111;
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)_4__this->fields.mTerminalMap;
    if ( !this )
      goto LABEL_111;
    ScrTerminalMap__SetDisp((ScrTerminalMap_o *)this, 0, 0LL);
    if ( _4__this->fields._IsReq_InitEarthRotateY_k__BackingField )
    {
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)_4__this->fields.mEarthCore;
      _4__this->fields._IsReq_InitEarthRotateY_k__BackingField = 0;
      if ( !this )
        goto LABEL_111;
      BaseCore__SetRotateY_PointInitAngle((BaseCore_o *)this, 0LL);
    }
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)_4__this->fields.mTerminalList;
    if ( !this )
      goto LABEL_111;
    if ( !ScrTerminalListTop__isShowingFolder((ScrTerminalListTop_o *)this, 0LL) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A57DC6 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A57DC6 = 1;
      }
      v19 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v19 = TerminalPramsManager_TypeInfo;
      }
      v19->static_fields->_DispState_k__BackingField = 1;
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)_4__this->fields.mTitleInfo;
      if ( !this )
        goto LABEL_111;
      TitleInfoControl__SetActiveEventInfo_37179576((TitleInfoControl_o *)this, 1, 16, 0, 0, 0LL, 0LL);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_111;
      CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, 0, 1, 0LL);
    }
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_111;
    CommonUI__SetBgCameraActive((CommonUI_o *)this, 1, 0LL);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)_4__this->fields.mTerminalMap;
    if ( !this )
      goto LABEL_111;
    ScrTerminalMap__ReleaseMap((ScrTerminalMap_o *)this, 1, 0LL);
    if ( !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
    System_GC__Collect_62753100(0LL);
    if ( v2->fields.isExecuteUnusedAssets )
    {
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( this )
      {
        AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          v20 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
          v2->fields.__2__current = (Il2CppObject *)v20;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
          sub_1B88554(p__2__current, (int32_t)v20, v22, v23);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
          return result;
        }
      }
      goto LABEL_111;
    }
  }
  if ( !v2->fields._isAuto_5__2 )
  {
    if ( !_4__this )
      goto LABEL_111;
    goto LABEL_94;
  }
  if ( !_4__this )
    goto LABEL_111;
  this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)_4__this->fields.mTerminalList;
  if ( !this )
    goto LABEL_111;
  if ( !ScrTerminalListTop__isShowingFolder((ScrTerminalListTop_o *)this, 0LL) )
    goto LABEL_94;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC3 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC3 = 1;
  }
  this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_111;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          HIDWORD(this[2].fields.endAct->klass),
          (const MethodInfo_311D988 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
  {
LABEL_94:
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)_4__this->fields.mTerminalList;
    if ( !this )
      goto LABEL_111;
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)ScrTerminalListTop__get_IsActiveBlankEarth(
                                                                    (ScrTerminalListTop_o *)this,
                                                                    0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      mTerminalList = _4__this->fields.mTerminalList;
      if ( !mTerminalList )
        goto LABEL_111;
      if ( !mTerminalList->fields.isBackFromBlankEarthMap )
        TerminalSceneComponent__playDefaultBgm(_4__this, 0LL);
    }
    v34 = _4__this->fields.mTerminalList;
    if ( v34 )
    {
      if ( v34->fields.isBackFromBlankEarthMap )
      {
        _8__1 = (Il2CppObject *)v2->fields.__8__1;
        v36 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(
          v36,
          _8__1,
          Method_TerminalSceneComponent___c__DisplayClass190_0__coFadein_WorldDisp_b__1__,
          0LL);
        TerminalSceneComponent__StartWindowMessage(_4__this, v36, 0LL);
        return 0;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v37 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v37 = AvalonSceneManager_TypeInfo;
      }
      v29 = (Il2CppObject *)v2->fields.__8__1;
      DEFAULT_FADE_TIME = v37->static_fields->DEFAULT_FADE_TIME;
      v31 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      v32 = &Method_TerminalSceneComponent___c__DisplayClass190_0__coFadein_WorldDisp_b__2__;
      goto LABEL_105;
    }
LABEL_111:
    sub_1B8880C(this, method);
  }
  this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)_4__this->fields.mTerminalList;
  if ( !this )
    goto LABEL_111;
  ShowingFolderBGM = ScrTerminalListTop__GetShowingFolderBGM((ScrTerminalListTop_o *)this, 0LL);
  TerminalSceneComponent__playBgm(_4__this, ShowingFolderBGM, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57177 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57177 = 1;
  }
  this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)TerminalPramsManager_TypeInfo;
  }
  if ( HIBYTE(this[2].fields.endAct[1].klass) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v28 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v28 = AvalonSceneManager_TypeInfo;
    }
    v29 = (Il2CppObject *)v2->fields.__8__1;
    DEFAULT_FADE_TIME = v28->static_fields->DEFAULT_FADE_TIME;
    v31 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    v32 = &Method_TerminalSceneComponent___c__DisplayClass190_0__coFadein_WorldDisp_b__0__;
LABEL_105:
    v38 = v31;
    System_Action___ctor(v31, v29, *v32, 0LL);
    if ( !Instance )
      goto LABEL_111;
    CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v38, 0LL);
    return 0;
  }
  if ( !entity )
    goto LABEL_111;
  v39 = v2->fields.__8__1;
  if ( !v39 )
    goto LABEL_111;
  TerminalSceneComponent__FadeInAndTriggerEventEffects(
    _4__this,
    v2->fields.fadeTime,
    (int32_t)entity[6].klass,
    v39->fields.endAct,
    0LL);
  return 0;
}


Il2CppObject *__fastcall TerminalSceneComponent__coFadein_WorldDisp_d__190__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__coFadein_WorldDisp_d__190_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TerminalSceneComponent__coFadein_WorldDisp_d__190__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__coFadein_WorldDisp_d__190_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_TerminalSceneComponent__coFadein_WorldDisp_d__190_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall TerminalSceneComponent__coFadein_WorldDisp_d__190__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__coFadein_WorldDisp_d__190_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TerminalSceneComponent__coFadein_WorldDisp_d__190__System_IDisposable_Dispose(
        TerminalSceneComponent__coFadein_WorldDisp_d__190_o *this,
        const MethodInfo *method)
{
  ;
}