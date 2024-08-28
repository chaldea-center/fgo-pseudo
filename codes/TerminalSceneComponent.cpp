void __fastcall TerminalSceneComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
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
  int32_t v15; // w3
  int32_t v16; // w1
  struct TerminalSceneComponent_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  struct TerminalSceneComponent_StaticFields *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  struct TerminalSceneComponent_StaticFields *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3

  if ( (byte_4A0ABEC & 1) == 0 )
  {
    sub_1B686D4(&TerminalSceneComponent_TypeInfo, v1);
    sub_1B686D4(&StringLiteral_10062/*"OverwriteCommonBG2"*/, v4);
    sub_1B686D4(&StringLiteral_10061/*"OverwriteCommonBG1"*/, v5);
    sub_1B686D4(&StringLiteral_21235/*"masterMissionResetKey"*/, v6);
    sub_1B686D4(&StringLiteral_13525/*"Terminal/EarthCore/{0:D2}"*/, v7);
    sub_1B686D4(&StringLiteral_10011/*"OrdealCallChapterPlayState"*/, v8);
    byte_4A0ABEC = 1;
  }
  v9 = TerminalSceneComponent_TypeInfo;
  TerminalSceneComponent_TypeInfo->static_fields->DEFAULT_AMBIENT_LIGHT_COLOR = (struct UnityEngine_Color_o)xmmword_BA71E0;
  v10 = StringLiteral_21235/*"masterMissionResetKey"*/;
  static_fields = v9->static_fields;
  static_fields->MASTER_MISSION_RESET_KEY = (struct System_String_o *)StringLiteral_21235/*"masterMissionResetKey"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->MASTER_MISSION_RESET_KEY, v10, v2, v3);
  v12 = StringLiteral_13525/*"Terminal/EarthCore/{0:D2}"*/;
  v13 = TerminalSceneComponent_TypeInfo->static_fields;
  v13->EARTH_ASSET_NAME = (struct System_String_o *)StringLiteral_13525/*"Terminal/EarthCore/{0:D2}"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v13->EARTH_ASSET_NAME, v12, v14, v15);
  v16 = StringLiteral_10011/*"OrdealCallChapterPlayState"*/;
  v17 = TerminalSceneComponent_TypeInfo->static_fields;
  v17->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY = (struct System_String_o *)StringLiteral_10011/*"OrdealCallChapterPlayState"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v17->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY, v16, v18, v19);
  v20 = StringLiteral_10061/*"OverwriteCommonBG1"*/;
  v21 = TerminalSceneComponent_TypeInfo->static_fields;
  v21->OVERWRITE_COMMON_BG_TYPE1_KEY = (struct System_String_o *)StringLiteral_10061/*"OverwriteCommonBG1"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v21->OVERWRITE_COMMON_BG_TYPE1_KEY, v20, v22, v23);
  v24 = StringLiteral_10062/*"OverwriteCommonBG2"*/;
  v25 = TerminalSceneComponent_TypeInfo->static_fields;
  v25->OVERWRITE_COMMON_BG_TYPE2_KEY = (struct System_String_o *)StringLiteral_10062/*"OverwriteCommonBG2"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v25->OVERWRITE_COMMON_BG_TYPE2_KEY, v24, v26, v27);
  *(_WORD *)&TerminalSceneComponent_TypeInfo->static_fields->isTitleToTerminalTransition = 0;
}


void __fastcall TerminalSceneComponent___ctor(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  this->fields.TUTORIAL_SPOT_ARROW_POS = (struct UnityEngine_Vector2_o)3263954944LL;
  this->fields.TUTORIAL_SPOT_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BA7640;
  *(_OWORD *)&this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x = xmmword_BA7400;
  this->fields.TUTORIAL_QUEST_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BA6580;
  *(_OWORD *)&this->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x = xmmword_BA7410;
  this->fields.TUTORIAL_MENU_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BA76E0;
  *(_OWORD *)&this->fields.TUTORIAL_MENU_MESSAGE_POS.fields.x = xmmword_BA5F70;
  this->fields.TUTORIAL_GACHA_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BA66C0;
  this->fields.TUTORIAL_MENU_ARROW_POS2 = (struct UnityEngine_Vector2_o)0xC366000043DB0000LL;
  this->fields.TUTORIAL_COMBINE_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BA69C0;
  this->fields.TUTORIAL_COMBINE_ARROW_POS = (struct UnityEngine_Vector2_o)0xC3200000C3058000LL;
  this->fields.isTopLoginBusy = 1;
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall TerminalSceneComponent__Awake(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  TerminalSceneComponent_c *v6; // x0
  UnityEngine_GameObject_o *UiFlag; // x0
  __int64 v8; // x1
  bool v9; // w1

  if ( (byte_4A0ABA6 & 1) == 0 )
  {
    sub_1B686D4(&ServantCommentManager_TypeInfo, method);
    sub_1B686D4(&TerminalSceneComponent_TypeInfo, v5);
    byte_4A0ABA6 = 1;
  }
  v6 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v6 = TerminalSceneComponent_TypeInfo;
  }
  v6->static_fields->mInstance = this;
  sub_1B68678(
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
        v9 = 1;
        goto LABEL_15;
      }
    }
LABEL_16:
    sub_1B68930(UiFlag, v8);
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
  int32_t v3; // w3

  if ( this->fields.isTopLoginBusy )
  {
    this->fields.afterTopLogin = callback;
    sub_1B68678(
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
    sub_1B68930(0LL, item);
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
    sub_1B68930(0LL, questId);
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
    sub_1B68930(this, item);
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
    sub_1B68930(this, method);
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
    sub_1B68930(this, isPlaySe);
  }
  QuestInformationComponent__CloseWindow((QuestInformationComponent_o *)this, isPlaySe, 0LL);
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

  if ( (byte_4A0ABD4 & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, *(_QWORD *)&eventId);
    sub_1B686D4(&Method_DataManager_GetMasterData_EventDetailMaster___, v4);
    sub_1B686D4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_1B686D4(&System_DateTime_TypeInfo, v6);
    sub_1B686D4(&NetworkManager_TypeInfo, v7);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v9);
    byte_4A0ABD4 = 1;
  }
  entity = 0LL;
  t2.fields._dateData = 0LL;
  v27 = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_40;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_30E4514 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_40:
    sub_1B68930(Instance, v11);
  if ( EventDetailEntity__IsEventDailyPoint((EventDetailEntity_o *)entity, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A06385 )
    {
      sub_1B686D4(&TerminalPramsManager_TypeInfo, v12);
      byte_4A06385 = 1;
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
    dateData = NetworkManager__getDateTime_38135136(BeforeTimeEventDailyPoint_k__BackingField, 0LL).fields._dateData;
    if ( !byte_4A06384 )
    {
      sub_1B686D4(&TerminalPramsManager_TypeInfo, v15);
      byte_4A06384 = 1;
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
    System_DateTime___ctor_62097912(v34, Year, Month, v24, v23->static_fields->EventDailyPointResetAt, 0, 0, 0LL);
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
  System_String_o *String_69130092; // x0
  const MethodInfo *v8; // x5

  if ( (byte_4A0ABE1 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_2035/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_TITLE"*/, callback);
    sub_1B686D4(&StringLiteral_19558/*"freeShopIds"*/, v5);
    sub_1B686D4(&StringLiteral_2034/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_DETAIL"*/, v6);
    byte_4A0ABE1 = 1;
  }
  String_69130092 = UnityEngine_PlayerPrefs__GetString_69130092((System_String_o *)StringLiteral_19558/*"freeShopIds"*/, 0LL);
  if ( System_String__IsNullOrEmpty(String_69130092, 0LL) )
    ActionExtensions__Call(callback, 0LL);
  else
    TerminalSceneComponent__OpenExchangeDialogue(
      this,
      (System_String_o *)StringLiteral_19558/*"freeShopIds"*/,
      (System_String_o *)StringLiteral_2035/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_TITLE"*/,
      (System_String_o *)StringLiteral_2034/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_DETAIL"*/,
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
  System_String_o *String_69130092; // x0
  const MethodInfo *v8; // x5

  if ( (byte_4A0ABE2 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_2037/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_TITLE"*/, callback);
    sub_1B686D4(&StringLiteral_22839/*"returnRarePriShopIds"*/, v5);
    sub_1B686D4(&StringLiteral_2036/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_DETAIL"*/, v6);
    byte_4A0ABE2 = 1;
  }
  String_69130092 = UnityEngine_PlayerPrefs__GetString_69130092((System_String_o *)StringLiteral_22839/*"returnRarePriShopIds"*/, 0LL);
  if ( System_String__IsNullOrEmpty(String_69130092, 0LL) )
    ActionExtensions__Call(callback, 0LL);
  else
    TerminalSceneComponent__OpenExchangeDialogue(
      this,
      (System_String_o *)StringLiteral_22839/*"returnRarePriShopIds"*/,
      (System_String_o *)StringLiteral_2037/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_TITLE"*/,
      (System_String_o *)StringLiteral_2036/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_DETAIL"*/,
      callback,
      v8);
}


void __fastcall TerminalSceneComponent__CheckLastPlayBgm(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTerminalList; // x20
  __int64 v4; // x1
  ScrTerminalListTop_o *v5; // x0

  if ( (byte_4A0ABCA & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A0ABCA = 1;
  }
  mTerminalList = (UnityEngine_Object_o *)this->fields.mTerminalList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mTerminalList, 0LL, 0LL) )
  {
    v5 = this->fields.mTerminalList;
    if ( !v5 )
      sub_1B68930(0LL, v4);
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
  int32_t v20; // w3
  System_Action_o **v21; // x20
  int32_t v22; // w2
  int32_t v23; // w3
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

  if ( (byte_4A0ABE5 & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, callback);
    sub_1B686D4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1B686D4(&LocalizationManager_TypeInfo, v6);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B686D4(&TerminalSceneComponent_TypeInfo, v8);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass254_0__CheckMasterMissionReset_b__0__, v9);
    sub_1B686D4(&TerminalSceneComponent___c__DisplayClass254_0_TypeInfo, v10);
    sub_1B686D4(&StringLiteral_8733/*"MST_MISSION_CHANGE_MSG"*/, v11);
    sub_1B686D4(&StringLiteral_8732/*"MST_MISSION_CHANGE_DECIDE"*/, v12);
    sub_1B686D4(&StringLiteral_3732/*"COMMON_CONFIRM_CLOSE"*/, v13);
    sub_1B686D4(&StringLiteral_1/*""*/, v14);
    sub_1B686D4(&StringLiteral_1212/*"0"*/, v15);
    byte_4A0ABE5 = 1;
  }
  v16 = sub_1B68920(TerminalSceneComponent___c__DisplayClass254_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_20;
  *(_QWORD *)(v16 + 24) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v16 + 24), (int32_t)this, v19, v20);
  *(_QWORD *)(v16 + 32) = callback;
  v21 = (System_Action_o **)(v16 + 32);
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v16 + 32), (int32_t)callback, v22, v23);
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
             (System_String_o *)StringLiteral_1212/*"0"*/,
             0LL);
  v27 = System_Int64__Parse(String, 0LL);
  if ( *v24 )
  {
    if ( v27 )
    {
      if ( v27 != *v24 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v29 = LocalizationManager__Get((System_String_o *)StringLiteral_8733/*"MST_MISSION_CHANGE_MSG"*/, 0LL);
        v30 = LocalizationManager__Get((System_String_o *)StringLiteral_8732/*"MST_MISSION_CHANGE_DECIDE"*/, 0LL);
        v31 = LocalizationManager__Get((System_String_o *)StringLiteral_3732/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
        v32 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B68920(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v32,
          (Il2CppObject *)v16,
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
            0LL);
          return;
        }
LABEL_20:
        sub_1B68930(mPlayerStatus, v18);
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
  int32_t v26; // w3
  System_Action_o **v27; // x20
  BattleResultBondsComponent_c *v28; // x0
  BattleResultBondsComponent_c *v29; // x0
  Il2CppObject *String_69130092; // x21
  System_Object_array *v31; // x0
  System_Object_array *v32; // x22
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x23
  __int64 v35; // x25
  Il2CppObject *v36; // x8
  BattleResultBondsComponent_c *v37; // x0
  BattleResultBondsComponent_c *v38; // x0
  System_Action_o *v39; // x20
  EventServantEntity_o *v40; // x21
  int32_t v41; // w2
  int32_t v42; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v43; // x22
  __int64 v44; // x22
  int32_t v45; // w2
  int32_t v46; // w3
  __int64 v47; // x19
  __int64 v48; // x20
  Il2CppObject *v49; // x8
  int32_t v50; // w2
  int32_t v51; // w3
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x19
  Il2CppObject *v55; // x22
  __int64 v56; // x0
  Il2CppObject *v57; // [xsp+30h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4A0ABE6 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, callBack);
    sub_1B686D4(&BattleResultBondsComponent_TypeInfo, v4);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1B686D4(&Method_DataManager_GetMaster_SvtCoinMaster___, v6);
    sub_1B686D4(&DataManager_TypeInfo, v7);
    sub_1B686D4(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v8);
    sub_1B686D4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v9);
    sub_1B686D4(&GetSvtCoin___TypeInfo, v10);
    sub_1B686D4(&GetSvtCoin_TypeInfo, v11);
    sub_1B686D4(&Method_JsonManager_DeserializeArray_GetSvts___, v12);
    sub_1B686D4(&JsonManager_TypeInfo, v13);
    sub_1B686D4(&LocalizationManager_TypeInfo, v14);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass255_0__CheckNotificationDialog_b__0__, v17);
    sub_1B686D4(&TerminalSceneComponent___c__DisplayClass255_0_TypeInfo, v18);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass255_1__CheckNotificationDialog_b__1__, v19);
    sub_1B686D4(&TerminalSceneComponent___c__DisplayClass255_1_TypeInfo, v20);
    sub_1B686D4(&StringLiteral_12293/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, v21);
    byte_4A0ABE6 = 1;
  }
  v57 = 0LL;
  entity = 0LL;
  v22 = sub_1B68920(TerminalSceneComponent___c__DisplayClass255_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_54;
  *(_QWORD *)(v22 + 16) = callBack;
  v27 = (System_Action_o **)(v22 + 16);
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v22 + 16), (int32_t)callBack, v25, v26);
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
    String_69130092 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_69130092(
                                        v29->static_fields->GET_EXIST_SVT_KEY,
                                        0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v31 = JsonManager__DeserializeArray_object_(
            String_69130092,
            (const MethodInfo_2EAF938 *)Method_JsonManager_DeserializeArray_GetSvts___);
    if ( v31 )
    {
      v32 = v31;
      if ( *(_QWORD *)&v31->max_length )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_54;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantMaster___);
        max_length = v32->max_length;
        if ( max_length >= 1 )
        {
          v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v35 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v35 >= max_length )
              goto LABEL_55;
            v36 = v32->m_Items[v35];
            if ( !v36 || !v34 )
              goto LABEL_54;
            Instance = (DataManager_o *)DataMasterBase_object__object__long___TryGetEntity(
                                          v34,
                                          &entity,
                                          (int64_t)v36[1].klass,
                                          (const MethodInfo_30E46C0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
            if ( (_DWORD)v35 == v32->max_length - 1 )
            {
              v37 = BattleResultBondsComponent_TypeInfo;
              if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
                v37 = BattleResultBondsComponent_TypeInfo;
              }
              UnityEngine_PlayerPrefs__DeleteKey(v37->static_fields->GET_EXIST_SVT_KEY, 0LL);
              ActionExtensions__Call(*v27, 0LL);
            }
            max_length = v32->max_length;
            if ( (int)++v35 >= max_length )
              goto LABEL_29;
          }
          v39 = *(System_Action_o **)(v22 + 24);
          v40 = (EventServantEntity_o *)Instance;
          if ( !v39 )
          {
            v39 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
            System_Action___ctor(
              v39,
              (Il2CppObject *)v22,
              Method_TerminalSceneComponent___c__DisplayClass255_0__CheckNotificationDialog_b__0__,
              0LL);
            *(_QWORD *)(v22 + 24) = v39;
            sub_1B68678((ServantStatusBattleListViewItem_o *)(v22 + 24), (int32_t)v39, v41, v42);
          }
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_SvtCoinMaster___);
          if ( entity )
          {
            v43 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
            Instance = (DataManager_o *)UserServantEntity__getSvtId((UserServantEntity_o *)entity, 0LL);
            if ( v43 )
            {
              Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            v43,
                                            &v57,
                                            (int32_t)Instance,
                                            (const MethodInfo_30E4514 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !v57 )
                  goto LABEL_54;
                if ( SHIDWORD(v57[1].klass) >= 1 )
                {
                  v44 = sub_1B68920(TerminalSceneComponent___c__DisplayClass255_1_TypeInfo);
                  System_Object___ctor((Il2CppObject *)v44, 0LL);
                  if ( !v44 )
                    goto LABEL_54;
                  *(_QWORD *)(v44 + 24) = v22;
                  sub_1B68678((ServantStatusBattleListViewItem_o *)(v44 + 24), v22, v45, v46);
                  v47 = sub_1B6877C(GetSvtCoin___TypeInfo, 1LL);
                  v48 = sub_1B68920(GetSvtCoin_TypeInfo);
                  GetSvtCoin___ctor((GetSvtCoin_o *)v48, 0LL);
                  v49 = v57;
                  if ( !v57 )
                    goto LABEL_54;
                  if ( !v48 )
                    goto LABEL_54;
                  *(_DWORD *)(v48 + 16) = v57[1].klass;
                  *(int32x2_t *)(v48 + 20) = vrev64_s32(*(int32x2_t *)((char *)&v49[1].klass + 4));
                  if ( !v47 )
                    goto LABEL_54;
                  Instance = (DataManager_o *)sub_1B68810(v48, *(_QWORD *)(*(_QWORD *)v47 + 64LL));
                  if ( !Instance )
                  {
                    v56 = sub_1B68954(0LL);
                    sub_1B687FC(v56, 0LL);
                  }
                  if ( !*(_DWORD *)(v47 + 24) )
LABEL_55:
                    sub_1B68938(Instance, v24);
                  *(_QWORD *)(v47 + 32) = v48;
                  sub_1B68678((ServantStatusBattleListViewItem_o *)(v47 + 32), v48, v50, v51);
                  *(_QWORD *)(v44 + 16) = v47;
                  sub_1B68678((ServantStatusBattleListViewItem_o *)(v44 + 16), v47, v52, v53);
                  v39 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
                  System_Action___ctor(
                    v39,
                    (Il2CppObject *)v44,
                    Method_TerminalSceneComponent___c__DisplayClass255_1__CheckNotificationDialog_b__1__,
                    0LL);
                }
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v54 = LocalizationManager__Get((System_String_o *)StringLiteral_12293/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, 0LL);
              v55 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              Instance = (DataManager_o *)EventServantEntity__GetGetMessage(v40, 0LL);
              if ( v55 )
              {
                CommonUI__OpenNotificationDialog(
                  (CommonUI_o *)v55,
                  v54,
                  (System_String_o *)Instance,
                  v39,
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
          sub_1B68930(Instance, v24);
        }
      }
    }
LABEL_29:
    v38 = BattleResultBondsComponent_TypeInfo;
    if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
      v38 = BattleResultBondsComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__DeleteKey(v38->static_fields->GET_EXIST_SVT_KEY, 0LL);
  }
  ActionExtensions__Call(*v27, 0LL);
}


void __fastcall TerminalSceneComponent__CheckOpenCampaignDirectBonus(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x20
  ScrTerminalListTop_o *mTerminalList; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_Action_o *v11; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  int v14; // w22
  ScrTerminalListTop_o *v15; // x23
  bool IsBlankEarthAction; // w25
  System_Action_o *v17; // x24
  const MethodInfo *v18; // x2
  System_Action_o *v19; // x0
  System_Collections_IEnumerator_o *v20; // x0

  if ( (byte_4A0ABDE & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass245_0__CheckOpenCampaignDirectBonus_b__0__, v3);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass245_0__CheckOpenCampaignDirectBonus_b__1__, v4);
    sub_1B686D4(&TerminalSceneComponent___c__DisplayClass245_0_TypeInfo, v5);
    byte_4A0ABDE = 1;
  }
  v6 = sub_1B68920(TerminalSceneComponent___c__DisplayClass245_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6 )
    goto LABEL_19;
  *(_QWORD *)(v6 + 16) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v6 + 16), (int32_t)this, v9, v10);
  this->fields._IsPlayingCampaignDirectBonus_k__BackingField = 1;
  v11 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)v6,
    Method_TerminalSceneComponent___c__DisplayClass245_0__CheckOpenCampaignDirectBonus_b__0__,
    0LL);
  *(_QWORD *)(v6 + 24) = v11;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v6 + 24), (int32_t)v11, v12, v13);
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList
    || (mTerminalList = (ScrTerminalListTop_o *)ScrTerminalListTop__CheckTerminalTopEffect(mTerminalList, 0LL),
        !this->fields.mTerminalList)
    || (v14 = (int)mTerminalList,
        mTerminalList = (ScrTerminalListTop_o *)ScrTerminalListTop__GetCurrentLoginEntity(
                                                  this->fields.mTerminalList,
                                                  0LL),
        !this->fields.mTerminalList) )
  {
LABEL_19:
    sub_1B68930(mTerminalList, v8);
  }
  v15 = mTerminalList;
  IsBlankEarthAction = ScrTerminalListTop__IsBlankEarthAction(this->fields.mTerminalList, 0LL);
  v17 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v6,
    Method_TerminalSceneComponent___c__DisplayClass245_0__CheckOpenCampaignDirectBonus_b__1__,
    0LL);
  if ( v14 > 0 || v15 || IsBlankEarthAction )
  {
    if ( v15 || v14 < 1 )
    {
      if ( !IsBlankEarthAction )
      {
        v19 = *(System_Action_o **)(v6 + 24);
        goto LABEL_18;
      }
      v20 = TerminalSceneComponent__CoWaitBlankEerthActionEnd(this, v17, v18);
    }
    else
    {
      v20 = TerminalSceneComponent__CoWaitTerminalTopEffectEnd(this, v17, v18);
    }
    UnityEngine_MonoBehaviour__StartCoroutine_69157088((UnityEngine_MonoBehaviour_o *)this, v20, 0LL);
    return;
  }
  v19 = v17;
LABEL_18:
  ActionExtensions__Call(v19, 0LL);
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

  if ( (byte_4A0ABD6 & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, *(_QWORD *)&warId);
    sub_1B686D4(&Method_SingletonTemplate_QuestTree__get_Instance__, v4);
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v5);
    byte_4A0ABD6 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_1B68930(Instance, v7);
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
  void *Instance; // x0
  __int64 v35; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x1
  int32_t v41; // w2
  int32_t v42; // w3
  CommonUI_CampaignDirectBonusData_array *CampaignDirectBonus; // x21
  TerminalPramsManager_c *v44; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  __int64 v46; // x0
  Il2CppObject *mTerminalList; // x23
  __int64 v48; // x21
  System_Action_object__o *v49; // x22
  int32_t v50; // w2
  int32_t v51; // w3
  System_Action_object__o *v52; // x22
  int32_t v53; // w2
  int32_t v54; // w3
  Il2CppObject *v55; // x24
  System_Action_object__o *v56; // x22
  int32_t v57; // w2
  int32_t v58; // w3
  Il2CppObject *v59; // x24
  System_Action_object__o *v60; // x22
  int32_t v61; // w2
  int32_t v62; // w3
  Il2CppObject *v63; // x24
  System_Action_object__o *v64; // x22
  int32_t v65; // w2
  int32_t v66; // w3
  System_Action_object__o *v67; // x22
  int32_t v68; // w2
  int32_t v69; // w3
  System_Action_object__o *v70; // x22
  int32_t v71; // w2
  int32_t v72; // w3
  System_Action_object__o *v73; // x22
  int32_t v74; // w2
  int32_t v75; // w3
  int32_t v76; // w2
  int32_t v77; // w3
  System_Action_object__o *v78; // x22
  Il2CppObject *v79; // x23
  struct TerminalSceneComponent___c_StaticFields *v80; // x0
  int32_t v81; // w2
  int32_t v82; // w3
  System_Action_object__o *v83; // x22
  int32_t v84; // w2
  int32_t v85; // w3
  System_Action_object__o *v86; // x22
  int32_t v87; // w2
  int32_t v88; // w3
  System_Action_object__o *v89; // x22
  int32_t v90; // w2
  int32_t v91; // w3
  System_Action_object__o *v92; // x22
  int32_t v93; // w2
  int32_t v94; // w3
  System_Action_object__o *v95; // x22
  int32_t v96; // w2
  int32_t v97; // w3
  System_Action_object__o *v98; // x22
  int32_t v99; // w2
  int32_t v100; // w3
  System_Action_object__o *v101; // x19
  int32_t v102; // w2
  int32_t v103; // w3
  ActionChain_o *v104; // x19
  __int64 v105; // x21
  System_Action_o *v106; // x22
  int32_t v107; // w2
  int32_t v108; // w3

  if ( (byte_4A0ABDD & 1) == 0 )
  {
    sub_1B686D4(&ActionChain_TypeInfo, afterChain);
    sub_1B686D4(&System_Action___TypeInfo, v7);
    sub_1B686D4(&System_Action_Action____TypeInfo, v8);
    sub_1B686D4(&System_Action_Action__TypeInfo, v9);
    sub_1B686D4(&System_Action_TypeInfo, v10);
    sub_1B686D4(&Method_CommonUI_StartLoginMessages__, v11);
    sub_1B686D4(&Method_CommonUI_StartServantEventJoinLeaveNotification__, v12);
    sub_1B686D4(&Method_ScrTerminalListTop_ShowTerminalMessagesDialogue__, v13);
    sub_1B686D4(&Method_ScrTerminalListTop_StartShowWarClearReward__, v14);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v16);
    sub_1B686D4(&Method_TerminalSceneComponent_CheckExchangeDialogTheFree__, v17);
    sub_1B686D4(&Method_TerminalSceneComponent_CheckExchangeDialogTheReturn__, v18);
    sub_1B686D4(&Method_TerminalSceneComponent_CheckMasterMissionReset__, v19);
    sub_1B686D4(&Method_TerminalSceneComponent_CheckNotificationDialog__, v20);
    sub_1B686D4(&Method_TerminalSceneComponent_CheckSaveRouteSelect__, v21);
    sub_1B686D4(&Method_TerminalSceneComponent_CheckSpecialAscensionTutorial__, v22);
    sub_1B686D4(&Method_TerminalSceneComponent_CheckTutorialOnTerminalAfterFreeExchangeDialog__, v23);
    sub_1B686D4(&Method_TerminalSceneComponent_CheckTutorialOnTerminal__, v24);
    sub_1B686D4(&TutorialFlag_TypeInfo, v25);
    sub_1B686D4(&Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__244_2__, v26);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass244_0__CheckRewardPopupChain_b__0__, v27);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass244_0__CheckRewardPopupChain_b__1__, v28);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass244_0__CheckRewardPopupChain_b__3__, v29);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass244_0__CheckRewardPopupChain_b__4__, v30);
    sub_1B686D4(&TerminalSceneComponent___c__DisplayClass244_0_TypeInfo, v31);
    sub_1B686D4(&TerminalSceneComponent___c_TypeInfo, v32);
    byte_4A0ABDD = 1;
  }
  v33 = sub_1B68920(TerminalSceneComponent___c__DisplayClass244_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v33, 0LL);
  if ( !v33 )
    goto LABEL_51;
  *(_QWORD *)(v33 + 16) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v33 + 16), (int32_t)this, v36, v37);
  *(_QWORD *)(v33 + 24) = afterChain;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v33 + 24), (int32_t)afterChain, v38, v39);
  if ( !checkTutorialEnded )
    goto LABEL_8;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_37438804(102, 0LL) )
  {
LABEL_8:
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_51;
    if ( CommonUI__get_CampaignDirectBonus((CommonUI_o *)Instance, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_51;
      CampaignDirectBonus = CommonUI__get_CampaignDirectBonus((CommonUI_o *)Instance, 0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A06380 )
      {
        sub_1B686D4(&TerminalPramsManager_TypeInfo, v40);
        byte_4A06380 = 1;
      }
      v44 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v44 = TerminalPramsManager_TypeInfo;
      }
      static_fields = v44->static_fields;
      static_fields->_CampaignDirectBonus_k__BackingField = CampaignDirectBonus;
      sub_1B68678(
        (ServantStatusBattleListViewItem_o *)&static_fields->_CampaignDirectBonus_k__BackingField,
        (int32_t)CampaignDirectBonus,
        v41,
        v42);
      TerminalPramsManager__CampaignDirectBonus_SaveData(0LL);
    }
    v46 = sub_1B6877C(System_Action_Action____TypeInfo, 16LL);
    mTerminalList = (Il2CppObject *)this->fields.mTerminalList;
    v48 = v46;
    v49 = (System_Action_object__o *)sub_1B68920(System_Action_Action__TypeInfo);
    System_Action_object____ctor(v49, mTerminalList, Method_ScrTerminalListTop_StartShowWarClearReward__, 0LL);
    if ( v48 )
    {
      if ( !*(_DWORD *)(v48 + 24) )
        goto LABEL_50;
      *(_QWORD *)(v48 + 32) = v49;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v48 + 32), (int32_t)v49, v50, v51);
      v52 = (System_Action_object__o *)sub_1B68920(System_Action_Action__TypeInfo);
      System_Action_object____ctor(
        v52,
        (Il2CppObject *)v33,
        Method_TerminalSceneComponent___c__DisplayClass244_0__CheckRewardPopupChain_b__0__,
        0LL);
      if ( *(_DWORD *)(v48 + 24) <= 1u )
        goto LABEL_50;
      *(_QWORD *)(v48 + 40) = v52;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v48 + 40), (int32_t)v52, v53, v54);
      v55 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v56 = (System_Action_object__o *)sub_1B68920(System_Action_Action__TypeInfo);
      System_Action_object____ctor(v56, v55, Method_CommonUI_StartServantEventJoinLeaveNotification__, 0LL);
      if ( *(_DWORD *)(v48 + 24) <= 2u )
        goto LABEL_50;
      *(_QWORD *)(v48 + 48) = v56;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v48 + 48), (int32_t)v56, v57, v58);
      v59 = (Il2CppObject *)this->fields.mTerminalList;
      v60 = (System_Action_object__o *)sub_1B68920(System_Action_Action__TypeInfo);
      System_Action_object____ctor(v60, v59, Method_ScrTerminalListTop_ShowTerminalMessagesDialogue__, 0LL);
      if ( *(_DWORD *)(v48 + 24) <= 3u )
        goto LABEL_50;
      *(_QWORD *)(v48 + 56) = v60;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v48 + 56), (int32_t)v60, v61, v62);
      v63 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v64 = (System_Action_object__o *)sub_1B68920(System_Action_Action__TypeInfo);
      System_Action_object____ctor(v64, v63, Method_CommonUI_StartLoginMessages__, 0LL);
      if ( *(_DWORD *)(v48 + 24) <= 4u )
        goto LABEL_50;
      *(_QWORD *)(v48 + 64) = v64;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v48 + 64), (int32_t)v64, v65, v66);
      v67 = (System_Action_object__o *)sub_1B68920(System_Action_Action__TypeInfo);
      System_Action_object____ctor(
        v67,
        (Il2CppObject *)v33,
        Method_TerminalSceneComponent___c__DisplayClass244_0__CheckRewardPopupChain_b__1__,
        0LL);
      if ( *(_DWORD *)(v48 + 24) <= 5u )
        goto LABEL_50;
      *(_QWORD *)(v48 + 72) = v67;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v48 + 72), (int32_t)v67, v68, v69);
      v70 = (System_Action_object__o *)sub_1B68920(System_Action_Action__TypeInfo);
      System_Action_object____ctor(
        v70,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent_CheckSpecialAscensionTutorial__,
        0LL);
      if ( *(_DWORD *)(v48 + 24) <= 6u )
        goto LABEL_50;
      *(_QWORD *)(v48 + 80) = v70;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v48 + 80), (int32_t)v70, v71, v72);
      v73 = (System_Action_object__o *)sub_1B68920(System_Action_Action__TypeInfo);
      System_Action_object____ctor(
        v73,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent_CheckTutorialOnTerminal__,
        0LL);
      if ( *(_DWORD *)(v48 + 24) <= 7u )
        goto LABEL_50;
      *(_QWORD *)(v48 + 88) = v73;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v48 + 88), (int32_t)v73, v74, v75);
      Instance = TerminalSceneComponent___c_TypeInfo;
      if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
        Instance = TerminalSceneComponent___c_TypeInfo;
      }
      v78 = *(System_Action_object__o **)(*((_QWORD *)Instance + 23) + 88LL);
      if ( !v78 )
      {
        if ( !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          Instance = TerminalSceneComponent___c_TypeInfo;
        }
        v79 = (Il2CppObject *)**((_QWORD **)Instance + 23);
        v78 = (System_Action_object__o *)sub_1B68920(System_Action_Action__TypeInfo);
        System_Action_object____ctor(v78, v79, Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__244_2__, 0LL);
        v80 = TerminalSceneComponent___c_TypeInfo->static_fields;
        v80->__9__244_2 = (struct System_Action_Action__o *)v78;
        sub_1B68678((ServantStatusBattleListViewItem_o *)&v80->__9__244_2, (int32_t)v78, v81, v82);
      }
      if ( *(_DWORD *)(v48 + 24) <= 8u )
        goto LABEL_50;
      *(_QWORD *)(v48 + 96) = v78;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v48 + 96), (int32_t)v78, v76, v77);
      v83 = (System_Action_object__o *)sub_1B68920(System_Action_Action__TypeInfo);
      System_Action_object____ctor(
        v83,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent_CheckNotificationDialog__,
        0LL);
      if ( *(_DWORD *)(v48 + 24) <= 9u )
        goto LABEL_50;
      *(_QWORD *)(v48 + 104) = v83;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v48 + 104), (int32_t)v83, v84, v85);
      v86 = (System_Action_object__o *)sub_1B68920(System_Action_Action__TypeInfo);
      System_Action_object____ctor(
        v86,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent_CheckMasterMissionReset__,
        0LL);
      if ( *(_DWORD *)(v48 + 24) <= 0xAu )
        goto LABEL_50;
      *(_QWORD *)(v48 + 112) = v86;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v48 + 112), (int32_t)v86, v87, v88);
      v89 = (System_Action_object__o *)sub_1B68920(System_Action_Action__TypeInfo);
      System_Action_object____ctor(v89, (Il2CppObject *)this, Method_TerminalSceneComponent_CheckSaveRouteSelect__, 0LL);
      if ( *(_DWORD *)(v48 + 24) <= 0xBu )
        goto LABEL_50;
      *(_QWORD *)(v48 + 120) = v89;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v48 + 120), (int32_t)v89, v90, v91);
      v92 = (System_Action_object__o *)sub_1B68920(System_Action_Action__TypeInfo);
      System_Action_object____ctor(
        v92,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent_CheckExchangeDialogTheFree__,
        0LL);
      if ( *(_DWORD *)(v48 + 24) <= 0xCu )
        goto LABEL_50;
      *(_QWORD *)(v48 + 128) = v92;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v48 + 128), (int32_t)v92, v93, v94);
      v95 = (System_Action_object__o *)sub_1B68920(System_Action_Action__TypeInfo);
      System_Action_object____ctor(
        v95,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent_CheckExchangeDialogTheReturn__,
        0LL);
      if ( *(_DWORD *)(v48 + 24) <= 0xDu )
        goto LABEL_50;
      *(_QWORD *)(v48 + 136) = v95;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v48 + 136), (int32_t)v95, v96, v97);
      v98 = (System_Action_object__o *)sub_1B68920(System_Action_Action__TypeInfo);
      System_Action_object____ctor(
        v98,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent_CheckTutorialOnTerminalAfterFreeExchangeDialog__,
        0LL);
      if ( *(_DWORD *)(v48 + 24) <= 0xEu )
        goto LABEL_50;
      *(_QWORD *)(v48 + 144) = v98;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v48 + 144), (int32_t)v98, v99, v100);
      v101 = (System_Action_object__o *)sub_1B68920(System_Action_Action__TypeInfo);
      System_Action_object____ctor(
        v101,
        (Il2CppObject *)v33,
        Method_TerminalSceneComponent___c__DisplayClass244_0__CheckRewardPopupChain_b__3__,
        0LL);
      if ( *(_DWORD *)(v48 + 24) <= 0xFu )
        goto LABEL_50;
      *(_QWORD *)(v48 + 152) = v101;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v48 + 152), (int32_t)v101, v102, v103);
      v104 = (ActionChain_o *)sub_1B68920(ActionChain_TypeInfo);
      ActionChain___ctor_46345900(v104, (System_Action_Action__array *)v48, 0LL);
      v105 = sub_1B6877C(System_Action___TypeInfo, 1LL);
      v106 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
      System_Action___ctor(
        v106,
        (Il2CppObject *)v33,
        Method_TerminalSceneComponent___c__DisplayClass244_0__CheckRewardPopupChain_b__4__,
        0LL);
      if ( !v105 )
        goto LABEL_51;
      if ( !*(_DWORD *)(v105 + 24) )
