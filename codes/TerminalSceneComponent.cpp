void __fastcall TerminalSceneComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  float v2; // s4
  float v3; // s5
  float v4; // s6
  float v5; // s7
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  TerminalSceneComponent_c *v11; // x8
  struct TerminalSceneComponent_StaticFields *static_fields; // x0
  __int64 v13; // x1
  struct TerminalSceneComponent_StaticFields *v14; // x0
  __int64 v15; // x1
  struct TerminalSceneComponent_StaticFields *v16; // x0
  __int64 v17; // x1
  struct TerminalSceneComponent_StaticFields *v18; // x0
  __int64 v19; // x1
  struct TerminalSceneComponent_StaticFields *v20; // x0
  __int64 v21; // x1
  struct UnityEngine_Color_o v22; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_41846EF & 1) == 0 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_10191/*"OverwriteCommonBG2"*/, v6);
    sub_B2C35C(&StringLiteral_10190/*"OverwriteCommonBG1"*/, v7);
    sub_B2C35C(&StringLiteral_20401/*"masterMissionResetKey"*/, v8);
    sub_B2C35C(&StringLiteral_13601/*"Terminal/EarthCore/{0:D2}"*/, v9);
    sub_B2C35C(&StringLiteral_10146/*"OrdealCallChapterPlayState"*/, v10);
    byte_41846EF = 1;
  }
  v23.fields.r = 0.2;
  v23.fields.g = 0.25882;
  v23.fields.b = 0.31765;
  v23.fields.a = 1.0;
  v22 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor(v23, v2, v3, v4, v5, (const MethodInfo *)&v22);
  v11 = TerminalSceneComponent_TypeInfo;
  TerminalSceneComponent_TypeInfo->static_fields->DEFAULT_AMBIENT_LIGHT_COLOR = v22;
  static_fields = v11->static_fields;
  v13 = StringLiteral_20401/*"masterMissionResetKey"*/;
  static_fields->MASTER_MISSION_RESET_KEY = (struct System_String_o *)StringLiteral_20401/*"masterMissionResetKey"*/;
  sub_B2C2F8(&static_fields->MASTER_MISSION_RESET_KEY, v13);
  v14 = TerminalSceneComponent_TypeInfo->static_fields;
  v15 = StringLiteral_13601/*"Terminal/EarthCore/{0:D2}"*/;
  v14->EARTH_ASSET_NAME = (struct System_String_o *)StringLiteral_13601/*"Terminal/EarthCore/{0:D2}"*/;
  sub_B2C2F8(&v14->EARTH_ASSET_NAME, v15);
  v16 = TerminalSceneComponent_TypeInfo->static_fields;
  v17 = StringLiteral_10146/*"OrdealCallChapterPlayState"*/;
  v16->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY = (struct System_String_o *)StringLiteral_10146/*"OrdealCallChapterPlayState"*/;
  sub_B2C2F8(&v16->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY, v17);
  v18 = TerminalSceneComponent_TypeInfo->static_fields;
  v19 = StringLiteral_10190/*"OverwriteCommonBG1"*/;
  v18->OVERWRITE_COMMON_BG_TYPE1_KEY = (struct System_String_o *)StringLiteral_10190/*"OverwriteCommonBG1"*/;
  sub_B2C2F8(&v18->OVERWRITE_COMMON_BG_TYPE1_KEY, v19);
  v20 = TerminalSceneComponent_TypeInfo->static_fields;
  v21 = StringLiteral_10191/*"OverwriteCommonBG2"*/;
  v20->OVERWRITE_COMMON_BG_TYPE2_KEY = (struct System_String_o *)StringLiteral_10191/*"OverwriteCommonBG2"*/;
  sub_B2C2F8(&v20->OVERWRITE_COMMON_BG_TYPE2_KEY, v21);
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
  *(_OWORD *)&this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x = xmmword_319E5B0;
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
  *(_OWORD *)&this->fields.TUTORIAL_MENU_MESSAGE_POS.fields.x = xmmword_319E5C0;
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
  __int64 v3; // x1
  TerminalSceneComponent_c *v4; // x0
  struct TerminalSceneComponent_StaticFields *static_fields; // x0
  UnityEngine_GameObject_o *UiFlag; // x0
  __int64 v7; // x1
  bool v8; // w1

  if ( (byte_41846AA & 1) == 0 )
  {
    sub_B2C35C(&ServantCommentManager_TypeInfo, method);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v3);
    byte_41846AA = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  static_fields = v4->static_fields;
  static_fields->mInstance = this;
  sub_B2C2F8(static_fields, this);
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
        v8 = 1;
        goto LABEL_17;
      }
    }
LABEL_18:
    sub_B2C434(UiFlag, v7);
  }
  UnityEngine_GameObject__SetActive(this->fields.mBgText, 0, 0LL);
  UiFlag = this->fields.mBgGradLeft;
  if ( !UiFlag )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(UiFlag, 0, 0LL);
  UiFlag = this->fields.mBgGradRight;
  if ( !UiFlag )
    goto LABEL_18;
  v8 = 0;
LABEL_17:
  UnityEngine_GameObject__SetActive(UiFlag, v8, 0LL);
}


void __fastcall TerminalSceneComponent__CallAfterTopHome(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  if ( this->fields.isTopLoginBusy )
  {
    this->fields.afterTopLogin = callback;
    sub_B2C2F8(&this->fields.afterTopLogin, callback);
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
    sub_B2C434(0LL, item);
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
    sub_B2C434(0LL, questId);
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
    sub_B2C434(this, item);
  }
}


void __fastcall TerminalSceneComponent__CallQuestInformationClose(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  QuestInformationComponent_o *mQuestInformation; // x0

  mQuestInformation = this->fields.mQuestInformation;
  if ( !mQuestInformation )
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, isPlaySe);
  QuestInformationComponent__CloseWindow(mQuestInformation, isPlaySe, 0LL);
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
  DataManager_o *Instance; // x0
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
  uint64_t v25; // x19
  System_DateTime_o t2; // [xsp+8h] [xbp-48h] BYREF
  uint64_t v28; // [xsp+10h] [xbp-40h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF
  System_DateTime_o v30; // 0:x0.8
  System_DateTime_o v31; // 0:x0.8
  System_DateTime_o v32; // 0:x0.8
  System_DateTime_o v33; // 0:x0.8
  System_DateTime_o v34; // 0:x0.8
  System_DateTime_o v35; // 0:x0.8
  System_DateTime_o v36; // 0:x0.8
  System_DateTime_o v37; // 0:x1.8

  if ( (byte_41846D8 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_B2C35C(&System_DateTime_TypeInfo, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v9);
    byte_41846D8 = 1;
  }
  v28 = 0LL;
  entity = 0LL;
  t2.fields.dateData = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_44;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_44:
    sub_B2C434(Instance, v11);
  if ( EventDetailEntity__IsEventDailyPoint((EventDetailEntity_o *)entity, 0LL) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4184724 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v12);
      byte_4184724 = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    BeforeTimeEventDailyPoint_k__BackingField = v13->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    dateData = NetworkManager__getDateTime_26271468(BeforeTimeEventDailyPoint_k__BackingField, 0LL).fields.dateData;
    if ( !byte_4184723 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v15);
      byte_4184723 = 1;
    }
    v17 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v17 = TerminalPramsManager_TypeInfo;
    }
    if ( BeforeTimeEventDailyPoint_k__BackingField < 1
      || v17->static_fields->_EventDailyPointEventId_k__BackingField != eventId )
    {
      return 1;
    }
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v28 = NetworkManager__getServerDateTime(0LL).fields.dateData;
    v30.fields.dateData = (uint64_t)&v28;
    Hour = System_DateTime__get_Hour(v30, 0LL);
    v19 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v19 = BalanceConfig_TypeInfo;
    }
    if ( Hour < v19->static_fields->EventDailyPointResetAt )
    {
      v31.fields.dateData = (uint64_t)&v28;
      v28 = System_DateTime__AddDays(v31, -1.0, 0LL).fields.dateData;
    }
    v32.fields.dateData = (uint64_t)&v28;
    Year = System_DateTime__get_Year(v32, 0LL);
    v33.fields.dateData = (uint64_t)&v28;
    Month = System_DateTime__get_Month(v33, 0LL);
    v34.fields.dateData = (uint64_t)&v28;
    Day = System_DateTime__get_Day(v34, 0LL);
    v23 = BalanceConfig_TypeInfo;
    v24 = Day;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v23 = BalanceConfig_TypeInfo;
    }
    v35.fields.dateData = (uint64_t)&t2;
    System_DateTime___ctor_15270708(v35, Year, Month, v24, v23->static_fields->EventDailyPointResetAt, 0, 0, 0LL);
    v25 = t2.fields.dateData;
    if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_DateTime_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    }
    v36.fields.dateData = dateData;
    v37.fields.dateData = v25;
    if ( System_DateTime__op_LessThanOrEqual(v36, v37, 0LL) )
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
  System_String_o *String_35342888; // x0
  const MethodInfo *v8; // x5

  if ( (byte_41846E4 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1642/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_TITLE"*/, callback);
    sub_B2C35C(&StringLiteral_18889/*"freeShopIds"*/, v5);
    sub_B2C35C(&StringLiteral_1641/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_DETAIL"*/, v6);
    byte_41846E4 = 1;
  }
  String_35342888 = UnityEngine_PlayerPrefs__GetString_35342888((System_String_o *)StringLiteral_18889/*"freeShopIds"*/, 0LL);
  if ( System_String__IsNullOrEmpty(String_35342888, 0LL) )
    ActionExtensions__Call(callback, 0LL);
  else
    TerminalSceneComponent__OpenExchangeDialogue(
      this,
      (System_String_o *)StringLiteral_18889/*"freeShopIds"*/,
      (System_String_o *)StringLiteral_1642/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_TITLE"*/,
      (System_String_o *)StringLiteral_1641/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_DETAIL"*/,
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
  System_String_o *String_35342888; // x0
  const MethodInfo *v8; // x5

  if ( (byte_41846E5 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1644/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_TITLE"*/, callback);
    sub_B2C35C(&StringLiteral_21811/*"returnRarePriShopIds"*/, v5);
    sub_B2C35C(&StringLiteral_1643/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_DETAIL"*/, v6);
    byte_41846E5 = 1;
  }
  String_35342888 = UnityEngine_PlayerPrefs__GetString_35342888((System_String_o *)StringLiteral_21811/*"returnRarePriShopIds"*/, 0LL);
  if ( System_String__IsNullOrEmpty(String_35342888, 0LL) )
    ActionExtensions__Call(callback, 0LL);
  else
    TerminalSceneComponent__OpenExchangeDialogue(
      this,
      (System_String_o *)StringLiteral_21811/*"returnRarePriShopIds"*/,
      (System_String_o *)StringLiteral_1644/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_TITLE"*/,
      (System_String_o *)StringLiteral_1643/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_DETAIL"*/,
      callback,
      v8);
}


void __fastcall TerminalSceneComponent__CheckLastPlayBgm(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTerminalList; // x20
  __int64 v4; // x1
  ScrTerminalListTop_o *v5; // x0

  if ( (byte_41846CE & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41846CE = 1;
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
      sub_B2C434(0LL, v4);
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
  TerminalSceneComponent___c__DisplayClass247_0_o *v16; // x19
  ScrPlayerStatus_o *mPlayerStatus; // x0
  __int64 v18; // x1
  System_Action_o **p_callback; // x20
  TerminalSceneComponent___c__DisplayClass247_0_Fields *p_fields; // x21
  TerminalSceneComponent_c *v21; // x0
  System_String_o *String; // x0
  int64_t v23; // x0
  CommonUI_o *Instance; // x20
  System_String_o *v25; // x21
  System_String_o *v26; // x22
  System_String_o *v27; // x23
  CommonConfirmDialog_ClickDelegate_o *v28; // x24
  TerminalSceneComponent_c *v29; // x0
  struct TerminalSceneComponent_StaticFields *static_fields; // x8
  int64_t v31; // x0
  System_String_o *MASTER_MISSION_RESET_KEY; // x19
  System_String_o *v33; // x0

  if ( (byte_41846E8 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, callback);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v8);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass247_0__CheckMasterMissionReset_b__0__, v9);
    sub_B2C35C(&TerminalSceneComponent___c__DisplayClass247_0_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_8846/*"MST_MISSION_CHANGE_MSG"*/, v11);
    sub_B2C35C(&StringLiteral_8845/*"MST_MISSION_CHANGE_DECIDE"*/, v12);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v13);
    sub_B2C35C(&StringLiteral_1/*""*/, v14);
    sub_B2C35C(&StringLiteral_953/*"0"*/, v15);
    byte_41846E8 = 1;
  }
  v16 = (TerminalSceneComponent___c__DisplayClass247_0_o *)sub_B2C42C(TerminalSceneComponent___c__DisplayClass247_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass247_0___ctor(v16, 0LL);
  if ( !v16 )
    goto LABEL_24;
  v16->fields.__4__this = this;
  sub_B2C2F8(&v16->fields.__4__this, this);
  v16->fields.callback = callback;
  p_callback = &v16->fields.callback;
  sub_B2C2F8(&v16->fields.callback, callback);
  mPlayerStatus = this->fields.mPlayerStatus;
  if ( !mPlayerStatus )
    goto LABEL_24;
  v16->fields.time = ScrPlayerStatus__GetMstMissionStarts(mPlayerStatus, 0LL);
  p_fields = &v16->fields;
  v21 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v21 = TerminalSceneComponent_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             v21->static_fields->MASTER_MISSION_RESET_KEY,
             (System_String_o *)StringLiteral_953/*"0"*/,
             0LL);
  v23 = System_Int64__Parse(String, 0LL);
  if ( p_fields->time )
  {
    if ( v23 )
    {
      if ( v23 != p_fields->time )
      {
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v25 = LocalizationManager__Get((System_String_o *)StringLiteral_8846/*"MST_MISSION_CHANGE_MSG"*/, 0LL);
        v26 = LocalizationManager__Get((System_String_o *)StringLiteral_8845/*"MST_MISSION_CHANGE_DECIDE"*/, 0LL);
        v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
        v28 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v28,
          (Il2CppObject *)v16,
          Method_TerminalSceneComponent___c__DisplayClass247_0__CheckMasterMissionReset_b__0__,
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
            v25,
            v26,
            v27,
            v28,
            BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
            0.0,
            15.0,
            0,
            1,
            0,
            240,
            0,
            0LL);
          return;
        }
LABEL_24:
        sub_B2C434(mPlayerStatus, v18);
      }
    }
    else
    {
      v29 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v29 = TerminalSceneComponent_TypeInfo;
      }
      static_fields = v29->static_fields;
      v31 = (int64_t)&v16->fields;
      MASTER_MISSION_RESET_KEY = static_fields->MASTER_MISSION_RESET_KEY;
      v33 = System_Int64__ToString(v31, 0LL);
      UnityEngine_PlayerPrefs__SetString(MASTER_MISSION_RESET_KEY, v33, 0LL);
    }
  }
  ActionExtensions__Call(*p_callback, 0LL);
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
  TerminalSceneComponent___c__DisplayClass248_0_o *v22; // x19
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  System_Action_o **p_callBack; // x20
  BattleResultBondsComponent_c *v26; // x0
  BattleResultBondsComponent_c *v27; // x0
  Il2CppObject *String_35342888; // x21
  UserPresentBoxWindow_resData_array *v29; // x0
  UserPresentBoxWindow_resData_array *v30; // x22
  int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v32; // x23
  __int64 v33; // x25
  UserPresentBoxWindow_resData_o *v34; // x8
  BattleResultBondsComponent_c *v35; // x0
  BattleResultBondsComponent_c *v36; // x0
  System_Action_o *_9__0; // x20
  EventServantEntity_o *v38; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v39; // x22
  TerminalSceneComponent___c__DisplayClass248_1_o *v40; // x22
  __int64 v41; // x19
  GetSvtCoin_o *v42; // x20
  WarEntity_o *v43; // x8
  System_String_o *v44; // x19
  CommonUI_o *v45; // x22
  __int64 v46; // x0
  __int64 v47; // x0
  WarEntity_o *v48; // [xsp+38h] [xbp-58h] BYREF
  UserServantEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_41846E9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callBack);
    sub_B2C35C(&BattleResultBondsComponent_TypeInfo, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_SvtCoinMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v8);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v9);
    sub_B2C35C(&GetSvtCoin___TypeInfo, v10);
    sub_B2C35C(&GetSvtCoin_TypeInfo, v11);
    sub_B2C35C(&Method_JsonManager_DeserializeArray_GetSvts___, v12);
    sub_B2C35C(&JsonManager_TypeInfo, v13);
    sub_B2C35C(&LocalizationManager_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass248_0__CheckNotificationDialog_b__0__, v17);
    sub_B2C35C(&TerminalSceneComponent___c__DisplayClass248_0_TypeInfo, v18);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass248_1__CheckNotificationDialog_b__1__, v19);
    sub_B2C35C(&TerminalSceneComponent___c__DisplayClass248_1_TypeInfo, v20);
    sub_B2C35C(&StringLiteral_12438/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, v21);
    byte_41846E9 = 1;
  }
  entity = 0LL;
  v48 = 0LL;
  v22 = (TerminalSceneComponent___c__DisplayClass248_0_o *)sub_B2C42C(TerminalSceneComponent___c__DisplayClass248_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass248_0___ctor(v22, 0LL);
  if ( !v22 )
    goto LABEL_61;
  v22->fields.callBack = callBack;
  p_callBack = &v22->fields.callBack;
  sub_B2C2F8(&v22->fields, callBack);
  v26 = BattleResultBondsComponent_TypeInfo;
  if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
    v26 = BattleResultBondsComponent_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v26->static_fields->GET_EXIST_SVT_KEY, 0LL) )
  {
    v27 = BattleResultBondsComponent_TypeInfo;
    if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
      v27 = BattleResultBondsComponent_TypeInfo;
    }
    String_35342888 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_35342888(
                                        v27->static_fields->GET_EXIST_SVT_KEY,
                                        0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v29 = JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
            String_35342888,
            (const MethodInfo_1AACFE4 *)Method_JsonManager_DeserializeArray_GetSvts___);
    if ( v29 )
    {
      v30 = v29;
      if ( *(_QWORD *)&v29->max_length )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_61;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
        max_length = v30->max_length;
        if ( max_length >= 1 )
        {
          v32 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
          v33 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v33 >= max_length )
              goto LABEL_62;
            v34 = v30->m_Items[v33];
            if ( !v34 || !v32 )
              goto LABEL_61;
            Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                          v32,
                                          &entity,
                                          *(_QWORD *)&v34->fields.overflowType,
                                          (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
            if ( (_DWORD)v33 == v30->max_length - 1 )
            {
              v35 = BattleResultBondsComponent_TypeInfo;
              if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
                v35 = BattleResultBondsComponent_TypeInfo;
              }
              UnityEngine_PlayerPrefs__DeleteKey(v35->static_fields->GET_EXIST_SVT_KEY, 0LL);
              ActionExtensions__Call(*p_callBack, 0LL);
            }
            max_length = v30->max_length;
            if ( (int)++v33 >= max_length )
              goto LABEL_33;
          }
          _9__0 = v22->fields.__9__0;
          v38 = (EventServantEntity_o *)Instance;
          if ( !_9__0 )
          {
            _9__0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            System_Action___ctor(
              _9__0,
              (Il2CppObject *)v22,
              Method_TerminalSceneComponent___c__DisplayClass248_0__CheckNotificationDialog_b__0__,
              0LL);
            v22->fields.__9__0 = _9__0;
            sub_B2C2F8(&v22->fields.__9__0, _9__0);
          }
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SvtCoinMaster___);
          if ( entity )
          {
            v39 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
            Instance = (DataManager_o *)UserServantEntity__getSvtId(entity, 0LL);
            if ( v39 )
            {
              Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                            v39,
                                            &v48,
                                            (int32_t)Instance,
                                            (const MethodInfo_24E412C *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !v48 )
                  goto LABEL_61;
                if ( *(&v48->fields.id + 1) >= 1 )
                {
                  v40 = (TerminalSceneComponent___c__DisplayClass248_1_o *)sub_B2C42C(TerminalSceneComponent___c__DisplayClass248_1_TypeInfo);
                  TerminalSceneComponent___c__DisplayClass248_1___ctor(v40, 0LL);
                  if ( !v40 )
                    goto LABEL_61;
                  v40->fields.CS___8__locals1 = v22;
                  sub_B2C2F8(&v40->fields.CS___8__locals1, v22);
                  v41 = sub_B2C374(GetSvtCoin___TypeInfo, 1LL);
                  v42 = (GetSvtCoin_o *)sub_B2C42C(GetSvtCoin_TypeInfo);
                  GetSvtCoin___ctor(v42, 0LL);
                  v43 = v48;
                  if ( !v48 )
                    goto LABEL_61;
                  if ( !v42 )
                    goto LABEL_61;
                  v42->fields.svtId = v48->fields.id;
                  v42->fields.num = *(&v43->fields.id + 1);
                  v42->fields.itemId = (int32_t)v43->fields.age;
                  if ( !v41 )
                    goto LABEL_61;
                  Instance = (DataManager_o *)sub_B2C41C(v42, *(_QWORD *)(*(_QWORD *)v41 + 64LL));
                  if ( !Instance )
                  {
                    v47 = sub_B2C454();
                    sub_B2C400(v47, 0LL);
                  }
                  if ( !*(_DWORD *)(v41 + 24) )
                  {
LABEL_62:
                    v46 = sub_B2C460(Instance);
                    sub_B2C400(v46, 0LL);
                  }
                  *(_QWORD *)(v41 + 32) = v42;
                  sub_B2C2F8(v41 + 32, v42);
                  v40->fields.coin = (struct GetSvtCoin_array *)v41;
                  sub_B2C2F8(&v40->fields, v41);
                  _9__0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                  System_Action___ctor(
                    _9__0,
                    (Il2CppObject *)v40,
                    Method_TerminalSceneComponent___c__DisplayClass248_1__CheckNotificationDialog_b__1__,
                    0LL);
                }
              }
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v44 = LocalizationManager__Get((System_String_o *)StringLiteral_12438/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, 0LL);
              v45 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              Instance = (DataManager_o *)EventServantEntity__GetGetMessage(v38, 0LL);
              if ( v45 )
              {
                CommonUI__OpenNotificationDialog(
                  v45,
                  v44,
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
          sub_B2C434(Instance, v24);
        }
      }
    }
LABEL_33:
    v36 = BattleResultBondsComponent_TypeInfo;
    if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
      v36 = BattleResultBondsComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__DeleteKey(v36->static_fields->GET_EXIST_SVT_KEY, 0LL);
  }
  ActionExtensions__Call(*p_callBack, 0LL);
}


void __fastcall TerminalSceneComponent__CheckOpenCampaignDirectBonus(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ScrTerminalListTop_o *mTerminalList; // x0
  int v8; // w20
  ScrTerminalListTop_o *v9; // x21
  bool IsBlankEarthAction; // w22
  TerminalSceneComponent___c_c *v11; // x8
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__238_0; // x23
  Il2CppObject *v14; // x24
  struct TerminalSceneComponent___c_StaticFields *v15; // x0
  const MethodInfo *v16; // x2
  __int64 v17; // x1
  CommonUI_CampaignDirectBonusData_array *CampaignDirectBonus; // x24
  TerminalPramsManager_c *v19; // x0
  struct TerminalPramsManager_StaticFields *v20; // x0
  const MethodInfo *v21; // x0
  System_Collections_IEnumerator_o *v22; // x0

  if ( (byte_41846E1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v4);
    sub_B2C35C(&Method_TerminalSceneComponent___c__CheckOpenCampaignDirectBonus_b__238_0__, v5);
    sub_B2C35C(&TerminalSceneComponent___c_TypeInfo, v6);
    byte_41846E1 = 1;
  }
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_35;
  mTerminalList = (ScrTerminalListTop_o *)ScrTerminalListTop__CheckTerminalTopEffect(mTerminalList, 0LL);
  if ( !this->fields.mTerminalList )
    goto LABEL_35;
  v8 = (int)mTerminalList;
  mTerminalList = (ScrTerminalListTop_o *)ScrTerminalListTop__GetCurrentLoginEntity(this->fields.mTerminalList, 0LL);
  if ( !this->fields.mTerminalList )
    goto LABEL_35;
  v9 = mTerminalList;
  IsBlankEarthAction = ScrTerminalListTop__IsBlankEarthAction(this->fields.mTerminalList, 0LL);
  v11 = TerminalSceneComponent___c_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v11 = TerminalSceneComponent___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__238_0 = static_fields->__9__238_0;
  if ( !_9__238_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__238_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__238_0,
      v14,
      Method_TerminalSceneComponent___c__CheckOpenCampaignDirectBonus_b__238_0__,
      0LL);
    v15 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v15->__9__238_0 = _9__238_0;
    sub_B2C2F8(&v15->__9__238_0, _9__238_0);
  }
  if ( v8 <= 0 && v9 == 0LL && !IsBlankEarthAction )
  {
    ActionExtensions__Call(_9__238_0, 0LL);
    return;
  }
  mTerminalList = (ScrTerminalListTop_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalList )
    goto LABEL_35;
  if ( !CommonUI__get_CampaignDirectBonus((CommonUI_o *)mTerminalList, 0LL) )
    goto LABEL_27;
  mTerminalList = (ScrTerminalListTop_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalList )
LABEL_35:
    sub_B2C434(mTerminalList, method);
  CampaignDirectBonus = CommonUI__get_CampaignDirectBonus((CommonUI_o *)mTerminalList, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_418471D )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v17);
    byte_418471D = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  v20 = v19->static_fields;
  v20->_CampaignDirectBonus_k__BackingField = CampaignDirectBonus;
  sub_B2C2F8(&v20->_CampaignDirectBonus_k__BackingField, CampaignDirectBonus);
  TerminalPramsManager__CampaignDirectBonus_SaveData(v21);
LABEL_27:
  if ( !v9 && v8 >= 1 )
  {
    v22 = TerminalSceneComponent__CoWaitTerminalTopEffectEnd(this, _9__238_0, v16);
LABEL_33:
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v22, 0LL);
    return;
  }
  if ( IsBlankEarthAction )
  {
    v22 = TerminalSceneComponent__CoWaitBlankEerthActionEnd(this, _9__238_0, v16);
    goto LABEL_33;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalSceneComponent__CheckPlayChapterStart(
        TerminalSceneComponent_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  QuestTree_o *v8; // x0
  __int64 v9; // x1
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v11; // x20
  int32_t StartType; // w0
  const MethodInfo *v13; // x1
  int32_t targetId; // w19

  if ( (byte_41846DA & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, *(_QWORD *)&warId);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v4);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v5);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v6);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v7);
    byte_41846DA = 1;
  }
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v8 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !v8 )
    goto LABEL_22;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(v8, warId, 0LL);
  if ( !WarEntityByWarID )
    return (char)WarEntityByWarID;
  v11 = WarEntityByWarID;
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
    if ( TerminalPramsManager__IsWarStartedId(warId, v13) )
      goto LABEL_14;
LABEL_20:
    LOBYTE(WarEntityByWarID) = 1;
    return (char)WarEntityByWarID;
  }
  targetId = v11->fields.targetId;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v8 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !v8 )
LABEL_22:
    sub_B2C434(v8, v9);
  if ( !clsQuestCheck__IsQuestClear((clsQuestCheck_o *)v8, targetId, 0, 0LL) )
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
  TerminalSceneComponent___c__DisplayClass237_0_o *v33; // x20
  ChainableActionBase_o *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x0
  Il2CppObject *mTerminalList; // x23
  System_Action_Action__array *v38; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v39; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v40; // x22
  Il2CppObject *Instance; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v42; // x22
  Il2CppObject *v43; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v44; // x22
  Il2CppObject *v45; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v46; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v47; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v48; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v49; // x22
  TerminalSceneComponent___c_c *v50; // x0
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__237_2; // x22
  Il2CppObject *v53; // x23
  struct TerminalSceneComponent___c_StaticFields *v54; // x0
  System_Action_Action__o *v55; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v56; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v57; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v58; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v59; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v60; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v61; // x22
  ActionChain_o *v62; // x19
  System_Action_array *v63; // x21
  System_Action_o *v64; // x22
  TerminalPramsManager_c *v65; // x0
  __int64 v66; // x0
  __int64 v67; // x0

  if ( (byte_41846E0 & 1) == 0 )
  {
    sub_B2C35C(&ActionChain_TypeInfo, afterChain);
    sub_B2C35C(&System_Action___TypeInfo, v7);
    sub_B2C35C(&System_Action_Action____TypeInfo, v8);
    sub_B2C35C(&Method_System_Action_Action___ctor__, v9);
    sub_B2C35C(&System_Action_Action__TypeInfo, v10);
    sub_B2C35C(&System_Action_TypeInfo, v11);
    sub_B2C35C(&Method_CommonUI_StartLoginMessages__, v12);
    sub_B2C35C(&Method_CommonUI_StartServantEventJoinLeaveNotification__, v13);
    sub_B2C35C(&Method_ScrTerminalListTop_ShowTerminalMessagesDialogue__, v14);
    sub_B2C35C(&Method_ScrTerminalListTop_StartShowWarClearReward__, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v17);
    sub_B2C35C(&Method_TerminalSceneComponent_CheckExchangeDialogTheFree__, v18);
    sub_B2C35C(&Method_TerminalSceneComponent_CheckExchangeDialogTheReturn__, v19);
    sub_B2C35C(&Method_TerminalSceneComponent_CheckMasterMissionReset__, v20);
    sub_B2C35C(&Method_TerminalSceneComponent_CheckNotificationDialog__, v21);
    sub_B2C35C(&Method_TerminalSceneComponent_CheckSaveRouteSelect__, v22);
    sub_B2C35C(&Method_TerminalSceneComponent_CheckSpecialAscensionTutorial__, v23);
    sub_B2C35C(&Method_TerminalSceneComponent_CheckTutorialOnTerminalAfterFreeExchangeDialog__, v24);
    sub_B2C35C(&Method_TerminalSceneComponent_CheckTutorialOnTerminal__, v25);
    sub_B2C35C(&TutorialFlag_TypeInfo, v26);
    sub_B2C35C(&Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__237_2__, v27);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass237_0__CheckRewardPopupChain_b__0__, v28);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass237_0__CheckRewardPopupChain_b__1__, v29);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass237_0__CheckRewardPopupChain_b__3__, v30);
    sub_B2C35C(&TerminalSceneComponent___c__DisplayClass237_0_TypeInfo, v31);
    sub_B2C35C(&TerminalSceneComponent___c_TypeInfo, v32);
    byte_41846E0 = 1;
  }
  v33 = (TerminalSceneComponent___c__DisplayClass237_0_o *)sub_B2C42C(TerminalSceneComponent___c__DisplayClass237_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass237_0___ctor(v33, 0LL);
  if ( !v33 )
    goto LABEL_77;
  v33->fields.__4__this = this;
  sub_B2C2F8(&v33->fields, this);
  v33->fields.afterChain = afterChain;
  sub_B2C2F8(&v33->fields.afterChain, afterChain);
  if ( checkTutorialEnded )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_28617756(102, 0LL) )
    {
      ActionExtensions__Call(v33->fields.afterChain, 0LL);
      goto LABEL_70;
    }
  }
  v36 = sub_B2C374(System_Action_Action____TypeInfo, 15LL);
  mTerminalList = (Il2CppObject *)this->fields.mTerminalList;
  v38 = (System_Action_Action__array *)v36;
  v39 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v39,
    mTerminalList,
    Method_ScrTerminalListTop_StartShowWarClearReward__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
  if ( !v38 )
