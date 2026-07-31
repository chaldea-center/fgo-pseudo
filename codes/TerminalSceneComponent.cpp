void TerminalSceneComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  TerminalSceneComponent_c *v7; // x8
  __int64 v8; // x1
  struct TerminalSceneComponent_StaticFields *static_fields; // x0
  int32_t v10; // w1
  struct TerminalSceneComponent_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int32_t v18; // w1
  struct TerminalSceneComponent_StaticFields *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t v26; // w1
  struct TerminalSceneComponent_StaticFields *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  int32_t v34; // w1
  struct TerminalSceneComponent_StaticFields *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  int32_t v42; // w1
  struct TerminalSceneComponent_StaticFields *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7

  if ( (byte_593AB06 & 1) == 0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_10473/*"OverwriteCommonBG2"*/);
    sub_21FFC50(&StringLiteral_11064/*"PlanetEarthChapterPlayState_{0}"*/);
    sub_21FFC50(&StringLiteral_10472/*"OverwriteCommonBG1"*/);
    sub_21FFC50(&StringLiteral_22507/*"masterMissionResetKey"*/);
    sub_21FFC50(&StringLiteral_14221/*"Terminal/EarthCore/{0:D2}"*/);
    sub_21FFC50(&StringLiteral_10452/*"OrdealCallChapterPlayState"*/);
    byte_593AB06 = 1;
  }
  v7 = TerminalSceneComponent_TypeInfo;
  v8 = StringLiteral_22507/*"masterMissionResetKey"*/;
  TerminalSceneComponent_TypeInfo->static_fields->DEFAULT_AMBIENT_LIGHT_COLOR = (struct UnityEngine_Color_o)xmmword_E934D0;
  static_fields = v7->static_fields;
  static_fields->MASTER_MISSION_RESET_KEY = (struct System_String_o *)v8;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->MASTER_MISSION_RESET_KEY, v8, v1, v2, v3, v4, v5, v6);
  v10 = StringLiteral_14221/*"Terminal/EarthCore/{0:D2}"*/;
  v11 = TerminalSceneComponent_TypeInfo->static_fields;
  v11->EARTH_ASSET_NAME = (struct System_String_o *)StringLiteral_14221/*"Terminal/EarthCore/{0:D2}"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->EARTH_ASSET_NAME, v10, v12, v13, v14, v15, v16, v17);
  v18 = StringLiteral_10452/*"OrdealCallChapterPlayState"*/;
  v19 = TerminalSceneComponent_TypeInfo->static_fields;
  v19->OrdealCallChapterPlayStateKey = (struct System_String_o *)StringLiteral_10452/*"OrdealCallChapterPlayState"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v19->OrdealCallChapterPlayStateKey,
    v18,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = StringLiteral_11064/*"PlanetEarthChapterPlayState_{0}"*/;
  v27 = TerminalSceneComponent_TypeInfo->static_fields;
  v27->PlanetEarthChapterPlayStateKeyFormat = (struct System_String_o *)StringLiteral_11064/*"PlanetEarthChapterPlayState_{0}"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v27->PlanetEarthChapterPlayStateKeyFormat,
    v26,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = StringLiteral_10472/*"OverwriteCommonBG1"*/;
  v35 = TerminalSceneComponent_TypeInfo->static_fields;
  v35->OVERWRITE_COMMON_BG_TYPE1_KEY = (struct System_String_o *)StringLiteral_10472/*"OverwriteCommonBG1"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v35->OVERWRITE_COMMON_BG_TYPE1_KEY,
    v34,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = StringLiteral_10473/*"OverwriteCommonBG2"*/;
  v43 = TerminalSceneComponent_TypeInfo->static_fields;
  v43->OVERWRITE_COMMON_BG_TYPE2_KEY = (struct System_String_o *)StringLiteral_10473/*"OverwriteCommonBG2"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v43->OVERWRITE_COMMON_BG_TYPE2_KEY,
    v42,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  *(_WORD *)&TerminalSceneComponent_TypeInfo->static_fields->isTitleToTerminalTransition = 0;
}


void TerminalSceneComponent___ctor(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  this->fields.TUTORIAL_SPOT_ARROW_POS = (struct UnityEngine_Vector2_o)3263954944LL;
  this->fields.TUTORIAL_SPOT_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_E93B60;
  *(_OWORD *)&this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x = xmmword_E94B10;
  this->fields.TUTORIAL_QUEST_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_E93720;
  *(_OWORD *)&this->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x = xmmword_E947C0;
  this->fields.TUTORIAL_MENU_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_E92F70;
  *(_OWORD *)&this->fields.TUTORIAL_MENU_MESSAGE_POS.fields.x = xmmword_E93390;
  this->fields.TUTORIAL_GACHA_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_E94480;
  this->fields.TUTORIAL_MENU_ARROW_POS2 = (struct UnityEngine_Vector2_o)0xC366000043DB0000LL;
  this->fields.TUTORIAL_COMBINE_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_E93230;
  __asm { FMOV            V1.4S, #1.0 }
  this->fields.isTopLoginBusy = 1;
  this->fields._FirstFadeMapColorKind_k__BackingField = 2;
  this->fields.TUTORIAL_COMBINE_ARROW_POS = (struct UnityEngine_Vector2_o)0xC3200000C3058000LL;
  this->fields._FirstFadeMapColor_k__BackingField = _Q1;
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void TerminalSceneComponent__Awake(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalSceneComponent_c *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_GameObject_o *mBgText; // x0
  bool v13; // w1

  if ( (byte_593AAAE & 1) == 0 )
  {
    sub_21FFC50(&ServantCommentManager_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_593AAAE = 1;
  }
  v9 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v9 = TerminalSceneComponent_TypeInfo;
  }
  v9->static_fields->mInstance = this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)TerminalSceneComponent_TypeInfo->static_fields,
    (int32_t)this,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v10);
  if ( (ServantCommentManager__GetUiFlag(0) | 2) != 2 )
  {
    mBgText = this->fields.mBgText;
    if ( mBgText )
    {
      UnityEngine_GameObject__SetActive(mBgText, 0, 0);
      mBgText = this->fields.mBgGradLeft;
      if ( mBgText )
      {
        UnityEngine_GameObject__SetActive(mBgText, 0, 0);
        mBgText = this->fields.mBgGradRight;
        if ( mBgText )
        {
          v13 = 0;
          goto LABEL_16;
        }
      }
    }
LABEL_17:
    sub_21FFECC(mBgText, v11);
  }
  mBgText = this->fields.mBgText;
  if ( !mBgText )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(mBgText, 1, 0);
  mBgText = this->fields.mBgGradLeft;
  if ( !mBgText )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(mBgText, 1, 0);
  mBgText = this->fields.mBgGradRight;
  if ( !mBgText )
    goto LABEL_17;
  v13 = 1;
LABEL_16:
  UnityEngine_GameObject__SetActive(mBgText, v13, 0);
}


void TerminalSceneComponent__CallAfterTopHome(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( this->fields.isTopLoginBusy )
  {
    this->fields.afterTopLogin = callback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.afterTopLogin,
      (int32_t)callback,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
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
    sub_21FFECC(0, item);
  ScrTerminalListTop__OpenQuestResetDialog(mTerminalList, item, 0);
}


// local variable allocation has failed, the output may be wrong!
bool TerminalSceneComponent__CallQuestInfoAutoOpen(
        TerminalSceneComponent_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  QuestInformationComponent_o *mQuestInformation; // x0

  mQuestInformation = this->fields.mQuestInformation;
  if ( !mQuestInformation )
    sub_21FFECC(0, *(_QWORD *)&questId);
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
    sub_21FFECC(this, item);
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
    || (this = (TerminalSceneComponent_o *)this->fields.mQuestInformation,
        mQuestBoardListViewManager->fields._IsShowingInfo_k__BackingField = 0,
        !this) )
  {
    sub_21FFECC(this, method);
  }
  QuestInformationComponent__Close((QuestInformationComponent_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
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
    || (this = (TerminalSceneComponent_o *)this->fields.mQuestInformation,
        mQuestBoardListViewManager->fields._IsShowingInfo_k__BackingField = 0,
        !this) )
  {
    sub_21FFECC(this, isPlaySe);
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
  __int64 v6; // x1
  EventTutorialMaster_EventTutorialArgs_c *v7; // x0
  __int64 v8; // x21
  EventTutorialEntity_array *AvailableTutorialArray; // x19
  int max_length; // w8
  System_Collections_ICollection_o *v11; // x20
  unsigned int v12; // w23
  EventTutorialEntity_o *v13; // x24
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  EventTutorialEntity_TextTuto_o *v15; // x8
  struct EventTutorialEntity_TextTuto_array *v16; // x8
  EventTutorialEntity_TextTuto_o *v17; // x8
  System_Collections_ICollection_o *v18; // x8
  int klass; // w25
  struct EventTutorialEntity_TextTuto_array *v20; // x8
  EventTutorialEntity_TextTuto_o *v21; // x8

  if ( (byte_593AB01 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_593AB01 = 1;
  }
  v4 = (EventTutorialMaster_EventTutorialArgs_o *)sub_21FFEBC(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor(v4, 0);
  if ( !v4 )
    goto LABEL_31;
  v7 = EventTutorialMaster_EventTutorialArgs_TypeInfo;
  v4->fields.eventId = 0;
  v4->fields.openKind = openType;
  v8 = sub_21FFEBC(v7);
  EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v8, 0);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = 0x5300000000LL,
        AvailableTutorialArray = EventTutorialMaster__GetAvailableTutorialArray(v4, 0),
        IsNullOrEmpty = (System_Collections_ICollection_o *)EventTutorialMaster__GetAvailableTutorialArray(
                                                              (EventTutorialMaster_EventTutorialArgs_o *)v8,
                                                              0),
        !AvailableTutorialArray) )
  {
LABEL_31:
    sub_21FFECC(IsNullOrEmpty, v6);
  }
  max_length = AvailableTutorialArray->max_length;
  if ( max_length >= 1 )
  {
    v11 = IsNullOrEmpty;
    v12 = 0;
    while ( v12 < max_length )
    {
      v13 = AvailableTutorialArray->m_Items[v12];
      if ( !v13 )
        goto LABEL_31;
      IsNullOrEmpty = (System_Collections_ICollection_o *)BasicHelper__IsNullOrEmpty(
                                                            (System_Collections_ICollection_o *)v13->fields.textJson,
                                                            0);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        textJson = v13->fields.textJson;
        if ( !textJson )
          goto LABEL_31;
        if ( !LODWORD(textJson->max_length) )
          break;
        v15 = textJson->m_Items[0];
        if ( !v15 )
          goto LABEL_31;
        if ( v15->fields.isQuestRelease )
        {
          IsNullOrEmpty = (System_Collections_ICollection_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( IsNullOrEmpty )
          {
            IsNullOrEmpty = (System_Collections_ICollection_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            v16 = v13->fields.textJson;
            if ( !v16 )
              goto LABEL_31;
            if ( !LODWORD(v16->max_length) )
              break;
            v17 = v16->m_Items[0];
            if ( !v17 || !IsNullOrEmpty )
              goto LABEL_31;
            IsNullOrEmpty = (System_Collections_ICollection_o *)QuestTree__GetQuestInfo(
                                                                  (QuestTree_o *)IsNullOrEmpty,
                                                                  v17->fields.questId,
                                                                  0);
            if ( IsNullOrEmpty )
            {
              v18 = IsNullOrEmpty;
              IsNullOrEmpty = (System_Collections_ICollection_o *)BalanceConfig_TypeInfo;
              klass = (int)v18[4].klass;
              if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6);
                IsNullOrEmpty = (System_Collections_ICollection_o *)BalanceConfig_TypeInfo;
              }
              if ( klass == *((_DWORD *)IsNullOrEmpty[11].monitor + 215) )
              {
                IsNullOrEmpty = (System_Collections_ICollection_o *)BasicHelper__IsNullOrEmpty(v11, 0);
                if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
                {
                  v20 = v13->fields.textJson;
                  if ( !v20 )
                    goto LABEL_31;
                  if ( !LODWORD(v20->max_length) )
                    break;
                  v21 = v20->m_Items[0];
                  if ( !v21 )
                    goto LABEL_31;
                  v21->fields.isQuestRelease = 0;
                }
              }
            }
          }
        }
      }
      max_length = AvailableTutorialArray->max_length;
      if ( (int)++v12 >= max_length )
        return;
    }
    sub_21FFED4(IsNullOrEmpty);
  }
}


bool TerminalSceneComponent__CheckEventDailyPoint(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0
  int64_t BeforeTimeEventDailyPoint_k__BackingField; // x21
  System_DateTime_o v9; // x1
  System_DateTime_o v10; // x20
  TerminalPramsManager_c *v11; // x0
  System_DateTime_o v12; // x1
  System_DateTime_o v13; // x0
  __int64 v14; // x1
  int32_t Hour; // w19
  BalanceConfig_c *v16; // x8
  System_DateTime_o v17; // x0
  System_DateTime_o v18; // x0
  int32_t Year; // w19
  System_DateTime_o v20; // x0
  int32_t Month; // w21
  System_DateTime_o v22; // x0
  int32_t Day; // w0
  __int64 v24; // x1
  BalanceConfig_c *v25; // x8
  int32_t v26; // w22
  System_DateTime_o v27; // x0
  System_DateTime_o v28; // x1
  System_DateTime_o v29; // x0
  System_DateTime_o t2; // [xsp+0h] [xbp-50h] BYREF
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_593AAE3 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_21FFC50(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_21FFC50(&System_DateTime_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593AAE3 = 1;
  }
  entity = 0;
  t2.fields._dateData = 0;
  dateData = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_40;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_40:
    sub_21FFECC(Instance, v5);
  if ( EventDetailEntity__IsEventDailyPoint((EventDetailEntity_o *)entity, 0) )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
    if ( !byte_5935A0B )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5935A0B = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
      v7 = TerminalPramsManager_TypeInfo;
    }
    BeforeTimeEventDailyPoint_k__BackingField = v7->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
    v10.fields._dateData = NetworkManager__getDateTime_48311376(BeforeTimeEventDailyPoint_k__BackingField, 0).fields._dateData;
    if ( !byte_5935A0A )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5935A0A = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9.fields._dateData);
      v11 = TerminalPramsManager_TypeInfo;
    }
    if ( BeforeTimeEventDailyPoint_k__BackingField < 1
      || v11->static_fields->_EventDailyPointEventId_k__BackingField != eventId )
    {
      return 1;
    }
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9.fields._dateData);
    dateData = NetworkManager__getServerDateTime(0).fields._dateData;
    if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v12.fields._dateData);
    v13.fields._dateData = (uint64_t)&dateData;
    Hour = System_DateTime__get_Hour(v13, 0);
    v16 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v14);
      v16 = BalanceConfig_TypeInfo;
    }
    if ( Hour < v16->static_fields->EventDailyPointResetAt )
    {
      if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v14);
      v17.fields._dateData = (uint64_t)&dateData;
      dateData = System_DateTime__AddDays(v17, -1.0, 0).fields._dateData;
    }
    if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v14);
    v18.fields._dateData = (uint64_t)&dateData;
    Year = System_DateTime__get_Year(v18, 0);
    v20.fields._dateData = (uint64_t)&dateData;
    Month = System_DateTime__get_Month(v20, 0);
    v22.fields._dateData = (uint64_t)&dateData;
    Day = System_DateTime__get_Day(v22, 0);
    v25 = BalanceConfig_TypeInfo;
    v26 = Day;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v24);
      v25 = BalanceConfig_TypeInfo;
    }
    v27.fields._dateData = (uint64_t)&t2;
    System_DateTime___ctor_76800996(v27, Year, Month, v26, v25->static_fields->EventDailyPointResetAt, 0, 0, 0);
    v28.fields._dateData = t2.fields._dateData;
    v29.fields._dateData = v10.fields._dateData;
    if ( System_DateTime__op_LessThanOrEqual(v29, v28, 0) )
      return 1;
  }
  return 0;
}


void TerminalSceneComponent__CheckExchangeDialogTheFree(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *String_83184936; // x0
  const MethodInfo *v6; // x5

  if ( (byte_593AAF5 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1988/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_TITLE"*/);
    sub_21FFC50(&StringLiteral_20552/*"freeShopIds"*/);
    sub_21FFC50(&StringLiteral_1987/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_DETAIL"*/);
    byte_593AAF5 = 1;
  }
  String_83184936 = UnityEngine_PlayerPrefs__GetString_83184936((System_String_o *)StringLiteral_20552/*"freeShopIds"*/, 0);
  if ( System_String__IsNullOrEmpty(String_83184936, 0) )
    ActionExtensions__Call(callback, 0);
  else
    TerminalSceneComponent__OpenExchangeDialogue(
      this,
      (System_String_o *)StringLiteral_20552/*"freeShopIds"*/,
      (System_String_o *)StringLiteral_1988/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_TITLE"*/,
      (System_String_o *)StringLiteral_1987/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_DETAIL"*/,
      callback,
      v6);
}


void TerminalSceneComponent__CheckExchangeDialogTheReturn(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *String_83184936; // x0
  const MethodInfo *v6; // x5

  if ( (byte_593AAF6 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1990/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_TITLE"*/);
    sub_21FFC50(&StringLiteral_24251/*"returnRarePriShopIds"*/);
    sub_21FFC50(&StringLiteral_1989/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_DETAIL"*/);
    byte_593AAF6 = 1;
  }
  String_83184936 = UnityEngine_PlayerPrefs__GetString_83184936((System_String_o *)StringLiteral_24251/*"returnRarePriShopIds"*/, 0);
  if ( System_String__IsNullOrEmpty(String_83184936, 0) )
    ActionExtensions__Call(callback, 0);
  else
    TerminalSceneComponent__OpenExchangeDialogue(
      this,
      (System_String_o *)StringLiteral_24251/*"returnRarePriShopIds"*/,
      (System_String_o *)StringLiteral_1990/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_TITLE"*/,
      (System_String_o *)StringLiteral_1989/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_DETAIL"*/,
      callback,
      v6);
}


void TerminalSceneComponent__CheckLastPlayBgm(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTerminalList; // x20
  __int64 v4; // x1
  ScrTerminalListTop_o *v5; // x0

  if ( (byte_593AAD5 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593AAD5 = 1;
  }
  mTerminalList = (UnityEngine_Object_o *)this->fields.mTerminalList;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mTerminalList, 0, 0) )
  {
    v5 = this->fields.mTerminalList;
    if ( !v5 )
      sub_21FFECC(0, v4);
    ScrTerminalListTop__CheckLastPlayBgm(v5, 0);
  }
}


void TerminalSceneComponent__CheckMasterMissionReset(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  ScrPlayerStatus_o *mPlayerStatus; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Action_o **v14; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  int64_t MstMissionStarts; // x8
  TerminalSceneComponent_c *v23; // x0
  _QWORD *v24; // x21
  System_String_o *String; // x0
  int64_t v26; // x0
  __int64 v27; // x1
  __int64 v28; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v30; // x21
  System_String_o *v31; // x22
  System_String_o *v32; // x23
  CommonConfirmDialog_ClickDelegate_o *v33; // x24
  TerminalSceneComponent_c *v34; // x0
  struct TerminalSceneComponent_StaticFields *static_fields; // x8
  int64_t v36; // x0
  System_String_o *MASTER_MISSION_RESET_KEY; // x19
  System_String_o *v38; // x0

  if ( (byte_593AAF9 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass293_0__CheckMasterMissionReset_b__0__);
    sub_21FFC50(&TerminalSceneComponent___c__DisplayClass293_0_TypeInfo);
    sub_21FFC50(&StringLiteral_9164/*"MST_MISSION_CHANGE_MSG"*/);
    sub_21FFC50(&StringLiteral_9163/*"MST_MISSION_CHANGE_DECIDE"*/);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_1198/*"0"*/);
    byte_593AAF9 = 1;
  }
  v5 = sub_21FFEBC(TerminalSceneComponent___c__DisplayClass293_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass293_0___ctor((TerminalSceneComponent___c__DisplayClass293_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_20;
  *(_QWORD *)(v5 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = callback;
  v14 = (System_Action_o **)(v5 + 32);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)callback, v15, v16, v17, v18, v19, v20);
  mPlayerStatus = this->fields.mPlayerStatus;
  if ( !mPlayerStatus )
    goto LABEL_20;
  MstMissionStarts = ScrPlayerStatus__GetMstMissionStarts(mPlayerStatus, 0);
  v23 = TerminalSceneComponent_TypeInfo;
  *(_QWORD *)(v5 + 16) = MstMissionStarts;
  v24 = (_QWORD *)(v5 + 16);
  if ( !*(&v23->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v23, v21);
    v23 = TerminalSceneComponent_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             v23->static_fields->MASTER_MISSION_RESET_KEY,
             (System_String_o *)StringLiteral_1198/*"0"*/,
             0);
  v26 = System_Int64__Parse(String, 0);
  if ( *v24 )
  {
    if ( v26 )
    {
      if ( v26 != *v24 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
        v30 = LocalizationManager__Get((System_String_o *)StringLiteral_9164/*"MST_MISSION_CHANGE_MSG"*/, 0);
        v31 = LocalizationManager__Get((System_String_o *)StringLiteral_9163/*"MST_MISSION_CHANGE_DECIDE"*/, 0);
        v32 = LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/, 0);
        v33 = (CommonConfirmDialog_ClickDelegate_o *)sub_21FFEBC(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v33,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent___c__DisplayClass293_0__CheckMasterMissionReset_b__0__,
          0);
        mPlayerStatus = (ScrPlayerStatus_o *)BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7);
        if ( Instance )
        {
          CommonUI__OpenConfirmDecideDlg(
            (CommonUI_o *)Instance,
            (System_String_o *)StringLiteral_1/*""*/,
            v30,
            v31,
            v32,
            v33,
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
        sub_21FFECC(mPlayerStatus, v7);
      }
    }
    else
    {
      v34 = TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v27);
        v34 = TerminalSceneComponent_TypeInfo;
      }
      static_fields = v34->static_fields;
      v36 = v5 + 16;
      MASTER_MISSION_RESET_KEY = static_fields->MASTER_MISSION_RESET_KEY;
      v38 = System_Int64__ToString(v36, 0);
      UnityEngine_PlayerPrefs__SetString(MASTER_MISSION_RESET_KEY, v38, 0);
    }
  }
  ActionExtensions__Call(*v14, 0);
}


void TerminalSceneComponent__CheckNotificationDialog(
        TerminalSceneComponent_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v4; // x19
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_Action_o **v13; // x20
  __int64 v14; // x1
  BattleResultBondsComponent_c *v15; // x0
  __int64 v16; // x1
  BattleResultBondsComponent_c *v17; // x0
  __int64 v18; // x1
  Il2CppObject *String_83184936; // x21
  System_Object_array *v20; // x0
  System_Object_array *v21; // x22
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x23
  __int64 v24; // x25
  Il2CppObject *v25; // x8
  BattleResultBondsComponent_c *v26; // x0
  BattleResultBondsComponent_c *v27; // x0
  EventServantEntity_o *v28; // x21
  System_Action_o *v29; // x20
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  DataMasterBase_TMaster__TEntity__PKType__o *v36; // x22
  __int64 v37; // x22
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  __int64 v44; // x19
  __int64 v45; // x20
  Il2CppObject *v46; // x8
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  System_String_o *v53; // x19
  Il2CppObject *v54; // x22
  Il2CppObject *v55; // [xsp+40h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_593AAFA & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&BattleResultBondsComponent_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_21FFC50(&GetSvtCoin___TypeInfo);
    sub_21FFC50(&GetSvtCoin_TypeInfo);
    sub_21FFC50(&Method_JsonManager_DeserializeArray_GetSvts___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass294_0__CheckNotificationDialog_b__0__);
    sub_21FFC50(&TerminalSceneComponent___c__DisplayClass294_0_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass294_1__CheckNotificationDialog_b__1__);
    sub_21FFC50(&TerminalSceneComponent___c__DisplayClass294_1_TypeInfo);
    sub_21FFC50(&StringLiteral_12940/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/);
    byte_593AAFA = 1;
  }
  v55 = 0;
  entity = 0;
  v4 = sub_21FFEBC(TerminalSceneComponent___c__DisplayClass294_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass294_0___ctor((TerminalSceneComponent___c__DisplayClass294_0_o *)v4, 0);
  if ( !v4 )
    goto LABEL_52;
  *(_QWORD *)(v4 + 16) = callBack;
  v13 = (System_Action_o **)(v4 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)callBack, v7, v8, v9, v10, v11, v12);
  v15 = BattleResultBondsComponent_TypeInfo;
  if ( !*(&BattleResultBondsComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, v14);
    v15 = BattleResultBondsComponent_TypeInfo;
  }
  if ( !UnityEngine_PlayerPrefs__HasKey(v15->static_fields->GET_EXIST_SVT_KEY, 0) )
  {
    ActionExtensions__Call(*v13, 0);
    return;
  }
  v17 = BattleResultBondsComponent_TypeInfo;
  if ( !*(&BattleResultBondsComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, v16);
    v17 = BattleResultBondsComponent_TypeInfo;
  }
  String_83184936 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_83184936(
                                      v17->static_fields->GET_EXIST_SVT_KEY,
                                      0);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v18);
  v20 = JsonManager__DeserializeArray_object_(
          String_83184936,
          (const MethodInfo_38A056C *)Method_JsonManager_DeserializeArray_GetSvts___);
  if ( v20 )
  {
    v21 = v20;
    if ( v20->max_length )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_52;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
      max_length = v21->max_length;
      if ( max_length >= 1 )
      {
        v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v24 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v24 >= max_length )
            sub_21FFED4(Instance);
          v25 = v21->m_Items[v24];
          if ( !v25 || !v23 )
            goto LABEL_52;
          Instance = (DataManager_o *)DataMasterBase_object__object__long___TryGetEntity(
                                        v23,
                                        &entity,
                                        (int64_t)v25[1].klass,
                                        (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = (DataManager_o *)entity;
            if ( !entity )
              goto LABEL_52;
            Instance = (DataManager_o *)UserServantEntity__getEventServant((UserServantEntity_o *)entity, 0);
            if ( Instance )
              break;
            Instance = (DataManager_o *)entity;
            if ( !entity )
              goto LABEL_52;
            Instance = (DataManager_o *)UserServantEntity__getEventServantIgnoreEnd((UserServantEntity_o *)entity, 0);
            if ( Instance )
              break;
          }
          if ( (_DWORD)v24 == LODWORD(v21->max_length) - 1 )
          {
            v26 = BattleResultBondsComponent_TypeInfo;
            if ( !*(&BattleResultBondsComponent_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, v6);
              v26 = BattleResultBondsComponent_TypeInfo;
            }
            UnityEngine_PlayerPrefs__DeleteKey(v26->static_fields->GET_EXIST_SVT_KEY, 0);
            ActionExtensions__Call(*v13, 0);
          }
          max_length = v21->max_length;
          if ( (int)++v24 >= max_length )
            goto LABEL_29;
        }
        v28 = (EventServantEntity_o *)Instance;
        v29 = *(System_Action_o **)(v4 + 24);
        if ( !v29 )
        {
          v29 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          System_Action___ctor(
            v29,
            (Il2CppObject *)v4,
            Method_TerminalSceneComponent___c__DisplayClass294_0__CheckNotificationDialog_b__0__,
            0);
          *(_QWORD *)(v4 + 24) = v29;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 24), (int32_t)v29, v30, v31, v32, v33, v34, v35);
        }
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SvtCoinMaster___);
        if ( entity )
        {
          v36 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          Instance = (DataManager_o *)UserServantEntity__getSvtId((UserServantEntity_o *)entity, 0);
          if ( v36 )
          {
            Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                          v36,
                                          &v55,
                                          (int32_t)Instance,
                                          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v55 )
                goto LABEL_52;
              if ( SHIDWORD(v55[1].klass) >= 1 )
              {
                v37 = sub_21FFEBC(TerminalSceneComponent___c__DisplayClass294_1_TypeInfo);
                TerminalSceneComponent___c__DisplayClass294_1___ctor(
                  (TerminalSceneComponent___c__DisplayClass294_1_o *)v37,
                  0);
                if ( !v37 )
                  goto LABEL_52;
                *(_QWORD *)(v37 + 24) = v4;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v37 + 24), v4, v38, v39, v40, v41, v42, v43);
                v44 = sub_21FFD10(GetSvtCoin___TypeInfo, 1);
                v45 = sub_21FFEBC(GetSvtCoin_TypeInfo);
                GetSvtCoin___ctor((GetSvtCoin_o *)v45, 0);
                v46 = v55;
                if ( !v55 )
                  goto LABEL_52;
                if ( !v45 )
                  goto LABEL_52;
                *(_DWORD *)(v45 + 16) = v55[1].klass;
                *(int32x2_t *)(v45 + 20) = vrev64_s32(*(int32x2_t *)((char *)&v46[1].klass + 4));
                if ( !v44 )
                  goto LABEL_52;
                sub_1FEB8A8(v44, v45);
                sub_1FEB274(v44, 0, v45);
                *(_QWORD *)(v37 + 16) = v44;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v37 + 16), v44, v47, v48, v49, v50, v51, v52);
                v29 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                System_Action___ctor(
                  v29,
                  (Il2CppObject *)v37,
                  Method_TerminalSceneComponent___c__DisplayClass294_1__CheckNotificationDialog_b__1__,
                  0);
              }
            }
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
            v53 = LocalizationManager__Get((System_String_o *)StringLiteral_12940/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, 0);
            v54 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            Instance = (DataManager_o *)EventServantEntity__GetGetMessage(v28, 0);
            if ( v54 )
            {
              CommonUI__OpenNotificationDialog(
                (CommonUI_o *)v54,
                v53,
                (System_String_o *)Instance,
                v29,
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
LABEL_52:
        sub_21FFECC(Instance, v6);
      }
    }
  }
LABEL_29:
  v27 = BattleResultBondsComponent_TypeInfo;
  if ( !*(&BattleResultBondsComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, v6);
    v27 = BattleResultBondsComponent_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v27->static_fields->GET_EXIST_SVT_KEY, 0);
  ActionExtensions__Call(*v13, 0);
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
  __int64 v5; // x24
  __int64 IsWaitingTerminalTopEffectForCampaignDirectBonus; // x0
  ChainableActionBase_o *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x1
  int v21; // w21
  __int64 v22; // x22
  _BOOL4 IsBlankEarthAction; // w23
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  TerminalSceneComponent___c_c *v30; // x8
  __int64 v31; // x25
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x9
  System_Action_object__o *_9__282_0; // x26
  Il2CppObject *v34; // x27
  struct TerminalSceneComponent___c_StaticFields *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  __int64 v42; // x1
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  struct TerminalSceneComponent___c_StaticFields *v49; // x8
  System_Action_object__o *_9__282_1; // x26
  Il2CppObject *v51; // x27
  struct TerminalSceneComponent___c_StaticFields *v52; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  ActionChain_o *v59; // x26
  __int64 v60; // x25
  System_Action_o *v61; // x27
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  const MethodInfo *v68; // x2
  __int64 naturalAligment; // x10
  System_Collections_IEnumerator_o *v70; // x0

  if ( (byte_593AAF1 & 1) == 0 )
  {
    sub_21FFC50(&ActionChain_TypeInfo);
    sub_21FFC50(&System_Action___TypeInfo);
    sub_21FFC50(&System_Action_Action____TypeInfo);
    sub_21FFC50(&System_Action_Action__TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent___c__CheckOpenCampaignDirectBonus_b__282_0__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__CheckOpenCampaignDirectBonus_b__282_1__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass282_0__CheckOpenCampaignDirectBonus_b__2__);
    sub_21FFC50(&TerminalSceneComponent___c__DisplayClass282_0_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent___c_TypeInfo);
    byte_593AAF1 = 1;
  }
  v5 = sub_21FFEBC(TerminalSceneComponent___c__DisplayClass282_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass282_0___ctor((TerminalSceneComponent___c__DisplayClass282_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_40;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  this->fields._IsPlayingCampaignDirectBonus_k__BackingField = 1;
  IsWaitingTerminalTopEffectForCampaignDirectBonus = TerminalSceneComponent__IsWaitingTerminalTopEffectForCampaignDirectBonus(
                                                       this,
                                                       v20);
  if ( !this->fields.mTerminalList )
    goto LABEL_40;
  v21 = IsWaitingTerminalTopEffectForCampaignDirectBonus;
  IsWaitingTerminalTopEffectForCampaignDirectBonus = (__int64)ScrTerminalListTop__GetCurrentLoginEntity(
                                                                this->fields.mTerminalList,
                                                                0);
  if ( !this->fields.mTerminalList )
    goto LABEL_40;
  v22 = IsWaitingTerminalTopEffectForCampaignDirectBonus;
  IsBlankEarthAction = ScrTerminalListTop__IsBlankEarthAction(this->fields.mTerminalList, 0);
  IsWaitingTerminalTopEffectForCampaignDirectBonus = sub_21FFD10(System_Action_Action____TypeInfo, 2);
  v30 = TerminalSceneComponent___c_TypeInfo;
  v31 = IsWaitingTerminalTopEffectForCampaignDirectBonus;
  if ( !*(&TerminalSceneComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v7);
    v30 = TerminalSceneComponent___c_TypeInfo;
  }
  static_fields = v30->static_fields;
  _9__282_0 = (System_Action_object__o *)static_fields->__9__282_0;
  if ( !_9__282_0 )
  {
    if ( !*(&v30->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v30, v7);
      static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)static_fields->__9;
    _9__282_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
    System_Action_object____ctor(
      _9__282_0,
      v34,
      Method_TerminalSceneComponent___c__CheckOpenCampaignDirectBonus_b__282_0__,
      0);
    v35 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v35->__9__282_0 = (struct System_Action_Action__o *)_9__282_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v35->__9__282_0, (int32_t)_9__282_0, v36, v37, v38, v39, v40, v41);
  }
  if ( !v31 )
    goto LABEL_40;
  if ( !*(_DWORD *)(v31 + 24) )
    goto LABEL_41;
  *(_QWORD *)(v31 + 32) = _9__282_0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v31 + 32), (int32_t)_9__282_0, v24, v25, v26, v27, v28, v29);
  IsWaitingTerminalTopEffectForCampaignDirectBonus = (__int64)TerminalSceneComponent___c_TypeInfo;
  if ( !*(&TerminalSceneComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v42);
    IsWaitingTerminalTopEffectForCampaignDirectBonus = (__int64)TerminalSceneComponent___c_TypeInfo;
  }
  v49 = *(struct TerminalSceneComponent___c_StaticFields **)(IsWaitingTerminalTopEffectForCampaignDirectBonus + 184);
  _9__282_1 = (System_Action_object__o *)v49->__9__282_1;
  if ( !_9__282_1 )
  {
    if ( !*(_DWORD *)(IsWaitingTerminalTopEffectForCampaignDirectBonus + 228) )
    {
      j_il2cpp_runtime_class_init_0(IsWaitingTerminalTopEffectForCampaignDirectBonus, v42);
      v49 = TerminalSceneComponent___c_TypeInfo->static_fields;
    }
    v51 = (Il2CppObject *)v49->__9;
    _9__282_1 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
    System_Action_object____ctor(
      _9__282_1,
      v51,
      Method_TerminalSceneComponent___c__CheckOpenCampaignDirectBonus_b__282_1__,
      0);
    v52 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v52->__9__282_1 = (struct System_Action_Action__o *)_9__282_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v52->__9__282_1, (int32_t)_9__282_1, v53, v54, v55, v56, v57, v58);
  }
  if ( (*(_DWORD *)(v31 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_41;
  *(_QWORD *)(v31 + 40) = _9__282_1;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v31 + 40), (int32_t)_9__282_1, v43, v44, v45, v46, v47, v48);
  v59 = (ActionChain_o *)sub_21FFEBC(ActionChain_TypeInfo);
  ActionChain___ctor_55902484(v59, (System_Action_Action__array *)v31, 0);
  v60 = sub_21FFD10(System_Action___TypeInfo, 1);
  v61 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v61,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass282_0__CheckOpenCampaignDirectBonus_b__2__,
    0);
  if ( !v60 )
    goto LABEL_40;
  if ( !*(_DWORD *)(v60 + 24) )
LABEL_41:
    sub_21FFED4(IsWaitingTerminalTopEffectForCampaignDirectBonus);
  *(_QWORD *)(v60 + 32) = v61;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v60 + 32), (int32_t)v61, v62, v63, v64, v65, v66, v67);
  if ( !v59 )
LABEL_40:
    sub_21FFECC(IsWaitingTerminalTopEffectForCampaignDirectBonus, v7);
  IsWaitingTerminalTopEffectForCampaignDirectBonus = (__int64)ChainableActionBase__Final(
                                                                (ChainableActionBase_o *)v59,
                                                                (System_Action_array *)v60,
                                                                0);
  if ( IsWaitingTerminalTopEffectForCampaignDirectBonus
    && (naturalAligment = ActionChain_TypeInfo->_2.naturalAligment,
        *(unsigned __int8 *)(*(_QWORD *)IsWaitingTerminalTopEffectForCampaignDirectBonus + 304LL) >= (unsigned int)naturalAligment) )
  {
    if ( *(ActionChain_c **)(*(_QWORD *)(*(_QWORD *)IsWaitingTerminalTopEffectForCampaignDirectBonus + 200LL)
                           + 8 * naturalAligment
                           - 8) == ActionChain_TypeInfo )
      v7 = (ChainableActionBase_o *)IsWaitingTerminalTopEffectForCampaignDirectBonus;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( !((v21 | IsBlankEarthAction) & 1 | (v22 != 0)) )
  {
    if ( v7 )
    {
      ChainableActionBase__Execute(v7, 0);
      return;
    }
    goto LABEL_40;
  }
  if ( (v21 & 1) != 0 && !v22 )
  {
    v70 = TerminalSceneComponent__CoWaitTerminalTopEffectEnd(this, (ActionChain_o *)v7, v68);
LABEL_38:
    UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v70, 0);
    return;
  }
  if ( IsBlankEarthAction )
  {
    v70 = TerminalSceneComponent__CoWaitBlankEarthActionEnd(this, (ActionChain_o *)v7, v68);
    goto LABEL_38;
  }
  this->fields._IsPlayingCampaignDirectBonus_k__BackingField = 0;
  ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0);
}


bool TerminalSceneComponent__CheckPlayChapterStart(
        TerminalSceneComponent_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v7; // x20
  int32_t StartType; // w0
  __int64 v9; // x1
  int64_t targetId; // x19

  if ( (byte_593AAE5 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593AAE5 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Instance, warId, 0);
  if ( !WarEntityByWarID )
    return (char)WarEntityByWarID;
  v7 = WarEntityByWarID;
  StartType = WarEntity__GetStartType(WarEntityByWarID, 0);
  if ( StartType != 2 )
  {
    if ( StartType != 1 )
      goto LABEL_10;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9);
    if ( TerminalPramsManager__IsWarStartedId(warId, 0) )
      goto LABEL_10;
LABEL_13:
    LOBYTE(WarEntityByWarID) = 1;
    return (char)WarEntityByWarID;
  }
  targetId = v7->fields.targetId;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_21FFECC(Instance, v5);
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
        bool isDispFolder,
        const MethodInfo *method)
{
  __int64 v11; // x20
  void *Instance; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  bool v20; // w26
  System_Action_o **v21; // x24
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  TerminalPramsManager_c *v29; // x0
  TerminalSceneComponent_o *CampaignDirectBonus; // x0
  const MethodInfo *v31; // x2
  __int64 v32; // x21
  Il2CppObject *mTerminalList; // x23
  System_Action_object__o *v34; // x22
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_Action_object__o *v41; // x22
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_Action_object__o *v48; // x22
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  Il2CppObject *v55; // x24
  System_Action_object__o *v56; // x22
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  Il2CppObject *v63; // x24
  System_Action_object__o *v64; // x22
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  Il2CppObject *v71; // x24
  System_Action_object__o *v72; // x22
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  Il2CppObject *v79; // x24
  System_Action_object__o *v80; // x22
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  System_Action_object__o *v87; // x22
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  System_Action_object__o *v94; // x22
  System_String_o *v95; // x2
  System_String_o *v96; // x3
  int32_t v97; // w4
  int32_t v98; // w5
  bool v99; // w6
  bool v100; // w7
  System_Action_object__o *v101; // x22
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  System_Action_object__o *v108; // x22
  System_String_o *v109; // x2
  System_String_o *v110; // x3
  int32_t v111; // w4
  int32_t v112; // w5
  bool v113; // w6
  bool v114; // w7
  System_Action_object__o *v115; // x22
  System_String_o *v116; // x2
  System_String_o *v117; // x3
  int32_t v118; // w4
  int32_t v119; // w5
  bool v120; // w6
  bool v121; // w7
  System_Action_object__o *v122; // x22
  System_String_o *v123; // x2
  System_String_o *v124; // x3
  int32_t v125; // w4
  int32_t v126; // w5
  bool v127; // w6
  bool v128; // w7
  System_Action_object__o *v129; // x22
  System_String_o *v130; // x2
  System_String_o *v131; // x3
  int32_t v132; // w4
  int32_t v133; // w5
  bool v134; // w6
  bool v135; // w7
  System_Action_object__o *v136; // x22
  System_String_o *v137; // x2
  System_String_o *v138; // x3
  int32_t v139; // w4
  int32_t v140; // w5
  bool v141; // w6
  bool v142; // w7
  System_Action_object__o *v143; // x22
  System_String_o *v144; // x2
  System_String_o *v145; // x3
  int32_t v146; // w4
  int32_t v147; // w5
  bool v148; // w6
  bool v149; // w7
  Il2CppObject *v150; // x24
  System_Action_object__o *v151; // x22
  System_String_o *v152; // x2
  System_String_o *v153; // x3
  int32_t v154; // w4
  int32_t v155; // w5
  bool v156; // w6
  bool v157; // w7
  __int64 v158; // x1
  System_String_o *v159; // x2
  System_String_o *v160; // x3
  int32_t v161; // w4
  int32_t v162; // w5
  bool v163; // w6
  bool v164; // w7
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__279_3; // x22
  Il2CppObject *v167; // x23
  struct TerminalSceneComponent___c_StaticFields *v168; // x0
  System_String_o *v169; // x2
  System_String_o *v170; // x3
  int32_t v171; // w4
  int32_t v172; // w5
  bool v173; // w6
  bool v174; // w7
  System_Action_object__o *v175; // x22
  System_String_o *v176; // x2
  System_String_o *v177; // x3
  int32_t v178; // w4
  int32_t v179; // w5
  bool v180; // w6
  bool v181; // w7
  System_Action_object__o *v182; // x19
  System_String_o *v183; // x2
  System_String_o *v184; // x3
  int32_t v185; // w4
  int32_t v186; // w5
  bool v187; // w6
  bool v188; // w7
  ActionChain_o *v189; // x19
  __int64 v190; // x21
  System_Action_o *v191; // x22
  System_String_o *v192; // x2
  System_String_o *v193; // x3
  int32_t v194; // w4
  int32_t v195; // w5
  bool v196; // w6
  bool v197; // w7
  __int64 v198; // x1

  if ( (byte_593AAEE & 1) == 0 )
  {
    sub_21FFC50(&ActionChain_TypeInfo);
    sub_21FFC50(&System_Action___TypeInfo);
    sub_21FFC50(&System_Action_Action____TypeInfo);
    sub_21FFC50(&System_Action_Action__TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CommonUI_StartLoginMessages__);
    sub_21FFC50(&Method_CommonUI_StartServantEventJoinLeaveNotification__);
    sub_21FFC50(&Method_ScrTerminalListTop_CheckLimitCountUnSealQuestOpen__);
    sub_21FFC50(&Method_ScrTerminalListTop_ShowTerminalMessagesDialogue__);
    sub_21FFC50(&Method_ScrTerminalListTop_ShowTerminalTransitionMessagesDialogue__);
    sub_21FFC50(&Method_ScrTerminalListTop_StartShowWarClearReward__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent_CheckAfterQuestClearDialog__);
    sub_21FFC50(&Method_TerminalSceneComponent_CheckExchangeDialogTheFree__);
    sub_21FFC50(&Method_TerminalSceneComponent_CheckExchangeDialogTheReturn__);
    sub_21FFC50(&Method_TerminalSceneComponent_CheckMasterMissionReset__);
    sub_21FFC50(&Method_TerminalSceneComponent_CheckNotificationDialog__);
    sub_21FFC50(&Method_TerminalSceneComponent_CheckSaveRouteSelect__);
    sub_21FFC50(&Method_TerminalSceneComponent_CheckSpecialAscensionTutorial__);
    sub_21FFC50(&Method_TerminalSceneComponent_CheckTutorialOnTerminalAfterFreeExchangeDialog__);
    sub_21FFC50(&Method_TerminalSceneComponent_CheckTutorialOnTerminal__);
    sub_21FFC50(&TutorialFlag_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__279_3__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass279_0__CheckRewardPopupChain_b__0__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass279_0__CheckRewardPopupChain_b__1__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass279_0__CheckRewardPopupChain_b__2__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass279_0__CheckRewardPopupChain_b__4__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass279_0__CheckRewardPopupChain_b__5__);
    sub_21FFC50(&TerminalSceneComponent___c__DisplayClass279_0_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent___c_TypeInfo);
    byte_593AAEE = 1;
  }
  v11 = sub_21FFEBC(TerminalSceneComponent___c__DisplayClass279_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass279_0___ctor((TerminalSceneComponent___c__DisplayClass279_0_o *)v11, 0);
  if ( !v11 )
    goto LABEL_55;
  v20 = isDispFolder;
  *(_QWORD *)(v11 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 32) = afterChain;
  v21 = (System_Action_o **)(v11 + 32);
  *(_BYTE *)(v11 + 24) = v20;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 32), (int32_t)afterChain, v22, v23, v24, v25, v26, v27);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v28);
  if ( !byte_59354AA )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_59354AA = 1;
  }
  v29 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
  }
  if ( v29->static_fields->_IsTransFromOrdealCall_k__BackingField )
  {
    ActionExtensions__Call(*v21, 0);
    return;
  }
  if ( checkTutorialEnded )
  {
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v28);
    if ( !TutorialFlag__Get_47357952(102, 0) )
      goto LABEL_50;
  }
  if ( noExecuteCondition )
  {
LABEL_50:
    ActionExtensions__Call(*v21, 0);
    goto LABEL_51;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_55;
  CampaignDirectBonus = (TerminalSceneComponent_o *)CommonUI__get_CampaignDirectBonus((CommonUI_o *)Instance, 0);
  TerminalSceneComponent__SaveCampaignDirectBonusData(
    CampaignDirectBonus,
    (CommonUI_CampaignDirectBonusData_array *)CampaignDirectBonus,
    v31);
  v32 = sub_21FFD10(System_Action_Action____TypeInfo, 20);
  mTerminalList = (Il2CppObject *)this->fields.mTerminalList;
  v34 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v34, mTerminalList, Method_ScrTerminalListTop_StartShowWarClearReward__, 0);
  if ( !v32 )
    goto LABEL_55;
  if ( !*(_DWORD *)(v32 + 24) )
    goto LABEL_54;
  *(_QWORD *)(v32 + 32) = v34;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 32), (int32_t)v34, v35, v36, v37, v38, v39, v40);
  v41 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v41, (Il2CppObject *)this, Method_TerminalSceneComponent_CheckAfterQuestClearDialog__, 0);
  if ( (*(_DWORD *)(v32 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_54;
  *(_QWORD *)(v32 + 40) = v41;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 40), (int32_t)v41, v42, v43, v44, v45, v46, v47);
  v48 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v48,
    (Il2CppObject *)v11,
    Method_TerminalSceneComponent___c__DisplayClass279_0__CheckRewardPopupChain_b__0__,
    0);
  if ( *(_DWORD *)(v32 + 24) <= 2u )
    goto LABEL_54;
  *(_QWORD *)(v32 + 48) = v48;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 48), (int32_t)v48, v49, v50, v51, v52, v53, v54);
  v55 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v56 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v56, v55, Method_CommonUI_StartServantEventJoinLeaveNotification__, 0);
  if ( (*(_DWORD *)(v32 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_54;
  *(_QWORD *)(v32 + 56) = v56;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 56), (int32_t)v56, v57, v58, v59, v60, v61, v62);
  v63 = (Il2CppObject *)this->fields.mTerminalList;
  v64 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v64, v63, Method_ScrTerminalListTop_ShowTerminalMessagesDialogue__, 0);
  if ( *(_DWORD *)(v32 + 24) <= 4u )
    goto LABEL_54;
  *(_QWORD *)(v32 + 64) = v64;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 64), (int32_t)v64, v65, v66, v67, v68, v69, v70);
  v71 = (Il2CppObject *)this->fields.mTerminalList;
  v72 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v72, v71, Method_ScrTerminalListTop_CheckLimitCountUnSealQuestOpen__, 0);
  if ( *(_DWORD *)(v32 + 24) <= 5u )
    goto LABEL_54;
  *(_QWORD *)(v32 + 72) = v72;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 72), (int32_t)v72, v73, v74, v75, v76, v77, v78);
  v79 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v80 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v80, v79, Method_CommonUI_StartLoginMessages__, 0);
  if ( *(_DWORD *)(v32 + 24) <= 6u )
    goto LABEL_54;
  *(_QWORD *)(v32 + 80) = v80;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 80), (int32_t)v80, v81, v82, v83, v84, v85, v86);
  v87 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v87,
    (Il2CppObject *)v11,
    Method_TerminalSceneComponent___c__DisplayClass279_0__CheckRewardPopupChain_b__1__,
    0);
  if ( (*(_DWORD *)(v32 + 24) & 0xFFFFFFF8) == 0 )
    goto LABEL_54;
  *(_QWORD *)(v32 + 88) = v87;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 88), (int32_t)v87, v88, v89, v90, v91, v92, v93);
  v94 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v94,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckSpecialAscensionTutorial__,
    0);
  if ( *(_DWORD *)(v32 + 24) <= 8u )
    goto LABEL_54;
  *(_QWORD *)(v32 + 96) = v94;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 96), (int32_t)v94, v95, v96, v97, v98, v99, v100);
  v101 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v101,
    (Il2CppObject *)v11,
    Method_TerminalSceneComponent___c__DisplayClass279_0__CheckRewardPopupChain_b__2__,
    0);
  if ( *(_DWORD *)(v32 + 24) <= 9u )
    goto LABEL_54;
  *(_QWORD *)(v32 + 104) = v101;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 104), (int32_t)v101, v102, v103, v104, v105, v106, v107);
  v108 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v108, (Il2CppObject *)this, Method_TerminalSceneComponent_CheckTutorialOnTerminal__, 0);
  if ( *(_DWORD *)(v32 + 24) <= 0xAu )
    goto LABEL_54;
  *(_QWORD *)(v32 + 112) = v108;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 112), (int32_t)v108, v109, v110, v111, v112, v113, v114);
  v115 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v115, (Il2CppObject *)this, Method_TerminalSceneComponent_CheckNotificationDialog__, 0);
  if ( *(_DWORD *)(v32 + 24) <= 0xBu )
    goto LABEL_54;
  *(_QWORD *)(v32 + 120) = v115;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 120), (int32_t)v115, v116, v117, v118, v119, v120, v121);
  v122 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v122, (Il2CppObject *)this, Method_TerminalSceneComponent_CheckSaveRouteSelect__, 0);
  if ( *(_DWORD *)(v32 + 24) <= 0xCu )
    goto LABEL_54;
  *(_QWORD *)(v32 + 128) = v122;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 128), (int32_t)v122, v123, v124, v125, v126, v127, v128);
  v129 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v129,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckExchangeDialogTheFree__,
    0);
  if ( *(_DWORD *)(v32 + 24) <= 0xDu )
    goto LABEL_54;
  *(_QWORD *)(v32 + 136) = v129;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 136), (int32_t)v129, v130, v131, v132, v133, v134, v135);
  v136 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v136,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckExchangeDialogTheReturn__,
    0);
  if ( *(_DWORD *)(v32 + 24) <= 0xEu )
    goto LABEL_54;
  *(_QWORD *)(v32 + 144) = v136;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 144), (int32_t)v136, v137, v138, v139, v140, v141, v142);
  v143 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v143,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckTutorialOnTerminalAfterFreeExchangeDialog__,
    0);
  if ( (*(_DWORD *)(v32 + 24) & 0xFFFFFFF0) == 0 )
    goto LABEL_54;
  *(_QWORD *)(v32 + 152) = v143;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 152), (int32_t)v143, v144, v145, v146, v147, v148, v149);
  v150 = (Il2CppObject *)this->fields.mTerminalList;
  v151 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v151, v150, Method_ScrTerminalListTop_ShowTerminalTransitionMessagesDialogue__, 0);
  if ( *(_DWORD *)(v32 + 24) <= 0x10u )
    goto LABEL_54;
  *(_QWORD *)(v32 + 160) = v151;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 160), (int32_t)v151, v152, v153, v154, v155, v156, v157);
  Instance = TerminalSceneComponent___c_TypeInfo;
  if ( !*(&TerminalSceneComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v158);
    Instance = TerminalSceneComponent___c_TypeInfo;
  }
  static_fields = (struct TerminalSceneComponent___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__279_3 = (System_Action_object__o *)static_fields->__9__279_3;
  if ( !_9__279_3 )
  {
    if ( !*((_DWORD *)Instance + 57) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v158);
      static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    }
    v167 = (Il2CppObject *)static_fields->__9;
    _9__279_3 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
    System_Action_object____ctor(
      _9__279_3,
      v167,
      Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__279_3__,
      0);
    v168 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v168->__9__279_3 = (struct System_Action_Action__o *)_9__279_3;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v168->__9__279_3,
      (int32_t)_9__279_3,
      v169,
      v170,
      v171,
      v172,
      v173,
      v174);
  }
  if ( *(_DWORD *)(v32 + 24) <= 0x11u )
    goto LABEL_54;
  *(_QWORD *)(v32 + 168) = _9__279_3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 168), (int32_t)_9__279_3, v159, v160, v161, v162, v163, v164);
  v175 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v175, (Il2CppObject *)this, Method_TerminalSceneComponent_CheckMasterMissionReset__, 0);
  if ( *(_DWORD *)(v32 + 24) <= 0x12u )
    goto LABEL_54;
  *(_QWORD *)(v32 + 176) = v175;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 176), (int32_t)v175, v176, v177, v178, v179, v180, v181);
  v182 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v182,
    (Il2CppObject *)v11,
    Method_TerminalSceneComponent___c__DisplayClass279_0__CheckRewardPopupChain_b__4__,
    0);
  if ( *(_DWORD *)(v32 + 24) <= 0x13u )
    goto LABEL_54;
  *(_QWORD *)(v32 + 184) = v182;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 184), (int32_t)v182, v183, v184, v185, v186, v187, v188);
  v189 = (ActionChain_o *)sub_21FFEBC(ActionChain_TypeInfo);
  ActionChain___ctor_55902484(v189, (System_Action_Action__array *)v32, 0);
  v190 = sub_21FFD10(System_Action___TypeInfo, 1);
  v191 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v191,
    (Il2CppObject *)v11,
    Method_TerminalSceneComponent___c__DisplayClass279_0__CheckRewardPopupChain_b__5__,
    0);
  if ( !v190 )
    goto LABEL_55;
  if ( !*(_DWORD *)(v190 + 24) )
LABEL_54:
    sub_21FFED4(Instance);
  *(_QWORD *)(v190 + 32) = v191;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v190 + 32), (int32_t)v191, v192, v193, v194, v195, v196, v197);
  if ( !v189
    || (Instance = ChainableActionBase__Final((ChainableActionBase_o *)v189, (System_Action_array *)v190, 0)) == 0 )
  {
LABEL_55:
    sub_21FFECC(Instance, v13);
  }
  ChainableActionBase__Execute((ChainableActionBase_o *)Instance, 0);
LABEL_51:
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v198);
  TerminalPramsManager__DeleteClearDatas(0);
}


void TerminalSceneComponent__CheckSaveRouteSelect(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  __int64 v14; // x1
  NetworkManager_ResultCallbackFunc_o *v15; // x20
  __int64 v16; // x1
  System_Int32_array *routes; // [xsp+8h] [xbp-38h] BYREF
  int32_t phase[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_593AAF8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_21FFC50(&Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&ScriptManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass290_0__CheckSaveRouteSelect_b__0__);
    sub_21FFC50(&TerminalSceneComponent___c__DisplayClass290_0_TypeInfo);
    byte_593AAF8 = 1;
  }
  *(_QWORD *)phase = 0;
  routes = 0;
  v4 = sub_21FFEBC(TerminalSceneComponent___c__DisplayClass290_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass290_0___ctor((TerminalSceneComponent___c__DisplayClass290_0_o *)v4, 0);
  if ( !v4 )
    goto LABEL_19;
  *(_QWORD *)(v4 + 16) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)callback, v7, v8, v9, v10, v11, v12);
  routes = 0;
  phase[0] = -1;
  phase[1] = -1;
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v13);
  if ( ScriptManager__GetSelectRouteArrayInCollection(&phase[1], phase, &routes, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    if ( !Instance )
      goto LABEL_19;
    if ( QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, phase[1], phase[0], 0) )
    {
      v15 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v15,
        (Il2CppObject *)v4,
        Method_TerminalSceneComponent___c__DisplayClass290_0__CheckSaveRouteSelect_b__0__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16);
      Instance = NetworkManager__getRequest_object_(
                   v15,
                   (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
      if ( Instance )
      {
        BattleRouteSelectRequest__beginRequest((BattleRouteSelectRequest_o *)Instance, phase[1], phase[0], routes, 0);
        return;
      }
LABEL_19:
      sub_21FFECC(Instance, v6);
    }
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v14);
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
  if ( (byte_593AAFC & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_21FFC50(&CombineRootComponent_TypeInfo);
    byte_593AAFC = 1;
  }
  if ( !v4->fields.isTutorialAfter )
  {
    mTerminalMap = v4->fields.mTerminalMap;
    if ( !mTerminalMap || (this = (TerminalSceneComponent_o *)mTerminalMap->fields.dispRoot) == 0 )
      sub_21FFECC(this, callback);
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0) )
      goto LABEL_11;
  }
  if ( !*(&CombineRootComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo, callback);
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
  TutorialFlag_c *v3; // x0
  __int64 v4; // x1
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  TutorialFlag_c *v8; // x0
  bool v9; // w20
  TerminalPramsManager_c *v10; // x0
  int v11; // w9
  int v12; // w9
  OpeningMovieData_c *v13; // x8
  int v14; // w10
  int32_t FirstWarId; // w21
  TerminalPramsManager_c *v16; // x0
  int v17; // w9
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  Il2CppObject *v19; // x21
  int32_t v20; // w0
  int32_t v21; // w0
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  int32_t v25; // w0
  int32_t v26; // w0
  int32_t v27; // w8
  int32_t Value; // w21
  TerminalPramsManager_c *v29; // x0
  struct TerminalPramsManager_StaticFields *v30; // x8
  int32_t v32; // w1

  if ( (byte_593AAE2 & 1) == 0 )
  {
    sub_21FFC50(&OpeningMovieData_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&TutorialFlag_TypeInfo);
    sub_21FFC50(&StringLiteral_14134/*"TUTORIAL_QUEST_ID1"*/);
    sub_21FFC50(&StringLiteral_14135/*"TUTORIAL_QUEST_ID2"*/);
    sub_21FFC50(&StringLiteral_14136/*"TUTORIAL_QUEST_ID3"*/);
    sub_21FFC50(&StringLiteral_14137/*"TUTORIAL_QUEST_ID4"*/);
    byte_593AAE2 = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  this->fields.mTutorialKind = 0;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method);
  if ( TutorialFlag__Get_47357952(102, 0) )
  {
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v4);
    if ( TutorialFlag__GetProgress(0) == 4 )
      return 0;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseTutorialNotificationDialogArrow(Instance, 0);
      v8 = TutorialFlag_TypeInfo;
      this->fields.isTutorialAfter = 1;
      if ( !*(&v8->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v8, v7);
      TutorialFlag__CompleteProgress(0);
      return 0;
    }
LABEL_79:
    sub_21FFECC(Instance, v6);
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
  if ( !byte_5934EA9 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5934EA9 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v11 = (unsigned __int8)byte_5932ADC;
  this->fields.mIsStart_LoginBonusWhiteBg = !v10->static_fields->_IsAutoResume_k__BackingField;
  if ( !v11 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
    byte_5932ADC = 1;
  }
  if ( !*(&v10->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v10, v4);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v12 = (unsigned __int8)byte_5934D85;
  v10->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !v12 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
    byte_5934D85 = 1;
  }
  if ( !*(&v10->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v10, v4);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v13 = OpeningMovieData_TypeInfo;
  v14 = *(&OpeningMovieData_TypeInfo->_2.cctor_finished + 1);
  v10->static_fields->_DispState_k__BackingField = 2;
  if ( !v14 )
    j_il2cpp_runtime_class_init_0(v13, v4);
  FirstWarId = OpeningMovieData__GetFirstWarId(0);
  if ( !byte_5932DFA )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932DFA = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v17 = (unsigned __int8)byte_5931FBA;
  v16->static_fields->_WarId_k__BackingField = FirstWarId;
  if ( !v17 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
    byte_5931FBA = 1;
  }
  if ( !*(&v16->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v16, v6);
    v16 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v16->static_fields;
  Instance = (CommonUI_o *)this->fields.mTitleInfo;
  static_fields->_SpotId_k__BackingField = -1;
  if ( !Instance )
    goto LABEL_79;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, 0);
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0);
  Instance = (CommonUI_o *)this->fields.mPlayerStatus;
  if ( !Instance )
    goto LABEL_79;
  ScrPlayerStatus__DisableAllBtn((ScrPlayerStatus_o *)Instance, 0);
  v19 = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  this->fields.mTutorialKind = 5;
  Instance = (CommonUI_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_14134/*"TUTORIAL_QUEST_ID1"*/, 0);
  if ( !v19 )
    goto LABEL_79;
  if ( !clsQuestCheck__IsQuestClear((clsQuestCheck_o *)v19, (int32_t)Instance, 0, 0) )
  {
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_14134/*"TUTORIAL_QUEST_ID1"*/, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
    if ( !byte_5932DF7 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5932DF7 = 1;
    }
    v29 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
      v29 = TerminalPramsManager_TypeInfo;
    }
    v30 = v29->static_fields;
    Instance = (CommonUI_o *)this->fields.mTerminalList;
    v30->_QuestId_k__BackingField = Value;
    if ( Instance )
    {
      ScrTerminalListTop__SelectedQuest((ScrTerminalListTop_o *)Instance, 0);
      return 1;
    }
    goto LABEL_79;
  }
  v20 = ConstantMaster__getValue((System_String_o *)StringLiteral_14135/*"TUTORIAL_QUEST_ID2"*/, 0);
  if ( !clsQuestCheck__IsQuestClear((clsQuestCheck_o *)v19, v20, 0, 0) )
  {
    v9 = 0;
    v27 = 1;
    goto LABEL_70;
  }
  v21 = ConstantMaster__getValue((System_String_o *)StringLiteral_14136/*"TUTORIAL_QUEST_ID3"*/, 0);
  if ( !clsQuestCheck__IsQuestClear((clsQuestCheck_o *)v19, v21, 0, 0) )
  {
    v9 = 0;
    v27 = 2;
    goto LABEL_70;
  }
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v22);
  if ( !TutorialFlag__IsProgressDone(1, 0) )
  {
    v9 = 0;
    v27 = 3;
    goto LABEL_70;
  }
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v23);
  if ( !TutorialFlag__Get_47357952(101, 0) )
    goto LABEL_82;
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v24);
  if ( !TutorialFlag__IsProgressDone(2, 0) )
  {
LABEL_82:
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v24);
    sub_255F944(1, 0);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_79;
    v32 = 20;
LABEL_76:
    v9 = 1;
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v32, 1, 0, 0);
    return v9;
  }
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v24);
  if ( !TutorialFlag__IsProgressDone(3, 0) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_79;
    v32 = 40;
    goto LABEL_76;
  }
  v25 = ConstantMaster__getValue((System_String_o *)StringLiteral_14137/*"TUTORIAL_QUEST_ID4"*/, 0);
  v9 = 0;
  if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)v19, v25, 0, 0) )
    return v9;
  v26 = ConstantMaster__getValue((System_String_o *)StringLiteral_14137/*"TUTORIAL_QUEST_ID4"*/, 0);
  if ( clsQuestCheck__mfGetQuestPhaseByQuestID((clsQuestCheck_o *)v19, v26, 0) <= 0 )
  {
    v9 = 0;
    v27 = 4;
LABEL_70:
    this->fields.mTutorialKind = v27;
    return v9;
  }
  return 0;
}


void TerminalSceneComponent__CheckTutorialBeforeEventDialog(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  EventTutorialMaster__CheckTutorial(0, 114, callback, eventId, 0, 0, 0, 0);
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
    sub_21FFECC(this, callback);
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


void TerminalSceneComponent__ClearFirstFadeInfo(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  ScrTerminalMap_o *mTerminalMap; // x0
  __int64 v5; // x1
  TerminalPramsManager_c *v6; // x0

  if ( (byte_593AB02 & 1) == 0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593AB02 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_5935771 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5935771 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( v3->static_fields->_IsFirstFadeMap_k__BackingField )
  {
    mTerminalMap = this->fields.mTerminalMap;
    if ( !mTerminalMap )
      sub_21FFECC(0, method);
    ScrTerminalMap__SetSaveKeyPlayerMap(mTerminalMap, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
    if ( !byte_59350DC )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_59350DC = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
      v6 = TerminalPramsManager_TypeInfo;
    }
    v6->static_fields->_IsFirstFadeMap_k__BackingField = 0;
  }
  __asm { FMOV            V0.4S, #1.0 }
  this->fields._FirstFadeTime_k__BackingField = 0.0;
  this->fields._FirstFadeMapColorKind_k__BackingField = 2;
  this->fields._FirstFadeMapColor_k__BackingField = _Q0;
}


void TerminalSceneComponent__ClearTransitionInfo(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalTransitionInfo_o *v3; // x20
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_593AAB8 & 1) == 0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&TerminalTransitionInfo_TypeInfo);
    byte_593AAB8 = 1;
  }
  v3 = (TerminalTransitionInfo_o *)sub_21FFEBC(TerminalTransitionInfo_TypeInfo);
  TerminalTransitionInfo___ctor(v3, 0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
  TerminalPramsManager__TerminalTransitionInfoSave_SaveData(v3, 0);
  this->fields._TransitionInfo_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TransitionInfo_k__BackingField,
    0,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


System_Collections_IEnumerator_o *TerminalSceneComponent__CoWaitBlankEarthActionEnd(
        TerminalSceneComponent_o *this,
        ActionChain_o *openCampaignDirectBonus,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_593AAF3 & 1) == 0 )
  {
    sub_21FFC50(&TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__284_TypeInfo);
    byte_593AAF3 = 1;
  }
  v5 = sub_21FFEBC(TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__284_TypeInfo);
  TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__284___ctor(
    (TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__284_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = openCampaignDirectBonus;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(v5 + 40),
    (int32_t)openCampaignDirectBonus,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *TerminalSceneComponent__CoWaitTerminalTopEffectEnd(
        TerminalSceneComponent_o *this,
        ActionChain_o *openCampaignDirectBonus,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_593AAF2 & 1) == 0 )
  {
    sub_21FFC50(&TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__283_TypeInfo);
    byte_593AAF2 = 1;
  }
  v5 = sub_21FFEBC(TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__283_TypeInfo);
  TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__283___ctor(
    (TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__283_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = openCampaignDirectBonus;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(v5 + 40),
    (int32_t)openCampaignDirectBonus,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void TerminalSceneComponent__CreateTransitionInfo(
        TerminalSceneComponent_o *this,
        TerminalTransitionInfo_o *info,
        const MethodInfo *method)
{
  TerminalTransitionInfo_o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x0

  if ( (byte_593AAB7 & 1) == 0 )
  {
    sub_21FFC50(&TerminalTransitionInfo_TypeInfo);
    byte_593AAB7 = 1;
  }
  v5 = (TerminalTransitionInfo_o *)sub_21FFEBC(TerminalTransitionInfo_TypeInfo);
  TerminalTransitionInfo___ctor(v5, 0);
  this->fields._TransitionInfo_k__BackingField = v5;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TransitionInfo_k__BackingField,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  TransitionInfo_k__BackingField = this->fields._TransitionInfo_k__BackingField;
  if ( !TransitionInfo_k__BackingField )
    sub_21FFECC(0, v12);
  TerminalTransitionInfo__SetParameters(TransitionInfo_k__BackingField, info, 0);
}


void TerminalSceneComponent__EndAuto(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  EventTutorialMaster_EventTutorialArgs_o *v3; // x20
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  QuestAfterAction_o *EventID; // x0
  __int64 v7; // x1
  int v8; // w8
  TerminalPramsManager_c *v9; // x0
  System_Collections_Generic_IEnumerable_TSource__o *AvailableTutorialArray; // x20
  TerminalPramsManager_c *v11; // x0
  bool v12; // w8
  ScrPlayerStatus_o *mPlayerStatus; // x19
  bool v14; // w8
  bool isFadeTransition; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593AAC9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_EventTutorialEntity___);
    sub_21FFC50(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593AAC9 = 1;
  }
  isFadeTransition = 0;
  v3 = (EventTutorialMaster_EventTutorialArgs_o *)sub_21FFEBC(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor(v3, 0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
  if ( !byte_5932644 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932644 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
    v5 = TerminalPramsManager_TypeInfo;
  }
  EventID = (QuestAfterAction_o *)WarMaster__getEventID(v5->static_fields->_WarId_k__BackingField, 0);
  if ( !v3 )
    goto LABEL_43;
  v8 = (unsigned __int8)byte_5932644;
  v3->fields.eventId = (int)EventID;
  v3->fields.openKind = 18;
  if ( !v8 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932644 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v3->fields.qId = v9->static_fields->_WarId_k__BackingField;
  AvailableTutorialArray = (System_Collections_Generic_IEnumerable_TSource__o *)EventTutorialMaster__GetAvailableTutorialArray(
                                                                                  v3,
                                                                                  0);
  if ( !byte_593AB13 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593AB13 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
    v11 = TerminalPramsManager_TypeInfo;
  }
  if ( v11->static_fields->mIsAutoOpenMasterMission )
  {
    v12 = System_Linq_Enumerable__Any_object_(
            AvailableTutorialArray,
            (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_EventTutorialEntity___);
    v11 = TerminalPramsManager_TypeInfo;
    if ( !v12 )
    {
      mPlayerStatus = this->fields.mPlayerStatus;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
      if ( !byte_593AB14 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_593AB14 = 1;
      }
      EventID = (QuestAfterAction_o *)TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
        EventID = (QuestAfterAction_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !mPlayerStatus )
        goto LABEL_43;
      ScrPlayerStatus__OpenMasterMission(
        mPlayerStatus,
        0,
        HIDWORD(EventID->fields.lastDispSpot[3].fields.mNoticeNumberPrefab),
        0);
      if ( !byte_5931EF2 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_5931EF2 = 1;
      }
      v11 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
        v11 = TerminalPramsManager_TypeInfo;
      }
      v11->static_fields->_MasterMissionTargetType_k__BackingField = -1;
    }
  }
  if ( !*(&v11->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v11, v7);
  TerminalPramsManager__AutoOff(0);
  EventID = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !EventID )
    goto LABEL_43;
  if ( QuestAfterAction__IsExistTerminalTransition(EventID, &isFadeTransition, 0) )
  {
    EventID = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !EventID )
      goto LABEL_43;
    v14 = !QuestAfterAction__IsBlankEarthActiveCommand(EventID, 0);
  }
  else
  {
    v14 = 0;
  }
  if ( !v14 || !isFadeTransition )
    return;
  EventID = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !EventID )
LABEL_43:
    sub_21FFECC(EventID, v7);
  QuestAfterAction__Clear(EventID, 0);
}


void TerminalSceneComponent__ExecuteAfterQuestVoiceLoaded(
        TerminalSceneComponent_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1

  if ( (byte_593AB03 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_593AB03 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    ActionExtensions__Call(action, 0);
  }
  else
  {
    v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !v6 )
      sub_21FFECC(0, v7);
    QuestAfterAction__LoadVoiceIfNeeded((QuestAfterAction_o *)v6, action, 0);
  }
}


bool TerminalSceneComponent__ExistEventActionOnSpot(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x8
  TerminalPramsManager_c *v3; // x0
  int32_t EventID; // w0
  int32_t v5; // w19
  TerminalPramsManager_c *v6; // x0
  BalanceConfig_c *v7; // x0

  if ( (byte_593AB05 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593AB05 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_5932644 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932644 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v2 = TerminalPramsManager_TypeInfo;
  }
  if ( v2->static_fields->_WarId_k__BackingField < 1 )
  {
    v5 = -1;
  }
  else
  {
    if ( !*(&v2->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v2, method);
    if ( !byte_5932644 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5932644 = 1;
    }
    v3 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      v3 = TerminalPramsManager_TypeInfo;
    }
    EventID = WarMaster__getEventID(v3->static_fields->_WarId_k__BackingField, 0);
    v2 = TerminalPramsManager_TypeInfo;
    v5 = EventID;
  }
  if ( !*(&v2->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v2, method);
  if ( !byte_5934F8D )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5934F8D = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
  }
  if ( v6->static_fields->_SpotId_k__BackingField < 1 )
    return 0;
  v7 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v7 = BalanceConfig_TypeInfo;
  }
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v7->static_fields->EventActionOnSpotEventIds,
           v5,
           (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___);
}


float TerminalSceneComponent__FSMenuOffsetX(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  if ( (byte_593AAA9 & 1) == 0 )
  {
    sub_21FFC50(&FSUtility_TypeInfo);
    byte_593AAA9 = 1;
  }
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
  return FSUtility__GetOffsetX(54.0, 2, 0);
}


float TerminalSceneComponent__FSMenuOffsetY(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  return 33.0;
}


float TerminalSceneComponent__FSRatioNormX(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int32_t width; // w19
  int32_t height; // w0
  float v4; // s0
  float v5; // s1
  float v6; // s1

  width = UnityEngine_Screen__get_width(0);
  height = UnityEngine_Screen__get_height(0);
  v4 = (float)width / (float)height;
  v5 = 2.3333;
  if ( v4 <= 2.3333 )
    v5 = (float)width / (float)height;
  v6 = (float)(v5 + -2.1444) / 0.18889;
  if ( v4 >= 2.1444 )
    return v6;
  else
    return 0.0;
}


float TerminalSceneComponent__FSRatioNormY(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int32_t width; // w19
  int32_t height; // w0
  float v4; // s0
  float v5; // s1
  float v6; // s1

  width = UnityEngine_Screen__get_width(0);
  height = UnityEngine_Screen__get_height(0);
  v4 = (float)width / (float)height;
  v5 = 2.3333;
  if ( v4 <= 2.3333 )
    v5 = (float)width / (float)height;
  v6 = (float)(v5 + -1.8333) / 0.5;
  if ( v4 >= 1.8333 )
    return v6;
  else
    return 0.0;
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
  float y; // s8
  float m_Width; // s9
  float m_Height; // s10
  float v8; // s11
  TerminalSceneComponent_o *v9; // x0
  const MethodInfo *v10; // x1
  float v11; // s0
  float v12; // s2
  float v13; // s3
  float v14; // s1
  float v15; // s0
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  m_XMin = this->fields.TUTORIAL_SPOT_ARROW_RECT.fields.m_XMin;
  m_YMin = this->fields.TUTORIAL_SPOT_ARROW_RECT.fields.m_YMin;
  y = offset_21_9.fields.y;
  m_Width = this->fields.TUTORIAL_SPOT_ARROW_RECT.fields.m_Width;
  m_Height = this->fields.TUTORIAL_SPOT_ARROW_RECT.fields.m_Height;
  v8 = m_XMin + (float)(offset_21_9.fields.x * TerminalSceneComponent__FSRatioNormX(this, method));
  v11 = y * TerminalSceneComponent__FSRatioNormY(v9, v10);
  v12 = m_Width;
  v13 = m_Height;
  v14 = m_YMin + (float)(v11 + -20.0);
  v15 = v8;
  result.fields.m_Height = v13;
  result.fields.m_Width = v12;
  result.fields.m_YMin = v14;
  result.fields.m_XMin = v15;
  return result;
}


void TerminalSceneComponent__FadeInAndTriggerEventEffects(
        TerminalSceneComponent_o *this,
        float fadeTime,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Action_o *v24; // x19
  TerminalSceneComponent_o *v25; // x0
  const MethodInfo *v26; // x2

  if ( (byte_593AB04 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass320_0__FadeInAndTriggerEventEffects_b__0__);
    sub_21FFC50(&TerminalSceneComponent___c__DisplayClass320_0_TypeInfo);
    byte_593AB04 = 1;
  }
  v9 = sub_21FFEBC(TerminalSceneComponent___c__DisplayClass320_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass320_0___ctor((TerminalSceneComponent___c__DisplayClass320_0_o *)v9, 0);
  if ( !v9 )
    sub_21FFECC(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(float *)(v9 + 24) = fadeTime;
  *(_DWORD *)(v9 + 28) = eventId;
  *(_QWORD *)(v9 + 32) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)callback, v18, v19, v20, v21, v22, v23);
  v24 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v9,
    Method_TerminalSceneComponent___c__DisplayClass320_0__FadeInAndTriggerEventEffects_b__0__,
    0);
  TerminalSceneComponent__ExecuteAfterQuestVoiceLoaded(v25, v24, v26);
}


void TerminalSceneComponent__FadeInAndTriggerEventEffectsCore(
        TerminalSceneComponent_o *this,
        float fadeTime,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x20
  AvalonSceneManager_o *Instance; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Action_o **v18; // x22
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  const MethodInfo *v25; // x3
  struct ScrTerminalListTop_o *mTerminalList; // x8
  System_Action_o *v27; // x2
  Il2CppClass *klass; // x8
  Il2CppClass *v29; // x8
  Il2CppClass *v30; // x8
  Il2CppClass *v31; // x8
  const char *namespaze; // x22
  _BOOL8 IsNullOrEmpty; // x0
  TerminalPramsManager_c *v34; // x0
  int32_t WarId_k__BackingField; // w23
  _BOOL8 IsGrandQuestWarId; // x0
  const MethodInfo *v37; // x2
  ScrTerminalListTop_o *v38; // x23
  System_Action_o *v39; // x1
  float v40; // s0
  System_Action_o *v41; // x19
  ScrTerminalMap_o *mTerminalMap; // x22
  int32_t monitor_high; // w23
  __int64 v44; // x1
  System_String_o *MapModelEntryAnimationName; // x22
  TerminalPramsManager_c *v46; // x0
  int v47; // w9
  Il2CppObject *v48; // x19
  System_Action_o *v49; // x21
  CommonUI_o *v50; // x21
  ScrTerminalMap_o *v51; // x19
  System_Action_o *v52; // x21
  int32_t v53; // w24
  SceneJumpInfo_o *v54; // x23
  TerminalPramsManager_c *v55; // x0
  __int64 v56; // x1
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  TerminalPramsManager_c *v63; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_593AACB & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&SceneJumpInfo_TypeInfo);
    sub_21FFC50(&ScrTerminalListTop_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass224_0__FadeInAndTriggerEventEffectsCore_b__0__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass224_0__FadeInAndTriggerEventEffectsCore_b__1__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass224_0__FadeInAndTriggerEventEffectsCore_b__3__);
    sub_21FFC50(&TerminalSceneComponent___c__DisplayClass224_0_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593AACB = 1;
  }
  v9 = sub_21FFEBC(TerminalSceneComponent___c__DisplayClass224_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass224_0___ctor((TerminalSceneComponent___c__DisplayClass224_0_o *)v9, 0);
  if ( !v9 )
    goto LABEL_124;
  *(_QWORD *)(v9 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = callback;
  v18 = (System_Action_o **)(v9 + 32);
  *(_DWORD *)(v9 + 24) = eventId;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)callback, v19, v20, v21, v22, v23, v24);
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_124;
  v11 = *(unsigned int *)(v9 + 24);
  if ( mTerminalList->fields.isBackFromBlankEarthMap )
  {
    v27 = *v18;
LABEL_7:
    TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(this, v11, v27, v25);
    return;
  }
  Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( (int)v11 >= 1 )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
    if ( !byte_5935A1E )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5935A1E = 1;
    }
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
      Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    }
    if ( Instance[1].fields.sendData[14].klass )
    {
      if ( !HIDWORD(Instance[2].klass) )
        j_il2cpp_runtime_class_init_0(Instance, v11);
      if ( !byte_5935A1E )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_5935A1E = 1;
      }
      Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
        Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
      }
      klass = Instance[1].fields.sendData[14].klass;
      if ( !klass )
        goto LABEL_124;
      if ( LODWORD(klass->_1.name) == *(_DWORD *)(v9 + 24) )
      {
        if ( !HIDWORD(Instance[2].klass) )
          j_il2cpp_runtime_class_init_0(Instance, v11);
        if ( !byte_5935A1E )
        {
          sub_21FFC50(&TerminalPramsManager_TypeInfo);
          byte_5935A1E = 1;
        }
        Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
          Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
        }
        v29 = Instance[1].fields.sendData[14].klass;
        if ( !v29 )
          goto LABEL_124;
        if ( HIDWORD(v29->_1.name) )
        {
          if ( !HIDWORD(Instance[2].klass) )
            j_il2cpp_runtime_class_init_0(Instance, v11);
          if ( !byte_5935A1E )
          {
            sub_21FFC50(&TerminalPramsManager_TypeInfo);
            byte_5935A1E = 1;
          }
          Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
            Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
          }
          v30 = Instance[1].fields.sendData[14].klass;
          if ( v30 )
          {
            if ( HIDWORD(v30->_1.name) == 1 )
            {
              if ( !HIDWORD(Instance[2].klass) )
                j_il2cpp_runtime_class_init_0(Instance, v11);
              if ( !byte_5935A1E )
              {
                sub_21FFC50(&TerminalPramsManager_TypeInfo);
                byte_5935A1E = 1;
              }
              Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
              if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
                Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
              }
              v31 = Instance[1].fields.sendData[14].klass;
              if ( !v31 )
                goto LABEL_124;
              namespaze = v31->_1.namespaze;
              if ( namespaze )
              {
                if ( *((int *)namespaze + 6) < 1
                  || (IsNullOrEmpty = System_String__IsNullOrEmpty(*((System_String_o **)namespaze + 4), 0)) )
                {
                  LODWORD(namespaze) = 0;
                }
                else
                {
                  if ( !*((_DWORD *)namespaze + 6) )
                    sub_21FFED4(IsNullOrEmpty);
                  LODWORD(namespaze) = System_Int32__Parse(*((System_String_o **)namespaze + 4), 0) + 1;
                }
              }
              v53 = *(_DWORD *)(v9 + 24);
              v54 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
              SceneJumpInfo___ctor_48427232(v54, (System_String_o *)StringLiteral_1/*""*/, v53, (int32_t)namespaze, 0);
              Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !Instance )
                goto LABEL_124;
              AvalonSceneManager__transitionScene(Instance, 72, 1, (Il2CppObject *)v54, 0);
              Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
            }
            if ( !HIDWORD(Instance[2].klass) )
              j_il2cpp_runtime_class_init_0(Instance, v11);
            if ( !byte_5935A1E )
            {
              sub_21FFC50(&TerminalPramsManager_TypeInfo);
              byte_5935A1E = 1;
            }
            v55 = TerminalPramsManager_TypeInfo;
            if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
              v55 = TerminalPramsManager_TypeInfo;
            }
            Instance = (AvalonSceneManager_o *)v55->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
            if ( Instance )
            {
              SpecifiedSceneInfo__InitParameter((SpecifiedSceneInfo_o *)Instance, 0);
              if ( !byte_59359FC )
              {
                sub_21FFC50(&TerminalPramsManager_TypeInfo);
                byte_59359FC = 1;
              }
              v63 = TerminalPramsManager_TypeInfo;
              if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v56);
                v63 = TerminalPramsManager_TypeInfo;
              }
              static_fields = v63->static_fields;
              static_fields->_SpecifiedChangeSceneInfo_k__BackingField = 0;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)&static_fields->_SpecifiedChangeSceneInfo_k__BackingField,
                0,
                v57,
                v58,
                v59,
                v60,
                v61,
                v62);
              LODWORD(v11) = *(_DWORD *)(v9 + 24);
              v27 = *(System_Action_o **)(v9 + 32);
              goto LABEL_7;
            }
          }
LABEL_124:
          sub_21FFECC(Instance, v11);
        }
      }
    }
  }
  if ( !HIDWORD(Instance[2].klass) )
    j_il2cpp_runtime_class_init_0(Instance, v11);
  if ( !byte_5932644 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932644 = 1;
  }
  v34 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
    v34 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v34->static_fields->_WarId_k__BackingField;
  if ( !*(&ScrTerminalListTop_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v11);
  IsGrandQuestWarId = ScrTerminalListTop__IsGrandQuestWarId(WarId_k__BackingField, 0);
  if ( IsGrandQuestWarId
    || !TerminalSceneComponent__IsEnabledMapOnEvent(
          (TerminalSceneComponent_o *)IsGrandQuestWarId,
          *(_DWORD *)(v9 + 24),
          v37) )
  {
    v41 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v41,
      (Il2CppObject *)v9,
      Method_TerminalSceneComponent___c__DisplayClass224_0__FadeInAndTriggerEventEffectsCore_b__1__,
      0);
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_124;
    if ( HIBYTE(Instance[1].fields.fadeType) )
      goto LABEL_75;
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_124;
    if ( Instance[1].fields.isBusySceneChange )
    {
LABEL_75:
      ActionExtensions__Call(v41, 0);
      return;
    }
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_124;
    v40 = fadeTime;
    v39 = v41;
    goto LABEL_102;
  }
  v38 = this->fields.mTerminalList;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
  if ( !byte_5932644 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932644 = 1;
  }
  Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v38 )
    goto LABEL_124;
  if ( ScrTerminalListTop__IsPlanetMapWarId(v38, HIDWORD(Instance[1].fields.sendData->klass), 0) )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_124;
    v39 = *v18;
    v40 = fadeTime;
LABEL_102:
    CommonUI__maskFadein((CommonUI_o *)Instance, v40, v39, 0);
    return;
  }
  Instance = (AvalonSceneManager_o *)this->fields.mTerminalMap;
  if ( !Instance )
    goto LABEL_124;
  if ( !ScrTerminalMap__IsMapModel((ScrTerminalMap_o *)Instance, 0) )
    goto LABEL_98;
  mTerminalMap = this->fields.mTerminalMap;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
  if ( !byte_5934F8A )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5934F8A = 1;
  }
  Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  monitor_high = HIDWORD(Instance[1].fields.sendData[8].monitor);
  if ( !byte_5934F8B )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    byte_5934F8B = 1;
  }
  if ( !HIDWORD(Instance[2].klass) )
  {
    j_il2cpp_runtime_class_init_0(Instance, v11);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !mTerminalMap )
    goto LABEL_124;
  MapModelEntryAnimationName = ScrTerminalMap__GetMapModelEntryAnimationName(
                                 mTerminalMap,
                                 monitor_high,
                                 (int32_t)Instance[1].fields.sendData[9].klass,
                                 0);
  if ( !byte_59359FE )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_59359FE = 1;
  }
  v46 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v44);
    v46 = TerminalPramsManager_TypeInfo;
  }
  v47 = (unsigned __int8)byte_59359FF;
  v46->static_fields->_MapModelClearQuestId_k__BackingField = 0;
  if ( !v47 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    v46 = TerminalPramsManager_TypeInfo;
    byte_59359FF = 1;
  }
  if ( !*(&v46->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v46, v44);
    v46 = TerminalPramsManager_TypeInfo;
  }
  v46->static_fields->_MapModelClearPhaseCount_k__BackingField = 0;
  if ( System_String__IsNullOrEmpty(MapModelEntryAnimationName, 0) )
  {
LABEL_98:
    v48 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v49 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v49,
      (Il2CppObject *)v9,
      Method_TerminalSceneComponent___c__DisplayClass224_0__FadeInAndTriggerEventEffectsCore_b__0__,
      0);
    if ( !v48 )
      goto LABEL_124;
    Instance = (AvalonSceneManager_o *)v48;
    v40 = fadeTime;
    v39 = v49;
    goto LABEL_102;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v50 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11);
  if ( !v50 )
    goto LABEL_124;
  CommonUI__maskFadein(v50, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
  v51 = this->fields.mTerminalMap;
  v52 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v52,
    (Il2CppObject *)v9,
    Method_TerminalSceneComponent___c__DisplayClass224_0__FadeInAndTriggerEventEffectsCore_b__3__,
    0);
  if ( !v51 )
    goto LABEL_124;
  ScrTerminalMap__PlayMapModelEntryAnimation(v51, MapModelEntryAnimationName, v52, 0);
}


void TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Action_o **v16; // x21
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
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

  if ( (byte_593AACE & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventUiMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass227_0__FadeInAndTriggerEventEffectsNext_b__0__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass227_0__FadeInAndTriggerEventEffectsNext_b__1__);
    sub_21FFC50(&TerminalSceneComponent___c__DisplayClass227_0_TypeInfo);
    byte_593AACE = 1;
  }
  entity = 0;
  v7 = sub_21FFEBC(TerminalSceneComponent___c__DisplayClass227_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass227_0___ctor((TerminalSceneComponent___c__DisplayClass227_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_72;
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  v16 = (System_Action_o **)(v7 + 24);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)callback, v17, v18, v19, v20, v21, v22);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_72;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
    sub_21FFECC(Instance, v9);
  if ( EventDetailEntity__isRaidDefeatCount((EventDetailEntity_o *)entity, 0) )
  {
    Instance = (DataManager_o *)this->fields.mTitleInfo;
    if ( Instance )
    {
      TitleInfoControl__PlayEventRaidDefeatedEffect((TitleInfoControl_o *)Instance, eventId, 0, *v16, 0);
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
      TitleInfoControl__CheckSuperBossHpAnim((TitleInfoControl_o *)Instance, *v16, 0);
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
      v23 = *v16;
      v24 = entity;
LABEL_31:
      TitleInfoControl__EventTowerStart((TitleInfoControl_o *)Instance, (EventDetailEntity_o *)v24, v23, 0);
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
      v26 = entity;
      v27 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        v27,
        (Il2CppObject *)v7,
        Method_TerminalSceneComponent___c__DisplayClass227_0__FadeInAndTriggerEventEffectsNext_b__0__,
        0);
      if ( !mTitleInfo )
        goto LABEL_72;
      Instance = (DataManager_o *)mTitleInfo;
      v24 = v26;
      v23 = v27;
      goto LABEL_31;
    }
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_72;
  Instance = (DataManager_o *)EventDetailEntity__IsGroupPoint((EventDetailEntity_o *)entity, 0);
  v28 = this->fields.mTitleInfo;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v28 )
      goto LABEL_72;
    TitleInfoControl__CheckEventPointGroupReward(this->fields.mTitleInfo, eventId, *v16, 0);
    v29 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9);
      v29 = TerminalPramsManager_TypeInfo;
    }
    if ( v29->static_fields->joinGroupId >= 1 )
    {
      Instance = (DataManager_o *)this->fields.mTitleInfo;
      if ( !Instance )
        goto LABEL_72;
      TitleInfoControl__vsGaugeEvent((TitleInfoControl_o *)Instance, eventId, 0);
    }
    return;
  }
  if ( !v28 )
    goto LABEL_72;
  if ( v28->fields.needPlayDailyPointItemEffect )
  {
    v30 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v30,
      (Il2CppObject *)v7,
      Method_TerminalSceneComponent___c__DisplayClass227_0__FadeInAndTriggerEventEffectsNext_b__1__,
      0);
    TitleInfoControl__UpdateDailyPointWithEffect(v28, v30, 0);
    return;
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_72;
  if ( EventDetailEntity__IsEventActivityPoint((EventDetailEntity_o *)entity, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
    Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventUiMaster___);
    if ( !Instance )
      goto LABEL_72;
    if ( !EventUiMaster__HasEntity((EventUiMaster_o *)Instance, eventId, 0) )
    {
      Instance = (DataManager_o *)this->fields.mTitleInfo;
      if ( !Instance )
        goto LABEL_72;
      TitleInfoControl__CheckEventPointGaugeAnim((TitleInfoControl_o *)Instance, (EventDetailEntity_o *)entity, *v16, 0);
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
      *v16,
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
      ScrTerminalMap__UpdateEventBoardGame((ScrTerminalMap_o *)Instance, *v16, 0);
      return;
    }
    v31 = *v16;
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
    v31 = *v16;
LABEL_69:
    ActionExtensions__Call(v31, 0);
    return;
  }
  Instance = (DataManager_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_72;
  TitleInfoControl__StartEventUIAnimation((TitleInfoControl_o *)Instance, 1, *v16, 0);
}


// local variable allocation has failed, the output may be wrong!
void TerminalSceneComponent__FadeinWorldDispNoneExecuteUnusedAssets(
        TerminalSceneComponent_o *this,
        bool isExecuteUnusedAssets,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  AvalonSceneManager_c *v7; // x0
  System_Collections_IEnumerator_o *v8; // x1

  if ( (byte_593AAC2 & 1) == 0 )
  {
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    byte_593AAC2 = 1;
  }
  v7 = AvalonSceneManager_TypeInfo;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
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
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v8, 0);
}


void TerminalSceneComponent__Fadein_MapDisp(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  Il2CppObject *Instance; // x22
  int32_t FirstFadeMapColorKind_k__BackingField; // w21
  AvalonSceneManager_c *v25; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v27; // x23
  System_Action_o *v28; // x21
  const MethodInfo *v29; // x2

  if ( (byte_593AAC6 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass219_0__Fadein_MapDisp_b__0__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass219_0__Fadein_MapDisp_b__1__);
    sub_21FFC50(&TerminalSceneComponent___c__DisplayClass219_0_TypeInfo);
    byte_593AAC6 = 1;
  }
  v7 = sub_21FFEBC(TerminalSceneComponent___c__DisplayClass219_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass219_0___ctor((TerminalSceneComponent___c__DisplayClass219_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_10;
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = end_act;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)end_act, v16, v17, v18, v19, v20, v21);
  if ( this->fields._FirstFadeTime_k__BackingField > 0.0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    FirstFadeMapColorKind_k__BackingField = this->fields._FirstFadeMapColorKind_k__BackingField;
    v25 = AvalonSceneManager_TypeInfo;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v22);
      v25 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v25->static_fields->DEFAULT_FADE_TIME;
    v27 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v27,
      (Il2CppObject *)v7,
      Method_TerminalSceneComponent___c__DisplayClass219_0__Fadein_MapDisp_b__0__,
      0);
    if ( Instance )
    {
      CommonUI__maskFadeChangeColor(
        (CommonUI_o *)Instance,
        FirstFadeMapColorKind_k__BackingField,
        DEFAULT_FADE_TIME,
        v27,
        this->fields._FirstFadeMapColor_k__BackingField,
        0);
      return;
    }
LABEL_10:
    sub_21FFECC(v8, v9);
  }
  v28 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v7,
    Method_TerminalSceneComponent___c__DisplayClass219_0__Fadein_MapDisp_b__1__,
    0);
  TerminalSceneComponent__Fadein_MapDisp_Load(this, fade_time, v28, v29);
}


void TerminalSceneComponent__Fadein_MapDisp_Load(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v7; // x20
  void *mTerminalMap; // x0
  const MethodInfo *v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  TerminalPramsManager_c *v22; // x0
  __int64 v23; // x8
  __int64 v24; // x8
  WarEntity_o *v25; // x21
  __int64 v26; // x1
  TerminalPramsManager_c *v27; // x0
  _BOOL4 isInvisibleConnectAndLoad; // w22
  int32_t v29; // w1
  TitleInfoControl_o *mTitleInfo; // x19
  System_Action_o *v31; // x22

  if ( (byte_593AAC7 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass220_0__Fadein_MapDisp_Load_b__0__);
    sub_21FFC50(&TerminalSceneComponent___c__DisplayClass220_0_TypeInfo);
    byte_593AAC7 = 1;
  }
  v7 = sub_21FFEBC(TerminalSceneComponent___c__DisplayClass220_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass220_0___ctor((TerminalSceneComponent___c__DisplayClass220_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_36;
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = end_act;
  *(float *)(v7 + 24) = fade_time;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)end_act, v16, v17, v18, v19, v20, v21);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9);
  if ( !byte_5934080 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5934080 = 1;
  }
  v22 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9);
    v22 = TerminalPramsManager_TypeInfo;
  }
  if ( v22->static_fields->_IsDispOnly_k__BackingField )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v9);
    if ( !byte_5931EF0 )
    {
      sub_21FFC50(&TerminalSceneComponent_TypeInfo);
      byte_5931EF0 = 1;
    }
    mTerminalMap = TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v9);
      mTerminalMap = TerminalSceneComponent_TypeInfo;
    }
    v23 = **((_QWORD **)mTerminalMap + 23);
    if ( !v23 )
      goto LABEL_36;
    v24 = *(_QWORD *)(v23 + 264);
    if ( !v24 )
      goto LABEL_36;
    mTerminalMap = *(void **)(v24 + 552);
    if ( !mTerminalMap )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mTerminalMap, 1, 0);
  }
  else
  {
    TerminalSceneComponent__EndAuto(this, v9);
  }
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_36;
  v25 = (WarEntity_o *)*((_QWORD *)mTerminalMap + 45);
  ScrTerminalMap__SetDisp((ScrTerminalMap_o *)mTerminalMap, 1, 0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v26);
  if ( !byte_5935588 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5935588 = 1;
  }
  v27 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v26);
    v27 = TerminalPramsManager_TypeInfo;
  }
  isInvisibleConnectAndLoad = v27->static_fields->isInvisibleConnectAndLoad;
  mTerminalMap = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( isInvisibleConnectAndLoad )
  {
    if ( !mTerminalMap )
      goto LABEL_36;
    v29 = 0;
  }
  else
  {
    if ( !mTerminalMap )
      goto LABEL_36;
    v29 = 1;
  }
  CommonUI__SetLoadMode((CommonUI_o *)mTerminalMap, v29, 0);
  mTitleInfo = this->fields.mTitleInfo;
  v31 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v7,
    Method_TerminalSceneComponent___c__DisplayClass220_0__Fadein_MapDisp_Load_b__0__,
    0);
  if ( !mTitleInfo )
LABEL_36:
    sub_21FFECC(mTerminalMap, v9);
  TitleInfoControl__SetActiveEventInfo(mTitleInfo, v25, 32, v31, 0);
}


void TerminalSceneComponent__Fadein_MapDisp_Start(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 Instance; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 *v16; // x21
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct WarEntity_o *mWarEnt; // x1
  __int64 v31; // x22
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct ScrTerminalMap_o *v38; // x8
  struct MapEntity_o *mMapEnt; // x1
  __int64 *v40; // x23
  System_String_o *ActiveStateName; // x24
  TerminalPramsManager_c *v42; // x0
  System_String_o *PrioredBgmName; // x0
  const MethodInfo *v44; // x3
  TerminalPramsManager_c *v45; // x0
  struct ScrTerminalMap_o *v46; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  TerminalPramsManager_c *v48; // x0
  __int64 v49; // x21
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  Il2CppObject **v56; // x22
  __int64 v57; // x8
  __int64 v58; // x8
  bool activeSelf; // w0
  const MethodInfo_476E8C0 *v60; // x8
  __int64 v61; // x8
  __int64 v62; // x8
  __int64 v63; // x8
  __int64 v64; // x8
  __int64 v65; // x23
  Il2CppObject *v66; // x25
  System_Action_object__o *v67; // x24
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  Il2CppObject *v74; // x24
  System_Action_object__o *v75; // x22
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  __int64 v82; // x1
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__221_7; // x22
  Il2CppObject *v91; // x24
  struct TerminalSceneComponent___c_StaticFields *v92; // x0
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  Il2CppObject *v99; // x25
  System_Action_object__o *v100; // x22
  System_String_o *v101; // x2
  System_String_o *v102; // x3
  int32_t v103; // w4
  int32_t v104; // w5
  bool v105; // w6
  bool v106; // w7
  ActionChain_o *v107; // x22
  __int64 v108; // x23
  System_Action_o *v109; // x24
  System_String_o *v110; // x2
  System_String_o *v111; // x3
  int32_t v112; // w4
  int32_t v113; // w5
  bool v114; // w6
  bool v115; // w7
  ChainableActionBase_o *v116; // x0
  System_Action_array *v117; // x1
  int32_t v118; // w21
  System_Action_o *v119; // x22
  const MethodInfo *v120; // x3
  ScrTerminalListTop_o *v121; // x19
  System_Action_o *v122; // x21
  const MethodInfo_476E8C0 *v123; // x0
  __int64 v124; // x22
  Il2CppObject *v125; // x24
  System_Action_object__o *v126; // x23
  System_String_o *v127; // x2
  System_String_o *v128; // x3
  int32_t v129; // w4
  int32_t v130; // w5
  bool v131; // w6
  bool v132; // w7
  __int64 v133; // x1
  System_String_o *v134; // x2
  System_String_o *v135; // x3
  int32_t v136; // w4
  int32_t v137; // w5
  bool v138; // w6
  bool v139; // w7
  struct TerminalSceneComponent___c_StaticFields *v140; // x8
  System_Action_object__o *_9__221_0; // x23
  Il2CppObject *v142; // x24
  struct TerminalSceneComponent___c_StaticFields *v143; // x0
  System_String_o *v144; // x2
  System_String_o *v145; // x3
  int32_t v146; // w4
  int32_t v147; // w5
  bool v148; // w6
  bool v149; // w7
  __int64 v150; // x1
  System_String_o *v151; // x2
  System_String_o *v152; // x3
  int32_t v153; // w4
  int32_t v154; // w5
  bool v155; // w6
  bool v156; // w7
  struct TerminalSceneComponent___c_StaticFields *v157; // x8
  System_Action_object__o *_9__221_1; // x23
  Il2CppObject *v159; // x24
  struct TerminalSceneComponent___c_StaticFields *v160; // x0
  System_String_o *v161; // x2
  System_String_o *v162; // x3
  int32_t v163; // w4
  int32_t v164; // w5
  bool v165; // w6
  bool v166; // w7
  System_Action_object__o *v167; // x23
  System_String_o *v168; // x2
  System_String_o *v169; // x3
  int32_t v170; // w4
  int32_t v171; // w5
  bool v172; // w6
  bool v173; // w7
  ActionChain_o *v174; // x23
  System_String_o *v175; // x2
  System_String_o *v176; // x3
  int32_t v177; // w4
  int32_t v178; // w5
  bool v179; // w6
  bool v180; // w7
  System_Action_array *v181; // x22
  __int64 v182; // x1

  if ( (byte_593AAC8 & 1) == 0 )
  {
    sub_21FFC50(&ActionChain_TypeInfo);
    sub_21FFC50(&System_Action___TypeInfo);
    sub_21FFC50(&System_Action_Action____TypeInfo);
    sub_21FFC50(&System_Action_Action__TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CommonUI_StartLoginMessages__);
    sub_21FFC50(&Method_QuestAfterAction_Play__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&TutorialFlag_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__221_0__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__221_1__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__221_7__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass221_0__Fadein_MapDisp_Start_b__2__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass221_0__Fadein_MapDisp_Start_b__3__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass221_0__Fadein_MapDisp_Start_b__4__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass221_0__Fadein_MapDisp_Start_b__5__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass221_0__Fadein_MapDisp_Start_b__6__);
    sub_21FFC50(&TerminalSceneComponent___c__DisplayClass221_0_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass221_1__Fadein_MapDisp_Start_b__8__);
    sub_21FFC50(&TerminalSceneComponent___c__DisplayClass221_1_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent___c_TypeInfo);
    sub_21FFC50(&StringLiteral_3424/*"CAPTER INIT"*/);
    sub_21FFC50(&StringLiteral_3423/*"CAPTER CREATE"*/);
    sub_21FFC50(&StringLiteral_3425/*"CAPTER WAIT"*/);
    byte_593AAC8 = 1;
  }
  v7 = sub_21FFEBC(TerminalSceneComponent___c__DisplayClass221_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass221_0___ctor((TerminalSceneComponent___c__DisplayClass221_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_160;
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = end_act;
  v16 = (__int64 *)(v7 + 40);
  *(float *)(v7 + 32) = fade_time;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)end_act, v17, v18, v19, v20, v21, v22);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_160;
  mWarEnt = mTerminalMap->fields.mWarEnt;
  *(_QWORD *)(v7 + 24) = mWarEnt;
  v31 = v7 + 24;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)mWarEnt, v23, v24, v25, v26, v27, v28);
  v38 = this->fields.mTerminalMap;
  if ( !v38 )
    goto LABEL_160;
  mMapEnt = v38->fields.mMapEnt;
  *(_QWORD *)(v7 + 48) = mMapEnt;
  v40 = (__int64 *)(v7 + 48);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)mMapEnt, v32, v33, v34, v35, v36, v37);
  Instance = (__int64)this->fields.mTerminalList;
  if ( !Instance )
    goto LABEL_160;
  Instance = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_160;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)Instance, 0);
  Instance = System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3423/*"CAPTER CREATE"*/, 0)
          || System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3424/*"CAPTER INIT"*/, 0)
          || System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3425/*"CAPTER WAIT"*/, 0);
  if ( !this->fields.mTitleInfo )
    goto LABEL_160;
  TitleInfoControl__setBackBtnSprite_46820572(this->fields.mTitleInfo, Instance & 1, 0, 0, 0);
  Instance = (__int64)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_160;
  TitleInfoControl__FrameIn((TitleInfoControl_o *)Instance, 0, 0);
  MainMenuBar__FrameIn(0, 0);
  Instance = (__int64)this->fields.mPlayerStatus;
  if ( !Instance )
    goto LABEL_160;
  ScrPlayerStatus__FrameIn((ScrPlayerStatus_o *)Instance, 0, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  if ( *(_BYTE *)(Instance + 192) )
  {
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v9);
    SoundManager__stopBgm(0);
  }
  else
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9);
    if ( !byte_59354C0 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_59354C0 = 1;
    }
    v42 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9);
      v42 = TerminalPramsManager_TypeInfo;
    }
    if ( !v42->static_fields->_IsPlayScriptWithMap_k__BackingField )
    {
      Instance = *v40;
      if ( !*v40 )
        goto LABEL_160;
      PrioredBgmName = MapEntity__GetPrioredBgmName((MapEntity_o *)Instance, 0);
      TerminalSceneComponent__playBgm(this, PrioredBgmName, 0, 0.0, v44);
    }
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9);
  if ( !byte_59354C0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_59354C0 = 1;
  }
  v45 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9);
    v45 = TerminalPramsManager_TypeInfo;
  }
  if ( v45->static_fields->_IsPlayScriptWithMap_k__BackingField )
  {
    Instance = (__int64)this->fields.mTerminalMap;
    if ( !Instance )
      goto LABEL_160;
    ScrTerminalMap__AllMaskStart((ScrTerminalMap_o *)Instance, 0, 1, 0);
    MainMenuBar__FrameOut(0, 0);
    Instance = (__int64)this->fields.mTitleInfo;
    if ( !Instance )
      goto LABEL_160;
    TitleInfoControl__FrameOut((TitleInfoControl_o *)Instance, 0, 0);
    Instance = (__int64)this->fields.mPlayerStatus;
    if ( !Instance )
      goto LABEL_160;
    ScrPlayerStatus__FrameOut((ScrPlayerStatus_o *)Instance, 1, 0);
    v45 = TerminalPramsManager_TypeInfo;
  }
  if ( !*(&v45->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v45, v9);
  if ( !byte_5934080 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5934080 = 1;
  }
  Instance = (__int64)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9);
    Instance = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(Instance + 184) + 103LL) )
  {
    if ( !*(_DWORD *)(Instance + 228) )
      j_il2cpp_runtime_class_init_0(Instance, v9);
    if ( !byte_59354A7 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_59354A7 = 1;
    }
    Instance = (__int64)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9);
      Instance = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( *(_BYTE *)(*(_QWORD *)(Instance + 184) + 106LL) )
    {
      v46 = this->fields.mTerminalMap;
      if ( !v46 )
        goto LABEL_160;
      Instance = (__int64)v46->fields.spotMaskObj;
      if ( !Instance )
        goto LABEL_160;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      MainMenuBar__FrameOut(0, 0);
      Instance = (__int64)this->fields.mTitleInfo;
      if ( !Instance )
        goto LABEL_160;
      TitleInfoControl__FrameOut((TitleInfoControl_o *)Instance, 0, 0);
      Instance = (__int64)this->fields.mPlayerStatus;
      if ( !Instance )
        goto LABEL_160;
      ScrPlayerStatus__FrameOut((ScrPlayerStatus_o *)Instance, 1, 0);
      mTerminalList = this->fields.mTerminalList;
      if ( !mTerminalList )
        goto LABEL_160;
      Instance = (__int64)mTerminalList->fields.mQuestBoardListViewManager;
      if ( !Instance )
        goto LABEL_160;
      QuestBoardListViewManager__SetMode((QuestBoardListViewManager_o *)Instance, 4, 0, 0, 0, 0, 0);
      Instance = (__int64)TerminalPramsManager_TypeInfo;
    }
  }
  if ( !*(_DWORD *)(Instance + 228) )
    j_il2cpp_runtime_class_init_0(Instance, v9);
  if ( !byte_59354A7 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_59354A7 = 1;
  }
  v48 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9);
    v48 = TerminalPramsManager_TypeInfo;
  }
  if ( v48->static_fields->_IsScriptDisp_k__BackingField )
    goto LABEL_136;
  if ( !*(&v48->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v48, v9);
  if ( !byte_5934080 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5934080 = 1;
  }
  Instance = (__int64)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9);
    Instance = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(Instance + 184) + 103LL) )
  {
    v49 = sub_21FFEBC(TerminalSceneComponent___c__DisplayClass221_1_TypeInfo);
    TerminalSceneComponent___c__DisplayClass221_1___ctor((TerminalSceneComponent___c__DisplayClass221_1_o *)v49, 0);
    if ( v49 )
    {
      *(_QWORD *)(v49 + 24) = v7;
      v56 = (Il2CppObject **)(v49 + 24);
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v49 + 24), v7, v50, v51, v52, v53, v54, v55);
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v9);
      if ( !byte_5931EF0 )
      {
        sub_21FFC50(&TerminalSceneComponent_TypeInfo);
        byte_5931EF0 = 1;
      }
      Instance = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v9);
        Instance = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v57 = **(_QWORD **)(Instance + 184);
      if ( v57 )
      {
        v58 = *(_QWORD *)(v57 + 264);
        if ( v58 )
        {
          Instance = *(_QWORD *)(v58 + 552);
          if ( Instance )
          {
            activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0);
            v60 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__;
            *(_BYTE *)(v49 + 16) = activeSelf;
            Instance = (__int64)SingletonMonoBehaviour_object___get_Instance(v60);
            if ( Instance )
            {
              QuestAfterAction__Init((QuestAfterAction_o *)Instance, 0);
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
              if ( Instance )
              {
                QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)Instance, 1, 0);
                Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                if ( Instance )
                {
                  if ( QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0) )
                  {
                    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v9);
                    if ( !byte_5931EF0 )
                    {
                      sub_21FFC50(&TerminalSceneComponent_TypeInfo);
                      byte_5931EF0 = 1;
                    }
                    Instance = (__int64)TerminalSceneComponent_TypeInfo;
                    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                    {
                      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v9);
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
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
                  }
                  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v9);
                  if ( !byte_5931EF0 )
                  {
                    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
                    byte_5931EF0 = 1;
                  }
                  Instance = (__int64)TerminalSceneComponent_TypeInfo;
                  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v9);
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
                        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
                        {
                          Instance = (__int64)this->fields.mTerminalMap;
                          if ( !Instance )
                            goto LABEL_160;
                          ScrTerminalMap__AllMaskStart((ScrTerminalMap_o *)Instance, 0, 1, 0);
                        }
                        v65 = sub_21FFD10(System_Action_Action____TypeInfo, 4);
                        v66 = *v56;
                        v67 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
                        System_Action_object____ctor(
                          v67,
                          v66,
                          Method_TerminalSceneComponent___c__DisplayClass221_0__Fadein_MapDisp_Start_b__5__,
                          0);
                        if ( v65 )
                        {
                          if ( *(_DWORD *)(v65 + 24) )
                          {
                            *(_QWORD *)(v65 + 32) = v67;
                            sub_21FFBF4(
                              (MissionNaviTransitionBoardItem_o *)(v65 + 32),
                              (int32_t)v67,
                              v68,
                              v69,
                              v70,
                              v71,
                              v72,
                              v73);
                            v74 = *v56;
                            v75 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
                            System_Action_object____ctor(
                              v75,
                              v74,
                              Method_TerminalSceneComponent___c__DisplayClass221_0__Fadein_MapDisp_Start_b__6__,
                              0);
                            if ( (*(_DWORD *)(v65 + 24) & 0xFFFFFFFE) != 0 )
                            {
                              *(_QWORD *)(v65 + 40) = v75;
                              sub_21FFBF4(
                                (MissionNaviTransitionBoardItem_o *)(v65 + 40),
                                (int32_t)v75,
                                v76,
                                v77,
                                v78,
                                v79,
                                v80,
                                v81);
                              Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
                              if ( !*(&TerminalSceneComponent___c_TypeInfo->_2.cctor_finished + 1) )
                              {
                                j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v82);
                                Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
                              }
                              static_fields = *(struct TerminalSceneComponent___c_StaticFields **)(Instance + 184);
                              _9__221_7 = (System_Action_object__o *)static_fields->__9__221_7;
                              if ( !_9__221_7 )
                              {
                                if ( !*(_DWORD *)(Instance + 228) )
                                {
                                  j_il2cpp_runtime_class_init_0(Instance, v82);
                                  static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
                                }
                                v91 = (Il2CppObject *)static_fields->__9;
                                _9__221_7 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
                                System_Action_object____ctor(
                                  _9__221_7,
                                  v91,
                                  Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__221_7__,
                                  0);
                                v92 = TerminalSceneComponent___c_TypeInfo->static_fields;
                                v92->__9__221_7 = (struct System_Action_Action__o *)_9__221_7;
                                sub_21FFBF4(
                                  (MissionNaviTransitionBoardItem_o *)&v92->__9__221_7,
                                  (int32_t)_9__221_7,
                                  v93,
                                  v94,
                                  v95,
                                  v96,
                                  v97,
                                  v98);
                              }
                              if ( *(_DWORD *)(v65 + 24) > 2u )
                              {
                                *(_QWORD *)(v65 + 48) = _9__221_7;
                                sub_21FFBF4(
                                  (MissionNaviTransitionBoardItem_o *)(v65 + 48),
                                  (int32_t)_9__221_7,
                                  v83,
                                  v84,
                                  v85,
                                  v86,
                                  v87,
                                  v88);
                                v99 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                                v100 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
                                System_Action_object____ctor(v100, v99, Method_QuestAfterAction_Play__, 0);
                                if ( (*(_DWORD *)(v65 + 24) & 0xFFFFFFFC) != 0 )
                                {
                                  *(_QWORD *)(v65 + 56) = v100;
                                  sub_21FFBF4(
                                    (MissionNaviTransitionBoardItem_o *)(v65 + 56),
                                    (int32_t)v100,
                                    v101,
                                    v102,
                                    v103,
                                    v104,
                                    v105,
                                    v106);
                                  v107 = (ActionChain_o *)sub_21FFEBC(ActionChain_TypeInfo);
                                  ActionChain___ctor_55902484(v107, (System_Action_Action__array *)v65, 0);
                                  v108 = sub_21FFD10(System_Action___TypeInfo, 1);
                                  v109 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                                  System_Action___ctor(
                                    v109,
                                    (Il2CppObject *)v49,
                                    Method_TerminalSceneComponent___c__DisplayClass221_1__Fadein_MapDisp_Start_b__8__,
                                    0);
                                  if ( !v108 )
                                    goto LABEL_160;
                                  if ( *(_DWORD *)(v108 + 24) )
                                  {
                                    *(_QWORD *)(v108 + 32) = v109;
                                    sub_21FFBF4(
                                      (MissionNaviTransitionBoardItem_o *)(v108 + 32),
                                      (int32_t)v109,
                                      v110,
                                      v111,
                                      v112,
                                      v113,
                                      v114,
                                      v115);
                                    if ( !v107 )
                                      goto LABEL_160;
                                    v116 = (ChainableActionBase_o *)v107;
                                    v117 = (System_Action_array *)v108;
                                    goto LABEL_127;
                                  }
                                }
                              }
                            }
                          }
LABEL_161:
                          sub_21FFED4(Instance);
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
    sub_21FFECC(Instance, v9);
  }
  if ( this->fields.mIsStart_LoginBonusWhiteBg )
  {
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v9);
    Instance = TutorialFlag__Get_47357952(102, 0);
    if ( (Instance & 1) != 0 && !this->fields.isTutorialAfter )
    {
      v123 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
      this->fields.mIsStart_LoginBonusWhiteBg = 0;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance(v123);
      if ( Instance )
      {
        CommonUI__SetupLoginResultData((CommonUI_o *)Instance, 0, 0);
        v124 = sub_21FFD10(System_Action_Action____TypeInfo, 4);
        v125 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v126 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
        System_Action_object____ctor(v126, v125, Method_CommonUI_StartLoginMessages__, 0);
        if ( v124 )
        {
          if ( !*(_DWORD *)(v124 + 24) )
            goto LABEL_161;
          *(_QWORD *)(v124 + 32) = v126;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(v124 + 32),
            (int32_t)v126,
            v127,
            v128,
            v129,
            v130,
            v131,
            v132);
          Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
          if ( !*(&TerminalSceneComponent___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v133);
            Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
          }
          v140 = *(struct TerminalSceneComponent___c_StaticFields **)(Instance + 184);
          _9__221_0 = (System_Action_object__o *)v140->__9__221_0;
          if ( !_9__221_0 )
          {
            if ( !*(_DWORD *)(Instance + 228) )
            {
              j_il2cpp_runtime_class_init_0(Instance, v133);
              v140 = TerminalSceneComponent___c_TypeInfo->static_fields;
            }
            v142 = (Il2CppObject *)v140->__9;
            _9__221_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
            System_Action_object____ctor(
              _9__221_0,
              v142,
              Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__221_0__,
              0);
            v143 = TerminalSceneComponent___c_TypeInfo->static_fields;
            v143->__9__221_0 = (struct System_Action_Action__o *)_9__221_0;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v143->__9__221_0,
              (int32_t)_9__221_0,
              v144,
              v145,
              v146,
              v147,
              v148,
              v149);
          }
          if ( (*(_DWORD *)(v124 + 24) & 0xFFFFFFFE) == 0 )
            goto LABEL_161;
          *(_QWORD *)(v124 + 40) = _9__221_0;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(v124 + 40),
            (int32_t)_9__221_0,
            v134,
            v135,
            v136,
            v137,
            v138,
            v139);
          Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
          if ( !*(&TerminalSceneComponent___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v150);
            Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
          }
          v157 = *(struct TerminalSceneComponent___c_StaticFields **)(Instance + 184);
          _9__221_1 = (System_Action_object__o *)v157->__9__221_1;
          if ( !_9__221_1 )
          {
            if ( !*(_DWORD *)(Instance + 228) )
            {
              j_il2cpp_runtime_class_init_0(Instance, v150);
              v157 = TerminalSceneComponent___c_TypeInfo->static_fields;
            }
            v159 = (Il2CppObject *)v157->__9;
            _9__221_1 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
            System_Action_object____ctor(
              _9__221_1,
              v159,
              Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__221_1__,
              0);
            v160 = TerminalSceneComponent___c_TypeInfo->static_fields;
            v160->__9__221_1 = (struct System_Action_Action__o *)_9__221_1;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v160->__9__221_1,
              (int32_t)_9__221_1,
              v161,
              v162,
              v163,
              v164,
              v165,
              v166);
          }
          if ( *(_DWORD *)(v124 + 24) <= 2u )
            goto LABEL_161;
          *(_QWORD *)(v124 + 48) = _9__221_1;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(v124 + 48),
            (int32_t)_9__221_1,
            v151,
            v152,
            v153,
            v154,
            v155,
            v156);
          v167 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v167,
            (Il2CppObject *)v7,
            Method_TerminalSceneComponent___c__DisplayClass221_0__Fadein_MapDisp_Start_b__2__,
            0);
          if ( (*(_DWORD *)(v124 + 24) & 0xFFFFFFFC) == 0 )
            goto LABEL_161;
          *(_QWORD *)(v124 + 56) = v167;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(v124 + 56),
            (int32_t)v167,
            v168,
            v169,
            v170,
            v171,
            v172,
            v173);
          v174 = (ActionChain_o *)sub_21FFEBC(ActionChain_TypeInfo);
          ActionChain___ctor_55902484(v174, (System_Action_Action__array *)v124, 0);
          Instance = sub_21FFD10(System_Action___TypeInfo, 1);
          if ( Instance )
          {
            v181 = (System_Action_array *)Instance;
            if ( !*(_DWORD *)(Instance + 24) )
              goto LABEL_161;
            v182 = *v16;
            *(_QWORD *)(Instance + 32) = *v16;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(Instance + 32), v182, v175, v176, v177, v178, v179, v180);
            if ( v174 )
            {
              v116 = (ChainableActionBase_o *)v174;
              v117 = v181;
LABEL_127:
              Instance = (__int64)ChainableActionBase__Final(v116, v117, 0);
              if ( !Instance )
                goto LABEL_160;
              ChainableActionBase__Execute((ChainableActionBase_o *)Instance, 0);
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
  v118 = *(_DWORD *)(*(_QWORD *)v31 + 96LL);
  v119 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v119,
    (Il2CppObject *)v7,
    Method_TerminalSceneComponent___c__DisplayClass221_0__Fadein_MapDisp_Start_b__3__,
    0);
  TerminalSceneComponent__StartEventDailyPoint(this, v118, v119, v120);
LABEL_136:
  v121 = this->fields.mTerminalList;
  v122 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v122,
    (Il2CppObject *)v7,
    Method_TerminalSceneComponent___c__DisplayClass221_0__Fadein_MapDisp_Start_b__4__,
    0);
  if ( !v121 )
    goto LABEL_160;
  ScrTerminalListTop__LoadAndSetupForTutorial(v121, v122, 0);
}


void TerminalSceneComponent__Fadein_WorldDisp(
        TerminalSceneComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AvalonSceneManager_c *v6; // x0
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_593AAC3 & 1) == 0 )
  {
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    byte_593AAC3 = 1;
  }
  v6 = AvalonSceneManager_TypeInfo;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, end_act);
    v6 = AvalonSceneManager_TypeInfo;
  }
  v7 = TerminalSceneComponent__coFadein_WorldDisp(this, v6->static_fields->DEFAULT_FADE_TIME, end_act, 1, v3);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v7, 0);
}


void TerminalSceneComponent__Fadein_WorldDisp_52279112(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  System_Collections_IEnumerator_o *v6; // x1

  v6 = TerminalSceneComponent__coFadein_WorldDisp(this, fade_time, end_act, 1, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v6, 0);
}


UserServantEntity_o *TerminalSceneComponent__GetNextStandServant(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_array *mStandSvtDatas; // x11
  int max_length; // w9
  int v4; // w10
  int32_t mStandSvtIdx; // w8
  int32_t v6; // w8
  UserServantEntity_o *v7; // x8

  mStandSvtDatas = this->fields.mStandSvtDatas;
  if ( !mStandSvtDatas )
    sub_21FFECC(this, method);
  max_length = mStandSvtDatas->max_length;
  if ( max_length < 1 )
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
      if ( mStandSvtIdx + 1 < max_length )
        v6 = mStandSvtIdx + 1;
      else
        v6 = 0;
      this->fields.mStandSvtIdx = v6;
      if ( v6 >= (unsigned int)max_length )
        sub_21FFED4(this);
      v7 = mStandSvtDatas->m_Items[v6];
      if ( v7 )
        break;
      max_length = mStandSvtDatas->max_length;
      if ( ++v4 >= max_length )
        goto LABEL_12;
    }
  }
  if ( v4 == max_length )
    this->fields.mStandSvtIdx = 0;
  return v7;
}


System_String_o *TerminalSceneComponent__GetOverwriteCommonBg(int32_t skinType, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  System_String_o *OVERWRITE_COMMON_BG_TYPE2_KEY; // x0
  TerminalSceneComponent_c *v5; // x0

  if ( (byte_593AB00 & 1) == 0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_593AB00 = 1;
  }
  if ( skinType == 4 )
  {
    v5 = TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
      v5 = TerminalSceneComponent_TypeInfo;
    }
    OVERWRITE_COMMON_BG_TYPE2_KEY = v5->static_fields->OVERWRITE_COMMON_BG_TYPE2_KEY;
    return UnityEngine_PlayerPrefs__GetString_83184936(OVERWRITE_COMMON_BG_TYPE2_KEY, 0);
  }
  if ( skinType == 2 )
  {
    v3 = TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
      v3 = TerminalSceneComponent_TypeInfo;
    }
    OVERWRITE_COMMON_BG_TYPE2_KEY = v3->static_fields->OVERWRITE_COMMON_BG_TYPE1_KEY;
    return UnityEngine_PlayerPrefs__GetString_83184936(OVERWRITE_COMMON_BG_TYPE2_KEY, 0);
  }
  return **(System_String_o ***)(qword_594C0B8 + 184);
}


QuestEntity_o *TerminalSceneComponent__GetPlayAutoExecuteQuestEntity(
        TerminalSceneComponent_o *this,
        QuestEntity_array *questEntList,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Instance; // x0
  __int64 v5; // x1
  int max_length; // w8
  unsigned int v7; // w23
  QuestEntity_o *v8; // x21
  int32_t id; // w22
  int klass_high; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_593AAE8 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_SpotMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593AAE8 = 1;
  }
  entity = 0;
  Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  if ( !BYTE5(Instance[2].fields._lookup) )
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
          sub_21FFED4(Instance);
        v8 = questEntList->m_Items[v7];
        if ( !v8 )
          break;
        id = v8->fields.id;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v5);
        Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)CondType__IsQuestClear_47254560(id, -1, 0, 0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
          Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SpotMaster___);
          if ( !Instance )
            break;
          Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                     Instance,
                                                                     &entity,
                                                                     v8->fields.spotId,
                                                                     (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              break;
            klass_high = HIDWORD(entity[1].klass);
            if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
            if ( !byte_5932644 )
            {
              sub_21FFC50(&TerminalPramsManager_TypeInfo);
              byte_5932644 = 1;
            }
            Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
            if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
              Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
            }
            if ( klass_high == HIDWORD(Instance[2].fields.list->klass) )
              return v8;
          }
        }
        max_length = questEntList->max_length;
        if ( (int)++v7 >= max_length )
          return 0;
      }
LABEL_28:
      sub_21FFECC(Instance, v5);
    }
  }
  return 0;
}


int32_t TerminalSceneComponent__GetState(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_o *v2; // x19
  struct CStateManager_TerminalSceneComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_593AAEB & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_21FFC50(&Method_CStateManager_TerminalSceneComponent__getState__);
    byte_593AAEB = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_21FFECC(this, method);
  return mFSM->fields.m_state;
}


void TerminalSceneComponent__InitLighting(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  const MethodInfo *v4; // x2

  if ( (byte_593AAFE & 1) == 0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_593AAFE = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
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
  __int64 v5; // x1
  WarEntity_o *v6; // x0
  WarEntity_o *v7; // x19
  int max_length; // w8
  int **i; // x9
  int *v10; // x10

  if ( (byte_593AACC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_MapMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_WarMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593AACC = 1;
  }
  if ( !eventId )
    return 1;
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_20;
  v6 = WarMaster__getByEventId((WarMaster_o *)Instance, eventId, 0);
  if ( !v6 )
    return 1;
  v7 = v6;
  if ( WarEntity__HasFlag(v6, 2, 0) )
  {
    Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_MapMaster___);
    if ( !Instance )
      goto LABEL_20;
    Instance = MapMaster__getList((MapMaster_o *)Instance, v7->fields.id, 0);
    if ( !Instance )
      goto LABEL_20;
    max_length = Instance->max_length;
    if ( max_length >= 1 )
    {
      for ( i = (int **)Instance->m_Items; ; ++i )
      {
        v10 = *i;
        if ( !*i )
          break;
        if ( v10[6] >= 1 && v10[7] >= 1 && v10[8] > 0 )
          return 1;
        if ( !--max_length )
          return 0;
      }
LABEL_20:
      sub_21FFECC(Instance, v5);
    }
  }
  return 0;
}


bool TerminalSceneComponent__IsMapActive(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalMap_o *mTerminalMap; // x8

  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap || (this = (TerminalSceneComponent_o *)mTerminalMap->fields.dispRoot) == 0 )
    sub_21FFECC(this, method);
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
}


bool TerminalSceneComponent__IsMapTouchEnabled(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *mTerminalMap; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  System_String_o *v5; // x20

  if ( (byte_593AAD0 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_21FFC50(&StringLiteral_9248/*"Map Touch Enable"*/);
    byte_593AAD0 = 1;
  }
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_64;
  mTerminalMap = (ScrTerminalMap_o *)ScrTerminalMap__mfGetMyFsmP(mTerminalMap, 0);
  if ( !mTerminalMap )
    goto LABEL_64;
  mTerminalMap = (ScrTerminalMap_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)mTerminalMap, 0);
  if ( !this->fields.mTutorialKind )
  {
    mTerminalList = this->fields.mTerminalList;
    if ( !mTerminalList )
      goto LABEL_64;
    v5 = (System_String_o *)mTerminalMap;
    mTerminalMap = (ScrTerminalMap_o *)mTerminalList->fields.mActionBgColl;
    if ( !mTerminalMap )
      goto LABEL_64;
    mTerminalMap = (ScrTerminalMap_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mTerminalMap, 0);
    if ( !mTerminalMap )
      goto LABEL_64;
    mTerminalMap = (ScrTerminalMap_o *)UnityEngine_GameObject__get_activeSelf(
                                         (UnityEngine_GameObject_o *)mTerminalMap,
                                         0);
    if ( ((unsigned __int8)mTerminalMap & 1) == 0 )
    {
      if ( !v5 )
        goto LABEL_64;
      if ( System_String__IndexOf_75501892(v5, (System_String_o *)StringLiteral_9248/*"Map Touch Enable"*/, 0) < 0
        || MainMenuBar__get_IsEnableOutSideCollider(0) )
      {
        return 0;
      }
      mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !mTerminalMap )
        goto LABEL_64;
      if ( !CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)mTerminalMap, 0) )
      {
        mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !mTerminalMap )
          goto LABEL_64;
        if ( !CommonUI__IsActive_ApRecvDlgComp((CommonUI_o *)mTerminalMap, 0) )
        {
          mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !mTerminalMap )
            goto LABEL_64;
          if ( !CommonUI__IsActive_EventItemSelectDlgComp((CommonUI_o *)mTerminalMap, 0) )
          {
            mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !mTerminalMap )
              goto LABEL_64;
            if ( !CommonUI__IsActive_CommonConfirmDialog((CommonUI_o *)mTerminalMap, 0) )
            {
              mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !mTerminalMap )
                goto LABEL_64;
              if ( !CommonUI__IsActive_NotifiDialog((CommonUI_o *)mTerminalMap, 0) )
              {
                mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !mTerminalMap )
                  goto LABEL_64;
                if ( !CommonUI__IsActive_TutorialBigDialog((CommonUI_o *)mTerminalMap, 0) )
                {
                  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !mTerminalMap )
                    goto LABEL_64;
                  if ( !CommonUI__IsActive_MasterMission((CommonUI_o *)mTerminalMap, 0) )
                  {
                    mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( !mTerminalMap )
                      goto LABEL_64;
                    if ( !CommonUI__IsActive_MasterProfile((CommonUI_o *)mTerminalMap, 0) )
                    {
                      mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      if ( !mTerminalMap )
                        goto LABEL_64;
                      if ( !CommonUI__IsActive_MissionListDialog((CommonUI_o *)mTerminalMap, 0) )
                      {
                        mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        if ( !mTerminalMap )
                          goto LABEL_64;
                        if ( !CommonUI__IsActive_AssistEffectConfirmDialog((CommonUI_o *)mTerminalMap, 0) )
                        {
                          mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          if ( !mTerminalMap )
                            goto LABEL_64;
                          if ( !CommonUI__IsActive_CommandAssistConfirmDialog((CommonUI_o *)mTerminalMap, 0) )
                          {
                            mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            if ( !mTerminalMap )
                              goto LABEL_64;
                            if ( !CommonUI__IsActive_AchievementExchangeConditionsDialog((CommonUI_o *)mTerminalMap, 0) )
                            {
                              mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                              if ( !mTerminalMap )
                                goto LABEL_64;
                              if ( !CommonUI__IsActive_SvtFrameShortDialog((CommonUI_o *)mTerminalMap, 0) )
                              {
                                mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                if ( !mTerminalMap )
                                  goto LABEL_64;
                                if ( !CommonUI__isBusyDialog((CommonUI_o *)mTerminalMap, 0) )
                                {
                                  mTerminalMap = (ScrTerminalMap_o *)this->fields.mPlayerStatus;
                                  if ( !mTerminalMap )
                                    goto LABEL_64;
                                  if ( LOBYTE(mTerminalMap->fields._EventBoardGameArrivalVoiceSvtIdList_k__BackingField)
                                    || ScrPlayerStatus__IsCommandSpellActive((ScrPlayerStatus_o *)mTerminalMap, 0) )
                                  {
                                    return 0;
                                  }
                                  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                                  if ( !mTerminalMap )
                                    goto LABEL_64;
                                  if ( !QuestAfterAction__IsPlaying((QuestAfterAction_o *)mTerminalMap, 0) )
                                  {
                                    mTerminalMap = (ScrTerminalMap_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
                                    if ( !mTerminalMap )
                                      goto LABEL_64;
                                    if ( !MissionNotifyManager__IsPress((MissionNotifyManager_o *)mTerminalMap, 0) )
                                    {
                                      mTerminalMap = (ScrTerminalMap_o *)this->fields.mTitleInfo;
                                      if ( !mTerminalMap )
                                        goto LABEL_64;
                                      if ( TitleInfoControl__IsTouchEnable((TitleInfoControl_o *)mTerminalMap, 0) )
                                      {
                                        mTerminalMap = (ScrTerminalMap_o *)this->fields.mTitleInfo;
                                        if ( !mTerminalMap )
                                          goto LABEL_64;
                                        if ( !TitleInfoControl__IsBusyOnEventUI((TitleInfoControl_o *)mTerminalMap, 0) )
                                        {
                                          mTerminalMap = this->fields.mTerminalMap;
                                          if ( !mTerminalMap )
                                            goto LABEL_64;
                                          if ( !ScrTerminalMap__IsActive_SpotCooltimeRewardDialog(mTerminalMap, 0) )
                                          {
                                            mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                                            if ( !mTerminalMap )
                                              goto LABEL_64;
                                            if ( !BYTE5(mTerminalMap->fields.rootEffectP) )
                                            {
                                              mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                              if ( !mTerminalMap )
                                                goto LABEL_64;
                                              if ( !CommonUI__IsActive_MessageAndScrollDetailConfirmDialog(
                                                      (CommonUI_o *)mTerminalMap,
                                                      0) )
                                              {
                                                mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                                if ( mTerminalMap )
                                                {
                                                  if ( CommonUI__IsActive_ScrollMessageDialog(
                                                         (CommonUI_o *)mTerminalMap,
                                                         0) )
                                                  {
                                                    return 0;
                                                  }
                                                  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                                  if ( mTerminalMap )
                                                    return !CommonUI__IsActiveQuestSkipConfirmDialog(
                                                              (CommonUI_o *)mTerminalMap,
                                                              0);
                                                }
LABEL_64:
                                                sub_21FFECC(mTerminalMap, method);
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
  }
  return 0;
}


bool TerminalSceneComponent__IsNotDisplayCostume(
        TerminalSceneComponent_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  if ( !shopEntity )
    sub_21FFECC(this, 0);
  return shopEntity->fields.shopType == 11
      && shopEntity->fields.purchaseType == 14
      && !ShopEntity__IsEligibleForFreeFeaturesTheCostumeRelease(shopEntity, 0);
}


bool TerminalSceneComponent__IsPlayChapterStart(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  _BOOL4 v4; // w23
  int IsWarStartActionSkip; // w19
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v8; // x0
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v10; // x20
  __int64 v11; // x1
  int64_t targetId; // x19
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  TerminalPramsManager_c *v15; // x0

  if ( (byte_593AAE4 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593AAE4 = 1;
  }
  v4 = this->fields._IsWarStartAnim_k__BackingField || this->fields.mTutorialKind == 1;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  IsWarStartActionSkip = TerminalPramsManager__get_Debug_IsWarStartActionSkip(0);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
  if ( !byte_5932644 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932644 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
    v8 = TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    sub_21FFECC(v8, v6);
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(
                       (QuestTree_o *)Instance,
                       v8->static_fields->_WarId_k__BackingField,
                       0);
  if ( !WarEntityByWarID )
    return 0;
  v10 = WarEntityByWarID;
  if ( WarEntity__IsMainInterlude(WarEntityByWarID, 0)
    && WarEntity__IsPurchasedByRarePrism(v10, 0)
    && WarEntity__IsStartTypeQuest(v10, 0) )
  {
    targetId = v10->fields.targetId;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v11);
    if ( CondType__IsQuestPhaseClear_47317140(targetId, 1, -1, 0, 0) )
      return 0;
  }
  else if ( (v4 & ~IsWarStartActionSkip) == 0 )
  {
    return 0;
  }
  if ( !WarEntity__GetStartType(v10, 0) )
    return 0;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
  if ( !byte_5932644 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932644 = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
    v15 = TerminalPramsManager_TypeInfo;
  }
  return TerminalSceneComponent__CheckPlayChapterStart(
           (TerminalSceneComponent_o *)v15,
           v15->static_fields->_WarId_k__BackingField,
           v14);
}


bool TerminalSceneComponent__IsTerminalListAreaWait(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ScrTerminalListTop_o *mTerminalList; // x0

  if ( (byte_593AAA7 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_2133/*"AREA WAIT"*/);
    byte_593AAA7 = 1;
  }
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList
    || (mTerminalList = (ScrTerminalListTop_o *)ScrTerminalListTop__mfGetMyFsmP(mTerminalList, 0)) == 0
    || (mTerminalList = (ScrTerminalListTop_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)mTerminalList, 0)) == 0 )
  {
    sub_21FFECC(mTerminalList, method);
  }
  return System_String__IndexOf_75501892((System_String_o *)mTerminalList, (System_String_o *)StringLiteral_2133/*"AREA WAIT"*/, 0) >= 0;
}


bool TerminalSceneComponent__IsValidGrandBgm(TerminalSceneComponent_o *this, int32_t *index, const MethodInfo *method)
{
  BalanceConfig_c *v4; // x8
  TerminalSceneComponent___c_c *v5; // x0
  System_Int32_array *TerminalGrandBgmCommonReleaseIds; // x20
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x8
  System_Predicate_int__o *_9__235_0; // x21
  Il2CppObject *v9; // x22
  struct TerminalSceneComponent___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t Index_int; // w0

  if ( (byte_593AAD6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_FindIndex_int___);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&System_Predicate_int__TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent___c__IsValidGrandBgm_b__235_0__);
    sub_21FFC50(&TerminalSceneComponent___c_TypeInfo);
    byte_593AAD6 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, index);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = TerminalSceneComponent___c_TypeInfo;
  TerminalGrandBgmCommonReleaseIds = v4->static_fields->TerminalGrandBgmCommonReleaseIds;
  if ( !*(&TerminalSceneComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, index);
    v5 = TerminalSceneComponent___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__235_0 = static_fields->__9__235_0;
  if ( !_9__235_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, index);
      static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__235_0 = (System_Predicate_int__o *)sub_21FFEBC(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(_9__235_0, v9, Method_TerminalSceneComponent___c__IsValidGrandBgm_b__235_0__, 0);
    v10 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v10->__9__235_0 = _9__235_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->__9__235_0, (int32_t)_9__235_0, v11, v12, v13, v14, v15, v16);
  }
  Index_int = System_Array__FindIndex_int_(
                TerminalGrandBgmCommonReleaseIds,
                (System_Predicate_T__o *)_9__235_0,
                (const MethodInfo_3978028 *)Method_System_Array_FindIndex_int___);
  *index = Index_int;
  return Index_int >= 0;
}


bool TerminalSceneComponent__IsWaitingTerminalTopEffectForCampaignDirectBonus(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  ScrTerminalListTop_o *mTerminalList; // x0
  bool result; // w0
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  unsigned int DispState_k__BackingField; // w8

  if ( (byte_593AAF4 & 1) == 0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593AAF4 = 1;
  }
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_17;
  if ( ScrTerminalListTop__get_IsActiveAnyEarth(mTerminalList, 0) )
    return 0;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_5934F89 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5934F89 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  result = 0;
  DispState_k__BackingField = static_fields->_DispState_k__BackingField;
  if ( DispState_k__BackingField <= 3 && DispState_k__BackingField != 2 )
  {
    mTerminalList = this->fields.mTerminalList;
    if ( mTerminalList )
      return ScrTerminalListTop__CheckTerminalTopEffect(mTerminalList, 0) != 0;
LABEL_17:
    sub_21FFECC(mTerminalList, method);
  }
  return result;
}


System_Collections_IEnumerator_o *TerminalSceneComponent__LoadAsync(
        TerminalSceneComponent_o *this,
        UserServantEntity_o *usd,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  if ( (byte_593AAB5 & 1) == 0 )
  {
    sub_21FFC50(&TerminalSceneComponent__LoadAsync_d__199_TypeInfo);
    byte_593AAB5 = 1;
  }
  v7 = sub_21FFEBC(TerminalSceneComponent__LoadAsync_d__199_TypeInfo);
  TerminalSceneComponent__LoadAsync_d__199___ctor((TerminalSceneComponent__LoadAsync_d__199_o *)v7, 0, 0);
  if ( !v7 )
    sub_21FFECC(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = usd;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)usd, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 48) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)callback, v22, v23, v24, v25, v26, v27);
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
  const MethodInfo_45B5034 *v9; // x2
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
  if ( (byte_593AAFD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Nullable_Vector3__get_HasValue__);
    this = (TerminalSceneComponent_o *)sub_21FFC50(&Method_System_Nullable_Vector3__get_Value__);
    byte_593AAFD = 1;
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
    if ( !byte_5931945 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931945 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->oneVector.fields.x;
    y = static_fields->oneVector.fields.y;
    z = static_fields->oneVector.fields.z;
  }
  this = (TerminalSceneComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0);
  if ( !this )
LABEL_13:
    sub_21FFECC(this, dialog);
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
    sub_21FFECC(0, method);
  ((void (__fastcall *)(struct BaseCore_o *, const MethodInfo *))mEarthCore->klass->vtable._7_OnPress.methodPtr)(
    mEarthCore,
    mEarthCore->klass->vtable._7_OnPress.method);
}


void TerminalSceneComponent__OnCoreRelease(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  BaseCore_o *mEarthCore; // x0

  mEarthCore = this->fields.mEarthCore;
  if ( !mEarthCore )
    sub_21FFECC(0, method);
  BaseCore__OnRelease(mEarthCore, 0);
}


void TerminalSceneComponent__OnDestroy(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  TerminalSceneComponent_c *v12; // x0
  __int64 v13; // x1
  long double v14; // q0
  __int64 v15; // x0
  __int64 v16; // x0
  UnityEngine_Object_o *v17; // x20
  __int64 v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *loadEarthAssetName; // x20
  const MethodInfo *v26; // x1
  __int64 v27; // x1
  long double v28; // q0
  __int64 v29; // x0
  __int64 v30; // x0
  UnityEngine_Object_o *mTerminalMap; // x21
  UnityEngine_Object_o *v32; // x20
  __int64 v33; // x1
  ScrTerminalMap_o *v34; // x0

  if ( (byte_593AAAF & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WebViewManager__getInstance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AssetManager__getInstance__);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_593AAAF = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v3->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(mInstance, (UnityEngine_Object_o *)this, 0) )
  {
    v12 = TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5);
      v12 = TerminalSceneComponent_TypeInfo;
    }
    v12->static_fields->mInstance = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)TerminalSceneComponent_TypeInfo->static_fields,
      0,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    v15 = *((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 4);
    if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
      v15 = sub_2237AF8(v14);
    v16 = *(_QWORD *)(*(_QWORD *)(v15 + 192) + 16LL);
    if ( (*(_WORD *)(v16 + 309) & 1) == 0 )
      v16 = sub_2237AF8(v14);
    v17 = **(UnityEngine_Object_o ***)(v16 + 184);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    if ( UnityEngine_Object__op_Implicit(v17, 0) )
    {
      loadEarthAssetName = this->fields.loadEarthAssetName;
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v18);
      AssetManager__releaseAssetStorage(loadEarthAssetName, 0);
    }
    this->fields.loadEarthAssetName = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.loadEarthAssetName, 0, v19, v20, v21, v22, v23, v24);
    StandFigureManager__ReleaseCharaFigure(0);
    TerminalSceneComponent__ReleaseAssetToResume(this, v26);
    v29 = *((_QWORD *)Method_SingletonMonoBehaviour_WebViewManager__getInstance__ + 4);
    if ( (*(_WORD *)(v29 + 309) & 1) == 0 )
      v29 = sub_2237AF8(v28);
    v30 = *(_QWORD *)(*(_QWORD *)(v29 + 192) + 16LL);
    if ( (*(_WORD *)(v30 + 309) & 1) == 0 )
      v30 = sub_2237AF8(v28);
    mTerminalMap = (UnityEngine_Object_o *)this->fields.mTerminalMap;
    v32 = **(UnityEngine_Object_o ***)(v30 + 184);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
    if ( UnityEngine_Object__op_Inequality(mTerminalMap, 0, 0) )
    {
      v34 = this->fields.mTerminalMap;
      if ( v34 )
      {
        ScrTerminalMap__DestroyWebView(v34, 0);
        return;
      }
LABEL_35:
      sub_21FFECC(v34, v33);
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
    v34 = (ScrTerminalMap_o *)UnityEngine_Object__op_Inequality(v32, 0, 0);
    if ( ((unsigned __int8)v34 & 1) != 0 )
    {
      if ( !v32 )
        goto LABEL_35;
      WebViewManager__DestroyWebView((WebViewManager_o *)v32, 0);
    }
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
  System_String_o *String_83184936; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x24
  System_Func_object__int__o *v12; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  System_Int32_array *v14; // x0
  __int64 v15; // x1
  TerminalSceneComponent___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x24
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x9
  System_Func_T__TResult__o *_9__288_0; // x25
  Il2CppObject *v20; // x26
  struct TerminalSceneComponent___c_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Collections_Generic_List_TSource__o *v29; // x0
  __int64 v30; // x1
  TerminalSceneComponent___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x24
  struct TerminalSceneComponent___c_StaticFields *v33; // x9
  System_Func_object__bool__o *_9__288_1; // x25
  Il2CppObject *v35; // x26
  struct TerminalSceneComponent___c_StaticFields *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  __int64 v44; // x1
  TerminalSceneComponent___c_c *v45; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x24
  struct TerminalSceneComponent___c_StaticFields *v47; // x9
  System_Func_object__bool__o *_9__288_2; // x25
  Il2CppObject *v49; // x26
  struct TerminalSceneComponent___c_StaticFields *v50; // x0
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x24
  System_Func_object__bool__o *v58; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  System_Collections_Generic_List_TSource__o *v60; // x0
  __int64 v61; // x1
  TerminalSceneComponent___c_c *v62; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x23
  struct TerminalSceneComponent___c_StaticFields *v64; // x9
  System_Func_object__int__o *_9__288_4; // x24
  Il2CppObject *v66; // x25
  MissionNaviTransitionBoardItem_o *v67; // x0
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v74; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x23
  __int64 v76; // x1
  __int64 v77; // x1
  Il2CppObject *Instance; // x24
  System_String_o *v79; // x22
  TerminalSceneComponent___c_c *v80; // x0
  struct TerminalSceneComponent___c_StaticFields *v81; // x8
  System_Func_T__TResult__o *_9__288_5; // x24
  Il2CppObject *v83; // x25
  struct TerminalSceneComponent___c_StaticFields *v84; // x0
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v91; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v92; // x25
  __int64 v93; // x1
  System_String_o *v94; // x0
  __int64 v95; // x1
  TerminalSceneComponent___c_c *v96; // x8
  System_String_o *v97; // x21
  struct TerminalSceneComponent___c_StaticFields *v98; // x9
  System_Func_object__int__o *_9__288_6; // x26
  Il2CppObject *v100; // x27
  struct TerminalSceneComponent___c_StaticFields *v101; // x0
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  Il2CppObject *v108; // x0
  int32_t v111; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_593AAF7 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_int__ShopEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_ShopEntity__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Sum_ShopEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_ShopEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_ShopEntity___);
    sub_21FFC50(&System_Func_int__ShopEntity__TypeInfo);
    sub_21FFC50(&System_Func_ShopEntity__int__TypeInfo);
    sub_21FFC50(&System_Func_ShopEntity__bool__TypeInfo);
    sub_21FFC50(&System_Func_string__int__TypeInfo);
    sub_21FFC50(&Method_System_Int32_Parse__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_TerminalSceneComponent__OpenExchangeDialogue_b__288_3__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__288_0__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__288_1__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__288_2__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__288_4__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__288_5__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__288_6__);
    sub_21FFC50(&TerminalSceneComponent___c_TypeInfo);
    sub_21FFC50(&StringLiteral_20552/*"freeShopIds"*/);
    byte_593AAF7 = 1;
  }
  String_83184936 = UnityEngine_PlayerPrefs__GetString_83184936(playerPrefsKey, 0);
  if ( !String_83184936 )
    goto LABEL_34;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_83184936, 0x2Cu, 0, 0);
  v12 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_string__int__TypeInfo);
  System_Func_object__int____ctor(v12, 0, Method_System_Int32_Parse__, 0);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v11,
                                                               (System_Func_TSource__TResult__o *)v12,
                                                               (const MethodInfo_385D394 *)Method_System_Linq_Enumerable_Select_string__int___);
  v14 = System_Linq_Enumerable__ToArray_int_(
          v13,
          (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
  v16 = TerminalSceneComponent___c_TypeInfo;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)v14;
  if ( !*(&TerminalSceneComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v15);
    v16 = TerminalSceneComponent___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__288_0 = (System_Func_T__TResult__o *)static_fields->__9__288_0;
  if ( !_9__288_0 )
  {
    if ( !*(&v16->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v16, v15);
      static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__288_0 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_int__ShopEntity__TypeInfo);
    System_Func_int__object____ctor(
      _9__288_0,
      v20,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__288_0__,
      0);
    v21 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v21->__9__288_0 = (struct System_Func_int__ShopEntity__o *)_9__288_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v21->__9__288_0, (int32_t)_9__288_0, v22, v23, v24, v25, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               v17,
                                                               (System_Func_TSource__TResult__o *)_9__288_0,
                                                               (const MethodInfo_385A9E0 *)Method_System_Linq_Enumerable_Select_int__ShopEntity___);
  v29 = System_Linq_Enumerable__ToList_object_(
          v28,
          (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
  v31 = TerminalSceneComponent___c_TypeInfo;
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)v29;
  if ( !*(&TerminalSceneComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v30);
    v31 = TerminalSceneComponent___c_TypeInfo;
  }
  v33 = v31->static_fields;
  _9__288_1 = (System_Func_object__bool__o *)v33->__9__288_1;
  if ( !_9__288_1 )
  {
    if ( !*(&v31->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v31, v30);
      v33 = TerminalSceneComponent___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)v33->__9;
    _9__288_1 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__288_1,
      v35,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__288_1__,
      0);
    v36 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v36->__9__288_1 = (struct System_Func_ShopEntity__bool__o *)_9__288_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v36->__9__288_1, (int32_t)_9__288_1, v37, v38, v39, v40, v41, v42);
  }
  v43 = System_Linq_Enumerable__Where_object_(
          v32,
          (System_Func_TSource__bool__o *)_9__288_1,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v45 = TerminalSceneComponent___c_TypeInfo;
  v46 = v43;
  if ( !*(&TerminalSceneComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v44);
    v45 = TerminalSceneComponent___c_TypeInfo;
  }
  v47 = v45->static_fields;
  _9__288_2 = (System_Func_object__bool__o *)v47->__9__288_2;
  if ( !_9__288_2 )
  {
    if ( !*(&v45->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v45, v44);
      v47 = TerminalSceneComponent___c_TypeInfo->static_fields;
    }
    v49 = (Il2CppObject *)v47->__9;
    _9__288_2 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__288_2,
      v49,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__288_2__,
      0);
    v50 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v50->__9__288_2 = (struct System_Func_ShopEntity__bool__o *)_9__288_2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v50->__9__288_2, (int32_t)_9__288_2, v51, v52, v53, v54, v55, v56);
  }
  v57 = System_Linq_Enumerable__Where_object_(
          v46,
          (System_Func_TSource__bool__o *)_9__288_2,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v58 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ShopEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v58,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent__OpenExchangeDialogue_b__288_3__,
    0);
  v59 = System_Linq_Enumerable__Where_object_(
          v57,
          (System_Func_TSource__bool__o *)v58,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v60 = System_Linq_Enumerable__ToList_object_(
          v59,
          (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
  v62 = TerminalSceneComponent___c_TypeInfo;
  v63 = (System_Collections_Generic_IEnumerable_TSource__o *)v60;
  if ( !*(&TerminalSceneComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v61);
    v62 = TerminalSceneComponent___c_TypeInfo;
  }
  v64 = v62->static_fields;
  _9__288_4 = (System_Func_object__int__o *)v64->__9__288_4;
  if ( !_9__288_4 )
  {
    if ( !*(&v62->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v62, v61);
      v64 = TerminalSceneComponent___c_TypeInfo->static_fields;
    }
    v66 = (Il2CppObject *)v64->__9;
    _9__288_4 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_ShopEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__288_4,
      v66,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__288_4__,
      0);
    v67 = (MissionNaviTransitionBoardItem_o *)TerminalSceneComponent___c_TypeInfo->static_fields;
    v67[1].klass = (MissionNaviTransitionBoardItem_c *)_9__288_4;
    sub_21FFBF4(v67 + 1, (int32_t)_9__288_4, v68, v69, v70, v71, v72, v73);
  }
  v74 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v63,
                                                               (System_Func_TSource__TResult__o *)_9__288_4,
                                                               (const MethodInfo_385D394 *)Method_System_Linq_Enumerable_Select_ShopEntity__int___);
  String_83184936 = (System_String_o *)System_Linq_Enumerable__ToArray_int_(
                                         v74,
                                         (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !String_83184936 )
    goto LABEL_34;
  v75 = (System_Collections_Generic_IEnumerable_TSource__o *)String_83184936;
  if ( String_83184936[1].klass )
  {
    if ( System_String__op_Equality(playerPrefsKey, (System_String_o *)StringLiteral_20552/*"freeShopIds"*/, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v77);
      v79 = LocalizationManager__Get(localizationKeyForTitle, 0);
      String_83184936 = LocalizationManager__Get(localizationKeyForDetail, 0);
      if ( !Instance )
        goto LABEL_34;
      goto LABEL_51;
    }
    v80 = TerminalSceneComponent___c_TypeInfo;
    if ( !*(&TerminalSceneComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v76);
      v80 = TerminalSceneComponent___c_TypeInfo;
    }
    v81 = v80->static_fields;
    _9__288_5 = (System_Func_T__TResult__o *)v81->__9__288_5;
    if ( !_9__288_5 )
    {
      if ( !*(&v80->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v80, v76);
        v81 = TerminalSceneComponent___c_TypeInfo->static_fields;
      }
      v83 = (Il2CppObject *)v81->__9;
      _9__288_5 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_int__ShopEntity__TypeInfo);
      System_Func_int__object____ctor(
        _9__288_5,
        v83,
        Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__288_5__,
        0);
      v84 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v84->__9__288_5 = (struct System_Func_int__ShopEntity__o *)_9__288_5;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v84->__9__288_5,
        (int32_t)_9__288_5,
        v85,
        v86,
        v87,
        v88,
        v89,
        v90);
    }
    v91 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                 v75,
                                                                 (System_Func_TSource__TResult__o *)_9__288_5,
                                                                 (const MethodInfo_385A9E0 *)Method_System_Linq_Enumerable_Select_int__ShopEntity___);
    v92 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                 v91,
                                                                 (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v93);
    v79 = LocalizationManager__Get(localizationKeyForTitle, 0);
    v94 = LocalizationManager__Get(localizationKeyForDetail, 0);
    v96 = TerminalSceneComponent___c_TypeInfo;
    v97 = v94;
    if ( !*(&TerminalSceneComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v95);
      v96 = TerminalSceneComponent___c_TypeInfo;
    }
    v98 = v96->static_fields;
    _9__288_6 = (System_Func_object__int__o *)v98->__9__288_6;
    if ( !_9__288_6 )
    {
      if ( !*(&v96->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v96, v95);
        v98 = TerminalSceneComponent___c_TypeInfo->static_fields;
      }
      v100 = (Il2CppObject *)v98->__9;
      _9__288_6 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_ShopEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__288_6,
        v100,
        Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__288_6__,
        0);
      v101 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v101->__9__288_6 = (struct System_Func_ShopEntity__int__o *)_9__288_6;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v101->__9__288_6,
        (int32_t)_9__288_6,
        v102,
        v103,
        v104,
        v105,
        v106,
        v107);
    }
    v111 = System_Linq_Enumerable__Sum_object_(
             v92,
             (System_Func_TSource__int__o *)_9__288_6,
             (const MethodInfo_3866AE0 *)Method_System_Linq_Enumerable_Sum_ShopEntity___);
    v108 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v111);
    String_83184936 = System_String__Format(v97, v108, 0);
    if ( Instance )
    {
LABEL_51:
      CommonUI__OpenAchievementExchangeConditionsDialog(
        (CommonUI_o *)Instance,
        (System_Int32_array *)v75,
        v79,
        String_83184936,
        action,
        0);
      goto LABEL_52;
    }
LABEL_34:
    sub_21FFECC(String_83184936, v10);
  }
  ActionExtensions__Call(action, 0);
LABEL_52:
  UnityEngine_PlayerPrefs__DeleteKey(playerPrefsKey, 0);
}


void TerminalSceneComponent__PlayAutoExecuteQuest(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x21
  QuestMaster_o *Master_object; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x22
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  TerminalSceneComponent_o *QuestEntityListByType; // x0
  const MethodInfo *v21; // x2
  QuestEntity_o *PlayAutoExecuteQuestEntity; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  QuestMaster_o *v29; // x23
  int v30; // w24
  int list_high; // w23
  int v32; // w9
  __int64 v33; // x8
  NetworkManager_ResultCallbackFunc_o *v34; // x19
  __int64 v35; // x1
  Il2CppObject *Request_object; // x19
  int32_t items_high; // w21
  bool HasFlag; // w8
  ScrTerminalListTop_o *mTerminalList; // x22
  int v40; // w9
  TerminalPramsManager_c *v41; // x0
  int32_t QuestId_k__BackingField; // w19
  int32_t PhaseCnt_k__BackingField; // w23
  System_Action_o *v44; // x20
  int32_t klass_high; // w21
  int32_t v46; // w23

  if ( (byte_593AAE7 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass256_0__PlayAutoExecuteQuest_b__0__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass256_0__PlayAutoExecuteQuest_b__1__);
    sub_21FFC50(&TerminalSceneComponent___c__DisplayClass256_0_TypeInfo);
    byte_593AAE7 = 1;
  }
  v3 = sub_21FFEBC(TerminalSceneComponent___c__DisplayClass256_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass256_0___ctor((TerminalSceneComponent___c__DisplayClass256_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_74;
  *(_QWORD *)(v3 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v3 + 16) = 0;
  v12 = v3 + 16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 16), 0, v13, v14, v15, v16, v17, v18);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_74;
  QuestEntityListByType = (TerminalSceneComponent_o *)QuestMaster__GetQuestEntityListByType(Master_object, 8, 0);
  if ( QuestEntityListByType )
  {
    PlayAutoExecuteQuestEntity = TerminalSceneComponent__GetPlayAutoExecuteQuestEntity(
                                   QuestEntityListByType,
                                   (QuestEntity_array *)QuestEntityListByType,
                                   v21);
    *(_QWORD *)v12 = PlayAutoExecuteQuestEntity;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)(v3 + 16),
      (int32_t)PlayAutoExecuteQuestEntity,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    if ( *(_QWORD *)v12 )
    {
      Master_object = (QuestMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !*(_QWORD *)v12 )
        goto LABEL_74;
      if ( !Master_object )
        goto LABEL_74;
      Master_object = (QuestMaster_o *)QuestTree__GetQuestInfo(
                                         (QuestTree_o *)Master_object,
                                         *(_DWORD *)(*(_QWORD *)v12 + 16LL),
                                         0);
      if ( !Master_object )
        goto LABEL_74;
      v29 = Master_object;
      if ( Master_object->fields.revision == 1 )
      {
        if ( !*(_QWORD *)v12 )
          goto LABEL_74;
        v30 = *(_DWORD *)(*(_QWORD *)v12 + 16LL);
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
        if ( !byte_5932DF7 )
        {
          sub_21FFC50(&TerminalPramsManager_TypeInfo);
          byte_5932DF7 = 1;
        }
        Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
          Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
        }
        list_high = HIDWORD(v29->fields.list);
        v32 = (unsigned __int8)byte_5932DF9;
        HIDWORD(Master_object[2].fields.list->fields.items) = v30;
        if ( !v32 )
        {
          sub_21FFC50(&TerminalPramsManager_TypeInfo);
          Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
          byte_5932DF9 = 1;
        }
        if ( !HIDWORD(Master_object[3].monitor) )
        {
          j_il2cpp_runtime_class_init_0(Master_object, v5);
          Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
        }
        v33 = *(_QWORD *)v12;
        LODWORD(Master_object[2].fields.list->fields._monitor) = list_high;
        if ( !v33 )
          goto LABEL_74;
        TerminalPramsManager__SaveJobLevelSnapshot(*(_DWORD *)(v33 + 16), 0);
        Master_object = *(QuestMaster_o **)v12;
        if ( !*(_QWORD *)v12 )
          goto LABEL_74;
        if ( QuestEntity__HasFlag((QuestEntity_o *)Master_object, 2, 0) )
        {
          Master_object = (QuestMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
          if ( Master_object )
          {
            BYTE5(Master_object[2].fields._lookup) = 1;
            v34 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
            NetworkManager_ResultCallbackFunc___ctor(
              v34,
              (Il2CppObject *)v3,
              Method_TerminalSceneComponent___c__DisplayClass256_0__PlayAutoExecuteQuest_b__1__,
              0);
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v35);
            Request_object = NetworkManager__getRequest_object_(
                               v34,
                               (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
            if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
            if ( !byte_593205C )
            {
              sub_21FFC50(&TerminalPramsManager_TypeInfo);
              byte_593205C = 1;
            }
            Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
            if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
              Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
            }
            items_high = HIDWORD(Master_object[2].fields.list->fields.items);
            if ( !byte_5932720 )
            {
              sub_21FFC50(&TerminalPramsManager_TypeInfo);
              Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
              byte_5932720 = 1;
            }
            if ( !HIDWORD(Master_object[3].monitor) )
            {
              j_il2cpp_runtime_class_init_0(Master_object, v5);
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
LABEL_74:
          sub_21FFECC(Master_object, v5);
        }
        Master_object = *(QuestMaster_o **)v12;
        if ( !*(_QWORD *)v12 )
          goto LABEL_74;
        HasFlag = QuestEntity__HasFlag((QuestEntity_o *)Master_object, 0x400000, 0);
        mTerminalList = this->fields.mTerminalList;
        v40 = *(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1);
        if ( HasFlag )
        {
          if ( !v40 )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
          if ( !byte_593205C )
          {
            sub_21FFC50(&TerminalPramsManager_TypeInfo);
            byte_593205C = 1;
          }
          v41 = TerminalPramsManager_TypeInfo;
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
            v41 = TerminalPramsManager_TypeInfo;
          }
          QuestId_k__BackingField = v41->static_fields->_QuestId_k__BackingField;
          if ( !byte_5932720 )
          {
            sub_21FFC50(&TerminalPramsManager_TypeInfo);
            v41 = TerminalPramsManager_TypeInfo;
            byte_5932720 = 1;
          }
          if ( !*(&v41->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v41, v5);
            v41 = TerminalPramsManager_TypeInfo;
          }
          PhaseCnt_k__BackingField = v41->static_fields->_PhaseCnt_k__BackingField;
          v44 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          System_Action___ctor(
            v44,
            (Il2CppObject *)v3,
            Method_TerminalSceneComponent___c__DisplayClass256_0__PlayAutoExecuteQuest_b__0__,
            0);
          if ( !mTerminalList )
            goto LABEL_74;
          ScrTerminalListTop__StartQuestBeforeAction(
            mTerminalList,
            QuestId_k__BackingField,
            PhaseCnt_k__BackingField + 1,
            v44,
            0);
        }
        else
        {
          if ( !v40 )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
          if ( !byte_5932644 )
          {
            sub_21FFC50(&TerminalPramsManager_TypeInfo);
            byte_5932644 = 1;
          }
          Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
            Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
          }
          klass_high = HIDWORD(Master_object[2].fields.list->klass);
          if ( !byte_593205C )
          {
            sub_21FFC50(&TerminalPramsManager_TypeInfo);
            Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
            byte_593205C = 1;
          }
          if ( !HIDWORD(Master_object[3].monitor) )
          {
            j_il2cpp_runtime_class_init_0(Master_object, v5);
            Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
          }
          v46 = HIDWORD(Master_object[2].fields.list->fields.items);
          if ( !byte_5932720 )
          {
            sub_21FFC50(&TerminalPramsManager_TypeInfo);
            Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
            byte_5932720 = 1;
          }
          if ( !HIDWORD(Master_object[3].monitor) )
          {
            j_il2cpp_runtime_class_init_0(Master_object, v5);
            Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
          }
          if ( !mTerminalList )
            goto LABEL_74;
          ScrTerminalListTop__SetBattleSetupInfo(
            mTerminalList,
            klass_high,
            v46,
            LODWORD(Master_object[2].fields.list->fields._monitor) + 1,
            0,
            0,
            0,
            0);
          Master_object = (QuestMaster_o *)this->fields.mTerminalList;
          if ( !Master_object )
            goto LABEL_74;
          ScrTerminalListTop__StartFollower((ScrTerminalListTop_o *)Master_object, 0);
        }
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
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  Il2CppObject *Instance; // x20
  WarEntity_o *v14; // x21
  int32_t StartType; // w0
  __int64 v16; // x1
  Il2CppObject *v17; // x20
  TerminalPramsManager_c *v18; // x0
  int32_t v19; // w22
  BattleScriptRootComponent_TalkScriptInfo_o *v20; // x0
  int32_t v21; // w1
  int32_t v22; // w2
  TerminalPramsManager_c *v23; // x0
  int32_t targetId; // w23
  int32_t WarId_k__BackingField; // w22
  TerminalPramsManager_c *v26; // x0
  BalanceConfig_c *v27; // x8
  int32_t v28; // w23
  TerminalPramsManager_c *v29; // x0
  BalanceConfig_c *v30; // x8
  int32_t v31; // w23
  TerminalPramsManager_c *v32; // x0
  int32_t v33; // w22
  __int64 v34; // x1
  int64_t v35; // x22
  TerminalPramsManager_c *v36; // x0
  int32_t v37; // w23
  int v38; // w9
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  int32_t v40; // w0
  __int64 v41; // x1
  TerminalPramsManager_c *v42; // x0
  TerminalPramsManager_c *v43; // x0
  struct TerminalPramsManager_StaticFields *v44; // x9
  const MethodInfo_476E8C0 *v45; // x0

  if ( (byte_593AAE6 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&ScrTerminalListTop_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_21FFC50(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593AAE6 = 1;
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
    goto LABEL_87;
  }
  this->fields.OnResumeFromChapterStart = end_act;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.OnResumeFromChapterStart,
    (int32_t)end_act,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
  if ( !byte_5932644 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932644 = 1;
  }
  IsPlayChapterStart = (WarEntity_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
    IsPlayChapterStart = (WarEntity_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_87;
  IsPlayChapterStart = QuestTree__mfGetWarEntityByWarID(
                         (QuestTree_o *)Instance,
                         *(_DWORD *)(*(_QWORD *)&IsPlayChapterStart[1].fields.parentWarId + 4LL),
                         0);
  if ( !IsPlayChapterStart )
    goto LABEL_87;
  v14 = IsPlayChapterStart;
  StartType = WarEntity__GetStartType(IsPlayChapterStart, 0);
  if ( StartType == 2 )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16);
    if ( !byte_5932644 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5932644 = 1;
    }
    v23 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16);
      v23 = TerminalPramsManager_TypeInfo;
    }
    targetId = v14->fields.targetId;
    WarId_k__BackingField = v23->static_fields->_WarId_k__BackingField;
    v20 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_21FFEBC(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    v17 = (Il2CppObject *)v20;
    v21 = WarId_k__BackingField;
    v22 = targetId;
  }
  else
  {
    v17 = 0;
    if ( StartType != 1 )
      goto LABEL_31;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16);
    if ( !byte_5932644 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5932644 = 1;
    }
    v18 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16);
      v18 = TerminalPramsManager_TypeInfo;
    }
    v19 = v18->static_fields->_WarId_k__BackingField;
    v20 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_21FFEBC(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    v17 = (Il2CppObject *)v20;
    v21 = v19;
    v22 = 0;
  }
  BattleScriptRootComponent_TalkScriptInfo___ctor_55104132(v20, v21, v22, 0, 1, 0, 0, 0, 0);
LABEL_31:
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16);
  if ( !byte_5932644 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932644 = 1;
  }
  v26 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16);
    v26 = TerminalPramsManager_TypeInfo;
  }
  v27 = BalanceConfig_TypeInfo;
  v28 = v26->static_fields->_WarId_k__BackingField;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v16);
    v27 = BalanceConfig_TypeInfo;
  }
  if ( v28 == v27->static_fields->OrdealCallWarId )
  {
    if ( !*(&ScrTerminalListTop_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v16);
    ScrTerminalListTop__SetWhiteEarthChapterStateSaveData(1, 0);
  }
  else
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16);
    if ( !byte_5932644 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5932644 = 1;
    }
    v29 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16);
      v29 = TerminalPramsManager_TypeInfo;
    }
    v30 = BalanceConfig_TypeInfo;
    v31 = v29->static_fields->_WarId_k__BackingField;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v16);
      v30 = BalanceConfig_TypeInfo;
    }
    if ( v31 == v30->static_fields->Fgo20251220WarId )
    {
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16);
      if ( !byte_5932644 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_5932644 = 1;
      }
      v32 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16);
        v32 = TerminalPramsManager_TypeInfo;
      }
      v33 = v32->static_fields->_WarId_k__BackingField;
      if ( !*(&ScrTerminalListTop_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v16);
      ScrTerminalListTop__SetPlanetEarthChapterStateSaveData(v33, 1, 0);
    }
  }
  if ( WarEntity__HasFlag(v14, 0x8000, 0) )
  {
    v35 = v14->fields.targetId;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v34);
    if ( !byte_5932DF7 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5932DF7 = 1;
    }
    v36 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v34);
      v36 = TerminalPramsManager_TypeInfo;
    }
    v37 = v14->fields.targetId;
    v38 = (unsigned __int8)byte_59350E1;
    v36->static_fields->_QuestId_k__BackingField = v35;
    if ( !v38 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      v36 = TerminalPramsManager_TypeInfo;
      byte_59350E1 = 1;
    }
    if ( !*(&v36->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v36, v34);
      v36 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v36->static_fields;
    v40 = v14->fields.targetId;
    static_fields->_LastPlayedQuestId_k__BackingField = v37;
    TerminalPramsManager__CheckClearSelectedStoryQuestId(v40, 0);
    if ( !byte_59359F3 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_59359F3 = 1;
    }
    v42 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v41);
      v42 = TerminalPramsManager_TypeInfo;
    }
    v42->static_fields->_LastSelectQuestIndex_k__BackingField = 0;
    TerminalPramsManager__PlayQuestSave_SaveData(0);
    IsPlayChapterStart = (WarEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( IsPlayChapterStart )
    {
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)IsPlayChapterStart, 0);
      IsPlayChapterStart = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( IsPlayChapterStart )
      {
        AvalonSceneManager__changeScene((AvalonSceneManager_o *)IsPlayChapterStart, 38, 2, v17, 0);
        return;
      }
    }
LABEL_87:
    sub_21FFECC(IsPlayChapterStart, v6);
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v34);
  if ( !byte_593506D )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593506D = 1;
  }
  v43 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v34);
    v43 = TerminalPramsManager_TypeInfo;
  }
  v44 = v43->static_fields;
  v45 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
  v44->meSceneStatus = 3;
  IsPlayChapterStart = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance(v45);
  if ( !IsPlayChapterStart )
    goto LABEL_87;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)IsPlayChapterStart, 38, 2, v17, 0);
}


void TerminalSceneComponent__PlayEventTutorial(
        TerminalSceneComponent_o *this,
        System_Action_o *callbackAfter,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_Component_o *EventID; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  TerminalPramsManager_c *v21; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  int32_t v23; // w21
  System_Action_o *v24; // x22
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct MapControl_MapInfo_o *mMapInfo; // x8

  if ( (byte_593AAE9 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass261_0__PlayEventTutorial_b__0__);
    sub_21FFC50(&TerminalSceneComponent___c__DisplayClass261_0_TypeInfo);
    byte_593AAE9 = 1;
  }
  v5 = sub_21FFEBC(TerminalSceneComponent___c__DisplayClass261_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass261_0___ctor((TerminalSceneComponent___c__DisplayClass261_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_16;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callbackAfter;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callbackAfter, v14, v15, v16, v17, v18, v19);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v20);
  if ( !byte_5932644 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932644 = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v20);
    v21 = TerminalPramsManager_TypeInfo;
  }
  EventID = (UnityEngine_Component_o *)WarMaster__getEventID(v21->static_fields->_WarId_k__BackingField, 0);
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_16;
  v23 = (int)EventID;
  EventID = (UnityEngine_Component_o *)mTerminalList->fields.mActionBgColl;
  if ( !EventID
    || (EventID = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(EventID, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EventID, 1, 0),
        v24 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v24,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent___c__DisplayClass261_0__PlayEventTutorial_b__0__,
          0),
        (mTerminalMap = this->fields.mTerminalMap) == 0)
    || (mMapInfo = mTerminalMap->fields.mMapInfo) == 0 )
  {
LABEL_16:
    sub_21FFECC(EventID, v7);
  }
  EventTutorialMaster__CheckTutorial(v23, 1, v24, mMapInfo->fields.mapId, 0, 0, 0, 0);
}


void TerminalSceneComponent__PlayEventTutorialWithoutAfterAction(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  TerminalPramsManager_c *v8; // x0
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct MapControl_MapInfo_o *mMapInfo; // x8

  if ( (byte_593AAEA & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593AAEA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  if ( QuestAfterAction__IsPlaying((QuestAfterAction_o *)Instance, 0) )
  {
    ActionExtensions__Call(callback, 0);
    return;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
  if ( !byte_5932644 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932644 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
    v8 = TerminalPramsManager_TypeInfo;
  }
  Instance = (Il2CppObject *)WarMaster__getEventID(v8->static_fields->_WarId_k__BackingField, 0);
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap || (mMapInfo = mTerminalMap->fields.mMapInfo) == 0 )
LABEL_15:
    sub_21FFECC(Instance, v6);
  EventTutorialMaster__CheckTutorial((int32_t)Instance, 90, callback, mMapInfo->fields.mapId, 0, 0, 0, 0);
}


void TerminalSceneComponent__PlayExRoomBgm(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_o *v2; // x19
  struct ScrTerminalListTop_o *mTerminalList; // x8
  UnityEngine_Object_o *exRoomRootComponent; // x20
  struct ScrTerminalListTop_o *v5; // x8
  System_String_o *BgmName; // x20
  const MethodInfo *v7; // x3

  v2 = this;
  if ( (byte_593AAD9 & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593AAD9 = 1;
  }
  mTerminalList = v2->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_12;
  exRoomRootComponent = (UnityEngine_Object_o *)mTerminalList->fields.exRoomRootComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (TerminalSceneComponent_o *)UnityEngine_Object__op_Equality(exRoomRootComponent, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v5 = v2->fields.mTerminalList;
    if ( v5 )
    {
      this = (TerminalSceneComponent_o *)v5->fields.exRoomRootComponent;
      if ( this )
      {
        BgmName = ExRoomRootComponent__GetBgmName((ExRoomRootComponent_o *)this, 0);
        if ( !System_String__IsNullOrEmpty(BgmName, 0) )
          TerminalSceneComponent__playBgm(v2, BgmName, 0, 0.0, v7);
        return;
      }
    }
LABEL_12:
    sub_21FFECC(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void TerminalSceneComponent__PlayGrandBgm(
        TerminalSceneComponent_o *this,
        int32_t index,
        System_Action_o *onLoadFinishCallback,
        const MethodInfo *method)
{
  BalanceConfig_c *v7; // x0
  struct System_String_array *TerminalGrandBgmNames; // x8

  if ( (byte_593AAD7 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_593AAD7 = 1;
  }
  if ( (index & 0x80000000) == 0 )
  {
    v7 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&index);
      v7 = BalanceConfig_TypeInfo;
    }
    TerminalGrandBgmNames = v7->static_fields->TerminalGrandBgmNames;
    if ( !TerminalGrandBgmNames )
      goto LABEL_13;
    if ( SLODWORD(TerminalGrandBgmNames->max_length) <= index )
      return;
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, *(_QWORD *)&index);
      TerminalGrandBgmNames = BalanceConfig_TypeInfo->static_fields->TerminalGrandBgmNames;
      if ( !TerminalGrandBgmNames )
LABEL_13:
        sub_21FFECC(v7, *(_QWORD *)&index);
    }
    if ( LODWORD(TerminalGrandBgmNames->max_length) <= index )
      sub_21FFED4(v7);
    TerminalSceneComponent__playBgm(this, TerminalGrandBgmNames->m_Items[index], onLoadFinishCallback, 0.0, method);
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
    sub_21FFECC(mQuestInformation, method);
  return QuestInformationComponent__isListBuilding(mQuestInformation, 0);
}


int32_t TerminalSceneComponent__QuestInfoShowing(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct QuestInformationComponent_o *mQuestInformation; // x8

  mQuestInformation = this->fields.mQuestInformation;
  if ( !mQuestInformation )
    sub_21FFECC(this, method);
  return mQuestInformation->fields.settedQuestId;
}


void TerminalSceneComponent__RebootToNetworkError(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  System_String_o *v4; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  TerminalSceneComponent___c_c *v7; // x8
  System_String_o *v8; // x21
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x9
  ErrorDialog_ClickDelegate_o *_9__243_0; // x22
  Il2CppObject *v11; // x23
  struct TerminalSceneComponent___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_593AADD & 1) == 0 )
  {
    sub_21FFC50(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__RebootToNetworkError_b__243_0__);
    sub_21FFC50(&TerminalSceneComponent___c_TypeInfo);
    sub_21FFC50(&StringLiteral_13896/*"TERMINAL_NETWORK_ERROR_DIALOG_TITLE"*/);
    sub_21FFC50(&StringLiteral_13895/*"TERMINAL_NETWORK_ERROR_DIALOG_MESSAGE"*/);
    byte_593AADD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v2);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13896/*"TERMINAL_NETWORK_ERROR_DIALOG_TITLE"*/, 0);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_13895/*"TERMINAL_NETWORK_ERROR_DIALOG_MESSAGE"*/, 0);
  v7 = TerminalSceneComponent___c_TypeInfo;
  v8 = v5;
  if ( !*(&TerminalSceneComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v6);
    v7 = TerminalSceneComponent___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__243_0 = static_fields->__9__243_0;
  if ( !_9__243_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v6);
      static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__243_0 = (ErrorDialog_ClickDelegate_o *)sub_21FFEBC(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(
      _9__243_0,
      v11,
      Method_TerminalSceneComponent___c__RebootToNetworkError_b__243_0__,
      0);
    v12 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v12->__9__243_0 = _9__243_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12->__9__243_0, (int32_t)_9__243_0, v13, v14, v15, v16, v17, v18);
  }
  if ( !Instance )
    sub_21FFECC(v5, v6);
  CommonUI__OpenErrorDialog((CommonUI_o *)Instance, v4, v8, _9__243_0, 1, 0);
}


void TerminalSceneComponent__RegenerateEarthView(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_GameObject_o *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  UnityEngine_Object_o *mEarthCoreObj; // x21
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  UnityEngine_Object_o *v29; // x21
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Action_o *v36; // x21
  const MethodInfo *v37; // x2

  if ( (byte_593AAB2 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass195_0__RegenerateEarthView_b__0__);
    sub_21FFC50(&TerminalSceneComponent___c__DisplayClass195_0_TypeInfo);
    byte_593AAB2 = 1;
  }
  v5 = sub_21FFEBC(TerminalSceneComponent___c__DisplayClass195_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass195_0___ctor((TerminalSceneComponent___c__DisplayClass195_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  mEarthCoreObj = (UnityEngine_Object_o *)this->fields.mEarthCoreObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  if ( UnityEngine_Object__op_Inequality(mEarthCoreObj, 0, 0) )
  {
    v6 = this->fields.mEarthCoreObj;
    if ( v6 )
    {
      UnityEngine_GameObject__SetActive(v6, 0, 0);
      v29 = (UnityEngine_Object_o *)this->fields.mEarthCoreObj;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
      UnityEngine_Object__Destroy_83246496(v29, 0);
      goto LABEL_11;
    }
LABEL_12:
    sub_21FFECC(v6, v7);
  }
LABEL_11:
  this->fields.mEarthCoreObj = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mEarthCoreObj, 0, v22, v23, v24, v25, v26, v27);
  this->fields.mEarthCore = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mEarthCore, 0, v30, v31, v32, v33, v34, v35);
  v36 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass195_0__RegenerateEarthView_b__0__,
    0);
  TerminalSceneComponent__SetEarthView(this, v36, v37);
}


void TerminalSceneComponent__ReleaseAssetToResume(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTerminalList; // x20
  TitleInfoControl_o *v4; // x0
  __int64 v5; // x1
  struct ScrTerminalListTop_o *v6; // x8
  UnityEngine_Object_o *mQuestBoardListViewManager; // x20
  UnityEngine_Object_o *mTitleInfo; // x20

  if ( (byte_593AABC & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593AABC = 1;
  }
  mTerminalList = (UnityEngine_Object_o *)this->fields.mTerminalList;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = (TitleInfoControl_o *)UnityEngine_Object__op_Inequality(0, mTerminalList, 0);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v6 = this->fields.mTerminalList;
    if ( !v6 )
      goto LABEL_18;
    mQuestBoardListViewManager = (UnityEngine_Object_o *)v6->fields.mQuestBoardListViewManager;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    v4 = (TitleInfoControl_o *)UnityEngine_Object__op_Inequality(0, mQuestBoardListViewManager, 0);
    if ( ((unsigned __int8)v4 & 1) != 0 )
    {
      if ( !mQuestBoardListViewManager )
        goto LABEL_18;
      QuestBoardListViewManager__ReleaseTerminalAsset((QuestBoardListViewManager_o *)mQuestBoardListViewManager, 0);
    }
  }
  mTitleInfo = (UnityEngine_Object_o *)this->fields.mTitleInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(0, mTitleInfo, 0) )
  {
    v4 = this->fields.mTitleInfo;
    if ( v4 )
    {
      TitleInfoControl__ReleaseTitleInfoAsset(v4, 0);
      return;
    }
LABEL_18:
    sub_21FFECC(v4, v5);
  }
}


void TerminalSceneComponent__ReleaseRewardPopupChainResources(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_593AAEF & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593AAEF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ClearLoginResultData((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (CommonUI__ReleaseFortuneBonusAssetData((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (CommonUI__ReleaseSelectBonusDialogAsset((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_21FFECC(Instance, v3);
  }
  CommonUI__ReleaseLoginBonusWithTransitionDialogAssetData((CommonUI_o *)Instance, 0);
}


void TerminalSceneComponent__SaveCampaignDirectBonusData(
        TerminalSceneComponent_o *this,
        CommonUI_CampaignDirectBonusData_array *campaignDirectBonus,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_593AAF0 & 1) == 0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593AAF0 = 1;
  }
  if ( campaignDirectBonus )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, campaignDirectBonus);
    if ( !byte_5935A03 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5935A03 = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, campaignDirectBonus);
      v9 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v9->static_fields;
    static_fields->_CampaignDirectBonus_k__BackingField = campaignDirectBonus;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&static_fields->_CampaignDirectBonus_k__BackingField,
      (int32_t)campaignDirectBonus,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    TerminalPramsManager__CampaignDirectBonus_SaveData(0);
  }
}


void TerminalSceneComponent__SendMessageStartUpAndResume(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  long double v10; // q0
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  AvalonSceneManager_c *v13; // x8
  CommonUI_o *v14; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v16; // x21
  TerminalPramsManager_c *v17; // x0
  struct TerminalSceneComponent_PlayChapterStartCallback_o **p_OnResumeFromChapterStart; // x19
  struct TerminalSceneComponent_PlayChapterStartCallback_o *OnResumeFromChapterStart; // t1

  if ( (byte_593AAB6 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent__SendMessageStartUpAndResume_b__200_0__);
    byte_593AAB6 = 1;
  }
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0);
  if ( this->fields.isFadeInAfterResumeLoad )
  {
    this->fields._IsReturnChapterSelectFadeIn_k__BackingField = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = AvalonSceneManager_TypeInfo;
    v14 = (CommonUI_o *)Instance;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v12);
      v13 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
    v16 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v16,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent__SendMessageStartUpAndResume_b__200_0__,
      0);
    if ( !v14 )
      goto LABEL_20;
    CommonUI__maskFadein(v14, DEFAULT_FADE_TIME, v16, 0);
    this->fields.isFadeInAfterResumeLoad = 0;
  }
  else
  {
    this->fields._IsReturnChapterSelectFadeIn_k__BackingField = 1;
  }
  OnResumeFromChapterStart = this->fields.OnResumeFromChapterStart;
  p_OnResumeFromChapterStart = &this->fields.OnResumeFromChapterStart;
  if ( OnResumeFromChapterStart )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      *(__n128 *)&v10 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v3);
    if ( !byte_593AB11 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_593AB11 = 1;
    }
    v17 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      *(__n128 *)&v10 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v3);
      v17 = TerminalPramsManager_TypeInfo;
    }
    if ( !v17->static_fields->_IsNoResumeFromChapterStart_k__BackingField )
    {
      if ( *p_OnResumeFromChapterStart )
      {
        ((void (__fastcall *)(intptr_t, __int64, intptr_t, long double))(*p_OnResumeFromChapterStart)->fields.invoke_impl)(
          (*p_OnResumeFromChapterStart)->fields.method_code,
          1,
          (*p_OnResumeFromChapterStart)->fields.method,
          v10);
        goto LABEL_19;
      }
LABEL_20:
      sub_21FFECC(v17, v3);
    }
  }
LABEL_19:
  *p_OnResumeFromChapterStart = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_OnResumeFromChapterStart, 0, v4, v5, v6, v7, v8, v9);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_21FFECC(this, isEnable);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isEnable, 0);
  ActionExtensions__Call(callback, 0);
}


void TerminalSceneComponent__SetDirectionalLightActive(
        TerminalSceneComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *GameObjectWithLog; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_593AAFF & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_5460/*"Directional light"*/);
    byte_593AAFF = 1;
  }
  GameObjectWithLog = (UnityEngine_Object_o *)GameObjectExtensions__FindGameObjectWithLog(
                                                this->fields.mEarthCoreObj,
                                                (System_String_o *)StringLiteral_5460/*"Directional light"*/,
                                                0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Equality(GameObjectWithLog, 0, 0);
  if ( !v7 )
  {
    if ( !GameObjectWithLog )
      sub_21FFECC(v7, v8);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)GameObjectWithLog, isActive, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void TerminalSceneComponent__SetDispStandServant(TerminalSceneComponent_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Component_o *mTerminalServant; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  long double v7; // q0

  if ( (byte_593AAC1 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    byte_593AAC1 = 1;
  }
  mTerminalServant = (UnityEngine_Component_o *)this->fields.mTerminalServant;
  if ( !mTerminalServant
    || (gameObject = UnityEngine_Component__get_gameObject(mTerminalServant, 0),
        (mTerminalServant = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0)) == 0)
    || (mTerminalServant = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mTerminalServant, 0)) == 0
    || (mTerminalServant = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        (UnityEngine_GameObject_o *)mTerminalServant,
                                                        (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___)) == 0 )
  {
    sub_21FFECC(mTerminalServant, isDisp);
  }
  *(_QWORD *)&v7 = 0;
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
  UnityEngine_Camera_o *mEarthCamera; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  UnityEngine_Object_o *mEarthCore; // x21
  __int64 v22; // x1
  int32_t v23; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v25; // x0
  __int64 v26; // x1
  TerminalSceneComponent_c *v27; // x0
  System_String_o *EARTH_ASSET_NAME; // x21
  int v29; // w8
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  __int64 v32; // x1
  TerminalSceneComponent_c *v33; // x0
  Il2CppObject *v34; // x0
  struct System_String_o *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  __int64 v42; // x1
  __int64 v43; // x1
  TerminalSceneComponent_c *v44; // x0
  struct System_String_o *v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  Il2CppObject *Instance; // x21
  System_String_o *loadEarthAssetName; // x19
  AssetLoader_LoadEndDataHandler_o *v54; // x22
  int v55; // [xsp+4h] [xbp-4Ch] BYREF
  TerminalOverwriteEntity_o *overwriteEntity; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *overwriteId; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_593AAB1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_TerminalOverwriteMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&ServantCommentManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass194_0__SetEarthView_b__0__);
    sub_21FFC50(&TerminalSceneComponent___c__DisplayClass194_0_TypeInfo);
    byte_593AAB1 = 1;
  }
  overwriteId = 0;
  overwriteEntity = 0;
  v5 = sub_21FFEBC(TerminalSceneComponent___c__DisplayClass194_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass194_0___ctor((TerminalSceneComponent___c__DisplayClass194_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_38;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  mEarthCore = (UnityEngine_Object_o *)this->fields.mEarthCore;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  if ( UnityEngine_Object__op_Inequality(mEarthCore, 0, 0) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0);
    return;
  }
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v22);
  v23 = ServantCommentManager__GetUiChangeType(0);
  mEarthCamera = this->fields.mEarthCamera;
  if ( v23 == 1 )
  {
    if ( !mEarthCamera )
      goto LABEL_38;
    UnityEngine_Camera__set_orthographic(mEarthCamera, 0, 0);
    mEarthCamera = this->fields.mEarthEffCamera;
    if ( !mEarthCamera )
      goto LABEL_38;
    UnityEngine_Camera__set_orthographic(mEarthCamera, 0, 0);
    mEarthCamera = this->fields.mEarthCamera;
    if ( !mEarthCamera )
      goto LABEL_38;
    UnityEngine_Camera__set_fieldOfView(mEarthCamera, 32.269, 0);
    mEarthCamera = this->fields.mEarthEffCamera;
    if ( !mEarthCamera )
      goto LABEL_38;
    UnityEngine_Camera__set_fieldOfView(mEarthCamera, 32.269, 0);
    mEarthCamera = this->fields.mEarthCamera;
    if ( !mEarthCamera )
      goto LABEL_38;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthCamera, 0);
    GameObjectExtensions__SetLocalPositionZ(gameObject, -792.87, 0);
    mEarthCamera = this->fields.mEarthEffCamera;
    if ( !mEarthCamera )
      goto LABEL_38;
    v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthCamera, 0);
    GameObjectExtensions__SetLocalPositionZ(v25, -792.87, 0);
    v27 = TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v26);
      v27 = TerminalSceneComponent_TypeInfo;
    }
    EARTH_ASSET_NAME = v27->static_fields->EARTH_ASSET_NAME;
    v29 = 2;
  }
  else
  {
    if ( !mEarthCamera )
      goto LABEL_38;
    UnityEngine_Camera__set_orthographic(mEarthCamera, 1, 0);
    mEarthCamera = this->fields.mEarthEffCamera;
    if ( !mEarthCamera )
      goto LABEL_38;
    UnityEngine_Camera__set_orthographic(mEarthCamera, 1, 0);
    mEarthCamera = this->fields.mEarthCamera;
    if ( !mEarthCamera )
      goto LABEL_38;
    UnityEngine_Camera__set_orthographicSize(mEarthCamera, 1.0, 0);
    mEarthCamera = this->fields.mEarthEffCamera;
    if ( !mEarthCamera )
      goto LABEL_38;
    UnityEngine_Camera__set_orthographicSize(mEarthCamera, 1.0, 0);
    mEarthCamera = this->fields.mEarthCamera;
    if ( !mEarthCamera )
      goto LABEL_38;
    v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthCamera, 0);
    GameObjectExtensions__SetLocalPositionZ(v30, -50000.0, 0);
    mEarthCamera = this->fields.mEarthEffCamera;
    if ( !mEarthCamera )
      goto LABEL_38;
    v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthCamera, 0);
    GameObjectExtensions__SetLocalPositionZ(v31, -50000.0, 0);
    v33 = TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v32);
      v33 = TerminalSceneComponent_TypeInfo;
    }
    EARTH_ASSET_NAME = v33->static_fields->EARTH_ASSET_NAME;
    v29 = 1;
  }
  v55 = v29;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v55);
  v35 = System_String__Format(EARTH_ASSET_NAME, v34, 0);
  this->fields.loadEarthAssetName = v35;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadEarthAssetName,
    (int32_t)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v42);
  mEarthCamera = (UnityEngine_Camera_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_TerminalOverwriteMaster___);
  if ( !mEarthCamera )
    goto LABEL_38;
  if ( TerminalOverwriteMaster__TryGetOverwriteId(
         (TerminalOverwriteMaster_o *)mEarthCamera,
         9,
         &overwriteId,
         &overwriteEntity,
         0) )
  {
    v44 = TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v43);
      v44 = TerminalSceneComponent_TypeInfo;
    }
    v45 = System_String__Format(v44->static_fields->EARTH_ASSET_NAME, (Il2CppObject *)overwriteId, 0);
    this->fields.loadEarthAssetName = v45;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.loadEarthAssetName,
      (int32_t)v45,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  loadEarthAssetName = this->fields.loadEarthAssetName;
  v54 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v54,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass194_0__SetEarthView_b__0__,
    0);
  if ( !Instance )
LABEL_38:
    sub_21FFECC(mEarthCamera, v7);
  AssetManager__LoadAssetStorage((AssetManager_o *)Instance, loadEarthAssetName, v54, 1, 0, 0);
}


void TerminalSceneComponent__SetQuestBoardInfoOff(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x0
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList || (mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager) == 0 )
    sub_21FFECC(mTerminalList, method);
  mQuestBoardListViewManager->fields._IsShowingInfo_k__BackingField = 0;
  ScrTerminalListTop__ShowingInfoAllOff(mTerminalList, 0);
}


void TerminalSceneComponent__SetQuestBoardInfoOffOnExRoom(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *exRoomRoot; // x20
  ExRoomQuestComponent_o *v4; // x0
  __int64 v5; // x1
  struct ExRoomRootComponent_o *v6; // x8
  UnityEngine_Object_o *QuestDisp_k__BackingField; // x20
  struct ExRoomRootComponent_o *v8; // x8

  if ( (byte_593AAFB & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593AAFB = 1;
  }
  exRoomRoot = (UnityEngine_Object_o *)this->fields.exRoomRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = (ExRoomQuestComponent_o *)UnityEngine_Object__op_Equality(exRoomRoot, 0, 0);
  if ( ((unsigned __int8)v4 & 1) == 0 )
  {
    v6 = this->fields.exRoomRoot;
    if ( v6 )
    {
      QuestDisp_k__BackingField = (UnityEngine_Object_o *)v6->fields._QuestDisp_k__BackingField;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
      v4 = (ExRoomQuestComponent_o *)UnityEngine_Object__op_Equality(QuestDisp_k__BackingField, 0, 0);
      if ( ((unsigned __int8)v4 & 1) != 0 )
        return;
      v8 = this->fields.exRoomRoot;
      if ( v8 )
      {
        v4 = v8->fields._QuestDisp_k__BackingField;
        if ( v4 )
        {
          ExRoomQuestComponent__ShowingInfoAllOff(v4, 0);
          return;
        }
      }
    }
    sub_21FFECC(v4, v5);
  }
}


void TerminalSceneComponent__SetQuestInfoResetReady(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  QuestInformationComponent_o *mQuestInformation; // x0

  mQuestInformation = this->fields.mQuestInformation;
  if ( !mQuestInformation )
    sub_21FFECC(0, method);
  QuestInformationComponent__SetResetReady(mQuestInformation, 0);
}


// local variable allocation has failed, the output may be wrong!
void TerminalSceneComponent__SetState(TerminalSceneComponent_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_593AAEC & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_TerminalSceneComponent__setState__);
    byte_593AAEC = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_21FFECC(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_3E506E4 *)Method_CStateManager_TerminalSceneComponent__setState__);
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
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  StandFigureSlideComponent_o *mTerminalServant; // x22
  System_Action_o *v25; // x23
  struct StandFigureSlideComponent_o *v26; // x19
  System_Action_o *v27; // x20
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7

  if ( (byte_593AAC0 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass212_0__SetupStandServant_b__0__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass212_0__SetupStandServant_b__1__);
    sub_21FFC50(&TerminalSceneComponent___c__DisplayClass212_0_TypeInfo);
    byte_593AAC0 = 1;
  }
  v9 = sub_21FFEBC(TerminalSceneComponent___c__DisplayClass212_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass212_0___ctor((TerminalSceneComponent___c__DisplayClass212_0_o *)v9, 0);
  if ( !v9 )
    goto LABEL_7;
  *(_BYTE *)(v9 + 16) = isSlideIn;
  *(_QWORD *)(v9 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = endAction;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)endAction, v18, v19, v20, v21, v22, v23);
  mTerminalServant = this->fields.mTerminalServant;
  v25 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v9,
    Method_TerminalSceneComponent___c__DisplayClass212_0__SetupStandServant_b__0__,
    0);
  if ( !mTerminalServant
    || (StandFigureSlideComponent__Setup(mTerminalServant, usd, 0, v25, 0),
        v26 = this->fields.mTerminalServant,
        v27 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v27,
          (Il2CppObject *)v9,
          Method_TerminalSceneComponent___c__DisplayClass212_0__SetupStandServant_b__1__,
          0),
        !v26) )
  {
LABEL_7:
    sub_21FFECC(v10, v11);
  }
  v26->fields.mBtnAct = v27;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v26->fields.mBtnAct, (int32_t)v27, v28, v29, v30, v31, v32, v33);
}


void TerminalSceneComponent__StartEventDailyPoint(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  const MethodInfo *v13; // x2

  if ( TerminalSceneComponent__CheckEventDailyPoint(this, eventId, (const MethodInfo *)callback) )
  {
    this->fields.afterEventDailyPoint = callback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.afterEventDailyPoint,
      (int32_t)callback,
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
  __int64 v10; // x1
  __int64 v11; // x19
  System_Action_object__o *v12; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__223_1; // x20
  Il2CppObject *v28; // x21
  struct TerminalSceneComponent___c_StaticFields *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  __int64 v36; // x1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  struct TerminalSceneComponent___c_StaticFields *v43; // x8
  System_Action_object__o *_9__223_2; // x20
  Il2CppObject *v45; // x21
  struct TerminalSceneComponent___c_StaticFields *v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  __int64 v53; // x1
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  struct TerminalSceneComponent___c_StaticFields *v60; // x8
  System_Action_object__o *_9__223_3; // x20
  Il2CppObject *v62; // x21
  struct TerminalSceneComponent___c_StaticFields *v63; // x0
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  ActionChain_o *v70; // x20

  if ( (byte_593AACA & 1) == 0 )
  {
    sub_21FFC50(&ActionChain_TypeInfo);
    sub_21FFC50(&System_Action_Action____TypeInfo);
    sub_21FFC50(&System_Action_Action__TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent__StartWindowMessage_b__223_0__);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent___c__StartWindowMessage_b__223_1__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__StartWindowMessage_b__223_2__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__StartWindowMessage_b__223_3__);
    sub_21FFC50(&TerminalSceneComponent___c_TypeInfo);
    byte_593AACA = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, callbackFunc);
  if ( !byte_5934080 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5934080 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, callbackFunc);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( v5->static_fields->_IsDispOnly_k__BackingField )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v5, callbackFunc);
    if ( !byte_593AB15 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_593AB15 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, callbackFunc);
      v6 = TerminalPramsManager_TypeInfo;
    }
    if ( !System_String__IsNullOrEmpty(v6->static_fields->_QuestWindowMessage_k__BackingField, 0) )
    {
      v11 = sub_21FFD10(System_Action_Action____TypeInfo, 4);
      v12 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
      System_Action_object____ctor(
        v12,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent__StartWindowMessage_b__223_0__,
        0);
      if ( v11 )
      {
        if ( !*(_DWORD *)(v11 + 24) )
          goto LABEL_55;
        *(_QWORD *)(v11 + 32) = v12;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 32), (int32_t)v12, v13, v14, v15, v16, v17, v18);
        v7 = TerminalSceneComponent___c_TypeInfo;
        if ( !*(&TerminalSceneComponent___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v19);
          v7 = TerminalSceneComponent___c_TypeInfo;
        }
        static_fields = (struct TerminalSceneComponent___c_StaticFields *)*((_QWORD *)v7 + 23);
        _9__223_1 = (System_Action_object__o *)static_fields->__9__223_1;
        if ( !_9__223_1 )
        {
          if ( !*((_DWORD *)v7 + 57) )
          {
            j_il2cpp_runtime_class_init_0(v7, v19);
            static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
          }
          v28 = (Il2CppObject *)static_fields->__9;
          _9__223_1 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            _9__223_1,
            v28,
            Method_TerminalSceneComponent___c__StartWindowMessage_b__223_1__,
            0);
          v29 = TerminalSceneComponent___c_TypeInfo->static_fields;
          v29->__9__223_1 = (struct System_Action_Action__o *)_9__223_1;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v29->__9__223_1,
            (int32_t)_9__223_1,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35);
        }
        if ( (*(_DWORD *)(v11 + 24) & 0xFFFFFFFE) == 0 )
          goto LABEL_55;
        *(_QWORD *)(v11 + 40) = _9__223_1;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 40), (int32_t)_9__223_1, v20, v21, v22, v23, v24, v25);
        v7 = TerminalSceneComponent___c_TypeInfo;
        if ( !*(&TerminalSceneComponent___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v36);
          v7 = TerminalSceneComponent___c_TypeInfo;
        }
        v43 = (struct TerminalSceneComponent___c_StaticFields *)*((_QWORD *)v7 + 23);
        _9__223_2 = (System_Action_object__o *)v43->__9__223_2;
        if ( !_9__223_2 )
        {
          if ( !*((_DWORD *)v7 + 57) )
          {
            j_il2cpp_runtime_class_init_0(v7, v36);
            v43 = TerminalSceneComponent___c_TypeInfo->static_fields;
          }
          v45 = (Il2CppObject *)v43->__9;
          _9__223_2 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            _9__223_2,
            v45,
            Method_TerminalSceneComponent___c__StartWindowMessage_b__223_2__,
            0);
          v46 = TerminalSceneComponent___c_TypeInfo->static_fields;
          v46->__9__223_2 = (struct System_Action_Action__o *)_9__223_2;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v46->__9__223_2,
            (int32_t)_9__223_2,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52);
        }
        if ( *(_DWORD *)(v11 + 24) <= 2u )
          goto LABEL_55;
        *(_QWORD *)(v11 + 48) = _9__223_2;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 48), (int32_t)_9__223_2, v37, v38, v39, v40, v41, v42);
        v7 = TerminalSceneComponent___c_TypeInfo;
        if ( !*(&TerminalSceneComponent___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v53);
          v7 = TerminalSceneComponent___c_TypeInfo;
        }
        v60 = (struct TerminalSceneComponent___c_StaticFields *)*((_QWORD *)v7 + 23);
        _9__223_3 = (System_Action_object__o *)v60->__9__223_3;
        if ( !_9__223_3 )
        {
          if ( !*((_DWORD *)v7 + 57) )
          {
            j_il2cpp_runtime_class_init_0(v7, v53);
            v60 = TerminalSceneComponent___c_TypeInfo->static_fields;
          }
          v62 = (Il2CppObject *)v60->__9;
          _9__223_3 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            _9__223_3,
            v62,
            Method_TerminalSceneComponent___c__StartWindowMessage_b__223_3__,
            0);
          v63 = TerminalSceneComponent___c_TypeInfo->static_fields;
          v63->__9__223_3 = (struct System_Action_Action__o *)_9__223_3;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v63->__9__223_3,
            (int32_t)_9__223_3,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69);
        }
        if ( (*(_DWORD *)(v11 + 24) & 0xFFFFFFFC) == 0 )
LABEL_55:
          sub_21FFED4(v7);
        *(_QWORD *)(v11 + 56) = _9__223_3;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 56), (int32_t)_9__223_3, v54, v55, v56, v57, v58, v59);
        v70 = (ActionChain_o *)sub_21FFEBC(ActionChain_TypeInfo);
        ActionChain___ctor_55902484(v70, (System_Action_Action__array *)v11, 0);
        if ( v70 )
        {
          ChainableActionBase__Execute((ChainableActionBase_o *)v70, 0);
          return;
        }
      }
LABEL_54:
      sub_21FFECC(v7, callbackFunc);
    }
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, callbackFunc);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  v7 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, callbackFunc);
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
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10);
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
  __int64 v8; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_593AACD & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_21FFC50(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593AACD = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
    sub_21FFECC(Instance, v8);
  TitleInfoControl__CheckSuperBossHpAnim((TitleInfoControl_o *)Instance, callback, 0);
}


// local variable allocation has failed, the output may be wrong!
bool TerminalSceneComponent__TryGetClearedReturnFolderWarId(
        TerminalSceneComponent_o *this,
        int32_t warId,
        int32_t *returnWarId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  int32_t ClearedReturnFolderWarId; // w0

  if ( (byte_593AAB3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarAddMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_593AAB3 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&warId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v7);
  ClearedReturnFolderWarId = WarAddMaster__GetClearedReturnFolderWarId((WarAddMaster_o *)Master_object, warId, 0);
  *returnWarId = ClearedReturnFolderWarId;
  return ClearedReturnFolderWarId != 0;
}


bool TerminalSceneComponent__TryPlayExRoomBgm(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  ScrTerminalListTop_o *mTerminalList; // x0

  if ( (byte_593AAD8 & 1) == 0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593AAD8 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_5932DFD )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932DFD = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( !v3->static_fields->_IsAutoExRoom_k__BackingField )
  {
    mTerminalList = this->fields.mTerminalList;
    if ( !mTerminalList )
      sub_21FFECC(0, method);
    if ( !ScrTerminalListTop__IsExRoomActive(mTerminalList, 0) )
      return 0;
  }
  TerminalSceneComponent__PlayExRoomBgm(this, method);
  return 1;
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
  __int64 v7; // x1

  if ( (byte_593AACF & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_TerminalSceneComponent__update__);
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593AACF = 1;
  }
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
  CTouch__process(0);
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_3E506C4 *)Method_CStateManager_TerminalSceneComponent__update__);
  mTerminalMap = this->fields.mTerminalMap;
  IsMapTouchEnabled = TerminalSceneComponent__IsMapTouchEnabled(this, v3);
  if ( !mTerminalMap )
    sub_21FFECC(IsMapTouchEnabled, v7);
  ScrTerminalMap__ProcessMapCamera(mTerminalMap, IsMapTouchEnabled, 0);
}


void TerminalSceneComponent__UpdateCompleteMissionIconUI(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ScrPlayerStatus_o *mPlayerStatus; // x0

  mPlayerStatus = this->fields.mPlayerStatus;
  if ( !mPlayerStatus )
    sub_21FFECC(0, method);
  ScrPlayerStatus__UpdateCompleteMissionIconUI(mPlayerStatus, 0);
}


void TerminalSceneComponent__UpdateQuestBoardList(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x8

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList || (this = (TerminalSceneComponent_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0 )
    sub_21FFECC(this, method);
  QuestBoardListViewManager__SetupDisp((QuestBoardListViewManager_o *)this, 1, 0);
}


void TerminalSceneComponent__UpdateTitleEventInfo(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *mTitleInfo; // x0

  mTitleInfo = this->fields.mTitleInfo;
  if ( !mTitleInfo )
    sub_21FFECC(0, method);
  TitleInfoControl__UpdateEventItemInfo(mTitleInfo, 0);
}


System_Collections_IEnumerator_o *TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__217_o *v2; // x19

  if ( (byte_593AAC4 & 1) == 0 )
  {
    sub_21FFC50(&TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__217_TypeInfo);
    byte_593AAC4 = 1;
  }
  v2 = (TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__217_o *)sub_21FFEBC(TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__217_TypeInfo);
  TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__217___ctor(v2, 0, 0);
  return (System_Collections_IEnumerator_o *)v2;
}


bool TerminalSceneComponent___CoWaitBlankEarthActionEnd_b__284_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *mTerminalList; // x0

  if ( (byte_593AB0C & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593AB0C = 1;
  }
  mTerminalList = (CommonUI_o *)this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_9;
  if ( !ScrTerminalListTop__IsBlankEarthAction((ScrTerminalListTop_o *)mTerminalList, 0) )
  {
    mTerminalList = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( mTerminalList )
      return !CommonUI__IsActive_NotifiDialog(mTerminalList, 0);
LABEL_9:
    sub_21FFECC(mTerminalList, method);
  }
  return 0;
}


bool TerminalSceneComponent___CoWaitTerminalTopEffectEnd_b__283_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *mTerminalList; // x0

  if ( (byte_593AB0B & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593AB0B = 1;
  }
  mTerminalList = (CommonUI_o *)this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_9;
  if ( !ScrTerminalListTop__CheckTerminalTopEffect((ScrTerminalListTop_o *)mTerminalList, 0) )
  {
    mTerminalList = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( mTerminalList )
      return !CommonUI__IsActive_NotifiDialog(mTerminalList, 0);
LABEL_9:
    sub_21FFECC(mTerminalList, method);
  }
  return 0;
}


bool TerminalSceneComponent___OpenExchangeDialogue_b__288_3(
        TerminalSceneComponent_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  return !TerminalSceneComponent__IsNotDisplayCostume(this, x, method);
}


void TerminalSceneComponent___SendMessageStartUpAndResume_b__200_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  this->fields._IsReturnChapterSelectFadeIn_k__BackingField = 1;
}


void TerminalSceneComponent___StartWindowMessage_b__223_0(
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
    sub_21FFECC(this, action);
  }
  QuestBoardListViewManager__SetMode((QuestBoardListViewManager_o *)this, 4, action, 0, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
bool TerminalSceneComponent___beginInitialize_b__193_0(
        TerminalSceneComponent_o *this,
        bool gotNewServant,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *v4; // x20
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  const MethodInfo_476E8C0 *v7; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct ScrTerminalMap_o *v10; // x8
  struct ScrTerminalMap_o *v11; // x8
  struct WarEntity_o *mWarEnt; // x8
  ScrTerminalMap_o *v13; // x21
  System_Action_o *v14; // x22
  TitleInfoControl_o *mTitleInfo; // x21
  System_Action_o *v16; // x22

  v4 = this;
  if ( (byte_593AB07 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_EventRaidMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent__beginInitialize_b__193_3__);
    this = (TerminalSceneComponent_o *)sub_21FFC50(&Method_TerminalSceneComponent__beginInitialize_b__193_4__);
    byte_593AB07 = 1;
  }
  v4->fields._onClosePresentBoxFlag_k__BackingField = 1;
  if ( gotNewServant )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, gotNewServant);
    if ( !byte_5932ADC )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5932ADC = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, gotNewServant);
      v5 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v5->static_fields;
    v7 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
    static_fields->_IsAutoResume_k__BackingField = 1;
    this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance(v7);
    if ( this )
    {
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 34, 1, 0, 0);
      return !gotNewServant;
    }
    goto LABEL_33;
  }
  mTerminalList = v4->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_33;
  this = (TerminalSceneComponent_o *)mTerminalList->fields.exRoomRootComponent;
  if ( !this
    || (this = (TerminalSceneComponent_o *)ExRoomRootComponent__IsDispState((ExRoomRootComponent_o *)this, 0),
        ((unsigned __int8)this & 1) == 0) )
  {
    mTerminalMap = v4->fields.mTerminalMap;
    if ( !mTerminalMap )
      goto LABEL_33;
    this = (TerminalSceneComponent_o *)mTerminalMap->fields.dispRoot;
    if ( !this )
      goto LABEL_33;
    this = (TerminalSceneComponent_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_28;
    v10 = v4->fields.mTerminalMap;
    if ( !v10 )
      goto LABEL_33;
    if ( !v10->fields.isRaidMap )
      goto LABEL_28;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, gotNewServant);
    this = (TerminalSceneComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventRaidMaster___);
    v11 = v4->fields.mTerminalMap;
    if ( !v11 )
      goto LABEL_33;
    mWarEnt = v11->fields.mWarEnt;
    if ( !mWarEnt || !this )
      goto LABEL_33;
    if ( EventRaidMaster__GetRaidGorupMax((EventRaidMaster_o *)this, mWarEnt->fields.eventId, 0) >= 1 )
    {
      v13 = v4->fields.mTerminalMap;
      v14 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v14, (Il2CppObject *)v4, Method_TerminalSceneComponent__beginInitialize_b__193_3__, 0);
      if ( v13 )
      {
        ScrTerminalMap__BeginRaidUpdateRequest(v13, v14, 0);
        return !gotNewServant;
      }
    }
    else
    {
LABEL_28:
      this = (TerminalSceneComponent_o *)v4->fields.mTitleInfo;
      if ( this )
      {
        TitleInfoControl__InitEventAlphaAnim((TitleInfoControl_o *)this, 0);
        mTitleInfo = v4->fields.mTitleInfo;
        v16 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(v16, (Il2CppObject *)v4, Method_TerminalSceneComponent__beginInitialize_b__193_4__, 0);
        if ( mTitleInfo )
        {
          TitleInfoControl__UpdateEventInfo(mTitleInfo, v16, 0);
          this = (TerminalSceneComponent_o *)v4->fields.mTitleInfo;
          if ( this )
          {
            TitleInfoControl__FrameIn((TitleInfoControl_o *)this, 0, 0);
            return !gotNewServant;
          }
        }
      }
    }
LABEL_33:
    sub_21FFECC(this, gotNewServant);
  }
  return !gotNewServant;
}


void TerminalSceneComponent___beginInitialize_b__193_1(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ScrPlayerStatus_o *mPlayerStatus; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8

  mPlayerStatus = this->fields.mPlayerStatus;
  if ( !mPlayerStatus
    || (ScrPlayerStatus__mfInitUserData(mPlayerStatus, 0), (mTerminalList = this->fields.mTerminalList) == 0)
    || (mPlayerStatus = (ScrPlayerStatus_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0 )
  {
    sub_21FFECC(mPlayerStatus, method);
  }
  QuestBoardListViewManager__SetupDisp((QuestBoardListViewManager_o *)mPlayerStatus, 1, 0);
}


void TerminalSceneComponent___beginInitialize_b__193_2(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1
  ScrTerminalMap_o *mTerminalMap; // x19

  if ( (byte_593AB09 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_593AB09 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0),
        (Instance = (AvalonSceneManager_o *)this->fields.mEarthCore) == 0)
    || (mTerminalMap = this->fields.mTerminalMap,
        Instance = (AvalonSceneManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0),
        !mTerminalMap) )
  {
    sub_21FFECC(Instance, v4);
  }
  ScrTerminalMap__SetCore(mTerminalMap, (UnityEngine_GameObject_o *)Instance, 0);
}


void TerminalSceneComponent___beginInitialize_b__193_3(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v5; // x0
  int32_t WarId_k__BackingField; // w21
  System_Action_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_IEnumerator_o *v10; // x1

  if ( (byte_593AB08 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent__beginInitialize_b__193_5__);
    byte_593AB08 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v3);
  if ( !byte_5932644 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932644 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v3);
    v5 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v5->static_fields->_WarId_k__BackingField;
  v7 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__193_5__, 0);
  if ( !Instance )
    sub_21FFECC(v8, v9);
  v10 = QuestTree__mfBaseTreeUpdateWithOpenCheck((QuestTree_o *)Instance, WarId_k__BackingField, v7, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v10, 0);
}


void TerminalSceneComponent___beginInitialize_b__193_4(TerminalSceneComponent_o *this, const MethodInfo *method)
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
    sub_21FFECC(this, method);
  }
}


void TerminalSceneComponent___beginInitialize_b__193_5(TerminalSceneComponent_o *this, const MethodInfo *method)
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
    sub_21FFECC(mTerminalList, method);
  }
  ScrTerminalMap__UpdateEventRaidUI((ScrTerminalMap_o *)mTerminalList, 0);
}


void TerminalSceneComponent___callbackEventDailyPoint_b__248_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.afterEventDailyPoint, 0);
}


void TerminalSceneComponent___mfsmfInitTable_b__245_0(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_o *v2; // x19
  __int64 v3; // x1
  PlayMakerFSM_o *myFSM; // x0

  v2 = this;
  if ( (byte_593AB0A & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_21FFC50(&StringLiteral_5691/*"EVENTLISTUP_END"*/);
    byte_593AB0A = 1;
  }
  TerminalSceneComponent__deleteQuestMovie(this, method);
  myFSM = v2->fields.myFSM;
  if ( !myFSM )
    sub_21FFECC(0, v3);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_5691/*"EVENTLISTUP_END"*/, 0);
}


void TerminalSceneComponent__beginFinish(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int32_t quitType; // w8

  if ( this->fields.quitType )
    quitType = this->fields.quitType;
  else
    quitType = 2;
  this->fields.quitType = quitType;
  TerminalSceneComponent__quit(this, method);
}


void TerminalSceneComponent__beginInitialize(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int v3; // w8
  __int64 v4; // x1
  __int64 v5; // x1
  TerminalPramsManager_c *v6; // x0
  TerminalPramsManager_c *v7; // x0
  int v8; // w9
  __int64 v9; // x1
  TerminalPramsManager_c *v10; // x0
  QuestAfterAction_o *Instance; // x0
  __int64 v12; // x1
  CommonUI_o *v13; // x21
  BalanceConfig_c *v14; // x0
  int32_t OrdealCallWarId; // w21
  TerminalPramsManager_c *v16; // x0
  Il2CppObject *Master_object; // x21
  WarEntity_o *v18; // x21
  TerminalPramsManager_c *v19; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  __int64 v21; // x1
  const MethodInfo *v22; // x3
  bool IsPlayCaldeaGateBoardEffect; // w8
  TerminalPramsManager_c *v24; // x0
  TerminalPramsManager_c *v25; // x0
  bool ClearedReturnFolderWarId; // w8
  int v27; // w9
  int32_t WarId_k__BackingField; // w22
  int32_t v29; // w21
  int v30; // w9
  int v31; // w9
  TerminalPramsManager_c *v32; // x0
  __int64 v33; // x1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int v40; // w8
  TerminalPramsManager_c *v41; // x0
  MissionNaviTransitionBoardItem_o *p_ContinueDecideLastChallengeQuestInfo_k__BackingField; // x0
  __int64 v43; // x1
  __int64 v44; // x1
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  struct UnityEngine_Camera_o *mUICamera; // x20
  CTouch_c *v52; // x0
  struct CTouch_StaticFields *v53; // x0
  struct CStateManager_TerminalSceneComponent__o **p_mFSM; // x20
  CStateManager_T__o *v55; // x21
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  CStateManager_T__o *mFSM; // x21
  TerminalSceneComponent_StateNormal_o *v63; // x22
  CStateManager_T__o *v64; // x21
  TerminalSceneComponent_StateTutorial1_SpotArrow_o *v65; // x22
  CStateManager_T__o *v66; // x21
  TerminalSceneComponent_StateTutorial1_QuestArrow_o *v67; // x22
  CStateManager_T__o *v68; // x21
  TerminalSceneComponent_StateTutorial2_SpotArrow_o *v69; // x22
  CStateManager_T__o *v70; // x21
  TerminalSceneComponent_StateTutorial2_QuestArrow_o *v71; // x22
  CStateManager_T__o *v72; // x21
  TerminalSceneComponent_StateTutorial3_MenuArrow_o *v73; // x22
  CStateManager_T__o *v74; // x21
  TerminalSceneComponent_StateTutorial3_GachaArrow_o *v75; // x22
  CStateManager_T__o *v76; // x21
  TerminalSceneComponent_StateTutorial4_SpotArrow_o *v77; // x22
  CStateManager_T__o *v78; // x21
  TerminalSceneComponent_StateTutorial4_QuestArrow_o *v79; // x22
  CStateManager_T__o *v80; // x21
  TerminalSceneComponent_StateTutorial5_MenuArrow_o *v81; // x22
  CStateManager_T__o *v82; // x20
  TerminalSceneComponent_StateTutorial5_CombineArrow_o *v83; // x21
  const MethodInfo *v84; // x2
  ScrPlayerStatus_o *mPlayerStatus; // x20
  System_Func_bool__bool__o *v86; // x21
  struct ScrPlayerStatus_o *v87; // x21
  System_Action_o *v88; // x20
  System_String_o *v89; // x2
  System_String_o *v90; // x3
  int32_t v91; // w4
  int32_t v92; // w5
  bool v93; // w6
  bool v94; // w7
  struct ScrTerminalMap_o *mTerminalMap; // x8
  System_Action_o *v96; // x20
  const MethodInfo *v97; // x2
  __int64 v98; // x1
  WarEntity_o *warEntity; // [xsp+0h] [xbp-40h] BYREF
  int32_t returnWarId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_593AAB0 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AndroidUtil_TypeInfo);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_CStateManager_TerminalSceneComponent___ctor__);
    sub_21FFC50(&Method_CStateManager_TerminalSceneComponent__add__);
    sub_21FFC50(&CStateManager_TerminalSceneComponent__TypeInfo);
    sub_21FFC50(&CTouch_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_WarMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_21FFC50(&System_Func_bool__bool__TypeInfo);
    sub_21FFC50(&ServantProfileEventJoinManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_21FFC50(&TerminalSceneComponent_StateNormal_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_StateTutorial1_QuestArrow_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_StateTutorial1_SpotArrow_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_StateTutorial2_QuestArrow_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_StateTutorial2_SpotArrow_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_StateTutorial3_GachaArrow_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_StateTutorial3_MenuArrow_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_StateTutorial4_QuestArrow_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_StateTutorial4_SpotArrow_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_StateTutorial5_CombineArrow_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_StateTutorial5_MenuArrow_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent__beginInitialize_b__193_0__);
    sub_21FFC50(&Method_TerminalSceneComponent__beginInitialize_b__193_1__);
    sub_21FFC50(&Method_TerminalSceneComponent__beginInitialize_b__193_2__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593AAB0 = 1;
  }
  v3 = *(&AndroidUtil_TypeInfo->_2.cctor_finished + 1);
  returnWarId = 0;
  warEntity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, method);
  AndroidUtil__DeleteOldSaveData(0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
  TerminalPramsManager__Load_SaveData(0);
  if ( !byte_5934EA9 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5934EA9 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
    v6 = TerminalPramsManager_TypeInfo;
  }
  if ( !v6->static_fields->_IsAutoResume_k__BackingField )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v6, v5);
    if ( !byte_5934D85 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5934D85 = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
      v7 = TerminalPramsManager_TypeInfo;
    }
    v8 = (unsigned __int8)byte_593522E;
    v7->static_fields->_DispState_k__BackingField = 0;
    if ( !v8 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
      byte_593522E = 1;
    }
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v5);
      v7 = TerminalPramsManager_TypeInfo;
    }
    v7->static_fields->_SelectedStoryQuestId_k__BackingField = 0;
    TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(0);
    if ( !byte_59341CF )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_59341CF = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9);
      v10 = TerminalPramsManager_TypeInfo;
    }
    v10->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
    TerminalPramsManager__TerminalSelectedRecollectionWarId_SaveData(0);
  }
  Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (CommonUI_o *)Instance;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
  if ( !v13 )
    goto LABEL_142;
  CommonUI__CheckChangeOtherConnectMarkFromEventId(
    v13,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId,
    1,
    0);
  Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_142;
  if ( QuestAfterAction__CheckChangeBlankEarth(Instance, 0) )
  {
    v14 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v12);
      v14 = BalanceConfig_TypeInfo;
    }
    OrdealCallWarId = v14->static_fields->OrdealCallWarId;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
    TerminalPramsManager__SetAutoResumeByWarId(OrdealCallWarId, 0);
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
  if ( !byte_5934EA9 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5934EA9 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
    v16 = TerminalPramsManager_TypeInfo;
  }
  if ( v16->static_fields->_IsAutoResume_k__BackingField )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
    if ( !byte_5932644 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5932644 = 1;
    }
    Instance = (QuestAfterAction_o *)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
      Instance = (QuestAfterAction_o *)TerminalPramsManager_TypeInfo;
    }
    if ( !Master_object )
      goto LABEL_142;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           (Il2CppObject **)&warEntity,
           HIDWORD(Instance->fields.lastDispSpot->klass),
           (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    {
      Instance = (QuestAfterAction_o *)this->fields.mTerminalList;
      if ( !Instance )
        goto LABEL_142;
      if ( ScrTerminalListTop__IsPlanetMapDisplayed((ScrTerminalListTop_o *)Instance, warEntity, 0)
        && SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
      {
        v18 = warEntity;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
        TerminalPramsManager__UpdateDispState(v18, 0);
      }
    }
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
  if ( !byte_593AB0D )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593AB0D = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
    v19 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v19->static_fields;
  Instance = (QuestAfterAction_o *)this->fields.mTerminalList;
  static_fields->_OverwriteClearedWarId_k__BackingField = 0;
  if ( !Instance )
    goto LABEL_142;
  IsPlayCaldeaGateBoardEffect = ScrTerminalListTop__IsPlayCaldeaGateBoardEffect((ScrTerminalListTop_o *)Instance, 0);
  v24 = TerminalPramsManager_TypeInfo;
  if ( IsPlayCaldeaGateBoardEffect )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v21);
    if ( !byte_5932644 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5932644 = 1;
    }
    v25 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v21);
      v25 = TerminalPramsManager_TypeInfo;
    }
    ClearedReturnFolderWarId = TerminalSceneComponent__TryGetClearedReturnFolderWarId(
                                 (TerminalSceneComponent_o *)v25,
                                 v25->static_fields->_WarId_k__BackingField,
                                 &returnWarId,
                                 v22);
    v24 = TerminalPramsManager_TypeInfo;
    if ( ClearedReturnFolderWarId )
    {
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v21);
      if ( !byte_5932ADC )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_5932ADC = 1;
      }
      v24 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v21);
        v24 = TerminalPramsManager_TypeInfo;
      }
      v27 = (unsigned __int8)byte_5932644;
      v24->static_fields->_IsAutoResume_k__BackingField = 1;
      if ( !v27 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        v24 = TerminalPramsManager_TypeInfo;
        byte_5932644 = 1;
      }
      if ( !*(&v24->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v24, v21);
        v24 = TerminalPramsManager_TypeInfo;
      }
      WarId_k__BackingField = v24->static_fields->_WarId_k__BackingField;
      if ( !byte_593AB0D )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        v24 = TerminalPramsManager_TypeInfo;
        byte_593AB0D = 1;
      }
      if ( !*(&v24->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v24, v21);
        v24 = TerminalPramsManager_TypeInfo;
      }
      v29 = returnWarId;
      v30 = (unsigned __int8)byte_5932DFA;
      v24->static_fields->_OverwriteClearedWarId_k__BackingField = WarId_k__BackingField;
      if ( !v30 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        v24 = TerminalPramsManager_TypeInfo;
        byte_5932DFA = 1;
      }
      if ( !*(&v24->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v24, v21);
        v24 = TerminalPramsManager_TypeInfo;
      }
      v31 = (unsigned __int8)byte_5934D85;
      v24->static_fields->_WarId_k__BackingField = v29;
      if ( !v31 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        v24 = TerminalPramsManager_TypeInfo;
        byte_5934D85 = 1;
      }
      if ( !*(&v24->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v24, v21);
        v24 = TerminalPramsManager_TypeInfo;
      }
      v24->static_fields->_DispState_k__BackingField = 3;
    }
  }
  if ( !*(&v24->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v24, v21);
  if ( !byte_593506D )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593506D = 1;
  }
  v32 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v21);
    v32 = TerminalPramsManager_TypeInfo;
  }
  v32->static_fields->meSceneStatus = 1;
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  this->fields._IsReq_InitEarthRotateY_k__BackingField = 1;
  v40 = (unsigned __int8)byte_5935A07;
  this->fields._onClosePresentBoxFlag_k__BackingField = 0;
  this->fields._FirstFadeTime_k__BackingField = 0.0;
  if ( !v40 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5935A07 = 1;
  }
  v41 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v33);
    v41 = TerminalPramsManager_TypeInfo;
  }
  p_ContinueDecideLastChallengeQuestInfo_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v41->static_fields->_ContinueDecideLastChallengeQuestInfo_k__BackingField;
  p_ContinueDecideLastChallengeQuestInfo_k__BackingField->klass = 0;
  sub_21FFBF4(p_ContinueDecideLastChallengeQuestInfo_k__BackingField, 0, v34, v35, v36, v37, v38, v39);
  SkillLvMaster__ResetBaseTime(0);
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v43);
  CTouch__init(0);
  mUICamera = this->fields.mUICamera;
  if ( !byte_5932645 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_5932645 = 1;
  }
  v52 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v44);
    v52 = CTouch_TypeInfo;
  }
  v53 = v52->static_fields;
  v53->mScreenCam = mUICamera;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v53->mScreenCam, (int32_t)mUICamera, v45, v46, v47, v48, v49, v50);
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v55 = (CStateManager_T__o *)sub_21FFEBC(CStateManager_TerminalSceneComponent__TypeInfo);
    CStateManager_object____ctor(
      v55,
      (Il2CppObject *)this,
      11,
      (const MethodInfo_3E505AC *)Method_CStateManager_TerminalSceneComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_TerminalSceneComponent__o *)v55;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mFSM, (int32_t)v55, v56, v57, v58, v59, v60, v61);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v63 = (TerminalSceneComponent_StateNormal_o *)sub_21FFEBC(TerminalSceneComponent_StateNormal_TypeInfo);
    TerminalSceneComponent_StateNormal___ctor(v63, 0);
    if ( mFSM )
    {
      CStateManager_object___add(
        mFSM,
        0,
        (IState_T__o *)v63,
        (const MethodInfo_3E5065C *)Method_CStateManager_TerminalSceneComponent__add__);
      v64 = (CStateManager_T__o *)*p_mFSM;
      v65 = (TerminalSceneComponent_StateTutorial1_SpotArrow_o *)sub_21FFEBC(TerminalSceneComponent_StateTutorial1_SpotArrow_TypeInfo);
      TerminalSceneComponent_StateTutorial1_SpotArrow___ctor(v65, 0);
      if ( v64 )
      {
        CStateManager_object___add(
          v64,
          1,
          (IState_T__o *)v65,
          (const MethodInfo_3E5065C *)Method_CStateManager_TerminalSceneComponent__add__);
        v66 = (CStateManager_T__o *)*p_mFSM;
        v67 = (TerminalSceneComponent_StateTutorial1_QuestArrow_o *)sub_21FFEBC(TerminalSceneComponent_StateTutorial1_QuestArrow_TypeInfo);
        TerminalSceneComponent_StateTutorial1_QuestArrow___ctor(v67, 0);
        if ( v66 )
        {
          CStateManager_object___add(
            v66,
            2,
            (IState_T__o *)v67,
            (const MethodInfo_3E5065C *)Method_CStateManager_TerminalSceneComponent__add__);
          v68 = (CStateManager_T__o *)*p_mFSM;
          v69 = (TerminalSceneComponent_StateTutorial2_SpotArrow_o *)sub_21FFEBC(TerminalSceneComponent_StateTutorial2_SpotArrow_TypeInfo);
          TerminalSceneComponent_StateTutorial2_SpotArrow___ctor(v69, 0);
          if ( v68 )
          {
            CStateManager_object___add(
              v68,
              3,
              (IState_T__o *)v69,
              (const MethodInfo_3E5065C *)Method_CStateManager_TerminalSceneComponent__add__);
            v70 = (CStateManager_T__o *)*p_mFSM;
            v71 = (TerminalSceneComponent_StateTutorial2_QuestArrow_o *)sub_21FFEBC(TerminalSceneComponent_StateTutorial2_QuestArrow_TypeInfo);
            TerminalSceneComponent_StateTutorial2_QuestArrow___ctor(v71, 0);
            if ( v70 )
            {
              CStateManager_object___add(
                v70,
                4,
                (IState_T__o *)v71,
                (const MethodInfo_3E5065C *)Method_CStateManager_TerminalSceneComponent__add__);
              v72 = (CStateManager_T__o *)*p_mFSM;
              v73 = (TerminalSceneComponent_StateTutorial3_MenuArrow_o *)sub_21FFEBC(TerminalSceneComponent_StateTutorial3_MenuArrow_TypeInfo);
              TerminalSceneComponent_StateTutorial3_MenuArrow___ctor(v73, 0);
              if ( v72 )
              {
                CStateManager_object___add(
                  v72,
                  5,
                  (IState_T__o *)v73,
                  (const MethodInfo_3E5065C *)Method_CStateManager_TerminalSceneComponent__add__);
                v74 = (CStateManager_T__o *)*p_mFSM;
                v75 = (TerminalSceneComponent_StateTutorial3_GachaArrow_o *)sub_21FFEBC(TerminalSceneComponent_StateTutorial3_GachaArrow_TypeInfo);
                TerminalSceneComponent_StateTutorial3_GachaArrow___ctor(v75, 0);
                if ( v74 )
                {
                  CStateManager_object___add(
                    v74,
                    6,
                    (IState_T__o *)v75,
                    (const MethodInfo_3E5065C *)Method_CStateManager_TerminalSceneComponent__add__);
                  v76 = (CStateManager_T__o *)*p_mFSM;
                  v77 = (TerminalSceneComponent_StateTutorial4_SpotArrow_o *)sub_21FFEBC(TerminalSceneComponent_StateTutorial4_SpotArrow_TypeInfo);
                  TerminalSceneComponent_StateTutorial4_SpotArrow___ctor(v77, 0);
                  if ( v76 )
                  {
                    CStateManager_object___add(
                      v76,
                      7,
                      (IState_T__o *)v77,
                      (const MethodInfo_3E5065C *)Method_CStateManager_TerminalSceneComponent__add__);
                    v78 = (CStateManager_T__o *)*p_mFSM;
                    v79 = (TerminalSceneComponent_StateTutorial4_QuestArrow_o *)sub_21FFEBC(TerminalSceneComponent_StateTutorial4_QuestArrow_TypeInfo);
                    TerminalSceneComponent_StateTutorial4_QuestArrow___ctor(v79, 0);
                    if ( v78 )
                    {
                      CStateManager_object___add(
                        v78,
                        8,
                        (IState_T__o *)v79,
                        (const MethodInfo_3E5065C *)Method_CStateManager_TerminalSceneComponent__add__);
                      v80 = (CStateManager_T__o *)*p_mFSM;
                      v81 = (TerminalSceneComponent_StateTutorial5_MenuArrow_o *)sub_21FFEBC(TerminalSceneComponent_StateTutorial5_MenuArrow_TypeInfo);
                      TerminalSceneComponent_StateTutorial5_MenuArrow___ctor(v81, 0);
                      if ( v80 )
                      {
                        CStateManager_object___add(
                          v80,
                          9,
                          (IState_T__o *)v81,
                          (const MethodInfo_3E5065C *)Method_CStateManager_TerminalSceneComponent__add__);
                        v82 = (CStateManager_T__o *)*p_mFSM;
                        v83 = (TerminalSceneComponent_StateTutorial5_CombineArrow_o *)sub_21FFEBC(TerminalSceneComponent_StateTutorial5_CombineArrow_TypeInfo);
                        TerminalSceneComponent_StateTutorial5_CombineArrow___ctor(v83, 0);
                        if ( v82 )
                        {
                          CStateManager_object___add(
                            v82,
                            10,
                            (IState_T__o *)v83,
                            (const MethodInfo_3E5065C *)Method_CStateManager_TerminalSceneComponent__add__);
                          TerminalSceneComponent__SetState(this, 0, v84);
                          goto LABEL_127;
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
LABEL_142:
    sub_21FFECC(Instance, v12);
  }
LABEL_127:
  Instance = (QuestAfterAction_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_142;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Instance, 0, 1, (System_String_o *)StringLiteral_1/*""*/, 1, 0);
  Instance = (QuestAfterAction_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_142;
  TitleInfoControl__changeTitleInfo_46824800((TitleInfoControl_o *)Instance, 1, 1, 0, 0);
  Instance = (QuestAfterAction_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_142;
  TitleInfoControl__setBackBtn_Terminal((TitleInfoControl_o *)Instance, 0, 0);
  Instance = (QuestAfterAction_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_142;
  TitleInfoControl__SetBackStoryButtonEnable((TitleInfoControl_o *)Instance, 0, 0);
  Instance = (QuestAfterAction_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_142;
  TitleInfoControl__SetBackRecollectionButtonEnable((TitleInfoControl_o *)Instance, 0, 0);
  Instance = (QuestAfterAction_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_142;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)Instance, 24, 0);
  Instance = (QuestAfterAction_o *)this->fields.mTerminalMap;
  if ( !Instance )
    goto LABEL_142;
  ScrTerminalMap__InitMapCamera((ScrTerminalMap_o *)Instance, 0);
  mPlayerStatus = this->fields.mPlayerStatus;
  v86 = (System_Func_bool__bool__o *)sub_21FFEBC(System_Func_bool__bool__TypeInfo);
  System_Func_bool__bool____ctor(
    v86,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent__beginInitialize_b__193_0__,
    0);
  if ( !mPlayerStatus )
    goto LABEL_142;
  ScrPlayerStatus__SetCloseGiftAct(mPlayerStatus, v86, 0);
  v87 = this->fields.mPlayerStatus;
  v88 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v88, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__193_1__, 0);
  if ( !v87 )
    goto LABEL_142;
  v87->fields.mRecoverAct = v88;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v87->fields.mRecoverAct, (int32_t)v88, v89, v90, v91, v92, v93, v94);
  Instance = (QuestAfterAction_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_142;
  TitleInfoControl__setHeaderBgImg((TitleInfoControl_o *)Instance, 0, 0);
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_142;
  Instance = (QuestAfterAction_o *)mTerminalMap->fields.spotMaskObj;
  if ( !Instance )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  v96 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v96, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__193_2__, 0);
  TerminalSceneComponent__SetEarthView(this, v96, v97);
  if ( !*(&ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v98);
  ServantProfileEventJoinManager__UpdateProfileServantEventJoin(0);
}


void TerminalSceneComponent__beginPause(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_593AABE & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_593AABE = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  this->fields.quitType = 3;
  TerminalSceneComponent__quit(this, v5);
}


void TerminalSceneComponent__beginResume(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  const MethodInfo_476EDF8 *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct WarEntity_o *mWarEnt; // x8
  int32_t eventId; // w20
  TerminalPramsManager_c *v10; // x0
  TerminalPramsManager_c *v11; // x0
  int32_t WarId_k__BackingField; // w21
  bool IsGrandQuestWarId; // w21
  const MethodInfo *v14; // x2
  bool IsEventPeriod; // w8
  TerminalPramsManager_c *v16; // x0
  int v17; // w9
  TerminalPramsManager_c *v18; // x0
  TerminalPramsManager_c *v19; // x0
  struct ScrTerminalMap_o *v20; // x8
  const MethodInfo *v21; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_593AABD & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMaster___);
    sub_21FFC50(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_21FFC50(&ScrTerminalListTop_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593AABD = 1;
  }
  v3 = (const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__;
  entity = 0;
  this->fields.isFadeInAfterResumeLoad = 0;
  Instance = SingletonTemplate_object___get_Instance(v3);
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
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
  if ( !byte_59354A5 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_59354A5 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
    v10 = TerminalPramsManager_TypeInfo;
  }
  if ( v10->static_fields->meSceneStatus != 3 )
  {
    if ( !*(&v10->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v10, v5);
    if ( !byte_5932644 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5932644 = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
      v11 = TerminalPramsManager_TypeInfo;
    }
    WarId_k__BackingField = v11->static_fields->_WarId_k__BackingField;
    if ( !*(&ScrTerminalListTop_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v5);
    IsGrandQuestWarId = ScrTerminalListTop__IsGrandQuestWarId(WarId_k__BackingField, 0);
    if ( !eventId )
      goto LABEL_33;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_51;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_51;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            &entity,
            eventId,
            (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    {
LABEL_33:
      v16 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
LABEL_34:
        j_il2cpp_runtime_class_init_0(v16, v5);
LABEL_35:
      if ( !byte_593506D )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_593506D = 1;
      }
      v18 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
        v18 = TerminalPramsManager_TypeInfo;
      }
      v18->static_fields->meSceneStatus = 2;
      if ( !IsGrandQuestWarId )
      {
        this->fields._IsReturnChapterSelectFadeIn_k__BackingField = 0;
        this->fields.isFadeInAfterResumeLoad = 1;
      }
      goto LABEL_50;
    }
    Instance = entity;
    if ( entity )
    {
      IsEventPeriod = EventEntity__IsEventPeriod((EventEntity_o *)entity, 0, 0);
      v16 = TerminalPramsManager_TypeInfo;
      v17 = *(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1);
      if ( IsEventPeriod )
      {
        if ( !v17 )
          goto LABEL_34;
        goto LABEL_35;
      }
      if ( !v17 )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
      if ( !byte_593506D )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_593506D = 1;
      }
      v19 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
        v19 = TerminalPramsManager_TypeInfo;
      }
      v19->static_fields->meSceneStatus = 1;
      TerminalSceneComponent__CallQuestInformationCloseAtAll(this, 0, v14);
      v20 = this->fields.mTerminalMap;
      if ( v20 )
      {
        Instance = (Il2CppObject *)v20->fields.spotMaskObj;
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
          TerminalSceneComponent__SetQuestBoardInfoOff(this, v21);
          goto LABEL_50;
        }
      }
    }
LABEL_51:
    sub_21FFECC(Instance, v5);
  }
LABEL_50:
  this->fields.quitType = 1;
  SceneRootComponent__beginResume_48429424((SceneRootComponent_o *)this, 0);
}


void TerminalSceneComponent__beginStartUp(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(TerminalSceneComponent_o *, _QWORD, const MethodInfo *))this->klass->vtable._5_beginStartUp.methodPtr)(
    this,
    0,
    this->klass->vtable._5_beginStartUp.method);
}


void TerminalSceneComponent__beginStartUp_52273736(
        TerminalSceneComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 naturalAligment; // x10
  Il2CppObject *v11; // x1
  __int64 v12; // x1
  TerminalSceneComponent_c *v13; // x0
  const MethodInfo *v14; // x2
  __int64 v15; // x1
  TerminalPramsManager_c *v16; // x0
  TerminalPramsManager_c *v17; // x0
  int v18; // w9
  Il2CppObject *Instance; // x0
  const MethodInfo *v20; // x1
  __int64 v21; // x1
  Il2CppObject *MasterData_object; // x20
  struct UserServantEntity_array *UserServantListFromDeckReaveHeroine; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct UserServantEntity_array *mStandSvtDatas; // x8
  __int64 mStandSvtIdx; // x9
  UserServantEntity_o *NextStandServant; // x20
  bool isSavedMemoryMode; // w22
  System_Action_o *v34; // x0
  System_Action_o *v35; // x21
  const MethodInfo *v36; // x4
  const MethodInfo *v37; // x3
  System_Collections_IEnumerator_o *Async; // x1

  if ( (byte_593AAB4 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_21FFC50(&OptionManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent_SendMessageStartUpAndResume__);
    sub_21FFC50(&Method_TerminalSceneComponent__beginStartUp_b__198_0__);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&TerminalTransitionInfo_TypeInfo);
    sub_21FFC50(&TutorialFlag_TypeInfo);
    byte_593AAB4 = 1;
  }
  if ( data
    && (naturalAligment = TerminalTransitionInfo_TypeInfo->_2.naturalAligment,
        data->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (TerminalTransitionInfo_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == TerminalTransitionInfo_TypeInfo )
      v11 = data;
    else
      v11 = 0;
  }
  else
  {
    v11 = 0;
  }
  this->fields._TransitionInfo_k__BackingField = (struct TerminalTransitionInfo_o *)v11;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TransitionInfo_k__BackingField,
    (int32_t)v11,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v13 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v12);
    v13 = TerminalSceneComponent_TypeInfo;
  }
  UnityEngine_RenderSettings__set_ambientLight(v13->static_fields->DEFAULT_AMBIENT_LIGHT_COLOR, 0);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 1, 32, 0);
  MainMenuBar__setMenuActive(1, this->fields.mUICamera, 0);
  TerminalSceneComponent__SetDispStandServant(this, 1, v14);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v15);
  if ( !byte_593AB0E )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593AB0E = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v15);
    v16 = TerminalPramsManager_TypeInfo;
  }
  if ( !v16->static_fields->_IsDispDone_UIStandFigure_k__BackingField )
  {
    if ( !*(&v16->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v16, v15);
    if ( !byte_593AB0F )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_593AB0F = 1;
    }
    v17 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v15);
      v17 = TerminalPramsManager_TypeInfo;
    }
    v18 = (unsigned __int8)byte_593AB10;
    v17->static_fields->_IsDispDone_UIStandFigure_k__BackingField = 1;
    if ( !v18 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      v17 = TerminalPramsManager_TypeInfo;
      byte_593AB10 = 1;
    }
    if ( !*(&v17->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v17, v15);
      v17 = TerminalPramsManager_TypeInfo;
    }
    v17->static_fields->_IsDispUIStandFigure_k__BackingField = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v21);
  Instance = (Il2CppObject *)TutorialFlag__Get_47357952(126, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !MasterData_object )
      goto LABEL_46;
    UserServantListFromDeckReaveHeroine = UserDeckMaster__GetUserServantListFromDeckReaveHeroine(
                                            (UserDeckMaster_o *)MasterData_object,
                                            0);
  }
  else
  {
    if ( !MasterData_object )
      goto LABEL_46;
    UserServantListFromDeckReaveHeroine = UserDeckMaster__GetUserServantListFromDeckIsTerminal(
                                            (UserDeckMaster_o *)MasterData_object,
                                            0);
  }
  this->fields.mStandSvtDatas = UserServantListFromDeckReaveHeroine;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mStandSvtDatas,
    (int32_t)UserServantListFromDeckReaveHeroine,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  mStandSvtDatas = this->fields.mStandSvtDatas;
  if ( !mStandSvtDatas )
LABEL_46:
    sub_21FFECC(Instance, v20);
  mStandSvtIdx = this->fields.mStandSvtIdx;
  if ( (unsigned int)mStandSvtIdx >= LODWORD(mStandSvtDatas->max_length) )
    sub_21FFED4(Instance);
  NextStandServant = mStandSvtDatas->m_Items[mStandSvtIdx];
  if ( !NextStandServant )
    NextStandServant = TerminalSceneComponent__GetNextStandServant(this, v20);
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v20);
  isSavedMemoryMode = OptionManager__isSavedMemoryMode(0);
  v34 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  v35 = v34;
  if ( isSavedMemoryMode )
  {
    System_Action___ctor(v34, (Il2CppObject *)this, Method_TerminalSceneComponent__beginStartUp_b__198_0__, 0);
    TerminalSceneComponent__SetupStandServant(this, NextStandServant, 0, v35, v36);
  }
  else
  {
    System_Action___ctor(v34, (Il2CppObject *)this, Method_TerminalSceneComponent_SendMessageStartUpAndResume__, 0);
    Async = TerminalSceneComponent__LoadAsync(this, NextStandServant, v35, v37);
    UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, Async, 0);
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
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  Il2CppObject *v15; // x21
  TerminalPramsManager_c *v16; // x0
  MissionNaviTransitionBoardItem_o *p_eventDailyPoint_k__BackingField; // x0
  int32_t monitor_high; // w21
  TerminalPramsManager_c *v19; // x0
  NetworkManager_c *v20; // x8
  System_DateTime_o v21; // x0
  __int64 v22; // x1
  int64_t Time_48310584; // x21
  TerminalPramsManager_c *v24; // x0
  int32_t eventId; // w22
  int v26; // w9
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct ScrTerminalListTop_o *v28; // x8
  TitleInfoControl_o *mTitleInfo; // x20
  UnityEngine_GameObject_o *mActionPanel; // x21
  System_Action_o *v31; // x22
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_593AAE1 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_21FFC50(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_JsonManager_Deserialize_EventDailyPoint___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent__callbackEventDailyPoint_b__248_0__);
    sub_21FFC50(&StringLiteral_11543/*"REQUEST_NG"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    this = (TerminalSceneComponent_o *)sub_21FFC50(&StringLiteral_26594/*"{}"*/);
    byte_593AAE1 = 1;
  }
  entity = 0;
  if ( !result )
    goto LABEL_48;
  if ( System_String__Equals_75473208(result, (System_String_o *)StringLiteral_23290/*"ng"*/, 0) )
  {
    this = (TerminalSceneComponent_o *)v4->fields.myFSM;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11543/*"REQUEST_NG"*/, 0);
      return;
    }
LABEL_48:
    sub_21FFECC(this, result);
  }
  this = (TerminalSceneComponent_o *)System_String__Equals_75473208(result, (System_String_o *)StringLiteral_26594/*"{}"*/, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (TerminalSceneComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !this )
      goto LABEL_48;
    MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0);
    ActionExtensions__Call(v4->fields.afterEventDailyPoint, 0);
  }
  else
  {
    mTerminalMap = v4->fields.mTerminalMap;
    if ( !mTerminalMap )
      goto LABEL_48;
    mWarEnt = mTerminalMap->fields.mWarEnt;
    this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_48;
    this = (TerminalSceneComponent_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !mWarEnt || !this )
      goto LABEL_48;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           mWarEnt->fields.eventId,
           (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    {
      if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v7);
      v15 = JsonManager__Deserialize_object_(
              (Il2CppObject *)result,
              (const MethodInfo_38A041C *)Method_JsonManager_Deserialize_EventDailyPoint___);
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
      if ( !byte_5937325 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_5937325 = 1;
      }
      v16 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
        v16 = TerminalPramsManager_TypeInfo;
      }
      p_eventDailyPoint_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v16->static_fields->_eventDailyPoint_k__BackingField;
      p_eventDailyPoint_k__BackingField->klass = (MissionNaviTransitionBoardItem_c *)v15;
      sub_21FFBF4(p_eventDailyPoint_k__BackingField, (int32_t)v15, v9, v10, v11, v12, v13, v14);
      if ( !entity )
        goto LABEL_48;
      monitor_high = HIDWORD(entity[2].monitor);
      if ( !byte_593AB16 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_593AB16 = 1;
      }
      v19 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, result);
        v19 = TerminalPramsManager_TypeInfo;
      }
      v20 = NetworkManager_TypeInfo;
      v19->static_fields->_EventDailyPointItem_k__BackingField = monitor_high;
      if ( !*(&v20->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v20, result);
      v21.fields._dateData = NetworkManager__getServerDateTime(0).fields._dateData;
      Time_48310584 = NetworkManager__getTime_48310584(v21, 0);
      if ( !byte_59359F9 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_59359F9 = 1;
      }
      v24 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22);
        v24 = TerminalPramsManager_TypeInfo;
      }
      eventId = mWarEnt->fields.eventId;
      v26 = (unsigned __int8)byte_59359F8;
      v24->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = Time_48310584;
      if ( !v26 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        v24 = TerminalPramsManager_TypeInfo;
        byte_59359F8 = 1;
      }
      if ( !*(&v24->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v24, v22);
        v24 = TerminalPramsManager_TypeInfo;
      }
      v24->static_fields->_EventDailyPointEventId_k__BackingField = eventId;
      TerminalPramsManager__EventDailyPointSave_SaveData(0);
      mTerminalList = v4->fields.mTerminalList;
      if ( !mTerminalList )
        goto LABEL_48;
      this = (TerminalSceneComponent_o *)mTerminalList->fields.mActionBgColl;
      if ( !this )
        goto LABEL_48;
      this = (TerminalSceneComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (TerminalSceneComponent_o *)v4->fields.mTitleInfo;
      if ( !this )
        goto LABEL_48;
      TitleInfoControl__UpdateEventInfo((TitleInfoControl_o *)this, 0, 0);
      v28 = v4->fields.mTerminalList;
      if ( !v28 )
        goto LABEL_48;
      mTitleInfo = v4->fields.mTitleInfo;
      mActionPanel = v28->fields.mActionPanel;
      v31 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        v31,
        (Il2CppObject *)v4,
        Method_TerminalSceneComponent__callbackEventDailyPoint_b__248_0__,
        0);
      if ( !mTitleInfo )
        goto LABEL_48;
      TitleInfoControl__EventDailyPointOpen(mTitleInfo, mActionPanel, v31, 0);
    }
    else
    {
      this = (TerminalSceneComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( !this )
        goto LABEL_48;
      MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0);
      ActionExtensions__Call(v4->fields.afterEventDailyPoint, 0);
    }
  }
}


void TerminalSceneComponent__callbackTopHome(
        TerminalSceneComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PlayMakerFSM_o *myFSM; // x0
  intptr_t interp_method; // x8
  __int64 v8; // x1
  int32_t RaidCounterEventId; // w20
  System_Action_o *afterTopLogin; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_593AADC & 1) == 0 )
  {
    sub_21FFC50(&Method_JsonManager_Deserialize_TopHomeInfo___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&TitleInfoControl_TypeInfo);
    sub_21FFC50(&StringLiteral_11545/*"REQUEST_OK"*/);
    sub_21FFC50(&StringLiteral_11543/*"REQUEST_NG"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593AADC = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_23290/*"ng"*/, 0) )
  {
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11543/*"REQUEST_NG"*/, 0);
      return;
    }
LABEL_31:
    sub_21FFECC(myFSM, v5);
  }
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v5);
  myFSM = (PlayMakerFSM_o *)JsonManager__Deserialize_object_(
                              (Il2CppObject *)result,
                              (const MethodInfo_38A041C *)Method_JsonManager_Deserialize_TopHomeInfo___);
  if ( !myFSM )
    goto LABEL_31;
  TopHomeRequest__setRecentRefreshTime(myFSM->fields.m_CachedPtr, 0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
  if ( !byte_59350E0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_59350E0 = 1;
  }
  myFSM = (PlayMakerFSM_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
    myFSM = (PlayMakerFSM_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !myFSM[2].fields.addEventHandlers[3].fields.interp_method )
    goto LABEL_34;
  if ( !HIDWORD(myFSM[3].fields.fsm) )
    j_il2cpp_runtime_class_init_0(myFSM, v5);
  if ( !byte_59350E0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_59350E0 = 1;
  }
  myFSM = (PlayMakerFSM_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
    myFSM = (PlayMakerFSM_o *)TerminalPramsManager_TypeInfo;
  }
  interp_method = myFSM[2].fields.addEventHandlers[3].fields.interp_method;
  if ( !interp_method )
    goto LABEL_31;
  if ( *(int *)(interp_method + 16) <= 0 )
  {
LABEL_34:
    if ( !HIDWORD(myFSM[3].fields.fsm) )
      j_il2cpp_runtime_class_init_0(myFSM, v5);
    RaidCounterEventId = TerminalPramsManager__GetRaidCounterEventId(0);
    if ( !*(&TitleInfoControl_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo, v8);
    TitleInfoControl__AddCountRaidRemainingHp(RaidCounterEventId, 0, 0);
  }
  MainMenuBar__UpdateNoticeNumber(0);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_31;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11545/*"REQUEST_OK"*/, 0);
  afterTopLogin = this->fields.afterTopLogin;
  this->fields.isTopLoginBusy = 0;
  ActionExtensions__Call(afterTopLogin, 0);
  this->fields.afterTopLogin = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.afterTopLogin, 0, v11, v12, v13, v14, v15, v16);
}


void TerminalSceneComponent__callbackTopLogin(
        TerminalSceneComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x21
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Request_object; // x21
  PlayMakerFSM_o *myFSM; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  PlayMakerFSM_o *v12; // x19
  System_Collections_Generic_IEnumerable_TSource__o *m_CachedPtr; // x0
  System_Collections_Generic_List_int__o *v14; // x20
  TerminalSceneComponent___c_c *v15; // x8
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x9
  System_Converter_TInput__TOutput__o *_9__241_0; // x21
  Il2CppObject *v18; // x22
  struct TerminalSceneComponent___c_StaticFields *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_array *v26; // x0
  System_String_o *v27; // x0
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x0
  System_Collections_Generic_List_int__o *v29; // x19
  TerminalSceneComponent___c_c *v30; // x8
  struct TerminalSceneComponent___c_StaticFields *v31; // x9
  System_Converter_TInput__TOutput__o *_9__241_1; // x20
  Il2CppObject *v33; // x21
  struct TerminalSceneComponent___c_StaticFields *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_String_array *v41; // x0
  System_String_o *v42; // x0

  if ( (byte_593AADB & 1) == 0 )
  {
    sub_21FFC50(&System_Converter_int__string__TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_int___);
    sub_21FFC50(&Method_JsonManager_Deserialize_CommonUI_LoginResultData___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ConvertAll_string___);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_21FFC50(&Method_NetworkManager_getRequest_TopHomeRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent_callbackTopHome__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__callbackTopLogin_b__241_0__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__callbackTopLogin_b__241_1__);
    sub_21FFC50(&TerminalSceneComponent___c_TypeInfo);
    sub_21FFC50(&StringLiteral_20552/*"freeShopIds"*/);
    sub_21FFC50(&StringLiteral_11545/*"REQUEST_OK"*/);
    sub_21FFC50(&StringLiteral_24251/*"returnRarePriShopIds"*/);
    sub_21FFC50(&StringLiteral_869/*","*/);
    byte_593AADB = 1;
  }
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v5, (Il2CppObject *)this, Method_TerminalSceneComponent_callbackTopHome__, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_TopHomeRequest___);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
  if ( !byte_5935588 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5935588 = 1;
  }
  myFSM = (PlayMakerFSM_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
    myFSM = (PlayMakerFSM_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Request_object )
    goto LABEL_45;
  TopHomeRequest__setBackgroundRequest(
    (TopHomeRequest_o *)Request_object,
    myFSM[2].fields.addEventHandlers[5].fields.method_ptr,
    0);
  if ( (((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Request_object->klass->vtable[7].methodPtr)(
          Request_object,
          Request_object->klass->vtable[7].method)
      & 1) == 0 )
    goto LABEL_19;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10);
  if ( !TerminalPramsManager__IsAutoForTimeProgressEvents(0) || TopHomeRequest__IsExpirationDateUpdateEventMap(0) )
  {
    myFSM = this->fields.myFSM;
    if ( !myFSM )
      goto LABEL_45;
    PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11545/*"REQUEST_OK"*/, 0);
    this->fields.isTopLoginBusy = 0;
  }
  else
  {
LABEL_19:
    RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
  }
  if ( System_String__IsNullOrEmpty(result, 0) )
    return;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v11);
  myFSM = (PlayMakerFSM_o *)JsonManager__Deserialize_object_(
                              (Il2CppObject *)result,
                              (const MethodInfo_38A041C *)Method_JsonManager_Deserialize_CommonUI_LoginResultData___);
  if ( !myFSM )
LABEL_45:
    sub_21FFECC(myFSM, v7);
  v12 = myFSM;
  m_CachedPtr = (System_Collections_Generic_IEnumerable_TSource__o *)myFSM[2].fields.m_CachedPtr;
  if ( m_CachedPtr )
  {
    myFSM = (PlayMakerFSM_o *)System_Linq_Enumerable__ToList_int_(
                                m_CachedPtr,
                                (const MethodInfo_386D6A8 *)Method_System_Linq_Enumerable_ToList_int___);
    v14 = (System_Collections_Generic_List_int__o *)myFSM;
    v15 = TerminalSceneComponent___c_TypeInfo;
    if ( !*(&TerminalSceneComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v7);
      v15 = TerminalSceneComponent___c_TypeInfo;
    }
    static_fields = v15->static_fields;
    _9__241_0 = (System_Converter_TInput__TOutput__o *)static_fields->__9__241_0;
    if ( !_9__241_0 )
    {
      if ( !*(&v15->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v15, v7);
        static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
      }
      v18 = (Il2CppObject *)static_fields->__9;
      _9__241_0 = (System_Converter_TInput__TOutput__o *)sub_21FFEBC(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(
        _9__241_0,
        v18,
        Method_TerminalSceneComponent___c__callbackTopLogin_b__241_0__,
        0);
      v19 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v19->__9__241_0 = (struct System_Converter_int__string__o *)_9__241_0;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v19->__9__241_0,
        (int32_t)_9__241_0,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    if ( !v14 )
      goto LABEL_45;
    myFSM = (PlayMakerFSM_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                v14,
                                (System_Converter_T__TOutput__o *)_9__241_0,
                                (const MethodInfo_36A562C *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !myFSM )
      goto LABEL_45;
    v26 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)myFSM,
                                   (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string__ToArray__);
    v27 = System_String__Join((System_String_o *)StringLiteral_869/*","*/, v26, 0);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_20552/*"freeShopIds"*/, v27, 0);
  }
  monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v12[2].monitor;
  if ( monitor )
  {
    myFSM = (PlayMakerFSM_o *)System_Linq_Enumerable__ToList_int_(
                                monitor,
                                (const MethodInfo_386D6A8 *)Method_System_Linq_Enumerable_ToList_int___);
    v29 = (System_Collections_Generic_List_int__o *)myFSM;
    v30 = TerminalSceneComponent___c_TypeInfo;
    if ( !*(&TerminalSceneComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v7);
      v30 = TerminalSceneComponent___c_TypeInfo;
    }
    v31 = v30->static_fields;
    _9__241_1 = (System_Converter_TInput__TOutput__o *)v31->__9__241_1;
    if ( !_9__241_1 )
    {
      if ( !*(&v30->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v30, v7);
        v31 = TerminalSceneComponent___c_TypeInfo->static_fields;
      }
      v33 = (Il2CppObject *)v31->__9;
      _9__241_1 = (System_Converter_TInput__TOutput__o *)sub_21FFEBC(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(
        _9__241_1,
        v33,
        Method_TerminalSceneComponent___c__callbackTopLogin_b__241_1__,
        0);
      v34 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v34->__9__241_1 = (struct System_Converter_int__string__o *)_9__241_1;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v34->__9__241_1,
        (int32_t)_9__241_1,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
    }
    if ( v29 )
    {
      myFSM = (PlayMakerFSM_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                  v29,
                                  (System_Converter_T__TOutput__o *)_9__241_1,
                                  (const MethodInfo_36A562C *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
      if ( myFSM )
      {
        v41 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                       (System_Collections_Generic_List_object__o *)myFSM,
                                       (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string__ToArray__);
        v42 = System_String__Join((System_String_o *)StringLiteral_869/*","*/, v41, 0);
        UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_24251/*"returnRarePriShopIds"*/, v42, 0);
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
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_IEnumerator_o *result; // x0

  if ( (byte_593AAC5 & 1) == 0 )
  {
    sub_21FFC50(&TerminalSceneComponent__coFadein_WorldDisp_d__218_TypeInfo);
    byte_593AAC5 = 1;
  }
  v9 = sub_21FFEBC(TerminalSceneComponent__coFadein_WorldDisp_d__218_TypeInfo);
  TerminalSceneComponent__coFadein_WorldDisp_d__218___ctor(
    (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)v9,
    0,
    0);
  if ( !v9 )
    sub_21FFECC(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(float *)(v9 + 64) = fadeTime;
  *(_QWORD *)(v9 + 40) = endAct;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 40), (int32_t)endAct, v18, v19, v20, v21, v22, v23);
  result = (System_Collections_IEnumerator_o *)v9;
  *(_BYTE *)(v9 + 48) = isExecuteUnusedAssets;
  return result;
}


void TerminalSceneComponent__deleteQuestMovie(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  int64_t Time; // x19
  DataManager_o *Master_object; // x0
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_T__o *datalist; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  QuestPhaseEntity_o *v21; // x22
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v23; // x1
  System_String_o *MovieFolder; // x0
  System_String_o *v25; // x21
  _BOOL8 IsPlayMovieFromMaterial; // x0
  __int64 v27; // x1
  Il2CppObject *Entity; // x0
  int64_t ClosedAt; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  System_Collections_Generic_IEnumerator_T__o *v34; // [xsp+18h] [xbp-48h]

  if ( (byte_593AADF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__getEntityList__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593AADF = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v2);
  Master_object = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object
    || (datalist = (System_Collections_ObjectModel_Collection_T__o *)Master_object->fields.datalist,
        (Master_object = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Master_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                           Master_object,
                                           (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestMaster___),
        !datalist) )
  {
    sub_21FFECC(Master_object, v5);
  }
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 datalist,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__GetEnumerator__);
  v34 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v9);
  for ( i = Enumerator; ; i = v34 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_16;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_16:
      v14 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            i,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
      break;
    if ( !v34 )
      sub_21FFECC(v15, v16);
    v17 = v34->klass;
    v18 = *(unsigned __int16 *)&v34->klass->_2.rank;
    if ( *(_WORD *)&v34->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestPhaseEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_24;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_24:
      v20 = sub_2237E2C(v34, System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo, 0);
    }
    v21 = (QuestPhaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                  v34,
                                  *(_QWORD *)(v20 + 8));
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    if ( !SelfUserGame )
      sub_21FFECC(0, v23);
    if ( !v21 )
      sub_21FFECC(SelfUserGame, v23);
    MovieFolder = QuestPhaseEntity__GetMovieFolder(v21, SelfUserGame->fields.genderType, 0);
    v25 = MovieFolder;
    if ( MovieFolder )
    {
      IsPlayMovieFromMaterial = QuestPhaseEntity__IsPlayMovieFromMaterial(v21, 0);
      if ( !IsPlayMovieFromMaterial )
      {
        if ( !v7 )
          sub_21FFECC(IsPlayMovieFromMaterial, v27);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   v7,
                   v21->fields.questId,
                   (const MethodInfo_3EDD388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( Entity )
        {
          ClosedAt = QuestEntity__getClosedAt((QuestEntity_o *)Entity, 0);
          if ( Time >= ClosedAt )
            MovieFileMerge__Delete(v25, 0);
        }
      }
    }
  }
  if ( v34 )
  {
    v30 = v34->klass;
    v31 = *(unsigned __int16 *)&v34->klass->_2.rank;
    if ( *(_WORD *)&v34->klass->_2.rank )
    {
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_41;
      }
      v33 = (__int64)&v30->vtable[*v32];
    }
    else
    {
LABEL_41:
      v33 = sub_2237E2C(v34, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(v34, *(_QWORD *)(v33 + 8));
  }
}


void TerminalSceneComponent__fadeoutBgm(TerminalSceneComponent_o *this, float fadeoutTime, const MethodInfo *method)
{
  if ( (byte_593AAD4 & 1) == 0 )
  {
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_593AAD4 = 1;
  }
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
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


ExRoomRootComponent_o *TerminalSceneComponent__get_ExRoomRoot(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  return this->fields.exRoomRoot;
}


UnityEngine_Color_o TerminalSceneComponent__get_FirstFadeMapColor(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  r = this->fields._FirstFadeMapColor_k__BackingField.fields.r;
  g = this->fields._FirstFadeMapColor_k__BackingField.fields.g;
  b = this->fields._FirstFadeMapColor_k__BackingField.fields.b;
  a = this->fields._FirstFadeMapColor_k__BackingField.fields.a;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
  return result;
}


int32_t TerminalSceneComponent__get_FirstFadeMapColorKind(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  return this->fields._FirstFadeMapColorKind_k__BackingField;
}


float TerminalSceneComponent__get_FirstFadeTime(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  return this->fields._FirstFadeTime_k__BackingField;
}


TerminalSceneComponent_o *TerminalSceneComponent__get_Instance(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalSceneComponent_c *v2; // x0

  if ( (byte_593AAA8 & 1) == 0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_593AAA8 = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v1);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  return v2->static_fields->mInstance;
}


bool TerminalSceneComponent__get_IsFadeInAfterResumeLoad(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  return this->fields.isFadeInAfterResumeLoad;
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


bool TerminalSceneComponent__get_IsReturnChapterSelectFadeIn(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  return this->fields._IsReturnChapterSelectFadeIn_k__BackingField;
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


QuestInformationComponent_o *TerminalSceneComponent__get_QuestInformation(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.mQuestInformation;
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
  float v3; // s3
  float v4; // s1
  float m_Width; // s2
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  m_XMin = this->fields.TUTORIAL_COMBINE_ARROW_RECT.fields.m_XMin;
  v3 = 135.0;
  v4 = this->fields.TUTORIAL_COMBINE_ARROW_RECT.fields.m_YMin + 53.0;
  m_Width = this->fields.TUTORIAL_COMBINE_ARROW_RECT.fields.m_Width;
  result.fields.m_Height = v3;
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
  float v3; // s3
  float v4; // s1
  float m_Width; // s2
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  m_XMin = this->fields.TUTORIAL_GACHA_ARROW_RECT.fields.m_XMin;
  v3 = 135.0;
  v4 = this->fields.TUTORIAL_GACHA_ARROW_RECT.fields.m_YMin + 53.0;
  m_Width = this->fields.TUTORIAL_GACHA_ARROW_RECT.fields.m_Width;
  result.fields.m_Height = v3;
  result.fields.m_Width = m_Width;
  result.fields.m_YMin = v4;
  result.fields.m_XMin = m_XMin;
  return result;
}


UnityEngine_Vector2_o TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_POS2_FS(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  float x; // s8
  float y; // s9
  float OffsetX; // s0
  float v6; // s1
  float v7; // s0
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_593AAAB & 1) == 0 )
  {
    sub_21FFC50(&FSUtility_TypeInfo);
    byte_593AAAB = 1;
  }
  x = this->fields.TUTORIAL_MENU_ARROW_POS2.fields.x;
  y = this->fields.TUTORIAL_MENU_ARROW_POS2.fields.y;
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
  OffsetX = FSUtility__GetOffsetX(68.0, 2, 0);
  v6 = y + 33.0;
  v7 = x + (float)(OffsetX + -2.0);
  result.fields.y = v6;
  result.fields.x = v7;
  return result;
}


UnityEngine_Vector2_o TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_POS_FS(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  float x; // s8
  float y; // s9
  float OffsetX; // s0
  float v6; // s1
  float v7; // s0
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_593AAAA & 1) == 0 )
  {
    sub_21FFC50(&FSUtility_TypeInfo);
    byte_593AAAA = 1;
  }
  x = this->fields.TUTORIAL_MENU_ARROW_POS.fields.x;
  y = this->fields.TUTORIAL_MENU_ARROW_POS.fields.y;
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
  OffsetX = FSUtility__GetOffsetX(68.0, 2, 0);
  v6 = y + 33.0;
  v7 = x + (float)(OffsetX + -14.0);
  result.fields.y = v6;
  result.fields.x = v7;
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

  if ( (byte_593AAAC & 1) == 0 )
  {
    sub_21FFC50(&FSUtility_TypeInfo);
    byte_593AAAC = 1;
  }
  x = this->fields.TUTORIAL_QUEST_ARROW_POS.fields.x;
  y = this->fields.TUTORIAL_QUEST_ARROW_POS.fields.y;
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
  v5 = x + FSUtility__GetOffsetX(64.0, 2, 0);
  v6 = y;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}


UnityEngine_Rect_o TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  float m_YMin; // s8
  float m_XMin; // s11
  float m_Width; // s9
  float m_Height; // s10
  float OffsetX; // s0
  float v8; // s1
  float v9; // s2
  float v10; // s0
  float v11; // s3
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593AAAD & 1) == 0 )
  {
    sub_21FFC50(&FSUtility_TypeInfo);
    byte_593AAAD = 1;
  }
  m_XMin = this->fields.TUTORIAL_QUEST_ARROW_RECT.fields.m_XMin;
  m_YMin = this->fields.TUTORIAL_QUEST_ARROW_RECT.fields.m_YMin;
  m_Width = this->fields.TUTORIAL_QUEST_ARROW_RECT.fields.m_Width;
  m_Height = this->fields.TUTORIAL_QUEST_ARROW_RECT.fields.m_Height;
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
  OffsetX = FSUtility__GetOffsetX(64.0, 2, 0);
  v8 = m_YMin;
  v9 = m_Width;
  v10 = m_XMin + OffsetX;
  v11 = m_Height;
  result.fields.m_Height = v11;
  result.fields.m_Width = v9;
  result.fields.m_YMin = v8;
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
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  System_Action_o *v6; // x20
  __int64 v7; // x1

  if ( (byte_593AAB9 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_21FFC50(&Method_TerminalSceneComponent__loadCommonBG_b__203_0__);
    byte_593AAB9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 4, 0) )
  {
    TerminalSceneComponent__loadOutGameAtlas(this, v5);
  }
  else
  {
    v6 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_TerminalSceneComponent__loadCommonBG_b__203_0__, 0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v7);
    AtlasManager__LoadUISkin(v6, 4, 1, 0);
  }
}


void TerminalSceneComponent__loadOutGameAtlas(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  __int64 v4; // x1

  if ( (byte_593AABA & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent__loadOutGameAtlas_b__204_0__);
    byte_593AABA = 1;
  }
  v3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_TerminalSceneComponent__loadOutGameAtlas_b__204_0__, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v4);
  AtlasManager__LoadOutGameAtlas(v3, 0);
}


void TerminalSceneComponent__loadVoice(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x8
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct TerminalTransitionInfo_o *v6; // x8
  SoundManager_o *v7; // x20
  System_String_o *voiceAssetName; // x21
  System_Action_o *v9; // x22

  if ( (byte_593AABB & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_21FFC50(&Method_TerminalSceneComponent_SendMessageStartUpAndResume__);
    byte_593AABB = 1;
  }
  TransitionInfo_k__BackingField = this->fields._TransitionInfo_k__BackingField;
  if ( TransitionInfo_k__BackingField
    && !System_String__IsNullOrEmpty(TransitionInfo_k__BackingField->fields.voiceAssetName, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v6 = this->fields._TransitionInfo_k__BackingField;
    if ( !v6
      || (v7 = (SoundManager_o *)Instance,
          voiceAssetName = v6->fields.voiceAssetName,
          v9 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
          System_Action___ctor(v9, (Il2CppObject *)this, Method_TerminalSceneComponent_SendMessageStartUpAndResume__, 0),
          !v7) )
    {
      sub_21FFECC(Instance, v5);
    }
    SoundManager__LoadAudioAssetStorage(v7, voiceAssetName, v9, 1, 0);
  }
  else
  {
    TerminalSceneComponent__SendMessageStartUpAndResume(this, method);
  }
}


void TerminalSceneComponent__mcbfCheckSceneStatus(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  PlayMakerFSM_o *myFSM; // x0
  int32_t meSceneStatus; // w8
  __int64 *v7; // x8

  if ( (byte_593AAED & 1) == 0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&StringLiteral_5966/*"EV_SCENE_STATUS_INIT"*/);
    sub_21FFC50(&StringLiteral_5967/*"EV_SCENE_STATUS_RESUME"*/);
    byte_593AAED = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_59354A5 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_59354A5 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  myFSM = this->fields.myFSM;
  meSceneStatus = static_fields->meSceneStatus;
  if ( meSceneStatus != 3 && meSceneStatus != 2 )
  {
    if ( myFSM )
    {
      v7 = &StringLiteral_5966/*"EV_SCENE_STATUS_INIT"*/;
      goto LABEL_15;
    }
LABEL_16:
    sub_21FFECC(myFSM, method);
  }
  if ( !myFSM )
    goto LABEL_16;
  v7 = &StringLiteral_5967/*"EV_SCENE_STATUS_RESUME"*/;
LABEL_15:
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v7, 0);
}


void TerminalSceneComponent__mfCallFsmEvent(
        TerminalSceneComponent_o *this,
        System_String_o *sEventStr,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_21FFECC(0, sEventStr);
  PlayMakerFSM__SendEvent(myFSM, sEventStr, 0);
}


void TerminalSceneComponent__mfsmfInitTable(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *mTerminalMap; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_593AADE & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_21FFC50(&Method_TerminalSceneComponent__mfsmfInitTable_b__245_0__);
    byte_593AADE = 1;
  }
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__ReleaseMap(mTerminalMap, 0, 0), (mTerminalList = this->fields.mTerminalList) == 0)
    || (mTerminalMap = (ScrTerminalMap_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0
    || (ListViewManager__DestroyList((ListViewManager_o *)mTerminalMap, 0),
        Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__),
        v6 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_TerminalSceneComponent__mfsmfInitTable_b__245_0__, 0),
        !Instance) )
  {
    sub_21FFECC(mTerminalMap, method);
  }
  v7 = QuestTree__Init((QuestTree_o *)Instance, v6, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v7, 0);
}


void TerminalSceneComponent__playBgm(
        TerminalSceneComponent_o *this,
        System_String_o *bgmName,
        System_Action_o *onLoadFinishCallback,
        float fadeTime,
        const MethodInfo *method)
{
  MethodInfo *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  System_String_o *mPlayBgmName; // x20

  if ( (byte_593AAD1 & 1) == 0 )
  {
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_593AAD1 = 1;
  }
  if ( System_String__IsNullOrEmpty(bgmName, 0) )
  {
    TerminalSceneComponent__playDefaultBgm(this, onLoadFinishCallback, 0.0, v9);
  }
  else
  {
    this->fields.mPlayBgmName = bgmName;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mPlayBgmName,
      (int32_t)bgmName,
      (System_String_o *)v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    mPlayBgmName = this->fields.mPlayBgmName;
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v15);
    SoundManager__playBgm_48459056(mPlayBgmName, fadeTime, onLoadFinishCallback, 0);
  }
}


void TerminalSceneComponent__playBgm_52290704(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  System_String_o *mPlayBgmName; // x19

  if ( (byte_593AAD3 & 1) == 0 )
  {
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_593AAD3 = 1;
  }
  mPlayBgmName = this->fields.mPlayBgmName;
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
  SoundManager__playBgm(mPlayBgmName, 0);
}


void TerminalSceneComponent__playDefaultBgm(
        TerminalSceneComponent_o *this,
        System_Action_o *onLoadFinishCallback,
        float fadeTime,
        const MethodInfo *method)
{
  System_String_o *MainBgmName; // x1
  const MethodInfo *v8; // x3

  if ( (byte_593AAD2 & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    byte_593AAD2 = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, onLoadFinishCallback);
  MainBgmName = BgmManager__GetMainBgmName(0, 0);
  TerminalSceneComponent__playBgm(this, MainBgmName, onLoadFinishCallback, fadeTime, v8);
}


void TerminalSceneComponent__quit(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_o *v2; // x19
  struct ScrTerminalListTop_o *mTerminalList; // x8
  ExRoomRootComponent_o *exRoomRootComponent; // x0
  struct ScrTerminalListTop_o *v5; // x8
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0
  TerminalPramsManager_c *v8; // x0
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x8
  struct TerminalTransitionInfo_o *v10; // x8
  System_String_o *voiceAssetName; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *MasterData_object; // x0
  __int64 v19; // x1
  TerminalOverwriteMaster_o *v20; // x20
  __int64 v21; // x1
  bool OverwriteSkinName; // w8
  TerminalSceneComponent_c *v23; // x0
  int v24; // w9
  System_String_o *OVERWRITE_COMMON_BG_TYPE1_KEY; // x21
  System_String_o *v26; // x1
  System_String_o *v27; // x0
  __int64 v28; // x1
  bool v29; // w8
  TerminalSceneComponent_c *v30; // x0
  int v31; // w9
  System_String_o *OVERWRITE_COMMON_BG_TYPE2_KEY; // x20
  System_String_o *v33; // x1
  System_String_o *v34; // x0
  System_String_o *str1; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *skinName; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_593AABF & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    this = (TerminalSceneComponent_o *)sub_21FFC50(&StringLiteral_15352/*"UISkin/"*/);
    byte_593AABF = 1;
  }
  mTerminalList = v2->fields.mTerminalList;
  str1 = 0;
  skinName = 0;
  if ( !mTerminalList )
    goto LABEL_60;
  exRoomRootComponent = mTerminalList->fields.exRoomRootComponent;
  if ( exRoomRootComponent )
  {
    this = (TerminalSceneComponent_o *)ExRoomRootComponent__IsDispState(exRoomRootComponent, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v5 = v2->fields.mTerminalList;
      if ( !v5 )
        goto LABEL_60;
      this = (TerminalSceneComponent_o *)v5->fields.exRoomRootComponent;
      if ( !this )
        goto LABEL_60;
      ExRoomRootComponent__Quit((ExRoomRootComponent_o *)this, 0, 0);
    }
  }
  this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !this )
    goto LABEL_60;
  AutomatedAction__TerminateMissionAction((AutomatedAction_o *)this, 0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
  if ( !byte_593AB12 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593AB12 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
    v7 = TerminalPramsManager_TypeInfo;
  }
  if ( v7->static_fields->_isWarBoardPlay_k__BackingField )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v7, v6);
    if ( !byte_5935676 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5935676 = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
      v8 = TerminalPramsManager_TypeInfo;
    }
    v8->static_fields->_isWarBoardPlay_k__BackingField = 0;
  }
  else
  {
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v6);
    SoundManager__stopSe(0.0, 0);
  }
  this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !this )
LABEL_60:
    sub_21FFECC(this, method);
  QuestAfterAction__releaseVoice((QuestAfterAction_o *)this, 0);
  TransitionInfo_k__BackingField = v2->fields._TransitionInfo_k__BackingField;
  if ( TransitionInfo_k__BackingField )
  {
    this = (TerminalSceneComponent_o *)System_String__IsNullOrEmpty(
                                         TransitionInfo_k__BackingField->fields.voiceAssetName,
                                         0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v10 = v2->fields._TransitionInfo_k__BackingField;
      if ( !v10 )
        goto LABEL_60;
      voiceAssetName = v10->fields.voiceAssetName;
      if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
      SoundManager__releaseAudioAssetStorage(voiceAssetName, 0);
      this = (TerminalSceneComponent_o *)v2->fields._TransitionInfo_k__BackingField;
      if ( !this )
        goto LABEL_60;
      this->fields.uiRoot = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.uiRoot, 0, v12, v13, v14, v15, v16, v17);
    }
  }
  this = (TerminalSceneComponent_o *)v2->fields.mTerminalMap;
  if ( !this )
    goto LABEL_60;
  ScrTerminalMap__Quit((ScrTerminalMap_o *)this, v2->fields.quitType, 0);
  if ( v2->fields.quitType == 2 )
  {
    this = (TerminalSceneComponent_o *)v2->fields.mTitleInfo;
    if ( this )
    {
      TitleInfoControl__releaseAssetData((TitleInfoControl_o *)this, 0);
      this = (TerminalSceneComponent_o *)v2->fields.mTerminalList;
      if ( this )
      {
        ScrTerminalListTop__ReleaseAsset((ScrTerminalListTop_o *)this, 0);
        goto LABEL_40;
      }
    }
    goto LABEL_60;
  }
LABEL_40:
  this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_60;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
  if ( MasterData_object )
  {
    v20 = (TerminalOverwriteMaster_o *)MasterData_object;
    OverwriteSkinName = TerminalOverwriteMaster__TryGetOverwriteSkinName(
                          (TerminalOverwriteMaster_o *)MasterData_object,
                          2,
                          &skinName,
                          0);
    v23 = TerminalSceneComponent_TypeInfo;
    v24 = *(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1);
    if ( OverwriteSkinName )
    {
      if ( !v24 )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v21);
        v23 = TerminalSceneComponent_TypeInfo;
      }
      OVERWRITE_COMMON_BG_TYPE1_KEY = v23->static_fields->OVERWRITE_COMMON_BG_TYPE1_KEY;
      v26 = System_String__Concat_75438412((System_String_o *)StringLiteral_15352/*"UISkin/"*/, skinName, 0);
      v27 = OVERWRITE_COMMON_BG_TYPE1_KEY;
    }
    else
    {
      if ( !v24 )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v21);
        v23 = TerminalSceneComponent_TypeInfo;
      }
      v27 = v23->static_fields->OVERWRITE_COMMON_BG_TYPE1_KEY;
      v26 = **(System_String_o ***)(qword_594C0B8 + 184);
    }
    UnityEngine_PlayerPrefs__SetString(v27, v26, 0);
    v29 = TerminalOverwriteMaster__TryGetOverwriteSkinName(v20, 4, &str1, 0);
    v30 = TerminalSceneComponent_TypeInfo;
    v31 = *(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1);
    if ( v29 )
    {
      if ( !v31 )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v28);
        v30 = TerminalSceneComponent_TypeInfo;
      }
      OVERWRITE_COMMON_BG_TYPE2_KEY = v30->static_fields->OVERWRITE_COMMON_BG_TYPE2_KEY;
      v33 = System_String__Concat_75438412((System_String_o *)StringLiteral_15352/*"UISkin/"*/, str1, 0);
      v34 = OVERWRITE_COMMON_BG_TYPE2_KEY;
    }
    else
    {
      if ( !v31 )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v28);
        v30 = TerminalSceneComponent_TypeInfo;
      }
      v34 = v30->static_fields->OVERWRITE_COMMON_BG_TYPE2_KEY;
      v33 = **(System_String_o ***)(qword_594C0B8 + 184);
    }
    UnityEngine_PlayerPrefs__SetString(v34, v33, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
  TerminalPramsManager__Save_SaveData(0);
  v2->fields.quitType = 0;
}


void TerminalSceneComponent__requestEventDailyPoint(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x21
  __int64 v8; // x1

  if ( (byte_593AAE0 & 1) == 0 )
  {
    sub_21FFC50(&Method_NetworkManager_getRequest_EventDailyPointRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_21FFC50(&Method_TerminalSceneComponent_callbackEventDailyPoint__);
    byte_593AAE0 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_callbackEventDailyPoint__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
  Instance = NetworkManager__getRequest_object_(
               v7,
               (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_EventDailyPointRequest___);
  if ( !Instance )
LABEL_8:
    sub_21FFECC(Instance, v6);
  EventDailyPointRequest__beginRequest((EventDailyPointRequest_o *)Instance, eventId, 0);
}


void TerminalSceneComponent__requestTopHome(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  PlayMakerFSM_o *myFSM; // x0
  Il2CppObject *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v7; // x21

  if ( (byte_593AADA & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_LoginCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent_callbackTopLogin__);
    sub_21FFC50(&TutorialFlag_TypeInfo);
    sub_21FFC50(&StringLiteral_11545/*"REQUEST_OK"*/);
    byte_593AADA = 1;
  }
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
  if ( !TutorialFlag__Get_47357952(102, 0) )
    goto LABEL_13;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v3);
  if ( !byte_59354C0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_59354C0 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v3);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( v4->static_fields->_IsPlayScriptWithMap_k__BackingField )
  {
LABEL_13:
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11545/*"REQUEST_OK"*/, 0);
      this->fields.isTopLoginBusy = 0;
      return;
    }
LABEL_17:
    sub_21FFECC(myFSM, v3);
  }
  this->fields.isTopLoginBusy = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v7 = (NetworkManager_LoginCallbackFunc_o *)sub_21FFEBC(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(v7, (Il2CppObject *)this, Method_TerminalSceneComponent_callbackTopLogin__, 0);
  if ( !Instance )
    goto LABEL_17;
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v7, 0, 1, 0);
}


void TerminalSceneComponent__set_FirstFadeMapColor(
        TerminalSceneComponent_o *this,
        UnityEngine_Color_o value,
        const MethodInfo *method)
{
  this->fields._FirstFadeMapColor_k__BackingField = value;
}


void TerminalSceneComponent__set_FirstFadeMapColorKind(
        TerminalSceneComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._FirstFadeMapColorKind_k__BackingField = value;
}


void TerminalSceneComponent__set_FirstFadeTime(TerminalSceneComponent_o *this, float value, const MethodInfo *method)
{
  this->fields._FirstFadeTime_k__BackingField = value;
}


void TerminalSceneComponent__set_IsFadeInAfterResumeLoad(
        TerminalSceneComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isFadeInAfterResumeLoad = value;
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


void TerminalSceneComponent__set_IsReturnChapterSelectFadeIn(
        TerminalSceneComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsReturnChapterSelectFadeIn_k__BackingField = value;
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._TransitionInfo_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TransitionInfo_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FFD558;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FFD510;
}


System_IAsyncResult_o *TerminalSceneComponent_PlayChapterStartCallback__BeginInvoke(
        TerminalSceneComponent_PlayChapterStartCallback_o *this,
        bool isPlay,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isPlay;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void TerminalSceneComponent_PlayChapterStartCallback__EndInvoke(
        TerminalSceneComponent_PlayChapterStartCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  TerminalSceneComponent_o **v13; // x20
  QuestBoardListViewObject_o *FocusQuest; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8
  struct UIScrollView_o *scrollView; // x8
  struct UIProgressBar_o *verticalScrollBar; // x23
  System_String_o *v26; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v28; // x0
  CommonUI_o *v29; // x22
  UnityEngine_Vector2_o TUTORIAL_QUEST_ARROW_POS_FS; // kr00_8
  TerminalSceneComponent_o *v31; // x8
  float m_XMin; // s10
  float m_YMin; // s11
  float x; // s14
  float y; // s15
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v38; // x23
  struct ScrTerminalListTop_o *v39; // x21
  System_Action_o *v40; // x20
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  UnityEngine_Rect_o TUTORIAL_QUEST_ARROW_RECT_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v48; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_593AB19 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_GameObjectExtensions_RemoveComponent_Collider___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__0__);
    sub_21FFC50(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__1__);
    sub_21FFC50(&TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_TypeInfo);
    sub_21FFC50(&StringLiteral_14129/*"TUTORIAL_MESSAGE_TERMINAL_QUEST1"*/);
    byte_593AB19 = 1;
  }
  v4 = sub_21FFEBC(TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_22;
  *(_QWORD *)(v4 + 16) = that;
  v13 = (TerminalSceneComponent_o **)(v4 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_22;
  mFG = *(TerminalSceneComponent_o **)(*(_QWORD *)(v4 + 16) + 256LL);
  if ( !mFG )
    goto LABEL_22;
  FocusQuest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mFG, 0);
  *(_QWORD *)(v4 + 24) = FocusQuest;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 24), (int32_t)FocusQuest, v15, v16, v17, v18, v19, v20);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
  mFG = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14129/*"TUTORIAL_MESSAGE_TERMINAL_QUEST1"*/, 0);
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
  v26 = (System_String_o *)mFG;
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mFG;
  if ( !mFG )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0);
  GameObjectExtensions__RemoveComponent_object_(
    gameObject,
    (const MethodInfo_3885164 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mBG;
  if ( !mFG )
    goto LABEL_22;
  v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0);
  GameObjectExtensions__RemoveComponent_object_(
    v28,
    (const MethodInfo_3885164 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v13 )
    goto LABEL_22;
  v29 = (CommonUI_o *)mFG;
  TUTORIAL_QUEST_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(*v13, 0);
  mFG = *v13;
  if ( !*v13 )
    goto LABEL_22;
  TUTORIAL_QUEST_ARROW_RECT_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(mFG, 0);
  v31 = *v13;
  if ( !*v13 )
    goto LABEL_22;
  m_XMin = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_XMin;
  m_YMin = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_YMin;
  x = v31->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x;
  y = v31->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.y;
  m_Width = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_Width;
  m_Height = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_Height;
  v38 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__0__,
    0);
  if ( !v29 )
    goto LABEL_22;
  v48.fields.m_XMin = m_XMin;
  v48.fields.m_YMin = m_YMin;
  v48.fields.m_Width = m_Width;
  v48.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v29,
    v26,
    TUTORIAL_QUEST_ARROW_POS_FS,
    v48,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v38,
    0);
  if ( !*v13
    || (v39 = (*v13)->fields.mTerminalList,
        v40 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v40,
          (Il2CppObject *)v4,
          Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0),
        !v39) )
  {
LABEL_22:
    sub_21FFECC(mFG, v6);
  }
  v39->fields.mQuestClickAct = v40;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v39->fields.mQuestClickAct,
    (int32_t)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
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
  if ( (byte_593AB1A & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
    byte_593AB1A = 1;
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
                                                                                            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0 )
  {
LABEL_12:
    sub_21FFECC(this, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
}


void TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20
  System_Action_o *_9__2; // x22
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_593AB1B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__2__);
    byte_593AB1B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !v5 )
    sub_21FFECC(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_37315056(v5, _9__2, 0);
}


void TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_21FFECC(0, method);
  TerminalSceneComponent__SetState(that, 0, 0);
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
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  SrcSpotBasePrefab_o *FocusSpot; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  System_String_o *v22; // x21
  Il2CppObject *Instance; // x22
  UnityEngine_Vector2_o TUTORIAL_SPOT_ARROW_POS1_FS; // kr00_8
  float x; // s14
  float y; // s15
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v31; // x23
  struct ScrTerminalMap_o *v32; // x21
  System_Action_o *v33; // x19
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  UnityEngine_Rect_o TUTORIAL_SPOT_ARROW_RECT1_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v41; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_593AB17 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__0__);
    sub_21FFC50(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__1__);
    sub_21FFC50(&TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_TypeInfo);
    sub_21FFC50(&StringLiteral_14132/*"TUTORIAL_MESSAGE_TERMINAL_SPOT1"*/);
    byte_593AB17 = 1;
  }
  v5 = sub_21FFEBC(TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_12;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_12;
  FocusSpot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0);
  *(_QWORD *)(v5 + 16) = FocusSpot;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)FocusSpot, v15, v16, v17, v18, v19, v20);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_14132/*"TUTORIAL_MESSAGE_TERMINAL_SPOT1"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  TUTORIAL_SPOT_ARROW_POS1_FS = TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_POS1_FS(that, 0);
  TUTORIAL_SPOT_ARROW_RECT1_FS = TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_RECT1_FS(that, 0);
  x = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x;
  y = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.y;
  m_XMin = TUTORIAL_SPOT_ARROW_RECT1_FS.fields.m_XMin;
  m_YMin = TUTORIAL_SPOT_ARROW_RECT1_FS.fields.m_YMin;
  m_Width = TUTORIAL_SPOT_ARROW_RECT1_FS.fields.m_Width;
  m_Height = TUTORIAL_SPOT_ARROW_RECT1_FS.fields.m_Height;
  v31 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__0__,
    0);
  if ( !Instance )
    goto LABEL_12;
  v41.fields.m_XMin = m_XMin;
  v41.fields.m_YMin = m_YMin;
  v41.fields.m_Width = m_Width;
  v41.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    (CommonUI_o *)Instance,
    v22,
    TUTORIAL_SPOT_ARROW_POS1_FS,
    v41,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v31,
    0);
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__SetMapCamera_TutorialFocusSpot(mTerminalMap, *(SrcSpotBasePrefab_o **)(v5 + 16), 0.5, 0),
        v32 = that->fields.mTerminalMap,
        v33 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v33,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0),
        !v32) )
  {
LABEL_12:
    sub_21FFECC(mTerminalMap, v7);
  }
  v32->fields.mSpotClickAct = v33;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v32->fields.mSpotClickAct,
    (int32_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
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
      sub_21FFECC(this, that);
    }
    if ( mQuestBoardListViewManager->fields.initMode == 1 )
      TerminalSceneComponent__SetState(that, 2, 0);
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
    sub_21FFECC(0, method);
  SrcSpotBasePrefab__SetBtnColliderEnable(focus_spot, 1, 0);
}


void TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0___begin_b__1(
        TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20
  System_Action_o *_9__2; // x22
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_593AB18 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__2__);
    byte_593AB18 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !v5 )
    sub_21FFECC(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_37315056(v5, _9__2, 0);
}


void TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial1_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(this, method);
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
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  TerminalSceneComponent_o **v13; // x20
  QuestBoardListViewObject_o *FocusQuest; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8
  struct UIScrollView_o *scrollView; // x8
  struct UIProgressBar_o *verticalScrollBar; // x23
  System_String_o *v26; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v28; // x0
  CommonUI_o *v29; // x22
  UnityEngine_Vector2_o TUTORIAL_QUEST_ARROW_POS_FS; // kr00_8
  TerminalSceneComponent_o *v31; // x8
  float m_XMin; // s10
  float m_YMin; // s11
  float x; // s14
  float y; // s15
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v38; // x23
  struct ScrTerminalListTop_o *v39; // x21
  System_Action_o *v40; // x20
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  UnityEngine_Rect_o TUTORIAL_QUEST_ARROW_RECT_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v48; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_593AB1E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_GameObjectExtensions_RemoveComponent_Collider___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__0__);
    sub_21FFC50(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__1__);
    sub_21FFC50(&TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_TypeInfo);
    sub_21FFC50(&StringLiteral_14130/*"TUTORIAL_MESSAGE_TERMINAL_QUEST2"*/);
    byte_593AB1E = 1;
  }
  v4 = sub_21FFEBC(TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_22;
  *(_QWORD *)(v4 + 16) = that;
  v13 = (TerminalSceneComponent_o **)(v4 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_22;
  mFG = *(TerminalSceneComponent_o **)(*(_QWORD *)(v4 + 16) + 256LL);
  if ( !mFG )
    goto LABEL_22;
  FocusQuest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mFG, 0);
  *(_QWORD *)(v4 + 24) = FocusQuest;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 24), (int32_t)FocusQuest, v15, v16, v17, v18, v19, v20);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
  mFG = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14130/*"TUTORIAL_MESSAGE_TERMINAL_QUEST2"*/, 0);
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
  v26 = (System_String_o *)mFG;
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mFG;
  if ( !mFG )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0);
  GameObjectExtensions__RemoveComponent_object_(
    gameObject,
    (const MethodInfo_3885164 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mBG;
  if ( !mFG )
    goto LABEL_22;
  v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0);
  GameObjectExtensions__RemoveComponent_object_(
    v28,
    (const MethodInfo_3885164 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v13 )
    goto LABEL_22;
  v29 = (CommonUI_o *)mFG;
  TUTORIAL_QUEST_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(*v13, 0);
  mFG = *v13;
  if ( !*v13 )
    goto LABEL_22;
  TUTORIAL_QUEST_ARROW_RECT_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(mFG, 0);
  v31 = *v13;
  if ( !*v13 )
    goto LABEL_22;
  m_XMin = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_XMin;
  m_YMin = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_YMin;
  x = v31->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x;
  y = v31->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.y;
  m_Width = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_Width;
  m_Height = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_Height;
  v38 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__0__,
    0);
  if ( !v29 )
    goto LABEL_22;
  v48.fields.m_XMin = m_XMin;
  v48.fields.m_YMin = m_YMin;
  v48.fields.m_Width = m_Width;
  v48.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v29,
    v26,
    TUTORIAL_QUEST_ARROW_POS_FS,
    v48,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v38,
    0);
  if ( !*v13
    || (v39 = (*v13)->fields.mTerminalList,
        v40 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v40,
          (Il2CppObject *)v4,
          Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0),
        !v39) )
  {
LABEL_22:
    sub_21FFECC(mFG, v6);
  }
  v39->fields.mQuestClickAct = v40;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v39->fields.mQuestClickAct,
    (int32_t)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
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
  if ( (byte_593AB1F & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
    byte_593AB1F = 1;
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
                                                                                            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0 )
  {
LABEL_12:
    sub_21FFECC(this, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
}


void TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20
  System_Action_o *_9__2; // x22
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_593AB20 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__2__);
    byte_593AB20 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !v5 )
    sub_21FFECC(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_37315056(v5, _9__2, 0);
}


void TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_21FFECC(0, method);
  TerminalSceneComponent__SetState(that, 0, 0);
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
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  SrcSpotBasePrefab_o *FocusSpot; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  System_String_o *v22; // x21
  Il2CppObject *Instance; // x22
  UnityEngine_Vector2_o TUTORIAL_SPOT_ARROW_POS2_FS; // kr00_8
  float x; // s14
  float y; // s15
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v31; // x23
  struct ScrTerminalMap_o *v32; // x21
  System_Action_o *v33; // x19
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  UnityEngine_Rect_o TUTORIAL_SPOT_ARROW_RECT2_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v41; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_593AB1C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__0__);
    sub_21FFC50(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__1__);
    sub_21FFC50(&TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_TypeInfo);
    sub_21FFC50(&StringLiteral_14133/*"TUTORIAL_MESSAGE_TERMINAL_SPOT2"*/);
    byte_593AB1C = 1;
  }
  v5 = sub_21FFEBC(TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_12;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_12;
  FocusSpot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0);
  *(_QWORD *)(v5 + 16) = FocusSpot;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)FocusSpot, v15, v16, v17, v18, v19, v20);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_14133/*"TUTORIAL_MESSAGE_TERMINAL_SPOT2"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  TUTORIAL_SPOT_ARROW_POS2_FS = TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_POS2_FS(that, 0);
  TUTORIAL_SPOT_ARROW_RECT2_FS = TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_RECT2_FS(that, 0);
  x = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x;
  y = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.y;
  m_XMin = TUTORIAL_SPOT_ARROW_RECT2_FS.fields.m_XMin;
  m_YMin = TUTORIAL_SPOT_ARROW_RECT2_FS.fields.m_YMin;
  m_Width = TUTORIAL_SPOT_ARROW_RECT2_FS.fields.m_Width;
  m_Height = TUTORIAL_SPOT_ARROW_RECT2_FS.fields.m_Height;
  v31 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__0__,
    0);
  if ( !Instance )
    goto LABEL_12;
  v41.fields.m_XMin = m_XMin;
  v41.fields.m_YMin = m_YMin;
  v41.fields.m_Width = m_Width;
  v41.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    (CommonUI_o *)Instance,
    v22,
    TUTORIAL_SPOT_ARROW_POS2_FS,
    v41,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v31,
    0);
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__SetMapCamera_TutorialFocusSpot(mTerminalMap, *(SrcSpotBasePrefab_o **)(v5 + 16), 0.5, 0),
        v32 = that->fields.mTerminalMap,
        v33 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v33,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0),
        !v32) )
  {
LABEL_12:
    sub_21FFECC(mTerminalMap, v7);
  }
  v32->fields.mSpotClickAct = v33;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v32->fields.mSpotClickAct,
    (int32_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
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
      sub_21FFECC(this, that);
    }
    if ( mQuestBoardListViewManager->fields.initMode == 1 )
      TerminalSceneComponent__SetState(that, 4, 0);
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
    sub_21FFECC(0, method);
  SrcSpotBasePrefab__SetBtnColliderEnable(focus_spot, 1, 0);
}


void TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0___begin_b__1(
        TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20
  System_Action_o *_9__2; // x22
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_593AB1D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__2__);
    byte_593AB1D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !v5 )
    sub_21FFECC(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_37315056(v5, _9__2, 0);
}


void TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial2_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(this, method);
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
  TerminalSceneComponent_o *Instance; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  TerminalSceneComponent_o **v13; // x22
  __int64 v14; // x1
  System_String_o *v15; // x20
  CommonUI_o *v16; // x21
  UnityEngine_Vector2_o TUTORIAL_GACHA_ARROW_POS_FS; // kr00_8
  TerminalSceneComponent_o *v18; // x8
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  float x; // s14
  float y; // s15
  struct TerminalSceneComponent_StateTutorial3_GachaArrow___c_StaticFields *TUTORIAL_MENU_ARROW_POS2; // x8
  System_Action_o *_9__0_0; // x22
  Il2CppObject *v27; // x23
  struct TerminalSceneComponent_StateTutorial3_GachaArrow___c_StaticFields *static_fields; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_Action_o *v35; // x20
  UnityEngine_Rect_o TUTORIAL_GACHA_ARROW_RECT_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v37; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_593AB24 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__begin_b__0_0__);
    sub_21FFC50(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__1__);
    sub_21FFC50(&TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo);
    sub_21FFC50(&StringLiteral_14127/*"TUTORIAL_MESSAGE_TERMINAL_GACHA"*/);
    byte_593AB24 = 1;
  }
  v4 = sub_21FFEBC(TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_17;
  *(_QWORD *)(v4 + 16) = that;
  v13 = (TerminalSceneComponent_o **)(v4 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_14127/*"TUTORIAL_MESSAGE_TERMINAL_GACHA"*/, 0);
  Instance = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v13 )
    goto LABEL_17;
  v16 = (CommonUI_o *)Instance;
  TUTORIAL_GACHA_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_GACHA_ARROW_POS_FS(*v13, 0);
  Instance = *v13;
  if ( !*v13 )
    goto LABEL_17;
  TUTORIAL_GACHA_ARROW_RECT_FS = TerminalSceneComponent__get_TUTORIAL_GACHA_ARROW_RECT_FS(Instance, 0);
  v18 = *v13;
  if ( !*v13 )
    goto LABEL_17;
  m_XMin = TUTORIAL_GACHA_ARROW_RECT_FS.fields.m_XMin;
  m_YMin = TUTORIAL_GACHA_ARROW_RECT_FS.fields.m_YMin;
  m_Width = TUTORIAL_GACHA_ARROW_RECT_FS.fields.m_Width;
  m_Height = TUTORIAL_GACHA_ARROW_RECT_FS.fields.m_Height;
  x = v18->fields.TUTORIAL_MENU_MESSAGE_POS.fields.x;
  y = v18->fields.TUTORIAL_MENU_MESSAGE_POS.fields.y;
  Instance = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo;
  if ( !*(&TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo, v6);
    Instance = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo;
  }
  TUTORIAL_MENU_ARROW_POS2 = (struct TerminalSceneComponent_StateTutorial3_GachaArrow___c_StaticFields *)Instance->fields.TUTORIAL_MENU_ARROW_POS2;
  _9__0_0 = TUTORIAL_MENU_ARROW_POS2->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !HIDWORD(Instance->fields.OnResumeFromChapterStart) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v6);
      TUTORIAL_MENU_ARROW_POS2 = TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)TUTORIAL_MENU_ARROW_POS2->__9;
    _9__0_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__0_0, v27, Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__begin_b__0_0__, 0);
    static_fields = TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = _9__0_0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&static_fields->__9__0_0,
      (int32_t)_9__0_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  if ( !v16 )
LABEL_17:
    sub_21FFECC(Instance, v6);
  v37.fields.m_XMin = m_XMin;
  v37.fields.m_YMin = m_YMin;
  v37.fields.m_Width = m_Width;
  v37.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v16,
    v15,
    TUTORIAL_GACHA_ARROW_POS_FS,
    v37,
    0.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    _9__0_0,
    0);
  v35 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__1__,
    0);
  MainMenuBar__SetDispBtnAct(2, v35, 0);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593AB25 & 1) == 0 )
  {
    sub_21FFC50(&TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo);
    byte_593AB25 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial3_GachaArrow___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20
  System_Action_o *_9__2; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_593AB26 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&TutorialFlag_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__2__);
    byte_593AB26 = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 9, 0);
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v3);
  TutorialFlag__SetProgress(1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9, v10, v11, v12, v13);
  }
  if ( !v6 )
    sub_21FFECC(Instance, v5);
  CommonUI__CloseTutorialNotificationDialogArrow_37315056(v6, _9__2, 0);
}


void TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_21FFECC(0, method);
  TerminalSceneComponent__SetState(that, 0, 0);
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
  TerminalSceneComponent_o *Instance; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  TerminalSceneComponent_o **v13; // x22
  __int64 v14; // x1
  System_String_o *v15; // x20
  CommonUI_o *v16; // x21
  UnityEngine_Vector2_o TUTORIAL_MENU_ARROW_POS_FS; // kr00_8
  TerminalSceneComponent_o *v18; // x8
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  float x; // s14
  float y; // s15
  struct TerminalSceneComponent_StateTutorial3_MenuArrow___c_StaticFields *TUTORIAL_MENU_ARROW_POS2; // x8
  System_Action_o *_9__0_0; // x22
  Il2CppObject *v27; // x23
  struct TerminalSceneComponent_StateTutorial3_MenuArrow___c_StaticFields *static_fields; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_Action_o *v35; // x20
  UnityEngine_Rect_o TUTORIAL_MENU_ARROW_RECT_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v37; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_593AB21 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__begin_b__0_0__);
    sub_21FFC50(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__1__);
    sub_21FFC50(&TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo);
    sub_21FFC50(&StringLiteral_14128/*"TUTORIAL_MESSAGE_TERMINAL_MENU"*/);
    byte_593AB21 = 1;
  }
  v4 = sub_21FFEBC(TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_17;
  *(_QWORD *)(v4 + 16) = that;
  v13 = (TerminalSceneComponent_o **)(v4 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_14128/*"TUTORIAL_MESSAGE_TERMINAL_MENU"*/, 0);
  Instance = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v13 )
    goto LABEL_17;
  v16 = (CommonUI_o *)Instance;
  TUTORIAL_MENU_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_POS_FS(*v13, 0);
  Instance = *v13;
  if ( !*v13 )
    goto LABEL_17;
  TUTORIAL_MENU_ARROW_RECT_FS = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_RECT_FS(Instance, 0);
  v18 = *v13;
  if ( !*v13 )
    goto LABEL_17;
  m_XMin = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_XMin;
  m_YMin = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_YMin;
  m_Width = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_Width;
  m_Height = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_Height;
  x = v18->fields.TUTORIAL_MENU_MESSAGE_POS.fields.x;
  y = v18->fields.TUTORIAL_MENU_MESSAGE_POS.fields.y;
  Instance = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo;
  if ( !*(&TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo, v6);
    Instance = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo;
  }
  TUTORIAL_MENU_ARROW_POS2 = (struct TerminalSceneComponent_StateTutorial3_MenuArrow___c_StaticFields *)Instance->fields.TUTORIAL_MENU_ARROW_POS2;
  _9__0_0 = TUTORIAL_MENU_ARROW_POS2->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !HIDWORD(Instance->fields.OnResumeFromChapterStart) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v6);
      TUTORIAL_MENU_ARROW_POS2 = TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)TUTORIAL_MENU_ARROW_POS2->__9;
    _9__0_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__0_0, v27, Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__begin_b__0_0__, 0);
    static_fields = TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = _9__0_0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&static_fields->__9__0_0,
      (int32_t)_9__0_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  if ( !v16 )
LABEL_17:
    sub_21FFECC(Instance, v6);
  v37.fields.m_XMin = m_XMin;
  v37.fields.m_YMin = m_YMin;
  v37.fields.m_Width = m_Width;
  v37.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v16,
    v15,
    TUTORIAL_MENU_ARROW_POS_FS,
    v37,
    0.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    _9__0_0,
    0);
  v35 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__1__,
    0);
  MainMenuBar__SetMenuBtnAct(v35, 0);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593AB22 & 1) == 0 )
  {
    sub_21FFC50(&TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo);
    byte_593AB22 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial3_MenuArrow___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  MainMenuBar__SetDispBtnColliderEnable(0, 9, 0);
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
  __int64 v4; // x1
  CommonUI_o *v5; // x20
  System_Action_o *_9__2; // x22
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_593AB23 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__2__);
    byte_593AB23 = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !v5 )
    sub_21FFECC(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_37315056(v5, _9__2, 0);
}


void TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_21FFECC(0, method);
  TerminalSceneComponent__SetState(that, 6, 0);
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
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  TerminalSceneComponent_o **v13; // x20
  QuestBoardListViewObject_o *FocusQuest; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8
  struct UIScrollView_o *scrollView; // x8
  struct UIProgressBar_o *verticalScrollBar; // x23
  System_String_o *v26; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v28; // x0
  CommonUI_o *v29; // x22
  UnityEngine_Vector2_o TUTORIAL_QUEST_ARROW_POS_FS; // kr00_8
  TerminalSceneComponent_o *v31; // x8
  float m_XMin; // s10
  float m_YMin; // s11
  float x; // s14
  float y; // s15
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v38; // x23
  struct ScrTerminalListTop_o *v39; // x21
  System_Action_o *v40; // x20
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  UnityEngine_Rect_o TUTORIAL_QUEST_ARROW_RECT_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v48; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_593AB29 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_GameObjectExtensions_RemoveComponent_Collider___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__0__);
    sub_21FFC50(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__1__);
    sub_21FFC50(&TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_TypeInfo);
    sub_21FFC50(&StringLiteral_14131/*"TUTORIAL_MESSAGE_TERMINAL_QUEST3"*/);
    byte_593AB29 = 1;
  }
  v4 = sub_21FFEBC(TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_22;
  *(_QWORD *)(v4 + 16) = that;
  v13 = (TerminalSceneComponent_o **)(v4 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_22;
  mFG = *(TerminalSceneComponent_o **)(*(_QWORD *)(v4 + 16) + 256LL);
  if ( !mFG )
    goto LABEL_22;
  FocusQuest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mFG, 0);
  *(_QWORD *)(v4 + 24) = FocusQuest;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 24), (int32_t)FocusQuest, v15, v16, v17, v18, v19, v20);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
  mFG = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14131/*"TUTORIAL_MESSAGE_TERMINAL_QUEST3"*/, 0);
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
  v26 = (System_String_o *)mFG;
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mFG;
  if ( !mFG )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0);
  GameObjectExtensions__RemoveComponent_object_(
    gameObject,
    (const MethodInfo_3885164 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mBG;
  if ( !mFG )
    goto LABEL_22;
  v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0);
  GameObjectExtensions__RemoveComponent_object_(
    v28,
    (const MethodInfo_3885164 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v13 )
    goto LABEL_22;
  v29 = (CommonUI_o *)mFG;
  TUTORIAL_QUEST_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(*v13, 0);
  mFG = *v13;
  if ( !*v13 )
    goto LABEL_22;
  TUTORIAL_QUEST_ARROW_RECT_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(mFG, 0);
  v31 = *v13;
  if ( !*v13 )
    goto LABEL_22;
  m_XMin = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_XMin;
  m_YMin = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_YMin;
  x = v31->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x;
  y = v31->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.y;
  m_Width = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_Width;
  m_Height = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_Height;
  v38 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__0__,
    0);
  if ( !v29 )
    goto LABEL_22;
  v48.fields.m_XMin = m_XMin;
  v48.fields.m_YMin = m_YMin;
  v48.fields.m_Width = m_Width;
  v48.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v29,
    v26,
    TUTORIAL_QUEST_ARROW_POS_FS,
    v48,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v38,
    0);
  if ( !*v13
    || (v39 = (*v13)->fields.mTerminalList,
        v40 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v40,
          (Il2CppObject *)v4,
          Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0),
        !v39) )
  {
LABEL_22:
    sub_21FFECC(mFG, v6);
  }
  v39->fields.mQuestClickAct = v40;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v39->fields.mQuestClickAct,
    (int32_t)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
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
  if ( (byte_593AB2A & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
    byte_593AB2A = 1;
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
                                                                                            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0 )
  {
LABEL_12:
    sub_21FFECC(this, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
}


void TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20
  System_Action_o *_9__2; // x22
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_593AB2B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__2__);
    byte_593AB2B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !v5 )
    sub_21FFECC(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_37315056(v5, _9__2, 0);
}


void TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_21FFECC(0, method);
  TerminalSceneComponent__SetState(that, 0, 0);
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
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  SrcSpotBasePrefab_o *FocusSpot; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  Il2CppObject *Instance; // x21
  UnityEngine_Vector2_o TUTORIAL_SPOT_ARROW_POS4_FS; // kr00_8
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v27; // x22
  struct ScrTerminalMap_o *v28; // x21
  System_Action_o *v29; // x19
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  UnityEngine_Rect_o TUTORIAL_SPOT_ARROW_RECT4_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v37; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_593AB27 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__0__);
    sub_21FFC50(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__1__);
    sub_21FFC50(&TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_TypeInfo);
    byte_593AB27 = 1;
  }
  v5 = sub_21FFEBC(TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_10;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_10;
  FocusSpot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0);
  *(_QWORD *)(v5 + 16) = FocusSpot;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)FocusSpot, v15, v16, v17, v18, v19, v20);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  TUTORIAL_SPOT_ARROW_POS4_FS = TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_POS4_FS(that, 0);
  TUTORIAL_SPOT_ARROW_RECT4_FS = TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_RECT4_FS(that, 0);
  m_XMin = TUTORIAL_SPOT_ARROW_RECT4_FS.fields.m_XMin;
  m_YMin = TUTORIAL_SPOT_ARROW_RECT4_FS.fields.m_YMin;
  m_Width = TUTORIAL_SPOT_ARROW_RECT4_FS.fields.m_Width;
  m_Height = TUTORIAL_SPOT_ARROW_RECT4_FS.fields.m_Height;
  v27 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__0__,
    0);
  if ( !Instance )
    goto LABEL_10;
  v37.fields.m_XMin = m_XMin;
  v37.fields.m_YMin = m_YMin;
  v37.fields.m_Width = m_Width;
  v37.fields.m_Height = m_Height;
  CommonUI__OpenTutorialArrowMark((CommonUI_o *)Instance, TUTORIAL_SPOT_ARROW_POS4_FS, 90.0, v37, v27, 0);
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__SetMapCamera_TutorialFocusSpot(mTerminalMap, *(SrcSpotBasePrefab_o **)(v5 + 16), 0.5, 0),
        v28 = that->fields.mTerminalMap,
        v29 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v29,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0),
        !v28) )
  {
LABEL_10:
    sub_21FFECC(mTerminalMap, v7);
  }
  v28->fields.mSpotClickAct = v29;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v28->fields.mSpotClickAct,
    (int32_t)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
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
      sub_21FFECC(this, that);
    }
    if ( mQuestBoardListViewManager->fields.initMode == 1 )
      TerminalSceneComponent__SetState(that, 8, 0);
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
    sub_21FFECC(0, method);
  SrcSpotBasePrefab__SetBtnColliderEnable(focus_spot, 1, 0);
}


void TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0___begin_b__1(
        TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20
  System_Action_o *_9__2; // x22
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_593AB28 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__2__);
    byte_593AB28 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !v5 )
    sub_21FFECC(Instance, v4);
  CommonUI__CloseTutorialArrowMark(v5, _9__2, 0);
}


void TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial4_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(this, method);
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
  TerminalSceneComponent_o *Instance; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  TerminalSceneComponent_o **v13; // x21
  CommonUI_o *v14; // x20
  UnityEngine_Vector2_o TUTORIAL_COMBINE_ARROW_POS_FS; // kr00_8
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  struct TerminalSceneComponent_StateTutorial5_CombineArrow___c_StaticFields *TUTORIAL_MENU_ARROW_POS2; // x8
  System_Action_o *_9__0_0; // x21
  Il2CppObject *v22; // x22
  struct TerminalSceneComponent_StateTutorial5_CombineArrow___c_StaticFields *static_fields; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_Action_o *v30; // x20
  UnityEngine_Rect_o TUTORIAL_COMBINE_ARROW_RECT_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v32; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_593AB2F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__begin_b__0_0__);
    sub_21FFC50(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__1__);
    sub_21FFC50(&TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo);
    byte_593AB2F = 1;
  }
  v4 = sub_21FFEBC(TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_14;
  *(_QWORD *)(v4 + 16) = that;
  v13 = (TerminalSceneComponent_o **)(v4 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  Instance = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_14;
  v14 = (CommonUI_o *)Instance;
  TUTORIAL_COMBINE_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_COMBINE_ARROW_POS_FS(*v13, 0);
  Instance = *v13;
  if ( !*v13 )
    goto LABEL_14;
  TUTORIAL_COMBINE_ARROW_RECT_FS = TerminalSceneComponent__get_TUTORIAL_COMBINE_ARROW_RECT_FS(Instance, 0);
  m_XMin = TUTORIAL_COMBINE_ARROW_RECT_FS.fields.m_XMin;
  m_YMin = TUTORIAL_COMBINE_ARROW_RECT_FS.fields.m_YMin;
  Instance = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo;
  m_Width = TUTORIAL_COMBINE_ARROW_RECT_FS.fields.m_Width;
  m_Height = TUTORIAL_COMBINE_ARROW_RECT_FS.fields.m_Height;
  if ( !*(&TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo, v6);
    Instance = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo;
  }
  TUTORIAL_MENU_ARROW_POS2 = (struct TerminalSceneComponent_StateTutorial5_CombineArrow___c_StaticFields *)Instance->fields.TUTORIAL_MENU_ARROW_POS2;
  _9__0_0 = TUTORIAL_MENU_ARROW_POS2->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !HIDWORD(Instance->fields.OnResumeFromChapterStart) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v6);
      TUTORIAL_MENU_ARROW_POS2 = TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)TUTORIAL_MENU_ARROW_POS2->__9;
    _9__0_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__0_0, v22, Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__begin_b__0_0__, 0);
    static_fields = TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = _9__0_0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&static_fields->__9__0_0,
      (int32_t)_9__0_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  if ( !v14 )
LABEL_14:
    sub_21FFECC(Instance, v6);
  v32.fields.m_XMin = m_XMin;
  v32.fields.m_YMin = m_YMin;
  v32.fields.m_Width = m_Width;
  v32.fields.m_Height = m_Height;
  CommonUI__OpenTutorialArrowMark(v14, TUTORIAL_COMBINE_ARROW_POS_FS, 0.0, v32, _9__0_0, 0);
  v30 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__1__,
    0);
  MainMenuBar__SetDispBtnAct(4, v30, 0);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593AB30 & 1) == 0 )
  {
    sub_21FFC50(&TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo);
    byte_593AB30 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial5_CombineArrow___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  MainMenuBar__SetDispBtnColliderEnable(1, 4, 0);
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
  __int64 v4; // x1
  CommonUI_o *v5; // x20
  System_Action_o *_9__2; // x22
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_593AB31 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__2__);
    byte_593AB31 = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 9, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !v5 )
    sub_21FFECC(Instance, v4);
  CommonUI__CloseTutorialArrowMark(v5, _9__2, 0);
}


void TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0
  struct TerminalSceneComponent_o *v4; // x8
  struct TerminalSceneComponent_o *v5; // x8

  that = this->fields.that;
  if ( !that
    || (TerminalSceneComponent__SetState(that, 0, 0), (v4 = this->fields.that) == 0)
    || (that = (TerminalSceneComponent_o *)v4->fields.mTitleInfo) == 0
    || (TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)that, 1, 0), (v5 = this->fields.that) == 0)
    || (that = (TerminalSceneComponent_o *)v5->fields.mPlayerStatus) == 0 )
  {
    sub_21FFECC(that, method);
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
  System_String_o *v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  TerminalSceneComponent_o **v13; // x22
  __int64 v14; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v16; // x21
  UnityEngine_Vector2_o TUTORIAL_MENU_ARROW_POS2_FS; // kr00_8
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  struct TerminalSceneComponent_StateTutorial5_MenuArrow___c_StaticFields *fields; // x8
  System_Action_o *_9__0_0; // x22
  Il2CppObject *v24; // x23
  struct TerminalSceneComponent_StateTutorial5_MenuArrow___c_StaticFields *static_fields; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Action_o *v32; // x20
  UnityEngine_Rect_o TUTORIAL_MENU_ARROW_RECT_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v34; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_593AB2C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__begin_b__0_0__);
    sub_21FFC50(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__1__);
    sub_21FFC50(&TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo);
    sub_21FFC50(&StringLiteral_14109/*"TUTORIAL_MESSAGE_COMBINE1"*/);
    byte_593AB2C = 1;
  }
  v4 = sub_21FFEBC(TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_16;
  *(_QWORD *)(v4 + 16) = that;
  v13 = (TerminalSceneComponent_o **)(v4 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_14109/*"TUTORIAL_MESSAGE_COMBINE1"*/, 0);
  if ( !*v13 )
    goto LABEL_16;
  v16 = v5;
  TUTORIAL_MENU_ARROW_POS2_FS = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_POS2_FS(*v13, 0);
  v5 = (System_String_o *)*v13;
  if ( !*v13 )
    goto LABEL_16;
  TUTORIAL_MENU_ARROW_RECT_FS = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_RECT_FS(
                                  (TerminalSceneComponent_o *)v5,
                                  0);
  m_XMin = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_XMin;
  m_YMin = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_YMin;
  v5 = (System_String_o *)TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo;
  m_Width = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_Width;
  m_Height = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_Height;
  if ( !*(&TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo, v6);
    v5 = (System_String_o *)TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo;
  }
  fields = (struct TerminalSceneComponent_StateTutorial5_MenuArrow___c_StaticFields *)v5[7].fields;
  _9__0_0 = fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !HIDWORD(v5[9].monitor) )
    {
      j_il2cpp_runtime_class_init_0(v5, v6);
      fields = TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)fields->__9;
    _9__0_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__0_0, v24, Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__begin_b__0_0__, 0);
    static_fields = TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = _9__0_0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&static_fields->__9__0_0,
      (int32_t)_9__0_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  if ( !Instance )
LABEL_16:
    sub_21FFECC(v5, v6);
  v34.fields.m_XMin = m_XMin;
  v34.fields.m_YMin = m_YMin;
  v34.fields.m_Width = m_Width;
  v34.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    (CommonUI_o *)Instance,
    v16,
    TUTORIAL_MENU_ARROW_POS2_FS,
    v34,
    0.0,
    (UnityEngine_Vector2_o)0xC224000000000000LL,
    -1,
    _9__0_0,
    0);
  v32 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__1__,
    0);
  MainMenuBar__SetMenuBtnAct(v32, 0);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593AB2D & 1) == 0 )
  {
    sub_21FFC50(&TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo);
    byte_593AB2D = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial5_MenuArrow___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  MainMenuBar__SetDispBtnColliderEnable(0, 9, 0);
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
  __int64 v4; // x1
  CommonUI_o *v5; // x20
  System_Action_o *_9__2; // x22
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_593AB2E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__2__);
    byte_593AB2E = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0);
  MainMenuBar__SetDispBtnColliderEnable(0, 9, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !v5 )
    sub_21FFECC(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_37315056(v5, _9__2, 0);
}


void TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_21FFECC(0, method);
  TerminalSceneComponent__SetState(that, 10, 0);
}


void TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__284___ctor(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__284_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__284__MoveNext(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__284_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w22
  ChainableActionBase_o *openCampaignDirectBonus; // x0
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v6; // x21
  UnityEngine_WaitUntil_o *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_593AB5C & 1) == 0 )
  {
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent__CoWaitBlankEarthActionEnd_b__284_0__);
    sub_21FFC50(&UnityEngine_WaitUntil_TypeInfo);
    byte_593AB5C = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      openCampaignDirectBonus = (ChainableActionBase_o *)this->fields.openCampaignDirectBonus;
      this->fields.__1__state = -1;
      if ( !openCampaignDirectBonus )
        sub_21FFECC(0, method);
      ChainableActionBase__Execute(openCampaignDirectBonus, 0);
    }
  }
  else
  {
    _4__this = (Il2CppObject *)this->fields.__4__this;
    this->fields.__1__state = -1;
    v6 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v6, _4__this, Method_TerminalSceneComponent__CoWaitBlankEarthActionEnd_b__284_0__, 0);
    v7 = (UnityEngine_WaitUntil_o *)sub_21FFEBC(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v7, v6, 0);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, (int32_t)v7, v8, v9, v10, v11, v12, v13);
    this->fields.__1__state = 1;
  }
  return _1__state == 0;
}


Il2CppObject *TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__284__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__284_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__284__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__284_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__284_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__284__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__284_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__284__System_IDisposable_Dispose(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__284_o *this,
        const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__283___ctor(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__283_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__283__MoveNext(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__283_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w22
  ChainableActionBase_o *openCampaignDirectBonus; // x0
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v6; // x21
  UnityEngine_WaitUntil_o *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_593AB5D & 1) == 0 )
  {
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_b__283_0__);
    sub_21FFC50(&UnityEngine_WaitUntil_TypeInfo);
    byte_593AB5D = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      openCampaignDirectBonus = (ChainableActionBase_o *)this->fields.openCampaignDirectBonus;
      this->fields.__1__state = -1;
      if ( !openCampaignDirectBonus )
        sub_21FFECC(0, method);
      ChainableActionBase__Execute(openCampaignDirectBonus, 0);
    }
  }
  else
  {
    _4__this = (Il2CppObject *)this->fields.__4__this;
    this->fields.__1__state = -1;
    v6 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v6, _4__this, Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_b__283_0__, 0);
    v7 = (UnityEngine_WaitUntil_o *)sub_21FFEBC(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v7, v6, 0);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, (int32_t)v7, v8, v9, v10, v11, v12, v13);
    this->fields.__1__state = 1;
  }
  return _1__state == 0;
}


Il2CppObject *TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__283__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__283_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__283__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__283_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__283_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__283__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__283_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__283__System_IDisposable_Dispose(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__283_o *this,
        const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent__LoadAsync_d__199___ctor(
        TerminalSceneComponent__LoadAsync_d__199_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool TerminalSceneComponent__LoadAsync_d__199__MoveNext(
        TerminalSceneComponent__LoadAsync_d__199_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent__LoadAsync_d__199_o *v2; // x19
  int32_t _1__state; // w24
  struct System_Action_o *callback; // x8
  TerminalSceneComponent_o *_4__this; // x21
  __int64 v6; // x20
  System_Action_c *v7; // x0
  UserServantEntity_o *usd; // x22
  System_Action_o *v9; // x23
  System_Action_c *v10; // x0
  System_Action_o *v11; // x22
  __int64 v12; // x1
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x8
  struct TerminalTransitionInfo_o *v14; // x8
  SoundManager_o *v15; // x21
  System_String_o *voiceAssetName; // x22
  System_Action_o *v17; // x23
  System_Action_o *v18; // x21
  __int64 v19; // x1
  System_Action_o *v20; // x21
  System_Action_o *v21; // x21
  System_Action_o *v22; // x21
  System_Action_o *v23; // x21
  System_Action_o *v24; // x21
  System_Action_o *v25; // x21
  System_Action_o *v26; // x21
  System_Action_o *v27; // x21
  System_Action_o *v28; // x21
  System_Func_bool__o *v29; // x21
  UnityEngine_WaitUntil_o *v30; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7

  v2 = this;
  if ( (byte_593AB5E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass199_0__LoadAsync_b__0__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass199_0__LoadAsync_b__10__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass199_0__LoadAsync_b__11__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass199_0__LoadAsync_b__12__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass199_0__LoadAsync_b__13__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass199_0__LoadAsync_b__1__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass199_0__LoadAsync_b__2__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass199_0__LoadAsync_b__3__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass199_0__LoadAsync_b__4__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass199_0__LoadAsync_b__5__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass199_0__LoadAsync_b__6__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass199_0__LoadAsync_b__7__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass199_0__LoadAsync_b__8__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass199_0__LoadAsync_b__9__);
    sub_21FFC50(&TerminalSceneComponent___c__DisplayClass199_0_TypeInfo);
    this = (TerminalSceneComponent__LoadAsync_d__199_o *)sub_21FFC50(&UnityEngine_WaitUntil_TypeInfo);
    byte_593AB5E = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      callback = v2->fields.callback;
      v2->fields.__1__state = -1;
      if ( callback )
      {
        ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
          callback->fields.method_code,
          callback->fields.method);
        return _1__state == 0;
      }
LABEL_23:
      sub_21FFECC(this, method);
    }
  }
  else
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    v6 = sub_21FFEBC(TerminalSceneComponent___c__DisplayClass199_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    if ( !v6 )
      goto LABEL_23;
    *(_QWORD *)(v6 + 19) = 0;
    *(_WORD *)(v6 + 16) = 256;
    *(_WORD *)(v6 + 27) = 256;
    v7 = System_Action_TypeInfo;
    usd = v2->fields.usd;
    *(_BYTE *)(v6 + 18) = 1;
    v9 = (System_Action_o *)sub_21FFEBC(v7);
    System_Action___ctor(
      v9,
      (Il2CppObject *)v6,
      Method_TerminalSceneComponent___c__DisplayClass199_0__LoadAsync_b__0__,
      0);
    if ( !_4__this )
      goto LABEL_23;
    TerminalSceneComponent__SetupStandServant(_4__this, usd, 0, v9, 0);
    this = (TerminalSceneComponent__LoadAsync_d__199_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !this )
      goto LABEL_23;
    if ( !AtlasManager__isLoadedSkinData((AtlasManager_o *)this, 4, 0) )
    {
      v10 = System_Action_TypeInfo;
      *(_BYTE *)(v6 + 17) = 0;
      v11 = (System_Action_o *)sub_21FFEBC(v10);
      System_Action___ctor(
        v11,
        (Il2CppObject *)v6,
        Method_TerminalSceneComponent___c__DisplayClass199_0__LoadAsync_b__1__,
        0);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
      AtlasManager__LoadUISkin(v11, 4, 11, 0);
    }
    TransitionInfo_k__BackingField = _4__this->fields._TransitionInfo_k__BackingField;
    if ( TransitionInfo_k__BackingField
      && !System_String__IsNullOrEmpty(TransitionInfo_k__BackingField->fields.voiceAssetName, 0) )
    {
      *(_BYTE *)(v6 + 18) = 0;
      this = (TerminalSceneComponent__LoadAsync_d__199_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      v14 = _4__this->fields._TransitionInfo_k__BackingField;
      if ( !v14 )
        goto LABEL_23;
      v15 = (SoundManager_o *)this;
      voiceAssetName = v14->fields.voiceAssetName;
      v17 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        v17,
        (Il2CppObject *)v6,
        Method_TerminalSceneComponent___c__DisplayClass199_0__LoadAsync_b__2__,
        0);
      if ( !v15 )
        goto LABEL_23;
      SoundManager__LoadAudioAssetStorage(v15, voiceAssetName, v17, 1, 0);
    }
    v18 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v18,
      (Il2CppObject *)v6,
      Method_TerminalSceneComponent___c__DisplayClass199_0__LoadAsync_b__3__,
      0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v19);
    AtlasManager__LoadBanner(v18, 11, 0);
    v20 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v20,
      (Il2CppObject *)v6,
      Method_TerminalSceneComponent___c__DisplayClass199_0__LoadAsync_b__4__,
      0);
    AtlasManager__LoadFaceAtlas(v20, 11, 0);
    v21 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v21,
      (Il2CppObject *)v6,
      Method_TerminalSceneComponent___c__DisplayClass199_0__LoadAsync_b__5__,
      0);
    AtlasManager__LoadEquipFace(v21, 11, 0);
    v22 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v22,
      (Il2CppObject *)v6,
      Method_TerminalSceneComponent___c__DisplayClass199_0__LoadAsync_b__6__,
      0);
    AtlasManager__LoadFriendshipExceed(v22, 11, 0);
    v23 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v23,
      (Il2CppObject *)v6,
      Method_TerminalSceneComponent___c__DisplayClass199_0__LoadAsync_b__7__,
      0);
    AtlasManager__LoadCommandCode(v23, 11, 0);
    v24 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v24,
      (Il2CppObject *)v6,
      Method_TerminalSceneComponent___c__DisplayClass199_0__LoadAsync_b__8__,
      0);
    AtlasManager__LoadCommandCodeMini(v24, 11, 0);
    v25 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v25,
      (Il2CppObject *)v6,
      Method_TerminalSceneComponent___c__DisplayClass199_0__LoadAsync_b__9__,
      0);
    AtlasManager__LoadEventAtlas(v25, 11, 0);
    v26 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v26,
      (Il2CppObject *)v6,
      Method_TerminalSceneComponent___c__DisplayClass199_0__LoadAsync_b__10__,
      0);
    AtlasManager__LoadEventUI(v26, 11, 0);
    v27 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v27,
      (Il2CppObject *)v6,
      Method_TerminalSceneComponent___c__DisplayClass199_0__LoadAsync_b__11__,
      0);
    AtlasManager__LoadCharaGraphOptionAtlas(v27, 11, 0);
    v28 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v28,
      (Il2CppObject *)v6,
      Method_TerminalSceneComponent___c__DisplayClass199_0__LoadAsync_b__12__,
      0);
    AtlasManager__LoadPartyOrganizationAtlas(v28, 11, 0);
    v29 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v29,
      (Il2CppObject *)v6,
      Method_TerminalSceneComponent___c__DisplayClass199_0__LoadAsync_b__13__,
      0);
    v30 = (UnityEngine_WaitUntil_o *)sub_21FFEBC(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v30, v29, 0);
    v2->fields.__2__current = (Il2CppObject *)v30;
    p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
    sub_21FFBF4(p__2__current, (int32_t)v30, v32, v33, v34, v35, v36, v37);
    p__2__current[-1].fields._BoardType_k__BackingField = 1;
  }
  return _1__state == 0;
}


Il2CppObject *TerminalSceneComponent__LoadAsync_d__199__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__LoadAsync_d__199_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TerminalSceneComponent__LoadAsync_d__199__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__LoadAsync_d__199_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_TerminalSceneComponent__LoadAsync_d__199_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *TerminalSceneComponent__LoadAsync_d__199__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__LoadAsync_d__199_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TerminalSceneComponent__LoadAsync_d__199__System_IDisposable_Dispose(
        TerminalSceneComponent__LoadAsync_d__199_o *this,
        const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__217___ctor(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__217_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__217__MoveNext(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__217_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w22
  TerminalSceneComponent___c_c *v4; // x0
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__217_0; // x20
  Il2CppObject *v7; // x21
  struct TerminalSceneComponent___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  UnityEngine_WaitWhile_o *v15; // x21
  Il2CppObject **p__2__current; // x19
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_593AB5F & 1) == 0 )
  {
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent___c__WaitStopSEQuestPhaseRewardEffect_b__217_0__);
    sub_21FFC50(&TerminalSceneComponent___c_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitWhile_TypeInfo);
    byte_593AB5F = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      this->fields.__1__state = -1;
      if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
      SoundManager__stopSe(0.0, 0);
    }
  }
  else
  {
    this->fields.__1__state = -1;
    v4 = TerminalSceneComponent___c_TypeInfo;
    if ( !*(&TerminalSceneComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, method);
      v4 = TerminalSceneComponent___c_TypeInfo;
    }
    static_fields = v4->static_fields;
    _9__217_0 = static_fields->__9__217_0;
    if ( !_9__217_0 )
    {
      if ( !*(&v4->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v4, method);
        static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
      }
      v7 = (Il2CppObject *)static_fields->__9;
      _9__217_0 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        _9__217_0,
        v7,
        Method_TerminalSceneComponent___c__WaitStopSEQuestPhaseRewardEffect_b__217_0__,
        0);
      v8 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v8->__9__217_0 = _9__217_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__217_0, (int32_t)_9__217_0, v9, v10, v11, v12, v13, v14);
    }
    v15 = (UnityEngine_WaitWhile_o *)sub_21FFEBC(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v15, _9__217_0, 0);
    this->fields.__2__current = (Il2CppObject *)v15;
    p__2__current = &this->fields.__2__current;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v15, v17, v18, v19, v20, v21, v22);
    *((_DWORD *)p__2__current - 2) = 1;
  }
  return _1__state == 0;
}


Il2CppObject *TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__217__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__217_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__217__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__217_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__217_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__217__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__217_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__217__System_IDisposable_Dispose(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__217_o *this,
        const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593AB32 & 1) == 0 )
  {
    sub_21FFC50(&TerminalSceneComponent___c_TypeInfo);
    byte_593AB32 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(TerminalSceneComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TerminalSceneComponent___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)TerminalSceneComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalSceneComponent___c___ctor(TerminalSceneComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c___CheckOpenCampaignDirectBonus_b__282_0(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v6; // x0

  if ( (byte_593AB40 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593AB40 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
  if ( !byte_5931EF1 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5931EF1 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
    v6 = TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    sub_21FFECC(v6, v4);
  CommonUI__OpenCampaignDirectBonus(
    (CommonUI_o *)Instance,
    v6->static_fields->_CampaignDirectBonus_k__BackingField,
    action,
    0);
}


void TerminalSceneComponent___c___CheckOpenCampaignDirectBonus_b__282_1(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v6; // x0

  if ( (byte_593AB41 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593AB41 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
  if ( !byte_5931EF1 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5931EF1 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
    v6 = TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    sub_21FFECC(v6, v4);
  CommonUI__OpenCampaignDirectBonusWithTransitionDialog(
    (CommonUI_o *)Instance,
    v6->static_fields->_CampaignDirectBonus_k__BackingField,
    action,
    0);
}


void TerminalSceneComponent___c___CheckRewardPopupChain_b__279_3(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_593AB3F & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593AB3F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v5);
  CommonUI__StartFriendPointNotification((CommonUI_o *)Instance, action, 0);
}


void TerminalSceneComponent___c___Fadein_MapDisp_Start_b__221_0(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_593AB35 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593AB35 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v5);
  CommonUI__StartLoginAndCampaignBonus((CommonUI_o *)Instance, action, 0, 201, 0);
}


void TerminalSceneComponent___c___Fadein_MapDisp_Start_b__221_1(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20

  if ( (byte_593AB36 & 1) == 0 )
  {
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593AB36 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v5);
  if ( !v6
    || (CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (CommonUI__ClearLoginResultData((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (CommonUI__ReleaseFortuneBonusAssetData((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_21FFECC(Instance, v5);
  }
  CommonUI__ReleaseLoginBonusWithTransitionDialogAssetData((CommonUI_o *)Instance, 0);
}


void TerminalSceneComponent___c___Fadein_MapDisp_Start_b__221_7(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20

  if ( (byte_593AB34 & 1) == 0 )
  {
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593AB34 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v5);
  if ( !v6 )
    sub_21FFECC(Instance, v5);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0);
}


// local variable allocation has failed, the output may be wrong!
bool TerminalSceneComponent___c___IsValidGrandBgm_b__235_0(
        TerminalSceneComponent___c_o *this,
        int32_t n,
        const MethodInfo *method)
{
  if ( (byte_593AB3A & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    byte_593AB3A = 1;
  }
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&n);
  return CondType__IsOpen(113, n, 0, 0, 0, 0);
}


ShopEntity_o *TerminalSceneComponent___c___OpenExchangeDialogue_b__288_0(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_593AB42 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_21FFC50(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593AB42 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v5);
  }
  return (ShopEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           x,
                           (const MethodInfo_3EDD388 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
}


bool TerminalSceneComponent___c___OpenExchangeDialogue_b__288_1(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return ShopEntity__IsAfterTheFreeShopReleaseDate(x, 0);
}


bool TerminalSceneComponent___c___OpenExchangeDialogue_b__288_2(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  bool isQuestNotClearItemClosed; // w8
  bool result; // w0

  if ( !x )
    sub_21FFECC(this, 0);
  if ( !ShopEntity__isQuestNotClearItemClosed(x, 0, 0) )
    return 1;
  isQuestNotClearItemClosed = ShopEntity__isQuestNotClearItemClosed(x, 0, 0);
  result = 0;
  if ( isQuestNotClearItemClosed )
    return ShopEntity__IsSoldOut(x, 0);
  return result;
}


int32_t TerminalSceneComponent___c___OpenExchangeDialogue_b__288_4(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.id;
}


ShopEntity_o *TerminalSceneComponent___c___OpenExchangeDialogue_b__288_5(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_593AB43 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_21FFC50(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593AB43 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v5);
  }
  return (ShopEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           x,
                           (const MethodInfo_3EDD388 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
}


int32_t TerminalSceneComponent___c___OpenExchangeDialogue_b__288_6(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return ShopEntity__GetPrice(x, 0);
}


void TerminalSceneComponent___c___PlayAutoExecuteQuest_b__256_3(
        TerminalSceneComponent___c_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  int32_t WarId_k__BackingField; // w19
  int32_t QuestId_k__BackingField; // w20
  TerminalSceneComponent___c_c *v5; // x8
  int32_t PhaseCnt_k__BackingField; // w23
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x9
  ScriptManager_CallbackFunc_o *_9__256_4; // x21
  Il2CppObject *v9; // x22
  struct TerminalSceneComponent___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_593AB3C & 1) == 0 )
  {
    sub_21FFC50(&ScriptManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&ScriptManager_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__256_4__);
    sub_21FFC50(&TerminalSceneComponent___c_TypeInfo);
    byte_593AB3C = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_5932644 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932644 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v2 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v2->static_fields->_WarId_k__BackingField;
  if ( !byte_593205C )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_593205C = 1;
  }
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, method);
    v2 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v2->static_fields->_QuestId_k__BackingField;
  if ( !byte_5932720 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_5932720 = 1;
  }
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, method);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v5 = TerminalSceneComponent___c_TypeInfo;
  PhaseCnt_k__BackingField = v2->static_fields->_PhaseCnt_k__BackingField;
  if ( !*(&TerminalSceneComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, method);
    v5 = TerminalSceneComponent___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__256_4 = static_fields->__9__256_4;
  if ( !_9__256_4 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, method);
      static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__256_4 = (ScriptManager_CallbackFunc_o *)sub_21FFEBC(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(
      _9__256_4,
      v9,
      Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__256_4__,
      0);
    v10 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v10->__9__256_4 = _9__256_4;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->__9__256_4, (int32_t)_9__256_4, v11, v12, v13, v14, v15, v16);
  }
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
  ScriptManager__PlayBattleStart(
    WarId_k__BackingField,
    QuestId_k__BackingField,
    PhaseCnt_k__BackingField + 1,
    _9__256_4,
    0,
    0,
    -1,
    0,
    0,
    0,
    0);
}


// local variable allocation has failed, the output may be wrong!
void TerminalSceneComponent___c___PlayAutoExecuteQuest_b__256_4(
        TerminalSceneComponent___c_o *this,
        bool isExit,
        const MethodInfo *method)
{
  TerminalSceneComponent___c_c *v3; // x0
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x8
  NetworkManager_ResultCallbackFunc_o *_9__256_5; // x19
  Il2CppObject *v6; // x20
  struct TerminalSceneComponent___c_StaticFields *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  Il2CppObject *Request_object; // x19
  TerminalPramsManager_c *v16; // x0
  int32_t QuestId_k__BackingField; // w21
  int32_t PhaseCnt_k__BackingField; // w20
  System_Int32_array *SelectRouteArray; // x0
  __int64 v20; // x1

  if ( (byte_593AB3D & 1) == 0 )
  {
    sub_21FFC50(&Method_NetworkManager_getRequest_BattleScenarioRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&ScriptManager_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__256_5__);
    sub_21FFC50(&TerminalSceneComponent___c_TypeInfo);
    byte_593AB3D = 1;
  }
  v3 = TerminalSceneComponent___c_TypeInfo;
  if ( !*(&TerminalSceneComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, isExit);
    v3 = TerminalSceneComponent___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__256_5 = static_fields->__9__256_5;
  if ( !_9__256_5 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, isExit);
      static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    }
    v6 = (Il2CppObject *)static_fields->__9;
    _9__256_5 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__256_5,
      v6,
      Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__256_5__,
      0);
    v7 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v7->__9__256_5 = _9__256_5;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v7->__9__256_5, (int32_t)_9__256_5, v8, v9, v10, v11, v12, v13);
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, isExit);
  Request_object = NetworkManager__getRequest_object_(
                     _9__256_5,
                     (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v14);
  if ( !byte_593205C )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593205C = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v14);
    v16 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v16->static_fields->_QuestId_k__BackingField;
  if ( !byte_5932720 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
    byte_5932720 = 1;
  }
  if ( !*(&v16->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v16, v14);
    v16 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v16->static_fields->_PhaseCnt_k__BackingField;
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v14);
  SelectRouteArray = ScriptManager__GetSelectRouteArray(0);
  if ( !Request_object )
    sub_21FFECC(SelectRouteArray, v20);
  BattleScenarioRequest__beginRequest(
    (BattleScenarioRequest_o *)Request_object,
    QuestId_k__BackingField,
    PhaseCnt_k__BackingField + 1,
    SelectRouteArray,
    0);
}


void TerminalSceneComponent___c___PlayAutoExecuteQuest_b__256_5(
        TerminalSceneComponent___c_o *this,
        System_String_o *jsonStr,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *v5; // x19
  __int64 v6; // x1
  System_Object_array *v7; // x19
  __int64 v8; // x1
  __int64 v9; // x1
  TerminalPramsManager_c *v10; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  const MethodInfo_476E8C0 *v12; // x0
  Il2CppObject *Instance; // x0
  __int64 v14; // x1

  if ( (byte_593AB3E & 1) == 0 )
  {
    sub_21FFC50(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&ScriptManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&StringLiteral_16395/*"["*/);
    sub_21FFC50(&StringLiteral_16659/*"]"*/);
    byte_593AB3E = 1;
  }
  v5 = (Il2CppObject *)System_String__Concat_75481624(
                         (System_String_o *)StringLiteral_16395/*"["*/,
                         jsonStr,
                         (System_String_o *)StringLiteral_16659/*"]"*/,
                         0);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v4);
  v7 = JsonManager__DeserializeArray_object_(
         v5,
         (const MethodInfo_38A056C *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v6);
  ScriptManager__ClearSelectRouteArray(0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v7, 1, 0);
  if ( !byte_5932ADC )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932ADC = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9);
    v10 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v10->static_fields;
  v12 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
  static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance(v12);
  if ( !Instance )
    sub_21FFECC(0, v14);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


void TerminalSceneComponent___c___RebootToNetworkError_b__243_0(
        TerminalSceneComponent___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_593AB3B & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_593AB3B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0);
}


void TerminalSceneComponent___c___StartWindowMessage_b__223_1(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20

  if ( (byte_593AB37 & 1) == 0 )
  {
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593AB37 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v5);
  if ( !v6 )
    sub_21FFECC(Instance, v5);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0);
}


void TerminalSceneComponent___c___StartWindowMessage_b__223_2(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  System_String_o *QuestWindowMessage_k__BackingField; // x20

  if ( (byte_593AB38 & 1) == 0 )
  {
    sub_21FFC50(&ScriptManager_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593AB38 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, action);
  if ( !byte_593AB15 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593AB15 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, action);
    v4 = TerminalPramsManager_TypeInfo;
  }
  QuestWindowMessage_k__BackingField = v4->static_fields->_QuestWindowMessage_k__BackingField;
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, action);
  ScriptManager__PlayMessage(QuestWindowMessage_k__BackingField, action, 0, 0, -1, 0);
}


void TerminalSceneComponent___c___StartWindowMessage_b__223_3(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  __int64 v5; // x1
  Il2CppObject *v6; // x20
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_593AB39 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593AB39 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, action);
  if ( !byte_5934081 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5934081 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, action);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( v4->static_fields->_MessageDispType_k__BackingField != 2 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v4, action);
    TerminalPramsManager__InitMessageWindowData(0);
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0, 0, 0);
      goto LABEL_22;
    }
LABEL_23:
    sub_21FFECC(Instance, v5);
  }
  v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
  if ( !byte_593AC02 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593AC02 = 1;
  }
  Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v6 )
    goto LABEL_23;
  AvalonSceneManager__transitionScene(
    (AvalonSceneManager_o *)v6,
    40,
    1,
    (Il2CppObject *)Instance[1].fields.sendData[7].monitor,
    0);
LABEL_22:
  ActionExtensions__Call(action, 0);
}


bool TerminalSceneComponent___c___WaitStopSEQuestPhaseRewardEffect_b__217_0(
        TerminalSceneComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_593AB33 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
    byte_593AB33 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v3);
  return RewardMiniPopupExecutor__IsBusy((RewardMiniPopupExecutor_o *)Instance, 0);
}


System_String_o *TerminalSceneComponent___c___callbackTopLogin_b__241_0(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0);
}


System_String_o *TerminalSceneComponent___c___callbackTopLogin_b__241_1(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0);
}


void TerminalSceneComponent___c__DisplayClass194_0___ctor(
        TerminalSceneComponent___c__DisplayClass194_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass194_0___SetEarthView_b__0(
        TerminalSceneComponent___c__DisplayClass194_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass194_0_o *v4; // x19
  struct TerminalSceneComponent_o *_4__this; // x21
  __int64 v6; // x1
  Il2CppObject *Object_object__58323140; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct TerminalSceneComponent_o *v14; // x8
  struct TerminalSceneComponent_o *v15; // x20
  Il2CppObject *ComponentInChildren_object; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  v4 = this;
  if ( (byte_593AB44 & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentInChildren_BaseCore___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass194_0_o *)sub_21FFC50(&StringLiteral_4897/*"CorePrefab"*/);
    byte_593AB44 = 1;
  }
  if ( !data )
    goto LABEL_11;
  _4__this = v4->fields.__4__this;
  Object_object__58323140 = AssetData__GetObject_object__58323140(
                              data,
                              (System_String_o *)StringLiteral_4897/*"CorePrefab"*/,
                              (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  this = (TerminalSceneComponent___c__DisplayClass194_0_o *)UnityEngine_Object__Instantiate_object_(
                                                              Object_object__58323140,
                                                              (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !_4__this
    || (_4__this->fields.mEarthCoreObj = (struct UnityEngine_GameObject_o *)this,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&_4__this->fields.mEarthCoreObj,
          (int32_t)this,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13),
        (v14 = v4->fields.__4__this) == 0)
    || (GameObjectExtensions__SafeSetParent_42881912(v14->fields.mEarthCoreObj, v14->fields.mUiRoot, 0),
        (v15 = v4->fields.__4__this) == 0)
    || (this = (TerminalSceneComponent___c__DisplayClass194_0_o *)v15->fields.mEarthCoreObj) == 0 )
  {
LABEL_11:
    sub_21FFECC(this, data);
  }
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)this,
                                 (const MethodInfo_3883C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_BaseCore___);
  v15->fields.mEarthCore = (struct BaseCore_o *)ComponentInChildren_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v15->fields.mEarthCore,
    (int32_t)ComponentInChildren_object,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  ActionExtensions__Call(v4->fields.callback, 0);
}


void TerminalSceneComponent___c__DisplayClass195_0___ctor(
        TerminalSceneComponent___c__DisplayClass195_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass195_0___RegenerateEarthView_b__0(
        TerminalSceneComponent___c__DisplayClass195_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass195_0_o *v2; // x19
  struct TerminalSceneComponent_o *_4__this; // x8
  struct BaseCore_o *mEarthCore; // x20
  System_Collections_Generic_List_MapControl_WarInfo__o *WarInfoAll_OrderReverse; // x21
  long double v6; // q0
  struct TerminalSceneComponent_o *v7; // x8
  System_Action_o *callback; // x0

  v2 = this;
  if ( (byte_593AB45 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    this = (TerminalSceneComponent___c__DisplayClass195_0_o *)sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593AB45 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  mEarthCore = _4__this->fields.mEarthCore;
  this = (TerminalSceneComponent___c__DisplayClass195_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
    goto LABEL_17;
  WarInfoAll_OrderReverse = QuestTree__GetWarInfoAll_OrderReverse((QuestTree_o *)this, 0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    *(__n128 *)&v6 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_59354A4 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_59354A4 = 1;
  }
  this = (TerminalSceneComponent___c__DisplayClass195_0_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    *(__n128 *)&v6 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    this = (TerminalSceneComponent___c__DisplayClass195_0_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !mEarthCore
    || (this = (TerminalSceneComponent___c__DisplayClass195_0_o *)((__int64 (__fastcall *)(struct BaseCore_o *, System_Collections_Generic_List_MapControl_WarInfo__o *, bool, const MethodInfo *, long double))mEarthCore->klass->vtable._8_Setup.methodPtr)(
                                                                    mEarthCore,
                                                                    WarInfoAll_OrderReverse,
                                                                    BYTE2(this[5].fields.callback->fields.method_info) == 0,
                                                                    mEarthCore->klass->vtable._8_Setup.method,
                                                                    v6),
        (v7 = v2->fields.__4__this) == 0)
    || (this = (TerminalSceneComponent___c__DisplayClass195_0_o *)v7->fields.mEarthCore) == 0 )
  {
LABEL_17:
    sub_21FFECC(this, method);
  }
  ((void (__fastcall *)(TerminalSceneComponent___c__DisplayClass195_0_o *, Il2CppClass *))this->klass[1]._1.declaringType)(
    this,
    this->klass[1]._1.parent);
  callback = v2->fields.callback;
  if ( callback )
    ActionExtensions__Call(callback, 0);
}


void TerminalSceneComponent___c__DisplayClass199_0___ctor(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass199_0___LoadAsync_b__0(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        const MethodInfo *method)
{
  this->fields.isSetupStandServant = 1;
}


void TerminalSceneComponent___c__DisplayClass199_0___LoadAsync_b__1(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadUISkin = 1;
}


void TerminalSceneComponent___c__DisplayClass199_0___LoadAsync_b__10(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadEventUI = 1;
}


void TerminalSceneComponent___c__DisplayClass199_0___LoadAsync_b__11(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadCharaGraphOptionAtlas = 1;
}


void TerminalSceneComponent___c__DisplayClass199_0___LoadAsync_b__12(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadPartyOrganizationAtlas = 1;
}


bool TerminalSceneComponent___c__DisplayClass199_0___LoadAsync_b__13(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
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


void TerminalSceneComponent___c__DisplayClass199_0___LoadAsync_b__2(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadAudioAssetStorage = 1;
}


void TerminalSceneComponent___c__DisplayClass199_0___LoadAsync_b__3(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadBanner = 1;
}


void TerminalSceneComponent___c__DisplayClass199_0___LoadAsync_b__4(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadFaceAtlas = 1;
}


void TerminalSceneComponent___c__DisplayClass199_0___LoadAsync_b__5(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadEquipFace = 1;
}


void TerminalSceneComponent___c__DisplayClass199_0___LoadAsync_b__6(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadFriendshipExceed = 1;
}


void TerminalSceneComponent___c__DisplayClass199_0___LoadAsync_b__7(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadCommandCode = 1;
}


void TerminalSceneComponent___c__DisplayClass199_0___LoadAsync_b__8(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadCommandCodeMini = 1;
}


void TerminalSceneComponent___c__DisplayClass199_0___LoadAsync_b__9(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadEventAtlas = 1;
}


void TerminalSceneComponent___c__DisplayClass212_0___ctor(
        TerminalSceneComponent___c__DisplayClass212_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass212_0___SetupStandServant_b__0(
        TerminalSceneComponent___c__DisplayClass212_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass212_0_o *v2; // x19
  struct TerminalSceneComponent_o *_4__this; // x8

  v2 = this;
  if ( this->fields.isSlideIn )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this || (this = (TerminalSceneComponent___c__DisplayClass212_0_o *)_4__this->fields.mTerminalServant) == 0 )
      sub_21FFECC(this, method);
    StandFigureSlideComponent__SlideIn((StandFigureSlideComponent_o *)this, 0, 0);
  }
  ActionExtensions__Call(v2->fields.endAction, 0);
}


void TerminalSceneComponent___c__DisplayClass212_0___SetupStandServant_b__1(
        TerminalSceneComponent___c__DisplayClass212_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass212_0_o *v2; // x19
  struct TerminalSceneComponent_o *_4__this; // x8
  struct TerminalSceneComponent_o *v4; // x8
  long double v5; // q0
  struct TerminalSceneComponent_o *v6; // x8
  struct StandFigureSlideComponent_o *mTerminalServant; // x9
  struct BaseCore_o *mEarthCore; // x8
  __int64 v9; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  UserServantEntity_o *NextStandServant; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  long double v23; // q0
  struct TerminalSceneComponent_o *v24; // x8
  int32_t mStandSvtIdx; // w21
  struct TerminalSceneComponent_o *v26; // x8
  struct BaseCore_o *v27; // x21
  struct TerminalSceneComponent_o *v28; // x8
  StandFigureSlideComponent_o *v29; // x19
  System_Action_o *v30; // x21
  struct TerminalSceneComponent_o *v31; // x8
  struct BaseCore_o *v32; // x20
  struct TerminalSceneComponent_o *v33; // x8

  v2 = this;
  if ( (byte_593AB46 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass212_1__SetupStandServant_b__2__);
    this = (TerminalSceneComponent___c__DisplayClass212_0_o *)sub_21FFC50(&TerminalSceneComponent___c__DisplayClass212_1_TypeInfo);
    byte_593AB46 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_38;
  this = (TerminalSceneComponent___c__DisplayClass212_0_o *)_4__this->fields.mTerminalServant;
  if ( !this )
    goto LABEL_38;
  if ( !BYTE1(this[1].fields.__4__this) )
  {
    this = (TerminalSceneComponent___c__DisplayClass212_0_o *)StandFigureSlideComponent__IsMoving(
                                                                (StandFigureSlideComponent_o *)this,
                                                                0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v4 = v2->fields.__4__this;
      if ( !v4 )
        goto LABEL_38;
      this = (TerminalSceneComponent___c__DisplayClass212_0_o *)v4->fields.mEarthCore;
      if ( !this )
        goto LABEL_38;
      if ( !BYTE1(this[3].fields.__4__this) )
      {
        *(float *)&v5 = ((float (__fastcall *)(TerminalSceneComponent___c__DisplayClass212_0_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
                          this,
                          this->klass[1]._1.implementedInterfaces);
        if ( *(float *)&v5 >= 0.0 && *(float *)&v5 <= 0.0 )
        {
          v6 = v2->fields.__4__this;
          if ( !v6 )
            goto LABEL_38;
          mTerminalServant = v6->fields.mTerminalServant;
          if ( !mTerminalServant )
            goto LABEL_38;
          mEarthCore = v6->fields.mEarthCore;
          if ( mTerminalServant->fields.mIsFrameIn )
          {
            if ( !mEarthCore )
              goto LABEL_38;
            if ( !mEarthCore->fields.mIsFocusIn )
            {
              v9 = sub_21FFEBC(TerminalSceneComponent___c__DisplayClass212_1_TypeInfo);
              System_Object___ctor((Il2CppObject *)v9, 0);
              if ( v9 )
              {
                *(_QWORD *)(v9 + 24) = v2;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)v2, v10, v11, v12, v13, v14, v15);
                this = (TerminalSceneComponent___c__DisplayClass212_0_o *)v2->fields.__4__this;
                if ( this )
                {
                  NextStandServant = TerminalSceneComponent__GetNextStandServant((TerminalSceneComponent_o *)this, 0);
                  *(_QWORD *)(v9 + 16) = NextStandServant;
                  sub_21FFBF4(
                    (MissionNaviTransitionBoardItem_o *)(v9 + 16),
                    (int32_t)NextStandServant,
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
                    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                      *(__n128 *)&v23 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
                    this = (TerminalSceneComponent___c__DisplayClass212_0_o *)sub_31FD2EC(mStandSvtIdx != 0, 0, v23);
                    v26 = v2->fields.__4__this;
                    if ( v26 )
                    {
                      v27 = v26->fields.mEarthCore;
                      this = (TerminalSceneComponent___c__DisplayClass212_0_o *)sub_31FD29C(0);
                      if ( v27 )
                      {
                        this = (TerminalSceneComponent___c__DisplayClass212_0_o *)((__int64 (__fastcall *)(struct BaseCore_o *, bool, _QWORD, const MethodInfo *))v27->klass->vtable._4_FocusInOut.methodPtr)(
                                                                                    v27,
                                                                                    ((unsigned __int8)this & 1) == 0,
                                                                                    0,
                                                                                    v27->klass->vtable._4_FocusInOut.method);
                        v28 = v2->fields.__4__this;
                        if ( v28 )
                        {
                          v29 = v28->fields.mTerminalServant;
                          v30 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                          System_Action___ctor(
                            v30,
                            (Il2CppObject *)v9,
                            Method_TerminalSceneComponent___c__DisplayClass212_1__SetupStandServant_b__2__,
                            0);
                          if ( v29 )
                          {
                            StandFigureSlideComponent__SlideOut(v29, v30, 0, 0);
LABEL_37:
                            TerminalPramsManager__PlaySystemSE(0, 0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto LABEL_38;
            }
          }
          else
          {
            if ( !mEarthCore )
              goto LABEL_38;
            if ( mEarthCore->fields.mIsFocusIn )
            {
              if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                *(__n128 *)&v5 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
              this = (TerminalSceneComponent___c__DisplayClass212_0_o *)sub_31FD2EC(1, 0, v5);
              v31 = v2->fields.__4__this;
              if ( v31 )
              {
                v32 = v31->fields.mEarthCore;
                this = (TerminalSceneComponent___c__DisplayClass212_0_o *)sub_31FD29C(0);
                if ( v32 )
                {
                  this = (TerminalSceneComponent___c__DisplayClass212_0_o *)((__int64 (__fastcall *)(struct BaseCore_o *, bool, _QWORD, const MethodInfo *))v32->klass->vtable._4_FocusInOut.methodPtr)(
                                                                              v32,
                                                                              ((unsigned __int8)this & 1) == 0,
                                                                              0,
                                                                              v32->klass->vtable._4_FocusInOut.method);
                  v33 = v2->fields.__4__this;
                  if ( v33 )
                  {
                    this = (TerminalSceneComponent___c__DisplayClass212_0_o *)v33->fields.mTerminalServant;
                    if ( this )
                    {
                      StandFigureSlideComponent__SlideIn((StandFigureSlideComponent_o *)this, 0, 0);
                      goto LABEL_37;
                    }
                  }
                }
              }
LABEL_38:
              sub_21FFECC(this, method);
            }
          }
        }
      }
    }
  }
}


void TerminalSceneComponent___c__DisplayClass212_1___ctor(
        TerminalSceneComponent___c__DisplayClass212_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass212_1___SetupStandServant_b__2(
        TerminalSceneComponent___c__DisplayClass212_1_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass212_1_o *v2; // x20
  struct TerminalSceneComponent___c__DisplayClass212_0_o *CS___8__locals1; // x8
  TerminalSceneComponent_o *_4__this; // x19
  UserServantEntity_o *usd; // x20

  v2 = this;
  if ( (byte_593AB47 & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass212_1_o *)sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593AB47 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_12;
  _4__this = CS___8__locals1->fields.__4__this;
  usd = v2->fields._usd;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_59354A4 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_59354A4 = 1;
  }
  this = (TerminalSceneComponent___c__DisplayClass212_1_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    this = (TerminalSceneComponent___c__DisplayClass212_1_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !_4__this )
LABEL_12:
    sub_21FFECC(this, method);
  TerminalSceneComponent__SetupStandServant(_4__this, usd, BYTE2(this[5].fields.CS___8__locals1[2].monitor), 0, 0);
}


void TerminalSceneComponent___c__DisplayClass218_0___ctor(
        TerminalSceneComponent___c__DisplayClass218_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass218_0___coFadein_WorldDisp_b__0(
        TerminalSceneComponent___c__DisplayClass218_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAct, 0);
}


void TerminalSceneComponent___c__DisplayClass218_0___coFadein_WorldDisp_b__1(
        TerminalSceneComponent___c__DisplayClass218_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass218_0_o *v2; // x19
  System_Action_o *_9__3; // x22
  TerminalSceneComponent_o *_4__this; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  v2 = this;
  if ( (byte_593AB48 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass218_0_o *)sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass218_0__coFadein_WorldDisp_b__3__);
    byte_593AB48 = 1;
  }
  _9__3 = v2->fields.__9__3;
  _4__this = v2->fields.__4__this;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v2,
      Method_TerminalSceneComponent___c__DisplayClass218_0__coFadein_WorldDisp_b__3__,
      0);
    v2->fields.__9__3 = _9__3;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v5, v6, v7, v8, v9, v10);
  }
  if ( !_4__this )
    sub_21FFECC(this, method);
  TerminalSceneComponent__StartWindowMessage(_4__this, _9__3, 0);
}


void TerminalSceneComponent___c__DisplayClass218_0___coFadein_WorldDisp_b__2(
        TerminalSceneComponent___c__DisplayClass218_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(0, method);
  TerminalSceneComponent__StartWindowMessage(_4__this, 0, 0);
}


void TerminalSceneComponent___c__DisplayClass218_0___coFadein_WorldDisp_b__3(
        TerminalSceneComponent___c__DisplayClass218_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAct, 0);
}


void TerminalSceneComponent___c__DisplayClass219_0___ctor(
        TerminalSceneComponent___c__DisplayClass219_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass219_0___Fadein_MapDisp_b__0(
        TerminalSceneComponent___c__DisplayClass219_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (TerminalSceneComponent__Fadein_MapDisp_Load(
          _4__this,
          _4__this->fields._FirstFadeTime_k__BackingField,
          this->fields.end_act,
          0),
        (_4__this = this->fields.__4__this) == 0) )
  {
    sub_21FFECC(_4__this, method);
  }
  TerminalSceneComponent__ClearFirstFadeInfo(_4__this, 0);
}


void TerminalSceneComponent___c__DisplayClass219_0___Fadein_MapDisp_b__1(
        TerminalSceneComponent___c__DisplayClass219_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(0, method);
  TerminalSceneComponent__ClearFirstFadeInfo(_4__this, 0);
  ActionExtensions__Call(this->fields.end_act, 0);
}


void TerminalSceneComponent___c__DisplayClass220_0___ctor(
        TerminalSceneComponent___c__DisplayClass220_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass220_0___Fadein_MapDisp_Load_b__0(
        TerminalSceneComponent___c__DisplayClass220_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(0, method);
  TerminalSceneComponent__Fadein_MapDisp_Start(_4__this, this->fields.fade_time, this->fields.end_act, 0);
}


void TerminalSceneComponent___c__DisplayClass221_0___ctor(
        TerminalSceneComponent___c__DisplayClass221_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass221_0___Fadein_MapDisp_Start_b__2(
        TerminalSceneComponent___c__DisplayClass221_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct WarEntity_o *war_dat; // x8

  war_dat = this->fields.war_dat;
  if ( !war_dat || (this = (TerminalSceneComponent___c__DisplayClass221_0_o *)this->fields.__4__this) == 0 )
    sub_21FFECC(this, action);
  TerminalSceneComponent__StartEventDailyPoint((TerminalSceneComponent_o *)this, war_dat->fields.eventId, action, 0);
}


void TerminalSceneComponent___c__DisplayClass221_0___Fadein_MapDisp_Start_b__3(
        TerminalSceneComponent___c__DisplayClass221_0_o *this,
        const MethodInfo *method)
{
  struct WarEntity_o *war_dat; // x9

  war_dat = this->fields.war_dat;
  if ( !war_dat || !this->fields.__4__this )
    sub_21FFECC(this, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffects(
    this->fields.__4__this,
    this->fields.fade_time,
    war_dat->fields.eventId,
    this->fields.end_act,
    0);
}


void TerminalSceneComponent___c__DisplayClass221_0___Fadein_MapDisp_Start_b__4(
        TerminalSceneComponent___c__DisplayClass221_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  EventTutorialMaster_o *Master_object; // x0
  __int64 v6; // x1
  struct MapEntity_o *map_dat; // x8
  int32_t id; // w20
  struct TerminalSceneComponent_o *_4__this; // x8

  if ( (byte_593AB4A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_593AB4A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  Master_object = (EventTutorialMaster_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    Master_object = (EventTutorialMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Master_object )
      goto LABEL_20;
    if ( !LOBYTE(Master_object[2].fields.list) )
    {
      map_dat = this->fields.map_dat;
      if ( map_dat )
        id = map_dat->fields.id;
      else
        id = 0;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
      Master_object = (EventTutorialMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventTutorialMaster___);
      if ( !Master_object )
LABEL_20:
        sub_21FFECC(Master_object, v6);
      EventTutorialMaster__PlayTutorialSetUpAction(Master_object, id, 0);
    }
    Master_object = (EventTutorialMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Master_object )
      goto LABEL_20;
    QuestAfterAction__ExecuteReservedCommandListBeforeFadeIn((QuestAfterAction_o *)Master_object, 0);
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  Master_object = (EventTutorialMaster_o *)_4__this->fields.mTerminalMap;
  if ( !Master_object )
    goto LABEL_20;
  ScrTerminalMap__Fadein_MapDisp_Start((ScrTerminalMap_o *)Master_object, 0);
}


void TerminalSceneComponent___c__DisplayClass221_0___Fadein_MapDisp_Start_b__5(
        TerminalSceneComponent___c__DisplayClass221_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (mTerminalList = _4__this->fields.mTerminalList) == 0
    || (this = (TerminalSceneComponent___c__DisplayClass221_0_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0 )
  {
    sub_21FFECC(this, action);
  }
  QuestBoardListViewManager__SetMode((QuestBoardListViewManager_o *)this, 4, action, 0, 0, 0, 0);
}


void TerminalSceneComponent___c__DisplayClass221_0___Fadein_MapDisp_Start_b__6(
        TerminalSceneComponent___c__DisplayClass221_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass221_0_o *v4; // x20
  struct TerminalSceneComponent_o *_4__this; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  v4 = this;
  if ( (byte_593AB49 & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass221_0_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_593AB49 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (mTerminalMap = _4__this->fields.mTerminalMap) == 0
    || (this = (TerminalSceneComponent___c__DisplayClass221_0_o *)mTerminalMap->fields.spotMaskObj) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0),
        (this = (TerminalSceneComponent___c__DisplayClass221_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__)) == 0) )
  {
    sub_21FFECC(this, action);
  }
  QuestAfterAction__LoadVoice((QuestAfterAction_o *)this, action, 0);
}


void TerminalSceneComponent___c__DisplayClass221_1___ctor(
        TerminalSceneComponent___c__DisplayClass221_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass221_1___Fadein_MapDisp_Start_b__8(
        TerminalSceneComponent___c__DisplayClass221_1_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *IsNullOrEmpty; // x0
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0
  Il2CppObject *Instance; // x19
  struct TerminalSceneComponent___c__DisplayClass221_0_o *CS___8__locals1; // x8

  if ( (byte_593AB4B & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_593AB4B = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  IsNullOrEmpty = (UnityEngine_GameObject_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
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
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
  if ( !byte_593AB15 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593AB15 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
    v7 = TerminalPramsManager_TypeInfo;
  }
  IsNullOrEmpty = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(
                                                v7->static_fields->_QuestWindowMessage_k__BackingField,
                                                0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    if ( !byte_593AC02 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_593AC02 = 1;
    }
    IsNullOrEmpty = (UnityEngine_GameObject_o *)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
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
        *(Il2CppObject **)(IsNullOrEmpty[7].fields.m_CachedPtr + 120),
        0);
      return;
    }
LABEL_30:
    sub_21FFECC(IsNullOrEmpty, method);
  }
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_30;
  IsNullOrEmpty = (UnityEngine_GameObject_o *)CS___8__locals1->fields.__4__this;
  if ( !IsNullOrEmpty )
    goto LABEL_30;
  TerminalSceneComponent__StartWindowMessage((TerminalSceneComponent_o *)IsNullOrEmpty, 0, 0);
}


void TerminalSceneComponent___c__DisplayClass224_0___ctor(
        TerminalSceneComponent___c__DisplayClass224_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass224_0___FadeInAndTriggerEventEffectsCore_b__0(
        TerminalSceneComponent___c__DisplayClass224_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(0, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(_4__this, this->fields.eventId, this->fields.callback, 0);
}


void TerminalSceneComponent___c__DisplayClass224_0___FadeInAndTriggerEventEffectsCore_b__1(
        TerminalSceneComponent___c__DisplayClass224_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  QuestAfterAction_o *v5; // x20
  System_Action_o *_9__2; // x22
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_593AB4C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass224_0__FadeInAndTriggerEventEffectsCore_b__2__);
    byte_593AB4C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  v5 = (QuestAfterAction_o *)Instance;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent___c__DisplayClass224_0__FadeInAndTriggerEventEffectsCore_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !v5 )
    sub_21FFECC(Instance, v4);
  QuestAfterAction__Play(v5, _9__2, 0);
}


void TerminalSceneComponent___c__DisplayClass224_0___FadeInAndTriggerEventEffectsCore_b__2(
        TerminalSceneComponent___c__DisplayClass224_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(0, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(_4__this, this->fields.eventId, this->fields.callback, 0);
}


void TerminalSceneComponent___c__DisplayClass224_0___FadeInAndTriggerEventEffectsCore_b__3(
        TerminalSceneComponent___c__DisplayClass224_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(0, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(_4__this, this->fields.eventId, this->fields.callback, 0);
}


void TerminalSceneComponent___c__DisplayClass227_0___ctor(
        TerminalSceneComponent___c__DisplayClass227_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass227_0___FadeInAndTriggerEventEffectsNext_b__0(
        TerminalSceneComponent___c__DisplayClass227_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  TitleInfoControl_o *mTitleInfo; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (mTitleInfo = _4__this->fields.mTitleInfo) == 0 )
    sub_21FFECC(this, method);
  TitleInfoControl__CheckSuperBossHpAnim(mTitleInfo, this->fields.callback, 0);
}


void TerminalSceneComponent___c__DisplayClass227_0___FadeInAndTriggerEventEffectsNext_b__1(
        TerminalSceneComponent___c__DisplayClass227_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(0, method);
  TerminalSceneComponent__SetActionBGColl(_4__this, 0, this->fields.callback, 0);
}


void TerminalSceneComponent___c__DisplayClass256_0___ctor(
        TerminalSceneComponent___c__DisplayClass256_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass256_0___PlayAutoExecuteQuest_b__0(
        TerminalSceneComponent___c__DisplayClass256_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass256_0_o *v2; // x19
  struct TerminalSceneComponent_o *_4__this; // x8
  ScrTerminalListTop_o *mTerminalList; // x20
  int32_t method_ptr_high; // w21
  System_Action_o *_9__6; // x22
  int invoke_impl; // w24
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  v2 = this;
  if ( (byte_593AB4F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass256_0_o *)sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass256_0__PlayAutoExecuteQuest_b__6__);
    byte_593AB4F = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  mTerminalList = _4__this->fields.mTerminalList;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_593205C )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593205C = 1;
  }
  this = (TerminalSceneComponent___c__DisplayClass256_0_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    this = (TerminalSceneComponent___c__DisplayClass256_0_o *)TerminalPramsManager_TypeInfo;
  }
  method_ptr_high = HIDWORD(this[3].fields.__9__6->fields.method_ptr);
  if ( !byte_5932720 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass256_0_o *)TerminalPramsManager_TypeInfo;
    byte_5932720 = 1;
  }
  if ( !HIDWORD(this[4].fields.__9__2) )
  {
    j_il2cpp_runtime_class_init_0(this, method);
    this = (TerminalSceneComponent___c__DisplayClass256_0_o *)TerminalPramsManager_TypeInfo;
  }
  _9__6 = v2->fields.__9__6;
  invoke_impl = this[3].fields.__9__6->fields.invoke_impl;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)v2,
      Method_TerminalSceneComponent___c__DisplayClass256_0__PlayAutoExecuteQuest_b__6__,
      0);
    v2->fields.__9__6 = _9__6;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__6, (int32_t)_9__6, v8, v9, v10, v11, v12, v13);
  }
  if ( !mTerminalList )
LABEL_18:
    sub_21FFECC(this, method);
  ScrTerminalListTop__StartWindowMessage_43674992(mTerminalList, method_ptr_high, invoke_impl + 1, 2, _9__6, 0, 0);
}


void TerminalSceneComponent___c__DisplayClass256_0___PlayAutoExecuteQuest_b__1(
        TerminalSceneComponent___c__DisplayClass256_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  QuestEntity_o *questEnt; // x0
  struct TerminalSceneComponent_o *_4__this; // x8
  ScrTerminalListTop_o *mTerminalList; // x20
  int32_t name_high; // w21
  System_Action_o *_9__2; // x22
  int namespaze; // w24
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  clsQuestCheck_o *v16; // x19
  TerminalSceneComponent___c_c *v17; // x8
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__256_3; // x20
  Il2CppObject *v20; // x21
  struct TerminalSceneComponent___c_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  if ( (byte_593AB4D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__256_3__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass256_0__PlayAutoExecuteQuest_b__2__);
    sub_21FFC50(&TerminalSceneComponent___c_TypeInfo);
    byte_593AB4D = 1;
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
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, result);
      if ( !byte_593205C )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_593205C = 1;
      }
      questEnt = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, result);
        questEnt = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      }
      name_high = HIDWORD(questEnt[1].klass->_1.name);
      if ( !byte_5932720 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        questEnt = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
        byte_5932720 = 1;
      }
      if ( !questEnt[1].fields.actConsume )
      {
        j_il2cpp_runtime_class_init_0(questEnt, result);
        questEnt = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      }
      _9__2 = this->fields.__9__2;
      namespaze = (int)questEnt[1].klass->_1.namespaze;
      if ( !_9__2 )
      {
        _9__2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__2,
          (Il2CppObject *)this,
          Method_TerminalSceneComponent___c__DisplayClass256_0__PlayAutoExecuteQuest_b__2__,
          0);
        this->fields.__9__2 = _9__2;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.__9__2,
          (int32_t)_9__2,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15);
      }
      if ( mTerminalList )
      {
        ScrTerminalListTop__StartWindowMessage_43674992(mTerminalList, name_high, namespaze + 1, 2, _9__2, 1, 0);
        return;
      }
    }
LABEL_28:
    sub_21FFECC(questEnt, result);
  }
  questEnt = (QuestEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v16 = (clsQuestCheck_o *)questEnt;
  v17 = TerminalSceneComponent___c_TypeInfo;
  if ( !*(&TerminalSceneComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, result);
    v17 = TerminalSceneComponent___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__256_3 = static_fields->__9__256_3;
  if ( !_9__256_3 )
  {
    if ( !*(&v17->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v17, result);
      static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__256_3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__256_3, v20, Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__256_3__, 0);
    v21 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v21->__9__256_3 = _9__256_3;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v21->__9__256_3, (int32_t)_9__256_3, v22, v23, v24, v25, v26, v27);
  }
  if ( !v16 )
    goto LABEL_28;
  clsQuestCheck__PlayQuestStartAction(v16, _9__256_3, 0);
}


void TerminalSceneComponent___c__DisplayClass256_0___PlayAutoExecuteQuest_b__2(
        TerminalSceneComponent___c__DisplayClass256_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass256_0_o *v2; // x20
  struct TerminalSceneComponent_o *_4__this; // x8
  struct TerminalSceneComponent_o *v4; // x8
  struct TerminalSceneComponent_o *v5; // x8
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0
  int32_t QuestId_k__BackingField; // w21
  int v9; // w9
  __int64 v10; // x1
  TerminalPramsManager_c *v11; // x0
  __int64 v12; // x1
  bool HasFlag; // w8
  TerminalPramsManager_c *v14; // x0
  TerminalPramsManager_c *v15; // x0
  int32_t SpotId; // w21
  struct TerminalSceneComponent_o *v17; // x8
  bool Effect; // w21
  struct TerminalSceneComponent_o *v19; // x8
  ScrTerminalListTop_o *mTerminalList; // x20
  int32_t method_ptr_high; // w21

  v2 = this;
  if ( (byte_593AB4E & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass256_0_o *)sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593AB4E = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_60;
  this = (TerminalSceneComponent___c__DisplayClass256_0_o *)_4__this->fields.mTerminalMap;
  if ( !this )
    goto LABEL_60;
  this = (TerminalSceneComponent___c__DisplayClass256_0_o *)ScrTerminalMap__IsAllMaskActive((ScrTerminalMap_o *)this, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v4 = v2->fields.__4__this;
    if ( !v4 )
      goto LABEL_60;
    this = (TerminalSceneComponent___c__DisplayClass256_0_o *)v4->fields.mTerminalMap;
    if ( !this )
      goto LABEL_60;
    ScrTerminalMap__AllMaskEnd((ScrTerminalMap_o *)this, 0);
  }
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_60;
  this = (TerminalSceneComponent___c__DisplayClass256_0_o *)v5->fields.mTerminalList;
  if ( !this )
    goto LABEL_60;
  ScrTerminalListTop__IsAllTouchEnable((ScrTerminalListTop_o *)this, 0, 0, 0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
  if ( !byte_593205C )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593205C = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
    v7 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v7->static_fields->_QuestId_k__BackingField;
  if ( !byte_59350E1 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_59350E1 = 1;
  }
  if ( !*(&v7->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v7, v6);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v9 = (unsigned __int8)byte_593205C;
  v7->static_fields->_LastPlayedQuestId_k__BackingField = QuestId_k__BackingField;
  if ( !v9 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_593205C = 1;
  }
  if ( !*(&v7->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v7, v6);
    v7 = TerminalPramsManager_TypeInfo;
  }
  TerminalPramsManager__CheckClearSelectedStoryQuestId(v7->static_fields->_QuestId_k__BackingField, 0);
  if ( !byte_593205C )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593205C = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10);
    v11 = TerminalPramsManager_TypeInfo;
  }
  HasFlag = QuestMaster__HasFlag(v11->static_fields->_QuestId_k__BackingField, 0x8000000000LL, 0);
  v14 = TerminalPramsManager_TypeInfo;
  if ( HasFlag )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
    if ( !byte_593205C )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_593205C = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
      v15 = TerminalPramsManager_TypeInfo;
    }
    SpotId = QuestMaster__GetSpotId(v15->static_fields->_QuestId_k__BackingField, 0);
    if ( !byte_59350E2 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_59350E2 = 1;
    }
    v14 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
      v14 = TerminalPramsManager_TypeInfo;
    }
    v14->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = SpotId;
  }
  if ( !*(&v14->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v14, v12);
  TerminalPramsManager__PlayQuestSave_SaveData(0);
  TerminalPramsManager__Save_SaveData(0);
  v17 = v2->fields.__4__this;
  if ( !v17 )
    goto LABEL_60;
  this = (TerminalSceneComponent___c__DisplayClass256_0_o *)v17->fields.mTerminalList;
  if ( !this )
    goto LABEL_60;
  Effect = ScrTerminalListTop__IsDisplayGetEffect((ScrTerminalListTop_o *)this, 0);
  if ( !byte_59350E3 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_59350E3 = 1;
  }
  this = (TerminalSceneComponent___c__DisplayClass256_0_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    this = (TerminalSceneComponent___c__DisplayClass256_0_o *)TerminalPramsManager_TypeInfo;
  }
  v19 = v2->fields.__4__this;
  BYTE2(this[3].fields.__9__6[1].fields.method) = Effect;
  if ( !v19 )
    goto LABEL_60;
  mTerminalList = v19->fields.mTerminalList;
  if ( !byte_593205C )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass256_0_o *)TerminalPramsManager_TypeInfo;
    byte_593205C = 1;
  }
  if ( !HIDWORD(this[4].fields.__9__2) )
  {
    j_il2cpp_runtime_class_init_0(this, method);
    this = (TerminalSceneComponent___c__DisplayClass256_0_o *)TerminalPramsManager_TypeInfo;
  }
  method_ptr_high = HIDWORD(this[3].fields.__9__6->fields.method_ptr);
  if ( !byte_5932720 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass256_0_o *)TerminalPramsManager_TypeInfo;
    byte_5932720 = 1;
  }
  if ( !HIDWORD(this[4].fields.__9__2) )
  {
    j_il2cpp_runtime_class_init_0(this, method);
    this = (TerminalSceneComponent___c__DisplayClass256_0_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !mTerminalList )
LABEL_60:
    sub_21FFECC(this, method);
  ScrTerminalListTop__RequestBattleSecnario(
    mTerminalList,
    method_ptr_high,
    LODWORD(this[3].fields.__9__6->fields.invoke_impl) + 1,
    0);
}


void TerminalSceneComponent___c__DisplayClass256_0___PlayAutoExecuteQuest_b__6(
        TerminalSceneComponent___c__DisplayClass256_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass256_0_o *v2; // x19
  struct TerminalSceneComponent_o *_4__this; // x8
  ScrTerminalListTop_o *mTerminalList; // x20
  int32_t klass_high; // w22
  int32_t method_ptr_high; // w23
  struct TerminalSceneComponent_o *v7; // x8

  v2 = this;
  if ( (byte_593AB50 & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass256_0_o *)sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593AB50 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_22;
  mTerminalList = _4__this->fields.mTerminalList;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_5932644 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932644 = 1;
  }
  this = (TerminalSceneComponent___c__DisplayClass256_0_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    this = (TerminalSceneComponent___c__DisplayClass256_0_o *)TerminalPramsManager_TypeInfo;
  }
  klass_high = HIDWORD(this[3].fields.__9__6->klass);
  if ( !byte_593205C )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass256_0_o *)TerminalPramsManager_TypeInfo;
    byte_593205C = 1;
  }
  if ( !HIDWORD(this[4].fields.__9__2) )
  {
    j_il2cpp_runtime_class_init_0(this, method);
    this = (TerminalSceneComponent___c__DisplayClass256_0_o *)TerminalPramsManager_TypeInfo;
  }
  method_ptr_high = HIDWORD(this[3].fields.__9__6->fields.method_ptr);
  if ( !byte_5932720 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass256_0_o *)TerminalPramsManager_TypeInfo;
    byte_5932720 = 1;
  }
  if ( !HIDWORD(this[4].fields.__9__2) )
  {
    j_il2cpp_runtime_class_init_0(this, method);
    this = (TerminalSceneComponent___c__DisplayClass256_0_o *)TerminalPramsManager_TypeInfo;
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
    || (this = (TerminalSceneComponent___c__DisplayClass256_0_o *)v7->fields.mTerminalList) == 0 )
  {
LABEL_22:
    sub_21FFECC(this, method);
  }
  ScrTerminalListTop__StartQuestBeforeFollower((ScrTerminalListTop_o *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass261_0___ctor(
        TerminalSceneComponent___c__DisplayClass261_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass261_0___PlayEventTutorial_b__0(
        TerminalSceneComponent___c__DisplayClass261_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass261_0_o *v2; // x19
  System_Action_o *_9__1; // x22
  TerminalSceneComponent_o *_4__this; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  v2 = this;
  if ( (byte_593AB51 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass261_0_o *)sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass261_0__PlayEventTutorial_b__1__);
    byte_593AB51 = 1;
  }
  _9__1 = v2->fields.__9__1;
  _4__this = v2->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_TerminalSceneComponent___c__DisplayClass261_0__PlayEventTutorial_b__1__,
      0);
    v2->fields.__9__1 = _9__1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v5, v6, v7, v8, v9, v10);
  }
  if ( !_4__this )
    sub_21FFECC(this, method);
  TerminalSceneComponent__PlayEventTutorialWithoutAfterAction(_4__this, _9__1, 0);
}


void TerminalSceneComponent___c__DisplayClass261_0___PlayEventTutorial_b__1(
        TerminalSceneComponent___c__DisplayClass261_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  TerminalSceneComponent___c__DisplayClass261_0_o *v4; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (mTerminalList = _4__this->fields.mTerminalList) == 0
    || (v4 = this, (this = (TerminalSceneComponent___c__DisplayClass261_0_o *)mTerminalList->fields.mActionBgColl) == 0)
    || (this = (TerminalSceneComponent___c__DisplayClass261_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0)) == 0 )
  {
    sub_21FFECC(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  ActionExtensions__Call(v4->fields.callbackAfter, 0);
}


void TerminalSceneComponent___c__DisplayClass279_0___ctor(
        TerminalSceneComponent___c__DisplayClass279_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass279_0___CheckRewardPopupChain_b__0(
        TerminalSceneComponent___c__DisplayClass279_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  ScrTerminalListTop_o *Instance; // x0
  __int64 v6; // x1
  struct TerminalSceneComponent_o *_4__this; // x8
  CommonUI_o *v8; // x21
  TerminalSceneComponent_o *v9; // x20

  if ( (byte_593AB52 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_DialogMessageMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593AB52 = 1;
  }
  Instance = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v8 = (CommonUI_o *)Instance;
  Instance = _4__this->fields.mTerminalList;
  if ( !Instance )
    goto LABEL_11;
  Instance = (ScrTerminalListTop_o *)ScrTerminalListTop__PopEventSvtGets(Instance, 0);
  if ( !v8
    || (CommonUI__SetupLoginResultData(v8, (System_Int32_array *)Instance, 0),
        v9 = this->fields.__4__this,
        (Instance = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (Instance = (ScrTerminalListTop_o *)CommonUI__get_CampaignDirectBonus((CommonUI_o *)Instance, 0), !v9)
    || (TerminalSceneComponent__SaveCampaignDirectBonusData(v9, (CommonUI_CampaignDirectBonusData_array *)Instance, 0),
        (Instance = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (ScrTerminalListTop_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_DialogMessageMaster___)) == 0 )
  {
LABEL_11:
    sub_21FFECC(Instance, v6);
  }
  DialogMessageMaster__ShowAvailables((DialogMessageMaster_o *)Instance, 1, action, 0, 0, 0, 0, 0);
}


void TerminalSceneComponent___c__DisplayClass279_0___CheckRewardPopupChain_b__1(
        TerminalSceneComponent___c__DisplayClass279_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x21
  System_Action_o *_9__6; // x23
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_593AB53 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass279_0__CheckRewardPopupChain_b__6__);
    byte_593AB53 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  _9__6 = this->fields.__9__6;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent___c__DisplayClass279_0__CheckRewardPopupChain_b__6__,
      0);
    this->fields.__9__6 = _9__6;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__6, (int32_t)_9__6, v9, v10, v11, v12, v13, v14);
  }
  if ( !v7 )
    sub_21FFECC(Instance, v6);
  CommonUI__StartLoginAndCampaignBonus(v7, action, _9__6, -1, 0);
}


void TerminalSceneComponent___c__DisplayClass279_0___CheckRewardPopupChain_b__2(
        TerminalSceneComponent___c__DisplayClass279_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  if ( this->fields.isDispFolder )
  {
    if ( action )
    {
      ((void (__fastcall *)(intptr_t, intptr_t))action->fields.invoke_impl)(
        action->fields.method_code,
        action->fields.method);
      return;
    }
LABEL_6:
    sub_21FFECC(this, action);
  }
  this = (TerminalSceneComponent___c__DisplayClass279_0_o *)this->fields.__4__this;
  if ( !this )
    goto LABEL_6;
  TerminalSceneComponent__CheckOnTerminalMap((TerminalSceneComponent_o *)this, action, 0);
}


void TerminalSceneComponent___c__DisplayClass279_0___CheckRewardPopupChain_b__4(
        TerminalSceneComponent___c__DisplayClass279_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (TerminalSceneComponent___c__DisplayClass279_0_o *)_4__this->fields.mTerminalList) == 0 )
    sub_21FFECC(this, action);
  ScrTerminalListTop__CheckLoginAfterTransitionDialog((ScrTerminalListTop_o *)this, action, 100, 0);
}


void TerminalSceneComponent___c__DisplayClass279_0___CheckRewardPopupChain_b__5(
        TerminalSceneComponent___c__DisplayClass279_0_o *this,
        const MethodInfo *method)
{
  _BOOL4 isDispFolder; // w8
  TerminalSceneComponent_o *_4__this; // x0
  TerminalPramsManager_c *v5; // x0
  TerminalPramsManager_c *v6; // x0
  int32_t EventID; // w20
  TerminalPramsManager_c *v8; // x0
  Il2CppObject *v9; // x20
  System_Action_o *v10; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_593AB54 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent_ReleaseRewardPopupChainResources__);
    byte_593AB54 = 1;
  }
  isDispFolder = this->fields.isDispFolder;
  entity = 0;
  if ( isDispFolder )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      TerminalSceneComponent__ReleaseRewardPopupChainResources(_4__this, 0);
      goto LABEL_6;
    }
LABEL_38:
    sub_21FFECC(_4__this, method);
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_5932644 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932644 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( v5->static_fields->_WarId_k__BackingField < 1 )
  {
    EventID = -1;
  }
  else
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v5, method);
    if ( !byte_5932644 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5932644 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      v6 = TerminalPramsManager_TypeInfo;
    }
    EventID = WarMaster__getEventID(v6->static_fields->_WarId_k__BackingField, 0);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  _4__this = (TerminalSceneComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !_4__this )
    goto LABEL_38;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)_4__this,
    &entity,
    EventID,
    (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_5934F8D )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5934F8D = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v8 = TerminalPramsManager_TypeInfo;
  }
  if ( v8->static_fields->_SpotId_k__BackingField < 1
    || !entity
    || !EventDetailEntity__IsMakeFarm((EventDetailEntity_o *)entity, 0) )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      if ( TerminalSceneComponent__ExistEventActionOnSpot(_4__this, 0) )
        goto LABEL_6;
      v9 = (Il2CppObject *)this->fields.__4__this;
      v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v10, v9, Method_TerminalSceneComponent_ReleaseRewardPopupChainResources__, 0);
      if ( v9 )
      {
        TerminalSceneComponent__CheckOpenCampaignDirectBonus((TerminalSceneComponent_o *)v9, v10, 0);
        goto LABEL_6;
      }
    }
    goto LABEL_38;
  }
LABEL_6:
  ActionExtensions__Call(this->fields.afterChain, 0);
}


void TerminalSceneComponent___c__DisplayClass279_0___CheckRewardPopupChain_b__6(
        TerminalSceneComponent___c__DisplayClass279_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (TerminalSceneComponent___c__DisplayClass279_0_o *)_4__this->fields.mPlayerStatus) == 0 )
    sub_21FFECC(this, method);
  ScrPlayerStatus__mfInitUserData((ScrPlayerStatus_o *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass282_0___ctor(
        TerminalSceneComponent___c__DisplayClass282_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass282_0___CheckOpenCampaignDirectBonus_b__2(
        TerminalSceneComponent___c__DisplayClass282_0_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalSceneComponent___c__DisplayClass282_0_o *v8; // x19
  struct TerminalSceneComponent_o *_4__this; // x8
  TerminalPramsManager_c *v10; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  v8 = this;
  if ( (byte_593AB55 & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass282_0_o *)sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593AB55 = 1;
  }
  _4__this = v8->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(this, method);
  _4__this->fields._IsPlayingCampaignDirectBonus_k__BackingField = 0;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_5935A03 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5935A03 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v10->static_fields;
  static_fields->_CampaignDirectBonus_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_CampaignDirectBonus_k__BackingField,
    0,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  TerminalPramsManager__CampaignDirectBonus_SaveData(0);
  ActionExtensions__Call(v8->fields.callback, 0);
}


void TerminalSceneComponent___c__DisplayClass290_0___ctor(
        TerminalSceneComponent___c__DisplayClass290_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass290_0___CheckSaveRouteSelect_b__0(
        TerminalSceneComponent___c__DisplayClass290_0_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  if ( (byte_593AB56 & 1) == 0 )
  {
    sub_21FFC50(&ScriptManager_TypeInfo);
    byte_593AB56 = 1;
  }
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, str);
  ScriptManager__ClearSelectRouteArray(0);
  ScriptManager__ClearSelectRouteArrayInCollection(0);
  ActionExtensions__Call(this->fields.callback, 0);
}


void TerminalSceneComponent___c__DisplayClass293_0___ctor(
        TerminalSceneComponent___c__DisplayClass293_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass293_0___CheckMasterMissionReset_b__0(
        TerminalSceneComponent___c__DisplayClass293_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  TerminalSceneComponent_c *v15; // x0
  System_String_o *MASTER_MISSION_RESET_KEY; // x21
  System_String_o *v17; // x0
  Il2CppObject *Instance; // x19
  System_Action_o *v19; // x21

  if ( (byte_593AB57 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass293_1__CheckMasterMissionReset_b__1__);
    sub_21FFC50(&TerminalSceneComponent___c__DisplayClass293_1_TypeInfo);
    byte_593AB57 = 1;
  }
  v5 = sub_21FFEBC(TerminalSceneComponent___c__DisplayClass293_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  v15 = TerminalSceneComponent_TypeInfo;
  *(_BYTE *)(v5 + 16) = isDecide;
  if ( !*(&v15->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v15, v14);
    v15 = TerminalSceneComponent_TypeInfo;
  }
  MASTER_MISSION_RESET_KEY = v15->static_fields->MASTER_MISSION_RESET_KEY;
  v17 = System_Int64__ToString((int64_t)&this->fields, 0);
  UnityEngine_PlayerPrefs__SetString(MASTER_MISSION_RESET_KEY, v17, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v19 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass293_1__CheckMasterMissionReset_b__1__,
    0);
  if ( !Instance )
LABEL_8:
    sub_21FFECC(v6, v7);
  CommonUI__CloseConfirmDialog_37292452((CommonUI_o *)Instance, v19, 0);
}


void TerminalSceneComponent___c__DisplayClass293_0___CheckMasterMissionReset_b__2(
        TerminalSceneComponent___c__DisplayClass293_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  ScrPlayerStatus_o *mPlayerStatus; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (mPlayerStatus = _4__this->fields.mPlayerStatus) == 0 )
    sub_21FFECC(this, method);
  ScrPlayerStatus__OpenMasterMission(mPlayerStatus, this->fields.callback, -1, 0);
}


void TerminalSceneComponent___c__DisplayClass293_1___ctor(
        TerminalSceneComponent___c__DisplayClass293_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass293_1___CheckMasterMissionReset_b__1(
        TerminalSceneComponent___c__DisplayClass293_1_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass293_1_o *v2; // x20
  AvalonSceneManager_c *v3; // x8
  CommonUI_o *v4; // x19
  struct TerminalSceneComponent___c__DisplayClass293_0_o *CS___8__locals1; // x20
  System_Action_o *_9__2; // x21
  float DEFAULT_FADE_TIME; // s8
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct TerminalSceneComponent___c__DisplayClass293_0_o *v14; // x8

  v2 = this;
  if ( (byte_593AB58 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (TerminalSceneComponent___c__DisplayClass293_1_o *)sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass293_0__CheckMasterMissionReset_b__2__);
    byte_593AB58 = 1;
  }
  if ( v2->fields.isDecide )
  {
    this = (TerminalSceneComponent___c__DisplayClass293_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v3 = AvalonSceneManager_TypeInfo;
    v4 = (CommonUI_o *)this;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method);
      v3 = AvalonSceneManager_TypeInfo;
    }
    CS___8__locals1 = v2->fields.CS___8__locals1;
    if ( CS___8__locals1 )
    {
      _9__2 = CS___8__locals1->fields.__9__2;
      DEFAULT_FADE_TIME = v3->static_fields->DEFAULT_FADE_TIME;
      if ( !_9__2 )
      {
        _9__2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__2,
          (Il2CppObject *)CS___8__locals1,
          Method_TerminalSceneComponent___c__DisplayClass293_0__CheckMasterMissionReset_b__2__,
          0);
        CS___8__locals1->fields.__9__2 = _9__2;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&CS___8__locals1->fields.__9__2,
          (int32_t)_9__2,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13);
      }
      if ( v4 )
      {
        CommonUI__maskFadeout(v4, 1, DEFAULT_FADE_TIME, _9__2, 0);
        return;
      }
    }
LABEL_13:
    sub_21FFECC(this, method);
  }
  v14 = v2->fields.CS___8__locals1;
  if ( !v14 )
    goto LABEL_13;
  ActionExtensions__Call(v14->fields.callback, 0);
}


void TerminalSceneComponent___c__DisplayClass294_0___ctor(
        TerminalSceneComponent___c__DisplayClass294_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass294_0___CheckNotificationDialog_b__0(
        TerminalSceneComponent___c__DisplayClass294_0_o *this,
        const MethodInfo *method)
{
  BattleResultBondsComponent_c *v3; // x0

  if ( (byte_593AB59 & 1) == 0 )
  {
    sub_21FFC50(&BattleResultBondsComponent_TypeInfo);
    byte_593AB59 = 1;
  }
  v3 = BattleResultBondsComponent_TypeInfo;
  if ( !*(&BattleResultBondsComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, method);
    v3 = BattleResultBondsComponent_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3->static_fields->GET_EXIST_SVT_KEY, 0);
  ActionExtensions__Call(this->fields.callBack, 0);
}


void TerminalSceneComponent___c__DisplayClass294_0___CheckNotificationDialog_b__2(
        TerminalSceneComponent___c__DisplayClass294_0_o *this,
        const MethodInfo *method)
{
  BattleResultBondsComponent_c *v3; // x0

  if ( (byte_593AB5A & 1) == 0 )
  {
    sub_21FFC50(&BattleResultBondsComponent_TypeInfo);
    byte_593AB5A = 1;
  }
  v3 = BattleResultBondsComponent_TypeInfo;
  if ( !*(&BattleResultBondsComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, method);
    v3 = BattleResultBondsComponent_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3->static_fields->GET_EXIST_SVT_KEY, 0);
  ActionExtensions__Call(this->fields.callBack, 0);
}


void TerminalSceneComponent___c__DisplayClass294_1___ctor(
        TerminalSceneComponent___c__DisplayClass294_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass294_1___CheckNotificationDialog_b__1(
        TerminalSceneComponent___c__DisplayClass294_1_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct TerminalSceneComponent___c__DisplayClass294_0_o *CS___8__locals1; // x21
  GetSvtCoin_array *coin; // x20
  CommonUI_o *v7; // x19
  System_Action_o *_9__2; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_593AB5B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass294_0__CheckNotificationDialog_b__2__);
    byte_593AB5B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  coin = this->fields.coin;
  v7 = (CommonUI_o *)Instance;
  _9__2 = CS___8__locals1->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)CS___8__locals1,
      Method_TerminalSceneComponent___c__DisplayClass294_0__CheckNotificationDialog_b__2__,
      0);
    CS___8__locals1->fields.__9__2 = _9__2;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&CS___8__locals1->fields.__9__2,
      (int32_t)_9__2,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !v7 )
LABEL_8:
    sub_21FFECC(Instance, v4);
  CommonUI__CreateServantCoinConfirmDialog(v7, 1, coin, _9__2, 0);
}


void TerminalSceneComponent___c__DisplayClass320_0___ctor(
        TerminalSceneComponent___c__DisplayClass320_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass320_0___FadeInAndTriggerEventEffects_b__0(
        TerminalSceneComponent___c__DisplayClass320_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(0, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffectsCore(
    _4__this,
    this->fields.fadeTime,
    this->fields.eventId,
    this->fields.callback,
    0);
}


void TerminalSceneComponent__coFadein_WorldDisp_d__218___ctor(
        TerminalSceneComponent__coFadein_WorldDisp_d__218_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool TerminalSceneComponent__coFadein_WorldDisp_d__218__MoveNext(
        TerminalSceneComponent__coFadein_WorldDisp_d__218_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent__coFadein_WorldDisp_d__218_o *v2; // x19
  int32_t _1__state; // w8
  struct TerminalSceneComponent_o *_4__this; // x20
  bool result; // w0
  Il2CppObject *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct TerminalSceneComponent_o *v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  Il2CppObject *endAct; // x1
  TerminalPramsManager_c *v27; // x0
  __int64 v28; // x1
  System_Collections_IEnumerator_o *v29; // x0
  System_Action_c *klass; // x8
  __int64 v31; // x8
  TerminalPramsManager_c *v32; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  __int64 v34; // x1
  System_Collections_IEnumerator_o *v35; // x0
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  Il2CppObject *Master_object; // x21
  System_String_o *PrioredFolderBGM; // x21
  int v45; // w24
  int32_t method_info_high; // w8
  int monitor; // w24
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct ScrTerminalListTop_o *v49; // x8
  Il2CppObject *v50; // x19
  System_Action_o *v51; // x21
  TerminalPramsManager_c *v52; // x0
  System_String_o *v53; // x0
  _QWORD *v54; // x0
  __int64 v55; // x1
  System_Reflection_MethodBase_o *v56; // x20
  ScrTerminalListTop_c *v57; // x8
  __int64 v58; // x1
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v60; // x0
  ScrTerminalListTop_c *v61; // x0
  float *p_GrandMovieFadeTime; // x8
  AvalonSceneManager_c *v63; // x0
  float DEFAULT_FADE_TIME; // s8
  Il2CppObject *v65; // x21
  System_Action_o *v66; // x0
  intptr_t *v67; // x8
  __int64 v68; // x1
  AvalonSceneManager_c *v69; // x8
  System_Action_o *v70; // x19
  struct TerminalSceneComponent___c__DisplayClass218_0_o *_8__1; // x9
  int32_t index; // [xsp+4h] [xbp-4Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_593AB60 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_WarMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_21FFC50(&System_GC_TypeInfo);
    sub_21FFC50(&ScrTerminalListTop_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass218_0__coFadein_WorldDisp_b__0__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass218_0__coFadein_WorldDisp_b__1__);
    sub_21FFC50(&Method_TerminalSceneComponent___c__DisplayClass218_0__coFadein_WorldDisp_b__2__);
    sub_21FFC50(&TerminalSceneComponent___c__DisplayClass218_0_TypeInfo);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)sub_21FFC50(&Method_TerminalSceneComponent__coFadein_WorldDisp_d__218_MoveNext__);
    byte_593AB60 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  entity = 0;
  index = 0;
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
    v6 = (Il2CppObject *)sub_21FFEBC(TerminalSceneComponent___c__DisplayClass218_0_TypeInfo);
    System_Object___ctor(v6, 0);
    v2->fields.__8__1 = (struct TerminalSceneComponent___c__DisplayClass218_0_o *)v6;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v2->fields.__8__1, (int32_t)v6, v7, v8, v9, v10, v11, v12);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_151;
    v19 = v2->fields.__4__this;
    *(_QWORD *)&this->fields.__1__state = v19;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v19, v13, v14, v15, v16, v17, v18);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_151;
    endAct = (Il2CppObject *)v2->fields.endAct;
    this->fields.__2__current = endAct;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
      (int32_t)endAct,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    v2->fields._isAuto_5__2 = 0;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    if ( !byte_59354C5 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_59354C5 = 1;
    }
    v27 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      v27 = TerminalPramsManager_TypeInfo;
    }
    if ( !v27->static_fields->_IsMapReturnFolder_k__BackingField )
    {
      if ( !*(&v27->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v27, method);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)TerminalPramsManager__IsAuto(0);
      v2->fields._isAuto_5__2 = (unsigned __int8)this & 1;
      if ( !_4__this )
        goto LABEL_151;
      TerminalSceneComponent__EndAuto(_4__this, 0);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
      if ( !this )
        goto LABEL_151;
      if ( RewardMiniPopupExecutor__IsBusy((RewardMiniPopupExecutor_o *)this, 0) )
      {
        v29 = TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect(_4__this, 0);
        UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)_4__this, v29, 0);
      }
      else
      {
        if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v28);
        SoundManager__stopSe(0.0, 0);
      }
    }
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    if ( !byte_5934080 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5934080 = 1;
    }
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)TerminalPramsManager_TypeInfo;
    }
    if ( HIBYTE(this[2].fields.endAct->fields.original_method_info) )
    {
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
      if ( !byte_5931EF0 )
      {
        sub_21FFC50(&TerminalSceneComponent_TypeInfo);
        byte_5931EF0 = 1;
      }
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)TerminalSceneComponent_TypeInfo;
      }
      klass = this[2].fields.endAct->klass;
      if ( !klass )
        goto LABEL_151;
      v31 = *(_QWORD *)&klass->_2.static_fields_size;
      if ( !v31 )
        goto LABEL_151;
      this = *(TerminalSceneComponent__coFadein_WorldDisp_d__218_o **)(v31 + 552);
      if ( !this )
        goto LABEL_151;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    }
    if ( !_4__this )
      goto LABEL_151;
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)_4__this->fields.mTerminalMap;
    if ( !this )
      goto LABEL_151;
    ScrTerminalMap__SetDisp((ScrTerminalMap_o *)this, 0, 0);
    if ( _4__this->fields._IsReq_InitEarthRotateY_k__BackingField )
    {
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)_4__this->fields.mEarthCore;
      _4__this->fields._IsReq_InitEarthRotateY_k__BackingField = 0;
      if ( !this )
        goto LABEL_151;
      BaseCore__SetRotateY_PointInitAngle((BaseCore_o *)this, 0);
    }
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)_4__this->fields.mTerminalList;
    if ( !this )
      goto LABEL_151;
    if ( !ScrTerminalListTop__isShowingFolder((ScrTerminalListTop_o *)this, 0) )
    {
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      if ( !byte_5934D85 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_5934D85 = 1;
      }
      v32 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
        v32 = TerminalPramsManager_TypeInfo;
      }
      static_fields = v32->static_fields;
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)_4__this->fields.mTitleInfo;
      static_fields->_DispState_k__BackingField = 1;
      if ( !this )
        goto LABEL_151;
      TitleInfoControl__SetActiveEventInfo_46813516((TitleInfoControl_o *)this, 1, 16, 0, 0, 0, 0);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_151;
      CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, 0, 1, 0);
    }
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_151;
    CommonUI__SetBgCameraActive((CommonUI_o *)this, 1, 0);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)_4__this->fields.mTerminalMap;
    if ( !this )
      goto LABEL_151;
    ScrTerminalMap__ReleaseMap((ScrTerminalMap_o *)this, 1, 0);
    if ( !*(&System_GC_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, v34);
    System_GC__Collect(0);
    if ( v2->fields.isExecuteUnusedAssets )
    {
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( this )
      {
        AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0, 0);
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          v35 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0);
          v2->fields.__2__current = (Il2CppObject *)v35;
          p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
          sub_21FFBF4(p__2__current, (int32_t)v35, v37, v38, v39, v40, v41, v42);
          result = 1;
          p__2__current[-1].fields._BoardType_k__BackingField = 1;
          return result;
        }
      }
      goto LABEL_151;
    }
  }
  if ( v2->fields._isAuto_5__2 )
  {
    if ( !_4__this )
      goto LABEL_151;
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)_4__this->fields.mTerminalList;
    if ( !this )
      goto LABEL_151;
    if ( ScrTerminalListTop__isShowingFolder((ScrTerminalListTop_o *)this, 0) )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      if ( !byte_5932644 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_5932644 = 1;
      }
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !Master_object )
        goto LABEL_151;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             HIDWORD(this[2].fields.endAct->klass),
             (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
      {
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)_4__this->fields.mTerminalList;
        if ( !this )
          goto LABEL_151;
        PrioredFolderBGM = ScrTerminalListTop__GetPrioredFolderBGM((ScrTerminalListTop_o *)this, 0);
        if ( !TerminalSceneComponent__TryPlayExRoomBgm(_4__this, 0) )
        {
          this = (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)System_String__IsNullOrEmpty(
                                                                          PrioredFolderBGM,
                                                                          0);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_133;
          if ( !entity )
            goto LABEL_151;
          v45 = (int)entity[1].klass;
          this = (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)BalanceConfig_TypeInfo;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
            this = (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)BalanceConfig_TypeInfo;
          }
          method_info_high = HIDWORD(this[2].fields.endAct[6].fields.method_info);
          if ( v45 == method_info_high )
            goto LABEL_133;
          if ( !entity )
            goto LABEL_151;
          monitor = (int)entity[3].monitor;
          if ( !HIDWORD(this[3].monitor) )
          {
            j_il2cpp_runtime_class_init_0(this, method);
            method_info_high = BalanceConfig_TypeInfo->static_fields->OrdealCallWarId;
          }
          if ( monitor == method_info_high || !TerminalSceneComponent__IsValidGrandBgm(_4__this, &index, 0) )
LABEL_133:
            TerminalSceneComponent__playBgm(_4__this, PrioredFolderBGM, 0, 0.0, 0);
          else
            TerminalSceneComponent__PlayGrandBgm(_4__this, index, 0, 0);
        }
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
        if ( !byte_5934080 )
        {
          sub_21FFC50(&TerminalPramsManager_TypeInfo);
          byte_5934080 = 1;
        }
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
          this = (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)TerminalPramsManager_TypeInfo;
        }
        if ( !HIBYTE(this[2].fields.endAct->fields.original_method_info) )
        {
          if ( !entity )
            goto LABEL_151;
          _8__1 = v2->fields.__8__1;
          if ( !_8__1 )
            goto LABEL_151;
          TerminalSceneComponent__FadeInAndTriggerEventEffects(
            _4__this,
            v2->fields.fadeTime,
            (int32_t)entity[6].klass,
            _8__1->fields.endAct,
            0);
          return 0;
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v69 = AvalonSceneManager_TypeInfo;
        if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v68);
          v69 = AvalonSceneManager_TypeInfo;
        }
        v65 = (Il2CppObject *)v2->fields.__8__1;
        DEFAULT_FADE_TIME = v69->static_fields->DEFAULT_FADE_TIME;
        v66 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        v67 = &Method_TerminalSceneComponent___c__DisplayClass218_0__coFadein_WorldDisp_b__2__;
        goto LABEL_144;
      }
    }
  }
  else if ( !_4__this )
  {
    goto LABEL_151;
  }
  this = (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)_4__this->fields.mTerminalList;
  if ( !this )
    goto LABEL_151;
  this = (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)ScrTerminalListTop__get_IsActiveBlankEarth(
                                                                  (ScrTerminalListTop_o *)this,
                                                                  0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    mTerminalList = _4__this->fields.mTerminalList;
    if ( !mTerminalList )
      goto LABEL_151;
    if ( !mTerminalList->fields.isBackFromBlankEarthMap )
    {
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)TerminalSceneComponent__TryPlayExRoomBgm(
                                                                      _4__this,
                                                                      0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)TerminalSceneComponent__TryPlayGrandBgm(
                                                                        _4__this,
                                                                        0,
                                                                        0);
        if ( ((unsigned __int8)this & 1) == 0 )
          TerminalSceneComponent__playDefaultBgm(_4__this, 0, 0.0, 0);
      }
    }
  }
  v49 = _4__this->fields.mTerminalList;
  if ( !v49 )
LABEL_151:
    sub_21FFECC(this, method);
  if ( !v49->fields.isBackFromBlankEarthMap )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    if ( !byte_59354AA )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_59354AA = 1;
    }
    v52 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      v52 = TerminalPramsManager_TypeInfo;
    }
    if ( v52->static_fields->_IsTransFromOrdealCall_k__BackingField )
    {
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)_4__this->fields.mTerminalList;
      if ( !this )
        goto LABEL_151;
      v53 = ScrTerminalListTop__CheckTerminalTopEffect((ScrTerminalListTop_o *)this, 0);
      if ( System_String__IsNullOrEmpty(v53, 0) )
      {
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__218_o *)_4__this->fields.mTerminalList;
        if ( !this )
          goto LABEL_151;
        ScrTerminalListTop__PlayBgmOpeningMovieAfter((ScrTerminalListTop_o *)this, 0);
      }
      else
      {
        v54 = Method_TerminalSceneComponent__coFadein_WorldDisp_d__218_MoveNext__;
        if ( (*((_BYTE *)Method_TerminalSceneComponent__coFadein_WorldDisp_d__218_MoveNext__ + 83) & 2) != 0 )
          v54 = (_QWORD *)sub_21FFC68(Method_TerminalSceneComponent__coFadein_WorldDisp_d__218_MoveNext__);
        v56 = (System_Reflection_MethodBase_o *)sub_21FFC34(v54, v54[4]);
        v57 = ScrTerminalListTop_TypeInfo;
        if ( !*(&ScrTerminalListTop_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v55);
          v57 = ScrTerminalListTop_TypeInfo;
        }
        OverwriteAssetSoundName__PlaySe(v56, v57->static_fields->GrandMovieAfterSEName, 0, 0);
      }
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v58);
    if ( !byte_59354AA )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_59354AA = 1;
    }
    v60 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v58);
      v60 = TerminalPramsManager_TypeInfo;
    }
    if ( v60->static_fields->_IsTransFromOrdealCall_k__BackingField )
    {
      v61 = ScrTerminalListTop_TypeInfo;
      if ( !*(&ScrTerminalListTop_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v58);
        v61 = ScrTerminalListTop_TypeInfo;
      }
      p_GrandMovieFadeTime = &v61->static_fields->GrandMovieFadeTime;
    }
    else
    {
      v63 = AvalonSceneManager_TypeInfo;
      if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v58);
        v63 = AvalonSceneManager_TypeInfo;
      }
      p_GrandMovieFadeTime = &v63->static_fields->DEFAULT_FADE_TIME;
    }
    DEFAULT_FADE_TIME = *p_GrandMovieFadeTime;
    v65 = (Il2CppObject *)v2->fields.__8__1;
    v66 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    v67 = &Method_TerminalSceneComponent___c__DisplayClass218_0__coFadein_WorldDisp_b__1__;
LABEL_144:
    v70 = v66;
    System_Action___ctor(v66, v65, *v67, 0);
    if ( !Instance )
      goto LABEL_151;
    CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v70, 0);
    return 0;
  }
  v50 = (Il2CppObject *)v2->fields.__8__1;
  v51 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v51, v50, Method_TerminalSceneComponent___c__DisplayClass218_0__coFadein_WorldDisp_b__0__, 0);
  TerminalSceneComponent__StartWindowMessage(_4__this, v51, 0);
  return 0;
}


Il2CppObject *TerminalSceneComponent__coFadein_WorldDisp_d__218__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__coFadein_WorldDisp_d__218_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TerminalSceneComponent__coFadein_WorldDisp_d__218__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__coFadein_WorldDisp_d__218_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_TerminalSceneComponent__coFadein_WorldDisp_d__218_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *TerminalSceneComponent__coFadein_WorldDisp_d__218__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__coFadein_WorldDisp_d__218_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TerminalSceneComponent__coFadein_WorldDisp_d__218__System_IDisposable_Dispose(
        TerminalSceneComponent__coFadein_WorldDisp_d__218_o *this,
        const MethodInfo *method)
{
  ;
}