void TerminalSceneComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  TerminalSceneComponent_c *v7; // x8
  int32_t v8; // w1
  struct TerminalSceneComponent_StaticFields *static_fields; // x0
  int32_t v10; // w1
  struct TerminalSceneComponent_StaticFields *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w1
  struct TerminalSceneComponent_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w1
  struct TerminalSceneComponent_StaticFields *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int32_t v34; // w1
  struct TerminalSceneComponent_StaticFields *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  int32_t v42; // w1
  struct TerminalSceneComponent_StaticFields *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7

  if ( (byte_4E06E23 & 1) == 0 )
  {
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    sub_1CE6700(&StringLiteral_10158/*"OverwriteCommonBG2"*/);
    sub_1CE6700(&StringLiteral_10739/*"PlanetEarthChapterPlayState_{0}"*/);
    sub_1CE6700(&StringLiteral_10157/*"OverwriteCommonBG1"*/);
    sub_1CE6700(&StringLiteral_21793/*"masterMissionResetKey"*/);
    sub_1CE6700(&StringLiteral_13825/*"Terminal/EarthCore/{0:D2}"*/);
    sub_1CE6700(&StringLiteral_10137/*"OrdealCallChapterPlayState"*/);
    byte_4E06E23 = 1;
  }
  v7 = TerminalSceneComponent_TypeInfo;
  TerminalSceneComponent_TypeInfo->static_fields->DEFAULT_AMBIENT_LIGHT_COLOR = (struct UnityEngine_Color_o)xmmword_D25C40;
  v8 = StringLiteral_21793/*"masterMissionResetKey"*/;
  static_fields = v7->static_fields;
  static_fields->MASTER_MISSION_RESET_KEY = (struct System_String_o *)StringLiteral_21793/*"masterMissionResetKey"*/;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&static_fields->MASTER_MISSION_RESET_KEY, v8, v1, v2, v3, v4, v5, v6);
  v10 = StringLiteral_13825/*"Terminal/EarthCore/{0:D2}"*/;
  v11 = TerminalSceneComponent_TypeInfo->static_fields;
  v11->EARTH_ASSET_NAME = (struct System_String_o *)StringLiteral_13825/*"Terminal/EarthCore/{0:D2}"*/;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v11->EARTH_ASSET_NAME, v10, v12, v13, v14, v15, v16, v17);
  v18 = StringLiteral_10137/*"OrdealCallChapterPlayState"*/;
  v19 = TerminalSceneComponent_TypeInfo->static_fields;
  v19->OrdealCallChapterPlayStateKey = (struct System_String_o *)StringLiteral_10137/*"OrdealCallChapterPlayState"*/;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v19->OrdealCallChapterPlayStateKey, v18, v20, v21, v22, v23, v24, v25);
  v26 = StringLiteral_10739/*"PlanetEarthChapterPlayState_{0}"*/;
  v27 = TerminalSceneComponent_TypeInfo->static_fields;
  v27->PlanetEarthChapterPlayStateKeyFormat = (struct System_String_o *)StringLiteral_10739/*"PlanetEarthChapterPlayState_{0}"*/;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&v27->PlanetEarthChapterPlayStateKeyFormat,
    v26,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = StringLiteral_10157/*"OverwriteCommonBG1"*/;
  v35 = TerminalSceneComponent_TypeInfo->static_fields;
  v35->OVERWRITE_COMMON_BG_TYPE1_KEY = (struct System_String_o *)StringLiteral_10157/*"OverwriteCommonBG1"*/;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v35->OVERWRITE_COMMON_BG_TYPE1_KEY, v34, v36, v37, v38, v39, v40, v41);
  v42 = StringLiteral_10158/*"OverwriteCommonBG2"*/;
  v43 = TerminalSceneComponent_TypeInfo->static_fields;
  v43->OVERWRITE_COMMON_BG_TYPE2_KEY = (struct System_String_o *)StringLiteral_10158/*"OverwriteCommonBG2"*/;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v43->OVERWRITE_COMMON_BG_TYPE2_KEY, v42, v44, v45, v46, v47, v48, v49);
  *(_WORD *)&TerminalSceneComponent_TypeInfo->static_fields->isTitleToTerminalTransition = 0;
}


void TerminalSceneComponent___ctor(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  this->fields.TUTORIAL_SPOT_ARROW_POS = (struct UnityEngine_Vector2_o)3263954944LL;
  this->fields.TUTORIAL_SPOT_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_D26170;
  *(_OWORD *)&this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x = xmmword_D25E80;
  this->fields.TUTORIAL_QUEST_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_D24F20;
  *(_OWORD *)&this->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x = xmmword_D25E90;
  this->fields.TUTORIAL_MENU_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_D26260;
  *(_OWORD *)&this->fields.TUTORIAL_MENU_MESSAGE_POS.fields.x = xmmword_D248B0;
  this->fields.TUTORIAL_GACHA_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_D25060;
  this->fields.TUTORIAL_COMBINE_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_D253E0;
  this->fields.isTopLoginBusy = 1;
  this->fields.TUTORIAL_COMBINE_ARROW_POS = (struct UnityEngine_Vector2_o)0xC3200000C3058000LL;
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.TUTORIAL_MENU_ARROW_POS2 = (struct UnityEngine_Vector2_o)0xC366000043DB0000LL;
  this->fields._FirstFadeMapColorKind_k__BackingField = 2;
  this->fields._FirstFadeMapColor_k__BackingField = _Q0;
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void TerminalSceneComponent__Awake(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalSceneComponent_c *v9; // x0
  __int64 v10; // x1
  UnityEngine_GameObject_o *mBgText; // x0
  bool v12; // w1

  if ( (byte_4E06DD2 & 1) == 0 )
  {
    sub_1CE6700(&ServantCommentManager_TypeInfo);
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4E06DD2 = 1;
  }
  v9 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v9 = TerminalSceneComponent_TypeInfo;
  }
  v9->static_fields->mInstance = this;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)TerminalSceneComponent_TypeInfo->static_fields,
    (int32_t)this,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
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
          v12 = 0;
          goto LABEL_16;
        }
      }
    }
LABEL_17:
    sub_1CE6958(mBgText, v10);
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
  v12 = 1;
LABEL_16:
  UnityEngine_GameObject__SetActive(mBgText, v12, 0);
}


void TerminalSceneComponent__CallAfterTopHome(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( this->fields.isTopLoginBusy )
  {
    this->fields.afterTopLogin = callback;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.afterTopLogin,
      (int32_t)callback,
      (int32_t)method,
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
    sub_1CE6958(0, item);
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
    sub_1CE6958(0, questId);
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
    sub_1CE6958(this, item);
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
    sub_1CE6958(this, method);
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
    sub_1CE6958(this, isPlaySe);
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

  if ( (byte_4E06E21 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    sub_1CE6700(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4E06E21 = 1;
  }
  v4 = (EventTutorialMaster_EventTutorialArgs_o *)sub_1CE694C(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor(v4, 0);
  if ( !v4
    || (v4->fields.eventId = 0,
        v4->fields.openKind = openType,
        v7 = sub_1CE694C(EventTutorialMaster_EventTutorialArgs_TypeInfo),
        EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v7, 0),
        !v7)
    || (*(_QWORD *)(v7 + 16) = 0x5300000000LL,
        AvailableTutorialArray = EventTutorialMaster__GetAvailableTutorialArray(v4, 0),
        IsNullOrEmpty = (System_Collections_ICollection_o *)EventTutorialMaster__GetAvailableTutorialArray(
                                                              (EventTutorialMaster_EventTutorialArgs_o *)v7,
                                                              0),
        !AvailableTutorialArray) )
  {
LABEL_31:
    sub_1CE6958(IsNullOrEmpty, v6);
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
                                                            0);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        textJson = v12->fields.textJson;
        if ( !textJson )
          goto LABEL_31;
        if ( !LODWORD(textJson->max_length) )
          break;
        v14 = textJson->m_Items[0];
        if ( !v14 )
          goto LABEL_31;
        if ( v14->fields.isQuestRelease )
        {
          IsNullOrEmpty = (System_Collections_ICollection_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( IsNullOrEmpty )
          {
            IsNullOrEmpty = (System_Collections_ICollection_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            v15 = v12->fields.textJson;
            if ( !v15 )
              goto LABEL_31;
            if ( !LODWORD(v15->max_length) )
              break;
            v16 = v15->m_Items[0];
            if ( !v16 || !IsNullOrEmpty )
              goto LABEL_31;
            IsNullOrEmpty = (System_Collections_ICollection_o *)QuestTree__GetQuestInfo(
                                                                  (QuestTree_o *)IsNullOrEmpty,
                                                                  v16->fields.questId,
                                                                  0);
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
              if ( klass == *((_DWORD *)IsNullOrEmpty[11].monitor + 213) )
              {
                IsNullOrEmpty = (System_Collections_ICollection_o *)BasicHelper__IsNullOrEmpty(v10, 0);
                if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
                {
                  v19 = v12->fields.textJson;
                  if ( !v19 )
                    goto LABEL_31;
                  if ( !LODWORD(v19->max_length) )
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
    sub_1CE6960(IsNullOrEmpty);
  }
}


bool TerminalSceneComponent__CheckEventDailyPoint(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  TerminalPramsManager_c *v6; // x0
  int64_t BeforeTimeEventDailyPoint_k__BackingField; // x21
  System_DateTime_o v8; // x20
  TerminalPramsManager_c *v9; // x0
  System_DateTime_o v10; // x0
  int32_t Hour; // w19
  BalanceConfig_c *v12; // x8
  System_DateTime_o v13; // x0
  System_DateTime_o v14; // x0
  int32_t Year; // w19
  System_DateTime_o v16; // x0
  int32_t Month; // w21
  System_DateTime_o v18; // x0
  int32_t Day; // w0
  BalanceConfig_c *v20; // x8
  int32_t v21; // w22
  System_DateTime_o v22; // x0
  System_DateTime_o v23; // x1
  System_DateTime_o v24; // x0
  System_DateTime_o t2; // [xsp+0h] [xbp-50h] BYREF
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4E06E05 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1CE6700(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1CE6700(&System_DateTime_TypeInfo);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E06E05 = 1;
  }
  entity = 0;
  t2.fields._dateData = 0;
  dateData = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_40;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_34E92A8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_40:
    sub_1CE6958(Instance, v5);
  if ( EventDetailEntity__IsEventDailyPoint((EventDetailEntity_o *)entity, 0) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E01E29 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E01E29 = 1;
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
    v8.fields._dateData = NetworkManager__getDateTime_42520728(BeforeTimeEventDailyPoint_k__BackingField, 0).fields._dateData;
    if ( !byte_4E01E28 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E01E28 = 1;
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
    dateData = NetworkManager__getServerDateTime(0).fields._dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v10.fields._dateData = (uint64_t)&dateData;
    Hour = System_DateTime__get_Hour(v10, 0);
    v12 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v12 = BalanceConfig_TypeInfo;
    }
    if ( Hour < v12->static_fields->EventDailyPointResetAt )
    {
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v13.fields._dateData = (uint64_t)&dateData;
      dateData = System_DateTime__AddDays(v13, -1.0, 0).fields._dateData;
    }
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v14.fields._dateData = (uint64_t)&dateData;
    Year = System_DateTime__get_Year(v14, 0);
    v16.fields._dateData = (uint64_t)&dateData;
    Month = System_DateTime__get_Month(v16, 0);
    v18.fields._dateData = (uint64_t)&dateData;
    Day = System_DateTime__get_Day(v18, 0);
    v20 = BalanceConfig_TypeInfo;
    v21 = Day;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v20 = BalanceConfig_TypeInfo;
    }
    v22.fields._dateData = (uint64_t)&t2;
    System_DateTime___ctor_66507560(v22, Year, Month, v21, v20->static_fields->EventDailyPointResetAt, 0, 0, 0);
    v23.fields._dateData = t2.fields._dateData;
    v24.fields._dateData = v8.fields._dateData;
    if ( System_DateTime__op_LessThanOrEqual(v24, v23, 0) )
      return 1;
  }
  return 0;
}


void TerminalSceneComponent__CheckExchangeDialogTheFree(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *String_72876844; // x0
  const MethodInfo *v6; // x5

  if ( (byte_4E06E16 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_1904/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_TITLE"*/);
    sub_1CE6700(&StringLiteral_19940/*"freeShopIds"*/);
    sub_1CE6700(&StringLiteral_1903/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_DETAIL"*/);
    byte_4E06E16 = 1;
  }
  String_72876844 = UnityEngine_PlayerPrefs__GetString_72876844((System_String_o *)StringLiteral_19940/*"freeShopIds"*/, 0);
  if ( System_String__IsNullOrEmpty(String_72876844, 0) )
    ActionExtensions__Call(callback, 0);
  else
    TerminalSceneComponent__OpenExchangeDialogue(
      this,
      (System_String_o *)StringLiteral_19940/*"freeShopIds"*/,
      (System_String_o *)StringLiteral_1904/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_TITLE"*/,
      (System_String_o *)StringLiteral_1903/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_DETAIL"*/,
      callback,
      v6);
}


void TerminalSceneComponent__CheckExchangeDialogTheReturn(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *String_72876844; // x0
  const MethodInfo *v6; // x5

  if ( (byte_4E06E17 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_1906/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_TITLE"*/);
    sub_1CE6700(&StringLiteral_23461/*"returnRarePriShopIds"*/);
    sub_1CE6700(&StringLiteral_1905/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_DETAIL"*/);
    byte_4E06E17 = 1;
  }
  String_72876844 = UnityEngine_PlayerPrefs__GetString_72876844((System_String_o *)StringLiteral_23461/*"returnRarePriShopIds"*/, 0);
  if ( System_String__IsNullOrEmpty(String_72876844, 0) )
    ActionExtensions__Call(callback, 0);
  else
    TerminalSceneComponent__OpenExchangeDialogue(
      this,
      (System_String_o *)StringLiteral_23461/*"returnRarePriShopIds"*/,
      (System_String_o *)StringLiteral_1906/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_TITLE"*/,
      (System_String_o *)StringLiteral_1905/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_DETAIL"*/,
      callback,
      v6);
}


void TerminalSceneComponent__CheckLastPlayBgm(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTerminalList; // x20
  __int64 v4; // x1
  ScrTerminalListTop_o *v5; // x0

  if ( (byte_4E06DF9 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E06DF9 = 1;
  }
  mTerminalList = (UnityEngine_Object_o *)this->fields.mTerminalList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mTerminalList, 0, 0) )
  {
    v5 = this->fields.mTerminalList;
    if ( !v5 )
      sub_1CE6958(0, v4);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Action_o **v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
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

  if ( (byte_4E06E1A & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass278_0__CheckMasterMissionReset_b__0__);
    sub_1CE6700(&TerminalSceneComponent___c__DisplayClass278_0_TypeInfo);
    sub_1CE6700(&StringLiteral_8878/*"MST_MISSION_CHANGE_MSG"*/);
    sub_1CE6700(&StringLiteral_8877/*"MST_MISSION_CHANGE_DECIDE"*/);
    sub_1CE6700(&StringLiteral_3714/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1CE6700(&StringLiteral_1/*""*/);
    sub_1CE6700(&StringLiteral_1117/*"0"*/);
    byte_4E06E1A = 1;
  }
  v5 = sub_1CE694C(TerminalSceneComponent___c__DisplayClass278_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass278_0___ctor((TerminalSceneComponent___c__DisplayClass278_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_20;
  *(_QWORD *)(v5 + 24) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = callback;
  v14 = (System_Action_o **)(v5 + 32);
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)callback, v15, v16, v17, v18, v19, v20);
  mPlayerStatus = this->fields.mPlayerStatus;
  if ( !mPlayerStatus )
    goto LABEL_20;
  *(_QWORD *)(v5 + 16) = ScrPlayerStatus__GetMstMissionStarts(mPlayerStatus, 0);
  v21 = (_QWORD *)(v5 + 16);
  v22 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v22 = TerminalSceneComponent_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             v22->static_fields->MASTER_MISSION_RESET_KEY,
             (System_String_o *)StringLiteral_1117/*"0"*/,
             0);
  v24 = System_Int64__Parse(String, 0);
  if ( *v21 )
  {
    if ( v24 )
    {
      if ( v24 != *v21 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v26 = LocalizationManager__Get((System_String_o *)StringLiteral_8878/*"MST_MISSION_CHANGE_MSG"*/, 0);
        v27 = LocalizationManager__Get((System_String_o *)StringLiteral_8877/*"MST_MISSION_CHANGE_DECIDE"*/, 0);
        v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3714/*"COMMON_CONFIRM_CLOSE"*/, 0);
        v29 = (CommonConfirmDialog_ClickDelegate_o *)sub_1CE694C(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v29,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent___c__DisplayClass278_0__CheckMasterMissionReset_b__0__,
          0);
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
            0);
          return;
        }
LABEL_20:
        sub_1CE6958(mPlayerStatus, v7);
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
      v34 = System_Int64__ToString(v32, 0);
      UnityEngine_PlayerPrefs__SetString(MASTER_MISSION_RESET_KEY, v34, 0);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_Action_o **v13; // x20
  BattleResultBondsComponent_c *v14; // x0
  BattleResultBondsComponent_c *v15; // x0
  Il2CppObject *String_72876844; // x21
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
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x22
  __int64 v34; // x22
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  __int64 v41; // x19
  __int64 v42; // x20
  Il2CppObject *v43; // x8
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  System_String_o *v56; // x19
  Il2CppObject *v57; // x22
  __int64 v58; // x0
  Il2CppObject *v59; // [xsp+40h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4E06E1B & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&BattleResultBondsComponent_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
    sub_1CE6700(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1CE6700(&GetSvtCoin___TypeInfo);
    sub_1CE6700(&GetSvtCoin_TypeInfo);
    sub_1CE6700(&Method_JsonManager_DeserializeArray_GetSvts___);
    sub_1CE6700(&JsonManager_TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass279_0__CheckNotificationDialog_b__0__);
    sub_1CE6700(&TerminalSceneComponent___c__DisplayClass279_0_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass279_1__CheckNotificationDialog_b__1__);
    sub_1CE6700(&TerminalSceneComponent___c__DisplayClass279_1_TypeInfo);
    sub_1CE6700(&StringLiteral_12570/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/);
    byte_4E06E1B = 1;
  }
  v59 = 0;
  entity = 0;
  v4 = sub_1CE694C(TerminalSceneComponent___c__DisplayClass279_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass279_0___ctor((TerminalSceneComponent___c__DisplayClass279_0_o *)v4, 0);
  if ( !v4 )
    goto LABEL_54;
  *(_QWORD *)(v4 + 16) = callBack;
  v13 = (System_Action_o **)(v4 + 16);
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)callBack, v7, v8, v9, v10, v11, v12);
  v14 = BattleResultBondsComponent_TypeInfo;
  if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
    v14 = BattleResultBondsComponent_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v14->static_fields->GET_EXIST_SVT_KEY, 0) )
  {
    v15 = BattleResultBondsComponent_TypeInfo;
    if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
      v15 = BattleResultBondsComponent_TypeInfo;
    }
    String_72876844 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_72876844(
                                        v15->static_fields->GET_EXIST_SVT_KEY,
                                        0);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v17 = JsonManager__DeserializeArray_object_(
            String_72876844,
            (const MethodInfo_3273D28 *)Method_JsonManager_DeserializeArray_GetSvts___);
    if ( v17 )
    {
      v18 = v17;
      if ( v17->max_length )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_54;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
        max_length = v18->max_length;
        if ( max_length >= 1 )
        {
          v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v21 = 0;
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
                                          (const MethodInfo_34EBA58 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
            if ( (_DWORD)v21 == LODWORD(v18->max_length) - 1 )
            {
              v23 = BattleResultBondsComponent_TypeInfo;
              if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
                v23 = BattleResultBondsComponent_TypeInfo;
              }
              UnityEngine_PlayerPrefs__DeleteKey(v23->static_fields->GET_EXIST_SVT_KEY, 0);
              ActionExtensions__Call(*v13, 0);
            }
            max_length = v18->max_length;
            if ( (int)++v21 >= max_length )
              goto LABEL_29;
          }
          v25 = *(System_Action_o **)(v4 + 24);
          v26 = (EventServantEntity_o *)Instance;
          if ( !v25 )
          {
            v25 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
            System_Action___ctor(
              v25,
              (Il2CppObject *)v4,
              Method_TerminalSceneComponent___c__DisplayClass279_0__CheckNotificationDialog_b__0__,
              0);
            *(_QWORD *)(v4 + 24) = v25;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v4 + 24), (int32_t)v25, v27, v28, v29, v30, v31, v32);
          }
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_SvtCoinMaster___);
          if ( entity )
          {
            v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
            Instance = (DataManager_o *)UserServantEntity__getSvtId((UserServantEntity_o *)entity, 0);
            if ( v33 )
            {
              Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            v33,
                                            &v59,
                                            (int32_t)Instance,
                                            (const MethodInfo_34E92A8 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !v59 )
                  goto LABEL_54;
                if ( SHIDWORD(v59[1].klass) >= 1 )
                {
                  v34 = sub_1CE694C(TerminalSceneComponent___c__DisplayClass279_1_TypeInfo);
                  TerminalSceneComponent___c__DisplayClass279_1___ctor(
                    (TerminalSceneComponent___c__DisplayClass279_1_o *)v34,
                    0);
                  if ( !v34 )
                    goto LABEL_54;
                  *(_QWORD *)(v34 + 24) = v4;
                  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v34 + 24), v4, v35, v36, v37, v38, v39, v40);
                  v41 = sub_1CE67A8(GetSvtCoin___TypeInfo, 1);
                  v42 = sub_1CE694C(GetSvtCoin_TypeInfo);
                  GetSvtCoin___ctor((GetSvtCoin_o *)v42, 0);
                  v43 = v59;
                  if ( !v59 )
                    goto LABEL_54;
                  if ( !v42 )
                    goto LABEL_54;
                  *(_DWORD *)(v42 + 16) = v59[1].klass;
                  *(int32x2_t *)(v42 + 20) = vrev64_s32(*(int32x2_t *)((char *)&v43[1].klass + 4));
                  if ( !v41 )
                    goto LABEL_54;
                  Instance = (DataManager_o *)sub_1CE683C(v42, *(_QWORD *)(*(_QWORD *)v41 + 64LL));
                  if ( !Instance )
                  {
                    v58 = sub_1CE697C(0);
                    sub_1CE6828(v58, 0);
                  }
                  if ( !*(_DWORD *)(v41 + 24) )
LABEL_55:
                    sub_1CE6960(Instance);
                  *(_QWORD *)(v41 + 32) = v42;
                  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v41 + 32), v42, v44, v45, v46, v47, v48, v49);
                  *(_QWORD *)(v34 + 16) = v41;
                  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v34 + 16), v41, v50, v51, v52, v53, v54, v55);
                  v25 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
                  System_Action___ctor(
                    v25,
                    (Il2CppObject *)v34,
                    Method_TerminalSceneComponent___c__DisplayClass279_1__CheckNotificationDialog_b__1__,
                    0);
                }
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v56 = LocalizationManager__Get((System_String_o *)StringLiteral_12570/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, 0);
              v57 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              Instance = (DataManager_o *)EventServantEntity__GetGetMessage(v26, 0);
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
                  0,
                  0.0,
                  0,
                  0);
                return;
              }
            }
          }
LABEL_54:
          sub_1CE6958(Instance, v6);
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
    UnityEngine_PlayerPrefs__DeleteKey(v24->static_fields->GET_EXIST_SVT_KEY, 0);
  }
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
  __int64 v5; // x22
  __int64 IsWaitingTerminalTopEffectForCampaignDirectBonus; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Action_o **v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  const MethodInfo *v21; // x1
  int v22; // w21
  __int64 v23; // x23
  bool IsBlankEarthAction; // w24
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  TerminalSceneComponent___c_c *v31; // x8
  __int64 v32; // x25
  System_Action_object__o *_9__267_0; // x26
  Il2CppObject *v34; // x27
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  System_Action_object__o *v48; // x26
  Il2CppObject *v49; // x27
  struct TerminalSceneComponent___c_StaticFields *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  System_Action_object__o *v57; // x26
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  ActionChain_o *v64; // x22
  const MethodInfo *v65; // x2
  System_Collections_IEnumerator_o *v66; // x0

  if ( (byte_4E06E12 & 1) == 0 )
  {
    sub_1CE6700(&ActionChain_TypeInfo);
    sub_1CE6700(&System_Action_Action____TypeInfo);
    sub_1CE6700(&System_Action_Action__TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent___c__CheckOpenCampaignDirectBonus_b__267_0__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__CheckOpenCampaignDirectBonus_b__267_1__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass267_0__CheckOpenCampaignDirectBonus_b__2__);
    sub_1CE6700(&TerminalSceneComponent___c__DisplayClass267_0_TypeInfo);
    sub_1CE6700(&TerminalSceneComponent___c_TypeInfo);
    byte_4E06E12 = 1;
  }
  v5 = sub_1CE694C(TerminalSceneComponent___c__DisplayClass267_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass267_0___ctor((TerminalSceneComponent___c__DisplayClass267_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_32;
  *(_QWORD *)(v5 + 16) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  v14 = (System_Action_o **)(v5 + 24);
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)callback, v15, v16, v17, v18, v19, v20);
  this->fields._IsPlayingCampaignDirectBonus_k__BackingField = 1;
  IsWaitingTerminalTopEffectForCampaignDirectBonus = TerminalSceneComponent__IsWaitingTerminalTopEffectForCampaignDirectBonus(
                                                       this,
                                                       v21);
  if ( !this->fields.mTerminalList )
    goto LABEL_32;
  v22 = IsWaitingTerminalTopEffectForCampaignDirectBonus;
  IsWaitingTerminalTopEffectForCampaignDirectBonus = (__int64)ScrTerminalListTop__GetCurrentLoginEntity(
                                                                this->fields.mTerminalList,
                                                                0);
  if ( !this->fields.mTerminalList )
    goto LABEL_32;
  v23 = IsWaitingTerminalTopEffectForCampaignDirectBonus;
  IsBlankEarthAction = ScrTerminalListTop__IsBlankEarthAction(this->fields.mTerminalList, 0);
  IsWaitingTerminalTopEffectForCampaignDirectBonus = sub_1CE67A8(System_Action_Action____TypeInfo, 3);
  v31 = TerminalSceneComponent___c_TypeInfo;
  v32 = IsWaitingTerminalTopEffectForCampaignDirectBonus;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v31 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__267_0 = (System_Action_object__o *)v31->static_fields->__9__267_0;
  if ( !_9__267_0 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = TerminalSceneComponent___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v31->static_fields->__9;
    _9__267_0 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
    System_Action_object____ctor(
      _9__267_0,
      v34,
      Method_TerminalSceneComponent___c__CheckOpenCampaignDirectBonus_b__267_0__,
      0);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__267_0 = (struct System_Action_Action__o *)_9__267_0;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__267_0,
      (int32_t)_9__267_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  if ( !v32 )
    goto LABEL_32;
  if ( !*(_DWORD *)(v32 + 24) )
    goto LABEL_33;
  *(_QWORD *)(v32 + 32) = _9__267_0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v32 + 32), (int32_t)_9__267_0, v25, v26, v27, v28, v29, v30);
  IsWaitingTerminalTopEffectForCampaignDirectBonus = (__int64)TerminalSceneComponent___c_TypeInfo;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    IsWaitingTerminalTopEffectForCampaignDirectBonus = (__int64)TerminalSceneComponent___c_TypeInfo;
  }
  v48 = *(System_Action_object__o **)(*(_QWORD *)(IsWaitingTerminalTopEffectForCampaignDirectBonus + 184) + 144LL);
  if ( !v48 )
  {
    if ( !*(_DWORD *)(IsWaitingTerminalTopEffectForCampaignDirectBonus + 224) )
    {
      j_il2cpp_runtime_class_init_0(IsWaitingTerminalTopEffectForCampaignDirectBonus);
      IsWaitingTerminalTopEffectForCampaignDirectBonus = (__int64)TerminalSceneComponent___c_TypeInfo;
    }
    v49 = **(Il2CppObject ***)(IsWaitingTerminalTopEffectForCampaignDirectBonus + 184);
    v48 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
    System_Action_object____ctor(
      v48,
      v49,
      Method_TerminalSceneComponent___c__CheckOpenCampaignDirectBonus_b__267_1__,
      0);
    v50 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v50->__9__267_1 = (struct System_Action_Action__o *)v48;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v50->__9__267_1, (int32_t)v48, v51, v52, v53, v54, v55, v56);
  }
  if ( *(_DWORD *)(v32 + 24) <= 1u
    || (*(_QWORD *)(v32 + 40) = v48,
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v32 + 40), (int32_t)v48, v42, v43, v44, v45, v46, v47),
        v57 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo),
        System_Action_object____ctor(
          v57,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent___c__DisplayClass267_0__CheckOpenCampaignDirectBonus_b__2__,
          0),
        *(_DWORD *)(v32 + 24) <= 2u) )
  {
LABEL_33:
    sub_1CE6960(IsWaitingTerminalTopEffectForCampaignDirectBonus);
  }
  *(_QWORD *)(v32 + 48) = v57;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v32 + 48), (int32_t)v57, v58, v59, v60, v61, v62, v63);
  v64 = (ActionChain_o *)sub_1CE694C(ActionChain_TypeInfo);
  ActionChain___ctor_50148084(v64, (System_Action_Action__array *)v32, 0);
  if ( !(v22 & 1 | (v23 != 0) | IsBlankEarthAction) )
  {
    if ( v64 )
    {
      ChainableActionBase__Execute((ChainableActionBase_o *)v64, 0);
      return;
    }
LABEL_32:
    sub_1CE6958(IsWaitingTerminalTopEffectForCampaignDirectBonus, v7);
  }
  if ( !v23 && ((v22 ^ 1) & 1) == 0 )
  {
    v66 = TerminalSceneComponent__CoWaitTerminalTopEffectEnd(this, v64, v65);
LABEL_30:
    UnityEngine_MonoBehaviour__StartCoroutine_72903732((UnityEngine_MonoBehaviour_o *)this, v66, 0);
    return;
  }
  if ( IsBlankEarthAction )
  {
    v66 = TerminalSceneComponent__CoWaitBlankEarthActionEnd(this, v64, v65);
    goto LABEL_30;
  }
  this->fields._IsPlayingCampaignDirectBonus_k__BackingField = 0;
  ActionExtensions__Call(*v14, 0);
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
  int64_t targetId; // x19

  if ( (byte_4E06E07 & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1CE6700(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E06E07 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( TerminalPramsManager__IsWarStartedId(warId, 0) )
      goto LABEL_10;
LABEL_13:
    LOBYTE(WarEntityByWarID) = 1;
    return (char)WarEntityByWarID;
  }
  targetId = v7->fields.targetId;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_1CE6958(Instance, v5);
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
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Action_o **v18; // x24
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  TerminalPramsManager_c *v25; // x0
  TerminalSceneComponent_o *CampaignDirectBonus; // x0
  const MethodInfo *v27; // x2
  __int64 v28; // x0
  Il2CppObject *mTerminalList; // x23
  __int64 v30; // x21
  System_Action_object__o *v31; // x22
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  System_Action_object__o *v38; // x22
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  System_Action_object__o *v45; // x22
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  Il2CppObject *v52; // x24
  System_Action_object__o *v53; // x22
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  Il2CppObject *v60; // x24
  System_Action_object__o *v61; // x22
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  Il2CppObject *v68; // x24
  System_Action_object__o *v69; // x22
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  Il2CppObject *v76; // x24
  System_Action_object__o *v77; // x22
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  int32_t v81; // w5
  int64_t v82; // x6
  System_String_o *v83; // x7
  System_Action_object__o *v84; // x22
  int32_t v85; // w2
  int32_t v86; // w3
  System_String_o *v87; // x4
  int32_t v88; // w5
  int64_t v89; // x6
  System_String_o *v90; // x7
  System_Action_object__o *v91; // x22
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
  System_Action_object__o *v98; // x22
  int32_t v99; // w2
  int32_t v100; // w3
  System_String_o *v101; // x4
  int32_t v102; // w5
  int64_t v103; // x6
  System_String_o *v104; // x7
  System_Action_object__o *v105; // x22
  int32_t v106; // w2
  int32_t v107; // w3
  System_String_o *v108; // x4
  int32_t v109; // w5
  int64_t v110; // x6
  System_String_o *v111; // x7
  System_Action_object__o *v112; // x22
  int32_t v113; // w2
  int32_t v114; // w3
  System_String_o *v115; // x4
  int32_t v116; // w5
  int64_t v117; // x6
  System_String_o *v118; // x7
  System_Action_object__o *v119; // x22
  int32_t v120; // w2
  int32_t v121; // w3
  System_String_o *v122; // x4
  int32_t v123; // w5
  int64_t v124; // x6
  System_String_o *v125; // x7
  System_Action_object__o *v126; // x22
  int32_t v127; // w2
  int32_t v128; // w3
  System_String_o *v129; // x4
  int32_t v130; // w5
  int64_t v131; // x6
  System_String_o *v132; // x7
  System_Action_object__o *v133; // x22
  int32_t v134; // w2
  int32_t v135; // w3
  System_String_o *v136; // x4
  int32_t v137; // w5
  int64_t v138; // x6
  System_String_o *v139; // x7
  System_Action_object__o *v140; // x22
  int32_t v141; // w2
  int32_t v142; // w3
  System_String_o *v143; // x4
  int32_t v144; // w5
  int64_t v145; // x6
  System_String_o *v146; // x7
  Il2CppObject *v147; // x24
  System_Action_object__o *v148; // x22
  int32_t v149; // w2
  int32_t v150; // w3
  System_String_o *v151; // x4
  int32_t v152; // w5
  int64_t v153; // x6
  System_String_o *v154; // x7
  int32_t v155; // w2
  int32_t v156; // w3
  System_String_o *v157; // x4
  int32_t v158; // w5
  int64_t v159; // x6
  System_String_o *v160; // x7
  System_Action_object__o *v161; // x22
  Il2CppObject *v162; // x23
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v164; // w2
  int32_t v165; // w3
  System_String_o *v166; // x4
  int32_t v167; // w5
  int64_t v168; // x6
  System_String_o *v169; // x7
  System_Action_object__o *v170; // x22
  int32_t v171; // w2
  int32_t v172; // w3
  System_String_o *v173; // x4
  int32_t v174; // w5
  int64_t v175; // x6
  System_String_o *v176; // x7
  System_Action_object__o *v177; // x19
  int32_t v178; // w2
  int32_t v179; // w3
  System_String_o *v180; // x4
  int32_t v181; // w5
  int64_t v182; // x6
  System_String_o *v183; // x7
  ActionChain_o *v184; // x19
  __int64 v185; // x21
  System_Action_o *v186; // x22
  int32_t v187; // w2
  int32_t v188; // w3
  System_String_o *v189; // x4
  int32_t v190; // w5
  int64_t v191; // x6
  System_String_o *v192; // x7

  if ( (byte_4E06E10 & 1) == 0 )
  {
    sub_1CE6700(&ActionChain_TypeInfo);
    sub_1CE6700(&System_Action___TypeInfo);
    sub_1CE6700(&System_Action_Action____TypeInfo);
    sub_1CE6700(&System_Action_Action__TypeInfo);
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_CommonUI_StartLoginMessages__);
    sub_1CE6700(&Method_CommonUI_StartServantEventJoinLeaveNotification__);
    sub_1CE6700(&Method_ScrTerminalListTop_CheckLimitCountUnSealQuestOpen__);
    sub_1CE6700(&Method_ScrTerminalListTop_ShowTerminalMessagesDialogue__);
    sub_1CE6700(&Method_ScrTerminalListTop_ShowTerminalTransitionMessagesDialogue__);
    sub_1CE6700(&Method_ScrTerminalListTop_StartShowWarClearReward__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent_CheckAfterQuestClearDialog__);
    sub_1CE6700(&Method_TerminalSceneComponent_CheckExchangeDialogTheFree__);
    sub_1CE6700(&Method_TerminalSceneComponent_CheckExchangeDialogTheReturn__);
    sub_1CE6700(&Method_TerminalSceneComponent_CheckMasterMissionReset__);
    sub_1CE6700(&Method_TerminalSceneComponent_CheckNotificationDialog__);
    sub_1CE6700(&Method_TerminalSceneComponent_CheckOnTerminalMap__);
    sub_1CE6700(&Method_TerminalSceneComponent_CheckSaveRouteSelect__);
    sub_1CE6700(&Method_TerminalSceneComponent_CheckSpecialAscensionTutorial__);
    sub_1CE6700(&Method_TerminalSceneComponent_CheckTutorialOnTerminalAfterFreeExchangeDialog__);
    sub_1CE6700(&Method_TerminalSceneComponent_CheckTutorialOnTerminal__);
    sub_1CE6700(&TutorialFlag_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__265_2__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass265_0__CheckRewardPopupChain_b__0__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass265_0__CheckRewardPopupChain_b__1__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass265_0__CheckRewardPopupChain_b__3__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass265_0__CheckRewardPopupChain_b__4__);
    sub_1CE6700(&TerminalSceneComponent___c__DisplayClass265_0_TypeInfo);
    sub_1CE6700(&TerminalSceneComponent___c_TypeInfo);
    byte_4E06E10 = 1;
  }
  v9 = sub_1CE694C(TerminalSceneComponent___c__DisplayClass265_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass265_0___ctor((TerminalSceneComponent___c__DisplayClass265_0_o *)v9, 0);
  if ( !v9 )
    goto LABEL_55;
  *(_QWORD *)(v9 + 16) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = afterChain;
  v18 = (System_Action_o **)(v9 + 24);
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)afterChain, v19, v20, v21, v22, v23, v24);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E01957 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E01957 = 1;
  }
  v25 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v25 = TerminalPramsManager_TypeInfo;
  }
  if ( v25->static_fields->_IsTransFromOrdealCall_k__BackingField )
  {
    ActionExtensions__Call(*v18, 0);
    return;
  }
  if ( checkTutorialEnded )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_41569468(102, 0) )
      goto LABEL_50;
  }
  if ( noExecuteCondition )
  {
LABEL_50:
    ActionExtensions__Call(*v18, 0);
    goto LABEL_51;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_55;
  CampaignDirectBonus = (TerminalSceneComponent_o *)CommonUI__get_CampaignDirectBonus((CommonUI_o *)Instance, 0);
  TerminalSceneComponent__SaveCampaignDirectBonusData(
    CampaignDirectBonus,
    (CommonUI_CampaignDirectBonusData_array *)CampaignDirectBonus,
    v27);
  v28 = sub_1CE67A8(System_Action_Action____TypeInfo, 20);
  mTerminalList = (Il2CppObject *)this->fields.mTerminalList;
  v30 = v28;
  v31 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v31, mTerminalList, Method_ScrTerminalListTop_StartShowWarClearReward__, 0);
  if ( !v30 )
    goto LABEL_55;
  if ( !*(_DWORD *)(v30 + 24) )
    goto LABEL_54;
  *(_QWORD *)(v30 + 32) = v31;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v30 + 32), (int32_t)v31, v32, v33, v34, v35, v36, v37);
  v38 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v38, (Il2CppObject *)this, Method_TerminalSceneComponent_CheckAfterQuestClearDialog__, 0);
  if ( *(_DWORD *)(v30 + 24) <= 1u )
    goto LABEL_54;
  *(_QWORD *)(v30 + 40) = v38;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v30 + 40), (int32_t)v38, v39, v40, v41, v42, v43, v44);
  v45 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v45,
    (Il2CppObject *)v9,
    Method_TerminalSceneComponent___c__DisplayClass265_0__CheckRewardPopupChain_b__0__,
    0);
  if ( *(_DWORD *)(v30 + 24) <= 2u )
    goto LABEL_54;
  *(_QWORD *)(v30 + 48) = v45;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v30 + 48), (int32_t)v45, v46, v47, v48, v49, v50, v51);
  v52 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v53 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v53, v52, Method_CommonUI_StartServantEventJoinLeaveNotification__, 0);
  if ( *(_DWORD *)(v30 + 24) <= 3u )
    goto LABEL_54;
  *(_QWORD *)(v30 + 56) = v53;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v30 + 56), (int32_t)v53, v54, v55, v56, v57, v58, v59);
  v60 = (Il2CppObject *)this->fields.mTerminalList;
  v61 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v61, v60, Method_ScrTerminalListTop_ShowTerminalMessagesDialogue__, 0);
  if ( *(_DWORD *)(v30 + 24) <= 4u )
    goto LABEL_54;
  *(_QWORD *)(v30 + 64) = v61;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v30 + 64), (int32_t)v61, v62, v63, v64, v65, v66, v67);
  v68 = (Il2CppObject *)this->fields.mTerminalList;
  v69 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v69, v68, Method_ScrTerminalListTop_CheckLimitCountUnSealQuestOpen__, 0);
  if ( *(_DWORD *)(v30 + 24) <= 5u )
    goto LABEL_54;
  *(_QWORD *)(v30 + 72) = v69;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v30 + 72), (int32_t)v69, v70, v71, v72, v73, v74, v75);
  v76 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v77 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v77, v76, Method_CommonUI_StartLoginMessages__, 0);
  if ( *(_DWORD *)(v30 + 24) <= 6u )
    goto LABEL_54;
  *(_QWORD *)(v30 + 80) = v77;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v30 + 80), (int32_t)v77, v78, v79, v80, v81, v82, v83);
  v84 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v84,
    (Il2CppObject *)v9,
    Method_TerminalSceneComponent___c__DisplayClass265_0__CheckRewardPopupChain_b__1__,
    0);
  if ( *(_DWORD *)(v30 + 24) <= 7u )
    goto LABEL_54;
  *(_QWORD *)(v30 + 88) = v84;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v30 + 88), (int32_t)v84, v85, v86, v87, v88, v89, v90);
  v91 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v91,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckSpecialAscensionTutorial__,
    0);
  if ( *(_DWORD *)(v30 + 24) <= 8u )
    goto LABEL_54;
  *(_QWORD *)(v30 + 96) = v91;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v30 + 96), (int32_t)v91, v92, v93, v94, v95, v96, v97);
  v98 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v98, (Il2CppObject *)this, Method_TerminalSceneComponent_CheckOnTerminalMap__, 0);
  if ( *(_DWORD *)(v30 + 24) <= 9u )
    goto LABEL_54;
  *(_QWORD *)(v30 + 104) = v98;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v30 + 104), (int32_t)v98, v99, v100, v101, v102, v103, v104);
  v105 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v105, (Il2CppObject *)this, Method_TerminalSceneComponent_CheckTutorialOnTerminal__, 0);
  if ( *(_DWORD *)(v30 + 24) <= 0xAu )
    goto LABEL_54;
  *(_QWORD *)(v30 + 112) = v105;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v30 + 112), (int32_t)v105, v106, v107, v108, v109, v110, v111);
  v112 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v112, (Il2CppObject *)this, Method_TerminalSceneComponent_CheckNotificationDialog__, 0);
  if ( *(_DWORD *)(v30 + 24) <= 0xBu )
    goto LABEL_54;
  *(_QWORD *)(v30 + 120) = v112;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v30 + 120), (int32_t)v112, v113, v114, v115, v116, v117, v118);
  v119 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v119, (Il2CppObject *)this, Method_TerminalSceneComponent_CheckSaveRouteSelect__, 0);
  if ( *(_DWORD *)(v30 + 24) <= 0xCu )
    goto LABEL_54;
  *(_QWORD *)(v30 + 128) = v119;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v30 + 128), (int32_t)v119, v120, v121, v122, v123, v124, v125);
  v126 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v126,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckExchangeDialogTheFree__,
    0);
  if ( *(_DWORD *)(v30 + 24) <= 0xDu )
    goto LABEL_54;
  *(_QWORD *)(v30 + 136) = v126;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v30 + 136), (int32_t)v126, v127, v128, v129, v130, v131, v132);
  v133 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v133,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckExchangeDialogTheReturn__,
    0);
  if ( *(_DWORD *)(v30 + 24) <= 0xEu )
    goto LABEL_54;
  *(_QWORD *)(v30 + 144) = v133;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v30 + 144), (int32_t)v133, v134, v135, v136, v137, v138, v139);
  v140 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v140,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckTutorialOnTerminalAfterFreeExchangeDialog__,
    0);
  if ( *(_DWORD *)(v30 + 24) <= 0xFu )
    goto LABEL_54;
  *(_QWORD *)(v30 + 152) = v140;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v30 + 152), (int32_t)v140, v141, v142, v143, v144, v145, v146);
  v147 = (Il2CppObject *)this->fields.mTerminalList;
  v148 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v148, v147, Method_ScrTerminalListTop_ShowTerminalTransitionMessagesDialogue__, 0);
  if ( *(_DWORD *)(v30 + 24) <= 0x10u )
    goto LABEL_54;
  *(_QWORD *)(v30 + 160) = v148;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v30 + 160), (int32_t)v148, v149, v150, v151, v152, v153, v154);
  Instance = TerminalSceneComponent___c_TypeInfo;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    Instance = TerminalSceneComponent___c_TypeInfo;
  }
  v161 = *(System_Action_object__o **)(*((_QWORD *)Instance + 23) + 120LL);
  if ( !v161 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = TerminalSceneComponent___c_TypeInfo;
    }
    v162 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v161 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
    System_Action_object____ctor(v161, v162, Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__265_2__, 0);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__265_2 = (struct System_Action_Action__o *)v161;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__265_2,
      (int32_t)v161,
      v164,
      v165,
      v166,
      v167,
      v168,
      v169);
  }
  if ( *(_DWORD *)(v30 + 24) <= 0x11u )
    goto LABEL_54;
  *(_QWORD *)(v30 + 168) = v161;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v30 + 168), (int32_t)v161, v155, v156, v157, v158, v159, v160);
  v170 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v170, (Il2CppObject *)this, Method_TerminalSceneComponent_CheckMasterMissionReset__, 0);
  if ( *(_DWORD *)(v30 + 24) <= 0x12u )
    goto LABEL_54;
  *(_QWORD *)(v30 + 176) = v170;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v30 + 176), (int32_t)v170, v171, v172, v173, v174, v175, v176);
  v177 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v177,
    (Il2CppObject *)v9,
    Method_TerminalSceneComponent___c__DisplayClass265_0__CheckRewardPopupChain_b__3__,
    0);
  if ( *(_DWORD *)(v30 + 24) <= 0x13u )
    goto LABEL_54;
  *(_QWORD *)(v30 + 184) = v177;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v30 + 184), (int32_t)v177, v178, v179, v180, v181, v182, v183);
  v184 = (ActionChain_o *)sub_1CE694C(ActionChain_TypeInfo);
  ActionChain___ctor_50148084(v184, (System_Action_Action__array *)v30, 0);
  v185 = sub_1CE67A8(System_Action___TypeInfo, 1);
  v186 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(
    v186,
    (Il2CppObject *)v9,
    Method_TerminalSceneComponent___c__DisplayClass265_0__CheckRewardPopupChain_b__4__,
    0);
  if ( !v185 )
    goto LABEL_55;
  if ( !*(_DWORD *)(v185 + 24) )
LABEL_54:
    sub_1CE6960(Instance);
  *(_QWORD *)(v185 + 32) = v186;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v185 + 32), (int32_t)v186, v187, v188, v189, v190, v191, v192);
  if ( !v184
    || (Instance = ChainableActionBase__Final((ChainableActionBase_o *)v184, (System_Action_array *)v185, 0)) == 0 )
  {
LABEL_55:
    sub_1CE6958(Instance, v11);
  }
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
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  System_Int32_array *routes; // [xsp+8h] [xbp-38h] BYREF
  int32_t phase; // [xsp+18h] [xbp-28h] BYREF
  int32_t questId; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4E06E19 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1CE6700(&Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1CE6700(&ScriptManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass275_0__CheckSaveRouteSelect_b__0__);
    sub_1CE6700(&TerminalSceneComponent___c__DisplayClass275_0_TypeInfo);
    byte_4E06E19 = 1;
  }
  v4 = sub_1CE694C(TerminalSceneComponent___c__DisplayClass275_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass275_0___ctor((TerminalSceneComponent___c__DisplayClass275_0_o *)v4, 0);
  if ( !v4 )
    goto LABEL_19;
  *(_QWORD *)(v4 + 16) = callback;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)callback, v7, v8, v9, v10, v11, v12);
  phase = -1;
  questId = -1;
  routes = 0;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( ScriptManager__GetSelectRouteArrayInCollection(&questId, &phase, &routes, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    if ( !Instance )
      goto LABEL_19;
    if ( QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, phase, 0) )
    {
      v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1CE694C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v13,
        (Il2CppObject *)v4,
        Method_TerminalSceneComponent___c__DisplayClass275_0__CheckSaveRouteSelect_b__0__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__getRequest_object_(
                   v13,
                   (const MethodInfo_328F954 *)Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
      if ( Instance )
      {
        BattleRouteSelectRequest__beginRequest((BattleRouteSelectRequest_o *)Instance, questId, phase, routes, 0);
        return;
      }
LABEL_19:
      sub_1CE6958(Instance, v6);
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
  if ( (byte_4E06E1C & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_1CE6700(&CombineRootComponent_TypeInfo);
    byte_4E06E1C = 1;
  }
  if ( !v4->fields.isTutorialAfter )
  {
    mTerminalMap = v4->fields.mTerminalMap;
    if ( !mTerminalMap || (this = (TerminalSceneComponent_o *)mTerminalMap->fields.dispRoot) == 0 )
      sub_1CE6958(this, callback);
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

  if ( (byte_4E06E04 & 1) == 0 )
  {
    sub_1CE6700(&OpeningMovieData_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1CE6700(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&TutorialFlag_TypeInfo);
    sub_1CE6700(&StringLiteral_13745/*"TUTORIAL_QUEST_ID1"*/);
    sub_1CE6700(&StringLiteral_13746/*"TUTORIAL_QUEST_ID2"*/);
    sub_1CE6700(&StringLiteral_13747/*"TUTORIAL_QUEST_ID3"*/);
    sub_1CE6700(&StringLiteral_13748/*"TUTORIAL_QUEST_ID4"*/);
    byte_4E06E04 = 1;
  }
  this->fields.mTutorialKind = 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_41569468(102, 0) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__GetProgress(0) == 4 )
      return 0;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1CE6958(Instance, v4);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E01349 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E01349 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  this->fields.mIsStart_LoginBonusWhiteBg = !v6->static_fields->_IsAutoResume_k__BackingField;
  if ( !byte_4DFF129 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4DFF129 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_4E01222 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4E01222 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_DispState_k__BackingField = 2;
  if ( !OpeningMovieData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo);
  FirstWarId = OpeningMovieData__GetFirstWarId(0);
  if ( !byte_4E01226 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E01226 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_WarId_k__BackingField = FirstWarId;
  if ( !byte_4E01225 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_4E01225 = 1;
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
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, 0);
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0);
  Instance = (CommonUI_o *)this->fields.mPlayerStatus;
  if ( !Instance )
    goto LABEL_83;
  ScrPlayerStatus__DisableAllBtn((ScrPlayerStatus_o *)Instance, 0);
  v9 = SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  this->fields.mTutorialKind = 5;
  v10 = (clsQuestCheck_o *)v9;
  Instance = (CommonUI_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_13745/*"TUTORIAL_QUEST_ID1"*/, 0);
  if ( !v10 )
    goto LABEL_83;
  if ( !clsQuestCheck__IsQuestClear(v10, (int32_t)Instance, 0, 0) )
  {
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_13745/*"TUTORIAL_QUEST_ID1"*/, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E01220 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E01220 = 1;
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
      ScrTerminalListTop__SelectedQuest((ScrTerminalListTop_o *)Instance, 0);
      return 1;
    }
    goto LABEL_83;
  }
  v11 = ConstantMaster__getValue((System_String_o *)StringLiteral_13746/*"TUTORIAL_QUEST_ID2"*/, 0);
  if ( !clsQuestCheck__IsQuestClear(v10, v11, 0, 0) )
  {
    v5 = 0;
    v15 = 1;
    goto LABEL_70;
  }
  v12 = ConstantMaster__getValue((System_String_o *)StringLiteral_13747/*"TUTORIAL_QUEST_ID3"*/, 0);
  if ( !clsQuestCheck__IsQuestClear(v10, v12, 0, 0) )
  {
    v5 = 0;
    v15 = 2;
    goto LABEL_70;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(1, 0) )
  {
    v5 = 0;
    v15 = 3;
    goto LABEL_70;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_41569468(101, 0) )
    goto LABEL_86;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(2, 0) )
  {
LABEL_86:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E00E11 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E00E11 = 1;
    }
    v19 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v19 = TerminalPramsManager_TypeInfo;
    }
    v19->static_fields->_SummonType_k__BackingField = 1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_83;
    v20 = 20;
LABEL_80:
    v5 = 1;
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v20, 1, 0, 0);
    return v5;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(3, 0) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_83;
    v20 = 40;
    goto LABEL_80;
  }
  v13 = ConstantMaster__getValue((System_String_o *)StringLiteral_13748/*"TUTORIAL_QUEST_ID4"*/, 0);
  v5 = 0;
  if ( clsQuestCheck__IsQuestClear(v10, v13, 0, 0) )
    return v5;
  v14 = ConstantMaster__getValue((System_String_o *)StringLiteral_13748/*"TUTORIAL_QUEST_ID4"*/, 0);
  if ( clsQuestCheck__mfGetQuestPhaseByQuestID(v10, v14, 0) <= 0 )
  {
    v5 = 0;
    v15 = 4;
LABEL_70:
    this->fields.mTutorialKind = v15;
    return v5;
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
    sub_1CE6958(this, callback);
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
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4E06E22 & 1) == 0 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E06E22 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E01BA8 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E01BA8 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( v3->static_fields->_IsFirstFadeMap_k__BackingField )
  {
    mTerminalMap = this->fields.mTerminalMap;
    if ( !mTerminalMap )
      sub_1CE6958(0, method);
    ScrTerminalMap__SetSaveKeyPlayerMap(mTerminalMap, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E014FD )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E014FD = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    v5->static_fields->_IsFirstFadeMap_k__BackingField = 0;
  }
  __asm { FMOV            V0.4S, #1.0 }
  this->fields._FirstFadeTime_k__BackingField = 0.0;
  this->fields._FirstFadeMapColorKind_k__BackingField = 2;
  this->fields._FirstFadeMapColor_k__BackingField = _Q0;
}


void TerminalSceneComponent__ClearTransitionInfo(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalTransitionInfo_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4E06DDC & 1) == 0 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&TerminalTransitionInfo_TypeInfo);
    byte_4E06DDC = 1;
  }
  v3 = (TerminalTransitionInfo_o *)sub_1CE694C(TerminalTransitionInfo_TypeInfo);
  TerminalTransitionInfo___ctor(v3, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__TerminalTransitionInfoSave_SaveData(v3, 0);
  this->fields._TransitionInfo_k__BackingField = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields._TransitionInfo_k__BackingField, 0, v4, v5, v6, v7, v8, v9);
}


System_Collections_IEnumerator_o *TerminalSceneComponent__CoWaitBlankEarthActionEnd(
        TerminalSceneComponent_o *this,
        ActionChain_o *openCampaignDirectBonus,
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
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4E06E14 & 1) == 0 )
  {
    sub_1CE6700(&TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__269_TypeInfo);
    byte_4E06E14 = 1;
  }
  v5 = sub_1CE694C(TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__269_TypeInfo);
  TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__269___ctor(
    (TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__269_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_1CE6958(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = openCampaignDirectBonus;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)openCampaignDirectBonus, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_4E06E13 & 1) == 0 )
  {
    sub_1CE6700(&TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__268_TypeInfo);
    byte_4E06E13 = 1;
  }
  v5 = sub_1CE694C(TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__268_TypeInfo);
  TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__268___ctor(
    (TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__268_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_1CE6958(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = openCampaignDirectBonus;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)openCampaignDirectBonus, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void TerminalSceneComponent__CreateTransitionInfo(
        TerminalSceneComponent_o *this,
        TerminalTransitionInfo_o *info,
        const MethodInfo *method)
{
  TerminalTransitionInfo_o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x1
  TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x0

  if ( (byte_4E06DDB & 1) == 0 )
  {
    sub_1CE6700(&TerminalTransitionInfo_TypeInfo);
    byte_4E06DDB = 1;
  }
  v5 = (TerminalTransitionInfo_o *)sub_1CE694C(TerminalTransitionInfo_TypeInfo);
  TerminalTransitionInfo___ctor(v5, 0);
  this->fields._TransitionInfo_k__BackingField = v5;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields._TransitionInfo_k__BackingField,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  TransitionInfo_k__BackingField = this->fields._TransitionInfo_k__BackingField;
  if ( !TransitionInfo_k__BackingField )
    sub_1CE6958(0, v12);
  TerminalTransitionInfo__SetParameters(TransitionInfo_k__BackingField, info, 0);
}


void TerminalSceneComponent__EndAuto(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  EventTutorialMaster_EventTutorialArgs_o *v3; // x20
  TerminalPramsManager_c *v4; // x0
  QuestAfterAction_o *EventID; // x0
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0
  System_Collections_Generic_IEnumerable_TSource__o *AvailableTutorialArray; // x20
  TerminalPramsManager_c *v9; // x0
  ScrPlayerStatus_o *mPlayerStatus; // x19
  bool v11; // w8
  bool isFadeTransition; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4E06DED & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Linq_Enumerable_Any_EventTutorialEntity___);
    sub_1CE6700(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E06DED = 1;
  }
  isFadeTransition = 0;
  v3 = (EventTutorialMaster_EventTutorialArgs_o *)sub_1CE694C(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor(v3, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4DFEC9C )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFEC9C = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  EventID = (QuestAfterAction_o *)WarMaster__getEventID(v4->static_fields->_WarId_k__BackingField, 0);
  if ( !v3 )
    goto LABEL_44;
  v3->fields.eventId = (int)EventID;
  v3->fields.openKind = 18;
  if ( !byte_4DFEC9C )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFEC9C = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v3->fields.qId = v7->static_fields->_WarId_k__BackingField;
  AvailableTutorialArray = (System_Collections_Generic_IEnumerable_TSource__o *)EventTutorialMaster__GetAvailableTutorialArray(
                                                                                  v3,
                                                                                  0);
  if ( !byte_4E06E39 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E06E39 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  if ( v9->static_fields->mIsAutoOpenMasterMission )
  {
    if ( System_Linq_Enumerable__Any_object_(
           AvailableTutorialArray,
           (const MethodInfo_3210080 *)Method_System_Linq_Enumerable_Any_EventTutorialEntity___) )
    {
      v9 = TerminalPramsManager_TypeInfo;
    }
    else
    {
      mPlayerStatus = this->fields.mPlayerStatus;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4E06E3A )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        byte_4E06E3A = 1;
      }
      EventID = (QuestAfterAction_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        EventID = (QuestAfterAction_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !mPlayerStatus )
        goto LABEL_44;
      ScrPlayerStatus__OpenMasterMission(mPlayerStatus, 0, HIDWORD(EventID->fields.endAct[7].fields.method_ptr), 0);
      if ( !byte_4DFE668 )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        byte_4DFE668 = 1;
      }
      v9 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v9 = TerminalPramsManager_TypeInfo;
      }
      v9->static_fields->_MasterMissionTargetType_k__BackingField = -1;
    }
  }
  if ( !v9->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v9);
  TerminalPramsManager__AutoOff(0);
  EventID = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !EventID )
    goto LABEL_44;
  if ( QuestAfterAction__IsExistTerminalTransition(EventID, &isFadeTransition, 0) )
  {
    EventID = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !EventID )
      goto LABEL_44;
    v11 = !QuestAfterAction__IsBlankEarthActiveCommand(EventID, 0);
  }
  else
  {
    v11 = 0;
  }
  if ( !v11 || !isFadeTransition )
    return;
  EventID = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !EventID )
LABEL_44:
    sub_1CE6958(EventID, v6);
  QuestAfterAction__Clear(EventID, 0);
}


float TerminalSceneComponent__FSMenuOffsetX(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4E06DCD & 1) == 0 )
  {
    sub_1CE6700(&FSUtility_TypeInfo);
    byte_4E06DCD = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  return FSUtility__GetOffsetX(54.0, 2, 0);
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
  const MethodInfo *v24; // x3
  struct ScrTerminalListTop_o *mTerminalList; // x8
  System_Action_o *v26; // x2
  Il2CppClass *klass; // x8
  Il2CppClass *v28; // x8
  Il2CppClass *v29; // x8
  Il2CppClass *v30; // x8
  const char *namespaze; // x22
  _BOOL8 IsNullOrEmpty; // x0
  int32_t v33; // w23
  int32_t v34; // w24
  SceneJumpInfo_o *v35; // x22
  TerminalPramsManager_c *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  TerminalPramsManager_c *v43; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  TerminalPramsManager_c *v45; // x0
  int32_t WarId_k__BackingField; // w22
  _BOOL8 IsGrandQuestWarId; // x0
  const MethodInfo *v48; // x2
  ScrTerminalListTop_o *v49; // x22
  Il2CppObject *v50; // x19
  System_Action_o *v51; // x21
  QuestAfterAction_o *v52; // x0
  __int64 v53; // x19
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  Il2CppObject *v60; // x20
  System_Action_o *v61; // x21
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  Il2CppObject *v68; // x20
  ScrTerminalMap_o *mTerminalMap; // x22
  int32_t monitor_high; // w23
  System_String_o *MapModelEntryAnimationName; // x22
  TerminalPramsManager_c *v72; // x0
  Il2CppObject *v73; // x0
  float v74; // s8
  CommonUI_o *v75; // x19
  System_Action_o *v76; // x21
  CommonUI_o *v77; // x21
  ScrTerminalMap_o *v78; // x19
  System_Action_o *v79; // x21

  if ( (byte_4E06DEF & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&AvalonSceneManager_TypeInfo);
    sub_1CE6700(&SceneJumpInfo_TypeInfo);
    sub_1CE6700(&ScrTerminalListTop_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass212_0__FadeInAndTriggerEventEffects_b__0__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass212_0__FadeInAndTriggerEventEffects_b__1__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass212_0__FadeInAndTriggerEventEffects_b__2__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass212_0__FadeInAndTriggerEventEffects_b__5__);
    sub_1CE6700(&TerminalSceneComponent___c__DisplayClass212_0_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass212_1__FadeInAndTriggerEventEffects_b__3__);
    sub_1CE6700(&TerminalSceneComponent___c__DisplayClass212_1_TypeInfo);
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E06DEF = 1;
  }
  v9 = sub_1CE694C(TerminalSceneComponent___c__DisplayClass212_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass212_0___ctor((TerminalSceneComponent___c__DisplayClass212_0_o *)v9, 0);
  if ( !v9 )
    goto LABEL_120;
  *(_QWORD *)(v9 + 16) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = callback;
  *(_DWORD *)(v9 + 24) = eventId;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)callback, v18, v19, v20, v21, v22, v23);
  *(float *)(v9 + 40) = fadeTime;
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_120;
  v11 = *(unsigned int *)(v9 + 24);
  if ( mTerminalList->fields.isBackFromBlankEarthMap )
  {
    v26 = *(System_Action_o **)(v9 + 32);
LABEL_7:
    TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(this, v11, v26, v24);
    return;
  }
  Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( (int)v11 >= 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E01E3C )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E01E3C = 1;
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
      if ( !byte_4E01E3C )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        byte_4E01E3C = 1;
      }
      Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
      }
      klass = Instance[1].fields.sendData[13].klass;
      if ( !klass )
        goto LABEL_120;
      if ( LODWORD(klass->_1.name) == *(_DWORD *)(v9 + 24) )
      {
        if ( !LODWORD(Instance[2].klass) )
          j_il2cpp_runtime_class_init_0(Instance);
        if ( !byte_4E01E3C )
        {
          sub_1CE6700(&TerminalPramsManager_TypeInfo);
          byte_4E01E3C = 1;
        }
        Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
        }
        v28 = Instance[1].fields.sendData[13].klass;
        if ( !v28 )
          goto LABEL_120;
        if ( HIDWORD(v28->_1.name) )
        {
          if ( !LODWORD(Instance[2].klass) )
            j_il2cpp_runtime_class_init_0(Instance);
          if ( !byte_4E01E3C )
          {
            sub_1CE6700(&TerminalPramsManager_TypeInfo);
            byte_4E01E3C = 1;
          }
          Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
          }
          v29 = Instance[1].fields.sendData[13].klass;
          if ( v29 )
          {
            if ( HIDWORD(v29->_1.name) == 1 )
            {
              if ( !LODWORD(Instance[2].klass) )
                j_il2cpp_runtime_class_init_0(Instance);
              if ( !byte_4E01E3C )
              {
                sub_1CE6700(&TerminalPramsManager_TypeInfo);
                byte_4E01E3C = 1;
              }
              Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
              }
              v30 = Instance[1].fields.sendData[13].klass;
              if ( !v30 )
                goto LABEL_120;
              namespaze = v30->_1.namespaze;
              if ( namespaze
                && *((int *)namespaze + 6) >= 1
                && !(IsNullOrEmpty = System_String__IsNullOrEmpty(*((System_String_o **)namespaze + 4), 0)) )
              {
                if ( !*((_DWORD *)namespaze + 6) )
                  sub_1CE6960(IsNullOrEmpty);
                v33 = System_Int32__Parse(*((System_String_o **)namespaze + 4), 0) + 1;
              }
              else
              {
                v33 = 0;
              }
              v34 = *(_DWORD *)(v9 + 24);
              v35 = (SceneJumpInfo_o *)sub_1CE694C(SceneJumpInfo_TypeInfo);
              SceneJumpInfo___ctor_42635632(v35, (System_String_o *)StringLiteral_1/*""*/, v34, v33, 0);
              Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !Instance )
                goto LABEL_120;
              AvalonSceneManager__transitionScene(Instance, 72, 1, (Il2CppObject *)v35, 0);
              Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
            }
            if ( !LODWORD(Instance[2].klass) )
              j_il2cpp_runtime_class_init_0(Instance);
            if ( !byte_4E01E3C )
            {
              sub_1CE6700(&TerminalPramsManager_TypeInfo);
              byte_4E01E3C = 1;
            }
            v36 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v36 = TerminalPramsManager_TypeInfo;
            }
            Instance = (AvalonSceneManager_o *)v36->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
            if ( Instance )
            {
              SpecifiedSceneInfo__InitParameter((SpecifiedSceneInfo_o *)Instance, 0);
              if ( !byte_4E01E1A )
              {
                sub_1CE6700(&TerminalPramsManager_TypeInfo);
                byte_4E01E1A = 1;
              }
              v43 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v43 = TerminalPramsManager_TypeInfo;
              }
              static_fields = v43->static_fields;
              static_fields->_SpecifiedChangeSceneInfo_k__BackingField = 0;
              sub_1CE66A4(
                (GrandQuestFolderBoardItem_o *)&static_fields->_SpecifiedChangeSceneInfo_k__BackingField,
                0,
                v37,
                v38,
                v39,
                v40,
                v41,
                v42);
              LODWORD(v11) = *(_DWORD *)(v9 + 24);
              v26 = *(System_Action_o **)(v9 + 32);
              goto LABEL_7;
            }
          }
LABEL_120:
          sub_1CE6958(Instance, v11);
        }
      }
    }
  }
  if ( !LODWORD(Instance[2].klass) )
    j_il2cpp_runtime_class_init_0(Instance);
  if ( !byte_4DFEC9C )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFEC9C = 1;
  }
  v45 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v45 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v45->static_fields->_WarId_k__BackingField;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  IsGrandQuestWarId = ScrTerminalListTop__IsGrandQuestWarId(WarId_k__BackingField, 0);
  if ( IsGrandQuestWarId
    || !TerminalSceneComponent__IsEnabledMapOnEvent(
          (TerminalSceneComponent_o *)IsGrandQuestWarId,
          *(_DWORD *)(v9 + 24),
          v48) )
  {
    v53 = sub_1CE694C(TerminalSceneComponent___c__DisplayClass212_1_TypeInfo);
    TerminalSceneComponent___c__DisplayClass212_1___ctor((TerminalSceneComponent___c__DisplayClass212_1_o *)v53, 0);
    if ( !v53 )
      goto LABEL_120;
    *(_QWORD *)(v53 + 24) = v9;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v53 + 24), v9, v54, v55, v56, v57, v58, v59);
    v60 = *(Il2CppObject **)(v53 + 24);
    v61 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(
      v61,
      v60,
      Method_TerminalSceneComponent___c__DisplayClass212_0__FadeInAndTriggerEventEffects_b__2__,
      0);
    *(_QWORD *)(v53 + 16) = v61;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v53 + 16), (int32_t)v61, v62, v63, v64, v65, v66, v67);
    v68 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    v51 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(
      v51,
      (Il2CppObject *)v53,
      Method_TerminalSceneComponent___c__DisplayClass212_1__FadeInAndTriggerEventEffects_b__3__,
      0);
    if ( !v68 )
      goto LABEL_120;
    v52 = (QuestAfterAction_o *)v68;
    goto LABEL_88;
  }
  v49 = this->fields.mTerminalList;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4DFEC9C )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFEC9C = 1;
  }
  Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v49 )
    goto LABEL_120;
  if ( ScrTerminalListTop__IsPlanetMapWarId(v49, HIDWORD(Instance[1].fields.sendData->klass), 0) )
  {
    v50 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    v51 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(
      v51,
      (Il2CppObject *)v9,
      Method_TerminalSceneComponent___c__DisplayClass212_0__FadeInAndTriggerEventEffects_b__0__,
      0);
    if ( !v50 )
      goto LABEL_120;
    v52 = (QuestAfterAction_o *)v50;
LABEL_88:
    QuestAfterAction__LoadVoice(v52, v51, 0);
    return;
  }
  Instance = (AvalonSceneManager_o *)this->fields.mTerminalMap;
  if ( !Instance )
    goto LABEL_120;
  if ( !ScrTerminalMap__IsMapModel((ScrTerminalMap_o *)Instance, 0) )
    goto LABEL_111;
  mTerminalMap = this->fields.mTerminalMap;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E0142A )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E0142A = 1;
  }
  Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  monitor_high = HIDWORD(Instance[1].fields.sendData[8].monitor);
  if ( !byte_4E0142B )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    byte_4E0142B = 1;
  }
  if ( !LODWORD(Instance[2].klass) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !mTerminalMap )
    goto LABEL_120;
  MapModelEntryAnimationName = ScrTerminalMap__GetMapModelEntryAnimationName(
                                 mTerminalMap,
                                 monitor_high,
                                 (int32_t)Instance[1].fields.sendData[9].klass,
                                 0);
  if ( !byte_4E01E1C )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E01E1C = 1;
  }
  v72 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v72 = TerminalPramsManager_TypeInfo;
  }
  v72->static_fields->_MapModelClearQuestId_k__BackingField = 0;
  if ( !byte_4E01E1D )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    v72 = TerminalPramsManager_TypeInfo;
    byte_4E01E1D = 1;
  }
  if ( !v72->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v72);
    v72 = TerminalPramsManager_TypeInfo;
  }
  v72->static_fields->_MapModelClearPhaseCount_k__BackingField = 0;
  if ( !System_String__IsNullOrEmpty(MapModelEntryAnimationName, 0) )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v77 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v77 )
      goto LABEL_120;
    CommonUI__maskFadein(v77, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
    v78 = this->fields.mTerminalMap;
    v79 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(
      v79,
      (Il2CppObject *)v9,
      Method_TerminalSceneComponent___c__DisplayClass212_0__FadeInAndTriggerEventEffects_b__5__,
      0);
    if ( !v78 )
      goto LABEL_120;
    ScrTerminalMap__PlayMapModelEntryAnimation(v78, MapModelEntryAnimationName, v79, 0);
  }
  else
  {
LABEL_111:
    v73 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v74 = *(float *)(v9 + 40);
    v75 = (CommonUI_o *)v73;
    v76 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(
      v76,
      (Il2CppObject *)v9,
      Method_TerminalSceneComponent___c__DisplayClass212_0__FadeInAndTriggerEventEffects_b__1__,
      0);
    if ( !v75 )
      goto LABEL_120;
    CommonUI__maskFadein(v75, v74, v76, 0);
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
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Action_o **v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
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

  if ( (byte_4E06DF2 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_EventUiMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass215_0__FadeInAndTriggerEventEffectsNext_b__0__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass215_0__FadeInAndTriggerEventEffectsNext_b__1__);
    sub_1CE6700(&TerminalSceneComponent___c__DisplayClass215_0_TypeInfo);
    byte_4E06DF2 = 1;
  }
  entity = 0;
  v7 = sub_1CE694C(TerminalSceneComponent___c__DisplayClass215_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass215_0___ctor((TerminalSceneComponent___c__DisplayClass215_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_72;
  *(_QWORD *)(v7 + 16) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  v16 = (System_Action_o **)(v7 + 24);
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)callback, v17, v18, v19, v20, v21, v22);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_72;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_34E92A8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
    sub_1CE6958(Instance, v9);
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
      v27 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
      System_Action___ctor(
        v27,
        (Il2CppObject *)v7,
        Method_TerminalSceneComponent___c__DisplayClass215_0__FadeInAndTriggerEventEffectsNext_b__0__,
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
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
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
    v30 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(
      v30,
      (Il2CppObject *)v7,
      Method_TerminalSceneComponent___c__DisplayClass215_0__FadeInAndTriggerEventEffectsNext_b__1__,
      0);
    TitleInfoControl__UpdateDailyPointWithEffect(v28, v30, 0);
    return;
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_72;
  if ( EventDetailEntity__IsEventActivityPoint((EventDetailEntity_o *)entity, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventUiMaster___);
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


void TerminalSceneComponent__FadeinWorldDispNoneExecuteUnusedAssets(
        TerminalSceneComponent_o *this,
        bool isExecuteUnusedAssets,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  AvalonSceneManager_c *v7; // x0
  System_Collections_IEnumerator_o *v8; // x1

  if ( (byte_4E06DE6 & 1) == 0 )
  {
    sub_1CE6700(&AvalonSceneManager_TypeInfo);
    byte_4E06DE6 = 1;
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
  UnityEngine_MonoBehaviour__StartCoroutine_72903732((UnityEngine_MonoBehaviour_o *)this, v8, 0);
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
  Il2CppObject *Instance; // x0
  int32_t FirstFadeMapColorKind_k__BackingField; // w21
  CommonUI_o *v24; // x22
  AvalonSceneManager_c *v25; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v27; // x23
  System_Action_o *v28; // x21
  const MethodInfo *v29; // x2

  if ( (byte_4E06DEA & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&AvalonSceneManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass207_0__Fadein_MapDisp_b__0__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass207_0__Fadein_MapDisp_b__1__);
    sub_1CE6700(&TerminalSceneComponent___c__DisplayClass207_0_TypeInfo);
    byte_4E06DEA = 1;
  }
  v7 = sub_1CE694C(TerminalSceneComponent___c__DisplayClass207_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass207_0___ctor((TerminalSceneComponent___c__DisplayClass207_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_10;
  *(_QWORD *)(v7 + 16) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = end_act;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)end_act, v16, v17, v18, v19, v20, v21);
  if ( this->fields._FirstFadeTime_k__BackingField > 0.0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    FirstFadeMapColorKind_k__BackingField = this->fields._FirstFadeMapColorKind_k__BackingField;
    v24 = (CommonUI_o *)Instance;
    v25 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v25 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v25->static_fields->DEFAULT_FADE_TIME;
    v27 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(
      v27,
      (Il2CppObject *)v7,
      Method_TerminalSceneComponent___c__DisplayClass207_0__Fadein_MapDisp_b__0__,
      0);
    if ( v24 )
    {
      CommonUI__maskFadeChangeColor(
        v24,
        FirstFadeMapColorKind_k__BackingField,
        DEFAULT_FADE_TIME,
        v27,
        this->fields._FirstFadeMapColor_k__BackingField,
        0);
      return;
    }
LABEL_10:
    sub_1CE6958(v8, v9);
  }
  v28 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v7,
    Method_TerminalSceneComponent___c__DisplayClass207_0__Fadein_MapDisp_b__1__,
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
  TerminalPramsManager_c *v22; // x0
  __int64 v23; // x8
  __int64 v24; // x8
  WarEntity_o *v25; // x21
  TerminalPramsManager_c *v26; // x0
  _BOOL4 isInvisibleConnectAndLoad; // w22
  TitleInfoControl_o *mTitleInfo; // x19
  System_Action_o *v29; // x22

  if ( (byte_4E06DEB & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass208_0__Fadein_MapDisp_Load_b__0__);
    sub_1CE6700(&TerminalSceneComponent___c__DisplayClass208_0_TypeInfo);
    byte_4E06DEB = 1;
  }
  v7 = sub_1CE694C(TerminalSceneComponent___c__DisplayClass208_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass208_0___ctor((TerminalSceneComponent___c__DisplayClass208_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_32;
  *(_QWORD *)(v7 + 16) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = end_act;
  *(float *)(v7 + 24) = fade_time;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)end_act, v16, v17, v18, v19, v20, v21);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E0053D )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E0053D = 1;
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
  if ( !byte_4DFE666 )
  {
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4DFE666 = 1;
  }
  mTerminalMap = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mTerminalMap = TerminalSceneComponent_TypeInfo;
  }
  v23 = **((_QWORD **)mTerminalMap + 23);
  if ( !v23 || (v24 = *(_QWORD *)(v23 + 264)) == 0 || (mTerminalMap = *(void **)(v24 + 552)) == 0 )
LABEL_32:
    sub_1CE6958(mTerminalMap, v9);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mTerminalMap, 1, 0);
LABEL_22:
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_32;
  v25 = (WarEntity_o *)*((_QWORD *)mTerminalMap + 45);
  ScrTerminalMap__SetDisp((ScrTerminalMap_o *)mTerminalMap, 1, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E017AF )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E017AF = 1;
  }
  v26 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
  }
  isInvisibleConnectAndLoad = v26->static_fields->isInvisibleConnectAndLoad;
  mTerminalMap = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_32;
  CommonUI__SetLoadMode((CommonUI_o *)mTerminalMap, !isInvisibleConnectAndLoad, 0);
  mTitleInfo = this->fields.mTitleInfo;
  v29 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v7,
    Method_TerminalSceneComponent___c__DisplayClass208_0__Fadein_MapDisp_Load_b__0__,
    0);
  if ( !mTitleInfo )
    goto LABEL_32;
  TitleInfoControl__SetActiveEventInfo(mTitleInfo, v25, 32, v29, 0);
}


void TerminalSceneComponent__Fadein_MapDisp_Start(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 Instance; // x0
  _BOOL8 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 *v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct WarEntity_o *mWarEnt; // x1
  __int64 v31; // x23
  struct ScrTerminalMap_o *v32; // x8
  MapEntity_o *mMapEnt; // x20
  System_String_o *ActiveStateName; // x24
  System_String_o *PrioredBgmName; // x0
  const MethodInfo *v36; // x3
  TerminalPramsManager_c *v37; // x0
  struct ScrTerminalMap_o *v38; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  TerminalPramsManager_c *v40; // x0
  __int64 v41; // x22
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  Il2CppObject **v48; // x23
  __int64 v49; // x8
  __int64 v50; // x8
  __int64 v51; // x8
  __int64 v52; // x8
  __int64 v53; // x8
  __int64 v54; // x8
  __int64 v55; // x0
  Il2CppObject *v56; // x25
  __int64 v57; // x21
  System_Action_object__o *v58; // x24
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  Il2CppObject *v65; // x24
  System_Action_object__o *v66; // x23
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  System_Action_object__o *v79; // x23
  Il2CppObject *v80; // x24
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  Il2CppObject *v88; // x25
  System_Action_object__o *v89; // x23
  int32_t v90; // w2
  int32_t v91; // w3
  System_String_o *v92; // x4
  int32_t v93; // w5
  int64_t v94; // x6
  System_String_o *v95; // x7
  ActionChain_o *v96; // x23
  __int64 v97; // x21
  System_Action_o *v98; // x24
  int32_t v99; // w2
  int32_t v100; // w3
  System_String_o *v101; // x4
  int32_t v102; // w5
  int64_t v103; // x6
  System_String_o *v104; // x7
  ChainableActionBase_o *v105; // x0
  System_Action_array *v106; // x1
  int32_t v107; // w22
  System_Action_o *v108; // x23
  const MethodInfo *v109; // x3
  Il2CppObject *v110; // x21
  Il2CppObject *v111; // x20
  __int64 v112; // x23
  Il2CppObject *v113; // x25
  System_Action_object__o *v114; // x24
  int32_t v115; // w2
  int32_t v116; // w3
  System_String_o *v117; // x4
  int32_t v118; // w5
  int64_t v119; // x6
  System_String_o *v120; // x7
  int32_t v121; // w2
  int32_t v122; // w3
  System_String_o *v123; // x4
  int32_t v124; // w5
  int64_t v125; // x6
  System_String_o *v126; // x7
  System_Action_object__o *v127; // x24
  Il2CppObject *v128; // x25
  struct TerminalSceneComponent___c_StaticFields *v129; // x0
  int32_t v130; // w2
  int32_t v131; // w3
  System_String_o *v132; // x4
  int32_t v133; // w5
  int64_t v134; // x6
  System_String_o *v135; // x7
  int32_t v136; // w2
  int32_t v137; // w3
  System_String_o *v138; // x4
  int32_t v139; // w5
  int64_t v140; // x6
  System_String_o *v141; // x7
  System_Action_object__o *v142; // x24
  Il2CppObject *v143; // x25
  struct TerminalSceneComponent___c_StaticFields *v144; // x0
  int32_t v145; // w2
  int32_t v146; // w3
  System_String_o *v147; // x4
  int32_t v148; // w5
  int64_t v149; // x6
  System_String_o *v150; // x7
  System_Action_object__o *v151; // x24
  int32_t v152; // w2
  int32_t v153; // w3
  System_String_o *v154; // x4
  int32_t v155; // w5
  int64_t v156; // x6
  System_String_o *v157; // x7
  ActionChain_o *v158; // x21
  int32_t v159; // w2
  int32_t v160; // w3
  System_String_o *v161; // x4
  int32_t v162; // w5
  int64_t v163; // x6
  System_String_o *v164; // x7
  System_Action_array *v165; // x23
  __int64 v166; // x1

  if ( (byte_4E06DEC & 1) == 0 )
  {
    sub_1CE6700(&ActionChain_TypeInfo);
    sub_1CE6700(&System_Action___TypeInfo);
    sub_1CE6700(&System_Action_Action____TypeInfo);
    sub_1CE6700(&System_Action_Action__TypeInfo);
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_CommonUI_StartLoginMessages__);
    sub_1CE6700(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&Method_QuestAfterAction_Play__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1CE6700(&SoundManager_TypeInfo);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    sub_1CE6700(&TutorialFlag_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__209_0__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__209_1__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__209_6__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass209_0__Fadein_MapDisp_Start_b__2__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass209_0__Fadein_MapDisp_Start_b__3__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass209_0__Fadein_MapDisp_Start_b__4__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass209_0__Fadein_MapDisp_Start_b__5__);
    sub_1CE6700(&TerminalSceneComponent___c__DisplayClass209_0_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass209_1__Fadein_MapDisp_Start_b__7__);
    sub_1CE6700(&TerminalSceneComponent___c__DisplayClass209_1_TypeInfo);
    sub_1CE6700(&TerminalSceneComponent___c_TypeInfo);
    sub_1CE6700(&StringLiteral_3316/*"CAPTER INIT"*/);
    sub_1CE6700(&StringLiteral_3315/*"CAPTER CREATE"*/);
    sub_1CE6700(&StringLiteral_3317/*"CAPTER WAIT"*/);
    byte_4E06DEC = 1;
  }
  v7 = sub_1CE694C(TerminalSceneComponent___c__DisplayClass209_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass209_0___ctor((TerminalSceneComponent___c__DisplayClass209_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_175;
  *(_QWORD *)(v7 + 16) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = end_act;
  v16 = (__int64 *)(v7 + 40);
  *(float *)(v7 + 32) = fade_time;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)end_act, v17, v18, v19, v20, v21, v22);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_175;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_175;
  mWarEnt = mTerminalMap->fields.mWarEnt;
  *(_QWORD *)(v7 + 24) = mWarEnt;
  v31 = v7 + 24;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)mWarEnt, v23, v24, v25, v26, v27, v28);
  v32 = this->fields.mTerminalMap;
  if ( !v32 )
    goto LABEL_175;
  Instance = (__int64)this->fields.mTerminalList;
  if ( !Instance )
    goto LABEL_175;
  mMapEnt = v32->fields.mMapEnt;
  Instance = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_175;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)Instance, 0);
  v9 = System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3315/*"CAPTER CREATE"*/, 0)
    || System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3316/*"CAPTER INIT"*/, 0)
    || System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3317/*"CAPTER WAIT"*/, 0);
  Instance = (__int64)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_175;
  TitleInfoControl__setBackBtnSprite_41040968((TitleInfoControl_o *)Instance, v9, 0, 0, 0);
  Instance = (__int64)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_175;
  TitleInfoControl__FrameIn((TitleInfoControl_o *)Instance, 0, 0);
  MainMenuBar__FrameIn(0, 0);
  Instance = (__int64)this->fields.mPlayerStatus;
  if ( !Instance )
    goto LABEL_175;
  ScrPlayerStatus__FrameIn((ScrPlayerStatus_o *)Instance, 0, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_175;
  if ( *(_BYTE *)(Instance + 200) )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopBgm(0);
  }
  else
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E0196B )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E0196B = 1;
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
        goto LABEL_175;
      PrioredBgmName = MapEntity__GetPrioredBgmName(mMapEnt, 0);
      TerminalSceneComponent__playBgm(this, PrioredBgmName, 0, v36);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E0196B )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E0196B = 1;
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
      goto LABEL_175;
    ScrTerminalMap__AllMaskStart((ScrTerminalMap_o *)Instance, 0, 1, 0);
    MainMenuBar__FrameOut(0, 0);
    Instance = (__int64)this->fields.mTitleInfo;
    if ( !Instance )
      goto LABEL_175;
    TitleInfoControl__FrameOut((TitleInfoControl_o *)Instance, 0, 0);
    Instance = (__int64)this->fields.mPlayerStatus;
    if ( !Instance )
      goto LABEL_175;
    ScrPlayerStatus__FrameOut((ScrPlayerStatus_o *)Instance, 1, 0);
    v37 = TerminalPramsManager_TypeInfo;
  }
  if ( !v37->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v37);
  if ( !byte_4E0053D )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E0053D = 1;
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
    if ( !byte_4E01954 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E01954 = 1;
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
        goto LABEL_175;
      Instance = (__int64)v38->fields.spotMaskObj;
      if ( !Instance )
        goto LABEL_175;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      MainMenuBar__FrameOut(0, 0);
      Instance = (__int64)this->fields.mTitleInfo;
      if ( !Instance )
        goto LABEL_175;
      TitleInfoControl__FrameOut((TitleInfoControl_o *)Instance, 0, 0);
      Instance = (__int64)this->fields.mPlayerStatus;
      if ( !Instance )
        goto LABEL_175;
      ScrPlayerStatus__FrameOut((ScrPlayerStatus_o *)Instance, 1, 0);
      mTerminalList = this->fields.mTerminalList;
      if ( !mTerminalList )
        goto LABEL_175;
      Instance = (__int64)mTerminalList->fields.mQuestBoardListViewManager;
      if ( !Instance )
        goto LABEL_175;
      QuestBoardListViewManager__SetMode((QuestBoardListViewManager_o *)Instance, 4, 0, 0, 0, 0, 0);
      Instance = (__int64)TerminalPramsManager_TypeInfo;
    }
  }
  if ( !*(_DWORD *)(Instance + 224) )
    j_il2cpp_runtime_class_init_0(Instance);
  if ( !byte_4E01954 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E01954 = 1;
  }
  v40 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v40 = TerminalPramsManager_TypeInfo;
  }
  if ( !v40->static_fields->_IsScriptDisp_k__BackingField )
  {
    if ( !v40->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v40);
    if ( !byte_4E0053D )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E0053D = 1;
    }
    Instance = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( *(_BYTE *)(*(_QWORD *)(Instance + 184) + 103LL) )
    {
      v41 = sub_1CE694C(TerminalSceneComponent___c__DisplayClass209_1_TypeInfo);
      TerminalSceneComponent___c__DisplayClass209_1___ctor((TerminalSceneComponent___c__DisplayClass209_1_o *)v41, 0);
      if ( !v41 )
        goto LABEL_175;
      *(_QWORD *)(v41 + 24) = v7;
      v48 = (Il2CppObject **)(v41 + 24);
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v41 + 24), v7, v42, v43, v44, v45, v46, v47);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4DFE666 )
      {
        sub_1CE6700(&TerminalSceneComponent_TypeInfo);
        byte_4DFE666 = 1;
      }
      Instance = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v49 = **(_QWORD **)(Instance + 184);
      if ( !v49 )
        goto LABEL_175;
      v50 = *(_QWORD *)(v49 + 264);
      if ( !v50 )
        goto LABEL_175;
      Instance = *(_QWORD *)(v50 + 552);
      if ( !Instance )
        goto LABEL_175;
      *(_BYTE *)(v41 + 16) = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
      if ( !Instance )
        goto LABEL_175;
      QuestAfterAction__Init((QuestAfterAction_o *)Instance, 0);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
      if ( !Instance )
        goto LABEL_175;
      QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)Instance, 1, 0);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
      if ( !Instance )
        goto LABEL_175;
      if ( QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0) )
      {
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4DFE666 )
        {
          sub_1CE6700(&TerminalSceneComponent_TypeInfo);
          byte_4DFE666 = 1;
        }
        Instance = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          Instance = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v51 = **(_QWORD **)(Instance + 184);
        if ( !v51 )
          goto LABEL_175;
        v52 = *(_QWORD *)(v51 + 264);
        if ( !v52 )
          goto LABEL_175;
        Instance = *(_QWORD *)(v52 + 552);
        if ( !Instance )
          goto LABEL_175;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      }
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4DFE666 )
      {
        sub_1CE6700(&TerminalSceneComponent_TypeInfo);
        byte_4DFE666 = 1;
      }
      Instance = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v53 = **(_QWORD **)(Instance + 184);
      if ( !v53 )
        goto LABEL_175;
      v54 = *(_QWORD *)(v53 + 264);
      if ( !v54 )
        goto LABEL_175;
      Instance = *(_QWORD *)(v54 + 552);
      if ( !Instance )
        goto LABEL_175;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
      {
        Instance = (__int64)this->fields.mTerminalMap;
        if ( !Instance )
          goto LABEL_175;
        ScrTerminalMap__AllMaskStart((ScrTerminalMap_o *)Instance, 0, 1, 0);
      }
      v55 = sub_1CE67A8(System_Action_Action____TypeInfo, 4);
      v56 = *v48;
      v57 = v55;
      v58 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
      System_Action_object____ctor(
        v58,
        v56,
        Method_TerminalSceneComponent___c__DisplayClass209_0__Fadein_MapDisp_Start_b__4__,
        0);
      if ( !v57 )
LABEL_175:
        sub_1CE6958(Instance, v9);
      if ( *(_DWORD *)(v57 + 24) )
      {
        *(_QWORD *)(v57 + 32) = v58;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v57 + 32), (int32_t)v58, v59, v60, v61, v62, v63, v64);
        v65 = *v48;
        v66 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
        System_Action_object____ctor(
          v66,
          v65,
          Method_TerminalSceneComponent___c__DisplayClass209_0__Fadein_MapDisp_Start_b__5__,
          0);
        if ( *(_DWORD *)(v57 + 24) > 1u )
        {
          *(_QWORD *)(v57 + 40) = v66;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v57 + 40), (int32_t)v66, v67, v68, v69, v70, v71, v72);
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
            v79 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
            System_Action_object____ctor(
              v79,
              v80,
              Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__209_6__,
              0);
            static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
            static_fields->__9__209_6 = (struct System_Action_Action__o *)v79;
            sub_1CE66A4(
              (GrandQuestFolderBoardItem_o *)&static_fields->__9__209_6,
              (int32_t)v79,
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
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v57 + 48), (int32_t)v79, v73, v74, v75, v76, v77, v78);
            v88 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
            v89 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
            System_Action_object____ctor(v89, v88, Method_QuestAfterAction_Play__, 0);
            if ( *(_DWORD *)(v57 + 24) > 3u )
            {
              *(_QWORD *)(v57 + 56) = v89;
              sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v57 + 56), (int32_t)v89, v90, v91, v92, v93, v94, v95);
              v96 = (ActionChain_o *)sub_1CE694C(ActionChain_TypeInfo);
              ActionChain___ctor_50148084(v96, (System_Action_Action__array *)v57, 0);
              v97 = sub_1CE67A8(System_Action___TypeInfo, 1);
              v98 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
              System_Action___ctor(
                v98,
                (Il2CppObject *)v41,
                Method_TerminalSceneComponent___c__DisplayClass209_1__Fadein_MapDisp_Start_b__7__,
                0);
              if ( !v97 )
                goto LABEL_175;
              if ( *(_DWORD *)(v97 + 24) )
              {
                *(_QWORD *)(v97 + 32) = v98;
                sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v97 + 32), (int32_t)v98, v99, v100, v101, v102, v103, v104);
                if ( !v96 )
                  goto LABEL_175;
                v105 = (ChainableActionBase_o *)v96;
                v106 = (System_Action_array *)v97;
LABEL_127:
                Instance = (__int64)ChainableActionBase__Final(v105, v106, 0);
                if ( !Instance )
                  goto LABEL_175;
                ChainableActionBase__Execute((ChainableActionBase_o *)Instance, 0);
                goto LABEL_136;
              }
            }
          }
        }
      }
    }
    else
    {
      if ( !this->fields.mIsStart_LoginBonusWhiteBg )
        goto LABEL_134;
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      Instance = TutorialFlag__Get_41569468(102, 0);
      if ( (Instance & 1) == 0 || this->fields.isTutorialAfter )
      {
LABEL_134:
        if ( !*(_QWORD *)v31 )
          goto LABEL_175;
        v107 = *(_DWORD *)(*(_QWORD *)v31 + 96LL);
        v108 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
        System_Action___ctor(
          v108,
          (Il2CppObject *)v7,
          Method_TerminalSceneComponent___c__DisplayClass209_0__Fadein_MapDisp_Start_b__3__,
          0);
        TerminalSceneComponent__StartEventDailyPoint(this, v107, v108, v109);
        goto LABEL_136;
      }
      this->fields.mIsStart_LoginBonusWhiteBg = 0;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_175;
      CommonUI__SetupLoginResultData((CommonUI_o *)Instance, 0, 0);
      v112 = sub_1CE67A8(System_Action_Action____TypeInfo, 4);
      v113 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v114 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
      System_Action_object____ctor(v114, v113, Method_CommonUI_StartLoginMessages__, 0);
      if ( !v112 )
        goto LABEL_175;
      if ( *(_DWORD *)(v112 + 24) )
      {
        *(_QWORD *)(v112 + 32) = v114;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v112 + 32), (int32_t)v114, v115, v116, v117, v118, v119, v120);
        Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
        if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
          Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
        }
        v127 = *(System_Action_object__o **)(*(_QWORD *)(Instance + 184) + 24LL);
        if ( !v127 )
        {
          if ( !*(_DWORD *)(Instance + 224) )
          {
            j_il2cpp_runtime_class_init_0(Instance);
            Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
          }
          v128 = **(Il2CppObject ***)(Instance + 184);
          v127 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v127,
            v128,
            Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__209_0__,
            0);
          v129 = TerminalSceneComponent___c_TypeInfo->static_fields;
          v129->__9__209_0 = (struct System_Action_Action__o *)v127;
          sub_1CE66A4(
            (GrandQuestFolderBoardItem_o *)&v129->__9__209_0,
            (int32_t)v127,
            v130,
            v131,
            v132,
            v133,
            v134,
            v135);
        }
        if ( *(_DWORD *)(v112 + 24) > 1u )
        {
          *(_QWORD *)(v112 + 40) = v127;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v112 + 40), (int32_t)v127, v121, v122, v123, v124, v125, v126);
          Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
          if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
            Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
          }
          v142 = *(System_Action_object__o **)(*(_QWORD *)(Instance + 184) + 32LL);
          if ( !v142 )
          {
            if ( !*(_DWORD *)(Instance + 224) )
            {
              j_il2cpp_runtime_class_init_0(Instance);
              Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
            }
            v143 = **(Il2CppObject ***)(Instance + 184);
            v142 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
            System_Action_object____ctor(
              v142,
              v143,
              Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__209_1__,
              0);
            v144 = TerminalSceneComponent___c_TypeInfo->static_fields;
            v144->__9__209_1 = (struct System_Action_Action__o *)v142;
            sub_1CE66A4(
              (GrandQuestFolderBoardItem_o *)&v144->__9__209_1,
              (int32_t)v142,
              v145,
              v146,
              v147,
              v148,
              v149,
              v150);
          }
          if ( *(_DWORD *)(v112 + 24) > 2u )
          {
            *(_QWORD *)(v112 + 48) = v142;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v112 + 48), (int32_t)v142, v136, v137, v138, v139, v140, v141);
            v151 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
            System_Action_object____ctor(
              v151,
              (Il2CppObject *)v7,
              Method_TerminalSceneComponent___c__DisplayClass209_0__Fadein_MapDisp_Start_b__2__,
              0);
            if ( *(_DWORD *)(v112 + 24) > 3u )
            {
              *(_QWORD *)(v112 + 56) = v151;
              sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v112 + 56), (int32_t)v151, v152, v153, v154, v155, v156, v157);
              v158 = (ActionChain_o *)sub_1CE694C(ActionChain_TypeInfo);
              ActionChain___ctor_50148084(v158, (System_Action_Action__array *)v112, 0);
              Instance = sub_1CE67A8(System_Action___TypeInfo, 1);
              if ( !Instance )
                goto LABEL_175;
              v165 = (System_Action_array *)Instance;
              if ( *(_DWORD *)(Instance + 24) )
              {
                v166 = *v16;
                *(_QWORD *)(Instance + 32) = *v16;
                sub_1CE66A4((GrandQuestFolderBoardItem_o *)(Instance + 32), v166, v159, v160, v161, v162, v163, v164);
                if ( !v158 )
                  goto LABEL_175;
                v105 = (ChainableActionBase_o *)v158;
                v106 = v165;
                goto LABEL_127;
              }
            }
          }
        }
      }
    }
    sub_1CE6960(Instance);
  }
LABEL_136:
  v110 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v110, 0, 0) )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_175;
    if ( !*(_BYTE *)(Instance + 224) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventTutorialMaster___);
      if ( !mMapEnt || !Instance )
        goto LABEL_175;
      EventTutorialMaster__PlayTutorialSetUpAction((EventTutorialMaster_o *)Instance, mMapEnt->fields.id, 0);
    }
  }
  v111 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v111, 0, 0) )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_175;
    QuestAfterAction__ExecuteReservedCommandListBeforeFadeIn((QuestAfterAction_o *)Instance, 0);
  }
  Instance = (__int64)this->fields.mTerminalMap;
  if ( !Instance )
    goto LABEL_175;
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

  if ( (byte_4E06DE7 & 1) == 0 )
  {
    sub_1CE6700(&AvalonSceneManager_TypeInfo);
    byte_4E06DE7 = 1;
  }
  v6 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v6 = AvalonSceneManager_TypeInfo;
  }
  v7 = TerminalSceneComponent__coFadein_WorldDisp(this, v6->static_fields->DEFAULT_FADE_TIME, end_act, 1, v3);
  UnityEngine_MonoBehaviour__StartCoroutine_72903732((UnityEngine_MonoBehaviour_o *)this, v7, 0);
}


void TerminalSceneComponent__Fadein_WorldDisp_46461888(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  System_Collections_IEnumerator_o *v6; // x1

  v6 = TerminalSceneComponent__coFadein_WorldDisp(this, fade_time, end_act, 1, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_72903732((UnityEngine_MonoBehaviour_o *)this, v6, 0);
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
    sub_1CE6958(this, method);
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
        sub_1CE6960(this);
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

  if ( (byte_4E06E20 & 1) == 0 )
  {
    sub_1CE6700(&string_TypeInfo);
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4E06E20 = 1;
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
    return UnityEngine_PlayerPrefs__GetString_72876844(OVERWRITE_COMMON_BG_TYPE2_KEY, 0);
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
    return UnityEngine_PlayerPrefs__GetString_72876844(OVERWRITE_COMMON_BG_TYPE2_KEY, 0);
  }
  return string_TypeInfo->static_fields->Empty;
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

  if ( (byte_4E06E0A & 1) == 0 )
  {
    sub_1CE6700(&CondType_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMaster_SpotMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E06E0A = 1;
  }
  entity = 0;
  Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  if ( !BYTE5(Instance[2].fields.seriazlier) )
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
          sub_1CE6960(Instance);
        v8 = questEntList->m_Items[v7];
        if ( !v8 )
          break;
        id = v8->fields.id;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)CondType__IsQuestClear_41467300(id, -1, 0, 0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_SpotMaster___);
          if ( !Instance )
            break;
          Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                     Instance,
                                                                     &entity,
                                                                     v8->fields.spotId,
                                                                     (const MethodInfo_34E92A8 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              break;
            klass_high = HIDWORD(entity[1].klass);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4DFEC9C )
            {
              sub_1CE6700(&TerminalPramsManager_TypeInfo);
              byte_4DFEC9C = 1;
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
          return 0;
      }
LABEL_28:
      sub_1CE6958(Instance, v5);
    }
  }
  return 0;
}


int32_t TerminalSceneComponent__GetState(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_o *v2; // x19
  struct CStateManager_TerminalSceneComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_4E06E0D & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_1CE6700(&Method_CStateManager_TerminalSceneComponent__getState__);
    byte_4E06E0D = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1CE6958(this, method);
  return mFSM->fields.m_state;
}


void TerminalSceneComponent__InitLighting(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4E06E1E & 1) == 0 )
  {
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4E06E1E = 1;
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
  __int64 v5; // x1
  WarEntity_o *v6; // x0
  WarEntity_o *v7; // x19
  int max_length; // w8
  int v9; // w9
  int *v10; // x10

  if ( (byte_4E06DF0 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_MapMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E06DF0 = 1;
  }
  if ( !eventId )
    return 1;
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_20;
  v6 = WarMaster__getByEventId((WarMaster_o *)Instance, eventId, 0);
  if ( !v6 )
    return 1;
  v7 = v6;
  if ( WarEntity__HasFlag(v6, 2, 0) )
  {
    Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_MapMaster___);
    if ( !Instance )
      goto LABEL_20;
    Instance = MapMaster__getList((MapMaster_o *)Instance, v7->fields.id, 0);
    if ( !Instance )
      goto LABEL_20;
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
LABEL_20:
      sub_1CE6958(Instance, v5);
    }
  }
  return 0;
}


bool TerminalSceneComponent__IsMapActive(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalMap_o *mTerminalMap; // x8

  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap || (this = (TerminalSceneComponent_o *)mTerminalMap->fields.dispRoot) == 0 )
    sub_1CE6958(this, method);
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
}


bool TerminalSceneComponent__IsMapTouchEnabled(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *mTerminalMap; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  System_String_o *v5; // x20

  if ( (byte_4E06DF4 & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1CE6700(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1CE6700(&StringLiteral_8961/*"Map Touch Enable"*/);
    byte_4E06DF4 = 1;
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
      if ( System_String__IndexOf_65181220(v5, (System_String_o *)StringLiteral_8961/*"Map Touch Enable"*/, 0) < 0
        || MainMenuBar__get_IsEnableOutSideCollider(0) )
      {
        return 0;
      }
      mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !mTerminalMap )
        goto LABEL_64;
      if ( !CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)mTerminalMap, 0) )
      {
        mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !mTerminalMap )
          goto LABEL_64;
        if ( !CommonUI__IsActive_ApRecvDlgComp((CommonUI_o *)mTerminalMap, 0) )
        {
          mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !mTerminalMap )
            goto LABEL_64;
          if ( !CommonUI__IsActive_EventItemSelectDlgComp((CommonUI_o *)mTerminalMap, 0) )
          {
            mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !mTerminalMap )
              goto LABEL_64;
            if ( !CommonUI__IsActive_CommonConfirmDialog((CommonUI_o *)mTerminalMap, 0) )
            {
              mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !mTerminalMap )
                goto LABEL_64;
              if ( !CommonUI__IsActive_NotifiDialog((CommonUI_o *)mTerminalMap, 0) )
              {
                mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !mTerminalMap )
                  goto LABEL_64;
                if ( !CommonUI__IsActive_TutorialBigDialog((CommonUI_o *)mTerminalMap, 0) )
                {
                  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !mTerminalMap )
                    goto LABEL_64;
                  if ( !CommonUI__IsActive_MasterMission((CommonUI_o *)mTerminalMap, 0) )
                  {
                    mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( !mTerminalMap )
                      goto LABEL_64;
                    if ( !CommonUI__IsActive_MasterProfile((CommonUI_o *)mTerminalMap, 0) )
                    {
                      mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      if ( !mTerminalMap )
                        goto LABEL_64;
                      if ( !CommonUI__IsActive_MissionListDialog((CommonUI_o *)mTerminalMap, 0) )
                      {
                        mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        if ( !mTerminalMap )
                          goto LABEL_64;
                        if ( !CommonUI__IsActive_AssistEffectConfirmDialog((CommonUI_o *)mTerminalMap, 0) )
                        {
                          mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          if ( !mTerminalMap )
                            goto LABEL_64;
                          if ( !CommonUI__IsActive_CommandAssistConfirmDialog((CommonUI_o *)mTerminalMap, 0) )
                          {
                            mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            if ( !mTerminalMap )
                              goto LABEL_64;
                            if ( !CommonUI__IsActive_AchievementExchangeConditionsDialog((CommonUI_o *)mTerminalMap, 0) )
                            {
                              mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                              if ( !mTerminalMap )
                                goto LABEL_64;
                              if ( !CommonUI__IsActive_SvtFrameShortDialog((CommonUI_o *)mTerminalMap, 0) )
                              {
                                mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                                  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                                  if ( !mTerminalMap )
                                    goto LABEL_64;
                                  if ( !QuestAfterAction__IsPlaying((QuestAfterAction_o *)mTerminalMap, 0) )
                                  {
                                    mTerminalMap = (ScrTerminalMap_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
                                            mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                                            if ( !mTerminalMap )
                                              goto LABEL_64;
                                            if ( !BYTE5(mTerminalMap->fields.rootEventObjP) )
                                            {
                                              mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                              if ( !mTerminalMap )
                                                goto LABEL_64;
                                              if ( !CommonUI__IsActive_MessageAndScrollDetailConfirmDialog(
                                                      (CommonUI_o *)mTerminalMap,
                                                      0) )
                                              {
                                                mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                                if ( mTerminalMap )
                                                {
                                                  if ( CommonUI__IsActive_ScrollMessageDialog(
                                                         (CommonUI_o *)mTerminalMap,
                                                         0) )
                                                  {
                                                    return 0;
                                                  }
                                                  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                                  if ( mTerminalMap )
                                                    return !CommonUI__IsActiveQuestSkipConfirmDialog(
                                                              (CommonUI_o *)mTerminalMap,
                                                              0);
                                                }
LABEL_64:
                                                sub_1CE6958(mTerminalMap, method);
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
    sub_1CE6958(this, 0);
  return shopEntity->fields.shopType == 11
      && shopEntity->fields.purchaseType == 14
      && !ShopEntity__IsEligibleForFreeFeaturesTheCostumeRelease(shopEntity, 0);
}


bool TerminalSceneComponent__IsPlayChapterStart(TerminalSceneComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4E06E06 & 1) == 0 )
  {
    sub_1CE6700(&CondType_TypeInfo);
    sub_1CE6700(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E06E06 = 1;
  }
  IsWarStartAnim_k__BackingField = this->fields._IsWarStartAnim_k__BackingField;
  v4 = this->fields.mTutorialKind == 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IsWarStartActionSkip = TerminalPramsManager__get_Debug_IsWarStartActionSkip(0);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4DFEC9C )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFEC9C = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    sub_1CE6958(v8, v6);
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
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsQuestPhaseClear_41529492(targetId, 1, -1, 0, 0) )
      return 0;
  }
  else if ( !IsWarStartAnim_k__BackingField && !v4 || IsWarStartActionSkip )
  {
    return 0;
  }
  if ( !WarEntity__GetStartType(v10, 0) )
    return 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4DFEC9C )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFEC9C = 1;
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


bool TerminalSceneComponent__IsTerminalListAreaWait(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ScrTerminalListTop_o *mTerminalList; // x0

  if ( (byte_4E06DCB & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_2049/*"AREA WAIT"*/);
    byte_4E06DCB = 1;
  }
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList
    || (mTerminalList = (ScrTerminalListTop_o *)ScrTerminalListTop__mfGetMyFsmP(mTerminalList, 0)) == 0
    || (mTerminalList = (ScrTerminalListTop_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)mTerminalList, 0)) == 0 )
  {
    sub_1CE6958(mTerminalList, method);
  }
  return System_String__IndexOf_65181220((System_String_o *)mTerminalList, (System_String_o *)StringLiteral_2049/*"AREA WAIT"*/, 0) >= 0;
}


bool TerminalSceneComponent__IsValidGrandBgm(TerminalSceneComponent_o *this, int32_t *index, const MethodInfo *method)
{
  BalanceConfig_c *v4; // x8
  TerminalSceneComponent___c_c *v5; // x0
  System_Int32_array *TerminalGrandBgmCommonReleaseIds; // x20
  System_Predicate_int__o *_9__223_0; // x21
  Il2CppObject *v8; // x22
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t Index_int; // w0

  if ( (byte_4E06DFA & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Array_FindIndex_int___);
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&System_Predicate_int__TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent___c__IsValidGrandBgm_b__223_0__);
    sub_1CE6700(&TerminalSceneComponent___c_TypeInfo);
    byte_4E06DFA = 1;
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
  _9__223_0 = v5->static_fields->__9__223_0;
  if ( !_9__223_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = TerminalSceneComponent___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__223_0 = (System_Predicate_int__o *)sub_1CE694C(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(_9__223_0, v8, Method_TerminalSceneComponent___c__IsValidGrandBgm_b__223_0__, 0);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__223_0 = _9__223_0;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__223_0,
      (int32_t)_9__223_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  Index_int = System_Array__FindIndex_int_(
                TerminalGrandBgmCommonReleaseIds,
                (System_Predicate_T__o *)_9__223_0,
                (const MethodInfo_330A14C *)Method_System_Array_FindIndex_int___);
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

  if ( (byte_4E06E15 & 1) == 0 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E06E15 = 1;
  }
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_17;
  if ( ScrTerminalListTop__get_IsActiveAnyEarth(mTerminalList, 0) )
    return 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E01429 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E01429 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  result = 0;
  DispState_k__BackingField = static_fields->_DispState_k__BackingField;
  if ( DispState_k__BackingField <= 3 && DispState_k__BackingField != 2 )
  {
    mTerminalList = this->fields.mTerminalList;
    if ( mTerminalList )
      return ScrTerminalListTop__CheckTerminalTopEffect(mTerminalList, 0, 0) != 0;
LABEL_17:
    sub_1CE6958(mTerminalList, method);
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
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7

  if ( (byte_4E06DD9 & 1) == 0 )
  {
    sub_1CE6700(&TerminalSceneComponent__LoadAsync_d__187_TypeInfo);
    byte_4E06DD9 = 1;
  }
  v7 = sub_1CE694C(TerminalSceneComponent__LoadAsync_d__187_TypeInfo);
  TerminalSceneComponent__LoadAsync_d__187___ctor((TerminalSceneComponent__LoadAsync_d__187_o *)v7, 0, 0);
  if ( !v7 )
    sub_1CE6958(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = usd;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)usd, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 48) = callback;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 48), (int32_t)callback, v22, v23, v24, v25, v26, v27);
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
  const MethodInfo_3A32A54 *v9; // x2
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
  if ( (byte_4E06E1D & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Nullable_Vector3__get_HasValue__);
    this = (TerminalSceneComponent_o *)sub_1CE6700(&Method_System_Nullable_Vector3__get_Value__);
    byte_4E06E1D = 1;
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
    if ( !byte_4DFE0AE )
    {
      sub_1CE6700(&UnityEngine_Vector3_TypeInfo);
      byte_4DFE0AE = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->oneVector.fields.x;
    y = static_fields->oneVector.fields.y;
    z = static_fields->oneVector.fields.z;
  }
  this = (TerminalSceneComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0);
  if ( !this )
LABEL_13:
    sub_1CE6958(this, dialog);
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
    sub_1CE6958(0, method);
  ((void (__fastcall *)(struct BaseCore_o *, const MethodInfo *))mEarthCore->klass->vtable._7_OnPress.methodPtr)(
    mEarthCore,
    mEarthCore->klass->vtable._7_OnPress.method);
}


void TerminalSceneComponent__OnCoreRelease(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  BaseCore_o *mEarthCore; // x0

  mEarthCore = this->fields.mEarthCore;
  if ( !mEarthCore )
    sub_1CE6958(0, method);
  BaseCore__OnRelease(mEarthCore, 0);
}


void TerminalSceneComponent__OnDestroy(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  TerminalSceneComponent_c *v11; // x0
  long double v12; // q0
  __int64 v13; // x0
  __int64 v14; // x0
  UnityEngine_Object_o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_String_o *loadEarthAssetName; // x20
  const MethodInfo *v23; // x1

  if ( (byte_4E06DD3 & 1) == 0 )
  {
    sub_1CE6700(&AssetManager_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_AssetManager__getInstance__);
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4E06DD3 = 1;
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
    v11 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v11 = TerminalSceneComponent_TypeInfo;
    }
    v11->static_fields->mInstance = 0;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)TerminalSceneComponent_TypeInfo->static_fields,
      0,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    v13 = *((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1CBC788(v12);
    v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1CBC788(v12);
    v15 = **(UnityEngine_Object_o ***)(v14 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Implicit(v15, 0) )
    {
      loadEarthAssetName = this->fields.loadEarthAssetName;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage(loadEarthAssetName, 0);
    }
    this->fields.loadEarthAssetName = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.loadEarthAssetName, 0, v16, v17, v18, v19, v20, v21);
    StandFigureManager__ReleaseCharaFigure(0);
    TerminalSceneComponent__ReleaseAssetToResume(this, v23);
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
  System_String_o *String_72876844; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x24
  System_Func_object__int__o *v12; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  System_Int32_array *v14; // x0
  TerminalSceneComponent___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x24
  System_Func_T__TResult__o *_9__273_0; // x25
  Il2CppObject *v18; // x26
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_Generic_List_TSource__o *v27; // x0
  TerminalSceneComponent___c_c *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x24
  System_Func_object__bool__o *_9__273_1; // x25
  Il2CppObject *v31; // x26
  GrandQuestFolderBoardItem_o *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  TerminalSceneComponent___c_c *v40; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x24
  System_Func_object__bool__o *_9__273_2; // x25
  Il2CppObject *v43; // x26
  struct TerminalSceneComponent___c_StaticFields *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x24
  System_Func_object__bool__o *v52; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  System_Collections_Generic_List_TSource__o *v54; // x0
  TerminalSceneComponent___c_c *v55; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x23
  System_Func_object__int__o *_9__273_4; // x24
  Il2CppObject *v58; // x25
  struct TerminalSceneComponent___c_StaticFields *v59; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x23
  Il2CppObject *Instance; // x24
  System_String_o *v69; // x22
  TerminalSceneComponent___c_c *v70; // x0
  System_Func_T__TResult__o *_9__273_5; // x24
  Il2CppObject *v72; // x25
  struct TerminalSceneComponent___c_StaticFields *v73; // x0
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v80; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v81; // x25
  System_String_o *v82; // x0
  TerminalSceneComponent___c_c *v83; // x8
  System_String_o *v84; // x21
  System_Func_object__int__o *_9__273_6; // x26
  Il2CppObject *v86; // x27
  struct TerminalSceneComponent___c_StaticFields *v87; // x0
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7
  Il2CppObject *v94; // x0
  int32_t v97; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4E06E18 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Linq_Enumerable_Select_int__ShopEntity___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Select_ShopEntity__int___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Sum_ShopEntity___);
    sub_1CE6700(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1CE6700(&Method_System_Linq_Enumerable_ToList_ShopEntity___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Where_ShopEntity___);
    sub_1CE6700(&System_Func_int__ShopEntity__TypeInfo);
    sub_1CE6700(&System_Func_ShopEntity__int__TypeInfo);
    sub_1CE6700(&System_Func_ShopEntity__bool__TypeInfo);
    sub_1CE6700(&System_Func_string__int__TypeInfo);
    sub_1CE6700(&Method_System_Int32_Parse__);
    sub_1CE6700(&int_TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_TerminalSceneComponent__OpenExchangeDialogue_b__273_3__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__273_0__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__273_1__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__273_2__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__273_4__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__273_5__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__273_6__);
    sub_1CE6700(&TerminalSceneComponent___c_TypeInfo);
    sub_1CE6700(&StringLiteral_19940/*"freeShopIds"*/);
    byte_4E06E18 = 1;
  }
  String_72876844 = UnityEngine_PlayerPrefs__GetString_72876844(playerPrefsKey, 0);
  if ( !String_72876844 )
    goto LABEL_34;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_72876844, 0x2Cu, 0, 0);
  v12 = (System_Func_object__int__o *)sub_1CE694C(System_Func_string__int__TypeInfo);
  System_Func_object__int____ctor(v12, 0, Method_System_Int32_Parse__, 0);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v11,
                                                               (System_Func_TSource__TResult__o *)v12,
                                                               (const MethodInfo_3239D60 *)Method_System_Linq_Enumerable_Select_string__int___);
  v14 = System_Linq_Enumerable__ToArray_int_(
          v13,
          (const MethodInfo_3243710 *)Method_System_Linq_Enumerable_ToArray_int___);
  v15 = TerminalSceneComponent___c_TypeInfo;
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)v14;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v15 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__273_0 = (System_Func_T__TResult__o *)v15->static_fields->__9__273_0;
  if ( !_9__273_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = TerminalSceneComponent___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__273_0 = (System_Func_T__TResult__o *)sub_1CE694C(System_Func_int__ShopEntity__TypeInfo);
    System_Func_int__object____ctor(
      _9__273_0,
      v18,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__273_0__,
      0);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__273_0 = (struct System_Func_int__ShopEntity__o *)_9__273_0;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__273_0,
      (int32_t)_9__273_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               v16,
                                                               (System_Func_TSource__TResult__o *)_9__273_0,
                                                               (const MethodInfo_3237910 *)Method_System_Linq_Enumerable_Select_int__ShopEntity___);
  v27 = System_Linq_Enumerable__ToList_object_(
          v26,
          (const MethodInfo_3248A54 *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
  v28 = TerminalSceneComponent___c_TypeInfo;
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)v27;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v28 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__273_1 = (System_Func_object__bool__o *)v28->static_fields->__9__273_1;
  if ( !_9__273_1 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = TerminalSceneComponent___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__273_1 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__273_1,
      v31,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__273_1__,
      0);
    v32 = (GrandQuestFolderBoardItem_o *)TerminalSceneComponent___c_TypeInfo->static_fields;
    v32[1].klass = (GrandQuestFolderBoardItem_c *)_9__273_1;
    sub_1CE66A4(v32 + 1, (int32_t)_9__273_1, v33, v34, v35, v36, v37, v38);
  }
  v39 = System_Linq_Enumerable__Where_object_(
          v29,
          (System_Func_TSource__bool__o *)_9__273_1,
          (const MethodInfo_324B214 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v40 = TerminalSceneComponent___c_TypeInfo;
  v41 = v39;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v40 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__273_2 = (System_Func_object__bool__o *)v40->static_fields->__9__273_2;
  if ( !_9__273_2 )
  {
    if ( !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      v40 = TerminalSceneComponent___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v40->static_fields->__9;
    _9__273_2 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__273_2,
      v43,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__273_2__,
      0);
    v44 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v44->__9__273_2 = (struct System_Func_ShopEntity__bool__o *)_9__273_2;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v44->__9__273_2, (int32_t)_9__273_2, v45, v46, v47, v48, v49, v50);
  }
  v51 = System_Linq_Enumerable__Where_object_(
          v41,
          (System_Func_TSource__bool__o *)_9__273_2,
          (const MethodInfo_324B214 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v52 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_ShopEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v52,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent__OpenExchangeDialogue_b__273_3__,
    0);
  v53 = System_Linq_Enumerable__Where_object_(
          v51,
          (System_Func_TSource__bool__o *)v52,
          (const MethodInfo_324B214 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v54 = System_Linq_Enumerable__ToList_object_(
          v53,
          (const MethodInfo_3248A54 *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
  v55 = TerminalSceneComponent___c_TypeInfo;
  v56 = (System_Collections_Generic_IEnumerable_TSource__o *)v54;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v55 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__273_4 = (System_Func_object__int__o *)v55->static_fields->__9__273_4;
  if ( !_9__273_4 )
  {
    if ( !v55->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v55);
      v55 = TerminalSceneComponent___c_TypeInfo;
    }
    v58 = (Il2CppObject *)v55->static_fields->__9;
    _9__273_4 = (System_Func_object__int__o *)sub_1CE694C(System_Func_ShopEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__273_4,
      v58,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__273_4__,
      0);
    v59 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v59->__9__273_4 = (struct System_Func_ShopEntity__int__o *)_9__273_4;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v59->__9__273_4, (int32_t)_9__273_4, v60, v61, v62, v63, v64, v65);
  }
  v66 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v56,
                                                               (System_Func_TSource__TResult__o *)_9__273_4,
                                                               (const MethodInfo_3239D60 *)Method_System_Linq_Enumerable_Select_ShopEntity__int___);
  String_72876844 = (System_String_o *)System_Linq_Enumerable__ToArray_int_(
                                         v66,
                                         (const MethodInfo_3243710 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !String_72876844 )
    goto LABEL_34;
  v67 = (System_Collections_Generic_IEnumerable_TSource__o *)String_72876844;
  if ( String_72876844[1].klass )
  {
    if ( System_String__op_Equality(playerPrefsKey, (System_String_o *)StringLiteral_19940/*"freeShopIds"*/, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v69 = LocalizationManager__Get(localizationKeyForTitle, 0);
      String_72876844 = LocalizationManager__Get(localizationKeyForDetail, 0);
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
    _9__273_5 = (System_Func_T__TResult__o *)v70->static_fields->__9__273_5;
    if ( !_9__273_5 )
    {
      if ( !v70->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v70);
        v70 = TerminalSceneComponent___c_TypeInfo;
      }
      v72 = (Il2CppObject *)v70->static_fields->__9;
      _9__273_5 = (System_Func_T__TResult__o *)sub_1CE694C(System_Func_int__ShopEntity__TypeInfo);
      System_Func_int__object____ctor(
        _9__273_5,
        v72,
        Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__273_5__,
        0);
      v73 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v73->__9__273_5 = (struct System_Func_int__ShopEntity__o *)_9__273_5;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v73->__9__273_5, (int32_t)_9__273_5, v74, v75, v76, v77, v78, v79);
    }
    v80 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                 v67,
                                                                 (System_Func_TSource__TResult__o *)_9__273_5,
                                                                 (const MethodInfo_3237910 *)Method_System_Linq_Enumerable_Select_int__ShopEntity___);
    v81 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                 v80,
                                                                 (const MethodInfo_3248A54 *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v69 = LocalizationManager__Get(localizationKeyForTitle, 0);
    v82 = LocalizationManager__Get(localizationKeyForDetail, 0);
    v83 = TerminalSceneComponent___c_TypeInfo;
    v84 = v82;
    if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v83 = TerminalSceneComponent___c_TypeInfo;
    }
    _9__273_6 = (System_Func_object__int__o *)v83->static_fields->__9__273_6;
    if ( !_9__273_6 )
    {
      if ( !v83->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v83);
        v83 = TerminalSceneComponent___c_TypeInfo;
      }
      v86 = (Il2CppObject *)v83->static_fields->__9;
      _9__273_6 = (System_Func_object__int__o *)sub_1CE694C(System_Func_ShopEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__273_6,
        v86,
        Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__273_6__,
        0);
      v87 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v87->__9__273_6 = (struct System_Func_ShopEntity__int__o *)_9__273_6;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v87->__9__273_6, (int32_t)_9__273_6, v88, v89, v90, v91, v92, v93);
    }
    v97 = System_Linq_Enumerable__Sum_object_(
            v81,
            (System_Func_TSource__int__o *)_9__273_6,
            (const MethodInfo_3241ECC *)Method_System_Linq_Enumerable_Sum_ShopEntity___);
    v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v97);
    String_72876844 = System_String__Format(v84, v94, 0);
    if ( Instance )
    {
LABEL_51:
      CommonUI__OpenAchievementExchangeConditionsDialog(
        (CommonUI_o *)Instance,
        (System_Int32_array *)v67,
        v69,
        String_72876844,
        action,
        0);
      goto LABEL_52;
    }
LABEL_34:
    sub_1CE6958(String_72876844, v10);
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  TerminalSceneComponent_o *QuestEntityListByType; // x0
  const MethodInfo *v20; // x2
  QuestEntity_o *PlayAutoExecuteQuestEntity; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
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

  if ( (byte_4E06E09 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1CE6700(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass242_0__PlayAutoExecuteQuest_b__0__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass242_0__PlayAutoExecuteQuest_b__1__);
    sub_1CE6700(&TerminalSceneComponent___c__DisplayClass242_0_TypeInfo);
    byte_4E06E09 = 1;
  }
  v3 = sub_1CE694C(TerminalSceneComponent___c__DisplayClass242_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass242_0___ctor((TerminalSceneComponent___c__DisplayClass242_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_71;
  *(_QWORD *)(v3 + 24) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v3 + 16) = 0;
  v12 = v3 + 16;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v3 + 16), 0, v13, v14, v15, v16, v17, v18);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_71;
  QuestEntityListByType = (TerminalSceneComponent_o *)QuestMaster__GetQuestEntityListByType(Master_object, 8, 0);
  if ( QuestEntityListByType )
  {
    PlayAutoExecuteQuestEntity = TerminalSceneComponent__GetPlayAutoExecuteQuestEntity(
                                   QuestEntityListByType,
                                   (QuestEntity_array *)QuestEntityListByType,
                                   v20);
    *(_QWORD *)v12 = PlayAutoExecuteQuestEntity;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)(v3 + 16),
      (int32_t)PlayAutoExecuteQuestEntity,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    if ( *(_QWORD *)v12 )
    {
      Master_object = (QuestMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !*(_QWORD *)v12 )
        goto LABEL_71;
      if ( !Master_object )
        goto LABEL_71;
      Master_object = (QuestMaster_o *)QuestTree__GetQuestInfo(
                                         (QuestTree_o *)Master_object,
                                         *(_DWORD *)(*(_QWORD *)v12 + 16LL),
                                         0);
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
        if ( !byte_4E01220 )
        {
          sub_1CE6700(&TerminalPramsManager_TypeInfo);
          byte_4E01220 = 1;
        }
        v30 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v30 = TerminalPramsManager_TypeInfo;
        }
        v30->static_fields->_QuestId_k__BackingField = v29;
        list_high = HIDWORD(v28->fields.list);
        if ( !byte_4E01224 )
        {
          sub_1CE6700(&TerminalPramsManager_TypeInfo);
          v30 = TerminalPramsManager_TypeInfo;
          byte_4E01224 = 1;
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
        if ( QuestEntity__HasFlag((QuestEntity_o *)Master_object, 2, 0) )
        {
          Master_object = (QuestMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
          if ( Master_object )
          {
            BYTE5(Master_object[2].fields.seriazlier) = 1;
            v32 = (NetworkManager_ResultCallbackFunc_o *)sub_1CE694C(NetworkManager_ResultCallbackFunc_TypeInfo);
            NetworkManager_ResultCallbackFunc___ctor(
              v32,
              (Il2CppObject *)v3,
              Method_TerminalSceneComponent___c__DisplayClass242_0__PlayAutoExecuteQuest_b__1__,
              0);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Request_object = NetworkManager__getRequest_object_(
                               v32,
                               (const MethodInfo_328F954 *)Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4DFE737 )
            {
              sub_1CE6700(&TerminalPramsManager_TypeInfo);
              byte_4DFE737 = 1;
            }
            Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
            }
            items_high = HIDWORD(Master_object[2].fields.list->fields.items);
            if ( !byte_4DFE736 )
            {
              sub_1CE6700(&TerminalPramsManager_TypeInfo);
              Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
              byte_4DFE736 = 1;
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
          sub_1CE6958(Master_object, v5);
        }
        Master_object = *(QuestMaster_o **)v12;
        if ( !*(_QWORD *)v12 )
          goto LABEL_71;
        HasFlag = QuestEntity__HasFlag((QuestEntity_o *)Master_object, 0x400000, 0);
        mTerminalList = this->fields.mTerminalList;
        v37 = HasFlag;
        if ( TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          if ( HasFlag )
          {
LABEL_45:
            if ( !byte_4DFE737 )
            {
              sub_1CE6700(&TerminalPramsManager_TypeInfo);
              byte_4DFE737 = 1;
            }
            v38 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v38 = TerminalPramsManager_TypeInfo;
            }
            QuestId_k__BackingField = v38->static_fields->_QuestId_k__BackingField;
            if ( !byte_4DFE736 )
            {
              sub_1CE6700(&TerminalPramsManager_TypeInfo);
              v38 = TerminalPramsManager_TypeInfo;
              byte_4DFE736 = 1;
            }
            if ( !v38->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v38);
              v38 = TerminalPramsManager_TypeInfo;
            }
            PhaseCnt_k__BackingField = v38->static_fields->_PhaseCnt_k__BackingField;
            v41 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
            System_Action___ctor(
              v41,
              (Il2CppObject *)v3,
              Method_TerminalSceneComponent___c__DisplayClass242_0__PlayAutoExecuteQuest_b__0__,
              0);
            if ( !mTerminalList )
              goto LABEL_71;
            ScrTerminalListTop__StartQuestBeforeAction(
              mTerminalList,
              QuestId_k__BackingField,
              PhaseCnt_k__BackingField + 1,
              v41,
              0);
            return;
          }
        }
        else
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( v37 )
            goto LABEL_45;
        }
        if ( !byte_4DFEC9C )
        {
          sub_1CE6700(&TerminalPramsManager_TypeInfo);
          byte_4DFEC9C = 1;
        }
        Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
        }
        klass_high = HIDWORD(Master_object[2].fields.list->klass);
        if ( !byte_4DFE737 )
        {
          sub_1CE6700(&TerminalPramsManager_TypeInfo);
          Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
          byte_4DFE737 = 1;
        }
        if ( !LODWORD(Master_object[3].monitor) )
        {
          j_il2cpp_runtime_class_init_0(Master_object);
          Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
        }
        v43 = HIDWORD(Master_object[2].fields.list->fields.items);
        if ( !byte_4DFE736 )
        {
          sub_1CE6700(&TerminalPramsManager_TypeInfo);
          Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
          byte_4DFE736 = 1;
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
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  Il2CppObject *Instance; // x20
  WarEntity_o *v14; // x21
  int32_t StartType; // w0
  BattleScriptRootComponent_TalkScriptInfo_o *v16; // x20
  TerminalPramsManager_c *v17; // x0
  int32_t v18; // w22
  TerminalPramsManager_c *v19; // x0
  int32_t targetId; // w22
  int32_t WarId_k__BackingField; // w23
  TerminalPramsManager_c *v22; // x0
  BalanceConfig_c *v23; // x8
  int32_t v24; // w23
  TerminalPramsManager_c *v25; // x0
  BalanceConfig_c *v26; // x8
  int32_t v27; // w23
  TerminalPramsManager_c *v28; // x0
  int32_t v29; // w22
  int64_t v30; // x22
  TerminalPramsManager_c *v31; // x0
  int32_t v32; // w22
  TerminalPramsManager_c *v33; // x0
  TerminalPramsManager_c *v34; // x0

  if ( (byte_4E06E08 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&ScrTerminalListTop_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1CE6700(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1CE6700(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1CE6700(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E06E08 = 1;
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
    goto LABEL_86;
  }
  this->fields.OnResumeFromChapterStart = end_act;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.OnResumeFromChapterStart,
    (int32_t)end_act,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4DFEC9C )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFEC9C = 1;
  }
  IsPlayChapterStart = (WarEntity_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IsPlayChapterStart = (WarEntity_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_86;
  IsPlayChapterStart = QuestTree__mfGetWarEntityByWarID(
                         (QuestTree_o *)Instance,
                         *(_DWORD *)(*(_QWORD *)&IsPlayChapterStart[1].fields.parentWarId + 4LL),
                         0);
  if ( !IsPlayChapterStart )
    goto LABEL_86;
  v14 = IsPlayChapterStart;
  StartType = WarEntity__GetStartType(IsPlayChapterStart, 0);
  if ( StartType == 2 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4DFEC9C )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4DFEC9C = 1;
    }
    v19 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v19 = TerminalPramsManager_TypeInfo;
    }
    targetId = v14->fields.targetId;
    WarId_k__BackingField = v19->static_fields->_WarId_k__BackingField;
    v16 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_1CE694C(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    BattleScriptRootComponent_TalkScriptInfo___ctor_49201040(v16, WarId_k__BackingField, targetId, 0, 1, 0, 0, 0, 0);
  }
  else
  {
    v16 = 0;
    if ( StartType == 1 )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4DFEC9C )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        byte_4DFEC9C = 1;
      }
      v17 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v17 = TerminalPramsManager_TypeInfo;
      }
      v18 = v17->static_fields->_WarId_k__BackingField;
      v16 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_1CE694C(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
      BattleScriptRootComponent_TalkScriptInfo___ctor_49201040(v16, v18, 0, 0, 1, 0, 0, 0, 0);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4DFEC9C )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFEC9C = 1;
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
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    ScrTerminalListTop__SetWhiteEarthChapterStateSaveData(1, 0);
  }
  else
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4DFEC9C )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4DFEC9C = 1;
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
    if ( v27 == v26->static_fields->Fgo20251220WarId )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4DFEC9C )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        byte_4DFEC9C = 1;
      }
      v28 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v28 = TerminalPramsManager_TypeInfo;
      }
      v29 = v28->static_fields->_WarId_k__BackingField;
      if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      ScrTerminalListTop__SetPlanetEarthChapterStateSaveData(v29, 1, 0);
    }
  }
  if ( WarEntity__HasFlag(v14, 0x8000, 0) )
  {
    v30 = v14->fields.targetId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E01220 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E01220 = 1;
    }
    v31 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v31 = TerminalPramsManager_TypeInfo;
    }
    v31->static_fields->_QuestId_k__BackingField = v30;
    v32 = v14->fields.targetId;
    if ( !byte_4E0160F )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      v31 = TerminalPramsManager_TypeInfo;
      byte_4E0160F = 1;
    }
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = TerminalPramsManager_TypeInfo;
    }
    v31->static_fields->_LastPlayedQuestId_k__BackingField = v32;
    TerminalPramsManager__CheckClearSelectedStoryQuestId(v14->fields.targetId, 0);
    if ( !byte_4E01E11 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E01E11 = 1;
    }
    v33 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v33 = TerminalPramsManager_TypeInfo;
    }
    v33->static_fields->_LastSelectQuestIndex_k__BackingField = 0;
    TerminalPramsManager__PlayQuestSave_SaveData(0);
    IsPlayChapterStart = (WarEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( IsPlayChapterStart )
    {
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)IsPlayChapterStart, 0);
      IsPlayChapterStart = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( IsPlayChapterStart )
      {
        AvalonSceneManager__changeScene((AvalonSceneManager_o *)IsPlayChapterStart, 38, 2, (Il2CppObject *)v16, 0);
        return;
      }
    }
LABEL_86:
    sub_1CE6958(IsPlayChapterStart, v6);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E014F9 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E014F9 = 1;
  }
  v34 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v34 = TerminalPramsManager_TypeInfo;
  }
  v34->static_fields->meSceneStatus = 3;
  IsPlayChapterStart = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !IsPlayChapterStart )
    goto LABEL_86;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)IsPlayChapterStart, 38, 2, (Il2CppObject *)v16, 0);
}


void TerminalSceneComponent__PlayEventTutorial(
        TerminalSceneComponent_o *this,
        System_Action_o *callbackAfter,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_Component_o *EventID; // x0
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
  TerminalPramsManager_c *v20; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  int32_t v22; // w21
  System_Action_o *v23; // x22
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct MapControl_MapInfo_o *mMapInfo; // x8

  if ( (byte_4E06E0B & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass247_0__PlayEventTutorial_b__0__);
    sub_1CE6700(&TerminalSceneComponent___c__DisplayClass247_0_TypeInfo);
    byte_4E06E0B = 1;
  }
  v5 = sub_1CE694C(TerminalSceneComponent___c__DisplayClass247_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass247_0___ctor((TerminalSceneComponent___c__DisplayClass247_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_16;
  *(_QWORD *)(v5 + 16) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callbackAfter;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)callbackAfter, v14, v15, v16, v17, v18, v19);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4DFEC9C )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFEC9C = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v20 = TerminalPramsManager_TypeInfo;
  }
  EventID = (UnityEngine_Component_o *)WarMaster__getEventID(v20->static_fields->_WarId_k__BackingField, 0);
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_16;
  v22 = (int)EventID;
  EventID = (UnityEngine_Component_o *)mTerminalList->fields.mActionBgColl;
  if ( !EventID
    || (EventID = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(EventID, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EventID, 1, 0),
        v23 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo),
        System_Action___ctor(
          v23,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent___c__DisplayClass247_0__PlayEventTutorial_b__0__,
          0),
        (mTerminalMap = this->fields.mTerminalMap) == 0)
    || (mMapInfo = mTerminalMap->fields.mMapInfo) == 0 )
  {
LABEL_16:
    sub_1CE6958(EventID, v7);
  }
  EventTutorialMaster__CheckTutorial(v22, 1, v23, mMapInfo->fields.mapId, 0, 0, 0, 0);
}


void TerminalSceneComponent__PlayEventTutorialWithoutAfterAction(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct MapControl_MapInfo_o *mMapInfo; // x8

  if ( (byte_4E06E0C & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E06E0C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  if ( QuestAfterAction__IsPlaying((QuestAfterAction_o *)Instance, 0) )
  {
    ActionExtensions__Call(callback, 0);
    return;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4DFEC9C )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFEC9C = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  Instance = (Il2CppObject *)WarMaster__getEventID(v7->static_fields->_WarId_k__BackingField, 0);
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap || (mMapInfo = mTerminalMap->fields.mMapInfo) == 0 )
LABEL_15:
    sub_1CE6958(Instance, v6);
  EventTutorialMaster__CheckTutorial((int32_t)Instance, 90, callback, mMapInfo->fields.mapId, 0, 0, 0, 0);
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

  if ( (byte_4E06DFB & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    byte_4E06DFB = 1;
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
        sub_1CE6958(v7, *(_QWORD *)&index);
    }
    if ( LODWORD(TerminalGrandBgmNames->max_length) <= index )
      sub_1CE6960(v7);
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
    sub_1CE6958(mQuestInformation, method);
  return QuestInformationComponent__isListBuilding(mQuestInformation, 0);
}


int32_t TerminalSceneComponent__QuestInfoShowing(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct QuestInformationComponent_o *mQuestInformation; // x8

  mQuestInformation = this->fields.mQuestInformation;
  if ( !mQuestInformation )
    sub_1CE6958(this, method);
  return mQuestInformation->fields.settedQuestId;
}


void TerminalSceneComponent__RebootToNetworkError(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  System_String_o *v3; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  TerminalSceneComponent___c_c *v6; // x8
  System_String_o *v7; // x21
  ErrorDialog_ClickDelegate_o *_9__229_0; // x22
  Il2CppObject *v9; // x23
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4E06DFF & 1) == 0 )
  {
    sub_1CE6700(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__RebootToNetworkError_b__229_0__);
    sub_1CE6700(&TerminalSceneComponent___c_TypeInfo);
    sub_1CE6700(&StringLiteral_13508/*"TERMINAL_NETWORK_ERROR_DIALOG_TITLE"*/);
    sub_1CE6700(&StringLiteral_13507/*"TERMINAL_NETWORK_ERROR_DIALOG_MESSAGE"*/);
    byte_4E06DFF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_13508/*"TERMINAL_NETWORK_ERROR_DIALOG_TITLE"*/, 0);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13507/*"TERMINAL_NETWORK_ERROR_DIALOG_MESSAGE"*/, 0);
  v6 = TerminalSceneComponent___c_TypeInfo;
  v7 = v4;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v6 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__229_0 = v6->static_fields->__9__229_0;
  if ( !_9__229_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = TerminalSceneComponent___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__229_0 = (ErrorDialog_ClickDelegate_o *)sub_1CE694C(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(
      _9__229_0,
      v9,
      Method_TerminalSceneComponent___c__RebootToNetworkError_b__229_0__,
      0);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__229_0 = _9__229_0;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__229_0,
      (int32_t)_9__229_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !Instance )
    sub_1CE6958(v4, v5);
  CommonUI__OpenErrorDialog((CommonUI_o *)Instance, v3, v7, _9__229_0, 1, 0);
}


void TerminalSceneComponent__RegenerateEarthView(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_GameObject_o *v6; // x0
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
  UnityEngine_Object_o *mEarthCoreObj; // x22
  struct UnityEngine_GameObject_o **p_mEarthCoreObj; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  UnityEngine_Object_o *v28; // x22
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  System_Action_o *v35; // x21
  const MethodInfo *v36; // x2

  if ( (byte_4E06DD6 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass183_0__RegenerateEarthView_b__0__);
    sub_1CE6700(&TerminalSceneComponent___c__DisplayClass183_0_TypeInfo);
    byte_4E06DD6 = 1;
  }
  v5 = sub_1CE694C(TerminalSceneComponent___c__DisplayClass183_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass183_0___ctor((TerminalSceneComponent___c__DisplayClass183_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
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
      v28 = (UnityEngine_Object_o *)*p_mEarthCoreObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72918540(v28, 0);
      goto LABEL_11;
    }
LABEL_12:
    sub_1CE6958(v6, v7);
  }
LABEL_11:
  this->fields.mEarthCoreObj = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.mEarthCoreObj, 0, v22, v23, v24, v25, v26, v27);
  this->fields.mEarthCore = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.mEarthCore, 0, v29, v30, v31, v32, v33, v34);
  v35 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass183_0__RegenerateEarthView_b__0__,
    0);
  TerminalSceneComponent__SetEarthView(this, v35, v36);
}


void TerminalSceneComponent__ReleaseAssetToResume(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTerminalList; // x20
  TitleInfoControl_o *v4; // x0
  __int64 v5; // x1
  struct ScrTerminalListTop_o *v6; // x8
  UnityEngine_Object_o *mQuestBoardListViewManager; // x20
  UnityEngine_Object_o *mTitleInfo; // x20

  if ( (byte_4E06DE0 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E06DE0 = 1;
  }
  mTerminalList = (UnityEngine_Object_o *)this->fields.mTerminalList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (TitleInfoControl_o *)UnityEngine_Object__op_Inequality(0, mTerminalList, 0);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v6 = this->fields.mTerminalList;
    if ( !v6 )
      goto LABEL_18;
    mQuestBoardListViewManager = (UnityEngine_Object_o *)v6->fields.mQuestBoardListViewManager;
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
    sub_1CE6958(v4, v5);
  }
}


void TerminalSceneComponent__SaveCampaignDirectBonusData(
        TerminalSceneComponent_o *this,
        CommonUI_CampaignDirectBonusData_array *campaignDirectBonus,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4E06E11 & 1) == 0 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E06E11 = 1;
  }
  if ( campaignDirectBonus )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E01E21 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E01E21 = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v9->static_fields;
    static_fields->_CampaignDirectBonus_k__BackingField = campaignDirectBonus;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&static_fields->_CampaignDirectBonus_k__BackingField,
      (int32_t)campaignDirectBonus,
      (int32_t)method,
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
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  long double inited; // q0
  CommonUI_o *Instance; // x0
  CommonUI_o *v12; // x20
  struct TerminalSceneComponent_PlayChapterStartCallback_o **p_OnResumeFromChapterStart; // x19
  struct TerminalSceneComponent_PlayChapterStartCallback_o *OnResumeFromChapterStart; // t1

  if ( (byte_4E06DDA & 1) == 0 )
  {
    sub_1CE6700(&AvalonSceneManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E06DDA = 1;
  }
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0);
  if ( this->fields.isFadeInAfterResumeLoad )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v12 )
      goto LABEL_19;
    CommonUI__maskFadein(v12, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
    this->fields.isFadeInAfterResumeLoad = 0;
  }
  OnResumeFromChapterStart = this->fields.OnResumeFromChapterStart;
  p_OnResumeFromChapterStart = &this->fields.OnResumeFromChapterStart;
  if ( OnResumeFromChapterStart )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E06E37 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E06E37 = 1;
    }
    Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
    }
    if ( !LOBYTE(Instance->fields.errorDialog[3].fields.noSendTextCode) )
    {
      if ( *p_OnResumeFromChapterStart )
      {
        ((void (__fastcall *)(intptr_t, __int64, intptr_t, long double))(*p_OnResumeFromChapterStart)->fields.invoke_impl)(
          (*p_OnResumeFromChapterStart)->fields.method_code,
          1,
          (*p_OnResumeFromChapterStart)->fields.method,
          inited);
        goto LABEL_18;
      }
LABEL_19:
      sub_1CE6958(Instance, v3);
    }
  }
LABEL_18:
  *p_OnResumeFromChapterStart = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)p_OnResumeFromChapterStart, 0, v4, v5, v6, v7, v8, v9);
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
    sub_1CE6958(this, isEnable);
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
  __int64 v7; // x1

  if ( (byte_4E06E1F & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&StringLiteral_5316/*"Directional light"*/);
    byte_4E06E1F = 1;
  }
  GameObjectWithLog = (UnityEngine_Object_o *)GameObjectExtensions__FindGameObjectWithLog(
                                                this->fields.mEarthCoreObj,
                                                (System_String_o *)StringLiteral_5316/*"Directional light"*/,
                                                0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(GameObjectWithLog, 0, 0);
  if ( !v6 )
  {
    if ( !GameObjectWithLog )
      sub_1CE6958(v6, v7);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)GameObjectWithLog, isActive, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void TerminalSceneComponent__SetDispStandServant(TerminalSceneComponent_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Component_o *mTerminalServant; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  long double v7; // q0

  if ( (byte_4E06DE5 & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    byte_4E06DE5 = 1;
  }
  mTerminalServant = (UnityEngine_Component_o *)this->fields.mTerminalServant;
  if ( !mTerminalServant
    || (gameObject = UnityEngine_Component__get_gameObject(mTerminalServant, 0),
        (mTerminalServant = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0)) == 0)
    || (mTerminalServant = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mTerminalServant, 0)) == 0
    || (mTerminalServant = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        (UnityEngine_GameObject_o *)mTerminalServant,
                                                        (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_UIPanel___)) == 0 )
  {
    sub_1CE6958(mTerminalServant, isDisp);
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
  UnityEngine_Object_o *mEarthCore; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v22; // x0
  TerminalSceneComponent_c *v23; // x0
  System_String_o *EARTH_ASSET_NAME; // x21
  System_Int32_c *v25; // x0
  int v26; // w8
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  TerminalSceneComponent_c *v29; // x0
  Il2CppObject *v30; // x0
  struct System_String_o *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  TerminalSceneComponent_c *v38; // x0
  struct System_String_o *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  Il2CppObject *Instance; // x0
  System_String_o *loadEarthAssetName; // x19
  AssetManager_o *v48; // x21
  AssetLoader_LoadEndDataHandler_o *v49; // x22
  int v50; // [xsp+4h] [xbp-4Ch] BYREF
  TerminalOverwriteEntity_o *overwriteEntity; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *overwriteId; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4E06DD5 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_TerminalOverwriteMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&int_TypeInfo);
    sub_1CE6700(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&ServantCommentManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass182_0__SetEarthView_b__0__);
    sub_1CE6700(&TerminalSceneComponent___c__DisplayClass182_0_TypeInfo);
    byte_4E06DD5 = 1;
  }
  overwriteId = 0;
  overwriteEntity = 0;
  v5 = sub_1CE694C(TerminalSceneComponent___c__DisplayClass182_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass182_0___ctor((TerminalSceneComponent___c__DisplayClass182_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_37;
  *(_QWORD *)(v5 + 16) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
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
    v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0);
    GameObjectExtensions__SetLocalPositionZ(v22, -792.87, 0);
    v23 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v23 = TerminalSceneComponent_TypeInfo;
    }
    EARTH_ASSET_NAME = v23->static_fields->EARTH_ASSET_NAME;
    v25 = int_TypeInfo;
    v26 = 2;
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
    v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0);
    GameObjectExtensions__SetLocalPositionZ(v27, -50000.0, 0);
    mEarthEffCamera = this->fields.mEarthEffCamera;
    if ( !mEarthEffCamera )
      goto LABEL_37;
    v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0);
    GameObjectExtensions__SetLocalPositionZ(v28, -50000.0, 0);
    v29 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v29 = TerminalSceneComponent_TypeInfo;
    }
    EARTH_ASSET_NAME = v29->static_fields->EARTH_ASSET_NAME;
    v25 = int_TypeInfo;
    v26 = 1;
  }
  v50 = v26;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(v25, &v50);
  v31 = System_String__Format(EARTH_ASSET_NAME, v30, 0);
  this->fields.loadEarthAssetName = v31;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.loadEarthAssetName,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  mEarthEffCamera = (UnityEngine_Camera_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_TerminalOverwriteMaster___);
  if ( !mEarthEffCamera )
    goto LABEL_37;
  if ( TerminalOverwriteMaster__TryGetOverwriteId(
         (TerminalOverwriteMaster_o *)mEarthEffCamera,
         9,
         &overwriteId,
         &overwriteEntity,
         0) )
  {
    v38 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v38 = TerminalSceneComponent_TypeInfo;
    }
    v39 = System_String__Format(v38->static_fields->EARTH_ASSET_NAME, (Il2CppObject *)overwriteId, 0);
    this->fields.loadEarthAssetName = v39;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.loadEarthAssetName,
      (int32_t)v39,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  loadEarthAssetName = this->fields.loadEarthAssetName;
  v48 = (AssetManager_o *)Instance;
  v49 = (AssetLoader_LoadEndDataHandler_o *)sub_1CE694C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v49,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass182_0__SetEarthView_b__0__,
    0);
  if ( !v48 )
LABEL_37:
    sub_1CE6958(mEarthEffCamera, v7);
  AssetManager__LoadAssetStorage(v48, loadEarthAssetName, v49, 1, 0, 0);
}


void TerminalSceneComponent__SetQuestBoardInfoOff(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x0
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList || (mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager) == 0 )
    sub_1CE6958(mTerminalList, method);
  mQuestBoardListViewManager->fields._IsShowingInfo_k__BackingField = 0;
  ScrTerminalListTop__ShowingInfoAllOff(mTerminalList, 0);
}


void TerminalSceneComponent__SetQuestInfoResetReady(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  QuestInformationComponent_o *mQuestInformation; // x0

  mQuestInformation = this->fields.mQuestInformation;
  if ( !mQuestInformation )
    sub_1CE6958(0, method);
  QuestInformationComponent__SetResetReady(mQuestInformation, 0);
}


// local variable allocation has failed, the output may be wrong!
void TerminalSceneComponent__SetState(TerminalSceneComponent_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4E06E0E & 1) == 0 )
  {
    sub_1CE6700(&Method_CStateManager_TerminalSceneComponent__setState__);
    byte_4E06E0E = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1CE6958(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_3473644 *)Method_CStateManager_TerminalSceneComponent__setState__);
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
  StandFigureSlideComponent_o *mTerminalServant; // x22
  System_Action_o *v25; // x23
  struct StandFigureSlideComponent_o *v26; // x19
  System_Action_o *v27; // x20
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7

  if ( (byte_4E06DE4 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass200_0__SetupStandServant_b__0__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass200_0__SetupStandServant_b__1__);
    sub_1CE6700(&TerminalSceneComponent___c__DisplayClass200_0_TypeInfo);
    byte_4E06DE4 = 1;
  }
  v9 = sub_1CE694C(TerminalSceneComponent___c__DisplayClass200_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass200_0___ctor((TerminalSceneComponent___c__DisplayClass200_0_o *)v9, 0);
  if ( !v9 )
    goto LABEL_7;
  *(_BYTE *)(v9 + 16) = isSlideIn;
  *(_QWORD *)(v9 + 24) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = endAction;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)endAction, v18, v19, v20, v21, v22, v23);
  mTerminalServant = this->fields.mTerminalServant;
  v25 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v9,
    Method_TerminalSceneComponent___c__DisplayClass200_0__SetupStandServant_b__0__,
    0);
  if ( !mTerminalServant
    || (StandFigureSlideComponent__Setup(mTerminalServant, usd, 0, v25, 0),
        v26 = this->fields.mTerminalServant,
        v27 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo),
        System_Action___ctor(
          v27,
          (Il2CppObject *)v9,
          Method_TerminalSceneComponent___c__DisplayClass200_0__SetupStandServant_b__1__,
          0),
        !v26) )
  {
LABEL_7:
    sub_1CE6958(v10, v11);
  }
  v26->fields.mBtnAct = v27;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v26->fields.mBtnAct, (int32_t)v27, v28, v29, v30, v31, v32, v33);
}


void TerminalSceneComponent__StartEventDailyPoint(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x2

  if ( TerminalSceneComponent__CheckEventDailyPoint(this, eventId, (const MethodInfo *)callback) )
  {
    this->fields.afterEventDailyPoint = callback;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.afterEventDailyPoint,
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
  __int64 v10; // x19
  System_Action_object__o *v11; // x21
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
  System_Action_object__o *v24; // x20
  Il2CppObject *v25; // x21
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  System_Action_object__o *v39; // x20
  Il2CppObject *v40; // x21
  struct TerminalSceneComponent___c_StaticFields *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  System_Action_object__o *v54; // x20
  Il2CppObject *v55; // x21
  struct TerminalSceneComponent___c_StaticFields *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  ActionChain_o *v63; // x20

  if ( (byte_4E06DEE & 1) == 0 )
  {
    sub_1CE6700(&ActionChain_TypeInfo);
    sub_1CE6700(&System_Action_Action____TypeInfo);
    sub_1CE6700(&System_Action_Action__TypeInfo);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent__StartWindowMessage_b__211_0__);
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent___c__StartWindowMessage_b__211_1__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__StartWindowMessage_b__211_2__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__StartWindowMessage_b__211_3__);
    sub_1CE6700(&TerminalSceneComponent___c_TypeInfo);
    byte_4E06DEE = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E0053D )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E0053D = 1;
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
    if ( !byte_4E06E3B )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E06E3B = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    if ( !System_String__IsNullOrEmpty(v6->static_fields->_QuestWindowMessage_k__BackingField, 0) )
    {
      v10 = sub_1CE67A8(System_Action_Action____TypeInfo, 4);
      v11 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
      System_Action_object____ctor(
        v11,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent__StartWindowMessage_b__211_0__,
        0);
      if ( v10 )
      {
        if ( !*(_DWORD *)(v10 + 24) )
          goto LABEL_55;
        *(_QWORD *)(v10 + 32) = v11;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v10 + 32), (int32_t)v11, v12, v13, v14, v15, v16, v17);
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
          v24 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
          System_Action_object____ctor(v24, v25, Method_TerminalSceneComponent___c__StartWindowMessage_b__211_1__, 0);
          static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
          static_fields->__9__211_1 = (struct System_Action_Action__o *)v24;
          sub_1CE66A4(
            (GrandQuestFolderBoardItem_o *)&static_fields->__9__211_1,
            (int32_t)v24,
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
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v10 + 40), (int32_t)v24, v18, v19, v20, v21, v22, v23);
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
          v39 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
          System_Action_object____ctor(v39, v40, Method_TerminalSceneComponent___c__StartWindowMessage_b__211_2__, 0);
          v41 = TerminalSceneComponent___c_TypeInfo->static_fields;
          v41->__9__211_2 = (struct System_Action_Action__o *)v39;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v41->__9__211_2, (int32_t)v39, v42, v43, v44, v45, v46, v47);
        }
        if ( *(_DWORD *)(v10 + 24) <= 2u )
          goto LABEL_55;
        *(_QWORD *)(v10 + 48) = v39;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v10 + 48), (int32_t)v39, v33, v34, v35, v36, v37, v38);
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
          v54 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
          System_Action_object____ctor(v54, v55, Method_TerminalSceneComponent___c__StartWindowMessage_b__211_3__, 0);
          v56 = TerminalSceneComponent___c_TypeInfo->static_fields;
          v56->__9__211_3 = (struct System_Action_Action__o *)v54;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v56->__9__211_3, (int32_t)v54, v57, v58, v59, v60, v61, v62);
        }
        if ( *(_DWORD *)(v10 + 24) <= 3u )
LABEL_55:
          sub_1CE6960(v7);
        *(_QWORD *)(v10 + 56) = v54;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v10 + 56), (int32_t)v54, v48, v49, v50, v51, v52, v53);
        v63 = (ActionChain_o *)sub_1CE694C(ActionChain_TypeInfo);
        ActionChain___ctor_50148084(v63, (System_Action_Action__array *)v10, 0);
        if ( v63 )
        {
          ChainableActionBase__Execute((ChainableActionBase_o *)v63, 0);
          return;
        }
      }
LABEL_54:
      sub_1CE6958(v7, callbackFunc);
    }
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4DFE666 )
  {
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4DFE666 = 1;
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
  __int64 v8; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4E06DF1 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1CE6700(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E06DF1 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_34E92A8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
    sub_1CE6958(Instance, v8);
  TitleInfoControl__CheckSuperBossHpAnim((TitleInfoControl_o *)Instance, callback, 0);
}


bool TerminalSceneComponent__TryGetClearedReturnFolderWarId(
        TerminalSceneComponent_o *this,
        int32_t warId,
        int32_t *returnWarId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  int32_t ClearedReturnFolderWarId; // w0

  if ( (byte_4E06DD7 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_WarAddMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    byte_4E06DD7 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_object )
    sub_1CE6958(0, v7);
  ClearedReturnFolderWarId = WarAddMaster__GetClearedReturnFolderWarId((WarAddMaster_o *)Master_object, warId, 0);
  *returnWarId = ClearedReturnFolderWarId;
  return ClearedReturnFolderWarId != 0;
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

  if ( (byte_4E06DF3 & 1) == 0 )
  {
    sub_1CE6700(&Method_CStateManager_TerminalSceneComponent__update__);
    sub_1CE6700(&CTouch_TypeInfo);
    byte_4E06DF3 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0);
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_3473620 *)Method_CStateManager_TerminalSceneComponent__update__);
  mTerminalMap = this->fields.mTerminalMap;
  IsMapTouchEnabled = TerminalSceneComponent__IsMapTouchEnabled(this, v3);
  if ( !mTerminalMap )
    sub_1CE6958(IsMapTouchEnabled, v7);
  ScrTerminalMap__ProcessMapCamera(mTerminalMap, IsMapTouchEnabled, 0);
}


void TerminalSceneComponent__UpdateCompleteMissionIconUI(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ScrPlayerStatus_o *mPlayerStatus; // x0

  mPlayerStatus = this->fields.mPlayerStatus;
  if ( !mPlayerStatus )
    sub_1CE6958(0, method);
  ScrPlayerStatus__UpdateCompleteMissionIconUI(mPlayerStatus, 0);
}


void TerminalSceneComponent__UpdateQuestBoardList(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x8

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList || (this = (TerminalSceneComponent_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0 )
    sub_1CE6958(this, method);
  QuestBoardListViewManager__SetupDisp((QuestBoardListViewManager_o *)this, 1, 0);
}


void TerminalSceneComponent__UpdateTitleEventInfo(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *mTitleInfo; // x0

  mTitleInfo = this->fields.mTitleInfo;
  if ( !mTitleInfo )
    sub_1CE6958(0, method);
  TitleInfoControl__UpdateEventItemInfo(mTitleInfo, 0);
}


System_Collections_IEnumerator_o *TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__205_o *v2; // x19

  if ( (byte_4E06DE8 & 1) == 0 )
  {
    sub_1CE6700(&TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__205_TypeInfo);
    byte_4E06DE8 = 1;
  }
  v2 = (TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__205_o *)sub_1CE694C(TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__205_TypeInfo);
  TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__205___ctor(v2, 0, 0);
  return (System_Collections_IEnumerator_o *)v2;
}


bool TerminalSceneComponent___CoWaitBlankEarthActionEnd_b__269_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *mTerminalList; // x0

  if ( (byte_4E06E29 & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E06E29 = 1;
  }
  mTerminalList = (CommonUI_o *)this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_9;
  if ( !ScrTerminalListTop__IsBlankEarthAction((ScrTerminalListTop_o *)mTerminalList, 0) )
  {
    mTerminalList = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( mTerminalList )
      return !CommonUI__IsActive_NotifiDialog(mTerminalList, 0);
LABEL_9:
    sub_1CE6958(mTerminalList, method);
  }
  return 0;
}


bool TerminalSceneComponent___CoWaitTerminalTopEffectEnd_b__268_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *mTerminalList; // x0

  if ( (byte_4E06E28 & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E06E28 = 1;
  }
  mTerminalList = (CommonUI_o *)this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_9;
  if ( !ScrTerminalListTop__CheckTerminalTopEffect((ScrTerminalListTop_o *)mTerminalList, 0, 0) )
  {
    mTerminalList = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( mTerminalList )
      return !CommonUI__IsActive_NotifiDialog(mTerminalList, 0);
LABEL_9:
    sub_1CE6958(mTerminalList, method);
  }
  return 0;
}


bool TerminalSceneComponent___OpenExchangeDialogue_b__273_3(
        TerminalSceneComponent_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  return !TerminalSceneComponent__IsNotDisplayCostume(this, x, method);
}


void TerminalSceneComponent___StartWindowMessage_b__211_0(
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
    sub_1CE6958(this, action);
  }
  QuestBoardListViewManager__SetMode((QuestBoardListViewManager_o *)this, 4, action, 0, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
bool TerminalSceneComponent___beginInitialize_b__181_0(
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
  if ( (byte_4E06E24 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMaster_EventRaidMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent__beginInitialize_b__181_3__);
    this = (TerminalSceneComponent_o *)sub_1CE6700(&Method_TerminalSceneComponent__beginInitialize_b__181_4__);
    byte_4E06E24 = 1;
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
    this = (TerminalSceneComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventRaidMaster___);
    v8 = v4->fields.mTerminalMap;
    if ( !v8 )
      goto LABEL_30;
    mWarEnt = v8->fields.mWarEnt;
    if ( !mWarEnt || !this )
      goto LABEL_30;
    if ( EventRaidMaster__GetRaidGorupMax((EventRaidMaster_o *)this, mWarEnt->fields.eventId, 0) >= 1 )
    {
      v10 = v4->fields.mTerminalMap;
      v11 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)v4, Method_TerminalSceneComponent__beginInitialize_b__181_3__, 0);
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
        v13 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
        System_Action___ctor(v13, (Il2CppObject *)v4, Method_TerminalSceneComponent__beginInitialize_b__181_4__, 0);
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
    sub_1CE6958(this, gotNewServant);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4DFF129 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFF129 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsAutoResume_k__BackingField = 1;
  this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 34, 1, 0, 0);
  return !gotNewServant;
}


void TerminalSceneComponent___beginInitialize_b__181_1(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ScrPlayerStatus_o *mPlayerStatus; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8

  mPlayerStatus = this->fields.mPlayerStatus;
  if ( !mPlayerStatus
    || (ScrPlayerStatus__mfInitUserData(mPlayerStatus, 0), (mTerminalList = this->fields.mTerminalList) == 0)
    || (mPlayerStatus = (ScrPlayerStatus_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0 )
  {
    sub_1CE6958(mPlayerStatus, method);
  }
  QuestBoardListViewManager__SetupDisp((QuestBoardListViewManager_o *)mPlayerStatus, 1, 0);
}


void TerminalSceneComponent___beginInitialize_b__181_2(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1
  ScrTerminalMap_o *mTerminalMap; // x19

  if ( (byte_4E06E26 & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4E06E26 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0),
        (Instance = (AvalonSceneManager_o *)this->fields.mEarthCore) == 0)
    || (mTerminalMap = this->fields.mTerminalMap,
        Instance = (AvalonSceneManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0),
        !mTerminalMap) )
  {
    sub_1CE6958(Instance, v4);
  }
  ScrTerminalMap__SetCore(mTerminalMap, (UnityEngine_GameObject_o *)Instance, 0);
}


void TerminalSceneComponent___beginInitialize_b__181_3(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v4; // x0
  int32_t WarId_k__BackingField; // w21
  System_Action_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  System_Collections_IEnumerator_o *v9; // x1

  if ( (byte_4E06E25 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent__beginInitialize_b__181_5__);
    byte_4E06E25 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4DFEC9C )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFEC9C = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v4->static_fields->_WarId_k__BackingField;
  v6 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__181_5__, 0);
  if ( !Instance )
    sub_1CE6958(v7, v8);
  v9 = QuestTree__mfBaseTreeUpdateWithOpenCheck((QuestTree_o *)Instance, WarId_k__BackingField, v6, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_72903732((UnityEngine_MonoBehaviour_o *)this, v9, 0);
}


void TerminalSceneComponent___beginInitialize_b__181_4(TerminalSceneComponent_o *this, const MethodInfo *method)
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
    sub_1CE6958(this, method);
  }
}


void TerminalSceneComponent___beginInitialize_b__181_5(TerminalSceneComponent_o *this, const MethodInfo *method)
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
    sub_1CE6958(mTerminalList, method);
  }
  ScrTerminalMap__UpdateEventRaidUI((ScrTerminalMap_o *)mTerminalList, 0);
}


void TerminalSceneComponent___callbackEventDailyPoint_b__234_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.afterEventDailyPoint, 0);
}


void TerminalSceneComponent___mfsmfInitTable_b__231_0(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_o *v2; // x19
  __int64 v3; // x1
  PlayMakerFSM_o *myFSM; // x0

  v2 = this;
  if ( (byte_4E06E27 & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_1CE6700(&StringLiteral_5542/*"EVENTLISTUP_END"*/);
    byte_4E06E27 = 1;
  }
  TerminalSceneComponent__deleteQuestMovie(this, method);
  myFSM = v2->fields.myFSM;
  if ( !myFSM )
    sub_1CE6958(0, v3);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_5542/*"EVENTLISTUP_END"*/, 0);
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
  __int64 v7; // x1
  CommonUI_o *v8; // x21
  BalanceConfig_c *v9; // x0
  int32_t OrdealCallWarId; // w21
  TerminalPramsManager_c *v11; // x0
  Il2CppObject *Master_object; // x21
  WarEntity_o *v13; // x21
  TerminalPramsManager_c *v14; // x0
  const MethodInfo *v15; // x3
  TerminalPramsManager_c *v16; // x0
  TerminalPramsManager_c *v17; // x0
  int32_t WarId_k__BackingField; // w22
  int32_t v19; // w21
  TerminalPramsManager_c *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  TerminalPramsManager_c *v27; // x0
  GrandQuestFolderBoardItem_o *p_ContinueDecideLastChallengeQuestInfo_k__BackingField; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct UnityEngine_Camera_o *mUICamera; // x20
  CTouch_c *v36; // x0
  struct CTouch_StaticFields *static_fields; // x0
  struct CStateManager_TerminalSceneComponent__o **p_mFSM; // x20
  CStateManager_T__o *v39; // x21
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v47; // x22
  CStateManager_T__o *v48; // x21
  Il2CppObject *v49; // x22
  CStateManager_T__o *v50; // x21
  Il2CppObject *v51; // x22
  CStateManager_T__o *v52; // x21
  Il2CppObject *v53; // x22
  CStateManager_T__o *v54; // x21
  Il2CppObject *v55; // x22
  CStateManager_T__o *v56; // x21
  TerminalSceneComponent_StateTutorial3_MenuArrow_o *v57; // x22
  CStateManager_T__o *v58; // x21
  TerminalSceneComponent_StateTutorial3_GachaArrow_o *v59; // x22
  CStateManager_T__o *v60; // x21
  TerminalSceneComponent_StateTutorial4_SpotArrow_o *v61; // x22
  CStateManager_T__o *v62; // x21
  TerminalSceneComponent_StateTutorial4_QuestArrow_o *v63; // x22
  CStateManager_T__o *v64; // x21
  TerminalSceneComponent_StateTutorial5_MenuArrow_o *v65; // x22
  CStateManager_T__o *v66; // x20
  TerminalSceneComponent_StateTutorial5_CombineArrow_o *v67; // x21
  const MethodInfo *v68; // x2
  ScrPlayerStatus_o *mPlayerStatus; // x20
  System_Func_bool__bool__o *v70; // x21
  struct ScrPlayerStatus_o *v71; // x21
  System_Action_o *v72; // x20
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  struct ScrTerminalMap_o *mTerminalMap; // x8
  System_Action_o *v80; // x20
  const MethodInfo *v81; // x2
  WarEntity_o *warEntity; // [xsp+0h] [xbp-40h] BYREF
  int32_t returnWarId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4E06DD4 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&AndroidUtil_TypeInfo);
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&Method_CStateManager_TerminalSceneComponent___ctor__);
    sub_1CE6700(&Method_CStateManager_TerminalSceneComponent__add__);
    sub_1CE6700(&CStateManager_TerminalSceneComponent__TypeInfo);
    sub_1CE6700(&CTouch_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMaster_WarMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1CE6700(&System_Func_bool__bool__TypeInfo);
    sub_1CE6700(&ServantProfileEventJoinManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1CE6700(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1CE6700(&TerminalSceneComponent_StateNormal_TypeInfo);
    sub_1CE6700(&TerminalSceneComponent_StateTutorial1_QuestArrow_TypeInfo);
    sub_1CE6700(&TerminalSceneComponent_StateTutorial1_SpotArrow_TypeInfo);
    sub_1CE6700(&TerminalSceneComponent_StateTutorial2_QuestArrow_TypeInfo);
    sub_1CE6700(&TerminalSceneComponent_StateTutorial2_SpotArrow_TypeInfo);
    sub_1CE6700(&TerminalSceneComponent_StateTutorial3_GachaArrow_TypeInfo);
    sub_1CE6700(&TerminalSceneComponent_StateTutorial3_MenuArrow_TypeInfo);
    sub_1CE6700(&TerminalSceneComponent_StateTutorial4_QuestArrow_TypeInfo);
    sub_1CE6700(&TerminalSceneComponent_StateTutorial4_SpotArrow_TypeInfo);
    sub_1CE6700(&TerminalSceneComponent_StateTutorial5_CombineArrow_TypeInfo);
    sub_1CE6700(&TerminalSceneComponent_StateTutorial5_MenuArrow_TypeInfo);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent__beginInitialize_b__181_0__);
    sub_1CE6700(&Method_TerminalSceneComponent__beginInitialize_b__181_1__);
    sub_1CE6700(&Method_TerminalSceneComponent__beginInitialize_b__181_2__);
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E06DD4 = 1;
  }
  returnWarId = 0;
  warEntity = 0;
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  AndroidUtil__DeleteOldSaveData(0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__Load_SaveData(0);
  if ( !byte_4E01349 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E01349 = 1;
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
    if ( !byte_4E01222 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E01222 = 1;
    }
    v4 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v4 = TerminalPramsManager_TypeInfo;
    }
    v4->static_fields->_DispState_k__BackingField = 0;
    if ( !byte_4E01614 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      v4 = TerminalPramsManager_TypeInfo;
      byte_4E01614 = 1;
    }
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = TerminalPramsManager_TypeInfo;
    }
    v4->static_fields->_SelectedStoryQuestId_k__BackingField = 0;
    TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(0);
    if ( !byte_4E00980 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E00980 = 1;
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
  Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (CommonUI_o *)Instance;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !v8 )
    goto LABEL_142;
  CommonUI__CheckChangeOtherConnectMarkFromEventId(
    v8,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId,
    1,
    0);
  Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_142;
  if ( QuestAfterAction__CheckChangeBlankEarth(Instance, 0) )
  {
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
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E01349 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E01349 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  if ( v11->static_fields->_IsAutoResume_k__BackingField )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4DFEC9C )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4DFEC9C = 1;
    }
    Instance = (QuestAfterAction_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (QuestAfterAction_o *)TerminalPramsManager_TypeInfo;
    }
    if ( !Master_object )
      goto LABEL_142;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           (Il2CppObject **)&warEntity,
           HIDWORD(Instance->fields.endAct->klass),
           (const MethodInfo_34E92A8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    {
      Instance = (QuestAfterAction_o *)this->fields.mTerminalList;
      if ( !Instance )
        goto LABEL_142;
      if ( ScrTerminalListTop__IsPlanetMapDisplayed((ScrTerminalListTop_o *)Instance, warEntity, 0)
        && SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
      {
        v13 = warEntity;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        TerminalPramsManager__UpdateDispState(v13, 0);
      }
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E06E33 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E06E33 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_OverwriteClearedWarId_k__BackingField = 0;
  Instance = (QuestAfterAction_o *)this->fields.mTerminalList;
  if ( !Instance )
    goto LABEL_142;
  if ( ScrTerminalListTop__IsPlayCaldeaGateBoardEffect((ScrTerminalListTop_o *)Instance, 0) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4DFEC9C )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4DFEC9C = 1;
    }
    v16 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v16 = TerminalPramsManager_TypeInfo;
    }
    if ( TerminalSceneComponent__TryGetClearedReturnFolderWarId(
           (TerminalSceneComponent_o *)v16,
           v16->static_fields->_WarId_k__BackingField,
           &returnWarId,
           v15) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4DFF129 )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        byte_4DFF129 = 1;
      }
      v17 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v17 = TerminalPramsManager_TypeInfo;
      }
      v17->static_fields->_IsAutoResume_k__BackingField = 1;
      if ( !byte_4DFEC9C )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        v17 = TerminalPramsManager_TypeInfo;
        byte_4DFEC9C = 1;
      }
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = TerminalPramsManager_TypeInfo;
      }
      WarId_k__BackingField = v17->static_fields->_WarId_k__BackingField;
      if ( !byte_4E06E33 )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        v17 = TerminalPramsManager_TypeInfo;
        byte_4E06E33 = 1;
      }
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = TerminalPramsManager_TypeInfo;
      }
      v17->static_fields->_OverwriteClearedWarId_k__BackingField = WarId_k__BackingField;
      v19 = returnWarId;
      if ( !byte_4E01226 )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        v17 = TerminalPramsManager_TypeInfo;
        byte_4E01226 = 1;
      }
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = TerminalPramsManager_TypeInfo;
      }
      v17->static_fields->_WarId_k__BackingField = v19;
      if ( !byte_4E01222 )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        v17 = TerminalPramsManager_TypeInfo;
        byte_4E01222 = 1;
      }
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = TerminalPramsManager_TypeInfo;
      }
      v17->static_fields->_DispState_k__BackingField = 3;
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E014F9 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E014F9 = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v20 = TerminalPramsManager_TypeInfo;
  }
  v20->static_fields->meSceneStatus = 1;
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  this->fields._IsReq_InitEarthRotateY_k__BackingField = 1;
  this->fields._onClosePresentBoxFlag_k__BackingField = 0;
  this->fields._FirstFadeTime_k__BackingField = 0.0;
  if ( !byte_4E01E25 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E01E25 = 1;
  }
  v27 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v27 = TerminalPramsManager_TypeInfo;
  }
  p_ContinueDecideLastChallengeQuestInfo_k__BackingField = (GrandQuestFolderBoardItem_o *)&v27->static_fields->_ContinueDecideLastChallengeQuestInfo_k__BackingField;
  p_ContinueDecideLastChallengeQuestInfo_k__BackingField->klass = 0;
  sub_1CE66A4(p_ContinueDecideLastChallengeQuestInfo_k__BackingField, 0, v21, v22, v23, v24, v25, v26);
  SkillLvMaster__ResetBaseTime(0);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__init(0);
  mUICamera = this->fields.mUICamera;
  if ( !byte_4DFEC9D )
  {
    sub_1CE6700(&CTouch_TypeInfo);
    byte_4DFEC9D = 1;
  }
  v36 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v36 = CTouch_TypeInfo;
  }
  static_fields = v36->static_fields;
  static_fields->mScreenCam = mUICamera;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&static_fields->mScreenCam,
    (int32_t)mUICamera,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v39 = (CStateManager_T__o *)sub_1CE694C(CStateManager_TerminalSceneComponent__TypeInfo);
    CStateManager_object____ctor(
      v39,
      (Il2CppObject *)this,
      11,
      (const MethodInfo_3473510 *)Method_CStateManager_TerminalSceneComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_TerminalSceneComponent__o *)v39;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.mFSM, (int32_t)v39, v40, v41, v42, v43, v44, v45);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v47 = (Il2CppObject *)sub_1CE694C(TerminalSceneComponent_StateNormal_TypeInfo);
    System_Object___ctor(v47, 0);
    if ( mFSM )
    {
      CStateManager_object___add(
        mFSM,
        0,
        (IState_T__o *)v47,
        (const MethodInfo_34735B8 *)Method_CStateManager_TerminalSceneComponent__add__);
      v48 = (CStateManager_T__o *)*p_mFSM;
      v49 = (Il2CppObject *)sub_1CE694C(TerminalSceneComponent_StateTutorial1_SpotArrow_TypeInfo);
      System_Object___ctor(v49, 0);
      if ( v48 )
      {
        CStateManager_object___add(
          v48,
          1,
          (IState_T__o *)v49,
          (const MethodInfo_34735B8 *)Method_CStateManager_TerminalSceneComponent__add__);
        v50 = (CStateManager_T__o *)*p_mFSM;
        v51 = (Il2CppObject *)sub_1CE694C(TerminalSceneComponent_StateTutorial1_QuestArrow_TypeInfo);
        System_Object___ctor(v51, 0);
        if ( v50 )
        {
          CStateManager_object___add(
            v50,
            2,
            (IState_T__o *)v51,
            (const MethodInfo_34735B8 *)Method_CStateManager_TerminalSceneComponent__add__);
          v52 = (CStateManager_T__o *)*p_mFSM;
          v53 = (Il2CppObject *)sub_1CE694C(TerminalSceneComponent_StateTutorial2_SpotArrow_TypeInfo);
          System_Object___ctor(v53, 0);
          if ( v52 )
          {
            CStateManager_object___add(
              v52,
              3,
              (IState_T__o *)v53,
              (const MethodInfo_34735B8 *)Method_CStateManager_TerminalSceneComponent__add__);
            v54 = (CStateManager_T__o *)*p_mFSM;
            v55 = (Il2CppObject *)sub_1CE694C(TerminalSceneComponent_StateTutorial2_QuestArrow_TypeInfo);
            System_Object___ctor(v55, 0);
            if ( v54 )
            {
              CStateManager_object___add(
                v54,
                4,
                (IState_T__o *)v55,
                (const MethodInfo_34735B8 *)Method_CStateManager_TerminalSceneComponent__add__);
              v56 = (CStateManager_T__o *)*p_mFSM;
              v57 = (TerminalSceneComponent_StateTutorial3_MenuArrow_o *)sub_1CE694C(TerminalSceneComponent_StateTutorial3_MenuArrow_TypeInfo);
              TerminalSceneComponent_StateTutorial3_MenuArrow___ctor(v57, 0);
              if ( v56 )
              {
                CStateManager_object___add(
                  v56,
                  5,
                  (IState_T__o *)v57,
                  (const MethodInfo_34735B8 *)Method_CStateManager_TerminalSceneComponent__add__);
                v58 = (CStateManager_T__o *)*p_mFSM;
                v59 = (TerminalSceneComponent_StateTutorial3_GachaArrow_o *)sub_1CE694C(TerminalSceneComponent_StateTutorial3_GachaArrow_TypeInfo);
                TerminalSceneComponent_StateTutorial3_GachaArrow___ctor(v59, 0);
                if ( v58 )
                {
                  CStateManager_object___add(
                    v58,
                    6,
                    (IState_T__o *)v59,
                    (const MethodInfo_34735B8 *)Method_CStateManager_TerminalSceneComponent__add__);
                  v60 = (CStateManager_T__o *)*p_mFSM;
                  v61 = (TerminalSceneComponent_StateTutorial4_SpotArrow_o *)sub_1CE694C(TerminalSceneComponent_StateTutorial4_SpotArrow_TypeInfo);
                  TerminalSceneComponent_StateTutorial4_SpotArrow___ctor(v61, 0);
                  if ( v60 )
                  {
                    CStateManager_object___add(
                      v60,
                      7,
                      (IState_T__o *)v61,
                      (const MethodInfo_34735B8 *)Method_CStateManager_TerminalSceneComponent__add__);
                    v62 = (CStateManager_T__o *)*p_mFSM;
                    v63 = (TerminalSceneComponent_StateTutorial4_QuestArrow_o *)sub_1CE694C(TerminalSceneComponent_StateTutorial4_QuestArrow_TypeInfo);
                    TerminalSceneComponent_StateTutorial4_QuestArrow___ctor(v63, 0);
                    if ( v62 )
                    {
                      CStateManager_object___add(
                        v62,
                        8,
                        (IState_T__o *)v63,
                        (const MethodInfo_34735B8 *)Method_CStateManager_TerminalSceneComponent__add__);
                      v64 = (CStateManager_T__o *)*p_mFSM;
                      v65 = (TerminalSceneComponent_StateTutorial5_MenuArrow_o *)sub_1CE694C(TerminalSceneComponent_StateTutorial5_MenuArrow_TypeInfo);
                      TerminalSceneComponent_StateTutorial5_MenuArrow___ctor(v65, 0);
                      if ( v64 )
                      {
                        CStateManager_object___add(
                          v64,
                          9,
                          (IState_T__o *)v65,
                          (const MethodInfo_34735B8 *)Method_CStateManager_TerminalSceneComponent__add__);
                        v66 = (CStateManager_T__o *)*p_mFSM;
                        v67 = (TerminalSceneComponent_StateTutorial5_CombineArrow_o *)sub_1CE694C(TerminalSceneComponent_StateTutorial5_CombineArrow_TypeInfo);
                        TerminalSceneComponent_StateTutorial5_CombineArrow___ctor(v67, 0);
                        if ( v66 )
                        {
                          CStateManager_object___add(
                            v66,
                            10,
                            (IState_T__o *)v67,
                            (const MethodInfo_34735B8 *)Method_CStateManager_TerminalSceneComponent__add__);
                          TerminalSceneComponent__SetState(this, 0, v68);
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
    sub_1CE6958(Instance, v7);
  }
LABEL_127:
  Instance = (QuestAfterAction_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_142;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Instance, 0, 1, (System_String_o *)StringLiteral_1/*""*/, 1, 0);
  Instance = (QuestAfterAction_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_142;
  TitleInfoControl__changeTitleInfo_41045104((TitleInfoControl_o *)Instance, 1, 1, 0, 0);
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
  v70 = (System_Func_bool__bool__o *)sub_1CE694C(System_Func_bool__bool__TypeInfo);
  System_Func_bool__bool____ctor(
    v70,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent__beginInitialize_b__181_0__,
    0);
  if ( !mPlayerStatus )
    goto LABEL_142;
  ScrPlayerStatus__SetCloseGiftAct(mPlayerStatus, v70, 0);
  v71 = this->fields.mPlayerStatus;
  v72 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v72, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__181_1__, 0);
  if ( !v71 )
    goto LABEL_142;
  v71->fields.mRecoverAct = v72;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v71->fields.mRecoverAct, (int32_t)v72, v73, v74, v75, v76, v77, v78);
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
  v80 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v80, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__181_2__, 0);
  TerminalSceneComponent__SetEarthView(this, v80, v81);
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  ServantProfileEventJoinManager__UpdateProfileServantEventJoin(0);
}


void TerminalSceneComponent__beginPause(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4E06DE2 & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4E06DE2 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1CE6958(0, v4);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  this->fields.quitType = 3;
  TerminalSceneComponent__quit(this, v5);
}


void TerminalSceneComponent__beginResume(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct WarEntity_o *mWarEnt; // x8
  int32_t eventId; // w21
  TerminalPramsManager_c *v9; // x0
  TerminalPramsManager_c *v10; // x0
  int32_t WarId_k__BackingField; // w20
  bool IsGrandQuestWarId; // w20
  const MethodInfo *v13; // x2
  bool IsEventPeriod; // w21
  TerminalPramsManager_c *v15; // x0
  TerminalPramsManager_c *v16; // x0
  struct ScrTerminalMap_o *v17; // x8
  const MethodInfo *v18; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4E06DE1 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1CE6700(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1CE6700(&ScrTerminalListTop_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E06DE1 = 1;
  }
  entity = 0;
  this->fields.isFadeInAfterResumeLoad = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  if ( !byte_4E01952 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E01952 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  if ( v9->static_fields->meSceneStatus != 3 )
  {
    if ( !v9->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v9);
    if ( !byte_4DFEC9C )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4DFEC9C = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    WarId_k__BackingField = v10->static_fields->_WarId_k__BackingField;
    if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    IsGrandQuestWarId = ScrTerminalListTop__IsGrandQuestWarId(WarId_k__BackingField, 0);
    if ( !eventId )
      goto LABEL_54;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_51;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_51;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            &entity,
            eventId,
            (const MethodInfo_34E92A8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    {
LABEL_54:
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( byte_4E014F9 )
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
        if ( byte_4E014F9 )
        {
LABEL_39:
          v15 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v15 = TerminalPramsManager_TypeInfo;
          }
          v15->static_fields->meSceneStatus = 2;
          if ( !IsGrandQuestWarId )
            this->fields.isFadeInAfterResumeLoad = 1;
          goto LABEL_50;
        }
LABEL_38:
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        byte_4E014F9 = 1;
        goto LABEL_39;
      }
      if ( !byte_4E014F9 )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        byte_4E014F9 = 1;
      }
      v16 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
      }
      v16->static_fields->meSceneStatus = 1;
      TerminalSceneComponent__CallQuestInformationCloseAtAll(this, 0, v13);
      v17 = this->fields.mTerminalMap;
      if ( v17 )
      {
        Instance = (Il2CppObject *)v17->fields.spotMaskObj;
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
          TerminalSceneComponent__SetQuestBoardInfoOff(this, v18);
          goto LABEL_50;
        }
      }
    }
LABEL_51:
    sub_1CE6958(Instance, v4);
  }
LABEL_50:
  this->fields.quitType = 1;
  SceneRootComponent__beginResume_42637824((SceneRootComponent_o *)this, 0);
}


void TerminalSceneComponent__beginStartUp(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(TerminalSceneComponent_o *, _QWORD, const MethodInfo *))this->klass->vtable._5_beginStartUp.methodPtr)(
    this,
    0,
    this->klass->vtable._5_beginStartUp.method);
}


void TerminalSceneComponent__beginStartUp_46456656(
        TerminalSceneComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 naturalAligment; // x10
  Il2CppObject *v11; // x1
  TerminalSceneComponent_c *v12; // x0
  const MethodInfo *v13; // x2
  TerminalPramsManager_c *v14; // x0
  TerminalPramsManager_c *v15; // x0
  Il2CppObject *Instance; // x0
  const MethodInfo *v17; // x1
  Il2CppObject *MasterData_object; // x20
  struct UserServantEntity_array *UserServantListFromDeckIsTerminal; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct UserServantEntity_array *mStandSvtDatas; // x8
  __int64 mStandSvtIdx; // x9
  UserServantEntity_o *NextStandServant; // x20
  bool isSavedMemoryMode; // w22
  System_Action_o *v30; // x0
  System_Action_o *v31; // x21
  const MethodInfo *v32; // x4
  const MethodInfo *v33; // x3
  System_Collections_IEnumerator_o *Async; // x1

  if ( (byte_4E06DD8 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1CE6700(&OptionManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent_SendMessageStartUpAndResume__);
    sub_1CE6700(&Method_TerminalSceneComponent__beginStartUp_b__186_0__);
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    sub_1CE6700(&TerminalTransitionInfo_TypeInfo);
    sub_1CE6700(&TutorialFlag_TypeInfo);
    byte_4E06DD8 = 1;
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
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields._TransitionInfo_k__BackingField,
    (int32_t)v11,
    (int32_t)method,
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
  UnityEngine_RenderSettings__set_ambientLight(v12->static_fields->DEFAULT_AMBIENT_LIGHT_COLOR, 0);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 1, 32, 0);
  MainMenuBar__setMenuActive(1, this->fields.mUICamera, 0);
  TerminalSceneComponent__SetDispStandServant(this, 1, v13);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E06E34 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E06E34 = 1;
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
    if ( !byte_4E06E35 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E06E35 = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    v15->static_fields->_IsDispDone_UIStandFigure_k__BackingField = 1;
    if ( !byte_4E06E36 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
      byte_4E06E36 = 1;
    }
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = TerminalPramsManager_TypeInfo;
    }
    v15->static_fields->_IsDispUIStandFigure_k__BackingField = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Instance = (Il2CppObject *)TutorialFlag__Get_41569468(126, 0);
  if ( !MasterData_object
    || (((unsigned __int8)Instance & 1) == 0
      ? (UserServantListFromDeckIsTerminal = UserDeckMaster__GetUserServantListFromDeckIsTerminal(
                                               (UserDeckMaster_o *)MasterData_object,
                                               0))
      : (UserServantListFromDeckIsTerminal = UserDeckMaster__GetUserServantListFromDeckReaveHeroine(
                                               (UserDeckMaster_o *)MasterData_object,
                                               0)),
        this->fields.mStandSvtDatas = UserServantListFromDeckIsTerminal,
        sub_1CE66A4(
          (GrandQuestFolderBoardItem_o *)&this->fields.mStandSvtDatas,
          (int32_t)UserServantListFromDeckIsTerminal,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25),
        (mStandSvtDatas = this->fields.mStandSvtDatas) == 0) )
  {
LABEL_45:
    sub_1CE6958(Instance, v17);
  }
  mStandSvtIdx = this->fields.mStandSvtIdx;
  if ( (unsigned int)mStandSvtIdx >= LODWORD(mStandSvtDatas->max_length) )
    sub_1CE6960(Instance);
  NextStandServant = mStandSvtDatas->m_Items[mStandSvtIdx];
  if ( !NextStandServant )
    NextStandServant = TerminalSceneComponent__GetNextStandServant(this, v17);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  isSavedMemoryMode = OptionManager__isSavedMemoryMode(0);
  v30 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  v31 = v30;
  if ( isSavedMemoryMode )
  {
    System_Action___ctor(v30, (Il2CppObject *)this, Method_TerminalSceneComponent__beginStartUp_b__186_0__, 0);
    TerminalSceneComponent__SetupStandServant(this, NextStandServant, 0, v31, v32);
  }
  else
  {
    System_Action___ctor(v30, (Il2CppObject *)this, Method_TerminalSceneComponent_SendMessageStartUpAndResume__, 0);
    Async = TerminalSceneComponent__LoadAsync(this, NextStandServant, v31, v33);
    UnityEngine_MonoBehaviour__StartCoroutine_72903732((UnityEngine_MonoBehaviour_o *)this, Async, 0);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  Il2CppObject *v13; // x21
  TerminalPramsManager_c *v14; // x0
  GrandQuestFolderBoardItem_o *p_eventDailyPoint_k__BackingField; // x0
  int32_t monitor_high; // w21
  TerminalPramsManager_c *v17; // x0
  System_DateTime_o v18; // x0
  int64_t Time_42519948; // x21
  TerminalPramsManager_c *v20; // x0
  int32_t eventId; // w21
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct ScrTerminalListTop_o *v23; // x8
  UnityEngine_GameObject_o *mActionPanel; // x21
  TitleInfoControl_o *mTitleInfo; // x20
  System_Action_o *v26; // x22
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4E06E03 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1CE6700(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1CE6700(&Method_JsonManager_Deserialize_EventDailyPoint___);
    sub_1CE6700(&JsonManager_TypeInfo);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent__callbackEventDailyPoint_b__234_0__);
    sub_1CE6700(&StringLiteral_11194/*"REQUEST_NG"*/);
    sub_1CE6700(&StringLiteral_22555/*"ng"*/);
    this = (TerminalSceneComponent_o *)sub_1CE6700(&StringLiteral_25659/*"{}"*/);
    byte_4E06E03 = 1;
  }
  entity = 0;
  if ( !result )
    goto LABEL_46;
  if ( System_String__Equals_65158148(result, (System_String_o *)StringLiteral_22555/*"ng"*/, 0) )
  {
    this = (TerminalSceneComponent_o *)v4->fields.myFSM;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11194/*"REQUEST_NG"*/, 0);
      return;
    }
LABEL_46:
    sub_1CE6958(this, result);
  }
  this = (TerminalSceneComponent_o *)System_String__Equals_65158148(result, (System_String_o *)StringLiteral_25659/*"{}"*/, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_43;
  mTerminalMap = v4->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_46;
  mWarEnt = mTerminalMap->fields.mWarEnt;
  this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_46;
  this = (TerminalSceneComponent_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !mWarEnt || !this )
    goto LABEL_46;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          mWarEnt->fields.eventId,
          (const MethodInfo_34E92A8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
LABEL_43:
    this = (TerminalSceneComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !this )
      goto LABEL_46;
    MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0);
    ActionExtensions__Call(v4->fields.afterEventDailyPoint, 0);
  }
  else
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v13 = JsonManager__Deserialize_object_(
            (Il2CppObject *)result,
            (const MethodInfo_3273BD8 *)Method_JsonManager_Deserialize_EventDailyPoint___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E03637 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E03637 = 1;
    }
    v14 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v14 = TerminalPramsManager_TypeInfo;
    }
    p_eventDailyPoint_k__BackingField = (GrandQuestFolderBoardItem_o *)&v14->static_fields->_eventDailyPoint_k__BackingField;
    p_eventDailyPoint_k__BackingField->klass = (GrandQuestFolderBoardItem_c *)v13;
    sub_1CE66A4(p_eventDailyPoint_k__BackingField, (int32_t)v13, v7, v8, v9, v10, v11, v12);
    if ( !entity )
      goto LABEL_46;
    monitor_high = HIDWORD(entity[2].monitor);
    if ( !byte_4E06E3C )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E06E3C = 1;
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
    v18.fields._dateData = NetworkManager__getServerDateTime(0).fields._dateData;
    Time_42519948 = NetworkManager__getTime_42519948(v18, 0);
    if ( !byte_4E01E17 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E01E17 = 1;
    }
    v20 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v20 = TerminalPramsManager_TypeInfo;
    }
    v20->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = Time_42519948;
    eventId = mWarEnt->fields.eventId;
    if ( !byte_4E01E16 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      v20 = TerminalPramsManager_TypeInfo;
      byte_4E01E16 = 1;
    }
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = TerminalPramsManager_TypeInfo;
    }
    v20->static_fields->_EventDailyPointEventId_k__BackingField = eventId;
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
    v23 = v4->fields.mTerminalList;
    if ( !v23 )
      goto LABEL_46;
    mActionPanel = v23->fields.mActionPanel;
    mTitleInfo = v4->fields.mTitleInfo;
    v26 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(v26, (Il2CppObject *)v4, Method_TerminalSceneComponent__callbackEventDailyPoint_b__234_0__, 0);
    if ( !mTitleInfo )
      goto LABEL_46;
    TitleInfoControl__EventDailyPointOpen(mTitleInfo, mActionPanel, v26, 0);
  }
}


void TerminalSceneComponent__callbackTopHome(
        TerminalSceneComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PlayMakerFSM_o *myFSM; // x0
  intptr_t extra_arg; // x8
  int32_t RaidCounterEventId; // w20
  System_Action_o *afterTopLogin; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4E06DFE & 1) == 0 )
  {
    sub_1CE6700(&Method_JsonManager_Deserialize_TopHomeInfo___);
    sub_1CE6700(&JsonManager_TypeInfo);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&TitleInfoControl_TypeInfo);
    sub_1CE6700(&StringLiteral_11196/*"REQUEST_OK"*/);
    sub_1CE6700(&StringLiteral_11194/*"REQUEST_NG"*/);
    sub_1CE6700(&StringLiteral_22555/*"ng"*/);
    byte_4E06DFE = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22555/*"ng"*/, 0) )
  {
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11194/*"REQUEST_NG"*/, 0);
      return;
    }
LABEL_31:
    sub_1CE6958(myFSM, v5);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (PlayMakerFSM_o *)JsonManager__Deserialize_object_(
                              (Il2CppObject *)result,
                              (const MethodInfo_3273BD8 *)Method_JsonManager_Deserialize_TopHomeInfo___);
  if ( !myFSM )
    goto LABEL_31;
  TopHomeRequest__setRecentRefreshTime(myFSM->fields.m_CachedPtr, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E01501 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E01501 = 1;
  }
  myFSM = (PlayMakerFSM_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    myFSM = (PlayMakerFSM_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !myFSM[2].fields.addEventHandlers[3].fields.extra_arg )
    goto LABEL_34;
  if ( !LODWORD(myFSM[3].fields.fsm) )
    j_il2cpp_runtime_class_init_0(myFSM);
  if ( !byte_4E01501 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E01501 = 1;
  }
  myFSM = (PlayMakerFSM_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    myFSM = (PlayMakerFSM_o *)TerminalPramsManager_TypeInfo;
  }
  extra_arg = myFSM[2].fields.addEventHandlers[3].fields.extra_arg;
  if ( !extra_arg )
    goto LABEL_31;
  if ( *(int *)(extra_arg + 16) <= 0 )
  {
LABEL_34:
    if ( !LODWORD(myFSM[3].fields.fsm) )
      j_il2cpp_runtime_class_init_0(myFSM);
    RaidCounterEventId = TerminalPramsManager__GetRaidCounterEventId(0);
    if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
    TitleInfoControl__AddCountRaidRemainingHp(RaidCounterEventId, 0, 0);
  }
  MainMenuBar__UpdateNoticeNumber(0);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_31;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11196/*"REQUEST_OK"*/, 0);
  afterTopLogin = this->fields.afterTopLogin;
  this->fields.isTopLoginBusy = 0;
  ActionExtensions__Call(afterTopLogin, 0);
  this->fields.afterTopLogin = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.afterTopLogin, 0, v10, v11, v12, v13, v14, v15);
}


void TerminalSceneComponent__callbackTopLogin(
        TerminalSceneComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x21
  __int64 v6; // x1
  Il2CppObject *Request_object; // x21
  PlayMakerFSM_o *myFSM; // x0
  PlayMakerFSM_o *v9; // x19
  System_Collections_Generic_IEnumerable_TSource__o *m_CachedPtr; // x0
  System_Collections_Generic_List_int__o *v11; // x20
  TerminalSceneComponent___c_c *v12; // x8
  System_Converter_TInput__TOutput__o *_9__227_0; // x21
  Il2CppObject *v14; // x22
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_String_array *v22; // x0
  System_String_o *v23; // x0
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x0
  System_Collections_Generic_List_int__o *v25; // x19
  TerminalSceneComponent___c_c *v26; // x8
  System_Converter_TInput__TOutput__o *_9__227_1; // x20
  Il2CppObject *v28; // x21
  struct TerminalSceneComponent___c_StaticFields *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  System_String_array *v36; // x0
  System_String_o *v37; // x0

  if ( (byte_4E06DFD & 1) == 0 )
  {
    sub_1CE6700(&System_Converter_int__string__TypeInfo);
    sub_1CE6700(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1CE6700(&Method_JsonManager_Deserialize_CommonUI_LoginResultData___);
    sub_1CE6700(&JsonManager_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__ConvertAll_string___);
    sub_1CE6700(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1CE6700(&Method_NetworkManager_getRequest_TopHomeRequest___);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent_callbackTopHome__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__callbackTopLogin_b__227_0__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__callbackTopLogin_b__227_1__);
    sub_1CE6700(&TerminalSceneComponent___c_TypeInfo);
    sub_1CE6700(&StringLiteral_19940/*"freeShopIds"*/);
    sub_1CE6700(&StringLiteral_11196/*"REQUEST_OK"*/);
    sub_1CE6700(&StringLiteral_23461/*"returnRarePriShopIds"*/);
    sub_1CE6700(&StringLiteral_810/*","*/);
    byte_4E06DFD = 1;
  }
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1CE694C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v5, (Il2CppObject *)this, Method_TerminalSceneComponent_callbackTopHome__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_328F954 *)Method_NetworkManager_getRequest_TopHomeRequest___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E017AF )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E017AF = 1;
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
    (bool)myFSM[2].fields.addEventHandlers[5].klass,
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
    PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11196/*"REQUEST_OK"*/, 0);
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
                              (const MethodInfo_3273BD8 *)Method_JsonManager_Deserialize_CommonUI_LoginResultData___);
  if ( !myFSM )
LABEL_45:
    sub_1CE6958(myFSM, v6);
  v9 = myFSM;
  m_CachedPtr = (System_Collections_Generic_IEnumerable_TSource__o *)myFSM[2].fields.m_CachedPtr;
  if ( m_CachedPtr )
  {
    myFSM = (PlayMakerFSM_o *)System_Linq_Enumerable__ToList_int_(
                                m_CachedPtr,
                                (const MethodInfo_32487E8 *)Method_System_Linq_Enumerable_ToList_int___);
    v11 = (System_Collections_Generic_List_int__o *)myFSM;
    v12 = TerminalSceneComponent___c_TypeInfo;
    if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v12 = TerminalSceneComponent___c_TypeInfo;
    }
    _9__227_0 = (System_Converter_TInput__TOutput__o *)v12->static_fields->__9__227_0;
    if ( !_9__227_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = TerminalSceneComponent___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v12->static_fields->__9;
      _9__227_0 = (System_Converter_TInput__TOutput__o *)sub_1CE694C(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(
        _9__227_0,
        v14,
        Method_TerminalSceneComponent___c__callbackTopLogin_b__227_0__,
        0);
      static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
      static_fields->__9__227_0 = (struct System_Converter_int__string__o *)_9__227_0;
      sub_1CE66A4(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__227_0,
        (int32_t)_9__227_0,
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
                                (System_Converter_T__TOutput__o *)_9__227_0,
                                (const MethodInfo_3126118 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !myFSM )
      goto LABEL_45;
    v22 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)myFSM,
                                   (const MethodInfo_3907AC0 *)Method_System_Collections_Generic_List_string__ToArray__);
    v23 = System_String__Join((System_String_o *)StringLiteral_810/*","*/, v22, 0);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_19940/*"freeShopIds"*/, v23, 0);
  }
  monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v9[2].monitor;
  if ( monitor )
  {
    myFSM = (PlayMakerFSM_o *)System_Linq_Enumerable__ToList_int_(
                                monitor,
                                (const MethodInfo_32487E8 *)Method_System_Linq_Enumerable_ToList_int___);
    v25 = (System_Collections_Generic_List_int__o *)myFSM;
    v26 = TerminalSceneComponent___c_TypeInfo;
    if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v26 = TerminalSceneComponent___c_TypeInfo;
    }
    _9__227_1 = (System_Converter_TInput__TOutput__o *)v26->static_fields->__9__227_1;
    if ( !_9__227_1 )
    {
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = TerminalSceneComponent___c_TypeInfo;
      }
      v28 = (Il2CppObject *)v26->static_fields->__9;
      _9__227_1 = (System_Converter_TInput__TOutput__o *)sub_1CE694C(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(
        _9__227_1,
        v28,
        Method_TerminalSceneComponent___c__callbackTopLogin_b__227_1__,
        0);
      v29 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v29->__9__227_1 = (struct System_Converter_int__string__o *)_9__227_1;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v29->__9__227_1, (int32_t)_9__227_1, v30, v31, v32, v33, v34, v35);
    }
    if ( v25 )
    {
      myFSM = (PlayMakerFSM_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                  v25,
                                  (System_Converter_T__TOutput__o *)_9__227_1,
                                  (const MethodInfo_3126118 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
      if ( myFSM )
      {
        v36 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                       (System_Collections_Generic_List_object__o *)myFSM,
                                       (const MethodInfo_3907AC0 *)Method_System_Collections_Generic_List_string__ToArray__);
        v37 = System_String__Join((System_String_o *)StringLiteral_810/*","*/, v36, 0);
        UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_23461/*"returnRarePriShopIds"*/, v37, 0);
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

  if ( (byte_4E06DE9 & 1) == 0 )
  {
    sub_1CE6700(&TerminalSceneComponent__coFadein_WorldDisp_d__206_TypeInfo);
    byte_4E06DE9 = 1;
  }
  v9 = sub_1CE694C(TerminalSceneComponent__coFadein_WorldDisp_d__206_TypeInfo);
  TerminalSceneComponent__coFadein_WorldDisp_d__206___ctor(
    (TerminalSceneComponent__coFadein_WorldDisp_d__206_o *)v9,
    0,
    0);
  if ( !v9 )
    sub_1CE6958(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(float *)(v9 + 64) = fadeTime;
  *(_QWORD *)(v9 + 40) = endAct;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v9 + 40), (int32_t)endAct, v18, v19, v20, v21, v22, v23);
  *(_BYTE *)(v9 + 48) = isExecuteUnusedAssets;
  return (System_Collections_IEnumerator_o *)v9;
}


void TerminalSceneComponent__deleteQuestMovie(TerminalSceneComponent_o *this, const MethodInfo *method)
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
  __int64 v12; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  QuestPhaseEntity_o *v17; // x23
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v19; // x1
  System_String_o *MovieFolder; // x22
  _BOOL8 IsPlayMovieFromMaterial; // x0
  __int64 v22; // x1
  Il2CppObject *Entity; // x0
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0

  if ( (byte_4E06E01 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__GetEnumerator__);
    sub_1CE6700(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1CE6700(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__getEntityList__);
    sub_1CE6700(&System_IDisposable_TypeInfo);
    sub_1CE6700(&System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo);
    sub_1CE6700(&System_Collections_IEnumerator_TypeInfo);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E06E01 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object
    || (datalist = (System_Collections_ObjectModel_Collection_T__o *)Master_object->fields.datalist,
        (Master_object = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Master_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                           Master_object,
                                           (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_QuestMaster___),
        !datalist) )
  {
    sub_1CE6958(Master_object, v4);
  }
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 datalist,
                 (const MethodInfo_3481088 *)Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1CE6958(0, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_15;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_15:
      v12 = sub_1CBCA7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            Enumerator,
            *(_QWORD *)(v12 + 8))
        & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestPhaseEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_22;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_22:
      v16 = sub_1CBCA7C(Enumerator, System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo, 0);
    }
    v17 = (QuestPhaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                                  Enumerator,
                                  *(_QWORD *)(v16 + 8));
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    if ( !SelfUserGame )
      sub_1CE6958(0, v19);
    if ( !v17 )
      sub_1CE6958(SelfUserGame, v19);
    MovieFolder = QuestPhaseEntity__GetMovieFolder(v17, SelfUserGame->fields.genderType, 0);
    if ( MovieFolder )
    {
      IsPlayMovieFromMaterial = QuestPhaseEntity__IsPlayMovieFromMaterial(v17, 0);
      if ( !IsPlayMovieFromMaterial )
      {
        if ( !v6 )
          sub_1CE6958(IsPlayMovieFromMaterial, v22);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   v6,
                   v17->fields.questId,
                   (const MethodInfo_34E925C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( Entity )
        {
          if ( Time >= QuestEntity__getClosedAt((QuestEntity_o *)Entity, 0) )
            MovieFileMerge__Delete(MovieFolder, 0);
        }
      }
    }
  }
  v24 = Enumerator->klass;
  v25 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_36;
    }
    v27 = (__int64)&v24->vtable[*v26];
  }
  else
  {
LABEL_36:
    v27 = sub_1CBCA7C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
}


void TerminalSceneComponent__fadeoutBgm(TerminalSceneComponent_o *this, float fadeoutTime, const MethodInfo *method)
{
  if ( (byte_4E06DF8 & 1) == 0 )
  {
    sub_1CE6700(&SoundManager_TypeInfo);
    byte_4E06DF8 = 1;
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
  TerminalSceneComponent_c *v1; // x0

  if ( (byte_4E06DCC & 1) == 0 )
  {
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4E06DCC = 1;
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

  if ( (byte_4E06DCF & 1) == 0 )
  {
    sub_1CE6700(&FSUtility_TypeInfo);
    byte_4E06DCF = 1;
  }
  x = this->fields.TUTORIAL_MENU_ARROW_POS2.fields.x;
  y = this->fields.TUTORIAL_MENU_ARROW_POS2.fields.y;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v5 = x + (float)(FSUtility__GetOffsetX(68.0, 2, 0) + -2.0);
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

  if ( (byte_4E06DCE & 1) == 0 )
  {
    sub_1CE6700(&FSUtility_TypeInfo);
    byte_4E06DCE = 1;
  }
  x = this->fields.TUTORIAL_MENU_ARROW_POS.fields.x;
  y = this->fields.TUTORIAL_MENU_ARROW_POS.fields.y;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v5 = x + (float)(FSUtility__GetOffsetX(68.0, 2, 0) + -14.0);
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

  if ( (byte_4E06DD0 & 1) == 0 )
  {
    sub_1CE6700(&FSUtility_TypeInfo);
    byte_4E06DD0 = 1;
  }
  x = this->fields.TUTORIAL_QUEST_ARROW_POS.fields.x;
  y = this->fields.TUTORIAL_QUEST_ARROW_POS.fields.y;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
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

  if ( (byte_4E06DD1 & 1) == 0 )
  {
    sub_1CE6700(&FSUtility_TypeInfo);
    byte_4E06DD1 = 1;
  }
  m_XMin = this->fields.TUTORIAL_QUEST_ARROW_RECT.fields.m_XMin;
  m_YMin = this->fields.TUTORIAL_QUEST_ARROW_RECT.fields.m_YMin;
  m_Width = this->fields.TUTORIAL_QUEST_ARROW_RECT.fields.m_Width;
  m_Height = this->fields.TUTORIAL_QUEST_ARROW_RECT.fields.m_Height;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  OffsetX = FSUtility__GetOffsetX(64.0, 2, 0);
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
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4E06DDD & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&AtlasManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1CE6700(&Method_TerminalSceneComponent__loadCommonBG_b__191_0__);
    byte_4E06DDD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_1CE6958(0, v4);
  if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 4, 0) )
  {
    TerminalSceneComponent__loadOutGameAtlas(this, v5);
  }
  else
  {
    v6 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_TerminalSceneComponent__loadCommonBG_b__191_0__, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadUISkin(v6, 4, 1, 0);
  }
}


void TerminalSceneComponent__loadOutGameAtlas(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4E06DDE & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&AtlasManager_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent__loadOutGameAtlas_b__192_0__);
    byte_4E06DDE = 1;
  }
  v3 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_TerminalSceneComponent__loadOutGameAtlas_b__192_0__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v3, 0);
}


void TerminalSceneComponent__loadVoice(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x8
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct TerminalTransitionInfo_o *v6; // x8
  System_String_o *voiceAssetName; // x21
  SoundManager_o *v8; // x20
  System_Action_o *v9; // x22

  if ( (byte_4E06DDF & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1CE6700(&Method_TerminalSceneComponent_SendMessageStartUpAndResume__);
    byte_4E06DDF = 1;
  }
  TransitionInfo_k__BackingField = this->fields._TransitionInfo_k__BackingField;
  if ( TransitionInfo_k__BackingField
    && !System_String__IsNullOrEmpty(TransitionInfo_k__BackingField->fields.voiceAssetName, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v6 = this->fields._TransitionInfo_k__BackingField;
    if ( !v6
      || (voiceAssetName = v6->fields.voiceAssetName,
          v8 = (SoundManager_o *)Instance,
          v9 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo),
          System_Action___ctor(v9, (Il2CppObject *)this, Method_TerminalSceneComponent_SendMessageStartUpAndResume__, 0),
          !v8) )
    {
      sub_1CE6958(Instance, v5);
    }
    SoundManager__LoadAudioAssetStorage(v8, voiceAssetName, v9, 1, 0);
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

  if ( (byte_4E06E0F & 1) == 0 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&StringLiteral_5787/*"EV_SCENE_STATUS_INIT"*/);
    sub_1CE6700(&StringLiteral_5788/*"EV_SCENE_STATUS_RESUME"*/);
    byte_4E06E0F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E01952 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E01952 = 1;
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
      v6 = &StringLiteral_5787/*"EV_SCENE_STATUS_INIT"*/;
      goto LABEL_15;
    }
LABEL_16:
    sub_1CE6958(myFSM, method);
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_16;
  v6 = &StringLiteral_5788/*"EV_SCENE_STATUS_RESUME"*/;
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
    sub_1CE6958(0, sEventStr);
  PlayMakerFSM__SendEvent(myFSM, sEventStr, 0);
}


void TerminalSceneComponent__mfsmfInitTable(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *mTerminalMap; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_4E06E00 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1CE6700(&Method_TerminalSceneComponent__mfsmfInitTable_b__231_0__);
    byte_4E06E00 = 1;
  }
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__ReleaseMap(mTerminalMap, 0, 0), (mTerminalList = this->fields.mTerminalList) == 0)
    || (mTerminalMap = (ScrTerminalMap_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0
    || (ListViewManager__DestroyList((ListViewManager_o *)mTerminalMap, 0),
        Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_QuestTree__get_Instance__),
        v6 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_TerminalSceneComponent__mfsmfInitTable_b__231_0__, 0),
        !Instance) )
  {
    sub_1CE6958(mTerminalMap, method);
  }
  v7 = QuestTree__Init((QuestTree_o *)Instance, v6, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_72903732((UnityEngine_MonoBehaviour_o *)this, v7, 0);
}


void TerminalSceneComponent__playBgm(
        TerminalSceneComponent_o *this,
        System_String_o *bgmName,
        System_Action_o *onLoadFinishCallback,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_String_o *mPlayBgmName; // x20

  if ( (byte_4E06DF5 & 1) == 0 )
  {
    sub_1CE6700(&SoundManager_TypeInfo);
    byte_4E06DF5 = 1;
  }
  if ( System_String__IsNullOrEmpty(bgmName, 0) )
  {
    TerminalSceneComponent__playDefaultBgm(this, onLoadFinishCallback, v7);
  }
  else
  {
    this->fields.mPlayBgmName = bgmName;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.mPlayBgmName,
      (int32_t)bgmName,
      (int32_t)v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    mPlayBgmName = this->fields.mPlayBgmName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm_42667472(mPlayBgmName, onLoadFinishCallback, 0);
  }
}


void TerminalSceneComponent__playBgm_46473764(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  System_String_o *mPlayBgmName; // x19

  if ( (byte_4E06DF7 & 1) == 0 )
  {
    sub_1CE6700(&SoundManager_TypeInfo);
    byte_4E06DF7 = 1;
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

  if ( (byte_4E06DF6 & 1) == 0 )
  {
    sub_1CE6700(&BgmManager_TypeInfo);
    byte_4E06DF6 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0, 0);
  TerminalSceneComponent__playBgm(this, MainBgmName, onLoadFinishCallback, v6);
}


void TerminalSceneComponent__quit(TerminalSceneComponent_o *this, const MethodInfo *method)
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
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
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

  if ( (byte_4E06DE3 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
    sub_1CE6700(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1CE6700(&SoundManager_TypeInfo);
    sub_1CE6700(&string_TypeInfo);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    sub_1CE6700(&StringLiteral_14934/*"UISkin/"*/);
    byte_4E06DE3 = 1;
  }
  skinName = 0;
  str1 = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  AutomatedAction__TerminateMissionAction((AutomatedAction_o *)Instance, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E06E38 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E06E38 = 1;
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
    if ( !byte_4E01A7F )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E01A7F = 1;
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
    SoundManager__stopSe(0.0, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  QuestAfterAction__releaseVoice((QuestAfterAction_o *)Instance, 0);
  TransitionInfo_k__BackingField = this->fields._TransitionInfo_k__BackingField;
  if ( TransitionInfo_k__BackingField )
  {
    Instance = (void *)System_String__IsNullOrEmpty(TransitionInfo_k__BackingField->fields.voiceAssetName, 0);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      v8 = this->fields._TransitionInfo_k__BackingField;
      if ( !v8 )
        goto LABEL_50;
      voiceAssetName = v8->fields.voiceAssetName;
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__releaseAudioAssetStorage(voiceAssetName, 0);
      Instance = this->fields._TransitionInfo_k__BackingField;
      if ( !Instance )
        goto LABEL_50;
      *((_QWORD *)Instance + 5) = 0;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)((char *)Instance + 40), 0, v10, v11, v12, v13, v14, v15);
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
    sub_1CE6958(Instance, v4);
  }
LABEL_34:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
  if ( MasterData_object )
  {
    v17 = (TerminalOverwriteMaster_o *)MasterData_object;
    OverwriteSkinName = TerminalOverwriteMaster__TryGetOverwriteSkinName(
                          (TerminalOverwriteMaster_o *)MasterData_object,
                          2,
                          &skinName,
                          0);
    v19 = TerminalSceneComponent_TypeInfo;
    v20 = OverwriteSkinName;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v19 = TerminalSceneComponent_TypeInfo;
    }
    OVERWRITE_COMMON_BG_TYPE1_KEY = v19->static_fields->OVERWRITE_COMMON_BG_TYPE1_KEY;
    if ( v20 )
      Empty = System_String__Concat_65122828((System_String_o *)StringLiteral_14934/*"UISkin/"*/, skinName, 0);
    else
      Empty = string_TypeInfo->static_fields->Empty;
    UnityEngine_PlayerPrefs__SetString(OVERWRITE_COMMON_BG_TYPE1_KEY, Empty, 0);
    v23 = TerminalOverwriteMaster__TryGetOverwriteSkinName(v17, 4, &str1, 0);
    v24 = TerminalSceneComponent_TypeInfo;
    v25 = v23;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v24 = TerminalSceneComponent_TypeInfo;
    }
    OVERWRITE_COMMON_BG_TYPE2_KEY = v24->static_fields->OVERWRITE_COMMON_BG_TYPE2_KEY;
    if ( v25 )
      v27 = System_String__Concat_65122828((System_String_o *)StringLiteral_14934/*"UISkin/"*/, str1, 0);
    else
      v27 = string_TypeInfo->static_fields->Empty;
    UnityEngine_PlayerPrefs__SetString(OVERWRITE_COMMON_BG_TYPE2_KEY, v27, 0);
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
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x21

  if ( (byte_4E06E02 & 1) == 0 )
  {
    sub_1CE6700(&Method_NetworkManager_getRequest_EventDailyPointRequest___);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1CE6700(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1CE6700(&Method_TerminalSceneComponent_callbackEventDailyPoint__);
    byte_4E06E02 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1CE694C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_callbackEventDailyPoint__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               v7,
               (const MethodInfo_328F954 *)Method_NetworkManager_getRequest_EventDailyPointRequest___);
  if ( !Instance )
LABEL_8:
    sub_1CE6958(Instance, v6);
  EventDailyPointRequest__beginRequest((EventDailyPointRequest_o *)Instance, eventId, 0);
}


void TerminalSceneComponent__requestTopHome(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  PlayMakerFSM_o *myFSM; // x0
  Il2CppObject *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v7; // x21

  if ( (byte_4E06DFC & 1) == 0 )
  {
    sub_1CE6700(&NetworkManager_LoginCallbackFunc_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent_callbackTopLogin__);
    sub_1CE6700(&TutorialFlag_TypeInfo);
    sub_1CE6700(&StringLiteral_11196/*"REQUEST_OK"*/);
    byte_4E06DFC = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_41569468(102, 0) )
    goto LABEL_13;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E0196B )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E0196B = 1;
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
      PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11196/*"REQUEST_OK"*/, 0);
      this->fields.isTopLoginBusy = 0;
      return;
    }
LABEL_17:
    sub_1CE6958(myFSM, v3);
  }
  this->fields.isTopLoginBusy = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v7 = (NetworkManager_LoginCallbackFunc_o *)sub_1CE694C(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(v7, (Il2CppObject *)this, Method_TerminalSceneComponent_callbackTopLogin__, 0);
  if ( !Instance )
    goto LABEL_17;
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v7, 0, 0);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._TransitionInfo_k__BackingField = value;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields._TransitionInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1CE67C0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1CE6974(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1CE6828(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1B19954;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1B1990C;
}


System_IAsyncResult_o *TerminalSceneComponent_PlayChapterStartCallback__BeginInvoke(
        TerminalSceneComponent_PlayChapterStartCallback_o *this,
        bool isPlay,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isPlay;
  if ( (byte_4E06E2A & 1) == 0 )
  {
    sub_1CE6700(&bool_TypeInfo);
    byte_4E06E2A = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1CE66B4(this, v9, callback, object);
}


void TerminalSceneComponent_PlayChapterStartCallback__EndInvoke(
        TerminalSceneComponent_PlayChapterStartCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1CE66B8(result, 0, method);
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
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  TerminalSceneComponent_o **v13; // x20
  QuestBoardListViewObject_o *FocusQuest; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8
  struct UIScrollView_o *scrollView; // x8
  struct UIProgressBar_o *verticalScrollBar; // x23
  System_String_o *v25; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v27; // x0
  CommonUI_o *v28; // x22
  UnityEngine_Vector2_o TUTORIAL_QUEST_ARROW_POS_FS; // kr00_8
  TerminalSceneComponent_o *v30; // x8
  float x; // s14
  float y; // s15
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v37; // x23
  struct ScrTerminalListTop_o *v38; // x21
  System_Action_o *v39; // x20
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  UnityEngine_Rect_o TUTORIAL_QUEST_ARROW_RECT_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v47; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4E06E2D & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_GameObjectExtensions_RemoveComponent_Collider___);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__0__);
    sub_1CE6700(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__1__);
    sub_1CE6700(&TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_TypeInfo);
    sub_1CE6700(&StringLiteral_13740/*"TUTORIAL_MESSAGE_TERMINAL_QUEST1"*/);
    byte_4E06E2D = 1;
  }
  v4 = sub_1CE694C(TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_22;
  *(_QWORD *)(v4 + 16) = that;
  v13 = (TerminalSceneComponent_o **)(v4 + 16);
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_22;
  mFG = *(TerminalSceneComponent_o **)(*(_QWORD *)(v4 + 16) + 256LL);
  if ( !mFG )
    goto LABEL_22;
  FocusQuest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mFG, 0);
  *(_QWORD *)(v4 + 24) = FocusQuest;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v4 + 24), (int32_t)FocusQuest, v15, v16, v17, v18, v19, v20);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  mFG = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13740/*"TUTORIAL_MESSAGE_TERMINAL_QUEST1"*/, 0);
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
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0);
  GameObjectExtensions__RemoveComponent_object_(
    gameObject,
    (const MethodInfo_325D7E0 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mBG;
  if ( !mFG )
    goto LABEL_22;
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0);
  GameObjectExtensions__RemoveComponent_object_(
    v27,
    (const MethodInfo_325D7E0 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v13 )
    goto LABEL_22;
  v28 = (CommonUI_o *)mFG;
  TUTORIAL_QUEST_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(*v13, v6);
  mFG = *v13;
  if ( !*v13 )
    goto LABEL_22;
  TUTORIAL_QUEST_ARROW_RECT_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(mFG, v6);
  v30 = *v13;
  if ( !*v13 )
    goto LABEL_22;
  x = v30->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x;
  y = v30->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.y;
  m_XMin = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_XMin;
  m_YMin = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_YMin;
  m_Width = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_Width;
  m_Height = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_Height;
  v37 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__0__,
    0);
  if ( !v28 )
    goto LABEL_22;
  v47.fields.m_XMin = m_XMin;
  v47.fields.m_YMin = m_YMin;
  v47.fields.m_Width = m_Width;
  v47.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v28,
    v25,
    TUTORIAL_QUEST_ARROW_POS_FS,
    v47,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v37,
    0);
  if ( !*v13
    || (v38 = (*v13)->fields.mTerminalList,
        v39 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo),
        System_Action___ctor(
          v39,
          (Il2CppObject *)v4,
          Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0),
        !v38) )
  {
LABEL_22:
    sub_1CE6958(mFG, v6);
  }
  v38->fields.mQuestClickAct = v39;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v38->fields.mQuestClickAct, (int32_t)v39, v40, v41, v42, v43, v44, v45);
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
  if ( (byte_4E06E2E & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
    byte_4E06E2E = 1;
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
                                                                                            (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0 )
  {
LABEL_12:
    sub_1CE6958(this, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
}


void TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4E06E2F & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__2__);
    byte_4E06E2F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !v6 )
    sub_1CE6958(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_31942708(v6, _9__2, 0);
}


void TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1CE6958(0, method);
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
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  SrcSpotBasePrefab_o *FocusSpot; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
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
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  UnityEngine_Vector2_o v41; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v42; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v44; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4E06E2B & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__0__);
    sub_1CE6700(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__1__);
    sub_1CE6700(&TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_TypeInfo);
    sub_1CE6700(&StringLiteral_13743/*"TUTORIAL_MESSAGE_TERMINAL_SPOT1"*/);
    byte_4E06E2B = 1;
  }
  v5 = sub_1CE694C(TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 24) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_12;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_12;
  FocusSpot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0);
  *(_QWORD *)(v5 + 16) = FocusSpot;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)FocusSpot, v15, v16, v17, v18, v19, v20);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_13743/*"TUTORIAL_MESSAGE_TERMINAL_SPOT1"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v32 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__0__,
    0);
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
    0);
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__SetMapCamera_TutorialFocusSpot(mTerminalMap, *(SrcSpotBasePrefab_o **)(v5 + 16), 0.5, 0),
        v33 = that->fields.mTerminalMap,
        v34 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo),
        System_Action___ctor(
          v34,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0),
        !v33) )
  {
LABEL_12:
    sub_1CE6958(mTerminalMap, v7);
  }
  v33->fields.mSpotClickAct = v34;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v33->fields.mSpotClickAct, (int32_t)v34, v35, v36, v37, v38, v39, v40);
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
      sub_1CE6958(that, that);
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
    sub_1CE6958(0, method);
  SrcSpotBasePrefab__SetBtnColliderEnable(focus_spot, 1, 0);
}


void TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0___begin_b__1(
        TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4E06E2C & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__2__);
    byte_4E06E2C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !v6 )
    sub_1CE6958(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_31942708(v6, _9__2, 0);
}


void TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial1_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1CE6958(this, method);
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
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  TerminalSceneComponent_o **v13; // x20
  QuestBoardListViewObject_o *FocusQuest; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8
  struct UIScrollView_o *scrollView; // x8
  struct UIProgressBar_o *verticalScrollBar; // x23
  System_String_o *v25; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v27; // x0
  CommonUI_o *v28; // x22
  UnityEngine_Vector2_o TUTORIAL_QUEST_ARROW_POS_FS; // kr00_8
  TerminalSceneComponent_o *v30; // x8
  float x; // s14
  float y; // s15
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v37; // x23
  struct ScrTerminalListTop_o *v38; // x21
  System_Action_o *v39; // x20
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  UnityEngine_Rect_o TUTORIAL_QUEST_ARROW_RECT_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v47; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4E06E32 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_GameObjectExtensions_RemoveComponent_Collider___);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__0__);
    sub_1CE6700(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__1__);
    sub_1CE6700(&TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_TypeInfo);
    sub_1CE6700(&StringLiteral_13741/*"TUTORIAL_MESSAGE_TERMINAL_QUEST2"*/);
    byte_4E06E32 = 1;
  }
  v4 = sub_1CE694C(TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_TypeInfo);
  TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0___ctor(
    (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)v4,
    0);
  if ( !v4 )
    goto LABEL_22;
  *(_QWORD *)(v4 + 16) = that;
  v13 = (TerminalSceneComponent_o **)(v4 + 16);
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_22;
  mFG = *(TerminalSceneComponent_o **)(*(_QWORD *)(v4 + 16) + 256LL);
  if ( !mFG )
    goto LABEL_22;
  FocusQuest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mFG, 0);
  *(_QWORD *)(v4 + 24) = FocusQuest;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v4 + 24), (int32_t)FocusQuest, v15, v16, v17, v18, v19, v20);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  mFG = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13741/*"TUTORIAL_MESSAGE_TERMINAL_QUEST2"*/, 0);
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
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0);
  GameObjectExtensions__RemoveComponent_object_(
    gameObject,
    (const MethodInfo_325D7E0 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mBG;
  if ( !mFG )
    goto LABEL_22;
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0);
  GameObjectExtensions__RemoveComponent_object_(
    v27,
    (const MethodInfo_325D7E0 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v13 )
    goto LABEL_22;
  v28 = (CommonUI_o *)mFG;
  TUTORIAL_QUEST_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(*v13, v6);
  mFG = *v13;
  if ( !*v13 )
    goto LABEL_22;
  TUTORIAL_QUEST_ARROW_RECT_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(mFG, v6);
  v30 = *v13;
  if ( !*v13 )
    goto LABEL_22;
  x = v30->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x;
  y = v30->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.y;
  m_XMin = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_XMin;
  m_YMin = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_YMin;
  m_Width = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_Width;
  m_Height = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_Height;
  v37 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__0__,
    0);
  if ( !v28 )
    goto LABEL_22;
  v47.fields.m_XMin = m_XMin;
  v47.fields.m_YMin = m_YMin;
  v47.fields.m_Width = m_Width;
  v47.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v28,
    v25,
    TUTORIAL_QUEST_ARROW_POS_FS,
    v47,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v37,
    0);
  if ( !*v13
    || (v38 = (*v13)->fields.mTerminalList,
        v39 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo),
        System_Action___ctor(
          v39,
          (Il2CppObject *)v4,
          Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0),
        !v38) )
  {
LABEL_22:
    sub_1CE6958(mFG, v6);
  }
  v38->fields.mQuestClickAct = v39;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v38->fields.mQuestClickAct, (int32_t)v39, v40, v41, v42, v43, v44, v45);
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
  if ( (byte_4E06E3D & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
    byte_4E06E3D = 1;
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
                                                                                            (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0 )
  {
LABEL_12:
    sub_1CE6958(this, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
}


void TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4E06E3E & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__2__);
    byte_4E06E3E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !v6 )
    sub_1CE6958(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_31942708(v6, _9__2, 0);
}


void TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1CE6958(0, method);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  SrcSpotBasePrefab_o *FocusSpot; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
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
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  UnityEngine_Vector2_o v41; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v42; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v44; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4E06E30 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__0__);
    sub_1CE6700(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__1__);
    sub_1CE6700(&TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_TypeInfo);
    sub_1CE6700(&StringLiteral_13744/*"TUTORIAL_MESSAGE_TERMINAL_SPOT2"*/);
    byte_4E06E30 = 1;
  }
  v5 = sub_1CE694C(TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 24) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_12;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_12;
  FocusSpot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0);
  *(_QWORD *)(v5 + 16) = FocusSpot;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)FocusSpot, v15, v16, v17, v18, v19, v20);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_13744/*"TUTORIAL_MESSAGE_TERMINAL_SPOT2"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v32 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__0__,
    0);
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
    0);
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__SetMapCamera_TutorialFocusSpot(mTerminalMap, *(SrcSpotBasePrefab_o **)(v5 + 16), 0.5, 0),
        v33 = that->fields.mTerminalMap,
        v34 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo),
        System_Action___ctor(
          v34,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0),
        !v33) )
  {
LABEL_12:
    sub_1CE6958(mTerminalMap, v7);
  }
  v33->fields.mSpotClickAct = v34;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v33->fields.mSpotClickAct, (int32_t)v34, v35, v36, v37, v38, v39, v40);
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
      sub_1CE6958(that, that);
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
    sub_1CE6958(0, method);
  SrcSpotBasePrefab__SetBtnColliderEnable(focus_spot, 1, 0);
}


void TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0___begin_b__1(
        TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4E06E31 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__2__);
    byte_4E06E31 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !v6 )
    sub_1CE6958(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_31942708(v6, _9__2, 0);
}


void TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial2_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1CE6958(this, method);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  TerminalSceneComponent_o **v13; // x22
  System_String_o *v14; // x20
  CommonUI_o *v15; // x21
  UnityEngine_Vector2_o TUTORIAL_GACHA_ARROW_POS_FS; // kr00_8
  TerminalSceneComponent_o *v17; // x8
  float x; // s14
  float y; // s15
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v24; // x22
  Il2CppObject *v25; // x23
  struct TerminalSceneComponent_StateTutorial3_GachaArrow___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  System_Action_o *v33; // x20
  UnityEngine_Rect_o TUTORIAL_GACHA_ARROW_RECT_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v35; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4E06E42 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__begin_b__0_0__);
    sub_1CE6700(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__1__);
    sub_1CE6700(&TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_TypeInfo);
    sub_1CE6700(&TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo);
    sub_1CE6700(&StringLiteral_13738/*"TUTORIAL_MESSAGE_TERMINAL_GACHA"*/);
    byte_4E06E42 = 1;
  }
  v4 = sub_1CE694C(TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_17;
  *(_QWORD *)(v4 + 16) = that;
  v13 = (TerminalSceneComponent_o **)(v4 + 16);
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_13738/*"TUTORIAL_MESSAGE_TERMINAL_GACHA"*/, 0);
  Instance = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v13 )
    goto LABEL_17;
  v15 = (CommonUI_o *)Instance;
  TUTORIAL_GACHA_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_GACHA_ARROW_POS_FS(*v13, 0);
  Instance = *v13;
  if ( !*v13 )
    goto LABEL_17;
  TUTORIAL_GACHA_ARROW_RECT_FS = TerminalSceneComponent__get_TUTORIAL_GACHA_ARROW_RECT_FS(Instance, 0);
  v17 = *v13;
  if ( !*v13 )
    goto LABEL_17;
  x = v17->fields.TUTORIAL_MENU_MESSAGE_POS.fields.x;
  y = v17->fields.TUTORIAL_MENU_MESSAGE_POS.fields.y;
  m_XMin = TUTORIAL_GACHA_ARROW_RECT_FS.fields.m_XMin;
  m_YMin = TUTORIAL_GACHA_ARROW_RECT_FS.fields.m_YMin;
  Instance = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo;
  m_Width = TUTORIAL_GACHA_ARROW_RECT_FS.fields.m_Width;
  m_Height = TUTORIAL_GACHA_ARROW_RECT_FS.fields.m_Height;
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
    v24 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(v24, v25, Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__begin_b__0_0__, 0);
    static_fields = TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = v24;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&static_fields->__9__0_0, (int32_t)v24, v27, v28, v29, v30, v31, v32);
  }
  if ( !v15 )
LABEL_17:
    sub_1CE6958(Instance, v6);
  v35.fields.m_XMin = m_XMin;
  v35.fields.m_YMin = m_YMin;
  v35.fields.m_Width = m_Width;
  v35.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v15,
    v14,
    TUTORIAL_GACHA_ARROW_POS_FS,
    v35,
    0.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v24,
    0);
  v33 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__1__,
    0);
  MainMenuBar__SetDispBtnAct(2, v33, 0);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E06E43 & 1) == 0 )
  {
    sub_1CE6700(&TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo);
    byte_4E06E43 = 1;
  }
  v1 = (Il2CppObject *)sub_1CE694C(TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial3_GachaArrow___c_o *)v1;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields,
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4E06E44 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&TutorialFlag_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__2__);
    byte_4E06E44 = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress(1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !v6 )
    sub_1CE6958(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_31942708(v6, _9__2, 0);
}


void TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1CE6958(0, method);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  TerminalSceneComponent_o **v13; // x22
  System_String_o *v14; // x20
  CommonUI_o *v15; // x21
  UnityEngine_Vector2_o TUTORIAL_MENU_ARROW_POS_FS; // kr00_8
  TerminalSceneComponent_o *v17; // x8
  float x; // s14
  float y; // s15
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v24; // x22
  Il2CppObject *v25; // x23
  struct TerminalSceneComponent_StateTutorial3_MenuArrow___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  System_Action_o *v33; // x20
  UnityEngine_Rect_o TUTORIAL_MENU_ARROW_RECT_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v35; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4E06E3F & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__begin_b__0_0__);
    sub_1CE6700(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__1__);
    sub_1CE6700(&TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_TypeInfo);
    sub_1CE6700(&TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo);
    sub_1CE6700(&StringLiteral_13739/*"TUTORIAL_MESSAGE_TERMINAL_MENU"*/);
    byte_4E06E3F = 1;
  }
  v4 = sub_1CE694C(TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_17;
  *(_QWORD *)(v4 + 16) = that;
  v13 = (TerminalSceneComponent_o **)(v4 + 16);
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_13739/*"TUTORIAL_MESSAGE_TERMINAL_MENU"*/, 0);
  Instance = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v13 )
    goto LABEL_17;
  v15 = (CommonUI_o *)Instance;
  TUTORIAL_MENU_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_POS_FS(*v13, 0);
  Instance = *v13;
  if ( !*v13 )
    goto LABEL_17;
  TUTORIAL_MENU_ARROW_RECT_FS = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_RECT_FS(Instance, 0);
  v17 = *v13;
  if ( !*v13 )
    goto LABEL_17;
  x = v17->fields.TUTORIAL_MENU_MESSAGE_POS.fields.x;
  y = v17->fields.TUTORIAL_MENU_MESSAGE_POS.fields.y;
  m_XMin = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_XMin;
  m_YMin = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_YMin;
  Instance = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo;
  m_Width = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_Width;
  m_Height = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_Height;
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
    v24 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(v24, v25, Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__begin_b__0_0__, 0);
    static_fields = TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = v24;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&static_fields->__9__0_0, (int32_t)v24, v27, v28, v29, v30, v31, v32);
  }
  if ( !v15 )
LABEL_17:
    sub_1CE6958(Instance, v6);
  v35.fields.m_XMin = m_XMin;
  v35.fields.m_YMin = m_YMin;
  v35.fields.m_Width = m_Width;
  v35.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v15,
    v14,
    TUTORIAL_MENU_ARROW_POS_FS,
    v35,
    0.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v24,
    0);
  v33 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__1__,
    0);
  MainMenuBar__SetMenuBtnAct(v33, 0);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E06E40 & 1) == 0 )
  {
    sub_1CE6700(&TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo);
    byte_4E06E40 = 1;
  }
  v1 = (Il2CppObject *)sub_1CE694C(TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial3_MenuArrow___c_o *)v1;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields,
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
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4E06E41 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__2__);
    byte_4E06E41 = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !v6 )
    sub_1CE6958(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_31942708(v6, _9__2, 0);
}


void TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1CE6958(0, method);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  TerminalSceneComponent_o **v13; // x20
  QuestBoardListViewObject_o *FocusQuest; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8
  struct UIScrollView_o *scrollView; // x8
  struct UIProgressBar_o *verticalScrollBar; // x23
  System_String_o *v25; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v27; // x0
  CommonUI_o *v28; // x22
  UnityEngine_Vector2_o TUTORIAL_QUEST_ARROW_POS_FS; // kr00_8
  TerminalSceneComponent_o *v30; // x8
  float x; // s14
  float y; // s15
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v37; // x23
  struct ScrTerminalListTop_o *v38; // x21
  System_Action_o *v39; // x20
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  UnityEngine_Rect_o TUTORIAL_QUEST_ARROW_RECT_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v47; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4E06E47 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_GameObjectExtensions_RemoveComponent_Collider___);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__0__);
    sub_1CE6700(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__1__);
    sub_1CE6700(&TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_TypeInfo);
    sub_1CE6700(&StringLiteral_13742/*"TUTORIAL_MESSAGE_TERMINAL_QUEST3"*/);
    byte_4E06E47 = 1;
  }
  v4 = sub_1CE694C(TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_22;
  *(_QWORD *)(v4 + 16) = that;
  v13 = (TerminalSceneComponent_o **)(v4 + 16);
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_22;
  mFG = *(TerminalSceneComponent_o **)(*(_QWORD *)(v4 + 16) + 256LL);
  if ( !mFG )
    goto LABEL_22;
  FocusQuest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mFG, 0);
  *(_QWORD *)(v4 + 24) = FocusQuest;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v4 + 24), (int32_t)FocusQuest, v15, v16, v17, v18, v19, v20);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  mFG = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13742/*"TUTORIAL_MESSAGE_TERMINAL_QUEST3"*/, 0);
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
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0);
  GameObjectExtensions__RemoveComponent_object_(
    gameObject,
    (const MethodInfo_325D7E0 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mBG;
  if ( !mFG )
    goto LABEL_22;
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0);
  GameObjectExtensions__RemoveComponent_object_(
    v27,
    (const MethodInfo_325D7E0 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v13 )
    goto LABEL_22;
  v28 = (CommonUI_o *)mFG;
  TUTORIAL_QUEST_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(*v13, 0);
  mFG = *v13;
  if ( !*v13 )
    goto LABEL_22;
  TUTORIAL_QUEST_ARROW_RECT_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(mFG, 0);
  v30 = *v13;
  if ( !*v13 )
    goto LABEL_22;
  x = v30->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x;
  y = v30->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.y;
  m_XMin = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_XMin;
  m_YMin = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_YMin;
  m_Width = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_Width;
  m_Height = TUTORIAL_QUEST_ARROW_RECT_FS.fields.m_Height;
  v37 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__0__,
    0);
  if ( !v28 )
    goto LABEL_22;
  v47.fields.m_XMin = m_XMin;
  v47.fields.m_YMin = m_YMin;
  v47.fields.m_Width = m_Width;
  v47.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v28,
    v25,
    TUTORIAL_QUEST_ARROW_POS_FS,
    v47,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v37,
    0);
  if ( !*v13
    || (v38 = (*v13)->fields.mTerminalList,
        v39 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo),
        System_Action___ctor(
          v39,
          (Il2CppObject *)v4,
          Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0),
        !v38) )
  {
LABEL_22:
    sub_1CE6958(mFG, v6);
  }
  v38->fields.mQuestClickAct = v39;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v38->fields.mQuestClickAct, (int32_t)v39, v40, v41, v42, v43, v44, v45);
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
  if ( (byte_4E06E48 & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
    byte_4E06E48 = 1;
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
                                                                                            (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0 )
  {
LABEL_12:
    sub_1CE6958(this, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
}


void TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4E06E49 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__2__);
    byte_4E06E49 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !v6 )
    sub_1CE6958(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_31942708(v6, _9__2, 0);
}


void TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1CE6958(0, method);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  SrcSpotBasePrefab_o *FocusSpot; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  Il2CppObject *Instance; // x21
  UnityEngine_Vector2_o TUTORIAL_SPOT_ARROW_POS4_FS; // kr00_8
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v27; // x22
  struct ScrTerminalMap_o *v28; // x21
  System_Action_o *v29; // x19
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  UnityEngine_Rect_o TUTORIAL_SPOT_ARROW_RECT4_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v37; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4E06E45 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__0__);
    sub_1CE6700(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__1__);
    sub_1CE6700(&TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_TypeInfo);
    byte_4E06E45 = 1;
  }
  v5 = sub_1CE694C(TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 24) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_10;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_10;
  FocusSpot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0);
  *(_QWORD *)(v5 + 16) = FocusSpot;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)FocusSpot, v15, v16, v17, v18, v19, v20);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  TUTORIAL_SPOT_ARROW_POS4_FS = TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_POS4_FS(that, 0);
  TUTORIAL_SPOT_ARROW_RECT4_FS = TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_RECT4_FS(that, 0);
  m_XMin = TUTORIAL_SPOT_ARROW_RECT4_FS.fields.m_XMin;
  m_YMin = TUTORIAL_SPOT_ARROW_RECT4_FS.fields.m_YMin;
  m_Width = TUTORIAL_SPOT_ARROW_RECT4_FS.fields.m_Width;
  m_Height = TUTORIAL_SPOT_ARROW_RECT4_FS.fields.m_Height;
  v27 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
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
        v29 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo),
        System_Action___ctor(
          v29,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0),
        !v28) )
  {
LABEL_10:
    sub_1CE6958(mTerminalMap, v7);
  }
  v28->fields.mSpotClickAct = v29;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v28->fields.mSpotClickAct, (int32_t)v29, v30, v31, v32, v33, v34, v35);
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
      sub_1CE6958(that, that);
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
    sub_1CE6958(0, method);
  SrcSpotBasePrefab__SetBtnColliderEnable(focus_spot, 1, 0);
}


void TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0___begin_b__1(
        TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4E06E46 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__2__);
    byte_4E06E46 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !v6 )
    sub_1CE6958(Instance, v4);
  CommonUI__CloseTutorialArrowMark(v6, _9__2, 0);
}


void TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial4_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1CE6958(this, method);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  TerminalSceneComponent_o **v13; // x21
  CommonUI_o *v14; // x20
  UnityEngine_Vector2_o TUTORIAL_COMBINE_ARROW_POS_FS; // kr00_8
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v20; // x21
  Il2CppObject *v21; // x22
  struct TerminalSceneComponent_StateTutorial5_CombineArrow___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Action_o *v29; // x20
  UnityEngine_Rect_o TUTORIAL_COMBINE_ARROW_RECT_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v31; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4E06E4D & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__begin_b__0_0__);
    sub_1CE6700(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__1__);
    sub_1CE6700(&TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_TypeInfo);
    sub_1CE6700(&TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo);
    byte_4E06E4D = 1;
  }
  v4 = sub_1CE694C(TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_14;
  *(_QWORD *)(v4 + 16) = that;
  v13 = (TerminalSceneComponent_o **)(v4 + 16);
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  Instance = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_14;
  v14 = (CommonUI_o *)Instance;
  TUTORIAL_COMBINE_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_COMBINE_ARROW_POS_FS(*v13, 0);
  Instance = *v13;
  if ( !*v13 )
    goto LABEL_14;
  TUTORIAL_COMBINE_ARROW_RECT_FS = TerminalSceneComponent__get_TUTORIAL_COMBINE_ARROW_RECT_FS(Instance, 0);
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
  v20 = *(System_Action_o **)(*(_QWORD *)&Instance->fields.TUTORIAL_MENU_ARROW_POS2 + 8LL);
  if ( !v20 )
  {
    if ( !LODWORD(Instance->fields.OnResumeFromChapterStart) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo;
    }
    v21 = **(Il2CppObject ***)&Instance->fields.TUTORIAL_MENU_ARROW_POS2;
    v20 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(v20, v21, Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__begin_b__0_0__, 0);
    static_fields = TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = v20;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&static_fields->__9__0_0, (int32_t)v20, v23, v24, v25, v26, v27, v28);
  }
  if ( !v14 )
LABEL_14:
    sub_1CE6958(Instance, v6);
  v31.fields.m_XMin = m_XMin;
  v31.fields.m_YMin = m_YMin;
  v31.fields.m_Width = m_Width;
  v31.fields.m_Height = m_Height;
  CommonUI__OpenTutorialArrowMark(v14, TUTORIAL_COMBINE_ARROW_POS_FS, 0.0, v31, v20, 0);
  v29 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__1__,
    0);
  MainMenuBar__SetDispBtnAct(3, v29, 0);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E06E4E & 1) == 0 )
  {
    sub_1CE6700(&TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo);
    byte_4E06E4E = 1;
  }
  v1 = (Il2CppObject *)sub_1CE694C(TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial5_CombineArrow___c_o *)v1;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields,
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
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4E06E4F & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__2__);
    byte_4E06E4F = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !v6 )
    sub_1CE6958(Instance, v4);
  CommonUI__CloseTutorialArrowMark(v6, _9__2, 0);
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
    sub_1CE6958(that, method);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  TerminalSceneComponent_o **v13; // x22
  Il2CppObject *Instance; // x20
  System_String_o *v15; // x21
  UnityEngine_Vector2_o TUTORIAL_MENU_ARROW_POS2_FS; // kr00_8
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v21; // x22
  Il2CppObject *v22; // x23
  struct TerminalSceneComponent_StateTutorial5_MenuArrow___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_Action_o *v30; // x20
  UnityEngine_Rect_o TUTORIAL_MENU_ARROW_RECT_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v32; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4E06E4A & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__begin_b__0_0__);
    sub_1CE6700(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__1__);
    sub_1CE6700(&TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_TypeInfo);
    sub_1CE6700(&TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo);
    sub_1CE6700(&StringLiteral_13720/*"TUTORIAL_MESSAGE_COMBINE1"*/);
    byte_4E06E4A = 1;
  }
  v4 = sub_1CE694C(TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_16;
  *(_QWORD *)(v4 + 16) = that;
  v13 = (TerminalSceneComponent_o **)(v4 + 16);
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_13720/*"TUTORIAL_MESSAGE_COMBINE1"*/, 0);
  if ( !*v13 )
    goto LABEL_16;
  v15 = v5;
  TUTORIAL_MENU_ARROW_POS2_FS = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_POS2_FS(*v13, 0);
  v5 = (System_String_o *)*v13;
  if ( !*v13 )
    goto LABEL_16;
  TUTORIAL_MENU_ARROW_RECT_FS = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_RECT_FS(
                                  (TerminalSceneComponent_o *)v5,
                                  0);
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
  v21 = *(System_Action_o **)(*(_QWORD *)&v5[7].fields + 8LL);
  if ( !v21 )
  {
    if ( !LODWORD(v5[9].monitor) )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = (System_String_o *)TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo;
    }
    v22 = **(Il2CppObject ***)&v5[7].fields;
    v21 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(v21, v22, Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__begin_b__0_0__, 0);
    static_fields = TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = v21;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&static_fields->__9__0_0, (int32_t)v21, v24, v25, v26, v27, v28, v29);
  }
  if ( !Instance )
LABEL_16:
    sub_1CE6958(v5, v6);
  v32.fields.m_XMin = m_XMin;
  v32.fields.m_YMin = m_YMin;
  v32.fields.m_Width = m_Width;
  v32.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    (CommonUI_o *)Instance,
    v15,
    TUTORIAL_MENU_ARROW_POS2_FS,
    v32,
    0.0,
    (UnityEngine_Vector2_o)0xC224000000000000LL,
    -1,
    v21,
    0);
  v30 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__1__,
    0);
  MainMenuBar__SetMenuBtnAct(v30, 0);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E06E4B & 1) == 0 )
  {
    sub_1CE6700(&TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo);
    byte_4E06E4B = 1;
  }
  v1 = (Il2CppObject *)sub_1CE694C(TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial5_MenuArrow___c_o *)v1;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields,
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
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4E06E4C & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__2__);
    byte_4E06E4C = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0);
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !v6 )
    sub_1CE6958(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_31942708(v6, _9__2, 0);
}


void TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1CE6958(0, method);
  TerminalSceneComponent__SetState(that, 10, 0);
}


void TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__269___ctor(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__269_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__269__MoveNext(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__269_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v5; // x21
  UnityEngine_WaitUntil_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  bool result; // w0
  ChainableActionBase_o *openCampaignDirectBonus; // x0

  if ( (byte_4E06E7C & 1) == 0 )
  {
    sub_1CE6700(&System_Func_bool__TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent__CoWaitBlankEarthActionEnd_b__269_0__);
    sub_1CE6700(&UnityEngine_WaitUntil_TypeInfo);
    byte_4E06E7C = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    openCampaignDirectBonus = (ChainableActionBase_o *)this->fields.openCampaignDirectBonus;
    this->fields.__1__state = -1;
    if ( !openCampaignDirectBonus )
      sub_1CE6958(0, method);
    ChainableActionBase__Execute(openCampaignDirectBonus, 0);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v5 = (System_Func_bool__o *)sub_1CE694C(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v5, _4__this, Method_TerminalSceneComponent__CoWaitBlankEarthActionEnd_b__269_0__, 0);
    v6 = (UnityEngine_WaitUntil_o *)sub_1CE694C(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v6, v5, 0);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, (int32_t)v6, v7, v8, v9, v10, v11, v12);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__269__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__269_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__269__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__269_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1CE6714(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1CE694C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1CE6714(&Method_TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__269_System_Collections_IEnumerator_Reset__);
  sub_1CE6828(v3, v4);
}


Il2CppObject *TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__269__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__269_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__269__System_IDisposable_Dispose(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__269_o *this,
        const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__268___ctor(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__268_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__268__MoveNext(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__268_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v5; // x21
  UnityEngine_WaitUntil_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  bool result; // w0
  ChainableActionBase_o *openCampaignDirectBonus; // x0

  if ( (byte_4E06E7D & 1) == 0 )
  {
    sub_1CE6700(&System_Func_bool__TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_b__268_0__);
    sub_1CE6700(&UnityEngine_WaitUntil_TypeInfo);
    byte_4E06E7D = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    openCampaignDirectBonus = (ChainableActionBase_o *)this->fields.openCampaignDirectBonus;
    this->fields.__1__state = -1;
    if ( !openCampaignDirectBonus )
      sub_1CE6958(0, method);
    ChainableActionBase__Execute(openCampaignDirectBonus, 0);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v5 = (System_Func_bool__o *)sub_1CE694C(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v5, _4__this, Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_b__268_0__, 0);
    v6 = (UnityEngine_WaitUntil_o *)sub_1CE694C(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v6, v5, 0);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, (int32_t)v6, v7, v8, v9, v10, v11, v12);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__268__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__268_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__268__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__268_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1CE6714(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1CE694C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1CE6714(&Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__268_System_Collections_IEnumerator_Reset__);
  sub_1CE6828(v3, v4);
}


Il2CppObject *TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__268__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__268_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__268__System_IDisposable_Dispose(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__268_o *this,
        const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent__LoadAsync_d__187___ctor(
        TerminalSceneComponent__LoadAsync_d__187_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool TerminalSceneComponent__LoadAsync_d__187__MoveNext(
        TerminalSceneComponent__LoadAsync_d__187_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent__LoadAsync_d__187_o *v2; // x19
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
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  bool result; // w0
  struct System_Action_o *callback; // x8

  v2 = this;
  if ( (byte_4E06E7E & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&AtlasManager_TypeInfo);
    sub_1CE6700(&System_Func_bool__TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass187_0__LoadAsync_b__0__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass187_0__LoadAsync_b__10__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass187_0__LoadAsync_b__11__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass187_0__LoadAsync_b__12__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass187_0__LoadAsync_b__13__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass187_0__LoadAsync_b__1__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass187_0__LoadAsync_b__2__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass187_0__LoadAsync_b__3__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass187_0__LoadAsync_b__4__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass187_0__LoadAsync_b__5__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass187_0__LoadAsync_b__6__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass187_0__LoadAsync_b__7__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass187_0__LoadAsync_b__8__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass187_0__LoadAsync_b__9__);
    sub_1CE6700(&TerminalSceneComponent___c__DisplayClass187_0_TypeInfo);
    this = (TerminalSceneComponent__LoadAsync_d__187_o *)sub_1CE6700(&UnityEngine_WaitUntil_TypeInfo);
    byte_4E06E7E = 1;
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
  v5 = sub_1CE694C(TerminalSceneComponent___c__DisplayClass187_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_23;
  *(_DWORD *)(v5 + 19) = 0;
  *(_BYTE *)(v5 + 23) = 0;
  *(_DWORD *)(v5 + 24) = 0;
  *(_WORD *)(v5 + 16) = 256;
  *(_BYTE *)(v5 + 18) = 1;
  *(_BYTE *)(v5 + 28) = 1;
  usd = v2->fields.usd;
  v7 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass187_0__LoadAsync_b__0__,
    0);
  if ( !_4__this )
    goto LABEL_23;
  TerminalSceneComponent__SetupStandServant(_4__this, usd, 0, v7, 0);
  this = (TerminalSceneComponent__LoadAsync_d__187_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !this )
    goto LABEL_23;
  if ( !AtlasManager__isLoadedSkinData((AtlasManager_o *)this, 4, 0) )
  {
    *(_BYTE *)(v5 + 17) = 0;
    v8 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      (Il2CppObject *)v5,
      Method_TerminalSceneComponent___c__DisplayClass187_0__LoadAsync_b__1__,
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
  this = (TerminalSceneComponent__LoadAsync_d__187_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v10 = _4__this->fields._TransitionInfo_k__BackingField;
  if ( !v10
    || (v11 = (SoundManager_o *)this,
        voiceAssetName = v10->fields.voiceAssetName,
        v13 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo),
        System_Action___ctor(
          v13,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent___c__DisplayClass187_0__LoadAsync_b__2__,
          0),
        !v11) )
  {
LABEL_23:
    sub_1CE6958(this, method);
  }
  SoundManager__LoadAudioAssetStorage(v11, voiceAssetName, v13, 1, 0);
LABEL_17:
  v14 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass187_0__LoadAsync_b__3__,
    0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadBanner(v14, 11, 0);
  v15 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass187_0__LoadAsync_b__4__,
    0);
  AtlasManager__LoadFaceAtlas(v15, 11, 0);
  v16 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass187_0__LoadAsync_b__5__,
    0);
  AtlasManager__LoadEquipFace(v16, 11, 0);
  v17 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass187_0__LoadAsync_b__6__,
    0);
  AtlasManager__LoadFriendshipExceed(v17, 11, 0);
  v18 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass187_0__LoadAsync_b__7__,
    0);
  AtlasManager__LoadCommandCode(v18, 11, 0);
  v19 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass187_0__LoadAsync_b__8__,
    0);
  AtlasManager__LoadCommandCodeMini(v19, 11, 0);
  v20 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass187_0__LoadAsync_b__9__,
    0);
  AtlasManager__LoadEventAtlas(v20, 11, 0);
  v21 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass187_0__LoadAsync_b__10__,
    0);
  AtlasManager__LoadEventUI(v21, 11, 0);
  v22 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass187_0__LoadAsync_b__11__,
    0);
  AtlasManager__LoadCharaGraphOptionAtlas(v22, 11, 0);
  v23 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass187_0__LoadAsync_b__12__,
    0);
  AtlasManager__LoadPartyOrganizationAtlas(v23, 11, 0);
  v24 = (System_Func_bool__o *)sub_1CE694C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v24,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass187_0__LoadAsync_b__13__,
    0);
  v25 = (UnityEngine_WaitUntil_o *)sub_1CE694C(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v25, v24, 0);
  v2->fields.__2__current = (Il2CppObject *)v25;
  p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
  sub_1CE66A4(p__2__current, (int32_t)v25, v27, v28, v29, v30, v31, v32);
  result = 1;
  LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
  return result;
}


Il2CppObject *TerminalSceneComponent__LoadAsync_d__187__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__LoadAsync_d__187_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TerminalSceneComponent__LoadAsync_d__187__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__LoadAsync_d__187_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1CE6714(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1CE694C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1CE6714(&Method_TerminalSceneComponent__LoadAsync_d__187_System_Collections_IEnumerator_Reset__);
  sub_1CE6828(v3, v4);
}


Il2CppObject *TerminalSceneComponent__LoadAsync_d__187__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__LoadAsync_d__187_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TerminalSceneComponent__LoadAsync_d__187__System_IDisposable_Dispose(
        TerminalSceneComponent__LoadAsync_d__187_o *this,
        const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__205___ctor(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__205_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__205__MoveNext(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__205_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  TerminalSceneComponent___c_c *v4; // x0
  System_Func_bool__o *_9__205_0; // x20
  Il2CppObject *v6; // x21
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  UnityEngine_WaitWhile_o *v14; // x21
  Il2CppObject **p__2__current; // x19
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  bool result; // w0

  if ( (byte_4E06E7F & 1) == 0 )
  {
    sub_1CE6700(&System_Func_bool__TypeInfo);
    sub_1CE6700(&SoundManager_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent___c__WaitStopSEQuestPhaseRewardEffect_b__205_0__);
    sub_1CE6700(&TerminalSceneComponent___c_TypeInfo);
    sub_1CE6700(&UnityEngine_WaitWhile_TypeInfo);
    byte_4E06E7F = 1;
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
  _9__205_0 = v4->static_fields->__9__205_0;
  if ( !_9__205_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = TerminalSceneComponent___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__205_0 = (System_Func_bool__o *)sub_1CE694C(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      _9__205_0,
      v6,
      Method_TerminalSceneComponent___c__WaitStopSEQuestPhaseRewardEffect_b__205_0__,
      0);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__205_0 = _9__205_0;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__205_0,
      (int32_t)_9__205_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  v14 = (UnityEngine_WaitWhile_o *)sub_1CE694C(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v14, _9__205_0, 0);
  this->fields.__2__current = (Il2CppObject *)v14;
  p__2__current = &this->fields.__2__current;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)v14, v16, v17, v18, v19, v20, v21);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__205__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__205_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__205__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__205_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1CE6714(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1CE694C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1CE6714(&Method_TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__205_System_Collections_IEnumerator_Reset__);
  sub_1CE6828(v3, v4);
}


Il2CppObject *TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__205__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__205_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__205__System_IDisposable_Dispose(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__205_o *this,
        const MethodInfo *method)
{
  ;
}


void TerminalSceneComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E06E50 & 1) == 0 )
  {
    sub_1CE6700(&TerminalSceneComponent___c_TypeInfo);
    byte_4E06E50 = 1;
  }
  v1 = (Il2CppObject *)sub_1CE694C(TerminalSceneComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TerminalSceneComponent___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent___c_o *)v1;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)TerminalSceneComponent___c_TypeInfo->static_fields,
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


void TerminalSceneComponent___c___CheckOpenCampaignDirectBonus_b__267_0(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v6; // x0

  if ( (byte_4E06E5F & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E06E5F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4DFE667 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFE667 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    sub_1CE6958(v6, v4);
  CommonUI__OpenCampaignDirectBonus(
    (CommonUI_o *)Instance,
    v6->static_fields->_CampaignDirectBonus_k__BackingField,
    action,
    0);
}


void TerminalSceneComponent___c___CheckOpenCampaignDirectBonus_b__267_1(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v6; // x0

  if ( (byte_4E06E60 & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E06E60 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4DFE667 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFE667 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    sub_1CE6958(v6, v4);
  CommonUI__OpenCampaignDirectBonusWithTransitionDialog(
    (CommonUI_o *)Instance,
    v6->static_fields->_CampaignDirectBonus_k__BackingField,
    action,
    0);
}


void TerminalSceneComponent___c___CheckRewardPopupChain_b__265_2(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4E06E5D & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E06E5D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1CE6958(0, v5);
  CommonUI__StartFriendPointNotification((CommonUI_o *)Instance, action, 0);
}


void TerminalSceneComponent___c___CheckRewardPopupChain_b__265_6(
        TerminalSceneComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4E06E5E & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E06E5E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ClearLoginResultData((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (CommonUI__ReleaseFortuneBonusAssetData((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (CommonUI__ReleaseSelectBonusDialogAsset((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1CE6958(Instance, v3);
  }
  CommonUI__ReleaseLoginBonusWithTransitionDialogAssetData((CommonUI_o *)Instance, 0);
}


void TerminalSceneComponent___c___Fadein_MapDisp_Start_b__209_0(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4E06E53 & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E06E53 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1CE6958(0, v5);
  CommonUI__StartLoginAndCampaignBonus((CommonUI_o *)Instance, action, 0, 201, 0);
}


void TerminalSceneComponent___c___Fadein_MapDisp_Start_b__209_1(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20

  if ( (byte_4E06E54 & 1) == 0 )
  {
    sub_1CE6700(&AvalonSceneManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E06E54 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6
    || (CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (CommonUI__ClearLoginResultData((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (CommonUI__ReleaseFortuneBonusAssetData((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1CE6958(Instance, v5);
  }
  CommonUI__ReleaseLoginBonusWithTransitionDialogAssetData((CommonUI_o *)Instance, 0);
}


void TerminalSceneComponent___c___Fadein_MapDisp_Start_b__209_6(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20

  if ( (byte_4E06E52 & 1) == 0 )
  {
    sub_1CE6700(&AvalonSceneManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E06E52 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6 )
    sub_1CE6958(Instance, v5);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0);
}


bool TerminalSceneComponent___c___IsValidGrandBgm_b__223_0(
        TerminalSceneComponent___c_o *this,
        int32_t n,
        const MethodInfo *method)
{
  if ( (byte_4E06E58 & 1) == 0 )
  {
    sub_1CE6700(&CondType_TypeInfo);
    byte_4E06E58 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(113, n, 0, 0, 0, 0);
}


ShopEntity_o *TerminalSceneComponent___c___OpenExchangeDialogue_b__273_0(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4E06E61 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1CE6700(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E06E61 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0 )
  {
    sub_1CE6958(Instance, v5);
  }
  return (ShopEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           x,
                           (const MethodInfo_34E925C *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
}


bool TerminalSceneComponent___c___OpenExchangeDialogue_b__273_1(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1CE6958(this, 0);
  return ShopEntity__IsAfterTheFreeShopReleaseDate(x, 0);
}


bool TerminalSceneComponent___c___OpenExchangeDialogue_b__273_2(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  bool isQuestNotClearItemClosed; // w8
  bool result; // w0

  if ( !x )
    sub_1CE6958(this, 0);
  if ( !ShopEntity__isQuestNotClearItemClosed(x, 0, 0) )
    return 1;
  isQuestNotClearItemClosed = ShopEntity__isQuestNotClearItemClosed(x, 0, 0);
  result = 0;
  if ( isQuestNotClearItemClosed )
    return ShopEntity__IsSoldOut(x, 0);
  return result;
}


int32_t TerminalSceneComponent___c___OpenExchangeDialogue_b__273_4(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1CE6958(this, 0);
  return x->fields.id;
}


ShopEntity_o *TerminalSceneComponent___c___OpenExchangeDialogue_b__273_5(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4E06E62 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1CE6700(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E06E62 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0 )
  {
    sub_1CE6958(Instance, v5);
  }
  return (ShopEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           x,
                           (const MethodInfo_34E925C *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
}


int32_t TerminalSceneComponent___c___OpenExchangeDialogue_b__273_6(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1CE6958(this, 0);
  return ShopEntity__GetPrice(x, 0);
}


void TerminalSceneComponent___c___PlayAutoExecuteQuest_b__242_3(
        TerminalSceneComponent___c_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  int32_t WarId_k__BackingField; // w19
  int32_t QuestId_k__BackingField; // w20
  TerminalSceneComponent___c_c *v5; // x8
  int32_t PhaseCnt_k__BackingField; // w23
  ScriptManager_CallbackFunc_o *_9__242_4; // x21
  Il2CppObject *v8; // x22
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4E06E5A & 1) == 0 )
  {
    sub_1CE6700(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&ScriptManager_TypeInfo);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__242_4__);
    sub_1CE6700(&TerminalSceneComponent___c_TypeInfo);
    byte_4E06E5A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4DFEC9C )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFEC9C = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v2->static_fields->_WarId_k__BackingField;
  if ( !byte_4DFE737 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4DFE737 = 1;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v2->static_fields->_QuestId_k__BackingField;
  if ( !byte_4DFE736 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4DFE736 = 1;
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
  _9__242_4 = v5->static_fields->__9__242_4;
  if ( !_9__242_4 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = TerminalSceneComponent___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__242_4 = (ScriptManager_CallbackFunc_o *)sub_1CE694C(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(
      _9__242_4,
      v8,
      Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__242_4__,
      0);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__242_4 = _9__242_4;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__242_4,
      (int32_t)_9__242_4,
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
    _9__242_4,
    0,
    0,
    -1,
    0,
    0,
    0,
    0);
}


void TerminalSceneComponent___c___PlayAutoExecuteQuest_b__242_4(
        TerminalSceneComponent___c_o *this,
        bool isExit,
        const MethodInfo *method)
{
  TerminalSceneComponent___c_c *v3; // x0
  NetworkManager_ResultCallbackFunc_o *_9__242_5; // x19
  Il2CppObject *v5; // x20
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  Il2CppObject *Request_object; // x19
  TerminalPramsManager_c *v14; // x0
  int32_t QuestId_k__BackingField; // w21
  int32_t PhaseCnt_k__BackingField; // w20
  System_Int32_array *SelectRouteArray; // x0
  __int64 v18; // x1

  if ( (byte_4E06E5B & 1) == 0 )
  {
    sub_1CE6700(&Method_NetworkManager_getRequest_BattleScenarioRequest___);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1CE6700(&ScriptManager_TypeInfo);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__242_5__);
    sub_1CE6700(&TerminalSceneComponent___c_TypeInfo);
    byte_4E06E5B = 1;
  }
  v3 = TerminalSceneComponent___c_TypeInfo;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v3 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__242_5 = v3->static_fields->__9__242_5;
  if ( !_9__242_5 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = TerminalSceneComponent___c_TypeInfo;
    }
    v5 = (Il2CppObject *)v3->static_fields->__9;
    _9__242_5 = (NetworkManager_ResultCallbackFunc_o *)sub_1CE694C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__242_5,
      v5,
      Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__242_5__,
      0);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__242_5 = _9__242_5;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__242_5,
      (int32_t)_9__242_5,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__242_5,
                     (const MethodInfo_328F954 *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4DFE737 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFE737 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v14->static_fields->_QuestId_k__BackingField;
  if ( !byte_4DFE736 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4DFE736 = 1;
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v14->static_fields->_PhaseCnt_k__BackingField;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  SelectRouteArray = ScriptManager__GetSelectRouteArray(0);
  if ( !Request_object )
    sub_1CE6958(SelectRouteArray, v18);
  BattleScenarioRequest__beginRequest(
    (BattleScenarioRequest_o *)Request_object,
    QuestId_k__BackingField,
    PhaseCnt_k__BackingField + 1,
    SelectRouteArray,
    0);
}


void TerminalSceneComponent___c___PlayAutoExecuteQuest_b__242_5(
        TerminalSceneComponent___c_o *this,
        System_String_o *jsonStr,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  System_Object_array *v5; // x19
  TerminalPramsManager_c *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4E06E5C & 1) == 0 )
  {
    sub_1CE6700(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
    sub_1CE6700(&JsonManager_TypeInfo);
    sub_1CE6700(&ScriptManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&StringLiteral_15954/*"["*/);
    sub_1CE6700(&StringLiteral_16207/*"]"*/);
    byte_4E06E5C = 1;
  }
  v4 = (Il2CppObject *)System_String__Concat_65161092(
                         (System_String_o *)StringLiteral_15954/*"["*/,
                         jsonStr,
                         (System_String_o *)StringLiteral_16207/*"]"*/,
                         0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v5 = JsonManager__DeserializeArray_object_(
         v4,
         (const MethodInfo_3273D28 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v5, 1, 0);
  if ( !byte_4DFF129 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFF129 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1CE6958(0, v8);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


void TerminalSceneComponent___c___RebootToNetworkError_b__229_0(
        TerminalSceneComponent___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4E06E59 & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4E06E59 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1CE6958(0, v4);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0);
}


void TerminalSceneComponent___c___StartWindowMessage_b__211_1(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20

  if ( (byte_4E06E55 & 1) == 0 )
  {
    sub_1CE6700(&AvalonSceneManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E06E55 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6 )
    sub_1CE6958(Instance, v5);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0);
}


void TerminalSceneComponent___c___StartWindowMessage_b__211_2(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  System_String_o *QuestWindowMessage_k__BackingField; // x20

  if ( (byte_4E06E56 & 1) == 0 )
  {
    sub_1CE6700(&ScriptManager_TypeInfo);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E06E56 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E06E3B )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E06E3B = 1;
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


void TerminalSceneComponent___c___StartWindowMessage_b__211_3(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  __int64 v5; // x1
  Il2CppObject *v6; // x20
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_4E06E57 & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E06E57 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E0053E )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E0053E = 1;
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
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0, 0, 0);
      goto LABEL_22;
    }
LABEL_23:
    sub_1CE6958(Instance, v5);
  }
  v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E06F20 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E06F20 = 1;
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
    (Il2CppObject *)Instance[1].fields.sendData[7].monitor,
    0);
LABEL_22:
  ActionExtensions__Call(action, 0);
}


bool TerminalSceneComponent___c___WaitStopSEQuestPhaseRewardEffect_b__205_0(
        TerminalSceneComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4E06E51 & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
    byte_4E06E51 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
  if ( !Instance )
    sub_1CE6958(0, v3);
  return RewardMiniPopupExecutor__IsBusy((RewardMiniPopupExecutor_o *)Instance, 0);
}


System_String_o *TerminalSceneComponent___c___callbackTopLogin_b__227_0(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0);
}


System_String_o *TerminalSceneComponent___c___callbackTopLogin_b__227_1(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0);
}


void TerminalSceneComponent___c__DisplayClass182_0___ctor(
        TerminalSceneComponent___c__DisplayClass182_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass182_0___SetEarthView_b__0(
        TerminalSceneComponent___c__DisplayClass182_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass182_0_o *v4; // x19
  struct TerminalSceneComponent_o *_4__this; // x21
  Il2CppObject *Object_object__52317288; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct TerminalSceneComponent_o *v13; // x8
  struct TerminalSceneComponent_o *v14; // x20
  Il2CppObject *ComponentInChildren_object; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  v4 = this;
  if ( (byte_4E06E63 & 1) == 0 )
  {
    sub_1CE6700(&Method_AssetData_GetObject_GameObject____79905008);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponentInChildren_BaseCore___);
    sub_1CE6700(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass182_0_o *)sub_1CE6700(&StringLiteral_4760/*"CorePrefab"*/);
    byte_4E06E63 = 1;
  }
  if ( !data )
    goto LABEL_11;
  _4__this = v4->fields.__4__this;
  Object_object__52317288 = AssetData__GetObject_object__52317288(
                              data,
                              (System_String_o *)StringLiteral_4760/*"CorePrefab"*/,
                              (const MethodInfo_31E4C68 *)Method_AssetData_GetObject_GameObject____79905008);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (TerminalSceneComponent___c__DisplayClass182_0_o *)UnityEngine_Object__Instantiate_object_(
                                                              Object_object__52317288,
                                                              (const MethodInfo_3290C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !_4__this
    || (_4__this->fields.mEarthCoreObj = (struct UnityEngine_GameObject_o *)this,
        sub_1CE66A4(
          (GrandQuestFolderBoardItem_o *)&_4__this->fields.mEarthCoreObj,
          (int32_t)this,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12),
        (v13 = v4->fields.__4__this) == 0)
    || (GameObjectExtensions__SafeSetParent_37166960(v13->fields.mEarthCoreObj, v13->fields.mUiRoot, 0),
        (v14 = v4->fields.__4__this) == 0)
    || (this = (TerminalSceneComponent___c__DisplayClass182_0_o *)v14->fields.mEarthCoreObj) == 0 )
  {
LABEL_11:
    sub_1CE6958(this, data);
  }
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)this,
                                 (const MethodInfo_325C0A0 *)Method_UnityEngine_GameObject_GetComponentInChildren_BaseCore___);
  v14->fields.mEarthCore = (struct BaseCore_o *)ComponentInChildren_object;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&v14->fields.mEarthCore,
    (int32_t)ComponentInChildren_object,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  ActionExtensions__Call(v4->fields.callback, 0);
}


void TerminalSceneComponent___c__DisplayClass183_0___ctor(
        TerminalSceneComponent___c__DisplayClass183_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass183_0___RegenerateEarthView_b__0(
        TerminalSceneComponent___c__DisplayClass183_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass183_0_o *v2; // x19
  struct TerminalSceneComponent_o *_4__this; // x8
  struct BaseCore_o *mEarthCore; // x20
  System_Collections_Generic_List_MapControl_WarInfo__o *WarInfoAll_OrderReverse; // x21
  long double inited; // q0
  struct TerminalSceneComponent_o *v7; // x8
  System_Action_o *callback; // x0

  v2 = this;
  if ( (byte_4E06E64 & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonTemplate_QuestTree__get_Instance__);
    this = (TerminalSceneComponent___c__DisplayClass183_0_o *)sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E06E64 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  mEarthCore = _4__this->fields.mEarthCore;
  this = (TerminalSceneComponent___c__DisplayClass183_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
    goto LABEL_17;
  WarInfoAll_OrderReverse = QuestTree__GetWarInfoAll_OrderReverse((QuestTree_o *)this, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E01951 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E01951 = 1;
  }
  this = (TerminalSceneComponent___c__DisplayClass183_0_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass183_0_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !mEarthCore
    || (this = (TerminalSceneComponent___c__DisplayClass183_0_o *)((__int64 (__fastcall *)(struct BaseCore_o *, System_Collections_Generic_List_MapControl_WarInfo__o *, bool, const MethodInfo *, long double))mEarthCore->klass->vtable._8_Setup.methodPtr)(
                                                                    mEarthCore,
                                                                    WarInfoAll_OrderReverse,
                                                                    BYTE2(this[5].fields.callback->fields.method_info) == 0,
                                                                    mEarthCore->klass->vtable._8_Setup.method,
                                                                    inited),
        (v7 = v2->fields.__4__this) == 0)
    || (this = (TerminalSceneComponent___c__DisplayClass183_0_o *)v7->fields.mEarthCore) == 0 )
  {
LABEL_17:
    sub_1CE6958(this, method);
  }
  ((void (__fastcall *)(TerminalSceneComponent___c__DisplayClass183_0_o *, Il2CppClass *))this->klass[1]._1.declaringType)(
    this,
    this->klass[1]._1.parent);
  callback = v2->fields.callback;
  if ( callback )
    ActionExtensions__Call(callback, 0);
}


void TerminalSceneComponent___c__DisplayClass187_0___ctor(
        TerminalSceneComponent___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass187_0___LoadAsync_b__0(
        TerminalSceneComponent___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  this->fields.isSetupStandServant = 1;
}


void TerminalSceneComponent___c__DisplayClass187_0___LoadAsync_b__1(
        TerminalSceneComponent___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadUISkin = 1;
}


void TerminalSceneComponent___c__DisplayClass187_0___LoadAsync_b__10(
        TerminalSceneComponent___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadEventUI = 1;
}


void TerminalSceneComponent___c__DisplayClass187_0___LoadAsync_b__11(
        TerminalSceneComponent___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadCharaGraphOptionAtlas = 1;
}


void TerminalSceneComponent___c__DisplayClass187_0___LoadAsync_b__12(
        TerminalSceneComponent___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadPartyOrganizationAtlas = 1;
}


bool TerminalSceneComponent___c__DisplayClass187_0___LoadAsync_b__13(
        TerminalSceneComponent___c__DisplayClass187_0_o *this,
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


void TerminalSceneComponent___c__DisplayClass187_0___LoadAsync_b__2(
        TerminalSceneComponent___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadAudioAssetStorage = 1;
}


void TerminalSceneComponent___c__DisplayClass187_0___LoadAsync_b__3(
        TerminalSceneComponent___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadBanner = 1;
}


void TerminalSceneComponent___c__DisplayClass187_0___LoadAsync_b__4(
        TerminalSceneComponent___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadFaceAtlas = 1;
}


void TerminalSceneComponent___c__DisplayClass187_0___LoadAsync_b__5(
        TerminalSceneComponent___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadEquipFace = 1;
}


void TerminalSceneComponent___c__DisplayClass187_0___LoadAsync_b__6(
        TerminalSceneComponent___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadFriendshipExceed = 1;
}


void TerminalSceneComponent___c__DisplayClass187_0___LoadAsync_b__7(
        TerminalSceneComponent___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadCommandCode = 1;
}


void TerminalSceneComponent___c__DisplayClass187_0___LoadAsync_b__8(
        TerminalSceneComponent___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadCommandCodeMini = 1;
}


void TerminalSceneComponent___c__DisplayClass187_0___LoadAsync_b__9(
        TerminalSceneComponent___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadEventAtlas = 1;
}


void TerminalSceneComponent___c__DisplayClass200_0___ctor(
        TerminalSceneComponent___c__DisplayClass200_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass200_0___SetupStandServant_b__0(
        TerminalSceneComponent___c__DisplayClass200_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass200_0_o *v2; // x19
  struct TerminalSceneComponent_o *_4__this; // x8

  v2 = this;
  if ( this->fields.isSlideIn )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this || (this = (TerminalSceneComponent___c__DisplayClass200_0_o *)_4__this->fields.mTerminalServant) == 0 )
      sub_1CE6958(this, method);
    StandFigureSlideComponent__SlideIn((StandFigureSlideComponent_o *)this, 0, 0);
  }
  ActionExtensions__Call(v2->fields.endAction, 0);
}


void TerminalSceneComponent___c__DisplayClass200_0___SetupStandServant_b__1(
        TerminalSceneComponent___c__DisplayClass200_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass200_0_o *v2; // x19
  struct TerminalSceneComponent_o *_4__this; // x8
  struct TerminalSceneComponent_o *v4; // x8
  long double v5; // q0
  struct TerminalSceneComponent_o *v6; // x8
  struct StandFigureSlideComponent_o *mTerminalServant; // x9
  struct BaseCore_o *mEarthCore; // x8
  __int64 v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  UserServantEntity_o *NextStandServant; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
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
  if ( (byte_4E06E65 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass200_1__SetupStandServant_b__2__);
    this = (TerminalSceneComponent___c__DisplayClass200_0_o *)sub_1CE6700(&TerminalSceneComponent___c__DisplayClass200_1_TypeInfo);
    byte_4E06E65 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_54;
  this = (TerminalSceneComponent___c__DisplayClass200_0_o *)_4__this->fields.mTerminalServant;
  if ( !this )
    goto LABEL_54;
  if ( !BYTE1(this[1].fields.__4__this) )
  {
    this = (TerminalSceneComponent___c__DisplayClass200_0_o *)StandFigureSlideComponent__IsMoving(
                                                                (StandFigureSlideComponent_o *)this,
                                                                0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v4 = v2->fields.__4__this;
      if ( !v4 )
        goto LABEL_54;
      this = (TerminalSceneComponent___c__DisplayClass200_0_o *)v4->fields.mEarthCore;
      if ( !this )
        goto LABEL_54;
      if ( !BYTE1(this[3].fields.__4__this) )
      {
        *(float *)&v5 = ((float (__fastcall *)(TerminalSceneComponent___c__DisplayClass200_0_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
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
              v9 = sub_1CE694C(TerminalSceneComponent___c__DisplayClass200_1_TypeInfo);
              System_Object___ctor((Il2CppObject *)v9, 0);
              if ( v9 )
              {
                *(_QWORD *)(v9 + 24) = v2;
                sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)v2, v10, v11, v12, v13, v14, v15);
                this = (TerminalSceneComponent___c__DisplayClass200_0_o *)v2->fields.__4__this;
                if ( this )
                {
                  NextStandServant = TerminalSceneComponent__GetNextStandServant((TerminalSceneComponent_o *)this, 0);
                  *(_QWORD *)(v9 + 16) = NextStandServant;
                  sub_1CE66A4(
                    (GrandQuestFolderBoardItem_o *)(v9 + 16),
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
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                      inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    if ( !byte_4E06E36 )
                    {
                      sub_1CE6700(&TerminalPramsManager_TypeInfo);
                      byte_4E06E36 = 1;
                    }
                    this = (TerminalSceneComponent___c__DisplayClass200_0_o *)TerminalPramsManager_TypeInfo;
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    {
                      inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                      this = (TerminalSceneComponent___c__DisplayClass200_0_o *)TerminalPramsManager_TypeInfo;
                    }
                    BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x) = mStandSvtIdx != 0;
                    v26 = v2->fields.__4__this;
                    if ( v26 )
                    {
                      v27 = v26->fields.mEarthCore;
                      if ( !byte_4E01951 )
                      {
                        sub_1CE6700(&TerminalPramsManager_TypeInfo);
                        this = (TerminalSceneComponent___c__DisplayClass200_0_o *)TerminalPramsManager_TypeInfo;
                        byte_4E01951 = 1;
                      }
                      if ( !LODWORD(this[5].fields.__4__this) )
                      {
                        inited = j_il2cpp_runtime_class_init_0(this);
                        this = (TerminalSceneComponent___c__DisplayClass200_0_o *)TerminalPramsManager_TypeInfo;
                      }
                      if ( v27 )
                      {
                        this = (TerminalSceneComponent___c__DisplayClass200_0_o *)((__int64 (__fastcall *)(struct BaseCore_o *, bool, _QWORD, const MethodInfo *, long double))v27->klass->vtable._4_FocusInOut.methodPtr)(
                                                                                    v27,
                                                                                    BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x) == 0,
                                                                                    0,
                                                                                    v27->klass->vtable._4_FocusInOut.method,
                                                                                    inited);
                        v28 = v2->fields.__4__this;
                        if ( v28 )
                        {
                          v29 = v28->fields.mTerminalServant;
                          v30 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
                          System_Action___ctor(
                            v30,
                            (Il2CppObject *)v9,
                            Method_TerminalSceneComponent___c__DisplayClass200_1__SetupStandServant_b__2__,
                            0);
                          if ( v29 )
                          {
                            StandFigureSlideComponent__SlideOut(v29, v30, 0, 0);
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
              if ( !byte_4E06E36 )
              {
                sub_1CE6700(&TerminalPramsManager_TypeInfo);
                byte_4E06E36 = 1;
              }
              this = (TerminalSceneComponent___c__DisplayClass200_0_o *)TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                v5 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                this = (TerminalSceneComponent___c__DisplayClass200_0_o *)TerminalPramsManager_TypeInfo;
              }
              BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x) = 1;
              v31 = v2->fields.__4__this;
              if ( v31 )
              {
                v32 = v31->fields.mEarthCore;
                if ( !byte_4E01951 )
                {
                  sub_1CE6700(&TerminalPramsManager_TypeInfo);
                  this = (TerminalSceneComponent___c__DisplayClass200_0_o *)TerminalPramsManager_TypeInfo;
                  byte_4E01951 = 1;
                }
                if ( !LODWORD(this[5].fields.__4__this) )
                {
                  v5 = j_il2cpp_runtime_class_init_0(this);
                  this = (TerminalSceneComponent___c__DisplayClass200_0_o *)TerminalPramsManager_TypeInfo;
                }
                if ( v32 )
                {
                  this = (TerminalSceneComponent___c__DisplayClass200_0_o *)((__int64 (__fastcall *)(struct BaseCore_o *, bool, _QWORD, const MethodInfo *, long double))v32->klass->vtable._4_FocusInOut.methodPtr)(
                                                                              v32,
                                                                              BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x) == 0,
                                                                              0,
                                                                              v32->klass->vtable._4_FocusInOut.method,
                                                                              v5);
                  v33 = v2->fields.__4__this;
                  if ( v33 )
                  {
                    this = (TerminalSceneComponent___c__DisplayClass200_0_o *)v33->fields.mTerminalServant;
                    if ( this )
                    {
                      StandFigureSlideComponent__SlideIn((StandFigureSlideComponent_o *)this, 0, 0);
                      goto LABEL_53;
                    }
                  }
                }
              }
LABEL_54:
              sub_1CE6958(this, method);
            }
          }
        }
      }
    }
  }
}


void TerminalSceneComponent___c__DisplayClass200_1___ctor(
        TerminalSceneComponent___c__DisplayClass200_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass200_1___SetupStandServant_b__2(
        TerminalSceneComponent___c__DisplayClass200_1_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass200_1_o *v2; // x20
  struct TerminalSceneComponent___c__DisplayClass200_0_o *CS___8__locals1; // x8
  TerminalSceneComponent_o *_4__this; // x19
  UserServantEntity_o *usd; // x20

  v2 = this;
  if ( (byte_4E06E66 & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass200_1_o *)sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E06E66 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_12;
  _4__this = CS___8__locals1->fields.__4__this;
  usd = v2->fields._usd;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E01951 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E01951 = 1;
  }
  this = (TerminalSceneComponent___c__DisplayClass200_1_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass200_1_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !_4__this )
LABEL_12:
    sub_1CE6958(this, method);
  TerminalSceneComponent__SetupStandServant(_4__this, usd, BYTE2(this[5].fields.CS___8__locals1[2].monitor), 0, 0);
}


void TerminalSceneComponent___c__DisplayClass206_0___ctor(
        TerminalSceneComponent___c__DisplayClass206_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass206_0___coFadein_WorldDisp_b__0(
        TerminalSceneComponent___c__DisplayClass206_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAct, 0);
}


void TerminalSceneComponent___c__DisplayClass206_0___coFadein_WorldDisp_b__1(
        TerminalSceneComponent___c__DisplayClass206_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass206_0_o *v2; // x19
  System_Action_o *_9__3; // x22
  TerminalSceneComponent_o *_4__this; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  v2 = this;
  if ( (byte_4E06E67 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass206_0_o *)sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass206_0__coFadein_WorldDisp_b__3__);
    byte_4E06E67 = 1;
  }
  _9__3 = v2->fields.__9__3;
  _4__this = v2->fields.__4__this;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v2,
      Method_TerminalSceneComponent___c__DisplayClass206_0__coFadein_WorldDisp_b__3__,
      0);
    v2->fields.__9__3 = _9__3;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v5, v6, v7, v8, v9, v10);
  }
  if ( !_4__this )
    sub_1CE6958(this, method);
  TerminalSceneComponent__StartWindowMessage(_4__this, _9__3, 0);
}


void TerminalSceneComponent___c__DisplayClass206_0___coFadein_WorldDisp_b__2(
        TerminalSceneComponent___c__DisplayClass206_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1CE6958(0, method);
  TerminalSceneComponent__StartWindowMessage(_4__this, 0, 0);
}


void TerminalSceneComponent___c__DisplayClass206_0___coFadein_WorldDisp_b__3(
        TerminalSceneComponent___c__DisplayClass206_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAct, 0);
}


void TerminalSceneComponent___c__DisplayClass207_0___ctor(
        TerminalSceneComponent___c__DisplayClass207_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass207_0___Fadein_MapDisp_b__0(
        TerminalSceneComponent___c__DisplayClass207_0_o *this,
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
    sub_1CE6958(_4__this, method);
  }
  TerminalSceneComponent__ClearFirstFadeInfo(_4__this, 0);
}


void TerminalSceneComponent___c__DisplayClass207_0___Fadein_MapDisp_b__1(
        TerminalSceneComponent___c__DisplayClass207_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1CE6958(0, method);
  TerminalSceneComponent__ClearFirstFadeInfo(_4__this, 0);
  ActionExtensions__Call(this->fields.end_act, 0);
}


void TerminalSceneComponent___c__DisplayClass208_0___ctor(
        TerminalSceneComponent___c__DisplayClass208_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass208_0___Fadein_MapDisp_Load_b__0(
        TerminalSceneComponent___c__DisplayClass208_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1CE6958(0, method);
  TerminalSceneComponent__Fadein_MapDisp_Start(_4__this, this->fields.fade_time, this->fields.end_act, 0);
}


void TerminalSceneComponent___c__DisplayClass209_0___ctor(
        TerminalSceneComponent___c__DisplayClass209_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass209_0___Fadein_MapDisp_Start_b__2(
        TerminalSceneComponent___c__DisplayClass209_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct WarEntity_o *war_dat; // x8

  war_dat = this->fields.war_dat;
  if ( !war_dat || (this = (TerminalSceneComponent___c__DisplayClass209_0_o *)this->fields.__4__this) == 0 )
    sub_1CE6958(this, action);
  TerminalSceneComponent__StartEventDailyPoint((TerminalSceneComponent_o *)this, war_dat->fields.eventId, action, 0);
}


void TerminalSceneComponent___c__DisplayClass209_0___Fadein_MapDisp_Start_b__3(
        TerminalSceneComponent___c__DisplayClass209_0_o *this,
        const MethodInfo *method)
{
  struct WarEntity_o *war_dat; // x9

  war_dat = this->fields.war_dat;
  if ( !war_dat || !this->fields.__4__this )
    sub_1CE6958(this, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffects(
    this->fields.__4__this,
    this->fields.fade_time,
    war_dat->fields.eventId,
    this->fields.end_act,
    0);
}


void TerminalSceneComponent___c__DisplayClass209_0___Fadein_MapDisp_Start_b__4(
        TerminalSceneComponent___c__DisplayClass209_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (mTerminalList = _4__this->fields.mTerminalList) == 0
    || (this = (TerminalSceneComponent___c__DisplayClass209_0_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0 )
  {
    sub_1CE6958(this, action);
  }
  QuestBoardListViewManager__SetMode((QuestBoardListViewManager_o *)this, 4, action, 0, 0, 0, 0);
}


void TerminalSceneComponent___c__DisplayClass209_0___Fadein_MapDisp_Start_b__5(
        TerminalSceneComponent___c__DisplayClass209_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass209_0_o *v4; // x20
  struct TerminalSceneComponent_o *_4__this; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  v4 = this;
  if ( (byte_4E06E68 & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass209_0_o *)sub_1CE6700(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4E06E68 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (mTerminalMap = _4__this->fields.mTerminalMap) == 0
    || (this = (TerminalSceneComponent___c__DisplayClass209_0_o *)mTerminalMap->fields.spotMaskObj) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0),
        (this = (TerminalSceneComponent___c__DisplayClass209_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__)) == 0) )
  {
    sub_1CE6958(this, action);
  }
  QuestAfterAction__LoadVoice((QuestAfterAction_o *)this, action, 0);
}


void TerminalSceneComponent___c__DisplayClass209_1___ctor(
        TerminalSceneComponent___c__DisplayClass209_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass209_1___Fadein_MapDisp_Start_b__7(
        TerminalSceneComponent___c__DisplayClass209_1_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *IsNullOrEmpty; // x0
  __int64 v4; // x8
  __int64 v5; // x8
  TerminalPramsManager_c *v6; // x0
  Il2CppObject *Instance; // x19
  struct TerminalSceneComponent___c__DisplayClass209_0_o *CS___8__locals1; // x8

  if ( (byte_4E06E69 & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4E06E69 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4DFE666 )
  {
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4DFE666 = 1;
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
  if ( !byte_4E06E3B )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E06E3B = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E06F20 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E06F20 = 1;
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
    sub_1CE6958(IsNullOrEmpty, method);
  }
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_30;
  IsNullOrEmpty = (UnityEngine_GameObject_o *)CS___8__locals1->fields.__4__this;
  if ( !IsNullOrEmpty )
    goto LABEL_30;
  TerminalSceneComponent__StartWindowMessage((TerminalSceneComponent_o *)IsNullOrEmpty, 0, 0);
}


void TerminalSceneComponent___c__DisplayClass212_0___ctor(
        TerminalSceneComponent___c__DisplayClass212_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass212_0___FadeInAndTriggerEventEffects_b__0(
        TerminalSceneComponent___c__DisplayClass212_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4E06E6B & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E06E6B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1CE6958(0, v4);
  CommonUI__maskFadein((CommonUI_o *)Instance, this->fields.fadeTime, this->fields.callback, 0);
}


void TerminalSceneComponent___c__DisplayClass212_0___FadeInAndTriggerEventEffects_b__1(
        TerminalSceneComponent___c__DisplayClass212_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1CE6958(0, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(_4__this, this->fields.eventId, this->fields.callback, 0);
}


void TerminalSceneComponent___c__DisplayClass212_0___FadeInAndTriggerEventEffects_b__2(
        TerminalSceneComponent___c__DisplayClass212_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__4; // x22
  QuestAfterAction_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4E06E6A & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass212_0__FadeInAndTriggerEventEffects_b__4__);
    byte_4E06E6A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  _9__4 = this->fields.__9__4;
  v6 = (QuestAfterAction_o *)Instance;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent___c__DisplayClass212_0__FadeInAndTriggerEventEffects_b__4__,
      0);
    this->fields.__9__4 = _9__4;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.__9__4, (int32_t)_9__4, v7, v8, v9, v10, v11, v12);
  }
  if ( !v6 )
    sub_1CE6958(Instance, v4);
  QuestAfterAction__Play(v6, _9__4, 0);
}


void TerminalSceneComponent___c__DisplayClass212_0___FadeInAndTriggerEventEffects_b__4(
        TerminalSceneComponent___c__DisplayClass212_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1CE6958(0, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(_4__this, this->fields.eventId, this->fields.callback, 0);
}


void TerminalSceneComponent___c__DisplayClass212_0___FadeInAndTriggerEventEffects_b__5(
        TerminalSceneComponent___c__DisplayClass212_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1CE6958(0, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(_4__this, this->fields.eventId, this->fields.callback, 0);
}


void TerminalSceneComponent___c__DisplayClass212_1___ctor(
        TerminalSceneComponent___c__DisplayClass212_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass212_1___FadeInAndTriggerEventEffects_b__3(
        TerminalSceneComponent___c__DisplayClass212_1_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct TerminalSceneComponent___c__DisplayClass212_0_o *CS___8__locals1; // x8

  if ( (byte_4E06E6C & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4E06E6C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  if ( BYTE3(Instance[12].monitor) )
  {
LABEL_7:
    ActionExtensions__Call(this->fields.questAfterActionPlay, 0);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  if ( BYTE4(Instance[12].monitor) )
    goto LABEL_7;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || !Instance )
LABEL_11:
    sub_1CE6958(Instance, v4);
  CommonUI__maskFadein((CommonUI_o *)Instance, CS___8__locals1->fields.fadeTime, this->fields.questAfterActionPlay, 0);
}


void TerminalSceneComponent___c__DisplayClass215_0___ctor(
        TerminalSceneComponent___c__DisplayClass215_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass215_0___FadeInAndTriggerEventEffectsNext_b__0(
        TerminalSceneComponent___c__DisplayClass215_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  TitleInfoControl_o *mTitleInfo; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (mTitleInfo = _4__this->fields.mTitleInfo) == 0 )
    sub_1CE6958(this, method);
  TitleInfoControl__CheckSuperBossHpAnim(mTitleInfo, this->fields.callback, 0);
}


void TerminalSceneComponent___c__DisplayClass215_0___FadeInAndTriggerEventEffectsNext_b__1(
        TerminalSceneComponent___c__DisplayClass215_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1CE6958(0, method);
  TerminalSceneComponent__SetActionBGColl(_4__this, 0, this->fields.callback, 0);
}


void TerminalSceneComponent___c__DisplayClass242_0___ctor(
        TerminalSceneComponent___c__DisplayClass242_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass242_0___PlayAutoExecuteQuest_b__0(
        TerminalSceneComponent___c__DisplayClass242_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass242_0_o *v2; // x19
  struct TerminalSceneComponent_o *_4__this; // x8
  ScrTerminalListTop_o *mTerminalList; // x20
  int32_t method_ptr_high; // w21
  int invoke_impl; // w24
  System_Action_o *_9__6; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  v2 = this;
  if ( (byte_4E06E6F & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass242_0_o *)sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass242_0__PlayAutoExecuteQuest_b__6__);
    byte_4E06E6F = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  mTerminalList = _4__this->fields.mTerminalList;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4DFE737 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFE737 = 1;
  }
  this = (TerminalSceneComponent___c__DisplayClass242_0_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass242_0_o *)TerminalPramsManager_TypeInfo;
  }
  method_ptr_high = HIDWORD(this[3].fields.__9__6->fields.method_ptr);
  if ( !byte_4DFE736 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass242_0_o *)TerminalPramsManager_TypeInfo;
    byte_4DFE736 = 1;
  }
  if ( !LODWORD(this[4].fields.__9__2) )
  {
    j_il2cpp_runtime_class_init_0(this);
    this = (TerminalSceneComponent___c__DisplayClass242_0_o *)TerminalPramsManager_TypeInfo;
  }
  invoke_impl = this[3].fields.__9__6->fields.invoke_impl;
  _9__6 = v2->fields.__9__6;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)v2,
      Method_TerminalSceneComponent___c__DisplayClass242_0__PlayAutoExecuteQuest_b__6__,
      0);
    v2->fields.__9__6 = _9__6;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v2->fields.__9__6, (int32_t)_9__6, v8, v9, v10, v11, v12, v13);
  }
  if ( !mTerminalList )
LABEL_18:
    sub_1CE6958(this, method);
  ScrTerminalListTop__StartWindowMessage_37959456(mTerminalList, method_ptr_high, invoke_impl + 1, 2, _9__6, 0, 0);
}


void TerminalSceneComponent___c__DisplayClass242_0___PlayAutoExecuteQuest_b__1(
        TerminalSceneComponent___c__DisplayClass242_0_o *this,
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  clsQuestCheck_o *v16; // x19
  TerminalSceneComponent___c_c *v17; // x8
  System_Action_o *_9__242_3; // x20
  Il2CppObject *v19; // x21
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7

  if ( (byte_4E06E6D & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__242_3__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass242_0__PlayAutoExecuteQuest_b__2__);
    sub_1CE6700(&TerminalSceneComponent___c_TypeInfo);
    byte_4E06E6D = 1;
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
      if ( !byte_4DFE737 )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        byte_4DFE737 = 1;
      }
      questEnt = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        questEnt = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      }
      name_high = HIDWORD(questEnt[1].klass->_1.name);
      if ( !byte_4DFE736 )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        questEnt = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
        byte_4DFE736 = 1;
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
        _9__2 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
        System_Action___ctor(
          _9__2,
          (Il2CppObject *)this,
          Method_TerminalSceneComponent___c__DisplayClass242_0__PlayAutoExecuteQuest_b__2__,
          0);
        this->fields.__9__2 = _9__2;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v10, v11, v12, v13, v14, v15);
      }
      if ( mTerminalList )
      {
        ScrTerminalListTop__StartWindowMessage_37959456(mTerminalList, name_high, namespaze + 1, 2, _9__2, 1, 0);
        return;
      }
    }
LABEL_28:
    sub_1CE6958(questEnt, result);
  }
  questEnt = (QuestEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v16 = (clsQuestCheck_o *)questEnt;
  v17 = TerminalSceneComponent___c_TypeInfo;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v17 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__242_3 = v17->static_fields->__9__242_3;
  if ( !_9__242_3 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = TerminalSceneComponent___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__242_3 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(_9__242_3, v19, Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__242_3__, 0);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__242_3 = _9__242_3;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__242_3,
      (int32_t)_9__242_3,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( !v16 )
    goto LABEL_28;
  clsQuestCheck__PlayQuestStartAction(v16, _9__242_3, 0);
}


void TerminalSceneComponent___c__DisplayClass242_0___PlayAutoExecuteQuest_b__2(
        TerminalSceneComponent___c__DisplayClass242_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass242_0_o *v2; // x20
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
  if ( (byte_4E06E6E & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass242_0_o *)sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E06E6E = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_60;
  this = (TerminalSceneComponent___c__DisplayClass242_0_o *)_4__this->fields.mTerminalMap;
  if ( !this )
    goto LABEL_60;
  this = (TerminalSceneComponent___c__DisplayClass242_0_o *)ScrTerminalMap__IsAllMaskActive((ScrTerminalMap_o *)this, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v4 = v2->fields.__4__this;
    if ( !v4 )
      goto LABEL_60;
    this = (TerminalSceneComponent___c__DisplayClass242_0_o *)v4->fields.mTerminalMap;
    if ( !this )
      goto LABEL_60;
    ScrTerminalMap__AllMaskEnd((ScrTerminalMap_o *)this, 0);
  }
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_60;
  this = (TerminalSceneComponent___c__DisplayClass242_0_o *)v5->fields.mTerminalList;
  if ( !this )
    goto LABEL_60;
  ScrTerminalListTop__IsAllTouchEnable((ScrTerminalListTop_o *)this, 0, 0, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4DFE737 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFE737 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v6->static_fields->_QuestId_k__BackingField;
  if ( !byte_4E0160F )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4E0160F = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_LastPlayedQuestId_k__BackingField = QuestId_k__BackingField;
  if ( !byte_4DFE737 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4DFE737 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  TerminalPramsManager__CheckClearSelectedStoryQuestId(v6->static_fields->_QuestId_k__BackingField, 0);
  if ( !byte_4DFE737 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFE737 = 1;
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
    if ( !byte_4DFE737 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4DFE737 = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    SpotId = QuestMaster__GetSpotId(v11->static_fields->_QuestId_k__BackingField, 0);
    if ( !byte_4E01610 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E01610 = 1;
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
  this = (TerminalSceneComponent___c__DisplayClass242_0_o *)v13->fields.mTerminalList;
  if ( !this )
    goto LABEL_60;
  Effect = ScrTerminalListTop__IsDisplayGetEffect((ScrTerminalListTop_o *)this, 0);
  if ( !byte_4E01611 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E01611 = 1;
  }
  this = (TerminalSceneComponent___c__DisplayClass242_0_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass242_0_o *)TerminalPramsManager_TypeInfo;
  }
  BYTE2(this[3].fields.__9__6[1].fields.method) = Effect;
  v15 = v2->fields.__4__this;
  if ( !v15 )
    goto LABEL_60;
  mTerminalList = v15->fields.mTerminalList;
  if ( !byte_4DFE737 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass242_0_o *)TerminalPramsManager_TypeInfo;
    byte_4DFE737 = 1;
  }
  if ( !LODWORD(this[4].fields.__9__2) )
  {
    j_il2cpp_runtime_class_init_0(this);
    this = (TerminalSceneComponent___c__DisplayClass242_0_o *)TerminalPramsManager_TypeInfo;
  }
  method_ptr_high = HIDWORD(this[3].fields.__9__6->fields.method_ptr);
  if ( !byte_4DFE736 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass242_0_o *)TerminalPramsManager_TypeInfo;
    byte_4DFE736 = 1;
  }
  if ( !LODWORD(this[4].fields.__9__2) )
  {
    j_il2cpp_runtime_class_init_0(this);
    this = (TerminalSceneComponent___c__DisplayClass242_0_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !mTerminalList )
LABEL_60:
    sub_1CE6958(this, method);
  ScrTerminalListTop__RequestBattleSecnario(
    mTerminalList,
    method_ptr_high,
    LODWORD(this[3].fields.__9__6->fields.invoke_impl) + 1,
    0);
}


void TerminalSceneComponent___c__DisplayClass242_0___PlayAutoExecuteQuest_b__6(
        TerminalSceneComponent___c__DisplayClass242_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass242_0_o *v2; // x19
  struct TerminalSceneComponent_o *_4__this; // x8
  ScrTerminalListTop_o *mTerminalList; // x20
  int32_t klass_high; // w22
  int32_t method_ptr_high; // w23
  struct TerminalSceneComponent_o *v7; // x8

  v2 = this;
  if ( (byte_4E06E70 & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass242_0_o *)sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E06E70 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_22;
  mTerminalList = _4__this->fields.mTerminalList;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4DFEC9C )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFEC9C = 1;
  }
  this = (TerminalSceneComponent___c__DisplayClass242_0_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass242_0_o *)TerminalPramsManager_TypeInfo;
  }
  klass_high = HIDWORD(this[3].fields.__9__6->klass);
  if ( !byte_4DFE737 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass242_0_o *)TerminalPramsManager_TypeInfo;
    byte_4DFE737 = 1;
  }
  if ( !LODWORD(this[4].fields.__9__2) )
  {
    j_il2cpp_runtime_class_init_0(this);
    this = (TerminalSceneComponent___c__DisplayClass242_0_o *)TerminalPramsManager_TypeInfo;
  }
  method_ptr_high = HIDWORD(this[3].fields.__9__6->fields.method_ptr);
  if ( !byte_4DFE736 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass242_0_o *)TerminalPramsManager_TypeInfo;
    byte_4DFE736 = 1;
  }
  if ( !LODWORD(this[4].fields.__9__2) )
  {
    j_il2cpp_runtime_class_init_0(this);
    this = (TerminalSceneComponent___c__DisplayClass242_0_o *)TerminalPramsManager_TypeInfo;
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
    || (this = (TerminalSceneComponent___c__DisplayClass242_0_o *)v7->fields.mTerminalList) == 0 )
  {
LABEL_22:
    sub_1CE6958(this, method);
  }
  ScrTerminalListTop__StartQuestBeforeFollower((ScrTerminalListTop_o *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass247_0___ctor(
        TerminalSceneComponent___c__DisplayClass247_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass247_0___PlayEventTutorial_b__0(
        TerminalSceneComponent___c__DisplayClass247_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass247_0_o *v2; // x19
  System_Action_o *_9__1; // x22
  TerminalSceneComponent_o *_4__this; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  v2 = this;
  if ( (byte_4E06E71 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass247_0_o *)sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass247_0__PlayEventTutorial_b__1__);
    byte_4E06E71 = 1;
  }
  _9__1 = v2->fields.__9__1;
  _4__this = v2->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_TerminalSceneComponent___c__DisplayClass247_0__PlayEventTutorial_b__1__,
      0);
    v2->fields.__9__1 = _9__1;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v5, v6, v7, v8, v9, v10);
  }
  if ( !_4__this )
    sub_1CE6958(this, method);
  TerminalSceneComponent__PlayEventTutorialWithoutAfterAction(_4__this, _9__1, 0);
}


void TerminalSceneComponent___c__DisplayClass247_0___PlayEventTutorial_b__1(
        TerminalSceneComponent___c__DisplayClass247_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  TerminalSceneComponent___c__DisplayClass247_0_o *v4; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (mTerminalList = _4__this->fields.mTerminalList) == 0
    || (v4 = this, (this = (TerminalSceneComponent___c__DisplayClass247_0_o *)mTerminalList->fields.mActionBgColl) == 0)
    || (this = (TerminalSceneComponent___c__DisplayClass247_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0)) == 0 )
  {
    sub_1CE6958(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  ActionExtensions__Call(v4->fields.callbackAfter, 0);
}


void TerminalSceneComponent___c__DisplayClass265_0___ctor(
        TerminalSceneComponent___c__DisplayClass265_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass265_0___CheckRewardPopupChain_b__0(
        TerminalSceneComponent___c__DisplayClass265_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  ScrTerminalListTop_o *Instance; // x0
  __int64 v6; // x1
  struct TerminalSceneComponent_o *_4__this; // x8
  CommonUI_o *v8; // x21
  TerminalSceneComponent_o *v9; // x20

  if ( (byte_4E06E72 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_DialogMessageMaster___);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E06E72 = 1;
  }
  Instance = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        (Instance = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (Instance = (ScrTerminalListTop_o *)CommonUI__get_CampaignDirectBonus((CommonUI_o *)Instance, 0), !v9)
    || (TerminalSceneComponent__SaveCampaignDirectBonusData(v9, (CommonUI_CampaignDirectBonusData_array *)Instance, 0),
        (Instance = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (ScrTerminalListTop_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_DialogMessageMaster___)) == 0 )
  {
LABEL_11:
    sub_1CE6958(Instance, v6);
  }
  DialogMessageMaster__ShowAvailables((DialogMessageMaster_o *)Instance, 1, action, 0, 0, 0, 0, 0);
}


void TerminalSceneComponent___c__DisplayClass265_0___CheckRewardPopupChain_b__1(
        TerminalSceneComponent___c__DisplayClass265_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__5; // x22
  CommonUI_o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4E06E73 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass265_0__CheckRewardPopupChain_b__5__);
    byte_4E06E73 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__5 = this->fields.__9__5;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent___c__DisplayClass265_0__CheckRewardPopupChain_b__5__,
      0);
    this->fields.__9__5 = _9__5;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.__9__5, (int32_t)_9__5, v9, v10, v11, v12, v13, v14);
  }
  if ( !v8 )
    sub_1CE6958(Instance, v6);
  CommonUI__StartLoginAndCampaignBonus(v8, action, _9__5, -1, 0);
}


void TerminalSceneComponent___c__DisplayClass265_0___CheckRewardPopupChain_b__3(
        TerminalSceneComponent___c__DisplayClass265_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (TerminalSceneComponent___c__DisplayClass265_0_o *)_4__this->fields.mTerminalList) == 0 )
    sub_1CE6958(this, action);
  ScrTerminalListTop__CheckLoginAfterTransitionDialog((ScrTerminalListTop_o *)this, action, 100, 0);
}


void TerminalSceneComponent___c__DisplayClass265_0___CheckRewardPopupChain_b__4(
        TerminalSceneComponent___c__DisplayClass265_0_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  int32_t EventID; // w20
  void *Master_object; // x0
  __int64 v7; // x1
  TerminalPramsManager_c *v8; // x0
  TerminalSceneComponent_o *_4__this; // x20
  System_Action_o *v10; // x21
  Il2CppObject *v11; // x22
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4E06E74 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__265_6__);
    sub_1CE6700(&TerminalSceneComponent___c_TypeInfo);
    byte_4E06E74 = 1;
  }
  entity = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4DFEC9C )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFEC9C = 1;
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
    if ( !byte_4DFEC9C )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4DFEC9C = 1;
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_object )
    goto LABEL_39;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
    &entity,
    EventID,
    (const MethodInfo_34E92A8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E0142D )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E0142D = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  if ( v8->static_fields->_SpotId_k__BackingField < 1
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
    v10 = *(System_Action_o **)(*((_QWORD *)Master_object + 23) + 128LL);
    if ( !v10 )
    {
      if ( !*((_DWORD *)Master_object + 56) )
      {
        j_il2cpp_runtime_class_init_0(Master_object);
        Master_object = TerminalSceneComponent___c_TypeInfo;
      }
      v11 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
      v10 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
      System_Action___ctor(v10, v11, Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__265_6__, 0);
      static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
      static_fields->__9__265_6 = v10;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)&static_fields->__9__265_6, (int32_t)v10, v13, v14, v15, v16, v17, v18);
    }
    if ( _4__this )
    {
      TerminalSceneComponent__CheckOpenCampaignDirectBonus(_4__this, v10, 0);
      goto LABEL_38;
    }
LABEL_39:
    sub_1CE6958(Master_object, v7);
  }
LABEL_38:
  ActionExtensions__Call(this->fields.afterChain, 0);
}


void TerminalSceneComponent___c__DisplayClass265_0___CheckRewardPopupChain_b__5(
        TerminalSceneComponent___c__DisplayClass265_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (TerminalSceneComponent___c__DisplayClass265_0_o *)_4__this->fields.mPlayerStatus) == 0 )
    sub_1CE6958(this, method);
  ScrPlayerStatus__mfInitUserData((ScrPlayerStatus_o *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass267_0___ctor(
        TerminalSceneComponent___c__DisplayClass267_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass267_0___CheckOpenCampaignDirectBonus_b__2(
        TerminalSceneComponent___c__DisplayClass267_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalSceneComponent___c__DisplayClass267_0_o *v8; // x19
  struct TerminalSceneComponent_o *_4__this; // x8
  TerminalPramsManager_c *v10; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  v8 = this;
  if ( (byte_4E06E75 & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass267_0_o *)sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E06E75 = 1;
  }
  _4__this = v8->fields.__4__this;
  if ( !_4__this )
    sub_1CE6958(this, action);
  _4__this->fields._IsPlayingCampaignDirectBonus_k__BackingField = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E01E21 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E01E21 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v10->static_fields;
  static_fields->_CampaignDirectBonus_k__BackingField = 0;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&static_fields->_CampaignDirectBonus_k__BackingField,
    0,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  TerminalPramsManager__CampaignDirectBonus_SaveData(0);
  ActionExtensions__Call(v8->fields.callback, 0);
}


void TerminalSceneComponent___c__DisplayClass275_0___ctor(
        TerminalSceneComponent___c__DisplayClass275_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass275_0___CheckSaveRouteSelect_b__0(
        TerminalSceneComponent___c__DisplayClass275_0_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  if ( (byte_4E06E76 & 1) == 0 )
  {
    sub_1CE6700(&ScriptManager_TypeInfo);
    byte_4E06E76 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0);
  ScriptManager__ClearSelectRouteArrayInCollection(0);
  ActionExtensions__Call(this->fields.callback, 0);
}


void TerminalSceneComponent___c__DisplayClass278_0___ctor(
        TerminalSceneComponent___c__DisplayClass278_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass278_0___CheckMasterMissionReset_b__0(
        TerminalSceneComponent___c__DisplayClass278_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  TerminalSceneComponent_c *v14; // x0
  System_String_o *MASTER_MISSION_RESET_KEY; // x21
  System_String_o *v16; // x0
  Il2CppObject *Instance; // x19
  System_Action_o *v18; // x21

  if ( (byte_4E06E77 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass278_1__CheckMasterMissionReset_b__1__);
    sub_1CE6700(&TerminalSceneComponent___c__DisplayClass278_1_TypeInfo);
    byte_4E06E77 = 1;
  }
  v5 = sub_1CE694C(TerminalSceneComponent___c__DisplayClass278_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 24) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_BYTE *)(v5 + 16) = isDecide;
  v14 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v14 = TerminalSceneComponent_TypeInfo;
  }
  MASTER_MISSION_RESET_KEY = v14->static_fields->MASTER_MISSION_RESET_KEY;
  v16 = System_Int64__ToString((int64_t)&this->fields, 0);
  UnityEngine_PlayerPrefs__SetString(MASTER_MISSION_RESET_KEY, v16, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass278_1__CheckMasterMissionReset_b__1__,
    0);
  if ( !Instance )
LABEL_8:
    sub_1CE6958(v6, v7);
  CommonUI__CloseConfirmDialog_31920128((CommonUI_o *)Instance, v18, 0);
}


void TerminalSceneComponent___c__DisplayClass278_0___CheckMasterMissionReset_b__2(
        TerminalSceneComponent___c__DisplayClass278_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  ScrPlayerStatus_o *mPlayerStatus; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (mPlayerStatus = _4__this->fields.mPlayerStatus) == 0 )
    sub_1CE6958(this, method);
  ScrPlayerStatus__OpenMasterMission(mPlayerStatus, this->fields.callback, -1, 0);
}


void TerminalSceneComponent___c__DisplayClass278_1___ctor(
        TerminalSceneComponent___c__DisplayClass278_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass278_1___CheckMasterMissionReset_b__1(
        TerminalSceneComponent___c__DisplayClass278_1_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass278_1_o *v2; // x20
  AvalonSceneManager_c *v3; // x8
  CommonUI_o *v4; // x19
  struct TerminalSceneComponent___c__DisplayClass278_0_o *CS___8__locals1; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__2; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct TerminalSceneComponent___c__DisplayClass278_0_o *v14; // x8

  v2 = this;
  if ( (byte_4E06E78 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&AvalonSceneManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (TerminalSceneComponent___c__DisplayClass278_1_o *)sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass278_0__CheckMasterMissionReset_b__2__);
    byte_4E06E78 = 1;
  }
  if ( v2->fields.isDecide )
  {
    this = (TerminalSceneComponent___c__DisplayClass278_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        _9__2 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
        System_Action___ctor(
          _9__2,
          (Il2CppObject *)CS___8__locals1,
          Method_TerminalSceneComponent___c__DisplayClass278_0__CheckMasterMissionReset_b__2__,
          0);
        CS___8__locals1->fields.__9__2 = _9__2;
        sub_1CE66A4(
          (GrandQuestFolderBoardItem_o *)&CS___8__locals1->fields.__9__2,
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
    sub_1CE6958(this, method);
  }
  v14 = v2->fields.CS___8__locals1;
  if ( !v14 )
    goto LABEL_13;
  ActionExtensions__Call(v14->fields.callback, 0);
}


void TerminalSceneComponent___c__DisplayClass279_0___ctor(
        TerminalSceneComponent___c__DisplayClass279_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass279_0___CheckNotificationDialog_b__0(
        TerminalSceneComponent___c__DisplayClass279_0_o *this,
        const MethodInfo *method)
{
  BattleResultBondsComponent_c *v3; // x0

  if ( (byte_4E06E79 & 1) == 0 )
  {
    sub_1CE6700(&BattleResultBondsComponent_TypeInfo);
    byte_4E06E79 = 1;
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


void TerminalSceneComponent___c__DisplayClass279_0___CheckNotificationDialog_b__2(
        TerminalSceneComponent___c__DisplayClass279_0_o *this,
        const MethodInfo *method)
{
  BattleResultBondsComponent_c *v3; // x0

  if ( (byte_4E06E7A & 1) == 0 )
  {
    sub_1CE6700(&BattleResultBondsComponent_TypeInfo);
    byte_4E06E7A = 1;
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


void TerminalSceneComponent___c__DisplayClass279_1___ctor(
        TerminalSceneComponent___c__DisplayClass279_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TerminalSceneComponent___c__DisplayClass279_1___CheckNotificationDialog_b__1(
        TerminalSceneComponent___c__DisplayClass279_1_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct TerminalSceneComponent___c__DisplayClass279_0_o *CS___8__locals1; // x21
  GetSvtCoin_array *coin; // x20
  System_Action_o *_9__2; // x22
  CommonUI_o *v8; // x19
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4E06E7B & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass279_0__CheckNotificationDialog_b__2__);
    byte_4E06E7B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  coin = this->fields.coin;
  _9__2 = CS___8__locals1->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)CS___8__locals1,
      Method_TerminalSceneComponent___c__DisplayClass279_0__CheckNotificationDialog_b__2__,
      0);
    CS___8__locals1->fields.__9__2 = _9__2;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&CS___8__locals1->fields.__9__2,
      (int32_t)_9__2,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !v8 )
LABEL_8:
    sub_1CE6958(Instance, v4);
  CommonUI__CreateServantCoinConfirmDialog(v8, 1, coin, _9__2, 0);
}


void TerminalSceneComponent__coFadein_WorldDisp_d__206___ctor(
        TerminalSceneComponent__coFadein_WorldDisp_d__206_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool TerminalSceneComponent__coFadein_WorldDisp_d__206__MoveNext(
        TerminalSceneComponent__coFadein_WorldDisp_d__206_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent__coFadein_WorldDisp_d__206_o *v2; // x19
  int32_t _1__state; // w8
  struct TerminalSceneComponent_o *_4__this; // x20
  bool result; // w0
  Il2CppObject *v6; // x22
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct TerminalSceneComponent_o *v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  Il2CppObject *endAct; // x1
  TerminalPramsManager_c *v27; // x0
  System_Collections_IEnumerator_o *v28; // x0
  System_Action_c *klass; // x8
  __int64 v30; // x8
  TerminalPramsManager_c *v31; // x0
  System_Collections_IEnumerator_o *v32; // x0
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  Il2CppObject *Master_object; // x21
  System_String_o *PrioredFolderBGM; // x21
  int v42; // w24
  int32_t interp_invoke_impl_high; // w8
  int monitor; // w24
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct ScrTerminalListTop_o *v46; // x8
  Il2CppObject *v47; // x19
  System_Action_o *v48; // x21
  TerminalPramsManager_c *v49; // x0
  System_String_o *v50; // x0
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v52; // x8
  Il2CppObject *v53; // x21
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v55; // x0
  intptr_t *v56; // x8
  _QWORD *v57; // x0
  System_Reflection_MethodBase_o *v58; // x20
  ScrTerminalListTop_c *v59; // x8
  TerminalPramsManager_c *v60; // x0
  ScrTerminalListTop_c *v61; // x0
  float *p_GrandMovieFadeTime; // x8
  AvalonSceneManager_c *v63; // x0
  System_Action_o *v64; // x19
  struct TerminalSceneComponent___c__DisplayClass206_0_o *_8__1; // x9
  int32_t index; // [xsp+4h] [xbp-4Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4E06E80 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&AvalonSceneManager_TypeInfo);
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMaster_WarMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1CE6700(&System_GC_TypeInfo);
    sub_1CE6700(&ScrTerminalListTop_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1CE6700(&Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
    sub_1CE6700(&SoundManager_TypeInfo);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass206_0__coFadein_WorldDisp_b__0__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass206_0__coFadein_WorldDisp_b__1__);
    sub_1CE6700(&Method_TerminalSceneComponent___c__DisplayClass206_0__coFadein_WorldDisp_b__2__);
    sub_1CE6700(&TerminalSceneComponent___c__DisplayClass206_0_TypeInfo);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__206_o *)sub_1CE6700(&Method_TerminalSceneComponent__coFadein_WorldDisp_d__206_MoveNext__);
    byte_4E06E80 = 1;
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
    v6 = (Il2CppObject *)sub_1CE694C(TerminalSceneComponent___c__DisplayClass206_0_TypeInfo);
    System_Object___ctor(v6, 0);
    v2->fields.__8__1 = (struct TerminalSceneComponent___c__DisplayClass206_0_o *)v6;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v2->fields.__8__1, (int32_t)v6, v7, v8, v9, v10, v11, v12);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__206_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_149;
    v19 = v2->fields.__4__this;
    *(_QWORD *)&this->fields.__1__state = v19;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v19, v13, v14, v15, v16, v17, v18);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__206_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_149;
    endAct = (Il2CppObject *)v2->fields.endAct;
    this->fields.__2__current = endAct;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.__2__current,
      (int32_t)endAct,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    v2->fields._isAuto_5__2 = 0;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E01971 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E01971 = 1;
    }
    v27 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v27 = TerminalPramsManager_TypeInfo;
    }
    if ( !v27->static_fields->_IsMapReturnFolder_k__BackingField )
    {
      if ( !v27->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v27);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__206_o *)TerminalPramsManager__IsAuto(0);
      v2->fields._isAuto_5__2 = (unsigned __int8)this & 1;
      if ( !_4__this )
        goto LABEL_149;
      TerminalSceneComponent__EndAuto(_4__this, 0);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__206_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
      if ( !this )
        goto LABEL_149;
      if ( RewardMiniPopupExecutor__IsBusy((RewardMiniPopupExecutor_o *)this, 0) )
      {
        v28 = TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect(_4__this, 0);
        UnityEngine_MonoBehaviour__StartCoroutine_72903732((UnityEngine_MonoBehaviour_o *)_4__this, v28, 0);
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
    if ( !byte_4E0053D )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E0053D = 1;
    }
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__206_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__206_o *)TerminalPramsManager_TypeInfo;
    }
    if ( HIBYTE(this[2].fields.endAct->fields.original_method_info) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4DFE666 )
      {
        sub_1CE6700(&TerminalSceneComponent_TypeInfo);
        byte_4DFE666 = 1;
      }
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__206_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__206_o *)TerminalSceneComponent_TypeInfo;
      }
      klass = this[2].fields.endAct->klass;
      if ( !klass )
        goto LABEL_149;
      v30 = *(_QWORD *)&klass->_2.static_fields_size;
      if ( !v30 )
        goto LABEL_149;
      this = *(TerminalSceneComponent__coFadein_WorldDisp_d__206_o **)(v30 + 552);
      if ( !this )
        goto LABEL_149;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    }
    if ( !_4__this )
      goto LABEL_149;
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__206_o *)_4__this->fields.mTerminalMap;
    if ( !this )
      goto LABEL_149;
    ScrTerminalMap__SetDisp((ScrTerminalMap_o *)this, 0, 0);
    if ( _4__this->fields._IsReq_InitEarthRotateY_k__BackingField )
    {
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__206_o *)_4__this->fields.mEarthCore;
      _4__this->fields._IsReq_InitEarthRotateY_k__BackingField = 0;
      if ( !this )
        goto LABEL_149;
      BaseCore__SetRotateY_PointInitAngle((BaseCore_o *)this, 0);
    }
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__206_o *)_4__this->fields.mTerminalList;
    if ( !this )
      goto LABEL_149;
    if ( !ScrTerminalListTop__isShowingFolder((ScrTerminalListTop_o *)this, 0) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4E01222 )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        byte_4E01222 = 1;
      }
      v31 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v31 = TerminalPramsManager_TypeInfo;
      }
      v31->static_fields->_DispState_k__BackingField = 1;
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__206_o *)_4__this->fields.mTitleInfo;
      if ( !this )
        goto LABEL_149;
      TitleInfoControl__SetActiveEventInfo_41033840((TitleInfoControl_o *)this, 1, 16, 0, 0, 0, 0);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__206_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_149;
      CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, 0, 1, 0);
    }
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__206_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_149;
    CommonUI__SetBgCameraActive((CommonUI_o *)this, 1, 0);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__206_o *)_4__this->fields.mTerminalMap;
    if ( !this )
      goto LABEL_149;
    ScrTerminalMap__ReleaseMap((ScrTerminalMap_o *)this, 1, 0);
    if ( !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
    System_GC__Collect(0);
    if ( v2->fields.isExecuteUnusedAssets )
    {
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__206_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( this )
      {
        AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0, 0);
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__206_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          v32 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0);
          v2->fields.__2__current = (Il2CppObject *)v32;
          p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
          sub_1CE66A4(p__2__current, (int32_t)v32, v34, v35, v36, v37, v38, v39);
          result = 1;
          LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
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
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__206_o *)_4__this->fields.mTerminalList;
    if ( !this )
      goto LABEL_149;
    if ( ScrTerminalListTop__isShowingFolder((ScrTerminalListTop_o *)this, 0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4DFEC9C )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        byte_4DFEC9C = 1;
      }
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__206_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__206_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !Master_object )
        goto LABEL_149;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             HIDWORD(this[2].fields.endAct->klass),
             (const MethodInfo_34E92A8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
      {
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__206_o *)_4__this->fields.mTerminalList;
        if ( !this )
          goto LABEL_149;
        PrioredFolderBGM = ScrTerminalListTop__GetPrioredFolderBGM((ScrTerminalListTop_o *)this, 0);
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__206_o *)System_String__IsNullOrEmpty(PrioredFolderBGM, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_112;
        if ( !entity )
          goto LABEL_149;
        v42 = (int)entity[1].klass;
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__206_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (TerminalSceneComponent__coFadein_WorldDisp_d__206_o *)BalanceConfig_TypeInfo;
        }
        interp_invoke_impl_high = HIDWORD(this[2].fields.endAct[6].fields.interp_invoke_impl);
        if ( v42 == interp_invoke_impl_high )
          goto LABEL_112;
        if ( !entity )
          goto LABEL_149;
        monitor = (int)entity[3].monitor;
        if ( !LODWORD(this[3].monitor) )
        {
          j_il2cpp_runtime_class_init_0(this);
          interp_invoke_impl_high = BalanceConfig_TypeInfo->static_fields->OrdealCallWarId;
        }
        if ( monitor == interp_invoke_impl_high || !TerminalSceneComponent__IsValidGrandBgm(_4__this, &index, 0) )
LABEL_112:
          TerminalSceneComponent__playBgm(_4__this, PrioredFolderBGM, 0, 0);
        else
          TerminalSceneComponent__PlayGrandBgm(_4__this, index, 0, 0);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4E0053D )
        {
          sub_1CE6700(&TerminalPramsManager_TypeInfo);
          byte_4E0053D = 1;
        }
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__206_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          this = (TerminalSceneComponent__coFadein_WorldDisp_d__206_o *)TerminalPramsManager_TypeInfo;
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v52 = AvalonSceneManager_TypeInfo;
        if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          v52 = AvalonSceneManager_TypeInfo;
        }
        v53 = (Il2CppObject *)v2->fields.__8__1;
        DEFAULT_FADE_TIME = v52->static_fields->DEFAULT_FADE_TIME;
        v55 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
        v56 = &Method_TerminalSceneComponent___c__DisplayClass206_0__coFadein_WorldDisp_b__2__;
        goto LABEL_142;
      }
    }
  }
  else if ( !_4__this )
  {
    goto LABEL_149;
  }
  this = (TerminalSceneComponent__coFadein_WorldDisp_d__206_o *)_4__this->fields.mTerminalList;
  if ( !this )
    goto LABEL_149;
  this = (TerminalSceneComponent__coFadein_WorldDisp_d__206_o *)ScrTerminalListTop__get_IsActiveBlankEarth(
                                                                  (ScrTerminalListTop_o *)this,
                                                                  0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    mTerminalList = _4__this->fields.mTerminalList;
    if ( !mTerminalList )
      goto LABEL_149;
    if ( !mTerminalList->fields.isBackFromBlankEarthMap )
    {
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__206_o *)TerminalSceneComponent__TryPlayGrandBgm(
                                                                      _4__this,
                                                                      0,
                                                                      0);
      if ( ((unsigned __int8)this & 1) == 0 )
        TerminalSceneComponent__playDefaultBgm(_4__this, 0, 0);
    }
  }
  v46 = _4__this->fields.mTerminalList;
  if ( !v46 )
LABEL_149:
    sub_1CE6958(this, method);
  if ( !v46->fields.isBackFromBlankEarthMap )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E01957 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E01957 = 1;
    }
    v49 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v49 = TerminalPramsManager_TypeInfo;
    }
    if ( v49->static_fields->_IsTransFromOrdealCall_k__BackingField )
    {
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__206_o *)_4__this->fields.mTerminalList;
      if ( !this )
        goto LABEL_149;
      v50 = ScrTerminalListTop__CheckTerminalTopEffect((ScrTerminalListTop_o *)this, 0, 0);
      if ( System_String__IsNullOrEmpty(v50, 0) )
      {
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__206_o *)_4__this->fields.mTerminalList;
        if ( !this )
          goto LABEL_149;
        ScrTerminalListTop__PlayBgmOpeningMovieAfter((ScrTerminalListTop_o *)this, 0);
      }
      else
      {
        v57 = Method_TerminalSceneComponent__coFadein_WorldDisp_d__206_MoveNext__;
        if ( (*((_BYTE *)Method_TerminalSceneComponent__coFadein_WorldDisp_d__206_MoveNext__ + 83) & 2) != 0 )
          v57 = (_QWORD *)sub_1CE6718(Method_TerminalSceneComponent__coFadein_WorldDisp_d__206_MoveNext__);
        v58 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v57, v57[4]);
        v59 = ScrTerminalListTop_TypeInfo;
        if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
          v59 = ScrTerminalListTop_TypeInfo;
        }
        OverwriteAssetSoundName__PlaySe(v58, v59->static_fields->GrandMovieAfterSEName, 0, 0);
      }
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E01957 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E01957 = 1;
    }
    v60 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v60 = TerminalPramsManager_TypeInfo;
    }
    if ( v60->static_fields->_IsTransFromOrdealCall_k__BackingField )
    {
      v61 = ScrTerminalListTop_TypeInfo;
      if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
        v61 = ScrTerminalListTop_TypeInfo;
      }
      p_GrandMovieFadeTime = &v61->static_fields->GrandMovieFadeTime;
    }
    else
    {
      v63 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v63 = AvalonSceneManager_TypeInfo;
      }
      p_GrandMovieFadeTime = &v63->static_fields->DEFAULT_FADE_TIME;
    }
    DEFAULT_FADE_TIME = *p_GrandMovieFadeTime;
    v53 = (Il2CppObject *)v2->fields.__8__1;
    v55 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    v56 = &Method_TerminalSceneComponent___c__DisplayClass206_0__coFadein_WorldDisp_b__1__;
LABEL_142:
    v64 = v55;
    System_Action___ctor(v55, v53, *v56, 0);
    if ( !Instance )
      goto LABEL_149;
    CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v64, 0);
    return 0;
  }
  v47 = (Il2CppObject *)v2->fields.__8__1;
  v48 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v48, v47, Method_TerminalSceneComponent___c__DisplayClass206_0__coFadein_WorldDisp_b__0__, 0);
  TerminalSceneComponent__StartWindowMessage(_4__this, v48, 0);
  return 0;
}


Il2CppObject *TerminalSceneComponent__coFadein_WorldDisp_d__206__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__coFadein_WorldDisp_d__206_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TerminalSceneComponent__coFadein_WorldDisp_d__206__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__coFadein_WorldDisp_d__206_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1CE6714(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1CE694C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1CE6714(&Method_TerminalSceneComponent__coFadein_WorldDisp_d__206_System_Collections_IEnumerator_Reset__);
  sub_1CE6828(v3, v4);
}


Il2CppObject *TerminalSceneComponent__coFadein_WorldDisp_d__206__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__coFadein_WorldDisp_d__206_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TerminalSceneComponent__coFadein_WorldDisp_d__206__System_IDisposable_Dispose(
        TerminalSceneComponent__coFadein_WorldDisp_d__206_o *this,
        const MethodInfo *method)
{
  ;
}