LABEL_77:
    sub_B2C434(v34, v35);
  if ( v39 )
  {
    v34 = (ChainableActionBase_o *)sub_B2C41C(v39, v38->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_76;
  }
  if ( !v38->max_length )
    goto LABEL_75;
  v38->m_Items[0] = (System_Action_Action__o *)v39;
  sub_B2C2F8(v38->m_Items, v39);
  v40 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v40,
    (Il2CppObject *)v33,
    Method_TerminalSceneComponent___c__DisplayClass237_0__CheckRewardPopupChain_b__0__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
  if ( v40 )
  {
    v34 = (ChainableActionBase_o *)sub_B2C41C(v40, v38->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_76;
  }
  if ( v38->max_length <= 1 )
    goto LABEL_75;
  v38->m_Items[1] = (System_Action_Action__o *)v40;
  sub_B2C2F8(&v38->m_Items[1], v40);
  Instance = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v42 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v42,
    Instance,
    Method_CommonUI_StartServantEventJoinLeaveNotification__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
  if ( v42 )
  {
    v34 = (ChainableActionBase_o *)sub_B2C41C(v42, v38->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_76;
  }
  if ( v38->max_length <= 2 )
    goto LABEL_75;
  v38->m_Items[2] = (System_Action_Action__o *)v42;
  sub_B2C2F8(&v38->m_Items[2], v42);
  v43 = (Il2CppObject *)this->fields.mTerminalList;
  v44 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v44,
    v43,
    Method_ScrTerminalListTop_ShowTerminalMessagesDialogue__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
  if ( v44 )
  {
    v34 = (ChainableActionBase_o *)sub_B2C41C(v44, v38->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_76;
  }
  if ( v38->max_length <= 3 )
    goto LABEL_75;
  v38->m_Items[3] = (System_Action_Action__o *)v44;
  sub_B2C2F8(&v38->m_Items[3], v44);
  v45 = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v46 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v46,
    v45,
    Method_CommonUI_StartLoginMessages__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
  if ( v46 )
  {
    v34 = (ChainableActionBase_o *)sub_B2C41C(v46, v38->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_76;
  }
  if ( v38->max_length <= 4 )
    goto LABEL_75;
  v38->m_Items[4] = (System_Action_Action__o *)v46;
  sub_B2C2F8(&v38->m_Items[4], v46);
  v47 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v47,
    (Il2CppObject *)v33,
    Method_TerminalSceneComponent___c__DisplayClass237_0__CheckRewardPopupChain_b__1__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
  if ( v47 )
  {
    v34 = (ChainableActionBase_o *)sub_B2C41C(v47, v38->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_76;
  }
  if ( v38->max_length <= 5 )
    goto LABEL_75;
  v38->m_Items[5] = (System_Action_Action__o *)v47;
  sub_B2C2F8(&v38->m_Items[5], v47);
  v48 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v48,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckSpecialAscensionTutorial__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
  if ( v48 )
  {
    v34 = (ChainableActionBase_o *)sub_B2C41C(v48, v38->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_76;
  }
  if ( v38->max_length <= 6 )
    goto LABEL_75;
  v38->m_Items[6] = (System_Action_Action__o *)v48;
  sub_B2C2F8(&v38->m_Items[6], v48);
  v49 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v49,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckTutorialOnTerminal__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
  if ( v49 )
  {
    v34 = (ChainableActionBase_o *)sub_B2C41C(v49, v38->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_76;
  }
  if ( v38->max_length <= 7 )
    goto LABEL_75;
  v38->m_Items[7] = (System_Action_Action__o *)v49;
  sub_B2C2F8(&v38->m_Items[7], v49);
  v50 = TerminalSceneComponent___c_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v50 = TerminalSceneComponent___c_TypeInfo;
  }
  static_fields = v50->static_fields;
  _9__237_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__237_2;
  if ( _9__237_2 )
    goto LABEL_42;
  if ( (BYTE3(v50->vtable._0_Equals.methodPtr) & 4) != 0 && !v50->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v50);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
  }
  v53 = (Il2CppObject *)static_fields->__9;
  _9__237_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    _9__237_2,
    v53,
    Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__237_2__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
  v54 = TerminalSceneComponent___c_TypeInfo->static_fields;
  v54->__9__237_2 = (struct System_Action_Action__o *)_9__237_2;
  sub_B2C2F8(&v54->__9__237_2, _9__237_2);
  if ( _9__237_2 )
  {
LABEL_42:
    v34 = (ChainableActionBase_o *)sub_B2C41C(_9__237_2, v38->obj.klass->_1.element_class);
    v55 = (System_Action_Action__o *)_9__237_2;
    if ( !v34 )
      goto LABEL_76;
  }
  else
  {
    v55 = 0LL;
  }
  if ( v38->max_length <= 8 )
    goto LABEL_75;
  v38->m_Items[8] = v55;
  sub_B2C2F8(&v38->m_Items[8], _9__237_2);
  v56 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v56,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckNotificationDialog__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
  if ( v56 )
  {
    v34 = (ChainableActionBase_o *)sub_B2C41C(v56, v38->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_76;
  }
  if ( v38->max_length <= 9 )
    goto LABEL_75;
  v38->m_Items[9] = (System_Action_Action__o *)v56;
  sub_B2C2F8(&v38->m_Items[9], v56);
  v57 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v57,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckMasterMissionReset__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
  if ( v57 )
  {
    v34 = (ChainableActionBase_o *)sub_B2C41C(v57, v38->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_76;
  }
  if ( v38->max_length <= 0xA )
    goto LABEL_75;
  v38->m_Items[10] = (System_Action_Action__o *)v57;
  sub_B2C2F8(&v38->m_Items[10], v57);
  v58 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v58,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckSaveRouteSelect__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
  if ( v58 )
  {
    v34 = (ChainableActionBase_o *)sub_B2C41C(v58, v38->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_76;
  }
  if ( v38->max_length <= 0xB )
    goto LABEL_75;
  v38->m_Items[11] = (System_Action_Action__o *)v58;
  sub_B2C2F8(&v38->m_Items[11], v58);
  v59 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v59,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckExchangeDialogTheFree__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
  if ( v59 )
  {
    v34 = (ChainableActionBase_o *)sub_B2C41C(v59, v38->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_76;
  }
  if ( v38->max_length <= 0xC )
    goto LABEL_75;
  v38->m_Items[12] = (System_Action_Action__o *)v59;
  sub_B2C2F8(&v38->m_Items[12], v59);
  v60 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v60,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckExchangeDialogTheReturn__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
  if ( v60 )
  {
    v34 = (ChainableActionBase_o *)sub_B2C41C(v60, v38->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_76;
  }
  if ( v38->max_length <= 0xD )
    goto LABEL_75;
  v38->m_Items[13] = (System_Action_Action__o *)v60;
  sub_B2C2F8(&v38->m_Items[13], v60);
  v61 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v61,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckTutorialOnTerminalAfterFreeExchangeDialog__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
  if ( v61 )
  {
    v34 = (ChainableActionBase_o *)sub_B2C41C(v61, v38->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_76;
  }
  if ( v38->max_length <= 0xE )
    goto LABEL_75;
  v38->m_Items[14] = (System_Action_Action__o *)v61;
  sub_B2C2F8(&v38->m_Items[14], v61);
  v62 = (ActionChain_o *)sub_B2C42C(ActionChain_TypeInfo);
  ActionChain___ctor_21119660(v62, v38, 0LL);
  v63 = (System_Action_array *)sub_B2C374(System_Action___TypeInfo, 1LL);
  v64 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v64,
    (Il2CppObject *)v33,
    Method_TerminalSceneComponent___c__DisplayClass237_0__CheckRewardPopupChain_b__3__,
    0LL);
  if ( !v63 )
    goto LABEL_77;
  if ( v64 )
  {
    v34 = (ChainableActionBase_o *)sub_B2C41C(v64, v63->obj.klass->_1.element_class);
    if ( !v34 )
    {
LABEL_76:
      v67 = sub_B2C454();
      sub_B2C400(v67, 0LL);
    }
  }
  if ( !v63->max_length )
  {
LABEL_75:
    v66 = sub_B2C460(v34);
    sub_B2C400(v66, 0LL);
  }
  v63->m_Items[0] = v64;
  sub_B2C2F8(v63->m_Items, v64);
  if ( !v62 )
    goto LABEL_77;
  v34 = ChainableActionBase__Final((ChainableActionBase_o *)v62, v63, 0LL);
  if ( !v34 )
    goto LABEL_77;
  ChainableActionBase__Execute(v34, 0LL);
LABEL_70:
  v65 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__DeleteClearDatas((const MethodInfo *)v65);
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
  TerminalSceneComponent___c__DisplayClass245_0_o *v11; // x20
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  NetworkManager_ResultCallbackFunc_o *v14; // x19
  System_Int32_array *routes; // [xsp+8h] [xbp-28h] BYREF
  int32_t phase; // [xsp+18h] [xbp-18h] BYREF
  int32_t questId; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_41846E7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, callback);
    sub_B2C35C(&Method_NetworkManager_getRequest_BattleRouteSelectRequest___, v4);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_B2C35C(&ScriptManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass245_0__CheckSaveRouteSelect_b__0__, v9);
    sub_B2C35C(&TerminalSceneComponent___c__DisplayClass245_0_TypeInfo, v10);
    byte_41846E7 = 1;
  }
  questId = 0;
  phase = 0;
  routes = 0LL;
  v11 = (TerminalSceneComponent___c__DisplayClass245_0_o *)sub_B2C42C(TerminalSceneComponent___c__DisplayClass245_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass245_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_22;
  v11->fields.callback = callback;
  sub_B2C2F8(&v11->fields, callback);
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    if ( !Instance )
      goto LABEL_22;
    if ( QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, phase, 0LL) )
    {
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)v11,
        Method_TerminalSceneComponent___c__DisplayClass245_0__CheckSaveRouteSelect_b__0__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = (DataManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                    v14,
                                    (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
      if ( Instance )
      {
        BattleRouteSelectRequest__beginRequest((BattleRouteSelectRequest_o *)Instance, questId, phase, routes, 0LL);
        return;
      }
LABEL_22:
      sub_B2C434(Instance, v13);
    }
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__ClearSelectRouteArray(0LL);
    ScriptManager__ClearSelectRouteArrayInCollection(0LL);
  }
  ActionExtensions__Call(v11->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent__CheckSpecialAscensionTutorial(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *v4; // x20
  struct ScrTerminalMap_o *mTerminalMap; // x8

  v4 = this;
  if ( (byte_41846EA & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_B2C35C(&CombineRootComponent_TypeInfo, callback);
    byte_41846EA = 1;
  }
  if ( !v4->fields.isTutorialAfter )
  {
    mTerminalMap = v4->fields.mTerminalMap;
    if ( !mTerminalMap || (this = (TerminalSceneComponent_o *)mTerminalMap->fields.mapButtonGrid) == 0LL )
      sub_B2C434(this, callback);
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
  CommonUI_o *Instance; // x0
  __int64 v15; // x1
  bool v16; // w20
  TerminalPramsManager_c *v17; // x0
  int32_t FirstWarId; // w21
  TerminalPramsManager_c *v19; // x0
  TerminalPramsManager_c *v20; // x0
  clsQuestCheck_o *v21; // x0
  clsQuestCheck_o *v22; // x21
  int32_t v23; // w0
  int32_t v24; // w0
  __int64 v25; // x1
  int32_t v26; // w0
  int32_t v27; // w0
  int32_t v28; // w8
  int32_t Value; // w21
  TerminalPramsManager_c *v30; // x0
  TerminalPramsManager_c *v32; // x0
  int32_t v33; // w1

  if ( (byte_41846D7 & 1) == 0 )
  {
    sub_B2C35C(&OpeningMovieData_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v5);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v6);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v7);
    sub_B2C35C(&TutorialFlag_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_13528/*"TUTORIAL_QUEST_ID1"*/, v9);
    sub_B2C35C(&StringLiteral_13529/*"TUTORIAL_QUEST_ID2"*/, v10);
    sub_B2C35C(&StringLiteral_13530/*"TUTORIAL_QUEST_ID3"*/, v11);
    sub_B2C35C(&StringLiteral_13531/*"TUTORIAL_QUEST_ID4"*/, v12);
    byte_41846D7 = 1;
  }
  this->fields.mTutorialKind = 0;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28617756(102, 0LL) )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( TutorialFlag__GetProgress(0LL) == 4 )
      return 0;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_B2C434(Instance, v15);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C8F )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v13);
    byte_4183C8F = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  this->fields.mIsStart_LoginBonusWhiteBg = !v17->static_fields->_IsAutoResume_k__BackingField;
  if ( !byte_4183C70 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v13);
    v17 = TerminalPramsManager_TypeInfo;
    byte_4183C70 = 1;
  }
  if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = TerminalPramsManager_TypeInfo;
  }
  v17->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_4183C6F )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v13);
    v17 = TerminalPramsManager_TypeInfo;
    byte_4183C6F = 1;
  }
  if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = TerminalPramsManager_TypeInfo;
  }
  v17->static_fields->_DispState_k__BackingField = 2;
  if ( (BYTE3(OpeningMovieData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OpeningMovieData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo);
  }
  FirstWarId = OpeningMovieData__GetFirstWarId(0LL);
  if ( !byte_4183C69 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v15);
    byte_4183C69 = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  v19->static_fields->_WarId_k__BackingField = FirstWarId;
  if ( !byte_4183C9C )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v15);
    byte_4183C9C = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v20 = TerminalPramsManager_TypeInfo;
  }
  v20->static_fields->_SpotId_k__BackingField = -1;
  Instance = (CommonUI_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_104;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, 0LL);
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
  v21 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  this->fields.mTutorialKind = 5;
  v22 = v21;
  Instance = (CommonUI_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_13528/*"TUTORIAL_QUEST_ID1"*/, 0LL);
  if ( !v22 )
    goto LABEL_104;
  if ( !clsQuestCheck__IsQuestClear(v22, (int32_t)Instance, 0, 0LL) )
  {
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_13528/*"TUTORIAL_QUEST_ID1"*/, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C6B )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v15);
      byte_4183C6B = 1;
    }
    v30 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v30 = TerminalPramsManager_TypeInfo;
    }
    v30->static_fields->_QuestId_k__BackingField = Value;
    Instance = (CommonUI_o *)this->fields.mTerminalList;
    if ( Instance )
    {
      ScrTerminalListTop__SelectedQuest((ScrTerminalListTop_o *)Instance, 0LL);
      return 1;
    }
    goto LABEL_104;
  }
  v23 = ConstantMaster__getValue((System_String_o *)StringLiteral_13529/*"TUTORIAL_QUEST_ID2"*/, 0LL);
  if ( !clsQuestCheck__IsQuestClear(v22, v23, 0, 0LL) )
  {
    v16 = 0;
    v28 = 1;
    goto LABEL_89;
  }
  v24 = ConstantMaster__getValue((System_String_o *)StringLiteral_13530/*"TUTORIAL_QUEST_ID3"*/, 0LL);
  if ( !clsQuestCheck__IsQuestClear(v22, v24, 0, 0LL) )
  {
    v16 = 0;
    v28 = 2;
    goto LABEL_89;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(1, 0LL) )
  {
    v16 = 0;
    v28 = 3;
    goto LABEL_89;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_28617756(101, 0LL) )
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
    if ( !byte_4183C9D )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v25);
      byte_4183C9D = 1;
    }
    v32 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v32 = TerminalPramsManager_TypeInfo;
    }
    v32->static_fields->_SummonType_k__BackingField = 1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_104;
    v33 = 20;
LABEL_101:
    v16 = 1;
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v33, 1, 0LL, 0LL);
    return v16;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(3, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_104;
    v33 = 40;
    goto LABEL_101;
  }
  v26 = ConstantMaster__getValue((System_String_o *)StringLiteral_13531/*"TUTORIAL_QUEST_ID4"*/, 0LL);
  v16 = 0;
  if ( clsQuestCheck__IsQuestClear(v22, v26, 0, 0LL) )
    return v16;
  v27 = ConstantMaster__getValue((System_String_o *)StringLiteral_13531/*"TUTORIAL_QUEST_ID4"*/, 0LL);
  if ( clsQuestCheck__mfGetQuestPhaseByQuestID(v22, v27, 0LL) <= 0 )
  {
    v16 = 0;
    v28 = 4;
LABEL_89:
    this->fields.mTutorialKind = v28;
    return v16;
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
    sub_B2C434(this, callback);
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
  const MethodInfo *v5; // x1

  if ( (byte_41846B2 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    sub_B2C35C(&TerminalTransitionInfo_TypeInfo, v3);
    byte_41846B2 = 1;
  }
  v4 = (TerminalTransitionInfo_o *)sub_B2C42C(TerminalTransitionInfo_TypeInfo);
  TerminalTransitionInfo___ctor(v4, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__TerminalTransitionInfoSave_SaveData(v4, v5);
  this->fields._TransitionInfo_k__BackingField = 0LL;
  sub_B2C2F8(&this->fields._TransitionInfo_k__BackingField, 0LL);
}


System_Collections_IEnumerator_o *__fastcall TerminalSceneComponent__CoWaitBlankEerthActionEnd(
        TerminalSceneComponent_o *this,
        System_Action_o *openCampaignDirectBonus,
        const MethodInfo *method)
{
  TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__240_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_41846E3 & 1) == 0 )
  {
    sub_B2C35C(&TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__240_TypeInfo, openCampaignDirectBonus);
    byte_41846E3 = 1;
  }
  v5 = (TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__240_o *)sub_B2C42C(TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__240_TypeInfo);
  TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__240___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  v5->fields.__4__this = this;
  sub_B2C2F8(&v5->fields.__4__this, this);
  v5->fields.openCampaignDirectBonus = openCampaignDirectBonus;
  sub_B2C2F8(&v5->fields.openCampaignDirectBonus, openCampaignDirectBonus);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd(
        TerminalSceneComponent_o *this,
        System_Action_o *openCampaignDirectBonus,
        const MethodInfo *method)
{
  TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__239_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_41846E2 & 1) == 0 )
  {
    sub_B2C35C(&TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__239_TypeInfo, openCampaignDirectBonus);
    byte_41846E2 = 1;
  }
  v5 = (TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__239_o *)sub_B2C42C(TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__239_TypeInfo);
  TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__239___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  v5->fields.__4__this = this;
  sub_B2C2F8(&v5->fields.__4__this, this);
  v5->fields.openCampaignDirectBonus = openCampaignDirectBonus;
  sub_B2C2F8(&v5->fields.openCampaignDirectBonus, openCampaignDirectBonus);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall TerminalSceneComponent__CreateTransitionInfo(
        TerminalSceneComponent_o *this,
        TerminalTransitionInfo_o *info,
        const MethodInfo *method)
{
  TerminalTransitionInfo_o *v5; // x21
  __int64 v6; // x1
  TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x0

  if ( (byte_41846B1 & 1) == 0 )
  {
    sub_B2C35C(&TerminalTransitionInfo_TypeInfo, info);
    byte_41846B1 = 1;
  }
  v5 = (TerminalTransitionInfo_o *)sub_B2C42C(TerminalTransitionInfo_TypeInfo);
  TerminalTransitionInfo___ctor(v5, 0LL);
  this->fields._TransitionInfo_k__BackingField = v5;
  sub_B2C2F8(&this->fields._TransitionInfo_k__BackingField, v5);
  TransitionInfo_k__BackingField = this->fields._TransitionInfo_k__BackingField;
  if ( !TransitionInfo_k__BackingField )
    sub_B2C434(0LL, v6);
  TerminalTransitionInfo__SetParameters(TransitionInfo_k__BackingField, info, 0LL);
}


void __fastcall TerminalSceneComponent__EndAuto(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  ScrPlayerStatus_o *mPlayerStatus; // x0

  if ( (byte_41846C2 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41846C2 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184753 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184753 = 1;
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
      sub_B2C434(0LL, method);
    ScrPlayerStatus__OpenMasterMission(mPlayerStatus, 0LL, -1, 0LL);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v3);
  TerminalPramsManager__AutoOff((const MethodInfo *)v3);
}


float __fastcall TerminalSceneComponent__FSMenuOffsetX(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  if ( (byte_41846A5 & 1) == 0 )
  {
    sub_B2C35C(&FSUtility_TypeInfo, method);
    byte_41846A5 = 1;
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
  TerminalSceneComponent___c__DisplayClass190_0_o *v20; // x20
  _BYTE *Instance; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x3
  struct ScrTerminalListTop_o *mTerminalList; // x8
  System_Action_o *v26; // x2
  __int64 v27; // x8
  __int64 v28; // x8
  __int64 v29; // x8
  __int64 v30; // x8
  __int64 v31; // x21
  _BOOL8 IsNullOrEmpty; // x0
  int32_t v33; // w22
  int32_t v34; // w23
  SceneJumpInfo_o *v35; // x21
  TerminalPramsManager_c *v36; // x0
  __int64 v37; // x1
  TerminalPramsManager_c *v38; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  ScrTerminalMap_o *mTerminalMap; // x22
  int32_t v41; // w23
  __int64 v42; // x1
  System_String_o *MapModelEntryAnimationName; // x22
  TerminalPramsManager_c *v44; // x0
  WebViewManager_o *v45; // x0
  float v46; // s8
  CommonUI_o *v47; // x19
  System_Action_o *v48; // x21
  WebViewManager_o *v49; // x19
  System_Action_o *v50; // x21
  CommonUI_o *v51; // x21
  ScrTerminalMap_o *v52; // x19
  System_Action_o *v53; // x21
  __int64 v54; // x0

  if ( (byte_41846C4 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v9);
    sub_B2C35C(&SceneJumpInfo_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v14);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass190_0__FadeInAndTriggerEventEffects_b__0__, v15);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass190_0__FadeInAndTriggerEventEffects_b__1__, v16);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass190_0__FadeInAndTriggerEventEffects_b__4__, v17);
    sub_B2C35C(&TerminalSceneComponent___c__DisplayClass190_0_TypeInfo, v18);
    sub_B2C35C(&StringLiteral_1/*""*/, v19);
    byte_41846C4 = 1;
  }
  v20 = (TerminalSceneComponent___c__DisplayClass190_0_o *)sub_B2C42C(TerminalSceneComponent___c__DisplayClass190_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass190_0___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_118;
  v20->fields.fadeTime = fadeTime;
  v20->fields.__4__this = this;
  sub_B2C2F8(&v20->fields.__4__this, this);
  v20->fields.callback = callback;
  v20->fields.eventId = eventId;
  sub_B2C2F8(&v20->fields.callback, callback);
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_118;
  v22 = (unsigned int)v20->fields.eventId;
  if ( mTerminalList->fields.isBackFromBlankEarthMap )
  {
    v26 = v20->fields.callback;
LABEL_7:
    TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(this, v22, v26, v24);
    return;
  }
  if ( (int)v22 >= 1 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4184742 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v22);
      byte_4184742 = 1;
    }
    Instance = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = TerminalPramsManager_TypeInfo;
    }
    if ( *(_QWORD *)(*((_QWORD *)Instance + 23) + 184LL) )
    {
      if ( (Instance[307] & 4) != 0 && !*((_DWORD *)Instance + 56) )
        j_il2cpp_runtime_class_init_0(Instance);
      if ( !byte_4184742 )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v22);
        byte_4184742 = 1;
      }
      Instance = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Instance = TerminalPramsManager_TypeInfo;
      }
      v27 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 184LL);
      if ( !v27 )
        goto LABEL_118;
      if ( *(_DWORD *)(v27 + 16) == v20->fields.eventId )
      {
        if ( (Instance[307] & 4) != 0 && !*((_DWORD *)Instance + 56) )
          j_il2cpp_runtime_class_init_0(Instance);
        if ( !byte_4184742 )
        {
          sub_B2C35C(&TerminalPramsManager_TypeInfo, v22);
          byte_4184742 = 1;
        }
        Instance = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          Instance = TerminalPramsManager_TypeInfo;
        }
        v28 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 184LL);
        if ( !v28 )
          goto LABEL_118;
        if ( *(_DWORD *)(v28 + 20) )
        {
          if ( (Instance[307] & 4) != 0 && !*((_DWORD *)Instance + 56) )
            j_il2cpp_runtime_class_init_0(Instance);
          if ( !byte_4184742 )
          {
            sub_B2C35C(&TerminalPramsManager_TypeInfo, v22);
            byte_4184742 = 1;
          }
          Instance = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            Instance = TerminalPramsManager_TypeInfo;
          }
          v29 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 184LL);
          if ( v29 )
          {
            if ( *(_DWORD *)(v29 + 20) == 1 )
            {
              if ( (Instance[307] & 4) != 0 && !*((_DWORD *)Instance + 56) )
                j_il2cpp_runtime_class_init_0(Instance);
              if ( !byte_4184742 )
              {
                sub_B2C35C(&TerminalPramsManager_TypeInfo, v22);
                byte_4184742 = 1;
              }
              Instance = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                Instance = TerminalPramsManager_TypeInfo;
              }
              v30 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 184LL);
              if ( !v30 )
                goto LABEL_118;
              v31 = *(_QWORD *)(v30 + 24);
              if ( v31
                && *(int *)(v31 + 24) >= 1
                && !(IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v31 + 32), 0LL)) )
              {
                if ( !*(_DWORD *)(v31 + 24) )
                {
                  v54 = sub_B2C460(IsNullOrEmpty);
                  sub_B2C400(v54, 0LL);
                }
                v33 = System_Int32__Parse(*(System_String_o **)(v31 + 32), 0LL) + 1;
              }
              else
              {
                v33 = 0;
              }
              v34 = v20->fields.eventId;
              v35 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo);
              SceneJumpInfo___ctor_17293040(v35, (System_String_o *)StringLiteral_1/*""*/, v34, v33, 0LL);
              Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !Instance )
                goto LABEL_118;
              AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 72, 1, (Il2CppObject *)v35, 0LL);
              Instance = TerminalPramsManager_TypeInfo;
            }
            if ( (Instance[307] & 4) != 0 && !*((_DWORD *)Instance + 56) )
              j_il2cpp_runtime_class_init_0(Instance);
            if ( !byte_4184742 )
            {
              sub_B2C35C(&TerminalPramsManager_TypeInfo, v22);
              byte_4184742 = 1;
            }
            v36 = TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v36 = TerminalPramsManager_TypeInfo;
            }
            Instance = v36->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
            if ( Instance )
            {
              SpecifiedSceneInfo__InitParameter((SpecifiedSceneInfo_o *)Instance, 0LL);
              if ( !byte_4184708 )
              {
                sub_B2C35C(&TerminalPramsManager_TypeInfo, v37);
                byte_4184708 = 1;
              }
              v38 = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v38 = TerminalPramsManager_TypeInfo;
              }
              static_fields = v38->static_fields;
              static_fields->_SpecifiedChangeSceneInfo_k__BackingField = 0LL;
              sub_B2C2F8(&static_fields->_SpecifiedChangeSceneInfo_k__BackingField, 0LL);
              LODWORD(v22) = v20->fields.eventId;
              v26 = v20->fields.callback;
              goto LABEL_7;
            }
          }