LABEL_50:
        sub_1B68938(Instance, v35);
      *(_QWORD *)(v105 + 32) = v106;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v105 + 32), (int32_t)v106, v107, v108);
      if ( v104 )
      {
        Instance = ChainableActionBase__Final((ChainableActionBase_o *)v104, (System_Action_array *)v105, 0LL);
        if ( Instance )
        {
          ChainableActionBase__Execute((ChainableActionBase_o *)Instance, 0LL);
          goto LABEL_47;
        }
      }
    }
LABEL_51:
    sub_1B68930(Instance, v35);
  }
  ActionExtensions__Call(*(System_Action_o **)(v33 + 24), 0LL);
LABEL_47:
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
  int32_t v15; // w3
  NetworkManager_ResultCallbackFunc_o *v16; // x20
  System_Int32_array *routes; // [xsp+8h] [xbp-38h] BYREF
  int32_t phase; // [xsp+18h] [xbp-28h] BYREF
  int32_t questId; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4A0ABE4 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, callback);
    sub_1B686D4(&Method_NetworkManager_getRequest_BattleRouteSelectRequest___, v4);
    sub_1B686D4(&NetworkManager_TypeInfo, v5);
    sub_1B686D4(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1B686D4(&ScriptManager_TypeInfo, v7);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass252_0__CheckSaveRouteSelect_b__0__, v9);
    sub_1B686D4(&TerminalSceneComponent___c__DisplayClass252_0_TypeInfo, v10);
    byte_4A0ABE4 = 1;
  }
  v11 = sub_1B68920(TerminalSceneComponent___c__DisplayClass252_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_19;
  *(_QWORD *)(v11 + 16) = callback;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)callback, v14, v15);
  phase = -1;
  questId = -1;
  routes = 0LL;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( ScriptManager__GetSelectRouteArrayInCollection(&questId, &phase, &routes, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    if ( !Instance )
      goto LABEL_19;
    if ( QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, phase, 0LL) )
    {
      v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1B68920(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v16,
        (Il2CppObject *)v11,
        Method_TerminalSceneComponent___c__DisplayClass252_0__CheckSaveRouteSelect_b__0__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__getRequest_object_(
                   v16,
                   (const MethodInfo_2ECB448 *)Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
      if ( Instance )
      {
        BattleRouteSelectRequest__beginRequest((BattleRouteSelectRequest_o *)Instance, questId, phase, routes, 0LL);
        return;
      }
LABEL_19:
      sub_1B68930(Instance, v13);
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
  if ( (byte_4A0ABE7 & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_1B686D4(&CombineRootComponent_TypeInfo, callback);
    byte_4A0ABE7 = 1;
  }
  if ( !v4->fields.isTutorialAfter )
  {
    mTerminalMap = v4->fields.mTerminalMap;
    if ( !mTerminalMap || (this = (TerminalSceneComponent_o *)mTerminalMap->fields.dispRoot) == 0LL )
      sub_1B68930(this, callback);
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

  if ( (byte_4A0ABD3 & 1) == 0 )
  {
    sub_1B686D4(&OpeningMovieData_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_1B686D4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v5);
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v6);
    sub_1B686D4(&TutorialFlag_TypeInfo, v7);
    sub_1B686D4(&StringLiteral_13450/*"TUTORIAL_QUEST_ID1"*/, v8);
    sub_1B686D4(&StringLiteral_13451/*"TUTORIAL_QUEST_ID2"*/, v9);
    sub_1B686D4(&StringLiteral_13452/*"TUTORIAL_QUEST_ID3"*/, v10);
    sub_1B686D4(&StringLiteral_13453/*"TUTORIAL_QUEST_ID4"*/, v11);
    byte_4A0ABD3 = 1;
  }
  this->fields.mTutorialKind = 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_37438804(102, 0LL) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__GetProgress(0LL) == 4 )
      return 0;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1B68930(Instance, v14);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A05902 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v12);
    byte_4A05902 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  this->fields.mIsStart_LoginBonusWhiteBg = !v16->static_fields->_IsAutoResume_k__BackingField;
  if ( !byte_4A041D7 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v12);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4A041D7 = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_4A058FC )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v12);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4A058FC = 1;
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
  if ( !byte_4A05900 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v14);
    byte_4A05900 = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_WarId_k__BackingField = FirstWarId;
  if ( !byte_4A058FF )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v14);
    v18 = TerminalPramsManager_TypeInfo;
    byte_4A058FF = 1;
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
  v19 = SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  this->fields.mTutorialKind = 5;
  v20 = (clsQuestCheck_o *)v19;
  Instance = (CommonUI_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_13450/*"TUTORIAL_QUEST_ID1"*/, 0LL);
  if ( !v20 )
    goto LABEL_83;
  if ( !clsQuestCheck__IsQuestClear(v20, (int32_t)Instance, 0, 0LL) )
  {
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_13450/*"TUTORIAL_QUEST_ID1"*/, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A058FA )
    {
      sub_1B686D4(&TerminalPramsManager_TypeInfo, v14);
      byte_4A058FA = 1;
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
  v21 = ConstantMaster__getValue((System_String_o *)StringLiteral_13451/*"TUTORIAL_QUEST_ID2"*/, 0LL);
  if ( !clsQuestCheck__IsQuestClear(v20, v21, 0, 0LL) )
  {
    v15 = 0;
    v26 = 1;
    goto LABEL_70;
  }
  v22 = ConstantMaster__getValue((System_String_o *)StringLiteral_13452/*"TUTORIAL_QUEST_ID3"*/, 0LL);
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
  if ( !TutorialFlag__Get_37438804(101, 0LL) )
    goto LABEL_86;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(2, 0LL) )
  {
LABEL_86:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A05521 )
    {
      sub_1B686D4(&TerminalPramsManager_TypeInfo, v23);
      byte_4A05521 = 1;
    }
    v30 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v30 = TerminalPramsManager_TypeInfo;
    }
    v30->static_fields->_SummonType_k__BackingField = 1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_83;
    v31 = 40;
    goto LABEL_80;
  }
  v24 = ConstantMaster__getValue((System_String_o *)StringLiteral_13453/*"TUTORIAL_QUEST_ID4"*/, 0LL);
  v15 = 0;
  if ( clsQuestCheck__IsQuestClear(v20, v24, 0, 0LL) )
    return v15;
  v25 = ConstantMaster__getValue((System_String_o *)StringLiteral_13453/*"TUTORIAL_QUEST_ID4"*/, 0LL);
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

  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap || (this = (TerminalSceneComponent_o *)mTerminalMap->fields.dispRoot) == 0LL )
    sub_1B68930(this, callback);
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
    ActionExtensions__Call(callback, 0LL);
  else
    EventTutorialMaster__CheckTutorial(0, 2, callback, 0, 0, 0, 0, 0LL);
}


void __fastcall TerminalSceneComponent__CheckTutorialOnTerminalAfterFreeExchangeDialog(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  EventTutorialMaster__CheckTutorial(0, 80, callback, 0, 0, 0, 0, 0LL);
}


void __fastcall TerminalSceneComponent__ClearTransitionInfo(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalTransitionInfo_o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A0ABAE & 1) == 0 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, method);
    sub_1B686D4(&TerminalTransitionInfo_TypeInfo, v3);
    byte_4A0ABAE = 1;
  }
  v4 = (TerminalTransitionInfo_o *)sub_1B68920(TerminalTransitionInfo_TypeInfo);
  TerminalTransitionInfo___ctor(v4, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__TerminalTransitionInfoSave_SaveData(v4, 0LL);
  this->fields._TransitionInfo_k__BackingField = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields._TransitionInfo_k__BackingField, 0, v5, v6);
}


System_Collections_IEnumerator_o *__fastcall TerminalSceneComponent__CoWaitBlankEerthActionEnd(
        TerminalSceneComponent_o *this,
        System_Action_o *openCampaignDirectBonus,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A0ABE0 & 1) == 0 )
  {
    sub_1B686D4(&TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__247_TypeInfo, openCampaignDirectBonus);
    byte_4A0ABE0 = 1;
  }
  v5 = sub_1B68920(TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__247_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = openCampaignDirectBonus;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)openCampaignDirectBonus, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd(
        TerminalSceneComponent_o *this,
        System_Action_o *openCampaignDirectBonus,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A0ABDF & 1) == 0 )
  {
    sub_1B686D4(&TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__246_TypeInfo, openCampaignDirectBonus);
    byte_4A0ABDF = 1;
  }
  v5 = sub_1B68920(TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__246_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = openCampaignDirectBonus;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)openCampaignDirectBonus, v8, v9);
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

  if ( (byte_4A0ABAD & 1) == 0 )
  {
    sub_1B686D4(&TerminalTransitionInfo_TypeInfo, info);
    byte_4A0ABAD = 1;
  }
  v5 = (TerminalTransitionInfo_o *)sub_1B68920(TerminalTransitionInfo_TypeInfo);
  TerminalTransitionInfo___ctor(v5, 0LL);
  this->fields._TransitionInfo_k__BackingField = v5;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields._TransitionInfo_k__BackingField, (int32_t)v5, v6, v7);
  TransitionInfo_k__BackingField = this->fields._TransitionInfo_k__BackingField;
  if ( !TransitionInfo_k__BackingField )
    sub_1B68930(0LL, v8);
  TerminalTransitionInfo__SetParameters(TransitionInfo_k__BackingField, info, 0LL);
}


void __fastcall TerminalSceneComponent__EndAuto(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  ScrPlayerStatus_o *mPlayerStatus; // x19
  TerminalPramsManager_c *v5; // x0
  __int64 v6; // x1

  if ( (byte_4A0ABBE & 1) == 0 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, method);
    byte_4A0ABBE = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A0AC95 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, method);
    byte_4A0AC95 = 1;
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
    if ( !byte_4A0AC96 )
    {
      sub_1B686D4(&TerminalPramsManager_TypeInfo, method);
      byte_4A0AC96 = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    if ( !mPlayerStatus )
      sub_1B68930(v5, method);
    ScrPlayerStatus__OpenMasterMission(
      mPlayerStatus,
      0LL,
      v5->static_fields->_MasterMissionTargetType_k__BackingField,
      0LL);
    if ( !byte_4A03EB0 )
    {
      sub_1B686D4(&TerminalPramsManager_TypeInfo, v6);
      byte_4A03EB0 = 1;
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
  if ( (byte_4A0ABA1 & 1) == 0 )
  {
    sub_1B686D4(&FSUtility_TypeInfo, method);
    byte_4A0ABA1 = 1;
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
  __int64 v20; // x20
  AvalonSceneManager_o *Instance; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x3
  struct ScrTerminalListTop_o *mTerminalList; // x8
  System_Action_o *v30; // x2
  _DWORD *monitor; // x8
  _DWORD *v32; // x8
  _DWORD *v33; // x8
  _QWORD *v34; // x8
  __int64 v35; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v37; // x1
  int32_t v38; // w22
  int32_t v39; // w23
  SceneJumpInfo_o *v40; // x21
  TerminalPramsManager_c *v41; // x0
  __int64 v42; // x1
  int32_t v43; // w2
  int32_t v44; // w3
  TerminalPramsManager_c *v45; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  ScrTerminalMap_o *mTerminalMap; // x22
  int32_t items_high; // w23
  __int64 v49; // x1
  System_String_o *MapModelEntryAnimationName; // x22
  TerminalPramsManager_c *v51; // x0
  Il2CppObject *v52; // x0
  float v53; // s8
  CommonUI_o *v54; // x19
  System_Action_o *v55; // x21
  Il2CppObject *v56; // x19
  System_Action_o *v57; // x21
  CommonUI_o *v58; // x21
  ScrTerminalMap_o *v59; // x19
  System_Action_o *v60; // x21

  if ( (byte_4A0ABC0 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1B686D4(&AvalonSceneManager_TypeInfo, v9);
    sub_1B686D4(&SceneJumpInfo_TypeInfo, v10);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B686D4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v12);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v13);
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v14);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass196_0__FadeInAndTriggerEventEffects_b__0__, v15);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass196_0__FadeInAndTriggerEventEffects_b__1__, v16);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass196_0__FadeInAndTriggerEventEffects_b__4__, v17);
    sub_1B686D4(&TerminalSceneComponent___c__DisplayClass196_0_TypeInfo, v18);
    sub_1B686D4(&StringLiteral_1/*""*/, v19);
    byte_4A0ABC0 = 1;
  }
  v20 = sub_1B68920(TerminalSceneComponent___c__DisplayClass196_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_99;
  *(float *)(v20 + 16) = fadeTime;
  *(_QWORD *)(v20 + 24) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v20 + 24), (int32_t)this, v23, v24);
  *(_QWORD *)(v20 + 40) = callback;
  *(_DWORD *)(v20 + 32) = eventId;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v20 + 40), (int32_t)callback, v25, v26);
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_99;
  v22 = *(unsigned int *)(v20 + 32);
  if ( mTerminalList->fields.isBackFromBlankEarthMap )
  {
    v30 = *(System_Action_o **)(v20 + 40);
LABEL_7:
    TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(this, v22, v30, v28);
    return;
  }
  if ( (int)v22 >= 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A06399 )
    {
      sub_1B686D4(&TerminalPramsManager_TypeInfo, v22);
      byte_4A06399 = 1;
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
      if ( !byte_4A06399 )
      {
        sub_1B686D4(&TerminalPramsManager_TypeInfo, v22);
        byte_4A06399 = 1;
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
      if ( monitor[4] == *(_DWORD *)(v20 + 32) )
      {
        if ( !LODWORD(Instance[2].fields.targetRoot) )
          j_il2cpp_runtime_class_init_0(Instance);
        if ( !byte_4A06399 )
        {
          sub_1B686D4(&TerminalPramsManager_TypeInfo, v22);
          byte_4A06399 = 1;
        }
        Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
        }
        v32 = Instance[1].fields.m_listUnloadScenes[5].monitor;
        if ( !v32 )
          goto LABEL_99;
        if ( v32[5] )
        {
          if ( !LODWORD(Instance[2].fields.targetRoot) )
            j_il2cpp_runtime_class_init_0(Instance);
          if ( !byte_4A06399 )
          {
            sub_1B686D4(&TerminalPramsManager_TypeInfo, v22);
            byte_4A06399 = 1;
          }
          Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
          }
          v33 = Instance[1].fields.m_listUnloadScenes[5].monitor;
          if ( v33 )
          {
            if ( v33[5] == 1 )
            {
              if ( !LODWORD(Instance[2].fields.targetRoot) )
                j_il2cpp_runtime_class_init_0(Instance);
              if ( !byte_4A06399 )
              {
                sub_1B686D4(&TerminalPramsManager_TypeInfo, v22);
                byte_4A06399 = 1;
              }
              Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
              }
              v34 = Instance[1].fields.m_listUnloadScenes[5].monitor;
              if ( !v34 )
                goto LABEL_99;
              v35 = v34[3];
              if ( v35
                && *(int *)(v35 + 24) >= 1
                && !(IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v35 + 32), 0LL)) )
              {
                if ( !*(_DWORD *)(v35 + 24) )
                  sub_1B68938(IsNullOrEmpty, v37);
                v38 = System_Int32__Parse(*(System_String_o **)(v35 + 32), 0LL) + 1;
              }
              else
              {
                v38 = 0;
              }
              v39 = *(_DWORD *)(v20 + 32);
              v40 = (SceneJumpInfo_o *)sub_1B68920(SceneJumpInfo_TypeInfo);
              SceneJumpInfo___ctor_38336528(v40, (System_String_o *)StringLiteral_1/*""*/, v39, v38, 0LL);
              Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !Instance )
                goto LABEL_99;
              AvalonSceneManager__transitionScene(Instance, 72, 1, (Il2CppObject *)v40, 0LL);
              Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
            }
            if ( !LODWORD(Instance[2].fields.targetRoot) )
              j_il2cpp_runtime_class_init_0(Instance);
            if ( !byte_4A06399 )
            {
              sub_1B686D4(&TerminalPramsManager_TypeInfo, v22);
              byte_4A06399 = 1;
            }
            v41 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v41 = TerminalPramsManager_TypeInfo;
            }
            Instance = (AvalonSceneManager_o *)v41->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
            if ( Instance )
            {
              SpecifiedSceneInfo__InitParameter((SpecifiedSceneInfo_o *)Instance, 0LL);
              if ( !byte_4A06378 )
              {
                sub_1B686D4(&TerminalPramsManager_TypeInfo, v42);
                byte_4A06378 = 1;
              }
              v45 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v45 = TerminalPramsManager_TypeInfo;
              }
              static_fields = v45->static_fields;
              static_fields->_SpecifiedChangeSceneInfo_k__BackingField = 0LL;
              sub_1B68678(
                (ServantStatusBattleListViewItem_o *)&static_fields->_SpecifiedChangeSceneInfo_k__BackingField,
                0,
                v43,
                v44);
              LODWORD(v22) = *(_DWORD *)(v20 + 32);
              v30 = *(System_Action_o **)(v20 + 40);
              goto LABEL_7;
            }
          }
LABEL_99:
          sub_1B68930(Instance, v22);
        }
      }
    }
  }
  if ( TerminalSceneComponent__IsEnabledMapOnEvent((TerminalSceneComponent_o *)Instance, *(_DWORD *)(v20 + 32), v27) )
  {
    Instance = (AvalonSceneManager_o *)this->fields.mTerminalMap;
    if ( !Instance )
      goto LABEL_99;
    if ( !ScrTerminalMap__IsMapModel((ScrTerminalMap_o *)Instance, 0LL) )
      goto LABEL_88;
    mTerminalMap = this->fields.mTerminalMap;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A05B28 )
    {
      sub_1B686D4(&TerminalPramsManager_TypeInfo, v22);
      byte_4A05B28 = 1;
    }
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    }
    items_high = HIDWORD(Instance[1].fields.m_listUnloadScenes[3].fields._items);
    if ( !byte_4A05B29 )
    {
      sub_1B686D4(&TerminalPramsManager_TypeInfo, v22);
      Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
      byte_4A05B29 = 1;
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
    if ( !byte_4A0637B )
    {
      sub_1B686D4(&TerminalPramsManager_TypeInfo, v49);
      byte_4A0637B = 1;
    }
    v51 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v51 = TerminalPramsManager_TypeInfo;
    }
    v51->static_fields->_MapModelClearQuestId_k__BackingField = 0;
    if ( !byte_4A0637C )
    {
      sub_1B686D4(&TerminalPramsManager_TypeInfo, v49);
      v51 = TerminalPramsManager_TypeInfo;
      byte_4A0637C = 1;
    }
    if ( !v51->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v51);
      v51 = TerminalPramsManager_TypeInfo;
    }
    v51->static_fields->_MapModelClearPhaseCount_k__BackingField = 0;
    if ( !System_String__IsNullOrEmpty(MapModelEntryAnimationName, 0LL) )
    {
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v58 = (CommonUI_o *)Instance;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v58 )
        goto LABEL_99;
      CommonUI__maskFadein(v58, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
      v59 = this->fields.mTerminalMap;
      v60 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
      System_Action___ctor(
        v60,
        (Il2CppObject *)v20,
        Method_TerminalSceneComponent___c__DisplayClass196_0__FadeInAndTriggerEventEffects_b__4__,
        0LL);
      if ( !v59 )
        goto LABEL_99;
      ScrTerminalMap__PlayMapModelEntryAnimation(v59, MapModelEntryAnimationName, v60, 0LL);
    }
    else
    {
LABEL_88:
      v52 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v53 = *(float *)(v20 + 16);
      v54 = (CommonUI_o *)v52;
      v55 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
      System_Action___ctor(
        v55,
        (Il2CppObject *)v20,
        Method_TerminalSceneComponent___c__DisplayClass196_0__FadeInAndTriggerEventEffects_b__1__,
        0LL);
      if ( !v54 )
        goto LABEL_99;
      CommonUI__maskFadein(v54, v53, v55, 0LL);
    }
  }
  else
  {
    v56 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    v57 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(
      v57,
      (Il2CppObject *)v20,
      Method_TerminalSceneComponent___c__DisplayClass196_0__FadeInAndTriggerEventEffects_b__0__,
      0LL);
    if ( !v56 )
      goto LABEL_99;
    QuestAfterAction__LoadVoice((QuestAfterAction_o *)v56, v57, 0LL);
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
  int32_t v18; // w3
  System_Action_o **v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
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

  if ( (byte_4A0ABC3 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1B686D4(&Method_DataManager_GetMasterData_EventDetailMaster___, v7);
    sub_1B686D4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v8);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v10);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass199_0__FadeInAndTriggerEventEffectsNext_b__0__, v11);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass199_0__FadeInAndTriggerEventEffectsNext_b__1__, v12);
    sub_1B686D4(&TerminalSceneComponent___c__DisplayClass199_0_TypeInfo, v13);
    byte_4A0ABC3 = 1;
  }
  entity = 0LL;
  v14 = sub_1B68920(TerminalSceneComponent___c__DisplayClass199_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_68;
  *(_QWORD *)(v14 + 16) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)this, v17, v18);
  *(_QWORD *)(v14 + 24) = callback;
  v19 = (System_Action_o **)(v14 + 24);
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)callback, v20, v21);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_68;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_30E4514 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
    sub_1B68930(Instance, v16);
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
      v26 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
      System_Action___ctor(
        v26,
        (Il2CppObject *)v14,
        Method_TerminalSceneComponent___c__DisplayClass199_0__FadeInAndTriggerEventEffectsNext_b__0__,
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
    v29 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(
      v29,
      (Il2CppObject *)v14,
      Method_TerminalSceneComponent___c__DisplayClass199_0__FadeInAndTriggerEventEffectsNext_b__1__,
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
    if ( *(_QWORD *)&Instance[2].fields._DispLog )
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

  if ( (byte_4A0ABB7 & 1) == 0 )
  {
    sub_1B686D4(&AvalonSceneManager_TypeInfo, isExecuteUnusedAssets);
    byte_4A0ABB7 = 1;
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
  UnityEngine_MonoBehaviour__StartCoroutine_69157088((UnityEngine_MonoBehaviour_o *)this, v8, 0LL);
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
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x2
  Il2CppObject *Instance; // x19
  AvalonSceneManager_c *v20; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v22; // x21

  if ( (byte_4A0ABBB & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, end_act);
    sub_1B686D4(&AvalonSceneManager_TypeInfo, v7);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass191_0__Fadein_MapDisp_b__0__, v9);
    sub_1B686D4(&TerminalSceneComponent___c__DisplayClass191_0_TypeInfo, v10);
    byte_4A0ABBB = 1;
  }
  v11 = sub_1B68920(TerminalSceneComponent___c__DisplayClass191_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_10;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = end_act;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)end_act, v16, v17);
  if ( this->fields._FirstFadeTime_k__BackingField > 0.0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v20 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v20->static_fields->DEFAULT_FADE_TIME;
    v22 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(
      v22,
      (Il2CppObject *)v11,
      Method_TerminalSceneComponent___c__DisplayClass191_0__Fadein_MapDisp_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeChangeColor((CommonUI_o *)Instance, 2, DEFAULT_FADE_TIME, v22, 0LL);
      return;
    }
LABEL_10:
    sub_1B68930(v12, v13);
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
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  TerminalPramsManager_c *v19; // x0
  __int64 v20; // x8
  __int64 v21; // x8
  WarEntity_o *v22; // x21
  __int64 v23; // x1
  TerminalPramsManager_c *v24; // x0
  _BOOL4 isInvisibleConnectAndLoad; // w22
  TitleInfoControl_o *mTitleInfo; // x19
  System_Action_o *v27; // x22

  if ( (byte_4A0ABBC & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, end_act);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v8);
    sub_1B686D4(&TerminalSceneComponent_TypeInfo, v9);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass192_0__Fadein_MapDisp_Load_b__0__, v10);
    sub_1B686D4(&TerminalSceneComponent___c__DisplayClass192_0_TypeInfo, v11);
    byte_4A0ABBC = 1;
  }
  v12 = sub_1B68920(TerminalSceneComponent___c__DisplayClass192_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_32;
  *(_QWORD *)(v12 + 16) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)this, v15, v16);
  *(_QWORD *)(v12 + 32) = end_act;
  *(float *)(v12 + 24) = fade_time;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v12 + 32), (int32_t)end_act, v17, v18);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A04CAC )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v14);
    byte_4A04CAC = 1;
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
  if ( !byte_4A03EAD )
  {
    sub_1B686D4(&TerminalSceneComponent_TypeInfo, v14);
    byte_4A03EAD = 1;
  }
  mTerminalMap = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mTerminalMap = TerminalSceneComponent_TypeInfo;
  }
  v20 = **((_QWORD **)mTerminalMap + 23);
  if ( !v20 || (v21 = *(_QWORD *)(v20 + 264)) == 0 || (mTerminalMap = *(void **)(v21 + 536)) == 0LL )
