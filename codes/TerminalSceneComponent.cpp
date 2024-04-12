void __fastcall TerminalSceneComponent___cctor(const MethodInfo *method)
{
  float v1; // s4
  float v2; // s5
  float v3; // s6
  float v4; // s7
  TerminalSceneComponent_c *v5; // x8
  struct TerminalSceneComponent_StaticFields *static_fields; // x0
  struct TerminalSceneComponent_StaticFields *v7; // x0
  struct TerminalSceneComponent_StaticFields *v8; // x0
  struct TerminalSceneComponent_StaticFields *v9; // x0
  struct TerminalSceneComponent_StaticFields *v10; // x0
  struct UnityEngine_Color_o v11; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42AC67C & 1) == 0 )
  {
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    sub_B52984(&StringLiteral_10255/*"OverwriteCommonBG2"*/);
    sub_B52984(&StringLiteral_10254/*"OverwriteCommonBG1"*/);
    sub_B52984(&StringLiteral_20556/*"masterMissionResetKey"*/);
    sub_B52984(&StringLiteral_13698/*"Terminal/EarthCore/{0:D2}"*/);
    sub_B52984(&StringLiteral_10210/*"OrdealCallChapterPlayState"*/);
    byte_42AC67C = 1;
  }
  v12.fields.r = 0.2;
  v12.fields.g = 0.25882;
  v12.fields.b = 0.31765;
  v12.fields.a = 1.0;
  v11 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor(v12, v1, v2, v3, v4, (const MethodInfo *)&v11);
  v5 = TerminalSceneComponent_TypeInfo;
  TerminalSceneComponent_TypeInfo->static_fields->DEFAULT_AMBIENT_LIGHT_COLOR = v11;
  static_fields = v5->static_fields;
  static_fields->MASTER_MISSION_RESET_KEY = (struct System_String_o *)StringLiteral_20556/*"masterMissionResetKey"*/;
  sub_B52920(&static_fields->MASTER_MISSION_RESET_KEY);
  v7 = TerminalSceneComponent_TypeInfo->static_fields;
  v7->EARTH_ASSET_NAME = (struct System_String_o *)StringLiteral_13698/*"Terminal/EarthCore/{0:D2}"*/;
  sub_B52920(&v7->EARTH_ASSET_NAME);
  v8 = TerminalSceneComponent_TypeInfo->static_fields;
  v8->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY = (struct System_String_o *)StringLiteral_10210/*"OrdealCallChapterPlayState"*/;
  sub_B52920(&v8->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY);
  v9 = TerminalSceneComponent_TypeInfo->static_fields;
  v9->OVERWRITE_COMMON_BG_TYPE1_KEY = (struct System_String_o *)StringLiteral_10254/*"OverwriteCommonBG1"*/;
  sub_B52920(&v9->OVERWRITE_COMMON_BG_TYPE1_KEY);
  v10 = TerminalSceneComponent_TypeInfo->static_fields;
  v10->OVERWRITE_COMMON_BG_TYPE2_KEY = (struct System_String_o *)StringLiteral_10255/*"OverwriteCommonBG2"*/;
  sub_B52920(&v10->OVERWRITE_COMMON_BG_TYPE2_KEY);
}


void __fastcall TerminalSceneComponent___ctor(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  float v2; // s4
  float v3; // s5
  float v4; // s6
  float v5; // s7
  float v7; // s4
  float v8; // s5
  float v9; // s6
  float v10; // s7
  float v11; // s4
  float v12; // s5
  float v13; // s6
  float v14; // s7
  float v15; // s4
  float v16; // s5
  float v17; // s6
  float v18; // s7
  float v19; // s4
  float v20; // s5
  float v21; // s6
  float v22; // s7
  struct UnityEngine_Rect_o v23; // [xsp+0h] [xbp-70h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-60h] BYREF
  UnityEngine_Rect_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v25.fields.m_XMin = -100.0;
  this->fields.TUTORIAL_SPOT_ARROW_POS = (struct UnityEngine_Vector2_o)3263954944LL;
  v25.fields.m_YMin = -140.0;
  v25.fields.m_Height = 300.0;
  v25.fields.m_Width = 200.0;
  methoda.rgctx_data = 0LL;
  methoda.genericMethod = 0LL;
  UnityEngine_Rect___ctor(v25, v2, v3, v4, v5, (const MethodInfo *)&methoda.rgctx_data);
  this->fields.TUTORIAL_SPOT_ARROW_RECT = *(struct UnityEngine_Rect_o *)&methoda.rgctx_data;
  *(_OWORD *)&this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x = xmmword_3278170;
  v26.fields.m_YMin = 65.0;
  v26.fields.m_Width = 510.0;
  v26.fields.m_XMin = -30.0;
  v26.fields.m_Height = 150.0;
  methoda.return_type = 0LL;
  methoda.parameters = 0LL;
  UnityEngine_Rect___ctor(v26, v7, v8, v9, v10, (const MethodInfo *)&methoda.return_type);
  v27.fields.m_YMin = -315.0;
  this->fields.TUTORIAL_QUEST_ARROW_RECT = *(struct UnityEngine_Rect_o *)&methoda.return_type;
  this->fields.TUTORIAL_QUEST_MESSAGE_POS = (struct UnityEngine_Vector2_o)0xC220000000000000LL;
  this->fields.TUTORIAL_MENU_ARROW_POS = (struct UnityEngine_Vector2_o)0xC366000043E10000LL;
  v27.fields.m_XMin = 320.0;
  v27.fields.m_Height = 100.0;
  v27.fields.m_Width = 200.0;
  methoda.name = 0LL;
  methoda.klass = 0LL;
  UnityEngine_Rect___ctor(v27, v11, v12, v13, v14, (const MethodInfo *)&methoda.name);
  this->fields.TUTORIAL_MENU_ARROW_RECT = *(struct UnityEngine_Rect_o *)&methoda.name;
  *(_OWORD *)&this->fields.TUTORIAL_MENU_MESSAGE_POS.fields.x = xmmword_3278180;
  v28.fields.m_XMin = -68.0;
  v28.fields.m_YMin = -310.0;
  v28.fields.m_Width = 135.0;
  v28.fields.m_Height = 150.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Rect___ctor(v28, v15, v16, v17, v18, &methoda);
  this->fields.TUTORIAL_GACHA_ARROW_RECT = *(struct UnityEngine_Rect_o *)&methoda.methodPointer;
  v29.fields.m_XMin = -201.0;
  this->fields.TUTORIAL_MENU_ARROW_POS2 = (struct UnityEngine_Vector2_o)0xC366000043DB0000LL;
  v29.fields.m_YMin = -310.0;
  v29.fields.m_Width = 135.0;
  v29.fields.m_Height = 150.0;
  v23 = (struct UnityEngine_Rect_o)0LL;
  UnityEngine_Rect___ctor(v29, v19, v20, v21, v22, (const MethodInfo *)&v23);
  this->fields.TUTORIAL_COMBINE_ARROW_RECT = v23;
  this->fields.TUTORIAL_COMBINE_ARROW_POS = (struct UnityEngine_Vector2_o)0xC3200000C3058000LL;
  this->fields.isTopLoginBusy = 1;
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall TerminalSceneComponent__Awake(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  struct TerminalSceneComponent_StaticFields *static_fields; // x0
  UnityEngine_GameObject_o *UiFlag; // x0
  __int64 v6; // x1
  bool v7; // w1

  if ( (byte_42AC637 & 1) == 0 )
  {
    sub_B52984(&ServantCommentManager_TypeInfo);
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AC637 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->mInstance = this;
  sub_B52920(static_fields);
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  UiFlag = (UnityEngine_GameObject_o *)ServantCommentManager__GetUiFlag(0LL);
  if ( !this->fields.mBgText )
    goto LABEL_18;
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
        v7 = 1;
        goto LABEL_17;
      }
    }
LABEL_18:
    sub_B52A5C(UiFlag, v6);
  }
  UnityEngine_GameObject__SetActive(this->fields.mBgText, 0, 0LL);
  UiFlag = this->fields.mBgGradLeft;
  if ( !UiFlag )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(UiFlag, 0, 0LL);
  UiFlag = this->fields.mBgGradRight;
  if ( !UiFlag )
    goto LABEL_18;
  v7 = 0;
LABEL_17:
  UnityEngine_GameObject__SetActive(UiFlag, v7, 0LL);
}


void __fastcall TerminalSceneComponent__CallAfterTopHome(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  if ( this->fields.isTopLoginBusy )
  {
    this->fields.afterTopLogin = callback;
    sub_B52920(&this->fields.afterTopLogin);
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
    sub_B52A5C(0LL, item);
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
    sub_B52A5C(0LL, questId);
  return QuestInformationComponent__AutoOpen(mQuestInformation, questId, 1, 0LL, 0LL, 0LL);
}


void __fastcall TerminalSceneComponent__CallQuestInformation(
        TerminalSceneComponent_o *this,
        QuestBoardListViewItem_o *item,
        const MethodInfo *method)
{
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  TerminalSceneComponent_o *v5; // x20

  if ( !item )
    goto LABEL_9;
  quest_info_k__BackingField = item->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_9;
  v5 = this;
  this = (TerminalSceneComponent_o *)this->fields.mQuestInformation;
  if ( !this )
    goto LABEL_9;
  if ( QuestInformationComponent__Setup(
         (QuestInformationComponent_o *)this,
         quest_info_k__BackingField->fields.questId,
         1,
         0LL,
         0LL,
         0LL) )
  {
    this = (TerminalSceneComponent_o *)v5->fields.mQuestInformation;
    if ( this )
    {
      QuestInformationComponent__Open((QuestInformationComponent_o *)this, 0LL);
      this = (TerminalSceneComponent_o *)v5->fields.mTerminalList;
      if ( this )
      {
        ScrTerminalListTop__InfoSettedUp((ScrTerminalListTop_o *)this, item, 0LL);
        return;
      }
    }
LABEL_9:
    sub_B52A5C(this, item);
  }
}


void __fastcall TerminalSceneComponent__CallQuestInformationClose(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  QuestInformationComponent_o *mQuestInformation; // x0

  mQuestInformation = this->fields.mQuestInformation;
  if ( !mQuestInformation )
    sub_B52A5C(0LL, method);
  QuestInformationComponent__Close(mQuestInformation, 0LL);
}


void __fastcall TerminalSceneComponent__CallQuestInformationCloseAtAll(
        TerminalSceneComponent_o *this,
        bool isPlaySe,
        const MethodInfo *method)
{
  QuestInformationComponent_o *mQuestInformation; // x0

  mQuestInformation = this->fields.mQuestInformation;
  if ( !mQuestInformation )
    sub_B52A5C(0LL, isPlaySe);
  QuestInformationComponent__CloseWindow(mQuestInformation, isPlaySe, 0LL);
}


bool __fastcall TerminalSceneComponent__CheckEventDailyPoint(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
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
  uint64_t v17; // x19
  System_DateTime_o t2; // [xsp+8h] [xbp-48h] BYREF
  uint64_t v20; // [xsp+10h] [xbp-40h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF
  System_DateTime_o v22; // 0:x0.8
  System_DateTime_o v23; // 0:x0.8
  System_DateTime_o v24; // 0:x0.8
  System_DateTime_o v25; // 0:x0.8
  System_DateTime_o v26; // 0:x0.8
  System_DateTime_o v27; // 0:x0.8
  System_DateTime_o v28; // 0:x0.8
  System_DateTime_o v29; // 0:x1.8

  if ( (byte_42AC665 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B52984(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B52984(&System_DateTime_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC665 = 1;
  }
  v20 = 0LL;
  entity = 0LL;
  t2.fields.dateData = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_44;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_23E2334 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_44:
    sub_B52A5C(Instance, v5);
  if ( EventDetailEntity__IsEventDailyPoint((EventDetailEntity_o *)entity, 0LL) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42AC79F )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC79F = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    BeforeTimeEventDailyPoint_k__BackingField = v6->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    dateData = NetworkManager__getDateTime_25741912(BeforeTimeEventDailyPoint_k__BackingField, 0LL).fields.dateData;
    if ( !byte_42AC7A0 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC7A0 = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    if ( BeforeTimeEventDailyPoint_k__BackingField < 1
      || v9->static_fields->_EventDailyPointEventId_k__BackingField != eventId )
    {
      return 1;
    }
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v20 = NetworkManager__getServerDateTime(0LL).fields.dateData;
    v22.fields.dateData = (uint64_t)&v20;
    Hour = System_DateTime__get_Hour(v22, 0LL);
    v11 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v11 = BalanceConfig_TypeInfo;
    }
    if ( Hour < v11->static_fields->EventDailyPointResetAt )
    {
      v23.fields.dateData = (uint64_t)&v20;
      v20 = System_DateTime__AddDays(v23, -1.0, 0LL).fields.dateData;
    }
    v24.fields.dateData = (uint64_t)&v20;
    Year = System_DateTime__get_Year(v24, 0LL);
    v25.fields.dateData = (uint64_t)&v20;
    Month = System_DateTime__get_Month(v25, 0LL);
    v26.fields.dateData = (uint64_t)&v20;
    Day = System_DateTime__get_Day(v26, 0LL);
    v15 = BalanceConfig_TypeInfo;
    v16 = Day;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v15 = BalanceConfig_TypeInfo;
    }
    v27.fields.dateData = (uint64_t)&t2;
    System_DateTime___ctor_15506540(v27, Year, Month, v16, v15->static_fields->EventDailyPointResetAt, 0, 0, 0LL);
    v17 = t2.fields.dateData;
    if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_DateTime_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    }
    v28.fields.dateData = dateData;
    v29.fields.dateData = v17;
    if ( System_DateTime__op_LessThanOrEqual(v28, v29, 0LL) )
      return 1;
  }
  return 0;
}


void __fastcall TerminalSceneComponent__CheckExchangeDialogTheFree(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *String_35644948; // x0
  const MethodInfo *v6; // x5

  if ( (byte_42AC671 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1662/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_TITLE"*/);
    sub_B52984(&StringLiteral_19030/*"freeShopIds"*/);
    sub_B52984(&StringLiteral_1661/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_DETAIL"*/);
    byte_42AC671 = 1;
  }
  String_35644948 = UnityEngine_PlayerPrefs__GetString_35644948((System_String_o *)StringLiteral_19030/*"freeShopIds"*/, 0LL);
  if ( System_String__IsNullOrEmpty(String_35644948, 0LL) )
    ActionExtensions__Call(callback, 0LL);
  else
    TerminalSceneComponent__OpenExchangeDialogue(
      this,
      (System_String_o *)StringLiteral_19030/*"freeShopIds"*/,
      (System_String_o *)StringLiteral_1662/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_TITLE"*/,
      (System_String_o *)StringLiteral_1661/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_DETAIL"*/,
      callback,
      v6);
}


void __fastcall TerminalSceneComponent__CheckExchangeDialogTheReturn(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *String_35644948; // x0
  const MethodInfo *v6; // x5

  if ( (byte_42AC672 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1664/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_TITLE"*/);
    sub_B52984(&StringLiteral_21993/*"returnRarePriShopIds"*/);
    sub_B52984(&StringLiteral_1663/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_DETAIL"*/);
    byte_42AC672 = 1;
  }
  String_35644948 = UnityEngine_PlayerPrefs__GetString_35644948((System_String_o *)StringLiteral_21993/*"returnRarePriShopIds"*/, 0LL);
  if ( System_String__IsNullOrEmpty(String_35644948, 0LL) )
    ActionExtensions__Call(callback, 0LL);
  else
    TerminalSceneComponent__OpenExchangeDialogue(
      this,
      (System_String_o *)StringLiteral_21993/*"returnRarePriShopIds"*/,
      (System_String_o *)StringLiteral_1664/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_TITLE"*/,
      (System_String_o *)StringLiteral_1663/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_DETAIL"*/,
      callback,
      v6);
}


void __fastcall TerminalSceneComponent__CheckLastPlayBgm(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTerminalList; // x20
  __int64 v4; // x1
  ScrTerminalListTop_o *v5; // x0

  if ( (byte_42AC65B & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AC65B = 1;
  }
  mTerminalList = (UnityEngine_Object_o *)this->fields.mTerminalList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mTerminalList, 0LL, 0LL) )
  {
    v5 = this->fields.mTerminalList;
    if ( !v5 )
      sub_B52A5C(0LL, v4);
    ScrTerminalListTop__CheckLastPlayBgm(v5, 0LL);
  }
}


void __fastcall TerminalSceneComponent__CheckMasterMissionReset(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass251_0_o *v5; // x19
  ScrPlayerStatus_o *mPlayerStatus; // x0
  __int64 v7; // x1
  System_Action_o **p_callback; // x20
  TerminalSceneComponent___c__DisplayClass251_0_Fields *p_fields; // x21
  TerminalSceneComponent_c *v10; // x0
  System_String_o *String; // x0
  int64_t v12; // x0
  CommonUI_o *Instance; // x20
  System_String_o *v14; // x21
  System_String_o *v15; // x22
  System_String_o *v16; // x23
  CommonConfirmDialog_ClickDelegate_o *v17; // x24
  TerminalSceneComponent_c *v18; // x0
  struct TerminalSceneComponent_StaticFields *static_fields; // x8
  int64_t v20; // x0
  System_String_o *MASTER_MISSION_RESET_KEY; // x19
  System_String_o *v22; // x0

  if ( (byte_42AC675 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass251_0__CheckMasterMissionReset_b__0__);
    sub_B52984(&TerminalSceneComponent___c__DisplayClass251_0_TypeInfo);
    sub_B52984(&StringLiteral_8900/*"MST_MISSION_CHANGE_MSG"*/);
    sub_B52984(&StringLiteral_8899/*"MST_MISSION_CHANGE_DECIDE"*/);
    sub_B52984(&StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_969/*"0"*/);
    byte_42AC675 = 1;
  }
  v5 = (TerminalSceneComponent___c__DisplayClass251_0_o *)sub_B52A54(TerminalSceneComponent___c__DisplayClass251_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass251_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_24;
  v5->fields.__4__this = this;
  sub_B52920(&v5->fields.__4__this);
  v5->fields.callback = callback;
  p_callback = &v5->fields.callback;
  sub_B52920(&v5->fields.callback);
  mPlayerStatus = this->fields.mPlayerStatus;
  if ( !mPlayerStatus )
    goto LABEL_24;
  v5->fields.time = ScrPlayerStatus__GetMstMissionStarts(mPlayerStatus, 0LL);
  p_fields = &v5->fields;
  v10 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v10 = TerminalSceneComponent_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             v10->static_fields->MASTER_MISSION_RESET_KEY,
             (System_String_o *)StringLiteral_969/*"0"*/,
             0LL);
  v12 = System_Int64__Parse(String, 0LL);
  if ( p_fields->time )
  {
    if ( v12 )
    {
      if ( v12 != p_fields->time )
      {
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_8900/*"MST_MISSION_CHANGE_MSG"*/, 0LL);
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_8899/*"MST_MISSION_CHANGE_DECIDE"*/, 0LL);
        v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
        v17 = (CommonConfirmDialog_ClickDelegate_o *)sub_B52A54(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v17,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent___c__DisplayClass251_0__CheckMasterMissionReset_b__0__,
          0LL);
        mPlayerStatus = (ScrPlayerStatus_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        }
        if ( Instance )
        {
          CommonUI__OpenConfirmDecideDlg(
            Instance,
            (System_String_o *)StringLiteral_1/*""*/,
            v14,
            v15,
            v16,
            v17,
            BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
            0.0,
            15.0,
            0,
            1,
            0,
            240,
            0,
            1,
            0LL);
          return;
        }
LABEL_24:
        sub_B52A5C(mPlayerStatus, v7);
      }
    }
    else
    {
      v18 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v18 = TerminalSceneComponent_TypeInfo;
      }
      static_fields = v18->static_fields;
      v20 = (int64_t)&v5->fields;
      MASTER_MISSION_RESET_KEY = static_fields->MASTER_MISSION_RESET_KEY;
      v22 = System_Int64__ToString(v20, 0LL);
      UnityEngine_PlayerPrefs__SetString(MASTER_MISSION_RESET_KEY, v22, 0LL);
    }
  }
  ActionExtensions__Call(*p_callback, 0LL);
}


void __fastcall TerminalSceneComponent__CheckNotificationDialog(
        TerminalSceneComponent_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass252_0_o *v4; // x19
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  System_Action_o **p_callBack; // x20
  BattleResultBondsComponent_c *v8; // x0
  BattleResultBondsComponent_c *v9; // x0
  Il2CppObject *String_35644948; // x21
  UserPresentBoxWindow_resData_array *v11; // x0
  UserPresentBoxWindow_resData_array *v12; // x22
  int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v14; // x23
  __int64 v15; // x25
  UserPresentBoxWindow_resData_o *v16; // x8
  BattleResultBondsComponent_c *v17; // x0
  BattleResultBondsComponent_c *v18; // x0
  System_Action_o *_9__0; // x20
  EventServantEntity_o *v20; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x22
  TerminalSceneComponent___c__DisplayClass252_1_o *v22; // x22
  __int64 v23; // x19
  GetSvtCoin_o *v24; // x20
  WarEntity_o *v25; // x8
  System_String_o *v26; // x19
  CommonUI_o *v27; // x22
  __int64 v28; // x0
  __int64 v29; // x0
  WarEntity_o *v30; // [xsp+38h] [xbp-58h] BYREF
  UserServantEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_42AC676 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&BattleResultBondsComponent_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B52984(&GetSvtCoin___TypeInfo);
    sub_B52984(&GetSvtCoin_TypeInfo);
    sub_B52984(&Method_JsonManager_DeserializeArray_GetSvts___);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass252_0__CheckNotificationDialog_b__0__);
    sub_B52984(&TerminalSceneComponent___c__DisplayClass252_0_TypeInfo);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass252_1__CheckNotificationDialog_b__1__);
    sub_B52984(&TerminalSceneComponent___c__DisplayClass252_1_TypeInfo);
    sub_B52984(&StringLiteral_12527/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/);
    byte_42AC676 = 1;
  }
  entity = 0LL;
  v30 = 0LL;
  v4 = (TerminalSceneComponent___c__DisplayClass252_0_o *)sub_B52A54(TerminalSceneComponent___c__DisplayClass252_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass252_0___ctor(v4, 0LL);
  if ( !v4 )
    goto LABEL_61;
  v4->fields.callBack = callBack;
  p_callBack = &v4->fields.callBack;
  sub_B52920(&v4->fields);
  v8 = BattleResultBondsComponent_TypeInfo;
  if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
    v8 = BattleResultBondsComponent_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v8->static_fields->GET_EXIST_SVT_KEY, 0LL) )
  {
    v9 = BattleResultBondsComponent_TypeInfo;
    if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
      v9 = BattleResultBondsComponent_TypeInfo;
    }
    String_35644948 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_35644948(
                                        v9->static_fields->GET_EXIST_SVT_KEY,
                                        0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
            String_35644948,
            (const MethodInfo_1F690B0 *)Method_JsonManager_DeserializeArray_GetSvts___);
    if ( v11 )
    {
      v12 = v11;
      if ( *(_QWORD *)&v11->max_length )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_61;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
        max_length = v12->max_length;
        if ( max_length >= 1 )
        {
          v14 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
          v15 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v15 >= max_length )
              goto LABEL_62;
            v16 = v12->m_Items[v15];
            if ( !v16 || !v14 )
              goto LABEL_61;
            Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                          v14,
                                          &entity,
                                          *(_QWORD *)&v16->fields.overflowType,
                                          (const MethodInfo_23E255C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (DataManager_o *)entity;
              if ( !entity )
                goto LABEL_61;
              Instance = (DataManager_o *)UserServantEntity__getEventServant(entity, 0LL);
              if ( Instance )
                break;
              Instance = (DataManager_o *)entity;
              if ( !entity )
                goto LABEL_61;
              Instance = (DataManager_o *)UserServantEntity__getEventServantIgnoreEnd(entity, 0LL);
              if ( Instance )
                break;
            }
            if ( (_DWORD)v15 == v12->max_length - 1 )
            {
              v17 = BattleResultBondsComponent_TypeInfo;
              if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
                v17 = BattleResultBondsComponent_TypeInfo;
              }
              UnityEngine_PlayerPrefs__DeleteKey(v17->static_fields->GET_EXIST_SVT_KEY, 0LL);
              ActionExtensions__Call(*p_callBack, 0LL);
            }
            max_length = v12->max_length;
            if ( (int)++v15 >= max_length )
              goto LABEL_33;
          }
          _9__0 = v4->fields.__9__0;
          v20 = (EventServantEntity_o *)Instance;
          if ( !_9__0 )
          {
            _9__0 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
            System_Action___ctor(
              _9__0,
              (Il2CppObject *)v4,
              Method_TerminalSceneComponent___c__DisplayClass252_0__CheckNotificationDialog_b__0__,
              0LL);
            v4->fields.__9__0 = _9__0;
            sub_B52920(&v4->fields.__9__0);
          }
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SvtCoinMaster___);
          if ( entity )
          {
            v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
            Instance = (DataManager_o *)UserServantEntity__getSvtId(entity, 0LL);
            if ( v21 )
            {
              Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                            v21,
                                            &v30,
                                            (int32_t)Instance,
                                            (const MethodInfo_23E2334 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !v30 )
                  goto LABEL_61;
                if ( *(&v30->fields.id + 1) >= 1 )
                {
                  v22 = (TerminalSceneComponent___c__DisplayClass252_1_o *)sub_B52A54(TerminalSceneComponent___c__DisplayClass252_1_TypeInfo);
                  TerminalSceneComponent___c__DisplayClass252_1___ctor(v22, 0LL);
                  if ( !v22 )
                    goto LABEL_61;
                  v22->fields.CS___8__locals1 = v4;
                  sub_B52920(&v22->fields.CS___8__locals1);
                  v23 = sub_B5299C(GetSvtCoin___TypeInfo, 1LL);
                  v24 = (GetSvtCoin_o *)sub_B52A54(GetSvtCoin_TypeInfo);
                  GetSvtCoin___ctor(v24, 0LL);
                  v25 = v30;
                  if ( !v30 )
                    goto LABEL_61;
                  if ( !v24 )
                    goto LABEL_61;
                  v24->fields.svtId = v30->fields.id;
                  v24->fields.num = *(&v25->fields.id + 1);
                  v24->fields.itemId = (int32_t)v25->fields.age;
                  if ( !v23 )
                    goto LABEL_61;
                  Instance = (DataManager_o *)sub_B52A44(v24, *(_QWORD *)(*(_QWORD *)v23 + 64LL));
                  if ( !Instance )
                  {
                    v29 = sub_B52A7C();
                    sub_B52A28(v29, 0LL);
                  }
                  if ( !*(_DWORD *)(v23 + 24) )
                  {
LABEL_62:
                    v28 = sub_B52A88(Instance);
                    sub_B52A28(v28, 0LL);
                  }
                  *(_QWORD *)(v23 + 32) = v24;
                  sub_B52920(v23 + 32);
                  v22->fields.coin = (struct GetSvtCoin_array *)v23;
                  sub_B52920(&v22->fields);
                  _9__0 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                  System_Action___ctor(
                    _9__0,
                    (Il2CppObject *)v22,
                    Method_TerminalSceneComponent___c__DisplayClass252_1__CheckNotificationDialog_b__1__,
                    0LL);
                }
              }
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v26 = LocalizationManager__Get((System_String_o *)StringLiteral_12527/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, 0LL);
              v27 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              Instance = (DataManager_o *)EventServantEntity__GetGetMessage(v20, 0LL);
              if ( v27 )
              {
                CommonUI__OpenNotificationDialog(
                  v27,
                  v26,
                  (System_String_o *)Instance,
                  _9__0,
                  -1,
                  0,
                  0,
                  0,
                  0,
                  0,
                  1,
                  0,
                  0LL,
                  0LL);
                return;
              }
            }
          }
LABEL_61:
          sub_B52A5C(Instance, v6);
        }
      }
    }
LABEL_33:
    v18 = BattleResultBondsComponent_TypeInfo;
    if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
      v18 = BattleResultBondsComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__DeleteKey(v18->static_fields->GET_EXIST_SVT_KEY, 0LL);
  }
  ActionExtensions__Call(*p_callBack, 0LL);
}


void __fastcall TerminalSceneComponent__CheckOpenCampaignDirectBonus(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass242_0_o *v3; // x20
  ScrTerminalListTop_o *mTerminalList; // x0
  __int64 v5; // x1
  System_Action_o *v6; // x22
  int v7; // w22
  ScrTerminalListTop_o *v8; // x23
  bool IsBlankEarthAction; // w25
  System_Action_o *v10; // x24
  const MethodInfo *v11; // x2
  System_Action_o *endAction; // x0
  System_Collections_IEnumerator_o *v13; // x0

  if ( (byte_42AC66E & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass242_0__CheckOpenCampaignDirectBonus_b__0__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass242_0__CheckOpenCampaignDirectBonus_b__1__);
    sub_B52984(&TerminalSceneComponent___c__DisplayClass242_0_TypeInfo);
    byte_42AC66E = 1;
  }
  v3 = (TerminalSceneComponent___c__DisplayClass242_0_o *)sub_B52A54(TerminalSceneComponent___c__DisplayClass242_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass242_0___ctor(v3, 0LL);
  if ( !v3 )
    goto LABEL_19;
  v3->fields.__4__this = this;
  sub_B52920(&v3->fields);
  this->fields._IsPlayingCampaignDirectBonus_k__BackingField = 1;
  v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v6,
    (Il2CppObject *)v3,
    Method_TerminalSceneComponent___c__DisplayClass242_0__CheckOpenCampaignDirectBonus_b__0__,
    0LL);
  v3->fields.endAction = v6;
  sub_B52920(&v3->fields.endAction);
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList
    || (mTerminalList = (ScrTerminalListTop_o *)ScrTerminalListTop__CheckTerminalTopEffect(mTerminalList, 0LL),
        !this->fields.mTerminalList)
    || (v7 = (int)mTerminalList,
        mTerminalList = (ScrTerminalListTop_o *)ScrTerminalListTop__GetCurrentLoginEntity(
                                                  this->fields.mTerminalList,
                                                  0LL),
        !this->fields.mTerminalList) )
  {
LABEL_19:
    sub_B52A5C(mTerminalList, v5);
  }
  v8 = mTerminalList;
  IsBlankEarthAction = ScrTerminalListTop__IsBlankEarthAction(this->fields.mTerminalList, 0LL);
  v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v10,
    (Il2CppObject *)v3,
    Method_TerminalSceneComponent___c__DisplayClass242_0__CheckOpenCampaignDirectBonus_b__1__,
    0LL);
  if ( v7 <= 0 && !v8 && !IsBlankEarthAction )
  {
    endAction = v10;
LABEL_11:
    ActionExtensions__Call(endAction, 0LL);
    return;
  }
  if ( v8 || v7 < 1 )
  {
    if ( !IsBlankEarthAction )
    {
      endAction = v3->fields.endAction;
      goto LABEL_11;
    }
    v13 = TerminalSceneComponent__CoWaitBlankEerthActionEnd(this, v10, v11);
  }
  else
  {
    v13 = TerminalSceneComponent__CoWaitTerminalTopEffectEnd(this, v10, v11);
  }
  UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v13, 0LL);
}


bool __fastcall TerminalSceneComponent__CheckPlayChapterStart(
        TerminalSceneComponent_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  QuestTree_o *v4; // x0
  __int64 v5; // x1
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v7; // x20
  int32_t StartType; // w0
  int32_t targetId; // w19

  if ( (byte_42AC667 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B52984(&SingletonTemplate_QuestTree__TypeInfo);
    sub_B52984(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC667 = 1;
  }
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v4 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !v4 )
    goto LABEL_22;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(v4, warId, 0LL);
  if ( !WarEntityByWarID )
    return (char)WarEntityByWarID;
  v7 = WarEntityByWarID;
  StartType = WarEntity__GetStartType(WarEntityByWarID, 0LL);
  if ( StartType != 2 )
  {
    if ( StartType != 1 )
      goto LABEL_14;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( TerminalPramsManager__IsWarStartedId(warId, 0LL) )
      goto LABEL_14;
LABEL_20:
    LOBYTE(WarEntityByWarID) = 1;
    return (char)WarEntityByWarID;
  }
  targetId = v7->fields.targetId;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v4 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !v4 )
LABEL_22:
    sub_B52A5C(v4, v5);
  if ( !clsQuestCheck__IsQuestClear((clsQuestCheck_o *)v4, targetId, 0, 0LL) )
    goto LABEL_20;
LABEL_14:
  LOBYTE(WarEntityByWarID) = 0;
  return (char)WarEntityByWarID;
}


void __fastcall TerminalSceneComponent__CheckRewardPopupChain(
        TerminalSceneComponent_o *this,
        System_Action_o *afterChain,
        bool checkTutorialEnded,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass241_0_o *v7; // x20
  CommonUI_o *Instance; // x0
  __int64 v9; // x1
  CommonUI_CampaignDirectBonusData_array *CampaignDirectBonus; // x21
  TerminalPramsManager_c *v11; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  __int64 v13; // x0
  Il2CppObject *mTerminalList; // x23
  System_Action_Action__array *v15; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v16; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v17; // x22
  Il2CppObject *v18; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v19; // x22
  Il2CppObject *v20; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v21; // x22
  Il2CppObject *v22; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v23; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v24; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v25; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v26; // x22
  TerminalSceneComponent___c_c *v27; // x0
  struct TerminalSceneComponent___c_StaticFields *v28; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__241_2; // x22
  Il2CppObject *v30; // x23
  struct TerminalSceneComponent___c_StaticFields *v31; // x0
  System_Action_Action__o *v32; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v33; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v34; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v35; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v36; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v37; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v38; // x22
  ActionChain_o *v39; // x19
  System_Action_array *v40; // x21
  System_Action_o *v41; // x22
  __int64 v42; // x0
  __int64 v43; // x0

  if ( (byte_42AC66D & 1) == 0 )
  {
    sub_B52984(&ActionChain_TypeInfo);
    sub_B52984(&System_Action___TypeInfo);
    sub_B52984(&System_Action_Action____TypeInfo);
    sub_B52984(&Method_System_Action_Action___ctor__);
    sub_B52984(&System_Action_Action__TypeInfo);
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_CommonUI_StartLoginMessages__);
    sub_B52984(&Method_CommonUI_StartServantEventJoinLeaveNotification__);
    sub_B52984(&Method_ScrTerminalListTop_ShowTerminalMessagesDialogue__);
    sub_B52984(&Method_ScrTerminalListTop_StartShowWarClearReward__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&Method_TerminalSceneComponent_CheckExchangeDialogTheFree__);
    sub_B52984(&Method_TerminalSceneComponent_CheckExchangeDialogTheReturn__);
    sub_B52984(&Method_TerminalSceneComponent_CheckMasterMissionReset__);
    sub_B52984(&Method_TerminalSceneComponent_CheckNotificationDialog__);
    sub_B52984(&Method_TerminalSceneComponent_CheckSaveRouteSelect__);
    sub_B52984(&Method_TerminalSceneComponent_CheckSpecialAscensionTutorial__);
    sub_B52984(&Method_TerminalSceneComponent_CheckTutorialOnTerminalAfterFreeExchangeDialog__);
    sub_B52984(&Method_TerminalSceneComponent_CheckTutorialOnTerminal__);
    sub_B52984(&TutorialFlag_TypeInfo);
    sub_B52984(&Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__241_2__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass241_0__CheckRewardPopupChain_b__0__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass241_0__CheckRewardPopupChain_b__1__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass241_0__CheckRewardPopupChain_b__3__);
    sub_B52984(&TerminalSceneComponent___c__DisplayClass241_0_TypeInfo);
    sub_B52984(&TerminalSceneComponent___c_TypeInfo);
    byte_42AC66D = 1;
  }
  v7 = (TerminalSceneComponent___c__DisplayClass241_0_o *)sub_B52A54(TerminalSceneComponent___c__DisplayClass241_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass241_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_89;
  v7->fields.__4__this = this;
  sub_B52920(&v7->fields);
  v7->fields.afterChain = afterChain;
  sub_B52920(&v7->fields.afterChain);
  if ( checkTutorialEnded )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_29217932(102, 0LL) )
    {
      ActionExtensions__Call(v7->fields.afterChain, 0LL);
      goto LABEL_82;
    }
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  if ( CommonUI__get_CampaignDirectBonus(Instance, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_89;
    CampaignDirectBonus = CommonUI__get_CampaignDirectBonus(Instance, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42AC7A1 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC7A1 = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v11->static_fields;
    static_fields->_CampaignDirectBonus_k__BackingField = CampaignDirectBonus;
    sub_B52920(&static_fields->_CampaignDirectBonus_k__BackingField);
    TerminalPramsManager__CampaignDirectBonus_SaveData(0LL);
  }
  v13 = sub_B5299C(System_Action_Action____TypeInfo, 15LL);
  mTerminalList = (Il2CppObject *)this->fields.mTerminalList;
  v15 = (System_Action_Action__array *)v13;
  v16 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v16,
    mTerminalList,
    Method_ScrTerminalListTop_StartShowWarClearReward__,
    (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__);
  if ( !v15 )
LABEL_89:
    sub_B52A5C(Instance, v9);
  if ( v16 )
  {
    Instance = (CommonUI_o *)sub_B52A44(v16, v15->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_88;
  }
  if ( !v15->max_length )
    goto LABEL_87;
  v15->m_Items[0] = (System_Action_Action__o *)v16;
  sub_B52920(v15->m_Items);
  v17 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v17,
    (Il2CppObject *)v7,
    Method_TerminalSceneComponent___c__DisplayClass241_0__CheckRewardPopupChain_b__0__,
    (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__);
  if ( v17 )
  {
    Instance = (CommonUI_o *)sub_B52A44(v17, v15->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_88;
  }
  if ( v15->max_length <= 1 )
    goto LABEL_87;
  v15->m_Items[1] = (System_Action_Action__o *)v17;
  sub_B52920(&v15->m_Items[1]);
  v18 = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v19 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v19,
    v18,
    Method_CommonUI_StartServantEventJoinLeaveNotification__,
    (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__);
  if ( v19 )
  {
    Instance = (CommonUI_o *)sub_B52A44(v19, v15->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_88;
  }
  if ( v15->max_length <= 2 )
    goto LABEL_87;
  v15->m_Items[2] = (System_Action_Action__o *)v19;
  sub_B52920(&v15->m_Items[2]);
  v20 = (Il2CppObject *)this->fields.mTerminalList;
  v21 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v21,
    v20,
    Method_ScrTerminalListTop_ShowTerminalMessagesDialogue__,
    (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__);
  if ( v21 )
  {
    Instance = (CommonUI_o *)sub_B52A44(v21, v15->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_88;
  }
  if ( v15->max_length <= 3 )
    goto LABEL_87;
  v15->m_Items[3] = (System_Action_Action__o *)v21;
  sub_B52920(&v15->m_Items[3]);
  v22 = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v23 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v23,
    v22,
    Method_CommonUI_StartLoginMessages__,
    (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__);
  if ( v23 )
  {
    Instance = (CommonUI_o *)sub_B52A44(v23, v15->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_88;
  }
  if ( v15->max_length <= 4 )
    goto LABEL_87;
  v15->m_Items[4] = (System_Action_Action__o *)v23;
  sub_B52920(&v15->m_Items[4]);
  v24 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v24,
    (Il2CppObject *)v7,
    Method_TerminalSceneComponent___c__DisplayClass241_0__CheckRewardPopupChain_b__1__,
    (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__);
  if ( v24 )
  {
    Instance = (CommonUI_o *)sub_B52A44(v24, v15->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_88;
  }
  if ( v15->max_length <= 5 )
    goto LABEL_87;
  v15->m_Items[5] = (System_Action_Action__o *)v24;
  sub_B52920(&v15->m_Items[5]);
  v25 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v25,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckSpecialAscensionTutorial__,
    (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__);
  if ( v25 )
  {
    Instance = (CommonUI_o *)sub_B52A44(v25, v15->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_88;
  }
  if ( v15->max_length <= 6 )
    goto LABEL_87;
  v15->m_Items[6] = (System_Action_Action__o *)v25;
  sub_B52920(&v15->m_Items[6]);
  v26 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v26,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckTutorialOnTerminal__,
    (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__);
  if ( v26 )
  {
    Instance = (CommonUI_o *)sub_B52A44(v26, v15->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_88;
  }
  if ( v15->max_length <= 7 )
    goto LABEL_87;
  v15->m_Items[7] = (System_Action_Action__o *)v26;
  sub_B52920(&v15->m_Items[7]);
  v27 = TerminalSceneComponent___c_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v27 = TerminalSceneComponent___c_TypeInfo;
  }
  v28 = v27->static_fields;
  _9__241_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v28->__9__241_2;
  if ( _9__241_2 )
    goto LABEL_54;
  if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v27);
    v28 = TerminalSceneComponent___c_TypeInfo->static_fields;
  }
  v30 = (Il2CppObject *)v28->__9;
  _9__241_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    _9__241_2,
    v30,
    Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__241_2__,
    (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__);
  v31 = TerminalSceneComponent___c_TypeInfo->static_fields;
  v31->__9__241_2 = (struct System_Action_Action__o *)_9__241_2;
  sub_B52920(&v31->__9__241_2);
  if ( _9__241_2 )
  {
LABEL_54:
    Instance = (CommonUI_o *)sub_B52A44(_9__241_2, v15->obj.klass->_1.element_class);
    v32 = (System_Action_Action__o *)_9__241_2;
    if ( !Instance )
      goto LABEL_88;
  }
  else
  {
    v32 = 0LL;
  }
  if ( v15->max_length <= 8 )
    goto LABEL_87;
  v15->m_Items[8] = v32;
  sub_B52920(&v15->m_Items[8]);
  v33 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v33,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckNotificationDialog__,
    (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__);
  if ( v33 )
  {
    Instance = (CommonUI_o *)sub_B52A44(v33, v15->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_88;
  }
  if ( v15->max_length <= 9 )
    goto LABEL_87;
  v15->m_Items[9] = (System_Action_Action__o *)v33;
  sub_B52920(&v15->m_Items[9]);
  v34 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v34,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckMasterMissionReset__,
    (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__);
  if ( v34 )
  {
    Instance = (CommonUI_o *)sub_B52A44(v34, v15->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_88;
  }
  if ( v15->max_length <= 0xA )
    goto LABEL_87;
  v15->m_Items[10] = (System_Action_Action__o *)v34;
  sub_B52920(&v15->m_Items[10]);
  v35 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v35,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckSaveRouteSelect__,
    (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__);
  if ( v35 )
  {
    Instance = (CommonUI_o *)sub_B52A44(v35, v15->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_88;
  }
  if ( v15->max_length <= 0xB )
    goto LABEL_87;
  v15->m_Items[11] = (System_Action_Action__o *)v35;
  sub_B52920(&v15->m_Items[11]);
  v36 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v36,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckExchangeDialogTheFree__,
    (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__);
  if ( v36 )
  {
    Instance = (CommonUI_o *)sub_B52A44(v36, v15->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_88;
  }
  if ( v15->max_length <= 0xC )
    goto LABEL_87;
  v15->m_Items[12] = (System_Action_Action__o *)v36;
  sub_B52920(&v15->m_Items[12]);
  v37 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v37,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckExchangeDialogTheReturn__,
    (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__);
  if ( v37 )
  {
    Instance = (CommonUI_o *)sub_B52A44(v37, v15->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_88;
  }
  if ( v15->max_length <= 0xD )
    goto LABEL_87;
  v15->m_Items[13] = (System_Action_Action__o *)v37;
  sub_B52920(&v15->m_Items[13]);
  v38 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v38,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckTutorialOnTerminalAfterFreeExchangeDialog__,
    (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__);
  if ( v38 )
  {
    Instance = (CommonUI_o *)sub_B52A44(v38, v15->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_88;
  }
  if ( v15->max_length <= 0xE )
    goto LABEL_87;
  v15->m_Items[14] = (System_Action_Action__o *)v38;
  sub_B52920(&v15->m_Items[14]);
  v39 = (ActionChain_o *)sub_B52A54(ActionChain_TypeInfo);
  ActionChain___ctor_21209932(v39, v15, 0LL);
  v40 = (System_Action_array *)sub_B5299C(System_Action___TypeInfo, 1LL);
  v41 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v7,
    Method_TerminalSceneComponent___c__DisplayClass241_0__CheckRewardPopupChain_b__3__,
    0LL);
  if ( !v40 )
    goto LABEL_89;
  if ( v41 )
  {
    Instance = (CommonUI_o *)sub_B52A44(v41, v40->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_88:
      v43 = sub_B52A7C();
      sub_B52A28(v43, 0LL);
    }
  }
  if ( !v40->max_length )
  {
LABEL_87:
    v42 = sub_B52A88(Instance);
    sub_B52A28(v42, 0LL);
  }
  v40->m_Items[0] = v41;
  sub_B52920(v40->m_Items);
  if ( !v39 )
    goto LABEL_89;
  Instance = (CommonUI_o *)ChainableActionBase__Final((ChainableActionBase_o *)v39, v40, 0LL);
  if ( !Instance )
    goto LABEL_89;
  ChainableActionBase__Execute((ChainableActionBase_o *)Instance, 0LL);
LABEL_82:
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__DeleteClearDatas(0LL);
}


void __fastcall TerminalSceneComponent__CheckSaveRouteSelect(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass249_0_o *v4; // x20
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x19
  System_Int32_array *routes; // [xsp+8h] [xbp-28h] BYREF
  int32_t phase; // [xsp+18h] [xbp-18h] BYREF
  int32_t questId; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_42AC674 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_B52984(&Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B52984(&ScriptManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass249_0__CheckSaveRouteSelect_b__0__);
    sub_B52984(&TerminalSceneComponent___c__DisplayClass249_0_TypeInfo);
    byte_42AC674 = 1;
  }
  questId = 0;
  phase = 0;
  routes = 0LL;
  v4 = (TerminalSceneComponent___c__DisplayClass249_0_o *)sub_B52A54(TerminalSceneComponent___c__DisplayClass249_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass249_0___ctor(v4, 0LL);
  if ( !v4 )
    goto LABEL_22;
  v4->fields.callback = callback;
  sub_B52920(&v4->fields);
  questId = -1;
  phase = -1;
  routes = 0LL;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  if ( ScriptManager__GetSelectRouteArrayInCollection(&questId, &phase, &routes, 0LL) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    if ( !Instance )
      goto LABEL_22;
    if ( QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, phase, 0LL) )
    {
      v7 = (NetworkManager_ResultCallbackFunc_o *)sub_B52A54(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v7,
        (Il2CppObject *)v4,
        Method_TerminalSceneComponent___c__DisplayClass249_0__CheckSaveRouteSelect_b__0__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = (DataManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                    v7,
                                    (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
      if ( Instance )
      {
        BattleRouteSelectRequest__beginRequest((BattleRouteSelectRequest_o *)Instance, questId, phase, routes, 0LL);
        return;
      }
LABEL_22:
      sub_B52A5C(Instance, v6);
    }
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__ClearSelectRouteArray(0LL);
    ScriptManager__ClearSelectRouteArrayInCollection(0LL);
  }
  ActionExtensions__Call(v4->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent__CheckSpecialAscensionTutorial(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *v4; // x20
  struct ScrTerminalMap_o *mTerminalMap; // x8

  v4 = this;
  if ( (byte_42AC677 & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_B52984(&CombineRootComponent_TypeInfo);
    byte_42AC677 = 1;
  }
  if ( !v4->fields.isTutorialAfter )
  {
    mTerminalMap = v4->fields.mTerminalMap;
    if ( !mTerminalMap || (this = (TerminalSceneComponent_o *)mTerminalMap->fields.mapButtonGrid) == 0LL )
      sub_B52A5C(this, callback);
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
      goto LABEL_12;
  }
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
  }
  if ( CombineRootComponent__IsEnableSpecialAscension(0LL) )
  {
    v4->fields.isTutorialAfter = 0;
    EventTutorialMaster__CheckTutorial(0, 60, callback, 0, 0, 0, 0, 0LL);
  }
  else
  {
LABEL_12:
    ActionExtensions__Call(callback, 0LL);
  }
}


bool __fastcall TerminalSceneComponent__CheckTutorial(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  bool v5; // w20
  TerminalPramsManager_c *v6; // x0
  const MethodInfo *v7; // x2
  int32_t FirstWarId; // w21
  TerminalPramsManager_c *v9; // x0
  TerminalPramsManager_c *v10; // x0
  clsQuestCheck_o *v11; // x0
  clsQuestCheck_o *v12; // x21
  int32_t v13; // w0
  int32_t v14; // w0
  int32_t v15; // w0
  int32_t v16; // w0
  int32_t v17; // w8
  int32_t Value; // w21
  TerminalPramsManager_c *v19; // x0
  TerminalPramsManager_c *v21; // x0
  int32_t v22; // w1

  if ( (byte_42AC664 & 1) == 0 )
  {
    sub_B52984(&OpeningMovieData_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B52984(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&TutorialFlag_TypeInfo);
    sub_B52984(&StringLiteral_13625/*"TUTORIAL_QUEST_ID1"*/);
    sub_B52984(&StringLiteral_13626/*"TUTORIAL_QUEST_ID2"*/);
    sub_B52984(&StringLiteral_13627/*"TUTORIAL_QUEST_ID3"*/);
    sub_B52984(&StringLiteral_13628/*"TUTORIAL_QUEST_ID4"*/);
    byte_42AC664 = 1;
  }
  this->fields.mTutorialKind = 0;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_29217932(102, 0LL) )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( TutorialFlag__GetProgress(0LL) == 4 )
      return 0;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseTutorialNotificationDialogArrow(Instance, 0LL);
      this->fields.isTutorialAfter = 1;
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      TutorialFlag__CompleteProgress(0LL);
      return 0;
    }
LABEL_104:
    sub_B52A5C(Instance, v4);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2CA )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2CA = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  this->fields.mIsStart_LoginBonusWhiteBg = !v6->static_fields->_IsAutoResume_k__BackingField;
  if ( !byte_42AC2AB )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
    byte_42AC2AB = 1;
  }
  if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_42AC2AA )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
    byte_42AC2AA = 1;
  }
  if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_DispState_k__BackingField = 2;
  if ( (BYTE3(OpeningMovieData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OpeningMovieData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo);
  }
  FirstWarId = OpeningMovieData__GetFirstWarId(0LL);
  if ( !byte_42AC2A4 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2A4 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_WarId_k__BackingField = FirstWarId;
  if ( !byte_42AC2D7 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2D7 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_SpotId_k__BackingField = -1;
  Instance = (CommonUI_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_104;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, v7);
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.mPlayerStatus;
  if ( !Instance )
    goto LABEL_104;
  ScrPlayerStatus__DisableAllBtn((ScrPlayerStatus_o *)Instance, 0LL);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v11 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  this->fields.mTutorialKind = 5;
  v12 = v11;
  Instance = (CommonUI_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_13625/*"TUTORIAL_QUEST_ID1"*/, 0LL);
  if ( !v12 )
    goto LABEL_104;
  if ( !clsQuestCheck__IsQuestClear(v12, (int32_t)Instance, 0, 0LL) )
  {
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_13625/*"TUTORIAL_QUEST_ID1"*/, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42AC2A6 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC2A6 = 1;
    }
    v19 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v19 = TerminalPramsManager_TypeInfo;
    }
    v19->static_fields->_QuestId_k__BackingField = Value;
    Instance = (CommonUI_o *)this->fields.mTerminalList;
    if ( Instance )
    {
      ScrTerminalListTop__SelectedQuest((ScrTerminalListTop_o *)Instance, 0LL);
      return 1;
    }
    goto LABEL_104;
  }
  v13 = ConstantMaster__getValue((System_String_o *)StringLiteral_13626/*"TUTORIAL_QUEST_ID2"*/, 0LL);
  if ( !clsQuestCheck__IsQuestClear(v12, v13, 0, 0LL) )
  {
    v5 = 0;
    v17 = 1;
    goto LABEL_89;
  }
  v14 = ConstantMaster__getValue((System_String_o *)StringLiteral_13627/*"TUTORIAL_QUEST_ID3"*/, 0LL);
  if ( !clsQuestCheck__IsQuestClear(v12, v14, 0, 0LL) )
  {
    v5 = 0;
    v17 = 2;
    goto LABEL_89;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(1, 0LL) )
  {
    v5 = 0;
    v17 = 3;
    goto LABEL_89;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_29217932(101, 0LL) )
    goto LABEL_107;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(2, 0LL) )
  {
LABEL_107:
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42AC2D8 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC2D8 = 1;
    }
    v21 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v21 = TerminalPramsManager_TypeInfo;
    }
    v21->static_fields->_SummonType_k__BackingField = 1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_104;
    v22 = 20;
LABEL_101:
    v5 = 1;
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v22, 1, 0LL, 0LL);
    return v5;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(3, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_104;
    v22 = 40;
    goto LABEL_101;
  }
  v15 = ConstantMaster__getValue((System_String_o *)StringLiteral_13628/*"TUTORIAL_QUEST_ID4"*/, 0LL);
  v5 = 0;
  if ( clsQuestCheck__IsQuestClear(v12, v15, 0, 0LL) )
    return v5;
  v16 = ConstantMaster__getValue((System_String_o *)StringLiteral_13628/*"TUTORIAL_QUEST_ID4"*/, 0LL);
  if ( clsQuestCheck__mfGetQuestPhaseByQuestID(v12, v16, 0LL) <= 0 )
  {
    v5 = 0;
    v17 = 4;
LABEL_89:
    this->fields.mTutorialKind = v17;
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

  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap || (this = (TerminalSceneComponent_o *)mTerminalMap->fields.mapButtonGrid) == 0LL )
    sub_B52A5C(this, callback);
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
  Il2CppObject *v3; // x20
  const MethodInfo *v4; // x1

  if ( (byte_42AC63F & 1) == 0 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&TerminalTransitionInfo_TypeInfo);
    byte_42AC63F = 1;
  }
  v3 = (Il2CppObject *)sub_B52A54(TerminalTransitionInfo_TypeInfo);
  System_Object___ctor(v3, 0LL);
  TerminalTransitionInfo__Init((TerminalTransitionInfo_o *)v3, v4);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__TerminalTransitionInfoSave_SaveData((TerminalTransitionInfo_o *)v3, 0LL);
  this->fields._TransitionInfo_k__BackingField = 0LL;
  sub_B52920(&this->fields._TransitionInfo_k__BackingField);
}


System_Collections_IEnumerator_o *__fastcall TerminalSceneComponent__CoWaitBlankEerthActionEnd(
        TerminalSceneComponent_o *this,
        System_Action_o *openCampaignDirectBonus,
        const MethodInfo *method)
{
  TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__244_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_42AC670 & 1) == 0 )
  {
    sub_B52984(&TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__244_TypeInfo);
    byte_42AC670 = 1;
  }
  v5 = (TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__244_o *)sub_B52A54(TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__244_TypeInfo);
  TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__244___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  v5->fields.__4__this = this;
  sub_B52920(&v5->fields.__4__this);
  v5->fields.openCampaignDirectBonus = openCampaignDirectBonus;
  sub_B52920(&v5->fields.openCampaignDirectBonus);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd(
        TerminalSceneComponent_o *this,
        System_Action_o *openCampaignDirectBonus,
        const MethodInfo *method)
{
  TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__243_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_42AC66F & 1) == 0 )
  {
    sub_B52984(&TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__243_TypeInfo);
    byte_42AC66F = 1;
  }
  v5 = (TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__243_o *)sub_B52A54(TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__243_TypeInfo);
  TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__243___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  v5->fields.__4__this = this;
  sub_B52920(&v5->fields.__4__this);
  v5->fields.openCampaignDirectBonus = openCampaignDirectBonus;
  sub_B52920(&v5->fields.openCampaignDirectBonus);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall TerminalSceneComponent__CreateTransitionInfo(
        TerminalSceneComponent_o *this,
        TerminalTransitionInfo_o *info,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x0

  if ( (byte_42AC63E & 1) == 0 )
  {
    sub_B52984(&TerminalTransitionInfo_TypeInfo);
    byte_42AC63E = 1;
  }
  v5 = (Il2CppObject *)sub_B52A54(TerminalTransitionInfo_TypeInfo);
  System_Object___ctor(v5, 0LL);
  TerminalTransitionInfo__Init((TerminalTransitionInfo_o *)v5, v6);
  this->fields._TransitionInfo_k__BackingField = (struct TerminalTransitionInfo_o *)v5;
  sub_B52920(&this->fields._TransitionInfo_k__BackingField);
  TransitionInfo_k__BackingField = this->fields._TransitionInfo_k__BackingField;
  if ( !TransitionInfo_k__BackingField )
    sub_B52A5C(0LL, v7);
  TerminalTransitionInfo__SetParameters(TransitionInfo_k__BackingField, info, v8);
}


void __fastcall TerminalSceneComponent__EndAuto(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  ScrPlayerStatus_o *mPlayerStatus; // x0

  if ( (byte_42AC64F & 1) == 0 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC64F = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC795 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC795 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( v3->static_fields->mIsAutoOpenMasterMission )
  {
    mPlayerStatus = this->fields.mPlayerStatus;
    if ( !mPlayerStatus )
      sub_B52A5C(0LL, method);
    ScrPlayerStatus__OpenMasterMission(mPlayerStatus, 0LL, -1, 0LL);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v3);
  TerminalPramsManager__AutoOff(0LL);
}


float __fastcall TerminalSceneComponent__FSMenuOffsetX(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  if ( (byte_42AC632 & 1) == 0 )
  {
    sub_B52984(&FSUtility_TypeInfo);
    byte_42AC632 = 1;
  }
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
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
  int32_t height; // w0

  width = UnityEngine_Screen__get_width(0LL);
  height = UnityEngine_Screen__get_height(0LL);
  return (float)(UnityEngine_Mathf__Clamp((float)width / (float)height, 2.1444, 2.3333, 0LL) + -2.1444) / 0.18889;
}


float __fastcall TerminalSceneComponent__FSRatioNormY(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int32_t width; // w19
  int32_t height; // w0

  width = UnityEngine_Screen__get_width(0LL);
  height = UnityEngine_Screen__get_height(0LL);
  return (float)(UnityEngine_Mathf__Clamp((float)width / (float)height, 1.8333, 2.3333, 0LL) + -1.8333) / 0.5;
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
  float x; // s9
  float y; // s8
  float v7; // s0
  TerminalSceneComponent_o *v8; // x0
  const MethodInfo *v9; // x1
  float v10; // s4
  float v11; // s9
  TerminalSceneComponent_o *v12; // x0
  const MethodInfo *v13; // x1
  float v14; // s0
  float v15; // s4
  float m_XMin; // s0
  float m_YMin; // s1
  float m_Width; // s2
  float m_Height; // s3
  struct UnityEngine_Rect_o TUTORIAL_SPOT_ARROW_RECT; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Rect_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  x = offset_21_9.fields.x;
  y = offset_21_9.fields.y;
  TUTORIAL_SPOT_ARROW_RECT = this->fields.TUTORIAL_SPOT_ARROW_RECT;
  offset_21_9.fields.x = TUTORIAL_SPOT_ARROW_RECT.fields.m_XMin;
  v7 = UnityEngine_Rect__get_x(
         *(UnityEngine_Rect_o *)&offset_21_9.fields.x,
         (const MethodInfo *)&TUTORIAL_SPOT_ARROW_RECT);
  v21.fields.m_XMin = v7 + (float)(x * TerminalSceneComponent__FSRatioNormX(v8, v9));
  UnityEngine_Rect__set_x(v21, v10, (const MethodInfo *)&TUTORIAL_SPOT_ARROW_RECT);
  v11 = UnityEngine_Rect__get_y(v22, (const MethodInfo *)&TUTORIAL_SPOT_ARROW_RECT);
  v14 = TerminalSceneComponent__FSRatioNormY(v12, v13);
  v23.fields.m_YMin = -20.0;
  v23.fields.m_XMin = v11 + (float)((float)(y * v14) + -20.0);
  UnityEngine_Rect__set_y(v23, v15, (const MethodInfo *)&TUTORIAL_SPOT_ARROW_RECT);
  m_YMin = TUTORIAL_SPOT_ARROW_RECT.fields.m_YMin;
  m_XMin = TUTORIAL_SPOT_ARROW_RECT.fields.m_XMin;
  m_Height = TUTORIAL_SPOT_ARROW_RECT.fields.m_Height;
  m_Width = TUTORIAL_SPOT_ARROW_RECT.fields.m_Width;
  result.fields.m_Height = m_Height;
  result.fields.m_Width = m_Width;
  result.fields.m_YMin = m_YMin;
  result.fields.m_XMin = m_XMin;
  return result;
}


void __fastcall TerminalSceneComponent__FadeInAndTriggerEventEffects(
        TerminalSceneComponent_o *this,
        float fadeTime,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass194_0_o *v9; // x20
  _BYTE *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x3
  struct ScrTerminalListTop_o *mTerminalList; // x8
  System_Action_o *v15; // x2
  __int64 v16; // x8
  __int64 v17; // x8
  __int64 v18; // x8
  __int64 v19; // x8
  __int64 v20; // x21
  _BOOL8 IsNullOrEmpty; // x0
  int32_t v22; // w22
  int32_t v23; // w23
  SceneJumpInfo_o *v24; // x21
  TerminalPramsManager_c *v25; // x0
  TerminalPramsManager_c *v26; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  ScrTerminalMap_o *mTerminalMap; // x22
  int32_t v29; // w23
  System_String_o *MapModelEntryAnimationName; // x22
  TerminalPramsManager_c *v31; // x0
  WebViewManager_o *v32; // x0
  float v33; // s8
  CommonUI_o *v34; // x19
  System_Action_o *v35; // x21
  WebViewManager_o *v36; // x19
  System_Action_o *v37; // x21
  CommonUI_o *v38; // x21
  ScrTerminalMap_o *v39; // x19
  System_Action_o *v40; // x21
  __int64 v41; // x0

  if ( (byte_42AC651 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&SceneJumpInfo_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass194_0__FadeInAndTriggerEventEffects_b__0__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass194_0__FadeInAndTriggerEventEffects_b__1__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass194_0__FadeInAndTriggerEventEffects_b__4__);
    sub_B52984(&TerminalSceneComponent___c__DisplayClass194_0_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AC651 = 1;
  }
  v9 = (TerminalSceneComponent___c__DisplayClass194_0_o *)sub_B52A54(TerminalSceneComponent___c__DisplayClass194_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass194_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_118;
  v9->fields.fadeTime = fadeTime;
  v9->fields.__4__this = this;
  sub_B52920(&v9->fields.__4__this);
  v9->fields.callback = callback;
  v9->fields.eventId = eventId;
  sub_B52920(&v9->fields.callback);
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_118;
  v11 = (unsigned int)v9->fields.eventId;
  if ( mTerminalList->fields.isBackFromBlankEarthMap )
  {
    v15 = v9->fields.callback;
LABEL_7:
    TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(this, v11, v15, v13);
    return;
  }
  if ( (int)v11 >= 1 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42AC797 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC797 = 1;
    }
    Instance = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = TerminalPramsManager_TypeInfo;
    }
    if ( *(_QWORD *)(*((_QWORD *)Instance + 23) + 200LL) )
    {
      if ( (Instance[307] & 4) != 0 && !*((_DWORD *)Instance + 56) )
        j_il2cpp_runtime_class_init_0(Instance);
      if ( !byte_42AC797 )
      {
        sub_B52984(&TerminalPramsManager_TypeInfo);
        byte_42AC797 = 1;
      }
      Instance = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Instance = TerminalPramsManager_TypeInfo;
      }
      v16 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 200LL);
      if ( !v16 )
        goto LABEL_118;
      if ( *(_DWORD *)(v16 + 16) == v9->fields.eventId )
      {
        if ( (Instance[307] & 4) != 0 && !*((_DWORD *)Instance + 56) )
          j_il2cpp_runtime_class_init_0(Instance);
        if ( !byte_42AC797 )
        {
          sub_B52984(&TerminalPramsManager_TypeInfo);
          byte_42AC797 = 1;
        }
        Instance = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          Instance = TerminalPramsManager_TypeInfo;
        }
        v17 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 200LL);
        if ( !v17 )
          goto LABEL_118;
        if ( *(_DWORD *)(v17 + 20) )
        {
          if ( (Instance[307] & 4) != 0 && !*((_DWORD *)Instance + 56) )
            j_il2cpp_runtime_class_init_0(Instance);
          if ( !byte_42AC797 )
          {
            sub_B52984(&TerminalPramsManager_TypeInfo);
            byte_42AC797 = 1;
          }
          Instance = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            Instance = TerminalPramsManager_TypeInfo;
          }
          v18 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 200LL);
          if ( v18 )
          {
            if ( *(_DWORD *)(v18 + 20) == 1 )
            {
              if ( (Instance[307] & 4) != 0 && !*((_DWORD *)Instance + 56) )
                j_il2cpp_runtime_class_init_0(Instance);
              if ( !byte_42AC797 )
              {
                sub_B52984(&TerminalPramsManager_TypeInfo);
                byte_42AC797 = 1;
              }
              Instance = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                Instance = TerminalPramsManager_TypeInfo;
              }
              v19 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 200LL);
              if ( !v19 )
                goto LABEL_118;
              v20 = *(_QWORD *)(v19 + 24);
              if ( v20
                && *(int *)(v20 + 24) >= 1
                && !(IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v20 + 32), 0LL)) )
              {
                if ( !*(_DWORD *)(v20 + 24) )
                {
                  v41 = sub_B52A88(IsNullOrEmpty);
                  sub_B52A28(v41, 0LL);
                }
                v22 = System_Int32__Parse(*(System_String_o **)(v20 + 32), 0LL) + 1;
              }
              else
              {
                v22 = 0;
              }
              v23 = v9->fields.eventId;
              v24 = (SceneJumpInfo_o *)sub_B52A54(SceneJumpInfo_TypeInfo);
              SceneJumpInfo___ctor_17466296(v24, (System_String_o *)StringLiteral_1/*""*/, v23, v22, 0LL);
              Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !Instance )
                goto LABEL_118;
              AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 72, 1, (Il2CppObject *)v24, 0LL);
              Instance = TerminalPramsManager_TypeInfo;
            }
            if ( (Instance[307] & 4) != 0 && !*((_DWORD *)Instance + 56) )
              j_il2cpp_runtime_class_init_0(Instance);
            if ( !byte_42AC797 )
            {
              sub_B52984(&TerminalPramsManager_TypeInfo);
              byte_42AC797 = 1;
            }
            v25 = TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v25 = TerminalPramsManager_TypeInfo;
            }
            Instance = v25->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
            if ( Instance )
            {
              SpecifiedSceneInfo__InitParameter((SpecifiedSceneInfo_o *)Instance, 0LL);
              if ( !byte_42AC798 )
              {
                sub_B52984(&TerminalPramsManager_TypeInfo);
                byte_42AC798 = 1;
              }
              v26 = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v26 = TerminalPramsManager_TypeInfo;
              }
              static_fields = v26->static_fields;
              static_fields->_SpecifiedChangeSceneInfo_k__BackingField = 0LL;
              sub_B52920(&static_fields->_SpecifiedChangeSceneInfo_k__BackingField);
              LODWORD(v11) = v9->fields.eventId;
              v15 = v9->fields.callback;
              goto LABEL_7;
            }
          }
LABEL_118:
          sub_B52A5C(Instance, v11);
        }
      }
    }
  }
  if ( TerminalSceneComponent__IsEnabledMapOnEvent((TerminalSceneComponent_o *)Instance, v9->fields.eventId, v12) )
  {
    Instance = this->fields.mTerminalMap;
    if ( !Instance )
      goto LABEL_118;
    if ( !ScrTerminalMap__IsMapModel((ScrTerminalMap_o *)Instance, 0LL) )
      goto LABEL_106;
    mTerminalMap = this->fields.mTerminalMap;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42AC2CB )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC2CB = 1;
    }
    Instance = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = TerminalPramsManager_TypeInfo;
    }
    v29 = *(_DWORD *)(*((_QWORD *)Instance + 23) + 140LL);
    if ( !byte_42AC2CC )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      Instance = TerminalPramsManager_TypeInfo;
      byte_42AC2CC = 1;
    }
    if ( (Instance[307] & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = TerminalPramsManager_TypeInfo;
    }
    if ( !mTerminalMap )
      goto LABEL_118;
    MapModelEntryAnimationName = ScrTerminalMap__GetMapModelEntryAnimationName(
                                   mTerminalMap,
                                   v29,
                                   *(_DWORD *)(*((_QWORD *)Instance + 23) + 144LL),
                                   0LL);
    if ( !byte_42AC799 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC799 = 1;
    }
    v31 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v31 = TerminalPramsManager_TypeInfo;
    }
    v31->static_fields->_MapModelClearQuestId_k__BackingField = 0;
    if ( !byte_42AC79A )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      v31 = TerminalPramsManager_TypeInfo;
      byte_42AC79A = 1;
    }
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = TerminalPramsManager_TypeInfo;
    }
    v31->static_fields->_MapModelClearPhaseCount_k__BackingField = 0;
    if ( !System_String__IsNullOrEmpty(MapModelEntryAnimationName, 0LL) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v38 = (CommonUI_o *)Instance;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( !v38 )
        goto LABEL_118;
      CommonUI__maskFadein(v38, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
      v39 = this->fields.mTerminalMap;
      v40 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        v40,
        (Il2CppObject *)v9,
        Method_TerminalSceneComponent___c__DisplayClass194_0__FadeInAndTriggerEventEffects_b__4__,
        0LL);
      if ( !v39 )
        goto LABEL_118;
      ScrTerminalMap__PlayMapModelEntryAnimation(v39, MapModelEntryAnimationName, v40, 0LL);
    }
    else
    {
LABEL_106:
      v32 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v33 = v9->fields.fadeTime;
      v34 = (CommonUI_o *)v32;
      v35 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        v35,
        (Il2CppObject *)v9,
        Method_TerminalSceneComponent___c__DisplayClass194_0__FadeInAndTriggerEventEffects_b__1__,
        0LL);
      if ( !v34 )
        goto LABEL_118;
      CommonUI__maskFadein(v34, v33, v35, 0LL);
    }
  }
  else
  {
    v36 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    v37 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v37,
      (Il2CppObject *)v9,
      Method_TerminalSceneComponent___c__DisplayClass194_0__FadeInAndTriggerEventEffects_b__0__,
      0LL);
    if ( !v36 )
      goto LABEL_118;
    QuestAfterAction__LoadVoice((QuestAfterAction_o *)v36, v37, 0LL);
  }
}


void __fastcall TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass197_0_o *v7; // x22
  DataManager_o *Instance; // x0
  const MethodInfo *v9; // x1
  System_Action_o **p_callback; // x21
  const MethodInfo *v11; // x4
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x3
  System_Action_o *v14; // x2
  EventDetailEntity_o *v15; // x1
  struct TitleInfoControl_o *mTitleInfo; // x19
  WarEntity_o *v17; // x20
  System_Action_o *v18; // x21
  const MethodInfo *v19; // x3
  struct TitleInfoControl_o *v20; // x23
  const MethodInfo *v21; // x2
  TerminalPramsManager_c *v22; // x0
  System_Action_o *v23; // x19
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x3
  System_Action_o *v29; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42AC654 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B52984(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass197_0__FadeInAndTriggerEventEffectsNext_b__0__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass197_0__FadeInAndTriggerEventEffectsNext_b__1__);
    sub_B52984(&TerminalSceneComponent___c__DisplayClass197_0_TypeInfo);
    byte_42AC654 = 1;
  }
  entity = 0LL;
  v7 = (TerminalSceneComponent___c__DisplayClass197_0_o *)sub_B52A54(TerminalSceneComponent___c__DisplayClass197_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass197_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_69;
  v7->fields.__4__this = this;
  sub_B52920(&v7->fields);
  v7->fields.callback = callback;
  p_callback = &v7->fields.callback;
  sub_B52920(&v7->fields.callback);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_69;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_23E2334 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_65;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_69;
  if ( EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.mTitleInfo;
    if ( !Instance )
      goto LABEL_69;
    TitleInfoControl__PlayEventTimeStateAnime((TitleInfoControl_o *)Instance, v9);
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_69:
    sub_B52A5C(Instance, v9);
  if ( EventDetailEntity__isRaidDefeatCount((EventDetailEntity_o *)entity, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.mTitleInfo;
    if ( Instance )
    {
      TitleInfoControl__PlayEventRaidDefeatedEffect((TitleInfoControl_o *)Instance, eventId, 0, *p_callback, v11);
      return;
    }
    goto LABEL_69;
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_69;
  if ( EventDetailEntity__IsSuperBoss((EventDetailEntity_o *)entity, 0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_69;
    if ( !EventDetailEntity__isTower((EventDetailEntity_o *)entity, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.mTitleInfo;
      if ( !Instance )
        goto LABEL_69;
      TitleInfoControl__CheckSuperBossHpAnim((TitleInfoControl_o *)Instance, *p_callback, v12);
      return;
    }
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_69;
  if ( !EventDetailEntity__IsSuperBoss((EventDetailEntity_o *)entity, 0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_69;
    if ( EventDetailEntity__isTower((EventDetailEntity_o *)entity, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.mTitleInfo;
      if ( !Instance )
        goto LABEL_69;
      v14 = *p_callback;
      v15 = (EventDetailEntity_o *)entity;
LABEL_31:
      TitleInfoControl__EventTowerStart((TitleInfoControl_o *)Instance, v15, v14, v13);
      return;
    }
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_69;
  if ( EventDetailEntity__IsSuperBoss((EventDetailEntity_o *)entity, 0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_69;
    if ( EventDetailEntity__isTower((EventDetailEntity_o *)entity, 0LL) )
    {
      mTitleInfo = this->fields.mTitleInfo;
      v17 = entity;
      v18 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        v18,
        (Il2CppObject *)v7,
        Method_TerminalSceneComponent___c__DisplayClass197_0__FadeInAndTriggerEventEffectsNext_b__0__,
        0LL);
      if ( !mTitleInfo )
        goto LABEL_69;
      Instance = (DataManager_o *)mTitleInfo;
      v15 = (EventDetailEntity_o *)v17;
      v14 = v18;
      goto LABEL_31;
    }
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_69;
  Instance = (DataManager_o *)EventDetailEntity__IsGroupPoint((EventDetailEntity_o *)entity, 0LL);
  v20 = this->fields.mTitleInfo;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v20 )
      goto LABEL_69;
    TitleInfoControl__CheckEventPointGroupReward(this->fields.mTitleInfo, eventId, *p_callback, v19);
    v22 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v22 = TerminalPramsManager_TypeInfo;
    }
    if ( v22->static_fields->joinGroupId >= 1 )
    {
      Instance = (DataManager_o *)this->fields.mTitleInfo;
      if ( !Instance )
        goto LABEL_69;
      TitleInfoControl__vsGaugeEvent((TitleInfoControl_o *)Instance, eventId, v21);
    }
    return;
  }
  if ( !v20 )
    goto LABEL_69;
  if ( v20->fields.needPlayDailyPointItemEffect )
  {
    v23 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v23,
      (Il2CppObject *)v7,
      Method_TerminalSceneComponent___c__DisplayClass197_0__FadeInAndTriggerEventEffectsNext_b__1__,
      0LL);
    TitleInfoControl__UpdateDailyPointWithEffect(v20, v23, v24);
    return;
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_69;
  if ( EventDetailEntity__IsEventActivityPoint((EventDetailEntity_o *)entity, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.mTitleInfo;
    if ( !Instance )
      goto LABEL_69;
    TitleInfoControl__CheckEventPointGaugeAnim(
      (TitleInfoControl_o *)Instance,
      (EventDetailEntity_o *)entity,
      *p_callback,
      v25);
    return;
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_69;
  if ( EventDetailEntity__IsEventPanel((EventDetailEntity_o *)entity, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.mTitleInfo;
    if ( !Instance )
      goto LABEL_69;
    TitleInfoControl__CheckEventSubmarineStatusAnim(
      (TitleInfoControl_o *)Instance,
      (EventDetailEntity_o *)entity,
      *p_callback,
      v26);
    return;
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_69;
  if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)entity, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.mTerminalMap;
    if ( !Instance )
      goto LABEL_69;
    if ( Instance[2].fields.saveDataMapList )
    {
      ScrTerminalMap__UpdateEventBoardGame((ScrTerminalMap_o *)Instance, *p_callback, 0LL);
      return;
    }
    v29 = *p_callback;
    goto LABEL_66;
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_69;
  if ( !EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)entity, 0LL) )
    goto LABEL_65;
  Instance = (DataManager_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_69;
  if ( !TitleInfoControl__IsPlayEventUIAnimation((TitleInfoControl_o *)Instance, 1, v27) )
  {
LABEL_65:
    v29 = *p_callback;
LABEL_66:
    ActionExtensions__Call(v29, 0LL);
    return;
  }
  Instance = (DataManager_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_69;
  TitleInfoControl__StartEventUIAnimation((TitleInfoControl_o *)Instance, 1, *p_callback, v28);
}


void __fastcall TerminalSceneComponent__FadeinWorldDispNoneExecuteUnusedAssets(
        TerminalSceneComponent_o *this,
        bool isExecuteUnusedAssets,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  AvalonSceneManager_c *v7; // x0
  System_Collections_IEnumerator_o *v8; // x1

  if ( (byte_42AC648 & 1) == 0 )
  {
    sub_B52984(&AvalonSceneManager_TypeInfo);
    byte_42AC648 = 1;
  }
  v7 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
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
  UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v8, 0LL);
}


void __fastcall TerminalSceneComponent__Fadein_MapDisp(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass189_0_o *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v12; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21

  if ( (byte_42AC64C & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass189_0__Fadein_MapDisp_b__0__);
    sub_B52984(&TerminalSceneComponent___c__DisplayClass189_0_TypeInfo);
    byte_42AC64C = 1;
  }
  v7 = (TerminalSceneComponent___c__DisplayClass189_0_o *)sub_B52A54(TerminalSceneComponent___c__DisplayClass189_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass189_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_11;
  v7->fields.__4__this = this;
  sub_B52920(&v7->fields);
  v7->fields.end_act = end_act;
  sub_B52920(&v7->fields.end_act);
  if ( this->fields._FirstFadeTime_k__BackingField > 0.0 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v12 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
    v14 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v14,
      (Il2CppObject *)v7,
      Method_TerminalSceneComponent___c__DisplayClass189_0__Fadein_MapDisp_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeChangeColor(Instance, 2, DEFAULT_FADE_TIME, v14, 0LL);
      return;
    }
LABEL_11:
    sub_B52A5C(v8, v9);
  }
  TerminalSceneComponent__Fadein_MapDisp_Load(this, fade_time, v7->fields.end_act, v10);
}


void __fastcall TerminalSceneComponent__Fadein_MapDisp_Load(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass190_0_o *v7; // x20
  void *mTerminalMap; // x0
  const MethodInfo *v9; // x1
  TerminalPramsManager_c *v10; // x0
  __int64 v11; // x8
  __int64 v12; // x8
  WarEntity_o *v13; // x21
  TerminalPramsManager_c *v14; // x0
  _BOOL4 isInvisibleConnectAndLoad; // w22
  TitleInfoControl_o *mTitleInfo; // x19
  System_Action_o *v17; // x22
  const MethodInfo *v18; // x4

  if ( (byte_42AC64D & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass190_0__Fadein_MapDisp_Load_b__0__);
    sub_B52984(&TerminalSceneComponent___c__DisplayClass190_0_TypeInfo);
    byte_42AC64D = 1;
  }
  v7 = (TerminalSceneComponent___c__DisplayClass190_0_o *)sub_B52A54(TerminalSceneComponent___c__DisplayClass190_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass190_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_38;
  v7->fields.__4__this = this;
  sub_B52920(&v7->fields);
  v7->fields.end_act = end_act;
  v7->fields.fade_time = fade_time;
  sub_B52920(&v7->fields.end_act);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2B4 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2B4 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  if ( !v10->static_fields->_IsDispOnly_k__BackingField )
  {
    TerminalSceneComponent__EndAuto(this, v9);
    goto LABEL_26;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42AC2A0 )
  {
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AC2A0 = 1;
  }
  mTerminalMap = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mTerminalMap = TerminalSceneComponent_TypeInfo;
  }
  v11 = **((_QWORD **)mTerminalMap + 23);
  if ( !v11 || (v12 = *(_QWORD *)(v11 + 256)) == 0 || (mTerminalMap = *(void **)(v12 + 528)) == 0LL )
LABEL_38:
    sub_B52A5C(mTerminalMap, v9);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mTerminalMap, 1, 0LL);
LABEL_26:
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_38;
  v13 = (WarEntity_o *)*((_QWORD *)mTerminalMap + 43);
  ScrTerminalMap__SetDisp((ScrTerminalMap_o *)mTerminalMap, 1, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC794 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC794 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  isInvisibleConnectAndLoad = v14->static_fields->isInvisibleConnectAndLoad;
  mTerminalMap = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_38;
  CommonUI__SetLoadMode((CommonUI_o *)mTerminalMap, !isInvisibleConnectAndLoad, 0LL);
  mTitleInfo = this->fields.mTitleInfo;
  v17 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v7,
    Method_TerminalSceneComponent___c__DisplayClass190_0__Fadein_MapDisp_Load_b__0__,
    0LL);
  if ( !mTitleInfo )
    goto LABEL_38;
  TitleInfoControl__SetActiveEventInfo(mTitleInfo, v13, 32, v17, v18);
}


void __fastcall TerminalSceneComponent__Fadein_MapDisp_Start(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass191_0_o *v7; // x20
  __int64 Instance; // x0
  _BOOL8 v9; // x1
  struct System_Action_o **p_end_act; // x21
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct WarEntity_o **p_war_dat; // x22
  struct ScrTerminalMap_o *v13; // x8
  MapEntity_o *v14; // x23
  System_String_o *ActiveStateName; // x24
  const MethodInfo *v16; // x4
  const MethodInfo *v17; // x2
  System_String_o *PrioredBgmName; // x0
  const MethodInfo *v19; // x2
  TerminalPramsManager_c *v20; // x0
  const MethodInfo *v21; // x2
  TitleInfoControl_o *mTitleInfo; // x23
  const MethodInfo *v23; // x3
  struct ScrTerminalMap_o *v24; // x8
  const MethodInfo *v25; // x2
  TitleInfoControl_o *v26; // x23
  const MethodInfo *v27; // x3
  struct ScrTerminalListTop_o *mTerminalList; // x8
  TerminalPramsManager_c *v29; // x0
  TerminalSceneComponent___c__DisplayClass191_1_o *v30; // x21
  Il2CppObject **p_CS___8__locals1; // x22
  __int64 v32; // x8
  __int64 v33; // x8
  __int64 v34; // x8
  __int64 v35; // x8
  __int64 v36; // x8
  __int64 v37; // x8
  __int64 v38; // x0
  Il2CppObject *v39; // x24
  System_Action_Action__array *v40; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v41; // x23
  Il2CppObject *v42; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v43; // x22
  TerminalSceneComponent___c_c *v44; // x0
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__191_6; // x22
  Il2CppObject *v47; // x23
  struct TerminalSceneComponent___c_StaticFields *v48; // x0
  System_Action_Action__o *v49; // x8
  Il2CppObject *v50; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v51; // x22
  ActionChain_o *v52; // x22
  __int64 v53; // x20
  System_Action_o *v54; // x23
  ChainableActionBase_o *v55; // x0
  System_Action_array *v56; // x1
  int32_t eventId; // w21
  System_Action_o *v58; // x22
  const MethodInfo *v59; // x3
  System_Action_Action__array *v60; // x22
  Il2CppObject *v61; // x24
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v62; // x23
  TerminalSceneComponent___c_c *v63; // x0
  struct TerminalSceneComponent___c_StaticFields *v64; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__191_0; // x23
  Il2CppObject *v66; // x24
  struct TerminalSceneComponent___c_StaticFields *v67; // x0
  System_Action_Action__o *v68; // x8
  TerminalSceneComponent___c_c *v69; // x0
  struct TerminalSceneComponent___c_StaticFields *v70; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__191_1; // x23
  Il2CppObject *v72; // x24
  struct TerminalSceneComponent___c_StaticFields *v73; // x0
  System_Action_Action__o *v74; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v75; // x23
  ActionChain_o *v76; // x20
  System_Action_o *v77; // x21
  System_Action_array *v78; // x22
  __int64 v79; // x0
  __int64 v80; // x0

  if ( (byte_42AC64E & 1) == 0 )
  {
    sub_B52984(&ActionChain_TypeInfo);
    sub_B52984(&System_Action___TypeInfo);
    sub_B52984(&System_Action_Action____TypeInfo);
    sub_B52984(&Method_System_Action_Action___ctor__);
    sub_B52984(&System_Action_Action__TypeInfo);
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_CommonUI_StartLoginMessages__);
    sub_B52984(&Method_QuestAfterAction_Play__);
    sub_B52984(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    sub_B52984(&TutorialFlag_TypeInfo);
    sub_B52984(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__191_0__);
    sub_B52984(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__191_1__);
    sub_B52984(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__191_6__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass191_0__Fadein_MapDisp_Start_b__2__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass191_0__Fadein_MapDisp_Start_b__3__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass191_0__Fadein_MapDisp_Start_b__4__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass191_0__Fadein_MapDisp_Start_b__5__);
    sub_B52984(&TerminalSceneComponent___c__DisplayClass191_0_TypeInfo);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass191_1__Fadein_MapDisp_Start_b__7__);
    sub_B52984(&TerminalSceneComponent___c__DisplayClass191_1_TypeInfo);
    sub_B52984(&TerminalSceneComponent___c_TypeInfo);
    sub_B52984(&StringLiteral_2955/*"CAPTER INIT"*/);
    sub_B52984(&StringLiteral_2954/*"CAPTER CREATE"*/);
    sub_B52984(&StringLiteral_2956/*"CAPTER WAIT"*/);
    byte_42AC64E = 1;
  }
  v7 = (TerminalSceneComponent___c__DisplayClass191_0_o *)sub_B52A54(TerminalSceneComponent___c__DisplayClass191_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass191_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_206;
  v7->fields.__4__this = this;
  sub_B52920(&v7->fields);
  v7->fields.end_act = end_act;
  p_end_act = &v7->fields.end_act;
  v7->fields.fade_time = fade_time;
  sub_B52920(&v7->fields.end_act);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_206;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_206;
  v7->fields.war_dat = (struct WarEntity_o *)mTerminalMap->fields.mMapEnt;
  p_war_dat = &v7->fields.war_dat;
  sub_B52920(&v7->fields.war_dat);
  v13 = this->fields.mTerminalMap;
  if ( !v13 )
    goto LABEL_206;
  Instance = (__int64)this->fields.mTerminalList;
  if ( !Instance )
    goto LABEL_206;
  v14 = *(MapEntity_o **)&v13->fields.requestedMapId;
  Instance = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_206;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)Instance, 0LL);
  v9 = System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_2954/*"CAPTER CREATE"*/, 0LL)
    || System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_2955/*"CAPTER INIT"*/, 0LL)
    || System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_2956/*"CAPTER WAIT"*/, 0LL);
  Instance = (__int64)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_206;
  TitleInfoControl__setBackBtnSprite_18269200((TitleInfoControl_o *)Instance, v9, 0, 0, v16);
  Instance = (__int64)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_206;
  TitleInfoControl__FrameIn((TitleInfoControl_o *)Instance, 0, v17);
  MainMenuBar__FrameIn(0, 0LL);
  Instance = (__int64)this->fields.mPlayerStatus;
  if ( !Instance )
    goto LABEL_206;
  ScrPlayerStatus__FrameIn((ScrPlayerStatus_o *)Instance, 0, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_206;
  if ( *(_BYTE *)(Instance + 177) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__stopBgm(0LL);
  }
  else
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42AC2CF )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC2CF = 1;
    }
    Instance = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !*(_BYTE *)(*(_QWORD *)(Instance + 184) + 103LL) )
    {
      if ( !v14 )
        goto LABEL_206;
      PrioredBgmName = MapEntity__GetPrioredBgmName(v14, 0LL);
      TerminalSceneComponent__playBgm(this, PrioredBgmName, v19);
    }
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2CF )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2CF = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v20 = TerminalPramsManager_TypeInfo;
  }
  if ( v20->static_fields->_IsPlayScriptWithMap_k__BackingField )
  {
    Instance = (__int64)this->fields.mTerminalMap;
    if ( !Instance )
      goto LABEL_206;
    ScrTerminalMap__AllMaskStart((ScrTerminalMap_o *)Instance, 0, 1, 0LL);
    MainMenuBar__FrameOut(0, 0LL);
    mTitleInfo = this->fields.mTitleInfo;
    if ( !mTitleInfo )
      goto LABEL_206;
    TitleInfoControl__SetDispChangeBtn(this->fields.mTitleInfo, 0, v21);
    TitleInfoControl__SlideFrame(mTitleInfo, 0, 0, v23);
    Instance = (__int64)this->fields.mPlayerStatus;
    if ( !Instance )
      goto LABEL_206;
    ScrPlayerStatus__FrameOut((ScrPlayerStatus_o *)Instance, 1, 0LL);
    v20 = TerminalPramsManager_TypeInfo;
  }
  if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v20);
  if ( !byte_42AC2B4 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2B4 = 1;
  }
  Instance = (__int64)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(Instance + 184) + 102LL) )
  {
    if ( (*(_BYTE *)(Instance + 307) & 4) != 0 && !*(_DWORD *)(Instance + 224) )
      j_il2cpp_runtime_class_init_0(Instance);
    if ( !byte_42AC2B3 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC2B3 = 1;
    }
    Instance = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( *(_BYTE *)(*(_QWORD *)(Instance + 184) + 105LL) )
    {
      v24 = this->fields.mTerminalMap;
      if ( !v24 )
        goto LABEL_206;
      Instance = (__int64)v24->fields.allMaskObj;
      if ( !Instance )
        goto LABEL_206;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      MainMenuBar__FrameOut(0, 0LL);
      v26 = this->fields.mTitleInfo;
      if ( !v26 )
        goto LABEL_206;
      TitleInfoControl__SetDispChangeBtn(this->fields.mTitleInfo, 0, v25);
      TitleInfoControl__SlideFrame(v26, 0, 0, v27);
      Instance = (__int64)this->fields.mPlayerStatus;
      if ( !Instance )
        goto LABEL_206;
      ScrPlayerStatus__FrameOut((ScrPlayerStatus_o *)Instance, 1, 0LL);
      mTerminalList = this->fields.mTerminalList;
      if ( !mTerminalList )
        goto LABEL_206;
      Instance = (__int64)mTerminalList->fields.mQuestBoardListViewManager;
      if ( !Instance )
        goto LABEL_206;
      QuestBoardListViewManager__SetMode((QuestBoardListViewManager_o *)Instance, 4, 0LL, 0, 0, 0LL);
      Instance = (__int64)TerminalPramsManager_TypeInfo;
    }
  }
  if ( (*(_BYTE *)(Instance + 307) & 4) != 0 && !*(_DWORD *)(Instance + 224) )
    j_il2cpp_runtime_class_init_0(Instance);
  if ( !byte_42AC2B3 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2B3 = 1;
  }
  v29 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v29 = TerminalPramsManager_TypeInfo;
  }
  if ( v29->static_fields->_IsScriptDisp_k__BackingField )
    goto LABEL_167;
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v29);
  if ( !byte_42AC2B4 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2B4 = 1;
  }
  Instance = (__int64)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(Instance + 184) + 102LL) )
  {
    v30 = (TerminalSceneComponent___c__DisplayClass191_1_o *)sub_B52A54(TerminalSceneComponent___c__DisplayClass191_1_TypeInfo);
    TerminalSceneComponent___c__DisplayClass191_1___ctor(v30, 0LL);
    if ( v30 )
    {
      v30->fields.CS___8__locals1 = v7;
      p_CS___8__locals1 = (Il2CppObject **)&v30->fields.CS___8__locals1;
      sub_B52920(&v30->fields.CS___8__locals1);
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_42AC2A0 )
      {
        sub_B52984(&TerminalSceneComponent_TypeInfo);
        byte_42AC2A0 = 1;
      }
      Instance = (__int64)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v32 = **(_QWORD **)(Instance + 184);
      if ( v32 )
      {
        v33 = *(_QWORD *)(v32 + 256);
        if ( v33 )
        {
          Instance = *(_QWORD *)(v33 + 528);
          if ( Instance )
          {
            v30->fields.oldActive = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
            Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
            if ( Instance )
            {
              QuestAfterAction__Init((QuestAfterAction_o *)Instance, 0LL);
              Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
              if ( Instance )
              {
                QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)Instance, 1, 0LL);
                Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                if ( Instance )
                {
                  if ( QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0LL) )
                  {
                    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    }
                    if ( !byte_42AC2A0 )
                    {
                      sub_B52984(&TerminalSceneComponent_TypeInfo);
                      byte_42AC2A0 = 1;
                    }
                    Instance = (__int64)TerminalSceneComponent_TypeInfo;
                    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                      Instance = (__int64)TerminalSceneComponent_TypeInfo;
                    }
                    v34 = **(_QWORD **)(Instance + 184);
                    if ( !v34 )
                      goto LABEL_206;
                    v35 = *(_QWORD *)(v34 + 256);
                    if ( !v35 )
                      goto LABEL_206;
                    Instance = *(_QWORD *)(v35 + 528);
                    if ( !Instance )
                      goto LABEL_206;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                  }
                  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  }
                  if ( !byte_42AC2A0 )
                  {
                    sub_B52984(&TerminalSceneComponent_TypeInfo);
                    byte_42AC2A0 = 1;
                  }
                  Instance = (__int64)TerminalSceneComponent_TypeInfo;
                  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    Instance = (__int64)TerminalSceneComponent_TypeInfo;
                  }
                  v36 = **(_QWORD **)(Instance + 184);
                  if ( v36 )
                  {
                    v37 = *(_QWORD *)(v36 + 256);
                    if ( v37 )
                    {
                      Instance = *(_QWORD *)(v37 + 528);
                      if ( Instance )
                      {
                        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
                        {
                          Instance = (__int64)this->fields.mTerminalMap;
                          if ( !Instance )
                            goto LABEL_206;
                          ScrTerminalMap__AllMaskStart((ScrTerminalMap_o *)Instance, 0, 1, 0LL);
                        }
                        v38 = sub_B5299C(System_Action_Action____TypeInfo, 4LL);
                        v39 = *p_CS___8__locals1;
                        v40 = (System_Action_Action__array *)v38;
                        v41 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo);
                        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                          v41,
                          v39,
                          Method_TerminalSceneComponent___c__DisplayClass191_0__Fadein_MapDisp_Start_b__4__,
                          (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__);
                        if ( v40 )
                        {
                          if ( !v41 || (Instance = sub_B52A44(v41, v40->obj.klass->_1.element_class)) != 0 )
                          {
                            if ( !v40->max_length )
                              goto LABEL_207;
                            v40->m_Items[0] = (System_Action_Action__o *)v41;
                            sub_B52920(v40->m_Items);
                            v42 = *p_CS___8__locals1;
                            v43 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo);
                            System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                              v43,
                              v42,
                              Method_TerminalSceneComponent___c__DisplayClass191_0__Fadein_MapDisp_Start_b__5__,
                              (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__);
                            if ( !v43 || (Instance = sub_B52A44(v43, v40->obj.klass->_1.element_class)) != 0 )
                            {
                              if ( v40->max_length <= 1 )
                                goto LABEL_207;
                              v40->m_Items[1] = (System_Action_Action__o *)v43;
                              sub_B52920(&v40->m_Items[1]);
                              v44 = TerminalSceneComponent___c_TypeInfo;
                              if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
                                v44 = TerminalSceneComponent___c_TypeInfo;
                              }
                              static_fields = v44->static_fields;
                              _9__191_6 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__191_6;
                              if ( _9__191_6 )
                                goto LABEL_146;
                              if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(v44);
                                static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
                              }
                              v47 = (Il2CppObject *)static_fields->__9;
                              _9__191_6 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo);
                              System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                                _9__191_6,
                                v47,
                                Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__191_6__,
                                (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__);
                              v48 = TerminalSceneComponent___c_TypeInfo->static_fields;
                              v48->__9__191_6 = (struct System_Action_Action__o *)_9__191_6;
                              sub_B52920(&v48->__9__191_6);
                              if ( _9__191_6 )
                              {
LABEL_146:
                                Instance = sub_B52A44(_9__191_6, v40->obj.klass->_1.element_class);
                                v49 = (System_Action_Action__o *)_9__191_6;
                                if ( !Instance )
                                  goto LABEL_208;
                              }
                              else
                              {
                                v49 = 0LL;
                              }
                              if ( v40->max_length <= 2 )
                                goto LABEL_207;
                              v40->m_Items[2] = v49;
                              sub_B52920(&v40->m_Items[2]);
                              v50 = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                              v51 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo);
                              System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                                v51,
                                v50,
                                Method_QuestAfterAction_Play__,
                                (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__);
                              if ( !v51 || (Instance = sub_B52A44(v51, v40->obj.klass->_1.element_class)) != 0 )
                              {
                                if ( v40->max_length <= 3 )
                                  goto LABEL_207;
                                v40->m_Items[3] = (System_Action_Action__o *)v51;
                                sub_B52920(&v40->m_Items[3]);
                                v52 = (ActionChain_o *)sub_B52A54(ActionChain_TypeInfo);
                                ActionChain___ctor_21209932(v52, v40, 0LL);
                                v53 = sub_B5299C(System_Action___TypeInfo, 1LL);
                                v54 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                                System_Action___ctor(
                                  v54,
                                  (Il2CppObject *)v30,
                                  Method_TerminalSceneComponent___c__DisplayClass191_1__Fadein_MapDisp_Start_b__7__,
                                  0LL);
                                if ( !v53 )
                                  goto LABEL_206;
                                if ( !v54 || (Instance = sub_B52A44(v54, *(_QWORD *)(*(_QWORD *)v53 + 64LL))) != 0 )
                                {
                                  if ( *(_DWORD *)(v53 + 24) )
                                  {
                                    *(_QWORD *)(v53 + 32) = v54;
                                    sub_B52920(v53 + 32);
                                    if ( !v52 )
                                      goto LABEL_206;
                                    v55 = (ChainableActionBase_o *)v52;
                                    v56 = (System_Action_array *)v53;
                                    goto LABEL_157;
                                  }
LABEL_207:
                                  v79 = sub_B52A88(Instance);
                                  sub_B52A28(v79, 0LL);
                                }
                              }
                            }
                          }
                          goto LABEL_208;
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
LABEL_206:
    sub_B52A5C(Instance, v9);
  }
  if ( this->fields.mIsStart_LoginBonusWhiteBg )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    Instance = TutorialFlag__Get_29217932(102, 0LL);
    if ( (Instance & 1) != 0 && !this->fields.isTutorialAfter )
    {
      this->fields.mIsStart_LoginBonusWhiteBg = 0;
      Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetupLoginResultData((CommonUI_o *)Instance, 0LL, 0LL);
        v60 = (System_Action_Action__array *)sub_B5299C(System_Action_Action____TypeInfo, 4LL);
        v61 = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v62 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v62,
          v61,
          Method_CommonUI_StartLoginMessages__,
          (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__);
        if ( v60 )
        {
          if ( v62 )
          {
            Instance = sub_B52A44(v62, v60->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_208;
          }
          if ( !v60->max_length )
            goto LABEL_207;
          v60->m_Items[0] = (System_Action_Action__o *)v62;
          sub_B52920(v60->m_Items);
          v63 = TerminalSceneComponent___c_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
            v63 = TerminalSceneComponent___c_TypeInfo;
          }
          v64 = v63->static_fields;
          _9__191_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v64->__9__191_0;
          if ( _9__191_0 )
            goto LABEL_183;
          if ( (BYTE3(v63->vtable._0_Equals.methodPtr) & 4) != 0 && !v63->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v63);
            v64 = TerminalSceneComponent___c_TypeInfo->static_fields;
          }
          v66 = (Il2CppObject *)v64->__9;
          _9__191_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            _9__191_0,
            v66,
            Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__191_0__,
            (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__);
          v67 = TerminalSceneComponent___c_TypeInfo->static_fields;
          v67->__9__191_0 = (struct System_Action_Action__o *)_9__191_0;
          sub_B52920(&v67->__9__191_0);
          if ( _9__191_0 )
          {
LABEL_183:
            Instance = sub_B52A44(_9__191_0, v60->obj.klass->_1.element_class);
            v68 = (System_Action_Action__o *)_9__191_0;
            if ( !Instance )
              goto LABEL_208;
          }
          else
          {
            v68 = 0LL;
          }
          if ( v60->max_length <= 1 )
            goto LABEL_207;
          v60->m_Items[1] = v68;
          sub_B52920(&v60->m_Items[1]);
          v69 = TerminalSceneComponent___c_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
            v69 = TerminalSceneComponent___c_TypeInfo;
          }
          v70 = v69->static_fields;
          _9__191_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v70->__9__191_1;
          if ( _9__191_1 )
            goto LABEL_193;
          if ( (BYTE3(v69->vtable._0_Equals.methodPtr) & 4) != 0 && !v69->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v69);
            v70 = TerminalSceneComponent___c_TypeInfo->static_fields;
          }
          v72 = (Il2CppObject *)v70->__9;
          _9__191_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            _9__191_1,
            v72,
            Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__191_1__,
            (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__);
          v73 = TerminalSceneComponent___c_TypeInfo->static_fields;
          v73->__9__191_1 = (struct System_Action_Action__o *)_9__191_1;
          sub_B52920(&v73->__9__191_1);
          if ( _9__191_1 )
          {
LABEL_193:
            Instance = sub_B52A44(_9__191_1, v60->obj.klass->_1.element_class);
            v74 = (System_Action_Action__o *)_9__191_1;
            if ( !Instance )
              goto LABEL_208;
          }
          else
          {
            v74 = 0LL;
          }
          if ( v60->max_length <= 2 )
            goto LABEL_207;
          v60->m_Items[2] = v74;
          sub_B52920(&v60->m_Items[2]);
          v75 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            v75,
            (Il2CppObject *)v7,
            Method_TerminalSceneComponent___c__DisplayClass191_0__Fadein_MapDisp_Start_b__2__,
            (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__);
          if ( v75 )
          {
            Instance = sub_B52A44(v75, v60->obj.klass->_1.element_class);
            if ( !Instance )
            {
LABEL_208:
              v80 = sub_B52A7C();
              sub_B52A28(v80, 0LL);
            }
          }
          if ( v60->max_length <= 3 )
            goto LABEL_207;
          v60->m_Items[3] = (System_Action_Action__o *)v75;
          sub_B52920(&v60->m_Items[3]);
          v76 = (ActionChain_o *)sub_B52A54(ActionChain_TypeInfo);
          ActionChain___ctor_21209932(v76, v60, 0LL);
          Instance = sub_B5299C(System_Action___TypeInfo, 1LL);
          if ( Instance )
          {
            v77 = *p_end_act;
            v78 = (System_Action_array *)Instance;
            if ( v77 )
            {
              Instance = sub_B52A44(v77, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
              if ( !Instance )
                goto LABEL_208;
            }
            if ( !v78->max_length )
              goto LABEL_207;
            v78->m_Items[0] = v77;
            sub_B52920(v78->m_Items);
            if ( v76 )
            {
              v55 = (ChainableActionBase_o *)v76;
              v56 = v78;
LABEL_157:
              Instance = (__int64)ChainableActionBase__Final(v55, v56, 0LL);
              if ( !Instance )
                goto LABEL_206;
              ChainableActionBase__Execute((ChainableActionBase_o *)Instance, 0LL);
              goto LABEL_167;
            }
          }
        }
      }
      goto LABEL_206;
    }
  }
  if ( !*p_war_dat )
    goto LABEL_206;
  eventId = (*p_war_dat)->fields.eventId;
  v58 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v58,
    (Il2CppObject *)v7,
    Method_TerminalSceneComponent___c__DisplayClass191_0__Fadein_MapDisp_Start_b__3__,
    0LL);
  TerminalSceneComponent__StartEventDailyPoint(this, eventId, v58, v59);
LABEL_167:
  Instance = (__int64)this->fields.mTerminalMap;
  if ( !Instance )
    goto LABEL_206;
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

  if ( (byte_42AC649 & 1) == 0 )
  {
    sub_B52984(&AvalonSceneManager_TypeInfo);
    byte_42AC649 = 1;
  }
  v6 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v6 = AvalonSceneManager_TypeInfo;
  }
  v7 = TerminalSceneComponent__coFadein_WorldDisp(this, v6->static_fields->DEFAULT_FADE_TIME, end_act, 1, v3);
  UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
}


void __fastcall TerminalSceneComponent__Fadein_WorldDisp_18263780(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  System_Collections_IEnumerator_o *v6; // x1

  v6 = TerminalSceneComponent__coFadein_WorldDisp(this, fade_time, end_act, 1, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
}


UserServantEntity_o *__fastcall TerminalSceneComponent__GetNextStandServant(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_array *mStandSvtDatas; // x11
  __int64 v3; // x10
  int v4; // w9
  int32_t mStandSvtIdx; // w8
  int32_t v6; // w8
  UserServantEntity_o *v7; // x8
  __int64 v9; // x0

  mStandSvtDatas = this->fields.mStandSvtDatas;
  if ( !mStandSvtDatas )
    sub_B52A5C(this, method);
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
      this->fields.mStandSvtIdx = mStandSvtIdx + 1;
      if ( mStandSvtIdx + 1 < (signed int)mStandSvtDatas->max_length )
        v6 = mStandSvtIdx + 1;
      else
        v6 = 0;
      this->fields.mStandSvtIdx = v6;
      v3 = *(_QWORD *)&mStandSvtDatas->max_length;
      if ( v6 >= (unsigned int)v3 )
      {
        v9 = sub_B52A88(this);
        sub_B52A28(v9, 0LL);
      }
      v7 = mStandSvtDatas->m_Items[v6];
      if ( v7 )
        break;
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

  if ( (byte_42AC67B & 1) == 0 )
  {
    sub_B52984(&string_TypeInfo);
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AC67B = 1;
  }
  if ( skinType == 4 )
  {
    v5 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v5 = TerminalSceneComponent_TypeInfo;
    }
    OVERWRITE_COMMON_BG_TYPE2_KEY = v5->static_fields->OVERWRITE_COMMON_BG_TYPE2_KEY;
    return UnityEngine_PlayerPrefs__GetString_35644948(OVERWRITE_COMMON_BG_TYPE2_KEY, 0LL);
  }
  if ( skinType == 2 )
  {
    v3 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v3 = TerminalSceneComponent_TypeInfo;
    }
    OVERWRITE_COMMON_BG_TYPE2_KEY = v3->static_fields->OVERWRITE_COMMON_BG_TYPE1_KEY;
    return UnityEngine_PlayerPrefs__GetString_35644948(OVERWRITE_COMMON_BG_TYPE2_KEY, 0LL);
  }
  return string_TypeInfo->static_fields->Empty;
}


int32_t __fastcall TerminalSceneComponent__GetState(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_o *v2; // x19
  struct CStateManager_TerminalSceneComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_42AC66A & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_B52984(&Method_CStateManager_TerminalSceneComponent__getState__);
    byte_42AC66A = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B52A5C(this, method);
  return mFSM->fields.m_state;
}


void __fastcall TerminalSceneComponent__InitLighting(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  const MethodInfo *v4; // x2

  if ( (byte_42AC679 & 1) == 0 )
  {
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AC679 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
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
  void *Instance; // x0
  __int64 v5; // x1
  WarEntity_o *v6; // x0
  WarEntity_o *v7; // x19
  int v8; // w8
  __int64 v9; // x9
  int *v10; // x11

  if ( (byte_42AC652 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_MapMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_WarMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AC652 = 1;
  }
  if ( !eventId )
    return 1;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_19;
  v6 = WarMaster__getByEventId((WarMaster_o *)Instance, eventId, 0LL);
  if ( !v6 )
    return 1;
  v7 = v6;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_MapMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = MapMaster__getList((MapMaster_o *)Instance, v7->fields.id, 0LL);
  if ( !Instance )
    goto LABEL_19;
  v8 = *((_DWORD *)Instance + 6);
  if ( v8 >= 1 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      v10 = (int *)*((_QWORD *)Instance + v9 + 4);
      if ( !v10 )
        break;
      if ( v10[6] >= 1 && v10[7] >= 1 && v10[8] > 0 )
        return 1;
      if ( (int)++v9 >= v8 )
        return 0;
    }
LABEL_19:
    sub_B52A5C(Instance, v5);
  }
  return 0;
}


bool __fastcall TerminalSceneComponent__IsMapActive(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalMap_o *mTerminalMap; // x8

  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap || (this = (TerminalSceneComponent_o *)mTerminalMap->fields.mapButtonGrid) == 0LL )
    sub_B52A5C(this, method);
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
}


bool __fastcall TerminalSceneComponent__IsMapTouchEnabled(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *mTerminalMap; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  System_String_o *v5; // x20

  if ( (byte_42AC656 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B52984(&StringLiteral_8973/*"Map Touch Enable"*/);
    byte_42AC656 = 1;
  }
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_57;
  mTerminalMap = (ScrTerminalMap_o *)ScrTerminalMap__mfGetMyFsmP(mTerminalMap, 0LL);
  if ( !mTerminalMap )
    goto LABEL_57;
  mTerminalMap = (ScrTerminalMap_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)mTerminalMap, 0LL);
  if ( this->fields.mTutorialKind )
    return 0;
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_57;
  v5 = (System_String_o *)mTerminalMap;
  mTerminalMap = (ScrTerminalMap_o *)mTerminalList->fields.mActionBgColl;
  if ( !mTerminalMap )
    goto LABEL_57;
  mTerminalMap = (ScrTerminalMap_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mTerminalMap, 0LL);
  if ( !mTerminalMap )
    goto LABEL_57;
  mTerminalMap = (ScrTerminalMap_o *)UnityEngine_GameObject__get_activeSelf(
                                       (UnityEngine_GameObject_o *)mTerminalMap,
                                       0LL);
  if ( ((unsigned __int8)mTerminalMap & 1) != 0 )
    return 0;
  if ( !v5 )
    goto LABEL_57;
  if ( (System_String__IndexOf_44640664(v5, (System_String_o *)StringLiteral_8973/*"Map Touch Enable"*/, 0LL) & 0x80000000) != 0
    || MainMenuBar__get_IsEnableOutSideCollider(0LL) )
  {
    return 0;
  }
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_57;
  if ( CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_57;
  if ( CommonUI__IsActive_ApRecvDlgComp((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_57;
  if ( CommonUI__IsActive_EventItemSelectDlgComp((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_57;
  if ( CommonUI__IsActive_CommonConfirmDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_57;
  if ( CommonUI__IsActive_NotifiDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_57;
  if ( CommonUI__IsActive_TutorialBigDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_57;
  if ( CommonUI__IsActive_MasterMission((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_57;
  if ( CommonUI__IsActive_MasterProfile((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_57;
  if ( CommonUI__IsActive_MissionListDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_57;
  if ( CommonUI__IsActive_AssistEffectConfirmDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_57;
  if ( CommonUI__IsActive_CommandAssistConfirmDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_57;
  if ( CommonUI__IsActive_AchievementExchangeConditionsDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_57;
  if ( CommonUI__IsActive_SvtFrameShortDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_57;
  if ( CommonUI__isBusyDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)this->fields.mPlayerStatus;
  if ( !mTerminalMap )
    goto LABEL_57;
  if ( BYTE4(mTerminalMap[1].fields._currentMapTexture_k__BackingField)
    || ScrPlayerStatus__IsCommandSpellActive((ScrPlayerStatus_o *)mTerminalMap, 0LL) )
  {
    return 0;
  }
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_57;
  if ( QuestAfterAction__IsPlaying((QuestAfterAction_o *)mTerminalMap, 0LL) )
    return 0;
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  mTerminalMap = (ScrTerminalMap_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !mTerminalMap )
LABEL_57:
    sub_B52A5C(mTerminalMap, method);
  if ( MissionNotifyManager__IsPress((MissionNotifyManager_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)this->fields.mTitleInfo;
  if ( !mTerminalMap )
    goto LABEL_57;
  if ( !TitleInfoControl__IsTouchEnable((TitleInfoControl_o *)mTerminalMap, method) )
    return 0;
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_57;
  return !ScrTerminalMap__IsActive_SpotCooltimeRewardDialog(mTerminalMap, 0LL);
}


bool __fastcall TerminalSceneComponent__IsNotDisplayCostume(
        TerminalSceneComponent_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  if ( !shopEntity )
    sub_B52A5C(this, 0LL);
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
  QuestTree_o *v7; // x20
  TerminalPramsManager_c *v8; // x0
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v10; // x20
  int64_t targetId; // x19
  const MethodInfo *v12; // x2
  TerminalPramsManager_c *v13; // x0

  if ( (byte_42AC666 & 1) == 0 )
  {
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B52984(&SingletonTemplate_QuestTree__TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC666 = 1;
  }
  IsWarStartAnim_k__BackingField = this->fields._IsWarStartAnim_k__BackingField;
  v4 = this->fields.mTutorialKind == 1;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  IsWarStartActionSkip = TerminalPramsManager__get_Debug_IsWarStartActionSkip(0LL);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v7 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2A2 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2A2 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  if ( !v7 )
    sub_B52A5C(v8, v6);
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(v7, v8->static_fields->_WarId_k__BackingField, 0LL);
  if ( !WarEntityByWarID )
    return 0;
  v10 = WarEntityByWarID;
  if ( WarEntity__IsMainInterlude(WarEntityByWarID, 0LL)
    && WarEntity__IsPurchasedByRarePrism(v10, 0LL)
    && WarEntity__IsStartTypeQuest(v10, 0LL) )
  {
    targetId = v10->fields.targetId;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsQuestPhaseClear_26043860(targetId, 1, -1, 0, 0LL) )
      return 0;
  }
  else if ( !IsWarStartAnim_k__BackingField && !v4 || IsWarStartActionSkip )
  {
    return 0;
  }
  if ( !WarEntity__GetStartType(v10, 0LL) )
    return 0;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2A2 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2A2 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_42AC630 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1758/*"AREA WAIT"*/);
    byte_42AC630 = 1;
  }
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList
    || (mTerminalList = (ScrTerminalListTop_o *)ScrTerminalListTop__mfGetMyFsmP(mTerminalList, 0LL)) == 0LL
    || (mTerminalList = (ScrTerminalListTop_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)mTerminalList, 0LL)) == 0LL )
  {
    sub_B52A5C(mTerminalList, method);
  }
  return System_String__IndexOf_44640664((System_String_o *)mTerminalList, (System_String_o *)StringLiteral_1758/*"AREA WAIT"*/, 0LL) >= 0;
}


System_Collections_IEnumerator_o *__fastcall TerminalSceneComponent__LoadAsync(
        TerminalSceneComponent_o *this,
        UserServantEntity_o *usd,
        System_Action_o *callback,
        const MethodInfo *method)
{
  TerminalSceneComponent__LoadAsync_d__171_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_42AC63C & 1) == 0 )
  {
    sub_B52984(&TerminalSceneComponent__LoadAsync_d__171_TypeInfo);
    byte_42AC63C = 1;
  }
  v7 = (TerminalSceneComponent__LoadAsync_d__171_o *)sub_B52A54(TerminalSceneComponent__LoadAsync_d__171_TypeInfo);
  TerminalSceneComponent__LoadAsync_d__171___ctor(v7, 0, 0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  v7->fields.__4__this = this;
  sub_B52920(&v7->fields.__4__this);
  v7->fields.usd = usd;
  sub_B52920(&v7->fields.usd);
  v7->fields.callback = callback;
  sub_B52920(&v7->fields.callback);
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent__LocateDialogToUiRoot(
        TerminalSceneComponent_o *this,
        BaseDialog_o *dialog,
        System_Nullable_Vector3__o localScale,
        const MethodInfo *method)
{
  __int64 v4; // x20
  TerminalSceneComponent_o *v6; // x21
  UnityEngine_Component_o *uiRoot; // x8
  UnityEngine_Transform_o *v8; // x21
  const MethodInfo_217535C *v9; // x2
  float v10; // s0
  float v11; // s1
  float v12; // s2
  float v13; // s8
  float v14; // s9
  float v15; // s10
  System_Nullable_Vector3__o v16; // [xsp+0h] [xbp-50h] BYREF
  System_Nullable_Vector3__o v17; // 0:x0.16
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  v4 = *(_QWORD *)&localScale.fields.value.fields.z;
  v6 = this;
  v16 = localScale;
  if ( (byte_42AC678 & 1) == 0 )
  {
    sub_B52984(&Method_System_Nullable_Vector3__get_HasValue__);
    this = (TerminalSceneComponent_o *)sub_B52984(&Method_System_Nullable_Vector3__get_Value__);
    byte_42AC678 = 1;
  }
  if ( !dialog )
    goto LABEL_11;
  this = (TerminalSceneComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL);
  uiRoot = (UnityEngine_Component_o *)v6->fields.uiRoot;
  if ( !uiRoot )
    goto LABEL_11;
  v8 = (UnityEngine_Transform_o *)this;
  this = (TerminalSceneComponent_o *)UnityEngine_Component__get_transform(uiRoot, 0LL);
  if ( !v8 )
    goto LABEL_11;
  UnityEngine_Transform__SetParent(v8, (UnityEngine_Transform_o *)this, 0LL);
  if ( (v4 & 0xFF00000000LL) != 0 )
  {
    *(_QWORD *)&v17.fields.value.fields.x = &v16;
    *(_QWORD *)&v17.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
    *(UnityEngine_Vector3_o *)&v10 = System_Nullable_Vector3___get_Value(v17, v9);
  }
  else
  {
    *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Vector3__get_one(0LL);
  }
  v13 = v10;
  v14 = v11;
  v15 = v12;
  this = (TerminalSceneComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL);
  if ( !this )
LABEL_11:
    sub_B52A5C(this, dialog);
  v18.fields.x = v13;
  v18.fields.y = v14;
  v18.fields.z = v15;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v18, 0LL);
}


void __fastcall TerminalSceneComponent__OnCorePress(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct BaseCore_o *mEarthCore; // x0

  mEarthCore = this->fields.mEarthCore;
  if ( !mEarthCore )
    sub_B52A5C(0LL, method);
  ((void (__fastcall *)(struct BaseCore_o *, Il2CppMethodPointer))mEarthCore->klass->vtable._7_OnPress.method)(
    mEarthCore,
    mEarthCore->klass->vtable._8_Setup.methodPtr);
}


void __fastcall TerminalSceneComponent__OnCoreRelease(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  BaseCore_o *mEarthCore; // x0

  mEarthCore = this->fields.mEarthCore;
  if ( !mEarthCore )
    sub_B52A5C(0LL, method);
  BaseCore__OnRelease(mEarthCore, 0LL);
}


void __fastcall TerminalSceneComponent__OnDestroy(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x20
  TerminalSceneComponent_c *v5; // x0
  struct TerminalSceneComponent_StaticFields *static_fields; // x0
  __int64 v7; // x20
  __int64 v8; // x20
  UnityEngine_Object_o *v9; // x20
  struct System_String_o **p_loadEarthAssetName; // x19
  System_String_o *v11; // x20

  if ( (byte_42AC638 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AssetManager__getInstance__);
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AC638 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v3->static_fields->mInstance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mInstance, (UnityEngine_Object_o *)this, 0LL) )
  {
    v5 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v5 = TerminalSceneComponent_TypeInfo;
    }
    static_fields = v5->static_fields;
    static_fields->mInstance = 0LL;
    sub_B52920(static_fields);
    v7 = *((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
      sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 3));
    v8 = **(_QWORD **)(v7 + 192);
    if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
      sub_AEB684(v8);
    v9 = **(UnityEngine_Object_o ***)(v8 + 184);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    p_loadEarthAssetName = &this->fields.loadEarthAssetName;
    if ( UnityEngine_Object__op_Implicit(v9, 0LL) )
    {
      v11 = *p_loadEarthAssetName;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAssetStorage(v11, 0LL);
    }
    *p_loadEarthAssetName = 0LL;
    sub_B52920(p_loadEarthAssetName);
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
  System_String_o *String_35644948; // x24
  System_Char_array *v12; // x0
  System_Char_array *v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x24
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v15; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x24
  TerminalSceneComponent___c_c *v18; // x8
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x9
  System_Func_int__BattleActionData_SideEffectData__o *_9__247_0; // x25
  Il2CppObject *v21; // x26
  struct TerminalSceneComponent___c_StaticFields *v22; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_Collections_Generic_List_TSource__o *v24; // x0
  TerminalSceneComponent___c_c *v25; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x24
  struct TerminalSceneComponent___c_StaticFields *v27; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__247_1; // x25
  Il2CppObject *v29; // x26
  struct TerminalSceneComponent___c_StaticFields *v30; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  TerminalSceneComponent___c_c *v32; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x24
  struct TerminalSceneComponent___c_StaticFields *v34; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__247_2; // x25
  Il2CppObject *v36; // x26
  struct TerminalSceneComponent___c_StaticFields *v37; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v39; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_Collections_Generic_List_TSource__o *v41; // x0
  TerminalSceneComponent___c_c *v42; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x23
  struct TerminalSceneComponent___c_StaticFields *v44; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__247_4; // x24
  Il2CppObject *v46; // x25
  struct TerminalSceneComponent___c_StaticFields *v47; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x23
  CommonUI_o *Instance; // x24
  System_String_o *v51; // x22
  System_Action_o *v52; // x4
  TerminalSceneComponent___c_c *v53; // x0
  struct TerminalSceneComponent___c_StaticFields *v54; // x8
  System_Func_int__BattleActionData_SideEffectData__o *_9__247_5; // x24
  Il2CppObject *v56; // x25
  struct TerminalSceneComponent___c_StaticFields *v57; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x25
  System_String_o *v60; // x0
  TerminalSceneComponent___c_c *v61; // x8
  System_String_o *v62; // x21
  struct TerminalSceneComponent___c_StaticFields *v63; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__247_6; // x26
  Il2CppObject *v65; // x27
  struct TerminalSceneComponent___c_StaticFields *v66; // x0
  Il2CppObject *v67; // x0
  __int64 v68; // x0
  int32_t v69; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_42AC673 & 1) == 0 )
  {
    sub_B52984(&char___TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Select_int__ShopEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_Select_ShopEntity__int___);
    sub_B52984(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_B52984(&Method_System_Linq_Enumerable_Sum_ShopEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToList_ShopEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_ShopEntity___);
    sub_B52984(&Method_System_Func_int__ShopEntity___ctor__);
    sub_B52984(&Method_System_Func_ShopEntity__bool___ctor__);
    sub_B52984(&Method_System_Func_ShopEntity__int___ctor__);
    sub_B52984(&Method_System_Func_string__int___ctor__);
    sub_B52984(&System_Func_string__int__TypeInfo);
    sub_B52984(&System_Func_ShopEntity__int__TypeInfo);
    sub_B52984(&System_Func_ShopEntity__bool__TypeInfo);
    sub_B52984(&System_Func_int__ShopEntity__TypeInfo);
    sub_B52984(&Method_System_Int32_Parse__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_TerminalSceneComponent__OpenExchangeDialogue_b__247_3__);
    sub_B52984(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__247_0__);
    sub_B52984(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__247_1__);
    sub_B52984(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__247_2__);
    sub_B52984(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__247_4__);
    sub_B52984(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__247_5__);
    sub_B52984(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__247_6__);
    sub_B52984(&TerminalSceneComponent___c_TypeInfo);
    sub_B52984(&StringLiteral_19030/*"freeShopIds"*/);
    byte_42AC673 = 1;
  }
  String_35644948 = UnityEngine_PlayerPrefs__GetString_35644948(playerPrefsKey, 0LL);
  v12 = (System_Char_array *)sub_B5299C(char___TypeInfo, 1LL);
  if ( !v12 )
    goto LABEL_70;
  v13 = v12;
  if ( !v12->max_length )
  {
    v68 = sub_B52A88(v12);
    sub_B52A28(v68, 0LL);
  }
  v12->m_Items[2] = 44;
  if ( !String_35644948 )
    goto LABEL_70;
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_35644948, v12, 0LL);
  v15 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_string__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v15,
    0LL,
    Method_System_Int32_Parse__,
    (const MethodInfo_2BC9C68 *)Method_System_Func_string__int___ctor__);
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v14,
                                                               (System_Func_TSource__TResult__o *)v15,
                                                               (const MethodInfo_1B69DA4 *)Method_System_Linq_Enumerable_Select_string__int___);
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                               v16,
                                                               (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
  v18 = TerminalSceneComponent___c_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v18 = TerminalSceneComponent___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__247_0 = (System_Func_int__BattleActionData_SideEffectData__o *)static_fields->__9__247_0;
  if ( !_9__247_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__247_0 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B52A54(System_Func_int__ShopEntity__TypeInfo);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      _9__247_0,
      v21,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__247_0__,
      (const MethodInfo_2BC49BC *)Method_System_Func_int__ShopEntity___ctor__);
    v22 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v22->__9__247_0 = (struct System_Func_int__ShopEntity__o *)_9__247_0;
    sub_B52920(&v22->__9__247_0);
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                               v17,
                                                               (System_Func_TSource__TResult__o *)_9__247_0,
                                                               (const MethodInfo_1B68D9C *)Method_System_Linq_Enumerable_Select_int__ShopEntity___);
  v24 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
          v23,
          (const MethodInfo_1B714E4 *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
  v25 = TerminalSceneComponent___c_TypeInfo;
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)v24;
  if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v25 = TerminalSceneComponent___c_TypeInfo;
  }
  v27 = v25->static_fields;
  _9__247_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v27->__9__247_1;
  if ( !_9__247_1 )
  {
    if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v27 = TerminalSceneComponent___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)v27->__9;
    _9__247_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__247_1,
      v29,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__247_1__,
      (const MethodInfo_2BC90BC *)Method_System_Func_ShopEntity__bool___ctor__);
    v30 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v30->__9__247_1 = (struct System_Func_ShopEntity__bool__o *)_9__247_1;
    sub_B52920(&v30->__9__247_1);
  }
  v31 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v26,
          (System_Func_TSource__bool__o *)_9__247_1,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v32 = TerminalSceneComponent___c_TypeInfo;
  v33 = v31;
  if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v32 = TerminalSceneComponent___c_TypeInfo;
  }
  v34 = v32->static_fields;
  _9__247_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v34->__9__247_2;
  if ( !_9__247_2 )
  {
    if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v34 = TerminalSceneComponent___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)v34->__9;
    _9__247_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__247_2,
      v36,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__247_2__,
      (const MethodInfo_2BC90BC *)Method_System_Func_ShopEntity__bool___ctor__);
    v37 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v37->__9__247_2 = (struct System_Func_ShopEntity__bool__o *)_9__247_2;
    sub_B52920(&v37->__9__247_2);
  }
  v38 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v33,
          (System_Func_TSource__bool__o *)_9__247_2,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v39 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_ShopEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v39,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent__OpenExchangeDialogue_b__247_3__,
    (const MethodInfo_2BC90BC *)Method_System_Func_ShopEntity__bool___ctor__);
  v40 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v38,
          (System_Func_TSource__bool__o *)v39,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v41 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
          v40,
          (const MethodInfo_1B714E4 *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
  v42 = TerminalSceneComponent___c_TypeInfo;
  v43 = (System_Collections_Generic_IEnumerable_TSource__o *)v41;
  if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v42 = TerminalSceneComponent___c_TypeInfo;
  }
  v44 = v42->static_fields;
  _9__247_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v44->__9__247_4;
  if ( !_9__247_4 )
  {
    if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v44 = TerminalSceneComponent___c_TypeInfo->static_fields;
    }
    v46 = (Il2CppObject *)v44->__9;
    _9__247_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_ShopEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__247_4,
      v46,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__247_4__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_ShopEntity__int___ctor__);
    v47 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v47->__9__247_4 = (struct System_Func_ShopEntity__int__o *)_9__247_4;
    sub_B52920(&v47->__9__247_4);
  }
  v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v43,
                                                               (System_Func_TSource__TResult__o *)_9__247_4,
                                                               (const MethodInfo_1B69DA4 *)Method_System_Linq_Enumerable_Select_ShopEntity__int___);
  v12 = (System_Char_array *)System_Linq_Enumerable__ToArray_int_(
                               v48,
                               (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v12 )
    goto LABEL_70;
  v49 = (System_Collections_Generic_IEnumerable_TSource__o *)v12;
  if ( *(_QWORD *)&v12->max_length )
  {
    if ( System_String__op_Equality(playerPrefsKey, (System_String_o *)StringLiteral_19030/*"freeShopIds"*/, 0LL) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v51 = LocalizationManager__Get(localizationKeyForTitle, 0LL);
      v12 = (System_Char_array *)LocalizationManager__Get(localizationKeyForDetail, 0LL);
      v52 = action;
      if ( !Instance )
        goto LABEL_70;
      goto LABEL_68;
    }
    v53 = TerminalSceneComponent___c_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v53 = TerminalSceneComponent___c_TypeInfo;
    }
    v54 = v53->static_fields;
    _9__247_5 = (System_Func_int__BattleActionData_SideEffectData__o *)v54->__9__247_5;
    if ( !_9__247_5 )
    {
      if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v53);
        v54 = TerminalSceneComponent___c_TypeInfo->static_fields;
      }
      v56 = (Il2CppObject *)v54->__9;
      _9__247_5 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B52A54(System_Func_int__ShopEntity__TypeInfo);
      System_Func_int__BattleActionData_SideEffectData____ctor(
        _9__247_5,
        v56,
        Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__247_5__,
        (const MethodInfo_2BC49BC *)Method_System_Func_int__ShopEntity___ctor__);
      v57 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v57->__9__247_5 = (struct System_Func_int__ShopEntity__o *)_9__247_5;
      sub_B52920(&v57->__9__247_5);
    }
    v58 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                                 v49,
                                                                 (System_Func_TSource__TResult__o *)_9__247_5,
                                                                 (const MethodInfo_1B68D9C *)Method_System_Linq_Enumerable_Select_int__ShopEntity___);
    v59 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                 v58,
                                                                 (const MethodInfo_1B714E4 *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v51 = LocalizationManager__Get(localizationKeyForTitle, 0LL);
    v60 = LocalizationManager__Get(localizationKeyForDetail, 0LL);
    v61 = TerminalSceneComponent___c_TypeInfo;
    v62 = v60;
    if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v61 = TerminalSceneComponent___c_TypeInfo;
    }
    v63 = v61->static_fields;
    _9__247_6 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v63->__9__247_6;
    if ( !_9__247_6 )
    {
      if ( (BYTE3(v61->vtable._0_Equals.methodPtr) & 4) != 0 && !v61->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v61);
        v63 = TerminalSceneComponent___c_TypeInfo->static_fields;
      }
      v65 = (Il2CppObject *)v63->__9;
      _9__247_6 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_ShopEntity__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__247_6,
        v65,
        Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__247_6__,
        (const MethodInfo_2BC9C68 *)Method_System_Func_ShopEntity__int___ctor__);
      v66 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v66->__9__247_6 = (struct System_Func_ShopEntity__int__o *)_9__247_6;
      sub_B52920(&v66->__9__247_6);
    }
    v69 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
            v59,
            (System_Func_TSource__int__o *)_9__247_6,
            (const MethodInfo_1B6DB18 *)Method_System_Linq_Enumerable_Sum_ShopEntity___);
    v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69);
    v12 = (System_Char_array *)System_String__Format(v62, v67, 0LL);
    if ( Instance )
    {
      v52 = action;
LABEL_68:
      CommonUI__OpenAchievementExchangeConditionsDialog(
        Instance,
        (System_Int32_array *)v49,
        v51,
        (System_String_o *)v12,
        v52,
        0LL);
      goto LABEL_69;
    }
LABEL_70:
    sub_B52A5C(v12, v13);
  }
  ActionExtensions__Call(action, 0LL);
LABEL_69:
  UnityEngine_PlayerPrefs__DeleteKey(playerPrefsKey, 0LL);
}


void __fastcall TerminalSceneComponent__PlayChapterStart(
        TerminalSceneComponent_o *this,
        TerminalSceneComponent_PlayChapterStartCallback_o *end_act,
        const MethodInfo *method)
{
  WarEntity_o *IsPlayChapterStart; // x0
  __int64 v6; // x1
  QuestTree_o *v7; // x20
  WarEntity_o *v8; // x20
  int32_t StartType; // w0
  BattleScriptRootComponent_TalkScriptInfo_o *v10; // x21
  TerminalPramsManager_c *v11; // x0
  int32_t v12; // w22
  TerminalPramsManager_c *v13; // x0
  int32_t targetId; // w22
  int32_t WarId_k__BackingField; // w23
  TerminalPramsManager_c *v16; // x0
  BalanceConfig_c *v17; // x8
  int32_t v18; // w22
  TerminalSceneComponent_c *v19; // x0
  int64_t v20; // x22
  TerminalPramsManager_c *v21; // x0
  int32_t v22; // w22
  TerminalPramsManager_c *v23; // x0

  if ( (byte_42AC668 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_QuestTree__TypeInfo);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B52984(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AC668 = 1;
  }
  IsPlayChapterStart = (WarEntity_o *)TerminalSceneComponent__IsPlayChapterStart(this, (const MethodInfo *)end_act);
  if ( ((unsigned __int8)IsPlayChapterStart & 1) == 0 )
  {
    if ( end_act )
    {
      TerminalSceneComponent_PlayChapterStartCallback__Invoke(end_act, 0, 0LL);
      return;
    }
    goto LABEL_85;
  }
  this->fields.OnResumeFromChapterStart = end_act;
  sub_B52920(&this->fields.OnResumeFromChapterStart);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v7 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2A2 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2A2 = 1;
  }
  IsPlayChapterStart = (WarEntity_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IsPlayChapterStart = (WarEntity_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v7 )
    goto LABEL_85;
  IsPlayChapterStart = QuestTree__mfGetWarEntityByWarID(
                         v7,
                         *(_DWORD *)(*(_QWORD *)&IsPlayChapterStart[1].fields.parentWarId + 4LL),
                         0LL);
  if ( !IsPlayChapterStart )
    goto LABEL_85;
  v8 = IsPlayChapterStart;
  StartType = WarEntity__GetStartType(IsPlayChapterStart, 0LL);
  if ( StartType == 2 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42AC2A2 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC2A2 = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    targetId = v8->fields.targetId;
    WarId_k__BackingField = v13->static_fields->_WarId_k__BackingField;
    v10 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_B52A54(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    BattleScriptRootComponent_TalkScriptInfo___ctor_20442968(v10, WarId_k__BackingField, targetId, 0, 1, 0, 0, 0, 0LL);
  }
  else
  {
    v10 = 0LL;
    if ( StartType == 1 )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42AC2A2 )
      {
        sub_B52984(&TerminalPramsManager_TypeInfo);
        byte_42AC2A2 = 1;
      }
      v11 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v11 = TerminalPramsManager_TypeInfo;
      }
      v12 = v11->static_fields->_WarId_k__BackingField;
      v10 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_B52A54(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
      BattleScriptRootComponent_TalkScriptInfo___ctor_20442968(v10, v12, 0, 0, 1, 0, 0, 0, 0LL);
    }
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2A2 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2A2 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v17 = BalanceConfig_TypeInfo;
  v18 = v16->static_fields->_WarId_k__BackingField;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  if ( v18 == v17->static_fields->OrdealCallWarId )
  {
    v19 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v19 = TerminalSceneComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v19->static_fields->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY, 1, 0LL);
  }
  if ( WarEntity__HasFlag(v8, 0x8000, 0LL) )
  {
    v20 = v8->fields.targetId;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42AC2A6 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC2A6 = 1;
    }
    v21 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v21 = TerminalPramsManager_TypeInfo;
    }
    v21->static_fields->_QuestId_k__BackingField = v20;
    v22 = v8->fields.targetId;
    if ( !byte_42AC2FB )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      v21 = TerminalPramsManager_TypeInfo;
      byte_42AC2FB = 1;
    }
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = TerminalPramsManager_TypeInfo;
    }
    v21->static_fields->_LastPlayedQuestId_k__BackingField = v22;
    TerminalPramsManager__CheckClearSelectedStoryQuestId(v8->fields.targetId, 0LL);
    TerminalPramsManager__PlayQuestSave_SaveData(0LL);
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    IsPlayChapterStart = (WarEntity_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( IsPlayChapterStart )
    {
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)IsPlayChapterStart, 0LL);
      IsPlayChapterStart = (WarEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( IsPlayChapterStart )
      {
        AvalonSceneManager__changeScene((AvalonSceneManager_o *)IsPlayChapterStart, 38, 2, (Il2CppObject *)v10, 0LL);
        return;
      }
    }
LABEL_85:
    sub_B52A5C(IsPlayChapterStart, v6);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2F8 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2F8 = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  v23->static_fields->meSceneStatus = 3;
  IsPlayChapterStart = (WarEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !IsPlayChapterStart )
    goto LABEL_85;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)IsPlayChapterStart, 38, 2, (Il2CppObject *)v10, 0LL);
}


void __fastcall TerminalSceneComponent__PlayEventTutorial(
        TerminalSceneComponent_o *this,
        System_Action_o *callbakAfter,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass224_0_o *v5; // x20
  UnityEngine_Component_o *EventID; // x0
  __int64 v7; // x1
  TerminalPramsManager_c *v8; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  int32_t v10; // w21
  System_Action_o *v11; // x22
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct WarEntity_o *mWarEnt; // x8

  if ( (byte_42AC669 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass224_0__PlayEventTutorial_b__0__);
    sub_B52984(&TerminalSceneComponent___c__DisplayClass224_0_TypeInfo);
    byte_42AC669 = 1;
  }
  v5 = (TerminalSceneComponent___c__DisplayClass224_0_o *)sub_B52A54(TerminalSceneComponent___c__DisplayClass224_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass224_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_18;
  v5->fields.__4__this = this;
  sub_B52920(&v5->fields);
  v5->fields.callbakAfter = callbakAfter;
  sub_B52920(&v5->fields.callbakAfter);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2A2 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2A2 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  EventID = (UnityEngine_Component_o *)WarMaster__getEventID(v8->static_fields->_WarId_k__BackingField, 0LL);
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_18;
  v10 = (int)EventID;
  EventID = (UnityEngine_Component_o *)mTerminalList->fields.mActionBgColl;
  if ( !EventID
    || (EventID = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(EventID, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EventID, 1, 0LL),
        v11 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent___c__DisplayClass224_0__PlayEventTutorial_b__0__,
          0LL),
        (mTerminalMap = this->fields.mTerminalMap) == 0LL)
    || (mWarEnt = mTerminalMap->fields.mWarEnt) == 0LL )
  {
LABEL_18:
    sub_B52A5C(EventID, v7);
  }
  EventTutorialMaster__CheckTutorial(v10, 1, v11, *(&mWarEnt->fields.id + 1), 0, 0, 0, 0LL);
}


void __fastcall TerminalSceneComponent__PlayRaidTutorial(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent__PlayTutorial(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t v3; // w1

  switch ( this->fields.mTutorialKind )
  {
    case 1:
      v3 = 1;
      goto LABEL_3;
    case 2:
      v3 = 3;
      goto LABEL_3;
    case 3:
      v3 = 5;
      goto LABEL_3;
    case 4:
      v3 = 7;
      goto LABEL_3;
    case 5:
      v3 = 9;
LABEL_3:
      TerminalSceneComponent__SetState(this, v3, v2);
      break;
    default:
      return;
  }
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
    sub_B52A5C(mQuestInformation, method);
  return QuestInformationComponent__isListBuilding(mQuestInformation, 0LL);
}


int32_t __fastcall TerminalSceneComponent__QuestInfoShowing(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct QuestInformationComponent_o *mQuestInformation; // x8

  mQuestInformation = this->fields.mQuestInformation;
  if ( !mQuestInformation )
    sub_B52A5C(this, method);
  return mQuestInformation->fields.settedQuestId;
}


void __fastcall TerminalSceneComponent__RebootToNetworkError(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x19
  System_String_o *v3; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x21
  TerminalSceneComponent___c_c *v7; // x8
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x9
  ErrorDialog_ClickDelegate_o *_9__208_0; // x22
  Il2CppObject *v10; // x23
  struct TerminalSceneComponent___c_StaticFields *v11; // x0

  if ( (byte_42AC65F & 1) == 0 )
  {
    sub_B52984(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_TerminalSceneComponent___c__RebootToNetworkError_b__208_0__);
    sub_B52984(&TerminalSceneComponent___c_TypeInfo);
    sub_B52984(&StringLiteral_13445/*"TERMINAL_NETWORK_ERROR_DIALOG_TITLE"*/);
    sub_B52984(&StringLiteral_13444/*"TERMINAL_NETWORK_ERROR_DIALOG_MESSAGE"*/);
    byte_42AC65F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_13445/*"TERMINAL_NETWORK_ERROR_DIALOG_TITLE"*/, 0LL);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13444/*"TERMINAL_NETWORK_ERROR_DIALOG_MESSAGE"*/, 0LL);
  v6 = v4;
  v7 = TerminalSceneComponent___c_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v7 = TerminalSceneComponent___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__208_0 = static_fields->__9__208_0;
  if ( !_9__208_0 )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__208_0 = (ErrorDialog_ClickDelegate_o *)sub_B52A54(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(
      _9__208_0,
      v10,
      Method_TerminalSceneComponent___c__RebootToNetworkError_b__208_0__,
      0LL);
    v11 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v11->__9__208_0 = _9__208_0;
    sub_B52920(&v11->__9__208_0);
  }
  if ( !Instance )
    sub_B52A5C(v4, v5);
  CommonUI__OpenErrorDialog(Instance, v3, v6, _9__208_0, 1, 0LL);
}


void __fastcall TerminalSceneComponent__SendMessageStartUpAndResume(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20
  TerminalSceneComponent_PlayChapterStartCallback_o *v6; // x0
  struct TerminalSceneComponent_PlayChapterStartCallback_o **p_OnResumeFromChapterStart; // x19
  struct TerminalSceneComponent_PlayChapterStartCallback_o *OnResumeFromChapterStart; // t1

  if ( (byte_42AC63D & 1) == 0 )
  {
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AC63D = 1;
  }
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
  if ( this->fields.isFadeInAfterResumeLoad )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v5 = (CommonUI_o *)Instance;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    }
    if ( !v5 )
      sub_B52A5C(Instance, v4);
    CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
    this->fields.isFadeInAfterResumeLoad = 0;
  }
  OnResumeFromChapterStart = this->fields.OnResumeFromChapterStart;
  p_OnResumeFromChapterStart = &this->fields.OnResumeFromChapterStart;
  v6 = OnResumeFromChapterStart;
  if ( OnResumeFromChapterStart )
  {
    TerminalSceneComponent_PlayChapterStartCallback__Invoke(v6, 1, 0LL);
    *p_OnResumeFromChapterStart = 0LL;
    sub_B52920(p_OnResumeFromChapterStart);
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
    sub_B52A5C(this, isEnable);
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

  if ( (byte_42AC67A & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_5344/*"Directional light"*/);
    byte_42AC67A = 1;
  }
  GameObjectWithLog = (UnityEngine_Object_o *)GameObjectExtensions__FindGameObjectWithLog(
                                                this->fields.mEarthCoreObj,
                                                (System_String_o *)StringLiteral_5344/*"Directional light"*/,
                                                0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(GameObjectWithLog, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !GameObjectWithLog )
      sub_B52A5C(v6, v7);
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

  if ( (byte_42AC647 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    byte_42AC647 = 1;
  }
  mTerminalServant = (UnityEngine_Component_o *)this->fields.mTerminalServant;
  if ( !mTerminalServant
    || (gameObject = UnityEngine_Component__get_gameObject(mTerminalServant, 0LL),
        (mTerminalServant = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL)) == 0LL)
    || (mTerminalServant = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mTerminalServant, 0LL)) == 0LL
    || (mTerminalServant = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)mTerminalServant,
                                                        (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___)) == 0LL )
  {
    sub_B52A5C(mTerminalServant, isDisp);
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
  TerminalSceneComponent___c__DisplayClass168_0_o *v5; // x20
  UnityEngine_Camera_o *mEarthEffCamera; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *mEarthCore; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v10; // x0
  TerminalSceneComponent_c *v11; // x0
  int *v12; // x1
  System_String_o *EARTH_ASSET_NAME; // x21
  System_Int32_c *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  TerminalSceneComponent_c *v17; // x0
  Il2CppObject *v18; // x0
  WebViewManager_o *Instance; // x0
  System_String_o *loadEarthAssetName; // x19
  AssetManager_o *v21; // x21
  AssetLoader_LoadEndDataHandler_o *v22; // x22
  int v23; // [xsp+8h] [xbp-28h] BYREF
  int v24; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42AC63A & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ServantCommentManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass168_0__SetEarthView_b__0__);
    sub_B52984(&TerminalSceneComponent___c__DisplayClass168_0_TypeInfo);
    byte_42AC63A = 1;
  }
  v5 = (TerminalSceneComponent___c__DisplayClass168_0_o *)sub_B52A54(TerminalSceneComponent___c__DisplayClass168_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass168_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_34;
  v5->fields.__4__this = this;
  sub_B52920(&v5->fields);
  v5->fields.callback = callback;
  sub_B52920(&v5->fields.callback);
  mEarthCore = (UnityEngine_Object_o *)this->fields.mEarthCore;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mEarthCore, 0LL, 0LL) )
  {
    ActionExtensions__Call(v5->fields.callback, 0LL);
    return;
  }
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  mEarthEffCamera = (UnityEngine_Camera_o *)ServantCommentManager__GetUiChangeType(0LL);
  if ( !this->fields.mEarthCamera )
    goto LABEL_34;
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
              v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0LL);
              GameObjectExtensions__SetLocalPositionZ(v10, -792.87, 0LL);
              v11 = TerminalSceneComponent_TypeInfo;
              if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                v11 = TerminalSceneComponent_TypeInfo;
              }
              v12 = &v24;
              EARTH_ASSET_NAME = v11->static_fields->EARTH_ASSET_NAME;
              v14 = int_TypeInfo;
              v24 = 2;
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_34:
    sub_B52A5C(mEarthEffCamera, v7);
  }
  UnityEngine_Camera__set_orthographic(this->fields.mEarthCamera, 1, 0LL);
  mEarthEffCamera = this->fields.mEarthEffCamera;
  if ( !mEarthEffCamera )
    goto LABEL_34;
  UnityEngine_Camera__set_orthographic(mEarthEffCamera, 1, 0LL);
  mEarthEffCamera = this->fields.mEarthCamera;
  if ( !mEarthEffCamera )
    goto LABEL_34;
  UnityEngine_Camera__set_orthographicSize(mEarthEffCamera, 1.0, 0LL);
  mEarthEffCamera = this->fields.mEarthEffCamera;
  if ( !mEarthEffCamera )
    goto LABEL_34;
  UnityEngine_Camera__set_orthographicSize(mEarthEffCamera, 1.0, 0LL);
  mEarthEffCamera = this->fields.mEarthCamera;
  if ( !mEarthEffCamera )
    goto LABEL_34;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0LL);
  GameObjectExtensions__SetLocalPositionZ(v15, -50000.0, 0LL);
  mEarthEffCamera = this->fields.mEarthEffCamera;
  if ( !mEarthEffCamera )
    goto LABEL_34;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0LL);
  GameObjectExtensions__SetLocalPositionZ(v16, -50000.0, 0LL);
  v17 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v17 = TerminalSceneComponent_TypeInfo;
  }
  v12 = &v23;
  EARTH_ASSET_NAME = v17->static_fields->EARTH_ASSET_NAME;
  v14 = int_TypeInfo;
  v23 = 1;
LABEL_32:
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(v14, v12);
  this->fields.loadEarthAssetName = System_String__Format(EARTH_ASSET_NAME, v18, 0LL);
  sub_B52920(&this->fields.loadEarthAssetName);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  loadEarthAssetName = this->fields.loadEarthAssetName;
  v21 = (AssetManager_o *)Instance;
  v22 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v22,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass168_0__SetEarthView_b__0__,
    0LL);
  if ( !v21 )
    goto LABEL_34;
  AssetManager__LoadAssetStorage(v21, loadEarthAssetName, v22, 1, 0LL);
}


void __fastcall TerminalSceneComponent__SetQuestBoardInfoOff(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ScrTerminalListTop_o *mTerminalList; // x0

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    sub_B52A5C(0LL, method);
  ScrTerminalListTop__ShowingInfoAllOff(mTerminalList, 0LL);
}


void __fastcall TerminalSceneComponent__SetQuestInfoResetReady(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  QuestInformationComponent_o *mQuestInformation; // x0

  mQuestInformation = this->fields.mQuestInformation;
  if ( !mQuestInformation )
    sub_B52A5C(0LL, method);
  QuestInformationComponent__SetResetReady(mQuestInformation, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent__SetState(
        TerminalSceneComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  struct CStateManager_TerminalSceneComponent__o *mFSM; // x0

  if ( (byte_42AC66B & 1) == 0 )
  {
    sub_B52984(&Method_CStateManager_TerminalSceneComponent__setState__);
    byte_42AC66B = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B52A5C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2B92734 *)Method_CStateManager_TerminalSceneComponent__setState__);
}


void __fastcall TerminalSceneComponent__SetupStandServant(
        TerminalSceneComponent_o *this,
        UserServantEntity_o *usd,
        bool isSlideIn,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass182_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  StandFigureSlideComponent_o *mTerminalServant; // x22
  System_Action_o *v13; // x23
  struct StandFigureSlideComponent_o *v14; // x19
  System_Action_o *v15; // x20

  if ( (byte_42AC646 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass182_0__SetupStandServant_b__0__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass182_0__SetupStandServant_b__1__);
    sub_B52984(&TerminalSceneComponent___c__DisplayClass182_0_TypeInfo);
    byte_42AC646 = 1;
  }
  v9 = (TerminalSceneComponent___c__DisplayClass182_0_o *)sub_B52A54(TerminalSceneComponent___c__DisplayClass182_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass182_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_7;
  v9->fields.isSlideIn = isSlideIn;
  v9->fields.__4__this = this;
  sub_B52920(&v9->fields.__4__this);
  v9->fields.endAction = endAction;
  sub_B52920(&v9->fields.endAction);
  mTerminalServant = this->fields.mTerminalServant;
  v13 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v13,
    (Il2CppObject *)v9,
    Method_TerminalSceneComponent___c__DisplayClass182_0__SetupStandServant_b__0__,
    0LL);
  if ( !mTerminalServant
    || (StandFigureSlideComponent__Setup(mTerminalServant, usd, 0, v13, 0LL),
        v14 = this->fields.mTerminalServant,
        v15 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v9,
          Method_TerminalSceneComponent___c__DisplayClass182_0__SetupStandServant_b__1__,
          0LL),
        !v14) )
  {
LABEL_7:
    sub_B52A5C(v10, v11);
  }
  v14->fields.mBtnAct = v15;
  sub_B52920(&v14->fields.mBtnAct);
}


void __fastcall TerminalSceneComponent__StartEventDailyPoint(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2

  if ( TerminalSceneComponent__CheckEventDailyPoint(this, eventId, (const MethodInfo *)callback) )
  {
    this->fields.afterEventDailyPoint = callback;
    sub_B52920(&this->fields.afterEventDailyPoint);
    TerminalSceneComponent__requestEventDailyPoint(this, eventId, v7);
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
  TerminalSceneComponent_c *allMaskPanel; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8
  System_Action_Action__array *v10; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v11; // x21
  TerminalSceneComponent___c_c *v12; // x0
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__193_1; // x20
  Il2CppObject *v15; // x21
  struct TerminalSceneComponent___c_StaticFields *v16; // x0
  System_Action_Action__o *v17; // x8
  TerminalSceneComponent___c_c *v18; // x0
  struct TerminalSceneComponent___c_StaticFields *v19; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__193_2; // x20
  Il2CppObject *v21; // x21
  struct TerminalSceneComponent___c_StaticFields *v22; // x0
  System_Action_Action__o *v23; // x8
  TerminalSceneComponent___c_c *v24; // x0
  struct TerminalSceneComponent___c_StaticFields *v25; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__193_3; // x20
  Il2CppObject *v27; // x21
  struct TerminalSceneComponent___c_StaticFields *v28; // x0
  System_Action_Action__o *v29; // x8
  ActionChain_o *v30; // x20
  __int64 v31; // x0
  __int64 v32; // x0

  if ( (byte_42AC650 & 1) == 0 )
  {
    sub_B52984(&ActionChain_TypeInfo);
    sub_B52984(&System_Action_Action____TypeInfo);
    sub_B52984(&Method_System_Action_Action___ctor__);
    sub_B52984(&System_Action_Action__TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&Method_TerminalSceneComponent__StartWindowMessage_b__193_0__);
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    sub_B52984(&Method_TerminalSceneComponent___c__StartWindowMessage_b__193_1__);
    sub_B52984(&Method_TerminalSceneComponent___c__StartWindowMessage_b__193_2__);
    sub_B52984(&Method_TerminalSceneComponent___c__StartWindowMessage_b__193_3__);
    sub_B52984(&TerminalSceneComponent___c_TypeInfo);
    byte_42AC650 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2B4 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2B4 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( v5->static_fields->_IsDispOnly_k__BackingField )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v5);
    if ( !byte_42AC796 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC796 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    if ( !System_String__IsNullOrEmpty(v6->static_fields->_QuestWindowMessage_k__BackingField, 0LL) )
    {
      v10 = (System_Action_Action__array *)sub_B5299C(System_Action_Action____TypeInfo, 4LL);
      v11 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        v11,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent__StartWindowMessage_b__193_0__,
        (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__);
      if ( !v10 )
        goto LABEL_75;
      if ( !v11 || (allMaskPanel = (TerminalSceneComponent_c *)sub_B52A44(v11, v10->obj.klass->_1.element_class)) != 0LL )
      {
        if ( !v10->max_length )
          goto LABEL_76;
        v10->m_Items[0] = (System_Action_Action__o *)v11;
        sub_B52920(v10->m_Items);
        v12 = TerminalSceneComponent___c_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
          v12 = TerminalSceneComponent___c_TypeInfo;
        }
        static_fields = v12->static_fields;
        _9__193_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__193_1;
        if ( _9__193_1 )
          goto LABEL_48;
        if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v12);
          static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
        }
        v15 = (Il2CppObject *)static_fields->__9;
        _9__193_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          _9__193_1,
          v15,
          Method_TerminalSceneComponent___c__StartWindowMessage_b__193_1__,
          (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__);
        v16 = TerminalSceneComponent___c_TypeInfo->static_fields;
        v16->__9__193_1 = (struct System_Action_Action__o *)_9__193_1;
        sub_B52920(&v16->__9__193_1);
        if ( _9__193_1 )
        {
LABEL_48:
          allMaskPanel = (TerminalSceneComponent_c *)sub_B52A44(_9__193_1, v10->obj.klass->_1.element_class);
          v17 = (System_Action_Action__o *)_9__193_1;
          if ( !allMaskPanel )
            goto LABEL_77;
        }
        else
        {
          v17 = 0LL;
        }
        if ( v10->max_length <= 1 )
          goto LABEL_76;
        v10->m_Items[1] = v17;
        sub_B52920(&v10->m_Items[1]);
        v18 = TerminalSceneComponent___c_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
          v18 = TerminalSceneComponent___c_TypeInfo;
        }
        v19 = v18->static_fields;
        _9__193_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v19->__9__193_2;
        if ( _9__193_2 )
          goto LABEL_58;
        if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v18);
          v19 = TerminalSceneComponent___c_TypeInfo->static_fields;
        }
        v21 = (Il2CppObject *)v19->__9;
        _9__193_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          _9__193_2,
          v21,
          Method_TerminalSceneComponent___c__StartWindowMessage_b__193_2__,
          (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__);
        v22 = TerminalSceneComponent___c_TypeInfo->static_fields;
        v22->__9__193_2 = (struct System_Action_Action__o *)_9__193_2;
        sub_B52920(&v22->__9__193_2);
        if ( _9__193_2 )
        {
LABEL_58:
          allMaskPanel = (TerminalSceneComponent_c *)sub_B52A44(_9__193_2, v10->obj.klass->_1.element_class);
          v23 = (System_Action_Action__o *)_9__193_2;
          if ( !allMaskPanel )
            goto LABEL_77;
        }
        else
        {
          v23 = 0LL;
        }
        if ( v10->max_length <= 2 )
          goto LABEL_76;
        v10->m_Items[2] = v23;
        sub_B52920(&v10->m_Items[2]);
        v24 = TerminalSceneComponent___c_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
          v24 = TerminalSceneComponent___c_TypeInfo;
        }
        v25 = v24->static_fields;
        _9__193_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v25->__9__193_3;
        if ( !_9__193_3 )
        {
          if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v24);
            v25 = TerminalSceneComponent___c_TypeInfo->static_fields;
          }
          v27 = (Il2CppObject *)v25->__9;
          _9__193_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Action__TypeInfo);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            _9__193_3,
            v27,
            Method_TerminalSceneComponent___c__StartWindowMessage_b__193_3__,
            (const MethodInfo_2627780 *)Method_System_Action_Action___ctor__);
          v28 = TerminalSceneComponent___c_TypeInfo->static_fields;
          v28->__9__193_3 = (struct System_Action_Action__o *)_9__193_3;
          sub_B52920(&v28->__9__193_3);
          if ( !_9__193_3 )
          {
            v29 = 0LL;
LABEL_69:
            if ( v10->max_length > 3 )
            {
              v10->m_Items[3] = v29;
              sub_B52920(&v10->m_Items[3]);
              v30 = (ActionChain_o *)sub_B52A54(ActionChain_TypeInfo);
              ActionChain___ctor_21209932(v30, v10, 0LL);
              if ( v30 )
              {
                ChainableActionBase__Execute((ChainableActionBase_o *)v30, 0LL);
                return;
              }
LABEL_75:
              sub_B52A5C(allMaskPanel, callbackFunc);
            }
LABEL_76:
            v31 = sub_B52A88(allMaskPanel);
            sub_B52A28(v31, 0LL);
          }
        }
        allMaskPanel = (TerminalSceneComponent_c *)sub_B52A44(_9__193_3, v10->obj.klass->_1.element_class);
        v29 = (System_Action_Action__o *)_9__193_3;
        if ( allMaskPanel )
          goto LABEL_69;
      }
LABEL_77:
      v32 = sub_B52A7C();
      sub_B52A28(v32, 0LL);
    }
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42AC2A0 )
  {
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AC2A0 = 1;
  }
  allMaskPanel = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    allMaskPanel = TerminalSceneComponent_TypeInfo;
  }
  mInstance = allMaskPanel->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_75;
  mTerminalMap = mInstance->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_75;
  allMaskPanel = (TerminalSceneComponent_c *)mTerminalMap->fields.allMaskPanel;
  if ( !allMaskPanel )
    goto LABEL_75;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allMaskPanel, 0, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
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
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42AC653 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B52984(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AC653 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_23E2334 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_15;
  if ( EventDetailEntity__isTower((EventDetailEntity_o *)entity, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.mTitleInfo;
    if ( !Instance )
      goto LABEL_15;
    TitleInfoControl__EventTowerStart((TitleInfoControl_o *)Instance, (EventDetailEntity_o *)entity, callback, v9);
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_15;
  if ( !EventDetailEntity__IsSuperBoss((EventDetailEntity_o *)entity, 0LL) )
    return;
  Instance = (DataManager_o *)this->fields.mTitleInfo;
  if ( !Instance )
LABEL_15:
    sub_B52A5C(Instance, v8);
  TitleInfoControl__CheckSuperBossHpAnim((TitleInfoControl_o *)Instance, callback, v10);
}


void __fastcall TerminalSceneComponent__Update(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct CStateManager_TerminalSceneComponent__o *mFSM; // x0
  ScrTerminalMap_o *mTerminalMap; // x20
  _BOOL8 IsMapTouchEnabled; // x0
  __int64 v7; // x1

  if ( (byte_42AC655 & 1) == 0 )
  {
    sub_B52984(&Method_CStateManager_TerminalSceneComponent__update__);
    sub_B52984(&CTouch_TypeInfo);
    byte_42AC655 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2B9270C *)Method_CStateManager_TerminalSceneComponent__update__);
  mTerminalMap = this->fields.mTerminalMap;
  IsMapTouchEnabled = TerminalSceneComponent__IsMapTouchEnabled(this, v3);
  if ( !mTerminalMap )
    sub_B52A5C(IsMapTouchEnabled, v7);
  ScrTerminalMap__ProcessMapCamera(mTerminalMap, IsMapTouchEnabled, 0LL);
}


void __fastcall TerminalSceneComponent__UpdateCompleteMissionIconUI(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  ScrPlayerStatus_o *mPlayerStatus; // x0

  mPlayerStatus = this->fields.mPlayerStatus;
  if ( !mPlayerStatus )
    sub_B52A5C(0LL, method);
  ScrPlayerStatus__UpdateCompleteMissionIconUI(mPlayerStatus, 0LL);
}


void __fastcall TerminalSceneComponent__UpdateQuestBoardList(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x8

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList || (this = (TerminalSceneComponent_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0LL )
    sub_B52A5C(this, method);
  QuestBoardListViewManager__SetupDisp((QuestBoardListViewManager_o *)this, 0LL);
}


void __fastcall TerminalSceneComponent__UpdateTitleEventInfo(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *mTitleInfo; // x0

  mTitleInfo = this->fields.mTitleInfo;
  if ( !mTitleInfo )
    sub_B52A5C(0LL, method);
  TitleInfoControl__UpdateEventItemInfo(mTitleInfo, method);
}


System_Collections_IEnumerator_o *__fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__187_o *v2; // x19

  if ( (byte_42AC64A & 1) == 0 )
  {
    sub_B52984(&TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__187_TypeInfo);
    byte_42AC64A = 1;
  }
  v2 = (TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__187_o *)sub_B52A54(TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__187_TypeInfo);
  TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__187___ctor(v2, 0, 0LL);
  return (System_Collections_IEnumerator_o *)v2;
}


bool __fastcall TerminalSceneComponent___CoWaitBlankEerthActionEnd_b__244_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *mTerminalList; // x0

  if ( (byte_42AC682 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AC682 = 1;
  }
  mTerminalList = (CommonUI_o *)this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_9;
  if ( !ScrTerminalListTop__IsBlankEarthAction((ScrTerminalListTop_o *)mTerminalList, 0LL) )
  {
    mTerminalList = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( mTerminalList )
      return !CommonUI__IsActive_NotifiDialog(mTerminalList, 0LL);
LABEL_9:
    sub_B52A5C(mTerminalList, method);
  }
  return 0;
}


bool __fastcall TerminalSceneComponent___CoWaitTerminalTopEffectEnd_b__243_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *mTerminalList; // x0

  if ( (byte_42AC681 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AC681 = 1;
  }
  mTerminalList = (CommonUI_o *)this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_9;
  if ( ScrTerminalListTop__CheckTerminalTopEffect((ScrTerminalListTop_o *)mTerminalList, 0LL) <= 0 )
  {
    mTerminalList = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( mTerminalList )
      return !CommonUI__IsActive_NotifiDialog(mTerminalList, 0LL);
LABEL_9:
    sub_B52A5C(mTerminalList, method);
  }
  return 0;
}


bool __fastcall TerminalSceneComponent___OpenExchangeDialogue_b__247_3(
        TerminalSceneComponent_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  return !TerminalSceneComponent__IsNotDisplayCostume(this, x, method);
}


void __fastcall TerminalSceneComponent___StartWindowMessage_b__193_0(
        TerminalSceneComponent_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct ScrTerminalMap_o *mTerminalMap; // x8
  TerminalSceneComponent_o *v4; // x20
  struct ScrTerminalListTop_o *mTerminalList; // x8

  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap
    || (v4 = this, (this = (TerminalSceneComponent_o *)mTerminalMap->fields.allMaskObj) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (mTerminalList = v4->fields.mTerminalList) == 0LL)
    || (this = (TerminalSceneComponent_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0LL )
  {
    sub_B52A5C(this, action);
  }
  QuestBoardListViewManager__SetMode((QuestBoardListViewManager_o *)this, 4, action, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalSceneComponent___beginInitialize_b__167_0(
        TerminalSceneComponent_o *this,
        bool gotNewServant,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *v4; // x19
  TerminalPramsManager_c *v5; // x0
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct ScrTerminalMap_o *v8; // x8
  struct ScrTerminalMap_o *v9; // x8
  struct MapEntity_o *mMapEnt; // x8
  ScrTerminalMap_o *v11; // x20
  System_Action_o *v12; // x21
  TitleInfoControl_o *mTitleInfo; // x20
  System_Action_o *v14; // x21
  const MethodInfo *v15; // x6
  const MethodInfo *v16; // x2

  v4 = this;
  if ( (byte_42AC67D & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_EventRaidMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&Method_TerminalSceneComponent__beginInitialize_b__167_3__);
    this = (TerminalSceneComponent_o *)sub_B52984(&Method_TerminalSceneComponent__beginInitialize_b__167_4__);
    byte_42AC67D = 1;
  }
  v4->fields._onClosePresentBoxFlag_k__BackingField = 1;
  if ( gotNewServant )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42AC2AB )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC2AB = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    v5->static_fields->_IsAutoResume_k__BackingField = 1;
    this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( this )
    {
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 34, 1, 0LL, 0LL);
      return 0;
    }
LABEL_33:
    sub_B52A5C(this, gotNewServant);
  }
  mTerminalMap = v4->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_33;
  this = (TerminalSceneComponent_o *)mTerminalMap->fields.mapButtonGrid;
  if ( !this )
    goto LABEL_33;
  this = (TerminalSceneComponent_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_28;
  v8 = v4->fields.mTerminalMap;
  if ( !v8 )
    goto LABEL_33;
  if ( !LOBYTE(v8->fields.currentMapLayerId) )
    goto LABEL_28;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (TerminalSceneComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventRaidMaster___);
  v9 = v4->fields.mTerminalMap;
  if ( !v9 )
    goto LABEL_33;
  mMapEnt = v9->fields.mMapEnt;
  if ( !mMapEnt || !this )
    goto LABEL_33;
  if ( EventRaidMaster__GetRaidGorupMax((EventRaidMaster_o *)this, mMapEnt[1].fields.bgmId, 0LL) >= 1 )
  {
    v11 = v4->fields.mTerminalMap;
    v12 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)v4, Method_TerminalSceneComponent__beginInitialize_b__167_3__, 0LL);
    if ( !v11 )
      goto LABEL_33;
    ScrTerminalMap__BeginRaidUpdateRequest(v11, v12, 0LL);
  }
  else
  {
LABEL_28:
    this = (TerminalSceneComponent_o *)v4->fields.mTitleInfo;
    if ( !this )
      goto LABEL_33;
    TitleInfoControl__InitEventAlphaAnim((TitleInfoControl_o *)this, (const MethodInfo *)gotNewServant);
    mTitleInfo = v4->fields.mTitleInfo;
    v14 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)v4, Method_TerminalSceneComponent__beginInitialize_b__167_4__, 0LL);
    if ( !mTitleInfo )
      goto LABEL_33;
    TitleInfoControl__SetActiveEventInfo_18331148(
      mTitleInfo,
      mTitleInfo->fields.mIsActiveEventInfo,
      mTitleInfo->fields.mEvScreenKind,
      mTitleInfo->fields.mWarId,
      mTitleInfo->fields.mWarEventId,
      v14,
      v15);
    this = (TerminalSceneComponent_o *)v4->fields.mTitleInfo;
    if ( !this )
      goto LABEL_33;
    TitleInfoControl__FrameIn((TitleInfoControl_o *)this, 0, v16);
  }
  return 1;
}


void __fastcall TerminalSceneComponent___beginInitialize_b__167_1(
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
    sub_B52A5C(mPlayerStatus, method);
  }
  QuestBoardListViewManager__SetupDisp((QuestBoardListViewManager_o *)mPlayerStatus, 0LL);
}


void __fastcall TerminalSceneComponent___beginInitialize_b__167_2(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1
  ScrTerminalMap_o *mTerminalMap; // x19

  if ( (byte_42AC67F & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_42AC67F = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL),
        (Instance = (AvalonSceneManager_o *)this->fields.mEarthCore) == 0LL)
    || (mTerminalMap = this->fields.mTerminalMap,
        Instance = (AvalonSceneManager_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)Instance,
                                             0LL),
        !mTerminalMap) )
  {
    sub_B52A5C(Instance, v4);
  }
  ScrTerminalMap__SetCore(mTerminalMap, (UnityEngine_GameObject_o *)Instance, 0LL);
}


void __fastcall TerminalSceneComponent___beginInitialize_b__167_3(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  QuestTree_o *v3; // x20
  TerminalPramsManager_c *v4; // x0
  int32_t WarId_k__BackingField; // w21
  System_Action_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  System_Collections_IEnumerator_o *v9; // x1

  if ( (byte_42AC67E & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B52984(&SingletonTemplate_QuestTree__TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&Method_TerminalSceneComponent__beginInitialize_b__167_5__);
    byte_42AC67E = 1;
  }
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v3 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2A2 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2A2 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v4->static_fields->_WarId_k__BackingField;
  v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__167_5__, 0LL);
  if ( !v3 )
    sub_B52A5C(v7, v8);
  v9 = QuestTree__mfBaseTreeUpdateWithOpenCheck(v3, WarId_k__BackingField, v6, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
}


void __fastcall TerminalSceneComponent___beginInitialize_b__167_4(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  struct ScrTerminalMap_o *mTerminalMap; // x8
  TerminalSceneComponent_o *v3; // x19
  const MethodInfo *v4; // x3
  struct ScrTerminalMap_o *v5; // x8
  struct MapEntity_o *mMapEnt; // x8

  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_8;
  v3 = this;
  this = (TerminalSceneComponent_o *)mTerminalMap->fields.mapButtonGrid;
  if ( !this )
    goto LABEL_8;
  this = (TerminalSceneComponent_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v3->fields.mTerminalMap;
    if ( v5 )
    {
      mMapEnt = v5->fields.mMapEnt;
      if ( mMapEnt )
      {
        TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(v3, mMapEnt[1].fields.bgmId, 0LL, v4);
        return;
      }
    }
LABEL_8:
    sub_B52A5C(this, method);
  }
}


void __fastcall TerminalSceneComponent___beginInitialize_b__167_5(
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
    sub_B52A5C(mTerminalList, method);
  }
  ScrTerminalMap__UpdateEventRaidUI((ScrTerminalMap_o *)mTerminalList, 0LL);
}


void __fastcall TerminalSceneComponent___callbackEventDailyPoint_b__213_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.afterEventDailyPoint, 0LL);
}


void __fastcall TerminalSceneComponent___mfsmfInitTable_b__210_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *v2; // x19
  __int64 v3; // x1
  PlayMakerFSM_o *myFSM; // x0

  v2 = this;
  if ( (byte_42AC680 & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_B52984(&StringLiteral_5578/*"EVENTLISTUP_END"*/);
    byte_42AC680 = 1;
  }
  TerminalSceneComponent__deleteQuestMovie(this, method);
  myFSM = v2->fields.myFSM;
  if ( !myFSM )
    sub_B52A5C(0LL, v3);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_5578/*"EVENTLISTUP_END"*/, 0LL);
}


void __fastcall TerminalSceneComponent__beginFinish(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int32_t quitType; // w8

  if ( !this )
    sub_B52A5C(0LL, method);
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
  TerminalPramsManager_c *v6; // x0
  TitleInfoControl_o *Instance; // x0
  __int64 v8; // x1
  CommonUI_o *v9; // x20
  TerminalPramsManager_c *v10; // x0
  struct UnityEngine_Camera_o *mUICamera; // x20
  CTouch_c *v12; // x0
  struct CTouch_StaticFields *static_fields; // x0
  System_String_o *v14; // x3
  const MethodInfo *v15; // x5
  struct CStateManager_TerminalSceneComponent__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v17; // x21
  struct CStateManager_TerminalSceneComponent__o *mFSM; // x21
  TerminalSceneComponent_StateNormal_o *v19; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v20; // x21
  TerminalSceneComponent_StateTutorial1_SpotArrow_o *v21; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v22; // x21
  TerminalSceneComponent_StateTutorial1_QuestArrow_o *v23; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v24; // x21
  TerminalSceneComponent_StateTutorial2_SpotArrow_o *v25; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v26; // x21
  TerminalSceneComponent_StateTutorial2_QuestArrow_o *v27; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v28; // x21
  TerminalSceneComponent_StateTutorial3_MenuArrow_o *v29; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v30; // x21
  TerminalSceneComponent_StateTutorial3_GachaArrow_o *v31; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v32; // x21
  TerminalSceneComponent_StateTutorial4_SpotArrow_o *v33; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v34; // x21
  TerminalSceneComponent_StateTutorial4_QuestArrow_o *v35; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v36; // x21
  TerminalSceneComponent_StateTutorial5_MenuArrow_o *v37; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v38; // x20
  TerminalSceneComponent_StateTutorial5_CombineArrow_o *v39; // x21
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x4
  const MethodInfo *v42; // x2
  struct TitleInfoControl_o *mTitleInfo; // x8
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x2
  ScrPlayerStatus_o *mPlayerStatus; // x20
  System_Func_bool__bool__o *v47; // x21
  struct ScrPlayerStatus_o *v48; // x22
  System_Action_o *v49; // x20
  const MethodInfo *v50; // x2
  struct ScrTerminalMap_o *mTerminalMap; // x8
  System_Action_o *v52; // x20
  const MethodInfo *v53; // x2

  if ( (byte_42AC639 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AndroidUtil_TypeInfo);
    sub_B52984(&Method_CStateManager_TerminalSceneComponent___ctor__);
    sub_B52984(&Method_CStateManager_TerminalSceneComponent__add__);
    sub_B52984(&CStateManager_TerminalSceneComponent__TypeInfo);
    sub_B52984(&CTouch_TypeInfo);
    sub_B52984(&Method_System_Func_bool__bool___ctor__);
    sub_B52984(&System_Func_bool__bool__TypeInfo);
    sub_B52984(&ServantProfileEventJoinManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&TerminalSceneComponent_StateNormal_TypeInfo);
    sub_B52984(&TerminalSceneComponent_StateTutorial1_QuestArrow_TypeInfo);
    sub_B52984(&TerminalSceneComponent_StateTutorial1_SpotArrow_TypeInfo);
    sub_B52984(&TerminalSceneComponent_StateTutorial2_QuestArrow_TypeInfo);
    sub_B52984(&TerminalSceneComponent_StateTutorial2_SpotArrow_TypeInfo);
    sub_B52984(&TerminalSceneComponent_StateTutorial3_GachaArrow_TypeInfo);
    sub_B52984(&TerminalSceneComponent_StateTutorial3_MenuArrow_TypeInfo);
    sub_B52984(&TerminalSceneComponent_StateTutorial4_QuestArrow_TypeInfo);
    sub_B52984(&TerminalSceneComponent_StateTutorial4_SpotArrow_TypeInfo);
    sub_B52984(&TerminalSceneComponent_StateTutorial5_CombineArrow_TypeInfo);
    sub_B52984(&TerminalSceneComponent_StateTutorial5_MenuArrow_TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&Method_TerminalSceneComponent__beginInitialize_b__167_0__);
    sub_B52984(&Method_TerminalSceneComponent__beginInitialize_b__167_1__);
    sub_B52984(&Method_TerminalSceneComponent__beginInitialize_b__167_2__);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AC639 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  AndroidUtil__DeleteOldSaveData(0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__Load_SaveData(0LL);
  if ( !byte_42AC2CA )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2CA = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( !v3->static_fields->_IsAutoResume_k__BackingField )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v3);
    if ( !byte_42AC2AA )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC2AA = 1;
    }
    v4 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v4 = TerminalPramsManager_TypeInfo;
    }
    v4->static_fields->_DispState_k__BackingField = 0;
    if ( !byte_42AC2A8 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC2A8 = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    v5->static_fields->_SelectedStoryQuestId_k__BackingField = 0;
    TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(0LL);
    if ( !byte_42AC2A9 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC2A9 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    v6->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
    TerminalPramsManager__TerminalSelectedRecollectionWarId_SaveData(0LL);
  }
  Instance = (TitleInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !v9 )
    goto LABEL_81;
  CommonUI__CheckChangeOtherConnectMarkFromEventId(
    v9,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId,
    1,
    0LL);
  if ( !byte_42AC2F8 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2F8 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->meSceneStatus = 1;
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  this->fields._IsReq_InitEarthRotateY_k__BackingField = 1;
  this->fields._onClosePresentBoxFlag_k__BackingField = 0;
  this->fields._FirstFadeTime_k__BackingField = 0.0;
  SkillLvMaster__AssertionSkillOverwriteByNowTime(0LL);
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__init(0LL);
  mUICamera = this->fields.mUICamera;
  if ( !byte_42AC78E )
  {
    sub_B52984(&CTouch_TypeInfo);
    byte_42AC78E = 1;
  }
  v12 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v12 = CTouch_TypeInfo;
  }
  static_fields = v12->static_fields;
  static_fields->mScreenCam = mUICamera;
  sub_B52920(&static_fields->mScreenCam);
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v17 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B52A54(CStateManager_TerminalSceneComponent__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v17,
      (QAASpotStateController_IMapSpot_o *)this,
      11,
      (const MethodInfo_2B925C4 *)Method_CStateManager_TerminalSceneComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_TerminalSceneComponent__o *)v17;
    sub_B52920(&this->fields.mFSM);
    mFSM = this->fields.mFSM;
    v19 = (TerminalSceneComponent_StateNormal_o *)sub_B52A54(TerminalSceneComponent_StateNormal_TypeInfo);
    TerminalSceneComponent_StateNormal___ctor(v19, 0LL);
    if ( mFSM )
    {
      CStateManager_QAASpotStateController_IMapSpot___add(
        (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
        0,
        (IState_T__o *)v19,
        (const MethodInfo_2B92690 *)Method_CStateManager_TerminalSceneComponent__add__);
      v20 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
      v21 = (TerminalSceneComponent_StateTutorial1_SpotArrow_o *)sub_B52A54(TerminalSceneComponent_StateTutorial1_SpotArrow_TypeInfo);
      TerminalSceneComponent_StateTutorial1_SpotArrow___ctor(v21, 0LL);
      if ( v20 )
      {
        CStateManager_QAASpotStateController_IMapSpot___add(
          v20,
          1,
          (IState_T__o *)v21,
          (const MethodInfo_2B92690 *)Method_CStateManager_TerminalSceneComponent__add__);
        v22 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
        v23 = (TerminalSceneComponent_StateTutorial1_QuestArrow_o *)sub_B52A54(TerminalSceneComponent_StateTutorial1_QuestArrow_TypeInfo);
        TerminalSceneComponent_StateTutorial1_QuestArrow___ctor(v23, 0LL);
        if ( v22 )
        {
          CStateManager_QAASpotStateController_IMapSpot___add(
            v22,
            2,
            (IState_T__o *)v23,
            (const MethodInfo_2B92690 *)Method_CStateManager_TerminalSceneComponent__add__);
          v24 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
          v25 = (TerminalSceneComponent_StateTutorial2_SpotArrow_o *)sub_B52A54(TerminalSceneComponent_StateTutorial2_SpotArrow_TypeInfo);
          TerminalSceneComponent_StateTutorial2_SpotArrow___ctor(v25, 0LL);
          if ( v24 )
          {
            CStateManager_QAASpotStateController_IMapSpot___add(
              v24,
              3,
              (IState_T__o *)v25,
              (const MethodInfo_2B92690 *)Method_CStateManager_TerminalSceneComponent__add__);
            v26 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
            v27 = (TerminalSceneComponent_StateTutorial2_QuestArrow_o *)sub_B52A54(TerminalSceneComponent_StateTutorial2_QuestArrow_TypeInfo);
            TerminalSceneComponent_StateTutorial2_QuestArrow___ctor(v27, 0LL);
            if ( v26 )
            {
              CStateManager_QAASpotStateController_IMapSpot___add(
                v26,
                4,
                (IState_T__o *)v27,
                (const MethodInfo_2B92690 *)Method_CStateManager_TerminalSceneComponent__add__);
              v28 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
              v29 = (TerminalSceneComponent_StateTutorial3_MenuArrow_o *)sub_B52A54(TerminalSceneComponent_StateTutorial3_MenuArrow_TypeInfo);
              TerminalSceneComponent_StateTutorial3_MenuArrow___ctor(v29, 0LL);
              if ( v28 )
              {
                CStateManager_QAASpotStateController_IMapSpot___add(
                  v28,
                  5,
                  (IState_T__o *)v29,
                  (const MethodInfo_2B92690 *)Method_CStateManager_TerminalSceneComponent__add__);
                v30 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
                v31 = (TerminalSceneComponent_StateTutorial3_GachaArrow_o *)sub_B52A54(TerminalSceneComponent_StateTutorial3_GachaArrow_TypeInfo);
                TerminalSceneComponent_StateTutorial3_GachaArrow___ctor(v31, 0LL);
                if ( v30 )
                {
                  CStateManager_QAASpotStateController_IMapSpot___add(
                    v30,
                    6,
                    (IState_T__o *)v31,
                    (const MethodInfo_2B92690 *)Method_CStateManager_TerminalSceneComponent__add__);
                  v32 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
                  v33 = (TerminalSceneComponent_StateTutorial4_SpotArrow_o *)sub_B52A54(TerminalSceneComponent_StateTutorial4_SpotArrow_TypeInfo);
                  TerminalSceneComponent_StateTutorial4_SpotArrow___ctor(v33, 0LL);
                  if ( v32 )
                  {
                    CStateManager_QAASpotStateController_IMapSpot___add(
                      v32,
                      7,
                      (IState_T__o *)v33,
                      (const MethodInfo_2B92690 *)Method_CStateManager_TerminalSceneComponent__add__);
                    v34 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
                    v35 = (TerminalSceneComponent_StateTutorial4_QuestArrow_o *)sub_B52A54(TerminalSceneComponent_StateTutorial4_QuestArrow_TypeInfo);
                    TerminalSceneComponent_StateTutorial4_QuestArrow___ctor(v35, 0LL);
                    if ( v34 )
                    {
                      CStateManager_QAASpotStateController_IMapSpot___add(
                        v34,
                        8,
                        (IState_T__o *)v35,
                        (const MethodInfo_2B92690 *)Method_CStateManager_TerminalSceneComponent__add__);
                      v36 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
                      v37 = (TerminalSceneComponent_StateTutorial5_MenuArrow_o *)sub_B52A54(TerminalSceneComponent_StateTutorial5_MenuArrow_TypeInfo);
                      TerminalSceneComponent_StateTutorial5_MenuArrow___ctor(v37, 0LL);
                      if ( v36 )
                      {
                        CStateManager_QAASpotStateController_IMapSpot___add(
                          v36,
                          9,
                          (IState_T__o *)v37,
                          (const MethodInfo_2B92690 *)Method_CStateManager_TerminalSceneComponent__add__);
                        v38 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
                        v39 = (TerminalSceneComponent_StateTutorial5_CombineArrow_o *)sub_B52A54(TerminalSceneComponent_StateTutorial5_CombineArrow_TypeInfo);
                        TerminalSceneComponent_StateTutorial5_CombineArrow___ctor(v39, 0LL);
                        if ( v38 )
                        {
                          CStateManager_QAASpotStateController_IMapSpot___add(
                            v38,
                            10,
                            (IState_T__o *)v39,
                            (const MethodInfo_2B92690 *)Method_CStateManager_TerminalSceneComponent__add__);
                          TerminalSceneComponent__SetState(this, 0, v40);
                          goto LABEL_64;
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
LABEL_81:
    sub_B52A5C(Instance, v8);
  }
LABEL_64:
  Instance = this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_81;
  TitleInfoControl__setTitleInfo(Instance, 0LL, 1, v14, 1, v15);
  Instance = this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_81;
  TitleInfoControl__changeTitleInfo_18255196(Instance, 1, 1, 0, v41);
  Instance = this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_81;
  TitleInfoControl__setBackBtn_Terminal(Instance, 0, v42);
  mTitleInfo = this->fields.mTitleInfo;
  if ( !mTitleInfo )
    goto LABEL_81;
  Instance = (TitleInfoControl_o *)mTitleInfo->fields.backStoryBtn;
  if ( !Instance )
    goto LABEL_81;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_81;
  TitleInfoControl__SetBackRecollectionButtonEnable(Instance, 0, v44);
  Instance = this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_81;
  TitleInfoControl__setBackBtnDepth(Instance, 24, v45);
  Instance = (TitleInfoControl_o *)this->fields.mTerminalMap;
  if ( !Instance )
    goto LABEL_81;
  ScrTerminalMap__InitMapCamera((ScrTerminalMap_o *)Instance, 0LL);
  mPlayerStatus = this->fields.mPlayerStatus;
  v47 = (System_Func_bool__bool__o *)sub_B52A54(System_Func_bool__bool__TypeInfo);
  System_Func_bool__bool____ctor(
    v47,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent__beginInitialize_b__167_0__,
    (const MethodInfo_278223C *)Method_System_Func_bool__bool___ctor__);
  if ( !mPlayerStatus )
    goto LABEL_81;
  ScrPlayerStatus__SetCloseGiftAct(mPlayerStatus, v47, 0LL);
  v48 = this->fields.mPlayerStatus;
  v49 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v49, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__167_1__, 0LL);
  if ( !v48 )
    goto LABEL_81;
  v48->fields.mRecoverAct = v49;
  sub_B52920(&v48->fields.mRecoverAct);
  Instance = this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_81;
  TitleInfoControl__setHeaderBgImg(Instance, 0, v50);
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_81;
  Instance = (TitleInfoControl_o *)mTerminalMap->fields.allMaskObj;
  if ( !Instance )
    goto LABEL_81;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  v52 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v52, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__167_2__, 0LL);
  TerminalSceneComponent__SetEarthView(this, v52, v53);
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  }
  ServantProfileEventJoinManager__UpdateProfileServantEventJoin(0LL);
}


void __fastcall TerminalSceneComponent__beginPause(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  MissionNotifyManager_o *v3; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_42AC644 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    byte_42AC644 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v3 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v3 )
    sub_B52A5C(0LL, v4);
  MissionNotifyManager__StartPause(v3, 0LL);
  this->fields.quitType = 3;
  TerminalSceneComponent__quit(this, v5);
}


void __fastcall TerminalSceneComponent__beginResume(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  MissionNotifyManager_o *mQuestBoardListViewManager; // x0
  __int64 v4; // x1
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct MapEntity_o *mMapEnt; // x8
  int32_t bgmId; // w20
  TerminalPramsManager_c *v9; // x0
  TerminalPramsManager_c *v10; // x0
  TerminalPramsManager_c *v11; // x0
  struct ScrTerminalMap_o *v12; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42AC643 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC643 = 1;
  }
  entity = 0LL;
  this->fields.isFadeInAfterResumeLoad = 0;
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  mQuestBoardListViewManager = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !mQuestBoardListViewManager )
    goto LABEL_55;
  MissionNotifyManager__EndPause(mQuestBoardListViewManager, 0LL);
  mTerminalList = this->fields.mTerminalList;
  this->fields._IsReq_InitEarthRotateY_k__BackingField = 0;
  if ( !mTerminalList )
    goto LABEL_55;
  mQuestBoardListViewManager = (MissionNotifyManager_o *)mTerminalList->fields.mQuestBoardListViewManager;
  if ( !mQuestBoardListViewManager )
    goto LABEL_55;
  ListViewManager__DestroyList((ListViewManager_o *)mQuestBoardListViewManager, 0LL);
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_55;
  mMapEnt = mTerminalMap->fields.mMapEnt;
  if ( mMapEnt )
    bgmId = mMapEnt[1].fields.bgmId;
  else
    bgmId = 0;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2B0 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2B0 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  if ( v9->static_fields->meSceneStatus != 3 )
  {
    if ( bgmId )
    {
      mQuestBoardListViewManager = (MissionNotifyManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !mQuestBoardListViewManager )
        goto LABEL_55;
      mQuestBoardListViewManager = (MissionNotifyManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)mQuestBoardListViewManager,
                                                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !mQuestBoardListViewManager )
        goto LABEL_55;
      if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)mQuestBoardListViewManager,
             &entity,
             bgmId,
             (const MethodInfo_23E2334 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      {
        mQuestBoardListViewManager = (MissionNotifyManager_o *)entity;
        if ( entity )
        {
          if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, 0LL, 0LL) )
          {
            if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0
              || TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              goto LABEL_35;
            }
            v9 = TerminalPramsManager_TypeInfo;
LABEL_34:
            j_il2cpp_runtime_class_init_0(v9);
LABEL_35:
            if ( !byte_42AC2F8 )
            {
              sub_B52984(&TerminalPramsManager_TypeInfo);
              byte_42AC2F8 = 1;
            }
            v10 = TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v10 = TerminalPramsManager_TypeInfo;
            }
            v10->static_fields->meSceneStatus = 2;
            this->fields.isFadeInAfterResumeLoad = 1;
            goto LABEL_41;
          }
          if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_42AC2F8 )
          {
            sub_B52984(&TerminalPramsManager_TypeInfo);
            byte_42AC2F8 = 1;
          }
          v11 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v11 = TerminalPramsManager_TypeInfo;
          }
          v11->static_fields->meSceneStatus = 1;
          mQuestBoardListViewManager = (MissionNotifyManager_o *)this->fields.mQuestInformation;
          if ( mQuestBoardListViewManager )
          {
            QuestInformationComponent__CloseWindow((QuestInformationComponent_o *)mQuestBoardListViewManager, 0, 0LL);
            v12 = this->fields.mTerminalMap;
            if ( v12 )
            {
              mQuestBoardListViewManager = (MissionNotifyManager_o *)v12->fields.allMaskObj;
              if ( mQuestBoardListViewManager )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mQuestBoardListViewManager, 0, 0LL);
                mQuestBoardListViewManager = (MissionNotifyManager_o *)this->fields.mTerminalList;
                if ( mQuestBoardListViewManager )
                {
                  ScrTerminalListTop__ShowingInfoAllOff((ScrTerminalListTop_o *)mQuestBoardListViewManager, 0LL);
                  goto LABEL_41;
                }
              }
            }
          }
        }
LABEL_55:
        sub_B52A5C(mQuestBoardListViewManager, v4);
      }
      v9 = TerminalPramsManager_TypeInfo;
    }
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) == 0 || v9->_2.cctor_finished )
      goto LABEL_35;
    goto LABEL_34;
  }
LABEL_41:
  this->fields.quitType = 1;
  SceneRootComponent__beginResume_17470456((SceneRootComponent_o *)this, 0LL);
}


void __fastcall TerminalSceneComponent__beginStartUp(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(TerminalSceneComponent_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_beginStartUp.method)(
    this,
    0LL,
    this->klass->vtable._6_beginStartUp.methodPtr);
}


void __fastcall TerminalSceneComponent__beginStartUp_18257576(
        TerminalSceneComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v5; // x10
  Il2CppObject *v6; // x1
  TerminalSceneComponent_c *v7; // x0
  const MethodInfo *v8; // x2
  TerminalPramsManager_c *v9; // x0
  TerminalPramsManager_c *v10; // x0
  WebViewManager_o *Instance; // x0
  const MethodInfo *v12; // x1
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct UserServantEntity_array *UserServantListFromDeckIsTerminal; // x0
  struct UserServantEntity_array *mStandSvtDatas; // x8
  __int64 mStandSvtIdx; // x9
  UserServantEntity_o *NextStandServant; // x20
  bool isSavedMemoryMode; // w22
  System_Action_o *v19; // x0
  System_Action_o *v20; // x21
  const MethodInfo *v21; // x4
  const MethodInfo *v22; // x3
  System_Collections_IEnumerator_o *Async; // x1
  __int64 v24; // x0

  if ( (byte_42AC63B & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&Method_TerminalSceneComponent_SendMessageStartUpAndResume__);
    sub_B52984(&Method_TerminalSceneComponent__beginStartUp_b__170_0__);
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    sub_B52984(&TerminalTransitionInfo_TypeInfo);
    sub_B52984(&TutorialFlag_TypeInfo);
    byte_42AC63B = 1;
  }
  if ( data
    && (v5 = *(&TerminalTransitionInfo_TypeInfo->_2.bitflags2 + 1), *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v5) )
  {
    if ( (TerminalTransitionInfo_c *)data->klass->_2.typeHierarchy[v5 - 1] == TerminalTransitionInfo_TypeInfo )
      v6 = data;
    else
      v6 = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  this->fields._TransitionInfo_k__BackingField = (struct TerminalTransitionInfo_o *)v6;
  sub_B52920(&this->fields._TransitionInfo_k__BackingField);
  v7 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v7 = TerminalSceneComponent_TypeInfo;
  }
  UnityEngine_RenderSettings__set_ambientLight(v7->static_fields->DEFAULT_AMBIENT_LIGHT_COLOR, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 1, 32, 0LL);
  MainMenuBar__setMenuActive(1, this->fields.mUICamera, 0LL);
  TerminalSceneComponent__SetDispStandServant(this, 1, v8);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC78F )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC78F = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  if ( !v9->static_fields->_IsDispDone_UIStandFigure_k__BackingField )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v9);
    if ( !byte_42AC790 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC790 = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    v10->static_fields->_IsDispDone_UIStandFigure_k__BackingField = 1;
    if ( !byte_42AC791 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
      byte_42AC791 = 1;
    }
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = TerminalPramsManager_TypeInfo;
    }
    v10->static_fields->_IsDispUIStandFigure_k__BackingField = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  MasterData_WarQuestSelectionMaster = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Instance = (WebViewManager_o *)TutorialFlag__Get_29217932(126, 0LL);
  if ( !MasterData_WarQuestSelectionMaster
    || (((unsigned __int8)Instance & 1) == 0
      ? (UserServantListFromDeckIsTerminal = UserDeckMaster__GetUserServantListFromDeckIsTerminal(
                                               MasterData_WarQuestSelectionMaster,
                                               0LL))
      : (UserServantListFromDeckIsTerminal = UserDeckMaster__GetUserServantListFromDeckReaveHeroine(
                                               MasterData_WarQuestSelectionMaster,
                                               0LL)),
        this->fields.mStandSvtDatas = UserServantListFromDeckIsTerminal,
        sub_B52920(&this->fields.mStandSvtDatas),
        (mStandSvtDatas = this->fields.mStandSvtDatas) == 0LL) )
  {
LABEL_53:
    sub_B52A5C(Instance, v12);
  }
  mStandSvtIdx = this->fields.mStandSvtIdx;
  if ( (unsigned int)mStandSvtIdx >= mStandSvtDatas->max_length )
  {
    v24 = sub_B52A88(Instance);
    sub_B52A28(v24, 0LL);
  }
  NextStandServant = mStandSvtDatas->m_Items[mStandSvtIdx];
  if ( !NextStandServant )
    NextStandServant = TerminalSceneComponent__GetNextStandServant(this, v12);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  isSavedMemoryMode = OptionManager__isSavedMemoryMode(0LL);
  v19 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  v20 = v19;
  if ( isSavedMemoryMode )
  {
    System_Action___ctor(v19, (Il2CppObject *)this, Method_TerminalSceneComponent__beginStartUp_b__170_0__, 0LL);
    TerminalSceneComponent__SetupStandServant(this, NextStandServant, 0, v20, v21);
  }
  else
  {
    System_Action___ctor(v19, (Il2CppObject *)this, Method_TerminalSceneComponent_SendMessageStartUpAndResume__, 0LL);
    Async = TerminalSceneComponent__LoadAsync(this, NextStandServant, v20, v22);
    UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, Async, 0LL);
  }
}


void __fastcall TerminalSceneComponent__callbackEventDailyPoint(
        TerminalSceneComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *v4; // x19
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct MapEntity_o *mMapEnt; // x22
  TerminalPramsManager_ClearData_o *v7; // x21
  TerminalPramsManager_c *v8; // x0
  _QWORD *p_eventDailyPoint_k__BackingField; // x0
  int32_t longName_high; // w21
  TerminalPramsManager_c *v11; // x0
  int64_t Time_25741128; // x21
  TerminalPramsManager_c *v13; // x0
  int32_t bgmId; // w21
  struct ScrTerminalListTop_o *mTerminalList; // x8
  const MethodInfo *v16; // x6
  struct ScrTerminalListTop_o *v17; // x8
  UnityEngine_GameObject_o *mActionPanel; // x21
  TitleInfoControl_o *mTitleInfo; // x20
  System_Action_o *v20; // x22
  const MethodInfo *v21; // x3
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v23; // 0:x0.8

  v4 = this;
  if ( (byte_42AC663 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B52984(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B52984(&Method_JsonManager_Deserialize_EventDailyPoint___);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&Method_TerminalSceneComponent__callbackEventDailyPoint_b__213_0__);
    sub_B52984(&StringLiteral_11164/*"REQUEST_NG"*/);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    this = (TerminalSceneComponent_o *)sub_B52984(&StringLiteral_23877/*"{}"*/);
    byte_42AC663 = 1;
  }
  entity = 0LL;
  if ( !result )
    goto LABEL_55;
  if ( System_String__Equals_44555656(result, (System_String_o *)StringLiteral_21239/*"ng"*/, 0LL) )
  {
    this = (TerminalSceneComponent_o *)v4->fields.myFSM;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11164/*"REQUEST_NG"*/, 0LL);
      return;
    }
LABEL_55:
    sub_B52A5C(this, result);
  }
  this = (TerminalSceneComponent_o *)System_String__Equals_44555656(result, (System_String_o *)StringLiteral_23877/*"{}"*/, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_58;
  mTerminalMap = v4->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_55;
  mMapEnt = mTerminalMap->fields.mMapEnt;
  this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_55;
  this = (TerminalSceneComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !mMapEnt || !this )
    goto LABEL_55;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          &entity,
          mMapEnt[1].fields.bgmId,
          (const MethodInfo_23E2334 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
LABEL_58:
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    this = (TerminalSceneComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !this )
      goto LABEL_55;
    MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0LL);
    ActionExtensions__Call(v4->fields.afterEventDailyPoint, 0LL);
  }
  else
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v7 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
           (Il2CppObject *)result,
           (const MethodInfo_1F69038 *)Method_JsonManager_Deserialize_EventDailyPoint___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42AC79B )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC79B = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
    }
    p_eventDailyPoint_k__BackingField = &v8->static_fields->_eventDailyPoint_k__BackingField;
    *p_eventDailyPoint_k__BackingField = v7;
    sub_B52920(p_eventDailyPoint_k__BackingField);
    if ( !entity )
      goto LABEL_55;
    longName_high = HIDWORD(entity->fields.longName);
    if ( !byte_42AC79C )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC79C = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    v11->static_fields->_EventDailyPointItem_k__BackingField = longName_high;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v23.fields.dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
    Time_25741128 = NetworkManager__getTime_25741128(v23, 0LL);
    if ( !byte_42AC79D )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC79D = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    v13->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = Time_25741128;
    bgmId = mMapEnt[1].fields.bgmId;
    if ( !byte_42AC79E )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
      byte_42AC79E = 1;
    }
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = TerminalPramsManager_TypeInfo;
    }
    v13->static_fields->_EventDailyPointEventId_k__BackingField = bgmId;
    TerminalPramsManager__EventDailyPointSave_SaveData(0LL);
    mTerminalList = v4->fields.mTerminalList;
    if ( !mTerminalList )
      goto LABEL_55;
    this = (TerminalSceneComponent_o *)mTerminalList->fields.mActionBgColl;
    if ( !this )
      goto LABEL_55;
    this = (TerminalSceneComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_55;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (TerminalSceneComponent_o *)v4->fields.mTitleInfo;
    if ( !this )
      goto LABEL_55;
    TitleInfoControl__SetActiveEventInfo_18331148(
      (TitleInfoControl_o *)this,
      BYTE4(this[1].fields.mPlayBgmName),
      HIDWORD(this[1].fields.mStandSvtDatas),
      *(_DWORD *)&this[1].fields._IsReq_InitEarthRotateY_k__BackingField,
      LODWORD(this[1].fields._FirstFadeTime_k__BackingField),
      0LL,
      v16);
    v17 = v4->fields.mTerminalList;
    if ( !v17 )
      goto LABEL_55;
    mActionPanel = v17->fields.mActionPanel;
    mTitleInfo = v4->fields.mTitleInfo;
    v20 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v20,
      (Il2CppObject *)v4,
      Method_TerminalSceneComponent__callbackEventDailyPoint_b__213_0__,
      0LL);
    if ( !mTitleInfo )
      goto LABEL_55;
    TitleInfoControl__EventDailyPointOpen(mTitleInfo, mActionPanel, v20, v21);
  }
}


void __fastcall TerminalSceneComponent__callbackTopHome(
        TerminalSceneComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  void *myFSM; // x0
  int64_t v7; // x20
  System_Action_o *afterTopLogin; // x0

  if ( (byte_42AC65E & 1) == 0 )
  {
    sub_B52984(&Method_JsonManager_Deserialize_TopHomeInfo___);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&TopHomeRequest_TypeInfo);
    sub_B52984(&StringLiteral_11166/*"REQUEST_OK"*/);
    sub_B52984(&StringLiteral_11164/*"REQUEST_NG"*/);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    byte_42AC65E = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21239/*"ng"*/, 0LL) )
  {
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)StringLiteral_11164/*"REQUEST_NG"*/, 0LL);
      return;
    }
LABEL_15:
    sub_B52A5C(myFSM, v5);
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
            (Il2CppObject *)result,
            (const MethodInfo_1F69038 *)Method_JsonManager_Deserialize_TopHomeInfo___);
  if ( !myFSM )
    goto LABEL_15;
  v7 = *((_QWORD *)myFSM + 2);
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
  }
  TopHomeRequest__setRecentRefreshTime(v7, 0LL);
  MainMenuBar__UpdateNoticeNumber(0LL);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)StringLiteral_11166/*"REQUEST_OK"*/, 0LL);
  afterTopLogin = this->fields.afterTopLogin;
  this->fields.isTopLoginBusy = 0;
  ActionExtensions__Call(afterTopLogin, 0LL);
  this->fields.afterTopLogin = 0LL;
  sub_B52920(&this->fields.afterTopLogin);
}


void __fastcall TerminalSceneComponent__callbackTopLogin(
        TerminalSceneComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x21
  __int64 v6; // x1
  TopHomeRequest_o *Request_WarBoardWallAttackRequest; // x21
  void *myFSM; // x0
  void *v9; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  System_Collections_Generic_List_int__o *v11; // x20
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x9
  System_Converter_int__string__o *_9__206_0; // x21
  Il2CppObject *v14; // x22
  struct TerminalSceneComponent___c_StaticFields *v15; // x0
  System_String_array *v16; // x0
  System_String_o *v17; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Collections_Generic_List_int__o *v19; // x19
  TerminalSceneComponent___c_c *v20; // x8
  struct TerminalSceneComponent___c_StaticFields *v21; // x9
  System_Converter_int__string__o *_9__206_1; // x20
  Il2CppObject *v23; // x21
  struct TerminalSceneComponent___c_StaticFields *v24; // x0
  System_String_array *v25; // x0
  System_String_o *v26; // x0
  TerminalSceneComponent___c_c *v27; // x8

  if ( (byte_42AC65D & 1) == 0 )
  {
    sub_B52984(&Method_System_Converter_int__string___ctor__);
    sub_B52984(&System_Converter_int__string__TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_ToList_int___);
    sub_B52984(&Method_JsonManager_Deserialize_CommonUI_LoginResultData___);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__ConvertAll_string___);
    sub_B52984(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B52984(&Method_NetworkManager_getRequest_TopHomeRequest___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&Method_TerminalSceneComponent_callbackTopHome__);
    sub_B52984(&TopHomeRequest_TypeInfo);
    sub_B52984(&Method_TerminalSceneComponent___c__callbackTopLogin_b__206_0__);
    sub_B52984(&Method_TerminalSceneComponent___c__callbackTopLogin_b__206_1__);
    sub_B52984(&TerminalSceneComponent___c_TypeInfo);
    sub_B52984(&StringLiteral_19030/*"freeShopIds"*/);
    sub_B52984(&StringLiteral_11166/*"REQUEST_OK"*/);
    sub_B52984(&StringLiteral_21993/*"returnRarePriShopIds"*/);
    sub_B52984(&StringLiteral_709/*","*/);
    byte_42AC65D = 1;
  }
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_B52A54(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_callbackTopHome__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (TopHomeRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                            v5,
                                                            (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_TopHomeRequest___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC794 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC794 = 1;
  }
  myFSM = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    myFSM = TerminalPramsManager_TypeInfo;
  }
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_57;
  TopHomeRequest__setBackgroundRequest(
    Request_WarBoardWallAttackRequest,
    *(_BYTE *)(*((_QWORD *)myFSM + 23) + 560LL),
    0LL);
  if ( (((__int64 (__fastcall *)(TopHomeRequest_o *, Il2CppMethodPointer))Request_WarBoardWallAttackRequest->klass->vtable._7_checkExpirationDate.method)(
          Request_WarBoardWallAttackRequest,
          Request_WarBoardWallAttackRequest->klass->vtable._8_isBackgroundRequest.methodPtr) & 1) == 0 )
    goto LABEL_26;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !TerminalPramsManager__IsAutoForTimeProgressEvents(0LL) )
    goto LABEL_24;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
  }
  if ( TopHomeRequest__IsExpirationDateUpdateEventMap(0LL) )
  {
LABEL_24:
    myFSM = this->fields.myFSM;
    if ( !myFSM )
      goto LABEL_57;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)StringLiteral_11166/*"REQUEST_OK"*/, 0LL);
    this->fields.isTopLoginBusy = 0;
  }
  else
  {
LABEL_26:
    RequestBase__beginRequest((RequestBase_o *)Request_WarBoardWallAttackRequest, 0LL);
  }
  if ( System_String__IsNullOrEmpty(result, 0LL) )
    return;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
            (Il2CppObject *)result,
            (const MethodInfo_1F69038 *)Method_JsonManager_Deserialize_CommonUI_LoginResultData___);
  if ( !myFSM )
LABEL_57:
    sub_B52A5C(myFSM, v6);
  v9 = myFSM;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)myFSM + 15);
  if ( v10 )
  {
    myFSM = System_Linq_Enumerable__ToList_int_(
              v10,
              (const MethodInfo_1B7131C *)Method_System_Linq_Enumerable_ToList_int___);
    v11 = (System_Collections_Generic_List_int__o *)myFSM;
    v27 = TerminalSceneComponent___c_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v27 = TerminalSceneComponent___c_TypeInfo;
    }
    static_fields = v27->static_fields;
    _9__206_0 = static_fields->__9__206_0;
    if ( !_9__206_0 )
    {
      if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__206_0 = (System_Converter_int__string__o *)sub_B52A54(System_Converter_int__string__TypeInfo);
      System_Converter_int__string____ctor(
        _9__206_0,
        v14,
        Method_TerminalSceneComponent___c__callbackTopLogin_b__206_0__,
        (const MethodInfo_23DDE9C *)Method_System_Converter_int__string___ctor__);
      v15 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v15->__9__206_0 = _9__206_0;
      sub_B52920(&v15->__9__206_0);
    }
    if ( !v11 )
      goto LABEL_57;
    myFSM = System_Collections_Generic_List_int___ConvertAll_string_(
              v11,
              (System_Converter_T__TOutput__o *)_9__206_0,
              (const MethodInfo_1913818 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !myFSM )
      goto LABEL_57;
    v16 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)myFSM,
                                   (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_string__ToArray__);
    v17 = System_String__Join((System_String_o *)StringLiteral_709/*","*/, v16, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_19030/*"freeShopIds"*/, v17, 0LL);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)v9 + 14);
  if ( v18 )
  {
    myFSM = System_Linq_Enumerable__ToList_int_(
              v18,
              (const MethodInfo_1B7131C *)Method_System_Linq_Enumerable_ToList_int___);
    v19 = (System_Collections_Generic_List_int__o *)myFSM;
    v20 = TerminalSceneComponent___c_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v20 = TerminalSceneComponent___c_TypeInfo;
    }
    v21 = v20->static_fields;
    _9__206_1 = v21->__9__206_1;
    if ( !_9__206_1 )
    {
      if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        v21 = TerminalSceneComponent___c_TypeInfo->static_fields;
      }
      v23 = (Il2CppObject *)v21->__9;
      _9__206_1 = (System_Converter_int__string__o *)sub_B52A54(System_Converter_int__string__TypeInfo);
      System_Converter_int__string____ctor(
        _9__206_1,
        v23,
        Method_TerminalSceneComponent___c__callbackTopLogin_b__206_1__,
        (const MethodInfo_23DDE9C *)Method_System_Converter_int__string___ctor__);
      v24 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v24->__9__206_1 = _9__206_1;
      sub_B52920(&v24->__9__206_1);
    }
    if ( v19 )
    {
      myFSM = System_Collections_Generic_List_int___ConvertAll_string_(
                v19,
                (System_Converter_T__TOutput__o *)_9__206_1,
                (const MethodInfo_1913818 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
      if ( myFSM )
      {
        v25 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)myFSM,
                                       (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_string__ToArray__);
        v26 = System_String__Join((System_String_o *)StringLiteral_709/*","*/, v25, 0LL);
        UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_21993/*"returnRarePriShopIds"*/, v26, 0LL);
        goto LABEL_56;
      }
    }
    goto LABEL_57;
  }
LABEL_56:
  UnityEngine_PlayerPrefs__Save(0LL);
}


System_Collections_IEnumerator_o *__fastcall TerminalSceneComponent__coFadein_WorldDisp(
        TerminalSceneComponent_o *this,
        float fadeTime,
        System_Action_o *endAct,
        bool isExecuteUnusedAssets,
        const MethodInfo *method)
{
  TerminalSceneComponent__coFadein_WorldDisp_d__188_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42AC64B & 1) == 0 )
  {
    sub_B52984(&TerminalSceneComponent__coFadein_WorldDisp_d__188_TypeInfo);
    byte_42AC64B = 1;
  }
  v9 = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)sub_B52A54(TerminalSceneComponent__coFadein_WorldDisp_d__188_TypeInfo);
  TerminalSceneComponent__coFadein_WorldDisp_d__188___ctor(v9, 0, 0LL);
  if ( !v9 )
    sub_B52A5C(v10, v11);
  v9->fields.__4__this = this;
  sub_B52920(&v9->fields.__4__this);
  v9->fields.fadeTime = fadeTime;
  v9->fields.endAct = endAct;
  sub_B52920(&v9->fields.endAct);
  v9->fields.isExecuteUnusedAssets = isExecuteUnusedAssets;
  return (System_Collections_IEnumerator_o *)v9;
}


void __fastcall TerminalSceneComponent__deleteQuestMovie(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int64_t Time; // x20
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *EntityList_QuestReleaseMaster; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v14; // x3
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x0
  QuestPhaseEntity_c *v20; // x1
  QuestPhaseEntity_o *v21; // x22
  __int64 v22; // x9
  QuestPhaseMaster_c *v23; // x0
  System_String_o *ScriptStr; // x0
  __int64 v25; // x1
  System_String_o *v26; // x23
  QuestEntity_o *Entity; // x0
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0

  if ( (byte_42AC661 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataManager_getEntityList_QuestPhaseMaster___);
    sub_B52984(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&QuestPhaseEntity_TypeInfo);
    sub_B52984(&QuestPhaseMaster_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AC661 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (EntityList_QuestReleaseMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__getEntityList_QuestReleaseMaster_(Instance, (const MethodInfo_1A4F3A0 *)Method_DataManager_getEntityList_QuestPhaseMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___),
        !EntityList_QuestReleaseMaster) )
  {
    sub_B52A5C(Instance, v4);
  }
  v6 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 EntityList_QuestReleaseMaster,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_14:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v8);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_21;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_21:
      v18 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v14);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8));
    v21 = (QuestPhaseEntity_o *)v19;
    if ( v19 )
    {
      v20 = QuestPhaseEntity_TypeInfo;
      v22 = *(&QuestPhaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v19 + 300LL) < (unsigned int)v22
        || *(QuestPhaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v19 + 200LL) + 8 * v22 - 8) != QuestPhaseEntity_TypeInfo )
      {
        v23 = (QuestPhaseMaster_c *)sub_B52D50(v19);
LABEL_43:
        sub_B52A5C(v23, v20);
      }
    }
    v23 = QuestPhaseMaster_TypeInfo;
    if ( (BYTE3(QuestPhaseMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo);
    }
    if ( !v21 )
      goto LABEL_43;
    ScriptStr = QuestPhaseEntity__getScriptStr(
                  v21,
                  QuestPhaseMaster_TypeInfo->static_fields->MOVIE_QUEST_SCRIPT_STR,
                  0LL,
                  0LL);
    v26 = ScriptStr;
    if ( ScriptStr )
    {
      if ( !v6 )
        sub_B52A5C(ScriptStr, v25);
      Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  v6,
                                  v21->fields.questId,
                                  (const MethodInfo_23E22D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( Time >= QuestEntity__getClosedAt(Entity, 0LL) )
          MovieFileMerge__Delete(v26, 0LL);
      }
    }
  }
  v28 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      ++v29;
      v30 += 4;
      if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_39:
    v31 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v14);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
}


void __fastcall TerminalSceneComponent__fadeoutBgm(
        TerminalSceneComponent_o *this,
        float fadeoutTime,
        const MethodInfo *method)
{
  if ( (byte_42AC65A & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AC65A = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_42AC631 & 1) == 0 )
  {
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AC631 = 1;
  }
  v1 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
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


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_o __fastcall TerminalSceneComponent__get_TUTORIAL_COMBINE_ARROW_RECT_FS(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  int v2; // s1
  float m_XMin; // s0
  float y; // s0
  float v7; // s4
  float v8; // s4
  float v9; // s0
  float m_YMin; // s1
  float m_Width; // s2
  float m_Height; // s3
  struct UnityEngine_Rect_o TUTORIAL_COMBINE_ARROW_RECT; // [xsp+0h] [xbp-10h] BYREF
  UnityEngine_Rect_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  TUTORIAL_COMBINE_ARROW_RECT = this->fields.TUTORIAL_COMBINE_ARROW_RECT;
  m_XMin = TUTORIAL_COMBINE_ARROW_RECT.fields.m_XMin;
  y = UnityEngine_Rect__get_y(*(UnityEngine_Rect_o *)(&v2 - 1), (const MethodInfo *)&TUTORIAL_COMBINE_ARROW_RECT);
  v14.fields.m_YMin = 53.0;
  v14.fields.m_XMin = y + 53.0;
  UnityEngine_Rect__set_y(v14, v7, (const MethodInfo *)&TUTORIAL_COMBINE_ARROW_RECT);
  v15.fields.m_XMin = 135.0;
  UnityEngine_Rect__set_height(v15, v8, (const MethodInfo *)&TUTORIAL_COMBINE_ARROW_RECT);
  m_YMin = TUTORIAL_COMBINE_ARROW_RECT.fields.m_YMin;
  v9 = TUTORIAL_COMBINE_ARROW_RECT.fields.m_XMin;
  m_Height = TUTORIAL_COMBINE_ARROW_RECT.fields.m_Height;
  m_Width = TUTORIAL_COMBINE_ARROW_RECT.fields.m_Width;
  result.fields.m_Height = m_Height;
  result.fields.m_Width = m_Width;
  result.fields.m_YMin = m_YMin;
  result.fields.m_XMin = v9;
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


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_o __fastcall TerminalSceneComponent__get_TUTORIAL_GACHA_ARROW_RECT_FS(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  int v2; // s1
  float m_XMin; // s0
  float y; // s0
  float v7; // s4
  float v8; // s4
  float v9; // s0
  float m_YMin; // s1
  float m_Width; // s2
  float m_Height; // s3
  struct UnityEngine_Rect_o TUTORIAL_GACHA_ARROW_RECT; // [xsp+0h] [xbp-10h] BYREF
  UnityEngine_Rect_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  TUTORIAL_GACHA_ARROW_RECT = this->fields.TUTORIAL_GACHA_ARROW_RECT;
  m_XMin = TUTORIAL_GACHA_ARROW_RECT.fields.m_XMin;
  y = UnityEngine_Rect__get_y(*(UnityEngine_Rect_o *)(&v2 - 1), (const MethodInfo *)&TUTORIAL_GACHA_ARROW_RECT);
  v14.fields.m_YMin = 53.0;
  v14.fields.m_XMin = y + 53.0;
  UnityEngine_Rect__set_y(v14, v7, (const MethodInfo *)&TUTORIAL_GACHA_ARROW_RECT);
  v15.fields.m_XMin = 135.0;
  UnityEngine_Rect__set_height(v15, v8, (const MethodInfo *)&TUTORIAL_GACHA_ARROW_RECT);
  m_YMin = TUTORIAL_GACHA_ARROW_RECT.fields.m_YMin;
  v9 = TUTORIAL_GACHA_ARROW_RECT.fields.m_XMin;
  m_Height = TUTORIAL_GACHA_ARROW_RECT.fields.m_Height;
  m_Width = TUTORIAL_GACHA_ARROW_RECT.fields.m_Width;
  result.fields.m_Height = m_Height;
  result.fields.m_Width = m_Width;
  result.fields.m_YMin = m_YMin;
  result.fields.m_XMin = v9;
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

  if ( (byte_42AC634 & 1) == 0 )
  {
    sub_B52984(&FSUtility_TypeInfo);
    byte_42AC634 = 1;
  }
  x = this->fields.TUTORIAL_MENU_ARROW_POS2.fields.x;
  y = this->fields.TUTORIAL_MENU_ARROW_POS2.fields.y;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
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

  if ( (byte_42AC633 & 1) == 0 )
  {
    sub_B52984(&FSUtility_TypeInfo);
    byte_42AC633 = 1;
  }
  x = this->fields.TUTORIAL_MENU_ARROW_POS.fields.x;
  y = this->fields.TUTORIAL_MENU_ARROW_POS.fields.y;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v5 = x + (float)(FSUtility__GetOffsetX(68.0, 0, 0LL) + -14.0);
  v6 = y + 33.0;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_o __fastcall TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_RECT_FS(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  int v2; // s1
  float m_XMin; // s0
  float x; // s0
  TerminalSceneComponent_o *v7; // x0
  const MethodInfo *v8; // x1
  float v9; // s4
  float v10; // s4
  float v11; // s4
  float v12; // s0
  float m_YMin; // s1
  float m_Width; // s2
  float m_Height; // s3
  struct UnityEngine_Rect_o TUTORIAL_MENU_ARROW_RECT; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Rect_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  TUTORIAL_MENU_ARROW_RECT = this->fields.TUTORIAL_MENU_ARROW_RECT;
  m_XMin = TUTORIAL_MENU_ARROW_RECT.fields.m_XMin;
  x = UnityEngine_Rect__get_x(*(UnityEngine_Rect_o *)(&v2 - 1), (const MethodInfo *)&TUTORIAL_MENU_ARROW_RECT);
  v17.fields.m_XMin = x + TerminalSceneComponent__FSMenuOffsetX(v7, v8);
  UnityEngine_Rect__set_x(v17, v9, (const MethodInfo *)&TUTORIAL_MENU_ARROW_RECT);
  v19.fields.m_XMin = UnityEngine_Rect__get_y(v18, (const MethodInfo *)&TUTORIAL_MENU_ARROW_RECT) + 33.0;
  UnityEngine_Rect__set_y(v19, v10, (const MethodInfo *)&TUTORIAL_MENU_ARROW_RECT);
  v21.fields.m_XMin = UnityEngine_Rect__get_height(v20, (const MethodInfo *)&TUTORIAL_MENU_ARROW_RECT) + 33.0;
  UnityEngine_Rect__set_height(v21, v11, (const MethodInfo *)&TUTORIAL_MENU_ARROW_RECT);
  m_YMin = TUTORIAL_MENU_ARROW_RECT.fields.m_YMin;
  v12 = TUTORIAL_MENU_ARROW_RECT.fields.m_XMin;
  m_Height = TUTORIAL_MENU_ARROW_RECT.fields.m_Height;
  m_Width = TUTORIAL_MENU_ARROW_RECT.fields.m_Width;
  result.fields.m_Height = m_Height;
  result.fields.m_Width = m_Width;
  result.fields.m_YMin = m_YMin;
  result.fields.m_XMin = v12;
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

  if ( (byte_42AC635 & 1) == 0 )
  {
    sub_B52984(&FSUtility_TypeInfo);
    byte_42AC635 = 1;
  }
  x = this->fields.TUTORIAL_QUEST_ARROW_POS.fields.x;
  y = this->fields.TUTORIAL_QUEST_ARROW_POS.fields.y;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v5 = x + FSUtility__GetOffsetX(64.0, 0, 0LL);
  v6 = y;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_o __fastcall TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  int v2; // s1
  float m_XMin; // s0
  float x; // s8
  float v8; // s4
  float v9; // s0
  float m_YMin; // s1
  float m_Width; // s2
  float m_Height; // s3
  struct UnityEngine_Rect_o TUTORIAL_QUEST_ARROW_RECT; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Rect_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42AC636 & 1) == 0 )
  {
    sub_B52984(&FSUtility_TypeInfo);
    byte_42AC636 = 1;
  }
  TUTORIAL_QUEST_ARROW_RECT = this->fields.TUTORIAL_QUEST_ARROW_RECT;
  m_XMin = TUTORIAL_QUEST_ARROW_RECT.fields.m_XMin;
  x = UnityEngine_Rect__get_x(*(UnityEngine_Rect_o *)(&v2 - 1), (const MethodInfo *)&TUTORIAL_QUEST_ARROW_RECT);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v14.fields.m_XMin = x + FSUtility__GetOffsetX(64.0, 0, 0LL);
  UnityEngine_Rect__set_x(v14, v8, (const MethodInfo *)&TUTORIAL_QUEST_ARROW_RECT);
  m_YMin = TUTORIAL_QUEST_ARROW_RECT.fields.m_YMin;
  v9 = TUTORIAL_QUEST_ARROW_RECT.fields.m_XMin;
  m_Height = TUTORIAL_QUEST_ARROW_RECT.fields.m_Height;
  m_Width = TUTORIAL_QUEST_ARROW_RECT.fields.m_Width;
  result.fields.m_Height = m_Height;
  result.fields.m_Width = m_Width;
  result.fields.m_YMin = m_YMin;
  result.fields.m_XMin = v9;
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

  v5.fields.y = -113.0;
  v5.fields.x = 0.0;
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

  v5.fields.y = -113.0;
  v5.fields.x = 0.0;
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

  v6.fields.x = -55.0;
  v6.fields.y = 0.0;
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
  AtlasManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_42AC640 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_B52984(&Method_TerminalSceneComponent__loadCommonBG_b__175_0__);
    byte_42AC640 = 1;
  }
  Instance = (AtlasManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  if ( AtlasManager__isLoadedSkinData(Instance, 4, 0LL) )
  {
    TerminalSceneComponent__loadOutGameAtlas(this, v5);
  }
  else
  {
    v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_TerminalSceneComponent__loadCommonBG_b__175_0__, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__LoadUISkin(v6, 4, 1, 0LL);
  }
}


void __fastcall TerminalSceneComponent__loadOutGameAtlas(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_42AC641 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_TerminalSceneComponent__loadOutGameAtlas_b__176_0__);
    byte_42AC641 = 1;
  }
  v3 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_TerminalSceneComponent__loadOutGameAtlas_b__176_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v3, 0LL);
}


void __fastcall TerminalSceneComponent__loadVoice(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x8
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1
  struct TerminalTransitionInfo_o *v6; // x8
  System_String_o *voiceAssetName; // x21
  SoundManager_o *v8; // x20
  System_Action_o *v9; // x22

  if ( (byte_42AC642 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_B52984(&Method_TerminalSceneComponent_SendMessageStartUpAndResume__);
    byte_42AC642 = 1;
  }
  TransitionInfo_k__BackingField = this->fields._TransitionInfo_k__BackingField;
  if ( TransitionInfo_k__BackingField
    && !System_String__IsNullOrEmpty(TransitionInfo_k__BackingField->fields.voiceAssetName, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v6 = this->fields._TransitionInfo_k__BackingField;
    if ( !v6
      || (voiceAssetName = v6->fields.voiceAssetName,
          v8 = (SoundManager_o *)Instance,
          v9 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
          System_Action___ctor(
            v9,
            (Il2CppObject *)this,
            Method_TerminalSceneComponent_SendMessageStartUpAndResume__,
            0LL),
          !v8) )
    {
      sub_B52A5C(Instance, v5);
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

  if ( (byte_42AC66C & 1) == 0 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&StringLiteral_5791/*"EV_SCENE_STATUS_INIT"*/);
    sub_B52984(&StringLiteral_5792/*"EV_SCENE_STATUS_RESUME"*/);
    byte_42AC66C = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2B0 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2B0 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
      v6 = &StringLiteral_5791/*"EV_SCENE_STATUS_INIT"*/;
      goto LABEL_17;
    }
LABEL_18:
    sub_B52A5C(myFSM, method);
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_18;
  v6 = &StringLiteral_5792/*"EV_SCENE_STATUS_RESUME"*/;
LABEL_17:
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
    sub_B52A5C(0LL, sEventStr);
  PlayMakerFSM__SendEvent(myFSM, sEventStr, 0LL);
}


void __fastcall TerminalSceneComponent__mfsmfInitTable(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *mTerminalMap; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  QuestTree_o *v5; // x20
  System_Action_o *v6; // x21
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_42AC660 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B52984(&SingletonTemplate_QuestTree__TypeInfo);
    sub_B52984(&Method_TerminalSceneComponent__mfsmfInitTable_b__210_0__);
    byte_42AC660 = 1;
  }
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_11;
  ScrTerminalMap__ReleaseMap(mTerminalMap, 0, 0LL);
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_11;
  mTerminalMap = (ScrTerminalMap_o *)mTerminalList->fields.mQuestBoardListViewManager;
  if ( !mTerminalMap )
    goto LABEL_11;
  ListViewManager__DestroyList((ListViewManager_o *)mTerminalMap, 0LL);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v5 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_TerminalSceneComponent__mfsmfInitTable_b__210_0__, 0LL);
  if ( !v5 )
LABEL_11:
    sub_B52A5C(mTerminalMap, method);
  v7 = QuestTree__Init(v5, v6, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
}


void __fastcall TerminalSceneComponent__playBgm(
        TerminalSceneComponent_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  System_String_o *mPlayBgmName; // x19

  if ( (byte_42AC657 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AC657 = 1;
  }
  if ( System_String__IsNullOrEmpty(bgmName, 0LL) )
  {
    TerminalSceneComponent__playDefaultBgm(this, v5);
  }
  else
  {
    this->fields.mPlayBgmName = bgmName;
    sub_B52920(&this->fields.mPlayBgmName);
    mPlayBgmName = this->fields.mPlayBgmName;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playBgm(mPlayBgmName, 0LL);
  }
}


void __fastcall TerminalSceneComponent__playBgm_18282976(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  System_String_o *mPlayBgmName; // x19

  if ( (byte_42AC659 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AC659 = 1;
  }
  mPlayBgmName = this->fields.mPlayBgmName;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(mPlayBgmName, 0LL);
}


void __fastcall TerminalSceneComponent__playDefaultBgm(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  System_String_o *MainBgmName; // x1
  const MethodInfo *v4; // x2

  if ( (byte_42AC658 & 1) == 0 )
  {
    sub_B52984(&BgmManager_TypeInfo);
    byte_42AC658 = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  TerminalSceneComponent__playBgm(this, MainBgmName, v4);
}


void __fastcall TerminalSceneComponent__quit(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  AutomatedAction_o *Instance; // x0
  const MethodInfo *v4; // x1
  TerminalPramsManager_c *v5; // x0
  TerminalPramsManager_c *v6; // x0
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x8
  struct TerminalTransitionInfo_o *v8; // x8
  System_String_o *voiceAssetName; // x20
  TerminalOverwriteMaster_o *MasterData_WarQuestSelectionMaster; // x0
  TerminalOverwriteMaster_o *v11; // x20
  bool OverwriteSkinName; // w0
  TerminalSceneComponent_c *v13; // x8
  System_String_o *OVERWRITE_COMMON_BG_TYPE1_KEY; // x21
  System_String_o *Empty; // x1
  System_String_o *v16; // x0
  bool v17; // w0
  TerminalSceneComponent_c *v18; // x8
  System_String_o *OVERWRITE_COMMON_BG_TYPE2_KEY; // x20
  System_String_o *v20; // x1
  System_String_o *v21; // x0
  System_String_o *str1; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *skinName; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42AC645 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&string_TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    sub_B52984(&StringLiteral_14788/*"UISkin/"*/);
    byte_42AC645 = 1;
  }
  skinName = 0LL;
  str1 = 0LL;
  Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  AutomatedAction__TerminateMissionAction(Instance, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC792 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC792 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( v5->static_fields->_isWarBoardPlay_k__BackingField )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v5);
    if ( !byte_42AC793 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC793 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    v6->static_fields->_isWarBoardPlay_k__BackingField = 0;
  }
  else
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__stopSe(0.0, 0LL);
  }
  Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  QuestAfterAction__releaseVoice((QuestAfterAction_o *)Instance, 0LL);
  TransitionInfo_k__BackingField = this->fields._TransitionInfo_k__BackingField;
  if ( TransitionInfo_k__BackingField )
  {
    Instance = (AutomatedAction_o *)System_String__IsNullOrEmpty(
                                      TransitionInfo_k__BackingField->fields.voiceAssetName,
                                      0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      v8 = this->fields._TransitionInfo_k__BackingField;
      if ( !v8 )
        goto LABEL_65;
      voiceAssetName = v8->fields.voiceAssetName;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__releaseAudioAssetStorage(voiceAssetName, 0LL);
      Instance = (AutomatedAction_o *)this->fields._TransitionInfo_k__BackingField;
      if ( !Instance )
        goto LABEL_65;
      Instance->fields.shopActionManagerPrefab = 0LL;
      sub_B52920(&Instance->fields.shopActionManagerPrefab);
    }
  }
  Instance = (AutomatedAction_o *)this->fields.mTerminalMap;
  if ( !Instance )
    goto LABEL_65;
  ScrTerminalMap__Quit((ScrTerminalMap_o *)Instance, this->fields.quitType, 0LL);
  if ( this->fields.quitType == 2 )
  {
    Instance = (AutomatedAction_o *)this->fields.mTitleInfo;
    if ( Instance )
    {
      TitleInfoControl__releaseAssetData((TitleInfoControl_o *)Instance, v4);
      Instance = (AutomatedAction_o *)this->fields.mTerminalList;
      if ( Instance )
      {
        ScrTerminalListTop__ReleaseAsset((ScrTerminalListTop_o *)Instance, 0LL);
        goto LABEL_40;
      }
    }
LABEL_65:
    sub_B52A5C(Instance, v4);
  }
LABEL_40:
  Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  MasterData_WarQuestSelectionMaster = (TerminalOverwriteMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
  if ( MasterData_WarQuestSelectionMaster )
  {
    v11 = MasterData_WarQuestSelectionMaster;
    OverwriteSkinName = TerminalOverwriteMaster__TryGetOverwriteSkinName(
                          MasterData_WarQuestSelectionMaster,
                          2,
                          &skinName,
                          0LL);
    v13 = TerminalSceneComponent_TypeInfo;
    if ( OverwriteSkinName )
    {
      if ( (WORD1(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v13 = TerminalSceneComponent_TypeInfo;
      }
      OVERWRITE_COMMON_BG_TYPE1_KEY = v13->static_fields->OVERWRITE_COMMON_BG_TYPE1_KEY;
      Empty = System_String__Concat_44568316((System_String_o *)StringLiteral_14788/*"UISkin/"*/, skinName, 0LL);
      v16 = OVERWRITE_COMMON_BG_TYPE1_KEY;
    }
    else
    {
      if ( (WORD1(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v13 = TerminalSceneComponent_TypeInfo;
      }
      v16 = v13->static_fields->OVERWRITE_COMMON_BG_TYPE1_KEY;
      Empty = string_TypeInfo->static_fields->Empty;
    }
    UnityEngine_PlayerPrefs__SetString(v16, Empty, 0LL);
    v17 = TerminalOverwriteMaster__TryGetOverwriteSkinName(v11, 4, &str1, 0LL);
    v18 = TerminalSceneComponent_TypeInfo;
    if ( v17 )
    {
      if ( (WORD1(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v18 = TerminalSceneComponent_TypeInfo;
      }
      OVERWRITE_COMMON_BG_TYPE2_KEY = v18->static_fields->OVERWRITE_COMMON_BG_TYPE2_KEY;
      v20 = System_String__Concat_44568316((System_String_o *)StringLiteral_14788/*"UISkin/"*/, str1, 0LL);
      v21 = OVERWRITE_COMMON_BG_TYPE2_KEY;
    }
    else
    {
      if ( (WORD1(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v18 = TerminalSceneComponent_TypeInfo;
      }
      v21 = v18->static_fields->OVERWRITE_COMMON_BG_TYPE2_KEY;
      v20 = string_TypeInfo->static_fields->Empty;
    }
    UnityEngine_PlayerPrefs__SetString(v21, v20, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__Save_SaveData(0LL);
  this->fields.quitType = 0;
}


void __fastcall TerminalSceneComponent__requestEventDailyPoint(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  MissionNotifyManager_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x21

  if ( (byte_42AC662 & 1) == 0 )
  {
    sub_B52984(&Method_NetworkManager_getRequest_EventDailyPointRequest___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B52984(&Method_TerminalSceneComponent_callbackEventDailyPoint__);
    byte_42AC662 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_12;
  MissionNotifyManager__StartPause(Request_WarBoardWallAttackRequest, 0LL);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_B52A54(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_callbackEventDailyPoint__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (MissionNotifyManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                  v7,
                                                                  (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_EventDailyPointRequest___);
  if ( !Request_WarBoardWallAttackRequest )
LABEL_12:
    sub_B52A5C(Request_WarBoardWallAttackRequest, v6);
  EventDailyPointRequest__beginRequest((EventDailyPointRequest_o *)Request_WarBoardWallAttackRequest, eventId, 0LL);
}


void __fastcall TerminalSceneComponent__requestTopHome(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  PlayMakerFSM_o *myFSM; // x0
  NetworkManager_o *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v7; // x21

  if ( (byte_42AC65C & 1) == 0 )
  {
    sub_B52984(&NetworkManager_LoginCallbackFunc_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&Method_TerminalSceneComponent_callbackTopLogin__);
    sub_B52984(&TutorialFlag_TypeInfo);
    sub_B52984(&StringLiteral_11166/*"REQUEST_OK"*/);
    byte_42AC65C = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_29217932(102, 0LL) )
    goto LABEL_16;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2CF )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2CF = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( v4->static_fields->_IsPlayScriptWithMap_k__BackingField )
  {
LABEL_16:
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11166/*"REQUEST_OK"*/, 0LL);
      this->fields.isTopLoginBusy = 0;
      return;
    }
LABEL_20:
    sub_B52A5C(myFSM, v3);
  }
  this->fields.isTopLoginBusy = 1;
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v7 = (NetworkManager_LoginCallbackFunc_o *)sub_B52A54(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_callbackTopLogin__,
    0LL);
  if ( !Instance )
    goto LABEL_20;
  NetworkManager__RequestLogin(Instance, v7, 0, 0LL);
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
  this->fields._TransitionInfo_k__BackingField = value;
  sub_B52920(&this->fields._TransitionInfo_k__BackingField);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall TerminalSceneComponent_PlayChapterStartCallback__BeginInvoke(
        TerminalSceneComponent_PlayChapterStartCallback_o *this,
        bool isPlay,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isPlay;
  if ( (byte_42AD98C & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    byte_42AD98C = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall TerminalSceneComponent_PlayChapterStartCallback__EndInvoke(
        TerminalSceneComponent_PlayChapterStartCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent_PlayChapterStartCallback__Invoke(
        TerminalSceneComponent_PlayChapterStartCallback_o *this,
        bool isPlay,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  TerminalSceneComponent_PlayChapterStartCallback_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  TerminalSceneComponent_PlayChapterStartCallback_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  TerminalSceneComponent_PlayChapterStartCallback_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (TerminalSceneComponent_PlayChapterStartCallback_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v20->fields.extra_arg, isPlay, method, v3);
      if ( (sub_B529B4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isPlay, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B529AC(v22);
      v25 = sub_B52DB0(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AEB880(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B52A34(v17, v22);
        (*v19)(v21, isPlay, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AEB880(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isPlay, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isPlay,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isPlay, v22);
    goto LABEL_37;
  }
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
  TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *v4; // x19
  TerminalSceneComponent_o *mTerminalList; // x0
  __int64 v6; // x1
  TerminalSceneComponent_o **p_that; // x20
  struct ScrTerminalListTop_o *v8; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8
  struct UIScrollView_o *scrollView; // x8
  __int64 v11; // x22
  System_String_o *v12; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v14; // x0
  CommonUI_o *v15; // x22
  UnityEngine_Vector2_o TUTORIAL_QUEST_ARROW_POS_FS; // kr00_8
  float v17; // s0
  float v18; // s1
  float v19; // s2
  float v20; // s3
  TerminalSceneComponent_o *v21; // x8
  float x; // s14
  float y; // s15
  float v24; // s10
  float v25; // s11
  float v26; // s12
  float v27; // s13
  System_Action_o *v28; // x23
  struct ScrTerminalListTop_o *v29; // x21
  System_Action_o *v30; // x20
  UnityEngine_Rect_o v31; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_42AD98D & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_GameObjectExtensions_RemoveComponent_Collider___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__0__);
    sub_B52984(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__1__);
    sub_B52984(&TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_TypeInfo);
    sub_B52984(&StringLiteral_13620/*"TUTORIAL_MESSAGE_TERMINAL_QUEST1"*/);
    byte_42AD98D = 1;
  }
  v4 = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)sub_B52A54(TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_TypeInfo);
  TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0___ctor(v4, 0LL);
  if ( !v4 )
    goto LABEL_23;
  v4->fields.that = that;
  p_that = &v4->fields.that;
  sub_B52920(&v4->fields);
  if ( !v4->fields.that )
    goto LABEL_23;
  mTerminalList = (TerminalSceneComponent_o *)v4->fields.that->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_23;
  v4->fields.focus_quest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mTerminalList, 0LL);
  sub_B52920(&v4->fields.focus_quest);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  mTerminalList = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13620/*"TUTORIAL_MESSAGE_TERMINAL_QUEST1"*/, 0LL);
  if ( !*p_that )
    goto LABEL_23;
  v8 = (*p_that)->fields.mTerminalList;
  if ( !v8 )
    goto LABEL_23;
  mQuestBoardListViewManager = v8->fields.mQuestBoardListViewManager;
  if ( !mQuestBoardListViewManager )
    goto LABEL_23;
  scrollView = mQuestBoardListViewManager->fields.scrollView;
  if ( !scrollView )
    goto LABEL_23;
  v11 = *(_QWORD *)&scrollView->fields.showScrollBars;
  if ( !v11 )
    goto LABEL_23;
  v12 = (System_String_o *)mTerminalList;
  mTerminalList = *(TerminalSceneComponent_o **)(v11 + 48);
  if ( !mTerminalList )
    goto LABEL_23;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mTerminalList, 0LL);
  GameObjectExtensions__RemoveComponent_UIRootReScale_(
    gameObject,
    (const MethodInfo_1B7BDC8 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mTerminalList = *(TerminalSceneComponent_o **)(v11 + 40);
  if ( !mTerminalList )
    goto LABEL_23;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mTerminalList, 0LL);
  GameObjectExtensions__RemoveComponent_UIRootReScale_(
    v14,
    (const MethodInfo_1B7BDC8 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mTerminalList = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*p_that )
    goto LABEL_23;
  v15 = (CommonUI_o *)mTerminalList;
  TUTORIAL_QUEST_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(*p_that, 0LL);
  mTerminalList = *p_that;
  if ( !*p_that )
    goto LABEL_23;
  *(UnityEngine_Rect_o *)&v17 = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(mTerminalList, 0LL);
  v21 = *p_that;
  if ( !*p_that )
    goto LABEL_23;
  x = v21->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x;
  y = v21->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.y;
  v24 = v17;
  v25 = v18;
  v26 = v19;
  v27 = v20;
  v28 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v15 )
    goto LABEL_23;
  v31.fields.m_XMin = v24;
  v31.fields.m_YMin = v25;
  v31.fields.m_Width = v26;
  v31.fields.m_Height = v27;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v15,
    v12,
    TUTORIAL_QUEST_ARROW_POS_FS,
    v31,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v28,
    0LL);
  if ( !*p_that
    || (v29 = (*p_that)->fields.mTerminalList,
        v30 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(
          v30,
          (Il2CppObject *)v4,
          Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0LL),
        !v29) )
  {
LABEL_23:
    sub_B52A5C(mTerminalList, v6);
  }
  v29->fields.mQuestClickAct = v30;
  sub_B52920(&v29->fields.mQuestClickAct);
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
  if ( (byte_42BDCED & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
    byte_42BDCED = 1;
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
    || (this = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                            (UnityEngine_GameObject_o *)this,
                                                                                            (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0LL )
  {
LABEL_12:
    sub_B52A5C(this, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42BDCEE & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__2__);
    byte_42BDCEE = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !v6 )
    sub_B52A5C(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_18183424(v6, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B52A5C(0LL, method);
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
  TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_o *v5; // x20
  ScrTerminalMap_o *mTerminalMap; // x0
  __int64 v7; // x1
  System_String_o *v8; // x21
  CommonUI_o *Instance; // x22
  UnityEngine_Vector2_o TUTORIAL_SPOT_ARROW_POS1_FS; // kr00_8
  float x; // s14
  float y; // s15
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v17; // x23
  struct ScrTerminalMap_o *v18; // x21
  System_Action_o *v19; // x19
  UnityEngine_Rect_o TUTORIAL_SPOT_ARROW_RECT1_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v21; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_42AD98E & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__0__);
    sub_B52984(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__1__);
    sub_B52984(&TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_TypeInfo);
    sub_B52984(&StringLiteral_13623/*"TUTORIAL_MESSAGE_TERMINAL_SPOT1"*/);
    byte_42AD98E = 1;
  }
  v5 = (TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_o *)sub_B52A54(TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_TypeInfo);
  TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_13;
  v5->fields.__4__this = this;
  sub_B52920(&v5->fields.__4__this);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_13;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_13;
  v5->fields.focus_spot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0LL);
  sub_B52920(&v5->fields);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_13623/*"TUTORIAL_MESSAGE_TERMINAL_SPOT1"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  TUTORIAL_SPOT_ARROW_POS1_FS = TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_POS1_FS(that, 0LL);
  TUTORIAL_SPOT_ARROW_RECT1_FS = TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_RECT1_FS(that, 0LL);
  x = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x;
  y = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.y;
  m_XMin = TUTORIAL_SPOT_ARROW_RECT1_FS.fields.m_XMin;
  m_YMin = TUTORIAL_SPOT_ARROW_RECT1_FS.fields.m_YMin;
  m_Width = TUTORIAL_SPOT_ARROW_RECT1_FS.fields.m_Width;
  m_Height = TUTORIAL_SPOT_ARROW_RECT1_FS.fields.m_Height;
  v17 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_13;
  v21.fields.m_XMin = m_XMin;
  v21.fields.m_YMin = m_YMin;
  v21.fields.m_Width = m_Width;
  v21.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    Instance,
    v8,
    TUTORIAL_SPOT_ARROW_POS1_FS,
    v21,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v17,
    0LL);
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__SetMapCamera_TutorialFocusSpot(mTerminalMap, v5->fields.focus_spot, 0.5, 0LL),
        v18 = that->fields.mTerminalMap,
        v19 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(
          v19,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0LL),
        !v18) )
  {
LABEL_13:
    sub_B52A5C(mTerminalMap, v7);
  }
  v18->fields.mFocusSpot = (struct SrcSpotBasePrefab_o *)v19;
  sub_B52920(&v18->fields.mFocusSpot);
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
      sub_B52A5C(that, that);
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
    sub_B52A5C(0LL, method);
  SrcSpotBasePrefab__SetBtnColliderEnable(focus_spot, 1, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0___begin_b__1(
        TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42BDCEF & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__2__);
    byte_42BDCEF = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !v6 )
    sub_B52A5C(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_18183424(v6, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial1_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(this, method);
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
  TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *v4; // x19
  TerminalSceneComponent_o *mTerminalList; // x0
  __int64 v6; // x1
  TerminalSceneComponent_o **p_that; // x20
  struct ScrTerminalListTop_o *v8; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8
  struct UIScrollView_o *scrollView; // x8
  __int64 v11; // x22
  System_String_o *v12; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v14; // x0
  CommonUI_o *v15; // x22
  UnityEngine_Vector2_o TUTORIAL_QUEST_ARROW_POS_FS; // kr00_8
  float v17; // s0
  float v18; // s1
  float v19; // s2
  float v20; // s3
  TerminalSceneComponent_o *v21; // x8
  float x; // s14
  float y; // s15
  float v24; // s10
  float v25; // s11
  float v26; // s12
  float v27; // s13
  System_Action_o *v28; // x23
  struct ScrTerminalListTop_o *v29; // x21
  System_Action_o *v30; // x20
  UnityEngine_Rect_o v31; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_42AD98F & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_GameObjectExtensions_RemoveComponent_Collider___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__0__);
    sub_B52984(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__1__);
    sub_B52984(&TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_TypeInfo);
    sub_B52984(&StringLiteral_13621/*"TUTORIAL_MESSAGE_TERMINAL_QUEST2"*/);
    byte_42AD98F = 1;
  }
  v4 = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)sub_B52A54(TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_TypeInfo);
  TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0___ctor(v4, 0LL);
  if ( !v4 )
    goto LABEL_23;
  v4->fields.that = that;
  p_that = &v4->fields.that;
  sub_B52920(&v4->fields);
  if ( !v4->fields.that )
    goto LABEL_23;
  mTerminalList = (TerminalSceneComponent_o *)v4->fields.that->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_23;
  v4->fields.focus_quest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mTerminalList, 0LL);
  sub_B52920(&v4->fields.focus_quest);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  mTerminalList = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13621/*"TUTORIAL_MESSAGE_TERMINAL_QUEST2"*/, 0LL);
  if ( !*p_that )
    goto LABEL_23;
  v8 = (*p_that)->fields.mTerminalList;
  if ( !v8 )
    goto LABEL_23;
  mQuestBoardListViewManager = v8->fields.mQuestBoardListViewManager;
  if ( !mQuestBoardListViewManager )
    goto LABEL_23;
  scrollView = mQuestBoardListViewManager->fields.scrollView;
  if ( !scrollView )
    goto LABEL_23;
  v11 = *(_QWORD *)&scrollView->fields.showScrollBars;
  if ( !v11 )
    goto LABEL_23;
  v12 = (System_String_o *)mTerminalList;
  mTerminalList = *(TerminalSceneComponent_o **)(v11 + 48);
  if ( !mTerminalList )
    goto LABEL_23;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mTerminalList, 0LL);
  GameObjectExtensions__RemoveComponent_UIRootReScale_(
    gameObject,
    (const MethodInfo_1B7BDC8 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mTerminalList = *(TerminalSceneComponent_o **)(v11 + 40);
  if ( !mTerminalList )
    goto LABEL_23;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mTerminalList, 0LL);
  GameObjectExtensions__RemoveComponent_UIRootReScale_(
    v14,
    (const MethodInfo_1B7BDC8 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mTerminalList = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*p_that )
    goto LABEL_23;
  v15 = (CommonUI_o *)mTerminalList;
  TUTORIAL_QUEST_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(*p_that, 0LL);
  mTerminalList = *p_that;
  if ( !*p_that )
    goto LABEL_23;
  *(UnityEngine_Rect_o *)&v17 = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(mTerminalList, 0LL);
  v21 = *p_that;
  if ( !*p_that )
    goto LABEL_23;
  x = v21->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x;
  y = v21->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.y;
  v24 = v17;
  v25 = v18;
  v26 = v19;
  v27 = v20;
  v28 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v15 )
    goto LABEL_23;
  v31.fields.m_XMin = v24;
  v31.fields.m_YMin = v25;
  v31.fields.m_Width = v26;
  v31.fields.m_Height = v27;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v15,
    v12,
    TUTORIAL_QUEST_ARROW_POS_FS,
    v31,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v28,
    0LL);
  if ( !*p_that
    || (v29 = (*p_that)->fields.mTerminalList,
        v30 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(
          v30,
          (Il2CppObject *)v4,
          Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0LL),
        !v29) )
  {
LABEL_23:
    sub_B52A5C(mTerminalList, v6);
  }
  v29->fields.mQuestClickAct = v30;
  sub_B52920(&v29->fields.mQuestClickAct);
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
  if ( (byte_42BDCF0 & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
    byte_42BDCF0 = 1;
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
    || (this = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                            (UnityEngine_GameObject_o *)this,
                                                                                            (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0LL )
  {
LABEL_12:
    sub_B52A5C(this, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42BDCF1 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__2__);
    byte_42BDCF1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !v6 )
    sub_B52A5C(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_18183424(v6, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B52A5C(0LL, method);
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
  TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_o *v5; // x20
  ScrTerminalMap_o *mTerminalMap; // x0
  __int64 v7; // x1
  System_String_o *v8; // x21
  CommonUI_o *Instance; // x22
  UnityEngine_Vector2_o TUTORIAL_SPOT_ARROW_POS2_FS; // kr00_8
  float x; // s14
  float y; // s15
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v17; // x23
  struct ScrTerminalMap_o *v18; // x21
  System_Action_o *v19; // x19
  UnityEngine_Rect_o TUTORIAL_SPOT_ARROW_RECT2_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v21; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_42AD990 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__0__);
    sub_B52984(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__1__);
    sub_B52984(&TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_TypeInfo);
    sub_B52984(&StringLiteral_13624/*"TUTORIAL_MESSAGE_TERMINAL_SPOT2"*/);
    byte_42AD990 = 1;
  }
  v5 = (TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_o *)sub_B52A54(TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_TypeInfo);
  TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_13;
  v5->fields.__4__this = this;
  sub_B52920(&v5->fields.__4__this);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_13;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_13;
  v5->fields.focus_spot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0LL);
  sub_B52920(&v5->fields);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_13624/*"TUTORIAL_MESSAGE_TERMINAL_SPOT2"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  TUTORIAL_SPOT_ARROW_POS2_FS = TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_POS2_FS(that, 0LL);
  TUTORIAL_SPOT_ARROW_RECT2_FS = TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_RECT2_FS(that, 0LL);
  x = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x;
  y = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.y;
  m_XMin = TUTORIAL_SPOT_ARROW_RECT2_FS.fields.m_XMin;
  m_YMin = TUTORIAL_SPOT_ARROW_RECT2_FS.fields.m_YMin;
  m_Width = TUTORIAL_SPOT_ARROW_RECT2_FS.fields.m_Width;
  m_Height = TUTORIAL_SPOT_ARROW_RECT2_FS.fields.m_Height;
  v17 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_13;
  v21.fields.m_XMin = m_XMin;
  v21.fields.m_YMin = m_YMin;
  v21.fields.m_Width = m_Width;
  v21.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    Instance,
    v8,
    TUTORIAL_SPOT_ARROW_POS2_FS,
    v21,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v17,
    0LL);
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__SetMapCamera_TutorialFocusSpot(mTerminalMap, v5->fields.focus_spot, 0.5, 0LL),
        v18 = that->fields.mTerminalMap,
        v19 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(
          v19,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0LL),
        !v18) )
  {
LABEL_13:
    sub_B52A5C(mTerminalMap, v7);
  }
  v18->fields.mFocusSpot = (struct SrcSpotBasePrefab_o *)v19;
  sub_B52920(&v18->fields.mFocusSpot);
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
      sub_B52A5C(that, that);
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
    sub_B52A5C(0LL, method);
  SrcSpotBasePrefab__SetBtnColliderEnable(focus_spot, 1, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0___begin_b__1(
        TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42BDCF2 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__2__);
    byte_42BDCF2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !v6 )
    sub_B52A5C(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_18183424(v6, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial2_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(this, method);
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
  TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_o *v4; // x19
  TerminalSceneComponent_o *Instance; // x0
  __int64 v6; // x1
  TerminalSceneComponent_o **p_that; // x22
  System_String_o *v8; // x20
  CommonUI_o *v9; // x21
  UnityEngine_Vector2_o TUTORIAL_GACHA_ARROW_POS_FS; // kr00_8
  float v11; // s0
  float v12; // s1
  float v13; // s2
  float v14; // s3
  TerminalSceneComponent_o *v15; // x8
  float x; // s14
  float y; // s15
  float v18; // s10
  float v19; // s11
  float v20; // s12
  float v21; // s13
  struct TerminalSceneComponent_StateTutorial3_GachaArrow___c_StaticFields *static_fields; // x8
  System_Action_o *_9__0_0; // x22
  Il2CppObject *v24; // x23
  struct TerminalSceneComponent_StateTutorial3_GachaArrow___c_StaticFields *v25; // x0
  System_Action_o *v26; // x20
  UnityEngine_Rect_o v27; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_42AD991 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__begin_b__0_0__);
    sub_B52984(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__1__);
    sub_B52984(&TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_TypeInfo);
    sub_B52984(&TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo);
    sub_B52984(&StringLiteral_13618/*"TUTORIAL_MESSAGE_TERMINAL_GACHA"*/);
    byte_42AD991 = 1;
  }
  v4 = (TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_o *)sub_B52A54(TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_TypeInfo);
  TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0___ctor(v4, 0LL);
  if ( !v4 )
    goto LABEL_20;
  v4->fields.that = that;
  p_that = &v4->fields.that;
  sub_B52920(&v4->fields);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_13618/*"TUTORIAL_MESSAGE_TERMINAL_GACHA"*/, 0LL);
  Instance = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*p_that )
    goto LABEL_20;
  v9 = (CommonUI_o *)Instance;
  TUTORIAL_GACHA_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_GACHA_ARROW_POS_FS(*p_that, 0LL);
  Instance = *p_that;
  if ( !*p_that )
    goto LABEL_20;
  *(UnityEngine_Rect_o *)&v11 = TerminalSceneComponent__get_TUTORIAL_GACHA_ARROW_RECT_FS(Instance, 0LL);
  v15 = *p_that;
  if ( !*p_that )
    goto LABEL_20;
  x = v15->fields.TUTORIAL_MENU_MESSAGE_POS.fields.x;
  y = v15->fields.TUTORIAL_MENU_MESSAGE_POS.fields.y;
  v18 = v11;
  v19 = v12;
  Instance = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo;
  v20 = v13;
  v21 = v14;
  if ( (BYTE3(TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo);
    Instance = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo;
  }
  static_fields = *(struct TerminalSceneComponent_StateTutorial3_GachaArrow___c_StaticFields **)&Instance->fields.TUTORIAL_COMBINE_ARROW_RECT.fields.m_XMin;
  _9__0_0 = static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(Instance->fields.mQuestInformation) & 4) != 0 && !LODWORD(Instance->fields.mFSM) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(_9__0_0, v24, Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__begin_b__0_0__, 0LL);
    v25 = TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields;
    v25->__9__0_0 = _9__0_0;
    sub_B52920(&v25->__9__0_0);
  }
  if ( !v9 )
LABEL_20:
    sub_B52A5C(Instance, v6);
  v27.fields.m_XMin = v18;
  v27.fields.m_YMin = v19;
  v27.fields.m_Width = v20;
  v27.fields.m_Height = v21;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v9,
    v8,
    TUTORIAL_GACHA_ARROW_POS_FS,
    v27,
    0.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    _9__0_0,
    0LL);
  v26 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__1__,
    0LL);
  MainMenuBar__SetDispBtnAct(2, v26, 0LL);
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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42BDCF3 & 1) == 0 )
  {
    sub_B52984(&TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo);
    byte_42BDCF3 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42BDCF4 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&TutorialFlag_TypeInfo);
    sub_B52984(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__2__);
    byte_42BDCF4 = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress(1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !v6 )
    sub_B52A5C(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_18183424(v6, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B52A5C(0LL, method);
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
  TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_o *v4; // x19
  TerminalSceneComponent_o *Instance; // x0
  __int64 v6; // x1
  TerminalSceneComponent_o **p_that; // x22
  System_String_o *v8; // x20
  CommonUI_o *v9; // x21
  UnityEngine_Vector2_o TUTORIAL_MENU_ARROW_POS_FS; // kr00_8
  float v11; // s0
  float v12; // s1
  float v13; // s2
  float v14; // s3
  TerminalSceneComponent_o *v15; // x8
  float x; // s14
  float y; // s15
  float v18; // s10
  float v19; // s11
  float v20; // s12
  float v21; // s13
  struct TerminalSceneComponent_StateTutorial3_MenuArrow___c_StaticFields *static_fields; // x8
  System_Action_o *_9__0_0; // x22
  Il2CppObject *v24; // x23
  struct TerminalSceneComponent_StateTutorial3_MenuArrow___c_StaticFields *v25; // x0
  System_Action_o *v26; // x20
  UnityEngine_Rect_o v27; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_42AD992 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__begin_b__0_0__);
    sub_B52984(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__1__);
    sub_B52984(&TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_TypeInfo);
    sub_B52984(&TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo);
    sub_B52984(&StringLiteral_13619/*"TUTORIAL_MESSAGE_TERMINAL_MENU"*/);
    byte_42AD992 = 1;
  }
  v4 = (TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_o *)sub_B52A54(TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_TypeInfo);
  TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0___ctor(v4, 0LL);
  if ( !v4 )
    goto LABEL_20;
  v4->fields.that = that;
  p_that = &v4->fields.that;
  sub_B52920(&v4->fields);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_13619/*"TUTORIAL_MESSAGE_TERMINAL_MENU"*/, 0LL);
  Instance = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*p_that )
    goto LABEL_20;
  v9 = (CommonUI_o *)Instance;
  TUTORIAL_MENU_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_POS_FS(*p_that, 0LL);
  Instance = *p_that;
  if ( !*p_that )
    goto LABEL_20;
  *(UnityEngine_Rect_o *)&v11 = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_RECT_FS(Instance, 0LL);
  v15 = *p_that;
  if ( !*p_that )
    goto LABEL_20;
  x = v15->fields.TUTORIAL_MENU_MESSAGE_POS.fields.x;
  y = v15->fields.TUTORIAL_MENU_MESSAGE_POS.fields.y;
  v18 = v11;
  v19 = v12;
  Instance = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo;
  v20 = v13;
  v21 = v14;
  if ( (BYTE3(TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo);
    Instance = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo;
  }
  static_fields = *(struct TerminalSceneComponent_StateTutorial3_MenuArrow___c_StaticFields **)&Instance->fields.TUTORIAL_COMBINE_ARROW_RECT.fields.m_XMin;
  _9__0_0 = static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(Instance->fields.mQuestInformation) & 4) != 0 && !LODWORD(Instance->fields.mFSM) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(_9__0_0, v24, Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__begin_b__0_0__, 0LL);
    v25 = TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields;
    v25->__9__0_0 = _9__0_0;
    sub_B52920(&v25->__9__0_0);
  }
  if ( !v9 )
LABEL_20:
    sub_B52A5C(Instance, v6);
  v27.fields.m_XMin = v18;
  v27.fields.m_YMin = v19;
  v27.fields.m_Width = v20;
  v27.fields.m_Height = v21;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v9,
    v8,
    TUTORIAL_MENU_ARROW_POS_FS,
    v27,
    0.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    _9__0_0,
    0LL);
  v26 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__1__,
    0LL);
  MainMenuBar__SetMenuBtnAct(v26, 0LL);
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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42BDCF5 & 1) == 0 )
  {
    sub_B52984(&TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo);
    byte_42BDCF5 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42BDCF6 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__2__);
    byte_42BDCF6 = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !v6 )
    sub_B52A5C(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_18183424(v6, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B52A5C(0LL, method);
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
  TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *v4; // x19
  TerminalSceneComponent_o *mTerminalList; // x0
  __int64 v6; // x1
  TerminalSceneComponent_o **p_that; // x20
  struct ScrTerminalListTop_o *v8; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8
  struct UIScrollView_o *scrollView; // x8
  __int64 v11; // x22
  System_String_o *v12; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v14; // x0
  CommonUI_o *v15; // x22
  UnityEngine_Vector2_o TUTORIAL_QUEST_ARROW_POS_FS; // kr00_8
  float v17; // s0
  float v18; // s1
  float v19; // s2
  float v20; // s3
  TerminalSceneComponent_o *v21; // x8
  float x; // s14
  float y; // s15
  float v24; // s10
  float v25; // s11
  float v26; // s12
  float v27; // s13
  System_Action_o *v28; // x23
  struct ScrTerminalListTop_o *v29; // x21
  System_Action_o *v30; // x20
  UnityEngine_Rect_o v31; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_42AD993 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_GameObjectExtensions_RemoveComponent_Collider___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__0__);
    sub_B52984(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__1__);
    sub_B52984(&TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_TypeInfo);
    sub_B52984(&StringLiteral_13622/*"TUTORIAL_MESSAGE_TERMINAL_QUEST3"*/);
    byte_42AD993 = 1;
  }
  v4 = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)sub_B52A54(TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_TypeInfo);
  TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0___ctor(v4, 0LL);
  if ( !v4 )
    goto LABEL_23;
  v4->fields.that = that;
  p_that = &v4->fields.that;
  sub_B52920(&v4->fields);
  if ( !v4->fields.that )
    goto LABEL_23;
  mTerminalList = (TerminalSceneComponent_o *)v4->fields.that->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_23;
  v4->fields.focus_quest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mTerminalList, 0LL);
  sub_B52920(&v4->fields.focus_quest);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  mTerminalList = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13622/*"TUTORIAL_MESSAGE_TERMINAL_QUEST3"*/, 0LL);
  if ( !*p_that )
    goto LABEL_23;
  v8 = (*p_that)->fields.mTerminalList;
  if ( !v8 )
    goto LABEL_23;
  mQuestBoardListViewManager = v8->fields.mQuestBoardListViewManager;
  if ( !mQuestBoardListViewManager )
    goto LABEL_23;
  scrollView = mQuestBoardListViewManager->fields.scrollView;
  if ( !scrollView )
    goto LABEL_23;
  v11 = *(_QWORD *)&scrollView->fields.showScrollBars;
  if ( !v11 )
    goto LABEL_23;
  v12 = (System_String_o *)mTerminalList;
  mTerminalList = *(TerminalSceneComponent_o **)(v11 + 48);
  if ( !mTerminalList )
    goto LABEL_23;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mTerminalList, 0LL);
  GameObjectExtensions__RemoveComponent_UIRootReScale_(
    gameObject,
    (const MethodInfo_1B7BDC8 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mTerminalList = *(TerminalSceneComponent_o **)(v11 + 40);
  if ( !mTerminalList )
    goto LABEL_23;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mTerminalList, 0LL);
  GameObjectExtensions__RemoveComponent_UIRootReScale_(
    v14,
    (const MethodInfo_1B7BDC8 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mTerminalList = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*p_that )
    goto LABEL_23;
  v15 = (CommonUI_o *)mTerminalList;
  TUTORIAL_QUEST_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(*p_that, 0LL);
  mTerminalList = *p_that;
  if ( !*p_that )
    goto LABEL_23;
  *(UnityEngine_Rect_o *)&v17 = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(mTerminalList, 0LL);
  v21 = *p_that;
  if ( !*p_that )
    goto LABEL_23;
  x = v21->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x;
  y = v21->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.y;
  v24 = v17;
  v25 = v18;
  v26 = v19;
  v27 = v20;
  v28 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v15 )
    goto LABEL_23;
  v31.fields.m_XMin = v24;
  v31.fields.m_YMin = v25;
  v31.fields.m_Width = v26;
  v31.fields.m_Height = v27;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v15,
    v12,
    TUTORIAL_QUEST_ARROW_POS_FS,
    v31,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v28,
    0LL);
  if ( !*p_that
    || (v29 = (*p_that)->fields.mTerminalList,
        v30 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(
          v30,
          (Il2CppObject *)v4,
          Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0LL),
        !v29) )
  {
LABEL_23:
    sub_B52A5C(mTerminalList, v6);
  }
  v29->fields.mQuestClickAct = v30;
  sub_B52920(&v29->fields.mQuestClickAct);
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
  if ( (byte_42BDCF7 & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
    byte_42BDCF7 = 1;
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
    || (this = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                            (UnityEngine_GameObject_o *)this,
                                                                                            (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0LL )
  {
LABEL_12:
    sub_B52A5C(this, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42BDCF8 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__2__);
    byte_42BDCF8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !v6 )
    sub_B52A5C(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_18183424(v6, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B52A5C(0LL, method);
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
  TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_o *v5; // x20
  ScrTerminalMap_o *mTerminalMap; // x0
  __int64 v7; // x1
  CommonUI_o *Instance; // x21
  UnityEngine_Vector2_o TUTORIAL_SPOT_ARROW_POS4_FS; // kr00_8
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v14; // x22
  struct ScrTerminalMap_o *v15; // x21
  System_Action_o *v16; // x19
  UnityEngine_Rect_o TUTORIAL_SPOT_ARROW_RECT4_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v18; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_42AD994 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__0__);
    sub_B52984(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__1__);
    sub_B52984(&TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_TypeInfo);
    byte_42AD994 = 1;
  }
  v5 = (TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_o *)sub_B52A54(TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_TypeInfo);
  TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_10;
  v5->fields.__4__this = this;
  sub_B52920(&v5->fields.__4__this);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_10;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_10;
  v5->fields.focus_spot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0LL);
  sub_B52920(&v5->fields);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  TUTORIAL_SPOT_ARROW_POS4_FS = TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_POS4_FS(that, 0LL);
  TUTORIAL_SPOT_ARROW_RECT4_FS = TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_RECT4_FS(that, 0LL);
  m_XMin = TUTORIAL_SPOT_ARROW_RECT4_FS.fields.m_XMin;
  m_YMin = TUTORIAL_SPOT_ARROW_RECT4_FS.fields.m_YMin;
  m_Width = TUTORIAL_SPOT_ARROW_RECT4_FS.fields.m_Width;
  m_Height = TUTORIAL_SPOT_ARROW_RECT4_FS.fields.m_Height;
  v14 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_10;
  v18.fields.m_XMin = m_XMin;
  v18.fields.m_YMin = m_YMin;
  v18.fields.m_Width = m_Width;
  v18.fields.m_Height = m_Height;
  CommonUI__OpenTutorialArrowMark(Instance, TUTORIAL_SPOT_ARROW_POS4_FS, 90.0, v18, v14, 0LL);
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__SetMapCamera_TutorialFocusSpot(mTerminalMap, v5->fields.focus_spot, 0.5, 0LL),
        v15 = that->fields.mTerminalMap,
        v16 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(
          v16,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0LL),
        !v15) )
  {
LABEL_10:
    sub_B52A5C(mTerminalMap, v7);
  }
  v15->fields.mFocusSpot = (struct SrcSpotBasePrefab_o *)v16;
  sub_B52920(&v15->fields.mFocusSpot);
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
      sub_B52A5C(that, that);
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
    sub_B52A5C(0LL, method);
  SrcSpotBasePrefab__SetBtnColliderEnable(focus_spot, 1, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0___begin_b__1(
        TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42BDCF9 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__2__);
    byte_42BDCF9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !v6 )
    sub_B52A5C(Instance, v4);
  CommonUI__CloseTutorialArrowMark(v6, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial4_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(this, method);
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
  TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_o *v4; // x19
  TerminalSceneComponent_o *Instance; // x0
  __int64 v6; // x1
  TerminalSceneComponent_o **p_that; // x21
  CommonUI_o *v8; // x20
  UnityEngine_Vector2_o TUTORIAL_COMBINE_ARROW_POS_FS; // kr00_8
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  struct TerminalSceneComponent_StateTutorial5_CombineArrow___c_StaticFields *static_fields; // x8
  System_Action_o *_9__0_0; // x21
  Il2CppObject *v16; // x22
  struct TerminalSceneComponent_StateTutorial5_CombineArrow___c_StaticFields *v17; // x0
  System_Action_o *v18; // x20
  UnityEngine_Rect_o TUTORIAL_COMBINE_ARROW_RECT_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v20; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_42AD995 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__begin_b__0_0__);
    sub_B52984(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__1__);
    sub_B52984(&TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_TypeInfo);
    sub_B52984(&TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo);
    byte_42AD995 = 1;
  }
  v4 = (TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_o *)sub_B52A54(TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_TypeInfo);
  TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0___ctor(v4, 0LL);
  if ( !v4 )
    goto LABEL_16;
  v4->fields.that = that;
  p_that = &v4->fields.that;
  sub_B52920(&v4->fields);
  Instance = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v4->fields.that )
    goto LABEL_16;
  v8 = (CommonUI_o *)Instance;
  TUTORIAL_COMBINE_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_COMBINE_ARROW_POS_FS(*p_that, 0LL);
  Instance = *p_that;
  if ( !*p_that )
    goto LABEL_16;
  TUTORIAL_COMBINE_ARROW_RECT_FS = TerminalSceneComponent__get_TUTORIAL_COMBINE_ARROW_RECT_FS(Instance, 0LL);
  m_XMin = TUTORIAL_COMBINE_ARROW_RECT_FS.fields.m_XMin;
  m_YMin = TUTORIAL_COMBINE_ARROW_RECT_FS.fields.m_YMin;
  m_Width = TUTORIAL_COMBINE_ARROW_RECT_FS.fields.m_Width;
  Instance = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo;
  m_Height = TUTORIAL_COMBINE_ARROW_RECT_FS.fields.m_Height;
  if ( (BYTE3(TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo);
    Instance = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo;
  }
  static_fields = *(struct TerminalSceneComponent_StateTutorial5_CombineArrow___c_StaticFields **)&Instance->fields.TUTORIAL_COMBINE_ARROW_RECT.fields.m_XMin;
  _9__0_0 = static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(Instance->fields.mQuestInformation) & 4) != 0 && !LODWORD(Instance->fields.mFSM) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__0_0,
      v16,
      Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__begin_b__0_0__,
      0LL);
    v17 = TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields;
    v17->__9__0_0 = _9__0_0;
    sub_B52920(&v17->__9__0_0);
  }
  if ( !v8 )
LABEL_16:
    sub_B52A5C(Instance, v6);
  v20.fields.m_XMin = m_XMin;
  v20.fields.m_YMin = m_YMin;
  v20.fields.m_Width = m_Width;
  v20.fields.m_Height = m_Height;
  CommonUI__OpenTutorialArrowMark(v8, TUTORIAL_COMBINE_ARROW_POS_FS, 0.0, v20, _9__0_0, 0LL);
  v18 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__1__,
    0LL);
  MainMenuBar__SetDispBtnAct(3, v18, 0LL);
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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42BDCFA & 1) == 0 )
  {
    sub_B52984(&TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo);
    byte_42BDCFA = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42BDCFB & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__2__);
    byte_42BDCFB = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !v6 )
    sub_B52A5C(Instance, v4);
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
    sub_B52A5C(that, method);
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
  TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_o *v4; // x19
  TerminalSceneComponent_o *v5; // x0
  __int64 v6; // x1
  TerminalSceneComponent_o **p_that; // x22
  CommonUI_o *Instance; // x20
  System_String_o *v9; // x21
  UnityEngine_Vector2_o TUTORIAL_MENU_ARROW_POS2_FS; // kr00_8
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  struct TerminalSceneComponent_StateTutorial5_MenuArrow___c_StaticFields *static_fields; // x8
  System_Action_o *_9__0_0; // x22
  Il2CppObject *v17; // x23
  struct TerminalSceneComponent_StateTutorial5_MenuArrow___c_StaticFields *v18; // x0
  System_Action_o *v19; // x20
  UnityEngine_Rect_o TUTORIAL_MENU_ARROW_RECT_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v21; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_42AD996 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__begin_b__0_0__);
    sub_B52984(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__1__);
    sub_B52984(&TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_TypeInfo);
    sub_B52984(&TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo);
    sub_B52984(&StringLiteral_13600/*"TUTORIAL_MESSAGE_COMBINE1"*/);
    byte_42AD996 = 1;
  }
  v4 = (TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_o *)sub_B52A54(TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_TypeInfo);
  TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0___ctor(v4, 0LL);
  if ( !v4 )
    goto LABEL_19;
  v4->fields.that = that;
  p_that = &v4->fields.that;
  sub_B52920(&v4->fields);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v5 = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13600/*"TUTORIAL_MESSAGE_COMBINE1"*/, 0LL);
  if ( !*p_that )
    goto LABEL_19;
  v9 = (System_String_o *)v5;
  TUTORIAL_MENU_ARROW_POS2_FS = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_POS2_FS(*p_that, 0LL);
  v5 = *p_that;
  if ( !*p_that )
    goto LABEL_19;
  TUTORIAL_MENU_ARROW_RECT_FS = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_RECT_FS(v5, 0LL);
  m_XMin = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_XMin;
  m_YMin = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_YMin;
  m_Width = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_Width;
  v5 = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo;
  m_Height = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_Height;
  if ( (BYTE3(TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo);
    v5 = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo;
  }
  static_fields = *(struct TerminalSceneComponent_StateTutorial5_MenuArrow___c_StaticFields **)&v5->fields.TUTORIAL_COMBINE_ARROW_RECT.fields.m_XMin;
  _9__0_0 = static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v5->fields.mQuestInformation) & 4) != 0 && !LODWORD(v5->fields.mFSM) )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(_9__0_0, v17, Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__begin_b__0_0__, 0LL);
    v18 = TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields;
    v18->__9__0_0 = _9__0_0;
    sub_B52920(&v18->__9__0_0);
  }
  if ( !Instance )
LABEL_19:
    sub_B52A5C(v5, v6);
  v21.fields.m_XMin = m_XMin;
  v21.fields.m_YMin = m_YMin;
  v21.fields.m_Width = m_Width;
  v21.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    Instance,
    v9,
    TUTORIAL_MENU_ARROW_POS2_FS,
    v21,
    0.0,
    (UnityEngine_Vector2_o)0xC224000000000000LL,
    -1,
    _9__0_0,
    0LL);
  v19 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__1__,
    0LL);
  MainMenuBar__SetMenuBtnAct(v19, 0LL);
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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42BDCFC & 1) == 0 )
  {
    sub_B52984(&TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo);
    byte_42BDCFC = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42BDCFD & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__2__);
    byte_42BDCFD = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !v6 )
    sub_B52A5C(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_18183424(v6, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B52A5C(0LL, method);
  TerminalSceneComponent__SetState(that, 10, 0LL);
}


void __fastcall TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__244___ctor(
        TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__244_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__244__MoveNext(
        TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__244_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v5; // x21
  UnityEngine_WaitUntil_o *v6; // x20
  bool result; // w0
  System_Action_o *openCampaignDirectBonus; // x0

  if ( (byte_42AD987 & 1) == 0 )
  {
    sub_B52984(&Method_System_Func_bool___ctor__);
    sub_B52984(&System_Func_bool__TypeInfo);
    sub_B52984(&Method_TerminalSceneComponent__CoWaitBlankEerthActionEnd_b__244_0__);
    sub_B52984(&UnityEngine_WaitUntil_TypeInfo);
    byte_42AD987 = 1;
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
    v5 = (System_Func_bool__o *)sub_B52A54(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v5,
      _4__this,
      Method_TerminalSceneComponent__CoWaitBlankEerthActionEnd_b__244_0__,
      (const MethodInfo_27742F0 *)Method_System_Func_bool___ctor__);
    v6 = (UnityEngine_WaitUntil_o *)sub_B52A54(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v6, v5, 0LL);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_B52920(&this->fields.__2__current);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__244__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__244_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__244__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__244_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__244_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
}


Il2CppObject *__fastcall TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__244__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__244_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__244__System_IDisposable_Dispose(
        TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__244_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__243___ctor(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__243_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__243__MoveNext(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__243_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v5; // x21
  UnityEngine_WaitUntil_o *v6; // x20
  bool result; // w0
  System_Action_o *openCampaignDirectBonus; // x0

  if ( (byte_42AD988 & 1) == 0 )
  {
    sub_B52984(&Method_System_Func_bool___ctor__);
    sub_B52984(&System_Func_bool__TypeInfo);
    sub_B52984(&Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_b__243_0__);
    sub_B52984(&UnityEngine_WaitUntil_TypeInfo);
    byte_42AD988 = 1;
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
    v5 = (System_Func_bool__o *)sub_B52A54(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v5,
      _4__this,
      Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_b__243_0__,
      (const MethodInfo_27742F0 *)Method_System_Func_bool___ctor__);
    v6 = (UnityEngine_WaitUntil_o *)sub_B52A54(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v6, v5, 0LL);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_B52920(&this->fields.__2__current);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__243__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__243_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__243__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__243_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__243_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
}


Il2CppObject *__fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__243__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__243_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__243__System_IDisposable_Dispose(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__243_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent__LoadAsync_d__171___ctor(
        TerminalSceneComponent__LoadAsync_d__171_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TerminalSceneComponent__LoadAsync_d__171__MoveNext(
        TerminalSceneComponent__LoadAsync_d__171_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct TerminalSceneComponent_o *_4__this; // x21
  __int64 v5; // x20
  System_Action_o *callback; // x0
  UserServantEntity_o *usd; // x22
  System_Action_o *v8; // x23
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
  System_Func_bool__o *v24; // x21
  UnityEngine_WaitUntil_o *v25; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_42AD989 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_System_Func_bool___ctor__);
    sub_B52984(&System_Func_bool__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__0__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__10__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__11__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__12__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__1__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__2__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__3__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__4__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__5__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__6__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__7__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__8__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__9__);
    sub_B52984(&TerminalSceneComponent___c__DisplayClass171_0_TypeInfo);
    sub_B52984(&UnityEngine_WaitUntil_TypeInfo);
    byte_42AD989 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = this->fields.callback;
    this->fields.__1__state = -1;
    if ( !callback )
      goto LABEL_25;
    System_Action__Invoke(callback, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  _4__this = this->fields.__4__this;
  v5 = sub_B52A54(TerminalSceneComponent___c__DisplayClass171_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_25;
  *(_BYTE *)(v5 + 23) = 0;
  *(_DWORD *)(v5 + 19) = 0;
  *(_DWORD *)(v5 + 24) = 0;
  *(_WORD *)(v5 + 16) = 256;
  *(_BYTE *)(v5 + 18) = 1;
  usd = this->fields.usd;
  v8 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v8,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__0__,
    0LL);
  if ( !_4__this )
    goto LABEL_25;
  TerminalSceneComponent__SetupStandServant(_4__this, usd, 0, v8, 0LL);
  callback = (System_Action_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !callback )
    goto LABEL_25;
  if ( !AtlasManager__isLoadedSkinData((AtlasManager_o *)callback, 4, 0LL) )
  {
    *(_BYTE *)(v5 + 17) = 0;
    v9 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      (Il2CppObject *)v5,
      Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__1__,
      0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__LoadUISkin(v9, 4, 10, 0LL);
  }
  TransitionInfo_k__BackingField = _4__this->fields._TransitionInfo_k__BackingField;
  if ( !TransitionInfo_k__BackingField
    || System_String__IsNullOrEmpty(TransitionInfo_k__BackingField->fields.voiceAssetName, 0LL) )
  {
    goto LABEL_18;
  }
  *(_BYTE *)(v5 + 18) = 0;
  callback = (System_Action_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v11 = _4__this->fields._TransitionInfo_k__BackingField;
  if ( !v11
    || (v12 = (SoundManager_o *)callback,
        voiceAssetName = v11->fields.voiceAssetName,
        v14 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__2__,
          0LL),
        !v12) )
  {
LABEL_25:
    sub_B52A5C(callback, method);
  }
  SoundManager__LoadAudioAssetStorage(v12, voiceAssetName, v14, 1, 0LL);
LABEL_18:
  v15 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__3__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadBanner(v15, 10, 0LL);
  v16 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__4__,
    0LL);
  AtlasManager__LoadFaceAtlas(v16, 10, 0LL);
  v17 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__5__,
    0LL);
  AtlasManager__LoadEquipFace(v17, 10, 0LL);
  v18 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__6__,
    0LL);
  AtlasManager__LoadFriendshipExceed(v18, 10, 0LL);
  v19 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__7__,
    0LL);
  AtlasManager__LoadCommandCode(v19, 10, 0LL);
  v20 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__8__,
    0LL);
  AtlasManager__LoadCommandCodeMini(v20, 10, 0LL);
  v21 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__9__,
    0LL);
  AtlasManager__LoadEventAtlas(v21, 10, 0LL);
  v22 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__10__,
    0LL);
  AtlasManager__LoadEventUI(v22, 10, 0LL);
  v23 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__11__,
    0LL);
  AtlasManager__LoadCharaGraphOptionAtlas(v23, 10, 0LL);
  v24 = (System_Func_bool__o *)sub_B52A54(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v24,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__12__,
    (const MethodInfo_27742F0 *)Method_System_Func_bool___ctor__);
  v25 = (UnityEngine_WaitUntil_o *)sub_B52A54(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v25, v24, 0LL);
  this->fields.__2__current = (Il2CppObject *)v25;
  p__2__current = &this->fields.__2__current;
  sub_B52920(p__2__current);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall TerminalSceneComponent__LoadAsync_d__171__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__LoadAsync_d__171_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TerminalSceneComponent__LoadAsync_d__171__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__LoadAsync_d__171_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_TerminalSceneComponent__LoadAsync_d__171_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
}


Il2CppObject *__fastcall TerminalSceneComponent__LoadAsync_d__171__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__LoadAsync_d__171_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TerminalSceneComponent__LoadAsync_d__171__System_IDisposable_Dispose(
        TerminalSceneComponent__LoadAsync_d__171_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__187___ctor(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__187_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__187__MoveNext(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__187_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  TerminalSceneComponent___c_c *v4; // x0
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__187_0; // x20
  Il2CppObject *v7; // x21
  struct TerminalSceneComponent___c_StaticFields *v8; // x0
  UnityEngine_WaitWhile_o *v9; // x21
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_42AD98A & 1) == 0 )
  {
    sub_B52984(&Method_System_Func_bool___ctor__);
    sub_B52984(&System_Func_bool__TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_TerminalSceneComponent___c__WaitStopSEQuestPhaseRewardEffect_b__187_0__);
    sub_B52984(&TerminalSceneComponent___c_TypeInfo);
    sub_B52984(&UnityEngine_WaitWhile_TypeInfo);
    byte_42AD98A = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__stopSe(0.0, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v4 = TerminalSceneComponent___c_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v4 = TerminalSceneComponent___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__187_0 = static_fields->__9__187_0;
  if ( !_9__187_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__187_0 = (System_Func_bool__o *)sub_B52A54(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      _9__187_0,
      v7,
      Method_TerminalSceneComponent___c__WaitStopSEQuestPhaseRewardEffect_b__187_0__,
      (const MethodInfo_27742F0 *)Method_System_Func_bool___ctor__);
    v8 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v8->__9__187_0 = _9__187_0;
    sub_B52920(&v8->__9__187_0);
  }
  v9 = (UnityEngine_WaitWhile_o *)sub_B52A54(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v9, _9__187_0, 0LL);
  this->fields.__2__current = (Il2CppObject *)v9;
  p__2__current = &this->fields.__2__current;
  sub_B52920(p__2__current);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__187__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__187_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__187__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__187_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__187_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
}


Il2CppObject *__fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__187__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__187_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__187__System_IDisposable_Dispose(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__187_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42AD969 & 1) == 0 )
  {
    sub_B52984(&TerminalSceneComponent___c_TypeInfo);
    byte_42AD969 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(TerminalSceneComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TerminalSceneComponent___c_o *)v1;
  sub_B52920(static_fields);
}


void __fastcall TerminalSceneComponent___c___ctor(TerminalSceneComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c___CheckRewardPopupChain_b__241_2(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42AD972 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD972 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v5);
  CommonUI__StartFriendPointNotification(Instance, action, 0LL);
}


void __fastcall TerminalSceneComponent___c___Fadein_MapDisp_Start_b__191_0(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42AD96C & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD96C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v5);
  CommonUI__StartLoginAndCampaignBonus(Instance, action, 0LL, 201, 0LL);
}


void __fastcall TerminalSceneComponent___c___Fadein_MapDisp_Start_b__191_1(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20

  if ( (byte_42AD96D & 1) == 0 )
  {
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD96D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v6
    || (CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__ClearLoginResultData(Instance, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B52A5C(Instance, v5);
  }
  CommonUI__ReleaseFortuneBonusAssetData(Instance, 0LL);
}


void __fastcall TerminalSceneComponent___c___Fadein_MapDisp_Start_b__191_6(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20

  if ( (byte_42AD96B & 1) == 0 )
  {
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD96B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v6 )
    sub_B52A5C(Instance, v5);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0LL);
}


ShopEntity_o *__fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__247_0(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42AD973 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B52984(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AD973 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v5);
  }
  return (ShopEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                           x,
                           (const MethodInfo_23E22D8 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
}


bool __fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__247_1(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return ShopEntity__IsAfterTheFreeShopReleaseDate(x, 0LL);
}


bool __fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__247_2(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  bool isQuestNotClearItemClosed; // w8
  bool result; // w0

  if ( !x )
    sub_B52A5C(this, 0LL);
  if ( !ShopEntity__isQuestNotClearItemClosed(x, 0, 0LL) )
    return 1;
  isQuestNotClearItemClosed = ShopEntity__isQuestNotClearItemClosed(x, 0, 0LL);
  result = 0;
  if ( isQuestNotClearItemClosed )
    return ShopEntity__IsSoldOut(x, 0LL);
  return result;
}


int32_t __fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__247_4(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields.id;
}


ShopEntity_o *__fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__247_5(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42AD974 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B52984(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AD974 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v5);
  }
  return (ShopEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                           x,
                           (const MethodInfo_23E22D8 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
}


int32_t __fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__247_6(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return ShopEntity__GetPrice(x, 0LL);
}


void __fastcall TerminalSceneComponent___c___RebootToNetworkError_b__208_0(
        TerminalSceneComponent___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ManagementManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42AD971 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_42AD971 = 1;
  }
  Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  ManagementManager__reboot(Instance, 0, 0LL);
}


void __fastcall TerminalSceneComponent___c___StartWindowMessage_b__193_1(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20

  if ( (byte_42AD96E & 1) == 0 )
  {
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD96E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v6 )
    sub_B52A5C(Instance, v5);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0LL);
}


void __fastcall TerminalSceneComponent___c___StartWindowMessage_b__193_2(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  System_String_o *QuestWindowMessage_k__BackingField; // x20

  if ( (byte_42AD96F & 1) == 0 )
  {
    sub_B52984(&ScriptManager_TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AD96F = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC796 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC796 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  QuestWindowMessage_k__BackingField = v4->static_fields->_QuestWindowMessage_k__BackingField;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayMessage(QuestWindowMessage_k__BackingField, action, 0, 0LL, -1, 0LL);
}


void __fastcall TerminalSceneComponent___c___StartWindowMessage_b__193_3(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  __int64 v5; // x1
  AvalonSceneManager_o *v6; // x20
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_42AD970 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AD970 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AD583 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AD583 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( v4->static_fields->_MessageDispType_k__BackingField != 2 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v4);
    TerminalPramsManager__InitMessageWindowData(0LL);
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0LL, 0, 0LL);
      goto LABEL_27;
    }
LABEL_28:
    sub_B52A5C(Instance, v5);
  }
  v6 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42ADA11 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42ADA11 = 1;
  }
  Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v6 )
    goto LABEL_28;
  AvalonSceneManager__transitionScene(v6, 40, 1, (Il2CppObject *)Instance[2].fields.targetRoot[2].monitor, 0LL);
LABEL_27:
  ActionExtensions__Call(action, 0LL);
}


bool __fastcall TerminalSceneComponent___c___WaitStopSEQuestPhaseRewardEffect_b__187_0(
        TerminalSceneComponent___c_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0

  if ( (byte_42AD96A & 1) == 0 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AD96A = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2DC )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2DC = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_isPlayingQuestPhaseRewardEffect_k__BackingField;
}


System_String_o *__fastcall TerminalSceneComponent___c___callbackTopLogin_b__206_0(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0LL);
}


System_String_o *__fastcall TerminalSceneComponent___c___callbackTopLogin_b__206_1(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass168_0___ctor(
        TerminalSceneComponent___c__DisplayClass168_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass168_0___SetEarthView_b__0(
        TerminalSceneComponent___c__DisplayClass168_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass168_0_o *v4; // x19
  struct TerminalSceneComponent_o *_4__this; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  struct TerminalSceneComponent_o *v7; // x8
  struct TerminalSceneComponent_o *v8; // x20

  v4 = this;
  if ( (byte_42AD975 & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponentInChildren_BaseCore___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass168_0_o *)sub_B52984(&StringLiteral_4342/*"CorePrefab"*/);
    byte_42AD975 = 1;
  }
  if ( !data )
    goto LABEL_12;
  _4__this = v4->fields.__4__this;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               data,
                                                                               (System_String_o *)StringLiteral_4342/*"CorePrefab"*/,
                                                                               (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (TerminalSceneComponent___c__DisplayClass168_0_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                              Object_WarBoardWaitTimeSetting,
                                                              (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !_4__this
    || (_4__this->fields.mEarthCoreObj = (struct UnityEngine_GameObject_o *)this,
        sub_B52920(&_4__this->fields.mEarthCoreObj),
        (v7 = v4->fields.__4__this) == 0LL)
    || (GameObjectExtensions__SafeSetParent_32091088(v7->fields.mEarthCoreObj, v7->fields.mUiRoot, 0LL),
        (v8 = v4->fields.__4__this) == 0LL)
    || (this = (TerminalSceneComponent___c__DisplayClass168_0_o *)v8->fields.mEarthCoreObj) == 0LL )
  {
LABEL_12:
    sub_B52A5C(this, data);
  }
  v8->fields.mEarthCore = (struct BaseCore_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_1B7B264 *)Method_UnityEngine_GameObject_GetComponentInChildren_BaseCore___);
  sub_B52920(&v8->fields.mEarthCore);
  ActionExtensions__Call(v4->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass171_0___ctor(
        TerminalSceneComponent___c__DisplayClass171_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass171_0___LoadAsync_b__0(
        TerminalSceneComponent___c__DisplayClass171_0_o *this,
        const MethodInfo *method)
{
  this->fields.isSetupStandServant = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass171_0___LoadAsync_b__1(
        TerminalSceneComponent___c__DisplayClass171_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadUISkin = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass171_0___LoadAsync_b__10(
        TerminalSceneComponent___c__DisplayClass171_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadEventUI = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass171_0___LoadAsync_b__11(
        TerminalSceneComponent___c__DisplayClass171_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadCharaGraphOptionAtlas = 1;
}


bool __fastcall TerminalSceneComponent___c__DisplayClass171_0___LoadAsync_b__12(
        TerminalSceneComponent___c__DisplayClass171_0_o *this,
        const MethodInfo *method)
{
  return this->fields.isSetupStandServant
      && this->fields.isLoadUISkin
      && this->fields.isLoadAudioAssetStorage
      && this->fields.isLoadBanner
      && this->fields.isLoadEquipFace
      && this->fields.isLoadCommandCode
      && this->fields.isLoadFriendshipExceed
      && this->fields.isLoadEventAtlas
      && this->fields.isLoadCommandCodeMini
      && this->fields.isLoadEventUI
      && this->fields.isLoadFaceAtlas
      && this->fields.isLoadCharaGraphOptionAtlas;
}


void __fastcall TerminalSceneComponent___c__DisplayClass171_0___LoadAsync_b__2(
        TerminalSceneComponent___c__DisplayClass171_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadAudioAssetStorage = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass171_0___LoadAsync_b__3(
        TerminalSceneComponent___c__DisplayClass171_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadBanner = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass171_0___LoadAsync_b__4(
        TerminalSceneComponent___c__DisplayClass171_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadFaceAtlas = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass171_0___LoadAsync_b__5(
        TerminalSceneComponent___c__DisplayClass171_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadEquipFace = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass171_0___LoadAsync_b__6(
        TerminalSceneComponent___c__DisplayClass171_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadFriendshipExceed = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass171_0___LoadAsync_b__7(
        TerminalSceneComponent___c__DisplayClass171_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadCommandCode = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass171_0___LoadAsync_b__8(
        TerminalSceneComponent___c__DisplayClass171_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadCommandCodeMini = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass171_0___LoadAsync_b__9(
        TerminalSceneComponent___c__DisplayClass171_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadEventAtlas = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass182_0___ctor(
        TerminalSceneComponent___c__DisplayClass182_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass182_0___SetupStandServant_b__0(
        TerminalSceneComponent___c__DisplayClass182_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass182_0_o *v2; // x19
  struct TerminalSceneComponent_o *_4__this; // x8

  v2 = this;
  if ( this->fields.isSlideIn )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (this = (TerminalSceneComponent___c__DisplayClass182_0_o *)_4__this->fields.mTerminalServant) == 0LL )
    {
      sub_B52A5C(this, method);
    }
    StandFigureSlideComponent__SlideIn((StandFigureSlideComponent_o *)this, 0LL, 0LL);
  }
  ActionExtensions__Call(v2->fields.endAction, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass182_0___SetupStandServant_b__1(
        TerminalSceneComponent___c__DisplayClass182_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass182_0_o *v2; // x19
  struct TerminalSceneComponent_o *_4__this; // x8
  struct TerminalSceneComponent_o *v4; // x8
  __n128 v5; // q0
  struct TerminalSceneComponent_o *v6; // x8
  struct StandFigureSlideComponent_o *mTerminalServant; // x9
  struct BaseCore_o *mEarthCore; // x8
  Il2CppObject *v9; // x20
  __n128 inited; // q0
  struct TerminalSceneComponent_o *v11; // x8
  int32_t mStandSvtIdx; // w22
  struct TerminalSceneComponent_o *v13; // x8
  struct BaseCore_o *v14; // x22
  struct TerminalSceneComponent_o *v15; // x8
  StandFigureSlideComponent_o *v16; // x19
  System_Action_o *v17; // x21
  struct TerminalSceneComponent_o *v18; // x8
  struct BaseCore_o *v19; // x21
  struct TerminalSceneComponent_o *v20; // x8

  v2 = this;
  if ( (byte_42AD976 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass182_1__SetupStandServant_b__2__);
    this = (TerminalSceneComponent___c__DisplayClass182_0_o *)sub_B52984(&TerminalSceneComponent___c__DisplayClass182_1_TypeInfo);
    byte_42AD976 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_60;
  this = (TerminalSceneComponent___c__DisplayClass182_0_o *)_4__this->fields.mTerminalServant;
  if ( !this )
    goto LABEL_60;
  if ( !*(&this[1].fields.isSlideIn + 1) )
  {
    this = (TerminalSceneComponent___c__DisplayClass182_0_o *)StandFigureSlideComponent__IsMoving(
                                                                (StandFigureSlideComponent_o *)this,
                                                                0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v4 = v2->fields.__4__this;
      if ( v4 )
      {
        this = (TerminalSceneComponent___c__DisplayClass182_0_o *)v4->fields.mEarthCore;
        if ( this )
        {
          if ( *(&this[3].fields.isSlideIn + 1) )
            return;
          v5.n128_f32[0] = ((float (__fastcall *)(TerminalSceneComponent___c__DisplayClass182_0_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                             this,
                             this->klass[1]._1.interfaceOffsets);
          if ( v5.n128_f32[0] < 0.0 || v5.n128_f32[0] > 0.0 )
            return;
          v6 = v2->fields.__4__this;
          if ( v6 )
          {
            mTerminalServant = v6->fields.mTerminalServant;
            if ( mTerminalServant )
            {
              mEarthCore = v6->fields.mEarthCore;
              if ( mTerminalServant->fields.mIsFrameIn )
              {
                if ( mEarthCore )
                {
                  if ( mEarthCore->fields.mIsFocusIn )
                    return;
                  v9 = (Il2CppObject *)sub_B52A54(TerminalSceneComponent___c__DisplayClass182_1_TypeInfo);
                  System_Object___ctor(v9, 0LL);
                  if ( v9 )
                  {
                    v9[1].monitor = v2;
                    sub_B52920(&v9[1].monitor);
                    this = (TerminalSceneComponent___c__DisplayClass182_0_o *)v2->fields.__4__this;
                    if ( this )
                    {
                      v9[1].klass = (Il2CppClass *)TerminalSceneComponent__GetNextStandServant(
                                                     (TerminalSceneComponent_o *)this,
                                                     0LL);
                      inited = sub_B52920(&v9[1]);
                      v11 = v2->fields.__4__this;
                      if ( v11 )
                      {
                        mStandSvtIdx = v11->fields.mStandSvtIdx;
                        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                        {
                          inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                        }
                        if ( !byte_42AC791 )
                        {
                          sub_B52984(&TerminalPramsManager_TypeInfo);
                          byte_42AC791 = 1;
                        }
                        this = (TerminalSceneComponent___c__DisplayClass182_0_o *)TerminalPramsManager_TypeInfo;
                        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                        {
                          inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                          this = (TerminalSceneComponent___c__DisplayClass182_0_o *)TerminalPramsManager_TypeInfo;
                        }
                        BYTE2(this[4].fields.__4__this->fields.TUTORIAL_QUEST_ARROW_POS.fields.x) = mStandSvtIdx != 0;
                        v13 = v2->fields.__4__this;
                        if ( v13 )
                        {
                          v14 = v13->fields.mEarthCore;
                          if ( !byte_42AC2AF )
                          {
                            sub_B52984(&TerminalPramsManager_TypeInfo);
                            this = (TerminalSceneComponent___c__DisplayClass182_0_o *)TerminalPramsManager_TypeInfo;
                            byte_42AC2AF = 1;
                          }
                          if ( (BYTE3(this[7].fields.__4__this) & 4) != 0 && !LODWORD(this[5].fields.__4__this) )
                          {
                            inited = j_il2cpp_runtime_class_init_0(this);
                            this = (TerminalSceneComponent___c__DisplayClass182_0_o *)TerminalPramsManager_TypeInfo;
                          }
                          if ( v14 )
                          {
                            this = (TerminalSceneComponent___c__DisplayClass182_0_o *)((__int64 (__fastcall *)(struct BaseCore_o *, bool, _QWORD, Il2CppMethodPointer, long double))v14->klass->vtable._4_FocusInOut.method)(
                                                                                        v14,
                                                                                        BYTE2(this[4].fields.__4__this->fields.TUTORIAL_QUEST_ARROW_POS.fields.x) == 0,
                                                                                        0LL,
                                                                                        v14->klass->vtable._5_Awake.methodPtr,
                                                                                        *(long double *)&inited);
                            v15 = v2->fields.__4__this;
                            if ( v15 )
                            {
                              v16 = v15->fields.mTerminalServant;
                              v17 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                              System_Action___ctor(
                                v17,
                                v9,
                                Method_TerminalSceneComponent___c__DisplayClass182_1__SetupStandServant_b__2__,
                                0LL);
                              if ( v16 )
                              {
                                StandFigureSlideComponent__SlideOut(v16, v17, 0, 0LL);
LABEL_59:
                                TerminalPramsManager__PlaySystemSE(0, 0LL);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else if ( mEarthCore )
              {
                if ( !mEarthCore->fields.mIsFocusIn )
                  return;
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  v5 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                }
                if ( !byte_42AC791 )
                {
                  sub_B52984(&TerminalPramsManager_TypeInfo);
                  byte_42AC791 = 1;
                }
                this = (TerminalSceneComponent___c__DisplayClass182_0_o *)TerminalPramsManager_TypeInfo;
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  v5 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  this = (TerminalSceneComponent___c__DisplayClass182_0_o *)TerminalPramsManager_TypeInfo;
                }
                BYTE2(this[4].fields.__4__this->fields.TUTORIAL_QUEST_ARROW_POS.fields.x) = 1;
                v18 = v2->fields.__4__this;
                if ( v18 )
                {
                  v19 = v18->fields.mEarthCore;
                  if ( !byte_42AC2AF )
                  {
                    sub_B52984(&TerminalPramsManager_TypeInfo);
                    this = (TerminalSceneComponent___c__DisplayClass182_0_o *)TerminalPramsManager_TypeInfo;
                    byte_42AC2AF = 1;
                  }
                  if ( (BYTE3(this[7].fields.__4__this) & 4) != 0 && !LODWORD(this[5].fields.__4__this) )
                  {
                    v5 = j_il2cpp_runtime_class_init_0(this);
                    this = (TerminalSceneComponent___c__DisplayClass182_0_o *)TerminalPramsManager_TypeInfo;
                  }
                  if ( v19 )
                  {
                    this = (TerminalSceneComponent___c__DisplayClass182_0_o *)((__int64 (__fastcall *)(struct BaseCore_o *, bool, _QWORD, Il2CppMethodPointer, long double))v19->klass->vtable._4_FocusInOut.method)(
                                                                                v19,
                                                                                BYTE2(this[4].fields.__4__this->fields.TUTORIAL_QUEST_ARROW_POS.fields.x) == 0,
                                                                                0LL,
                                                                                v19->klass->vtable._5_Awake.methodPtr,
                                                                                *(long double *)&v5);
                    v20 = v2->fields.__4__this;
                    if ( v20 )
                    {
                      this = (TerminalSceneComponent___c__DisplayClass182_0_o *)v20->fields.mTerminalServant;
                      if ( this )
                      {
                        StandFigureSlideComponent__SlideIn((StandFigureSlideComponent_o *)this, 0LL, 0LL);
                        goto LABEL_59;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_60:
      sub_B52A5C(this, method);
    }
  }
}


void __fastcall TerminalSceneComponent___c__DisplayClass182_1___ctor(
        TerminalSceneComponent___c__DisplayClass182_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass182_1___SetupStandServant_b__2(
        TerminalSceneComponent___c__DisplayClass182_1_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass182_1_o *v2; // x20
  struct TerminalSceneComponent___c__DisplayClass182_0_o *CS___8__locals1; // x8
  TerminalSceneComponent_o *_4__this; // x19
  UserServantEntity_o *usd; // x20

  v2 = this;
  if ( (byte_42AD977 & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass182_1_o *)sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AD977 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_14;
  _4__this = CS___8__locals1->fields.__4__this;
  usd = v2->fields._usd;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2AF )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2AF = 1;
  }
  this = (TerminalSceneComponent___c__DisplayClass182_1_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass182_1_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !_4__this )
LABEL_14:
    sub_B52A5C(this, method);
  TerminalSceneComponent__SetupStandServant(_4__this, usd, BYTE2(this[5].fields.CS___8__locals1[2].monitor), 0LL, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass188_0___ctor(
        TerminalSceneComponent___c__DisplayClass188_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass188_0___coFadein_WorldDisp_b__0(
        TerminalSceneComponent___c__DisplayClass188_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
  TerminalSceneComponent__StartWindowMessage(_4__this, 0LL, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass188_0___coFadein_WorldDisp_b__1(
        TerminalSceneComponent___c__DisplayClass188_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass188_0___coFadein_WorldDisp_b__2(
        TerminalSceneComponent___c__DisplayClass188_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  System_Action_o *klass; // x22
  TerminalSceneComponent_o *v4; // x20

  v2 = (Il2CppObject *)this;
  if ( (byte_42AD978 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass188_0_o *)sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass188_0__coFadein_WorldDisp_b__3__);
    byte_42AD978 = 1;
  }
  klass = (System_Action_o *)v2[2].klass;
  v4 = (TerminalSceneComponent_o *)v2[1].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v2,
      Method_TerminalSceneComponent___c__DisplayClass188_0__coFadein_WorldDisp_b__3__,
      0LL);
    v2[2].klass = (Il2CppClass *)klass;
    sub_B52920(&v2[2]);
  }
  if ( !v4 )
    sub_B52A5C(this, method);
  TerminalSceneComponent__StartWindowMessage(v4, klass, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass188_0___coFadein_WorldDisp_b__3(
        TerminalSceneComponent___c__DisplayClass188_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass189_0___ctor(
        TerminalSceneComponent___c__DisplayClass189_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass189_0___Fadein_MapDisp_b__0(
        TerminalSceneComponent___c__DisplayClass189_0_o *this,
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
    sub_B52A5C(_4__this, method);
  }
  v4->fields._FirstFadeTime_k__BackingField = 0.0;
}


void __fastcall TerminalSceneComponent___c__DisplayClass190_0___ctor(
        TerminalSceneComponent___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass190_0___Fadein_MapDisp_Load_b__0(
        TerminalSceneComponent___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
  TerminalSceneComponent__Fadein_MapDisp_Start(_4__this, this->fields.fade_time, this->fields.end_act, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass191_0___ctor(
        TerminalSceneComponent___c__DisplayClass191_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass191_0___Fadein_MapDisp_Start_b__2(
        TerminalSceneComponent___c__DisplayClass191_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct WarEntity_o *war_dat; // x8

  war_dat = this->fields.war_dat;
  if ( !war_dat || (this = (TerminalSceneComponent___c__DisplayClass191_0_o *)this->fields.__4__this) == 0LL )
    sub_B52A5C(this, action);
  TerminalSceneComponent__StartEventDailyPoint((TerminalSceneComponent_o *)this, war_dat->fields.eventId, action, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass191_0___Fadein_MapDisp_Start_b__3(
        TerminalSceneComponent___c__DisplayClass191_0_o *this,
        const MethodInfo *method)
{
  struct WarEntity_o *war_dat; // x9

  war_dat = this->fields.war_dat;
  if ( !war_dat || !this->fields.__4__this )
    sub_B52A5C(this, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffects(
    this->fields.__4__this,
    this->fields.fade_time,
    war_dat->fields.eventId,
    this->fields.end_act,
    0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass191_0___Fadein_MapDisp_Start_b__4(
        TerminalSceneComponent___c__DisplayClass191_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (mTerminalList = _4__this->fields.mTerminalList) == 0LL
    || (this = (TerminalSceneComponent___c__DisplayClass191_0_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0LL )
  {
    sub_B52A5C(this, action);
  }
  QuestBoardListViewManager__SetMode((QuestBoardListViewManager_o *)this, 4, action, 0, 0, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass191_0___Fadein_MapDisp_Start_b__5(
        TerminalSceneComponent___c__DisplayClass191_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass191_0_o *v4; // x20
  struct TerminalSceneComponent_o *_4__this; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  v4 = this;
  if ( (byte_42AD979 & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass191_0_o *)sub_B52984(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_42AD979 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (mTerminalMap = _4__this->fields.mTerminalMap) == 0LL
    || (this = (TerminalSceneComponent___c__DisplayClass191_0_o *)mTerminalMap->fields.allMaskObj) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (this = (TerminalSceneComponent___c__DisplayClass191_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__)) == 0LL) )
  {
    sub_B52A5C(this, action);
  }
  QuestAfterAction__LoadVoice((QuestAfterAction_o *)this, action, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass191_1___ctor(
        TerminalSceneComponent___c__DisplayClass191_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass191_1___Fadein_MapDisp_Start_b__7(
        TerminalSceneComponent___c__DisplayClass191_1_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *IsNullOrEmpty; // x0
  __int64 v4; // x8
  __int64 v5; // x8
  TerminalPramsManager_c *v6; // x0
  AvalonSceneManager_o *Instance; // x19
  struct TerminalSceneComponent___c__DisplayClass191_0_o *CS___8__locals1; // x8

  if ( (byte_42AD97A & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AD97A = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42AC2A0 )
  {
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AC2A0 = 1;
  }
  IsNullOrEmpty = (UnityEngine_GameObject_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    IsNullOrEmpty = (UnityEngine_GameObject_o *)TerminalSceneComponent_TypeInfo;
  }
  v4 = **(_QWORD **)&IsNullOrEmpty[7].fields.m_CachedPtr;
  if ( !v4 )
    goto LABEL_36;
  v5 = *(_QWORD *)(v4 + 256);
  if ( !v5 )
    goto LABEL_36;
  IsNullOrEmpty = *(UnityEngine_GameObject_o **)(v5 + 528);
  if ( !IsNullOrEmpty )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(IsNullOrEmpty, this->fields.oldActive, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC796 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC796 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  IsNullOrEmpty = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(
                                                v6->static_fields->_QuestWindowMessage_k__BackingField,
                                                0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42ADA11 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42ADA11 = 1;
    }
    IsNullOrEmpty = (UnityEngine_GameObject_o *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      IsNullOrEmpty = (UnityEngine_GameObject_o *)TerminalPramsManager_TypeInfo;
    }
    if ( Instance )
    {
      AvalonSceneManager__transitionScene(
        Instance,
        40,
        1,
        *(Il2CppObject **)(*(_QWORD *)&IsNullOrEmpty[7].fields.m_CachedPtr + 120LL),
        0LL);
      return;
    }
LABEL_36:
    sub_B52A5C(IsNullOrEmpty, method);
  }
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_36;
  IsNullOrEmpty = (UnityEngine_GameObject_o *)CS___8__locals1->fields.__4__this;
  if ( !IsNullOrEmpty )
    goto LABEL_36;
  TerminalSceneComponent__StartWindowMessage((TerminalSceneComponent_o *)IsNullOrEmpty, 0LL, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass194_0___ctor(
        TerminalSceneComponent___c__DisplayClass194_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass194_0___FadeInAndTriggerEventEffects_b__0(
        TerminalSceneComponent___c__DisplayClass194_0_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x21
  CommonUI_o *v6; // x20
  float fadeTime; // s8

  if ( (byte_42AD97B & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass194_0__FadeInAndTriggerEventEffects_b__2__);
    byte_42AD97B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  fadeTime = this->fields.fadeTime;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent___c__DisplayClass194_0__FadeInAndTriggerEventEffects_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B52920(&this->fields.__9__2);
  }
  if ( !v6 )
    sub_B52A5C(Instance, v4);
  CommonUI__maskFadein(v6, fadeTime, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass194_0___FadeInAndTriggerEventEffects_b__1(
        TerminalSceneComponent___c__DisplayClass194_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(_4__this, this->fields.eventId, this->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass194_0___FadeInAndTriggerEventEffects_b__2(
        TerminalSceneComponent___c__DisplayClass194_0_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__3; // x22
  QuestAfterAction_o *v6; // x20

  if ( (byte_42AD97C & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass194_0__FadeInAndTriggerEventEffects_b__3__);
    byte_42AD97C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  _9__3 = this->fields.__9__3;
  v6 = (QuestAfterAction_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent___c__DisplayClass194_0__FadeInAndTriggerEventEffects_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B52920(&this->fields.__9__3);
  }
  if ( !v6 )
    sub_B52A5C(Instance, v4);
  QuestAfterAction__Play(v6, _9__3, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass194_0___FadeInAndTriggerEventEffects_b__3(
        TerminalSceneComponent___c__DisplayClass194_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(_4__this, this->fields.eventId, this->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass194_0___FadeInAndTriggerEventEffects_b__4(
        TerminalSceneComponent___c__DisplayClass194_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(_4__this, this->fields.eventId, this->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass197_0___ctor(
        TerminalSceneComponent___c__DisplayClass197_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass197_0___FadeInAndTriggerEventEffectsNext_b__0(
        TerminalSceneComponent___c__DisplayClass197_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  TitleInfoControl_o *mTitleInfo; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (mTitleInfo = _4__this->fields.mTitleInfo) == 0LL )
    sub_B52A5C(this, method);
  TitleInfoControl__CheckSuperBossHpAnim(mTitleInfo, this->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass197_0___FadeInAndTriggerEventEffectsNext_b__1(
        TerminalSceneComponent___c__DisplayClass197_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
  TerminalSceneComponent__SetActionBGColl(_4__this, 0, this->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass224_0___ctor(
        TerminalSceneComponent___c__DisplayClass224_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass224_0___PlayEventTutorial_b__0(
        TerminalSceneComponent___c__DisplayClass224_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  TerminalSceneComponent___c__DisplayClass224_0_o *v4; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (mTerminalList = _4__this->fields.mTerminalList) == 0LL
    || (v4 = this, (this = (TerminalSceneComponent___c__DisplayClass224_0_o *)mTerminalList->fields.mActionBgColl) == 0LL)
    || (this = (TerminalSceneComponent___c__DisplayClass224_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL)) == 0LL )
  {
    sub_B52A5C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  ActionExtensions__Call(v4->fields.callbakAfter, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass241_0___ctor(
        TerminalSceneComponent___c__DisplayClass241_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass241_0___CheckRewardPopupChain_b__0(
        TerminalSceneComponent___c__DisplayClass241_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  ScrTerminalListTop_o *Instance; // x0
  __int64 v6; // x1
  struct TerminalSceneComponent_o *_4__this; // x8
  CommonUI_o *v8; // x20

  if ( (byte_42AD97D & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_DialogMessageMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD97D = 1;
  }
  Instance = (ScrTerminalListTop_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v8 = (CommonUI_o *)Instance, (Instance = _4__this->fields.mTerminalList) == 0LL)
    || (Instance = (ScrTerminalListTop_o *)ScrTerminalListTop__PopEventSvtGets(Instance, 0LL), !v8)
    || (CommonUI__SetupLoginResultData(v8, (System_Int32_array *)Instance, 0LL),
        (Instance = (ScrTerminalListTop_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (ScrTerminalListTop_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_DialogMessageMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v6);
  }
  DialogMessageMaster__ShowAvailables((DialogMessageMaster_o *)Instance, 1, action, 0, 0, 0, 0, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass241_0___CheckRewardPopupChain_b__1(
        TerminalSceneComponent___c__DisplayClass241_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__4; // x22
  CommonUI_o *v8; // x21

  if ( (byte_42AD97E & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass241_0__CheckRewardPopupChain_b__4__);
    byte_42AD97E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__4 = this->fields.__9__4;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent___c__DisplayClass241_0__CheckRewardPopupChain_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    sub_B52920(&this->fields.__9__4);
  }
  if ( !v8 )
    sub_B52A5C(Instance, v6);
  CommonUI__StartLoginAndCampaignBonus(v8, action, _9__4, -1, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass241_0___CheckRewardPopupChain_b__3(
        TerminalSceneComponent___c__DisplayClass241_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  if ( (byte_42AD97F & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD97F = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (TerminalSceneComponent__CheckOpenCampaignDirectBonus(_4__this, 0LL),
        (_4__this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__ClearLoginResultData((CommonUI_o *)_4__this, 0LL),
        (_4__this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B52A5C(_4__this, method);
  }
  CommonUI__ReleaseFortuneBonusAssetData((CommonUI_o *)_4__this, 0LL);
  ActionExtensions__Call(this->fields.afterChain, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass241_0___CheckRewardPopupChain_b__4(
        TerminalSceneComponent___c__DisplayClass241_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (TerminalSceneComponent___c__DisplayClass241_0_o *)_4__this->fields.mPlayerStatus) == 0LL )
    sub_B52A5C(this, method);
  ScrPlayerStatus__mfInitUserData((ScrPlayerStatus_o *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass242_0___ctor(
        TerminalSceneComponent___c__DisplayClass242_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass242_0___CheckOpenCampaignDirectBonus_b__0(
        TerminalSceneComponent___c__DisplayClass242_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(this, method);
  _4__this->fields._IsPlayingCampaignDirectBonus_k__BackingField = 0;
}


void __fastcall TerminalSceneComponent___c__DisplayClass242_0___CheckOpenCampaignDirectBonus_b__1(
        TerminalSceneComponent___c__DisplayClass242_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x20
  TerminalPramsManager_c *v5; // x0
  TerminalPramsManager_c *v6; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_42AD980 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AD980 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AD1A4 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AD1A4 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    sub_B52A5C(v5, v3);
  CommonUI__OpenCampaignDirectBonus(
    Instance,
    v5->static_fields->_CampaignDirectBonus_k__BackingField,
    this->fields.endAction,
    0LL);
  if ( !byte_42AC7A1 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC7A1 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v6->static_fields;
  static_fields->_CampaignDirectBonus_k__BackingField = 0LL;
  sub_B52920(&static_fields->_CampaignDirectBonus_k__BackingField);
  TerminalPramsManager__CampaignDirectBonus_SaveData(0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass249_0___ctor(
        TerminalSceneComponent___c__DisplayClass249_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass249_0___CheckSaveRouteSelect_b__0(
        TerminalSceneComponent___c__DisplayClass249_0_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  if ( (byte_42AD981 & 1) == 0 )
  {
    sub_B52984(&ScriptManager_TypeInfo);
    byte_42AD981 = 1;
  }
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__ClearSelectRouteArray(0LL);
  ScriptManager__ClearSelectRouteArrayInCollection(0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass251_0___ctor(
        TerminalSceneComponent___c__DisplayClass251_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass251_0___CheckMasterMissionReset_b__0(
        TerminalSceneComponent___c__DisplayClass251_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  TerminalSceneComponent_c *v8; // x0
  System_String_o *MASTER_MISSION_RESET_KEY; // x21
  System_String_o *v10; // x0
  CommonUI_o *Instance; // x19
  System_Action_o *v12; // x21

  if ( (byte_42AD982 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass251_1__CheckMasterMissionReset_b__1__);
    sub_B52984(&TerminalSceneComponent___c__DisplayClass251_1_TypeInfo);
    byte_42AD982 = 1;
  }
  v5 = sub_B52A54(TerminalSceneComponent___c__DisplayClass251_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 24) = this;
  sub_B52920(v5 + 24);
  *(_BYTE *)(v5 + 16) = isDecide;
  v8 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v8 = TerminalSceneComponent_TypeInfo;
  }
  MASTER_MISSION_RESET_KEY = v8->static_fields->MASTER_MISSION_RESET_KEY;
  v10 = System_Int64__ToString((int64_t)&this->fields, 0LL);
  UnityEngine_PlayerPrefs__SetString(MASTER_MISSION_RESET_KEY, v10, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass251_1__CheckMasterMissionReset_b__1__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B52A5C(v6, v7);
  CommonUI__CloseConfirmDialog_18158412(Instance, v12, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass251_0___CheckMasterMissionReset_b__2(
        TerminalSceneComponent___c__DisplayClass251_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  ScrPlayerStatus_o *mPlayerStatus; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (mPlayerStatus = _4__this->fields.mPlayerStatus) == 0LL )
    sub_B52A5C(this, method);
  ScrPlayerStatus__OpenMasterMission(mPlayerStatus, this->fields.callback, -1, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass251_1___ctor(
        TerminalSceneComponent___c__DisplayClass251_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass251_1___CheckMasterMissionReset_b__1(
        TerminalSceneComponent___c__DisplayClass251_1_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass251_1_o *v2; // x20
  CommonUI_o *v3; // x19
  AvalonSceneManager_c *v4; // x8
  Il2CppObject *CS___8__locals1; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *monitor; // x21
  struct TerminalSceneComponent___c__DisplayClass251_0_o *v8; // x8

  v2 = this;
  if ( (byte_42AD983 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (TerminalSceneComponent___c__DisplayClass251_1_o *)sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass251_0__CheckMasterMissionReset_b__2__);
    byte_42AD983 = 1;
  }
  if ( v2->fields.isDecide )
  {
    this = (TerminalSceneComponent___c__DisplayClass251_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v3 = (CommonUI_o *)this;
    v4 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v4 = AvalonSceneManager_TypeInfo;
    }
    CS___8__locals1 = (Il2CppObject *)v2->fields.CS___8__locals1;
    if ( CS___8__locals1 )
    {
      DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
      monitor = (System_Action_o *)CS___8__locals1[2].monitor;
      if ( !monitor )
      {
        monitor = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(
          monitor,
          CS___8__locals1,
          Method_TerminalSceneComponent___c__DisplayClass251_0__CheckMasterMissionReset_b__2__,
          0LL);
        CS___8__locals1[2].monitor = monitor;
        sub_B52920(&CS___8__locals1[2].monitor);
      }
      if ( v3 )
      {
        CommonUI__maskFadeout(v3, 1, DEFAULT_FADE_TIME, monitor, 0LL);
        return;
      }
    }
LABEL_14:
    sub_B52A5C(this, method);
  }
  v8 = v2->fields.CS___8__locals1;
  if ( !v8 )
    goto LABEL_14;
  ActionExtensions__Call(v8->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass252_0___ctor(
        TerminalSceneComponent___c__DisplayClass252_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass252_0___CheckNotificationDialog_b__0(
        TerminalSceneComponent___c__DisplayClass252_0_o *this,
        const MethodInfo *method)
{
  BattleResultBondsComponent_c *v3; // x0

  if ( (byte_42AD984 & 1) == 0 )
  {
    sub_B52984(&BattleResultBondsComponent_TypeInfo);
    byte_42AD984 = 1;
  }
  v3 = BattleResultBondsComponent_TypeInfo;
  if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
    v3 = BattleResultBondsComponent_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3->static_fields->GET_EXIST_SVT_KEY, 0LL);
  ActionExtensions__Call(this->fields.callBack, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass252_0___CheckNotificationDialog_b__2(
        TerminalSceneComponent___c__DisplayClass252_0_o *this,
        const MethodInfo *method)
{
  BattleResultBondsComponent_c *v3; // x0

  if ( (byte_42AD985 & 1) == 0 )
  {
    sub_B52984(&BattleResultBondsComponent_TypeInfo);
    byte_42AD985 = 1;
  }
  v3 = BattleResultBondsComponent_TypeInfo;
  if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
    v3 = BattleResultBondsComponent_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3->static_fields->GET_EXIST_SVT_KEY, 0LL);
  ActionExtensions__Call(this->fields.callBack, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass252_1___ctor(
        TerminalSceneComponent___c__DisplayClass252_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass252_1___CheckNotificationDialog_b__1(
        TerminalSceneComponent___c__DisplayClass252_1_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *CS___8__locals1; // x21
  GetSvtCoin_array *coin; // x20
  System_Action_o *klass; // x22
  CommonUI_o *v8; // x19

  if ( (byte_42AD986 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass252_0__CheckNotificationDialog_b__2__);
    byte_42AD986 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = (Il2CppObject *)this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  coin = this->fields.coin;
  klass = (System_Action_o *)CS___8__locals1[2].klass;
  v8 = (CommonUI_o *)Instance;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      CS___8__locals1,
      Method_TerminalSceneComponent___c__DisplayClass252_0__CheckNotificationDialog_b__2__,
      0LL);
    CS___8__locals1[2].klass = (Il2CppClass *)klass;
    sub_B52920(&CS___8__locals1[2]);
  }
  if ( !v8 )
LABEL_8:
    sub_B52A5C(Instance, v4);
  CommonUI__CreateServantCoinConfirmDialog(v8, 1, coin, klass, 0LL);
}


void __fastcall TerminalSceneComponent__coFadein_WorldDisp_d__188___ctor(
        TerminalSceneComponent__coFadein_WorldDisp_d__188_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TerminalSceneComponent__coFadein_WorldDisp_d__188__MoveNext(
        TerminalSceneComponent__coFadein_WorldDisp_d__188_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent__coFadein_WorldDisp_d__188_o *v2; // x19
  int32_t _1__state; // w8
  struct TerminalSceneComponent_o *_4__this; // x20
  Il2CppObject *v5; // x21
  bool *p_isAuto_5__2; // x21
  TerminalPramsManager_c *v7; // x0
  TerminalPramsManager_c *v8; // x0
  System_Collections_IEnumerator_o *v9; // x0
  System_Action_c *klass; // x8
  __int64 v11; // x8
  TerminalPramsManager_c *v12; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x21
  System_String_o *ShowingFolderBGM; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v18; // x8
  Il2CppObject *v19; // x21
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x0
  __int64 *v22; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  Il2CppObject *_8__1; // x19
  System_Action_o *v25; // x21
  AvalonSceneManager_c *v26; // x8
  System_Action_o *v27; // x19
  struct TerminalSceneComponent___c__DisplayClass188_0_o *v28; // x9
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_42AD98B & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_WarMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_B52984(&System_GC_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass188_0__coFadein_WorldDisp_b__0__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass188_0__coFadein_WorldDisp_b__1__);
    sub_B52984(&Method_TerminalSceneComponent___c__DisplayClass188_0__coFadein_WorldDisp_b__2__);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)sub_B52984(&TerminalSceneComponent___c__DisplayClass188_0_TypeInfo);
    byte_42AD98B = 1;
  }
  entity = 0LL;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    p_isAuto_5__2 = &v2->fields._isAuto_5__2;
    v2->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    v5 = (Il2CppObject *)sub_B52A54(TerminalSceneComponent___c__DisplayClass188_0_TypeInfo);
    System_Object___ctor(v5, 0LL);
    v2->fields.__8__1 = (struct TerminalSceneComponent___c__DisplayClass188_0_o *)v5;
    sub_B52920(&v2->fields.__8__1);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_128;
    *(_QWORD *)&this->fields.__1__state = v2->fields.__4__this;
    sub_B52920(&this->fields);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_128;
    this->fields.__2__current = (Il2CppObject *)v2->fields.endAct;
    sub_B52920(&this->fields.__2__current);
    v2->fields._isAuto_5__2 = 0;
    p_isAuto_5__2 = &v2->fields._isAuto_5__2;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42AC2D6 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC2D6 = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    if ( !v7->static_fields->_IsMapReturnFolder_k__BackingField )
    {
      if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v7);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)TerminalPramsManager__IsAuto(0LL);
      *p_isAuto_5__2 = (unsigned __int8)this & 1;
      if ( !_4__this )
        goto LABEL_128;
      TerminalSceneComponent__EndAuto(_4__this, 0LL);
      if ( !byte_42AC2DC )
      {
        sub_B52984(&TerminalPramsManager_TypeInfo);
        byte_42AC2DC = 1;
      }
      v8 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v8 = TerminalPramsManager_TypeInfo;
      }
      if ( v8->static_fields->_isPlayingQuestPhaseRewardEffect_k__BackingField )
      {
        v9 = TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect(_4__this, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)_4__this, v9, 0LL);
      }
      else
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__stopSe(0.0, 0LL);
      }
    }
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42AC2B4 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC2B4 = 1;
    }
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE6(this[2].fields.endAct[1].monitor) )
    {
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_42AC2A0 )
      {
        sub_B52984(&TerminalSceneComponent_TypeInfo);
        byte_42AC2A0 = 1;
      }
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)TerminalSceneComponent_TypeInfo;
      }
      klass = this[2].fields.endAct->klass;
      if ( !klass )
        goto LABEL_128;
      v11 = *(_QWORD *)&klass->_2.static_fields_size;
      if ( !v11 )
        goto LABEL_128;
      this = *(TerminalSceneComponent__coFadein_WorldDisp_d__188_o **)(v11 + 528);
      if ( !this )
        goto LABEL_128;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    }
    if ( !_4__this )
      goto LABEL_128;
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)_4__this->fields.mTerminalMap;
    if ( !this )
      goto LABEL_128;
    ScrTerminalMap__SetDisp((ScrTerminalMap_o *)this, 0, 0LL);
    if ( _4__this->fields._IsReq_InitEarthRotateY_k__BackingField )
    {
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)_4__this->fields.mEarthCore;
      _4__this->fields._IsReq_InitEarthRotateY_k__BackingField = 0;
      if ( !this )
        goto LABEL_128;
      BaseCore__SetRotateY_PointInitAngle((BaseCore_o *)this, 0LL);
    }
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)_4__this->fields.mTerminalList;
    if ( !this )
LABEL_128:
      sub_B52A5C(this, method);
    if ( !ScrTerminalListTop__isShowingFolder((ScrTerminalListTop_o *)this, 0LL) )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42AC2AA )
      {
        sub_B52984(&TerminalPramsManager_TypeInfo);
        byte_42AC2AA = 1;
      }
      v12 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v12 = TerminalPramsManager_TypeInfo;
      }
      v12->static_fields->_DispState_k__BackingField = 1;
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)_4__this->fields.mTitleInfo;
      if ( !this )
        goto LABEL_128;
      TitleInfoControl__SetActiveEventInfo_18331148((TitleInfoControl_o *)this, 1, 16, 0, 0, 0LL, 0LL);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_128;
      CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, 0, 1, 0LL);
    }
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_128;
    CommonUI__SetBgCameraActive((CommonUI_o *)this, 1, 0LL);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)_4__this->fields.mTerminalMap;
    if ( !this )
      goto LABEL_128;
    ScrTerminalMap__ReleaseMap((ScrTerminalMap_o *)this, 1, 0LL);
    if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
    System_GC__Collect_44029184(0LL);
    if ( v2->fields.isExecuteUnusedAssets )
    {
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( this )
      {
        AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          v2->fields.__2__current = (Il2CppObject *)AssetManager__WaitForExecutionUnloadUnuseAssets(
                                                      (AssetManager_o *)this,
                                                      0LL);
          p__2__current = &v2->fields.__2__current;
          sub_B52920(p__2__current);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
      goto LABEL_128;
    }
  }
  if ( !*p_isAuto_5__2 )
  {
    if ( !_4__this )
      goto LABEL_128;
LABEL_112:
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)_4__this->fields.mTerminalList;
    if ( !this )
      goto LABEL_128;
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)ScrTerminalListTop__get_IsActiveBlankEarth(
                                                                    (ScrTerminalListTop_o *)this,
                                                                    0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      TerminalSceneComponent__playDefaultBgm(_4__this, 0LL);
    mTerminalList = _4__this->fields.mTerminalList;
    if ( !mTerminalList )
      goto LABEL_128;
    if ( mTerminalList->fields.isBackFromBlankEarthMap )
    {
      _8__1 = (Il2CppObject *)v2->fields.__8__1;
      v25 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        v25,
        _8__1,
        Method_TerminalSceneComponent___c__DisplayClass188_0__coFadein_WorldDisp_b__1__,
        0LL);
      TerminalSceneComponent__StartWindowMessage(_4__this, v25, 0LL);
      return 0;
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v26 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v26 = AvalonSceneManager_TypeInfo;
    }
    v19 = (Il2CppObject *)v2->fields.__8__1;
    DEFAULT_FADE_TIME = v26->static_fields->DEFAULT_FADE_TIME;
    v21 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    v22 = &Method_TerminalSceneComponent___c__DisplayClass188_0__coFadein_WorldDisp_b__2__;
    goto LABEL_122;
  }
  if ( !_4__this )
    goto LABEL_128;
  this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)_4__this->fields.mTerminalList;
  if ( !this )
    goto LABEL_128;
  if ( !ScrTerminalListTop__isShowingFolder((ScrTerminalListTop_o *)this, 0LL) )
    goto LABEL_112;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2A2 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2A2 = 1;
  }
  this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_128;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          HIDWORD(this[2].fields.endAct->klass),
          (const MethodInfo_23E2334 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    goto LABEL_112;
  this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)_4__this->fields.mTerminalList;
  if ( !this )
    goto LABEL_128;
  ShowingFolderBGM = ScrTerminalListTop__GetShowingFolderBGM((ScrTerminalListTop_o *)this, 0LL);
  TerminalSceneComponent__playBgm(_4__this, ShowingFolderBGM, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2B4 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2B4 = 1;
  }
  this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)TerminalPramsManager_TypeInfo;
  }
  if ( BYTE6(this[2].fields.endAct[1].monitor) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v18 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v18 = AvalonSceneManager_TypeInfo;
    }
    v19 = (Il2CppObject *)v2->fields.__8__1;
    DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
    v21 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    v22 = &Method_TerminalSceneComponent___c__DisplayClass188_0__coFadein_WorldDisp_b__0__;
LABEL_122:
    v27 = v21;
    System_Action___ctor(v21, v19, *v22, 0LL);
    if ( !Instance )
      goto LABEL_128;
    CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v27, 0LL);
    return 0;
  }
  if ( !entity )
    goto LABEL_128;
  v28 = v2->fields.__8__1;
  if ( !v28 )
    goto LABEL_128;
  TerminalSceneComponent__FadeInAndTriggerEventEffects(
    _4__this,
    v2->fields.fadeTime,
    entity->fields.eventId,
    v28->fields.endAct,
    0LL);
  return 0;
}


Il2CppObject *__fastcall TerminalSceneComponent__coFadein_WorldDisp_d__188__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__coFadein_WorldDisp_d__188_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TerminalSceneComponent__coFadein_WorldDisp_d__188__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__coFadein_WorldDisp_d__188_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_TerminalSceneComponent__coFadein_WorldDisp_d__188_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
}


Il2CppObject *__fastcall TerminalSceneComponent__coFadein_WorldDisp_d__188__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__coFadein_WorldDisp_d__188_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TerminalSceneComponent__coFadein_WorldDisp_d__188__System_IDisposable_Dispose(
        TerminalSceneComponent__coFadein_WorldDisp_d__188_o *this,
        const MethodInfo *method)
{
  ;
}