LABEL_118:
          sub_B2C434(Instance, v22);
        }
      }
    }
  }
  if ( TerminalSceneComponent__IsEnabledMapOnEvent((TerminalSceneComponent_o *)Instance, v20->fields.eventId, v23) )
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
    if ( !byte_4183C90 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v22);
      byte_4183C90 = 1;
    }
    Instance = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = TerminalPramsManager_TypeInfo;
    }
    v41 = *(_DWORD *)(*((_QWORD *)Instance + 23) + 124LL);
    if ( !byte_4183C91 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v22);
      Instance = TerminalPramsManager_TypeInfo;
      byte_4183C91 = 1;
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
                                   v41,
                                   *(_DWORD *)(*((_QWORD *)Instance + 23) + 128LL),
                                   0LL);
    if ( !byte_4184711 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v42);
      byte_4184711 = 1;
    }
    v44 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v44 = TerminalPramsManager_TypeInfo;
    }
    v44->static_fields->_MapModelClearQuestId_k__BackingField = 0;
    if ( !byte_4184712 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v42);
      v44 = TerminalPramsManager_TypeInfo;
      byte_4184712 = 1;
    }
    if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      v44 = TerminalPramsManager_TypeInfo;
    }
    v44->static_fields->_MapModelClearPhaseCount_k__BackingField = 0;
    if ( !System_String__IsNullOrEmpty(MapModelEntryAnimationName, 0LL) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v51 = (CommonUI_o *)Instance;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( !v51 )
        goto LABEL_118;
      CommonUI__maskFadein(v51, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
      v52 = this->fields.mTerminalMap;
      v53 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v53,
        (Il2CppObject *)v20,
        Method_TerminalSceneComponent___c__DisplayClass190_0__FadeInAndTriggerEventEffects_b__4__,
        0LL);
      if ( !v52 )
        goto LABEL_118;
      ScrTerminalMap__PlayMapModelEntryAnimation(v52, MapModelEntryAnimationName, v53, 0LL);
    }
    else
    {
LABEL_106:
      v45 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v46 = v20->fields.fadeTime;
      v47 = (CommonUI_o *)v45;
      v48 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v48,
        (Il2CppObject *)v20,
        Method_TerminalSceneComponent___c__DisplayClass190_0__FadeInAndTriggerEventEffects_b__1__,
        0LL);
      if ( !v47 )
        goto LABEL_118;
      CommonUI__maskFadein(v47, v46, v48, 0LL);
    }
  }
  else
  {
    v49 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    v50 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v50,
      (Il2CppObject *)v20,
      Method_TerminalSceneComponent___c__DisplayClass190_0__FadeInAndTriggerEventEffects_b__0__,
      0LL);
    if ( !v49 )
      goto LABEL_118;
    QuestAfterAction__LoadVoice((QuestAfterAction_o *)v49, v50, 0LL);
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
  TerminalSceneComponent___c__DisplayClass193_0_o *v14; // x22
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  System_Action_o **p_callback; // x21
  System_Action_o *v18; // x2
  EventDetailEntity_o *v19; // x1
  struct TitleInfoControl_o *mTitleInfo; // x19
  WarEntity_o *v21; // x20
  System_Action_o *v22; // x21
  struct TitleInfoControl_o *v23; // x23
  TerminalPramsManager_c *v24; // x0
  System_Action_o *v25; // x19
  System_Action_o *v26; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_41846C7 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, v7);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v10);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass193_0__FadeInAndTriggerEventEffectsNext_b__0__, v11);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass193_0__FadeInAndTriggerEventEffectsNext_b__1__, v12);
    sub_B2C35C(&TerminalSceneComponent___c__DisplayClass193_0_TypeInfo, v13);
    byte_41846C7 = 1;
  }
  entity = 0LL;
  v14 = (TerminalSceneComponent___c__DisplayClass193_0_o *)sub_B2C42C(TerminalSceneComponent___c__DisplayClass193_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass193_0___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_63;
  v14->fields.__4__this = this;
  sub_B2C2F8(&v14->fields, this);
  v14->fields.callback = callback;
  p_callback = &v14->fields.callback;
  sub_B2C2F8(&v14->fields.callback, callback);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_63;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_59;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_63;
  if ( EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.mTitleInfo;
    if ( !Instance )
      goto LABEL_63;
    TitleInfoControl__PlayEventTimeStateAnime((TitleInfoControl_o *)Instance, 0LL);
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_63:
    sub_B2C434(Instance, v16);
  if ( EventDetailEntity__isRaidDefeatCount((EventDetailEntity_o *)entity, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.mTitleInfo;
    if ( Instance )
    {
      TitleInfoControl__PlayEventRaidDefeatedEffect((TitleInfoControl_o *)Instance, eventId, 0, *p_callback, 0LL);
      return;
    }
    goto LABEL_63;
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_63;
  if ( EventDetailEntity__IsSuperBoss((EventDetailEntity_o *)entity, 0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_63;
    if ( !EventDetailEntity__isTower((EventDetailEntity_o *)entity, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.mTitleInfo;
      if ( !Instance )
        goto LABEL_63;
      TitleInfoControl__CheckSuperBossHpAnim((TitleInfoControl_o *)Instance, *p_callback, 0LL);
      return;
    }
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_63;
  if ( !EventDetailEntity__IsSuperBoss((EventDetailEntity_o *)entity, 0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_63;
    if ( EventDetailEntity__isTower((EventDetailEntity_o *)entity, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.mTitleInfo;
      if ( !Instance )
        goto LABEL_63;
      v18 = *p_callback;
      v19 = (EventDetailEntity_o *)entity;
LABEL_31:
      TitleInfoControl__EventTowerStart((TitleInfoControl_o *)Instance, v19, v18, 0LL);
      return;
    }
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_63;
  if ( EventDetailEntity__IsSuperBoss((EventDetailEntity_o *)entity, 0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_63;
    if ( EventDetailEntity__isTower((EventDetailEntity_o *)entity, 0LL) )
    {
      mTitleInfo = this->fields.mTitleInfo;
      v21 = entity;
      v22 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v22,
        (Il2CppObject *)v14,
        Method_TerminalSceneComponent___c__DisplayClass193_0__FadeInAndTriggerEventEffectsNext_b__0__,
        0LL);
      if ( !mTitleInfo )
        goto LABEL_63;
      Instance = (DataManager_o *)mTitleInfo;
      v19 = (EventDetailEntity_o *)v21;
      v18 = v22;
      goto LABEL_31;
    }
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_63;
  Instance = (DataManager_o *)EventDetailEntity__IsGroupPoint((EventDetailEntity_o *)entity, 0LL);
  v23 = this->fields.mTitleInfo;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v23 )
      goto LABEL_63;
    TitleInfoControl__CheckEventPointGroupReward(this->fields.mTitleInfo, eventId, *p_callback, 0LL);
    v24 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v24 = TerminalPramsManager_TypeInfo;
    }
    if ( v24->static_fields->joinGroupId >= 1 )
    {
      Instance = (DataManager_o *)this->fields.mTitleInfo;
      if ( !Instance )
        goto LABEL_63;
      TitleInfoControl__vsGaugeEvent((TitleInfoControl_o *)Instance, eventId, 0LL);
    }
    return;
  }
  if ( !v23 )
    goto LABEL_63;
  if ( v23->fields.needPlayDailyPointItemEffect )
  {
    v25 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v25,
      (Il2CppObject *)v14,
      Method_TerminalSceneComponent___c__DisplayClass193_0__FadeInAndTriggerEventEffectsNext_b__1__,
      0LL);
    TitleInfoControl__UpdateDailyPointWithEffect(v23, v25, 0LL);
    return;
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_63;
  if ( EventDetailEntity__IsEventActivityPoint((EventDetailEntity_o *)entity, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.mTitleInfo;
    if ( !Instance )
      goto LABEL_63;
    TitleInfoControl__CheckEventPointGaugeAnim(
      (TitleInfoControl_o *)Instance,
      (EventDetailEntity_o *)entity,
      *p_callback,
      0LL);
    return;
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_63;
  if ( !EventDetailEntity__IsEventPanel((EventDetailEntity_o *)entity, 0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_63;
    if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)entity, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.mTerminalMap;
      if ( !Instance )
        goto LABEL_63;
      if ( Instance[2].fields.saveDataMapList )
      {
        ScrTerminalMap__UpdateEventBoardGame((ScrTerminalMap_o *)Instance, *p_callback, 0LL);
        return;
      }
      v26 = *p_callback;
      goto LABEL_60;
    }
LABEL_59:
    v26 = *p_callback;
LABEL_60:
    ActionExtensions__Call(v26, 0LL);
    return;
  }
  Instance = (DataManager_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_63;
  TitleInfoControl__CheckEventSubmarineStatusAnim(
    (TitleInfoControl_o *)Instance,
    (EventDetailEntity_o *)entity,
    *p_callback,
    0LL);
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

  if ( (byte_41846BB & 1) == 0 )
  {
    sub_B2C35C(&AvalonSceneManager_TypeInfo, isExecuteUnusedAssets);
    byte_41846BB = 1;
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
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v8, 0LL);
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
  TerminalSceneComponent___c__DisplayClass185_0_o *v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v16; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  if ( (byte_41846BF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, end_act);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass185_0__Fadein_MapDisp_b__0__, v9);
    sub_B2C35C(&TerminalSceneComponent___c__DisplayClass185_0_TypeInfo, v10);
    byte_41846BF = 1;
  }
  v11 = (TerminalSceneComponent___c__DisplayClass185_0_o *)sub_B2C42C(TerminalSceneComponent___c__DisplayClass185_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass185_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_11;
  v11->fields.__4__this = this;
  sub_B2C2F8(&v11->fields, this);
  v11->fields.end_act = end_act;
  sub_B2C2F8(&v11->fields.end_act, end_act);
  if ( this->fields._FirstFadeTime_k__BackingField > 0.0 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v16 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
    v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v18,
      (Il2CppObject *)v11,
      Method_TerminalSceneComponent___c__DisplayClass185_0__Fadein_MapDisp_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeChangeColor(Instance, 2, DEFAULT_FADE_TIME, v18, 0LL);
      return;
    }
LABEL_11:
    sub_B2C434(v12, v13);
  }
  TerminalSceneComponent__Fadein_MapDisp_Load(this, fade_time, v11->fields.end_act, v14);
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
  TerminalSceneComponent___c__DisplayClass186_0_o *v12; // x20
  void *mTerminalMap; // x0
  const MethodInfo *v14; // x1
  TerminalPramsManager_c *v15; // x0
  __int64 v16; // x8
  __int64 v17; // x8
  WarEntity_o *v18; // x21
  __int64 v19; // x1
  TerminalPramsManager_c *v20; // x0
  _BOOL4 isInvisibleConnectAndLoad; // w22
  TitleInfoControl_o *mTitleInfo; // x19
  System_Action_o *v23; // x22

  if ( (byte_41846C0 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, end_act);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v8);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v9);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass186_0__Fadein_MapDisp_Load_b__0__, v10);
    sub_B2C35C(&TerminalSceneComponent___c__DisplayClass186_0_TypeInfo, v11);
    byte_41846C0 = 1;
  }
  v12 = (TerminalSceneComponent___c__DisplayClass186_0_o *)sub_B2C42C(TerminalSceneComponent___c__DisplayClass186_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass186_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_38;
  v12->fields.__4__this = this;
  sub_B2C2F8(&v12->fields, this);
  v12->fields.end_act = end_act;
  v12->fields.fade_time = fade_time;
  sub_B2C2F8(&v12->fields.end_act, end_act);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C79 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v14);
    byte_4183C79 = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  if ( !v15->static_fields->_IsDispOnly_k__BackingField )
  {
    TerminalSceneComponent__EndAuto(this, v14);
    goto LABEL_26;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v14);
    byte_4183C65 = 1;
  }
  mTerminalMap = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mTerminalMap = TerminalSceneComponent_TypeInfo;
  }
  v16 = **((_QWORD **)mTerminalMap + 23);
  if ( !v16 || (v17 = *(_QWORD *)(v16 + 256)) == 0 || (mTerminalMap = *(void **)(v17 + 528)) == 0LL )
LABEL_38:
    sub_B2C434(mTerminalMap, v14);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mTerminalMap, 1, 0LL);
LABEL_26:
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_38;
  v18 = (WarEntity_o *)*((_QWORD *)mTerminalMap + 43);
  ScrTerminalMap__SetDisp((ScrTerminalMap_o *)mTerminalMap, 1, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184752 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v19);
    byte_4184752 = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v20 = TerminalPramsManager_TypeInfo;
  }
  isInvisibleConnectAndLoad = v20->static_fields->isInvisibleConnectAndLoad;
  mTerminalMap = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_38;
  CommonUI__SetLoadMode((CommonUI_o *)mTerminalMap, !isInvisibleConnectAndLoad, 0LL);
  mTitleInfo = this->fields.mTitleInfo;
  v23 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v12,
    Method_TerminalSceneComponent___c__DisplayClass186_0__Fadein_MapDisp_Load_b__0__,
    0LL);
  if ( !mTitleInfo )
    goto LABEL_38;
  TitleInfoControl__SetActiveEventInfo(mTitleInfo, v18, 32, v23, 0LL);
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
  __int64 v33; // x1
  TerminalSceneComponent___c__DisplayClass187_0_o *v34; // x20
  __int64 Instance; // x0
  _BOOL8 v36; // x1
  struct System_Action_o **p_end_act; // x21
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct MapEntity_o *mMapEnt; // x1
  struct WarEntity_o **p_war_dat; // x22
  struct ScrTerminalMap_o *v41; // x8
  MapEntity_o *v42; // x23
  System_String_o *ActiveStateName; // x24
  System_String_o *PrioredBgmName; // x0
  const MethodInfo *v45; // x2
  TerminalPramsManager_c *v46; // x0
  struct ScrTerminalMap_o *v47; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  TerminalPramsManager_c *v49; // x0
  TerminalSceneComponent___c__DisplayClass187_1_o *v50; // x21
  Il2CppObject **p_CS___8__locals1; // x22
  __int64 v52; // x8
  __int64 v53; // x8
  __int64 v54; // x8
  __int64 v55; // x8
  __int64 v56; // x8
  __int64 v57; // x8
  __int64 v58; // x0
  Il2CppObject *v59; // x24
  System_Action_Action__array *v60; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v61; // x23
  Il2CppObject *v62; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v63; // x22
  TerminalSceneComponent___c_c *v64; // x0
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__187_6; // x22
  Il2CppObject *v67; // x23
  struct TerminalSceneComponent___c_StaticFields *v68; // x0
  System_Action_Action__o *v69; // x8
  Il2CppObject *v70; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v71; // x22
  ActionChain_o *v72; // x22
  __int64 v73; // x20
  System_Action_o *v74; // x23
  ChainableActionBase_o *v75; // x0
  System_Action_array *v76; // x1
  int32_t eventId; // w21
  System_Action_o *v78; // x22
  const MethodInfo *v79; // x3
  System_Action_Action__array *v80; // x22
  Il2CppObject *v81; // x24
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v82; // x23
  TerminalSceneComponent___c_c *v83; // x0
  struct TerminalSceneComponent___c_StaticFields *v84; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__187_0; // x23
  Il2CppObject *v86; // x24
  struct TerminalSceneComponent___c_StaticFields *v87; // x0
  System_Action_Action__o *v88; // x8
  TerminalSceneComponent___c_c *v89; // x0
  struct TerminalSceneComponent___c_StaticFields *v90; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__187_1; // x23
  Il2CppObject *v92; // x24
  struct TerminalSceneComponent___c_StaticFields *v93; // x0
  System_Action_Action__o *v94; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v95; // x23
  ActionChain_o *v96; // x20
  System_Action_o *v97; // x21
  System_Action_array *v98; // x22
  __int64 v99; // x0
  __int64 v100; // x0

  if ( (byte_41846C1 & 1) == 0 )
  {
    sub_B2C35C(&ActionChain_TypeInfo, end_act);
    sub_B2C35C(&System_Action___TypeInfo, v7);
    sub_B2C35C(&System_Action_Action____TypeInfo, v8);
    sub_B2C35C(&Method_System_Action_Action___ctor__, v9);
    sub_B2C35C(&System_Action_Action__TypeInfo, v10);
    sub_B2C35C(&System_Action_TypeInfo, v11);
    sub_B2C35C(&Method_CommonUI_StartLoginMessages__, v12);
    sub_B2C35C(&Method_QuestAfterAction_Play__, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_B2C35C(&SoundManager_TypeInfo, v16);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v17);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v18);
    sub_B2C35C(&TutorialFlag_TypeInfo, v19);
    sub_B2C35C(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__187_0__, v20);
    sub_B2C35C(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__187_1__, v21);
    sub_B2C35C(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__187_6__, v22);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass187_0__Fadein_MapDisp_Start_b__2__, v23);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass187_0__Fadein_MapDisp_Start_b__3__, v24);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass187_0__Fadein_MapDisp_Start_b__4__, v25);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass187_0__Fadein_MapDisp_Start_b__5__, v26);
    sub_B2C35C(&TerminalSceneComponent___c__DisplayClass187_0_TypeInfo, v27);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass187_1__Fadein_MapDisp_Start_b__7__, v28);
    sub_B2C35C(&TerminalSceneComponent___c__DisplayClass187_1_TypeInfo, v29);
    sub_B2C35C(&TerminalSceneComponent___c_TypeInfo, v30);
    sub_B2C35C(&StringLiteral_2923/*"CAPTER INIT"*/, v31);
    sub_B2C35C(&StringLiteral_2922/*"CAPTER CREATE"*/, v32);
    sub_B2C35C(&StringLiteral_2924/*"CAPTER WAIT"*/, v33);
    byte_41846C1 = 1;
  }
  v34 = (TerminalSceneComponent___c__DisplayClass187_0_o *)sub_B2C42C(TerminalSceneComponent___c__DisplayClass187_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass187_0___ctor(v34, 0LL);
  if ( !v34 )
    goto LABEL_206;
  v34->fields.__4__this = this;
  sub_B2C2F8(&v34->fields, this);
  v34->fields.end_act = end_act;
  p_end_act = &v34->fields.end_act;
  v34->fields.fade_time = fade_time;
  sub_B2C2F8(&v34->fields.end_act, end_act);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_206;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_206;
  mMapEnt = mTerminalMap->fields.mMapEnt;
  v34->fields.war_dat = (struct WarEntity_o *)mMapEnt;
  p_war_dat = &v34->fields.war_dat;
  sub_B2C2F8(&v34->fields.war_dat, mMapEnt);
  v41 = this->fields.mTerminalMap;
  if ( !v41 )
    goto LABEL_206;
  Instance = (__int64)this->fields.mTerminalList;
  if ( !Instance )
    goto LABEL_206;
  v42 = *(MapEntity_o **)&v41->fields.requestedMapId;
  Instance = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_206;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)Instance, 0LL);
  v36 = System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_2922/*"CAPTER CREATE"*/, 0LL)
     || System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_2923/*"CAPTER INIT"*/, 0LL)
     || System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_2924/*"CAPTER WAIT"*/, 0LL);
  Instance = (__int64)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_206;
  TitleInfoControl__setBackBtnSprite_19529688((TitleInfoControl_o *)Instance, v36, 0, 0, 0LL);
  Instance = (__int64)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_206;
  TitleInfoControl__FrameIn((TitleInfoControl_o *)Instance, 0, 0LL);
  MainMenuBar__FrameIn(0, 0LL);
  Instance = (__int64)this->fields.mPlayerStatus;
  if ( !Instance )
    goto LABEL_206;
  ScrPlayerStatus__FrameIn((ScrPlayerStatus_o *)Instance, 0, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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
    if ( !byte_4183C94 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v36);
      byte_4183C94 = 1;
    }
    Instance = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !*(_BYTE *)(*(_QWORD *)(Instance + 184) + 87LL) )
    {
      if ( !v42 )
        goto LABEL_206;
      PrioredBgmName = MapEntity__GetPrioredBgmName(v42, 0LL);
      TerminalSceneComponent__playBgm(this, PrioredBgmName, v45);
    }
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C94 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v36);
    byte_4183C94 = 1;
  }
  v46 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v46 = TerminalPramsManager_TypeInfo;
  }
  if ( v46->static_fields->_IsPlayScriptWithMap_k__BackingField )
  {
    Instance = (__int64)this->fields.mTerminalMap;
    if ( !Instance )
      goto LABEL_206;
    ScrTerminalMap__AllMaskStart((ScrTerminalMap_o *)Instance, 0, 1, 0LL);
    MainMenuBar__FrameOut(0, 0LL);
    Instance = (__int64)this->fields.mTitleInfo;
    if ( !Instance )
      goto LABEL_206;
    TitleInfoControl__FrameOut((TitleInfoControl_o *)Instance, 0, 0LL);
    Instance = (__int64)this->fields.mPlayerStatus;
    if ( !Instance )
      goto LABEL_206;
    ScrPlayerStatus__FrameOut((ScrPlayerStatus_o *)Instance, 1, 0LL);
    v46 = TerminalPramsManager_TypeInfo;
  }
  if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v46);
  if ( !byte_4183C79 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v36);
    byte_4183C79 = 1;
  }
  Instance = (__int64)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(Instance + 184) + 86LL) )
  {
    if ( (*(_BYTE *)(Instance + 307) & 4) != 0 && !*(_DWORD *)(Instance + 224) )
      j_il2cpp_runtime_class_init_0(Instance);
    if ( !byte_4183C78 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v36);
      byte_4183C78 = 1;
    }
    Instance = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( *(_BYTE *)(*(_QWORD *)(Instance + 184) + 89LL) )
    {
      v47 = this->fields.mTerminalMap;
      if ( !v47 )
        goto LABEL_206;
      Instance = (__int64)v47->fields.allMaskObj;
      if ( !Instance )
        goto LABEL_206;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      MainMenuBar__FrameOut(0, 0LL);
      Instance = (__int64)this->fields.mTitleInfo;
      if ( !Instance )
        goto LABEL_206;
      TitleInfoControl__FrameOut((TitleInfoControl_o *)Instance, 0, 0LL);
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
  if ( !byte_4183C78 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v36);
    byte_4183C78 = 1;
  }
  v49 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v49 = TerminalPramsManager_TypeInfo;
  }
  if ( v49->static_fields->_IsScriptDisp_k__BackingField )
    goto LABEL_167;
  if ( (BYTE3(v49->vtable._0_Equals.methodPtr) & 4) != 0 && !v49->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v49);
  if ( !byte_4183C79 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v36);
    byte_4183C79 = 1;
  }
  Instance = (__int64)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(Instance + 184) + 86LL) )
  {
    v50 = (TerminalSceneComponent___c__DisplayClass187_1_o *)sub_B2C42C(TerminalSceneComponent___c__DisplayClass187_1_TypeInfo);
    TerminalSceneComponent___c__DisplayClass187_1___ctor(v50, 0LL);
    if ( v50 )
    {
      v50->fields.CS___8__locals1 = v34;
      p_CS___8__locals1 = (Il2CppObject **)&v50->fields.CS___8__locals1;
      sub_B2C2F8(&v50->fields.CS___8__locals1, v34);
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_4183C65 )
      {
        sub_B2C35C(&TerminalSceneComponent_TypeInfo, v36);
        byte_4183C65 = 1;
      }
      Instance = (__int64)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v52 = **(_QWORD **)(Instance + 184);
      if ( v52 )
      {
        v53 = *(_QWORD *)(v52 + 256);
        if ( v53 )
        {
          Instance = *(_QWORD *)(v53 + 528);
          if ( Instance )
          {
            v50->fields.oldActive = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
            Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
            if ( Instance )
            {
              QuestAfterAction__Init((QuestAfterAction_o *)Instance, 0LL);
              Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
              if ( Instance )
              {
                QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)Instance, 1, 0LL);
                Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                if ( Instance )
                {
                  if ( QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0LL) )
                  {
                    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    }
                    if ( !byte_4183C65 )
                    {
                      sub_B2C35C(&TerminalSceneComponent_TypeInfo, v36);
                      byte_4183C65 = 1;
                    }
                    Instance = (__int64)TerminalSceneComponent_TypeInfo;
                    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                      Instance = (__int64)TerminalSceneComponent_TypeInfo;
                    }
                    v54 = **(_QWORD **)(Instance + 184);
                    if ( !v54 )
                      goto LABEL_206;
                    v55 = *(_QWORD *)(v54 + 256);
                    if ( !v55 )
                      goto LABEL_206;
                    Instance = *(_QWORD *)(v55 + 528);
                    if ( !Instance )
                      goto LABEL_206;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                  }
                  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  }
                  if ( !byte_4183C65 )
                  {
                    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v36);
                    byte_4183C65 = 1;
                  }
                  Instance = (__int64)TerminalSceneComponent_TypeInfo;
                  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    Instance = (__int64)TerminalSceneComponent_TypeInfo;
                  }
                  v56 = **(_QWORD **)(Instance + 184);
                  if ( v56 )
                  {
                    v57 = *(_QWORD *)(v56 + 256);
                    if ( v57 )
                    {
                      Instance = *(_QWORD *)(v57 + 528);
                      if ( Instance )
                      {
                        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
                        {
                          Instance = (__int64)this->fields.mTerminalMap;
                          if ( !Instance )
                            goto LABEL_206;
                          ScrTerminalMap__AllMaskStart((ScrTerminalMap_o *)Instance, 0, 1, 0LL);
                        }
                        v58 = sub_B2C374(System_Action_Action____TypeInfo, 4LL);
                        v59 = *p_CS___8__locals1;
                        v60 = (System_Action_Action__array *)v58;
                        v61 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
                        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                          v61,
                          v59,
                          Method_TerminalSceneComponent___c__DisplayClass187_0__Fadein_MapDisp_Start_b__4__,
                          (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
                        if ( v60 )
                        {
                          if ( !v61 || (Instance = sub_B2C41C(v61, v60->obj.klass->_1.element_class)) != 0 )
                          {
                            if ( !v60->max_length )
                              goto LABEL_207;
                            v60->m_Items[0] = (System_Action_Action__o *)v61;
                            sub_B2C2F8(v60->m_Items, v61);
                            v62 = *p_CS___8__locals1;
                            v63 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
                            System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                              v63,
                              v62,
                              Method_TerminalSceneComponent___c__DisplayClass187_0__Fadein_MapDisp_Start_b__5__,
                              (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
                            if ( !v63 || (Instance = sub_B2C41C(v63, v60->obj.klass->_1.element_class)) != 0 )
                            {
                              if ( v60->max_length <= 1 )
                                goto LABEL_207;
                              v60->m_Items[1] = (System_Action_Action__o *)v63;
                              sub_B2C2F8(&v60->m_Items[1], v63);
                              v64 = TerminalSceneComponent___c_TypeInfo;
                              if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
                                v64 = TerminalSceneComponent___c_TypeInfo;
                              }
                              static_fields = v64->static_fields;
                              _9__187_6 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__187_6;
                              if ( _9__187_6 )
                                goto LABEL_146;
                              if ( (BYTE3(v64->vtable._0_Equals.methodPtr) & 4) != 0 && !v64->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(v64);
                                static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
                              }
                              v67 = (Il2CppObject *)static_fields->__9;
                              _9__187_6 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
                              System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                                _9__187_6,
                                v67,
                                Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__187_6__,
                                (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
                              v68 = TerminalSceneComponent___c_TypeInfo->static_fields;
                              v68->__9__187_6 = (struct System_Action_Action__o *)_9__187_6;
                              sub_B2C2F8(&v68->__9__187_6, _9__187_6);
                              if ( _9__187_6 )
                              {
LABEL_146:
                                Instance = sub_B2C41C(_9__187_6, v60->obj.klass->_1.element_class);
                                v69 = (System_Action_Action__o *)_9__187_6;
                                if ( !Instance )
                                  goto LABEL_208;
                              }
                              else
                              {
                                v69 = 0LL;
                              }
                              if ( v60->max_length <= 2 )
                                goto LABEL_207;
                              v60->m_Items[2] = v69;
                              sub_B2C2F8(&v60->m_Items[2], _9__187_6);
                              v70 = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                              v71 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
                              System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                                v71,
                                v70,
                                Method_QuestAfterAction_Play__,
                                (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
                              if ( !v71 || (Instance = sub_B2C41C(v71, v60->obj.klass->_1.element_class)) != 0 )
                              {
                                if ( v60->max_length <= 3 )
                                  goto LABEL_207;
                                v60->m_Items[3] = (System_Action_Action__o *)v71;
                                sub_B2C2F8(&v60->m_Items[3], v71);
                                v72 = (ActionChain_o *)sub_B2C42C(ActionChain_TypeInfo);
                                ActionChain___ctor_21119660(v72, v60, 0LL);
                                v73 = sub_B2C374(System_Action___TypeInfo, 1LL);
                                v74 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                                System_Action___ctor(
                                  v74,
                                  (Il2CppObject *)v50,
                                  Method_TerminalSceneComponent___c__DisplayClass187_1__Fadein_MapDisp_Start_b__7__,
                                  0LL);
                                if ( !v73 )
                                  goto LABEL_206;
                                if ( !v74 || (Instance = sub_B2C41C(v74, *(_QWORD *)(*(_QWORD *)v73 + 64LL))) != 0 )
                                {
                                  if ( *(_DWORD *)(v73 + 24) )
                                  {
                                    *(_QWORD *)(v73 + 32) = v74;
                                    sub_B2C2F8(v73 + 32, v74);
                                    if ( !v72 )
                                      goto LABEL_206;
                                    v75 = (ChainableActionBase_o *)v72;
                                    v76 = (System_Action_array *)v73;
                                    goto LABEL_157;
                                  }
LABEL_207:
                                  v99 = sub_B2C460(Instance);
                                  sub_B2C400(v99, 0LL);
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
    sub_B2C434(Instance, v36);
  }
  if ( this->fields.mIsStart_LoginBonusWhiteBg )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    Instance = TutorialFlag__Get_28617756(102, 0LL);
    if ( (Instance & 1) != 0 && !this->fields.isTutorialAfter )
    {
      this->fields.mIsStart_LoginBonusWhiteBg = 0;
      Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetupLoginResultData((CommonUI_o *)Instance, 0LL, 0LL);
        v80 = (System_Action_Action__array *)sub_B2C374(System_Action_Action____TypeInfo, 4LL);
        v81 = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v82 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v82,
          v81,
          Method_CommonUI_StartLoginMessages__,
          (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
        if ( v80 )
        {
          if ( v82 )
          {
            Instance = sub_B2C41C(v82, v80->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_208;
          }
          if ( !v80->max_length )
            goto LABEL_207;
          v80->m_Items[0] = (System_Action_Action__o *)v82;
          sub_B2C2F8(v80->m_Items, v82);
          v83 = TerminalSceneComponent___c_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
            v83 = TerminalSceneComponent___c_TypeInfo;
          }
          v84 = v83->static_fields;
          _9__187_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v84->__9__187_0;
          if ( _9__187_0 )
            goto LABEL_183;
          if ( (BYTE3(v83->vtable._0_Equals.methodPtr) & 4) != 0 && !v83->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v83);
            v84 = TerminalSceneComponent___c_TypeInfo->static_fields;
          }
          v86 = (Il2CppObject *)v84->__9;
          _9__187_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            _9__187_0,
            v86,
            Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__187_0__,
            (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
          v87 = TerminalSceneComponent___c_TypeInfo->static_fields;
          v87->__9__187_0 = (struct System_Action_Action__o *)_9__187_0;
          sub_B2C2F8(&v87->__9__187_0, _9__187_0);
          if ( _9__187_0 )
          {
LABEL_183:
            Instance = sub_B2C41C(_9__187_0, v80->obj.klass->_1.element_class);
            v88 = (System_Action_Action__o *)_9__187_0;
            if ( !Instance )
              goto LABEL_208;
          }
          else
          {
            v88 = 0LL;
          }
          if ( v80->max_length <= 1 )
            goto LABEL_207;
          v80->m_Items[1] = v88;
          sub_B2C2F8(&v80->m_Items[1], _9__187_0);
          v89 = TerminalSceneComponent___c_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
            v89 = TerminalSceneComponent___c_TypeInfo;
          }
          v90 = v89->static_fields;
          _9__187_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v90->__9__187_1;
          if ( _9__187_1 )
            goto LABEL_193;
          if ( (BYTE3(v89->vtable._0_Equals.methodPtr) & 4) != 0 && !v89->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v89);
            v90 = TerminalSceneComponent___c_TypeInfo->static_fields;
          }
          v92 = (Il2CppObject *)v90->__9;
          _9__187_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            _9__187_1,
            v92,
            Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__187_1__,
            (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
          v93 = TerminalSceneComponent___c_TypeInfo->static_fields;
          v93->__9__187_1 = (struct System_Action_Action__o *)_9__187_1;
          sub_B2C2F8(&v93->__9__187_1, _9__187_1);
          if ( _9__187_1 )
          {
LABEL_193:
            Instance = sub_B2C41C(_9__187_1, v80->obj.klass->_1.element_class);
            v94 = (System_Action_Action__o *)_9__187_1;
            if ( !Instance )
              goto LABEL_208;
          }
          else
          {
            v94 = 0LL;
          }
          if ( v80->max_length <= 2 )
            goto LABEL_207;
          v80->m_Items[2] = v94;
          sub_B2C2F8(&v80->m_Items[2], _9__187_1);
          v95 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            v95,
            (Il2CppObject *)v34,
            Method_TerminalSceneComponent___c__DisplayClass187_0__Fadein_MapDisp_Start_b__2__,
            (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
          if ( v95 )
          {
            Instance = sub_B2C41C(v95, v80->obj.klass->_1.element_class);
            if ( !Instance )
            {
LABEL_208:
              v100 = sub_B2C454();
              sub_B2C400(v100, 0LL);
            }
          }
          if ( v80->max_length <= 3 )
            goto LABEL_207;
          v80->m_Items[3] = (System_Action_Action__o *)v95;
          sub_B2C2F8(&v80->m_Items[3], v95);
          v96 = (ActionChain_o *)sub_B2C42C(ActionChain_TypeInfo);
          ActionChain___ctor_21119660(v96, v80, 0LL);
          Instance = sub_B2C374(System_Action___TypeInfo, 1LL);
          if ( Instance )
          {
            v97 = *p_end_act;
            v98 = (System_Action_array *)Instance;
            if ( v97 )
            {
              Instance = sub_B2C41C(v97, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
              if ( !Instance )
                goto LABEL_208;
            }
            if ( !v98->max_length )
              goto LABEL_207;
            v98->m_Items[0] = v97;
            sub_B2C2F8(v98->m_Items, v97);
            if ( v96 )
            {
              v75 = (ChainableActionBase_o *)v96;
              v76 = v98;
LABEL_157:
              Instance = (__int64)ChainableActionBase__Final(v75, v76, 0LL);
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
  v78 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v78,
    (Il2CppObject *)v34,
    Method_TerminalSceneComponent___c__DisplayClass187_0__Fadein_MapDisp_Start_b__3__,
    0LL);
  TerminalSceneComponent__StartEventDailyPoint(this, eventId, v78, v79);
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

  if ( (byte_41846BC & 1) == 0 )
  {
    sub_B2C35C(&AvalonSceneManager_TypeInfo, end_act);
    byte_41846BC = 1;
  }
  v6 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v6 = AvalonSceneManager_TypeInfo;
  }
  v7 = TerminalSceneComponent__coFadein_WorldDisp(this, v6->static_fields->DEFAULT_FADE_TIME, end_act, 1, v3);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
}


void __fastcall TerminalSceneComponent__Fadein_WorldDisp_18823972(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  System_Collections_IEnumerator_o *v6; // x1

  v6 = TerminalSceneComponent__coFadein_WorldDisp(this, fade_time, end_act, 1, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
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
    sub_B2C434(this, method);
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
        v9 = sub_B2C460(this);
        sub_B2C400(v9, 0LL);
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
  __int64 v3; // x1
  TerminalSceneComponent_c *v4; // x0
  System_String_o *OVERWRITE_COMMON_BG_TYPE2_KEY; // x0
  TerminalSceneComponent_c *v6; // x0

  if ( (byte_41846EE & 1) == 0 )
  {
    sub_B2C35C(&string_TypeInfo, method);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v3);
    byte_41846EE = 1;
  }
  if ( skinType == 4 )
  {
    v6 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v6 = TerminalSceneComponent_TypeInfo;
    }
    OVERWRITE_COMMON_BG_TYPE2_KEY = v6->static_fields->OVERWRITE_COMMON_BG_TYPE2_KEY;
    return UnityEngine_PlayerPrefs__GetString_35342888(OVERWRITE_COMMON_BG_TYPE2_KEY, 0LL);
  }
  if ( skinType == 2 )
  {
    v4 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v4 = TerminalSceneComponent_TypeInfo;
    }
    OVERWRITE_COMMON_BG_TYPE2_KEY = v4->static_fields->OVERWRITE_COMMON_BG_TYPE1_KEY;
    return UnityEngine_PlayerPrefs__GetString_35342888(OVERWRITE_COMMON_BG_TYPE2_KEY, 0LL);
  }
  return string_TypeInfo->static_fields->Empty;
}


int32_t __fastcall TerminalSceneComponent__GetState(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_o *v2; // x19
  struct CStateManager_TerminalSceneComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_41846DD & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_B2C35C(&Method_CStateManager_TerminalSceneComponent__getState__, method);
    byte_41846DD = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B2C434(this, method);
  return mFSM->fields.m_state;
}


void __fastcall TerminalSceneComponent__InitLighting(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  const MethodInfo *v4; // x2

  if ( (byte_41846EC & 1) == 0 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, method);
    byte_41846EC = 1;
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalSceneComponent__IsEnabledMapOnEvent(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  void *Instance; // x0
  __int64 v7; // x1
  WarEntity_o *v8; // x0
  WarEntity_o *v9; // x19
  int v10; // w8
  __int64 v11; // x9
  int *v12; // x11

  if ( (byte_41846C5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_MapMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarMaster___, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_41846C5 = 1;
  }
  if ( !eventId )
    return 1;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_19;
  v8 = WarMaster__getByEventId((WarMaster_o *)Instance, eventId, 0LL);
  if ( !v8 )
    return 1;
  v9 = v8;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_MapMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = MapMaster__getList((MapMaster_o *)Instance, v9->fields.id, 0LL);
  if ( !Instance )
    goto LABEL_19;
  v10 = *((_DWORD *)Instance + 6);
  if ( v10 >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      v12 = (int *)*((_QWORD *)Instance + v11 + 4);
      if ( !v12 )
        break;
      if ( v12[6] >= 1 && v12[7] >= 1 && v12[8] > 0 )
        return 1;
      if ( (int)++v11 >= v10 )
        return 0;
    }
LABEL_19:
    sub_B2C434(Instance, v7);
  }
  return 0;
}


bool __fastcall TerminalSceneComponent__IsMapActive(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalMap_o *mTerminalMap; // x8

  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap || (this = (TerminalSceneComponent_o *)mTerminalMap->fields.mapButtonGrid) == 0LL )
    sub_B2C434(this, method);
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
}


bool __fastcall TerminalSceneComponent__IsMapTouchEnabled(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ScrTerminalMap_o *mTerminalMap; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  System_String_o *v9; // x20

  if ( (byte_41846C9 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v5);
    sub_B2C35C(&StringLiteral_8918/*"Map Touch Enable"*/, v6);
    byte_41846C9 = 1;
  }
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_55;
  mTerminalMap = (ScrTerminalMap_o *)ScrTerminalMap__mfGetMyFsmP(mTerminalMap, 0LL);
  if ( !mTerminalMap )
    goto LABEL_55;
  mTerminalMap = (ScrTerminalMap_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)mTerminalMap, 0LL);
  if ( this->fields.mTutorialKind )
    return 0;
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_55;
  v9 = (System_String_o *)mTerminalMap;
  mTerminalMap = (ScrTerminalMap_o *)mTerminalList->fields.mActionBgColl;
  if ( !mTerminalMap )
    goto LABEL_55;
  mTerminalMap = (ScrTerminalMap_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mTerminalMap, 0LL);
  if ( !mTerminalMap )
    goto LABEL_55;
  mTerminalMap = (ScrTerminalMap_o *)UnityEngine_GameObject__get_activeSelf(
                                       (UnityEngine_GameObject_o *)mTerminalMap,
                                       0LL);
  if ( ((unsigned __int8)mTerminalMap & 1) != 0 )
    return 0;
  if ( !v9 )
    goto LABEL_55;
  if ( (System_String__IndexOf_44377880(v9, (System_String_o *)StringLiteral_8918/*"Map Touch Enable"*/, 0LL) & 0x80000000) != 0
    || MainMenuBar__get_IsEnableOutSideCollider(0LL) )
  {
    return 0;
  }
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_55;
  if ( CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_55;
  if ( CommonUI__IsActive_ApRecvDlgComp((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_55;
  if ( CommonUI__IsActive_EventItemSelectDlgComp((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_55;
  if ( CommonUI__IsActive_NotifiDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_55;
  if ( CommonUI__IsActive_TutorialBigDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_55;
  if ( CommonUI__IsActive_MasterMission((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_55;
  if ( CommonUI__IsActive_MasterProfile((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_55;
  if ( CommonUI__IsActive_MissionListDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_55;
  if ( CommonUI__IsActive_AssistEffectConfirmDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_55;
  if ( CommonUI__IsActive_CommandAssistConfirmDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_55;
  if ( CommonUI__IsActive_AchievementExchangeConditionsDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_55;
  if ( CommonUI__IsActive_SvtFrameShortDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_55;
  if ( CommonUI__isBusyDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)this->fields.mPlayerStatus;
  if ( !mTerminalMap )
    goto LABEL_55;
  if ( BYTE4(mTerminalMap[1].fields._currentMapTexture_k__BackingField)
    || ScrPlayerStatus__IsCommandSpellActive((ScrPlayerStatus_o *)mTerminalMap, 0LL) )
  {
    return 0;
  }
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_55;
  if ( QuestAfterAction__IsPlaying((QuestAfterAction_o *)mTerminalMap, 0LL) )
    return 0;
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  mTerminalMap = (ScrTerminalMap_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !mTerminalMap )
LABEL_55:
    sub_B2C434(mTerminalMap, method);
  if ( MissionNotifyManager__IsPress((MissionNotifyManager_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)this->fields.mTitleInfo;
  if ( !mTerminalMap )
    goto LABEL_55;
  if ( !TitleInfoControl__IsTouchEnable((TitleInfoControl_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_55;
  return !ScrTerminalMap__IsActive_SpotCooltimeRewardDialog(mTerminalMap, 0LL);
}


bool __fastcall TerminalSceneComponent__IsNotDisplayCostume(
        TerminalSceneComponent_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  if ( !shopEntity )
    sub_B2C434(this, 0LL);
  return shopEntity->fields.shopType == 11
      && shopEntity->fields.purchaseType == 14
      && !ShopEntity__IsEligibleForFreeFeaturesTheCostumeRelease(shopEntity, 0LL);
}


bool __fastcall TerminalSceneComponent__IsPlayChapterStart(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _BOOL4 IsWarStartAnim_k__BackingField; // w20
  _BOOL4 v7; // w23
  __int64 v8; // x1
  QuestTree_o *v9; // x19
  TerminalPramsManager_c *v10; // x0
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v12; // x19
  int64_t targetId; // x20
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  TerminalPramsManager_c *v16; // x0

  if ( (byte_41846D9 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, method);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v3);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v4);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v5);
    byte_41846D9 = 1;
  }
  IsWarStartAnim_k__BackingField = this->fields._IsWarStartAnim_k__BackingField;
  v7 = this->fields.mTutorialKind == 1;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v9 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C67 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v8);
    byte_4183C67 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  if ( !v9 )
    sub_B2C434(v10, v8);
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(v9, v10->static_fields->_WarId_k__BackingField, 0LL);
  if ( !WarEntityByWarID )
    return 0;
  v12 = WarEntityByWarID;
  if ( WarEntity__IsMainInterlude(WarEntityByWarID, 0LL)
    && WarEntity__IsPurchasedByRarePrism(v12, 0LL)
    && WarEntity__IsStartTypeQuest(v12, 0LL) )
  {
    targetId = v12->fields.targetId;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsQuestPhaseClear_25802440(targetId, 1, -1, 0, 0LL) )
      return 0;
  }
  else if ( !IsWarStartAnim_k__BackingField && !v7 )
  {
    return 0;
  }
  if ( !WarEntity__GetStartType(v12, 0LL) )
    return 0;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C67 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v14);
    byte_4183C67 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_41846A3 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1738/*"AREA WAIT"*/, method);
    byte_41846A3 = 1;
  }
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList
    || (mTerminalList = (ScrTerminalListTop_o *)ScrTerminalListTop__mfGetMyFsmP(mTerminalList, 0LL)) == 0LL
    || (mTerminalList = (ScrTerminalListTop_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)mTerminalList, 0LL)) == 0LL )
  {
    sub_B2C434(mTerminalList, method);
  }
  return System_String__IndexOf_44377880((System_String_o *)mTerminalList, (System_String_o *)StringLiteral_1738/*"AREA WAIT"*/, 0LL) >= 0;
}


System_Collections_IEnumerator_o *__fastcall TerminalSceneComponent__LoadAsync(
        TerminalSceneComponent_o *this,
        UserServantEntity_o *usd,
        System_Action_o *callback,
        const MethodInfo *method)
{
  TerminalSceneComponent__LoadAsync_d__167_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_41846AF & 1) == 0 )
  {
    sub_B2C35C(&TerminalSceneComponent__LoadAsync_d__167_TypeInfo, usd);
    byte_41846AF = 1;
  }
  v7 = (TerminalSceneComponent__LoadAsync_d__167_o *)sub_B2C42C(TerminalSceneComponent__LoadAsync_d__167_TypeInfo);
  TerminalSceneComponent__LoadAsync_d__167___ctor(v7, 0, 0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  v7->fields.__4__this = this;
  sub_B2C2F8(&v7->fields.__4__this, this);
  v7->fields.usd = usd;
  sub_B2C2F8(&v7->fields.usd, usd);
  v7->fields.callback = callback;
  sub_B2C2F8(&v7->fields.callback, callback);
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
  __int64 v7; // x1
  UnityEngine_Component_o *uiRoot; // x8
  UnityEngine_Transform_o *v9; // x21
  const MethodInfo_2155684 *v10; // x2
  float v11; // s0
  float v12; // s1
  float v13; // s2
  float v14; // s8
  float v15; // s9
  float v16; // s10
  System_Nullable_Vector3__o v17; // [xsp+0h] [xbp-50h] BYREF
  System_Nullable_Vector3__o v18; // 0:x0.16
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  v4 = *(_QWORD *)&localScale.fields.value.fields.z;
  v6 = this;
  v17 = localScale;
  if ( (byte_41846EB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Nullable_Vector3__get_HasValue__, dialog);
    this = (TerminalSceneComponent_o *)sub_B2C35C(&Method_System_Nullable_Vector3__get_Value__, v7);
    byte_41846EB = 1;
  }
  if ( !dialog )
    goto LABEL_11;
  this = (TerminalSceneComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL);
  uiRoot = (UnityEngine_Component_o *)v6->fields.uiRoot;
  if ( !uiRoot )
    goto LABEL_11;
  v9 = (UnityEngine_Transform_o *)this;
  this = (TerminalSceneComponent_o *)UnityEngine_Component__get_transform(uiRoot, 0LL);
  if ( !v9 )
    goto LABEL_11;
  UnityEngine_Transform__SetParent(v9, (UnityEngine_Transform_o *)this, 0LL);
  if ( (v4 & 0xFF00000000LL) != 0 )
  {
    *(_QWORD *)&v18.fields.value.fields.x = &v17;
    *(_QWORD *)&v18.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
    *(UnityEngine_Vector3_o *)&v11 = System_Nullable_Vector3___get_Value(v18, v10);
  }
  else
  {
    *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Vector3__get_one(0LL);
  }
  v14 = v11;
  v15 = v12;
  v16 = v13;
  this = (TerminalSceneComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL);
  if ( !this )
LABEL_11:
    sub_B2C434(this, dialog);
  v19.fields.x = v14;
  v19.fields.y = v15;
  v19.fields.z = v16;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v19, 0LL);
}


void __fastcall TerminalSceneComponent__OnCorePress(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct BaseCore_o *mEarthCore; // x0

  mEarthCore = this->fields.mEarthCore;
  if ( !mEarthCore )
    sub_B2C434(0LL, method);
  ((void (__fastcall *)(struct BaseCore_o *, Il2CppMethodPointer))mEarthCore->klass->vtable._7_OnPress.method)(
    mEarthCore,
    mEarthCore->klass->vtable._8_Setup.methodPtr);
}


void __fastcall TerminalSceneComponent__OnCoreRelease(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  BaseCore_o *mEarthCore; // x0

  mEarthCore = this->fields.mEarthCore;
  if ( !mEarthCore )
    sub_B2C434(0LL, method);
  BaseCore__OnRelease(mEarthCore, 0LL);
}


void __fastcall TerminalSceneComponent__OnDestroy(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  TerminalSceneComponent_c *v6; // x0
  UnityEngine_Object_o *mInstance; // x20
  TerminalSceneComponent_c *v8; // x0
  struct TerminalSceneComponent_StaticFields *static_fields; // x0
  __int64 v10; // x20
  __int64 v11; // x20
  UnityEngine_Object_o *v12; // x20
  struct System_String_o **p_loadEarthAssetName; // x19
  System_String_o *v14; // x20

  if ( (byte_41846AB & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__getInstance__, v4);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v5);
    byte_41846AB = 1;
  }
  v6 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v6 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v6->static_fields->mInstance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mInstance, (UnityEngine_Object_o *)this, 0LL) )
  {
    v8 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v8 = TerminalSceneComponent_TypeInfo;
    }
    static_fields = v8->static_fields;
    static_fields->mInstance = 0LL;
    sub_B2C2F8(static_fields, 0LL);
    v10 = *((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
      sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 3));
    v11 = **(_QWORD **)(v10 + 192);
    if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
      sub_AC505C(v11);
    v12 = **(UnityEngine_Object_o ***)(v11 + 184);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    p_loadEarthAssetName = &this->fields.loadEarthAssetName;
    if ( UnityEngine_Object__op_Implicit(v12, 0LL) )
    {
      v14 = *p_loadEarthAssetName;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAssetStorage(v14, 0LL);
    }
    *p_loadEarthAssetName = 0LL;
    sub_B2C2F8(p_loadEarthAssetName, 0LL);
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
  __int64 v37; // x1
  __int64 v38; // x1
  System_String_o *String_35342888; // x24
  System_Char_array *v40; // x0
  System_Char_array *v41; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x24
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v43; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x24
  TerminalSceneComponent___c_c *v46; // x8
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x9
  System_Func_int__BattleActionData_SideEffectData__o *_9__243_0; // x25
  Il2CppObject *v49; // x26
  struct TerminalSceneComponent___c_StaticFields *v50; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  System_Collections_Generic_List_TSource__o *v52; // x0
  TerminalSceneComponent___c_c *v53; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x24
  struct TerminalSceneComponent___c_StaticFields *v55; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__243_1; // x25
  Il2CppObject *v57; // x26
  struct TerminalSceneComponent___c_StaticFields *v58; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  TerminalSceneComponent___c_c *v60; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x24
  struct TerminalSceneComponent___c_StaticFields *v62; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__243_2; // x25
  Il2CppObject *v64; // x26
  struct TerminalSceneComponent___c_StaticFields *v65; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v67; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x0
  System_Collections_Generic_List_TSource__o *v69; // x0
  TerminalSceneComponent___c_c *v70; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x23
  struct TerminalSceneComponent___c_StaticFields *v72; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__243_4; // x24
  Il2CppObject *v74; // x25
  struct TerminalSceneComponent___c_StaticFields *v75; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x23
  CommonUI_o *Instance; // x24
  System_String_o *v79; // x22
  System_Action_o *v80; // x4
  TerminalSceneComponent___c_c *v81; // x0
  struct TerminalSceneComponent___c_StaticFields *v82; // x8
  System_Func_int__BattleActionData_SideEffectData__o *_9__243_5; // x24
  Il2CppObject *v84; // x25
  struct TerminalSceneComponent___c_StaticFields *v85; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v86; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v87; // x25
  System_String_o *v88; // x0
  TerminalSceneComponent___c_c *v89; // x8
  System_String_o *v90; // x21
  struct TerminalSceneComponent___c_StaticFields *v91; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__243_6; // x26
  Il2CppObject *v93; // x27
  struct TerminalSceneComponent___c_StaticFields *v94; // x0
  Il2CppObject *v95; // x0
  __int64 v96; // x0
  int32_t v97; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_41846E6 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, playerPrefsKey);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_int__ShopEntity___, v11);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_ShopEntity__int___, v12);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_string__int___, v13);
    sub_B2C35C(&Method_System_Linq_Enumerable_Sum_ShopEntity___, v14);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v15);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_ShopEntity___, v16);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_ShopEntity___, v17);
    sub_B2C35C(&Method_System_Func_int__ShopEntity___ctor__, v18);
    sub_B2C35C(&Method_System_Func_ShopEntity__bool___ctor__, v19);
    sub_B2C35C(&Method_System_Func_ShopEntity__int___ctor__, v20);
    sub_B2C35C(&Method_System_Func_string__int___ctor__, v21);
    sub_B2C35C(&System_Func_string__int__TypeInfo, v22);
    sub_B2C35C(&System_Func_ShopEntity__int__TypeInfo, v23);
    sub_B2C35C(&System_Func_ShopEntity__bool__TypeInfo, v24);
    sub_B2C35C(&System_Func_int__ShopEntity__TypeInfo, v25);
    sub_B2C35C(&Method_System_Int32_Parse__, v26);
    sub_B2C35C(&int_TypeInfo, v27);
    sub_B2C35C(&LocalizationManager_TypeInfo, v28);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v29);
    sub_B2C35C(&Method_TerminalSceneComponent__OpenExchangeDialogue_b__243_3__, v30);
    sub_B2C35C(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__243_0__, v31);
    sub_B2C35C(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__243_1__, v32);
    sub_B2C35C(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__243_2__, v33);
    sub_B2C35C(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__243_4__, v34);
    sub_B2C35C(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__243_5__, v35);
    sub_B2C35C(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__243_6__, v36);
    sub_B2C35C(&TerminalSceneComponent___c_TypeInfo, v37);
    sub_B2C35C(&StringLiteral_18889/*"freeShopIds"*/, v38);
    byte_41846E6 = 1;
  }
  String_35342888 = UnityEngine_PlayerPrefs__GetString_35342888(playerPrefsKey, 0LL);
  v40 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !v40 )
    goto LABEL_70;
  v41 = v40;
  if ( !v40->max_length )
  {
    v96 = sub_B2C460(v40);
    sub_B2C400(v96, 0LL);
  }
  v40->m_Items[2] = 44;
  if ( !String_35342888 )
    goto LABEL_70;
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_35342888, v40, 0LL);
  v43 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_string__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v43,
    0LL,
    Method_System_Int32_Parse__,
    (const MethodInfo_27127B0 *)Method_System_Func_string__int___ctor__);
  v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v42,
                                                               (System_Func_TSource__TResult__o *)v43,
                                                               (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_string__int___);
  v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                               v44,
                                                               (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
  v46 = TerminalSceneComponent___c_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v46 = TerminalSceneComponent___c_TypeInfo;
  }
  static_fields = v46->static_fields;
  _9__243_0 = (System_Func_int__BattleActionData_SideEffectData__o *)static_fields->__9__243_0;
  if ( !_9__243_0 )
  {
    if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46);
      static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    }
    v49 = (Il2CppObject *)static_fields->__9;
    _9__243_0 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B2C42C(System_Func_int__ShopEntity__TypeInfo);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      _9__243_0,
      v49,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__243_0__,
      (const MethodInfo_270D828 *)Method_System_Func_int__ShopEntity___ctor__);
    v50 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v50->__9__243_0 = (struct System_Func_int__ShopEntity__o *)_9__243_0;
    sub_B2C2F8(&v50->__9__243_0, _9__243_0);
  }
  v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                               v45,
                                                               (System_Func_TSource__TResult__o *)_9__243_0,
                                                               (const MethodInfo_1A95A8C *)Method_System_Linq_Enumerable_Select_int__ShopEntity___);
  v52 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
          v51,
          (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
  v53 = TerminalSceneComponent___c_TypeInfo;
  v54 = (System_Collections_Generic_IEnumerable_TSource__o *)v52;
  if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v53 = TerminalSceneComponent___c_TypeInfo;
  }
  v55 = v53->static_fields;
  _9__243_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v55->__9__243_1;
  if ( !_9__243_1 )
  {
    if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53);
      v55 = TerminalSceneComponent___c_TypeInfo->static_fields;
    }
    v57 = (Il2CppObject *)v55->__9;
    _9__243_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__243_1,
      v57,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__243_1__,
      (const MethodInfo_2711C04 *)Method_System_Func_ShopEntity__bool___ctor__);
    v58 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v58->__9__243_1 = (struct System_Func_ShopEntity__bool__o *)_9__243_1;
    sub_B2C2F8(&v58->__9__243_1, _9__243_1);
  }
  v59 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v54,
          (System_Func_TSource__bool__o *)_9__243_1,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v60 = TerminalSceneComponent___c_TypeInfo;
  v61 = v59;
  if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v60 = TerminalSceneComponent___c_TypeInfo;
  }
  v62 = v60->static_fields;
  _9__243_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v62->__9__243_2;
  if ( !_9__243_2 )
  {
    if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v60);
      v62 = TerminalSceneComponent___c_TypeInfo->static_fields;
    }
    v64 = (Il2CppObject *)v62->__9;
    _9__243_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__243_2,
      v64,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__243_2__,
      (const MethodInfo_2711C04 *)Method_System_Func_ShopEntity__bool___ctor__);
    v65 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v65->__9__243_2 = (struct System_Func_ShopEntity__bool__o *)_9__243_2;
    sub_B2C2F8(&v65->__9__243_2, _9__243_2);
  }
  v66 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v61,
          (System_Func_TSource__bool__o *)_9__243_2,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v67 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_ShopEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v67,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent__OpenExchangeDialogue_b__243_3__,
    (const MethodInfo_2711C04 *)Method_System_Func_ShopEntity__bool___ctor__);
  v68 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v66,
          (System_Func_TSource__bool__o *)v67,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v69 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
          v68,
          (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
  v70 = TerminalSceneComponent___c_TypeInfo;
  v71 = (System_Collections_Generic_IEnumerable_TSource__o *)v69;
  if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v70 = TerminalSceneComponent___c_TypeInfo;
  }
  v72 = v70->static_fields;
  _9__243_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v72->__9__243_4;
  if ( !_9__243_4 )
  {
    if ( (BYTE3(v70->vtable._0_Equals.methodPtr) & 4) != 0 && !v70->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v70);
      v72 = TerminalSceneComponent___c_TypeInfo->static_fields;
    }
    v74 = (Il2CppObject *)v72->__9;
    _9__243_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_ShopEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__243_4,
      v74,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__243_4__,
      (const MethodInfo_27127B0 *)Method_System_Func_ShopEntity__int___ctor__);
    v75 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v75->__9__243_4 = (struct System_Func_ShopEntity__int__o *)_9__243_4;
    sub_B2C2F8(&v75->__9__243_4, _9__243_4);
  }
  v76 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v71,
                                                               (System_Func_TSource__TResult__o *)_9__243_4,
                                                               (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_ShopEntity__int___);
  v40 = (System_Char_array *)System_Linq_Enumerable__ToArray_int_(
                               v76,
                               (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v40 )
    goto LABEL_70;
  v77 = (System_Collections_Generic_IEnumerable_TSource__o *)v40;
  if ( *(_QWORD *)&v40->max_length )
  {
    if ( System_String__op_Equality(playerPrefsKey, (System_String_o *)StringLiteral_18889/*"freeShopIds"*/, 0LL) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v79 = LocalizationManager__Get(localizationKeyForTitle, 0LL);
      v40 = (System_Char_array *)LocalizationManager__Get(localizationKeyForDetail, 0LL);
      v80 = action;
      if ( !Instance )
        goto LABEL_70;
      goto LABEL_68;
    }
    v81 = TerminalSceneComponent___c_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v81 = TerminalSceneComponent___c_TypeInfo;
    }
    v82 = v81->static_fields;
    _9__243_5 = (System_Func_int__BattleActionData_SideEffectData__o *)v82->__9__243_5;
    if ( !_9__243_5 )
    {
      if ( (BYTE3(v81->vtable._0_Equals.methodPtr) & 4) != 0 && !v81->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v81);
        v82 = TerminalSceneComponent___c_TypeInfo->static_fields;
      }
      v84 = (Il2CppObject *)v82->__9;
      _9__243_5 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B2C42C(System_Func_int__ShopEntity__TypeInfo);
      System_Func_int__BattleActionData_SideEffectData____ctor(
        _9__243_5,
        v84,
        Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__243_5__,
        (const MethodInfo_270D828 *)Method_System_Func_int__ShopEntity___ctor__);
      v85 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v85->__9__243_5 = (struct System_Func_int__ShopEntity__o *)_9__243_5;
      sub_B2C2F8(&v85->__9__243_5, _9__243_5);
    }
    v86 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                                 v77,
                                                                 (System_Func_TSource__TResult__o *)_9__243_5,
                                                                 (const MethodInfo_1A95A8C *)Method_System_Linq_Enumerable_Select_int__ShopEntity___);
    v87 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                 v86,
                                                                 (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v79 = LocalizationManager__Get(localizationKeyForTitle, 0LL);
    v88 = LocalizationManager__Get(localizationKeyForDetail, 0LL);
    v89 = TerminalSceneComponent___c_TypeInfo;
    v90 = v88;
    if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v89 = TerminalSceneComponent___c_TypeInfo;
    }
    v91 = v89->static_fields;
    _9__243_6 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v91->__9__243_6;
    if ( !_9__243_6 )
    {
      if ( (BYTE3(v89->vtable._0_Equals.methodPtr) & 4) != 0 && !v89->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v89);
        v91 = TerminalSceneComponent___c_TypeInfo->static_fields;
      }
      v93 = (Il2CppObject *)v91->__9;
      _9__243_6 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_ShopEntity__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__243_6,
        v93,
        Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__243_6__,
        (const MethodInfo_27127B0 *)Method_System_Func_ShopEntity__int___ctor__);
      v94 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v94->__9__243_6 = (struct System_Func_ShopEntity__int__o *)_9__243_6;
      sub_B2C2F8(&v94->__9__243_6, _9__243_6);
    }
    v97 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
            v87,
            (System_Func_TSource__int__o *)_9__243_6,
            (const MethodInfo_1A9A55C *)Method_System_Linq_Enumerable_Sum_ShopEntity___);
    v95 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v97);
    v40 = (System_Char_array *)System_String__Format(v90, v95, 0LL);
    if ( Instance )
    {
      v80 = action;
LABEL_68:
      CommonUI__OpenAchievementExchangeConditionsDialog(
        Instance,
        (System_Int32_array *)v77,
        v79,
        (System_String_o *)v40,
        v80,
        0LL);
      goto LABEL_69;
    }