LABEL_32:
    sub_1B68930(mTerminalMap, v14);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mTerminalMap, 1, 0LL);
LABEL_22:
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_32;
  v22 = (WarEntity_o *)*((_QWORD *)mTerminalMap + 44);
  ScrTerminalMap__SetDisp((ScrTerminalMap_o *)mTerminalMap, 1, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A05D59 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v23);
    byte_4A05D59 = 1;
  }
  v24 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
  }
  isInvisibleConnectAndLoad = v24->static_fields->isInvisibleConnectAndLoad;
  mTerminalMap = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_32;
  CommonUI__SetLoadMode((CommonUI_o *)mTerminalMap, !isInvisibleConnectAndLoad, 0LL);
  mTitleInfo = this->fields.mTitleInfo;
  v27 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v12,
    Method_TerminalSceneComponent___c__DisplayClass192_0__Fadein_MapDisp_Load_b__0__,
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
  int32_t v37; // w3
  __int64 *v38; // x21
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w2
  int32_t v42; // w3
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct WarEntity_o *mWarEnt; // x1
  __int64 v45; // x22
  struct ScrTerminalMap_o *v46; // x8
  MapEntity_o *mMapEnt; // x23
  System_String_o *ActiveStateName; // x24
  System_String_o *PrioredBgmName; // x0
  const MethodInfo *v50; // x2
  TerminalPramsManager_c *v51; // x0
  struct ScrTerminalMap_o *v52; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  TerminalPramsManager_c *v54; // x0
  __int64 v55; // x21
  int32_t v56; // w2
  int32_t v57; // w3
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
  int32_t v69; // w2
  int32_t v70; // w3
  Il2CppObject *v71; // x23
  System_Action_object__o *v72; // x22
  int32_t v73; // w2
  int32_t v74; // w3
  int32_t v75; // w2
  int32_t v76; // w3
  System_Action_object__o *v77; // x22
  Il2CppObject *v78; // x23
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  Il2CppObject *v82; // x24
  System_Action_object__o *v83; // x22
  int32_t v84; // w2
  int32_t v85; // w3
  ActionChain_o *v86; // x22
  __int64 v87; // x20
  System_Action_o *v88; // x23
  int32_t v89; // w2
  int32_t v90; // w3
  ChainableActionBase_o *v91; // x0
  System_Action_array *v92; // x1
  int32_t v93; // w21
  System_Action_o *v94; // x22
  const MethodInfo *v95; // x3
  __int64 v96; // x22
  Il2CppObject *v97; // x24
  System_Action_object__o *v98; // x23
  int32_t v99; // w2
  int32_t v100; // w3
  int32_t v101; // w2
  int32_t v102; // w3
  System_Action_object__o *v103; // x23
  Il2CppObject *v104; // x24
  struct TerminalSceneComponent___c_StaticFields *v105; // x0
  int32_t v106; // w2
  int32_t v107; // w3
  int32_t v108; // w2
  int32_t v109; // w3
  System_Action_object__o *v110; // x23
  Il2CppObject *v111; // x24
  struct TerminalSceneComponent___c_StaticFields *v112; // x0
  int32_t v113; // w2
  int32_t v114; // w3
  System_Action_object__o *v115; // x23
  int32_t v116; // w2
  int32_t v117; // w3
  ActionChain_o *v118; // x20
  int32_t v119; // w2
  int32_t v120; // w3
  System_Action_array *v121; // x22
  __int64 v122; // x1

  if ( (byte_4A0ABBD & 1) == 0 )
  {
    sub_1B686D4(&ActionChain_TypeInfo, end_act);
    sub_1B686D4(&System_Action___TypeInfo, v7);
    sub_1B686D4(&System_Action_Action____TypeInfo, v8);
    sub_1B686D4(&System_Action_Action__TypeInfo, v9);
    sub_1B686D4(&System_Action_TypeInfo, v10);
    sub_1B686D4(&Method_CommonUI_StartLoginMessages__, v11);
    sub_1B686D4(&Method_QuestAfterAction_Play__, v12);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1B686D4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v14);
    sub_1B686D4(&SoundManager_TypeInfo, v15);
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v16);
    sub_1B686D4(&TerminalSceneComponent_TypeInfo, v17);
    sub_1B686D4(&TutorialFlag_TypeInfo, v18);
    sub_1B686D4(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__193_0__, v19);
    sub_1B686D4(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__193_1__, v20);
    sub_1B686D4(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__193_6__, v21);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass193_0__Fadein_MapDisp_Start_b__2__, v22);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass193_0__Fadein_MapDisp_Start_b__3__, v23);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass193_0__Fadein_MapDisp_Start_b__4__, v24);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass193_0__Fadein_MapDisp_Start_b__5__, v25);
    sub_1B686D4(&TerminalSceneComponent___c__DisplayClass193_0_TypeInfo, v26);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass193_1__Fadein_MapDisp_Start_b__7__, v27);
    sub_1B686D4(&TerminalSceneComponent___c__DisplayClass193_1_TypeInfo, v28);
    sub_1B686D4(&TerminalSceneComponent___c_TypeInfo, v29);
    sub_1B686D4(&StringLiteral_3382/*"CAPTER INIT"*/, v30);
    sub_1B686D4(&StringLiteral_3381/*"CAPTER CREATE"*/, v31);
    sub_1B686D4(&StringLiteral_3383/*"CAPTER WAIT"*/, v32);
    byte_4A0ABBD = 1;
  }
  v33 = sub_1B68920(TerminalSceneComponent___c__DisplayClass193_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v33, 0LL);
  if ( !v33 )
    goto LABEL_160;
  *(_QWORD *)(v33 + 16) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v33 + 16), (int32_t)this, v36, v37);
  *(_QWORD *)(v33 + 40) = end_act;
  v38 = (__int64 *)(v33 + 40);
  *(float *)(v33 + 32) = fade_time;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v33 + 40), (int32_t)end_act, v39, v40);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_160;
  mWarEnt = mTerminalMap->fields.mWarEnt;
  *(_QWORD *)(v33 + 24) = mWarEnt;
  v45 = v33 + 24;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v33 + 24), (int32_t)mWarEnt, v41, v42);
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
  v35 = System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3381/*"CAPTER CREATE"*/, 0LL)
     || System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3382/*"CAPTER INIT"*/, 0LL)
     || System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3383/*"CAPTER WAIT"*/, 0LL);
  Instance = (__int64)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_160;
  TitleInfoControl__setBackBtnSprite_36937152((TitleInfoControl_o *)Instance, v35, 0, 0, 0LL);
  Instance = (__int64)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_160;
  TitleInfoControl__FrameIn((TitleInfoControl_o *)Instance, 0, 0LL);
  MainMenuBar__FrameIn(0, 0LL);
  Instance = (__int64)this->fields.mPlayerStatus;
  if ( !Instance )
    goto LABEL_160;
  ScrPlayerStatus__FrameIn((ScrPlayerStatus_o *)Instance, 0, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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
    if ( !byte_4A05E99 )
    {
      sub_1B686D4(&TerminalPramsManager_TypeInfo, v35);
      byte_4A05E99 = 1;
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
      TerminalSceneComponent__playBgm(this, PrioredBgmName, v50);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A05E99 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v35);
    byte_4A05E99 = 1;
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
  if ( !byte_4A04CAC )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v35);
    byte_4A04CAC = 1;
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
    if ( !byte_4A05E86 )
    {
      sub_1B686D4(&TerminalPramsManager_TypeInfo, v35);
      byte_4A05E86 = 1;
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
      QuestBoardListViewManager__SetMode((QuestBoardListViewManager_o *)Instance, 4, 0LL, 0, 0, 0LL);
      Instance = (__int64)TerminalPramsManager_TypeInfo;
    }
  }
  if ( !*(_DWORD *)(Instance + 224) )
    j_il2cpp_runtime_class_init_0(Instance);
  if ( !byte_4A05E86 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v35);
    byte_4A05E86 = 1;
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
  if ( !byte_4A04CAC )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v35);
    byte_4A04CAC = 1;
  }
  Instance = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(Instance + 184) + 103LL) )
  {
    v55 = sub_1B68920(TerminalSceneComponent___c__DisplayClass193_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v55, 0LL);
    if ( v55 )
    {
      *(_QWORD *)(v55 + 24) = v33;
      v58 = (Il2CppObject **)(v55 + 24);
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v55 + 24), v33, v56, v57);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4A03EAD )
      {
        sub_1B686D4(&TerminalSceneComponent_TypeInfo, v35);
        byte_4A03EAD = 1;
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
          Instance = *(_QWORD *)(v60 + 536);
          if ( Instance )
          {
            *(_BYTE *)(v55 + 16) = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
            Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
            if ( Instance )
            {
              QuestAfterAction__Init((QuestAfterAction_o *)Instance, 0LL);
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
              if ( Instance )
              {
                QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)Instance, 1, 0LL);
                Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                if ( Instance )
                {
                  if ( QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0LL) )
                  {
                    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    if ( !byte_4A03EAD )
                    {
                      sub_1B686D4(&TerminalSceneComponent_TypeInfo, v35);
                      byte_4A03EAD = 1;
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
                    Instance = *(_QWORD *)(v62 + 536);
                    if ( !Instance )
                      goto LABEL_160;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                  }
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  if ( !byte_4A03EAD )
                  {
                    sub_1B686D4(&TerminalSceneComponent_TypeInfo, v35);
                    byte_4A03EAD = 1;
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
                      Instance = *(_QWORD *)(v64 + 536);
                      if ( Instance )
                      {
                        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
                        {
                          Instance = (__int64)this->fields.mTerminalMap;
                          if ( !Instance )
                            goto LABEL_160;
                          ScrTerminalMap__AllMaskStart((ScrTerminalMap_o *)Instance, 0, 1, 0LL);
                        }
                        v65 = sub_1B6877C(System_Action_Action____TypeInfo, 4LL);
                        v66 = *v58;
                        v67 = v65;
                        v68 = (System_Action_object__o *)sub_1B68920(System_Action_Action__TypeInfo);
                        System_Action_object____ctor(
                          v68,
                          v66,
                          Method_TerminalSceneComponent___c__DisplayClass193_0__Fadein_MapDisp_Start_b__4__,
                          0LL);
                        if ( v67 )
                        {
                          if ( *(_DWORD *)(v67 + 24) )
                          {
                            *(_QWORD *)(v67 + 32) = v68;
                            sub_1B68678((ServantStatusBattleListViewItem_o *)(v67 + 32), (int32_t)v68, v69, v70);
                            v71 = *v58;
                            v72 = (System_Action_object__o *)sub_1B68920(System_Action_Action__TypeInfo);
                            System_Action_object____ctor(
                              v72,
                              v71,
                              Method_TerminalSceneComponent___c__DisplayClass193_0__Fadein_MapDisp_Start_b__5__,
                              0LL);
                            if ( *(_DWORD *)(v67 + 24) > 1u )
                            {
                              *(_QWORD *)(v67 + 40) = v72;
                              sub_1B68678((ServantStatusBattleListViewItem_o *)(v67 + 40), (int32_t)v72, v73, v74);
                              Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
                              if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
                                Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
                              }
                              v77 = *(System_Action_object__o **)(*(_QWORD *)(Instance + 184) + 16LL);
                              if ( !v77 )
                              {
                                if ( !*(_DWORD *)(Instance + 224) )
                                {
                                  j_il2cpp_runtime_class_init_0(Instance);
                                  Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
                                }
                                v78 = **(Il2CppObject ***)(Instance + 184);
                                v77 = (System_Action_object__o *)sub_1B68920(System_Action_Action__TypeInfo);
                                System_Action_object____ctor(
                                  v77,
                                  v78,
                                  Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__193_6__,
                                  0LL);
                                static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
                                static_fields->__9__193_6 = (struct System_Action_Action__o *)v77;
                                sub_1B68678(
                                  (ServantStatusBattleListViewItem_o *)&static_fields->__9__193_6,
                                  (int32_t)v77,
                                  v80,
                                  v81);
                              }
                              if ( *(_DWORD *)(v67 + 24) > 2u )
                              {
                                *(_QWORD *)(v67 + 48) = v77;
                                sub_1B68678((ServantStatusBattleListViewItem_o *)(v67 + 48), (int32_t)v77, v75, v76);
                                v82 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                                v83 = (System_Action_object__o *)sub_1B68920(System_Action_Action__TypeInfo);
                                System_Action_object____ctor(v83, v82, Method_QuestAfterAction_Play__, 0LL);
                                if ( *(_DWORD *)(v67 + 24) > 3u )
                                {
                                  *(_QWORD *)(v67 + 56) = v83;
                                  sub_1B68678((ServantStatusBattleListViewItem_o *)(v67 + 56), (int32_t)v83, v84, v85);
                                  v86 = (ActionChain_o *)sub_1B68920(ActionChain_TypeInfo);
                                  ActionChain___ctor_46345900(v86, (System_Action_Action__array *)v67, 0LL);
                                  v87 = sub_1B6877C(System_Action___TypeInfo, 1LL);
                                  v88 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
                                  System_Action___ctor(
                                    v88,
                                    (Il2CppObject *)v55,
                                    Method_TerminalSceneComponent___c__DisplayClass193_1__Fadein_MapDisp_Start_b__7__,
                                    0LL);
                                  if ( !v87 )
                                    goto LABEL_160;
                                  if ( *(_DWORD *)(v87 + 24) )
                                  {
                                    *(_QWORD *)(v87 + 32) = v88;
                                    sub_1B68678((ServantStatusBattleListViewItem_o *)(v87 + 32), (int32_t)v88, v89, v90);
                                    if ( !v86 )
                                      goto LABEL_160;
                                    v91 = (ChainableActionBase_o *)v86;
                                    v92 = (System_Action_array *)v87;
                                    goto LABEL_127;
                                  }
                                }
                              }
                            }
                          }
LABEL_161:
                          sub_1B68938(Instance, v35);
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
    sub_1B68930(Instance, v35);
  }
  if ( this->fields.mIsStart_LoginBonusWhiteBg )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    Instance = TutorialFlag__Get_37438804(102, 0LL);
    if ( (Instance & 1) != 0 && !this->fields.isTutorialAfter )
    {
      this->fields.mIsStart_LoginBonusWhiteBg = 0;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetupLoginResultData((CommonUI_o *)Instance, 0LL, 0LL);
        v96 = sub_1B6877C(System_Action_Action____TypeInfo, 4LL);
        v97 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v98 = (System_Action_object__o *)sub_1B68920(System_Action_Action__TypeInfo);
        System_Action_object____ctor(v98, v97, Method_CommonUI_StartLoginMessages__, 0LL);
        if ( v96 )
        {
          if ( !*(_DWORD *)(v96 + 24) )
            goto LABEL_161;
          *(_QWORD *)(v96 + 32) = v98;
          sub_1B68678((ServantStatusBattleListViewItem_o *)(v96 + 32), (int32_t)v98, v99, v100);
          Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
          if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
            Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
          }
          v103 = *(System_Action_object__o **)(*(_QWORD *)(Instance + 184) + 24LL);
          if ( !v103 )
          {
            if ( !*(_DWORD *)(Instance + 224) )
            {
              j_il2cpp_runtime_class_init_0(Instance);
              Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
            }
            v104 = **(Il2CppObject ***)(Instance + 184);
            v103 = (System_Action_object__o *)sub_1B68920(System_Action_Action__TypeInfo);
            System_Action_object____ctor(
              v103,
              v104,
              Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__193_0__,
              0LL);
            v105 = TerminalSceneComponent___c_TypeInfo->static_fields;
            v105->__9__193_0 = (struct System_Action_Action__o *)v103;
            sub_1B68678((ServantStatusBattleListViewItem_o *)&v105->__9__193_0, (int32_t)v103, v106, v107);
          }
          if ( *(_DWORD *)(v96 + 24) <= 1u )
            goto LABEL_161;
          *(_QWORD *)(v96 + 40) = v103;
          sub_1B68678((ServantStatusBattleListViewItem_o *)(v96 + 40), (int32_t)v103, v101, v102);
          Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
          if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
            Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
          }
          v110 = *(System_Action_object__o **)(*(_QWORD *)(Instance + 184) + 32LL);
          if ( !v110 )
          {
            if ( !*(_DWORD *)(Instance + 224) )
            {
              j_il2cpp_runtime_class_init_0(Instance);
              Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
            }
            v111 = **(Il2CppObject ***)(Instance + 184);
            v110 = (System_Action_object__o *)sub_1B68920(System_Action_Action__TypeInfo);
            System_Action_object____ctor(
              v110,
              v111,
              Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__193_1__,
              0LL);
            v112 = TerminalSceneComponent___c_TypeInfo->static_fields;
            v112->__9__193_1 = (struct System_Action_Action__o *)v110;
            sub_1B68678((ServantStatusBattleListViewItem_o *)&v112->__9__193_1, (int32_t)v110, v113, v114);
          }
          if ( *(_DWORD *)(v96 + 24) <= 2u )
            goto LABEL_161;
          *(_QWORD *)(v96 + 48) = v110;
          sub_1B68678((ServantStatusBattleListViewItem_o *)(v96 + 48), (int32_t)v110, v108, v109);
          v115 = (System_Action_object__o *)sub_1B68920(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v115,
            (Il2CppObject *)v33,
            Method_TerminalSceneComponent___c__DisplayClass193_0__Fadein_MapDisp_Start_b__2__,
            0LL);
          if ( *(_DWORD *)(v96 + 24) <= 3u )
            goto LABEL_161;
          *(_QWORD *)(v96 + 56) = v115;
          sub_1B68678((ServantStatusBattleListViewItem_o *)(v96 + 56), (int32_t)v115, v116, v117);
          v118 = (ActionChain_o *)sub_1B68920(ActionChain_TypeInfo);
          ActionChain___ctor_46345900(v118, (System_Action_Action__array *)v96, 0LL);
          Instance = sub_1B6877C(System_Action___TypeInfo, 1LL);
          if ( Instance )
          {
            v121 = (System_Action_array *)Instance;
            if ( !*(_DWORD *)(Instance + 24) )
              goto LABEL_161;
            v122 = *v38;
            *(_QWORD *)(Instance + 32) = *v38;
            sub_1B68678((ServantStatusBattleListViewItem_o *)(Instance + 32), v122, v119, v120);
            if ( v118 )
            {
              v91 = (ChainableActionBase_o *)v118;
              v92 = v121;
LABEL_127:
              Instance = (__int64)ChainableActionBase__Final(v91, v92, 0LL);
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
  v93 = *(_DWORD *)(*(_QWORD *)v45 + 96LL);
  v94 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v94,
    (Il2CppObject *)v33,
    Method_TerminalSceneComponent___c__DisplayClass193_0__Fadein_MapDisp_Start_b__3__,
    0LL);
  TerminalSceneComponent__StartEventDailyPoint(this, v93, v94, v95);
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

  if ( (byte_4A0ABB8 & 1) == 0 )
  {
    sub_1B686D4(&AvalonSceneManager_TypeInfo, end_act);
    byte_4A0ABB8 = 1;
  }
  v6 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v6 = AvalonSceneManager_TypeInfo;
  }
  v7 = TerminalSceneComponent__coFadein_WorldDisp(this, v6->static_fields->DEFAULT_FADE_TIME, end_act, 1, v3);
  UnityEngine_MonoBehaviour__StartCoroutine_69157088((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
}


void __fastcall TerminalSceneComponent__Fadein_WorldDisp_41820828(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  System_Collections_IEnumerator_o *v6; // x1

  v6 = TerminalSceneComponent__coFadein_WorldDisp(this, fade_time, end_act, 1, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_69157088((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
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
    sub_1B68930(this, method);
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
        sub_1B68938(this, method);
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
  __int64 v3; // x1
  TerminalSceneComponent_c *v4; // x0
  System_String_o *OVERWRITE_COMMON_BG_TYPE2_KEY; // x0
  TerminalSceneComponent_c *v6; // x0

  if ( (byte_4A0ABEB & 1) == 0 )
  {
    sub_1B686D4(&string_TypeInfo, method);
    sub_1B686D4(&TerminalSceneComponent_TypeInfo, v3);
    byte_4A0ABEB = 1;
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
    return UnityEngine_PlayerPrefs__GetString_69130092(OVERWRITE_COMMON_BG_TYPE2_KEY, 0LL);
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
    return UnityEngine_PlayerPrefs__GetString_69130092(OVERWRITE_COMMON_BG_TYPE2_KEY, 0LL);
  }
  return string_TypeInfo->static_fields->Empty;
}


int32_t __fastcall TerminalSceneComponent__GetState(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_o *v2; // x19
  struct CStateManager_TerminalSceneComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_4A0ABDA & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_1B686D4(&Method_CStateManager_TerminalSceneComponent__getState__, method);
    byte_4A0ABDA = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B68930(this, method);
  return mFSM->fields.m_state;
}


void __fastcall TerminalSceneComponent__InitLighting(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4A0ABE9 & 1) == 0 )
  {
    sub_1B686D4(&TerminalSceneComponent_TypeInfo, method);
    byte_4A0ABE9 = 1;
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

  if ( (byte_4A0ABC1 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_MapMaster___, *(_QWORD *)&eventId);
    sub_1B686D4(&Method_DataManager_GetMasterData_WarMaster___, v4);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A0ABC1 = 1;
  }
  if ( !eventId )
    return 1;
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_19;
  v8 = WarMaster__getByEventId((WarMaster_o *)Instance, eventId, 0LL);
  if ( !v8 )
    return 1;
  v9 = v8;
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_MapMaster___);
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
    sub_1B68930(Instance, v7);
  }
  return 0;
}


bool __fastcall TerminalSceneComponent__IsMapActive(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalMap_o *mTerminalMap; // x8

  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap || (this = (TerminalSceneComponent_o *)mTerminalMap->fields.dispRoot) == 0LL )
    sub_1B68930(this, method);
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

  if ( (byte_4A0ABC5 & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v3);
    sub_1B686D4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_1B686D4(&StringLiteral_8813/*"Map Touch Enable"*/, v5);
    byte_4A0ABC5 = 1;
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
    || (v8 = (System_String_o *)mTerminalMap,
        (mTerminalMap = (ScrTerminalMap_o *)mTerminalList->fields.mActionBgColl) == 0LL)
    || (mTerminalMap = (ScrTerminalMap_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)mTerminalMap,
                                             0LL)) == 0LL )
  {
LABEL_54:
    sub_1B68930(mTerminalMap, method);
  }
  mTerminalMap = (ScrTerminalMap_o *)UnityEngine_GameObject__get_activeSelf(
                                       (UnityEngine_GameObject_o *)mTerminalMap,
                                       0LL);
  if ( ((unsigned __int8)mTerminalMap & 1) != 0 )
    return 0;
  if ( !v8 )
    goto LABEL_54;
  if ( (System_String__IndexOf_61451044(v8, (System_String_o *)StringLiteral_8813/*"Map Touch Enable"*/, 0LL) & 0x80000000) != 0
    || MainMenuBar__get_IsEnableOutSideCollider(0LL) )
  {
    return 0;
  }
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_54;
  if ( CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_54;
  if ( CommonUI__IsActive_ApRecvDlgComp((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_54;
  if ( CommonUI__IsActive_EventItemSelectDlgComp((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_54;
  if ( CommonUI__IsActive_CommonConfirmDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_54;
  if ( CommonUI__IsActive_NotifiDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_54;
  if ( CommonUI__IsActive_TutorialBigDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_54;
  if ( CommonUI__IsActive_MasterMission((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_54;
  if ( CommonUI__IsActive_MasterProfile((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_54;
  if ( CommonUI__IsActive_MissionListDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_54;
  if ( CommonUI__IsActive_AssistEffectConfirmDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_54;
  if ( CommonUI__IsActive_CommandAssistConfirmDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_54;
  if ( CommonUI__IsActive_AchievementExchangeConditionsDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_54;
  if ( CommonUI__IsActive_SvtFrameShortDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_54;
  if ( QuestAfterAction__IsPlaying((QuestAfterAction_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
    sub_1B68930(this, 0LL);
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

  if ( (byte_4A0ABD5 & 1) == 0 )
  {
    sub_1B686D4(&CondType_TypeInfo, method);
    sub_1B686D4(&Method_SingletonTemplate_QuestTree__get_Instance__, v3);
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v4);
    byte_4A0ABD5 = 1;
  }
  IsWarStartAnim_k__BackingField = this->fields._IsWarStartAnim_k__BackingField;
  v6 = this->fields.mTutorialKind == 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IsWarStartActionSkip = TerminalPramsManager__get_Debug_IsWarStartActionSkip(0LL);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A058F9 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v8);
    byte_4A058F9 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    sub_1B68930(v10, v8);
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
    if ( CondType__IsQuestPhaseClear_37401600(targetId, 1, -1, 0, 0LL) )
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
  if ( !byte_4A058F9 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v14);
    byte_4A058F9 = 1;
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

  if ( (byte_4A0AB9F & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_2133/*"AREA WAIT"*/, method);
    byte_4A0AB9F = 1;
  }
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList
    || (mTerminalList = (ScrTerminalListTop_o *)ScrTerminalListTop__mfGetMyFsmP(mTerminalList, 0LL)) == 0LL
    || (mTerminalList = (ScrTerminalListTop_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)mTerminalList, 0LL)) == 0LL )
  {
    sub_1B68930(mTerminalList, method);
  }
  return System_String__IndexOf_61451044((System_String_o *)mTerminalList, (System_String_o *)StringLiteral_2133/*"AREA WAIT"*/, 0LL) >= 0;
}


System_Collections_IEnumerator_o *__fastcall TerminalSceneComponent__LoadAsync(
        TerminalSceneComponent_o *this,
        UserServantEntity_o *usd,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A0ABAB & 1) == 0 )
  {
    sub_1B686D4(&TerminalSceneComponent__LoadAsync_d__173_TypeInfo, usd);
    byte_4A0ABAB = 1;
  }
  v7 = sub_1B68920(TerminalSceneComponent__LoadAsync_d__173_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 40) = usd;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)usd, v10, v11);
  *(_QWORD *)(v7 + 48) = callback;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)callback, v12, v13);
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
  const MethodInfo_35DD3F0 *v11; // x2
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
  if ( (byte_4A0ABE8 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Nullable_Vector3__get_HasValue__, dialog);
    this = (TerminalSceneComponent_o *)sub_1B686D4(&Method_System_Nullable_Vector3__get_Value__, v7);
    byte_4A0ABE8 = 1;
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
    if ( !byte_4A03906 )
    {
      sub_1B686D4(&UnityEngine_Vector3_TypeInfo, v10);
      byte_4A03906 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->oneVector.fields.x;
    y = static_fields->oneVector.fields.y;
    z = static_fields->oneVector.fields.z;
  }
  this = (TerminalSceneComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL);
  if ( !this )
LABEL_13:
    sub_1B68930(this, dialog);
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
    sub_1B68930(0LL, method);
  ((void (__fastcall *)(struct BaseCore_o *, Il2CppMethodPointer))mEarthCore->klass->vtable._7_OnPress.method)(
    mEarthCore,
    mEarthCore->klass->vtable._8_Setup.methodPtr);
}


void __fastcall TerminalSceneComponent__OnCoreRelease(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  BaseCore_o *mEarthCore; // x0

  mEarthCore = this->fields.mEarthCore;
  if ( !mEarthCore )
    sub_1B68930(0LL, method);
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
  int32_t v9; // w3
  TerminalSceneComponent_c *v10; // x0
  __int64 v11; // x0
  __int64 v12; // x0
  UnityEngine_Object_o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *loadEarthAssetName; // x20

  if ( (byte_4A0ABA7 & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_TypeInfo, method);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v3);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__getInstance__, v4);
    sub_1B686D4(&TerminalSceneComponent_TypeInfo, v5);
    byte_4A0ABA7 = 1;
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
    sub_1B68678((ServantStatusBattleListViewItem_o *)TerminalSceneComponent_TypeInfo->static_fields, 0, v8, v9);
    v11 = *((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1BBA5B0(v11);
    v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1BBA5B0(v12);
    v13 = **(UnityEngine_Object_o ***)(v12 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Implicit(v13, 0LL) )
    {
      loadEarthAssetName = this->fields.loadEarthAssetName;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage(loadEarthAssetName, 0LL);
    }
    this->fields.loadEarthAssetName = 0LL;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.loadEarthAssetName, 0, v14, v15);
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
  System_String_o *String_69130092; // x0
  __int64 v33; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x24
  System_Func_object__int__o *v35; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Int32_array *v37; // x0
  TerminalSceneComponent___c_c *v38; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x24
  System_Func_T__TResult__o *_9__250_0; // x25
  Il2CppObject *v41; // x26
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  System_Collections_Generic_List_TSource__o *v46; // x0
  TerminalSceneComponent___c_c *v47; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x24
  System_Func_object__bool__o *_9__250_1; // x25
  Il2CppObject *v50; // x26
  struct TerminalSceneComponent___c_StaticFields *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  TerminalSceneComponent___c_c *v55; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x24
  System_Func_object__bool__o *_9__250_2; // x25
  Il2CppObject *v58; // x26
  struct TerminalSceneComponent___c_StaticFields *v59; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x24
  System_Func_object__bool__o *v63; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x0
  System_Collections_Generic_List_TSource__o *v65; // x0
  TerminalSceneComponent___c_c *v66; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x23
  System_Func_object__int__o *_9__250_4; // x24
  Il2CppObject *v69; // x25
  struct TerminalSceneComponent___c_StaticFields *v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v74; // x23
  Il2CppObject *Instance; // x24
  System_String_o *v76; // x22
  TerminalSceneComponent___c_c *v77; // x0
  System_Func_T__TResult__o *_9__250_5; // x24
  Il2CppObject *v79; // x25
  struct TerminalSceneComponent___c_StaticFields *v80; // x0
  int32_t v81; // w2
  int32_t v82; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v84; // x25
  System_String_o *v85; // x0
  TerminalSceneComponent___c_c *v86; // x8
  System_String_o *v87; // x21
  System_Func_object__int__o *_9__250_6; // x26
  Il2CppObject *v89; // x27
  struct TerminalSceneComponent___c_StaticFields *v90; // x0
  int32_t v91; // w2
  int32_t v92; // w3
  __int64 v93; // x2
  __int64 v94; // x3
  __int64 v95; // x4
  Il2CppObject *v96; // x0
  int32_t v99; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4A0ABE3 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Linq_Enumerable_Select_int__ShopEntity___, playerPrefsKey);
    sub_1B686D4(&Method_System_Linq_Enumerable_Select_ShopEntity__int___, v9);
    sub_1B686D4(&Method_System_Linq_Enumerable_Select_string__int___, v10);
    sub_1B686D4(&Method_System_Linq_Enumerable_Sum_ShopEntity___, v11);
    sub_1B686D4(&Method_System_Linq_Enumerable_ToArray_int___, v12);
    sub_1B686D4(&Method_System_Linq_Enumerable_ToList_ShopEntity___, v13);
    sub_1B686D4(&Method_System_Linq_Enumerable_Where_ShopEntity___, v14);
    sub_1B686D4(&System_Func_int__ShopEntity__TypeInfo, v15);
    sub_1B686D4(&System_Func_ShopEntity__int__TypeInfo, v16);
    sub_1B686D4(&System_Func_ShopEntity__bool__TypeInfo, v17);
    sub_1B686D4(&System_Func_string__int__TypeInfo, v18);
    sub_1B686D4(&Method_System_Int32_Parse__, v19);
    sub_1B686D4(&int_TypeInfo, v20);
    sub_1B686D4(&LocalizationManager_TypeInfo, v21);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v22);
    sub_1B686D4(&Method_TerminalSceneComponent__OpenExchangeDialogue_b__250_3__, v23);
    sub_1B686D4(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__250_0__, v24);
    sub_1B686D4(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__250_1__, v25);
    sub_1B686D4(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__250_2__, v26);
    sub_1B686D4(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__250_4__, v27);
    sub_1B686D4(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__250_5__, v28);
    sub_1B686D4(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__250_6__, v29);
    sub_1B686D4(&TerminalSceneComponent___c_TypeInfo, v30);
    sub_1B686D4(&StringLiteral_19558/*"freeShopIds"*/, v31);
    byte_4A0ABE3 = 1;
  }
  String_69130092 = UnityEngine_PlayerPrefs__GetString_69130092(playerPrefsKey, 0LL);
  if ( !String_69130092 )
    goto LABEL_34;
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_69130092, 0x2Cu, 0, 0LL);
  v35 = (System_Func_object__int__o *)sub_1B68920(System_Func_string__int__TypeInfo);
  System_Func_object__int____ctor(v35, 0LL, Method_System_Int32_Parse__, 0LL);
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v34,
                                                               (System_Func_TSource__TResult__o *)v35,
                                                               (const MethodInfo_2E79760 *)Method_System_Linq_Enumerable_Select_string__int___);
  v37 = System_Linq_Enumerable__ToArray_int_(
          v36,
          (const MethodInfo_2E81CA4 *)Method_System_Linq_Enumerable_ToArray_int___);
  v38 = TerminalSceneComponent___c_TypeInfo;
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)v37;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v38 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__250_0 = (System_Func_T__TResult__o *)v38->static_fields->__9__250_0;
  if ( !_9__250_0 )
  {
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      v38 = TerminalSceneComponent___c_TypeInfo;
    }
    v41 = (Il2CppObject *)v38->static_fields->__9;
    _9__250_0 = (System_Func_T__TResult__o *)sub_1B68920(System_Func_int__ShopEntity__TypeInfo);
    System_Func_int__object____ctor(
      _9__250_0,
      v41,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__250_0__,
      0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__250_0 = (struct System_Func_int__ShopEntity__o *)_9__250_0;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__250_0, (int32_t)_9__250_0, v43, v44);
  }
  v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               v39,
                                                               (System_Func_TSource__TResult__o *)_9__250_0,
                                                               (const MethodInfo_2E77C5C *)Method_System_Linq_Enumerable_Select_int__ShopEntity___);
  v46 = System_Linq_Enumerable__ToList_object_(
          v45,
          (const MethodInfo_2E85A94 *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
  v47 = TerminalSceneComponent___c_TypeInfo;
  v48 = (System_Collections_Generic_IEnumerable_TSource__o *)v46;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v47 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__250_1 = (System_Func_object__bool__o *)v47->static_fields->__9__250_1;
  if ( !_9__250_1 )
  {
    if ( !v47->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47);
      v47 = TerminalSceneComponent___c_TypeInfo;
    }
    v50 = (Il2CppObject *)v47->static_fields->__9;
    _9__250_1 = (System_Func_object__bool__o *)sub_1B68920(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__250_1,
      v50,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__250_1__,
      0LL);
    v51 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v51->__9__250_1 = (struct System_Func_ShopEntity__bool__o *)_9__250_1;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&v51->__9__250_1, (int32_t)_9__250_1, v52, v53);
  }
  v54 = System_Linq_Enumerable__Where_object_(
          v48,
          (System_Func_TSource__bool__o *)_9__250_1,
          (const MethodInfo_2E87B14 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v55 = TerminalSceneComponent___c_TypeInfo;
  v56 = v54;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v55 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__250_2 = (System_Func_object__bool__o *)v55->static_fields->__9__250_2;
  if ( !_9__250_2 )
  {
    if ( !v55->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v55);
      v55 = TerminalSceneComponent___c_TypeInfo;
    }
    v58 = (Il2CppObject *)v55->static_fields->__9;
    _9__250_2 = (System_Func_object__bool__o *)sub_1B68920(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__250_2,
      v58,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__250_2__,
      0LL);
    v59 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v59->__9__250_2 = (struct System_Func_ShopEntity__bool__o *)_9__250_2;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&v59->__9__250_2, (int32_t)_9__250_2, v60, v61);
  }
  v62 = System_Linq_Enumerable__Where_object_(
          v56,
          (System_Func_TSource__bool__o *)_9__250_2,
          (const MethodInfo_2E87B14 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v63 = (System_Func_object__bool__o *)sub_1B68920(System_Func_ShopEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v63,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent__OpenExchangeDialogue_b__250_3__,
    0LL);
  v64 = System_Linq_Enumerable__Where_object_(
          v62,
          (System_Func_TSource__bool__o *)v63,
          (const MethodInfo_2E87B14 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v65 = System_Linq_Enumerable__ToList_object_(
          v64,
          (const MethodInfo_2E85A94 *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
  v66 = TerminalSceneComponent___c_TypeInfo;
  v67 = (System_Collections_Generic_IEnumerable_TSource__o *)v65;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v66 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__250_4 = (System_Func_object__int__o *)v66->static_fields->__9__250_4;
  if ( !_9__250_4 )
  {
    if ( !v66->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v66);
      v66 = TerminalSceneComponent___c_TypeInfo;
    }
    v69 = (Il2CppObject *)v66->static_fields->__9;
    _9__250_4 = (System_Func_object__int__o *)sub_1B68920(System_Func_ShopEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__250_4,
      v69,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__250_4__,
      0LL);
    v70 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v70->__9__250_4 = (struct System_Func_ShopEntity__int__o *)_9__250_4;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&v70->__9__250_4, (int32_t)_9__250_4, v71, v72);
  }
  v73 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v67,
                                                               (System_Func_TSource__TResult__o *)_9__250_4,
                                                               (const MethodInfo_2E79760 *)Method_System_Linq_Enumerable_Select_ShopEntity__int___);
  String_69130092 = (System_String_o *)System_Linq_Enumerable__ToArray_int_(
                                         v73,
                                         (const MethodInfo_2E81CA4 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !String_69130092 )
    goto LABEL_34;
  v74 = (System_Collections_Generic_IEnumerable_TSource__o *)String_69130092;
  if ( String_69130092[1].klass )
  {
    if ( System_String__op_Equality(playerPrefsKey, (System_String_o *)StringLiteral_19558/*"freeShopIds"*/, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v76 = LocalizationManager__Get(localizationKeyForTitle, 0LL);
      String_69130092 = LocalizationManager__Get(localizationKeyForDetail, 0LL);
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
    _9__250_5 = (System_Func_T__TResult__o *)v77->static_fields->__9__250_5;
    if ( !_9__250_5 )
    {
      if ( !v77->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v77);
        v77 = TerminalSceneComponent___c_TypeInfo;
      }
      v79 = (Il2CppObject *)v77->static_fields->__9;
      _9__250_5 = (System_Func_T__TResult__o *)sub_1B68920(System_Func_int__ShopEntity__TypeInfo);
      System_Func_int__object____ctor(
        _9__250_5,
        v79,
        Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__250_5__,
        0LL);
      v80 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v80->__9__250_5 = (struct System_Func_int__ShopEntity__o *)_9__250_5;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v80->__9__250_5, (int32_t)_9__250_5, v81, v82);
    }
    v83 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                 v74,
                                                                 (System_Func_TSource__TResult__o *)_9__250_5,
                                                                 (const MethodInfo_2E77C5C *)Method_System_Linq_Enumerable_Select_int__ShopEntity___);
    v84 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                 v83,
                                                                 (const MethodInfo_2E85A94 *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__250_6 = (System_Func_object__int__o *)v86->static_fields->__9__250_6;
    if ( !_9__250_6 )
    {
      if ( !v86->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v86);
        v86 = TerminalSceneComponent___c_TypeInfo;
      }
      v89 = (Il2CppObject *)v86->static_fields->__9;
      _9__250_6 = (System_Func_object__int__o *)sub_1B68920(System_Func_ShopEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__250_6,
        v89,
        Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__250_6__,
        0LL);
      v90 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v90->__9__250_6 = (struct System_Func_ShopEntity__int__o *)_9__250_6;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v90->__9__250_6, (int32_t)_9__250_6, v91, v92);
    }
    v99 = System_Linq_Enumerable__Sum_object_(
            v84,
            (System_Func_TSource__int__o *)_9__250_6,
            (const MethodInfo_2E80B54 *)Method_System_Linq_Enumerable_Sum_ShopEntity___);
    v96 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v99, v93, v94, v95);
    String_69130092 = System_String__Format(v87, v96, 0LL);
    if ( Instance )
    {
LABEL_51:
      CommonUI__OpenAchievementExchangeConditionsDialog(
        (CommonUI_o *)Instance,
        (System_Int32_array *)v74,
        v76,
        String_69130092,
        action,
        0LL);
      goto LABEL_52;
    }
LABEL_34:
    sub_1B68930(String_69130092, v33);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarEntity_o *IsPlayChapterStart; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
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

  if ( (byte_4A0ABD7 & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, end_act);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_1B686D4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6);
    sub_1B686D4(&Method_SingletonTemplate_QuestTree__get_Instance__, v7);
    sub_1B686D4(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, v8);
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v9);
    sub_1B686D4(&TerminalSceneComponent_TypeInfo, v10);
    byte_4A0ABD7 = 1;
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
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.OnResumeFromChapterStart, (int32_t)end_act, v13, v14);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A058F9 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v12);
    byte_4A058F9 = 1;
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
    if ( !byte_4A058F9 )
    {
      sub_1B686D4(&TerminalPramsManager_TypeInfo, v18);
      byte_4A058F9 = 1;
    }
    v22 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v22 = TerminalPramsManager_TypeInfo;
    }
    targetId = v16->fields.targetId;
    WarId_k__BackingField = v22->static_fields->_WarId_k__BackingField;
    v19 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_1B68920(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    BattleScriptRootComponent_TalkScriptInfo___ctor_43999084(v19, WarId_k__BackingField, targetId, 0, 1, 0, 0, 0, 0LL);
  }
  else
  {
    v19 = 0LL;
    if ( StartType == 1 )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A058F9 )
      {
        sub_1B686D4(&TerminalPramsManager_TypeInfo, v18);
        byte_4A058F9 = 1;
      }
      v20 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v20 = TerminalPramsManager_TypeInfo;
      }
      v21 = v20->static_fields->_WarId_k__BackingField;
      v19 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_1B68920(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
      BattleScriptRootComponent_TalkScriptInfo___ctor_43999084(v19, v21, 0, 0, 1, 0, 0, 0, 0LL);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A058F9 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v18);
    byte_4A058F9 = 1;
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
    if ( !byte_4A058FA )
    {
      sub_1B686D4(&TerminalPramsManager_TypeInfo, v29);
      byte_4A058FA = 1;
    }
    v31 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v31 = TerminalPramsManager_TypeInfo;
    }
    v31->static_fields->_QuestId_k__BackingField = v30;
    v32 = v16->fields.targetId;
    if ( !byte_4A05EBB )
    {
      sub_1B686D4(&TerminalPramsManager_TypeInfo, v29);
      v31 = TerminalPramsManager_TypeInfo;
      byte_4A05EBB = 1;
    }
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = TerminalPramsManager_TypeInfo;
    }
    v31->static_fields->_LastPlayedQuestId_k__BackingField = v32;
    TerminalPramsManager__CheckClearSelectedStoryQuestId(v16->fields.targetId, 0LL);
    TerminalPramsManager__PlayQuestSave_SaveData(0LL);
    IsPlayChapterStart = (WarEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( IsPlayChapterStart )
    {
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)IsPlayChapterStart, 0LL);
      IsPlayChapterStart = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( IsPlayChapterStart )
      {
        AvalonSceneManager__changeScene((AvalonSceneManager_o *)IsPlayChapterStart, 38, 2, (Il2CppObject *)v19, 0LL);
        return;
      }
    }
LABEL_64:
    sub_1B68930(IsPlayChapterStart, v12);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A05C0A )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v29);
    byte_4A05C0A = 1;
  }
  v33 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v33 = TerminalPramsManager_TypeInfo;
  }
  v33->static_fields->meSceneStatus = 3;
  IsPlayChapterStart = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x1
  TerminalPramsManager_c *v16; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  int32_t v18; // w21
  System_Action_o *v19; // x22
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct MapControl_MapInfo_o *mMapInfo; // x8

  if ( (byte_4A0ABD8 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, callbackAfter);
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v5);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass226_0__PlayEventTutorial_b__0__, v6);
    sub_1B686D4(&TerminalSceneComponent___c__DisplayClass226_0_TypeInfo, v7);
    byte_4A0ABD8 = 1;
  }
  v8 = sub_1B68920(TerminalSceneComponent___c__DisplayClass226_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_16;
  *(_QWORD *)(v8 + 16) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v8 + 24) = callbackAfter;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)callbackAfter, v13, v14);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A058F9 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v15);
    byte_4A058F9 = 1;
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
        v19 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo),
        System_Action___ctor(
          v19,
          (Il2CppObject *)v8,
          Method_TerminalSceneComponent___c__DisplayClass226_0__PlayEventTutorial_b__0__,
          0LL),
        (mTerminalMap = this->fields.mTerminalMap) == 0LL)
    || (mMapInfo = mTerminalMap->fields.mMapInfo) == 0LL )
  {
LABEL_16:
    sub_1B68930(EventID, v10);
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

  if ( (byte_4A0ABD9 & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, callback);
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v5);
    byte_4A0ABD9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  if ( QuestAfterAction__IsPlaying((QuestAfterAction_o *)Instance, 0LL) )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A058F9 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v8);
    byte_4A058F9 = 1;
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
    sub_1B68930(Instance, v7);
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
    sub_1B68930(mQuestInformation, method);
  return QuestInformationComponent__isListBuilding(mQuestInformation, 0LL);
}


int32_t __fastcall TerminalSceneComponent__QuestInfoShowing(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct QuestInformationComponent_o *mQuestInformation; // x8

  mQuestInformation = this->fields.mQuestInformation;
  if ( !mQuestInformation )
    sub_1B68930(this, method);
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
  ErrorDialog_ClickDelegate_o *_9__210_0; // x22
  Il2CppObject *v15; // x23
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_4A0ABCE & 1) == 0 )
  {
    sub_1B686D4(&ErrorDialog_ClickDelegate_TypeInfo, method);
    sub_1B686D4(&LocalizationManager_TypeInfo, v2);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B686D4(&Method_TerminalSceneComponent___c__RebootToNetworkError_b__210_0__, v4);
    sub_1B686D4(&TerminalSceneComponent___c_TypeInfo, v5);
    sub_1B686D4(&StringLiteral_13223/*"TERMINAL_NETWORK_ERROR_DIALOG_TITLE"*/, v6);
    sub_1B686D4(&StringLiteral_13222/*"TERMINAL_NETWORK_ERROR_DIALOG_MESSAGE"*/, v7);
    byte_4A0ABCE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_13223/*"TERMINAL_NETWORK_ERROR_DIALOG_TITLE"*/, 0LL);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_13222/*"TERMINAL_NETWORK_ERROR_DIALOG_MESSAGE"*/, 0LL);
  v12 = TerminalSceneComponent___c_TypeInfo;
  v13 = v10;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v12 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__210_0 = v12->static_fields->__9__210_0;
  if ( !_9__210_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = TerminalSceneComponent___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__210_0 = (ErrorDialog_ClickDelegate_o *)sub_1B68920(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(
      _9__210_0,
      v15,
      Method_TerminalSceneComponent___c__RebootToNetworkError_b__210_0__,
      0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__210_0 = _9__210_0;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__210_0, (int32_t)_9__210_0, v17, v18);
  }
  if ( !Instance )
    sub_1B68930(v10, v11);
  CommonUI__OpenErrorDialog((CommonUI_o *)Instance, v9, v13, _9__210_0, 1, 0LL);
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
  ServantStatusBattleListViewItem_o *p_OnResumeFromChapterStart; // x19
  struct TerminalSceneComponent_PlayChapterStartCallback_o *OnResumeFromChapterStart; // t1
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A0ABAC & 1) == 0 )
  {
    sub_1B686D4(&AvalonSceneManager_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4A0ABAC = 1;
  }
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
  if ( this->fields.isFadeInAfterResumeLoad )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v6 )
      sub_1B68930(Instance, v5);
    CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
    this->fields.isFadeInAfterResumeLoad = 0;
  }
  OnResumeFromChapterStart = this->fields.OnResumeFromChapterStart;
  p_OnResumeFromChapterStart = (ServantStatusBattleListViewItem_o *)&this->fields.OnResumeFromChapterStart;
  v7 = OnResumeFromChapterStart;
  if ( OnResumeFromChapterStart )
  {
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v7->fields.m_target)(
      v7->fields.original_method_info,
      1LL,
      *(_QWORD *)&v7->fields.extra_arg);
    p_OnResumeFromChapterStart->klass = 0LL;
    sub_1B68678(p_OnResumeFromChapterStart, 0, v10, v11);
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
    sub_1B68930(this, isEnable);
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

  if ( (byte_4A0ABEA & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, isActive);
    sub_1B686D4(&StringLiteral_5292/*"Directional light"*/, v5);
    byte_4A0ABEA = 1;
  }
  GameObjectWithLog = (UnityEngine_Object_o *)GameObjectExtensions__FindGameObjectWithLog(
                                                this->fields.mEarthCoreObj,
                                                (System_String_o *)StringLiteral_5292/*"Directional light"*/,
                                                0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality(GameObjectWithLog, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !GameObjectWithLog )
      sub_1B68930(v7, v8);
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

  if ( (byte_4A0ABB6 & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, isDisp);
    byte_4A0ABB6 = 1;
  }
  mTerminalServant = (UnityEngine_Component_o *)this->fields.mTerminalServant;
  if ( !mTerminalServant
    || (gameObject = UnityEngine_Component__get_gameObject(mTerminalServant, 0LL),
        (mTerminalServant = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL)) == 0LL)
    || (mTerminalServant = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mTerminalServant, 0LL)) == 0LL
    || (mTerminalServant = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        (UnityEngine_GameObject_o *)mTerminalServant,
                                                        (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___)) == 0LL )
  {
    sub_1B68930(mTerminalServant, isDisp);
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
  __int64 v12; // x20
  UnityEngine_Camera_o *mEarthEffCamera; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  UnityEngine_Object_o *mEarthCore; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v21; // x0
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  TerminalSceneComponent_c *v25; // x0
  int *v26; // x1
  System_String_o *EARTH_ASSET_NAME; // x21
  System_Int32_c *v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  TerminalSceneComponent_c *v31; // x0
  Il2CppObject *v32; // x0
  struct System_String_o *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  Il2CppObject *Instance; // x0
  System_String_o *loadEarthAssetName; // x19
  AssetManager_o *v38; // x21
  AssetLoader_LoadEndDataHandler_o *v39; // x22
  int v40; // [xsp+8h] [xbp-38h] BYREF
  int v41; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A0ABA9 & 1) == 0 )
  {
    sub_1B686D4(&int_TypeInfo, callback);
    sub_1B686D4(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v6);
    sub_1B686D4(&ServantCommentManager_TypeInfo, v7);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v8);
    sub_1B686D4(&TerminalSceneComponent_TypeInfo, v9);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass170_0__SetEarthView_b__0__, v10);
    sub_1B686D4(&TerminalSceneComponent___c__DisplayClass170_0_TypeInfo, v11);
    byte_4A0ABA9 = 1;
  }
  v12 = sub_1B68920(TerminalSceneComponent___c__DisplayClass170_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_30;
  *(_QWORD *)(v12 + 16) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)this, v15, v16);
  *(_QWORD *)(v12 + 24) = callback;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)callback, v17, v18);
  mEarthCore = (UnityEngine_Object_o *)this->fields.mEarthCore;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mEarthCore, 0LL, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v12 + 24), 0LL);
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
              v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0LL);
              GameObjectExtensions__SetLocalPositionZ(v21, -792.87, 0LL);
              v25 = TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                v25 = TerminalSceneComponent_TypeInfo;
              }
              v26 = &v41;
              EARTH_ASSET_NAME = v25->static_fields->EARTH_ASSET_NAME;
              v28 = int_TypeInfo;
              v41 = 2;
              goto LABEL_28;
            }
          }
        }
      }
    }
LABEL_30:
    sub_1B68930(mEarthEffCamera, v14);
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
  v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0LL);
  GameObjectExtensions__SetLocalPositionZ(v29, -50000.0, 0LL);
  mEarthEffCamera = this->fields.mEarthEffCamera;
  if ( !mEarthEffCamera )
    goto LABEL_30;
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0LL);
  GameObjectExtensions__SetLocalPositionZ(v30, -50000.0, 0LL);
  v31 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v31 = TerminalSceneComponent_TypeInfo;
  }
  v26 = &v40;
  EARTH_ASSET_NAME = v31->static_fields->EARTH_ASSET_NAME;
  v28 = int_TypeInfo;
  v40 = 1;
LABEL_28:
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(v28, v26, v22, v23, v24);
  v33 = System_String__Format(EARTH_ASSET_NAME, v32, 0LL);
  this->fields.loadEarthAssetName = v33;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.loadEarthAssetName, (int32_t)v33, v34, v35);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  loadEarthAssetName = this->fields.loadEarthAssetName;
  v38 = (AssetManager_o *)Instance;
  v39 = (AssetLoader_LoadEndDataHandler_o *)sub_1B68920(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v39,
    (Il2CppObject *)v12,
    Method_TerminalSceneComponent___c__DisplayClass170_0__SetEarthView_b__0__,
    0LL);
  if ( !v38 )
    goto LABEL_30;
  AssetManager__LoadAssetStorage(v38, loadEarthAssetName, v39, 1, 0LL);
}


void __fastcall TerminalSceneComponent__SetQuestBoardInfoOff(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x0
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList || (mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager) == 0LL )
    sub_1B68930(mTerminalList, method);
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
    sub_1B68930(0LL, method);
  QuestInformationComponent__SetResetReady(mQuestInformation, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent__SetState(
        TerminalSceneComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4A0ABDB & 1) == 0 )
  {
    sub_1B686D4(&Method_CStateManager_TerminalSceneComponent__setState__, *(_QWORD *)&state);
    byte_4A0ABDB = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1B68930(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_3071A0C *)Method_CStateManager_TerminalSceneComponent__setState__);
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
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  StandFigureSlideComponent_o *mTerminalServant; // x22
  System_Action_o *v20; // x23
  struct StandFigureSlideComponent_o *v21; // x19
  System_Action_o *v22; // x20
  int32_t v23; // w2
  int32_t v24; // w3

  if ( (byte_4A0ABB5 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, usd);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass184_0__SetupStandServant_b__0__, v9);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass184_0__SetupStandServant_b__1__, v10);
    sub_1B686D4(&TerminalSceneComponent___c__DisplayClass184_0_TypeInfo, v11);
    byte_4A0ABB5 = 1;
  }
  v12 = sub_1B68920(TerminalSceneComponent___c__DisplayClass184_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_7;
  *(_BYTE *)(v12 + 16) = isSlideIn;
  *(_QWORD *)(v12 + 24) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)this, v15, v16);
  *(_QWORD *)(v12 + 32) = endAction;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v12 + 32), (int32_t)endAction, v17, v18);
  mTerminalServant = this->fields.mTerminalServant;
  v20 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v12,
    Method_TerminalSceneComponent___c__DisplayClass184_0__SetupStandServant_b__0__,
    0LL);
  if ( !mTerminalServant
    || (StandFigureSlideComponent__Setup(mTerminalServant, usd, 0, v20, 0LL),
        v21 = this->fields.mTerminalServant,
        v22 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo),
        System_Action___ctor(
          v22,
          (Il2CppObject *)v12,
          Method_TerminalSceneComponent___c__DisplayClass184_0__SetupStandServant_b__1__,
          0LL),
        !v21) )
  {
LABEL_7:
    sub_1B68930(v13, v14);
  }
  v21->fields.mBtnAct = v22;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v21->fields.mBtnAct, (int32_t)v22, v23, v24);
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
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.afterEventDailyPoint, (int32_t)callback, v7, v8);
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
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  System_Action_object__o *v25; // x20
  Il2CppObject *v26; // x21
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  System_Action_object__o *v32; // x20
  Il2CppObject *v33; // x21
  struct TerminalSceneComponent___c_StaticFields *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  System_Action_object__o *v39; // x20
  Il2CppObject *v40; // x21
  struct TerminalSceneComponent___c_StaticFields *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  ActionChain_o *v44; // x20

  if ( (byte_4A0ABBF & 1) == 0 )
  {
    sub_1B686D4(&ActionChain_TypeInfo, callbackFunc);
    sub_1B686D4(&System_Action_Action____TypeInfo, v5);
    sub_1B686D4(&System_Action_Action__TypeInfo, v6);
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v7);
    sub_1B686D4(&Method_TerminalSceneComponent__StartWindowMessage_b__195_0__, v8);
    sub_1B686D4(&TerminalSceneComponent_TypeInfo, v9);
    sub_1B686D4(&Method_TerminalSceneComponent___c__StartWindowMessage_b__195_1__, v10);
    sub_1B686D4(&Method_TerminalSceneComponent___c__StartWindowMessage_b__195_2__, v11);
    sub_1B686D4(&Method_TerminalSceneComponent___c__StartWindowMessage_b__195_3__, v12);
    sub_1B686D4(&TerminalSceneComponent___c_TypeInfo, v13);
    byte_4A0ABBF = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A04CAC )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, callbackFunc);
    byte_4A04CAC = 1;
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
    if ( !byte_4A0AC97 )
    {
      sub_1B686D4(&TerminalPramsManager_TypeInfo, callbackFunc);
      byte_4A0AC97 = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    if ( !System_String__IsNullOrEmpty(v15->static_fields->_QuestWindowMessage_k__BackingField, 0LL) )
    {
      v19 = sub_1B6877C(System_Action_Action____TypeInfo, 4LL);
      v20 = (System_Action_object__o *)sub_1B68920(System_Action_Action__TypeInfo);
      System_Action_object____ctor(
        v20,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent__StartWindowMessage_b__195_0__,
        0LL);
      if ( v19 )
      {
        if ( !*(_DWORD *)(v19 + 24) )
          goto LABEL_55;
        *(_QWORD *)(v19 + 32) = v20;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v19 + 32), (int32_t)v20, v21, v22);
        v16 = TerminalSceneComponent___c_TypeInfo;
        if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
          v16 = TerminalSceneComponent___c_TypeInfo;
        }
        v25 = *(System_Action_object__o **)(*((_QWORD *)v16 + 23) + 40LL);
        if ( !v25 )
        {
          if ( !*((_DWORD *)v16 + 56) )
          {
            j_il2cpp_runtime_class_init_0(v16);
            v16 = TerminalSceneComponent___c_TypeInfo;
          }
          v26 = (Il2CppObject *)**((_QWORD **)v16 + 23);
          v25 = (System_Action_object__o *)sub_1B68920(System_Action_Action__TypeInfo);
          System_Action_object____ctor(v25, v26, Method_TerminalSceneComponent___c__StartWindowMessage_b__195_1__, 0LL);
          static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
          static_fields->__9__195_1 = (struct System_Action_Action__o *)v25;
          sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__195_1, (int32_t)v25, v28, v29);
        }
        if ( *(_DWORD *)(v19 + 24) <= 1u )
          goto LABEL_55;
        *(_QWORD *)(v19 + 40) = v25;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v19 + 40), (int32_t)v25, v23, v24);
        v16 = TerminalSceneComponent___c_TypeInfo;
        if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
          v16 = TerminalSceneComponent___c_TypeInfo;
        }
        v32 = *(System_Action_object__o **)(*((_QWORD *)v16 + 23) + 48LL);
        if ( !v32 )
        {
          if ( !*((_DWORD *)v16 + 56) )
          {
            j_il2cpp_runtime_class_init_0(v16);
            v16 = TerminalSceneComponent___c_TypeInfo;
          }
          v33 = (Il2CppObject *)**((_QWORD **)v16 + 23);
          v32 = (System_Action_object__o *)sub_1B68920(System_Action_Action__TypeInfo);
          System_Action_object____ctor(v32, v33, Method_TerminalSceneComponent___c__StartWindowMessage_b__195_2__, 0LL);
          v34 = TerminalSceneComponent___c_TypeInfo->static_fields;
          v34->__9__195_2 = (struct System_Action_Action__o *)v32;
          sub_1B68678((ServantStatusBattleListViewItem_o *)&v34->__9__195_2, (int32_t)v32, v35, v36);
        }
        if ( *(_DWORD *)(v19 + 24) <= 2u )
          goto LABEL_55;
        *(_QWORD *)(v19 + 48) = v32;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v19 + 48), (int32_t)v32, v30, v31);
        v16 = TerminalSceneComponent___c_TypeInfo;
        if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
          v16 = TerminalSceneComponent___c_TypeInfo;
        }
        v39 = *(System_Action_object__o **)(*((_QWORD *)v16 + 23) + 56LL);
        if ( !v39 )
        {
          if ( !*((_DWORD *)v16 + 56) )
          {
            j_il2cpp_runtime_class_init_0(v16);
            v16 = TerminalSceneComponent___c_TypeInfo;
          }
          v40 = (Il2CppObject *)**((_QWORD **)v16 + 23);
          v39 = (System_Action_object__o *)sub_1B68920(System_Action_Action__TypeInfo);
          System_Action_object____ctor(v39, v40, Method_TerminalSceneComponent___c__StartWindowMessage_b__195_3__, 0LL);
          v41 = TerminalSceneComponent___c_TypeInfo->static_fields;
          v41->__9__195_3 = (struct System_Action_Action__o *)v39;
          sub_1B68678((ServantStatusBattleListViewItem_o *)&v41->__9__195_3, (int32_t)v39, v42, v43);
        }
        if ( *(_DWORD *)(v19 + 24) <= 3u )