LABEL_70:
    sub_B2C434(v40, v41);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  WarEntity_o *IsPlayChapterStart; // x0
  __int64 v14; // x1
  QuestTree_o *v15; // x20
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
  const MethodInfo *v29; // x1
  int64_t v30; // x22
  TerminalPramsManager_c *v31; // x0
  int32_t v32; // w22
  const MethodInfo *v33; // x0
  TerminalPramsManager_c *v34; // x0

  if ( (byte_41846DB & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, end_act);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v6);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v8);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v9);
    sub_B2C35C(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, v10);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v11);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v12);
    byte_41846DB = 1;
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
  sub_B2C2F8(&this->fields.OnResumeFromChapterStart, end_act);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v15 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C67 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v14);
    byte_4183C67 = 1;
  }
  IsPlayChapterStart = (WarEntity_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IsPlayChapterStart = (WarEntity_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v15 )
    goto LABEL_85;
  IsPlayChapterStart = QuestTree__mfGetWarEntityByWarID(
                         v15,
                         *(_DWORD *)(*(_QWORD *)&IsPlayChapterStart[1].fields.parentWarId + 4LL),
                         0LL);
  if ( !IsPlayChapterStart )
    goto LABEL_85;
  v16 = IsPlayChapterStart;
  StartType = WarEntity__GetStartType(IsPlayChapterStart, 0LL);
  if ( StartType == 2 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C67 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v18);
      byte_4183C67 = 1;
    }
    v22 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v22 = TerminalPramsManager_TypeInfo;
    }
    targetId = v16->fields.targetId;
    WarId_k__BackingField = v22->static_fields->_WarId_k__BackingField;
    v19 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_B2C42C(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    BattleScriptRootComponent_TalkScriptInfo___ctor_20075984(v19, WarId_k__BackingField, targetId, 0, 1, 0, 0, 0, 0LL);
  }
  else
  {
    v19 = 0LL;
    if ( StartType == 1 )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4183C67 )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v18);
        byte_4183C67 = 1;
      }
      v20 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v20 = TerminalPramsManager_TypeInfo;
      }
      v21 = v20->static_fields->_WarId_k__BackingField;
      v19 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_B2C42C(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
      BattleScriptRootComponent_TalkScriptInfo___ctor_20075984(v19, v21, 0, 0, 1, 0, 0, 0, 0LL);
    }
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C67 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v18);
    byte_4183C67 = 1;
  }
  v25 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v25 = TerminalPramsManager_TypeInfo;
  }
  v26 = BalanceConfig_TypeInfo;
  v27 = v25->static_fields->_WarId_k__BackingField;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v26 = BalanceConfig_TypeInfo;
  }
  if ( v27 == v26->static_fields->OrdealCallWarId )
  {
    v28 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v28 = TerminalSceneComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v28->static_fields->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY, 1, 0LL);
  }
  if ( WarEntity__HasFlag(v16, 0x8000, 0LL) )
  {
    v30 = v16->fields.targetId;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C6B )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v29);
      byte_4183C6B = 1;
    }
    v31 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v31 = TerminalPramsManager_TypeInfo;
    }
    v31->static_fields->_QuestId_k__BackingField = v30;
    v32 = v16->fields.targetId;
    if ( !byte_4183CBD )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v29);
      v31 = TerminalPramsManager_TypeInfo;
      byte_4183CBD = 1;
    }
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = TerminalPramsManager_TypeInfo;
    }
    v31->static_fields->_LastPlayedQuestId_k__BackingField = v32;
    TerminalPramsManager__CheckClearSelectedStoryQuestId(v16->fields.targetId, v29);
    TerminalPramsManager__PlayQuestSave_SaveData(v33);
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    IsPlayChapterStart = (WarEntity_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( IsPlayChapterStart )
    {
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)IsPlayChapterStart, 0LL);
      IsPlayChapterStart = (WarEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( IsPlayChapterStart )
      {
        AvalonSceneManager__changeScene((AvalonSceneManager_o *)IsPlayChapterStart, 38, 2, (Il2CppObject *)v19, 0LL);
        return;
      }
    }
LABEL_85:
    sub_B2C434(IsPlayChapterStart, v14);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183CBA )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v29);
    byte_4183CBA = 1;
  }
  v34 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v34 = TerminalPramsManager_TypeInfo;
  }
  v34->static_fields->meSceneStatus = 3;
  IsPlayChapterStart = (WarEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !IsPlayChapterStart )
    goto LABEL_85;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)IsPlayChapterStart, 38, 2, (Il2CppObject *)v19, 0LL);
}


void __fastcall TerminalSceneComponent__PlayEventTutorial(
        TerminalSceneComponent_o *this,
        System_Action_o *callbakAfter,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  TerminalSceneComponent___c__DisplayClass220_0_o *v8; // x20
  UnityEngine_Component_o *EventID; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  TerminalPramsManager_c *v12; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  int32_t v14; // w21
  System_Action_o *v15; // x22
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct WarEntity_o *mWarEnt; // x8

  if ( (byte_41846DC & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callbakAfter);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v5);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass220_0__PlayEventTutorial_b__0__, v6);
    sub_B2C35C(&TerminalSceneComponent___c__DisplayClass220_0_TypeInfo, v7);
    byte_41846DC = 1;
  }
  v8 = (TerminalSceneComponent___c__DisplayClass220_0_o *)sub_B2C42C(TerminalSceneComponent___c__DisplayClass220_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass220_0___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_18;
  v8->fields.__4__this = this;
  sub_B2C2F8(&v8->fields, this);
  v8->fields.callbakAfter = callbakAfter;
  sub_B2C2F8(&v8->fields.callbakAfter, callbakAfter);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C67 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v11);
    byte_4183C67 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  EventID = (UnityEngine_Component_o *)WarMaster__getEventID(v12->static_fields->_WarId_k__BackingField, 0LL);
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_18;
  v14 = (int)EventID;
  EventID = (UnityEngine_Component_o *)mTerminalList->fields.mActionBgColl;
  if ( !EventID
    || (EventID = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(EventID, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EventID, 1, 0LL),
        v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v8,
          Method_TerminalSceneComponent___c__DisplayClass220_0__PlayEventTutorial_b__0__,
          0LL),
        (mTerminalMap = this->fields.mTerminalMap) == 0LL)
    || (mWarEnt = mTerminalMap->fields.mWarEnt) == 0LL )
  {
LABEL_18:
    sub_B2C434(EventID, v10);
  }
  EventTutorialMaster__CheckTutorial(v14, 1, v15, *(&mWarEnt->fields.id + 1), 0, 0, 0, 0LL);
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
    sub_B2C434(mQuestInformation, method);
  return QuestInformationComponent__isListBuilding(mQuestInformation, 0LL);
}


int32_t __fastcall TerminalSceneComponent__QuestInfoShowing(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct QuestInformationComponent_o *mQuestInformation; // x8

  mQuestInformation = this->fields.mQuestInformation;
  if ( !mQuestInformation )
    sub_B2C434(this, method);
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
  CommonUI_o *Instance; // x19
  System_String_o *v9; // x20
  System_String_o *v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x21
  TerminalSceneComponent___c_c *v13; // x8
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x9
  ErrorDialog_ClickDelegate_o *_9__204_0; // x22
  Il2CppObject *v16; // x23
  struct TerminalSceneComponent___c_StaticFields *v17; // x0

  if ( (byte_41846D2 & 1) == 0 )
  {
    sub_B2C35C(&ErrorDialog_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v2);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_TerminalSceneComponent___c__RebootToNetworkError_b__204_0__, v4);
    sub_B2C35C(&TerminalSceneComponent___c_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_13348/*"TERMINAL_NETWORK_ERROR_DIALOG_TITLE"*/, v6);
    sub_B2C35C(&StringLiteral_13347/*"TERMINAL_NETWORK_ERROR_DIALOG_MESSAGE"*/, v7);
    byte_41846D2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_13348/*"TERMINAL_NETWORK_ERROR_DIALOG_TITLE"*/, 0LL);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_13347/*"TERMINAL_NETWORK_ERROR_DIALOG_MESSAGE"*/, 0LL);
  v12 = v10;
  v13 = TerminalSceneComponent___c_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v13 = TerminalSceneComponent___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__204_0 = static_fields->__9__204_0;
  if ( !_9__204_0 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__204_0 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(
      _9__204_0,
      v16,
      Method_TerminalSceneComponent___c__RebootToNetworkError_b__204_0__,
      0LL);
    v17 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v17->__9__204_0 = _9__204_0;
    sub_B2C2F8(&v17->__9__204_0, _9__204_0);
  }
  if ( !Instance )
    sub_B2C434(v10, v11);
  CommonUI__OpenErrorDialog(Instance, v9, v12, _9__204_0, 1, 0LL);
}


void __fastcall TerminalSceneComponent__SendMessageStartUpAndResume(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20
  TerminalSceneComponent_PlayChapterStartCallback_o *v7; // x0
  struct TerminalSceneComponent_PlayChapterStartCallback_o **p_OnResumeFromChapterStart; // x19
  struct TerminalSceneComponent_PlayChapterStartCallback_o *OnResumeFromChapterStart; // t1

  if ( (byte_41846B0 & 1) == 0 )
  {
    sub_B2C35C(&AvalonSceneManager_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_41846B0 = 1;
  }
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
  if ( this->fields.isFadeInAfterResumeLoad )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (CommonUI_o *)Instance;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    }
    if ( !v6 )
      sub_B2C434(Instance, v5);
    CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
    this->fields.isFadeInAfterResumeLoad = 0;
  }
  OnResumeFromChapterStart = this->fields.OnResumeFromChapterStart;
  p_OnResumeFromChapterStart = &this->fields.OnResumeFromChapterStart;
  v7 = OnResumeFromChapterStart;
  if ( OnResumeFromChapterStart )
  {
    TerminalSceneComponent_PlayChapterStartCallback__Invoke(v7, 1, 0LL);
    *p_OnResumeFromChapterStart = 0LL;
    sub_B2C2F8(p_OnResumeFromChapterStart, 0LL);
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
    sub_B2C434(this, isEnable);
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

  if ( (byte_41846ED & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isActive);
    sub_B2C35C(&StringLiteral_5303/*"Directional light"*/, v5);
    byte_41846ED = 1;
  }
  GameObjectWithLog = (UnityEngine_Object_o *)GameObjectExtensions__FindGameObjectWithLog(
                                                this->fields.mEarthCoreObj,
                                                (System_String_o *)StringLiteral_5303/*"Directional light"*/,
                                                0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Equality(GameObjectWithLog, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !GameObjectWithLog )
      sub_B2C434(v7, v8);
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

  if ( (byte_41846BA & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, isDisp);
    byte_41846BA = 1;
  }
  mTerminalServant = (UnityEngine_Component_o *)this->fields.mTerminalServant;
  if ( !mTerminalServant
    || (gameObject = UnityEngine_Component__get_gameObject(mTerminalServant, 0LL),
        (mTerminalServant = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL)) == 0LL)
    || (mTerminalServant = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mTerminalServant, 0LL)) == 0LL
    || (mTerminalServant = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)mTerminalServant,
                                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIPanel___)) == 0LL )
  {
    sub_B2C434(mTerminalServant, isDisp);
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
  TerminalSceneComponent___c__DisplayClass164_0_o *v12; // x20
  UnityEngine_Camera_o *mEarthEffCamera; // x0
  __int64 v14; // x1
  UnityEngine_Object_o *mEarthCore; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v17; // x0
  TerminalSceneComponent_c *v18; // x0
  int *v19; // x1
  System_String_o *EARTH_ASSET_NAME; // x21
  System_Int32_c *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  TerminalSceneComponent_c *v24; // x0
  Il2CppObject *v25; // x0
  struct System_String_o *v26; // x0
  WebViewManager_o *Instance; // x0
  System_String_o *loadEarthAssetName; // x19
  AssetManager_o *v29; // x21
  AssetLoader_LoadEndDataHandler_o *v30; // x22
  int v31; // [xsp+8h] [xbp-28h] BYREF
  int v32; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_41846AD & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, callback);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&ServantCommentManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v8);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v9);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass164_0__SetEarthView_b__0__, v10);
    sub_B2C35C(&TerminalSceneComponent___c__DisplayClass164_0_TypeInfo, v11);
    byte_41846AD = 1;
  }
  v12 = (TerminalSceneComponent___c__DisplayClass164_0_o *)sub_B2C42C(TerminalSceneComponent___c__DisplayClass164_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass164_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_34;
  v12->fields.__4__this = this;
  sub_B2C2F8(&v12->fields, this);
  v12->fields.callback = callback;
  sub_B2C2F8(&v12->fields.callback, callback);
  mEarthCore = (UnityEngine_Object_o *)this->fields.mEarthCore;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mEarthCore, 0LL, 0LL) )
  {
    ActionExtensions__Call(v12->fields.callback, 0LL);
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
              v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0LL);
              GameObjectExtensions__SetLocalPositionZ(v17, -792.87, 0LL);
              v18 = TerminalSceneComponent_TypeInfo;
              if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                v18 = TerminalSceneComponent_TypeInfo;
              }
              v19 = &v32;
              EARTH_ASSET_NAME = v18->static_fields->EARTH_ASSET_NAME;
              v21 = int_TypeInfo;
              v32 = 2;
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_34:
    sub_B2C434(mEarthEffCamera, v14);
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
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0LL);
  GameObjectExtensions__SetLocalPositionZ(v22, -50000.0, 0LL);
  mEarthEffCamera = this->fields.mEarthEffCamera;
  if ( !mEarthEffCamera )
    goto LABEL_34;
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0LL);
  GameObjectExtensions__SetLocalPositionZ(v23, -50000.0, 0LL);
  v24 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v24 = TerminalSceneComponent_TypeInfo;
  }
  v19 = &v31;
  EARTH_ASSET_NAME = v24->static_fields->EARTH_ASSET_NAME;
  v21 = int_TypeInfo;
  v31 = 1;
LABEL_32:
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(v21, v19);
  v26 = System_String__Format(EARTH_ASSET_NAME, v25, 0LL);
  this->fields.loadEarthAssetName = v26;
  sub_B2C2F8(&this->fields.loadEarthAssetName, v26);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  loadEarthAssetName = this->fields.loadEarthAssetName;
  v29 = (AssetManager_o *)Instance;
  v30 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v30,
    (Il2CppObject *)v12,
    Method_TerminalSceneComponent___c__DisplayClass164_0__SetEarthView_b__0__,
    0LL);
  if ( !v29 )
    goto LABEL_34;
  AssetManager__LoadAssetStorage(v29, loadEarthAssetName, v30, 1, 0LL);
}


void __fastcall TerminalSceneComponent__SetQuestBoardInfoOff(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ScrTerminalListTop_o *mTerminalList; // x0

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    sub_B2C434(0LL, method);
  ScrTerminalListTop__ShowingInfoAllOff(mTerminalList, 0LL);
}


void __fastcall TerminalSceneComponent__SetQuestInfoResetReady(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  QuestInformationComponent_o *mQuestInformation; // x0

  mQuestInformation = this->fields.mQuestInformation;
  if ( !mQuestInformation )
    sub_B2C434(0LL, method);
  QuestInformationComponent__SetResetReady(mQuestInformation, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent__SetState(
        TerminalSceneComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  struct CStateManager_TerminalSceneComponent__o *mFSM; // x0

  if ( (byte_41846DE & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_TerminalSceneComponent__setState__, *(_QWORD *)&state);
    byte_41846DE = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B2C434(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2A084C4 *)Method_CStateManager_TerminalSceneComponent__setState__);
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
  TerminalSceneComponent___c__DisplayClass178_0_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  StandFigureSlideComponent_o *mTerminalServant; // x22
  System_Action_o *v16; // x23
  struct StandFigureSlideComponent_o *v17; // x19
  System_Action_o *v18; // x20

  if ( (byte_41846B9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, usd);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass178_0__SetupStandServant_b__0__, v9);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass178_0__SetupStandServant_b__1__, v10);
    sub_B2C35C(&TerminalSceneComponent___c__DisplayClass178_0_TypeInfo, v11);
    byte_41846B9 = 1;
  }
  v12 = (TerminalSceneComponent___c__DisplayClass178_0_o *)sub_B2C42C(TerminalSceneComponent___c__DisplayClass178_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass178_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_7;
  v12->fields.isSlideIn = isSlideIn;
  v12->fields.__4__this = this;
  sub_B2C2F8(&v12->fields.__4__this, this);
  v12->fields.endAction = endAction;
  sub_B2C2F8(&v12->fields.endAction, endAction);
  mTerminalServant = this->fields.mTerminalServant;
  v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v12,
    Method_TerminalSceneComponent___c__DisplayClass178_0__SetupStandServant_b__0__,
    0LL);
  if ( !mTerminalServant
    || (StandFigureSlideComponent__Setup(mTerminalServant, usd, 0, v16, 0LL),
        v17 = this->fields.mTerminalServant,
        v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v12,
          Method_TerminalSceneComponent___c__DisplayClass178_0__SetupStandServant_b__1__,
          0LL),
        !v17) )
  {
LABEL_7:
    sub_B2C434(v13, v14);
  }
  v17->fields.mBtnAct = v18;
  sub_B2C2F8(&v17->fields.mBtnAct, v18);
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
    sub_B2C2F8(&this->fields.afterEventDailyPoint, callback);
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
  TerminalPramsManager_c *v15; // x0
  TerminalPramsManager_c *v16; // x0
  TerminalSceneComponent_c *allMaskPanel; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8
  TerminalPramsManager_c *v20; // x0
  System_Action_Action__array *v21; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v22; // x21
  TerminalSceneComponent___c_c *v23; // x0
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__189_1; // x20
  Il2CppObject *v26; // x21
  struct TerminalSceneComponent___c_StaticFields *v27; // x0
  System_Action_Action__o *v28; // x8
  TerminalSceneComponent___c_c *v29; // x0
  struct TerminalSceneComponent___c_StaticFields *v30; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__189_2; // x20
  Il2CppObject *v32; // x21
  struct TerminalSceneComponent___c_StaticFields *v33; // x0
  System_Action_Action__o *v34; // x8
  TerminalSceneComponent___c_c *v35; // x0
  struct TerminalSceneComponent___c_StaticFields *v36; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__189_3; // x20
  Il2CppObject *v38; // x21
  struct TerminalSceneComponent___c_StaticFields *v39; // x0
  System_Action_Action__o *v40; // x8
  ActionChain_o *v41; // x20
  __int64 v42; // x0
  __int64 v43; // x0

  if ( (byte_41846C3 & 1) == 0 )
  {
    sub_B2C35C(&ActionChain_TypeInfo, callbackFunc);
    sub_B2C35C(&System_Action_Action____TypeInfo, v5);
    sub_B2C35C(&Method_System_Action_Action___ctor__, v6);
    sub_B2C35C(&System_Action_Action__TypeInfo, v7);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v8);
    sub_B2C35C(&Method_TerminalSceneComponent__StartWindowMessage_b__189_0__, v9);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v10);
    sub_B2C35C(&Method_TerminalSceneComponent___c__StartWindowMessage_b__189_1__, v11);
    sub_B2C35C(&Method_TerminalSceneComponent___c__StartWindowMessage_b__189_2__, v12);
    sub_B2C35C(&Method_TerminalSceneComponent___c__StartWindowMessage_b__189_3__, v13);
    sub_B2C35C(&TerminalSceneComponent___c_TypeInfo, v14);
    byte_41846C3 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C79 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, callbackFunc);
    byte_4183C79 = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  if ( v15->static_fields->_IsDispOnly_k__BackingField )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v15);
    if ( !byte_4184754 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, callbackFunc);
      byte_4184754 = 1;
    }
    v16 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v16 = TerminalPramsManager_TypeInfo;
    }
    if ( !System_String__IsNullOrEmpty(v16->static_fields->_QuestWindowMessage_k__BackingField, 0LL) )
    {
      v21 = (System_Action_Action__array *)sub_B2C374(System_Action_Action____TypeInfo, 4LL);
      v22 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        v22,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent__StartWindowMessage_b__189_0__,
        (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
      if ( !v21 )
        goto LABEL_75;
      if ( !v22 || (allMaskPanel = (TerminalSceneComponent_c *)sub_B2C41C(v22, v21->obj.klass->_1.element_class)) != 0LL )
      {
        if ( !v21->max_length )
          goto LABEL_76;
        v21->m_Items[0] = (System_Action_Action__o *)v22;
        sub_B2C2F8(v21->m_Items, v22);
        v23 = TerminalSceneComponent___c_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
          v23 = TerminalSceneComponent___c_TypeInfo;
        }
        static_fields = v23->static_fields;
        _9__189_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__189_1;
        if ( _9__189_1 )
          goto LABEL_48;
        if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v23);
          static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
        }
        v26 = (Il2CppObject *)static_fields->__9;
        _9__189_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          _9__189_1,
          v26,
          Method_TerminalSceneComponent___c__StartWindowMessage_b__189_1__,
          (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
        v27 = TerminalSceneComponent___c_TypeInfo->static_fields;
        v27->__9__189_1 = (struct System_Action_Action__o *)_9__189_1;
        sub_B2C2F8(&v27->__9__189_1, _9__189_1);
        if ( _9__189_1 )
        {
LABEL_48:
          allMaskPanel = (TerminalSceneComponent_c *)sub_B2C41C(_9__189_1, v21->obj.klass->_1.element_class);
          v28 = (System_Action_Action__o *)_9__189_1;
          if ( !allMaskPanel )
            goto LABEL_77;
        }
        else
        {
          v28 = 0LL;
        }
        if ( v21->max_length <= 1 )
          goto LABEL_76;
        v21->m_Items[1] = v28;
        sub_B2C2F8(&v21->m_Items[1], _9__189_1);
        v29 = TerminalSceneComponent___c_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
          v29 = TerminalSceneComponent___c_TypeInfo;
        }
        v30 = v29->static_fields;
        _9__189_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v30->__9__189_2;
        if ( _9__189_2 )
          goto LABEL_58;
        if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v30 = TerminalSceneComponent___c_TypeInfo->static_fields;
        }
        v32 = (Il2CppObject *)v30->__9;
        _9__189_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          _9__189_2,
          v32,
          Method_TerminalSceneComponent___c__StartWindowMessage_b__189_2__,
          (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
        v33 = TerminalSceneComponent___c_TypeInfo->static_fields;
        v33->__9__189_2 = (struct System_Action_Action__o *)_9__189_2;
        sub_B2C2F8(&v33->__9__189_2, _9__189_2);
        if ( _9__189_2 )
        {
LABEL_58:
          allMaskPanel = (TerminalSceneComponent_c *)sub_B2C41C(_9__189_2, v21->obj.klass->_1.element_class);
          v34 = (System_Action_Action__o *)_9__189_2;
          if ( !allMaskPanel )
            goto LABEL_77;
        }
        else
        {
          v34 = 0LL;
        }
        if ( v21->max_length <= 2 )
          goto LABEL_76;
        v21->m_Items[2] = v34;
        sub_B2C2F8(&v21->m_Items[2], _9__189_2);
        v35 = TerminalSceneComponent___c_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
          v35 = TerminalSceneComponent___c_TypeInfo;
        }
        v36 = v35->static_fields;
        _9__189_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v36->__9__189_3;
        if ( !_9__189_3 )
        {
          if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v35);
            v36 = TerminalSceneComponent___c_TypeInfo->static_fields;
          }
          v38 = (Il2CppObject *)v36->__9;
          _9__189_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            _9__189_3,
            v38,
            Method_TerminalSceneComponent___c__StartWindowMessage_b__189_3__,
            (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
          v39 = TerminalSceneComponent___c_TypeInfo->static_fields;
          v39->__9__189_3 = (struct System_Action_Action__o *)_9__189_3;
          sub_B2C2F8(&v39->__9__189_3, _9__189_3);
          if ( !_9__189_3 )
          {
            v40 = 0LL;
LABEL_69:
            if ( v21->max_length > 3 )
            {
              v21->m_Items[3] = v40;
              sub_B2C2F8(&v21->m_Items[3], _9__189_3);
              v41 = (ActionChain_o *)sub_B2C42C(ActionChain_TypeInfo);
              ActionChain___ctor_21119660(v41, v21, 0LL);
              if ( v41 )
              {
                ChainableActionBase__Execute((ChainableActionBase_o *)v41, 0LL);
                return;
              }
LABEL_75:
              sub_B2C434(allMaskPanel, callbackFunc);
            }
LABEL_76:
            v42 = sub_B2C460(allMaskPanel);
            sub_B2C400(v42, 0LL);
          }
        }
        allMaskPanel = (TerminalSceneComponent_c *)sub_B2C41C(_9__189_3, v21->obj.klass->_1.element_class);
        v40 = (System_Action_Action__o *)_9__189_3;
        if ( allMaskPanel )
          goto LABEL_69;
      }
LABEL_77:
      v43 = sub_B2C454();
      sub_B2C400(v43, 0LL);
    }
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, callbackFunc);
    byte_4183C65 = 1;
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
  v20 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v20);
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
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_41846C6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_41846C6 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
    sub_B2C434(Instance, v10);
  TitleInfoControl__CheckSuperBossHpAnim((TitleInfoControl_o *)Instance, callback, 0LL);
}


void __fastcall TerminalSceneComponent__Update(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  struct CStateManager_TerminalSceneComponent__o *mFSM; // x0
  ScrTerminalMap_o *mTerminalMap; // x20
  _BOOL8 IsMapTouchEnabled; // x0
  __int64 v8; // x1

  if ( (byte_41846C8 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_TerminalSceneComponent__update__, method);
    sub_B2C35C(&CTouch_TypeInfo, v3);
    byte_41846C8 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2A0849C *)Method_CStateManager_TerminalSceneComponent__update__);
  mTerminalMap = this->fields.mTerminalMap;
  IsMapTouchEnabled = TerminalSceneComponent__IsMapTouchEnabled(this, v4);
  if ( !mTerminalMap )
    sub_B2C434(IsMapTouchEnabled, v8);
  ScrTerminalMap__ProcessMapCamera(mTerminalMap, IsMapTouchEnabled, 0LL);
}


void __fastcall TerminalSceneComponent__UpdateCompleteMissionIconUI(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  ScrPlayerStatus_o *mPlayerStatus; // x0

  mPlayerStatus = this->fields.mPlayerStatus;
  if ( !mPlayerStatus )
    sub_B2C434(0LL, method);
  ScrPlayerStatus__UpdateCompleteMissionIconUI(mPlayerStatus, 0LL);
}


void __fastcall TerminalSceneComponent__UpdateQuestBoardList(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x8

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList || (this = (TerminalSceneComponent_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0LL )
    sub_B2C434(this, method);
  QuestBoardListViewManager__SetupDisp((QuestBoardListViewManager_o *)this, 0LL);
}


void __fastcall TerminalSceneComponent__UpdateTitleEventInfo(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *mTitleInfo; // x0

  mTitleInfo = this->fields.mTitleInfo;
  if ( !mTitleInfo )
    sub_B2C434(0LL, method);
  TitleInfoControl__UpdateEventItemInfo(mTitleInfo, 0LL);
}


System_Collections_IEnumerator_o *__fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__183_o *v2; // x19

  if ( (byte_41846BD & 1) == 0 )
  {
    sub_B2C35C(&TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__183_TypeInfo, method);
    byte_41846BD = 1;
  }
  v2 = (TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__183_o *)sub_B2C42C(TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__183_TypeInfo);
  TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__183___ctor(v2, 0, 0LL);
  return (System_Collections_IEnumerator_o *)v2;
}


bool __fastcall TerminalSceneComponent___CoWaitBlankEerthActionEnd_b__240_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *mTerminalList; // x0

  if ( (byte_41846F5 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_41846F5 = 1;
  }
  mTerminalList = (CommonUI_o *)this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_9;
  if ( !ScrTerminalListTop__IsBlankEarthAction((ScrTerminalListTop_o *)mTerminalList, 0LL) )
  {
    mTerminalList = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( mTerminalList )
      return !CommonUI__IsActive_NotifiDialog(mTerminalList, 0LL);
LABEL_9:
    sub_B2C434(mTerminalList, method);
  }
  return 0;
}


bool __fastcall TerminalSceneComponent___CoWaitTerminalTopEffectEnd_b__239_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *mTerminalList; // x0

  if ( (byte_41846F4 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_41846F4 = 1;
  }
  mTerminalList = (CommonUI_o *)this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_9;
  if ( ScrTerminalListTop__CheckTerminalTopEffect((ScrTerminalListTop_o *)mTerminalList, 0LL) <= 0 )
  {
    mTerminalList = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( mTerminalList )
      return !CommonUI__IsActive_NotifiDialog(mTerminalList, 0LL);
LABEL_9:
    sub_B2C434(mTerminalList, method);
  }
  return 0;
}


bool __fastcall TerminalSceneComponent___OpenExchangeDialogue_b__243_3(
        TerminalSceneComponent_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  return !TerminalSceneComponent__IsNotDisplayCostume(this, x, method);
}


void __fastcall TerminalSceneComponent___StartWindowMessage_b__189_0(
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
    sub_B2C434(this, action);
  }
  QuestBoardListViewManager__SetMode((QuestBoardListViewManager_o *)this, 4, action, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalSceneComponent___beginInitialize_b__163_0(
        TerminalSceneComponent_o *this,
        bool gotNewServant,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  TerminalPramsManager_c *v11; // x0
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct ScrTerminalMap_o *v14; // x8
  struct ScrTerminalMap_o *v15; // x8
  struct MapEntity_o *mMapEnt; // x8
  ScrTerminalMap_o *v17; // x20
  System_Action_o *v18; // x21
  TitleInfoControl_o *mTitleInfo; // x20
  System_Action_o *v20; // x21

  v4 = this;
  if ( (byte_41846F0 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, gotNewServant);
    sub_B2C35C(&Method_DataManager_GetMaster_EventRaidMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v8);
    sub_B2C35C(&Method_TerminalSceneComponent__beginInitialize_b__163_3__, v9);
    this = (TerminalSceneComponent_o *)sub_B2C35C(&Method_TerminalSceneComponent__beginInitialize_b__163_4__, v10);
    byte_41846F0 = 1;
  }
  v4->fields._onClosePresentBoxFlag_k__BackingField = 1;
  if ( gotNewServant )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C70 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, gotNewServant);
      byte_4183C70 = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    v11->static_fields->_IsAutoResume_k__BackingField = 1;
    this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( this )
    {
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 34, 1, 0LL, 0LL);
      return 0;
    }
LABEL_33:
    sub_B2C434(this, gotNewServant);
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
  v14 = v4->fields.mTerminalMap;
  if ( !v14 )
    goto LABEL_33;
  if ( !LOBYTE(v14->fields.currentMapLayerId) )
    goto LABEL_28;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (TerminalSceneComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventRaidMaster___);
  v15 = v4->fields.mTerminalMap;
  if ( !v15 )
    goto LABEL_33;
  mMapEnt = v15->fields.mMapEnt;
  if ( !mMapEnt || !this )
    goto LABEL_33;
  if ( EventRaidMaster__GetRaidGorupMax((EventRaidMaster_o *)this, mMapEnt[1].fields.bgmId, 0LL) >= 1 )
  {
    v17 = v4->fields.mTerminalMap;
    v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v18, (Il2CppObject *)v4, Method_TerminalSceneComponent__beginInitialize_b__163_3__, 0LL);
    if ( !v17 )
      goto LABEL_33;
    ScrTerminalMap__BeginRaidUpdateRequest(v17, v18, 0LL);
  }
  else
  {
LABEL_28:
    this = (TerminalSceneComponent_o *)v4->fields.mTitleInfo;
    if ( !this )
      goto LABEL_33;
    TitleInfoControl__InitEventAlphaAnim((TitleInfoControl_o *)this, 0LL);
    mTitleInfo = v4->fields.mTitleInfo;
    v20 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)v4, Method_TerminalSceneComponent__beginInitialize_b__163_4__, 0LL);
    if ( !mTitleInfo )
      goto LABEL_33;
    TitleInfoControl__UpdateEventInfo(mTitleInfo, v20, 0LL);
    this = (TerminalSceneComponent_o *)v4->fields.mTitleInfo;
    if ( !this )
      goto LABEL_33;
    TitleInfoControl__FrameIn((TitleInfoControl_o *)this, 0, 0LL);
  }
  return 1;
}