LABEL_55:
          sub_1B68938(v16, callbackFunc);
        *(_QWORD *)(v19 + 56) = v39;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v19 + 56), (int32_t)v39, v37, v38);
        v44 = (ActionChain_o *)sub_1B68920(ActionChain_TypeInfo);
        ActionChain___ctor_46345900(v44, (System_Action_Action__array *)v19, 0LL);
        if ( v44 )
        {
          ChainableActionBase__Execute((ChainableActionBase_o *)v44, 0LL);
          return;
        }
      }
LABEL_54:
      sub_1B68930(v16, callbackFunc);
    }
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A03EAD )
  {
    sub_1B686D4(&TerminalSceneComponent_TypeInfo, callbackFunc);
    byte_4A03EAD = 1;
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
  v16 = *(void **)(v18 + 536);
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

  if ( (byte_4A0ABC2 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_1B686D4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v7);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A0ABC2 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_30E4514 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
    sub_1B68930(Instance, v10);
  TitleInfoControl__CheckSuperBossHpAnim((TitleInfoControl_o *)Instance, callback, 0LL);
}


void __fastcall TerminalSceneComponent__Update(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  CStateManager_T__o *mFSM; // x0
  ScrTerminalMap_o *mTerminalMap; // x20
  _BOOL8 IsMapTouchEnabled; // x0
  __int64 v8; // x1

  if ( (byte_4A0ABC4 & 1) == 0 )
  {
    sub_1B686D4(&Method_CStateManager_TerminalSceneComponent__update__, method);
    sub_1B686D4(&CTouch_TypeInfo, v3);
    byte_4A0ABC4 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_30719E8 *)Method_CStateManager_TerminalSceneComponent__update__);
  mTerminalMap = this->fields.mTerminalMap;
  IsMapTouchEnabled = TerminalSceneComponent__IsMapTouchEnabled(this, v4);
  if ( !mTerminalMap )
    sub_1B68930(IsMapTouchEnabled, v8);
  ScrTerminalMap__ProcessMapCamera(mTerminalMap, IsMapTouchEnabled, 0LL);
}


void __fastcall TerminalSceneComponent__UpdateCompleteMissionIconUI(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  ScrPlayerStatus_o *mPlayerStatus; // x0

  mPlayerStatus = this->fields.mPlayerStatus;
  if ( !mPlayerStatus )
    sub_1B68930(0LL, method);
  ScrPlayerStatus__UpdateCompleteMissionIconUI(mPlayerStatus, 0LL);
}


void __fastcall TerminalSceneComponent__UpdateQuestBoardList(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x8

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList || (this = (TerminalSceneComponent_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0LL )
    sub_1B68930(this, method);
  QuestBoardListViewManager__SetupDisp((QuestBoardListViewManager_o *)this, 0LL);
}


void __fastcall TerminalSceneComponent__UpdateTitleEventInfo(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *mTitleInfo; // x0

  mTitleInfo = this->fields.mTitleInfo;
  if ( !mTitleInfo )
    sub_1B68930(0LL, method);
  TitleInfoControl__UpdateEventItemInfo(mTitleInfo, 0LL);
}


System_Collections_IEnumerator_o *__fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4A0ABB9 & 1) == 0 )
  {
    sub_1B686D4(&TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__189_TypeInfo, method);
    byte_4A0ABB9 = 1;
  }
  v2 = sub_1B68920(TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__189_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0LL);
  *(_DWORD *)(v2 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v2;
}


bool __fastcall TerminalSceneComponent___CoWaitBlankEerthActionEnd_b__247_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *mTerminalList; // x0

  if ( (byte_4A0ABF2 & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A0ABF2 = 1;
  }
  mTerminalList = (CommonUI_o *)this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_9;
  if ( !ScrTerminalListTop__IsBlankEarthAction((ScrTerminalListTop_o *)mTerminalList, 0LL) )
  {
    mTerminalList = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( mTerminalList )
      return !CommonUI__IsActive_NotifiDialog(mTerminalList, 0LL);
LABEL_9:
    sub_1B68930(mTerminalList, method);
  }
  return 0;
}


bool __fastcall TerminalSceneComponent___CoWaitTerminalTopEffectEnd_b__246_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *mTerminalList; // x0

  if ( (byte_4A0ABF1 & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A0ABF1 = 1;
  }
  mTerminalList = (CommonUI_o *)this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_9;
  if ( ScrTerminalListTop__CheckTerminalTopEffect((ScrTerminalListTop_o *)mTerminalList, 0LL) <= 0 )
  {
    mTerminalList = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( mTerminalList )
      return !CommonUI__IsActive_NotifiDialog(mTerminalList, 0LL);
LABEL_9:
    sub_1B68930(mTerminalList, method);
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
    sub_1B68930(this, action);
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
  if ( (byte_4A0ABED & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, gotNewServant);
    sub_1B686D4(&Method_DataManager_GetMaster_EventRaidMaster___, v5);
    sub_1B686D4(&DataManager_TypeInfo, v6);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v8);
    sub_1B686D4(&Method_TerminalSceneComponent__beginInitialize_b__169_3__, v9);
    this = (TerminalSceneComponent_o *)sub_1B686D4(&Method_TerminalSceneComponent__beginInitialize_b__169_4__, v10);
    byte_4A0ABED = 1;
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
    this = (TerminalSceneComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_EventRaidMaster___);
    v14 = v4->fields.mTerminalMap;
    if ( !v14 )
      goto LABEL_30;
    mWarEnt = v14->fields.mWarEnt;
    if ( !mWarEnt || !this )
      goto LABEL_30;
    if ( EventRaidMaster__GetRaidGorupMax((EventRaidMaster_o *)this, mWarEnt->fields.eventId, 0LL) >= 1 )
    {
      v16 = v4->fields.mTerminalMap;
      v17 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
      System_Action___ctor(v17, (Il2CppObject *)v4, Method_TerminalSceneComponent__beginInitialize_b__169_3__, 0LL);
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
        v19 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
        System_Action___ctor(v19, (Il2CppObject *)v4, Method_TerminalSceneComponent__beginInitialize_b__169_4__, 0LL);
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
    sub_1B68930(this, gotNewServant);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A041D7 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, gotNewServant);
    byte_4A041D7 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_IsAutoResume_k__BackingField = 1;
  this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    sub_1B68930(mPlayerStatus, method);
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

  if ( (byte_4A0ABEF & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4A0ABEF = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL),
        (Instance = (AvalonSceneManager_o *)this->fields.mEarthCore) == 0LL)
    || (mTerminalMap = this->fields.mTerminalMap,
        Instance = (AvalonSceneManager_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)Instance,
                                             0LL),
        !mTerminalMap) )
  {
    sub_1B68930(Instance, v4);
  }
  ScrTerminalMap__SetCore(mTerminalMap, (UnityEngine_GameObject_o *)Instance, 0LL);
}


void __fastcall TerminalSceneComponent___beginInitialize_b__169_3(
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

  if ( (byte_4A0ABEE & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_SingletonTemplate_QuestTree__get_Instance__, v3);
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v4);
    sub_1B686D4(&Method_TerminalSceneComponent__beginInitialize_b__169_5__, v5);
    byte_4A0ABEE = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A058F9 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v6);
    byte_4A058F9 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v8->static_fields->_WarId_k__BackingField;
  v10 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__169_5__, 0LL);
  if ( !Instance )
    sub_1B68930(v11, v12);
  v13 = QuestTree__mfBaseTreeUpdateWithOpenCheck((QuestTree_o *)Instance, WarId_k__BackingField, v10, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_69157088((UnityEngine_MonoBehaviour_o *)this, v13, 0LL);
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
    sub_1B68930(this, method);
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
    sub_1B68930(mTerminalList, method);
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
  if ( (byte_4A0ABF0 & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_1B686D4(&StringLiteral_5503/*"EVENTLISTUP_END"*/, method);
    byte_4A0ABF0 = 1;
  }
  TerminalSceneComponent__deleteQuestMovie(this, method);
  myFSM = v2->fields.myFSM;
  if ( !myFSM )
    sub_1B68930(0LL, v3);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_5503/*"EVENTLISTUP_END"*/, 0LL);
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
  int32_t v44; // w3
  struct UnityEngine_Camera_o *mUICamera; // x20
  CTouch_c *v46; // x0
  struct CTouch_StaticFields *static_fields; // x0
  struct CStateManager_TerminalSceneComponent__o **p_mFSM; // x20
  CStateManager_T__o *v49; // x21
  int32_t v50; // w2
  int32_t v51; // w3
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
  int32_t v80; // w3
  struct ScrTerminalMap_o *mTerminalMap; // x8
  System_Action_o *v82; // x20
  const MethodInfo *v83; // x2

  if ( (byte_4A0ABA8 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&AndroidUtil_TypeInfo, v3);
    sub_1B686D4(&BalanceConfig_TypeInfo, v4);
    sub_1B686D4(&Method_CStateManager_TerminalSceneComponent___ctor__, v5);
    sub_1B686D4(&Method_CStateManager_TerminalSceneComponent__add__, v6);
    sub_1B686D4(&CStateManager_TerminalSceneComponent__TypeInfo, v7);
    sub_1B686D4(&CTouch_TypeInfo, v8);
    sub_1B686D4(&System_Func_bool__bool__TypeInfo, v9);
    sub_1B686D4(&ServantProfileEventJoinManager_TypeInfo, v10);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B686D4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v12);
    sub_1B686D4(&TerminalSceneComponent_StateNormal_TypeInfo, v13);
    sub_1B686D4(&TerminalSceneComponent_StateTutorial1_QuestArrow_TypeInfo, v14);
    sub_1B686D4(&TerminalSceneComponent_StateTutorial1_SpotArrow_TypeInfo, v15);
    sub_1B686D4(&TerminalSceneComponent_StateTutorial2_QuestArrow_TypeInfo, v16);
    sub_1B686D4(&TerminalSceneComponent_StateTutorial2_SpotArrow_TypeInfo, v17);
    sub_1B686D4(&TerminalSceneComponent_StateTutorial3_GachaArrow_TypeInfo, v18);
    sub_1B686D4(&TerminalSceneComponent_StateTutorial3_MenuArrow_TypeInfo, v19);
    sub_1B686D4(&TerminalSceneComponent_StateTutorial4_QuestArrow_TypeInfo, v20);
    sub_1B686D4(&TerminalSceneComponent_StateTutorial4_SpotArrow_TypeInfo, v21);
    sub_1B686D4(&TerminalSceneComponent_StateTutorial5_CombineArrow_TypeInfo, v22);
    sub_1B686D4(&TerminalSceneComponent_StateTutorial5_MenuArrow_TypeInfo, v23);
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v24);
    sub_1B686D4(&Method_TerminalSceneComponent__beginInitialize_b__169_0__, v25);
    sub_1B686D4(&Method_TerminalSceneComponent__beginInitialize_b__169_1__, v26);
    sub_1B686D4(&Method_TerminalSceneComponent__beginInitialize_b__169_2__, v27);
    sub_1B686D4(&StringLiteral_1/*""*/, v28);
    byte_4A0ABA8 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  AndroidUtil__DeleteOldSaveData(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__Load_SaveData(0LL);
  if ( !byte_4A05902 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v29);
    byte_4A05902 = 1;
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
    if ( !byte_4A058FC )
    {
      sub_1B686D4(&TerminalPramsManager_TypeInfo, v29);
      byte_4A058FC = 1;
    }
    v31 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v31 = TerminalPramsManager_TypeInfo;
    }
    v31->static_fields->_DispState_k__BackingField = 0;
    if ( !byte_4A05CBC )
    {
      sub_1B686D4(&TerminalPramsManager_TypeInfo, v29);
      v31 = TerminalPramsManager_TypeInfo;
      byte_4A05CBC = 1;
    }
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = TerminalPramsManager_TypeInfo;
    }
    v31->static_fields->_SelectedStoryQuestId_k__BackingField = 0;
    TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(0LL);
    if ( !byte_4A049D6 )
    {
      sub_1B686D4(&TerminalPramsManager_TypeInfo, v32);
      byte_4A049D6 = 1;
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
  Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  if ( QuestAfterAction__CheckChangeBlankEarth(Instance, 0LL) )
    goto LABEL_39;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A0AC90 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v37);
    byte_4A0AC90 = 1;
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
    if ( !byte_4A05C0E )
    {
      sub_1B686D4(&TerminalPramsManager_TypeInfo, v37);
      byte_4A05C0E = 1;
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
  if ( !byte_4A05C0A )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v37);
    byte_4A05C0A = 1;
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
  if ( !byte_4A06B49 )
  {
    sub_1B686D4(&CTouch_TypeInfo, v42);
    byte_4A06B49 = 1;
  }
  v46 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v46 = CTouch_TypeInfo;
  }
  static_fields = v46->static_fields;
  static_fields->mScreenCam = mUICamera;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->mScreenCam, (int32_t)mUICamera, v43, v44);
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v49 = (CStateManager_T__o *)sub_1B68920(CStateManager_TerminalSceneComponent__TypeInfo);
    CStateManager_object____ctor(
      v49,
      (Il2CppObject *)this,
      11,
      (const MethodInfo_30718D8 *)Method_CStateManager_TerminalSceneComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_TerminalSceneComponent__o *)v49;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.mFSM, (int32_t)v49, v50, v51);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v53 = (Il2CppObject *)sub_1B68920(TerminalSceneComponent_StateNormal_TypeInfo);
    System_Object___ctor(v53, 0LL);
    if ( mFSM )
    {
      CStateManager_object___add(
        mFSM,
        0,
        (IState_T__o *)v53,
        (const MethodInfo_3071980 *)Method_CStateManager_TerminalSceneComponent__add__);
      v54 = (CStateManager_T__o *)*p_mFSM;
      v55 = (Il2CppObject *)sub_1B68920(TerminalSceneComponent_StateTutorial1_SpotArrow_TypeInfo);
      System_Object___ctor(v55, 0LL);
      if ( v54 )
      {
        CStateManager_object___add(
          v54,
          1,
          (IState_T__o *)v55,
          (const MethodInfo_3071980 *)Method_CStateManager_TerminalSceneComponent__add__);
        v56 = (CStateManager_T__o *)*p_mFSM;
        v57 = (Il2CppObject *)sub_1B68920(TerminalSceneComponent_StateTutorial1_QuestArrow_TypeInfo);
        System_Object___ctor(v57, 0LL);
        if ( v56 )
        {
          CStateManager_object___add(
            v56,
            2,
            (IState_T__o *)v57,
            (const MethodInfo_3071980 *)Method_CStateManager_TerminalSceneComponent__add__);
          v58 = (CStateManager_T__o *)*p_mFSM;
          v59 = (Il2CppObject *)sub_1B68920(TerminalSceneComponent_StateTutorial2_SpotArrow_TypeInfo);
          System_Object___ctor(v59, 0LL);
          if ( v58 )
          {
            CStateManager_object___add(
              v58,
              3,
              (IState_T__o *)v59,
              (const MethodInfo_3071980 *)Method_CStateManager_TerminalSceneComponent__add__);
            v60 = (CStateManager_T__o *)*p_mFSM;
            v61 = (Il2CppObject *)sub_1B68920(TerminalSceneComponent_StateTutorial2_QuestArrow_TypeInfo);
            System_Object___ctor(v61, 0LL);
            if ( v60 )
            {
              CStateManager_object___add(
                v60,
                4,
                (IState_T__o *)v61,
                (const MethodInfo_3071980 *)Method_CStateManager_TerminalSceneComponent__add__);
              v62 = (CStateManager_T__o *)*p_mFSM;
              v63 = (Il2CppObject *)sub_1B68920(TerminalSceneComponent_StateTutorial3_MenuArrow_TypeInfo);
              System_Object___ctor(v63, 0LL);
              if ( v62 )
              {
                CStateManager_object___add(
                  v62,
                  5,
                  (IState_T__o *)v63,
                  (const MethodInfo_3071980 *)Method_CStateManager_TerminalSceneComponent__add__);
                v64 = (CStateManager_T__o *)*p_mFSM;
                v65 = (Il2CppObject *)sub_1B68920(TerminalSceneComponent_StateTutorial3_GachaArrow_TypeInfo);
                System_Object___ctor(v65, 0LL);
                if ( v64 )
                {
                  CStateManager_object___add(
                    v64,
                    6,
                    (IState_T__o *)v65,
                    (const MethodInfo_3071980 *)Method_CStateManager_TerminalSceneComponent__add__);
                  v66 = (CStateManager_T__o *)*p_mFSM;
                  v67 = (Il2CppObject *)sub_1B68920(TerminalSceneComponent_StateTutorial4_SpotArrow_TypeInfo);
                  System_Object___ctor(v67, 0LL);
                  if ( v66 )
                  {
                    CStateManager_object___add(
                      v66,
                      7,
                      (IState_T__o *)v67,
                      (const MethodInfo_3071980 *)Method_CStateManager_TerminalSceneComponent__add__);
                    v68 = (CStateManager_T__o *)*p_mFSM;
                    v69 = (Il2CppObject *)sub_1B68920(TerminalSceneComponent_StateTutorial4_QuestArrow_TypeInfo);
                    System_Object___ctor(v69, 0LL);
                    if ( v68 )
                    {
                      CStateManager_object___add(
                        v68,
                        8,
                        (IState_T__o *)v69,
                        (const MethodInfo_3071980 *)Method_CStateManager_TerminalSceneComponent__add__);
                      v70 = (CStateManager_T__o *)*p_mFSM;
                      v71 = (Il2CppObject *)sub_1B68920(TerminalSceneComponent_StateTutorial5_MenuArrow_TypeInfo);
                      System_Object___ctor(v71, 0LL);
                      if ( v70 )
                      {
                        CStateManager_object___add(
                          v70,
                          9,
                          (IState_T__o *)v71,
                          (const MethodInfo_3071980 *)Method_CStateManager_TerminalSceneComponent__add__);
                        v72 = (CStateManager_T__o *)*p_mFSM;
                        v73 = (Il2CppObject *)sub_1B68920(TerminalSceneComponent_StateTutorial5_CombineArrow_TypeInfo);
                        System_Object___ctor(v73, 0LL);
                        if ( v72 )
                        {
                          CStateManager_object___add(
                            v72,
                            10,
                            (IState_T__o *)v73,
                            (const MethodInfo_3071980 *)Method_CStateManager_TerminalSceneComponent__add__);
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
    sub_1B68930(Instance, v35);
  }
LABEL_73:
  Instance = (QuestAfterAction_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_88;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Instance, 0LL, 1, (System_String_o *)StringLiteral_1/*""*/, 1, 0LL);
  Instance = (QuestAfterAction_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_88;
  TitleInfoControl__changeTitleInfo_36940820((TitleInfoControl_o *)Instance, 1, 1, 0, 0LL);
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
  v76 = (System_Func_bool__bool__o *)sub_1B68920(System_Func_bool__bool__TypeInfo);
  System_Func_bool__bool____ctor(
    v76,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent__beginInitialize_b__169_0__,
    0LL);
  if ( !mPlayerStatus )
    goto LABEL_88;
  ScrPlayerStatus__SetCloseGiftAct(mPlayerStatus, v76, 0LL);
  v77 = this->fields.mPlayerStatus;
  v78 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v78, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__169_1__, 0LL);
  if ( !v77 )
    goto LABEL_88;
  v77->fields.mRecoverAct = v78;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v77->fields.mRecoverAct, (int32_t)v78, v79, v80);
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
  v82 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v82, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__169_2__, 0LL);
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

  if ( (byte_4A0ABB3 & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4A0ABB3 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B68930(0LL, v4);
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
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct WarEntity_o *mWarEnt; // x8
  int32_t eventId; // w20
  TerminalPramsManager_c *v13; // x0
  const MethodInfo *v14; // x2
  bool IsEventPeriod; // w20
  TerminalPramsManager_c *v16; // x0
  TerminalPramsManager_c *v17; // x0
  struct ScrTerminalMap_o *v18; // x8
  const MethodInfo *v19; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A0ABB2 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1B686D4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1B686D4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5);
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v6);
    byte_4A0ABB2 = 1;
  }
  entity = 0LL;
  this->fields.isFadeInAfterResumeLoad = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  if ( !byte_4A05E84 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v8);
    byte_4A05E84 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  if ( v13->static_fields->meSceneStatus != 3 )
  {
    if ( eventId )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Instance )
        goto LABEL_43;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             &entity,
             eventId,
             (const MethodInfo_30E4514 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      {
        Instance = entity;
        if ( entity )
        {
          IsEventPeriod = EventEntity__IsEventPeriod((EventEntity_o *)entity, 0LL, 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( IsEventPeriod )
          {
            if ( byte_4A05C0A )
            {
LABEL_32:
              v16 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v16 = TerminalPramsManager_TypeInfo;
              }
              v16->static_fields->meSceneStatus = 2;
              this->fields.isFadeInAfterResumeLoad = 1;
              goto LABEL_35;
            }
LABEL_31:
            sub_1B686D4(&TerminalPramsManager_TypeInfo, v8);
            byte_4A05C0A = 1;
            goto LABEL_32;
          }
          if ( !byte_4A05C0A )
          {
            sub_1B686D4(&TerminalPramsManager_TypeInfo, v8);
            byte_4A05C0A = 1;
          }
          v17 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v17 = TerminalPramsManager_TypeInfo;
          }
          v17->static_fields->meSceneStatus = 1;
          TerminalSceneComponent__CallQuestInformationCloseAtAll(this, 0, v14);
          v18 = this->fields.mTerminalMap;
          if ( v18 )
          {
            Instance = (Il2CppObject *)v18->fields.spotMaskObj;
            if ( Instance )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
              TerminalSceneComponent__SetQuestBoardInfoOff(this, v19);
              goto LABEL_35;
            }
          }
        }
LABEL_43:
        sub_1B68930(Instance, v8);
      }
      v13 = TerminalPramsManager_TypeInfo;
    }
    if ( !v13->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v13);
    if ( byte_4A05C0A )
      goto LABEL_32;
    goto LABEL_31;
  }
LABEL_35:
  this->fields.quitType = 1;
  SceneRootComponent__beginResume_38338696((SceneRootComponent_o *)this, 0LL);
}


void __fastcall TerminalSceneComponent__beginStartUp(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(TerminalSceneComponent_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_beginStartUp.method)(
    this,
    0LL,
    this->klass->vtable._6_beginStartUp.methodPtr);
}


void __fastcall TerminalSceneComponent__beginStartUp_41815816(
        TerminalSceneComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
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
  int32_t v27; // w3
  struct UserServantEntity_array *mStandSvtDatas; // x8
  __int64 mStandSvtIdx; // x9
  UserServantEntity_o *NextStandServant; // x20
  bool isSavedMemoryMode; // w22
  System_Action_o *v32; // x0
  System_Action_o *v33; // x21
  const MethodInfo *v34; // x4
  const MethodInfo *v35; // x3
  System_Collections_IEnumerator_o *Async; // x1

  if ( (byte_4A0ABAA & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, data);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserDeckMaster___, v6);
    sub_1B686D4(&OptionManager_TypeInfo, v7);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v9);
    sub_1B686D4(&Method_TerminalSceneComponent_SendMessageStartUpAndResume__, v10);
    sub_1B686D4(&Method_TerminalSceneComponent__beginStartUp_b__172_0__, v11);
    sub_1B686D4(&TerminalSceneComponent_TypeInfo, v12);
    sub_1B686D4(&TerminalTransitionInfo_TypeInfo, v13);
    sub_1B686D4(&TutorialFlag_TypeInfo, v14);
    byte_4A0ABAA = 1;
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
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields._TransitionInfo_k__BackingField,
    (int32_t)v16,
    (int32_t)method,
    v3);
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
  if ( !byte_4A0AC91 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v19);
    byte_4A0AC91 = 1;
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
    if ( !byte_4A0AC92 )
    {
      sub_1B686D4(&TerminalPramsManager_TypeInfo, v19);
      byte_4A0AC92 = 1;
    }
    v21 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v21 = TerminalPramsManager_TypeInfo;
    }
    v21->static_fields->_IsDispDone_UIStandFigure_k__BackingField = 1;
    if ( !byte_4A0AC93 )
    {
      sub_1B686D4(&TerminalPramsManager_TypeInfo, v19);
      v21 = TerminalPramsManager_TypeInfo;
      byte_4A0AC93 = 1;
    }
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = TerminalPramsManager_TypeInfo;
    }
    v21->static_fields->_IsDispUIStandFigure_k__BackingField = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Instance = (Il2CppObject *)TutorialFlag__Get_37438804(126, 0LL);
  if ( !MasterData_object
    || (((unsigned __int8)Instance & 1) == 0
      ? (UserServantListFromDeckIsTerminal = UserDeckMaster__GetUserServantListFromDeckIsTerminal(
                                               (UserDeckMaster_o *)MasterData_object,
                                               0LL))
      : (UserServantListFromDeckIsTerminal = UserDeckMaster__GetUserServantListFromDeckReaveHeroine(
                                               (UserDeckMaster_o *)MasterData_object,
                                               0LL)),
        this->fields.mStandSvtDatas = UserServantListFromDeckIsTerminal,
        sub_1B68678(
          (ServantStatusBattleListViewItem_o *)&this->fields.mStandSvtDatas,
          (int32_t)UserServantListFromDeckIsTerminal,
          v26,
          v27),
        (mStandSvtDatas = this->fields.mStandSvtDatas) == 0LL) )
  {
LABEL_45:
    sub_1B68930(Instance, v23);
  }
  mStandSvtIdx = this->fields.mStandSvtIdx;
  if ( (unsigned int)mStandSvtIdx >= mStandSvtDatas->max_length )
    sub_1B68938(Instance, v23);
  NextStandServant = mStandSvtDatas->m_Items[mStandSvtIdx];
  if ( !NextStandServant )
    NextStandServant = TerminalSceneComponent__GetNextStandServant(this, v23);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  isSavedMemoryMode = OptionManager__isSavedMemoryMode(0LL);
  v32 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  v33 = v32;
  if ( isSavedMemoryMode )
  {
    System_Action___ctor(v32, (Il2CppObject *)this, Method_TerminalSceneComponent__beginStartUp_b__172_0__, 0LL);
    TerminalSceneComponent__SetupStandServant(this, NextStandServant, 0, v33, v34);
  }
  else
  {
    System_Action___ctor(v32, (Il2CppObject *)this, Method_TerminalSceneComponent_SendMessageStartUpAndResume__, 0LL);
    Async = TerminalSceneComponent__LoadAsync(this, NextStandServant, v33, v35);
    UnityEngine_MonoBehaviour__StartCoroutine_69157088((UnityEngine_MonoBehaviour_o *)this, Async, 0LL);
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
  int32_t v21; // w3
  Il2CppObject *v22; // x21
  TerminalPramsManager_c *v23; // x0
  ServantStatusBattleListViewItem_o *p_eventDailyPoint_k__BackingField; // x0
  int32_t monitor_high; // w21
  TerminalPramsManager_c *v26; // x0
  __int64 v27; // x1
  int64_t Time_38223372; // x21
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
  if ( (byte_4A0ABD2 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, result);
    sub_1B686D4(&Method_DataManager_GetMasterData_EventDetailMaster___, v5);
    sub_1B686D4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_1B686D4(&Method_JsonManager_Deserialize_EventDailyPoint___, v7);
    sub_1B686D4(&JsonManager_TypeInfo, v8);
    sub_1B686D4(&NetworkManager_TypeInfo, v9);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B686D4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v11);
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v12);
    sub_1B686D4(&Method_TerminalSceneComponent__callbackEventDailyPoint_b__215_0__, v13);
    sub_1B686D4(&StringLiteral_11010/*"REQUEST_NG"*/, v14);
    sub_1B686D4(&StringLiteral_21981/*"ng"*/, v15);
    this = (TerminalSceneComponent_o *)sub_1B686D4(&StringLiteral_25057/*"{}"*/, v16);
    byte_4A0ABD2 = 1;
  }
  entity = 0LL;
  if ( !result )
    goto LABEL_46;
  if ( System_String__Equals_61427784(result, (System_String_o *)StringLiteral_21981/*"ng"*/, 0LL) )
  {
    this = (TerminalSceneComponent_o *)v4->fields.myFSM;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11010/*"REQUEST_NG"*/, 0LL);
      return;
    }
LABEL_46:
    sub_1B68930(this, result);
  }
  this = (TerminalSceneComponent_o *)System_String__Equals_61427784(result, (System_String_o *)StringLiteral_25057/*"{}"*/, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_43;
  mTerminalMap = v4->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_46;
  mWarEnt = mTerminalMap->fields.mWarEnt;
  this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_46;
  this = (TerminalSceneComponent_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !mWarEnt || !this )
    goto LABEL_46;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          mWarEnt->fields.eventId,
          (const MethodInfo_30E4514 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
LABEL_43:
    this = (TerminalSceneComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
            (const MethodInfo_2EAF7E8 *)Method_JsonManager_Deserialize_EventDailyPoint___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A07983 )
    {
      sub_1B686D4(&TerminalPramsManager_TypeInfo, v19);
      byte_4A07983 = 1;
    }
    v23 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v23 = TerminalPramsManager_TypeInfo;
    }
    p_eventDailyPoint_k__BackingField = (ServantStatusBattleListViewItem_o *)&v23->static_fields->_eventDailyPoint_k__BackingField;
    p_eventDailyPoint_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v22;
    sub_1B68678(p_eventDailyPoint_k__BackingField, (int32_t)v22, v20, v21);
    if ( !entity )
      goto LABEL_46;
    monitor_high = HIDWORD(entity[2].monitor);
    if ( !byte_4A0AC98 )
    {
      sub_1B686D4(&TerminalPramsManager_TypeInfo, result);
      byte_4A0AC98 = 1;
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
    Time_38223372 = NetworkManager__getTime_38223372(v37, 0LL);
    if ( !byte_4A06375 )
    {
      sub_1B686D4(&TerminalPramsManager_TypeInfo, v27);
      byte_4A06375 = 1;
    }
    v29 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v29 = TerminalPramsManager_TypeInfo;
    }
    v29->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = Time_38223372;
    eventId = mWarEnt->fields.eventId;
    if ( !byte_4A06374 )
    {
      sub_1B686D4(&TerminalPramsManager_TypeInfo, v27);
      v29 = TerminalPramsManager_TypeInfo;
      byte_4A06374 = 1;
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
    v35 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(
      v35,
      (Il2CppObject *)v4,
      Method_TerminalSceneComponent__callbackEventDailyPoint_b__215_0__,
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
  int32_t v13; // w3

  if ( (byte_4A0ABCD & 1) == 0 )
  {
    sub_1B686D4(&Method_JsonManager_Deserialize_TopHomeInfo___, result);
    sub_1B686D4(&JsonManager_TypeInfo, v5);
    sub_1B686D4(&StringLiteral_11012/*"REQUEST_OK"*/, v6);
    sub_1B686D4(&StringLiteral_11010/*"REQUEST_NG"*/, v7);
    sub_1B686D4(&StringLiteral_21981/*"ng"*/, v8);
    byte_4A0ABCD = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21981/*"ng"*/, 0LL) )
  {
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)StringLiteral_11010/*"REQUEST_NG"*/, 0LL);
      return;
    }
LABEL_11:
    sub_1B68930(myFSM, v9);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = JsonManager__Deserialize_object_(
            (Il2CppObject *)result,
            (const MethodInfo_2EAF7E8 *)Method_JsonManager_Deserialize_TopHomeInfo___);
  if ( !myFSM )
    goto LABEL_11;
  TopHomeRequest__setRecentRefreshTime(*((_QWORD *)myFSM + 2), 0LL);
  MainMenuBar__UpdateNoticeNumber(0LL);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)StringLiteral_11012/*"REQUEST_OK"*/, 0LL);
  afterTopLogin = this->fields.afterTopLogin;
  this->fields.isTopLoginBusy = 0;
  ActionExtensions__Call(afterTopLogin, 0LL);
  this->fields.afterTopLogin = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.afterTopLogin, 0, v12, v13);
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
  PlayMakerFSM_o *myFSM; // x0
  PlayMakerFSM_o *v26; // x19
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x0
  System_Collections_Generic_List_int__o *v28; // x20
  TerminalSceneComponent___c_c *v29; // x8
  System_Converter_TInput__TOutput__o *_9__208_0; // x21
  Il2CppObject *v31; // x22
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_array *v35; // x0
  System_String_o *v36; // x0
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x0
  System_Collections_Generic_List_int__o *v38; // x19
  TerminalSceneComponent___c_c *v39; // x8
  System_Converter_TInput__TOutput__o *_9__208_1; // x20
  Il2CppObject *v41; // x21
  struct TerminalSceneComponent___c_StaticFields *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_array *v45; // x0
  System_String_o *v46; // x0

  if ( (byte_4A0ABCC & 1) == 0 )
  {
    sub_1B686D4(&System_Converter_int__string__TypeInfo, result);
    sub_1B686D4(&Method_System_Linq_Enumerable_ToList_int___, v5);
    sub_1B686D4(&Method_JsonManager_Deserialize_CommonUI_LoginResultData___, v6);
    sub_1B686D4(&JsonManager_TypeInfo, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__ConvertAll_string___, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_string__ToArray__, v9);
    sub_1B686D4(&Method_NetworkManager_getRequest_TopHomeRequest___, v10);
    sub_1B686D4(&NetworkManager_TypeInfo, v11);
    sub_1B686D4(&NetworkManager_ResultCallbackFunc_TypeInfo, v12);
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v13);
    sub_1B686D4(&Method_TerminalSceneComponent_callbackTopHome__, v14);
    sub_1B686D4(&Method_TerminalSceneComponent___c__callbackTopLogin_b__208_0__, v15);
    sub_1B686D4(&Method_TerminalSceneComponent___c__callbackTopLogin_b__208_1__, v16);
    sub_1B686D4(&TerminalSceneComponent___c_TypeInfo, v17);
    sub_1B686D4(&StringLiteral_19558/*"freeShopIds"*/, v18);
    sub_1B686D4(&StringLiteral_11012/*"REQUEST_OK"*/, v19);
    sub_1B686D4(&StringLiteral_22839/*"returnRarePriShopIds"*/, v20);
    sub_1B686D4(&StringLiteral_868/*","*/, v21);
    byte_4A0ABCC = 1;
  }
  v22 = (NetworkManager_ResultCallbackFunc_o *)sub_1B68920(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v22,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_callbackTopHome__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v22,
                     (const MethodInfo_2ECB448 *)Method_NetworkManager_getRequest_TopHomeRequest___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A05D59 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v23);
    byte_4A05D59 = 1;
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
    PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11012/*"REQUEST_OK"*/, 0LL);
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
                              (const MethodInfo_2EAF7E8 *)Method_JsonManager_Deserialize_CommonUI_LoginResultData___);
  if ( !myFSM )
LABEL_45:
    sub_1B68930(myFSM, v23);
  v26 = myFSM;
  monitor = (System_Collections_Generic_IEnumerable_TSource__o *)myFSM[2].monitor;
  if ( monitor )
  {
    myFSM = (PlayMakerFSM_o *)System_Linq_Enumerable__ToList_int_(
                                monitor,
                                (const MethodInfo_2E85828 *)Method_System_Linq_Enumerable_ToList_int___);
    v28 = (System_Collections_Generic_List_int__o *)myFSM;
    v29 = TerminalSceneComponent___c_TypeInfo;
    if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v29 = TerminalSceneComponent___c_TypeInfo;
    }
    _9__208_0 = (System_Converter_TInput__TOutput__o *)v29->static_fields->__9__208_0;
    if ( !_9__208_0 )
    {
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        v29 = TerminalSceneComponent___c_TypeInfo;
      }
      v31 = (Il2CppObject *)v29->static_fields->__9;
      _9__208_0 = (System_Converter_TInput__TOutput__o *)sub_1B68920(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(
        _9__208_0,
        v31,
        Method_TerminalSceneComponent___c__callbackTopLogin_b__208_0__,
        0LL);
      static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
      static_fields->__9__208_0 = (struct System_Converter_int__string__o *)_9__208_0;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__208_0, (int32_t)_9__208_0, v33, v34);
    }
    if ( !v28 )
      goto LABEL_45;
    myFSM = (PlayMakerFSM_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                v28,
                                (System_Converter_T__TOutput__o *)_9__208_0,
                                (const MethodInfo_2D7F964 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !myFSM )
      goto LABEL_45;
    v35 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)myFSM,
                                   (const MethodInfo_34BDDD0 *)Method_System_Collections_Generic_List_string__ToArray__);
    v36 = System_String__Join((System_String_o *)StringLiteral_868/*","*/, v35, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_19558/*"freeShopIds"*/, v36, 0LL);
  }
  klass = (System_Collections_Generic_IEnumerable_TSource__o *)v26[2].klass;
  if ( klass )
  {
    myFSM = (PlayMakerFSM_o *)System_Linq_Enumerable__ToList_int_(
                                klass,
                                (const MethodInfo_2E85828 *)Method_System_Linq_Enumerable_ToList_int___);
    v38 = (System_Collections_Generic_List_int__o *)myFSM;
    v39 = TerminalSceneComponent___c_TypeInfo;
    if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v39 = TerminalSceneComponent___c_TypeInfo;
    }
    _9__208_1 = (System_Converter_TInput__TOutput__o *)v39->static_fields->__9__208_1;
    if ( !_9__208_1 )
    {
      if ( !v39->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v39);
        v39 = TerminalSceneComponent___c_TypeInfo;
      }
      v41 = (Il2CppObject *)v39->static_fields->__9;
      _9__208_1 = (System_Converter_TInput__TOutput__o *)sub_1B68920(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(
        _9__208_1,
        v41,
        Method_TerminalSceneComponent___c__callbackTopLogin_b__208_1__,
        0LL);
      v42 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v42->__9__208_1 = (struct System_Converter_int__string__o *)_9__208_1;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v42->__9__208_1, (int32_t)_9__208_1, v43, v44);
    }
    if ( v38 )
    {
      myFSM = (PlayMakerFSM_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                  v38,
                                  (System_Converter_T__TOutput__o *)_9__208_1,
                                  (const MethodInfo_2D7F964 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
      if ( myFSM )
      {
        v45 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                       (System_Collections_Generic_List_object__o *)myFSM,
                                       (const MethodInfo_34BDDD0 *)Method_System_Collections_Generic_List_string__ToArray__);
        v46 = System_String__Join((System_String_o *)StringLiteral_868/*","*/, v45, 0LL);
        UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_22839/*"returnRarePriShopIds"*/, v46, 0LL);
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
  bool v9; // w22
  __int64 v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A0ABBA & 1) == 0 )
  {
    sub_1B686D4(&TerminalSceneComponent__coFadein_WorldDisp_d__190_TypeInfo, endAct);
    byte_4A0ABBA = 1;
  }
  v9 = isExecuteUnusedAssets;
  v10 = sub_1B68920(TerminalSceneComponent__coFadein_WorldDisp_d__190_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v10 + 32), (int32_t)this, v11, v12);
  *(float *)(v10 + 64) = fadeTime;
  *(_QWORD *)(v10 + 40) = endAct;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v10 + 40), (int32_t)endAct, v13, v14);
  *(_BYTE *)(v10 + 48) = v9;
  return (System_Collections_IEnumerator_o *)v10;
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
  int64_t Time; // x20
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *EntityList_object; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x21
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  QuestPhaseEntity_c *v28; // x1
  QuestPhaseEntity_o *v29; // x22
  __int64 methodPtr_low; // x9
  QuestPhaseMaster_c *v31; // x0
  System_String_o *ScriptStr; // x0
  __int64 v33; // x1
  System_String_o *v34; // x23
  Il2CppObject *Entity; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_4A0ABD0 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1B686D4(&Method_DataManager_GetMasterData_QuestMaster___, v2);
    sub_1B686D4(&Method_DataManager_getEntityList_QuestPhaseMaster___, v3);
    sub_1B686D4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v4);
    sub_1B686D4(&System_IDisposable_TypeInfo, v5);
    sub_1B686D4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B686D4(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B686D4(&NetworkManager_TypeInfo, v8);
    sub_1B686D4(&QuestPhaseEntity_TypeInfo, v9);
    sub_1B686D4(&QuestPhaseMaster_TypeInfo, v10);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4A0ABD0 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (EntityList_object = (System_Collections_ObjectModel_Collection_T__o *)DataManager__getEntityList_object_(
                                                                                (DataManager_o *)Instance,
                                                                                (const MethodInfo_2E49F4C *)Method_DataManager_getEntityList_QuestPhaseMaster___),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_QuestMaster___),
        !EntityList_object) )
  {
    sub_1B68930(Instance, v14);
  }
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 EntityList_object,
                 (const MethodInfo_30816FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B68930(0LL, v17);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_1BBA6B4(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_20;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_20:
      v26 = sub_1BBA6B4(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            Enumerator,
            *(_QWORD *)(v26 + 8));
    v29 = (QuestPhaseEntity_o *)v27;
    if ( v27 )
    {
      v28 = QuestPhaseEntity_TypeInfo;
      methodPtr_low = LOBYTE(QuestPhaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 304LL) < (unsigned int)methodPtr_low
        || *(QuestPhaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * methodPtr_low - 8) != QuestPhaseEntity_TypeInfo )
      {
        sub_1B68BF0(v27);
LABEL_41:
        sub_1B68930(v31, v28);
      }
    }
    v31 = QuestPhaseMaster_TypeInfo;
    if ( !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo);
    if ( !v29 )
      goto LABEL_41;
    ScriptStr = QuestPhaseEntity__getScriptStr(
                  v29,
                  QuestPhaseMaster_TypeInfo->static_fields->MOVIE_QUEST_SCRIPT_STR,
                  0LL,
                  0LL);
    v34 = ScriptStr;
    if ( ScriptStr )
    {
      if ( !v16 )
        sub_1B68930(ScriptStr, v33);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v16,
                 v29->fields.questId,
                 (const MethodInfo_30E44C0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( Time >= QuestEntity__getClosedAt((QuestEntity_o *)Entity, 0LL) )
          MovieFileMerge__Delete(v34, 0LL);
      }
    }
  }
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_37;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_37:
    v39 = sub_1BBA6B4(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
}


void __fastcall TerminalSceneComponent__fadeoutBgm(
        TerminalSceneComponent_o *this,
        float fadeoutTime,
        const MethodInfo *method)
{
  if ( (byte_4A0ABC9 & 1) == 0 )
  {
    sub_1B686D4(&SoundManager_TypeInfo, method);
    byte_4A0ABC9 = 1;
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
  __int64 v1; // x1
  TerminalSceneComponent_c *v2; // x0

  if ( (byte_4A0ABA0 & 1) == 0 )
  {
    sub_1B686D4(&TerminalSceneComponent_TypeInfo, v1);
    byte_4A0ABA0 = 1;
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

  if ( (byte_4A0ABA3 & 1) == 0 )
  {
    sub_1B686D4(&FSUtility_TypeInfo, method);
    byte_4A0ABA3 = 1;
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

  if ( (byte_4A0ABA2 & 1) == 0 )
  {
    sub_1B686D4(&FSUtility_TypeInfo, method);
    byte_4A0ABA2 = 1;
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

  if ( (byte_4A0ABA4 & 1) == 0 )
  {
    sub_1B686D4(&FSUtility_TypeInfo, method);
    byte_4A0ABA4 = 1;
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

  if ( (byte_4A0ABA5 & 1) == 0 )
  {
    sub_1B686D4(&FSUtility_TypeInfo, method);
    byte_4A0ABA5 = 1;
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

  if ( (byte_4A0ABAF & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&AtlasManager_TypeInfo, v3);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v4);
    sub_1B686D4(&Method_TerminalSceneComponent__loadCommonBG_b__177_0__, v5);
    byte_4A0ABAF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_1B68930(0LL, v7);
  if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 4, 0LL) )
  {
    TerminalSceneComponent__loadOutGameAtlas(this, v8);
  }
  else
  {
    v9 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_TerminalSceneComponent__loadCommonBG_b__177_0__, 0LL);
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

  if ( (byte_4A0ABB0 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&AtlasManager_TypeInfo, v3);
    sub_1B686D4(&Method_TerminalSceneComponent__loadOutGameAtlas_b__178_0__, v4);
    byte_4A0ABB0 = 1;
  }
  v5 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_TerminalSceneComponent__loadOutGameAtlas_b__178_0__, 0LL);
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

  if ( (byte_4A0ABB1 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v3);
    sub_1B686D4(&Method_TerminalSceneComponent_SendMessageStartUpAndResume__, v4);
    byte_4A0ABB1 = 1;
  }
  TransitionInfo_k__BackingField = this->fields._TransitionInfo_k__BackingField;
  if ( TransitionInfo_k__BackingField
    && !System_String__IsNullOrEmpty(TransitionInfo_k__BackingField->fields.voiceAssetName, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v8 = this->fields._TransitionInfo_k__BackingField;
    if ( !v8
      || (voiceAssetName = v8->fields.voiceAssetName,
          v10 = (SoundManager_o *)Instance,
          v11 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo),
          System_Action___ctor(
            v11,
            (Il2CppObject *)this,
            Method_TerminalSceneComponent_SendMessageStartUpAndResume__,
            0LL),
          !v10) )
    {
      sub_1B68930(Instance, v7);
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

  if ( (byte_4A0ABDC & 1) == 0 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, method);
    sub_1B686D4(&StringLiteral_5717/*"EV_SCENE_STATUS_INIT"*/, v3);
    sub_1B686D4(&StringLiteral_5718/*"EV_SCENE_STATUS_RESUME"*/, v4);
    byte_4A0ABDC = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A05E84 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, method);
    byte_4A05E84 = 1;
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
      v8 = &StringLiteral_5717/*"EV_SCENE_STATUS_INIT"*/;
      goto LABEL_15;
    }
LABEL_16:
    sub_1B68930(myFSM, method);
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_16;
  v8 = &StringLiteral_5718/*"EV_SCENE_STATUS_RESUME"*/;
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
    sub_1B68930(0LL, sEventStr);
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

  if ( (byte_4A0ABCF & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_SingletonTemplate_QuestTree__get_Instance__, v3);
    sub_1B686D4(&Method_TerminalSceneComponent__mfsmfInitTable_b__212_0__, v4);
    byte_4A0ABCF = 1;
  }
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__ReleaseMap(mTerminalMap, 0, 0LL), (mTerminalList = this->fields.mTerminalList) == 0LL)
    || (mTerminalMap = (ScrTerminalMap_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0LL
    || (ListViewManager__DestroyList((ListViewManager_o *)mTerminalMap, 0LL),
        Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_QuestTree__get_Instance__),
        v8 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_TerminalSceneComponent__mfsmfInitTable_b__212_0__, 0LL),
        !Instance) )
  {
    sub_1B68930(mTerminalMap, method);
  }
  v9 = QuestTree__Init((QuestTree_o *)Instance, v8, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_69157088((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
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

  if ( (byte_4A0ABC6 & 1) == 0 )
  {
    sub_1B686D4(&SoundManager_TypeInfo, bgmName);
    byte_4A0ABC6 = 1;
  }
  if ( System_String__IsNullOrEmpty(bgmName, 0LL) )
  {
    TerminalSceneComponent__playDefaultBgm(this, v5);
  }
  else
  {
    this->fields.mPlayBgmName = bgmName;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.mPlayBgmName, (int32_t)bgmName, v6, v7);
    mPlayBgmName = this->fields.mPlayBgmName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm(mPlayBgmName, 0LL);
  }
}


void __fastcall TerminalSceneComponent__playBgm_41831424(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  System_String_o *mPlayBgmName; // x19

  if ( (byte_4A0ABC8 & 1) == 0 )
  {
    sub_1B686D4(&SoundManager_TypeInfo, method);
    byte_4A0ABC8 = 1;
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

  if ( (byte_4A0ABC7 & 1) == 0 )
  {
    sub_1B686D4(&BgmManager_TypeInfo, method);
    byte_4A0ABC7 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  TerminalSceneComponent__playBgm(this, MainBgmName, v4);
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
  int32_t v20; // w3
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

  if ( (byte_4A0ABB4 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_TerminalOverwriteMaster___, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v3);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v5);
    sub_1B686D4(&SoundManager_TypeInfo, v6);
    sub_1B686D4(&string_TypeInfo, v7);
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v8);
    sub_1B686D4(&TerminalSceneComponent_TypeInfo, v9);
    sub_1B686D4(&StringLiteral_14708/*"UISkin/"*/, v10);
    byte_4A0ABB4 = 1;
  }
  skinName = 0LL;
  str1 = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  AutomatedAction__TerminateMissionAction((AutomatedAction_o *)Instance, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A0AC94 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v13);
    byte_4A0AC94 = 1;
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
    if ( !byte_4A0615C )
    {
      sub_1B686D4(&TerminalPramsManager_TypeInfo, v13);
      byte_4A0615C = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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
      sub_1B68678((ServantStatusBattleListViewItem_o *)((char *)Instance + 40), 0, v19, v20);
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
    sub_1B68930(Instance, v12);
  }
LABEL_34:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
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
      Empty = System_String__Concat_61419468((System_String_o *)StringLiteral_14708/*"UISkin/"*/, skinName, 0LL);
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
      v32 = System_String__Concat_61419468((System_String_o *)StringLiteral_14708/*"UISkin/"*/, str1, 0LL);
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

  if ( (byte_4A0ABD1 & 1) == 0 )
  {
    sub_1B686D4(&Method_NetworkManager_getRequest_EventDailyPointRequest___, *(_QWORD *)&eventId);
    sub_1B686D4(&NetworkManager_TypeInfo, v5);
    sub_1B686D4(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1B686D4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    sub_1B686D4(&Method_TerminalSceneComponent_callbackEventDailyPoint__, v8);
    byte_4A0ABD1 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1B68920(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_callbackEventDailyPoint__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               v11,
               (const MethodInfo_2ECB448 *)Method_NetworkManager_getRequest_EventDailyPointRequest___);
  if ( !Instance )
LABEL_8:
    sub_1B68930(Instance, v10);
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

  if ( (byte_4A0ABCB & 1) == 0 )
  {
    sub_1B686D4(&NetworkManager_LoginCallbackFunc_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v3);
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v4);
    sub_1B686D4(&Method_TerminalSceneComponent_callbackTopLogin__, v5);
    sub_1B686D4(&TutorialFlag_TypeInfo, v6);
    sub_1B686D4(&StringLiteral_11012/*"REQUEST_OK"*/, v7);
    byte_4A0ABCB = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_37438804(102, 0LL) )
    goto LABEL_13;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A05E99 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v8);
    byte_4A05E99 = 1;
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
      PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11012/*"REQUEST_OK"*/, 0LL);
      this->fields.isTopLoginBusy = 0;
      return;
    }
LABEL_17:
    sub_1B68930(myFSM, v8);
  }
  this->fields.isTopLoginBusy = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v12 = (NetworkManager_LoginCallbackFunc_o *)sub_1B68920(NetworkManager_LoginCallbackFunc_TypeInfo);
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
  int32_t v3; // w3

  this->fields._TransitionInfo_k__BackingField = value;
  sub_1B68678(
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
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B68794(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B6894C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B687FC(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19B21F4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B21AC;
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
  if ( (byte_4A0ABF3 & 1) == 0 )
  {
    sub_1B686D4(&bool_TypeInfo, isPlay);
    byte_4A0ABF3 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B68688(this, v9, callback, object);
}


void __fastcall TerminalSceneComponent_PlayChapterStartCallback__EndInvoke(
        TerminalSceneComponent_PlayChapterStartCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B6868C(result, 0LL, method);
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
  int32_t v15; // w3
  TerminalSceneComponent_o **v16; // x20
  QuestBoardListViewObject_o *FocusQuest; // x0
  int32_t v18; // w2
  int32_t v19; // w3
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
  int32_t v44; // w3
  UnityEngine_Rect_o v45; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4A0ABF6 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, that);
    sub_1B686D4(&Method_GameObjectExtensions_RemoveComponent_Collider___, v4);
    sub_1B686D4(&LocalizationManager_TypeInfo, v5);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B686D4(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__0__, v7);
    sub_1B686D4(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__1__, v8);
    sub_1B686D4(&TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_TypeInfo, v9);
    sub_1B686D4(&StringLiteral_13445/*"TUTORIAL_MESSAGE_TERMINAL_QUEST1"*/, v10);
    byte_4A0ABF6 = 1;
  }
  v11 = sub_1B68920(TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_22;
  *(_QWORD *)(v11 + 16) = that;
  v16 = (TerminalSceneComponent_o **)(v11 + 16);
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)that, v14, v15);
  if ( !*(_QWORD *)(v11 + 16) )
    goto LABEL_22;
  mFG = *(TerminalSceneComponent_o **)(*(_QWORD *)(v11 + 16) + 256LL);
  if ( !mFG )
    goto LABEL_22;
  FocusQuest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mFG, 0LL);
  *(_QWORD *)(v11 + 24) = FocusQuest;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)FocusQuest, v18, v19);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  mFG = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13445/*"TUTORIAL_MESSAGE_TERMINAL_QUEST1"*/, 0LL);
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
    (const MethodInfo_2E9A2F4 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mBG;
  if ( !mFG )
    goto LABEL_22;
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0LL);
  GameObjectExtensions__RemoveComponent_object_(
    v26,
    (const MethodInfo_2E9A2F4 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v40 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
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
        v42 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo),
        System_Action___ctor(
          v42,
          (Il2CppObject *)v11,
          Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0LL),
        !v41) )
  {
LABEL_22:
    sub_1B68930(mFG, v13);
  }
  v41->fields.mQuestClickAct = v42;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v41->fields.mQuestClickAct, (int32_t)v42, v43, v44);
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
  if ( (byte_4A0ABF7 & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)sub_1B686D4(
                                                                                        &Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___,
                                                                                        method);
    byte_4A0ABF7 = 1;
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
                                                                                            (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0LL )
  {
LABEL_12:
    sub_1B68930(this, method);
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
  int32_t v10; // w3

  if ( (byte_4A0ABF8 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B686D4(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__2__, v4);
    byte_4A0ABF8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10);
  }
  if ( !v8 )
    sub_1B68930(Instance, v6);
  CommonUI__CloseTutorialNotificationDialogArrow_30388564(v8, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1B68930(0LL, method);
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
  int32_t v15; // w3
  SrcSpotBasePrefab_o *FocusSpot; // x0
  int32_t v17; // w2
  int32_t v18; // w3
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
  int32_t v34; // w3
  UnityEngine_Vector2_o v35; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v36; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v38; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4A0ABF4 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, that);
    sub_1B686D4(&LocalizationManager_TypeInfo, v5);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B686D4(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__0__, v7);
    sub_1B686D4(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__1__, v8);
    sub_1B686D4(&TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_TypeInfo, v9);
    sub_1B686D4(&StringLiteral_13448/*"TUTORIAL_MESSAGE_TERMINAL_SPOT1"*/, v10);
    byte_4A0ABF4 = 1;
  }
  v11 = sub_1B68920(TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_12;
  *(_QWORD *)(v11 + 24) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)this, v14, v15);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_12;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_12;
  FocusSpot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0LL);
  *(_QWORD *)(v11 + 16) = FocusSpot;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)FocusSpot, v17, v18);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_13448/*"TUTORIAL_MESSAGE_TERMINAL_SPOT1"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v30 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
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
        v32 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo),
        System_Action___ctor(
          v32,
          (Il2CppObject *)v11,
          Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0LL),
        !v31) )
  {
LABEL_12:
    sub_1B68930(mTerminalMap, v13);
  }
  v31->fields.mSpotClickAct = v32;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v31->fields.mSpotClickAct, (int32_t)v32, v33, v34);
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
      sub_1B68930(that, that);
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
    sub_1B68930(0LL, method);
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
  int32_t v10; // w3

  if ( (byte_4A0ABF5 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B686D4(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__2__, v4);
    byte_4A0ABF5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10);
  }
  if ( !v8 )
    sub_1B68930(Instance, v6);
  CommonUI__CloseTutorialNotificationDialogArrow_30388564(v8, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial1_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B68930(this, method);
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
  int32_t v15; // w3
  TerminalSceneComponent_o **v16; // x20
  QuestBoardListViewObject_o *FocusQuest; // x0
  int32_t v18; // w2
  int32_t v19; // w3
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
  int32_t v44; // w3
  UnityEngine_Rect_o v45; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4A0ABFB & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, that);
    sub_1B686D4(&Method_GameObjectExtensions_RemoveComponent_Collider___, v4);
    sub_1B686D4(&LocalizationManager_TypeInfo, v5);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B686D4(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__0__, v7);
    sub_1B686D4(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__1__, v8);
    sub_1B686D4(&TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_TypeInfo, v9);
    sub_1B686D4(&StringLiteral_13446/*"TUTORIAL_MESSAGE_TERMINAL_QUEST2"*/, v10);
    byte_4A0ABFB = 1;
  }
  v11 = sub_1B68920(TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_22;
  *(_QWORD *)(v11 + 16) = that;
  v16 = (TerminalSceneComponent_o **)(v11 + 16);
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)that, v14, v15);
  if ( !*(_QWORD *)(v11 + 16) )
    goto LABEL_22;
  mFG = *(TerminalSceneComponent_o **)(*(_QWORD *)(v11 + 16) + 256LL);
  if ( !mFG )
    goto LABEL_22;
  FocusQuest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mFG, 0LL);
  *(_QWORD *)(v11 + 24) = FocusQuest;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)FocusQuest, v18, v19);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  mFG = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13446/*"TUTORIAL_MESSAGE_TERMINAL_QUEST2"*/, 0LL);
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
    (const MethodInfo_2E9A2F4 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mBG;
  if ( !mFG )
    goto LABEL_22;
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0LL);
  GameObjectExtensions__RemoveComponent_object_(
    v26,
    (const MethodInfo_2E9A2F4 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v40 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
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
        v42 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo),
        System_Action___ctor(
          v42,
          (Il2CppObject *)v11,
          Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0LL),
        !v41) )
  {
LABEL_22:
    sub_1B68930(mFG, v13);
  }
  v41->fields.mQuestClickAct = v42;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v41->fields.mQuestClickAct, (int32_t)v42, v43, v44);
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
  if ( (byte_4A0ABFC & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)sub_1B686D4(
                                                                                        &Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___,
                                                                                        method);
    byte_4A0ABFC = 1;
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
                                                                                            (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0LL )
  {
LABEL_12:
    sub_1B68930(this, method);
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
  int32_t v10; // w3

  if ( (byte_4A0ABFD & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B686D4(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__2__, v4);
    byte_4A0ABFD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10);
  }
  if ( !v8 )
    sub_1B68930(Instance, v6);
  CommonUI__CloseTutorialNotificationDialogArrow_30388564(v8, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1B68930(0LL, method);
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
  int32_t v15; // w3
  SrcSpotBasePrefab_o *FocusSpot; // x0
  int32_t v17; // w2
  int32_t v18; // w3
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
  int32_t v34; // w3
  UnityEngine_Vector2_o v35; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v36; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v38; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4A0ABF9 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, that);
    sub_1B686D4(&LocalizationManager_TypeInfo, v5);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B686D4(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__0__, v7);
    sub_1B686D4(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__1__, v8);
    sub_1B686D4(&TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_TypeInfo, v9);
    sub_1B686D4(&StringLiteral_13449/*"TUTORIAL_MESSAGE_TERMINAL_SPOT2"*/, v10);
    byte_4A0ABF9 = 1;
  }
  v11 = sub_1B68920(TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_12;
  *(_QWORD *)(v11 + 24) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)this, v14, v15);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_12;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_12;
  FocusSpot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0LL);
  *(_QWORD *)(v11 + 16) = FocusSpot;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)FocusSpot, v17, v18);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_13449/*"TUTORIAL_MESSAGE_TERMINAL_SPOT2"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v30 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
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
        v32 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo),
        System_Action___ctor(
          v32,
          (Il2CppObject *)v11,
          Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0LL),
        !v31) )
  {
LABEL_12:
    sub_1B68930(mTerminalMap, v13);
  }
  v31->fields.mSpotClickAct = v32;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v31->fields.mSpotClickAct, (int32_t)v32, v33, v34);
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
      sub_1B68930(that, that);
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
    sub_1B68930(0LL, method);
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
  int32_t v10; // w3

  if ( (byte_4A0ABFA & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B686D4(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__2__, v4);
    byte_4A0ABFA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10);
  }
  if ( !v8 )
    sub_1B68930(Instance, v6);
  CommonUI__CloseTutorialNotificationDialogArrow_30388564(v8, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial2_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B68930(this, method);
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
  int32_t v15; // w3
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
  int32_t v31; // w3
  System_Action_o *v32; // x20
  UnityEngine_Vector2_o v33; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v34; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4A0AC01 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, that);
    sub_1B686D4(&LocalizationManager_TypeInfo, v4);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B686D4(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__begin_b__0_0__, v6);
    sub_1B686D4(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__1__, v7);
    sub_1B686D4(&TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_TypeInfo, v8);
    sub_1B686D4(&TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo, v9);
    sub_1B686D4(&StringLiteral_13443/*"TUTORIAL_MESSAGE_TERMINAL_GACHA"*/, v10);
    byte_4A0AC01 = 1;
  }
  v11 = sub_1B68920(TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_15;
  *(_QWORD *)(v11 + 16) = that;
  v16 = (__int64 *)(v11 + 16);
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)that, v14, v15);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_13443/*"TUTORIAL_MESSAGE_TERMINAL_GACHA"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    v27 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(v27, v28, Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__begin_b__0_0__, 0LL);
    static_fields = TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = v27;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)v27, v30, v31);
  }
  if ( !v19 )
LABEL_15:
    sub_1B68930(Instance, v13);
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
  v32 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
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
  int32_t v4; // w3

  if ( (byte_4A0AC02 & 1) == 0 )
  {
    sub_1B686D4(&TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo, v1);
    byte_4A0AC02 = 1;
  }
  v2 = (Il2CppObject *)sub_1B68920(TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial3_GachaArrow___c_o *)v2;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields,
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
  int32_t v11; // w3

  if ( (byte_4A0AC03 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B686D4(&TutorialFlag_TypeInfo, v4);
    sub_1B686D4(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__2__, v5);
    byte_4A0AC03 = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress(1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v9 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v10, v11);
  }
  if ( !v9 )
    sub_1B68930(Instance, v7);
  CommonUI__CloseTutorialNotificationDialogArrow_30388564(v9, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1B68930(0LL, method);
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
  int32_t v15; // w3
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
  int32_t v34; // w3
  System_Action_o *v35; // x20
  UnityEngine_Rect_o v36; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4A0ABFE & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, that);
    sub_1B686D4(&LocalizationManager_TypeInfo, v4);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B686D4(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__begin_b__0_0__, v6);
    sub_1B686D4(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__1__, v7);
    sub_1B686D4(&TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_TypeInfo, v8);
    sub_1B686D4(&TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo, v9);
    sub_1B686D4(&StringLiteral_13444/*"TUTORIAL_MESSAGE_TERMINAL_MENU"*/, v10);
    byte_4A0ABFE = 1;
  }
  v11 = sub_1B68920(TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_17;
  *(_QWORD *)(v11 + 16) = that;
  v16 = (TerminalSceneComponent_o **)(v11 + 16);
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)that, v14, v15);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_13444/*"TUTORIAL_MESSAGE_TERMINAL_MENU"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    v30 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(v30, v31, Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__begin_b__0_0__, 0LL);
    static_fields = TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = v30;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)v30, v33, v34);
  }
  if ( !v18 )
LABEL_17:
    sub_1B68930(Instance, v13);
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
  v35 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
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
  int32_t v4; // w3

  if ( (byte_4A0ABFF & 1) == 0 )
  {
    sub_1B686D4(&TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo, v1);
    byte_4A0ABFF = 1;
  }
  v2 = (Il2CppObject *)sub_1B68920(TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial3_MenuArrow___c_o *)v2;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields,
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
  int32_t v10; // w3

  if ( (byte_4A0AC00 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B686D4(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__2__, v4);
    byte_4A0AC00 = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10);
  }
  if ( !v8 )
    sub_1B68930(Instance, v6);
  CommonUI__CloseTutorialNotificationDialogArrow_30388564(v8, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1B68930(0LL, method);
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
  int32_t v15; // w3
  TerminalSceneComponent_o **v16; // x20
  QuestBoardListViewObject_o *FocusQuest; // x0
  int32_t v18; // w2
  int32_t v19; // w3
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
  int32_t v44; // w3
  UnityEngine_Rect_o v45; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4A0AC06 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, that);
    sub_1B686D4(&Method_GameObjectExtensions_RemoveComponent_Collider___, v4);
    sub_1B686D4(&LocalizationManager_TypeInfo, v5);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B686D4(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__0__, v7);
    sub_1B686D4(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__1__, v8);
    sub_1B686D4(&TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_TypeInfo, v9);
    sub_1B686D4(&StringLiteral_13447/*"TUTORIAL_MESSAGE_TERMINAL_QUEST3"*/, v10);
    byte_4A0AC06 = 1;
  }
  v11 = sub_1B68920(TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_22;
  *(_QWORD *)(v11 + 16) = that;
  v16 = (TerminalSceneComponent_o **)(v11 + 16);
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)that, v14, v15);
  if ( !*(_QWORD *)(v11 + 16) )
    goto LABEL_22;
  mFG = *(TerminalSceneComponent_o **)(*(_QWORD *)(v11 + 16) + 256LL);
  if ( !mFG )
    goto LABEL_22;
  FocusQuest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mFG, 0LL);
  *(_QWORD *)(v11 + 24) = FocusQuest;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)FocusQuest, v18, v19);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  mFG = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13447/*"TUTORIAL_MESSAGE_TERMINAL_QUEST3"*/, 0LL);
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
    (const MethodInfo_2E9A2F4 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mBG;
  if ( !mFG )
    goto LABEL_22;
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0LL);
  GameObjectExtensions__RemoveComponent_object_(
    v26,
    (const MethodInfo_2E9A2F4 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v40 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
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
        v42 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo),
        System_Action___ctor(
          v42,
          (Il2CppObject *)v11,
          Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0LL),
        !v41) )
  {
LABEL_22:
    sub_1B68930(mFG, v13);
  }
  v41->fields.mQuestClickAct = v42;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v41->fields.mQuestClickAct, (int32_t)v42, v43, v44);
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
  if ( (byte_4A0AC07 & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)sub_1B686D4(
                                                                                        &Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___,
                                                                                        method);
    byte_4A0AC07 = 1;
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
                                                                                            (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0LL )
  {
LABEL_12:
    sub_1B68930(this, method);
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
  int32_t v10; // w3

  if ( (byte_4A0AC08 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B686D4(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__2__, v4);
    byte_4A0AC08 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10);
  }
  if ( !v8 )
    sub_1B68930(Instance, v6);
  CommonUI__CloseTutorialNotificationDialogArrow_30388564(v8, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1B68930(0LL, method);
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
  int32_t v13; // w3
  SrcSpotBasePrefab_o *FocusSpot; // x0
  int32_t v15; // w2
  int32_t v16; // w3
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
  int32_t v29; // w3
  UnityEngine_Vector2_o v30; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v31; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v33; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4A0AC04 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, that);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B686D4(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__0__, v6);
    sub_1B686D4(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__1__, v7);
    sub_1B686D4(&TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_TypeInfo, v8);
    byte_4A0AC04 = 1;
  }
  v9 = sub_1B68920(TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_10;
  *(_QWORD *)(v9 + 24) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)this, v12, v13);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_10;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_10;
  FocusSpot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0LL);
  *(_QWORD *)(v9 + 16) = FocusSpot;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)FocusSpot, v15, v16);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v25 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
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
        v27 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo),
        System_Action___ctor(
          v27,
          (Il2CppObject *)v9,
          Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0LL),
        !v26) )
  {
LABEL_10:
    sub_1B68930(mTerminalMap, v11);
  }
  v26->fields.mSpotClickAct = v27;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v26->fields.mSpotClickAct, (int32_t)v27, v28, v29);
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
      sub_1B68930(that, that);
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
    sub_1B68930(0LL, method);
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
  int32_t v10; // w3

  if ( (byte_4A0AC05 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B686D4(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__2__, v4);
    byte_4A0AC05 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10);
  }
  if ( !v8 )
    sub_1B68930(Instance, v6);
  CommonUI__CloseTutorialArrowMark(v8, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial4_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B68930(this, method);
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
  int32_t v13; // w3
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
  int32_t v25; // w3
  System_Action_o *v26; // x20
  UnityEngine_Vector2_o v27; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v28; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4A0AC0C & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, that);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B686D4(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__begin_b__0_0__, v5);
    sub_1B686D4(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__1__, v6);
    sub_1B686D4(&TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_TypeInfo, v7);
    sub_1B686D4(&TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo, v8);
    byte_4A0AC0C = 1;
  }
  v9 = sub_1B68920(TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_13;
  *(_QWORD *)(v9 + 16) = that;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)that, v12, v13);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    v21 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(v21, v22, Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__begin_b__0_0__, 0LL);
    static_fields = TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = v21;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)v21, v24, v25);
  }
  if ( !v15 )