void __fastcall TerminalSceneComponent___beginInitialize_b__163_1(
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
    sub_B2C434(mPlayerStatus, method);
  }
  QuestBoardListViewManager__SetupDisp((QuestBoardListViewManager_o *)mPlayerStatus, 0LL);
}


void __fastcall TerminalSceneComponent___beginInitialize_b__163_2(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1
  ScrTerminalMap_o *mTerminalMap; // x19

  if ( (byte_41846F2 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_41846F2 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL),
        (Instance = (AvalonSceneManager_o *)this->fields.mEarthCore) == 0LL)
    || (mTerminalMap = this->fields.mTerminalMap,
        Instance = (AvalonSceneManager_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)Instance,
                                             0LL),
        !mTerminalMap) )
  {
    sub_B2C434(Instance, v4);
  }
  ScrTerminalMap__SetCore(mTerminalMap, (UnityEngine_GameObject_o *)Instance, 0LL);
}


void __fastcall TerminalSceneComponent___beginInitialize_b__163_3(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  QuestTree_o *v8; // x20
  TerminalPramsManager_c *v9; // x0
  int32_t WarId_k__BackingField; // w21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_IEnumerator_o *v14; // x1

  if ( (byte_41846F1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v3);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v4);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v5);
    sub_B2C35C(&Method_TerminalSceneComponent__beginInitialize_b__163_5__, v6);
    byte_41846F1 = 1;
  }
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v8 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C67 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v7);
    byte_4183C67 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v9->static_fields->_WarId_k__BackingField;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__163_5__, 0LL);
  if ( !v8 )
    sub_B2C434(v12, v13);
  v14 = QuestTree__mfBaseTreeUpdateWithOpenCheck(v8, WarId_k__BackingField, v11, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v14, 0LL);
}


void __fastcall TerminalSceneComponent___beginInitialize_b__163_4(
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
    sub_B2C434(this, method);
  }
}


void __fastcall TerminalSceneComponent___beginInitialize_b__163_5(
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
    sub_B2C434(mTerminalList, method);
  }
  ScrTerminalMap__UpdateEventRaidUI((ScrTerminalMap_o *)mTerminalList, 0LL);
}


void __fastcall TerminalSceneComponent___callbackEventDailyPoint_b__209_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.afterEventDailyPoint, 0LL);
}


void __fastcall TerminalSceneComponent___mfsmfInitTable_b__206_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *v2; // x19
  __int64 v3; // x1
  PlayMakerFSM_o *myFSM; // x0

  v2 = this;
  if ( (byte_41846F3 & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_B2C35C(&StringLiteral_5536/*"EVENTLISTUP_END"*/, method);
    byte_41846F3 = 1;
  }
  TerminalSceneComponent__deleteQuestMovie(this, method);
  myFSM = v2->fields.myFSM;
  if ( !myFSM )
    sub_B2C434(0LL, v3);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_5536/*"EVENTLISTUP_END"*/, 0LL);
}


void __fastcall TerminalSceneComponent__beginFinish(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int32_t quitType; // w8

  if ( !this )
    sub_B2C434(0LL, method);
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
  TerminalPramsManager_c *v28; // x0
  __int64 v29; // x1
  TerminalPramsManager_c *v30; // x0
  TerminalPramsManager_c *v31; // x0
  const MethodInfo *v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x0
  TitleInfoControl_o *Instance; // x0
  __int64 v36; // x1
  CommonUI_o *v37; // x20
  __int64 v38; // x1
  TerminalPramsManager_c *v39; // x0
  __int64 v40; // x1
  struct UnityEngine_Camera_o *mUICamera; // x20
  CTouch_c *v42; // x0
  struct CTouch_StaticFields *static_fields; // x0
  struct CStateManager_TerminalSceneComponent__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v45; // x21
  struct CStateManager_TerminalSceneComponent__o *mFSM; // x21
  TerminalSceneComponent_StateNormal_o *v47; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v48; // x21
  TerminalSceneComponent_StateTutorial1_SpotArrow_o *v49; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v50; // x21
  TerminalSceneComponent_StateTutorial1_QuestArrow_o *v51; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v52; // x21
  TerminalSceneComponent_StateTutorial2_SpotArrow_o *v53; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v54; // x21
  TerminalSceneComponent_StateTutorial2_QuestArrow_o *v55; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v56; // x21
  TerminalSceneComponent_StateTutorial3_MenuArrow_o *v57; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v58; // x21
  TerminalSceneComponent_StateTutorial3_GachaArrow_o *v59; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v60; // x21
  TerminalSceneComponent_StateTutorial4_SpotArrow_o *v61; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v62; // x21
  TerminalSceneComponent_StateTutorial4_QuestArrow_o *v63; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v64; // x21
  TerminalSceneComponent_StateTutorial5_MenuArrow_o *v65; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v66; // x20
  TerminalSceneComponent_StateTutorial5_CombineArrow_o *v67; // x21
  const MethodInfo *v68; // x2
  ScrPlayerStatus_o *mPlayerStatus; // x20
  System_Func_bool__bool__o *v70; // x21
  struct ScrPlayerStatus_o *v71; // x22
  System_Action_o *v72; // x20
  struct ScrTerminalMap_o *mTerminalMap; // x8
  System_Action_o *v74; // x20
  const MethodInfo *v75; // x2

  if ( (byte_41846AC & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AndroidUtil_TypeInfo, v3);
    sub_B2C35C(&Method_CStateManager_TerminalSceneComponent___ctor__, v4);
    sub_B2C35C(&Method_CStateManager_TerminalSceneComponent__add__, v5);
    sub_B2C35C(&CStateManager_TerminalSceneComponent__TypeInfo, v6);
    sub_B2C35C(&CTouch_TypeInfo, v7);
    sub_B2C35C(&Method_System_Func_bool__bool___ctor__, v8);
    sub_B2C35C(&System_Func_bool__bool__TypeInfo, v9);
    sub_B2C35C(&ServantProfileEventJoinManager_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B2C35C(&TerminalSceneComponent_StateNormal_TypeInfo, v12);
    sub_B2C35C(&TerminalSceneComponent_StateTutorial1_QuestArrow_TypeInfo, v13);
    sub_B2C35C(&TerminalSceneComponent_StateTutorial1_SpotArrow_TypeInfo, v14);
    sub_B2C35C(&TerminalSceneComponent_StateTutorial2_QuestArrow_TypeInfo, v15);
    sub_B2C35C(&TerminalSceneComponent_StateTutorial2_SpotArrow_TypeInfo, v16);
    sub_B2C35C(&TerminalSceneComponent_StateTutorial3_GachaArrow_TypeInfo, v17);
    sub_B2C35C(&TerminalSceneComponent_StateTutorial3_MenuArrow_TypeInfo, v18);
    sub_B2C35C(&TerminalSceneComponent_StateTutorial4_QuestArrow_TypeInfo, v19);
    sub_B2C35C(&TerminalSceneComponent_StateTutorial4_SpotArrow_TypeInfo, v20);
    sub_B2C35C(&TerminalSceneComponent_StateTutorial5_CombineArrow_TypeInfo, v21);
    sub_B2C35C(&TerminalSceneComponent_StateTutorial5_MenuArrow_TypeInfo, v22);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v23);
    sub_B2C35C(&Method_TerminalSceneComponent__beginInitialize_b__163_0__, v24);
    sub_B2C35C(&Method_TerminalSceneComponent__beginInitialize_b__163_1__, v25);
    sub_B2C35C(&Method_TerminalSceneComponent__beginInitialize_b__163_2__, v26);
    sub_B2C35C(&StringLiteral_1/*""*/, v27);
    byte_41846AC = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  AndroidUtil__DeleteOldSaveData(0LL);
  v28 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__Load_SaveData((const MethodInfo *)v28);
  if ( !byte_4183C8F )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v29);
    byte_4183C8F = 1;
  }
  v30 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v30 = TerminalPramsManager_TypeInfo;
  }
  if ( !v30->static_fields->_IsAutoResume_k__BackingField )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v30);
    if ( !byte_4183C6F )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v29);
      byte_4183C6F = 1;
    }
    v31 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v31 = TerminalPramsManager_TypeInfo;
    }
    v31->static_fields->_DispState_k__BackingField = 0;
    if ( !byte_4183C6D )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v29);
      byte_4183C6D = 1;
    }
    v32 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v32 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
    }
    HIDWORD(v32[2].klass->_1.namespaze) = 0;
    TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(v32);
    if ( !byte_4183C6E )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v33);
      byte_4183C6E = 1;
    }
    v34 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v34 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
    }
    LODWORD(v34[2].klass->_1.byval_arg.data) = 0;
    TerminalPramsManager__TerminalSelectedRecollectionWarId_SaveData(v34);
  }
  Instance = (TitleInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v37 = (CommonUI_o *)Instance;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !v37 )
    goto LABEL_80;
  CommonUI__CheckChangeOtherConnectMarkFromEventId(
    v37,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId,
    1,
    0LL);
  if ( !byte_4183CBA )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v38);
    byte_4183CBA = 1;
  }
  v39 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v39 = TerminalPramsManager_TypeInfo;
  }
  v39->static_fields->meSceneStatus = 1;
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  this->fields._IsReq_InitEarthRotateY_k__BackingField = 1;
  this->fields._onClosePresentBoxFlag_k__BackingField = 0;
  this->fields._FirstFadeTime_k__BackingField = 0.0;
  SkillLvMaster__AssertionSkillOverwriteByNowTime(0LL);
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__init(0LL);
  mUICamera = this->fields.mUICamera;
  if ( !byte_418474C )
  {
    sub_B2C35C(&CTouch_TypeInfo, v40);
    byte_418474C = 1;
  }
  v42 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v42 = CTouch_TypeInfo;
  }
  static_fields = v42->static_fields;
  static_fields->mScreenCam = mUICamera;
  sub_B2C2F8(&static_fields->mScreenCam, mUICamera);
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v45 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B2C42C(CStateManager_TerminalSceneComponent__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v45,
      (QAASpotStateController_IMapSpot_o *)this,
      11,
      (const MethodInfo_2A08354 *)Method_CStateManager_TerminalSceneComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_TerminalSceneComponent__o *)v45;
    sub_B2C2F8(&this->fields.mFSM, v45);
    mFSM = this->fields.mFSM;
    v47 = (TerminalSceneComponent_StateNormal_o *)sub_B2C42C(TerminalSceneComponent_StateNormal_TypeInfo);
    TerminalSceneComponent_StateNormal___ctor(v47, 0LL);
    if ( mFSM )
    {
      CStateManager_QAASpotStateController_IMapSpot___add(
        (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
        0,
        (IState_T__o *)v47,
        (const MethodInfo_2A08420 *)Method_CStateManager_TerminalSceneComponent__add__);
      v48 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
      v49 = (TerminalSceneComponent_StateTutorial1_SpotArrow_o *)sub_B2C42C(TerminalSceneComponent_StateTutorial1_SpotArrow_TypeInfo);
      TerminalSceneComponent_StateTutorial1_SpotArrow___ctor(v49, 0LL);
      if ( v48 )
      {
        CStateManager_QAASpotStateController_IMapSpot___add(
          v48,
          1,
          (IState_T__o *)v49,
          (const MethodInfo_2A08420 *)Method_CStateManager_TerminalSceneComponent__add__);
        v50 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
        v51 = (TerminalSceneComponent_StateTutorial1_QuestArrow_o *)sub_B2C42C(TerminalSceneComponent_StateTutorial1_QuestArrow_TypeInfo);
        TerminalSceneComponent_StateTutorial1_QuestArrow___ctor(v51, 0LL);
        if ( v50 )
        {
          CStateManager_QAASpotStateController_IMapSpot___add(
            v50,
            2,
            (IState_T__o *)v51,
            (const MethodInfo_2A08420 *)Method_CStateManager_TerminalSceneComponent__add__);
          v52 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
          v53 = (TerminalSceneComponent_StateTutorial2_SpotArrow_o *)sub_B2C42C(TerminalSceneComponent_StateTutorial2_SpotArrow_TypeInfo);
          TerminalSceneComponent_StateTutorial2_SpotArrow___ctor(v53, 0LL);
          if ( v52 )
          {
            CStateManager_QAASpotStateController_IMapSpot___add(
              v52,
              3,
              (IState_T__o *)v53,
              (const MethodInfo_2A08420 *)Method_CStateManager_TerminalSceneComponent__add__);
            v54 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
            v55 = (TerminalSceneComponent_StateTutorial2_QuestArrow_o *)sub_B2C42C(TerminalSceneComponent_StateTutorial2_QuestArrow_TypeInfo);
            TerminalSceneComponent_StateTutorial2_QuestArrow___ctor(v55, 0LL);
            if ( v54 )
            {
              CStateManager_QAASpotStateController_IMapSpot___add(
                v54,
                4,
                (IState_T__o *)v55,
                (const MethodInfo_2A08420 *)Method_CStateManager_TerminalSceneComponent__add__);
              v56 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
              v57 = (TerminalSceneComponent_StateTutorial3_MenuArrow_o *)sub_B2C42C(TerminalSceneComponent_StateTutorial3_MenuArrow_TypeInfo);
              TerminalSceneComponent_StateTutorial3_MenuArrow___ctor(v57, 0LL);
              if ( v56 )
              {
                CStateManager_QAASpotStateController_IMapSpot___add(
                  v56,
                  5,
                  (IState_T__o *)v57,
                  (const MethodInfo_2A08420 *)Method_CStateManager_TerminalSceneComponent__add__);
                v58 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
                v59 = (TerminalSceneComponent_StateTutorial3_GachaArrow_o *)sub_B2C42C(TerminalSceneComponent_StateTutorial3_GachaArrow_TypeInfo);
                TerminalSceneComponent_StateTutorial3_GachaArrow___ctor(v59, 0LL);
                if ( v58 )
                {
                  CStateManager_QAASpotStateController_IMapSpot___add(
                    v58,
                    6,
                    (IState_T__o *)v59,
                    (const MethodInfo_2A08420 *)Method_CStateManager_TerminalSceneComponent__add__);
                  v60 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
                  v61 = (TerminalSceneComponent_StateTutorial4_SpotArrow_o *)sub_B2C42C(TerminalSceneComponent_StateTutorial4_SpotArrow_TypeInfo);
                  TerminalSceneComponent_StateTutorial4_SpotArrow___ctor(v61, 0LL);
                  if ( v60 )
                  {
                    CStateManager_QAASpotStateController_IMapSpot___add(
                      v60,
                      7,
                      (IState_T__o *)v61,
                      (const MethodInfo_2A08420 *)Method_CStateManager_TerminalSceneComponent__add__);
                    v62 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
                    v63 = (TerminalSceneComponent_StateTutorial4_QuestArrow_o *)sub_B2C42C(TerminalSceneComponent_StateTutorial4_QuestArrow_TypeInfo);
                    TerminalSceneComponent_StateTutorial4_QuestArrow___ctor(v63, 0LL);
                    if ( v62 )
                    {
                      CStateManager_QAASpotStateController_IMapSpot___add(
                        v62,
                        8,
                        (IState_T__o *)v63,
                        (const MethodInfo_2A08420 *)Method_CStateManager_TerminalSceneComponent__add__);
                      v64 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
                      v65 = (TerminalSceneComponent_StateTutorial5_MenuArrow_o *)sub_B2C42C(TerminalSceneComponent_StateTutorial5_MenuArrow_TypeInfo);
                      TerminalSceneComponent_StateTutorial5_MenuArrow___ctor(v65, 0LL);
                      if ( v64 )
                      {
                        CStateManager_QAASpotStateController_IMapSpot___add(
                          v64,
                          9,
                          (IState_T__o *)v65,
                          (const MethodInfo_2A08420 *)Method_CStateManager_TerminalSceneComponent__add__);
                        v66 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
                        v67 = (TerminalSceneComponent_StateTutorial5_CombineArrow_o *)sub_B2C42C(TerminalSceneComponent_StateTutorial5_CombineArrow_TypeInfo);
                        TerminalSceneComponent_StateTutorial5_CombineArrow___ctor(v67, 0LL);
                        if ( v66 )
                        {
                          CStateManager_QAASpotStateController_IMapSpot___add(
                            v66,
                            10,
                            (IState_T__o *)v67,
                            (const MethodInfo_2A08420 *)Method_CStateManager_TerminalSceneComponent__add__);
                          TerminalSceneComponent__SetState(this, 0, v68);
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
LABEL_80:
    sub_B2C434(Instance, v36);
  }
LABEL_64:
  Instance = this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_80;
  TitleInfoControl__setTitleInfo(Instance, 0LL, 1, (System_String_o *)StringLiteral_1/*""*/, 1, 0LL);
  Instance = this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_80;
  TitleInfoControl__changeTitleInfo_19533564(Instance, 1, 1, 0, 0LL);
  Instance = this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_80;
  TitleInfoControl__setBackBtn_Terminal(Instance, 0, 0LL);
  Instance = this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_80;
  TitleInfoControl__SetBackStoryButtonEnable(Instance, 0, 0LL);
  Instance = this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_80;
  TitleInfoControl__SetBackRecollectionButtonEnable(Instance, 0, 0LL);
  Instance = this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_80;
  TitleInfoControl__setBackBtnDepth(Instance, 24, 0LL);
  Instance = (TitleInfoControl_o *)this->fields.mTerminalMap;
  if ( !Instance )
    goto LABEL_80;
  ScrTerminalMap__InitMapCamera((ScrTerminalMap_o *)Instance, 0LL);
  mPlayerStatus = this->fields.mPlayerStatus;
  v70 = (System_Func_bool__bool__o *)sub_B2C42C(System_Func_bool__bool__TypeInfo);
  System_Func_bool__bool____ctor(
    v70,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent__beginInitialize_b__163_0__,
    (const MethodInfo_270A214 *)Method_System_Func_bool__bool___ctor__);
  if ( !mPlayerStatus )
    goto LABEL_80;
  ScrPlayerStatus__SetCloseGiftAct(mPlayerStatus, v70, 0LL);
  v71 = this->fields.mPlayerStatus;
  v72 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v72, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__163_1__, 0LL);
  if ( !v71 )
    goto LABEL_80;
  v71->fields.mRecoverAct = v72;
  sub_B2C2F8(&v71->fields.mRecoverAct, v72);
  Instance = this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_80;
  TitleInfoControl__setHeaderBgImg(Instance, 0, 0LL);
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_80;
  Instance = (TitleInfoControl_o *)mTerminalMap->fields.allMaskObj;
  if ( !Instance )
    goto LABEL_80;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  v74 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v74, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__163_2__, 0LL);
  TerminalSceneComponent__SetEarthView(this, v74, v75);
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  }
  ServantProfileEventJoinManager__UpdateProfileServantEventJoin(0LL);
}


void __fastcall TerminalSceneComponent__beginPause(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MissionNotifyManager_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_41846B7 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v3);
    byte_41846B7 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v4 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v4 )
    sub_B2C434(0LL, v5);
  MissionNotifyManager__StartPause(v4, 0LL);
  this->fields.quitType = 3;
  TerminalSceneComponent__quit(this, v6);
}


void __fastcall TerminalSceneComponent__beginResume(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  MissionNotifyManager_o *mQuestBoardListViewManager; // x0
  __int64 v9; // x1
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct MapEntity_o *mMapEnt; // x8
  int32_t bgmId; // w20
  TerminalPramsManager_c *v14; // x0
  TerminalPramsManager_c *v15; // x0
  TerminalPramsManager_c *v16; // x0
  struct ScrTerminalMap_o *v17; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_41846B6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v6);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v7);
    byte_41846B6 = 1;
  }
  entity = 0LL;
  this->fields.isFadeInAfterResumeLoad = 0;
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  mQuestBoardListViewManager = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  if ( !byte_4183C75 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v9);
    byte_4183C75 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  if ( v14->static_fields->meSceneStatus != 3 )
  {
    if ( bgmId )
    {
      mQuestBoardListViewManager = (MissionNotifyManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !mQuestBoardListViewManager )
        goto LABEL_55;
      mQuestBoardListViewManager = (MissionNotifyManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)mQuestBoardListViewManager,
                                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !mQuestBoardListViewManager )
        goto LABEL_55;
      if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)mQuestBoardListViewManager,
             &entity,
             bgmId,
             (const MethodInfo_24E412C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
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
            v14 = TerminalPramsManager_TypeInfo;
LABEL_34:
            j_il2cpp_runtime_class_init_0(v14);
LABEL_35:
            if ( !byte_4183CBA )
            {
              sub_B2C35C(&TerminalPramsManager_TypeInfo, v9);
              byte_4183CBA = 1;
            }
            v15 = TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v15 = TerminalPramsManager_TypeInfo;
            }
            v15->static_fields->meSceneStatus = 2;
            this->fields.isFadeInAfterResumeLoad = 1;
            goto LABEL_41;
          }
          if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_4183CBA )
          {
            sub_B2C35C(&TerminalPramsManager_TypeInfo, v9);
            byte_4183CBA = 1;
          }
          v16 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v16 = TerminalPramsManager_TypeInfo;
          }
          v16->static_fields->meSceneStatus = 1;
          mQuestBoardListViewManager = (MissionNotifyManager_o *)this->fields.mQuestInformation;
          if ( mQuestBoardListViewManager )
          {
            QuestInformationComponent__CloseWindow((QuestInformationComponent_o *)mQuestBoardListViewManager, 0, 0LL);
            v17 = this->fields.mTerminalMap;
            if ( v17 )
            {
              mQuestBoardListViewManager = (MissionNotifyManager_o *)v17->fields.allMaskObj;
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
        sub_B2C434(mQuestBoardListViewManager, v9);
      }
      v14 = TerminalPramsManager_TypeInfo;
    }
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) == 0 || v14->_2.cctor_finished )
      goto LABEL_35;
    goto LABEL_34;
  }
LABEL_41:
  this->fields.quitType = 1;
  SceneRootComponent__beginResume_17297200((SceneRootComponent_o *)this, 0LL);
}


void __fastcall TerminalSceneComponent__beginStartUp(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(TerminalSceneComponent_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_beginStartUp.method)(
    this,
    0LL,
    this->klass->vtable._6_beginStartUp.methodPtr);
}


void __fastcall TerminalSceneComponent__beginStartUp_18818568(
        TerminalSceneComponent_o *this,
        Il2CppObject *data,
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
  __int64 v14; // x10
  Il2CppObject *v15; // x1
  TerminalSceneComponent_c *v16; // x0
  const MethodInfo *v17; // x2
  __int64 v18; // x1
  TerminalPramsManager_c *v19; // x0
  TerminalPramsManager_c *v20; // x0
  WebViewManager_o *Instance; // x0
  const MethodInfo *v22; // x1
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct UserServantEntity_array *UserServantListFromDeckIsTerminal; // x0
  struct UserServantEntity_array *mStandSvtDatas; // x8
  __int64 mStandSvtIdx; // x9
  UserServantEntity_o *NextStandServant; // x20
  bool isSavedMemoryMode; // w22
  System_Action_o *v29; // x0
  System_Action_o *v30; // x21
  const MethodInfo *v31; // x4
  const MethodInfo *v32; // x3
  System_Collections_IEnumerator_o *Async; // x1
  __int64 v34; // x0

  if ( (byte_41846AE & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, data);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserDeckMaster___, v5);
    sub_B2C35C(&OptionManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v8);
    sub_B2C35C(&Method_TerminalSceneComponent_SendMessageStartUpAndResume__, v9);
    sub_B2C35C(&Method_TerminalSceneComponent__beginStartUp_b__166_0__, v10);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v11);
    sub_B2C35C(&TerminalTransitionInfo_TypeInfo, v12);
    sub_B2C35C(&TutorialFlag_TypeInfo, v13);
    byte_41846AE = 1;
  }
  if ( data
    && (v14 = *(&TerminalTransitionInfo_TypeInfo->_2.bitflags2 + 1),
        *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v14) )
  {
    if ( (TerminalTransitionInfo_c *)data->klass->_2.typeHierarchy[v14 - 1] == TerminalTransitionInfo_TypeInfo )
      v15 = data;
    else
      v15 = 0LL;
  }
  else
  {
    v15 = 0LL;
  }
  this->fields._TransitionInfo_k__BackingField = (struct TerminalTransitionInfo_o *)v15;
  sub_B2C2F8(&this->fields._TransitionInfo_k__BackingField, v15);
  v16 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v16 = TerminalSceneComponent_TypeInfo;
  }
  UnityEngine_RenderSettings__set_ambientLight(v16->static_fields->DEFAULT_AMBIENT_LIGHT_COLOR, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 1, 32, 0LL);
  MainMenuBar__setMenuActive(1, this->fields.mUICamera, 0LL);
  TerminalSceneComponent__SetDispStandServant(this, 1, v17);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_418474D )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v18);
    byte_418474D = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  if ( !v19->static_fields->_IsDispDone_UIStandFigure_k__BackingField )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v19);
    if ( !byte_418474E )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v18);
      byte_418474E = 1;
    }
    v20 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v20 = TerminalPramsManager_TypeInfo;
    }
    v20->static_fields->_IsDispDone_UIStandFigure_k__BackingField = 1;
    if ( !byte_418474F )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v18);
      v20 = TerminalPramsManager_TypeInfo;
      byte_418474F = 1;
    }
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = TerminalPramsManager_TypeInfo;
    }
    v20->static_fields->_IsDispUIStandFigure_k__BackingField = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  MasterData_WarQuestSelectionMaster = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Instance = (WebViewManager_o *)TutorialFlag__Get_28617756(126, 0LL);
  if ( !MasterData_WarQuestSelectionMaster
    || (((unsigned __int8)Instance & 1) == 0
      ? (UserServantListFromDeckIsTerminal = UserDeckMaster__GetUserServantListFromDeckIsTerminal(
                                               MasterData_WarQuestSelectionMaster,
                                               0LL))
      : (UserServantListFromDeckIsTerminal = UserDeckMaster__GetUserServantListFromDeckReaveHeroine(
                                               MasterData_WarQuestSelectionMaster,
                                               0LL)),
        this->fields.mStandSvtDatas = UserServantListFromDeckIsTerminal,
        sub_B2C2F8(&this->fields.mStandSvtDatas, UserServantListFromDeckIsTerminal),
        (mStandSvtDatas = this->fields.mStandSvtDatas) == 0LL) )
  {
LABEL_53:
    sub_B2C434(Instance, v22);
  }
  mStandSvtIdx = this->fields.mStandSvtIdx;
  if ( (unsigned int)mStandSvtIdx >= mStandSvtDatas->max_length )
  {
    v34 = sub_B2C460(Instance);
    sub_B2C400(v34, 0LL);
  }
  NextStandServant = mStandSvtDatas->m_Items[mStandSvtIdx];
  if ( !NextStandServant )
    NextStandServant = TerminalSceneComponent__GetNextStandServant(this, v22);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  isSavedMemoryMode = OptionManager__isSavedMemoryMode(0LL);
  v29 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  v30 = v29;
  if ( isSavedMemoryMode )
  {
    System_Action___ctor(v29, (Il2CppObject *)this, Method_TerminalSceneComponent__beginStartUp_b__166_0__, 0LL);
    TerminalSceneComponent__SetupStandServant(this, NextStandServant, 0, v30, v31);
  }
  else
  {
    System_Action___ctor(v29, (Il2CppObject *)this, Method_TerminalSceneComponent_SendMessageStartUpAndResume__, 0LL);
    Async = TerminalSceneComponent__LoadAsync(this, NextStandServant, v30, v32);
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, Async, 0LL);
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
  __int64 v17; // x1
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct MapEntity_o *mMapEnt; // x22
  __int64 v20; // x1
  TerminalPramsManager_ClearData_o *v21; // x21
  TerminalPramsManager_c *v22; // x0
  _QWORD *p_eventDailyPoint_k__BackingField; // x0
  int32_t longName_high; // w21
  TerminalPramsManager_c *v25; // x0
  __int64 v26; // x1
  int64_t Time_26270684; // x21
  TerminalPramsManager_c *v28; // x0
  int32_t bgmId; // w21
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct ScrTerminalListTop_o *v31; // x8
  UnityEngine_GameObject_o *mActionPanel; // x21
  TitleInfoControl_o *mTitleInfo; // x20
  System_Action_o *v34; // x22
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v36; // 0:x0.8

  v4 = this;
  if ( (byte_41846D6 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, result);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_B2C35C(&Method_JsonManager_Deserialize_EventDailyPoint___, v7);
    sub_B2C35C(&JsonManager_TypeInfo, v8);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v11);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v12);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v13);
    sub_B2C35C(&Method_TerminalSceneComponent__callbackEventDailyPoint_b__209_0__, v14);
    sub_B2C35C(&StringLiteral_11077/*"REQUEST_NG"*/, v15);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v16);
    this = (TerminalSceneComponent_o *)sub_B2C35C(&StringLiteral_23683/*"{}"*/, v17);
    byte_41846D6 = 1;
  }
  entity = 0LL;
  if ( !result )
    goto LABEL_55;
  if ( System_String__Equals_44292872(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
  {
    this = (TerminalSceneComponent_o *)v4->fields.myFSM;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11077/*"REQUEST_NG"*/, 0LL);
      return;
    }
LABEL_55:
    sub_B2C434(this, result);
  }
  this = (TerminalSceneComponent_o *)System_String__Equals_44292872(result, (System_String_o *)StringLiteral_23683/*"{}"*/, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_58;
  mTerminalMap = v4->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_55;
  mMapEnt = mTerminalMap->fields.mMapEnt;
  this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_55;
  this = (TerminalSceneComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !mMapEnt || !this )
    goto LABEL_55;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          &entity,
          mMapEnt[1].fields.bgmId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
LABEL_58:
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    this = (TerminalSceneComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !this )
      goto LABEL_55;
    MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0LL);
    ActionExtensions__Call(v4->fields.afterEventDailyPoint, 0LL);
  }
  else
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v21 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
            (Il2CppObject *)result,
            (const MethodInfo_1AACF6C *)Method_JsonManager_Deserialize_EventDailyPoint___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4184755 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v20);
      byte_4184755 = 1;
    }
    v22 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v22 = TerminalPramsManager_TypeInfo;
    }
    p_eventDailyPoint_k__BackingField = &v22->static_fields->_eventDailyPoint_k__BackingField;
    *p_eventDailyPoint_k__BackingField = v21;
    sub_B2C2F8(p_eventDailyPoint_k__BackingField, v21);
    if ( !entity )
      goto LABEL_55;
    longName_high = HIDWORD(entity->fields.longName);
    if ( !byte_4184756 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, result);
      byte_4184756 = 1;
    }
    v25 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v25 = TerminalPramsManager_TypeInfo;
    }
    v25->static_fields->_EventDailyPointItem_k__BackingField = longName_high;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v36.fields.dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
    Time_26270684 = NetworkManager__getTime_26270684(v36, 0LL);
    if ( !byte_4184704 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v26);
      byte_4184704 = 1;
    }
    v28 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v28 = TerminalPramsManager_TypeInfo;
    }
    v28->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = Time_26270684;
    bgmId = mMapEnt[1].fields.bgmId;
    if ( !byte_4184703 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v26);
      v28 = TerminalPramsManager_TypeInfo;
      byte_4184703 = 1;
    }
    if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = TerminalPramsManager_TypeInfo;
    }
    v28->static_fields->_EventDailyPointEventId_k__BackingField = bgmId;
    TerminalPramsManager__EventDailyPointSave_SaveData((const MethodInfo *)v28);
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
    TitleInfoControl__UpdateEventInfo((TitleInfoControl_o *)this, 0LL, 0LL);
    v31 = v4->fields.mTerminalList;
    if ( !v31 )
      goto LABEL_55;
    mActionPanel = v31->fields.mActionPanel;
    mTitleInfo = v4->fields.mTitleInfo;
    v34 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v34,
      (Il2CppObject *)v4,
      Method_TerminalSceneComponent__callbackEventDailyPoint_b__209_0__,
      0LL);
    if ( !mTitleInfo )
      goto LABEL_55;
    TitleInfoControl__EventDailyPointOpen(mTitleInfo, mActionPanel, v34, 0LL);
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
  __int64 v10; // x1
  void *myFSM; // x0
  int64_t v12; // x20
  System_Action_o *afterTopLogin; // x0

  if ( (byte_41846D1 & 1) == 0 )
  {
    sub_B2C35C(&Method_JsonManager_Deserialize_TopHomeInfo___, result);
    sub_B2C35C(&JsonManager_TypeInfo, v5);
    sub_B2C35C(&TopHomeRequest_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_11079/*"REQUEST_OK"*/, v7);
    sub_B2C35C(&StringLiteral_11077/*"REQUEST_NG"*/, v8);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v9);
    byte_41846D1 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
  {
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)StringLiteral_11077/*"REQUEST_NG"*/, 0LL);
      return;
    }
LABEL_15:
    sub_B2C434(myFSM, v10);
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
            (Il2CppObject *)result,
            (const MethodInfo_1AACF6C *)Method_JsonManager_Deserialize_TopHomeInfo___);
  if ( !myFSM )
    goto LABEL_15;
  v12 = *((_QWORD *)myFSM + 2);
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
  }
  TopHomeRequest__setRecentRefreshTime(v12, 0LL);
  MainMenuBar__UpdateNoticeNumber(0LL);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)StringLiteral_11079/*"REQUEST_OK"*/, 0LL);
  afterTopLogin = this->fields.afterTopLogin;
  this->fields.isTopLoginBusy = 0;
  ActionExtensions__Call(afterTopLogin, 0LL);
  this->fields.afterTopLogin = 0LL;
  sub_B2C2F8(&this->fields.afterTopLogin, 0LL);
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
  __int64 v22; // x1
  __int64 v23; // x1
  NetworkManager_ResultCallbackFunc_o *v24; // x21
  __int64 v25; // x1
  TopHomeRequest_o *Request_WarBoardWallAttackRequest; // x21
  void *myFSM; // x0
  TerminalPramsManager_c *v28; // x0
  void *v29; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Collections_Generic_List_int__o *v31; // x20
  TerminalSceneComponent___c_c *v32; // x8
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x9
  System_Converter_int__string__o *_9__202_0; // x21
  Il2CppObject *v35; // x22
  struct TerminalSceneComponent___c_StaticFields *v36; // x0
  System_String_array *v37; // x0
  System_String_o *v38; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_Collections_Generic_List_int__o *v40; // x19
  TerminalSceneComponent___c_c *v41; // x8
  struct TerminalSceneComponent___c_StaticFields *v42; // x9
  System_Converter_int__string__o *_9__202_1; // x20
  Il2CppObject *v44; // x21
  struct TerminalSceneComponent___c_StaticFields *v45; // x0
  System_String_array *v46; // x0
  System_String_o *v47; // x0

  if ( (byte_41846D0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Converter_int__string___ctor__, result);
    sub_B2C35C(&System_Converter_int__string__TypeInfo, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_int___, v6);
    sub_B2C35C(&Method_JsonManager_Deserialize_CommonUI_LoginResultData___, v7);
    sub_B2C35C(&JsonManager_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ConvertAll_string___, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__ToArray__, v10);
    sub_B2C35C(&Method_NetworkManager_getRequest_TopHomeRequest___, v11);
    sub_B2C35C(&NetworkManager_TypeInfo, v12);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v13);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v14);
    sub_B2C35C(&Method_TerminalSceneComponent_callbackTopHome__, v15);
    sub_B2C35C(&TopHomeRequest_TypeInfo, v16);
    sub_B2C35C(&Method_TerminalSceneComponent___c__callbackTopLogin_b__202_0__, v17);
    sub_B2C35C(&Method_TerminalSceneComponent___c__callbackTopLogin_b__202_1__, v18);
    sub_B2C35C(&TerminalSceneComponent___c_TypeInfo, v19);
    sub_B2C35C(&StringLiteral_18889/*"freeShopIds"*/, v20);
    sub_B2C35C(&StringLiteral_11079/*"REQUEST_OK"*/, v21);
    sub_B2C35C(&StringLiteral_21811/*"returnRarePriShopIds"*/, v22);
    sub_B2C35C(&StringLiteral_699/*","*/, v23);
    byte_41846D0 = 1;
  }
  v24 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v24,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_callbackTopHome__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (TopHomeRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                            v24,
                                                            (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_TopHomeRequest___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184752 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v25);
    byte_4184752 = 1;
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
    *(_BYTE *)(*((_QWORD *)myFSM + 23) + 536LL),
    0LL);
  if ( (((__int64 (__fastcall *)(TopHomeRequest_o *, Il2CppMethodPointer))Request_WarBoardWallAttackRequest->klass->vtable._7_checkExpirationDate.method)(
          Request_WarBoardWallAttackRequest,
          Request_WarBoardWallAttackRequest->klass->vtable._8_isBackgroundRequest.methodPtr) & 1) == 0 )
    goto LABEL_26;
  v28 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !TerminalPramsManager__IsAutoForTimeProgressEvents((const MethodInfo *)v28) )
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
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)StringLiteral_11079/*"REQUEST_OK"*/, 0LL);
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
            (const MethodInfo_1AACF6C *)Method_JsonManager_Deserialize_CommonUI_LoginResultData___);
  if ( !myFSM )