LABEL_13:
    sub_1B68930(Instance, v11);
  v28.fields.m_YMin = v19 + 53.0;
  v27.fields.y = v17 + 33.0;
  v28.fields.m_Height = 135.0;
  v27.fields.x = v16;
  v28.fields.m_XMin = v18;
  v28.fields.m_Width = v20;
  CommonUI__OpenTutorialArrowMark(v15, v27, 0.0, v28, v21, 0LL);
  v26 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
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
  int32_t v4; // w3

  if ( (byte_4A0AC0D & 1) == 0 )
  {
    sub_1B686D4(&TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo, v1);
    byte_4A0AC0D = 1;
  }
  v2 = (Il2CppObject *)sub_1B68920(TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial5_CombineArrow___c_o *)v2;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields,
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
  int32_t v10; // w3

  if ( (byte_4A0AC0E & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B686D4(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__2__, v4);
    byte_4A0AC0E = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10);
  }
  if ( !v8 )
    sub_1B68930(Instance, v6);
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
    sub_1B68930(that, method);
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
  int32_t v15; // w3
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
  int32_t v31; // w3
  System_Action_o *v32; // x20
  UnityEngine_Rect_o v33; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4A0AC09 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, that);
    sub_1B686D4(&LocalizationManager_TypeInfo, v4);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B686D4(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__begin_b__0_0__, v6);
    sub_1B686D4(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__1__, v7);
    sub_1B686D4(&TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_TypeInfo, v8);
    sub_1B686D4(&TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo, v9);
    sub_1B686D4(&StringLiteral_13425/*"TUTORIAL_MESSAGE_COMBINE1"*/, v10);
    byte_4A0AC09 = 1;
  }
  v11 = sub_1B68920(TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_16;
  *(_QWORD *)(v11 + 16) = that;
  v16 = (TerminalSceneComponent_o **)(v11 + 16);
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)that, v14, v15);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_13425/*"TUTORIAL_MESSAGE_COMBINE1"*/, 0LL);
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
    v27 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(v27, v28, Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__begin_b__0_0__, 0LL);
    static_fields = TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = v27;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)v27, v30, v31);
  }
  if ( !Instance )
LABEL_16:
    sub_1B68930(v12, v13);
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
  v32 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
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
  int32_t v4; // w3

  if ( (byte_4A0AC0A & 1) == 0 )
  {
    sub_1B686D4(&TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo, v1);
    byte_4A0AC0A = 1;
  }
  v2 = (Il2CppObject *)sub_1B68920(TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial5_MenuArrow___c_o *)v2;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields,
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
  int32_t v10; // w3

  if ( (byte_4A0AC0B & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B686D4(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__2__, v4);
    byte_4A0AC0B = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10);
  }
  if ( !v8 )
    sub_1B68930(Instance, v6);
  CommonUI__CloseTutorialNotificationDialogArrow_30388564(v8, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1B68930(0LL, method);
  TerminalSceneComponent__SetState(that, 10, v2);
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
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v7; // x21
  UnityEngine_WaitUntil_o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  bool result; // w0
  System_Action_o *openCampaignDirectBonus; // x0

  if ( (byte_4A0AC2E & 1) == 0 )
  {
    sub_1B686D4(&System_Func_bool__TypeInfo, method);
    sub_1B686D4(&Method_TerminalSceneComponent__CoWaitBlankEerthActionEnd_b__247_0__, v3);
    sub_1B686D4(&UnityEngine_WaitUntil_TypeInfo, v4);
    byte_4A0AC2E = 1;
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
    v7 = (System_Func_bool__o *)sub_1B68920(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v7, _4__this, Method_TerminalSceneComponent__CoWaitBlankEerthActionEnd_b__247_0__, 0LL);
    v8 = (UnityEngine_WaitUntil_o *)sub_1B68920(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v8, v7, 0LL);
    this->fields.__2__current = (Il2CppObject *)v8;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v8, v9, v10);
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

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__247_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v7; // x21
  UnityEngine_WaitUntil_o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  bool result; // w0
  System_Action_o *openCampaignDirectBonus; // x0

  if ( (byte_4A0AC2F & 1) == 0 )
  {
    sub_1B686D4(&System_Func_bool__TypeInfo, method);
    sub_1B686D4(&Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_b__246_0__, v3);
    sub_1B686D4(&UnityEngine_WaitUntil_TypeInfo, v4);
    byte_4A0AC2F = 1;
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
    v7 = (System_Func_bool__o *)sub_1B68920(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v7, _4__this, Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_b__246_0__, 0LL);
    v8 = (UnityEngine_WaitUntil_o *)sub_1B68920(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v8, v7, 0LL);
    this->fields.__2__current = (Il2CppObject *)v8;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v8, v9, v10);
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

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__246_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
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
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v48; // w2
  int32_t v49; // w3
  bool result; // w0
  struct System_Action_o *callback; // x8

  v2 = this;
  if ( (byte_4A0AC30 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&AtlasManager_TypeInfo, v3);
    sub_1B686D4(&System_Func_bool__TypeInfo, v4);
    sub_1B686D4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v5);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v6);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__0__, v7);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__10__, v8);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__11__, v9);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__12__, v10);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__13__, v11);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__1__, v12);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__2__, v13);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__3__, v14);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__4__, v15);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__5__, v16);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__6__, v17);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__7__, v18);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__8__, v19);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__9__, v20);
    sub_1B686D4(&TerminalSceneComponent___c__DisplayClass173_0_TypeInfo, v21);
    this = (TerminalSceneComponent__LoadAsync_d__173_o *)sub_1B686D4(&UnityEngine_WaitUntil_TypeInfo, v22);
    byte_4A0AC30 = 1;
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
  v25 = sub_1B68920(TerminalSceneComponent___c__DisplayClass173_0_TypeInfo);
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
  v27 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__0__,
    0LL);
  if ( !_4__this )
    goto LABEL_23;
  TerminalSceneComponent__SetupStandServant(_4__this, usd, 0, v27, v28);
  this = (TerminalSceneComponent__LoadAsync_d__173_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !this )
    goto LABEL_23;
  if ( !AtlasManager__isLoadedSkinData((AtlasManager_o *)this, 4, 0LL) )
  {
    *(_BYTE *)(v25 + 17) = 0;
    v29 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(
      v29,
      (Il2CppObject *)v25,
      Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__1__,
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
  this = (TerminalSceneComponent__LoadAsync_d__173_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v31 = _4__this->fields._TransitionInfo_k__BackingField;
  if ( !v31
    || (v32 = (SoundManager_o *)this,
        voiceAssetName = v31->fields.voiceAssetName,
        v34 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo),
        System_Action___ctor(
          v34,
          (Il2CppObject *)v25,
          Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__2__,
          0LL),
        !v32) )
  {
LABEL_23:
    sub_1B68930(this, method);
  }
  SoundManager__LoadAudioAssetStorage(v32, voiceAssetName, v34, 1, 0LL);
LABEL_17:
  v35 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__3__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadBanner(v35, 11, 0LL);
  v36 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__4__,
    0LL);
  AtlasManager__LoadFaceAtlas(v36, 11, 0LL);
  v37 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__5__,
    0LL);
  AtlasManager__LoadEquipFace(v37, 11, 0LL);
  v38 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__6__,
    0LL);
  AtlasManager__LoadFriendshipExceed(v38, 11, 0LL);
  v39 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__7__,
    0LL);
  AtlasManager__LoadCommandCode(v39, 11, 0LL);
  v40 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v40,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__8__,
    0LL);
  AtlasManager__LoadCommandCodeMini(v40, 11, 0LL);
  v41 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__9__,
    0LL);
  AtlasManager__LoadEventAtlas(v41, 11, 0LL);
  v42 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__10__,
    0LL);
  AtlasManager__LoadEventUI(v42, 11, 0LL);
  v43 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__11__,
    0LL);
  AtlasManager__LoadCharaGraphOptionAtlas(v43, 11, 0LL);
  v44 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v44,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__12__,
    0LL);
  AtlasManager__LoadPartyOrganizationAtlas(v44, 11, 0LL);
  v45 = (System_Func_bool__o *)sub_1B68920(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v45,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass173_0__LoadAsync_b__13__,
    0LL);
  v46 = (UnityEngine_WaitUntil_o *)sub_1B68920(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v46, v45, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v46;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B68678(p__2__current, (int32_t)v46, v48, v49);
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

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_TerminalSceneComponent__LoadAsync_d__173_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  TerminalSceneComponent___c_c *v8; // x0
  System_Func_bool__o *_9__189_0; // x20
  Il2CppObject *v10; // x21
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_WaitWhile_o *v14; // x21
  Il2CppObject **p__2__current; // x19
  int32_t v16; // w2
  int32_t v17; // w3
  bool result; // w0

  if ( (byte_4A0AC31 & 1) == 0 )
  {
    sub_1B686D4(&System_Func_bool__TypeInfo, method);
    sub_1B686D4(&SoundManager_TypeInfo, v3);
    sub_1B686D4(&Method_TerminalSceneComponent___c__WaitStopSEQuestPhaseRewardEffect_b__189_0__, v4);
    sub_1B686D4(&TerminalSceneComponent___c_TypeInfo, v5);
    sub_1B686D4(&UnityEngine_WaitWhile_TypeInfo, v6);
    byte_4A0AC31 = 1;
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
  _9__189_0 = v8->static_fields->__9__189_0;
  if ( !_9__189_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = TerminalSceneComponent___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__189_0 = (System_Func_bool__o *)sub_1B68920(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      _9__189_0,
      v10,
      Method_TerminalSceneComponent___c__WaitStopSEQuestPhaseRewardEffect_b__189_0__,
      0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__189_0 = _9__189_0;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__189_0, (int32_t)_9__189_0, v12, v13);
  }
  v14 = (UnityEngine_WaitWhile_o *)sub_1B68920(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v14, _9__189_0, 0LL);
  this->fields.__2__current = (Il2CppObject *)v14;
  p__2__current = &this->fields.__2__current;
  sub_1B68678((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v14, v16, v17);
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

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__189_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A0AC0F & 1) == 0 )
  {
    sub_1B686D4(&TerminalSceneComponent___c_TypeInfo, v1);
    byte_4A0AC0F = 1;
  }
  v2 = (Il2CppObject *)sub_1B68920(TerminalSceneComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TerminalSceneComponent___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent___c_o *)v2;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)TerminalSceneComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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

  if ( (byte_4A0AC18 & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, action);
    byte_4A0AC18 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B68930(0LL, v5);
  CommonUI__StartFriendPointNotification((CommonUI_o *)Instance, action, 0LL);
}


void __fastcall TerminalSceneComponent___c___Fadein_MapDisp_Start_b__193_0(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A0AC12 & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, action);
    byte_4A0AC12 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B68930(0LL, v5);
  CommonUI__StartLoginAndCampaignBonus((CommonUI_o *)Instance, action, 0LL, 201, 0LL);
}


void __fastcall TerminalSceneComponent___c___Fadein_MapDisp_Start_b__193_1(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20

  if ( (byte_4A0AC13 & 1) == 0 )
  {
    sub_1B686D4(&AvalonSceneManager_TypeInfo, action);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4A0AC13 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v7
    || (CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__ClearLoginResultData((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B68930(Instance, v6);
  }
  CommonUI__ReleaseFortuneBonusAssetData((CommonUI_o *)Instance, 0LL);
}


void __fastcall TerminalSceneComponent___c___Fadein_MapDisp_Start_b__193_6(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20

  if ( (byte_4A0AC11 & 1) == 0 )
  {
    sub_1B686D4(&AvalonSceneManager_TypeInfo, action);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4A0AC11 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v7 )
    sub_1B68930(Instance, v6);
  CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_o *__fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__250_0(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4A0AC19 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&x);
    sub_1B686D4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v4);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A0AC19 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
    sub_1B68930(Instance, v7);
  }
  return (ShopEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           x,
                           (const MethodInfo_30E44C0 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
}


bool __fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__250_1(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B68930(this, 0LL);
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
    sub_1B68930(this, 0LL);
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
    sub_1B68930(this, 0LL);
  return x->fields.id;
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_o *__fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__250_5(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4A0AC1A & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&x);
    sub_1B686D4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v4);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A0AC1A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
    sub_1B68930(Instance, v7);
  }
  return (ShopEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           x,
                           (const MethodInfo_30E44C0 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
}


int32_t __fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__250_6(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B68930(this, 0LL);
  return ShopEntity__GetPrice(x, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent___c___RebootToNetworkError_b__210_0(
        TerminalSceneComponent___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A0AC17 & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, isDecide);
    byte_4A0AC17 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1B68930(0LL, v4);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0LL);
}


void __fastcall TerminalSceneComponent___c___StartWindowMessage_b__195_1(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20

  if ( (byte_4A0AC14 & 1) == 0 )
  {
    sub_1B686D4(&AvalonSceneManager_TypeInfo, action);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4A0AC14 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v7 )
    sub_1B68930(Instance, v6);
  CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0LL);
}


void __fastcall TerminalSceneComponent___c___StartWindowMessage_b__195_2(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  System_String_o *QuestWindowMessage_k__BackingField; // x20

  if ( (byte_4A0AC15 & 1) == 0 )
  {
    sub_1B686D4(&ScriptManager_TypeInfo, action);
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v4);
    byte_4A0AC15 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A0AC97 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, action);
    byte_4A0AC97 = 1;
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


void __fastcall TerminalSceneComponent___c___StartWindowMessage_b__195_3(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x20
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_4A0AC16 & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, action);
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v4);
    byte_4A0AC16 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A04CAD )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, action);
    byte_4A04CAD = 1;
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
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0LL, 0, 0LL);
      goto LABEL_22;
    }