LABEL_57:
    sub_B2C434(myFSM, v25);
  v29 = myFSM;
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)myFSM + 15);
  if ( v30 )
  {
    myFSM = System_Linq_Enumerable__ToList_int_(
              v30,
              (const MethodInfo_1A9DCD4 *)Method_System_Linq_Enumerable_ToList_int___);
    v31 = (System_Collections_Generic_List_int__o *)myFSM;
    v32 = TerminalSceneComponent___c_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v32 = TerminalSceneComponent___c_TypeInfo;
    }
    static_fields = v32->static_fields;
    _9__202_0 = static_fields->__9__202_0;
    if ( !_9__202_0 )
    {
      if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
      }
      v35 = (Il2CppObject *)static_fields->__9;
      _9__202_0 = (System_Converter_int__string__o *)sub_B2C42C(System_Converter_int__string__TypeInfo);
      System_Converter_int__string____ctor(
        _9__202_0,
        v35,
        Method_TerminalSceneComponent___c__callbackTopLogin_b__202_0__,
        (const MethodInfo_24DFC94 *)Method_System_Converter_int__string___ctor__);
      v36 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v36->__9__202_0 = _9__202_0;
      sub_B2C2F8(&v36->__9__202_0, _9__202_0);
    }
    if ( !v31 )
      goto LABEL_57;
    myFSM = System_Collections_Generic_List_int___ConvertAll_string_(
              v31,
              (System_Converter_T__TOutput__o *)_9__202_0,
              (const MethodInfo_18F3B04 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !myFSM )
      goto LABEL_57;
    v37 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)myFSM,
                                   (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
    v38 = System_String__Join((System_String_o *)StringLiteral_699/*","*/, v37, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_18889/*"freeShopIds"*/, v38, 0LL);
  }
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)v29 + 14);
  if ( v39 )
  {
    myFSM = System_Linq_Enumerable__ToList_int_(
              v39,
              (const MethodInfo_1A9DCD4 *)Method_System_Linq_Enumerable_ToList_int___);
    v40 = (System_Collections_Generic_List_int__o *)myFSM;
    v41 = TerminalSceneComponent___c_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v41 = TerminalSceneComponent___c_TypeInfo;
    }
    v42 = v41->static_fields;
    _9__202_1 = v42->__9__202_1;
    if ( !_9__202_1 )
    {
      if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v41);
        v42 = TerminalSceneComponent___c_TypeInfo->static_fields;
      }
      v44 = (Il2CppObject *)v42->__9;
      _9__202_1 = (System_Converter_int__string__o *)sub_B2C42C(System_Converter_int__string__TypeInfo);
      System_Converter_int__string____ctor(
        _9__202_1,
        v44,
        Method_TerminalSceneComponent___c__callbackTopLogin_b__202_1__,
        (const MethodInfo_24DFC94 *)Method_System_Converter_int__string___ctor__);
      v45 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v45->__9__202_1 = _9__202_1;
      sub_B2C2F8(&v45->__9__202_1, _9__202_1);
    }
    if ( v40 )
    {
      myFSM = System_Collections_Generic_List_int___ConvertAll_string_(
                v40,
                (System_Converter_T__TOutput__o *)_9__202_1,
                (const MethodInfo_18F3B04 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
      if ( myFSM )
      {
        v46 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)myFSM,
                                       (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
        v47 = System_String__Join((System_String_o *)StringLiteral_699/*","*/, v46, 0LL);
        UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_21811/*"returnRarePriShopIds"*/, v47, 0LL);
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
  TerminalSceneComponent__coFadein_WorldDisp_d__184_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_41846BE & 1) == 0 )
  {
    sub_B2C35C(&TerminalSceneComponent__coFadein_WorldDisp_d__184_TypeInfo, endAct);
    byte_41846BE = 1;
  }
  v9 = (TerminalSceneComponent__coFadein_WorldDisp_d__184_o *)sub_B2C42C(TerminalSceneComponent__coFadein_WorldDisp_d__184_TypeInfo);
  TerminalSceneComponent__coFadein_WorldDisp_d__184___ctor(v9, 0, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  v9->fields.__4__this = this;
  sub_B2C2F8(&v9->fields.__4__this, this);
  v9->fields.fadeTime = fadeTime;
  v9->fields.endAct = endAct;
  sub_B2C2F8(&v9->fields.endAct, endAct);
  v9->fields.isExecuteUnusedAssets = isExecuteUnusedAssets;
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
  int64_t Time; // x20
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *EntityList_QuestReleaseMaster; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v24; // x3
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  __int64 v29; // x0
  QuestPhaseEntity_c *v30; // x1
  QuestPhaseEntity_o *v31; // x22
  __int64 v32; // x9
  QuestPhaseMaster_c *v33; // x0
  System_String_o *ScriptStr; // x0
  __int64 v35; // x1
  System_String_o *v36; // x23
  QuestEntity_o *Entity; // x0
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0

  if ( (byte_41846D4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v2);
    sub_B2C35C(&Method_DataManager_getEntityList_QuestPhaseMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v4);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&QuestPhaseEntity_TypeInfo, v9);
    sub_B2C35C(&QuestPhaseMaster_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_41846D4 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (EntityList_QuestReleaseMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__getEntityList_QuestReleaseMaster_(Instance, (const MethodInfo_1733C08 *)Method_DataManager_getEntityList_QuestPhaseMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___),
        !EntityList_QuestReleaseMaster) )
  {
    sub_B2C434(Instance, v14);
  }
  v16 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 EntityList_QuestReleaseMaster,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v17);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v21;
        p_offset += 4;
        if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_14:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v18);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v25 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v27 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_21;
      }
      v28 = (__int64)&v25->vtable[*v27].method;
    }
    else
    {
LABEL_21:
      v28 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v24);
    }
    v29 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
            Enumerator,
            *(_QWORD *)(v28 + 8));
    v31 = (QuestPhaseEntity_o *)v29;
    if ( v29 )
    {
      v30 = QuestPhaseEntity_TypeInfo;
      v32 = *(&QuestPhaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v29 + 300LL) < (unsigned int)v32
        || *(QuestPhaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v29 + 200LL) + 8 * v32 - 8) != QuestPhaseEntity_TypeInfo )
      {
        v33 = (QuestPhaseMaster_c *)sub_B2C728(v29);
LABEL_43:
        sub_B2C434(v33, v30);
      }
    }
    v33 = QuestPhaseMaster_TypeInfo;
    if ( (BYTE3(QuestPhaseMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo);
    }
    if ( !v31 )
      goto LABEL_43;
    ScriptStr = QuestPhaseEntity__getScriptStr(
                  v31,
                  QuestPhaseMaster_TypeInfo->static_fields->MOVIE_QUEST_SCRIPT_STR,
                  0LL,
                  0LL);
    v36 = ScriptStr;
    if ( ScriptStr )
    {
      if ( !v16 )
        sub_B2C434(ScriptStr, v35);
      Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  v16,
                                  v31->fields.questId,
                                  (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( Time >= QuestEntity__getClosedAt(Entity, 0LL) )
          MovieFileMerge__Delete(v36, 0LL);
      }
    }
  }
  v38 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v39 = 0LL;
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      ++v39;
      v40 += 4;
      if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v41 = (__int64)&v38->vtable[*v40].method;
  }
  else
  {
LABEL_39:
    v41 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v24);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(Enumerator, *(_QWORD *)(v41 + 8));
}


void __fastcall TerminalSceneComponent__fadeoutBgm(
        TerminalSceneComponent_o *this,
        float fadeoutTime,
        const MethodInfo *method)
{
  if ( (byte_41846CD & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_41846CD = 1;
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
  __int64 v1; // x1
  TerminalSceneComponent_c *v2; // x0

  if ( (byte_41846A4 & 1) == 0 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v1);
    byte_41846A4 = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
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

  if ( (byte_41846A7 & 1) == 0 )
  {
    sub_B2C35C(&FSUtility_TypeInfo, method);
    byte_41846A7 = 1;
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

  if ( (byte_41846A6 & 1) == 0 )
  {
    sub_B2C35C(&FSUtility_TypeInfo, method);
    byte_41846A6 = 1;
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

  if ( (byte_41846A8 & 1) == 0 )
  {
    sub_B2C35C(&FSUtility_TypeInfo, method);
    byte_41846A8 = 1;
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

  if ( (byte_41846A9 & 1) == 0 )
  {
    sub_B2C35C(&FSUtility_TypeInfo, method);
    byte_41846A9 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  AtlasManager_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  System_Action_o *v9; // x20

  if ( (byte_41846B3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AtlasManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v4);
    sub_B2C35C(&Method_TerminalSceneComponent__loadCommonBG_b__171_0__, v5);
    byte_41846B3 = 1;
  }
  Instance = (AtlasManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v7);
  if ( AtlasManager__isLoadedSkinData(Instance, 4, 0LL) )
  {
    TerminalSceneComponent__loadOutGameAtlas(this, v8);
  }
  else
  {
    v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_TerminalSceneComponent__loadCommonBG_b__171_0__, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__LoadUISkin(v9, 4, 1, 0LL);
  }
}


void __fastcall TerminalSceneComponent__loadOutGameAtlas(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_41846B4 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AtlasManager_TypeInfo, v3);
    sub_B2C35C(&Method_TerminalSceneComponent__loadOutGameAtlas_b__172_0__, v4);
    byte_41846B4 = 1;
  }
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_TerminalSceneComponent__loadOutGameAtlas_b__172_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v5, 0LL);
}


void __fastcall TerminalSceneComponent__loadVoice(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x8
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  struct TerminalTransitionInfo_o *v8; // x8
  System_String_o *voiceAssetName; // x21
  SoundManager_o *v10; // x20
  System_Action_o *v11; // x22

  if ( (byte_41846B5 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v3);
    sub_B2C35C(&Method_TerminalSceneComponent_SendMessageStartUpAndResume__, v4);
    byte_41846B5 = 1;
  }
  TransitionInfo_k__BackingField = this->fields._TransitionInfo_k__BackingField;
  if ( TransitionInfo_k__BackingField
    && !System_String__IsNullOrEmpty(TransitionInfo_k__BackingField->fields.voiceAssetName, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v8 = this->fields._TransitionInfo_k__BackingField;
    if ( !v8
      || (voiceAssetName = v8->fields.voiceAssetName,
          v10 = (SoundManager_o *)Instance,
          v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
          System_Action___ctor(
            v11,
            (Il2CppObject *)this,
            Method_TerminalSceneComponent_SendMessageStartUpAndResume__,
            0LL),
          !v10) )
    {
      sub_B2C434(Instance, v7);
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

  if ( (byte_41846DF & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_5749/*"EV_SCENE_STATUS_INIT"*/, v3);
    sub_B2C35C(&StringLiteral_5750/*"EV_SCENE_STATUS_RESUME"*/, v4);
    byte_41846DF = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C75 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4183C75 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
      v8 = &StringLiteral_5749/*"EV_SCENE_STATUS_INIT"*/;
      goto LABEL_17;
    }
LABEL_18:
    sub_B2C434(myFSM, method);
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_18;
  v8 = &StringLiteral_5750/*"EV_SCENE_STATUS_RESUME"*/;
LABEL_17:
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
    sub_B2C434(0LL, sEventStr);
  PlayMakerFSM__SendEvent(myFSM, sEventStr, 0LL);
}


void __fastcall TerminalSceneComponent__mfsmfInitTable(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ScrTerminalMap_o *mTerminalMap; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  QuestTree_o *v8; // x20
  System_Action_o *v9; // x21
  System_Collections_IEnumerator_o *v10; // x1

  if ( (byte_41846D3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v3);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v4);
    sub_B2C35C(&Method_TerminalSceneComponent__mfsmfInitTable_b__206_0__, v5);
    byte_41846D3 = 1;
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
  v8 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_TerminalSceneComponent__mfsmfInitTable_b__206_0__, 0LL);
  if ( !v8 )
LABEL_11:
    sub_B2C434(mTerminalMap, method);
  v10 = QuestTree__Init(v8, v9, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
}


void __fastcall TerminalSceneComponent__playBgm(
        TerminalSceneComponent_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  System_String_o *mPlayBgmName; // x19

  if ( (byte_41846CA & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, bgmName);
    byte_41846CA = 1;
  }
  if ( System_String__IsNullOrEmpty(bgmName, 0LL) )
  {
    TerminalSceneComponent__playDefaultBgm(this, v5);
  }
  else
  {
    this->fields.mPlayBgmName = bgmName;
    sub_B2C2F8(&this->fields.mPlayBgmName, bgmName);
    mPlayBgmName = this->fields.mPlayBgmName;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playBgm(mPlayBgmName, 0LL);
  }
}


void __fastcall TerminalSceneComponent__playBgm_18835492(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  System_String_o *mPlayBgmName; // x19

  if ( (byte_41846CC & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_41846CC = 1;
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

  if ( (byte_41846CB & 1) == 0 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, method);
    byte_41846CB = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
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
  AutomatedAction_o *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  TerminalPramsManager_c *v14; // x0
  TerminalPramsManager_c *v15; // x0
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x8
  struct TerminalTransitionInfo_o *v17; // x8
  System_String_o *voiceAssetName; // x20
  TerminalOverwriteMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v20; // x3
  TerminalOverwriteMaster_o *v21; // x20
  bool OverwriteSkinName; // w0
  TerminalSceneComponent_c *v23; // x8
  System_String_o *OVERWRITE_COMMON_BG_TYPE1_KEY; // x21
  System_String_o *Empty; // x1
  System_String_o *v26; // x0
  const MethodInfo *v27; // x3
  bool v28; // w0
  TerminalSceneComponent_c *v29; // x8
  System_String_o *OVERWRITE_COMMON_BG_TYPE2_KEY; // x20
  System_String_o *v31; // x1
  System_String_o *v32; // x0
  TerminalPramsManager_c *v33; // x0
  System_String_o *str1; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *skinName; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_41846B8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_TerminalOverwriteMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    sub_B2C35C(&string_TypeInfo, v7);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v8);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_14690/*"UISkin/"*/, v10);
    byte_41846B8 = 1;
  }
  skinName = 0LL;
  str1 = 0LL;
  Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  AutomatedAction__TerminateMissionAction(Instance, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184750 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v13);
    byte_4184750 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  if ( v14->static_fields->_isWarBoardPlay_k__BackingField )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v14);
    if ( !byte_4184751 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v13);
      byte_4184751 = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    v15->static_fields->_isWarBoardPlay_k__BackingField = 0;
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
  Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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
      v17 = this->fields._TransitionInfo_k__BackingField;
      if ( !v17 )
        goto LABEL_65;
      voiceAssetName = v17->fields.voiceAssetName;
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
      sub_B2C2F8(&Instance->fields.shopActionManagerPrefab, 0LL);
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
      TitleInfoControl__releaseAssetData((TitleInfoControl_o *)Instance, 0LL);
      Instance = (AutomatedAction_o *)this->fields.mTerminalList;
      if ( Instance )
      {
        ScrTerminalListTop__ReleaseAsset((ScrTerminalListTop_o *)Instance, 0LL);
        goto LABEL_40;
      }
    }
LABEL_65:
    sub_B2C434(Instance, v12);
  }
LABEL_40:
  Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  MasterData_WarQuestSelectionMaster = (TerminalOverwriteMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
  if ( MasterData_WarQuestSelectionMaster )
  {
    v21 = MasterData_WarQuestSelectionMaster;
    OverwriteSkinName = TerminalOverwriteMaster__TryGetOverwriteSkinName(
                          MasterData_WarQuestSelectionMaster,
                          2,
                          &skinName,
                          v20);
    v23 = TerminalSceneComponent_TypeInfo;
    if ( OverwriteSkinName )
    {
      if ( (WORD1(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v23 = TerminalSceneComponent_TypeInfo;
      }
      OVERWRITE_COMMON_BG_TYPE1_KEY = v23->static_fields->OVERWRITE_COMMON_BG_TYPE1_KEY;
      Empty = System_String__Concat_44305532((System_String_o *)StringLiteral_14690/*"UISkin/"*/, skinName, 0LL);
      v26 = OVERWRITE_COMMON_BG_TYPE1_KEY;
    }
    else
    {
      if ( (WORD1(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v23 = TerminalSceneComponent_TypeInfo;
      }
      v26 = v23->static_fields->OVERWRITE_COMMON_BG_TYPE1_KEY;
      Empty = string_TypeInfo->static_fields->Empty;
    }
    UnityEngine_PlayerPrefs__SetString(v26, Empty, 0LL);
    v28 = TerminalOverwriteMaster__TryGetOverwriteSkinName(v21, 4, &str1, v27);
    v29 = TerminalSceneComponent_TypeInfo;
    if ( v28 )
    {
      if ( (WORD1(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v29 = TerminalSceneComponent_TypeInfo;
      }
      OVERWRITE_COMMON_BG_TYPE2_KEY = v29->static_fields->OVERWRITE_COMMON_BG_TYPE2_KEY;
      v31 = System_String__Concat_44305532((System_String_o *)StringLiteral_14690/*"UISkin/"*/, str1, 0LL);
      v32 = OVERWRITE_COMMON_BG_TYPE2_KEY;
    }
    else
    {
      if ( (WORD1(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v29 = TerminalSceneComponent_TypeInfo;
      }
      v32 = v29->static_fields->OVERWRITE_COMMON_BG_TYPE2_KEY;
      v31 = string_TypeInfo->static_fields->Empty;
    }
    UnityEngine_PlayerPrefs__SetString(v32, v31, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
  v33 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__Save_SaveData((const MethodInfo *)v33);
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
  __int64 v9; // x1
  MissionNotifyManager_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v11; // x1
  NetworkManager_ResultCallbackFunc_o *v12; // x21

  if ( (byte_41846D5 & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_EventDailyPointRequest___, *(_QWORD *)&eventId);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v8);
    sub_B2C35C(&Method_TerminalSceneComponent_callbackEventDailyPoint__, v9);
    byte_41846D5 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_12;
  MissionNotifyManager__StartPause(Request_WarBoardWallAttackRequest, 0LL);
  v12 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_callbackEventDailyPoint__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (MissionNotifyManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                  v12,
                                                                  (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_EventDailyPointRequest___);
  if ( !Request_WarBoardWallAttackRequest )
LABEL_12:
    sub_B2C434(Request_WarBoardWallAttackRequest, v11);
  EventDailyPointRequest__beginRequest((EventDailyPointRequest_o *)Request_WarBoardWallAttackRequest, eventId, 0LL);
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
  NetworkManager_o *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v12; // x21

  if ( (byte_41846CF & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_LoginCallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v3);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v4);
    sub_B2C35C(&Method_TerminalSceneComponent_callbackTopLogin__, v5);
    sub_B2C35C(&TutorialFlag_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_11079/*"REQUEST_OK"*/, v7);
    byte_41846CF = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_28617756(102, 0LL) )
    goto LABEL_16;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C94 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v8);
    byte_4183C94 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  if ( v9->static_fields->_IsPlayScriptWithMap_k__BackingField )
  {
LABEL_16:
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11079/*"REQUEST_OK"*/, 0LL);
      this->fields.isTopLoginBusy = 0;
      return;
    }
LABEL_20:
    sub_B2C434(myFSM, v8);
  }
  this->fields.isTopLoginBusy = 1;
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v12 = (NetworkManager_LoginCallbackFunc_o *)sub_B2C42C(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_callbackTopLogin__,
    0LL);
  if ( !Instance )
    goto LABEL_20;
  NetworkManager__RequestLogin(Instance, v12, 0, 0LL);
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
  sub_B2C2F8(&this->fields._TransitionInfo_k__BackingField, value);
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
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4184824 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isPlay);
    byte_4184824 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall TerminalSceneComponent_PlayChapterStartCallback__EndInvoke(
        TerminalSceneComponent_PlayChapterStartCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, isPlay, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
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
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
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
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
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
            v16 = sub_AC5258(v21, class_0, v10, v12);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *v11; // x19
  TerminalSceneComponent_o *mTerminalList; // x0
  __int64 v13; // x1
  TerminalSceneComponent_o **p_that; // x20
  QuestBoardListViewObject_o *FocusQuest; // x0
  struct ScrTerminalListTop_o *v16; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8
  struct UIScrollView_o *scrollView; // x8
  __int64 v19; // x22
  System_String_o *v20; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v22; // x0
  CommonUI_o *v23; // x22
  UnityEngine_Vector2_o TUTORIAL_QUEST_ARROW_POS_FS; // kr00_8
  float v25; // s0
  float v26; // s1
  float v27; // s2
  float v28; // s3
  TerminalSceneComponent_o *v29; // x8
  float x; // s14
  float y; // s15
  float v32; // s10
  float v33; // s11
  float v34; // s12
  float v35; // s13
  System_Action_o *v36; // x23
  struct ScrTerminalListTop_o *v37; // x21
  System_Action_o *v38; // x20
  UnityEngine_Rect_o v39; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4184825 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    sub_B2C35C(&Method_GameObjectExtensions_RemoveComponent_Collider___, v4);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__0__, v7);
    sub_B2C35C(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__1__, v8);
    sub_B2C35C(&TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_13523/*"TUTORIAL_MESSAGE_TERMINAL_QUEST1"*/, v10);
    byte_4184825 = 1;
  }
  v11 = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)sub_B2C42C(TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_TypeInfo);
  TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_23;
  v11->fields.that = that;
  p_that = &v11->fields.that;
  sub_B2C2F8(&v11->fields, that);
  if ( !v11->fields.that )
    goto LABEL_23;
  mTerminalList = (TerminalSceneComponent_o *)v11->fields.that->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_23;
  FocusQuest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mTerminalList, 0LL);
  v11->fields.focus_quest = FocusQuest;
  sub_B2C2F8(&v11->fields.focus_quest, FocusQuest);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  mTerminalList = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13523/*"TUTORIAL_MESSAGE_TERMINAL_QUEST1"*/, 0LL);
  if ( !*p_that )
    goto LABEL_23;
  v16 = (*p_that)->fields.mTerminalList;
  if ( !v16 )
    goto LABEL_23;
  mQuestBoardListViewManager = v16->fields.mQuestBoardListViewManager;
  if ( !mQuestBoardListViewManager )
    goto LABEL_23;
  scrollView = mQuestBoardListViewManager->fields.scrollView;
  if ( !scrollView )
    goto LABEL_23;
  v19 = *(_QWORD *)&scrollView->fields.showScrollBars;
  if ( !v19 )
    goto LABEL_23;
  v20 = (System_String_o *)mTerminalList;
  mTerminalList = *(TerminalSceneComponent_o **)(v19 + 48);
  if ( !mTerminalList )
    goto LABEL_23;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mTerminalList, 0LL);
  GameObjectExtensions__RemoveComponent_UIRootReScale_(
    gameObject,
    (const MethodInfo_1AA84EC *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mTerminalList = *(TerminalSceneComponent_o **)(v19 + 40);
  if ( !mTerminalList )
    goto LABEL_23;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mTerminalList, 0LL);
  GameObjectExtensions__RemoveComponent_UIRootReScale_(
    v22,
    (const MethodInfo_1AA84EC *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mTerminalList = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*p_that )
    goto LABEL_23;
  v23 = (CommonUI_o *)mTerminalList;
  TUTORIAL_QUEST_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(*p_that, 0LL);
  mTerminalList = *p_that;
  if ( !*p_that )
    goto LABEL_23;
  *(UnityEngine_Rect_o *)&v25 = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(mTerminalList, 0LL);
  v29 = *p_that;
  if ( !*p_that )
    goto LABEL_23;
  x = v29->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x;
  y = v29->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.y;
  v32 = v25;
  v33 = v26;
  v34 = v27;
  v35 = v28;
  v36 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v11,
    Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v23 )
    goto LABEL_23;
  v39.fields.m_XMin = v32;
  v39.fields.m_YMin = v33;
  v39.fields.m_Width = v34;
  v39.fields.m_Height = v35;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v23,
    v20,
    TUTORIAL_QUEST_ARROW_POS_FS,
    v39,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v36,
    0LL);
  if ( !*p_that
    || (v37 = (*p_that)->fields.mTerminalList,
        v38 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v38,
          (Il2CppObject *)v11,
          Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0LL),
        !v37) )
  {
LABEL_23:
    sub_B2C434(mTerminalList, v13);
  }
  v37->fields.mQuestClickAct = v38;
  sub_B2C2F8(&v37->fields.mQuestClickAct, v38);
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
  if ( (byte_41855E3 & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)sub_B2C35C(
                                                                                        &Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___,
                                                                                        method);
    byte_41855E3 = 1;
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
                                                                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0LL )
  {
LABEL_12:
    sub_B2C434(this, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v8; // x20

  if ( (byte_41855E4 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__2__, v4);
    byte_41855E4 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B2C2F8(&this->fields.__9__2, _9__2);
  }
  if ( !v8 )
    sub_B2C434(Instance, v6);
  CommonUI__CloseTutorialNotificationDialogArrow_17996480(v8, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B2C434(0LL, method);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_o *v11; // x20
  ScrTerminalMap_o *mTerminalMap; // x0
  __int64 v13; // x1
  SrcSpotBasePrefab_o *FocusSpot; // x0
  System_String_o *v15; // x21
  CommonUI_o *Instance; // x22
  UnityEngine_Vector2_o TUTORIAL_SPOT_ARROW_POS1_FS; // kr00_8
  float x; // s14
  float y; // s15
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v24; // x23
  struct ScrTerminalMap_o *v25; // x21
  System_Action_o *v26; // x19
  UnityEngine_Rect_o TUTORIAL_SPOT_ARROW_RECT1_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v28; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4184826 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__0__, v7);
    sub_B2C35C(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__1__, v8);
    sub_B2C35C(&TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_13526/*"TUTORIAL_MESSAGE_TERMINAL_SPOT1"*/, v10);
    byte_4184826 = 1;
  }
  v11 = (TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_o *)sub_B2C42C(TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_TypeInfo);
  TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  v11->fields.__4__this = this;
  sub_B2C2F8(&v11->fields.__4__this, this);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_13;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_13;
  FocusSpot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0LL);
  v11->fields.focus_spot = FocusSpot;
  sub_B2C2F8(&v11->fields, FocusSpot);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_13526/*"TUTORIAL_MESSAGE_TERMINAL_SPOT1"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  TUTORIAL_SPOT_ARROW_POS1_FS = TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_POS1_FS(that, 0LL);
  TUTORIAL_SPOT_ARROW_RECT1_FS = TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_RECT1_FS(that, 0LL);
  x = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x;
  y = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.y;
  m_XMin = TUTORIAL_SPOT_ARROW_RECT1_FS.fields.m_XMin;
  m_YMin = TUTORIAL_SPOT_ARROW_RECT1_FS.fields.m_YMin;
  m_Width = TUTORIAL_SPOT_ARROW_RECT1_FS.fields.m_Width;
  m_Height = TUTORIAL_SPOT_ARROW_RECT1_FS.fields.m_Height;
  v24 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v11,
    Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_13;
  v28.fields.m_XMin = m_XMin;
  v28.fields.m_YMin = m_YMin;
  v28.fields.m_Width = m_Width;
  v28.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    Instance,
    v15,
    TUTORIAL_SPOT_ARROW_POS1_FS,
    v28,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v24,
    0LL);
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__SetMapCamera_TutorialFocusSpot(mTerminalMap, v11->fields.focus_spot, 0.5, 0LL),
        v25 = that->fields.mTerminalMap,
        v26 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v26,
          (Il2CppObject *)v11,
          Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0LL),
        !v25) )
  {
LABEL_13:
    sub_B2C434(mTerminalMap, v13);
  }
  v25->fields.mFocusSpot = (struct SrcSpotBasePrefab_o *)v26;
  sub_B2C2F8(&v25->fields.mFocusSpot, v26);
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
      sub_B2C434(that, that);
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
    sub_B2C434(0LL, method);
  SrcSpotBasePrefab__SetBtnColliderEnable(focus_spot, 1, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0___begin_b__1(
        TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v8; // x20

  if ( (byte_41855E5 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__2__, v4);
    byte_41855E5 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B2C2F8(&this->fields.__9__2, _9__2);
  }
  if ( !v8 )
    sub_B2C434(Instance, v6);
  CommonUI__CloseTutorialNotificationDialogArrow_17996480(v8, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial1_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(this, method);
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
  TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *v11; // x19
  TerminalSceneComponent_o *mTerminalList; // x0
  __int64 v13; // x1
  TerminalSceneComponent_o **p_that; // x20
  QuestBoardListViewObject_o *FocusQuest; // x0
  struct ScrTerminalListTop_o *v16; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8
  struct UIScrollView_o *scrollView; // x8
  __int64 v19; // x22
  System_String_o *v20; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v22; // x0
  CommonUI_o *v23; // x22
  UnityEngine_Vector2_o TUTORIAL_QUEST_ARROW_POS_FS; // kr00_8
  float v25; // s0
  float v26; // s1
  float v27; // s2
  float v28; // s3
  TerminalSceneComponent_o *v29; // x8
  float x; // s14
  float y; // s15
  float v32; // s10
  float v33; // s11
  float v34; // s12
  float v35; // s13
  System_Action_o *v36; // x23
  struct ScrTerminalListTop_o *v37; // x21
  System_Action_o *v38; // x20
  UnityEngine_Rect_o v39; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4184827 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    sub_B2C35C(&Method_GameObjectExtensions_RemoveComponent_Collider___, v4);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__0__, v7);
    sub_B2C35C(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__1__, v8);
    sub_B2C35C(&TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_13524/*"TUTORIAL_MESSAGE_TERMINAL_QUEST2"*/, v10);
    byte_4184827 = 1;
  }
  v11 = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)sub_B2C42C(TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_TypeInfo);
  TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_23;
  v11->fields.that = that;
  p_that = &v11->fields.that;
  sub_B2C2F8(&v11->fields, that);
  if ( !v11->fields.that )
    goto LABEL_23;
  mTerminalList = (TerminalSceneComponent_o *)v11->fields.that->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_23;
  FocusQuest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mTerminalList, 0LL);
  v11->fields.focus_quest = FocusQuest;
  sub_B2C2F8(&v11->fields.focus_quest, FocusQuest);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  mTerminalList = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13524/*"TUTORIAL_MESSAGE_TERMINAL_QUEST2"*/, 0LL);
  if ( !*p_that )
    goto LABEL_23;
  v16 = (*p_that)->fields.mTerminalList;
  if ( !v16 )
    goto LABEL_23;
  mQuestBoardListViewManager = v16->fields.mQuestBoardListViewManager;
  if ( !mQuestBoardListViewManager )
    goto LABEL_23;
  scrollView = mQuestBoardListViewManager->fields.scrollView;
  if ( !scrollView )
    goto LABEL_23;
  v19 = *(_QWORD *)&scrollView->fields.showScrollBars;
  if ( !v19 )
    goto LABEL_23;
  v20 = (System_String_o *)mTerminalList;
  mTerminalList = *(TerminalSceneComponent_o **)(v19 + 48);
  if ( !mTerminalList )
    goto LABEL_23;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mTerminalList, 0LL);
  GameObjectExtensions__RemoveComponent_UIRootReScale_(
    gameObject,
    (const MethodInfo_1AA84EC *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mTerminalList = *(TerminalSceneComponent_o **)(v19 + 40);
  if ( !mTerminalList )
    goto LABEL_23;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mTerminalList, 0LL);
  GameObjectExtensions__RemoveComponent_UIRootReScale_(
    v22,
    (const MethodInfo_1AA84EC *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mTerminalList = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*p_that )
    goto LABEL_23;
  v23 = (CommonUI_o *)mTerminalList;
  TUTORIAL_QUEST_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(*p_that, 0LL);
  mTerminalList = *p_that;
  if ( !*p_that )
    goto LABEL_23;
  *(UnityEngine_Rect_o *)&v25 = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(mTerminalList, 0LL);
  v29 = *p_that;
  if ( !*p_that )
    goto LABEL_23;
  x = v29->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x;
  y = v29->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.y;
  v32 = v25;
  v33 = v26;
  v34 = v27;
  v35 = v28;
  v36 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v11,
    Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v23 )
    goto LABEL_23;
  v39.fields.m_XMin = v32;
  v39.fields.m_YMin = v33;
  v39.fields.m_Width = v34;
  v39.fields.m_Height = v35;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v23,
    v20,
    TUTORIAL_QUEST_ARROW_POS_FS,
    v39,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v36,
    0LL);
  if ( !*p_that
    || (v37 = (*p_that)->fields.mTerminalList,
        v38 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v38,
          (Il2CppObject *)v11,
          Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0LL),
        !v37) )
  {
LABEL_23:
    sub_B2C434(mTerminalList, v13);
  }
  v37->fields.mQuestClickAct = v38;
  sub_B2C2F8(&v37->fields.mQuestClickAct, v38);
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
  if ( (byte_41855E6 & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)sub_B2C35C(
                                                                                        &Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___,
                                                                                        method);
    byte_41855E6 = 1;
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
                                                                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0LL )
  {
LABEL_12:
    sub_B2C434(this, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v8; // x20

  if ( (byte_41855E7 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__2__, v4);
    byte_41855E7 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B2C2F8(&this->fields.__9__2, _9__2);
  }
  if ( !v8 )
    sub_B2C434(Instance, v6);
  CommonUI__CloseTutorialNotificationDialogArrow_17996480(v8, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B2C434(0LL, method);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_o *v11; // x20
  ScrTerminalMap_o *mTerminalMap; // x0
  __int64 v13; // x1
  SrcSpotBasePrefab_o *FocusSpot; // x0
  System_String_o *v15; // x21
  CommonUI_o *Instance; // x22
  UnityEngine_Vector2_o TUTORIAL_SPOT_ARROW_POS2_FS; // kr00_8
  float x; // s14
  float y; // s15
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v24; // x23
  struct ScrTerminalMap_o *v25; // x21
  System_Action_o *v26; // x19
  UnityEngine_Rect_o TUTORIAL_SPOT_ARROW_RECT2_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v28; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4184828 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__0__, v7);
    sub_B2C35C(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__1__, v8);
    sub_B2C35C(&TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_13527/*"TUTORIAL_MESSAGE_TERMINAL_SPOT2"*/, v10);
    byte_4184828 = 1;
  }
  v11 = (TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_o *)sub_B2C42C(TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_TypeInfo);
  TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  v11->fields.__4__this = this;
  sub_B2C2F8(&v11->fields.__4__this, this);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_13;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_13;
  FocusSpot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0LL);
  v11->fields.focus_spot = FocusSpot;
  sub_B2C2F8(&v11->fields, FocusSpot);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_13527/*"TUTORIAL_MESSAGE_TERMINAL_SPOT2"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  TUTORIAL_SPOT_ARROW_POS2_FS = TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_POS2_FS(that, 0LL);
  TUTORIAL_SPOT_ARROW_RECT2_FS = TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_RECT2_FS(that, 0LL);
  x = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x;
  y = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.y;
  m_XMin = TUTORIAL_SPOT_ARROW_RECT2_FS.fields.m_XMin;
  m_YMin = TUTORIAL_SPOT_ARROW_RECT2_FS.fields.m_YMin;
  m_Width = TUTORIAL_SPOT_ARROW_RECT2_FS.fields.m_Width;
  m_Height = TUTORIAL_SPOT_ARROW_RECT2_FS.fields.m_Height;
  v24 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v11,
    Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_13;
  v28.fields.m_XMin = m_XMin;
  v28.fields.m_YMin = m_YMin;
  v28.fields.m_Width = m_Width;
  v28.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    Instance,
    v15,
    TUTORIAL_SPOT_ARROW_POS2_FS,
    v28,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v24,
    0LL);
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__SetMapCamera_TutorialFocusSpot(mTerminalMap, v11->fields.focus_spot, 0.5, 0LL),
        v25 = that->fields.mTerminalMap,
        v26 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v26,
          (Il2CppObject *)v11,
          Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0LL),
        !v25) )
  {
LABEL_13:
    sub_B2C434(mTerminalMap, v13);
  }
  v25->fields.mFocusSpot = (struct SrcSpotBasePrefab_o *)v26;
  sub_B2C2F8(&v25->fields.mFocusSpot, v26);
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
      sub_B2C434(that, that);
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
    sub_B2C434(0LL, method);
  SrcSpotBasePrefab__SetBtnColliderEnable(focus_spot, 1, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0___begin_b__1(
        TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v8; // x20

  if ( (byte_41855E8 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__2__, v4);
    byte_41855E8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B2C2F8(&this->fields.__9__2, _9__2);
  }
  if ( !v8 )
    sub_B2C434(Instance, v6);
  CommonUI__CloseTutorialNotificationDialogArrow_17996480(v8, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial2_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(this, method);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_o *v11; // x19
  TerminalSceneComponent_o *Instance; // x0
  __int64 v13; // x1
  TerminalSceneComponent_o **p_that; // x22
  System_String_o *v15; // x20
  CommonUI_o *v16; // x21
  UnityEngine_Vector2_o TUTORIAL_GACHA_ARROW_POS_FS; // kr00_8
  float v18; // s0
  float v19; // s1
  float v20; // s2
  float v21; // s3
  TerminalSceneComponent_o *v22; // x8
  float x; // s14
  float y; // s15
  float v25; // s10
  float v26; // s11
  float v27; // s12
  float v28; // s13
  struct TerminalSceneComponent_StateTutorial3_GachaArrow___c_StaticFields *static_fields; // x8
  System_Action_o *_9__0_0; // x22
  Il2CppObject *v31; // x23
  struct TerminalSceneComponent_StateTutorial3_GachaArrow___c_StaticFields *v32; // x0
  System_Action_o *v33; // x20
  UnityEngine_Rect_o v34; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4184829 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__begin_b__0_0__, v6);
    sub_B2C35C(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__1__, v7);
    sub_B2C35C(&TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_TypeInfo, v8);
    sub_B2C35C(&TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_13521/*"TUTORIAL_MESSAGE_TERMINAL_GACHA"*/, v10);
    byte_4184829 = 1;
  }
  v11 = (TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_o *)sub_B2C42C(TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_TypeInfo);
  TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_20;
  v11->fields.that = that;
  p_that = &v11->fields.that;
  sub_B2C2F8(&v11->fields, that);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_13521/*"TUTORIAL_MESSAGE_TERMINAL_GACHA"*/, 0LL);
  Instance = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*p_that )
    goto LABEL_20;
  v16 = (CommonUI_o *)Instance;
  TUTORIAL_GACHA_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_GACHA_ARROW_POS_FS(*p_that, 0LL);
  Instance = *p_that;
  if ( !*p_that )
    goto LABEL_20;
  *(UnityEngine_Rect_o *)&v18 = TerminalSceneComponent__get_TUTORIAL_GACHA_ARROW_RECT_FS(Instance, 0LL);
  v22 = *p_that;
  if ( !*p_that )
    goto LABEL_20;
  x = v22->fields.TUTORIAL_MENU_MESSAGE_POS.fields.x;
  y = v22->fields.TUTORIAL_MENU_MESSAGE_POS.fields.y;
  v25 = v18;
  v26 = v19;
  Instance = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo;
  v27 = v20;
  v28 = v21;
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
    v31 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(_9__0_0, v31, Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__begin_b__0_0__, 0LL);
    v32 = TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields;
    v32->__9__0_0 = _9__0_0;
    sub_B2C2F8(&v32->__9__0_0, _9__0_0);
  }
  if ( !v16 )
LABEL_20:
    sub_B2C434(Instance, v13);
  v34.fields.m_XMin = v25;
  v34.fields.m_YMin = v26;
  v34.fields.m_Width = v27;
  v34.fields.m_Height = v28;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v16,
    v15,
    TUTORIAL_GACHA_ARROW_POS_FS,
    v34,
    0.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    _9__0_0,
    0LL);
  v33 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v11,
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct TerminalSceneComponent_StateTutorial3_GachaArrow___c_StaticFields *static_fields; // x0

  if ( (byte_41855E9 & 1) == 0 )
  {
    sub_B2C35C(&TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo, v1);
    byte_41855E9 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TerminalSceneComponent_StateTutorial3_GachaArrow___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v9; // x20

  if ( (byte_41855EA & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&TutorialFlag_TypeInfo, v4);
    sub_B2C35C(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__2__, v5);
    byte_41855EA = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress(1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v9 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B2C2F8(&this->fields.__9__2, _9__2);
  }
  if ( !v9 )
    sub_B2C434(Instance, v7);
  CommonUI__CloseTutorialNotificationDialogArrow_17996480(v9, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B2C434(0LL, method);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_o *v11; // x19
  TerminalSceneComponent_o *Instance; // x0
  __int64 v13; // x1
  TerminalSceneComponent_o **p_that; // x22
  System_String_o *v15; // x20
  CommonUI_o *v16; // x21
  UnityEngine_Vector2_o TUTORIAL_MENU_ARROW_POS_FS; // kr00_8
  float v18; // s0
  float v19; // s1
  float v20; // s2
  float v21; // s3
  TerminalSceneComponent_o *v22; // x8
  float x; // s14
  float y; // s15
  float v25; // s10
  float v26; // s11
  float v27; // s12
  float v28; // s13
  struct TerminalSceneComponent_StateTutorial3_MenuArrow___c_StaticFields *static_fields; // x8
  System_Action_o *_9__0_0; // x22
  Il2CppObject *v31; // x23
  struct TerminalSceneComponent_StateTutorial3_MenuArrow___c_StaticFields *v32; // x0
  System_Action_o *v33; // x20
  UnityEngine_Rect_o v34; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_418482A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__begin_b__0_0__, v6);
    sub_B2C35C(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__1__, v7);
    sub_B2C35C(&TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_TypeInfo, v8);
    sub_B2C35C(&TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_13522/*"TUTORIAL_MESSAGE_TERMINAL_MENU"*/, v10);
    byte_418482A = 1;
  }
  v11 = (TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_o *)sub_B2C42C(TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_TypeInfo);
  TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_20;
  v11->fields.that = that;
  p_that = &v11->fields.that;
  sub_B2C2F8(&v11->fields, that);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_13522/*"TUTORIAL_MESSAGE_TERMINAL_MENU"*/, 0LL);
  Instance = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*p_that )
    goto LABEL_20;
  v16 = (CommonUI_o *)Instance;
  TUTORIAL_MENU_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_POS_FS(*p_that, 0LL);
  Instance = *p_that;
  if ( !*p_that )
    goto LABEL_20;
  *(UnityEngine_Rect_o *)&v18 = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_RECT_FS(Instance, 0LL);
  v22 = *p_that;
  if ( !*p_that )
    goto LABEL_20;
  x = v22->fields.TUTORIAL_MENU_MESSAGE_POS.fields.x;
  y = v22->fields.TUTORIAL_MENU_MESSAGE_POS.fields.y;
  v25 = v18;
  v26 = v19;
  Instance = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo;
  v27 = v20;
  v28 = v21;
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
    v31 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(_9__0_0, v31, Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__begin_b__0_0__, 0LL);
    v32 = TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields;
    v32->__9__0_0 = _9__0_0;
    sub_B2C2F8(&v32->__9__0_0, _9__0_0);
  }
  if ( !v16 )
LABEL_20:
    sub_B2C434(Instance, v13);
  v34.fields.m_XMin = v25;
  v34.fields.m_YMin = v26;
  v34.fields.m_Width = v27;
  v34.fields.m_Height = v28;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v16,
    v15,
    TUTORIAL_MENU_ARROW_POS_FS,
    v34,
    0.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    _9__0_0,
    0LL);
  v33 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v11,
    Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__1__,
    0LL);
  MainMenuBar__SetMenuBtnAct(v33, 0LL);
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
  struct TerminalSceneComponent_StateTutorial3_MenuArrow___c_StaticFields *static_fields; // x0

  if ( (byte_41855EB & 1) == 0 )
  {
    sub_B2C35C(&TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo, v1);
    byte_41855EB = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TerminalSceneComponent_StateTutorial3_MenuArrow___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v8; // x20

  if ( (byte_41855EC & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__2__, v4);
    byte_41855EC = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B2C2F8(&this->fields.__9__2, _9__2);
  }
  if ( !v8 )
    sub_B2C434(Instance, v6);
  CommonUI__CloseTutorialNotificationDialogArrow_17996480(v8, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B2C434(0LL, method);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *v11; // x19
  TerminalSceneComponent_o *mTerminalList; // x0
  __int64 v13; // x1
  TerminalSceneComponent_o **p_that; // x20
  QuestBoardListViewObject_o *FocusQuest; // x0
  struct ScrTerminalListTop_o *v16; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8
  struct UIScrollView_o *scrollView; // x8
  __int64 v19; // x22
  System_String_o *v20; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v22; // x0
  CommonUI_o *v23; // x22
  UnityEngine_Vector2_o TUTORIAL_QUEST_ARROW_POS_FS; // kr00_8
  float v25; // s0
  float v26; // s1
  float v27; // s2
  float v28; // s3
  TerminalSceneComponent_o *v29; // x8
  float x; // s14
  float y; // s15
  float v32; // s10
  float v33; // s11
  float v34; // s12
  float v35; // s13
  System_Action_o *v36; // x23
  struct ScrTerminalListTop_o *v37; // x21
  System_Action_o *v38; // x20
  UnityEngine_Rect_o v39; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_418482B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    sub_B2C35C(&Method_GameObjectExtensions_RemoveComponent_Collider___, v4);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__0__, v7);
    sub_B2C35C(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__1__, v8);
    sub_B2C35C(&TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_13525/*"TUTORIAL_MESSAGE_TERMINAL_QUEST3"*/, v10);
    byte_418482B = 1;
  }
  v11 = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)sub_B2C42C(TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_TypeInfo);
  TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_23;
  v11->fields.that = that;
  p_that = &v11->fields.that;
  sub_B2C2F8(&v11->fields, that);
  if ( !v11->fields.that )
    goto LABEL_23;
  mTerminalList = (TerminalSceneComponent_o *)v11->fields.that->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_23;
  FocusQuest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mTerminalList, 0LL);
  v11->fields.focus_quest = FocusQuest;
  sub_B2C2F8(&v11->fields.focus_quest, FocusQuest);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  mTerminalList = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13525/*"TUTORIAL_MESSAGE_TERMINAL_QUEST3"*/, 0LL);
  if ( !*p_that )
    goto LABEL_23;
  v16 = (*p_that)->fields.mTerminalList;
  if ( !v16 )
    goto LABEL_23;
  mQuestBoardListViewManager = v16->fields.mQuestBoardListViewManager;
  if ( !mQuestBoardListViewManager )
    goto LABEL_23;
  scrollView = mQuestBoardListViewManager->fields.scrollView;
  if ( !scrollView )
    goto LABEL_23;
  v19 = *(_QWORD *)&scrollView->fields.showScrollBars;
  if ( !v19 )
    goto LABEL_23;
  v20 = (System_String_o *)mTerminalList;
  mTerminalList = *(TerminalSceneComponent_o **)(v19 + 48);
  if ( !mTerminalList )
    goto LABEL_23;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mTerminalList, 0LL);
  GameObjectExtensions__RemoveComponent_UIRootReScale_(
    gameObject,
    (const MethodInfo_1AA84EC *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mTerminalList = *(TerminalSceneComponent_o **)(v19 + 40);
  if ( !mTerminalList )
    goto LABEL_23;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mTerminalList, 0LL);
  GameObjectExtensions__RemoveComponent_UIRootReScale_(
    v22,
    (const MethodInfo_1AA84EC *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mTerminalList = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*p_that )
    goto LABEL_23;
  v23 = (CommonUI_o *)mTerminalList;
  TUTORIAL_QUEST_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(*p_that, 0LL);
  mTerminalList = *p_that;
  if ( !*p_that )
    goto LABEL_23;
  *(UnityEngine_Rect_o *)&v25 = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(mTerminalList, 0LL);
  v29 = *p_that;
  if ( !*p_that )
    goto LABEL_23;
  x = v29->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x;
  y = v29->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.y;
  v32 = v25;
  v33 = v26;
  v34 = v27;
  v35 = v28;
  v36 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v11,
    Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v23 )
    goto LABEL_23;
  v39.fields.m_XMin = v32;
  v39.fields.m_YMin = v33;
  v39.fields.m_Width = v34;
  v39.fields.m_Height = v35;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v23,
    v20,
    TUTORIAL_QUEST_ARROW_POS_FS,
    v39,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v36,
    0LL);
  if ( !*p_that
    || (v37 = (*p_that)->fields.mTerminalList,
        v38 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v38,
          (Il2CppObject *)v11,
          Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0LL),
        !v37) )
  {
LABEL_23:
    sub_B2C434(mTerminalList, v13);
  }
  v37->fields.mQuestClickAct = v38;
  sub_B2C2F8(&v37->fields.mQuestClickAct, v38);
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
  if ( (byte_41855ED & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)sub_B2C35C(
                                                                                        &Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___,
                                                                                        method);
    byte_41855ED = 1;
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
                                                                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0LL )
  {
LABEL_12:
    sub_B2C434(this, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v8; // x20

  if ( (byte_41855EE & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__2__, v4);
    byte_41855EE = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B2C2F8(&this->fields.__9__2, _9__2);
  }
  if ( !v8 )
    sub_B2C434(Instance, v6);
  CommonUI__CloseTutorialNotificationDialogArrow_17996480(v8, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B2C434(0LL, method);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_o *v9; // x20
  ScrTerminalMap_o *mTerminalMap; // x0
  __int64 v11; // x1
  SrcSpotBasePrefab_o *FocusSpot; // x0
  CommonUI_o *Instance; // x21
  UnityEngine_Vector2_o TUTORIAL_SPOT_ARROW_POS4_FS; // kr00_8
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v19; // x22
  struct ScrTerminalMap_o *v20; // x21
  System_Action_o *v21; // x19
  UnityEngine_Rect_o TUTORIAL_SPOT_ARROW_RECT4_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v23; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_418482C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__0__, v6);
    sub_B2C35C(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__1__, v7);
    sub_B2C35C(&TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_TypeInfo, v8);
    byte_418482C = 1;
  }
  v9 = (TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_o *)sub_B2C42C(TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_TypeInfo);
  TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_10;
  v9->fields.__4__this = this;
  sub_B2C2F8(&v9->fields.__4__this, this);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_10;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_10;
  FocusSpot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0LL);
  v9->fields.focus_spot = FocusSpot;
  sub_B2C2F8(&v9->fields, FocusSpot);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  TUTORIAL_SPOT_ARROW_POS4_FS = TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_POS4_FS(that, 0LL);
  TUTORIAL_SPOT_ARROW_RECT4_FS = TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_RECT4_FS(that, 0LL);
  m_XMin = TUTORIAL_SPOT_ARROW_RECT4_FS.fields.m_XMin;
  m_YMin = TUTORIAL_SPOT_ARROW_RECT4_FS.fields.m_YMin;
  m_Width = TUTORIAL_SPOT_ARROW_RECT4_FS.fields.m_Width;
  m_Height = TUTORIAL_SPOT_ARROW_RECT4_FS.fields.m_Height;
  v19 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v9,
    Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_10;
  v23.fields.m_XMin = m_XMin;
  v23.fields.m_YMin = m_YMin;
  v23.fields.m_Width = m_Width;
  v23.fields.m_Height = m_Height;
  CommonUI__OpenTutorialArrowMark(Instance, TUTORIAL_SPOT_ARROW_POS4_FS, 90.0, v23, v19, 0LL);
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__SetMapCamera_TutorialFocusSpot(mTerminalMap, v9->fields.focus_spot, 0.5, 0LL),
        v20 = that->fields.mTerminalMap,
        v21 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v21,
          (Il2CppObject *)v9,
          Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0LL),
        !v20) )
  {
LABEL_10:
    sub_B2C434(mTerminalMap, v11);
  }
  v20->fields.mFocusSpot = (struct SrcSpotBasePrefab_o *)v21;
  sub_B2C2F8(&v20->fields.mFocusSpot, v21);
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
      sub_B2C434(that, that);
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
    sub_B2C434(0LL, method);
  SrcSpotBasePrefab__SetBtnColliderEnable(focus_spot, 1, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0___begin_b__1(
        TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v8; // x20

  if ( (byte_41855EF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__2__, v4);
    byte_41855EF = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B2C2F8(&this->fields.__9__2, _9__2);
  }
  if ( !v8 )
    sub_B2C434(Instance, v6);
  CommonUI__CloseTutorialArrowMark(v8, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial4_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(this, method);
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
  TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_o *v9; // x19
  TerminalSceneComponent_o *Instance; // x0
  __int64 v11; // x1
  TerminalSceneComponent_o **p_that; // x21
  CommonUI_o *v13; // x20
  UnityEngine_Vector2_o TUTORIAL_COMBINE_ARROW_POS_FS; // kr00_8
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  struct TerminalSceneComponent_StateTutorial5_CombineArrow___c_StaticFields *static_fields; // x8
  System_Action_o *_9__0_0; // x21
  Il2CppObject *v21; // x22
  struct TerminalSceneComponent_StateTutorial5_CombineArrow___c_StaticFields *v22; // x0
  System_Action_o *v23; // x20
  UnityEngine_Rect_o TUTORIAL_COMBINE_ARROW_RECT_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v25; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_418482D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__begin_b__0_0__, v5);
    sub_B2C35C(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__1__, v6);
    sub_B2C35C(&TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_TypeInfo, v7);
    sub_B2C35C(&TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo, v8);
    byte_418482D = 1;
  }
  v9 = (TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_o *)sub_B2C42C(TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_TypeInfo);
  TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_16;
  v9->fields.that = that;
  p_that = &v9->fields.that;
  sub_B2C2F8(&v9->fields, that);
  Instance = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v9->fields.that )
    goto LABEL_16;
  v13 = (CommonUI_o *)Instance;
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
    v21 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__0_0,
      v21,
      Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__begin_b__0_0__,
      0LL);
    v22 = TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields;
    v22->__9__0_0 = _9__0_0;
    sub_B2C2F8(&v22->__9__0_0, _9__0_0);
  }
  if ( !v13 )
LABEL_16:
    sub_B2C434(Instance, v11);
  v25.fields.m_XMin = m_XMin;
  v25.fields.m_YMin = m_YMin;
  v25.fields.m_Width = m_Width;
  v25.fields.m_Height = m_Height;
  CommonUI__OpenTutorialArrowMark(v13, TUTORIAL_COMBINE_ARROW_POS_FS, 0.0, v25, _9__0_0, 0LL);
  v23 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v9,
    Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__1__,
    0LL);
  MainMenuBar__SetDispBtnAct(3, v23, 0LL);
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
  struct TerminalSceneComponent_StateTutorial5_CombineArrow___c_StaticFields *static_fields; // x0

  if ( (byte_41855F0 & 1) == 0 )
  {
    sub_B2C35C(&TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo, v1);
    byte_41855F0 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TerminalSceneComponent_StateTutorial5_CombineArrow___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v8; // x20

  if ( (byte_41855F1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__2__, v4);
    byte_41855F1 = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B2C2F8(&this->fields.__9__2, _9__2);
  }
  if ( !v8 )
    sub_B2C434(Instance, v6);
  CommonUI__CloseTutorialArrowMark(v8, _9__2, 0LL);
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
    sub_B2C434(that, method);
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
  TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_o *v11; // x19
  TerminalSceneComponent_o *v12; // x0
  __int64 v13; // x1
  TerminalSceneComponent_o **p_that; // x22
  CommonUI_o *Instance; // x20
  System_String_o *v16; // x21
  UnityEngine_Vector2_o TUTORIAL_MENU_ARROW_POS2_FS; // kr00_8
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  struct TerminalSceneComponent_StateTutorial5_MenuArrow___c_StaticFields *static_fields; // x8
  System_Action_o *_9__0_0; // x22
  Il2CppObject *v24; // x23
  struct TerminalSceneComponent_StateTutorial5_MenuArrow___c_StaticFields *v25; // x0
  System_Action_o *v26; // x20
  UnityEngine_Rect_o TUTORIAL_MENU_ARROW_RECT_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v28; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_418482E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__begin_b__0_0__, v6);
    sub_B2C35C(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__1__, v7);
    sub_B2C35C(&TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_TypeInfo, v8);
    sub_B2C35C(&TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_13503/*"TUTORIAL_MESSAGE_COMBINE1"*/, v10);
    byte_418482E = 1;
  }
  v11 = (TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_o *)sub_B2C42C(TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_TypeInfo);
  TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_19;
  v11->fields.that = that;
  p_that = &v11->fields.that;
  sub_B2C2F8(&v11->fields, that);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13503/*"TUTORIAL_MESSAGE_COMBINE1"*/, 0LL);
  if ( !*p_that )
    goto LABEL_19;
  v16 = (System_String_o *)v12;
  TUTORIAL_MENU_ARROW_POS2_FS = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_POS2_FS(*p_that, 0LL);
  v12 = *p_that;
  if ( !*p_that )
    goto LABEL_19;
  TUTORIAL_MENU_ARROW_RECT_FS = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_RECT_FS(v12, 0LL);
  m_XMin = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_XMin;
  m_YMin = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_YMin;
  m_Width = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_Width;
  v12 = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo;
  m_Height = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_Height;
  if ( (BYTE3(TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo);
    v12 = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo;
  }
  static_fields = *(struct TerminalSceneComponent_StateTutorial5_MenuArrow___c_StaticFields **)&v12->fields.TUTORIAL_COMBINE_ARROW_RECT.fields.m_XMin;
  _9__0_0 = static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v12->fields.mQuestInformation) & 4) != 0 && !LODWORD(v12->fields.mFSM) )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(_9__0_0, v24, Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__begin_b__0_0__, 0LL);
    v25 = TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields;
    v25->__9__0_0 = _9__0_0;
    sub_B2C2F8(&v25->__9__0_0, _9__0_0);
  }
  if ( !Instance )
LABEL_19:
    sub_B2C434(v12, v13);
  v28.fields.m_XMin = m_XMin;
  v28.fields.m_YMin = m_YMin;
  v28.fields.m_Width = m_Width;
  v28.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    Instance,
    v16,
    TUTORIAL_MENU_ARROW_POS2_FS,
    v28,
    0.0,
    (UnityEngine_Vector2_o)0xC224000000000000LL,
    -1,
    _9__0_0,
    0LL);
  v26 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v11,
    Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__1__,
    0LL);
  MainMenuBar__SetMenuBtnAct(v26, 0LL);
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
  struct TerminalSceneComponent_StateTutorial5_MenuArrow___c_StaticFields *static_fields; // x0

  if ( (byte_41855F2 & 1) == 0 )
  {
    sub_B2C35C(&TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo, v1);
    byte_41855F2 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TerminalSceneComponent_StateTutorial5_MenuArrow___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v8; // x20

  if ( (byte_41855F3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__2__, v4);
    byte_41855F3 = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B2C2F8(&this->fields.__9__2, _9__2);
  }
  if ( !v8 )
    sub_B2C434(Instance, v6);
  CommonUI__CloseTutorialNotificationDialogArrow_17996480(v8, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B2C434(0LL, method);
  TerminalSceneComponent__SetState(that, 10, 0LL);
}


void __fastcall TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__240___ctor(
        TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__240_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__240__MoveNext(
        TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__240_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v8; // x21
  UnityEngine_WaitUntil_o *v9; // x20
  bool result; // w0
  System_Action_o *openCampaignDirectBonus; // x0

  if ( (byte_418481F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_bool___ctor__, method);
    sub_B2C35C(&System_Func_bool__TypeInfo, v3);
    sub_B2C35C(&Method_TerminalSceneComponent__CoWaitBlankEerthActionEnd_b__240_0__, v4);
    sub_B2C35C(&UnityEngine_WaitUntil_TypeInfo, v5);
    byte_418481F = 1;
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
    v8 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v8,
      _4__this,
      Method_TerminalSceneComponent__CoWaitBlankEerthActionEnd_b__240_0__,
      (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
    v9 = (UnityEngine_WaitUntil_o *)sub_B2C42C(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v9, v8, 0LL);
    this->fields.__2__current = (Il2CppObject *)v9;
    sub_B2C2F8(&this->fields.__2__current, v9);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__240__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__240_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__240__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__240_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__240_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__240__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__240_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__240__System_IDisposable_Dispose(
        TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__240_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__239___ctor(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__239_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__239__MoveNext(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__239_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v8; // x21
  UnityEngine_WaitUntil_o *v9; // x20
  bool result; // w0
  System_Action_o *openCampaignDirectBonus; // x0

  if ( (byte_4184820 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_bool___ctor__, method);
    sub_B2C35C(&System_Func_bool__TypeInfo, v3);
    sub_B2C35C(&Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_b__239_0__, v4);
    sub_B2C35C(&UnityEngine_WaitUntil_TypeInfo, v5);
    byte_4184820 = 1;
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
    v8 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v8,
      _4__this,
      Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_b__239_0__,
      (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
    v9 = (UnityEngine_WaitUntil_o *)sub_B2C42C(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v9, v8, 0LL);
    this->fields.__2__current = (Il2CppObject *)v9;
    sub_B2C2F8(&this->fields.__2__current, v9);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__239__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__239_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__239__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__239_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__239_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__239__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__239_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__239__System_IDisposable_Dispose(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__239_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent__LoadAsync_d__167___ctor(
        TerminalSceneComponent__LoadAsync_d__167_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TerminalSceneComponent__LoadAsync_d__167__MoveNext(
        TerminalSceneComponent__LoadAsync_d__167_o *this,
        const MethodInfo *method)
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
  int32_t _1__state; // w8
  struct TerminalSceneComponent_o *_4__this; // x21
  __int64 v25; // x20
  System_Action_o *callback; // x0
  UserServantEntity_o *usd; // x22
  System_Action_o *v28; // x23
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
  System_Func_bool__o *v44; // x21
  UnityEngine_WaitUntil_o *v45; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_4184821 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AtlasManager_TypeInfo, v3);
    sub_B2C35C(&Method_System_Func_bool___ctor__, v4);
    sub_B2C35C(&System_Func_bool__TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v7);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass167_0__LoadAsync_b__0__, v8);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass167_0__LoadAsync_b__10__, v9);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass167_0__LoadAsync_b__11__, v10);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass167_0__LoadAsync_b__12__, v11);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass167_0__LoadAsync_b__1__, v12);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass167_0__LoadAsync_b__2__, v13);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass167_0__LoadAsync_b__3__, v14);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass167_0__LoadAsync_b__4__, v15);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass167_0__LoadAsync_b__5__, v16);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass167_0__LoadAsync_b__6__, v17);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass167_0__LoadAsync_b__7__, v18);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass167_0__LoadAsync_b__8__, v19);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass167_0__LoadAsync_b__9__, v20);
    sub_B2C35C(&TerminalSceneComponent___c__DisplayClass167_0_TypeInfo, v21);
    sub_B2C35C(&UnityEngine_WaitUntil_TypeInfo, v22);
    byte_4184821 = 1;
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
  v25 = sub_B2C42C(TerminalSceneComponent___c__DisplayClass167_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_25;
  *(_BYTE *)(v25 + 23) = 0;
  *(_DWORD *)(v25 + 19) = 0;
  *(_DWORD *)(v25 + 24) = 0;
  *(_WORD *)(v25 + 16) = 256;
  *(_BYTE *)(v25 + 18) = 1;
  usd = this->fields.usd;
  v28 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass167_0__LoadAsync_b__0__,
    0LL);
  if ( !_4__this )
    goto LABEL_25;
  TerminalSceneComponent__SetupStandServant(_4__this, usd, 0, v28, 0LL);
  callback = (System_Action_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !callback )
    goto LABEL_25;
  if ( !AtlasManager__isLoadedSkinData((AtlasManager_o *)callback, 4, 0LL) )
  {
    *(_BYTE *)(v25 + 17) = 0;
    v29 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v29,
      (Il2CppObject *)v25,
      Method_TerminalSceneComponent___c__DisplayClass167_0__LoadAsync_b__1__,
      0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__LoadUISkin(v29, 4, 10, 0LL);
  }
  TransitionInfo_k__BackingField = _4__this->fields._TransitionInfo_k__BackingField;
  if ( !TransitionInfo_k__BackingField
    || System_String__IsNullOrEmpty(TransitionInfo_k__BackingField->fields.voiceAssetName, 0LL) )
  {
    goto LABEL_18;
  }
  *(_BYTE *)(v25 + 18) = 0;
  callback = (System_Action_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v31 = _4__this->fields._TransitionInfo_k__BackingField;
  if ( !v31
    || (v32 = (SoundManager_o *)callback,
        voiceAssetName = v31->fields.voiceAssetName,
        v34 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v34,
          (Il2CppObject *)v25,
          Method_TerminalSceneComponent___c__DisplayClass167_0__LoadAsync_b__2__,
          0LL),
        !v32) )
  {
LABEL_25:
    sub_B2C434(callback, method);
  }
  SoundManager__LoadAudioAssetStorage(v32, voiceAssetName, v34, 1, 0LL);
LABEL_18:
  v35 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass167_0__LoadAsync_b__3__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadBanner(v35, 10, 0LL);
  v36 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass167_0__LoadAsync_b__4__,
    0LL);
  AtlasManager__LoadFaceAtlas(v36, 10, 0LL);
  v37 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass167_0__LoadAsync_b__5__,
    0LL);
  AtlasManager__LoadEquipFace(v37, 10, 0LL);
  v38 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass167_0__LoadAsync_b__6__,
    0LL);
  AtlasManager__LoadFriendshipExceed(v38, 10, 0LL);
  v39 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass167_0__LoadAsync_b__7__,
    0LL);
  AtlasManager__LoadCommandCode(v39, 10, 0LL);
  v40 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v40,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass167_0__LoadAsync_b__8__,
    0LL);
  AtlasManager__LoadCommandCodeMini(v40, 10, 0LL);
  v41 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass167_0__LoadAsync_b__9__,
    0LL);
  AtlasManager__LoadEventAtlas(v41, 10, 0LL);
  v42 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass167_0__LoadAsync_b__10__,
    0LL);
  AtlasManager__LoadEventUI(v42, 10, 0LL);
  v43 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass167_0__LoadAsync_b__11__,
    0LL);
  AtlasManager__LoadCharaGraphOptionAtlas(v43, 10, 0LL);
  v44 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v44,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass167_0__LoadAsync_b__12__,
    (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
  v45 = (UnityEngine_WaitUntil_o *)sub_B2C42C(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v45, v44, 0LL);
  this->fields.__2__current = (Il2CppObject *)v45;
  p__2__current = &this->fields.__2__current;
  sub_B2C2F8(p__2__current, v45);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall TerminalSceneComponent__LoadAsync_d__167__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__LoadAsync_d__167_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TerminalSceneComponent__LoadAsync_d__167__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__LoadAsync_d__167_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_TerminalSceneComponent__LoadAsync_d__167_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall TerminalSceneComponent__LoadAsync_d__167__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__LoadAsync_d__167_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TerminalSceneComponent__LoadAsync_d__167__System_IDisposable_Dispose(
        TerminalSceneComponent__LoadAsync_d__167_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__183___ctor(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__183_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__183__MoveNext(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__183_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  TerminalSceneComponent___c_c *v9; // x0
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__183_0; // x20
  Il2CppObject *v12; // x21
  struct TerminalSceneComponent___c_StaticFields *v13; // x0
  UnityEngine_WaitWhile_o *v14; // x21
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_4184822 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_bool___ctor__, method);
    sub_B2C35C(&System_Func_bool__TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    sub_B2C35C(&Method_TerminalSceneComponent___c__WaitStopSEQuestPhaseRewardEffect_b__183_0__, v5);
    sub_B2C35C(&TerminalSceneComponent___c_TypeInfo, v6);
    sub_B2C35C(&UnityEngine_WaitWhile_TypeInfo, v7);
    byte_4184822 = 1;
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
  v9 = TerminalSceneComponent___c_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v9 = TerminalSceneComponent___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__183_0 = static_fields->__9__183_0;
  if ( !_9__183_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__183_0 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      _9__183_0,
      v12,
      Method_TerminalSceneComponent___c__WaitStopSEQuestPhaseRewardEffect_b__183_0__,
      (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
    v13 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v13->__9__183_0 = _9__183_0;
    sub_B2C2F8(&v13->__9__183_0, _9__183_0);
  }
  v14 = (UnityEngine_WaitWhile_o *)sub_B2C42C(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v14, _9__183_0, 0LL);
  this->fields.__2__current = (Il2CppObject *)v14;
  p__2__current = &this->fields.__2__current;
  sub_B2C2F8(p__2__current, v14);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__183__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__183_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__183__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__183_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__183_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__183__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__183_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__183__System_IDisposable_Dispose(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__183_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4184801 & 1) == 0 )
  {
    sub_B2C35C(&TerminalSceneComponent___c_TypeInfo, v1);
    byte_4184801 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(TerminalSceneComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TerminalSceneComponent___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall TerminalSceneComponent___c___ctor(TerminalSceneComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c___CheckOpenCampaignDirectBonus_b__238_0(
        TerminalSceneComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  CommonUI_o *Instance; // x19
  TerminalPramsManager_c *v5; // x0
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_418480B & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v2);
    byte_418480B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184730 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v3);
    byte_4184730 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    sub_B2C434(v5, v3);
  CommonUI__OpenCampaignDirectBonus(Instance, v5->static_fields->_CampaignDirectBonus_k__BackingField, 0LL);
  if ( !byte_418471D )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v6);
    byte_418471D = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  static_fields->_CampaignDirectBonus_k__BackingField = 0LL;
  sub_B2C2F8(&static_fields->_CampaignDirectBonus_k__BackingField, 0LL);
  TerminalPramsManager__CampaignDirectBonus_SaveData(0LL);
}


void __fastcall TerminalSceneComponent___c___CheckRewardPopupChain_b__237_2(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_418480A & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, action);
    byte_418480A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v5);
  CommonUI__StartFriendPointNotification(Instance, action, 0LL);
}


void __fastcall TerminalSceneComponent___c___Fadein_MapDisp_Start_b__187_0(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4184804 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, action);
    byte_4184804 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v5);
  CommonUI__StartLoginAndCampaignBonus(Instance, action, 0LL, 201, 0LL);
}


void __fastcall TerminalSceneComponent___c___Fadein_MapDisp_Start_b__187_1(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20

  if ( (byte_4184805 & 1) == 0 )
  {
    sub_B2C35C(&AvalonSceneManager_TypeInfo, action);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4184805 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v7
    || (CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__ClearLoginResultData(Instance, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B2C434(Instance, v6);
  }
  CommonUI__ReleaseFortuneBonusAssetData(Instance, 0LL);
}


void __fastcall TerminalSceneComponent___c___Fadein_MapDisp_Start_b__187_6(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20

  if ( (byte_4184803 & 1) == 0 )
  {
    sub_B2C35C(&AvalonSceneManager_TypeInfo, action);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4184803 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v7 )
    sub_B2C434(Instance, v6);
  CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_o *__fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__243_0(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_418480C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&x);
    sub_B2C35C(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418480C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v7);
  }
  return (ShopEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                           x,
                           (const MethodInfo_24E40D0 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
}


bool __fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__243_1(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return ShopEntity__IsAfterTheFreeShopReleaseDate(x, 0LL);
}


bool __fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__243_2(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  bool isQuestNotClearItemClosed; // w8
  bool result; // w0

  if ( !x )
    sub_B2C434(this, 0LL);
  if ( !ShopEntity__isQuestNotClearItemClosed(x, 0, 0LL) )
    return 1;
  isQuestNotClearItemClosed = ShopEntity__isQuestNotClearItemClosed(x, 0, 0LL);
  result = 0;
  if ( isQuestNotClearItemClosed )
    return ShopEntity__IsSoldOut(x, 0LL);
  return result;
}


int32_t __fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__243_4(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.id;
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_o *__fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__243_5(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_418480D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&x);
    sub_B2C35C(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418480D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v7);
  }
  return (ShopEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                           x,
                           (const MethodInfo_24E40D0 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
}


int32_t __fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__243_6(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return ShopEntity__GetPrice(x, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent___c___RebootToNetworkError_b__204_0(
        TerminalSceneComponent___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ManagementManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4184809 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, isDecide);
    byte_4184809 = 1;
  }
  Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  ManagementManager__reboot(Instance, 0, 0LL);
}


void __fastcall TerminalSceneComponent___c___StartWindowMessage_b__189_1(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20

  if ( (byte_4184806 & 1) == 0 )
  {
    sub_B2C35C(&AvalonSceneManager_TypeInfo, action);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4184806 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v7 )
    sub_B2C434(Instance, v6);
  CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0LL);
}


void __fastcall TerminalSceneComponent___c___StartWindowMessage_b__189_2(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  System_String_o *QuestWindowMessage_k__BackingField; // x20

  if ( (byte_4184807 & 1) == 0 )
  {
    sub_B2C35C(&ScriptManager_TypeInfo, action);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v4);
    byte_4184807 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184754 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, action);
    byte_4184754 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  QuestWindowMessage_k__BackingField = v5->static_fields->_QuestWindowMessage_k__BackingField;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayMessage(QuestWindowMessage_k__BackingField, action, 0, 0LL, -1, 0LL);
}


void __fastcall TerminalSceneComponent___c___StartWindowMessage_b__189_3(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  __int64 v6; // x1
  AvalonSceneManager_o *v7; // x20
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_4184808 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, action);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v4);
    byte_4184808 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_418483C )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, action);
    byte_418483C = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( v5->static_fields->_MessageDispType_k__BackingField != 2 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v5);
    TerminalPramsManager__InitMessageWindowData(0LL);
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0LL, 0, 0LL);
      goto LABEL_27;
    }
LABEL_28:
    sub_B2C434(Instance, v6);
  }
  v7 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_418483D )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v6);
    byte_418483D = 1;
  }
  Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v7 )
    goto LABEL_28;
  AvalonSceneManager__transitionScene(v7, 40, 1, *(Il2CppObject **)&Instance[2].fields.targetRoot[1].fields.kind, 0LL);
LABEL_27:
  ActionExtensions__Call(action, 0LL);
}


bool __fastcall TerminalSceneComponent___c___WaitStopSEQuestPhaseRewardEffect_b__183_0(
        TerminalSceneComponent___c_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4184802 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184802 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183CA1 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4183CA1 = 1;
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


System_String_o *__fastcall TerminalSceneComponent___c___callbackTopLogin_b__202_0(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0LL);
}