LABEL_23:
    sub_1B68930(Instance, v6);
  }
  v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A0AC99 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v6);
    byte_4A0AC99 = 1;
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

  if ( (byte_4A0AC10 & 1) == 0 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, method);
    byte_4A0AC10 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A03EAE )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, method);
    byte_4A03EAE = 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct TerminalSceneComponent_o *_4__this; // x21
  Il2CppObject *Object_object__48415484; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  struct TerminalSceneComponent_o *v13; // x8
  struct TerminalSceneComponent_o *v14; // x20
  Il2CppObject *ComponentInChildren_object; // x0
  int32_t v16; // w2
  int32_t v17; // w3

  v4 = this;
  if ( (byte_4A0AC1B & 1) == 0 )
  {
    sub_1B686D4(&Method_AssetData_GetObject_GameObject____75755192, data);
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponentInChildren_BaseCore___, v5);
    sub_1B686D4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v7);
    this = (TerminalSceneComponent___c__DisplayClass170_0_o *)sub_1B686D4(&StringLiteral_4739/*"CorePrefab"*/, v8);
    byte_4A0AC1B = 1;
  }
  if ( !data )
    goto LABEL_11;
  _4__this = v4->fields.__4__this;
  Object_object__48415484 = AssetData__GetObject_object__48415484(
                              data,
                              (System_String_o *)StringLiteral_4739/*"CorePrefab"*/,
                              (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (TerminalSceneComponent___c__DisplayClass170_0_o *)UnityEngine_Object__Instantiate_object_(
                                                              Object_object__48415484,
                                                              (const MethodInfo_2ECC718 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !_4__this
    || (_4__this->fields.mEarthCoreObj = (struct UnityEngine_GameObject_o *)this,
        sub_1B68678((ServantStatusBattleListViewItem_o *)&_4__this->fields.mEarthCoreObj, (int32_t)this, v11, v12),
        (v13 = v4->fields.__4__this) == 0LL)
    || (GameObjectExtensions__SafeSetParent_33421184(v13->fields.mEarthCoreObj, v13->fields.mUiRoot, 0LL),
        (v14 = v4->fields.__4__this) == 0LL)
    || (this = (TerminalSceneComponent___c__DisplayClass170_0_o *)v14->fields.mEarthCoreObj) == 0LL )
  {
LABEL_11:
    sub_1B68930(this, data);
  }
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)this,
                                 (const MethodInfo_2E98BB4 *)Method_UnityEngine_GameObject_GetComponentInChildren_BaseCore___);
  v14->fields.mEarthCore = (struct BaseCore_o *)ComponentInChildren_object;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&v14->fields.mEarthCore,
    (int32_t)ComponentInChildren_object,
    v16,
    v17);
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
      sub_1B68930(this, method);
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
  int32_t v14; // w3
  UserServantEntity_o *NextStandServant; // x0
  int32_t v16; // w2
  int32_t v17; // w3
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
  if ( (byte_4A0AC1C & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v3);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass184_1__SetupStandServant_b__2__, v4);
    this = (TerminalSceneComponent___c__DisplayClass184_0_o *)sub_1B686D4(
                                                                &TerminalSceneComponent___c__DisplayClass184_1_TypeInfo,
                                                                v5);
    byte_4A0AC1C = 1;
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
      v7 = v2->fields.__4__this;
      if ( !v7 )
        goto LABEL_54;
      this = (TerminalSceneComponent___c__DisplayClass184_0_o *)v7->fields.mEarthCore;
      if ( !this )
        goto LABEL_54;
      if ( !BYTE1(this[3].fields.__4__this) )
      {
        *(float *)&v8 = ((float (__fastcall *)(TerminalSceneComponent___c__DisplayClass184_0_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
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
              v12 = sub_1B68920(TerminalSceneComponent___c__DisplayClass184_1_TypeInfo);
              System_Object___ctor((Il2CppObject *)v12, 0LL);
              if ( v12 )
              {
                *(_QWORD *)(v12 + 24) = v2;
                sub_1B68678((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)v2, v13, v14);
                this = (TerminalSceneComponent___c__DisplayClass184_0_o *)v2->fields.__4__this;
                if ( this )
                {
                  NextStandServant = TerminalSceneComponent__GetNextStandServant(
                                       (TerminalSceneComponent_o *)this,
                                       method);
                  *(_QWORD *)(v12 + 16) = NextStandServant;
                  sub_1B68678((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)NextStandServant, v16, v17);
                  v19 = v2->fields.__4__this;
                  if ( v19 )
                  {
                    mStandSvtIdx = v19->fields.mStandSvtIdx;
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                      inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    if ( !byte_4A0AC93 )
                    {
                      sub_1B686D4(&TerminalPramsManager_TypeInfo, method);
                      byte_4A0AC93 = 1;
                    }
                    this = (TerminalSceneComponent___c__DisplayClass184_0_o *)TerminalPramsManager_TypeInfo;
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    {
                      inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                      this = (TerminalSceneComponent___c__DisplayClass184_0_o *)TerminalPramsManager_TypeInfo;
                    }
                    BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x) = mStandSvtIdx != 0;
                    v21 = v2->fields.__4__this;
                    if ( v21 )
                    {
                      v22 = v21->fields.mEarthCore;
                      if ( !byte_4A05E83 )
                      {
                        sub_1B686D4(&TerminalPramsManager_TypeInfo, method);
                        this = (TerminalSceneComponent___c__DisplayClass184_0_o *)TerminalPramsManager_TypeInfo;
                        byte_4A05E83 = 1;
                      }
                      if ( !LODWORD(this[5].fields.__4__this) )
                      {
                        inited = j_il2cpp_runtime_class_init_0(this);
                        this = (TerminalSceneComponent___c__DisplayClass184_0_o *)TerminalPramsManager_TypeInfo;
                      }
                      if ( v22 )
                      {
                        this = (TerminalSceneComponent___c__DisplayClass184_0_o *)((__int64 (__fastcall *)(struct BaseCore_o *, bool, _QWORD, Il2CppMethodPointer, long double))v22->klass->vtable._4_FocusInOut.method)(
                                                                                    v22,
                                                                                    BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x) == 0,
                                                                                    0LL,
                                                                                    v22->klass->vtable._5_Awake.methodPtr,
                                                                                    inited);
                        v23 = v2->fields.__4__this;
                        if ( v23 )
                        {
                          v24 = v23->fields.mTerminalServant;
                          v25 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
                          System_Action___ctor(
                            v25,
                            (Il2CppObject *)v12,
                            Method_TerminalSceneComponent___c__DisplayClass184_1__SetupStandServant_b__2__,
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
              if ( !byte_4A0AC93 )
              {
                sub_1B686D4(&TerminalPramsManager_TypeInfo, method);
                byte_4A0AC93 = 1;
              }
              this = (TerminalSceneComponent___c__DisplayClass184_0_o *)TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                v8 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                this = (TerminalSceneComponent___c__DisplayClass184_0_o *)TerminalPramsManager_TypeInfo;
              }
              BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x) = 1;
              v26 = v2->fields.__4__this;
              if ( v26 )
              {
                v27 = v26->fields.mEarthCore;
                if ( !byte_4A05E83 )
                {
                  sub_1B686D4(&TerminalPramsManager_TypeInfo, method);
                  this = (TerminalSceneComponent___c__DisplayClass184_0_o *)TerminalPramsManager_TypeInfo;
                  byte_4A05E83 = 1;
                }
                if ( !LODWORD(this[5].fields.__4__this) )
                {
                  v8 = j_il2cpp_runtime_class_init_0(this);
                  this = (TerminalSceneComponent___c__DisplayClass184_0_o *)TerminalPramsManager_TypeInfo;
                }
                if ( v27 )
                {
                  this = (TerminalSceneComponent___c__DisplayClass184_0_o *)((__int64 (__fastcall *)(struct BaseCore_o *, bool, _QWORD, Il2CppMethodPointer, long double))v27->klass->vtable._4_FocusInOut.method)(
                                                                              v27,
                                                                              BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x) == 0,
                                                                              0LL,
                                                                              v27->klass->vtable._5_Awake.methodPtr,
                                                                              v8);
                  v28 = v2->fields.__4__this;
                  if ( v28 )
                  {
                    this = (TerminalSceneComponent___c__DisplayClass184_0_o *)v28->fields.mTerminalServant;
                    if ( this )
                    {
                      StandFigureSlideComponent__SlideIn((StandFigureSlideComponent_o *)this, 0LL, 0LL);
                      goto LABEL_53;
                    }
                  }
                }
              }
LABEL_54:
              sub_1B68930(this, method);
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
  const MethodInfo *v2; // x4
  TerminalSceneComponent___c__DisplayClass184_1_o *v3; // x20
  struct TerminalSceneComponent___c__DisplayClass184_0_o *CS___8__locals1; // x8
  TerminalSceneComponent_o *_4__this; // x19
  UserServantEntity_o *usd; // x20

  v3 = this;
  if ( (byte_4A0AC1D & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass184_1_o *)sub_1B686D4(&TerminalPramsManager_TypeInfo, method);
    byte_4A0AC1D = 1;
  }
  CS___8__locals1 = v3->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_12;
  _4__this = CS___8__locals1->fields.__4__this;
  usd = v3->fields._usd;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A05E83 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, method);
    byte_4A05E83 = 1;
  }
  this = (TerminalSceneComponent___c__DisplayClass184_1_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass184_1_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !_4__this )
LABEL_12:
    sub_1B68930(this, method);
  TerminalSceneComponent__SetupStandServant(_4__this, usd, BYTE2(this[5].fields.CS___8__locals1[2].monitor), 0LL, v2);
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
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B68930(0LL, method);
  TerminalSceneComponent__StartWindowMessage(_4__this, 0LL, v2);
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
  const MethodInfo *v2; // x2
  TerminalSceneComponent___c__DisplayClass190_0_o *v3; // x19
  __int64 v4; // x1
  System_Action_o *_9__3; // x22
  TerminalSceneComponent_o *_4__this; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  v3 = this;
  if ( (byte_4A0AC1E & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    this = (TerminalSceneComponent___c__DisplayClass190_0_o *)sub_1B686D4(
                                                                &Method_TerminalSceneComponent___c__DisplayClass190_0__coFadein_WorldDisp_b__3__,
                                                                v4);
    byte_4A0AC1E = 1;
  }
  _9__3 = v3->fields.__9__3;
  _4__this = v3->fields.__4__this;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v3,
      Method_TerminalSceneComponent___c__DisplayClass190_0__coFadein_WorldDisp_b__3__,
      0LL);
    v3->fields.__9__3 = _9__3;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&v3->fields.__9__3, (int32_t)_9__3, v7, v8);
  }
  if ( !_4__this )
    sub_1B68930(this, method);
  TerminalSceneComponent__StartWindowMessage(_4__this, _9__3, v2);
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
    sub_1B68930(_4__this, method);
  }
  v5->fields._FirstFadeTime_k__BackingField = 0.0;
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
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B68930(this, method);
  TerminalSceneComponent__Fadein_MapDisp_Start(this->fields.__4__this, this->fields.fade_time, this->fields.end_act, v2);
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
  const MethodInfo *v3; // x3
  struct WarEntity_o *war_dat; // x8

  war_dat = this->fields.war_dat;
  if ( !war_dat || (this = (TerminalSceneComponent___c__DisplayClass193_0_o *)this->fields.__4__this) == 0LL )
    sub_1B68930(this, action);
  TerminalSceneComponent__StartEventDailyPoint((TerminalSceneComponent_o *)this, war_dat->fields.eventId, action, v3);
}


void __fastcall TerminalSceneComponent___c__DisplayClass193_0___Fadein_MapDisp_Start_b__3(
        TerminalSceneComponent___c__DisplayClass193_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct WarEntity_o *war_dat; // x9

  war_dat = this->fields.war_dat;
  if ( !war_dat || !this->fields.__4__this )
    sub_1B68930(this, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffects(
    this->fields.__4__this,
    this->fields.fade_time,
    war_dat->fields.eventId,
    this->fields.end_act,
    v2);
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
    sub_1B68930(this, action);
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
  if ( (byte_4A0AC1F & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass193_0_o *)sub_1B686D4(
                                                                &Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__,
                                                                action);
    byte_4A0AC1F = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (mTerminalMap = _4__this->fields.mTerminalMap) == 0LL
    || (this = (TerminalSceneComponent___c__DisplayClass193_0_o *)mTerminalMap->fields.spotMaskObj) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (this = (TerminalSceneComponent___c__DisplayClass193_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__)) == 0LL) )
  {
    sub_1B68930(this, action);
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
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *IsNullOrEmpty; // x0
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x1
  TerminalPramsManager_c *v9; // x0
  const MethodInfo *v10; // x2
  Il2CppObject *Instance; // x19
  struct TerminalSceneComponent___c__DisplayClass193_0_o *CS___8__locals1; // x8

  if ( (byte_4A0AC20 & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v3);
    sub_1B686D4(&TerminalSceneComponent_TypeInfo, v4);
    byte_4A0AC20 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A03EAD )
  {
    sub_1B686D4(&TerminalSceneComponent_TypeInfo, method);
    byte_4A03EAD = 1;
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
  IsNullOrEmpty = *(UnityEngine_GameObject_o **)(v7 + 536);
  if ( !IsNullOrEmpty )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive(IsNullOrEmpty, this->fields.oldActive, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A0AC97 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v8);
    byte_4A0AC97 = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A0AC99 )
    {
      sub_1B686D4(&TerminalPramsManager_TypeInfo, method);
      byte_4A0AC99 = 1;
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
    sub_1B68930(IsNullOrEmpty, method);
  }
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_30;
  IsNullOrEmpty = (UnityEngine_GameObject_o *)CS___8__locals1->fields.__4__this;
  if ( !IsNullOrEmpty )
    goto LABEL_30;
  TerminalSceneComponent__StartWindowMessage((TerminalSceneComponent_o *)IsNullOrEmpty, 0LL, v10);
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__2; // x21
  CommonUI_o *v8; // x20
  float fadeTime; // s8
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A0AC21 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass196_0__FadeInAndTriggerEventEffects_b__2__, v4);
    byte_4A0AC21 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  fadeTime = this->fields.fadeTime;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent___c__DisplayClass196_0__FadeInAndTriggerEventEffects_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v10, v11);
  }
  if ( !v8 )
    sub_1B68930(Instance, v6);
  CommonUI__maskFadein(v8, fadeTime, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass196_0___FadeInAndTriggerEventEffects_b__1(
        TerminalSceneComponent___c__DisplayClass196_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1B68930(this, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(
    this->fields.__4__this,
    this->fields.eventId,
    this->fields.callback,
    v2);
}


void __fastcall TerminalSceneComponent___c__DisplayClass196_0___FadeInAndTriggerEventEffects_b__2(
        TerminalSceneComponent___c__DisplayClass196_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__3; // x22
  QuestAfterAction_o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A0AC22 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v3);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass196_0__FadeInAndTriggerEventEffects_b__3__, v4);
    byte_4A0AC22 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  _9__3 = this->fields.__9__3;
  v8 = (QuestAfterAction_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent___c__DisplayClass196_0__FadeInAndTriggerEventEffects_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.__9__3, (int32_t)_9__3, v9, v10);
  }
  if ( !v8 )
    sub_1B68930(Instance, v6);
  QuestAfterAction__Play(v8, _9__3, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass196_0___FadeInAndTriggerEventEffects_b__3(
        TerminalSceneComponent___c__DisplayClass196_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1B68930(this, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(
    this->fields.__4__this,
    this->fields.eventId,
    this->fields.callback,
    v2);
}


void __fastcall TerminalSceneComponent___c__DisplayClass196_0___FadeInAndTriggerEventEffects_b__4(
        TerminalSceneComponent___c__DisplayClass196_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1B68930(this, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(
    this->fields.__4__this,
    this->fields.eventId,
    this->fields.callback,
    v2);
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
    sub_1B68930(this, method);
  TitleInfoControl__CheckSuperBossHpAnim(mTitleInfo, this->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass199_0___FadeInAndTriggerEventEffectsNext_b__1(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B68930(0LL, method);
  TerminalSceneComponent__SetActionBGColl(_4__this, 0, this->fields.callback, v2);
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
  const MethodInfo *v2; // x2
  TerminalSceneComponent___c__DisplayClass226_0_o *v3; // x19
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  TerminalSceneComponent_o *_4__this; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  v3 = this;
  if ( (byte_4A0AC23 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    this = (TerminalSceneComponent___c__DisplayClass226_0_o *)sub_1B686D4(
                                                                &Method_TerminalSceneComponent___c__DisplayClass226_0__PlayEventTutorial_b__1__,
                                                                v4);
    byte_4A0AC23 = 1;
  }
  _9__1 = v3->fields.__9__1;
  _4__this = v3->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_TerminalSceneComponent___c__DisplayClass226_0__PlayEventTutorial_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  if ( !_4__this )
    sub_1B68930(this, method);
  TerminalSceneComponent__PlayEventTutorialWithoutAfterAction(_4__this, _9__1, v2);
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
    sub_1B68930(this, method);
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
  __int64 v5; // x1
  __int64 v6; // x1
  System_Int32_array *Instance; // x0
  __int64 v8; // x1
  struct TerminalSceneComponent_o *_4__this; // x8
  CommonUI_o *v10; // x20

  if ( (byte_4A0AC24 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_DialogMessageMaster___, action);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A0AC24 = 1;
  }
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v10 = (CommonUI_o *)Instance, (Instance = (System_Int32_array *)_4__this->fields.mTerminalList) == 0LL)
    || (Instance = ScrTerminalListTop__PopEventSvtGets((ScrTerminalListTop_o *)Instance, 0LL), !v10)
    || (CommonUI__SetupLoginResultData(v10, Instance, 0LL),
        (Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_DialogMessageMaster___)) == 0LL )
  {
    sub_1B68930(Instance, v8);
  }
  DialogMessageMaster__ShowAvailables((DialogMessageMaster_o *)Instance, 1, action, 0, 0, 0, 0, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass244_0___CheckRewardPopupChain_b__1(
        TerminalSceneComponent___c__DisplayClass244_0_o *this,
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
  int32_t v12; // w3

  if ( (byte_4A0AC25 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, action);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass244_0__CheckRewardPopupChain_b__5__, v6);
    byte_4A0AC25 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__5 = this->fields.__9__5;
  v10 = (CommonUI_o *)Instance;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent___c__DisplayClass244_0__CheckRewardPopupChain_b__5__,
      0LL);
    this->fields.__9__5 = _9__5;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.__9__5, (int32_t)_9__5, v11, v12);
  }
  if ( !v10 )
    sub_1B68930(Instance, v8);
  CommonUI__StartLoginAndCampaignBonus(v10, action, _9__5, -1, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass244_0___CheckRewardPopupChain_b__3(
        TerminalSceneComponent___c__DisplayClass244_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (TerminalSceneComponent___c__DisplayClass244_0_o *)_4__this->fields.mTerminalList) == 0LL )
    sub_1B68930(this, action);
  ScrTerminalListTop__CheckLoginAfterTransitionDialog((ScrTerminalListTop_o *)this, action, 100, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass244_0___CheckRewardPopupChain_b__4(
        TerminalSceneComponent___c__DisplayClass244_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  if ( (byte_4A0AC26 & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A0AC26 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (TerminalSceneComponent__CheckOpenCampaignDirectBonus(_4__this, method),
        (_4__this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__ClearLoginResultData((CommonUI_o *)_4__this, 0LL),
        (_4__this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B68930(_4__this, method);
  }
  CommonUI__ReleaseFortuneBonusAssetData((CommonUI_o *)_4__this, 0LL);
  ActionExtensions__Call(this->fields.afterChain, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass244_0___CheckRewardPopupChain_b__5(
        TerminalSceneComponent___c__DisplayClass244_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (TerminalSceneComponent___c__DisplayClass244_0_o *)_4__this->fields.mPlayerStatus) == 0LL )
    sub_1B68930(this, method);
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
    sub_1B68930(this, method);
  _4__this->fields._IsPlayingCampaignDirectBonus_k__BackingField = 0;
}


void __fastcall TerminalSceneComponent___c__DisplayClass245_0___CheckOpenCampaignDirectBonus_b__1(
        TerminalSceneComponent___c__DisplayClass245_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  TerminalPramsManager_c *v10; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4A0AC27 & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v3);
    byte_4A0AC27 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A0638A )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v4);
    byte_4A0638A = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    sub_1B68930(v6, v4);
  CommonUI__OpenCampaignDirectBonus(
    (CommonUI_o *)Instance,
    v6->static_fields->_CampaignDirectBonus_k__BackingField,
    this->fields.endAction,
    0LL);
  if ( !byte_4A06380 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v7);
    byte_4A06380 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v10->static_fields;
  static_fields->_CampaignDirectBonus_k__BackingField = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->_CampaignDirectBonus_k__BackingField, 0, v8, v9);
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
  if ( (byte_4A0AC28 & 1) == 0 )
  {
    sub_1B686D4(&ScriptManager_TypeInfo, str);
    byte_4A0AC28 = 1;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent___c__DisplayClass254_0___CheckMasterMissionReset_b__0(
        TerminalSceneComponent___c__DisplayClass254_0_o *this,
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
  int32_t v13; // w3
  TerminalSceneComponent_c *v14; // x0
  System_String_o *MASTER_MISSION_RESET_KEY; // x21
  System_String_o *v16; // x0
  Il2CppObject *Instance; // x19
  System_Action_o *v18; // x21

  if ( (byte_4A0AC29 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, isDecide);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B686D4(&TerminalSceneComponent_TypeInfo, v6);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass254_1__CheckMasterMissionReset_b__1__, v7);
    sub_1B686D4(&TerminalSceneComponent___c__DisplayClass254_1_TypeInfo, v8);
    byte_4A0AC29 = 1;
  }
  v9 = sub_1B68920(TerminalSceneComponent___c__DisplayClass254_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 24) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)this, v12, v13);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v9,
    Method_TerminalSceneComponent___c__DisplayClass254_1__CheckMasterMissionReset_b__1__,
    0LL);
  if ( !Instance )
LABEL_8:
    sub_1B68930(v10, v11);
  CommonUI__CloseConfirmDialog_30363564((CommonUI_o *)Instance, v18, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass254_0___CheckMasterMissionReset_b__2(
        TerminalSceneComponent___c__DisplayClass254_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  ScrPlayerStatus_o *mPlayerStatus; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (mPlayerStatus = _4__this->fields.mPlayerStatus) == 0LL )
    sub_1B68930(this, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x19
  struct TerminalSceneComponent___c__DisplayClass254_0_o *CS___8__locals1; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__2; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  struct TerminalSceneComponent___c__DisplayClass254_0_o *v13; // x8

  v2 = this;
  if ( (byte_4A0AC2A & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&AvalonSceneManager_TypeInfo, v3);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    this = (TerminalSceneComponent___c__DisplayClass254_1_o *)sub_1B686D4(
                                                                &Method_TerminalSceneComponent___c__DisplayClass254_0__CheckMasterMissionReset_b__2__,
                                                                v5);
    byte_4A0AC2A = 1;
  }
  if ( v2->fields.isDecide )
  {
    this = (TerminalSceneComponent___c__DisplayClass254_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        _9__2 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
        System_Action___ctor(
          _9__2,
          (Il2CppObject *)CS___8__locals1,
          Method_TerminalSceneComponent___c__DisplayClass254_0__CheckMasterMissionReset_b__2__,
          0LL);
        CS___8__locals1->fields.__9__2 = _9__2;
        sub_1B68678((ServantStatusBattleListViewItem_o *)&CS___8__locals1->fields.__9__2, (int32_t)_9__2, v11, v12);
      }
      if ( v7 )
      {
        CommonUI__maskFadeout(v7, 1, DEFAULT_FADE_TIME, _9__2, 0LL);
        return;
      }
    }
LABEL_13:
    sub_1B68930(this, method);
  }
  v13 = v2->fields.CS___8__locals1;
  if ( !v13 )
    goto LABEL_13;
  ActionExtensions__Call(v13->fields.callback, 0LL);
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

  if ( (byte_4A0AC2B & 1) == 0 )
  {
    sub_1B686D4(&BattleResultBondsComponent_TypeInfo, method);
    byte_4A0AC2B = 1;
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

  if ( (byte_4A0AC2C & 1) == 0 )
  {
    sub_1B686D4(&BattleResultBondsComponent_TypeInfo, method);
    byte_4A0AC2C = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct TerminalSceneComponent___c__DisplayClass255_0_o *CS___8__locals1; // x21
  GetSvtCoin_array *coin; // x20
  System_Action_o *_9__2; // x22
  CommonUI_o *v10; // x19
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A0AC2D & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass255_0__CheckNotificationDialog_b__2__, v4);
    byte_4A0AC2D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  coin = this->fields.coin;
  _9__2 = CS___8__locals1->fields.__9__2;
  v10 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)CS___8__locals1,
      Method_TerminalSceneComponent___c__DisplayClass255_0__CheckNotificationDialog_b__2__,
      0LL);
    CS___8__locals1->fields.__9__2 = _9__2;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&CS___8__locals1->fields.__9__2, (int32_t)_9__2, v11, v12);
  }
  if ( !v10 )
LABEL_8:
    sub_1B68930(Instance, v6);
  CommonUI__CreateServantCoinConfirmDialog(v10, 1, coin, _9__2, 0LL);
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
  int32_t _1__state; // w8
  struct TerminalSceneComponent_o *_4__this; // x20
  Il2CppObject *v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  struct TerminalSceneComponent_o *v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppObject *endAct; // x1
  TerminalPramsManager_c *v28; // x0
  const MethodInfo *v29; // x1
  TerminalPramsManager_c *v30; // x0
  System_Collections_IEnumerator_o *v31; // x0
  System_Action_c *klass; // x8
  __int64 v33; // x8
  TerminalPramsManager_c *v34; // x0
  System_Collections_IEnumerator_o *v35; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v37; // w2
  int32_t v38; // w3
  bool result; // w0
  Il2CppObject *Master_object; // x21
  System_String_o *ShowingFolderBGM; // x0
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x3
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v45; // x8
  Il2CppObject *v46; // x21
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v48; // x0
  __int64 *v49; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct ScrTerminalListTop_o *v51; // x8
  Il2CppObject *_8__1; // x19
  System_Action_o *v53; // x21
  const MethodInfo *v54; // x2
  AvalonSceneManager_c *v55; // x8
  System_Action_o *v56; // x19
  struct TerminalSceneComponent___c__DisplayClass190_0_o *v57; // x9
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4A0AC32 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&AvalonSceneManager_TypeInfo, v3);
    sub_1B686D4(&Method_DataManager_GetMaster_WarMaster___, v4);
    sub_1B686D4(&DataManager_TypeInfo, v5);
    sub_1B686D4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v6);
    sub_1B686D4(&System_GC_TypeInfo, v7);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v9);
    sub_1B686D4(&SoundManager_TypeInfo, v10);
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v11);
    sub_1B686D4(&TerminalSceneComponent_TypeInfo, v12);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass190_0__coFadein_WorldDisp_b__0__, v13);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass190_0__coFadein_WorldDisp_b__1__, v14);
    sub_1B686D4(&Method_TerminalSceneComponent___c__DisplayClass190_0__coFadein_WorldDisp_b__2__, v15);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)sub_1B686D4(
                                                                    &TerminalSceneComponent___c__DisplayClass190_0_TypeInfo,
                                                                    v16);
    byte_4A0AC32 = 1;
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
    v19 = (Il2CppObject *)sub_1B68920(TerminalSceneComponent___c__DisplayClass190_0_TypeInfo);
    System_Object___ctor(v19, 0LL);
    v2->fields.__8__1 = (struct TerminalSceneComponent___c__DisplayClass190_0_o *)v19;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields.__8__1, (int32_t)v19, v20, v21);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_111;
    v24 = v2->fields.__4__this;
    *(_QWORD *)&this->fields.__1__state = v24;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v24, v22, v23);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_111;
    endAct = (Il2CppObject *)v2->fields.endAct;
    this->fields.__2__current = endAct;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)endAct, v25, v26);
    v2->fields._isAuto_5__2 = 0;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A05E9E )
    {
      sub_1B686D4(&TerminalPramsManager_TypeInfo, method);
      byte_4A05E9E = 1;
    }
    v28 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v28 = TerminalPramsManager_TypeInfo;
    }
    if ( !v28->static_fields->_IsMapReturnFolder_k__BackingField )
    {
      if ( !v28->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v28);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)TerminalPramsManager__IsAuto(0LL);
      v2->fields._isAuto_5__2 = (unsigned __int8)this & 1;
      if ( !_4__this )
        goto LABEL_111;
      TerminalSceneComponent__EndAuto(_4__this, method);
      if ( !byte_4A03EAE )
      {
        sub_1B686D4(&TerminalPramsManager_TypeInfo, v29);
        byte_4A03EAE = 1;
      }
      v30 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v30 = TerminalPramsManager_TypeInfo;
      }
      if ( v30->static_fields->_isPlayingQuestPhaseRewardEffect_k__BackingField )
      {
        v31 = TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect((TerminalSceneComponent_o *)v30, v29);
        UnityEngine_MonoBehaviour__StartCoroutine_69157088((UnityEngine_MonoBehaviour_o *)_4__this, v31, 0LL);
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
    if ( !byte_4A04CAC )
    {
      sub_1B686D4(&TerminalPramsManager_TypeInfo, method);
      byte_4A04CAC = 1;
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
      if ( !byte_4A03EAD )
      {
        sub_1B686D4(&TerminalSceneComponent_TypeInfo, method);
        byte_4A03EAD = 1;
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
      v33 = *(_QWORD *)&klass->_2.thread_static_fields_offset;
      if ( !v33 )
        goto LABEL_111;
      this = *(TerminalSceneComponent__coFadein_WorldDisp_d__190_o **)(v33 + 536);
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
      if ( !byte_4A058FC )
      {
        sub_1B686D4(&TerminalPramsManager_TypeInfo, method);
        byte_4A058FC = 1;
      }
      v34 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v34 = TerminalPramsManager_TypeInfo;
      }
      v34->static_fields->_DispState_k__BackingField = 1;
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)_4__this->fields.mTitleInfo;
      if ( !this )
        goto LABEL_111;
      TitleInfoControl__SetActiveEventInfo_36931844((TitleInfoControl_o *)this, 1, 16, 0, 0, 0LL, 0LL);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_111;
      CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, 0, 1, 0LL);
    }
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_111;
    CommonUI__SetBgCameraActive((CommonUI_o *)this, 1, 0LL);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)_4__this->fields.mTerminalMap;
    if ( !this )
      goto LABEL_111;
    ScrTerminalMap__ReleaseMap((ScrTerminalMap_o *)this, 1, 0LL);
    if ( !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
    System_GC__Collect_62465536(0LL);
    if ( v2->fields.isExecuteUnusedAssets )
    {
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( this )
      {
        AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          v35 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
          v2->fields.__2__current = (Il2CppObject *)v35;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
          sub_1B68678(p__2__current, (int32_t)v35, v37, v38);
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_WarMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A058F9 )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, method);
    byte_4A058F9 = 1;
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
          (const MethodInfo_30E4514 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
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
        TerminalSceneComponent__playDefaultBgm(_4__this, method);
    }
    v51 = _4__this->fields.mTerminalList;
    if ( v51 )
    {
      if ( v51->fields.isBackFromBlankEarthMap )
      {
        _8__1 = (Il2CppObject *)v2->fields.__8__1;
        v53 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
        System_Action___ctor(
          v53,
          _8__1,
          Method_TerminalSceneComponent___c__DisplayClass190_0__coFadein_WorldDisp_b__1__,
          0LL);
        TerminalSceneComponent__StartWindowMessage(_4__this, v53, v54);
        return 0;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v55 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v55 = AvalonSceneManager_TypeInfo;
      }
      v46 = (Il2CppObject *)v2->fields.__8__1;
      DEFAULT_FADE_TIME = v55->static_fields->DEFAULT_FADE_TIME;
      v48 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
      v49 = &Method_TerminalSceneComponent___c__DisplayClass190_0__coFadein_WorldDisp_b__2__;
      goto LABEL_105;
    }
LABEL_111:
    sub_1B68930(this, method);
  }
  this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)_4__this->fields.mTerminalList;
  if ( !this )
    goto LABEL_111;
  ShowingFolderBGM = ScrTerminalListTop__GetShowingFolderBGM((ScrTerminalListTop_o *)this, 0LL);
  TerminalSceneComponent__playBgm(_4__this, ShowingFolderBGM, v42);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A04CAC )
  {
    sub_1B686D4(&TerminalPramsManager_TypeInfo, method);
    byte_4A04CAC = 1;
  }
  this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__190_o *)TerminalPramsManager_TypeInfo;
  }
  if ( HIBYTE(this[2].fields.endAct[1].klass) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v45 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v45 = AvalonSceneManager_TypeInfo;
    }
    v46 = (Il2CppObject *)v2->fields.__8__1;
    DEFAULT_FADE_TIME = v45->static_fields->DEFAULT_FADE_TIME;
    v48 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    v49 = &Method_TerminalSceneComponent___c__DisplayClass190_0__coFadein_WorldDisp_b__0__;
LABEL_105:
    v56 = v48;
    System_Action___ctor(v48, v46, *v49, 0LL);
    if ( !Instance )
      goto LABEL_111;
    CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v56, 0LL);
    return 0;
  }
  if ( !entity )
    goto LABEL_111;
  v57 = v2->fields.__8__1;
  if ( !v57 )
    goto LABEL_111;
  TerminalSceneComponent__FadeInAndTriggerEventEffects(
    _4__this,
    v2->fields.fadeTime,
    (int32_t)entity[6].klass,
    v57->fields.endAct,
    v43);
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

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_TerminalSceneComponent__coFadein_WorldDisp_d__190_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
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