System_String_o *__fastcall TerminalSceneComponent___c___callbackTopLogin_b__202_1(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass164_0___ctor(
        TerminalSceneComponent___c__DisplayClass164_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass164_0___SetEarthView_b__0(
        TerminalSceneComponent___c__DisplayClass164_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass164_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct TerminalSceneComponent_o *_4__this; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  struct TerminalSceneComponent_o *v11; // x8
  struct TerminalSceneComponent_o *v12; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0

  v4 = this;
  if ( (byte_418480E & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, data);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInChildren_BaseCore___, v5);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    this = (TerminalSceneComponent___c__DisplayClass164_0_o *)sub_B2C35C(&StringLiteral_4304/*"CorePrefab"*/, v8);
    byte_418480E = 1;
  }
  if ( !data )
    goto LABEL_12;
  _4__this = v4->fields.__4__this;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               data,
                                                                               (System_String_o *)StringLiteral_4304/*"CorePrefab"*/,
                                                                               (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (TerminalSceneComponent___c__DisplayClass164_0_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                              Object_WarBoardWaitTimeSetting,
                                                              (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !_4__this
    || (_4__this->fields.mEarthCoreObj = (struct UnityEngine_GameObject_o *)this,
        sub_B2C2F8(&_4__this->fields.mEarthCoreObj, this),
        (v11 = v4->fields.__4__this) == 0LL)
    || (GameObjectExtensions__SafeSetParent_31331952(v11->fields.mEarthCoreObj, v11->fields.mUiRoot, 0LL),
        (v12 = v4->fields.__4__this) == 0LL)
    || (this = (TerminalSceneComponent___c__DisplayClass164_0_o *)v12->fields.mEarthCoreObj) == 0LL )
  {
LABEL_12:
    sub_B2C434(this, data);
  }
  ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                (UnityEngine_GameObject_o *)this,
                                                (const MethodInfo_1AA7988 *)Method_UnityEngine_GameObject_GetComponentInChildren_BaseCore___);
  v12->fields.mEarthCore = (struct BaseCore_o *)ComponentInChildren_Dropdown_DropdownItem;
  sub_B2C2F8(&v12->fields.mEarthCore, ComponentInChildren_Dropdown_DropdownItem);
  ActionExtensions__Call(v4->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass167_0___ctor(
        TerminalSceneComponent___c__DisplayClass167_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass167_0___LoadAsync_b__0(
        TerminalSceneComponent___c__DisplayClass167_0_o *this,
        const MethodInfo *method)
{
  this->fields.isSetupStandServant = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass167_0___LoadAsync_b__1(
        TerminalSceneComponent___c__DisplayClass167_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadUISkin = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass167_0___LoadAsync_b__10(
        TerminalSceneComponent___c__DisplayClass167_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadEventUI = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass167_0___LoadAsync_b__11(
        TerminalSceneComponent___c__DisplayClass167_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadCharaGraphOptionAtlas = 1;
}


bool __fastcall TerminalSceneComponent___c__DisplayClass167_0___LoadAsync_b__12(
        TerminalSceneComponent___c__DisplayClass167_0_o *this,
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


void __fastcall TerminalSceneComponent___c__DisplayClass167_0___LoadAsync_b__2(
        TerminalSceneComponent___c__DisplayClass167_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadAudioAssetStorage = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass167_0___LoadAsync_b__3(
        TerminalSceneComponent___c__DisplayClass167_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadBanner = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass167_0___LoadAsync_b__4(
        TerminalSceneComponent___c__DisplayClass167_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadFaceAtlas = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass167_0___LoadAsync_b__5(
        TerminalSceneComponent___c__DisplayClass167_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadEquipFace = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass167_0___LoadAsync_b__6(
        TerminalSceneComponent___c__DisplayClass167_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadFriendshipExceed = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass167_0___LoadAsync_b__7(
        TerminalSceneComponent___c__DisplayClass167_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadCommandCode = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass167_0___LoadAsync_b__8(
        TerminalSceneComponent___c__DisplayClass167_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadCommandCodeMini = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass167_0___LoadAsync_b__9(
        TerminalSceneComponent___c__DisplayClass167_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadEventAtlas = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass178_0___ctor(
        TerminalSceneComponent___c__DisplayClass178_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass178_0___SetupStandServant_b__0(
        TerminalSceneComponent___c__DisplayClass178_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass178_0_o *v2; // x19
  struct TerminalSceneComponent_o *_4__this; // x8

  v2 = this;
  if ( this->fields.isSlideIn )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (this = (TerminalSceneComponent___c__DisplayClass178_0_o *)_4__this->fields.mTerminalServant) == 0LL )
    {
      sub_B2C434(this, method);
    }
    StandFigureSlideComponent__SlideIn((StandFigureSlideComponent_o *)this, 0LL, 0LL);
  }
  ActionExtensions__Call(v2->fields.endAction, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass178_0___SetupStandServant_b__1(
        TerminalSceneComponent___c__DisplayClass178_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass178_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct TerminalSceneComponent_o *_4__this; // x8
  struct TerminalSceneComponent_o *v7; // x8
  __n128 v8; // q0
  struct TerminalSceneComponent_o *v9; // x8
  struct StandFigureSlideComponent_o *mTerminalServant; // x9
  struct BaseCore_o *mEarthCore; // x8
  Il2CppObject *v12; // x20
  UserServantEntity_o *NextStandServant; // x0
  __n128 inited; // q0
  struct TerminalSceneComponent_o *v15; // x8
  int32_t mStandSvtIdx; // w22
  struct TerminalSceneComponent_o *v17; // x8
  struct BaseCore_o *v18; // x22
  struct TerminalSceneComponent_o *v19; // x8
  StandFigureSlideComponent_o *v20; // x19
  System_Action_o *v21; // x21
  struct TerminalSceneComponent_o *v22; // x8
  struct BaseCore_o *v23; // x21
  struct TerminalSceneComponent_o *v24; // x8

  v2 = this;
  if ( (byte_418480F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v3);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass178_1__SetupStandServant_b__2__, v4);
    this = (TerminalSceneComponent___c__DisplayClass178_0_o *)sub_B2C35C(
                                                                &TerminalSceneComponent___c__DisplayClass178_1_TypeInfo,
                                                                v5);
    byte_418480F = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_60;
  this = (TerminalSceneComponent___c__DisplayClass178_0_o *)_4__this->fields.mTerminalServant;
  if ( !this )
    goto LABEL_60;
  if ( !*(&this[1].fields.isSlideIn + 1) )
  {
    this = (TerminalSceneComponent___c__DisplayClass178_0_o *)StandFigureSlideComponent__IsMoving(
                                                                (StandFigureSlideComponent_o *)this,
                                                                0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v7 = v2->fields.__4__this;
      if ( v7 )
      {
        this = (TerminalSceneComponent___c__DisplayClass178_0_o *)v7->fields.mEarthCore;
        if ( this )
        {
          if ( *(&this[3].fields.isSlideIn + 1) )
            return;
          v8.n128_f32[0] = ((float (__fastcall *)(TerminalSceneComponent___c__DisplayClass178_0_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                             this,
                             this->klass[1]._1.interfaceOffsets);
          if ( v8.n128_f32[0] < 0.0 || v8.n128_f32[0] > 0.0 )
            return;
          v9 = v2->fields.__4__this;
          if ( v9 )
          {
            mTerminalServant = v9->fields.mTerminalServant;
            if ( mTerminalServant )
            {
              mEarthCore = v9->fields.mEarthCore;
              if ( mTerminalServant->fields.mIsFrameIn )
              {
                if ( mEarthCore )
                {
                  if ( mEarthCore->fields.mIsFocusIn )
                    return;
                  v12 = (Il2CppObject *)sub_B2C42C(TerminalSceneComponent___c__DisplayClass178_1_TypeInfo);
                  System_Object___ctor(v12, 0LL);
                  if ( v12 )
                  {
                    v12[1].monitor = v2;
                    sub_B2C2F8(&v12[1].monitor, v2);
                    this = (TerminalSceneComponent___c__DisplayClass178_0_o *)v2->fields.__4__this;
                    if ( this )
                    {
                      NextStandServant = TerminalSceneComponent__GetNextStandServant(
                                           (TerminalSceneComponent_o *)this,
                                           0LL);
                      v12[1].klass = (Il2CppClass *)NextStandServant;
                      inited = sub_B2C2F8(&v12[1], NextStandServant);
                      v15 = v2->fields.__4__this;
                      if ( v15 )
                      {
                        mStandSvtIdx = v15->fields.mStandSvtIdx;
                        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                        {
                          inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                        }
                        if ( !byte_418474F )
                        {
                          sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
                          byte_418474F = 1;
                        }
                        this = (TerminalSceneComponent___c__DisplayClass178_0_o *)TerminalPramsManager_TypeInfo;
                        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                        {
                          inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                          this = (TerminalSceneComponent___c__DisplayClass178_0_o *)TerminalPramsManager_TypeInfo;
                        }
                        BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_ARROW_RECT.fields.m_Width) = mStandSvtIdx != 0;
                        v17 = v2->fields.__4__this;
                        if ( v17 )
                        {
                          v18 = v17->fields.mEarthCore;
                          if ( !byte_4183C74 )
                          {
                            sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
                            this = (TerminalSceneComponent___c__DisplayClass178_0_o *)TerminalPramsManager_TypeInfo;
                            byte_4183C74 = 1;
                          }
                          if ( (BYTE3(this[7].fields.__4__this) & 4) != 0 && !LODWORD(this[5].fields.__4__this) )
                          {
                            inited = j_il2cpp_runtime_class_init_0(this);
                            this = (TerminalSceneComponent___c__DisplayClass178_0_o *)TerminalPramsManager_TypeInfo;
                          }
                          if ( v18 )
                          {
                            this = (TerminalSceneComponent___c__DisplayClass178_0_o *)((__int64 (__fastcall *)(struct BaseCore_o *, bool, _QWORD, Il2CppMethodPointer, long double))v18->klass->vtable._4_FocusInOut.method)(
                                                                                        v18,
                                                                                        BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_ARROW_RECT.fields.m_Width) == 0,
                                                                                        0LL,
                                                                                        v18->klass->vtable._5_Awake.methodPtr,
                                                                                        *(long double *)&inited);
                            v19 = v2->fields.__4__this;
                            if ( v19 )
                            {
                              v20 = v19->fields.mTerminalServant;
                              v21 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                              System_Action___ctor(
                                v21,
                                v12,
                                Method_TerminalSceneComponent___c__DisplayClass178_1__SetupStandServant_b__2__,
                                0LL);
                              if ( v20 )
                              {
                                StandFigureSlideComponent__SlideOut(v20, v21, 0, 0LL);
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
                  v8 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                }
                if ( !byte_418474F )
                {
                  sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
                  byte_418474F = 1;
                }
                this = (TerminalSceneComponent___c__DisplayClass178_0_o *)TerminalPramsManager_TypeInfo;
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  v8 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  this = (TerminalSceneComponent___c__DisplayClass178_0_o *)TerminalPramsManager_TypeInfo;
                }
                BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_ARROW_RECT.fields.m_Width) = 1;
                v22 = v2->fields.__4__this;
                if ( v22 )
                {
                  v23 = v22->fields.mEarthCore;
                  if ( !byte_4183C74 )
                  {
                    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
                    this = (TerminalSceneComponent___c__DisplayClass178_0_o *)TerminalPramsManager_TypeInfo;
                    byte_4183C74 = 1;
                  }
                  if ( (BYTE3(this[7].fields.__4__this) & 4) != 0 && !LODWORD(this[5].fields.__4__this) )
                  {
                    v8 = j_il2cpp_runtime_class_init_0(this);
                    this = (TerminalSceneComponent___c__DisplayClass178_0_o *)TerminalPramsManager_TypeInfo;
                  }
                  if ( v23 )
                  {
                    this = (TerminalSceneComponent___c__DisplayClass178_0_o *)((__int64 (__fastcall *)(struct BaseCore_o *, bool, _QWORD, Il2CppMethodPointer, long double))v23->klass->vtable._4_FocusInOut.method)(
                                                                                v23,
                                                                                BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_ARROW_RECT.fields.m_Width) == 0,
                                                                                0LL,
                                                                                v23->klass->vtable._5_Awake.methodPtr,
                                                                                *(long double *)&v8);
                    v24 = v2->fields.__4__this;
                    if ( v24 )
                    {
                      this = (TerminalSceneComponent___c__DisplayClass178_0_o *)v24->fields.mTerminalServant;
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
      sub_B2C434(this, method);
    }
  }
}


void __fastcall TerminalSceneComponent___c__DisplayClass178_1___ctor(
        TerminalSceneComponent___c__DisplayClass178_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass178_1___SetupStandServant_b__2(
        TerminalSceneComponent___c__DisplayClass178_1_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass178_1_o *v2; // x20
  struct TerminalSceneComponent___c__DisplayClass178_0_o *CS___8__locals1; // x8
  TerminalSceneComponent_o *_4__this; // x19
  UserServantEntity_o *usd; // x20

  v2 = this;
  if ( (byte_4184810 & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass178_1_o *)sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184810 = 1;
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
  if ( !byte_4183C74 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4183C74 = 1;
  }
  this = (TerminalSceneComponent___c__DisplayClass178_1_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass178_1_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !_4__this )
LABEL_14:
    sub_B2C434(this, method);
  TerminalSceneComponent__SetupStandServant(
    _4__this,
    usd,
    BYTE2(this[5].fields.CS___8__locals1[1].fields.endAction),
    0LL,
    0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass184_0___ctor(
        TerminalSceneComponent___c__DisplayClass184_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass184_0___coFadein_WorldDisp_b__0(
        TerminalSceneComponent___c__DisplayClass184_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  TerminalSceneComponent__StartWindowMessage(_4__this, 0LL, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass184_0___coFadein_WorldDisp_b__1(
        TerminalSceneComponent___c__DisplayClass184_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass184_0___coFadein_WorldDisp_b__2(
        TerminalSceneComponent___c__DisplayClass184_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  System_Action_o *klass; // x22
  TerminalSceneComponent_o *v5; // x20

  v2 = (Il2CppObject *)this;
  if ( (byte_4184811 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    this = (TerminalSceneComponent___c__DisplayClass184_0_o *)sub_B2C35C(
                                                                &Method_TerminalSceneComponent___c__DisplayClass184_0__coFadein_WorldDisp_b__3__,
                                                                v3);
    byte_4184811 = 1;
  }
  klass = (System_Action_o *)v2[2].klass;
  v5 = (TerminalSceneComponent_o *)v2[1].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v2,
      Method_TerminalSceneComponent___c__DisplayClass184_0__coFadein_WorldDisp_b__3__,
      0LL);
    v2[2].klass = (Il2CppClass *)klass;
    sub_B2C2F8(&v2[2], klass);
  }
  if ( !v5 )
    sub_B2C434(this, method);
  TerminalSceneComponent__StartWindowMessage(v5, klass, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass184_0___coFadein_WorldDisp_b__3(
        TerminalSceneComponent___c__DisplayClass184_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass185_0___ctor(
        TerminalSceneComponent___c__DisplayClass185_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass185_0___Fadein_MapDisp_b__0(
        TerminalSceneComponent___c__DisplayClass185_0_o *this,
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
    sub_B2C434(_4__this, method);
  }
  v4->fields._FirstFadeTime_k__BackingField = 0.0;
}


void __fastcall TerminalSceneComponent___c__DisplayClass186_0___ctor(
        TerminalSceneComponent___c__DisplayClass186_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass186_0___Fadein_MapDisp_Load_b__0(
        TerminalSceneComponent___c__DisplayClass186_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  TerminalSceneComponent__Fadein_MapDisp_Start(_4__this, this->fields.fade_time, this->fields.end_act, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass187_0___ctor(
        TerminalSceneComponent___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass187_0___Fadein_MapDisp_Start_b__2(
        TerminalSceneComponent___c__DisplayClass187_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct WarEntity_o *war_dat; // x8

  war_dat = this->fields.war_dat;
  if ( !war_dat || (this = (TerminalSceneComponent___c__DisplayClass187_0_o *)this->fields.__4__this) == 0LL )
    sub_B2C434(this, action);
  TerminalSceneComponent__StartEventDailyPoint((TerminalSceneComponent_o *)this, war_dat->fields.eventId, action, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass187_0___Fadein_MapDisp_Start_b__3(
        TerminalSceneComponent___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  struct WarEntity_o *war_dat; // x9

  war_dat = this->fields.war_dat;
  if ( !war_dat || !this->fields.__4__this )
    sub_B2C434(this, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffects(
    this->fields.__4__this,
    this->fields.fade_time,
    war_dat->fields.eventId,
    this->fields.end_act,
    0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass187_0___Fadein_MapDisp_Start_b__4(
        TerminalSceneComponent___c__DisplayClass187_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (mTerminalList = _4__this->fields.mTerminalList) == 0LL
    || (this = (TerminalSceneComponent___c__DisplayClass187_0_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0LL )
  {
    sub_B2C434(this, action);
  }
  QuestBoardListViewManager__SetMode((QuestBoardListViewManager_o *)this, 4, action, 0, 0, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass187_0___Fadein_MapDisp_Start_b__5(
        TerminalSceneComponent___c__DisplayClass187_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass187_0_o *v4; // x20
  struct TerminalSceneComponent_o *_4__this; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  v4 = this;
  if ( (byte_4184812 & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass187_0_o *)sub_B2C35C(
                                                                &Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__,
                                                                action);
    byte_4184812 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (mTerminalMap = _4__this->fields.mTerminalMap) == 0LL
    || (this = (TerminalSceneComponent___c__DisplayClass187_0_o *)mTerminalMap->fields.allMaskObj) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (this = (TerminalSceneComponent___c__DisplayClass187_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__)) == 0LL) )
  {
    sub_B2C434(this, action);
  }
  QuestAfterAction__LoadVoice((QuestAfterAction_o *)this, action, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass187_1___ctor(
        TerminalSceneComponent___c__DisplayClass187_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass187_1___Fadein_MapDisp_Start_b__7(
        TerminalSceneComponent___c__DisplayClass187_1_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *IsNullOrEmpty; // x0
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x1
  TerminalPramsManager_c *v9; // x0
  AvalonSceneManager_o *Instance; // x19
  struct TerminalSceneComponent___c__DisplayClass187_0_o *CS___8__locals1; // x8

  if ( (byte_4184813 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v3);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v4);
    byte_4184813 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, method);
    byte_4183C65 = 1;
  }
  IsNullOrEmpty = (UnityEngine_GameObject_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    IsNullOrEmpty = (UnityEngine_GameObject_o *)TerminalSceneComponent_TypeInfo;
  }
  v6 = **(_QWORD **)&IsNullOrEmpty[7].fields.m_CachedPtr;
  if ( !v6 )
    goto LABEL_36;
  v7 = *(_QWORD *)(v6 + 256);
  if ( !v7 )
    goto LABEL_36;
  IsNullOrEmpty = *(UnityEngine_GameObject_o **)(v7 + 528);
  if ( !IsNullOrEmpty )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(IsNullOrEmpty, this->fields.oldActive, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184754 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v8);
    byte_4184754 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  IsNullOrEmpty = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(
                                                v9->static_fields->_QuestWindowMessage_k__BackingField,
                                                0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_418483D )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
      byte_418483D = 1;
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
        *(Il2CppObject **)(*(_QWORD *)&IsNullOrEmpty[7].fields.m_CachedPtr + 104LL),
        0LL);
      return;
    }
LABEL_36:
    sub_B2C434(IsNullOrEmpty, method);
  }
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_36;
  IsNullOrEmpty = (UnityEngine_GameObject_o *)CS___8__locals1->fields.__4__this;
  if ( !IsNullOrEmpty )
    goto LABEL_36;
  TerminalSceneComponent__StartWindowMessage((TerminalSceneComponent_o *)IsNullOrEmpty, 0LL, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass190_0___ctor(
        TerminalSceneComponent___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass190_0___FadeInAndTriggerEventEffects_b__0(
        TerminalSceneComponent___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__2; // x21
  CommonUI_o *v8; // x20
  float fadeTime; // s8

  if ( (byte_4184814 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass190_0__FadeInAndTriggerEventEffects_b__2__, v4);
    byte_4184814 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  fadeTime = this->fields.fadeTime;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent___c__DisplayClass190_0__FadeInAndTriggerEventEffects_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B2C2F8(&this->fields.__9__2, _9__2);
  }
  if ( !v8 )
    sub_B2C434(Instance, v6);
  CommonUI__maskFadein(v8, fadeTime, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass190_0___FadeInAndTriggerEventEffects_b__1(
        TerminalSceneComponent___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(_4__this, this->fields.eventId, this->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass190_0___FadeInAndTriggerEventEffects_b__2(
        TerminalSceneComponent___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__3; // x22
  QuestAfterAction_o *v8; // x20

  if ( (byte_4184815 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v3);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass190_0__FadeInAndTriggerEventEffects_b__3__, v4);
    byte_4184815 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  _9__3 = this->fields.__9__3;
  v8 = (QuestAfterAction_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent___c__DisplayClass190_0__FadeInAndTriggerEventEffects_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B2C2F8(&this->fields.__9__3, _9__3);
  }
  if ( !v8 )
    sub_B2C434(Instance, v6);
  QuestAfterAction__Play(v8, _9__3, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass190_0___FadeInAndTriggerEventEffects_b__3(
        TerminalSceneComponent___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(_4__this, this->fields.eventId, this->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass190_0___FadeInAndTriggerEventEffects_b__4(
        TerminalSceneComponent___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(_4__this, this->fields.eventId, this->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass193_0___ctor(
        TerminalSceneComponent___c__DisplayClass193_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass193_0___FadeInAndTriggerEventEffectsNext_b__0(
        TerminalSceneComponent___c__DisplayClass193_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  TitleInfoControl_o *mTitleInfo; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (mTitleInfo = _4__this->fields.mTitleInfo) == 0LL )
    sub_B2C434(this, method);
  TitleInfoControl__CheckSuperBossHpAnim(mTitleInfo, this->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass193_0___FadeInAndTriggerEventEffectsNext_b__1(
        TerminalSceneComponent___c__DisplayClass193_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  TerminalSceneComponent__SetActionBGColl(_4__this, 0, this->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass220_0___ctor(
        TerminalSceneComponent___c__DisplayClass220_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass220_0___PlayEventTutorial_b__0(
        TerminalSceneComponent___c__DisplayClass220_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  TerminalSceneComponent___c__DisplayClass220_0_o *v4; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (mTerminalList = _4__this->fields.mTerminalList) == 0LL
    || (v4 = this, (this = (TerminalSceneComponent___c__DisplayClass220_0_o *)mTerminalList->fields.mActionBgColl) == 0LL)
    || (this = (TerminalSceneComponent___c__DisplayClass220_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL)) == 0LL )
  {
    sub_B2C434(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  ActionExtensions__Call(v4->fields.callbakAfter, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass237_0___ctor(
        TerminalSceneComponent___c__DisplayClass237_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass237_0___CheckRewardPopupChain_b__0(
        TerminalSceneComponent___c__DisplayClass237_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ScrTerminalListTop_o *Instance; // x0
  __int64 v8; // x1
  struct TerminalSceneComponent_o *_4__this; // x8
  CommonUI_o *v10; // x20

  if ( (byte_4184816 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_DialogMessageMaster___, action);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4184816 = 1;
  }
  Instance = (ScrTerminalListTop_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v10 = (CommonUI_o *)Instance, (Instance = _4__this->fields.mTerminalList) == 0LL)
    || (Instance = (ScrTerminalListTop_o *)ScrTerminalListTop__PopEventSvtGets(Instance, 0LL), !v10)
    || (CommonUI__SetupLoginResultData(v10, (System_Int32_array *)Instance, 0LL),
        (Instance = (ScrTerminalListTop_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (ScrTerminalListTop_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_DialogMessageMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v8);
  }
  DialogMessageMaster__ShowAvailables((DialogMessageMaster_o *)Instance, 1, action, 0, 0, 0, 0, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass237_0___CheckRewardPopupChain_b__1(
        TerminalSceneComponent___c__DisplayClass237_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1
  System_Action_o *_9__4; // x22
  CommonUI_o *v10; // x21

  if ( (byte_4184817 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, action);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass237_0__CheckRewardPopupChain_b__4__, v6);
    byte_4184817 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__4 = this->fields.__9__4;
  v10 = (CommonUI_o *)Instance;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent___c__DisplayClass237_0__CheckRewardPopupChain_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    sub_B2C2F8(&this->fields.__9__4, _9__4);
  }
  if ( !v10 )
    sub_B2C434(Instance, v8);
  CommonUI__StartLoginAndCampaignBonus(v10, action, _9__4, -1, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass237_0___CheckRewardPopupChain_b__3(
        TerminalSceneComponent___c__DisplayClass237_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  if ( (byte_4184818 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4184818 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (TerminalSceneComponent__CheckOpenCampaignDirectBonus(_4__this, 0LL),
        (_4__this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__ClearLoginResultData((CommonUI_o *)_4__this, 0LL),
        (_4__this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B2C434(_4__this, method);
  }
  CommonUI__ReleaseFortuneBonusAssetData((CommonUI_o *)_4__this, 0LL);
  ActionExtensions__Call(this->fields.afterChain, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass237_0___CheckRewardPopupChain_b__4(
        TerminalSceneComponent___c__DisplayClass237_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (TerminalSceneComponent___c__DisplayClass237_0_o *)_4__this->fields.mPlayerStatus) == 0LL )
    sub_B2C434(this, method);
  ScrPlayerStatus__mfInitUserData((ScrPlayerStatus_o *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass245_0___ctor(
        TerminalSceneComponent___c__DisplayClass245_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass245_0___CheckSaveRouteSelect_b__0(
        TerminalSceneComponent___c__DisplayClass245_0_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  if ( (byte_4184819 & 1) == 0 )
  {
    sub_B2C35C(&ScriptManager_TypeInfo, str);
    byte_4184819 = 1;
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


void __fastcall TerminalSceneComponent___c__DisplayClass247_0___ctor(
        TerminalSceneComponent___c__DisplayClass247_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent___c__DisplayClass247_0___CheckMasterMissionReset_b__0(
        TerminalSceneComponent___c__DisplayClass247_0_o *this,
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
  TerminalSceneComponent_c *v12; // x0
  System_String_o *MASTER_MISSION_RESET_KEY; // x21
  System_String_o *v14; // x0
  CommonUI_o *Instance; // x19
  System_Action_o *v16; // x21

  if ( (byte_418481A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v6);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass247_1__CheckMasterMissionReset_b__1__, v7);
    sub_B2C35C(&TerminalSceneComponent___c__DisplayClass247_1_TypeInfo, v8);
    byte_418481A = 1;
  }
  v9 = sub_B2C42C(TerminalSceneComponent___c__DisplayClass247_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 24) = this;
  sub_B2C2F8(v9 + 24, this);
  *(_BYTE *)(v9 + 16) = isDecide;
  v12 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v12 = TerminalSceneComponent_TypeInfo;
  }
  MASTER_MISSION_RESET_KEY = v12->static_fields->MASTER_MISSION_RESET_KEY;
  v14 = System_Int64__ToString((int64_t)&this->fields, 0LL);
  UnityEngine_PlayerPrefs__SetString(MASTER_MISSION_RESET_KEY, v14, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v9,
    Method_TerminalSceneComponent___c__DisplayClass247_1__CheckMasterMissionReset_b__1__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B2C434(v10, v11);
  CommonUI__CloseConfirmDialog_17971588(Instance, v16, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass247_0___CheckMasterMissionReset_b__2(
        TerminalSceneComponent___c__DisplayClass247_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  ScrPlayerStatus_o *mPlayerStatus; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (mPlayerStatus = _4__this->fields.mPlayerStatus) == 0LL )
    sub_B2C434(this, method);
  ScrPlayerStatus__OpenMasterMission(mPlayerStatus, this->fields.callback, -1, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass247_1___ctor(
        TerminalSceneComponent___c__DisplayClass247_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass247_1___CheckMasterMissionReset_b__1(
        TerminalSceneComponent___c__DisplayClass247_1_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass247_1_o *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *v6; // x19
  AvalonSceneManager_c *v7; // x8
  Il2CppObject *CS___8__locals1; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *monitor; // x21
  struct TerminalSceneComponent___c__DisplayClass247_0_o *v11; // x8

  v2 = this;
  if ( (byte_418481B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    this = (TerminalSceneComponent___c__DisplayClass247_1_o *)sub_B2C35C(
                                                                &Method_TerminalSceneComponent___c__DisplayClass247_0__CheckMasterMissionReset_b__2__,
                                                                v5);
    byte_418481B = 1;
  }
  if ( v2->fields.isDecide )
  {
    this = (TerminalSceneComponent___c__DisplayClass247_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (CommonUI_o *)this;
    v7 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v7 = AvalonSceneManager_TypeInfo;
    }
    CS___8__locals1 = (Il2CppObject *)v2->fields.CS___8__locals1;
    if ( CS___8__locals1 )
    {
      DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
      monitor = (System_Action_o *)CS___8__locals1[2].monitor;
      if ( !monitor )
      {
        monitor = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          monitor,
          CS___8__locals1,
          Method_TerminalSceneComponent___c__DisplayClass247_0__CheckMasterMissionReset_b__2__,
          0LL);
        CS___8__locals1[2].monitor = monitor;
        sub_B2C2F8(&CS___8__locals1[2].monitor, monitor);
      }
      if ( v6 )
      {
        CommonUI__maskFadeout(v6, 1, DEFAULT_FADE_TIME, monitor, 0LL);
        return;
      }
    }
LABEL_14:
    sub_B2C434(this, method);
  }
  v11 = v2->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_14;
  ActionExtensions__Call(v11->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass248_0___ctor(
        TerminalSceneComponent___c__DisplayClass248_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass248_0___CheckNotificationDialog_b__0(
        TerminalSceneComponent___c__DisplayClass248_0_o *this,
        const MethodInfo *method)
{
  BattleResultBondsComponent_c *v3; // x0

  if ( (byte_418481C & 1) == 0 )
  {
    sub_B2C35C(&BattleResultBondsComponent_TypeInfo, method);
    byte_418481C = 1;
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


void __fastcall TerminalSceneComponent___c__DisplayClass248_0___CheckNotificationDialog_b__2(
        TerminalSceneComponent___c__DisplayClass248_0_o *this,
        const MethodInfo *method)
{
  BattleResultBondsComponent_c *v3; // x0

  if ( (byte_418481D & 1) == 0 )
  {
    sub_B2C35C(&BattleResultBondsComponent_TypeInfo, method);
    byte_418481D = 1;
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


void __fastcall TerminalSceneComponent___c__DisplayClass248_1___ctor(
        TerminalSceneComponent___c__DisplayClass248_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass248_1___CheckNotificationDialog_b__1(
        TerminalSceneComponent___c__DisplayClass248_1_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *CS___8__locals1; // x21
  GetSvtCoin_array *coin; // x20
  System_Action_o *klass; // x22
  CommonUI_o *v10; // x19

  if ( (byte_418481E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass248_0__CheckNotificationDialog_b__2__, v4);
    byte_418481E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = (Il2CppObject *)this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  coin = this->fields.coin;
  klass = (System_Action_o *)CS___8__locals1[2].klass;
  v10 = (CommonUI_o *)Instance;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      CS___8__locals1,
      Method_TerminalSceneComponent___c__DisplayClass248_0__CheckNotificationDialog_b__2__,
      0LL);
    CS___8__locals1[2].klass = (Il2CppClass *)klass;
    sub_B2C2F8(&CS___8__locals1[2], klass);
  }
  if ( !v10 )
LABEL_8:
    sub_B2C434(Instance, v6);
  CommonUI__CreateServantCoinConfirmDialog(v10, 1, coin, klass, 0LL);
}


void __fastcall TerminalSceneComponent__coFadein_WorldDisp_d__184___ctor(
        TerminalSceneComponent__coFadein_WorldDisp_d__184_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TerminalSceneComponent__coFadein_WorldDisp_d__184__MoveNext(
        TerminalSceneComponent__coFadein_WorldDisp_d__184_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent__coFadein_WorldDisp_d__184_o *v2; // x19
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
  Il2CppObject *v19; // x21
  struct TerminalSceneComponent_o *v20; // x1
  Il2CppObject *endAct; // x1
  bool *p_isAuto_5__2; // x21
  TerminalPramsManager_c *v23; // x0
  __int64 v24; // x1
  TerminalPramsManager_c *v25; // x0
  System_Collections_IEnumerator_o *v26; // x0
  System_Action_c *klass; // x8
  __int64 v28; // x8
  TerminalPramsManager_c *v29; // x0
  System_Collections_IEnumerator_o *v30; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x21
  System_String_o *ShowingFolderBGM; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v36; // x8
  Il2CppObject *v37; // x21
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v39; // x0
  __int64 *v40; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  Il2CppObject *_8__1; // x19
  System_Action_o *v43; // x21
  AvalonSceneManager_c *v44; // x8
  System_Action_o *v45; // x19
  struct TerminalSceneComponent___c__DisplayClass184_0_o *v46; // x9
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4184823 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_DataManager_GetMaster_WarMaster___, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v6);
    sub_B2C35C(&System_GC_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B2C35C(&SoundManager_TypeInfo, v10);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v11);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v12);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass184_0__coFadein_WorldDisp_b__0__, v13);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass184_0__coFadein_WorldDisp_b__1__, v14);
    sub_B2C35C(&Method_TerminalSceneComponent___c__DisplayClass184_0__coFadein_WorldDisp_b__2__, v15);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__184_o *)sub_B2C35C(
                                                                    &TerminalSceneComponent___c__DisplayClass184_0_TypeInfo,
                                                                    v16);
    byte_4184823 = 1;
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
    v19 = (Il2CppObject *)sub_B2C42C(TerminalSceneComponent___c__DisplayClass184_0_TypeInfo);
    System_Object___ctor(v19, 0LL);
    v2->fields.__8__1 = (struct TerminalSceneComponent___c__DisplayClass184_0_o *)v19;
    sub_B2C2F8(&v2->fields.__8__1, v19);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__184_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_128;
    v20 = v2->fields.__4__this;
    *(_QWORD *)&this->fields.__1__state = v20;
    sub_B2C2F8(&this->fields, v20);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__184_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_128;
    endAct = (Il2CppObject *)v2->fields.endAct;
    this->fields.__2__current = endAct;
    sub_B2C2F8(&this->fields.__2__current, endAct);
    v2->fields._isAuto_5__2 = 0;
    p_isAuto_5__2 = &v2->fields._isAuto_5__2;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C9B )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
      byte_4183C9B = 1;
    }
    v23 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v23 = TerminalPramsManager_TypeInfo;
    }
    if ( !v23->static_fields->_IsMapReturnFolder_k__BackingField )
    {
      if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v23);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__184_o *)TerminalPramsManager__IsAuto(0LL);
      *p_isAuto_5__2 = (unsigned __int8)this & 1;
      if ( !_4__this )
        goto LABEL_128;
      TerminalSceneComponent__EndAuto(_4__this, 0LL);
      if ( !byte_4183CA1 )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v24);
        byte_4183CA1 = 1;
      }
      v25 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v25 = TerminalPramsManager_TypeInfo;
      }
      if ( v25->static_fields->_isPlayingQuestPhaseRewardEffect_k__BackingField )
      {
        v26 = TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect(_4__this, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)_4__this, v26, 0LL);
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
    if ( !byte_4183C79 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
      byte_4183C79 = 1;
    }
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__184_o *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__184_o *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE6(this[2].fields.endAct->fields.delegates) )
    {
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_4183C65 )
      {
        sub_B2C35C(&TerminalSceneComponent_TypeInfo, method);
        byte_4183C65 = 1;
      }
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__184_o *)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__184_o *)TerminalSceneComponent_TypeInfo;
      }
      klass = this[2].fields.endAct->klass;
      if ( !klass )
        goto LABEL_128;
      v28 = *(_QWORD *)&klass->_2.static_fields_size;
      if ( !v28 )
        goto LABEL_128;
      this = *(TerminalSceneComponent__coFadein_WorldDisp_d__184_o **)(v28 + 528);
      if ( !this )
        goto LABEL_128;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    }
    if ( !_4__this )
      goto LABEL_128;
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__184_o *)_4__this->fields.mTerminalMap;
    if ( !this )
      goto LABEL_128;
    ScrTerminalMap__SetDisp((ScrTerminalMap_o *)this, 0, 0LL);
    if ( _4__this->fields._IsReq_InitEarthRotateY_k__BackingField )
    {
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__184_o *)_4__this->fields.mEarthCore;
      _4__this->fields._IsReq_InitEarthRotateY_k__BackingField = 0;
      if ( !this )
        goto LABEL_128;
      BaseCore__SetRotateY_PointInitAngle((BaseCore_o *)this, 0LL);
    }
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__184_o *)_4__this->fields.mTerminalList;
    if ( !this )
LABEL_128:
      sub_B2C434(this, method);
    if ( !ScrTerminalListTop__isShowingFolder((ScrTerminalListTop_o *)this, 0LL) )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4183C6F )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
        byte_4183C6F = 1;
      }
      v29 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v29 = TerminalPramsManager_TypeInfo;
      }
      v29->static_fields->_DispState_k__BackingField = 1;
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__184_o *)_4__this->fields.mTitleInfo;
      if ( !this )
        goto LABEL_128;
      TitleInfoControl__SetActiveEventInfo_19524108((TitleInfoControl_o *)this, 1, 16, 0, 0, 0LL, 0LL);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__184_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_128;
      CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, 0, 1, 0LL);
    }
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__184_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_128;
    CommonUI__SetBgCameraActive((CommonUI_o *)this, 1, 0LL);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__184_o *)_4__this->fields.mTerminalMap;
    if ( !this )
      goto LABEL_128;
    ScrTerminalMap__ReleaseMap((ScrTerminalMap_o *)this, 1, 0LL);
    if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
    System_GC__Collect_43492776(0LL);
    if ( v2->fields.isExecuteUnusedAssets )
    {
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__184_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( this )
      {
        AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__184_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          v30 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
          v2->fields.__2__current = (Il2CppObject *)v30;
          p__2__current = &v2->fields.__2__current;
          sub_B2C2F8(p__2__current, v30);
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
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__184_o *)_4__this->fields.mTerminalList;
    if ( !this )
      goto LABEL_128;
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__184_o *)ScrTerminalListTop__get_IsActiveBlankEarth(
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
      v43 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v43,
        _8__1,
        Method_TerminalSceneComponent___c__DisplayClass184_0__coFadein_WorldDisp_b__1__,
        0LL);
      TerminalSceneComponent__StartWindowMessage(_4__this, v43, 0LL);
      return 0;
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v44 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v44 = AvalonSceneManager_TypeInfo;
    }
    v37 = (Il2CppObject *)v2->fields.__8__1;
    DEFAULT_FADE_TIME = v44->static_fields->DEFAULT_FADE_TIME;
    v39 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    v40 = &Method_TerminalSceneComponent___c__DisplayClass184_0__coFadein_WorldDisp_b__2__;
    goto LABEL_122;
  }
  if ( !_4__this )
    goto LABEL_128;
  this = (TerminalSceneComponent__coFadein_WorldDisp_d__184_o *)_4__this->fields.mTerminalList;
  if ( !this )
    goto LABEL_128;
  if ( !ScrTerminalListTop__isShowingFolder((ScrTerminalListTop_o *)this, 0LL) )
    goto LABEL_112;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C67 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4183C67 = 1;
  }
  this = (TerminalSceneComponent__coFadein_WorldDisp_d__184_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__184_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_128;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          HIDWORD(this[2].fields.endAct->klass),
          (const MethodInfo_24E412C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    goto LABEL_112;
  this = (TerminalSceneComponent__coFadein_WorldDisp_d__184_o *)_4__this->fields.mTerminalList;
  if ( !this )
    goto LABEL_128;
  ShowingFolderBGM = ScrTerminalListTop__GetShowingFolderBGM((ScrTerminalListTop_o *)this, 0LL);
  TerminalSceneComponent__playBgm(_4__this, ShowingFolderBGM, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C79 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4183C79 = 1;
  }
  this = (TerminalSceneComponent__coFadein_WorldDisp_d__184_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__184_o *)TerminalPramsManager_TypeInfo;
  }
  if ( BYTE6(this[2].fields.endAct->fields.delegates) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v36 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v36 = AvalonSceneManager_TypeInfo;
    }
    v37 = (Il2CppObject *)v2->fields.__8__1;
    DEFAULT_FADE_TIME = v36->static_fields->DEFAULT_FADE_TIME;
    v39 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    v40 = &Method_TerminalSceneComponent___c__DisplayClass184_0__coFadein_WorldDisp_b__0__;
LABEL_122:
    v45 = v39;
    System_Action___ctor(v39, v37, *v40, 0LL);
    if ( !Instance )
      goto LABEL_128;
    CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v45, 0LL);
    return 0;
  }
  if ( !entity )
    goto LABEL_128;
  v46 = v2->fields.__8__1;
  if ( !v46 )
    goto LABEL_128;
  TerminalSceneComponent__FadeInAndTriggerEventEffects(
    _4__this,
    v2->fields.fadeTime,
    entity->fields.eventId,
    v46->fields.endAct,
    0LL);
  return 0;
}


Il2CppObject *__fastcall TerminalSceneComponent__coFadein_WorldDisp_d__184__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__coFadein_WorldDisp_d__184_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TerminalSceneComponent__coFadein_WorldDisp_d__184__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__coFadein_WorldDisp_d__184_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_TerminalSceneComponent__coFadein_WorldDisp_d__184_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall TerminalSceneComponent__coFadein_WorldDisp_d__184__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__coFadein_WorldDisp_d__184_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TerminalSceneComponent__coFadein_WorldDisp_d__184__System_IDisposable_Dispose(
        TerminalSceneComponent__coFadein_WorldDisp_d__184_o *this,
        const MethodInfo *method)
{
  ;
}