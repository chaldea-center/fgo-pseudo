void __fastcall TerminalSceneComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  float v4; // s4
  float v5; // s5
  float v6; // s6
  float v7; // s7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  TerminalSceneComponent_c *v23; // x8
  struct TerminalSceneComponent_StaticFields *static_fields; // x0
  struct TerminalSceneComponent_StaticFields *v25; // x0
  struct TerminalSceneComponent_StaticFields *v26; // x0
  struct TerminalSceneComponent_StaticFields *v27; // x0
  struct TerminalSceneComponent_StaticFields *v28; // x0
  struct UnityEngine_Color_o v29; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E4EFE & 1) == 0 )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_10297/*"OverwriteCommonBG2"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_10296/*"OverwriteCommonBG1"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_20661/*"masterMissionResetKey"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_13757/*"Terminal/EarthCore/{0:D2}"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_10252/*"OrdealCallChapterPlayState"*/, v20, v21, v22);
    byte_42E4EFE = 1;
  }
  v30.fields.r = 0.2;
  v30.fields.g = 0.25882;
  v30.fields.b = 0.31765;
  v30.fields.a = 1.0;
  v29 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor(v30, v4, v5, v6, v7, (const MethodInfo *)&v29);
  v23 = TerminalSceneComponent_TypeInfo;
  TerminalSceneComponent_TypeInfo->static_fields->DEFAULT_AMBIENT_LIGHT_COLOR = v29;
  static_fields = v23->static_fields;
  static_fields->MASTER_MISSION_RESET_KEY = (struct System_String_o *)StringLiteral_20661/*"masterMissionResetKey"*/;
  sub_B5D560(&static_fields->MASTER_MISSION_RESET_KEY);
  v25 = TerminalSceneComponent_TypeInfo->static_fields;
  v25->EARTH_ASSET_NAME = (struct System_String_o *)StringLiteral_13757/*"Terminal/EarthCore/{0:D2}"*/;
  sub_B5D560(&v25->EARTH_ASSET_NAME);
  v26 = TerminalSceneComponent_TypeInfo->static_fields;
  v26->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY = (struct System_String_o *)StringLiteral_10252/*"OrdealCallChapterPlayState"*/;
  sub_B5D560(&v26->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY);
  v27 = TerminalSceneComponent_TypeInfo->static_fields;
  v27->OVERWRITE_COMMON_BG_TYPE1_KEY = (struct System_String_o *)StringLiteral_10296/*"OverwriteCommonBG1"*/;
  sub_B5D560(&v27->OVERWRITE_COMMON_BG_TYPE1_KEY);
  v28 = TerminalSceneComponent_TypeInfo->static_fields;
  v28->OVERWRITE_COMMON_BG_TYPE2_KEY = (struct System_String_o *)StringLiteral_10297/*"OverwriteCommonBG2"*/;
  sub_B5D560(&v28->OVERWRITE_COMMON_BG_TYPE2_KEY);
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
  *(_OWORD *)&this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x = xmmword_329EF50;
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
  *(_OWORD *)&this->fields.TUTORIAL_MENU_MESSAGE_POS.fields.x = xmmword_329EF60;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  TerminalSceneComponent_c *v8; // x0
  struct TerminalSceneComponent_StaticFields *static_fields; // x0
  UnityEngine_GameObject_o *UiFlag; // x0
  __int64 v11; // x1
  bool v12; // w1

  if ( (byte_42E4EB9 & 1) == 0 )
  {
    sub_B5D5C4(&ServantCommentManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v5, v6, v7);
    byte_42E4EB9 = 1;
  }
  v8 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v8 = TerminalSceneComponent_TypeInfo;
  }
  static_fields = v8->static_fields;
  static_fields->mInstance = this;
  sub_B5D560(static_fields);
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
        v12 = 1;
        goto LABEL_17;
      }
    }
LABEL_18:
    sub_B5D69C(UiFlag, v11);
  }
  UnityEngine_GameObject__SetActive(this->fields.mBgText, 0, 0LL);
  UiFlag = this->fields.mBgGradLeft;
  if ( !UiFlag )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(UiFlag, 0, 0LL);
  UiFlag = this->fields.mBgGradRight;
  if ( !UiFlag )
    goto LABEL_18;
  v12 = 0;
LABEL_17:
  UnityEngine_GameObject__SetActive(UiFlag, v12, 0LL);
}


void __fastcall TerminalSceneComponent__CallAfterTopHome(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  if ( this->fields.isTopLoginBusy )
  {
    this->fields.afterTopLogin = callback;
    sub_B5D560(&this->fields.afterTopLogin);
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
    sub_B5D69C(0LL, item);
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
    sub_B5D69C(0LL, questId);
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
    sub_B5D69C(this, item);
  }
}


void __fastcall TerminalSceneComponent__CallQuestInformationClose(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  QuestInformationComponent_o *mQuestInformation; // x0

  mQuestInformation = this->fields.mQuestInformation;
  if ( !mQuestInformation )
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, isPlaySe);
  QuestInformationComponent__CloseWindow(mQuestInformation, isPlaySe, 0LL);
}


bool __fastcall TerminalSceneComponent__CheckEventDailyPoint(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  TerminalPramsManager_c *v28; // x0
  int64_t BeforeTimeEventDailyPoint_k__BackingField; // x21
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  uint64_t dateData; // x20
  TerminalPramsManager_c *v34; // x0
  int32_t Hour; // w19
  BalanceConfig_c *v36; // x8
  int32_t Year; // w19
  int32_t Month; // w21
  int32_t Day; // w0
  BalanceConfig_c *v40; // x8
  int32_t v41; // w22
  uint64_t v42; // x19
  System_DateTime_o t2; // [xsp+8h] [xbp-48h] BYREF
  uint64_t v45; // [xsp+10h] [xbp-40h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF
  System_DateTime_o v47; // 0:x0.8
  System_DateTime_o v48; // 0:x0.8
  System_DateTime_o v49; // 0:x0.8
  System_DateTime_o v50; // 0:x0.8
  System_DateTime_o v51; // 0:x0.8
  System_DateTime_o v52; // 0:x0.8
  System_DateTime_o v53; // 0:x0.8
  System_DateTime_o v54; // 0:x1.8

  if ( (byte_42E4EE7 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v8, v9, v10);
    sub_B5D5C4(&System_DateTime_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v20, v21, v22);
    byte_42E4EE7 = 1;
  }
  v45 = 0LL;
  entity = 0LL;
  t2.fields.dateData = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_44;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_44:
    sub_B5D69C(Instance, v24);
  if ( EventDetailEntity__IsEventDailyPoint((EventDetailEntity_o *)entity, 0LL) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E5022 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v25, v26, v27);
      byte_42E5022 = 1;
    }
    v28 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v28 = TerminalPramsManager_TypeInfo;
    }
    BeforeTimeEventDailyPoint_k__BackingField = v28->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    dateData = NetworkManager__getDateTime_26077468(BeforeTimeEventDailyPoint_k__BackingField, 0LL).fields.dateData;
    if ( !byte_42E5023 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v30, v31, v32);
      byte_42E5023 = 1;
    }
    v34 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v34 = TerminalPramsManager_TypeInfo;
    }
    if ( BeforeTimeEventDailyPoint_k__BackingField < 1
      || v34->static_fields->_EventDailyPointEventId_k__BackingField != eventId )
    {
      return 1;
    }
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v45 = NetworkManager__getServerDateTime(0LL).fields.dateData;
    v47.fields.dateData = (uint64_t)&v45;
    Hour = System_DateTime__get_Hour(v47, 0LL);
    v36 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v36 = BalanceConfig_TypeInfo;
    }
    if ( Hour < v36->static_fields->EventDailyPointResetAt )
    {
      v48.fields.dateData = (uint64_t)&v45;
      v45 = System_DateTime__AddDays(v48, -1.0, 0LL).fields.dateData;
    }
    v49.fields.dateData = (uint64_t)&v45;
    Year = System_DateTime__get_Year(v49, 0LL);
    v50.fields.dateData = (uint64_t)&v45;
    Month = System_DateTime__get_Month(v50, 0LL);
    v51.fields.dateData = (uint64_t)&v45;
    Day = System_DateTime__get_Day(v51, 0LL);
    v40 = BalanceConfig_TypeInfo;
    v41 = Day;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v40 = BalanceConfig_TypeInfo;
    }
    v52.fields.dateData = (uint64_t)&t2;
    System_DateTime___ctor_15565368(v52, Year, Month, v41, v40->static_fields->EventDailyPointResetAt, 0, 0, 0LL);
    v42 = t2.fields.dateData;
    if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_DateTime_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    }
    v53.fields.dateData = dateData;
    v54.fields.dateData = v42;
    if ( System_DateTime__op_LessThanOrEqual(v53, v54, 0LL) )
      return 1;
  }
  return 0;
}


void __fastcall TerminalSceneComponent__CheckExchangeDialogTheFree(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *String_35648228; // x0
  const MethodInfo *v13; // x5

  if ( (byte_42E4EF3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1667/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_TITLE"*/, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_19127/*"freeShopIds"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_1666/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_DETAIL"*/, v9, v10, v11);
    byte_42E4EF3 = 1;
  }
  String_35648228 = UnityEngine_PlayerPrefs__GetString_35648228((System_String_o *)StringLiteral_19127/*"freeShopIds"*/, 0LL);
  if ( System_String__IsNullOrEmpty(String_35648228, 0LL) )
    ActionExtensions__Call(callback, 0LL);
  else
    TerminalSceneComponent__OpenExchangeDialogue(
      this,
      (System_String_o *)StringLiteral_19127/*"freeShopIds"*/,
      (System_String_o *)StringLiteral_1667/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_TITLE"*/,
      (System_String_o *)StringLiteral_1666/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_DETAIL"*/,
      callback,
      v13);
}


void __fastcall TerminalSceneComponent__CheckExchangeDialogTheReturn(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *String_35648228; // x0
  const MethodInfo *v13; // x5

  if ( (byte_42E4EF4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1669/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_TITLE"*/, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_22107/*"returnRarePriShopIds"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_1668/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_DETAIL"*/, v9, v10, v11);
    byte_42E4EF4 = 1;
  }
  String_35648228 = UnityEngine_PlayerPrefs__GetString_35648228((System_String_o *)StringLiteral_22107/*"returnRarePriShopIds"*/, 0LL);
  if ( System_String__IsNullOrEmpty(String_35648228, 0LL) )
    ActionExtensions__Call(callback, 0LL);
  else
    TerminalSceneComponent__OpenExchangeDialogue(
      this,
      (System_String_o *)StringLiteral_22107/*"returnRarePriShopIds"*/,
      (System_String_o *)StringLiteral_1669/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_TITLE"*/,
      (System_String_o *)StringLiteral_1668/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_DETAIL"*/,
      callback,
      v13);
}


void __fastcall TerminalSceneComponent__CheckLastPlayBgm(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *mTerminalList; // x20
  __int64 v6; // x1
  ScrTerminalListTop_o *v7; // x0

  if ( (byte_42E4EDD & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4EDD = 1;
  }
  mTerminalList = (UnityEngine_Object_o *)this->fields.mTerminalList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mTerminalList, 0LL, 0LL) )
  {
    v7 = this->fields.mTerminalList;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    ScrTerminalListTop__CheckLastPlayBgm(v7, 0LL);
  }
}


void __fastcall TerminalSceneComponent__CheckMasterMissionReset(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  TerminalSceneComponent___c__DisplayClass251_0_o *v39; // x19
  ScrPlayerStatus_o *mPlayerStatus; // x0
  __int64 v41; // x1
  System_Action_o **p_callback; // x20
  TerminalSceneComponent___c__DisplayClass251_0_Fields *p_fields; // x21
  TerminalSceneComponent_c *v44; // x0
  System_String_o *String; // x0
  int64_t v46; // x0
  CommonUI_o *Instance; // x20
  System_String_o *v48; // x21
  System_String_o *v49; // x22
  System_String_o *v50; // x23
  CommonConfirmDialog_ClickDelegate_o *v51; // x24
  TerminalSceneComponent_c *v52; // x0
  struct TerminalSceneComponent_StaticFields *static_fields; // x8
  int64_t v54; // x0
  System_String_o *MASTER_MISSION_RESET_KEY; // x19
  System_String_o *v56; // x0

  if ( (byte_42E4EF7 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass251_0__CheckMasterMissionReset_b__0__, v18, v19, v20);
    sub_B5D5C4(&TerminalSceneComponent___c__DisplayClass251_0_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_8937/*"MST_MISSION_CHANGE_MSG"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_8936/*"MST_MISSION_CHANGE_DECIDE"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_1/*""*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_973/*"0"*/, v36, v37, v38);
    byte_42E4EF7 = 1;
  }
  v39 = (TerminalSceneComponent___c__DisplayClass251_0_o *)sub_B5D694(TerminalSceneComponent___c__DisplayClass251_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass251_0___ctor(v39, 0LL);
  if ( !v39 )
    goto LABEL_24;
  v39->fields.__4__this = this;
  sub_B5D560(&v39->fields.__4__this);
  v39->fields.callback = callback;
  p_callback = &v39->fields.callback;
  sub_B5D560(&v39->fields.callback);
  mPlayerStatus = this->fields.mPlayerStatus;
  if ( !mPlayerStatus )
    goto LABEL_24;
  v39->fields.time = ScrPlayerStatus__GetMstMissionStarts(mPlayerStatus, 0LL);
  p_fields = &v39->fields;
  v44 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v44 = TerminalSceneComponent_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             v44->static_fields->MASTER_MISSION_RESET_KEY,
             (System_String_o *)StringLiteral_973/*"0"*/,
             0LL);
  v46 = System_Int64__Parse(String, 0LL);
  if ( p_fields->time )
  {
    if ( v46 )
    {
      if ( v46 != p_fields->time )
      {
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v48 = LocalizationManager__Get((System_String_o *)StringLiteral_8937/*"MST_MISSION_CHANGE_MSG"*/, 0LL);
        v49 = LocalizationManager__Get((System_String_o *)StringLiteral_8936/*"MST_MISSION_CHANGE_DECIDE"*/, 0LL);
        v50 = LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
        v51 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v51,
          (Il2CppObject *)v39,
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
            v48,
            v49,
            v50,
            v51,
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
LABEL_24:
        sub_B5D69C(mPlayerStatus, v41);
      }
    }
    else
    {
      v52 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v52 = TerminalSceneComponent_TypeInfo;
      }
      static_fields = v52->static_fields;
      v54 = (int64_t)&v39->fields;
      MASTER_MISSION_RESET_KEY = static_fields->MASTER_MISSION_RESET_KEY;
      v56 = System_Int64__ToString(v54, 0LL);
      UnityEngine_PlayerPrefs__SetString(MASTER_MISSION_RESET_KEY, v56, 0LL);
    }
  }
  ActionExtensions__Call(*p_callback, 0LL);
}


void __fastcall TerminalSceneComponent__CheckNotificationDialog(
        TerminalSceneComponent_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  TerminalSceneComponent___c__DisplayClass252_0_o *v59; // x19
  DataManager_o *Instance; // x0
  __int64 v61; // x1
  System_Action_o **p_callBack; // x20
  BattleResultBondsComponent_c *v63; // x0
  BattleResultBondsComponent_c *v64; // x0
  Il2CppObject *String_35648228; // x21
  UserPresentBoxWindow_resData_array *v66; // x0
  UserPresentBoxWindow_resData_array *v67; // x22
  int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v69; // x23
  __int64 v70; // x25
  UserPresentBoxWindow_resData_o *v71; // x8
  BattleResultBondsComponent_c *v72; // x0
  BattleResultBondsComponent_c *v73; // x0
  System_Action_o *_9__0; // x20
  EventServantEntity_o *v75; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v76; // x22
  TerminalSceneComponent___c__DisplayClass252_1_o *v77; // x22
  __int64 v78; // x19
  GetSvtCoin_o *v79; // x20
  WarEntity_o *v80; // x8
  System_String_o *v81; // x19
  CommonUI_o *v82; // x22
  __int64 v83; // x0
  __int64 v84; // x0
  WarEntity_o *v85; // [xsp+38h] [xbp-58h] BYREF
  UserServantEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_42E4EF8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callBack, (_DWORD)method, v3);
    sub_B5D5C4(&BattleResultBondsComponent_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMaster_SvtCoinMaster___, v11, v12, v13);
    sub_B5D5C4(&DataManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v17, v18, v19);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v20, v21, v22);
    sub_B5D5C4(&GetSvtCoin___TypeInfo, v23, v24, v25);
    sub_B5D5C4(&GetSvtCoin_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_JsonManager_DeserializeArray_GetSvts___, v29, v30, v31);
    sub_B5D5C4(&JsonManager_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v38, v39, v40);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v41, v42, v43);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass252_0__CheckNotificationDialog_b__0__, v44, v45, v46);
    sub_B5D5C4(&TerminalSceneComponent___c__DisplayClass252_0_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass252_1__CheckNotificationDialog_b__1__, v50, v51, v52);
    sub_B5D5C4(&TerminalSceneComponent___c__DisplayClass252_1_TypeInfo, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_12586/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, v56, v57, v58);
    byte_42E4EF8 = 1;
  }
  entity = 0LL;
  v85 = 0LL;
  v59 = (TerminalSceneComponent___c__DisplayClass252_0_o *)sub_B5D694(TerminalSceneComponent___c__DisplayClass252_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass252_0___ctor(v59, 0LL);
  if ( !v59 )
    goto LABEL_61;
  v59->fields.callBack = callBack;
  p_callBack = &v59->fields.callBack;
  sub_B5D560(&v59->fields);
  v63 = BattleResultBondsComponent_TypeInfo;
  if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
    v63 = BattleResultBondsComponent_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v63->static_fields->GET_EXIST_SVT_KEY, 0LL) )
  {
    v64 = BattleResultBondsComponent_TypeInfo;
    if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
      v64 = BattleResultBondsComponent_TypeInfo;
    }
    String_35648228 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_35648228(
                                        v64->static_fields->GET_EXIST_SVT_KEY,
                                        0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v66 = JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
            String_35648228,
            (const MethodInfo_1E5E1D0 *)Method_JsonManager_DeserializeArray_GetSvts___);
    if ( v66 )
    {
      v67 = v66;
      if ( *(_QWORD *)&v66->max_length )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_61;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
        max_length = v67->max_length;
        if ( max_length >= 1 )
        {
          v69 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
          v70 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v70 >= max_length )
              goto LABEL_62;
            v71 = v67->m_Items[v70];
            if ( !v71 || !v69 )
              goto LABEL_61;
            Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                          v69,
                                          &entity,
                                          *(_QWORD *)&v71->fields.overflowType,
                                          (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
            if ( (_DWORD)v70 == v67->max_length - 1 )
            {
              v72 = BattleResultBondsComponent_TypeInfo;
              if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
                v72 = BattleResultBondsComponent_TypeInfo;
              }
              UnityEngine_PlayerPrefs__DeleteKey(v72->static_fields->GET_EXIST_SVT_KEY, 0LL);
              ActionExtensions__Call(*p_callBack, 0LL);
            }
            max_length = v67->max_length;
            if ( (int)++v70 >= max_length )
              goto LABEL_33;
          }
          _9__0 = v59->fields.__9__0;
          v75 = (EventServantEntity_o *)Instance;
          if ( !_9__0 )
          {
            _9__0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(
              _9__0,
              (Il2CppObject *)v59,
              Method_TerminalSceneComponent___c__DisplayClass252_0__CheckNotificationDialog_b__0__,
              0LL);
            v59->fields.__9__0 = _9__0;
            sub_B5D560(&v59->fields.__9__0);
          }
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SvtCoinMaster___);
          if ( entity )
          {
            v76 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
            Instance = (DataManager_o *)UserServantEntity__getSvtId(entity, 0LL);
            if ( v76 )
            {
              Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                            v76,
                                            &v85,
                                            (int32_t)Instance,
                                            (const MethodInfo_23FAE6C *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !v85 )
                  goto LABEL_61;
                if ( *(&v85->fields.id + 1) >= 1 )
                {
                  v77 = (TerminalSceneComponent___c__DisplayClass252_1_o *)sub_B5D694(TerminalSceneComponent___c__DisplayClass252_1_TypeInfo);
                  TerminalSceneComponent___c__DisplayClass252_1___ctor(v77, 0LL);
                  if ( !v77 )
                    goto LABEL_61;
                  v77->fields.CS___8__locals1 = v59;
                  sub_B5D560(&v77->fields.CS___8__locals1);
                  v78 = sub_B5D5DC(GetSvtCoin___TypeInfo, 1LL);
                  v79 = (GetSvtCoin_o *)sub_B5D694(GetSvtCoin_TypeInfo);
                  GetSvtCoin___ctor(v79, 0LL);
                  v80 = v85;
                  if ( !v85 )
                    goto LABEL_61;
                  if ( !v79 )
                    goto LABEL_61;
                  v79->fields.svtId = v85->fields.id;
                  v79->fields.num = *(&v80->fields.id + 1);
                  v79->fields.itemId = (int32_t)v80->fields.age;
                  if ( !v78 )
                    goto LABEL_61;
                  Instance = (DataManager_o *)sub_B5D684(v79, *(_QWORD *)(*(_QWORD *)v78 + 64LL));
                  if ( !Instance )
                  {
                    v84 = sub_B5D6BC();
                    sub_B5D668(v84, 0LL);
                  }
                  if ( !*(_DWORD *)(v78 + 24) )
                  {
LABEL_62:
                    v83 = sub_B5D6C8(Instance);
                    sub_B5D668(v83, 0LL);
                  }
                  *(_QWORD *)(v78 + 32) = v79;
                  sub_B5D560(v78 + 32);
                  v77->fields.coin = (struct GetSvtCoin_array *)v78;
                  sub_B5D560(&v77->fields);
                  _9__0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                  System_Action___ctor(
                    _9__0,
                    (Il2CppObject *)v77,
                    Method_TerminalSceneComponent___c__DisplayClass252_1__CheckNotificationDialog_b__1__,
                    0LL);
                }
              }
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v81 = LocalizationManager__Get((System_String_o *)StringLiteral_12586/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, 0LL);
              v82 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              Instance = (DataManager_o *)EventServantEntity__GetGetMessage(v75, 0LL);
              if ( v82 )
              {
                CommonUI__OpenNotificationDialog(
                  v82,
                  v81,
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
          sub_B5D69C(Instance, v61);
        }
      }
    }
LABEL_33:
    v73 = BattleResultBondsComponent_TypeInfo;
    if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
      v73 = BattleResultBondsComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__DeleteKey(v73->static_fields->GET_EXIST_SVT_KEY, 0LL);
  }
  ActionExtensions__Call(*p_callBack, 0LL);
}


void __fastcall TerminalSceneComponent__CheckOpenCampaignDirectBonus(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  TerminalSceneComponent___c__DisplayClass242_0_o *v14; // x20
  ScrTerminalListTop_o *mTerminalList; // x0
  __int64 v16; // x1
  System_Action_o *v17; // x22
  int v18; // w22
  ScrTerminalListTop_o *v19; // x23
  bool IsBlankEarthAction; // w25
  System_Action_o *v21; // x24
  const MethodInfo *v22; // x2
  System_Action_o *endAction; // x0
  System_Collections_IEnumerator_o *v24; // x0

  if ( (byte_42E4EF0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass242_0__CheckOpenCampaignDirectBonus_b__0__, v5, v6, v7);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass242_0__CheckOpenCampaignDirectBonus_b__1__, v8, v9, v10);
    sub_B5D5C4(&TerminalSceneComponent___c__DisplayClass242_0_TypeInfo, v11, v12, v13);
    byte_42E4EF0 = 1;
  }
  v14 = (TerminalSceneComponent___c__DisplayClass242_0_o *)sub_B5D694(TerminalSceneComponent___c__DisplayClass242_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass242_0___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_19;
  v14->fields.__4__this = this;
  sub_B5D560(&v14->fields);
  this->fields._IsPlayingCampaignDirectBonus_k__BackingField = 1;
  v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v14,
    Method_TerminalSceneComponent___c__DisplayClass242_0__CheckOpenCampaignDirectBonus_b__0__,
    0LL);
  v14->fields.endAction = v17;
  sub_B5D560(&v14->fields.endAction);
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList
    || (mTerminalList = (ScrTerminalListTop_o *)ScrTerminalListTop__CheckTerminalTopEffect(mTerminalList, 0LL),
        !this->fields.mTerminalList)
    || (v18 = (int)mTerminalList,
        mTerminalList = (ScrTerminalListTop_o *)ScrTerminalListTop__GetCurrentLoginEntity(
                                                  this->fields.mTerminalList,
                                                  0LL),
        !this->fields.mTerminalList) )
  {
LABEL_19:
    sub_B5D69C(mTerminalList, v16);
  }
  v19 = mTerminalList;
  IsBlankEarthAction = ScrTerminalListTop__IsBlankEarthAction(this->fields.mTerminalList, 0LL);
  v21 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v14,
    Method_TerminalSceneComponent___c__DisplayClass242_0__CheckOpenCampaignDirectBonus_b__1__,
    0LL);
  if ( v18 <= 0 && !v19 && !IsBlankEarthAction )
  {
    endAction = v21;
LABEL_11:
    ActionExtensions__Call(endAction, 0LL);
    return;
  }
  if ( v19 || v18 < 1 )
  {
    if ( !IsBlankEarthAction )
    {
      endAction = v14->fields.endAction;
      goto LABEL_11;
    }
    v24 = TerminalSceneComponent__CoWaitBlankEerthActionEnd(this, v21, v22);
  }
  else
  {
    v24 = TerminalSceneComponent__CoWaitTerminalTopEffectEnd(this, v21, v22);
  }
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v24, 0LL);
}


bool __fastcall TerminalSceneComponent__CheckPlayChapterStart(
        TerminalSceneComponent_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  QuestTree_o *v17; // x0
  __int64 v18; // x1
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v20; // x20
  int32_t StartType; // w0
  int32_t targetId; // w19

  if ( (byte_42E4EE9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, warId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v14, v15, v16);
    byte_42E4EE9 = 1;
  }
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v17 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !v17 )
    goto LABEL_22;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(v17, warId, 0LL);
  if ( !WarEntityByWarID )
    return (char)WarEntityByWarID;
  v20 = WarEntityByWarID;
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
  targetId = v20->fields.targetId;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v17 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !v17 )
LABEL_22:
    sub_B5D69C(v17, v18);
  if ( !clsQuestCheck__IsQuestClear((clsQuestCheck_o *)v17, targetId, 0, 0LL) )
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  int v31; // w1
  char v32; // w2
  __int64 v33; // x3
  int v34; // w1
  char v35; // w2
  __int64 v36; // x3
  int v37; // w1
  char v38; // w2
  __int64 v39; // x3
  int v40; // w1
  char v41; // w2
  __int64 v42; // x3
  int v43; // w1
  char v44; // w2
  __int64 v45; // x3
  int v46; // w1
  char v47; // w2
  __int64 v48; // x3
  int v49; // w1
  char v50; // w2
  __int64 v51; // x3
  int v52; // w1
  char v53; // w2
  __int64 v54; // x3
  int v55; // w1
  char v56; // w2
  __int64 v57; // x3
  int v58; // w1
  char v59; // w2
  __int64 v60; // x3
  int v61; // w1
  char v62; // w2
  __int64 v63; // x3
  int v64; // w1
  char v65; // w2
  __int64 v66; // x3
  int v67; // w1
  char v68; // w2
  __int64 v69; // x3
  int v70; // w1
  char v71; // w2
  __int64 v72; // x3
  int v73; // w1
  char v74; // w2
  __int64 v75; // x3
  int v76; // w1
  char v77; // w2
  __int64 v78; // x3
  int v79; // w1
  char v80; // w2
  __int64 v81; // x3
  int v82; // w1
  char v83; // w2
  __int64 v84; // x3
  TerminalSceneComponent___c__DisplayClass241_0_o *v85; // x20
  CommonUI_o *Instance; // x0
  __int64 v87; // x1
  int v88; // w1
  char v89; // w2
  __int64 v90; // x3
  CommonUI_CampaignDirectBonusData_array *CampaignDirectBonus; // x21
  TerminalPramsManager_c *v92; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  __int64 v94; // x0
  Il2CppObject *mTerminalList; // x23
  System_Action_Action__array *v96; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v97; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v98; // x22
  Il2CppObject *v99; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v100; // x22
  Il2CppObject *v101; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v102; // x22
  Il2CppObject *v103; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v104; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v105; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v106; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v107; // x22
  TerminalSceneComponent___c_c *v108; // x0
  struct TerminalSceneComponent___c_StaticFields *v109; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__241_2; // x22
  Il2CppObject *v111; // x23
  struct TerminalSceneComponent___c_StaticFields *v112; // x0
  System_Action_Action__o *v113; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v114; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v115; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v116; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v117; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v118; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v119; // x22
  ActionChain_o *v120; // x19
  System_Action_array *v121; // x21
  System_Action_o *v122; // x22
  __int64 v123; // x0
  __int64 v124; // x0

  if ( (byte_42E4EEF & 1) == 0 )
  {
    sub_B5D5C4(&ActionChain_TypeInfo, (_DWORD)afterChain, checkTutorialEnded, method);
    sub_B5D5C4(&System_Action___TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_Action_Action____TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Action_Action___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Action_Action__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&System_Action_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_CommonUI_StartLoginMessages__, v22, v23, v24);
    sub_B5D5C4(&Method_CommonUI_StartServantEventJoinLeaveNotification__, v25, v26, v27);
    sub_B5D5C4(&Method_ScrTerminalListTop_ShowTerminalMessagesDialogue__, v28, v29, v30);
    sub_B5D5C4(&Method_ScrTerminalListTop_StartShowWarClearReward__, v31, v32, v33);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v34, v35, v36);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&Method_TerminalSceneComponent_CheckExchangeDialogTheFree__, v40, v41, v42);
    sub_B5D5C4(&Method_TerminalSceneComponent_CheckExchangeDialogTheReturn__, v43, v44, v45);
    sub_B5D5C4(&Method_TerminalSceneComponent_CheckMasterMissionReset__, v46, v47, v48);
    sub_B5D5C4(&Method_TerminalSceneComponent_CheckNotificationDialog__, v49, v50, v51);
    sub_B5D5C4(&Method_TerminalSceneComponent_CheckSaveRouteSelect__, v52, v53, v54);
    sub_B5D5C4(&Method_TerminalSceneComponent_CheckSpecialAscensionTutorial__, v55, v56, v57);
    sub_B5D5C4(&Method_TerminalSceneComponent_CheckTutorialOnTerminalAfterFreeExchangeDialog__, v58, v59, v60);
    sub_B5D5C4(&Method_TerminalSceneComponent_CheckTutorialOnTerminal__, v61, v62, v63);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v64, v65, v66);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__241_2__, v67, v68, v69);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass241_0__CheckRewardPopupChain_b__0__, v70, v71, v72);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass241_0__CheckRewardPopupChain_b__1__, v73, v74, v75);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass241_0__CheckRewardPopupChain_b__3__, v76, v77, v78);
    sub_B5D5C4(&TerminalSceneComponent___c__DisplayClass241_0_TypeInfo, v79, v80, v81);
    sub_B5D5C4(&TerminalSceneComponent___c_TypeInfo, v82, v83, v84);
    byte_42E4EEF = 1;
  }
  v85 = (TerminalSceneComponent___c__DisplayClass241_0_o *)sub_B5D694(TerminalSceneComponent___c__DisplayClass241_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass241_0___ctor(v85, 0LL);
  if ( !v85 )
    goto LABEL_89;
  v85->fields.__4__this = this;
  sub_B5D560(&v85->fields);
  v85->fields.afterChain = afterChain;
  sub_B5D560(&v85->fields.afterChain);
  if ( checkTutorialEnded )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_29295864(102, 0LL) )
    {
      ActionExtensions__Call(v85->fields.afterChain, 0LL);
      goto LABEL_82;
    }
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  if ( CommonUI__get_CampaignDirectBonus(Instance, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_89;
    CampaignDirectBonus = CommonUI__get_CampaignDirectBonus(Instance, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E5024 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v88, v89, v90);
      byte_42E5024 = 1;
    }
    v92 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v92 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v92->static_fields;
    static_fields->_CampaignDirectBonus_k__BackingField = CampaignDirectBonus;
    sub_B5D560(&static_fields->_CampaignDirectBonus_k__BackingField);
    TerminalPramsManager__CampaignDirectBonus_SaveData(0LL);
  }
  v94 = sub_B5D5DC(System_Action_Action____TypeInfo, 15LL);
  mTerminalList = (Il2CppObject *)this->fields.mTerminalList;
  v96 = (System_Action_Action__array *)v94;
  v97 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v97,
    mTerminalList,
    Method_ScrTerminalListTop_StartShowWarClearReward__,
    (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
  if ( !v96 )
LABEL_89:
    sub_B5D69C(Instance, v87);
  if ( v97 )
  {
    Instance = (CommonUI_o *)sub_B5D684(v97, v96->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_88;
  }
  if ( !v96->max_length )
    goto LABEL_87;
  v96->m_Items[0] = (System_Action_Action__o *)v97;
  sub_B5D560(v96->m_Items);
  v98 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v98,
    (Il2CppObject *)v85,
    Method_TerminalSceneComponent___c__DisplayClass241_0__CheckRewardPopupChain_b__0__,
    (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
  if ( v98 )
  {
    Instance = (CommonUI_o *)sub_B5D684(v98, v96->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_88;
  }
  if ( v96->max_length <= 1 )
    goto LABEL_87;
  v96->m_Items[1] = (System_Action_Action__o *)v98;
  sub_B5D560(&v96->m_Items[1]);
  v99 = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v100 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v100,
    v99,
    Method_CommonUI_StartServantEventJoinLeaveNotification__,
    (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
  if ( v100 )
  {
    Instance = (CommonUI_o *)sub_B5D684(v100, v96->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_88;
  }
  if ( v96->max_length <= 2 )
    goto LABEL_87;
  v96->m_Items[2] = (System_Action_Action__o *)v100;
  sub_B5D560(&v96->m_Items[2]);
  v101 = (Il2CppObject *)this->fields.mTerminalList;
  v102 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v102,
    v101,
    Method_ScrTerminalListTop_ShowTerminalMessagesDialogue__,
    (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
  if ( v102 )
  {
    Instance = (CommonUI_o *)sub_B5D684(v102, v96->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_88;
  }
  if ( v96->max_length <= 3 )
    goto LABEL_87;
  v96->m_Items[3] = (System_Action_Action__o *)v102;
  sub_B5D560(&v96->m_Items[3]);
  v103 = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v104 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v104,
    v103,
    Method_CommonUI_StartLoginMessages__,
    (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
  if ( v104 )
  {
    Instance = (CommonUI_o *)sub_B5D684(v104, v96->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_88;
  }
  if ( v96->max_length <= 4 )
    goto LABEL_87;
  v96->m_Items[4] = (System_Action_Action__o *)v104;
  sub_B5D560(&v96->m_Items[4]);
  v105 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v105,
    (Il2CppObject *)v85,
    Method_TerminalSceneComponent___c__DisplayClass241_0__CheckRewardPopupChain_b__1__,
    (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
  if ( v105 )
  {
    Instance = (CommonUI_o *)sub_B5D684(v105, v96->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_88;
  }
  if ( v96->max_length <= 5 )
    goto LABEL_87;
  v96->m_Items[5] = (System_Action_Action__o *)v105;
  sub_B5D560(&v96->m_Items[5]);
  v106 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v106,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckSpecialAscensionTutorial__,
    (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
  if ( v106 )
  {
    Instance = (CommonUI_o *)sub_B5D684(v106, v96->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_88;
  }
  if ( v96->max_length <= 6 )
    goto LABEL_87;
  v96->m_Items[6] = (System_Action_Action__o *)v106;
  sub_B5D560(&v96->m_Items[6]);
  v107 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v107,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckTutorialOnTerminal__,
    (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
  if ( v107 )
  {
    Instance = (CommonUI_o *)sub_B5D684(v107, v96->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_88;
  }
  if ( v96->max_length <= 7 )
    goto LABEL_87;
  v96->m_Items[7] = (System_Action_Action__o *)v107;
  sub_B5D560(&v96->m_Items[7]);
  v108 = TerminalSceneComponent___c_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v108 = TerminalSceneComponent___c_TypeInfo;
  }
  v109 = v108->static_fields;
  _9__241_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v109->__9__241_2;
  if ( _9__241_2 )
    goto LABEL_54;
  if ( (BYTE3(v108->vtable._0_Equals.methodPtr) & 4) != 0 && !v108->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v108);
    v109 = TerminalSceneComponent___c_TypeInfo->static_fields;
  }
  v111 = (Il2CppObject *)v109->__9;
  _9__241_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    _9__241_2,
    v111,
    Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__241_2__,
    (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
  v112 = TerminalSceneComponent___c_TypeInfo->static_fields;
  v112->__9__241_2 = (struct System_Action_Action__o *)_9__241_2;
  sub_B5D560(&v112->__9__241_2);
  if ( _9__241_2 )
  {
LABEL_54:
    Instance = (CommonUI_o *)sub_B5D684(_9__241_2, v96->obj.klass->_1.element_class);
    v113 = (System_Action_Action__o *)_9__241_2;
    if ( !Instance )
      goto LABEL_88;
  }
  else
  {
    v113 = 0LL;
  }
  if ( v96->max_length <= 8 )
    goto LABEL_87;
  v96->m_Items[8] = v113;
  sub_B5D560(&v96->m_Items[8]);
  v114 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v114,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckNotificationDialog__,
    (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
  if ( v114 )
  {
    Instance = (CommonUI_o *)sub_B5D684(v114, v96->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_88;
  }
  if ( v96->max_length <= 9 )
    goto LABEL_87;
  v96->m_Items[9] = (System_Action_Action__o *)v114;
  sub_B5D560(&v96->m_Items[9]);
  v115 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v115,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckMasterMissionReset__,
    (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
  if ( v115 )
  {
    Instance = (CommonUI_o *)sub_B5D684(v115, v96->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_88;
  }
  if ( v96->max_length <= 0xA )
    goto LABEL_87;
  v96->m_Items[10] = (System_Action_Action__o *)v115;
  sub_B5D560(&v96->m_Items[10]);
  v116 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v116,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckSaveRouteSelect__,
    (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
  if ( v116 )
  {
    Instance = (CommonUI_o *)sub_B5D684(v116, v96->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_88;
  }
  if ( v96->max_length <= 0xB )
    goto LABEL_87;
  v96->m_Items[11] = (System_Action_Action__o *)v116;
  sub_B5D560(&v96->m_Items[11]);
  v117 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v117,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckExchangeDialogTheFree__,
    (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
  if ( v117 )
  {
    Instance = (CommonUI_o *)sub_B5D684(v117, v96->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_88;
  }
  if ( v96->max_length <= 0xC )
    goto LABEL_87;
  v96->m_Items[12] = (System_Action_Action__o *)v117;
  sub_B5D560(&v96->m_Items[12]);
  v118 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v118,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckExchangeDialogTheReturn__,
    (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
  if ( v118 )
  {
    Instance = (CommonUI_o *)sub_B5D684(v118, v96->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_88;
  }
  if ( v96->max_length <= 0xD )
    goto LABEL_87;
  v96->m_Items[13] = (System_Action_Action__o *)v118;
  sub_B5D560(&v96->m_Items[13]);
  v119 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v119,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckTutorialOnTerminalAfterFreeExchangeDialog__,
    (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
  if ( v119 )
  {
    Instance = (CommonUI_o *)sub_B5D684(v119, v96->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_88;
  }
  if ( v96->max_length <= 0xE )
    goto LABEL_87;
  v96->m_Items[14] = (System_Action_Action__o *)v119;
  sub_B5D560(&v96->m_Items[14]);
  v120 = (ActionChain_o *)sub_B5D694(ActionChain_TypeInfo);
  ActionChain___ctor_21252180(v120, v96, 0LL);
  v121 = (System_Action_array *)sub_B5D5DC(System_Action___TypeInfo, 1LL);
  v122 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v122,
    (Il2CppObject *)v85,
    Method_TerminalSceneComponent___c__DisplayClass241_0__CheckRewardPopupChain_b__3__,
    0LL);
  if ( !v121 )
    goto LABEL_89;
  if ( v122 )
  {
    Instance = (CommonUI_o *)sub_B5D684(v122, v121->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_88:
      v124 = sub_B5D6BC();
      sub_B5D668(v124, 0LL);
    }
  }
  if ( !v121->max_length )
  {
LABEL_87:
    v123 = sub_B5D6C8(Instance);
    sub_B5D668(v123, 0LL);
  }
  v121->m_Items[0] = v122;
  sub_B5D560(v121->m_Items);
  if ( !v120 )
    goto LABEL_89;
  Instance = (CommonUI_o *)ChainableActionBase__Final((ChainableActionBase_o *)v120, v121, 0LL);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  TerminalSceneComponent___c__DisplayClass249_0_o *v26; // x20
  DataManager_o *Instance; // x0
  __int64 v28; // x1
  NetworkManager_ResultCallbackFunc_o *v29; // x19
  System_Int32_array *routes; // [xsp+8h] [xbp-28h] BYREF
  int32_t phase; // [xsp+18h] [xbp-18h] BYREF
  int32_t questId; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_42E4EF6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_BattleRouteSelectRequest___, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&ScriptManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass249_0__CheckSaveRouteSelect_b__0__, v20, v21, v22);
    sub_B5D5C4(&TerminalSceneComponent___c__DisplayClass249_0_TypeInfo, v23, v24, v25);
    byte_42E4EF6 = 1;
  }
  questId = 0;
  phase = 0;
  routes = 0LL;
  v26 = (TerminalSceneComponent___c__DisplayClass249_0_o *)sub_B5D694(TerminalSceneComponent___c__DisplayClass249_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass249_0___ctor(v26, 0LL);
  if ( !v26 )
    goto LABEL_22;
  v26->fields.callback = callback;
  sub_B5D560(&v26->fields);
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    if ( !Instance )
      goto LABEL_22;
    if ( QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, phase, 0LL) )
    {
      v29 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v29,
        (Il2CppObject *)v26,
        Method_TerminalSceneComponent___c__DisplayClass249_0__CheckSaveRouteSelect_b__0__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = (DataManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                    v29,
                                    (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
      if ( Instance )
      {
        BattleRouteSelectRequest__beginRequest((BattleRouteSelectRequest_o *)Instance, questId, phase, routes, 0LL);
        return;
      }
LABEL_22:
      sub_B5D69C(Instance, v28);
    }
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__ClearSelectRouteArray(0LL);
    ScriptManager__ClearSelectRouteArrayInCollection(0LL);
  }
  ActionExtensions__Call(v26->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent__CheckSpecialAscensionTutorial(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  TerminalSceneComponent_o *v5; // x20
  struct ScrTerminalMap_o *mTerminalMap; // x8

  v5 = this;
  if ( (byte_42E4EF9 & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_B5D5C4(&CombineRootComponent_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    byte_42E4EF9 = 1;
  }
  if ( !v5->fields.isTutorialAfter )
  {
    mTerminalMap = v5->fields.mTerminalMap;
    if ( !mTerminalMap || (this = (TerminalSceneComponent_o *)mTerminalMap->fields.mapButtonGrid) == 0LL )
      sub_B5D69C(this, callback);
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
    v5->fields.isTutorialAfter = 0;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  CommonUI_o *Instance; // x0
  __int64 v39; // x1
  bool v40; // w20
  TerminalPramsManager_c *v41; // x0
  const MethodInfo *v42; // x2
  __int64 v43; // x3
  int32_t FirstWarId; // w21
  TerminalPramsManager_c *v45; // x0
  TerminalPramsManager_c *v46; // x0
  clsQuestCheck_o *v47; // x0
  clsQuestCheck_o *v48; // x21
  int32_t v49; // w0
  int32_t v50; // w0
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int32_t v54; // w0
  int32_t v55; // w0
  int32_t v56; // w8
  int v57; // w2
  __int64 v58; // x3
  int32_t Value; // w21
  TerminalPramsManager_c *v60; // x0
  TerminalPramsManager_c *v62; // x0
  int32_t v63; // w1

  if ( (byte_42E4EE6 & 1) == 0 )
  {
    sub_B5D5C4(&OpeningMovieData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_13684/*"TUTORIAL_QUEST_ID1"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_13685/*"TUTORIAL_QUEST_ID2"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_13686/*"TUTORIAL_QUEST_ID3"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_13687/*"TUTORIAL_QUEST_ID4"*/, v32, v33, v34);
    byte_42E4EE6 = 1;
  }
  this->fields.mTutorialKind = 0;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_29295864(102, 0LL) )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( TutorialFlag__GetProgress(0LL) == 4 )
      return 0;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_B5D69C(Instance, v39);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B48 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v35, v36, v37);
    byte_42E4B48 = 1;
  }
  v41 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v41 = TerminalPramsManager_TypeInfo;
  }
  this->fields.mIsStart_LoginBonusWhiteBg = !v41->static_fields->_IsAutoResume_k__BackingField;
  if ( !byte_42E4B29 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v35, v36, v37);
    v41 = TerminalPramsManager_TypeInfo;
    byte_42E4B29 = 1;
  }
  if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v41);
    v41 = TerminalPramsManager_TypeInfo;
  }
  v41->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_42E4B28 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v35, v36, v37);
    v41 = TerminalPramsManager_TypeInfo;
    byte_42E4B28 = 1;
  }
  if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v41);
    v41 = TerminalPramsManager_TypeInfo;
  }
  v41->static_fields->_DispState_k__BackingField = 2;
  if ( (BYTE3(OpeningMovieData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OpeningMovieData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo);
  }
  FirstWarId = OpeningMovieData__GetFirstWarId(0LL);
  if ( !byte_42E4B22 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v39, (_DWORD)v42, v43);
    byte_42E4B22 = 1;
  }
  v45 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v45 = TerminalPramsManager_TypeInfo;
  }
  v45->static_fields->_WarId_k__BackingField = FirstWarId;
  if ( !byte_42E4B55 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v39, (_DWORD)v42, v43);
    byte_42E4B55 = 1;
  }
  v46 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v46 = TerminalPramsManager_TypeInfo;
  }
  v46->static_fields->_SpotId_k__BackingField = -1;
  Instance = (CommonUI_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_104;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, v42);
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
  v47 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  this->fields.mTutorialKind = 5;
  v48 = v47;
  Instance = (CommonUI_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_13684/*"TUTORIAL_QUEST_ID1"*/, 0LL);
  if ( !v48 )
    goto LABEL_104;
  if ( !clsQuestCheck__IsQuestClear(v48, (int32_t)Instance, 0, 0LL) )
  {
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_13684/*"TUTORIAL_QUEST_ID1"*/, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B24 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v39, v57, v58);
      byte_42E4B24 = 1;
    }
    v60 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v60 = TerminalPramsManager_TypeInfo;
    }
    v60->static_fields->_QuestId_k__BackingField = Value;
    Instance = (CommonUI_o *)this->fields.mTerminalList;
    if ( Instance )
    {
      ScrTerminalListTop__SelectedQuest((ScrTerminalListTop_o *)Instance, 0LL);
      return 1;
    }
    goto LABEL_104;
  }
  v49 = ConstantMaster__getValue((System_String_o *)StringLiteral_13685/*"TUTORIAL_QUEST_ID2"*/, 0LL);
  if ( !clsQuestCheck__IsQuestClear(v48, v49, 0, 0LL) )
  {
    v40 = 0;
    v56 = 1;
    goto LABEL_89;
  }
  v50 = ConstantMaster__getValue((System_String_o *)StringLiteral_13686/*"TUTORIAL_QUEST_ID3"*/, 0LL);
  if ( !clsQuestCheck__IsQuestClear(v48, v50, 0, 0LL) )
  {
    v40 = 0;
    v56 = 2;
    goto LABEL_89;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(1, 0LL) )
  {
    v40 = 0;
    v56 = 3;
    goto LABEL_89;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_29295864(101, 0LL) )
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
    if ( !byte_42E4B56 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v51, v52, v53);
      byte_42E4B56 = 1;
    }
    v62 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v62 = TerminalPramsManager_TypeInfo;
    }
    v62->static_fields->_SummonType_k__BackingField = 1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_104;
    v63 = 20;
LABEL_101:
    v40 = 1;
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v63, 1, 0LL, 0LL);
    return v40;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(3, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_104;
    v63 = 40;
    goto LABEL_101;
  }
  v54 = ConstantMaster__getValue((System_String_o *)StringLiteral_13687/*"TUTORIAL_QUEST_ID4"*/, 0LL);
  v40 = 0;
  if ( clsQuestCheck__IsQuestClear(v48, v54, 0, 0LL) )
    return v40;
  v55 = ConstantMaster__getValue((System_String_o *)StringLiteral_13687/*"TUTORIAL_QUEST_ID4"*/, 0LL);
  if ( clsQuestCheck__mfGetQuestPhaseByQuestID(v48, v55, 0LL) <= 0 )
  {
    v40 = 0;
    v56 = 4;
LABEL_89:
    this->fields.mTutorialKind = v56;
    return v40;
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
    sub_B5D69C(this, callback);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *v8; // x20
  const MethodInfo *v9; // x1

  if ( (byte_42E4EC1 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TerminalTransitionInfo_TypeInfo, v5, v6, v7);
    byte_42E4EC1 = 1;
  }
  v8 = (Il2CppObject *)sub_B5D694(TerminalTransitionInfo_TypeInfo);
  System_Object___ctor(v8, 0LL);
  TerminalTransitionInfo__Init((TerminalTransitionInfo_o *)v8, v9);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__TerminalTransitionInfoSave_SaveData((TerminalTransitionInfo_o *)v8, 0LL);
  this->fields._TransitionInfo_k__BackingField = 0LL;
  sub_B5D560(&this->fields._TransitionInfo_k__BackingField);
}


System_Collections_IEnumerator_o *__fastcall TerminalSceneComponent__CoWaitBlankEerthActionEnd(
        TerminalSceneComponent_o *this,
        System_Action_o *openCampaignDirectBonus,
        const MethodInfo *method)
{
  __int64 v3; // x3
  TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__244_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_42E4EF2 & 1) == 0 )
  {
    sub_B5D5C4(
      &TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__244_TypeInfo,
      (_DWORD)openCampaignDirectBonus,
      (_DWORD)method,
      v3);
    byte_42E4EF2 = 1;
  }
  v6 = (TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__244_o *)sub_B5D694(TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__244_TypeInfo);
  TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__244___ctor(v6, 0, 0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  v6->fields.__4__this = this;
  sub_B5D560(&v6->fields.__4__this);
  v6->fields.openCampaignDirectBonus = openCampaignDirectBonus;
  sub_B5D560(&v6->fields.openCampaignDirectBonus);
  return (System_Collections_IEnumerator_o *)v6;
}


System_Collections_IEnumerator_o *__fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd(
        TerminalSceneComponent_o *this,
        System_Action_o *openCampaignDirectBonus,
        const MethodInfo *method)
{
  __int64 v3; // x3
  TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__243_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_42E4EF1 & 1) == 0 )
  {
    sub_B5D5C4(
      &TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__243_TypeInfo,
      (_DWORD)openCampaignDirectBonus,
      (_DWORD)method,
      v3);
    byte_42E4EF1 = 1;
  }
  v6 = (TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__243_o *)sub_B5D694(TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__243_TypeInfo);
  TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__243___ctor(v6, 0, 0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  v6->fields.__4__this = this;
  sub_B5D560(&v6->fields.__4__this);
  v6->fields.openCampaignDirectBonus = openCampaignDirectBonus;
  sub_B5D560(&v6->fields.openCampaignDirectBonus);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall TerminalSceneComponent__CreateTransitionInfo(
        TerminalSceneComponent_o *this,
        TerminalTransitionInfo_o *info,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *v6; // x21
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x0

  if ( (byte_42E4EC0 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalTransitionInfo_TypeInfo, (_DWORD)info, (_DWORD)method, v3);
    byte_42E4EC0 = 1;
  }
  v6 = (Il2CppObject *)sub_B5D694(TerminalTransitionInfo_TypeInfo);
  System_Object___ctor(v6, 0LL);
  TerminalTransitionInfo__Init((TerminalTransitionInfo_o *)v6, v7);
  this->fields._TransitionInfo_k__BackingField = (struct TerminalTransitionInfo_o *)v6;
  sub_B5D560(&this->fields._TransitionInfo_k__BackingField);
  TransitionInfo_k__BackingField = this->fields._TransitionInfo_k__BackingField;
  if ( !TransitionInfo_k__BackingField )
    sub_B5D69C(0LL, v8);
  TerminalTransitionInfo__SetParameters(TransitionInfo_k__BackingField, info, v9);
}


void __fastcall TerminalSceneComponent__EndAuto(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  ScrPlayerStatus_o *mPlayerStatus; // x0

  if ( (byte_42E4ED1 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4ED1 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5018 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5018 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( v5->static_fields->mIsAutoOpenMasterMission )
  {
    mPlayerStatus = this->fields.mPlayerStatus;
    if ( !mPlayerStatus )
      sub_B5D69C(0LL, method);
    ScrPlayerStatus__OpenMasterMission(mPlayerStatus, 0LL, -1, 0LL);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v5);
  TerminalPramsManager__AutoOff(0LL);
}


float __fastcall TerminalSceneComponent__FSMenuOffsetX(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E4EB4 & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4EB4 = 1;
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  TerminalSceneComponent___c__DisplayClass194_0_o *v42; // x20
  _BYTE *Instance; // x0
  __int64 v44; // x1
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x3
  struct ScrTerminalListTop_o *mTerminalList; // x8
  System_Action_o *v48; // x2
  __int64 v49; // x8
  __int64 v50; // x8
  __int64 v51; // x8
  __int64 v52; // x8
  __int64 v53; // x21
  _BOOL8 IsNullOrEmpty; // x0
  int32_t v55; // w22
  int32_t v56; // w23
  SceneJumpInfo_o *v57; // x21
  TerminalPramsManager_c *v58; // x0
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  TerminalPramsManager_c *v62; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  int v64; // w2
  __int64 v65; // x3
  ScrTerminalMap_o *mTerminalMap; // x22
  int32_t v67; // w23
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  System_String_o *MapModelEntryAnimationName; // x22
  TerminalPramsManager_c *v72; // x0
  WebViewManager_o *v73; // x0
  float v74; // s8
  CommonUI_o *v75; // x19
  System_Action_o *v76; // x21
  WebViewManager_o *v77; // x19
  System_Action_o *v78; // x21
  CommonUI_o *v79; // x21
  ScrTerminalMap_o *v80; // x19
  System_Action_o *v81; // x21
  __int64 v82; // x0

  if ( (byte_42E4ED3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, eventId, (_DWORD)callback, method);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&SceneJumpInfo_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(
      &Method_TerminalSceneComponent___c__DisplayClass194_0__FadeInAndTriggerEventEffects_b__0__,
      v27,
      v28,
      v29);
    sub_B5D5C4(
      &Method_TerminalSceneComponent___c__DisplayClass194_0__FadeInAndTriggerEventEffects_b__1__,
      v30,
      v31,
      v32);
    sub_B5D5C4(
      &Method_TerminalSceneComponent___c__DisplayClass194_0__FadeInAndTriggerEventEffects_b__4__,
      v33,
      v34,
      v35);
    sub_B5D5C4(&TerminalSceneComponent___c__DisplayClass194_0_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_1/*""*/, v39, v40, v41);
    byte_42E4ED3 = 1;
  }
  v42 = (TerminalSceneComponent___c__DisplayClass194_0_o *)sub_B5D694(TerminalSceneComponent___c__DisplayClass194_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass194_0___ctor(v42, 0LL);
  if ( !v42 )
    goto LABEL_118;
  v42->fields.fadeTime = fadeTime;
  v42->fields.__4__this = this;
  sub_B5D560(&v42->fields.__4__this);
  v42->fields.callback = callback;
  v42->fields.eventId = eventId;
  sub_B5D560(&v42->fields.callback);
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_118;
  v44 = (unsigned int)v42->fields.eventId;
  if ( mTerminalList->fields.isBackFromBlankEarthMap )
  {
    v48 = v42->fields.callback;
LABEL_7:
    TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(this, v44, v48, v46);
    return;
  }
  if ( (int)v44 >= 1 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E501A )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v44, (_DWORD)v45, v46);
      byte_42E501A = 1;
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
      if ( !byte_42E501A )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v44, (_DWORD)v45, v46);
        byte_42E501A = 1;
      }
      Instance = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Instance = TerminalPramsManager_TypeInfo;
      }
      v49 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 200LL);
      if ( !v49 )
        goto LABEL_118;
      if ( *(_DWORD *)(v49 + 16) == v42->fields.eventId )
      {
        if ( (Instance[307] & 4) != 0 && !*((_DWORD *)Instance + 56) )
          j_il2cpp_runtime_class_init_0(Instance);
        if ( !byte_42E501A )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, v44, (_DWORD)v45, v46);
          byte_42E501A = 1;
        }
        Instance = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          Instance = TerminalPramsManager_TypeInfo;
        }
        v50 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 200LL);
        if ( !v50 )
          goto LABEL_118;
        if ( *(_DWORD *)(v50 + 20) )
        {
          if ( (Instance[307] & 4) != 0 && !*((_DWORD *)Instance + 56) )
            j_il2cpp_runtime_class_init_0(Instance);
          if ( !byte_42E501A )
          {
            sub_B5D5C4(&TerminalPramsManager_TypeInfo, v44, (_DWORD)v45, v46);
            byte_42E501A = 1;
          }
          Instance = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            Instance = TerminalPramsManager_TypeInfo;
          }
          v51 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 200LL);
          if ( v51 )
          {
            if ( *(_DWORD *)(v51 + 20) == 1 )
            {
              if ( (Instance[307] & 4) != 0 && !*((_DWORD *)Instance + 56) )
                j_il2cpp_runtime_class_init_0(Instance);
              if ( !byte_42E501A )
              {
                sub_B5D5C4(&TerminalPramsManager_TypeInfo, v44, (_DWORD)v45, v46);
                byte_42E501A = 1;
              }
              Instance = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                Instance = TerminalPramsManager_TypeInfo;
              }
              v52 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 200LL);
              if ( !v52 )
                goto LABEL_118;
              v53 = *(_QWORD *)(v52 + 24);
              if ( v53
                && *(int *)(v53 + 24) >= 1
                && !(IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v53 + 32), 0LL)) )
              {
                if ( !*(_DWORD *)(v53 + 24) )
                {
                  v82 = sub_B5D6C8(IsNullOrEmpty);
                  sub_B5D668(v82, 0LL);
                }
                v55 = System_Int32__Parse(*(System_String_o **)(v53 + 32), 0LL) + 1;
              }
              else
              {
                v55 = 0;
              }
              v56 = v42->fields.eventId;
              v57 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
              SceneJumpInfo___ctor_17509152(v57, (System_String_o *)StringLiteral_1/*""*/, v56, v55, 0LL);
              Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !Instance )
                goto LABEL_118;
              AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 72, 1, (Il2CppObject *)v57, 0LL);
              Instance = TerminalPramsManager_TypeInfo;
            }
            if ( (Instance[307] & 4) != 0 && !*((_DWORD *)Instance + 56) )
              j_il2cpp_runtime_class_init_0(Instance);
            if ( !byte_42E501A )
            {
              sub_B5D5C4(&TerminalPramsManager_TypeInfo, v44, (_DWORD)v45, v46);
              byte_42E501A = 1;
            }
            v58 = TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v58 = TerminalPramsManager_TypeInfo;
            }
            Instance = v58->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
            if ( Instance )
            {
              SpecifiedSceneInfo__InitParameter((SpecifiedSceneInfo_o *)Instance, 0LL);
              if ( !byte_42E501B )
              {
                sub_B5D5C4(&TerminalPramsManager_TypeInfo, v59, v60, v61);
                byte_42E501B = 1;
              }
              v62 = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v62 = TerminalPramsManager_TypeInfo;
              }
              static_fields = v62->static_fields;
              static_fields->_SpecifiedChangeSceneInfo_k__BackingField = 0LL;
              sub_B5D560(&static_fields->_SpecifiedChangeSceneInfo_k__BackingField);
              LODWORD(v44) = v42->fields.eventId;
              v48 = v42->fields.callback;
              goto LABEL_7;
            }
          }
LABEL_118:
          sub_B5D69C(Instance, v44);
        }
      }
    }
  }
  if ( TerminalSceneComponent__IsEnabledMapOnEvent((TerminalSceneComponent_o *)Instance, v42->fields.eventId, v45) )
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
    if ( !byte_42E4B49 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v44, v64, v65);
      byte_42E4B49 = 1;
    }
    Instance = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = TerminalPramsManager_TypeInfo;
    }
    v67 = *(_DWORD *)(*((_QWORD *)Instance + 23) + 140LL);
    if ( !byte_42E4B4A )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v44, v64, v65);
      Instance = TerminalPramsManager_TypeInfo;
      byte_42E4B4A = 1;
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
                                   v67,
                                   *(_DWORD *)(*((_QWORD *)Instance + 23) + 144LL),
                                   0LL);
    if ( !byte_42E501C )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v68, v69, v70);
      byte_42E501C = 1;
    }
    v72 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v72 = TerminalPramsManager_TypeInfo;
    }
    v72->static_fields->_MapModelClearQuestId_k__BackingField = 0;
    if ( !byte_42E501D )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v68, v69, v70);
      v72 = TerminalPramsManager_TypeInfo;
      byte_42E501D = 1;
    }
    if ( (BYTE3(v72->vtable._0_Equals.methodPtr) & 4) != 0 && !v72->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v72);
      v72 = TerminalPramsManager_TypeInfo;
    }
    v72->static_fields->_MapModelClearPhaseCount_k__BackingField = 0;
    if ( !System_String__IsNullOrEmpty(MapModelEntryAnimationName, 0LL) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v79 = (CommonUI_o *)Instance;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( !v79 )
        goto LABEL_118;
      CommonUI__maskFadein(v79, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
      v80 = this->fields.mTerminalMap;
      v81 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v81,
        (Il2CppObject *)v42,
        Method_TerminalSceneComponent___c__DisplayClass194_0__FadeInAndTriggerEventEffects_b__4__,
        0LL);
      if ( !v80 )
        goto LABEL_118;
      ScrTerminalMap__PlayMapModelEntryAnimation(v80, MapModelEntryAnimationName, v81, 0LL);
    }
    else
    {
LABEL_106:
      v73 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v74 = v42->fields.fadeTime;
      v75 = (CommonUI_o *)v73;
      v76 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v76,
        (Il2CppObject *)v42,
        Method_TerminalSceneComponent___c__DisplayClass194_0__FadeInAndTriggerEventEffects_b__1__,
        0LL);
      if ( !v75 )
        goto LABEL_118;
      CommonUI__maskFadein(v75, v74, v76, 0LL);
    }
  }
  else
  {
    v77 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    v78 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v78,
      (Il2CppObject *)v42,
      Method_TerminalSceneComponent___c__DisplayClass194_0__FadeInAndTriggerEventEffects_b__0__,
      0LL);
    if ( !v77 )
      goto LABEL_118;
    QuestAfterAction__LoadVoice((QuestAfterAction_o *)v77, v78, 0LL);
  }
}


void __fastcall TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  TerminalSceneComponent___c__DisplayClass197_0_o *v28; // x22
  DataManager_o *Instance; // x0
  const MethodInfo *v30; // x1
  System_Action_o **p_callback; // x21
  const MethodInfo *v32; // x4
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x3
  System_Action_o *v35; // x2
  EventDetailEntity_o *v36; // x1
  struct TitleInfoControl_o *mTitleInfo; // x19
  WarEntity_o *v38; // x20
  System_Action_o *v39; // x21
  const MethodInfo *v40; // x3
  struct TitleInfoControl_o *v41; // x23
  const MethodInfo *v42; // x2
  TerminalPramsManager_c *v43; // x0
  System_Action_o *v44; // x19
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x3
  const MethodInfo *v47; // x3
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x3
  System_Action_o *v50; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E4ED6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, eventId, (_DWORD)callback, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14, v15);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(
      &Method_TerminalSceneComponent___c__DisplayClass197_0__FadeInAndTriggerEventEffectsNext_b__0__,
      v19,
      v20,
      v21);
    sub_B5D5C4(
      &Method_TerminalSceneComponent___c__DisplayClass197_0__FadeInAndTriggerEventEffectsNext_b__1__,
      v22,
      v23,
      v24);
    sub_B5D5C4(&TerminalSceneComponent___c__DisplayClass197_0_TypeInfo, v25, v26, v27);
    byte_42E4ED6 = 1;
  }
  entity = 0LL;
  v28 = (TerminalSceneComponent___c__DisplayClass197_0_o *)sub_B5D694(TerminalSceneComponent___c__DisplayClass197_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass197_0___ctor(v28, 0LL);
  if ( !v28 )
    goto LABEL_69;
  v28->fields.__4__this = this;
  sub_B5D560(&v28->fields);
  v28->fields.callback = callback;
  p_callback = &v28->fields.callback;
  sub_B5D560(&v28->fields.callback);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_69;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_65;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_69;
  if ( EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.mTitleInfo;
    if ( !Instance )
      goto LABEL_69;
    TitleInfoControl__PlayEventTimeStateAnime((TitleInfoControl_o *)Instance, v30);
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_69:
    sub_B5D69C(Instance, v30);
  if ( EventDetailEntity__isRaidDefeatCount((EventDetailEntity_o *)entity, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.mTitleInfo;
    if ( Instance )
    {
      TitleInfoControl__PlayEventRaidDefeatedEffect((TitleInfoControl_o *)Instance, eventId, 0, *p_callback, v32);
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
      TitleInfoControl__CheckSuperBossHpAnim((TitleInfoControl_o *)Instance, *p_callback, v33);
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
      v35 = *p_callback;
      v36 = (EventDetailEntity_o *)entity;
LABEL_31:
      TitleInfoControl__EventTowerStart((TitleInfoControl_o *)Instance, v36, v35, v34);
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
      v38 = entity;
      v39 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v39,
        (Il2CppObject *)v28,
        Method_TerminalSceneComponent___c__DisplayClass197_0__FadeInAndTriggerEventEffectsNext_b__0__,
        0LL);
      if ( !mTitleInfo )
        goto LABEL_69;
      Instance = (DataManager_o *)mTitleInfo;
      v36 = (EventDetailEntity_o *)v38;
      v35 = v39;
      goto LABEL_31;
    }
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_69;
  Instance = (DataManager_o *)EventDetailEntity__IsGroupPoint((EventDetailEntity_o *)entity, 0LL);
  v41 = this->fields.mTitleInfo;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v41 )
      goto LABEL_69;
    TitleInfoControl__CheckEventPointGroupReward(this->fields.mTitleInfo, eventId, *p_callback, v40);
    v43 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v43 = TerminalPramsManager_TypeInfo;
    }
    if ( v43->static_fields->joinGroupId >= 1 )
    {
      Instance = (DataManager_o *)this->fields.mTitleInfo;
      if ( !Instance )
        goto LABEL_69;
      TitleInfoControl__vsGaugeEvent((TitleInfoControl_o *)Instance, eventId, v42);
    }
    return;
  }
  if ( !v41 )
    goto LABEL_69;
  if ( v41->fields.needPlayDailyPointItemEffect )
  {
    v44 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v44,
      (Il2CppObject *)v28,
      Method_TerminalSceneComponent___c__DisplayClass197_0__FadeInAndTriggerEventEffectsNext_b__1__,
      0LL);
    TitleInfoControl__UpdateDailyPointWithEffect(v41, v44, v45);
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
      v46);
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
      v47);
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
    v50 = *p_callback;
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
  if ( !TitleInfoControl__IsPlayEventUIAnimation((TitleInfoControl_o *)Instance, 1, v48) )
  {
LABEL_65:
    v50 = *p_callback;
LABEL_66:
    ActionExtensions__Call(v50, 0LL);
    return;
  }
  Instance = (DataManager_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_69;
  TitleInfoControl__StartEventUIAnimation((TitleInfoControl_o *)Instance, 1, *p_callback, v49);
}


void __fastcall TerminalSceneComponent__FadeinWorldDispNoneExecuteUnusedAssets(
        TerminalSceneComponent_o *this,
        bool isExecuteUnusedAssets,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  AvalonSceneManager_c *v7; // x0
  System_Collections_IEnumerator_o *v8; // x1

  if ( (byte_42E4ECA & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, isExecuteUnusedAssets, (_DWORD)endAct, method);
    byte_42E4ECA = 1;
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
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v8, 0LL);
}


void __fastcall TerminalSceneComponent__Fadein_MapDisp(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  TerminalSceneComponent___c__DisplayClass189_0_o *v20; // x19
  __int64 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v25; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v27; // x21

  if ( (byte_42E4ECE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)end_act, (_DWORD)method, v4);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass189_0__Fadein_MapDisp_b__0__, v14, v15, v16);
    sub_B5D5C4(&TerminalSceneComponent___c__DisplayClass189_0_TypeInfo, v17, v18, v19);
    byte_42E4ECE = 1;
  }
  v20 = (TerminalSceneComponent___c__DisplayClass189_0_o *)sub_B5D694(TerminalSceneComponent___c__DisplayClass189_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass189_0___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_11;
  v20->fields.__4__this = this;
  sub_B5D560(&v20->fields);
  v20->fields.end_act = end_act;
  sub_B5D560(&v20->fields.end_act);
  if ( this->fields._FirstFadeTime_k__BackingField > 0.0 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v25 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v25 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v25->static_fields->DEFAULT_FADE_TIME;
    v27 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v27,
      (Il2CppObject *)v20,
      Method_TerminalSceneComponent___c__DisplayClass189_0__Fadein_MapDisp_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeChangeColor(Instance, 2, DEFAULT_FADE_TIME, v27, 0LL);
      return;
    }
LABEL_11:
    sub_B5D69C(v21, v22);
  }
  TerminalSceneComponent__Fadein_MapDisp_Load(this, fade_time, v20->fields.end_act, v23);
}


void __fastcall TerminalSceneComponent__Fadein_MapDisp_Load(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  TerminalSceneComponent___c__DisplayClass190_0_o *v23; // x20
  void *mTerminalMap; // x0
  const MethodInfo *v25; // x1
  int v26; // w2
  __int64 v27; // x3
  TerminalPramsManager_c *v28; // x0
  __int64 v29; // x8
  __int64 v30; // x8
  WarEntity_o *v31; // x21
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  TerminalPramsManager_c *v35; // x0
  _BOOL4 isInvisibleConnectAndLoad; // w22
  TitleInfoControl_o *mTitleInfo; // x19
  System_Action_o *v38; // x22
  const MethodInfo *v39; // x4

  if ( (byte_42E4ECF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)end_act, (_DWORD)method, v4);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass190_0__Fadein_MapDisp_Load_b__0__, v17, v18, v19);
    sub_B5D5C4(&TerminalSceneComponent___c__DisplayClass190_0_TypeInfo, v20, v21, v22);
    byte_42E4ECF = 1;
  }
  v23 = (TerminalSceneComponent___c__DisplayClass190_0_o *)sub_B5D694(TerminalSceneComponent___c__DisplayClass190_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass190_0___ctor(v23, 0LL);
  if ( !v23 )
    goto LABEL_38;
  v23->fields.__4__this = this;
  sub_B5D560(&v23->fields);
  v23->fields.end_act = end_act;
  v23->fields.fade_time = fade_time;
  sub_B5D560(&v23->fields.end_act);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B32 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)v25, v26, v27);
    byte_42E4B32 = 1;
  }
  v28 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v28 = TerminalPramsManager_TypeInfo;
  }
  if ( !v28->static_fields->_IsDispOnly_k__BackingField )
  {
    TerminalSceneComponent__EndAuto(this, v25);
    goto LABEL_26;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)v25, v26, v27);
    byte_42E4B1E = 1;
  }
  mTerminalMap = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mTerminalMap = TerminalSceneComponent_TypeInfo;
  }
  v29 = **((_QWORD **)mTerminalMap + 23);
  if ( !v29 || (v30 = *(_QWORD *)(v29 + 256)) == 0 || (mTerminalMap = *(void **)(v30 + 528)) == 0LL )
LABEL_38:
    sub_B5D69C(mTerminalMap, v25);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mTerminalMap, 1, 0LL);
LABEL_26:
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_38;
  v31 = (WarEntity_o *)*((_QWORD *)mTerminalMap + 43);
  ScrTerminalMap__SetDisp((ScrTerminalMap_o *)mTerminalMap, 1, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5017 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v32, v33, v34);
    byte_42E5017 = 1;
  }
  v35 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
  }
  isInvisibleConnectAndLoad = v35->static_fields->isInvisibleConnectAndLoad;
  mTerminalMap = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_38;
  CommonUI__SetLoadMode((CommonUI_o *)mTerminalMap, !isInvisibleConnectAndLoad, 0LL);
  mTitleInfo = this->fields.mTitleInfo;
  v38 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v23,
    Method_TerminalSceneComponent___c__DisplayClass190_0__Fadein_MapDisp_Load_b__0__,
    0LL);
  if ( !mTitleInfo )
    goto LABEL_38;
  TitleInfoControl__SetActiveEventInfo(mTitleInfo, v31, 32, v38, v39);
}


void __fastcall TerminalSceneComponent__Fadein_MapDisp_Start(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  TerminalSceneComponent___c__DisplayClass191_0_o *v89; // x20
  __int64 Instance; // x0
  _BOOL8 v91; // x1
  struct System_Action_o **p_end_act; // x21
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct WarEntity_o **p_war_dat; // x22
  struct ScrTerminalMap_o *v95; // x8
  MapEntity_o *v96; // x23
  System_String_o *ActiveStateName; // x24
  const MethodInfo *v98; // x4
  const MethodInfo *v99; // x2
  int v100; // w2
  __int64 v101; // x3
  System_String_o *PrioredBgmName; // x0
  const MethodInfo *v103; // x2
  TerminalPramsManager_c *v104; // x0
  const MethodInfo *v105; // x2
  TitleInfoControl_o *mTitleInfo; // x23
  const MethodInfo *v107; // x3
  struct ScrTerminalMap_o *v108; // x8
  const MethodInfo *v109; // x2
  TitleInfoControl_o *v110; // x23
  const MethodInfo *v111; // x3
  struct ScrTerminalListTop_o *mTerminalList; // x8
  TerminalPramsManager_c *v113; // x0
  TerminalSceneComponent___c__DisplayClass191_1_o *v114; // x21
  Il2CppObject **p_CS___8__locals1; // x22
  int v116; // w2
  __int64 v117; // x3
  __int64 v118; // x8
  __int64 v119; // x8
  int v120; // w2
  __int64 v121; // x3
  __int64 v122; // x8
  __int64 v123; // x8
  __int64 v124; // x8
  __int64 v125; // x8
  __int64 v126; // x0
  Il2CppObject *v127; // x24
  System_Action_Action__array *v128; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v129; // x23
  Il2CppObject *v130; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v131; // x22
  TerminalSceneComponent___c_c *v132; // x0
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__191_6; // x22
  Il2CppObject *v135; // x23
  struct TerminalSceneComponent___c_StaticFields *v136; // x0
  System_Action_Action__o *v137; // x8
  Il2CppObject *v138; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v139; // x22
  ActionChain_o *v140; // x22
  __int64 v141; // x20
  System_Action_o *v142; // x23
  ChainableActionBase_o *v143; // x0
  System_Action_array *v144; // x1
  int32_t eventId; // w21
  System_Action_o *v146; // x22
  const MethodInfo *v147; // x3
  System_Action_Action__array *v148; // x22
  Il2CppObject *v149; // x24
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v150; // x23
  TerminalSceneComponent___c_c *v151; // x0
  struct TerminalSceneComponent___c_StaticFields *v152; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__191_0; // x23
  Il2CppObject *v154; // x24
  struct TerminalSceneComponent___c_StaticFields *v155; // x0
  System_Action_Action__o *v156; // x8
  TerminalSceneComponent___c_c *v157; // x0
  struct TerminalSceneComponent___c_StaticFields *v158; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__191_1; // x23
  Il2CppObject *v160; // x24
  struct TerminalSceneComponent___c_StaticFields *v161; // x0
  System_Action_Action__o *v162; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v163; // x23
  ActionChain_o *v164; // x20
  System_Action_o *v165; // x21
  System_Action_array *v166; // x22
  __int64 v167; // x0
  __int64 v168; // x0

  if ( (byte_42E4ED0 & 1) == 0 )
  {
    sub_B5D5C4(&ActionChain_TypeInfo, (_DWORD)end_act, (_DWORD)method, v4);
    sub_B5D5C4(&System_Action___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Action_Action____TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Action_Action___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Action_Action__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Action_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_CommonUI_StartLoginMessages__, v23, v24, v25);
    sub_B5D5C4(&Method_QuestAfterAction_Play__, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v32, v33, v34);
    sub_B5D5C4(&SoundManager_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__191_0__, v47, v48, v49);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__191_1__, v50, v51, v52);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__191_6__, v53, v54, v55);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass191_0__Fadein_MapDisp_Start_b__2__, v56, v57, v58);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass191_0__Fadein_MapDisp_Start_b__3__, v59, v60, v61);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass191_0__Fadein_MapDisp_Start_b__4__, v62, v63, v64);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass191_0__Fadein_MapDisp_Start_b__5__, v65, v66, v67);
    sub_B5D5C4(&TerminalSceneComponent___c__DisplayClass191_0_TypeInfo, v68, v69, v70);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass191_1__Fadein_MapDisp_Start_b__7__, v71, v72, v73);
    sub_B5D5C4(&TerminalSceneComponent___c__DisplayClass191_1_TypeInfo, v74, v75, v76);
    sub_B5D5C4(&TerminalSceneComponent___c_TypeInfo, v77, v78, v79);
    sub_B5D5C4(&StringLiteral_2982/*"CAPTER INIT"*/, v80, v81, v82);
    sub_B5D5C4(&StringLiteral_2981/*"CAPTER CREATE"*/, v83, v84, v85);
    sub_B5D5C4(&StringLiteral_2983/*"CAPTER WAIT"*/, v86, v87, v88);
    byte_42E4ED0 = 1;
  }
  v89 = (TerminalSceneComponent___c__DisplayClass191_0_o *)sub_B5D694(TerminalSceneComponent___c__DisplayClass191_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass191_0___ctor(v89, 0LL);
  if ( !v89 )
    goto LABEL_206;
  v89->fields.__4__this = this;
  sub_B5D560(&v89->fields);
  v89->fields.end_act = end_act;
  p_end_act = &v89->fields.end_act;
  v89->fields.fade_time = fade_time;
  sub_B5D560(&v89->fields.end_act);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_206;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_206;
  v89->fields.war_dat = (struct WarEntity_o *)mTerminalMap->fields.mMapEnt;
  p_war_dat = &v89->fields.war_dat;
  sub_B5D560(&v89->fields.war_dat);
  v95 = this->fields.mTerminalMap;
  if ( !v95 )
    goto LABEL_206;
  Instance = (__int64)this->fields.mTerminalList;
  if ( !Instance )
    goto LABEL_206;
  v96 = *(MapEntity_o **)&v95->fields.requestedMapId;
  Instance = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_206;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)Instance, 0LL);
  v91 = System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_2981/*"CAPTER CREATE"*/, 0LL)
     || System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_2982/*"CAPTER INIT"*/, 0LL)
     || System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_2983/*"CAPTER WAIT"*/, 0LL);
  Instance = (__int64)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_206;
  TitleInfoControl__setBackBtnSprite_18313300((TitleInfoControl_o *)Instance, v91, 0, 0, v98);
  Instance = (__int64)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_206;
  TitleInfoControl__FrameIn((TitleInfoControl_o *)Instance, 0, v99);
  MainMenuBar__FrameIn(0, 0LL);
  Instance = (__int64)this->fields.mPlayerStatus;
  if ( !Instance )
    goto LABEL_206;
  ScrPlayerStatus__FrameIn((ScrPlayerStatus_o *)Instance, 0, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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
    if ( !byte_42E4B4D )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v91, v100, v101);
      byte_42E4B4D = 1;
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
      if ( !v96 )
        goto LABEL_206;
      PrioredBgmName = MapEntity__GetPrioredBgmName(v96, 0LL);
      TerminalSceneComponent__playBgm(this, PrioredBgmName, v103);
    }
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B4D )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v91, v100, v101);
    byte_42E4B4D = 1;
  }
  v104 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v104 = TerminalPramsManager_TypeInfo;
  }
  if ( v104->static_fields->_IsPlayScriptWithMap_k__BackingField )
  {
    Instance = (__int64)this->fields.mTerminalMap;
    if ( !Instance )
      goto LABEL_206;
    ScrTerminalMap__AllMaskStart((ScrTerminalMap_o *)Instance, 0, 1, 0LL);
    MainMenuBar__FrameOut(0, 0LL);
    mTitleInfo = this->fields.mTitleInfo;
    if ( !mTitleInfo )
      goto LABEL_206;
    TitleInfoControl__SetDispChangeBtn(this->fields.mTitleInfo, 0, v105);
    TitleInfoControl__SlideFrame(mTitleInfo, 0, 0, v107);
    Instance = (__int64)this->fields.mPlayerStatus;
    if ( !Instance )
      goto LABEL_206;
    ScrPlayerStatus__FrameOut((ScrPlayerStatus_o *)Instance, 1, 0LL);
    v104 = TerminalPramsManager_TypeInfo;
  }
  if ( (BYTE3(v104->vtable._0_Equals.methodPtr) & 4) != 0 && !v104->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v104);
  if ( !byte_42E4B32 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v91, v100, v101);
    byte_42E4B32 = 1;
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
    if ( !byte_42E4B31 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v91, v100, v101);
      byte_42E4B31 = 1;
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
      v108 = this->fields.mTerminalMap;
      if ( !v108 )
        goto LABEL_206;
      Instance = (__int64)v108->fields.allMaskObj;
      if ( !Instance )
        goto LABEL_206;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      MainMenuBar__FrameOut(0, 0LL);
      v110 = this->fields.mTitleInfo;
      if ( !v110 )
        goto LABEL_206;
      TitleInfoControl__SetDispChangeBtn(this->fields.mTitleInfo, 0, v109);
      TitleInfoControl__SlideFrame(v110, 0, 0, v111);
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
  if ( !byte_42E4B31 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v91, v100, v101);
    byte_42E4B31 = 1;
  }
  v113 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v113 = TerminalPramsManager_TypeInfo;
  }
  if ( v113->static_fields->_IsScriptDisp_k__BackingField )
    goto LABEL_167;
  if ( (BYTE3(v113->vtable._0_Equals.methodPtr) & 4) != 0 && !v113->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v113);
  if ( !byte_42E4B32 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v91, v100, v101);
    byte_42E4B32 = 1;
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
    v114 = (TerminalSceneComponent___c__DisplayClass191_1_o *)sub_B5D694(TerminalSceneComponent___c__DisplayClass191_1_TypeInfo);
    TerminalSceneComponent___c__DisplayClass191_1___ctor(v114, 0LL);
    if ( v114 )
    {
      v114->fields.CS___8__locals1 = v89;
      p_CS___8__locals1 = (Il2CppObject **)&v114->fields.CS___8__locals1;
      sub_B5D560(&v114->fields.CS___8__locals1);
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_42E4B1E )
      {
        sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v91, v116, v117);
        byte_42E4B1E = 1;
      }
      Instance = (__int64)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v118 = **(_QWORD **)(Instance + 184);
      if ( v118 )
      {
        v119 = *(_QWORD *)(v118 + 256);
        if ( v119 )
        {
          Instance = *(_QWORD *)(v119 + 528);
          if ( Instance )
          {
            v114->fields.oldActive = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
            Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
            if ( Instance )
            {
              QuestAfterAction__Init((QuestAfterAction_o *)Instance, 0LL);
              Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
              if ( Instance )
              {
                QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)Instance, 1, 0LL);
                Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                if ( Instance )
                {
                  if ( QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0LL) )
                  {
                    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    }
                    if ( !byte_42E4B1E )
                    {
                      sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v91, v120, v121);
                      byte_42E4B1E = 1;
                    }
                    Instance = (__int64)TerminalSceneComponent_TypeInfo;
                    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                      Instance = (__int64)TerminalSceneComponent_TypeInfo;
                    }
                    v122 = **(_QWORD **)(Instance + 184);
                    if ( !v122 )
                      goto LABEL_206;
                    v123 = *(_QWORD *)(v122 + 256);
                    if ( !v123 )
                      goto LABEL_206;
                    Instance = *(_QWORD *)(v123 + 528);
                    if ( !Instance )
                      goto LABEL_206;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                  }
                  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  }
                  if ( !byte_42E4B1E )
                  {
                    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v91, v120, v121);
                    byte_42E4B1E = 1;
                  }
                  Instance = (__int64)TerminalSceneComponent_TypeInfo;
                  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    Instance = (__int64)TerminalSceneComponent_TypeInfo;
                  }
                  v124 = **(_QWORD **)(Instance + 184);
                  if ( v124 )
                  {
                    v125 = *(_QWORD *)(v124 + 256);
                    if ( v125 )
                    {
                      Instance = *(_QWORD *)(v125 + 528);
                      if ( Instance )
                      {
                        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
                        {
                          Instance = (__int64)this->fields.mTerminalMap;
                          if ( !Instance )
                            goto LABEL_206;
                          ScrTerminalMap__AllMaskStart((ScrTerminalMap_o *)Instance, 0, 1, 0LL);
                        }
                        v126 = sub_B5D5DC(System_Action_Action____TypeInfo, 4LL);
                        v127 = *p_CS___8__locals1;
                        v128 = (System_Action_Action__array *)v126;
                        v129 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
                        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                          v129,
                          v127,
                          Method_TerminalSceneComponent___c__DisplayClass191_0__Fadein_MapDisp_Start_b__4__,
                          (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
                        if ( v128 )
                        {
                          if ( !v129 || (Instance = sub_B5D684(v129, v128->obj.klass->_1.element_class)) != 0 )
                          {
                            if ( !v128->max_length )
                              goto LABEL_207;
                            v128->m_Items[0] = (System_Action_Action__o *)v129;
                            sub_B5D560(v128->m_Items);
                            v130 = *p_CS___8__locals1;
                            v131 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
                            System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                              v131,
                              v130,
                              Method_TerminalSceneComponent___c__DisplayClass191_0__Fadein_MapDisp_Start_b__5__,
                              (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
                            if ( !v131 || (Instance = sub_B5D684(v131, v128->obj.klass->_1.element_class)) != 0 )
                            {
                              if ( v128->max_length <= 1 )
                                goto LABEL_207;
                              v128->m_Items[1] = (System_Action_Action__o *)v131;
                              sub_B5D560(&v128->m_Items[1]);
                              v132 = TerminalSceneComponent___c_TypeInfo;
                              if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
                                v132 = TerminalSceneComponent___c_TypeInfo;
                              }
                              static_fields = v132->static_fields;
                              _9__191_6 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__191_6;
                              if ( _9__191_6 )
                                goto LABEL_146;
                              if ( (BYTE3(v132->vtable._0_Equals.methodPtr) & 4) != 0 && !v132->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(v132);
                                static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
                              }
                              v135 = (Il2CppObject *)static_fields->__9;
                              _9__191_6 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
                              System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                                _9__191_6,
                                v135,
                                Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__191_6__,
                                (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
                              v136 = TerminalSceneComponent___c_TypeInfo->static_fields;
                              v136->__9__191_6 = (struct System_Action_Action__o *)_9__191_6;
                              sub_B5D560(&v136->__9__191_6);
                              if ( _9__191_6 )
                              {
LABEL_146:
                                Instance = sub_B5D684(_9__191_6, v128->obj.klass->_1.element_class);
                                v137 = (System_Action_Action__o *)_9__191_6;
                                if ( !Instance )
                                  goto LABEL_208;
                              }
                              else
                              {
                                v137 = 0LL;
                              }
                              if ( v128->max_length <= 2 )
                                goto LABEL_207;
                              v128->m_Items[2] = v137;
                              sub_B5D560(&v128->m_Items[2]);
                              v138 = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                              v139 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
                              System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                                v139,
                                v138,
                                Method_QuestAfterAction_Play__,
                                (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
                              if ( !v139 || (Instance = sub_B5D684(v139, v128->obj.klass->_1.element_class)) != 0 )
                              {
                                if ( v128->max_length <= 3 )
                                  goto LABEL_207;
                                v128->m_Items[3] = (System_Action_Action__o *)v139;
                                sub_B5D560(&v128->m_Items[3]);
                                v140 = (ActionChain_o *)sub_B5D694(ActionChain_TypeInfo);
                                ActionChain___ctor_21252180(v140, v128, 0LL);
                                v141 = sub_B5D5DC(System_Action___TypeInfo, 1LL);
                                v142 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                                System_Action___ctor(
                                  v142,
                                  (Il2CppObject *)v114,
                                  Method_TerminalSceneComponent___c__DisplayClass191_1__Fadein_MapDisp_Start_b__7__,
                                  0LL);
                                if ( !v141 )
                                  goto LABEL_206;
                                if ( !v142 || (Instance = sub_B5D684(v142, *(_QWORD *)(*(_QWORD *)v141 + 64LL))) != 0 )
                                {
                                  if ( *(_DWORD *)(v141 + 24) )
                                  {
                                    *(_QWORD *)(v141 + 32) = v142;
                                    sub_B5D560(v141 + 32);
                                    if ( !v140 )
                                      goto LABEL_206;
                                    v143 = (ChainableActionBase_o *)v140;
                                    v144 = (System_Action_array *)v141;
                                    goto LABEL_157;
                                  }
LABEL_207:
                                  v167 = sub_B5D6C8(Instance);
                                  sub_B5D668(v167, 0LL);
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
    sub_B5D69C(Instance, v91);
  }
  if ( this->fields.mIsStart_LoginBonusWhiteBg )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    Instance = TutorialFlag__Get_29295864(102, 0LL);
    if ( (Instance & 1) != 0 && !this->fields.isTutorialAfter )
    {
      this->fields.mIsStart_LoginBonusWhiteBg = 0;
      Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetupLoginResultData((CommonUI_o *)Instance, 0LL, 0LL);
        v148 = (System_Action_Action__array *)sub_B5D5DC(System_Action_Action____TypeInfo, 4LL);
        v149 = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v150 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v150,
          v149,
          Method_CommonUI_StartLoginMessages__,
          (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
        if ( v148 )
        {
          if ( v150 )
          {
            Instance = sub_B5D684(v150, v148->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_208;
          }
          if ( !v148->max_length )
            goto LABEL_207;
          v148->m_Items[0] = (System_Action_Action__o *)v150;
          sub_B5D560(v148->m_Items);
          v151 = TerminalSceneComponent___c_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
            v151 = TerminalSceneComponent___c_TypeInfo;
          }
          v152 = v151->static_fields;
          _9__191_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v152->__9__191_0;
          if ( _9__191_0 )
            goto LABEL_183;
          if ( (BYTE3(v151->vtable._0_Equals.methodPtr) & 4) != 0 && !v151->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v151);
            v152 = TerminalSceneComponent___c_TypeInfo->static_fields;
          }
          v154 = (Il2CppObject *)v152->__9;
          _9__191_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            _9__191_0,
            v154,
            Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__191_0__,
            (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
          v155 = TerminalSceneComponent___c_TypeInfo->static_fields;
          v155->__9__191_0 = (struct System_Action_Action__o *)_9__191_0;
          sub_B5D560(&v155->__9__191_0);
          if ( _9__191_0 )
          {
LABEL_183:
            Instance = sub_B5D684(_9__191_0, v148->obj.klass->_1.element_class);
            v156 = (System_Action_Action__o *)_9__191_0;
            if ( !Instance )
              goto LABEL_208;
          }
          else
          {
            v156 = 0LL;
          }
          if ( v148->max_length <= 1 )
            goto LABEL_207;
          v148->m_Items[1] = v156;
          sub_B5D560(&v148->m_Items[1]);
          v157 = TerminalSceneComponent___c_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
            v157 = TerminalSceneComponent___c_TypeInfo;
          }
          v158 = v157->static_fields;
          _9__191_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v158->__9__191_1;
          if ( _9__191_1 )
            goto LABEL_193;
          if ( (BYTE3(v157->vtable._0_Equals.methodPtr) & 4) != 0 && !v157->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v157);
            v158 = TerminalSceneComponent___c_TypeInfo->static_fields;
          }
          v160 = (Il2CppObject *)v158->__9;
          _9__191_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            _9__191_1,
            v160,
            Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__191_1__,
            (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
          v161 = TerminalSceneComponent___c_TypeInfo->static_fields;
          v161->__9__191_1 = (struct System_Action_Action__o *)_9__191_1;
          sub_B5D560(&v161->__9__191_1);
          if ( _9__191_1 )
          {
LABEL_193:
            Instance = sub_B5D684(_9__191_1, v148->obj.klass->_1.element_class);
            v162 = (System_Action_Action__o *)_9__191_1;
            if ( !Instance )
              goto LABEL_208;
          }
          else
          {
            v162 = 0LL;
          }
          if ( v148->max_length <= 2 )
            goto LABEL_207;
          v148->m_Items[2] = v162;
          sub_B5D560(&v148->m_Items[2]);
          v163 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            v163,
            (Il2CppObject *)v89,
            Method_TerminalSceneComponent___c__DisplayClass191_0__Fadein_MapDisp_Start_b__2__,
            (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
          if ( v163 )
          {
            Instance = sub_B5D684(v163, v148->obj.klass->_1.element_class);
            if ( !Instance )
            {
LABEL_208:
              v168 = sub_B5D6BC();
              sub_B5D668(v168, 0LL);
            }
          }
          if ( v148->max_length <= 3 )
            goto LABEL_207;
          v148->m_Items[3] = (System_Action_Action__o *)v163;
          sub_B5D560(&v148->m_Items[3]);
          v164 = (ActionChain_o *)sub_B5D694(ActionChain_TypeInfo);
          ActionChain___ctor_21252180(v164, v148, 0LL);
          Instance = sub_B5D5DC(System_Action___TypeInfo, 1LL);
          if ( Instance )
          {
            v165 = *p_end_act;
            v166 = (System_Action_array *)Instance;
            if ( v165 )
            {
              Instance = sub_B5D684(v165, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
              if ( !Instance )
                goto LABEL_208;
            }
            if ( !v166->max_length )
              goto LABEL_207;
            v166->m_Items[0] = v165;
            sub_B5D560(v166->m_Items);
            if ( v164 )
            {
              v143 = (ChainableActionBase_o *)v164;
              v144 = v166;
LABEL_157:
              Instance = (__int64)ChainableActionBase__Final(v143, v144, 0LL);
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
  v146 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v146,
    (Il2CppObject *)v89,
    Method_TerminalSceneComponent___c__DisplayClass191_0__Fadein_MapDisp_Start_b__3__,
    0LL);
  TerminalSceneComponent__StartEventDailyPoint(this, eventId, v146, v147);
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

  if ( (byte_42E4ECB & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, (_DWORD)end_act, (_DWORD)method, v3);
    byte_42E4ECB = 1;
  }
  v6 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v6 = AvalonSceneManager_TypeInfo;
  }
  v7 = TerminalSceneComponent__coFadein_WorldDisp(this, v6->static_fields->DEFAULT_FADE_TIME, end_act, 1, v3);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
}


void __fastcall TerminalSceneComponent__Fadein_WorldDisp_18307880(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  System_Collections_IEnumerator_o *v6; // x1

  v6 = TerminalSceneComponent__coFadein_WorldDisp(this, fade_time, end_act, 1, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
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
    sub_B5D69C(this, method);
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
        v9 = sub_B5D6C8(this);
        sub_B5D668(v9, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  TerminalSceneComponent_c *v8; // x0
  System_String_o *OVERWRITE_COMMON_BG_TYPE2_KEY; // x0
  TerminalSceneComponent_c *v10; // x0

  if ( (byte_42E4EFD & 1) == 0 )
  {
    sub_B5D5C4(&string_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v5, v6, v7);
    byte_42E4EFD = 1;
  }
  if ( skinType == 4 )
  {
    v10 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v10 = TerminalSceneComponent_TypeInfo;
    }
    OVERWRITE_COMMON_BG_TYPE2_KEY = v10->static_fields->OVERWRITE_COMMON_BG_TYPE2_KEY;
    return UnityEngine_PlayerPrefs__GetString_35648228(OVERWRITE_COMMON_BG_TYPE2_KEY, 0LL);
  }
  if ( skinType == 2 )
  {
    v8 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v8 = TerminalSceneComponent_TypeInfo;
    }
    OVERWRITE_COMMON_BG_TYPE2_KEY = v8->static_fields->OVERWRITE_COMMON_BG_TYPE1_KEY;
    return UnityEngine_PlayerPrefs__GetString_35648228(OVERWRITE_COMMON_BG_TYPE2_KEY, 0LL);
  }
  return string_TypeInfo->static_fields->Empty;
}


int32_t __fastcall TerminalSceneComponent__GetState(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalSceneComponent_o *v4; // x19
  struct CStateManager_TerminalSceneComponent__o *mFSM; // x8

  v4 = this;
  if ( (byte_42E4EEC & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_B5D5C4(
                                         &Method_CStateManager_TerminalSceneComponent__getState__,
                                         (_DWORD)method,
                                         v2,
                                         v3);
    byte_42E4EEC = 1;
  }
  mFSM = v4->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(this, method);
  return mFSM->fields.m_state;
}


void __fastcall TerminalSceneComponent__InitLighting(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalSceneComponent_c *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_42E4EFB & 1) == 0 )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4EFB = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  UnityEngine_RenderSettings__set_ambientLight(v5->static_fields->DEFAULT_AMBIENT_LIGHT_COLOR, 0LL);
  TerminalSceneComponent__SetDirectionalLightActive(this, 1, v6);
}


bool __fastcall TerminalSceneComponent__IsEnabledMapOnEvent(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  void *Instance; // x0
  __int64 v12; // x1
  WarEntity_o *v13; // x0
  WarEntity_o *v14; // x19
  int v15; // w8
  __int64 v16; // x9
  int *v17; // x11

  if ( (byte_42E4ED4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_MapMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E4ED4 = 1;
  }
  if ( !eventId )
    return 1;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_19;
  v13 = WarMaster__getByEventId((WarMaster_o *)Instance, eventId, 0LL);
  if ( !v13 )
    return 1;
  v14 = v13;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_MapMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = MapMaster__getList((MapMaster_o *)Instance, v14->fields.id, 0LL);
  if ( !Instance )
    goto LABEL_19;
  v15 = *((_DWORD *)Instance + 6);
  if ( v15 >= 1 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      v17 = (int *)*((_QWORD *)Instance + v16 + 4);
      if ( !v17 )
        break;
      if ( v17[6] >= 1 && v17[7] >= 1 && v17[8] > 0 )
        return 1;
      if ( (int)++v16 >= v15 )
        return 0;
    }
LABEL_19:
    sub_B5D69C(Instance, v12);
  }
  return 0;
}


bool __fastcall TerminalSceneComponent__IsMapActive(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalMap_o *mTerminalMap; // x8

  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap || (this = (TerminalSceneComponent_o *)mTerminalMap->fields.mapButtonGrid) == 0LL )
    sub_B5D69C(this, method);
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
}


bool __fastcall TerminalSceneComponent__IsMapTouchEnabled(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  ScrTerminalMap_o *mTerminalMap; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  System_String_o *v19; // x20

  if ( (byte_42E4ED8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_9011/*"Map Touch Enable"*/, v14, v15, v16);
    byte_42E4ED8 = 1;
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
  v19 = (System_String_o *)mTerminalMap;
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
  if ( !v19 )
    goto LABEL_57;
  if ( (System_String__IndexOf_44650136(v19, (System_String_o *)StringLiteral_9011/*"Map Touch Enable"*/, 0LL) & 0x80000000) != 0
    || MainMenuBar__get_IsEnableOutSideCollider(0LL) )
  {
    return 0;
  }
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_57;
  if ( CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_57;
  if ( CommonUI__IsActive_ApRecvDlgComp((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_57;
  if ( CommonUI__IsActive_EventItemSelectDlgComp((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_57;
  if ( CommonUI__IsActive_CommonConfirmDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_57;
  if ( CommonUI__IsActive_NotifiDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_57;
  if ( CommonUI__IsActive_TutorialBigDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_57;
  if ( CommonUI__IsActive_MasterMission((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_57;
  if ( CommonUI__IsActive_MasterProfile((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_57;
  if ( CommonUI__IsActive_MissionListDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_57;
  if ( CommonUI__IsActive_AssistEffectConfirmDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_57;
  if ( CommonUI__IsActive_CommandAssistConfirmDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_57;
  if ( CommonUI__IsActive_AchievementExchangeConditionsDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_57;
  if ( CommonUI__IsActive_SvtFrameShortDialog((CommonUI_o *)mTerminalMap, 0LL) )
    return 0;
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_57;
  if ( QuestAfterAction__IsPlaying((QuestAfterAction_o *)mTerminalMap, 0LL) )
    return 0;
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  mTerminalMap = (ScrTerminalMap_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !mTerminalMap )
LABEL_57:
    sub_B5D69C(mTerminalMap, method);
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
    sub_B5D69C(this, 0LL);
  return shopEntity->fields.shopType == 11
      && shopEntity->fields.purchaseType == 14
      && !ShopEntity__IsEligibleForFreeFeaturesTheCostumeRelease(shopEntity, 0LL);
}


bool __fastcall TerminalSceneComponent__IsPlayChapterStart(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  _BOOL4 IsWarStartAnim_k__BackingField; // w23
  _BOOL4 v15; // w24
  _BOOL4 IsWarStartActionSkip; // w19
  __int64 v17; // x1
  int v18; // w2
  __int64 v19; // x3
  QuestTree_o *v20; // x20
  TerminalPramsManager_c *v21; // x0
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v23; // x20
  int64_t targetId; // x19
  int v25; // w1
  const MethodInfo *v26; // x2
  __int64 v27; // x3
  TerminalPramsManager_c *v28; // x0

  if ( (byte_42E4EE8 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v11, v12, v13);
    byte_42E4EE8 = 1;
  }
  IsWarStartAnim_k__BackingField = this->fields._IsWarStartAnim_k__BackingField;
  v15 = this->fields.mTutorialKind == 1;
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
  v20 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B20 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v17, v18, v19);
    byte_42E4B20 = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v21 = TerminalPramsManager_TypeInfo;
  }
  if ( !v20 )
    sub_B5D69C(v21, v17);
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(v20, v21->static_fields->_WarId_k__BackingField, 0LL);
  if ( !WarEntityByWarID )
    return 0;
  v23 = WarEntityByWarID;
  if ( WarEntity__IsMainInterlude(WarEntityByWarID, 0LL)
    && WarEntity__IsPurchasedByRarePrism(v23, 0LL)
    && WarEntity__IsStartTypeQuest(v23, 0LL) )
  {
    targetId = v23->fields.targetId;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsQuestPhaseClear_25933948(targetId, 1, -1, 0, 0LL) )
      return 0;
  }
  else if ( !IsWarStartAnim_k__BackingField && !v15 || IsWarStartActionSkip )
  {
    return 0;
  }
  if ( !WarEntity__GetStartType(v23, 0LL) )
    return 0;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B20 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v25, (_DWORD)v26, v27);
    byte_42E4B20 = 1;
  }
  v28 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v28 = TerminalPramsManager_TypeInfo;
  }
  return TerminalSceneComponent__CheckPlayChapterStart(
           (TerminalSceneComponent_o *)v28,
           v28->static_fields->_WarId_k__BackingField,
           v26);
}


bool __fastcall TerminalSceneComponent__IsTerminalListAreaWait(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ScrTerminalListTop_o *mTerminalList; // x0

  if ( (byte_42E4EB2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1763/*"AREA WAIT"*/, (_DWORD)method, v2, v3);
    byte_42E4EB2 = 1;
  }
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList
    || (mTerminalList = (ScrTerminalListTop_o *)ScrTerminalListTop__mfGetMyFsmP(mTerminalList, 0LL)) == 0LL
    || (mTerminalList = (ScrTerminalListTop_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)mTerminalList, 0LL)) == 0LL )
  {
    sub_B5D69C(mTerminalList, method);
  }
  return System_String__IndexOf_44650136((System_String_o *)mTerminalList, (System_String_o *)StringLiteral_1763/*"AREA WAIT"*/, 0LL) >= 0;
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

  if ( (byte_42E4EBE & 1) == 0 )
  {
    sub_B5D5C4(&TerminalSceneComponent__LoadAsync_d__171_TypeInfo, (_DWORD)usd, (_DWORD)callback, method);
    byte_42E4EBE = 1;
  }
  v7 = (TerminalSceneComponent__LoadAsync_d__171_o *)sub_B5D694(TerminalSceneComponent__LoadAsync_d__171_TypeInfo);
  TerminalSceneComponent__LoadAsync_d__171___ctor(v7, 0, 0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  v7->fields.__4__this = this;
  sub_B5D560(&v7->fields.__4__this);
  v7->fields.usd = usd;
  sub_B5D560(&v7->fields.usd);
  v7->fields.callback = callback;
  sub_B5D560(&v7->fields.callback);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UnityEngine_Component_o *uiRoot; // x8
  UnityEngine_Transform_o *v11; // x21
  const MethodInfo_234ED58 *v12; // x2
  float v13; // s0
  float v14; // s1
  float v15; // s2
  float v16; // s8
  float v17; // s9
  float v18; // s10
  System_Nullable_Vector3__o v19; // [xsp+0h] [xbp-50h] BYREF
  System_Nullable_Vector3__o v20; // 0:x0.16
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  v4 = *(_QWORD *)&localScale.fields.value.fields.z;
  v6 = this;
  v19 = localScale;
  if ( (byte_42E4EFA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Nullable_Vector3__get_HasValue__,
      (_DWORD)dialog,
      LODWORD(localScale.fields.value.fields.x),
      *(_QWORD *)&localScale.fields.value.fields.z);
    this = (TerminalSceneComponent_o *)sub_B5D5C4(&Method_System_Nullable_Vector3__get_Value__, v7, v8, v9);
    byte_42E4EFA = 1;
  }
  if ( !dialog )
    goto LABEL_11;
  this = (TerminalSceneComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL);
  uiRoot = (UnityEngine_Component_o *)v6->fields.uiRoot;
  if ( !uiRoot )
    goto LABEL_11;
  v11 = (UnityEngine_Transform_o *)this;
  this = (TerminalSceneComponent_o *)UnityEngine_Component__get_transform(uiRoot, 0LL);
  if ( !v11 )
    goto LABEL_11;
  UnityEngine_Transform__SetParent(v11, (UnityEngine_Transform_o *)this, 0LL);
  if ( (v4 & 0xFF00000000LL) != 0 )
  {
    *(_QWORD *)&v20.fields.value.fields.x = &v19;
    *(_QWORD *)&v20.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
    *(UnityEngine_Vector3_o *)&v13 = System_Nullable_Vector3___get_Value(v20, v12);
  }
  else
  {
    *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_one(0LL);
  }
  v16 = v13;
  v17 = v14;
  v18 = v15;
  this = (TerminalSceneComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL);
  if ( !this )
LABEL_11:
    sub_B5D69C(this, dialog);
  v21.fields.x = v16;
  v21.fields.y = v17;
  v21.fields.z = v18;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v21, 0LL);
}


void __fastcall TerminalSceneComponent__OnCorePress(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct BaseCore_o *mEarthCore; // x0

  mEarthCore = this->fields.mEarthCore;
  if ( !mEarthCore )
    sub_B5D69C(0LL, method);
  ((void (__fastcall *)(struct BaseCore_o *, Il2CppMethodPointer))mEarthCore->klass->vtable._7_OnPress.method)(
    mEarthCore,
    mEarthCore->klass->vtable._8_Setup.methodPtr);
}


void __fastcall TerminalSceneComponent__OnCoreRelease(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  BaseCore_o *mEarthCore; // x0

  mEarthCore = this->fields.mEarthCore;
  if ( !mEarthCore )
    sub_B5D69C(0LL, method);
  BaseCore__OnRelease(mEarthCore, 0LL);
}


void __fastcall TerminalSceneComponent__OnDestroy(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  TerminalSceneComponent_c *v14; // x0
  UnityEngine_Object_o *mInstance; // x20
  TerminalSceneComponent_c *v16; // x0
  struct TerminalSceneComponent_StaticFields *static_fields; // x0
  __int64 v18; // x20
  __int64 v19; // x20
  UnityEngine_Object_o *v20; // x20
  struct System_String_o **p_loadEarthAssetName; // x19
  System_String_o *v22; // x20

  if ( (byte_42E4EBA & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__getInstance__, v8, v9, v10);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v11, v12, v13);
    byte_42E4EBA = 1;
  }
  v14 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v14 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v14->static_fields->mInstance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mInstance, (UnityEngine_Object_o *)this, 0LL) )
  {
    v16 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v16 = TerminalSceneComponent_TypeInfo;
    }
    static_fields = v16->static_fields;
    static_fields->mInstance = 0LL;
    sub_B5D560(static_fields);
    v18 = *((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
      sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 3));
    v19 = **(_QWORD **)(v18 + 192);
    if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
      sub_AF52C4(v19);
    v20 = **(UnityEngine_Object_o ***)(v19 + 184);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    p_loadEarthAssetName = &this->fields.loadEarthAssetName;
    if ( UnityEngine_Object__op_Implicit(v20, 0LL) )
    {
      v22 = *p_loadEarthAssetName;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAssetStorage(v22, 0LL);
    }
    *p_loadEarthAssetName = 0LL;
    sub_B5D560(p_loadEarthAssetName);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  System_String_o *String_35648228; // x24
  System_Char_array *v96; // x0
  System_Char_array *v97; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v98; // x24
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v99; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v100; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v101; // x24
  TerminalSceneComponent___c_c *v102; // x8
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x9
  System_Func_int__BattleActionData_SideEffectData__o *_9__247_0; // x25
  Il2CppObject *v105; // x26
  struct TerminalSceneComponent___c_StaticFields *v106; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v107; // x0
  System_Collections_Generic_List_TSource__o *v108; // x0
  TerminalSceneComponent___c_c *v109; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v110; // x24
  struct TerminalSceneComponent___c_StaticFields *v111; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__247_1; // x25
  Il2CppObject *v113; // x26
  struct TerminalSceneComponent___c_StaticFields *v114; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v115; // x0
  TerminalSceneComponent___c_c *v116; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v117; // x24
  struct TerminalSceneComponent___c_StaticFields *v118; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__247_2; // x25
  Il2CppObject *v120; // x26
  struct TerminalSceneComponent___c_StaticFields *v121; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v122; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v123; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v124; // x0
  System_Collections_Generic_List_TSource__o *v125; // x0
  TerminalSceneComponent___c_c *v126; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v127; // x23
  struct TerminalSceneComponent___c_StaticFields *v128; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__247_4; // x24
  Il2CppObject *v130; // x25
  struct TerminalSceneComponent___c_StaticFields *v131; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v132; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v133; // x23
  CommonUI_o *Instance; // x24
  System_String_o *v135; // x22
  System_Action_o *v136; // x4
  TerminalSceneComponent___c_c *v137; // x0
  struct TerminalSceneComponent___c_StaticFields *v138; // x8
  System_Func_int__BattleActionData_SideEffectData__o *_9__247_5; // x24
  Il2CppObject *v140; // x25
  struct TerminalSceneComponent___c_StaticFields *v141; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v142; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v143; // x25
  System_String_o *v144; // x0
  TerminalSceneComponent___c_c *v145; // x8
  System_String_o *v146; // x21
  struct TerminalSceneComponent___c_StaticFields *v147; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__247_6; // x26
  Il2CppObject *v149; // x27
  struct TerminalSceneComponent___c_StaticFields *v150; // x0
  Il2CppObject *v151; // x0
  __int64 v152; // x0
  int32_t v153; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_42E4EF5 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)playerPrefsKey, (_DWORD)localizationKeyForTitle, localizationKeyForDetail);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_int__ShopEntity___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_ShopEntity__int___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_string__int___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Sum_ShopEntity___, v20, v21, v22);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v23, v24, v25);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_ShopEntity___, v26, v27, v28);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_ShopEntity___, v29, v30, v31);
    sub_B5D5C4(&Method_System_Func_int__ShopEntity___ctor__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Func_ShopEntity__bool___ctor__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Func_ShopEntity__int___ctor__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Func_string__int___ctor__, v41, v42, v43);
    sub_B5D5C4(&System_Func_string__int__TypeInfo, v44, v45, v46);
    sub_B5D5C4(&System_Func_ShopEntity__int__TypeInfo, v47, v48, v49);
    sub_B5D5C4(&System_Func_ShopEntity__bool__TypeInfo, v50, v51, v52);
    sub_B5D5C4(&System_Func_int__ShopEntity__TypeInfo, v53, v54, v55);
    sub_B5D5C4(&Method_System_Int32_Parse__, v56, v57, v58);
    sub_B5D5C4(&int_TypeInfo, v59, v60, v61);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v62, v63, v64);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v65, v66, v67);
    sub_B5D5C4(&Method_TerminalSceneComponent__OpenExchangeDialogue_b__247_3__, v68, v69, v70);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__247_0__, v71, v72, v73);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__247_1__, v74, v75, v76);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__247_2__, v77, v78, v79);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__247_4__, v80, v81, v82);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__247_5__, v83, v84, v85);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__247_6__, v86, v87, v88);
    sub_B5D5C4(&TerminalSceneComponent___c_TypeInfo, v89, v90, v91);
    sub_B5D5C4(&StringLiteral_19127/*"freeShopIds"*/, v92, v93, v94);
    byte_42E4EF5 = 1;
  }
  String_35648228 = UnityEngine_PlayerPrefs__GetString_35648228(playerPrefsKey, 0LL);
  v96 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v96 )
    goto LABEL_70;
  v97 = v96;
  if ( !v96->max_length )
  {
    v152 = sub_B5D6C8(v96);
    sub_B5D668(v152, 0LL);
  }
  v96->m_Items[2] = 44;
  if ( !String_35648228 )
    goto LABEL_70;
  v98 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_35648228, v96, 0LL);
  v99 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_string__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v99,
    0LL,
    Method_System_Int32_Parse__,
    (const MethodInfo_2C2F87C *)Method_System_Func_string__int___ctor__);
  v100 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                v98,
                                                                (System_Func_TSource__TResult__o *)v99,
                                                                (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_string__int___);
  v101 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                v100,
                                                                (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  v102 = TerminalSceneComponent___c_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v102 = TerminalSceneComponent___c_TypeInfo;
  }
  static_fields = v102->static_fields;
  _9__247_0 = (System_Func_int__BattleActionData_SideEffectData__o *)static_fields->__9__247_0;
  if ( !_9__247_0 )
  {
    if ( (BYTE3(v102->vtable._0_Equals.methodPtr) & 4) != 0 && !v102->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v102);
      static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    }
    v105 = (Il2CppObject *)static_fields->__9;
    _9__247_0 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B5D694(System_Func_int__ShopEntity__TypeInfo);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      _9__247_0,
      v105,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__247_0__,
      (const MethodInfo_2C29938 *)Method_System_Func_int__ShopEntity___ctor__);
    v106 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v106->__9__247_0 = (struct System_Func_int__ShopEntity__o *)_9__247_0;
    sub_B5D560(&v106->__9__247_0);
  }
  v107 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                                v101,
                                                                (System_Func_TSource__TResult__o *)_9__247_0,
                                                                (const MethodInfo_1CB1D40 *)Method_System_Linq_Enumerable_Select_int__ShopEntity___);
  v108 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
           v107,
           (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
  v109 = TerminalSceneComponent___c_TypeInfo;
  v110 = (System_Collections_Generic_IEnumerable_TSource__o *)v108;
  if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v109 = TerminalSceneComponent___c_TypeInfo;
  }
  v111 = v109->static_fields;
  _9__247_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v111->__9__247_1;
  if ( !_9__247_1 )
  {
    if ( (BYTE3(v109->vtable._0_Equals.methodPtr) & 4) != 0 && !v109->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v109);
      v111 = TerminalSceneComponent___c_TypeInfo->static_fields;
    }
    v113 = (Il2CppObject *)v111->__9;
    _9__247_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__247_1,
      v113,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__247_1__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_ShopEntity__bool___ctor__);
    v114 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v114->__9__247_1 = (struct System_Func_ShopEntity__bool__o *)_9__247_1;
    sub_B5D560(&v114->__9__247_1);
  }
  v115 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
           v110,
           (System_Func_TSource__bool__o *)_9__247_1,
           (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v116 = TerminalSceneComponent___c_TypeInfo;
  v117 = v115;
  if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v116 = TerminalSceneComponent___c_TypeInfo;
  }
  v118 = v116->static_fields;
  _9__247_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v118->__9__247_2;
  if ( !_9__247_2 )
  {
    if ( (BYTE3(v116->vtable._0_Equals.methodPtr) & 4) != 0 && !v116->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v116);
      v118 = TerminalSceneComponent___c_TypeInfo->static_fields;
    }
    v120 = (Il2CppObject *)v118->__9;
    _9__247_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__247_2,
      v120,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__247_2__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_ShopEntity__bool___ctor__);
    v121 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v121->__9__247_2 = (struct System_Func_ShopEntity__bool__o *)_9__247_2;
    sub_B5D560(&v121->__9__247_2);
  }
  v122 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
           v117,
           (System_Func_TSource__bool__o *)_9__247_2,
           (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v123 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_ShopEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v123,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent__OpenExchangeDialogue_b__247_3__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_ShopEntity__bool___ctor__);
  v124 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
           v122,
           (System_Func_TSource__bool__o *)v123,
           (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v125 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
           v124,
           (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
  v126 = TerminalSceneComponent___c_TypeInfo;
  v127 = (System_Collections_Generic_IEnumerable_TSource__o *)v125;
  if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v126 = TerminalSceneComponent___c_TypeInfo;
  }
  v128 = v126->static_fields;
  _9__247_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v128->__9__247_4;
  if ( !_9__247_4 )
  {
    if ( (BYTE3(v126->vtable._0_Equals.methodPtr) & 4) != 0 && !v126->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v126);
      v128 = TerminalSceneComponent___c_TypeInfo->static_fields;
    }
    v130 = (Il2CppObject *)v128->__9;
    _9__247_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_ShopEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__247_4,
      v130,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__247_4__,
      (const MethodInfo_2C2F87C *)Method_System_Func_ShopEntity__int___ctor__);
    v131 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v131->__9__247_4 = (struct System_Func_ShopEntity__int__o *)_9__247_4;
    sub_B5D560(&v131->__9__247_4);
  }
  v132 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                v127,
                                                                (System_Func_TSource__TResult__o *)_9__247_4,
                                                                (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_ShopEntity__int___);
  v96 = (System_Char_array *)System_Linq_Enumerable__ToArray_int_(
                               v132,
                               (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v96 )
    goto LABEL_70;
  v133 = (System_Collections_Generic_IEnumerable_TSource__o *)v96;
  if ( *(_QWORD *)&v96->max_length )
  {
    if ( System_String__op_Equality(playerPrefsKey, (System_String_o *)StringLiteral_19127/*"freeShopIds"*/, 0LL) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v135 = LocalizationManager__Get(localizationKeyForTitle, 0LL);
      v96 = (System_Char_array *)LocalizationManager__Get(localizationKeyForDetail, 0LL);
      v136 = action;
      if ( !Instance )
        goto LABEL_70;
      goto LABEL_68;
    }
    v137 = TerminalSceneComponent___c_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v137 = TerminalSceneComponent___c_TypeInfo;
    }
    v138 = v137->static_fields;
    _9__247_5 = (System_Func_int__BattleActionData_SideEffectData__o *)v138->__9__247_5;
    if ( !_9__247_5 )
    {
      if ( (BYTE3(v137->vtable._0_Equals.methodPtr) & 4) != 0 && !v137->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v137);
        v138 = TerminalSceneComponent___c_TypeInfo->static_fields;
      }
      v140 = (Il2CppObject *)v138->__9;
      _9__247_5 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B5D694(System_Func_int__ShopEntity__TypeInfo);
      System_Func_int__BattleActionData_SideEffectData____ctor(
        _9__247_5,
        v140,
        Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__247_5__,
        (const MethodInfo_2C29938 *)Method_System_Func_int__ShopEntity___ctor__);
      v141 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v141->__9__247_5 = (struct System_Func_int__ShopEntity__o *)_9__247_5;
      sub_B5D560(&v141->__9__247_5);
    }
    v142 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                                  v133,
                                                                  (System_Func_TSource__TResult__o *)_9__247_5,
                                                                  (const MethodInfo_1CB1D40 *)Method_System_Linq_Enumerable_Select_int__ShopEntity___);
    v143 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                  v142,
                                                                  (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v135 = LocalizationManager__Get(localizationKeyForTitle, 0LL);
    v144 = LocalizationManager__Get(localizationKeyForDetail, 0LL);
    v145 = TerminalSceneComponent___c_TypeInfo;
    v146 = v144;
    if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v145 = TerminalSceneComponent___c_TypeInfo;
    }
    v147 = v145->static_fields;
    _9__247_6 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v147->__9__247_6;
    if ( !_9__247_6 )
    {
      if ( (BYTE3(v145->vtable._0_Equals.methodPtr) & 4) != 0 && !v145->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v145);
        v147 = TerminalSceneComponent___c_TypeInfo->static_fields;
      }
      v149 = (Il2CppObject *)v147->__9;
      _9__247_6 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_ShopEntity__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__247_6,
        v149,
        Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__247_6__,
        (const MethodInfo_2C2F87C *)Method_System_Func_ShopEntity__int___ctor__);
      v150 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v150->__9__247_6 = (struct System_Func_ShopEntity__int__o *)_9__247_6;
      sub_B5D560(&v150->__9__247_6);
    }
    v153 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
             v143,
             (System_Func_TSource__int__o *)_9__247_6,
             (const MethodInfo_1CB6D68 *)Method_System_Linq_Enumerable_Sum_ShopEntity___);
    v151 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v153);
    v96 = (System_Char_array *)System_String__Format(v146, v151, 0LL);
    if ( Instance )
    {
      v136 = action;
LABEL_68:
      CommonUI__OpenAchievementExchangeConditionsDialog(
        Instance,
        (System_Int32_array *)v133,
        v135,
        (System_String_o *)v96,
        v136,
        0LL);
      goto LABEL_69;
    }
LABEL_70:
    sub_B5D69C(v96, v97);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  WarEntity_o *IsPlayChapterStart; // x0
  __int64 v31; // x1
  int v32; // w2
  __int64 v33; // x3
  QuestTree_o *v34; // x20
  WarEntity_o *v35; // x20
  int32_t StartType; // w0
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  BattleScriptRootComponent_TalkScriptInfo_o *v40; // x21
  TerminalPramsManager_c *v41; // x0
  int32_t v42; // w22
  TerminalPramsManager_c *v43; // x0
  int32_t targetId; // w22
  int32_t WarId_k__BackingField; // w23
  TerminalPramsManager_c *v46; // x0
  BalanceConfig_c *v47; // x8
  int32_t v48; // w22
  TerminalSceneComponent_c *v49; // x0
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int64_t v53; // x22
  TerminalPramsManager_c *v54; // x0
  int32_t v55; // w22
  TerminalPramsManager_c *v56; // x0

  if ( (byte_42E4EEA & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)end_act, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v27, v28, v29);
    byte_42E4EEA = 1;
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
  sub_B5D560(&this->fields.OnResumeFromChapterStart);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v34 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B20 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v31, v32, v33);
    byte_42E4B20 = 1;
  }
  IsPlayChapterStart = (WarEntity_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IsPlayChapterStart = (WarEntity_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v34 )
    goto LABEL_85;
  IsPlayChapterStart = QuestTree__mfGetWarEntityByWarID(
                         v34,
                         *(_DWORD *)(*(_QWORD *)&IsPlayChapterStart[1].fields.parentWarId + 4LL),
                         0LL);
  if ( !IsPlayChapterStart )
    goto LABEL_85;
  v35 = IsPlayChapterStart;
  StartType = WarEntity__GetStartType(IsPlayChapterStart, 0LL);
  if ( StartType == 2 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B20 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v37, v38, v39);
      byte_42E4B20 = 1;
    }
    v43 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v43 = TerminalPramsManager_TypeInfo;
    }
    targetId = v35->fields.targetId;
    WarId_k__BackingField = v43->static_fields->_WarId_k__BackingField;
    v40 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_B5D694(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    BattleScriptRootComponent_TalkScriptInfo___ctor_20491572(v40, WarId_k__BackingField, targetId, 0, 1, 0, 0, 0, 0LL);
  }
  else
  {
    v40 = 0LL;
    if ( StartType == 1 )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E4B20 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v37, v38, v39);
        byte_42E4B20 = 1;
      }
      v41 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v41 = TerminalPramsManager_TypeInfo;
      }
      v42 = v41->static_fields->_WarId_k__BackingField;
      v40 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_B5D694(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
      BattleScriptRootComponent_TalkScriptInfo___ctor_20491572(v40, v42, 0, 0, 1, 0, 0, 0, 0LL);
    }
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B20 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v37, v38, v39);
    byte_42E4B20 = 1;
  }
  v46 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v46 = TerminalPramsManager_TypeInfo;
  }
  v47 = BalanceConfig_TypeInfo;
  v48 = v46->static_fields->_WarId_k__BackingField;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v47 = BalanceConfig_TypeInfo;
  }
  if ( v48 == v47->static_fields->OrdealCallWarId )
  {
    v49 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v49 = TerminalSceneComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v49->static_fields->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY, 1, 0LL);
  }
  if ( WarEntity__HasFlag(v35, 0x8000, 0LL) )
  {
    v53 = v35->fields.targetId;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B24 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v50, v51, v52);
      byte_42E4B24 = 1;
    }
    v54 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v54 = TerminalPramsManager_TypeInfo;
    }
    v54->static_fields->_QuestId_k__BackingField = v53;
    v55 = v35->fields.targetId;
    if ( !byte_42E4B79 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v50, v51, v52);
      v54 = TerminalPramsManager_TypeInfo;
      byte_42E4B79 = 1;
    }
    if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v54);
      v54 = TerminalPramsManager_TypeInfo;
    }
    v54->static_fields->_LastPlayedQuestId_k__BackingField = v55;
    TerminalPramsManager__CheckClearSelectedStoryQuestId(v35->fields.targetId, 0LL);
    TerminalPramsManager__PlayQuestSave_SaveData(0LL);
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    IsPlayChapterStart = (WarEntity_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( IsPlayChapterStart )
    {
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)IsPlayChapterStart, 0LL);
      IsPlayChapterStart = (WarEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( IsPlayChapterStart )
      {
        AvalonSceneManager__changeScene((AvalonSceneManager_o *)IsPlayChapterStart, 38, 2, (Il2CppObject *)v40, 0LL);
        return;
      }
    }
LABEL_85:
    sub_B5D69C(IsPlayChapterStart, v31);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B76 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v50, v51, v52);
    byte_42E4B76 = 1;
  }
  v56 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v56 = TerminalPramsManager_TypeInfo;
  }
  v56->static_fields->meSceneStatus = 3;
  IsPlayChapterStart = (WarEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !IsPlayChapterStart )
    goto LABEL_85;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)IsPlayChapterStart, 38, 2, (Il2CppObject *)v40, 0LL);
}


void __fastcall TerminalSceneComponent__PlayEventTutorial(
        TerminalSceneComponent_o *this,
        System_Action_o *callbakAfter,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  TerminalSceneComponent___c__DisplayClass224_0_o *v15; // x20
  UnityEngine_Component_o *EventID; // x0
  __int64 v17; // x1
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  TerminalPramsManager_c *v21; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  int32_t v23; // w21
  System_Action_o *v24; // x22
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct WarEntity_o *mWarEnt; // x8

  if ( (byte_42E4EEB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callbakAfter, (_DWORD)method, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass224_0__PlayEventTutorial_b__0__, v9, v10, v11);
    sub_B5D5C4(&TerminalSceneComponent___c__DisplayClass224_0_TypeInfo, v12, v13, v14);
    byte_42E4EEB = 1;
  }
  v15 = (TerminalSceneComponent___c__DisplayClass224_0_o *)sub_B5D694(TerminalSceneComponent___c__DisplayClass224_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass224_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_18;
  v15->fields.__4__this = this;
  sub_B5D560(&v15->fields);
  v15->fields.callbakAfter = callbakAfter;
  sub_B5D560(&v15->fields.callbakAfter);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B20 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v18, v19, v20);
    byte_42E4B20 = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v21 = TerminalPramsManager_TypeInfo;
  }
  EventID = (UnityEngine_Component_o *)WarMaster__getEventID(v21->static_fields->_WarId_k__BackingField, 0LL);
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_18;
  v23 = (int)EventID;
  EventID = (UnityEngine_Component_o *)mTerminalList->fields.mActionBgColl;
  if ( !EventID
    || (EventID = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(EventID, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EventID, 1, 0LL),
        v24 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v24,
          (Il2CppObject *)v15,
          Method_TerminalSceneComponent___c__DisplayClass224_0__PlayEventTutorial_b__0__,
          0LL),
        (mTerminalMap = this->fields.mTerminalMap) == 0LL)
    || (mWarEnt = mTerminalMap->fields.mWarEnt) == 0LL )
  {
LABEL_18:
    sub_B5D69C(EventID, v17);
  }
  EventTutorialMaster__CheckTutorial(v23, 1, v24, *(&mWarEnt->fields.id + 1), 0, 0, 0, 0LL);
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
    sub_B5D69C(mQuestInformation, method);
  return QuestInformationComponent__isListBuilding(mQuestInformation, 0LL);
}


int32_t __fastcall TerminalSceneComponent__QuestInfoShowing(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct QuestInformationComponent_o *mQuestInformation; // x8

  mQuestInformation = this->fields.mQuestInformation;
  if ( !mQuestInformation )
    sub_B5D69C(this, method);
  return mQuestInformation->fields.settedQuestId;
}


void __fastcall TerminalSceneComponent__RebootToNetworkError(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  CommonUI_o *Instance; // x19
  System_String_o *v23; // x20
  System_String_o *v24; // x0
  __int64 v25; // x1
  System_String_o *v26; // x21
  TerminalSceneComponent___c_c *v27; // x8
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x9
  ErrorDialog_ClickDelegate_o *_9__208_0; // x22
  Il2CppObject *v30; // x23
  struct TerminalSceneComponent___c_StaticFields *v31; // x0

  if ( (byte_42E4EE1 & 1) == 0 )
  {
    sub_B5D5C4(&ErrorDialog_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8, v9);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__RebootToNetworkError_b__208_0__, v10, v11, v12);
    sub_B5D5C4(&TerminalSceneComponent___c_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_13504/*"TERMINAL_NETWORK_ERROR_DIALOG_TITLE"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_13503/*"TERMINAL_NETWORK_ERROR_DIALOG_MESSAGE"*/, v19, v20, v21);
    byte_42E4EE1 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_13504/*"TERMINAL_NETWORK_ERROR_DIALOG_TITLE"*/, 0LL);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_13503/*"TERMINAL_NETWORK_ERROR_DIALOG_MESSAGE"*/, 0LL);
  v26 = v24;
  v27 = TerminalSceneComponent___c_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v27 = TerminalSceneComponent___c_TypeInfo;
  }
  static_fields = v27->static_fields;
  _9__208_0 = static_fields->__9__208_0;
  if ( !_9__208_0 )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__208_0 = (ErrorDialog_ClickDelegate_o *)sub_B5D694(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(
      _9__208_0,
      v30,
      Method_TerminalSceneComponent___c__RebootToNetworkError_b__208_0__,
      0LL);
    v31 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v31->__9__208_0 = _9__208_0;
    sub_B5D560(&v31->__9__208_0);
  }
  if ( !Instance )
    sub_B5D69C(v24, v25);
  CommonUI__OpenErrorDialog(Instance, v23, v26, _9__208_0, 1, 0LL);
}


void __fastcall TerminalSceneComponent__SendMessageStartUpAndResume(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WebViewManager_o *Instance; // x0
  __int64 v9; // x1
  CommonUI_o *v10; // x20
  TerminalSceneComponent_PlayChapterStartCallback_o *v11; // x0
  struct TerminalSceneComponent_PlayChapterStartCallback_o **p_OnResumeFromChapterStart; // x19
  struct TerminalSceneComponent_PlayChapterStartCallback_o *OnResumeFromChapterStart; // t1

  if ( (byte_42E4EBF & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    byte_42E4EBF = 1;
  }
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
  if ( this->fields.isFadeInAfterResumeLoad )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (CommonUI_o *)Instance;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    }
    if ( !v10 )
      sub_B5D69C(Instance, v9);
    CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
    this->fields.isFadeInAfterResumeLoad = 0;
  }
  OnResumeFromChapterStart = this->fields.OnResumeFromChapterStart;
  p_OnResumeFromChapterStart = &this->fields.OnResumeFromChapterStart;
  v11 = OnResumeFromChapterStart;
  if ( OnResumeFromChapterStart )
  {
    TerminalSceneComponent_PlayChapterStartCallback__Invoke(v11, 1, 0LL);
    *p_OnResumeFromChapterStart = 0LL;
    sub_B5D560(p_OnResumeFromChapterStart);
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
    sub_B5D69C(this, isEnable);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isEnable, 0LL);
  ActionExtensions__Call(callback, 0LL);
}


void __fastcall TerminalSceneComponent__SetDirectionalLightActive(
        TerminalSceneComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *GameObjectWithLog; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E4EFC & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isActive, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_5379/*"Directional light"*/, v6, v7, v8);
    byte_42E4EFC = 1;
  }
  GameObjectWithLog = (UnityEngine_Object_o *)GameObjectExtensions__FindGameObjectWithLog(
                                                this->fields.mEarthCoreObj,
                                                (System_String_o *)StringLiteral_5379/*"Directional light"*/,
                                                0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Equality(GameObjectWithLog, 0LL, 0LL);
  if ( !v10 )
  {
    if ( !GameObjectWithLog )
      sub_B5D69C(v10, v11);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)GameObjectWithLog, isActive, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent__SetDispStandServant(
        TerminalSceneComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Component_o *mTerminalServant; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  long double v8; // q0

  if ( (byte_42E4EC9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, isDisp, (_DWORD)method, v3);
    byte_42E4EC9 = 1;
  }
  mTerminalServant = (UnityEngine_Component_o *)this->fields.mTerminalServant;
  if ( !mTerminalServant
    || (gameObject = UnityEngine_Component__get_gameObject(mTerminalServant, 0LL),
        (mTerminalServant = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL)) == 0LL)
    || (mTerminalServant = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mTerminalServant, 0LL)) == 0LL
    || (mTerminalServant = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)mTerminalServant,
                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIPanel___)) == 0LL )
  {
    sub_B5D69C(mTerminalServant, isDisp);
  }
  LODWORD(v8) = 0;
  if ( isDisp )
    *(float *)&v8 = 1.0;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, long double))mTerminalServant->klass[1]._1.castClass)(
    mTerminalServant,
    mTerminalServant->klass[1]._1.declaringType,
    v8);
}


void __fastcall TerminalSceneComponent__SetEarthView(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  TerminalSceneComponent___c__DisplayClass168_0_o *v27; // x20
  UnityEngine_Camera_o *mEarthEffCamera; // x0
  __int64 v29; // x1
  UnityEngine_Object_o *mEarthCore; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v32; // x0
  TerminalSceneComponent_c *v33; // x0
  int *v34; // x1
  System_String_o *EARTH_ASSET_NAME; // x21
  System_Int32_c *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  TerminalSceneComponent_c *v39; // x0
  Il2CppObject *v40; // x0
  WebViewManager_o *Instance; // x0
  System_String_o *loadEarthAssetName; // x19
  AssetManager_o *v43; // x21
  AssetLoader_LoadEndDataHandler_o *v44; // x22
  int v45; // [xsp+8h] [xbp-28h] BYREF
  int v46; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E4EBC & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass168_0__SetEarthView_b__0__, v21, v22, v23);
    sub_B5D5C4(&TerminalSceneComponent___c__DisplayClass168_0_TypeInfo, v24, v25, v26);
    byte_42E4EBC = 1;
  }
  v27 = (TerminalSceneComponent___c__DisplayClass168_0_o *)sub_B5D694(TerminalSceneComponent___c__DisplayClass168_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass168_0___ctor(v27, 0LL);
  if ( !v27 )
    goto LABEL_34;
  v27->fields.__4__this = this;
  sub_B5D560(&v27->fields);
  v27->fields.callback = callback;
  sub_B5D560(&v27->fields.callback);
  mEarthCore = (UnityEngine_Object_o *)this->fields.mEarthCore;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mEarthCore, 0LL, 0LL) )
  {
    ActionExtensions__Call(v27->fields.callback, 0LL);
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
              v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0LL);
              GameObjectExtensions__SetLocalPositionZ(v32, -792.87, 0LL);
              v33 = TerminalSceneComponent_TypeInfo;
              if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                v33 = TerminalSceneComponent_TypeInfo;
              }
              v34 = &v46;
              EARTH_ASSET_NAME = v33->static_fields->EARTH_ASSET_NAME;
              v36 = int_TypeInfo;
              v46 = 2;
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_34:
    sub_B5D69C(mEarthEffCamera, v29);
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
  v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0LL);
  GameObjectExtensions__SetLocalPositionZ(v37, -50000.0, 0LL);
  mEarthEffCamera = this->fields.mEarthEffCamera;
  if ( !mEarthEffCamera )
    goto LABEL_34;
  v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0LL);
  GameObjectExtensions__SetLocalPositionZ(v38, -50000.0, 0LL);
  v39 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v39 = TerminalSceneComponent_TypeInfo;
  }
  v34 = &v45;
  EARTH_ASSET_NAME = v39->static_fields->EARTH_ASSET_NAME;
  v36 = int_TypeInfo;
  v45 = 1;
LABEL_32:
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(v36, v34);
  this->fields.loadEarthAssetName = System_String__Format(EARTH_ASSET_NAME, v40, 0LL);
  sub_B5D560(&this->fields.loadEarthAssetName);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  loadEarthAssetName = this->fields.loadEarthAssetName;
  v43 = (AssetManager_o *)Instance;
  v44 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v44,
    (Il2CppObject *)v27,
    Method_TerminalSceneComponent___c__DisplayClass168_0__SetEarthView_b__0__,
    0LL);
  if ( !v43 )
    goto LABEL_34;
  AssetManager__LoadAssetStorage(v43, loadEarthAssetName, v44, 1, 0LL);
}


void __fastcall TerminalSceneComponent__SetQuestBoardInfoOff(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ScrTerminalListTop_o *mTerminalList; // x0

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    sub_B5D69C(0LL, method);
  ScrTerminalListTop__ShowingInfoAllOff(mTerminalList, 0LL);
}


void __fastcall TerminalSceneComponent__SetQuestInfoResetReady(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  QuestInformationComponent_o *mQuestInformation; // x0

  mQuestInformation = this->fields.mQuestInformation;
  if ( !mQuestInformation )
    sub_B5D69C(0LL, method);
  QuestInformationComponent__SetResetReady(mQuestInformation, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent__SetState(
        TerminalSceneComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct CStateManager_TerminalSceneComponent__o *mFSM; // x0

  if ( (byte_42E4EED & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_TerminalSceneComponent__setState__, state, (_DWORD)method, v3);
    byte_42E4EED = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2BB27A0 *)Method_CStateManager_TerminalSceneComponent__setState__);
}


void __fastcall TerminalSceneComponent__SetupStandServant(
        TerminalSceneComponent_o *this,
        UserServantEntity_o *usd,
        bool isSlideIn,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  TerminalSceneComponent___c__DisplayClass182_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  StandFigureSlideComponent_o *mTerminalServant; // x22
  System_Action_o *v22; // x23
  struct StandFigureSlideComponent_o *v23; // x19
  System_Action_o *v24; // x20

  if ( (byte_42E4EC8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)usd, isSlideIn, endAction);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass182_0__SetupStandServant_b__0__, v9, v10, v11);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass182_0__SetupStandServant_b__1__, v12, v13, v14);
    sub_B5D5C4(&TerminalSceneComponent___c__DisplayClass182_0_TypeInfo, v15, v16, v17);
    byte_42E4EC8 = 1;
  }
  v18 = (TerminalSceneComponent___c__DisplayClass182_0_o *)sub_B5D694(TerminalSceneComponent___c__DisplayClass182_0_TypeInfo);
  TerminalSceneComponent___c__DisplayClass182_0___ctor(v18, 0LL);
  if ( !v18 )
    goto LABEL_7;
  v18->fields.isSlideIn = isSlideIn;
  v18->fields.__4__this = this;
  sub_B5D560(&v18->fields.__4__this);
  v18->fields.endAction = endAction;
  sub_B5D560(&v18->fields.endAction);
  mTerminalServant = this->fields.mTerminalServant;
  v22 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v18,
    Method_TerminalSceneComponent___c__DisplayClass182_0__SetupStandServant_b__0__,
    0LL);
  if ( !mTerminalServant
    || (StandFigureSlideComponent__Setup(mTerminalServant, usd, 0, v22, 0LL),
        v23 = this->fields.mTerminalServant,
        v24 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v24,
          (Il2CppObject *)v18,
          Method_TerminalSceneComponent___c__DisplayClass182_0__SetupStandServant_b__1__,
          0LL),
        !v23) )
  {
LABEL_7:
    sub_B5D69C(v19, v20);
  }
  v23->fields.mBtnAct = v24;
  sub_B5D560(&v23->fields.mBtnAct);
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
    sub_B5D560(&this->fields.afterEventDailyPoint);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  TerminalPramsManager_c *v36; // x0
  TerminalPramsManager_c *v37; // x0
  TerminalSceneComponent_c *allMaskPanel; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8
  System_Action_Action__array *v41; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v42; // x21
  TerminalSceneComponent___c_c *v43; // x0
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__193_1; // x20
  Il2CppObject *v46; // x21
  struct TerminalSceneComponent___c_StaticFields *v47; // x0
  System_Action_Action__o *v48; // x8
  TerminalSceneComponent___c_c *v49; // x0
  struct TerminalSceneComponent___c_StaticFields *v50; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__193_2; // x20
  Il2CppObject *v52; // x21
  struct TerminalSceneComponent___c_StaticFields *v53; // x0
  System_Action_Action__o *v54; // x8
  TerminalSceneComponent___c_c *v55; // x0
  struct TerminalSceneComponent___c_StaticFields *v56; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__193_3; // x20
  Il2CppObject *v58; // x21
  struct TerminalSceneComponent___c_StaticFields *v59; // x0
  System_Action_Action__o *v60; // x8
  ActionChain_o *v61; // x20
  __int64 v62; // x0
  __int64 v63; // x0

  if ( (byte_42E4ED2 & 1) == 0 )
  {
    sub_B5D5C4(&ActionChain_TypeInfo, (_DWORD)callbackFunc, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_Action____TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Action_Action___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Action_Action__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_TerminalSceneComponent__StartWindowMessage_b__193_0__, v18, v19, v20);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__StartWindowMessage_b__193_1__, v24, v25, v26);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__StartWindowMessage_b__193_2__, v27, v28, v29);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__StartWindowMessage_b__193_3__, v30, v31, v32);
    sub_B5D5C4(&TerminalSceneComponent___c_TypeInfo, v33, v34, v35);
    byte_42E4ED2 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B32 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)callbackFunc, (_DWORD)method, v3);
    byte_42E4B32 = 1;
  }
  v36 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v36 = TerminalPramsManager_TypeInfo;
  }
  if ( v36->static_fields->_IsDispOnly_k__BackingField )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v36);
    if ( !byte_42E5019 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)callbackFunc, (_DWORD)method, v3);
      byte_42E5019 = 1;
    }
    v37 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v37 = TerminalPramsManager_TypeInfo;
    }
    if ( !System_String__IsNullOrEmpty(v37->static_fields->_QuestWindowMessage_k__BackingField, 0LL) )
    {
      v41 = (System_Action_Action__array *)sub_B5D5DC(System_Action_Action____TypeInfo, 4LL);
      v42 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        v42,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent__StartWindowMessage_b__193_0__,
        (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
      if ( !v41 )
        goto LABEL_75;
      if ( !v42 || (allMaskPanel = (TerminalSceneComponent_c *)sub_B5D684(v42, v41->obj.klass->_1.element_class)) != 0LL )
      {
        if ( !v41->max_length )
          goto LABEL_76;
        v41->m_Items[0] = (System_Action_Action__o *)v42;
        sub_B5D560(v41->m_Items);
        v43 = TerminalSceneComponent___c_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
          v43 = TerminalSceneComponent___c_TypeInfo;
        }
        static_fields = v43->static_fields;
        _9__193_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__193_1;
        if ( _9__193_1 )
          goto LABEL_48;
        if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v43);
          static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
        }
        v46 = (Il2CppObject *)static_fields->__9;
        _9__193_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          _9__193_1,
          v46,
          Method_TerminalSceneComponent___c__StartWindowMessage_b__193_1__,
          (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
        v47 = TerminalSceneComponent___c_TypeInfo->static_fields;
        v47->__9__193_1 = (struct System_Action_Action__o *)_9__193_1;
        sub_B5D560(&v47->__9__193_1);
        if ( _9__193_1 )
        {
LABEL_48:
          allMaskPanel = (TerminalSceneComponent_c *)sub_B5D684(_9__193_1, v41->obj.klass->_1.element_class);
          v48 = (System_Action_Action__o *)_9__193_1;
          if ( !allMaskPanel )
            goto LABEL_77;
        }
        else
        {
          v48 = 0LL;
        }
        if ( v41->max_length <= 1 )
          goto LABEL_76;
        v41->m_Items[1] = v48;
        sub_B5D560(&v41->m_Items[1]);
        v49 = TerminalSceneComponent___c_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
          v49 = TerminalSceneComponent___c_TypeInfo;
        }
        v50 = v49->static_fields;
        _9__193_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v50->__9__193_2;
        if ( _9__193_2 )
          goto LABEL_58;
        if ( (BYTE3(v49->vtable._0_Equals.methodPtr) & 4) != 0 && !v49->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v49);
          v50 = TerminalSceneComponent___c_TypeInfo->static_fields;
        }
        v52 = (Il2CppObject *)v50->__9;
        _9__193_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          _9__193_2,
          v52,
          Method_TerminalSceneComponent___c__StartWindowMessage_b__193_2__,
          (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
        v53 = TerminalSceneComponent___c_TypeInfo->static_fields;
        v53->__9__193_2 = (struct System_Action_Action__o *)_9__193_2;
        sub_B5D560(&v53->__9__193_2);
        if ( _9__193_2 )
        {
LABEL_58:
          allMaskPanel = (TerminalSceneComponent_c *)sub_B5D684(_9__193_2, v41->obj.klass->_1.element_class);
          v54 = (System_Action_Action__o *)_9__193_2;
          if ( !allMaskPanel )
            goto LABEL_77;
        }
        else
        {
          v54 = 0LL;
        }
        if ( v41->max_length <= 2 )
          goto LABEL_76;
        v41->m_Items[2] = v54;
        sub_B5D560(&v41->m_Items[2]);
        v55 = TerminalSceneComponent___c_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
          v55 = TerminalSceneComponent___c_TypeInfo;
        }
        v56 = v55->static_fields;
        _9__193_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v56->__9__193_3;
        if ( !_9__193_3 )
        {
          if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v55);
            v56 = TerminalSceneComponent___c_TypeInfo->static_fields;
          }
          v58 = (Il2CppObject *)v56->__9;
          _9__193_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            _9__193_3,
            v58,
            Method_TerminalSceneComponent___c__StartWindowMessage_b__193_3__,
            (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
          v59 = TerminalSceneComponent___c_TypeInfo->static_fields;
          v59->__9__193_3 = (struct System_Action_Action__o *)_9__193_3;
          sub_B5D560(&v59->__9__193_3);
          if ( !_9__193_3 )
          {
            v60 = 0LL;
LABEL_69:
            if ( v41->max_length > 3 )
            {
              v41->m_Items[3] = v60;
              sub_B5D560(&v41->m_Items[3]);
              v61 = (ActionChain_o *)sub_B5D694(ActionChain_TypeInfo);
              ActionChain___ctor_21252180(v61, v41, 0LL);
              if ( v61 )
              {
                ChainableActionBase__Execute((ChainableActionBase_o *)v61, 0LL);
                return;
              }
LABEL_75:
              sub_B5D69C(allMaskPanel, callbackFunc);
            }
LABEL_76:
            v62 = sub_B5D6C8(allMaskPanel);
            sub_B5D668(v62, 0LL);
          }
        }
        allMaskPanel = (TerminalSceneComponent_c *)sub_B5D684(_9__193_3, v41->obj.klass->_1.element_class);
        v60 = (System_Action_Action__o *)_9__193_3;
        if ( allMaskPanel )
          goto LABEL_69;
      }
LABEL_77:
      v63 = sub_B5D6BC();
      sub_B5D668(v63, 0LL);
    }
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)callbackFunc, (_DWORD)method, v3);
    byte_42E4B1E = 1;
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E4ED5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, eventId, (_DWORD)callback, method);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42E4ED5 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_15;
  if ( EventDetailEntity__isTower((EventDetailEntity_o *)entity, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.mTitleInfo;
    if ( !Instance )
      goto LABEL_15;
    TitleInfoControl__EventTowerStart((TitleInfoControl_o *)Instance, (EventDetailEntity_o *)entity, callback, v15);
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_15;
  if ( !EventDetailEntity__IsSuperBoss((EventDetailEntity_o *)entity, 0LL) )
    return;
  Instance = (DataManager_o *)this->fields.mTitleInfo;
  if ( !Instance )
LABEL_15:
    sub_B5D69C(Instance, v14);
  TitleInfoControl__CheckSuperBossHpAnim((TitleInfoControl_o *)Instance, callback, v16);
}


void __fastcall TerminalSceneComponent__Update(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  const MethodInfo *v8; // x1
  struct CStateManager_TerminalSceneComponent__o *mFSM; // x0
  ScrTerminalMap_o *mTerminalMap; // x20
  _BOOL8 IsMapTouchEnabled; // x0
  __int64 v12; // x1

  if ( (byte_42E4ED7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_TerminalSceneComponent__update__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CTouch_TypeInfo, v5, v6, v7);
    byte_42E4ED7 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2BB2778 *)Method_CStateManager_TerminalSceneComponent__update__);
  mTerminalMap = this->fields.mTerminalMap;
  IsMapTouchEnabled = TerminalSceneComponent__IsMapTouchEnabled(this, v8);
  if ( !mTerminalMap )
    sub_B5D69C(IsMapTouchEnabled, v12);
  ScrTerminalMap__ProcessMapCamera(mTerminalMap, IsMapTouchEnabled, 0LL);
}


void __fastcall TerminalSceneComponent__UpdateCompleteMissionIconUI(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  ScrPlayerStatus_o *mPlayerStatus; // x0

  mPlayerStatus = this->fields.mPlayerStatus;
  if ( !mPlayerStatus )
    sub_B5D69C(0LL, method);
  ScrPlayerStatus__UpdateCompleteMissionIconUI(mPlayerStatus, 0LL);
}


void __fastcall TerminalSceneComponent__UpdateQuestBoardList(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x8

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList || (this = (TerminalSceneComponent_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0LL )
    sub_B5D69C(this, method);
  QuestBoardListViewManager__SetupDisp((QuestBoardListViewManager_o *)this, 0LL);
}


void __fastcall TerminalSceneComponent__UpdateTitleEventInfo(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *mTitleInfo; // x0

  mTitleInfo = this->fields.mTitleInfo;
  if ( !mTitleInfo )
    sub_B5D69C(0LL, method);
  TitleInfoControl__UpdateEventItemInfo(mTitleInfo, method);
}


System_Collections_IEnumerator_o *__fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__187_o *v4; // x19

  if ( (byte_42E4ECC & 1) == 0 )
  {
    sub_B5D5C4(&TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__187_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4ECC = 1;
  }
  v4 = (TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__187_o *)sub_B5D694(TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__187_TypeInfo);
  TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__187___ctor(v4, 0, 0LL);
  return (System_Collections_IEnumerator_o *)v4;
}


bool __fastcall TerminalSceneComponent___CoWaitBlankEerthActionEnd_b__244_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *mTerminalList; // x0

  if ( (byte_42E4F04 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E4F04 = 1;
  }
  mTerminalList = (CommonUI_o *)this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_9;
  if ( !ScrTerminalListTop__IsBlankEarthAction((ScrTerminalListTop_o *)mTerminalList, 0LL) )
  {
    mTerminalList = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( mTerminalList )
      return !CommonUI__IsActive_NotifiDialog(mTerminalList, 0LL);
LABEL_9:
    sub_B5D69C(mTerminalList, method);
  }
  return 0;
}


bool __fastcall TerminalSceneComponent___CoWaitTerminalTopEffectEnd_b__243_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *mTerminalList; // x0

  if ( (byte_42E4F03 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E4F03 = 1;
  }
  mTerminalList = (CommonUI_o *)this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_9;
  if ( ScrTerminalListTop__CheckTerminalTopEffect((ScrTerminalListTop_o *)mTerminalList, 0LL) <= 0 )
  {
    mTerminalList = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( mTerminalList )
      return !CommonUI__IsActive_NotifiDialog(mTerminalList, 0LL);
LABEL_9:
    sub_B5D69C(mTerminalList, method);
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
    sub_B5D69C(this, action);
  }
  QuestBoardListViewManager__SetMode((QuestBoardListViewManager_o *)this, 4, action, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalSceneComponent___beginInitialize_b__167_0(
        TerminalSceneComponent_o *this,
        bool gotNewServant,
        const MethodInfo *method)
{
  __int64 v3; // x3
  TerminalSceneComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  TerminalPramsManager_c *v24; // x0
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct ScrTerminalMap_o *v27; // x8
  struct ScrTerminalMap_o *v28; // x8
  struct MapEntity_o *mMapEnt; // x8
  ScrTerminalMap_o *v30; // x20
  System_Action_o *v31; // x21
  TitleInfoControl_o *mTitleInfo; // x20
  System_Action_o *v33; // x21
  const MethodInfo *v34; // x6
  const MethodInfo *v35; // x2

  v5 = this;
  if ( (byte_42E4EFF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, gotNewServant, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventRaidMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_TerminalSceneComponent__beginInitialize_b__167_3__, v18, v19, v20);
    this = (TerminalSceneComponent_o *)sub_B5D5C4(
                                         &Method_TerminalSceneComponent__beginInitialize_b__167_4__,
                                         v21,
                                         v22,
                                         v23);
    byte_42E4EFF = 1;
  }
  v5->fields._onClosePresentBoxFlag_k__BackingField = 1;
  if ( gotNewServant )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B29 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, gotNewServant, (_DWORD)method, v3);
      byte_42E4B29 = 1;
    }
    v24 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v24 = TerminalPramsManager_TypeInfo;
    }
    v24->static_fields->_IsAutoResume_k__BackingField = 1;
    this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( this )
    {
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 34, 1, 0LL, 0LL);
      return 0;
    }
LABEL_33:
    sub_B5D69C(this, gotNewServant);
  }
  mTerminalMap = v5->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_33;
  this = (TerminalSceneComponent_o *)mTerminalMap->fields.mapButtonGrid;
  if ( !this )
    goto LABEL_33;
  this = (TerminalSceneComponent_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_28;
  v27 = v5->fields.mTerminalMap;
  if ( !v27 )
    goto LABEL_33;
  if ( !LOBYTE(v27->fields.currentMapLayerId) )
    goto LABEL_28;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (TerminalSceneComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventRaidMaster___);
  v28 = v5->fields.mTerminalMap;
  if ( !v28 )
    goto LABEL_33;
  mMapEnt = v28->fields.mMapEnt;
  if ( !mMapEnt || !this )
    goto LABEL_33;
  if ( EventRaidMaster__GetRaidGorupMax((EventRaidMaster_o *)this, mMapEnt[1].fields.bgmId, 0LL) >= 1 )
  {
    v30 = v5->fields.mTerminalMap;
    v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v31, (Il2CppObject *)v5, Method_TerminalSceneComponent__beginInitialize_b__167_3__, 0LL);
    if ( !v30 )
      goto LABEL_33;
    ScrTerminalMap__BeginRaidUpdateRequest(v30, v31, 0LL);
  }
  else
  {
LABEL_28:
    this = (TerminalSceneComponent_o *)v5->fields.mTitleInfo;
    if ( !this )
      goto LABEL_33;
    TitleInfoControl__InitEventAlphaAnim((TitleInfoControl_o *)this, (const MethodInfo *)gotNewServant);
    mTitleInfo = v5->fields.mTitleInfo;
    v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v33, (Il2CppObject *)v5, Method_TerminalSceneComponent__beginInitialize_b__167_4__, 0LL);
    if ( !mTitleInfo )
      goto LABEL_33;
    TitleInfoControl__SetActiveEventInfo_18375312(
      mTitleInfo,
      mTitleInfo->fields.mIsActiveEventInfo,
      mTitleInfo->fields.mEvScreenKind,
      mTitleInfo->fields.mWarId,
      mTitleInfo->fields.mWarEventId,
      v33,
      v34);
    this = (TerminalSceneComponent_o *)v5->fields.mTitleInfo;
    if ( !this )
      goto LABEL_33;
    TitleInfoControl__FrameIn((TitleInfoControl_o *)this, 0, v35);
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
    sub_B5D69C(mPlayerStatus, method);
  }
  QuestBoardListViewManager__SetupDisp((QuestBoardListViewManager_o *)mPlayerStatus, 0LL);
}


void __fastcall TerminalSceneComponent___beginInitialize_b__167_2(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1
  ScrTerminalMap_o *mTerminalMap; // x19

  if ( (byte_42E4F01 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E4F01 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL),
        (Instance = (AvalonSceneManager_o *)this->fields.mEarthCore) == 0LL)
    || (mTerminalMap = this->fields.mTerminalMap,
        Instance = (AvalonSceneManager_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)Instance,
                                             0LL),
        !mTerminalMap) )
  {
    sub_B5D69C(Instance, v6);
  }
  ScrTerminalMap__SetCore(mTerminalMap, (UnityEngine_GameObject_o *)Instance, 0LL);
}


void __fastcall TerminalSceneComponent___beginInitialize_b__167_3(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  QuestTree_o *v20; // x20
  TerminalPramsManager_c *v21; // x0
  int32_t WarId_k__BackingField; // w21
  System_Action_o *v23; // x22
  __int64 v24; // x0
  __int64 v25; // x1
  System_Collections_IEnumerator_o *v26; // x1

  if ( (byte_42E4F00 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_TerminalSceneComponent__beginInitialize_b__167_5__, v14, v15, v16);
    byte_42E4F00 = 1;
  }
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v20 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B20 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v17, v18, v19);
    byte_42E4B20 = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v21 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v21->static_fields->_WarId_k__BackingField;
  v23 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__167_5__, 0LL);
  if ( !v20 )
    sub_B5D69C(v24, v25);
  v26 = QuestTree__mfBaseTreeUpdateWithOpenCheck(v20, WarId_k__BackingField, v23, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v26, 0LL);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(mTerminalList, method);
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
  int v2; // w2
  __int64 v3; // x3
  TerminalSceneComponent_o *v4; // x19
  __int64 v5; // x1
  PlayMakerFSM_o *myFSM; // x0

  v4 = this;
  if ( (byte_42E4F02 & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_B5D5C4(&StringLiteral_5613/*"EVENTLISTUP_END"*/, (_DWORD)method, v2, v3);
    byte_42E4F02 = 1;
  }
  TerminalSceneComponent__deleteQuestMovie(this, method);
  myFSM = v4->fields.myFSM;
  if ( !myFSM )
    sub_B5D69C(0LL, v5);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_5613/*"EVENTLISTUP_END"*/, 0LL);
}


void __fastcall TerminalSceneComponent__beginFinish(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int32_t quitType; // w8

  if ( !this )
    sub_B5D69C(0LL, method);
  quitType = this->fields.quitType;
  if ( !quitType )
    quitType = 2;
  this->fields.quitType = quitType;
  TerminalSceneComponent__quit(this, method);
}


void __fastcall TerminalSceneComponent__beginInitialize(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  TerminalPramsManager_c *v83; // x0
  TerminalPramsManager_c *v84; // x0
  TerminalPramsManager_c *v85; // x0
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  TerminalPramsManager_c *v89; // x0
  TitleInfoControl_o *Instance; // x0
  __int64 v91; // x1
  CommonUI_o *v92; // x20
  int v93; // w1
  int v94; // w2
  __int64 v95; // x3
  TerminalPramsManager_c *v96; // x0
  int v97; // w1
  int v98; // w2
  __int64 v99; // x3
  struct UnityEngine_Camera_o *mUICamera; // x20
  CTouch_c *v101; // x0
  struct CTouch_StaticFields *static_fields; // x0
  System_String_o *v103; // x3
  const MethodInfo *v104; // x5
  struct CStateManager_TerminalSceneComponent__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v106; // x21
  struct CStateManager_TerminalSceneComponent__o *mFSM; // x21
  TerminalSceneComponent_StateNormal_o *v108; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v109; // x21
  TerminalSceneComponent_StateTutorial1_SpotArrow_o *v110; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v111; // x21
  TerminalSceneComponent_StateTutorial1_QuestArrow_o *v112; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v113; // x21
  TerminalSceneComponent_StateTutorial2_SpotArrow_o *v114; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v115; // x21
  TerminalSceneComponent_StateTutorial2_QuestArrow_o *v116; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v117; // x21
  TerminalSceneComponent_StateTutorial3_MenuArrow_o *v118; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v119; // x21
  TerminalSceneComponent_StateTutorial3_GachaArrow_o *v120; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v121; // x21
  TerminalSceneComponent_StateTutorial4_SpotArrow_o *v122; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v123; // x21
  TerminalSceneComponent_StateTutorial4_QuestArrow_o *v124; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v125; // x21
  TerminalSceneComponent_StateTutorial5_MenuArrow_o *v126; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v127; // x20
  TerminalSceneComponent_StateTutorial5_CombineArrow_o *v128; // x21
  const MethodInfo *v129; // x2
  const MethodInfo *v130; // x4
  const MethodInfo *v131; // x2
  struct TitleInfoControl_o *mTitleInfo; // x8
  const MethodInfo *v133; // x2
  const MethodInfo *v134; // x2
  ScrPlayerStatus_o *mPlayerStatus; // x20
  System_Func_bool__bool__o *v136; // x21
  struct ScrPlayerStatus_o *v137; // x22
  System_Action_o *v138; // x20
  const MethodInfo *v139; // x2
  struct ScrTerminalMap_o *mTerminalMap; // x8
  System_Action_o *v141; // x20
  const MethodInfo *v142; // x2

  if ( (byte_42E4EBB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AndroidUtil_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_CStateManager_TerminalSceneComponent___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_CStateManager_TerminalSceneComponent__add__, v11, v12, v13);
    sub_B5D5C4(&CStateManager_TerminalSceneComponent__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&CTouch_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Func_bool__bool___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Func_bool__bool__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&ServantProfileEventJoinManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v29, v30, v31);
    sub_B5D5C4(&TerminalSceneComponent_StateNormal_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&TerminalSceneComponent_StateTutorial1_QuestArrow_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&TerminalSceneComponent_StateTutorial1_SpotArrow_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&TerminalSceneComponent_StateTutorial2_QuestArrow_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&TerminalSceneComponent_StateTutorial2_SpotArrow_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&TerminalSceneComponent_StateTutorial3_GachaArrow_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&TerminalSceneComponent_StateTutorial3_MenuArrow_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&TerminalSceneComponent_StateTutorial4_QuestArrow_TypeInfo, v53, v54, v55);
    sub_B5D5C4(&TerminalSceneComponent_StateTutorial4_SpotArrow_TypeInfo, v56, v57, v58);
    sub_B5D5C4(&TerminalSceneComponent_StateTutorial5_CombineArrow_TypeInfo, v59, v60, v61);
    sub_B5D5C4(&TerminalSceneComponent_StateTutorial5_MenuArrow_TypeInfo, v62, v63, v64);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v65, v66, v67);
    sub_B5D5C4(&Method_TerminalSceneComponent__beginInitialize_b__167_0__, v68, v69, v70);
    sub_B5D5C4(&Method_TerminalSceneComponent__beginInitialize_b__167_1__, v71, v72, v73);
    sub_B5D5C4(&Method_TerminalSceneComponent__beginInitialize_b__167_2__, v74, v75, v76);
    sub_B5D5C4(&StringLiteral_1/*""*/, v77, v78, v79);
    byte_42E4EBB = 1;
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
  if ( !byte_42E4B48 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v80, v81, v82);
    byte_42E4B48 = 1;
  }
  v83 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v83 = TerminalPramsManager_TypeInfo;
  }
  if ( !v83->static_fields->_IsAutoResume_k__BackingField )
  {
    if ( (BYTE3(v83->vtable._0_Equals.methodPtr) & 4) != 0 && !v83->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v83);
    if ( !byte_42E4B28 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v80, v81, v82);
      byte_42E4B28 = 1;
    }
    v84 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v84 = TerminalPramsManager_TypeInfo;
    }
    v84->static_fields->_DispState_k__BackingField = 0;
    if ( !byte_42E4B26 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v80, v81, v82);
      byte_42E4B26 = 1;
    }
    v85 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v85 = TerminalPramsManager_TypeInfo;
    }
    v85->static_fields->_SelectedStoryQuestId_k__BackingField = 0;
    TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(0LL);
    if ( !byte_42E4B27 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v86, v87, v88);
      byte_42E4B27 = 1;
    }
    v89 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v89 = TerminalPramsManager_TypeInfo;
    }
    v89->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
    TerminalPramsManager__TerminalSelectedRecollectionWarId_SaveData(0LL);
  }
  Instance = (TitleInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v92 = (CommonUI_o *)Instance;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !v92 )
    goto LABEL_81;
  CommonUI__CheckChangeOtherConnectMarkFromEventId(
    v92,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId,
    1,
    0LL);
  if ( !byte_42E4B76 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v93, v94, v95);
    byte_42E4B76 = 1;
  }
  v96 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v96 = TerminalPramsManager_TypeInfo;
  }
  v96->static_fields->meSceneStatus = 1;
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  this->fields._IsReq_InitEarthRotateY_k__BackingField = 1;
  this->fields._onClosePresentBoxFlag_k__BackingField = 0;
  this->fields._FirstFadeTime_k__BackingField = 0.0;
  SkillLvMaster__AssertionSkillOverwriteByNowTime(0LL);
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__init(0LL);
  mUICamera = this->fields.mUICamera;
  if ( !byte_42E5011 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, v97, v98, v99);
    byte_42E5011 = 1;
  }
  v101 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v101 = CTouch_TypeInfo;
  }
  static_fields = v101->static_fields;
  static_fields->mScreenCam = mUICamera;
  sub_B5D560(&static_fields->mScreenCam);
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v106 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B5D694(CStateManager_TerminalSceneComponent__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v106,
      (QAASpotStateController_IMapSpot_o *)this,
      11,
      (const MethodInfo_2BB2630 *)Method_CStateManager_TerminalSceneComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_TerminalSceneComponent__o *)v106;
    sub_B5D560(&this->fields.mFSM);
    mFSM = this->fields.mFSM;
    v108 = (TerminalSceneComponent_StateNormal_o *)sub_B5D694(TerminalSceneComponent_StateNormal_TypeInfo);
    TerminalSceneComponent_StateNormal___ctor(v108, 0LL);
    if ( mFSM )
    {
      CStateManager_QAASpotStateController_IMapSpot___add(
        (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
        0,
        (IState_T__o *)v108,
        (const MethodInfo_2BB26FC *)Method_CStateManager_TerminalSceneComponent__add__);
      v109 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
      v110 = (TerminalSceneComponent_StateTutorial1_SpotArrow_o *)sub_B5D694(TerminalSceneComponent_StateTutorial1_SpotArrow_TypeInfo);
      TerminalSceneComponent_StateTutorial1_SpotArrow___ctor(v110, 0LL);
      if ( v109 )
      {
        CStateManager_QAASpotStateController_IMapSpot___add(
          v109,
          1,
          (IState_T__o *)v110,
          (const MethodInfo_2BB26FC *)Method_CStateManager_TerminalSceneComponent__add__);
        v111 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
        v112 = (TerminalSceneComponent_StateTutorial1_QuestArrow_o *)sub_B5D694(TerminalSceneComponent_StateTutorial1_QuestArrow_TypeInfo);
        TerminalSceneComponent_StateTutorial1_QuestArrow___ctor(v112, 0LL);
        if ( v111 )
        {
          CStateManager_QAASpotStateController_IMapSpot___add(
            v111,
            2,
            (IState_T__o *)v112,
            (const MethodInfo_2BB26FC *)Method_CStateManager_TerminalSceneComponent__add__);
          v113 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
          v114 = (TerminalSceneComponent_StateTutorial2_SpotArrow_o *)sub_B5D694(TerminalSceneComponent_StateTutorial2_SpotArrow_TypeInfo);
          TerminalSceneComponent_StateTutorial2_SpotArrow___ctor(v114, 0LL);
          if ( v113 )
          {
            CStateManager_QAASpotStateController_IMapSpot___add(
              v113,
              3,
              (IState_T__o *)v114,
              (const MethodInfo_2BB26FC *)Method_CStateManager_TerminalSceneComponent__add__);
            v115 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
            v116 = (TerminalSceneComponent_StateTutorial2_QuestArrow_o *)sub_B5D694(TerminalSceneComponent_StateTutorial2_QuestArrow_TypeInfo);
            TerminalSceneComponent_StateTutorial2_QuestArrow___ctor(v116, 0LL);
            if ( v115 )
            {
              CStateManager_QAASpotStateController_IMapSpot___add(
                v115,
                4,
                (IState_T__o *)v116,
                (const MethodInfo_2BB26FC *)Method_CStateManager_TerminalSceneComponent__add__);
              v117 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
              v118 = (TerminalSceneComponent_StateTutorial3_MenuArrow_o *)sub_B5D694(TerminalSceneComponent_StateTutorial3_MenuArrow_TypeInfo);
              TerminalSceneComponent_StateTutorial3_MenuArrow___ctor(v118, 0LL);
              if ( v117 )
              {
                CStateManager_QAASpotStateController_IMapSpot___add(
                  v117,
                  5,
                  (IState_T__o *)v118,
                  (const MethodInfo_2BB26FC *)Method_CStateManager_TerminalSceneComponent__add__);
                v119 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
                v120 = (TerminalSceneComponent_StateTutorial3_GachaArrow_o *)sub_B5D694(TerminalSceneComponent_StateTutorial3_GachaArrow_TypeInfo);
                TerminalSceneComponent_StateTutorial3_GachaArrow___ctor(v120, 0LL);
                if ( v119 )
                {
                  CStateManager_QAASpotStateController_IMapSpot___add(
                    v119,
                    6,
                    (IState_T__o *)v120,
                    (const MethodInfo_2BB26FC *)Method_CStateManager_TerminalSceneComponent__add__);
                  v121 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
                  v122 = (TerminalSceneComponent_StateTutorial4_SpotArrow_o *)sub_B5D694(TerminalSceneComponent_StateTutorial4_SpotArrow_TypeInfo);
                  TerminalSceneComponent_StateTutorial4_SpotArrow___ctor(v122, 0LL);
                  if ( v121 )
                  {
                    CStateManager_QAASpotStateController_IMapSpot___add(
                      v121,
                      7,
                      (IState_T__o *)v122,
                      (const MethodInfo_2BB26FC *)Method_CStateManager_TerminalSceneComponent__add__);
                    v123 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
                    v124 = (TerminalSceneComponent_StateTutorial4_QuestArrow_o *)sub_B5D694(TerminalSceneComponent_StateTutorial4_QuestArrow_TypeInfo);
                    TerminalSceneComponent_StateTutorial4_QuestArrow___ctor(v124, 0LL);
                    if ( v123 )
                    {
                      CStateManager_QAASpotStateController_IMapSpot___add(
                        v123,
                        8,
                        (IState_T__o *)v124,
                        (const MethodInfo_2BB26FC *)Method_CStateManager_TerminalSceneComponent__add__);
                      v125 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
                      v126 = (TerminalSceneComponent_StateTutorial5_MenuArrow_o *)sub_B5D694(TerminalSceneComponent_StateTutorial5_MenuArrow_TypeInfo);
                      TerminalSceneComponent_StateTutorial5_MenuArrow___ctor(v126, 0LL);
                      if ( v125 )
                      {
                        CStateManager_QAASpotStateController_IMapSpot___add(
                          v125,
                          9,
                          (IState_T__o *)v126,
                          (const MethodInfo_2BB26FC *)Method_CStateManager_TerminalSceneComponent__add__);
                        v127 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
                        v128 = (TerminalSceneComponent_StateTutorial5_CombineArrow_o *)sub_B5D694(TerminalSceneComponent_StateTutorial5_CombineArrow_TypeInfo);
                        TerminalSceneComponent_StateTutorial5_CombineArrow___ctor(v128, 0LL);
                        if ( v127 )
                        {
                          CStateManager_QAASpotStateController_IMapSpot___add(
                            v127,
                            10,
                            (IState_T__o *)v128,
                            (const MethodInfo_2BB26FC *)Method_CStateManager_TerminalSceneComponent__add__);
                          TerminalSceneComponent__SetState(this, 0, v129);
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
    sub_B5D69C(Instance, v91);
  }
LABEL_64:
  Instance = this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_81;
  TitleInfoControl__setTitleInfo(Instance, 0LL, 1, v103, 1, v104);
  Instance = this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_81;
  TitleInfoControl__changeTitleInfo_18299236(Instance, 1, 1, 0, v130);
  Instance = this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_81;
  TitleInfoControl__setBackBtn_Terminal(Instance, 0, v131);
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
  TitleInfoControl__SetBackRecollectionButtonEnable(Instance, 0, v133);
  Instance = this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_81;
  TitleInfoControl__setBackBtnDepth(Instance, 24, v134);
  Instance = (TitleInfoControl_o *)this->fields.mTerminalMap;
  if ( !Instance )
    goto LABEL_81;
  ScrTerminalMap__InitMapCamera((ScrTerminalMap_o *)Instance, 0LL);
  mPlayerStatus = this->fields.mPlayerStatus;
  v136 = (System_Func_bool__bool__o *)sub_B5D694(System_Func_bool__bool__TypeInfo);
  System_Func_bool__bool____ctor(
    v136,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent__beginInitialize_b__167_0__,
    (const MethodInfo_279B910 *)Method_System_Func_bool__bool___ctor__);
  if ( !mPlayerStatus )
    goto LABEL_81;
  ScrPlayerStatus__SetCloseGiftAct(mPlayerStatus, v136, 0LL);
  v137 = this->fields.mPlayerStatus;
  v138 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v138, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__167_1__, 0LL);
  if ( !v137 )
    goto LABEL_81;
  v137->fields.mRecoverAct = v138;
  sub_B5D560(&v137->fields.mRecoverAct);
  Instance = this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_81;
  TitleInfoControl__setHeaderBgImg(Instance, 0, v139);
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_81;
  Instance = (TitleInfoControl_o *)mTerminalMap->fields.allMaskObj;
  if ( !Instance )
    goto LABEL_81;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  v141 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v141, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__167_2__, 0LL);
  TerminalSceneComponent__SetEarthView(this, v141, v142);
  if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  }
  ServantProfileEventJoinManager__UpdateProfileServantEventJoin(0LL);
}


void __fastcall TerminalSceneComponent__beginPause(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  MissionNotifyManager_o *v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x1

  if ( (byte_42E4EC6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v5, v6, v7);
    byte_42E4EC6 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v8 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v8 )
    sub_B5D69C(0LL, v9);
  MissionNotifyManager__StartPause(v8, 0LL);
  this->fields.quitType = 3;
  TerminalSceneComponent__quit(this, v10);
}


void __fastcall TerminalSceneComponent__beginResume(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  MissionNotifyManager_o *mQuestBoardListViewManager; // x0
  __int64 v21; // x1
  struct ScrTerminalListTop_o *mTerminalList; // x8
  int v23; // w2
  __int64 v24; // x3
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct MapEntity_o *mMapEnt; // x8
  int32_t bgmId; // w20
  TerminalPramsManager_c *v28; // x0
  TerminalPramsManager_c *v29; // x0
  TerminalPramsManager_c *v30; // x0
  struct ScrTerminalMap_o *v31; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E4EC5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v17, v18, v19);
    byte_42E4EC5 = 1;
  }
  entity = 0LL;
  this->fields.isFadeInAfterResumeLoad = 0;
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  mQuestBoardListViewManager = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  if ( !byte_42E4B2E )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v21, v23, v24);
    byte_42E4B2E = 1;
  }
  v28 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v28 = TerminalPramsManager_TypeInfo;
  }
  if ( v28->static_fields->meSceneStatus != 3 )
  {
    if ( bgmId )
    {
      mQuestBoardListViewManager = (MissionNotifyManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !mQuestBoardListViewManager )
        goto LABEL_55;
      mQuestBoardListViewManager = (MissionNotifyManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)mQuestBoardListViewManager,
                                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !mQuestBoardListViewManager )
        goto LABEL_55;
      if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)mQuestBoardListViewManager,
             &entity,
             bgmId,
             (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
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
            v28 = TerminalPramsManager_TypeInfo;
LABEL_34:
            j_il2cpp_runtime_class_init_0(v28);
LABEL_35:
            if ( !byte_42E4B76 )
            {
              sub_B5D5C4(&TerminalPramsManager_TypeInfo, v21, v23, v24);
              byte_42E4B76 = 1;
            }
            v29 = TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v29 = TerminalPramsManager_TypeInfo;
            }
            v29->static_fields->meSceneStatus = 2;
            this->fields.isFadeInAfterResumeLoad = 1;
            goto LABEL_41;
          }
          if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_42E4B76 )
          {
            sub_B5D5C4(&TerminalPramsManager_TypeInfo, v21, v23, v24);
            byte_42E4B76 = 1;
          }
          v30 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v30 = TerminalPramsManager_TypeInfo;
          }
          v30->static_fields->meSceneStatus = 1;
          mQuestBoardListViewManager = (MissionNotifyManager_o *)this->fields.mQuestInformation;
          if ( mQuestBoardListViewManager )
          {
            QuestInformationComponent__CloseWindow((QuestInformationComponent_o *)mQuestBoardListViewManager, 0, 0LL);
            v31 = this->fields.mTerminalMap;
            if ( v31 )
            {
              mQuestBoardListViewManager = (MissionNotifyManager_o *)v31->fields.allMaskObj;
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
        sub_B5D69C(mQuestBoardListViewManager, v21);
      }
      v28 = TerminalPramsManager_TypeInfo;
    }
    if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) == 0 || v28->_2.cctor_finished )
      goto LABEL_35;
    goto LABEL_34;
  }
LABEL_41:
  this->fields.quitType = 1;
  SceneRootComponent__beginResume_17513312((SceneRootComponent_o *)this, 0LL);
}


void __fastcall TerminalSceneComponent__beginStartUp(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(TerminalSceneComponent_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_beginStartUp.method)(
    this,
    0LL,
    this->klass->vtable._6_beginStartUp.methodPtr);
}


void __fastcall TerminalSceneComponent__beginStartUp_18301676(
        TerminalSceneComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  __int64 v33; // x10
  Il2CppObject *v34; // x1
  TerminalSceneComponent_c *v35; // x0
  const MethodInfo *v36; // x2
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  TerminalPramsManager_c *v40; // x0
  TerminalPramsManager_c *v41; // x0
  WebViewManager_o *Instance; // x0
  const MethodInfo *v43; // x1
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct UserServantEntity_array *UserServantListFromDeckIsTerminal; // x0
  struct UserServantEntity_array *mStandSvtDatas; // x8
  __int64 mStandSvtIdx; // x9
  UserServantEntity_o *NextStandServant; // x20
  bool isSavedMemoryMode; // w22
  System_Action_o *v50; // x0
  System_Action_o *v51; // x21
  const MethodInfo *v52; // x4
  const MethodInfo *v53; // x3
  System_Collections_IEnumerator_o *Async; // x1
  __int64 v55; // x0

  if ( (byte_42E4EBD & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserDeckMaster___, v6, v7, v8);
    sub_B5D5C4(&OptionManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_TerminalSceneComponent_SendMessageStartUpAndResume__, v18, v19, v20);
    sub_B5D5C4(&Method_TerminalSceneComponent__beginStartUp_b__170_0__, v21, v22, v23);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&TerminalTransitionInfo_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v30, v31, v32);
    byte_42E4EBD = 1;
  }
  if ( data
    && (v33 = *(&TerminalTransitionInfo_TypeInfo->_2.bitflags2 + 1),
        *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v33) )
  {
    if ( (TerminalTransitionInfo_c *)data->klass->_2.typeHierarchy[v33 - 1] == TerminalTransitionInfo_TypeInfo )
      v34 = data;
    else
      v34 = 0LL;
  }
  else
  {
    v34 = 0LL;
  }
  this->fields._TransitionInfo_k__BackingField = (struct TerminalTransitionInfo_o *)v34;
  sub_B5D560(&this->fields._TransitionInfo_k__BackingField);
  v35 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v35 = TerminalSceneComponent_TypeInfo;
  }
  UnityEngine_RenderSettings__set_ambientLight(v35->static_fields->DEFAULT_AMBIENT_LIGHT_COLOR, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 1, 32, 0LL);
  MainMenuBar__setMenuActive(1, this->fields.mUICamera, 0LL);
  TerminalSceneComponent__SetDispStandServant(this, 1, v36);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5012 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v37, v38, v39);
    byte_42E5012 = 1;
  }
  v40 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v40 = TerminalPramsManager_TypeInfo;
  }
  if ( !v40->static_fields->_IsDispDone_UIStandFigure_k__BackingField )
  {
    if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v40);
    if ( !byte_42E5013 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v37, v38, v39);
      byte_42E5013 = 1;
    }
    v41 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v41 = TerminalPramsManager_TypeInfo;
    }
    v41->static_fields->_IsDispDone_UIStandFigure_k__BackingField = 1;
    if ( !byte_42E5014 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v37, v38, v39);
      v41 = TerminalPramsManager_TypeInfo;
      byte_42E5014 = 1;
    }
    if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = TerminalPramsManager_TypeInfo;
    }
    v41->static_fields->_IsDispUIStandFigure_k__BackingField = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  MasterData_WarQuestSelectionMaster = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Instance = (WebViewManager_o *)TutorialFlag__Get_29295864(126, 0LL);
  if ( !MasterData_WarQuestSelectionMaster
    || (((unsigned __int8)Instance & 1) == 0
      ? (UserServantListFromDeckIsTerminal = UserDeckMaster__GetUserServantListFromDeckIsTerminal(
                                               MasterData_WarQuestSelectionMaster,
                                               0LL))
      : (UserServantListFromDeckIsTerminal = UserDeckMaster__GetUserServantListFromDeckReaveHeroine(
                                               MasterData_WarQuestSelectionMaster,
                                               0LL)),
        this->fields.mStandSvtDatas = UserServantListFromDeckIsTerminal,
        sub_B5D560(&this->fields.mStandSvtDatas),
        (mStandSvtDatas = this->fields.mStandSvtDatas) == 0LL) )
  {
LABEL_53:
    sub_B5D69C(Instance, v43);
  }
  mStandSvtIdx = this->fields.mStandSvtIdx;
  if ( (unsigned int)mStandSvtIdx >= mStandSvtDatas->max_length )
  {
    v55 = sub_B5D6C8(Instance);
    sub_B5D668(v55, 0LL);
  }
  NextStandServant = mStandSvtDatas->m_Items[mStandSvtIdx];
  if ( !NextStandServant )
    NextStandServant = TerminalSceneComponent__GetNextStandServant(this, v43);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  isSavedMemoryMode = OptionManager__isSavedMemoryMode(0LL);
  v50 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  v51 = v50;
  if ( isSavedMemoryMode )
  {
    System_Action___ctor(v50, (Il2CppObject *)this, Method_TerminalSceneComponent__beginStartUp_b__170_0__, 0LL);
    TerminalSceneComponent__SetupStandServant(this, NextStandServant, 0, v51, v52);
  }
  else
  {
    System_Action___ctor(v50, (Il2CppObject *)this, Method_TerminalSceneComponent_SendMessageStartUpAndResume__, 0LL);
    Async = TerminalSceneComponent__LoadAsync(this, NextStandServant, v51, v53);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, Async, 0LL);
  }
}


void __fastcall TerminalSceneComponent__callbackEventDailyPoint(
        TerminalSceneComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  TerminalSceneComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct MapEntity_o *mMapEnt; // x22
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  TerminalPramsManager_ClearData_o *v50; // x21
  TerminalPramsManager_c *v51; // x0
  _QWORD *p_eventDailyPoint_k__BackingField; // x0
  int v53; // w2
  __int64 v54; // x3
  int32_t longName_high; // w21
  TerminalPramsManager_c *v56; // x0
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int64_t Time_26076684; // x21
  TerminalPramsManager_c *v61; // x0
  int32_t bgmId; // w21
  struct ScrTerminalListTop_o *mTerminalList; // x8
  const MethodInfo *v64; // x6
  struct ScrTerminalListTop_o *v65; // x8
  UnityEngine_GameObject_o *mActionPanel; // x21
  TitleInfoControl_o *mTitleInfo; // x20
  System_Action_o *v68; // x22
  const MethodInfo *v69; // x3
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v71; // 0:x0.8

  v5 = this;
  if ( (byte_42E4EE5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_JsonManager_Deserialize_EventDailyPoint___, v12, v13, v14);
    sub_B5D5C4(&JsonManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&NetworkManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_TerminalSceneComponent__callbackEventDailyPoint_b__213_0__, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_11210/*"REQUEST_NG"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v39, v40, v41);
    this = (TerminalSceneComponent_o *)sub_B5D5C4(&StringLiteral_23995/*"{}"*/, v42, v43, v44);
    byte_42E4EE5 = 1;
  }
  entity = 0LL;
  if ( !result )
    goto LABEL_55;
  if ( System_String__Equals_44565128(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
  {
    this = (TerminalSceneComponent_o *)v5->fields.myFSM;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11210/*"REQUEST_NG"*/, 0LL);
      return;
    }
LABEL_55:
    sub_B5D69C(this, result);
  }
  this = (TerminalSceneComponent_o *)System_String__Equals_44565128(result, (System_String_o *)StringLiteral_23995/*"{}"*/, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_58;
  mTerminalMap = v5->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_55;
  mMapEnt = mTerminalMap->fields.mMapEnt;
  this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_55;
  this = (TerminalSceneComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !mMapEnt || !this )
    goto LABEL_55;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          &entity,
          mMapEnt[1].fields.bgmId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
LABEL_58:
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    this = (TerminalSceneComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !this )
      goto LABEL_55;
    MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0LL);
    ActionExtensions__Call(v5->fields.afterEventDailyPoint, 0LL);
  }
  else
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v50 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
            (Il2CppObject *)result,
            (const MethodInfo_1E5E158 *)Method_JsonManager_Deserialize_EventDailyPoint___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E501E )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v47, v48, v49);
      byte_42E501E = 1;
    }
    v51 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v51 = TerminalPramsManager_TypeInfo;
    }
    p_eventDailyPoint_k__BackingField = &v51->static_fields->_eventDailyPoint_k__BackingField;
    *p_eventDailyPoint_k__BackingField = v50;
    sub_B5D560(p_eventDailyPoint_k__BackingField);
    if ( !entity )
      goto LABEL_55;
    longName_high = HIDWORD(entity->fields.longName);
    if ( !byte_42E501F )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)result, v53, v54);
      byte_42E501F = 1;
    }
    v56 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v56 = TerminalPramsManager_TypeInfo;
    }
    v56->static_fields->_EventDailyPointItem_k__BackingField = longName_high;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v71.fields.dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
    Time_26076684 = NetworkManager__getTime_26076684(v71, 0LL);
    if ( !byte_42E5020 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v57, v58, v59);
      byte_42E5020 = 1;
    }
    v61 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v61 = TerminalPramsManager_TypeInfo;
    }
    v61->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = Time_26076684;
    bgmId = mMapEnt[1].fields.bgmId;
    if ( !byte_42E5021 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v57, v58, v59);
      v61 = TerminalPramsManager_TypeInfo;
      byte_42E5021 = 1;
    }
    if ( (BYTE3(v61->vtable._0_Equals.methodPtr) & 4) != 0 && !v61->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v61);
      v61 = TerminalPramsManager_TypeInfo;
    }
    v61->static_fields->_EventDailyPointEventId_k__BackingField = bgmId;
    TerminalPramsManager__EventDailyPointSave_SaveData(0LL);
    mTerminalList = v5->fields.mTerminalList;
    if ( !mTerminalList )
      goto LABEL_55;
    this = (TerminalSceneComponent_o *)mTerminalList->fields.mActionBgColl;
    if ( !this )
      goto LABEL_55;
    this = (TerminalSceneComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_55;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (TerminalSceneComponent_o *)v5->fields.mTitleInfo;
    if ( !this )
      goto LABEL_55;
    TitleInfoControl__SetActiveEventInfo_18375312(
      (TitleInfoControl_o *)this,
      BYTE4(this[1].fields.mPlayBgmName),
      HIDWORD(this[1].fields.mStandSvtDatas),
      *(_DWORD *)&this[1].fields._IsReq_InitEarthRotateY_k__BackingField,
      LODWORD(this[1].fields._FirstFadeTime_k__BackingField),
      0LL,
      v64);
    v65 = v5->fields.mTerminalList;
    if ( !v65 )
      goto LABEL_55;
    mActionPanel = v65->fields.mActionPanel;
    mTitleInfo = v5->fields.mTitleInfo;
    v68 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v68,
      (Il2CppObject *)v5,
      Method_TerminalSceneComponent__callbackEventDailyPoint_b__213_0__,
      0LL);
    if ( !mTitleInfo )
      goto LABEL_55;
    TitleInfoControl__EventDailyPointOpen(mTitleInfo, mActionPanel, v68, v69);
  }
}


void __fastcall TerminalSceneComponent__callbackTopHome(
        TerminalSceneComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x1
  void *myFSM; // x0
  int64_t v23; // x20
  System_Action_o *afterTopLogin; // x0

  if ( (byte_42E4EE0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_JsonManager_Deserialize_TopHomeInfo___, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&JsonManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&TopHomeRequest_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_11212/*"REQUEST_OK"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_11210/*"REQUEST_NG"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v18, v19, v20);
    byte_42E4EE0 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
  {
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)StringLiteral_11210/*"REQUEST_NG"*/, 0LL);
      return;
    }
LABEL_15:
    sub_B5D69C(myFSM, v21);
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
            (Il2CppObject *)result,
            (const MethodInfo_1E5E158 *)Method_JsonManager_Deserialize_TopHomeInfo___);
  if ( !myFSM )
    goto LABEL_15;
  v23 = *((_QWORD *)myFSM + 2);
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
  }
  TopHomeRequest__setRecentRefreshTime(v23, 0LL);
  MainMenuBar__UpdateNoticeNumber(0LL);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)StringLiteral_11212/*"REQUEST_OK"*/, 0LL);
  afterTopLogin = this->fields.afterTopLogin;
  this->fields.isTopLoginBusy = 0;
  ActionExtensions__Call(afterTopLogin, 0LL);
  this->fields.afterTopLogin = 0LL;
  sub_B5D560(&this->fields.afterTopLogin);
}


void __fastcall TerminalSceneComponent__callbackTopLogin(
        TerminalSceneComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  NetworkManager_ResultCallbackFunc_o *v63; // x21
  __int64 v64; // x1
  int v65; // w2
  __int64 v66; // x3
  TopHomeRequest_o *Request_WarBoardWallAttackRequest; // x21
  void *myFSM; // x0
  void *v69; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x0
  System_Collections_Generic_List_int__o *v71; // x20
  TerminalSceneComponent___c_c *v72; // x8
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x9
  System_Converter_int__string__o *_9__206_0; // x21
  Il2CppObject *v75; // x22
  struct TerminalSceneComponent___c_StaticFields *v76; // x0
  System_String_array *v77; // x0
  System_String_o *v78; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x0
  System_Collections_Generic_List_int__o *v80; // x19
  TerminalSceneComponent___c_c *v81; // x8
  struct TerminalSceneComponent___c_StaticFields *v82; // x9
  System_Converter_int__string__o *_9__206_1; // x20
  Il2CppObject *v84; // x21
  struct TerminalSceneComponent___c_StaticFields *v85; // x0
  System_String_array *v86; // x0
  System_String_o *v87; // x0

  if ( (byte_42E4EDF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Converter_int__string___ctor__, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&System_Converter_int__string__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_int___, v9, v10, v11);
    sub_B5D5C4(&Method_JsonManager_Deserialize_CommonUI_LoginResultData___, v12, v13, v14);
    sub_B5D5C4(&JsonManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ConvertAll_string___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, v21, v22, v23);
    sub_B5D5C4(&Method_NetworkManager_getRequest_TopHomeRequest___, v24, v25, v26);
    sub_B5D5C4(&NetworkManager_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_TerminalSceneComponent_callbackTopHome__, v36, v37, v38);
    sub_B5D5C4(&TopHomeRequest_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__callbackTopLogin_b__206_0__, v42, v43, v44);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__callbackTopLogin_b__206_1__, v45, v46, v47);
    sub_B5D5C4(&TerminalSceneComponent___c_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_19127/*"freeShopIds"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_11212/*"REQUEST_OK"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_22107/*"returnRarePriShopIds"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_707/*","*/, v60, v61, v62);
    byte_42E4EDF = 1;
  }
  v63 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v63,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_callbackTopHome__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (TopHomeRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                            v63,
                                                            (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_TopHomeRequest___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5017 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v64, v65, v66);
    byte_42E5017 = 1;
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
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)StringLiteral_11212/*"REQUEST_OK"*/, 0LL);
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
            (const MethodInfo_1E5E158 *)Method_JsonManager_Deserialize_CommonUI_LoginResultData___);
  if ( !myFSM )
LABEL_57:
    sub_B5D69C(myFSM, v64);
  v69 = myFSM;
  v70 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)myFSM + 15);
  if ( v70 )
  {
    myFSM = System_Linq_Enumerable__ToList_int_(
              v70,
              (const MethodInfo_1CBA56C *)Method_System_Linq_Enumerable_ToList_int___);
    v71 = (System_Collections_Generic_List_int__o *)myFSM;
    v72 = TerminalSceneComponent___c_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v72 = TerminalSceneComponent___c_TypeInfo;
    }
    static_fields = v72->static_fields;
    _9__206_0 = static_fields->__9__206_0;
    if ( !_9__206_0 )
    {
      if ( (BYTE3(v72->vtable._0_Equals.methodPtr) & 4) != 0 && !v72->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v72);
        static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
      }
      v75 = (Il2CppObject *)static_fields->__9;
      _9__206_0 = (System_Converter_int__string__o *)sub_B5D694(System_Converter_int__string__TypeInfo);
      System_Converter_int__string____ctor(
        _9__206_0,
        v75,
        Method_TerminalSceneComponent___c__callbackTopLogin_b__206_0__,
        (const MethodInfo_23F69D4 *)Method_System_Converter_int__string___ctor__);
      v76 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v76->__9__206_0 = _9__206_0;
      sub_B5D560(&v76->__9__206_0);
    }
    if ( !v71 )
      goto LABEL_57;
    myFSM = System_Collections_Generic_List_int___ConvertAll_string_(
              v71,
              (System_Converter_T__TOutput__o *)_9__206_0,
              (const MethodInfo_192DF90 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !myFSM )
      goto LABEL_57;
    v77 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)myFSM,
                                   (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
    v78 = System_String__Join((System_String_o *)StringLiteral_707/*","*/, v77, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_19127/*"freeShopIds"*/, v78, 0LL);
  }
  v79 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)v69 + 14);
  if ( v79 )
  {
    myFSM = System_Linq_Enumerable__ToList_int_(
              v79,
              (const MethodInfo_1CBA56C *)Method_System_Linq_Enumerable_ToList_int___);
    v80 = (System_Collections_Generic_List_int__o *)myFSM;
    v81 = TerminalSceneComponent___c_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v81 = TerminalSceneComponent___c_TypeInfo;
    }
    v82 = v81->static_fields;
    _9__206_1 = v82->__9__206_1;
    if ( !_9__206_1 )
    {
      if ( (BYTE3(v81->vtable._0_Equals.methodPtr) & 4) != 0 && !v81->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v81);
        v82 = TerminalSceneComponent___c_TypeInfo->static_fields;
      }
      v84 = (Il2CppObject *)v82->__9;
      _9__206_1 = (System_Converter_int__string__o *)sub_B5D694(System_Converter_int__string__TypeInfo);
      System_Converter_int__string____ctor(
        _9__206_1,
        v84,
        Method_TerminalSceneComponent___c__callbackTopLogin_b__206_1__,
        (const MethodInfo_23F69D4 *)Method_System_Converter_int__string___ctor__);
      v85 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v85->__9__206_1 = _9__206_1;
      sub_B5D560(&v85->__9__206_1);
    }
    if ( v80 )
    {
      myFSM = System_Collections_Generic_List_int___ConvertAll_string_(
                v80,
                (System_Converter_T__TOutput__o *)_9__206_1,
                (const MethodInfo_192DF90 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
      if ( myFSM )
      {
        v86 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)myFSM,
                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
        v87 = System_String__Join((System_String_o *)StringLiteral_707/*","*/, v86, 0LL);
        UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_22107/*"returnRarePriShopIds"*/, v87, 0LL);
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

  if ( (byte_42E4ECD & 1) == 0 )
  {
    sub_B5D5C4(
      &TerminalSceneComponent__coFadein_WorldDisp_d__188_TypeInfo,
      (_DWORD)endAct,
      isExecuteUnusedAssets,
      method);
    byte_42E4ECD = 1;
  }
  v9 = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)sub_B5D694(TerminalSceneComponent__coFadein_WorldDisp_d__188_TypeInfo);
  TerminalSceneComponent__coFadein_WorldDisp_d__188___ctor(v9, 0, 0LL);
  if ( !v9 )
    sub_B5D69C(v10, v11);
  v9->fields.__4__this = this;
  sub_B5D560(&v9->fields.__4__this);
  v9->fields.fadeTime = fadeTime;
  v9->fields.endAct = endAct;
  sub_B5D560(&v9->fields.endAct);
  v9->fields.isExecuteUnusedAssets = isExecuteUnusedAssets;
  return (System_Collections_IEnumerator_o *)v9;
}


void __fastcall TerminalSceneComponent__deleteQuestMovie(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int64_t Time; // x20
  DataManager_o *Instance; // x0
  __int64 v36; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *EntityList_QuestReleaseMaster; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *v38; // x21
  __int64 v39; // x1
  __int64 v40; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v43; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v46; // x3
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  unsigned __int64 v48; // x10
  int32_t *v49; // x11
  __int64 v50; // x0
  __int64 v51; // x0
  QuestPhaseEntity_c *v52; // x1
  QuestPhaseEntity_o *v53; // x22
  __int64 v54; // x9
  QuestPhaseMaster_c *v55; // x0
  System_String_o *ScriptStr; // x0
  __int64 v57; // x1
  System_String_o *v58; // x23
  QuestEntity_o *Entity; // x0
  System_Collections_Generic_IEnumerator_T__c *v60; // x8
  unsigned __int64 v61; // x10
  int32_t *v62; // x11
  __int64 v63; // x0

  if ( (byte_42E4EE3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, v4, v5, v6);
    sub_B5D5C4(&Method_DataManager_getEntityList_QuestPhaseMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10, v11, v12);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&NetworkManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&QuestPhaseEntity_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&QuestPhaseMaster_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32, v33);
    byte_42E4EE3 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (EntityList_QuestReleaseMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__getEntityList_QuestReleaseMaster_(Instance, (const MethodInfo_1AE4468 *)Method_DataManager_getEntityList_QuestPhaseMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___),
        !EntityList_QuestReleaseMaster) )
  {
    sub_B5D69C(Instance, v36);
  }
  v38 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 EntityList_QuestReleaseMaster,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v39);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v43 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v43;
        p_offset += 4;
        if ( v43 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_14:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v40);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v47 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v48 = 0LL;
      v49 = &v47->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v49 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v48;
        v49 += 4;
        if ( v48 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_21;
      }
      v50 = (__int64)&v47->vtable[*v49].method;
    }
    else
    {
LABEL_21:
      v50 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v46);
    }
    v51 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(
            Enumerator,
            *(_QWORD *)(v50 + 8));
    v53 = (QuestPhaseEntity_o *)v51;
    if ( v51 )
    {
      v52 = QuestPhaseEntity_TypeInfo;
      v54 = *(&QuestPhaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v51 + 300LL) < (unsigned int)v54
        || *(QuestPhaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v51 + 200LL) + 8 * v54 - 8) != QuestPhaseEntity_TypeInfo )
      {
        v55 = (QuestPhaseMaster_c *)sub_B5D990(v51);
LABEL_43:
        sub_B5D69C(v55, v52);
      }
    }
    v55 = QuestPhaseMaster_TypeInfo;
    if ( (BYTE3(QuestPhaseMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo);
    }
    if ( !v53 )
      goto LABEL_43;
    ScriptStr = QuestPhaseEntity__getScriptStr(
                  v53,
                  QuestPhaseMaster_TypeInfo->static_fields->MOVIE_QUEST_SCRIPT_STR,
                  0LL,
                  0LL);
    v58 = ScriptStr;
    if ( ScriptStr )
    {
      if ( !v38 )
        sub_B5D69C(ScriptStr, v57);
      Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  v38,
                                  v53->fields.questId,
                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( Time >= QuestEntity__getClosedAt(Entity, 0LL) )
          MovieFileMerge__Delete(v58, 0LL);
      }
    }
  }
  v60 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v61 = 0LL;
    v62 = &v60->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
    {
      ++v61;
      v62 += 4;
      if ( v61 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v63 = (__int64)&v60->vtable[*v62].method;
  }
  else
  {
LABEL_39:
    v63 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v46);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v63)(Enumerator, *(_QWORD *)(v63 + 8));
}


void __fastcall TerminalSceneComponent__fadeoutBgm(
        TerminalSceneComponent_o *this,
        float fadeoutTime,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3

  if ( (byte_42E4EDC & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v3, v4);
    byte_42E4EDC = 1;
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalSceneComponent_c *v4; // x0

  if ( (byte_42E4EB3 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v1, v2, v3);
    byte_42E4EB3 = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  return v4->static_fields->mInstance;
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
  int v2; // w2
  __int64 v3; // x3
  float y; // s8
  float x; // s9
  float v7; // s0
  float v8; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_42E4EB6 & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4EB6 = 1;
  }
  x = this->fields.TUTORIAL_MENU_ARROW_POS2.fields.x;
  y = this->fields.TUTORIAL_MENU_ARROW_POS2.fields.y;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v7 = x + (float)(FSUtility__GetOffsetX(68.0, 0, 0LL) + -2.0);
  v8 = y + 33.0;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


UnityEngine_Vector2_o __fastcall TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_POS_FS(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  float y; // s8
  float x; // s9
  float v7; // s0
  float v8; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_42E4EB5 & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4EB5 = 1;
  }
  x = this->fields.TUTORIAL_MENU_ARROW_POS.fields.x;
  y = this->fields.TUTORIAL_MENU_ARROW_POS.fields.y;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v7 = x + (float)(FSUtility__GetOffsetX(68.0, 0, 0LL) + -14.0);
  v8 = y + 33.0;
  result.fields.y = v8;
  result.fields.x = v7;
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
  int v2; // w2
  __int64 v3; // x3
  float y; // s8
  float x; // s9
  float v7; // s0
  float v8; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_42E4EB7 & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4EB7 = 1;
  }
  x = this->fields.TUTORIAL_QUEST_ARROW_POS.fields.x;
  y = this->fields.TUTORIAL_QUEST_ARROW_POS.fields.y;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v7 = x + FSUtility__GetOffsetX(64.0, 0, 0LL);
  v8 = y;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_o __fastcall TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // s1
  float m_XMin; // s0
  float x; // s8
  float v10; // s4
  float v11; // s0
  float m_YMin; // s1
  float m_Width; // s2
  float m_Height; // s3
  struct UnityEngine_Rect_o TUTORIAL_QUEST_ARROW_RECT; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Rect_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E4EB8 & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4EB8 = 1;
  }
  TUTORIAL_QUEST_ARROW_RECT = this->fields.TUTORIAL_QUEST_ARROW_RECT;
  m_XMin = TUTORIAL_QUEST_ARROW_RECT.fields.m_XMin;
  x = UnityEngine_Rect__get_x(*(UnityEngine_Rect_o *)(&v4 - 1), (const MethodInfo *)&TUTORIAL_QUEST_ARROW_RECT);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v16.fields.m_XMin = x + FSUtility__GetOffsetX(64.0, 0, 0LL);
  UnityEngine_Rect__set_x(v16, v10, (const MethodInfo *)&TUTORIAL_QUEST_ARROW_RECT);
  m_YMin = TUTORIAL_QUEST_ARROW_RECT.fields.m_YMin;
  v11 = TUTORIAL_QUEST_ARROW_RECT.fields.m_XMin;
  m_Height = TUTORIAL_QUEST_ARROW_RECT.fields.m_Height;
  m_Width = TUTORIAL_QUEST_ARROW_RECT.fields.m_Width;
  result.fields.m_Height = m_Height;
  result.fields.m_Width = m_Width;
  result.fields.m_YMin = m_YMin;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  AtlasManager_o *Instance; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x1
  System_Action_o *v17; // x20

  if ( (byte_42E4EC2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_TerminalSceneComponent__loadCommonBG_b__175_0__, v11, v12, v13);
    byte_42E4EC2 = 1;
  }
  Instance = (AtlasManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v15);
  if ( AtlasManager__isLoadedSkinData(Instance, 4, 0LL) )
  {
    TerminalSceneComponent__loadOutGameAtlas(this, v16);
  }
  else
  {
    v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_TerminalSceneComponent__loadCommonBG_b__175_0__, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__LoadUISkin(v17, 4, 1, 0LL);
  }
}


void __fastcall TerminalSceneComponent__loadOutGameAtlas(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Action_o *v11; // x20

  if ( (byte_42E4EC3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_TerminalSceneComponent__loadOutGameAtlas_b__176_0__, v8, v9, v10);
    byte_42E4EC3 = 1;
  }
  v11 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_TerminalSceneComponent__loadOutGameAtlas_b__176_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v11, 0LL);
}


void __fastcall TerminalSceneComponent__loadVoice(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x8
  WebViewManager_o *Instance; // x0
  __int64 v13; // x1
  struct TerminalTransitionInfo_o *v14; // x8
  System_String_o *voiceAssetName; // x21
  SoundManager_o *v16; // x20
  System_Action_o *v17; // x22

  if ( (byte_42E4EC4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_TerminalSceneComponent_SendMessageStartUpAndResume__, v8, v9, v10);
    byte_42E4EC4 = 1;
  }
  TransitionInfo_k__BackingField = this->fields._TransitionInfo_k__BackingField;
  if ( TransitionInfo_k__BackingField
    && !System_String__IsNullOrEmpty(TransitionInfo_k__BackingField->fields.voiceAssetName, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v14 = this->fields._TransitionInfo_k__BackingField;
    if ( !v14
      || (voiceAssetName = v14->fields.voiceAssetName,
          v16 = (SoundManager_o *)Instance,
          v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
          System_Action___ctor(
            v17,
            (Il2CppObject *)this,
            Method_TerminalSceneComponent_SendMessageStartUpAndResume__,
            0LL),
          !v16) )
    {
      sub_B5D69C(Instance, v13);
    }
    SoundManager__LoadAudioAssetStorage(v16, voiceAssetName, v17, 1, 0LL);
  }
  else
  {
    TerminalSceneComponent__SendMessageStartUpAndResume(this, method);
  }
}


void __fastcall TerminalSceneComponent__mcbfCheckSceneStatus(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  TerminalPramsManager_c *v11; // x0
  int32_t meSceneStatus; // w8
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v14; // x8

  if ( (byte_42E4EEE & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_5826/*"EV_SCENE_STATUS_INIT"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_5827/*"EV_SCENE_STATUS_RESUME"*/, v8, v9, v10);
    byte_42E4EEE = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B2E )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B2E = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  meSceneStatus = v11->static_fields->meSceneStatus;
  if ( meSceneStatus != 3 && meSceneStatus != 2 )
  {
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      v14 = &StringLiteral_5826/*"EV_SCENE_STATUS_INIT"*/;
      goto LABEL_17;
    }
LABEL_18:
    sub_B5D69C(myFSM, method);
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_18;
  v14 = &StringLiteral_5827/*"EV_SCENE_STATUS_RESUME"*/;
LABEL_17:
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v14, 0LL);
}


void __fastcall TerminalSceneComponent__mfCallFsmEvent(
        TerminalSceneComponent_o *this,
        System_String_o *sEventStr,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B5D69C(0LL, sEventStr);
  PlayMakerFSM__SendEvent(myFSM, sEventStr, 0LL);
}


void __fastcall TerminalSceneComponent__mfsmfInitTable(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  ScrTerminalMap_o *mTerminalMap; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  QuestTree_o *v16; // x20
  System_Action_o *v17; // x21
  System_Collections_IEnumerator_o *v18; // x1

  if ( (byte_42E4EE2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_TerminalSceneComponent__mfsmfInitTable_b__210_0__, v11, v12, v13);
    byte_42E4EE2 = 1;
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
  v16 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_TerminalSceneComponent__mfsmfInitTable_b__210_0__, 0LL);
  if ( !v16 )
LABEL_11:
    sub_B5D69C(mTerminalMap, method);
  v18 = QuestTree__Init(v16, v17, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v18, 0LL);
}


void __fastcall TerminalSceneComponent__playBgm(
        TerminalSceneComponent_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v6; // x1
  System_String_o *mPlayBgmName; // x19

  if ( (byte_42E4ED9 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)bgmName, (_DWORD)method, v3);
    byte_42E4ED9 = 1;
  }
  if ( System_String__IsNullOrEmpty(bgmName, 0LL) )
  {
    TerminalSceneComponent__playDefaultBgm(this, v6);
  }
  else
  {
    this->fields.mPlayBgmName = bgmName;
    sub_B5D560(&this->fields.mPlayBgmName);
    mPlayBgmName = this->fields.mPlayBgmName;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playBgm(mPlayBgmName, 0LL);
  }
}


void __fastcall TerminalSceneComponent__playBgm_18327136(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *mPlayBgmName; // x19

  if ( (byte_42E4EDB & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4EDB = 1;
  }
  mPlayBgmName = this->fields.mPlayBgmName;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(mPlayBgmName, 0LL);
}


void __fastcall TerminalSceneComponent__playDefaultBgm(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *MainBgmName; // x1
  const MethodInfo *v6; // x2

  if ( (byte_42E4EDA & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4EDA = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  TerminalSceneComponent__playBgm(this, MainBgmName, v6);
}


void __fastcall TerminalSceneComponent__quit(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  AutomatedAction_o *Instance; // x0
  const MethodInfo *v30; // x1
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  TerminalPramsManager_c *v34; // x0
  TerminalPramsManager_c *v35; // x0
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x8
  struct TerminalTransitionInfo_o *v37; // x8
  System_String_o *voiceAssetName; // x20
  TerminalOverwriteMaster_o *MasterData_WarQuestSelectionMaster; // x0
  TerminalOverwriteMaster_o *v40; // x20
  bool OverwriteSkinName; // w0
  TerminalSceneComponent_c *v42; // x8
  System_String_o *OVERWRITE_COMMON_BG_TYPE1_KEY; // x21
  System_String_o *Empty; // x1
  System_String_o *v45; // x0
  bool v46; // w0
  TerminalSceneComponent_c *v47; // x8
  System_String_o *OVERWRITE_COMMON_BG_TYPE2_KEY; // x20
  System_String_o *v49; // x1
  System_String_o *v50; // x0
  System_String_o *str1; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *skinName; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42E4EC7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_TerminalOverwriteMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&string_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_14847/*"UISkin/"*/, v26, v27, v28);
    byte_42E4EC7 = 1;
  }
  skinName = 0LL;
  str1 = 0LL;
  Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  AutomatedAction__TerminateMissionAction(Instance, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5015 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v31, v32, v33);
    byte_42E5015 = 1;
  }
  v34 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v34 = TerminalPramsManager_TypeInfo;
  }
  if ( v34->static_fields->_isWarBoardPlay_k__BackingField )
  {
    if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v34);
    if ( !byte_42E5016 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v31, v32, v33);
      byte_42E5016 = 1;
    }
    v35 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v35 = TerminalPramsManager_TypeInfo;
    }
    v35->static_fields->_isWarBoardPlay_k__BackingField = 0;
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
  Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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
      v37 = this->fields._TransitionInfo_k__BackingField;
      if ( !v37 )
        goto LABEL_65;
      voiceAssetName = v37->fields.voiceAssetName;
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
      sub_B5D560(&Instance->fields.shopActionManagerPrefab);
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
      TitleInfoControl__releaseAssetData((TitleInfoControl_o *)Instance, v30);
      Instance = (AutomatedAction_o *)this->fields.mTerminalList;
      if ( Instance )
      {
        ScrTerminalListTop__ReleaseAsset((ScrTerminalListTop_o *)Instance, 0LL);
        goto LABEL_40;
      }
    }
LABEL_65:
    sub_B5D69C(Instance, v30);
  }
LABEL_40:
  Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  MasterData_WarQuestSelectionMaster = (TerminalOverwriteMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
  if ( MasterData_WarQuestSelectionMaster )
  {
    v40 = MasterData_WarQuestSelectionMaster;
    OverwriteSkinName = TerminalOverwriteMaster__TryGetOverwriteSkinName(
                          MasterData_WarQuestSelectionMaster,
                          2,
                          &skinName,
                          0LL);
    v42 = TerminalSceneComponent_TypeInfo;
    if ( OverwriteSkinName )
    {
      if ( (WORD1(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v42 = TerminalSceneComponent_TypeInfo;
      }
      OVERWRITE_COMMON_BG_TYPE1_KEY = v42->static_fields->OVERWRITE_COMMON_BG_TYPE1_KEY;
      Empty = System_String__Concat_44577788((System_String_o *)StringLiteral_14847/*"UISkin/"*/, skinName, 0LL);
      v45 = OVERWRITE_COMMON_BG_TYPE1_KEY;
    }
    else
    {
      if ( (WORD1(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v42 = TerminalSceneComponent_TypeInfo;
      }
      v45 = v42->static_fields->OVERWRITE_COMMON_BG_TYPE1_KEY;
      Empty = string_TypeInfo->static_fields->Empty;
    }
    UnityEngine_PlayerPrefs__SetString(v45, Empty, 0LL);
    v46 = TerminalOverwriteMaster__TryGetOverwriteSkinName(v40, 4, &str1, 0LL);
    v47 = TerminalSceneComponent_TypeInfo;
    if ( v46 )
    {
      if ( (WORD1(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v47 = TerminalSceneComponent_TypeInfo;
      }
      OVERWRITE_COMMON_BG_TYPE2_KEY = v47->static_fields->OVERWRITE_COMMON_BG_TYPE2_KEY;
      v49 = System_String__Concat_44577788((System_String_o *)StringLiteral_14847/*"UISkin/"*/, str1, 0LL);
      v50 = OVERWRITE_COMMON_BG_TYPE2_KEY;
    }
    else
    {
      if ( (WORD1(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v47 = TerminalSceneComponent_TypeInfo;
      }
      v50 = v47->static_fields->OVERWRITE_COMMON_BG_TYPE2_KEY;
      v49 = string_TypeInfo->static_fields->Empty;
    }
    UnityEngine_PlayerPrefs__SetString(v50, v49, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  MissionNotifyManager_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v22; // x1
  NetworkManager_ResultCallbackFunc_o *v23; // x21

  if ( (byte_42E4EE4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_EventDailyPointRequest___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_TerminalSceneComponent_callbackEventDailyPoint__, v18, v19, v20);
    byte_42E4EE4 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_12;
  MissionNotifyManager__StartPause(Request_WarBoardWallAttackRequest, 0LL);
  v23 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v23,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_callbackEventDailyPoint__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (MissionNotifyManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                  v23,
                                                                  (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_EventDailyPointRequest___);
  if ( !Request_WarBoardWallAttackRequest )
LABEL_12:
    sub_B5D69C(Request_WarBoardWallAttackRequest, v22);
  EventDailyPointRequest__beginRequest((EventDailyPointRequest_o *)Request_WarBoardWallAttackRequest, eventId, 0LL);
}


void __fastcall TerminalSceneComponent__requestTopHome(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  __int64 v20; // x1
  int v21; // w2
  __int64 v22; // x3
  TerminalPramsManager_c *v23; // x0
  PlayMakerFSM_o *myFSM; // x0
  NetworkManager_o *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v26; // x21

  if ( (byte_42E4EDE & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_LoginCallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_TerminalSceneComponent_callbackTopLogin__, v11, v12, v13);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_11212/*"REQUEST_OK"*/, v17, v18, v19);
    byte_42E4EDE = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_29295864(102, 0LL) )
    goto LABEL_16;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B4D )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v20, v21, v22);
    byte_42E4B4D = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  if ( v23->static_fields->_IsPlayScriptWithMap_k__BackingField )
  {
LABEL_16:
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11212/*"REQUEST_OK"*/, 0LL);
      this->fields.isTopLoginBusy = 0;
      return;
    }
LABEL_20:
    sub_B5D69C(myFSM, v20);
  }
  this->fields.isTopLoginBusy = 1;
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v26 = (NetworkManager_LoginCallbackFunc_o *)sub_B5D694(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(
    v26,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_callbackTopLogin__,
    0LL);
  if ( !Instance )
    goto LABEL_20;
  NetworkManager__RequestLogin(Instance, v26, 0, 0LL);
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
  sub_B5D560(&this->fields._TransitionInfo_k__BackingField);
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
  sub_B5D560(p_method);
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
  if ( (byte_42E61EE & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isPlay, (_DWORD)callback, object);
    byte_42E61EE = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall TerminalSceneComponent_PlayChapterStartCallback__EndInvoke(
        TerminalSceneComponent_PlayChapterStartCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent_PlayChapterStartCallback__Invoke(
        TerminalSceneComponent_PlayChapterStartCallback_o *this,
        bool isPlay,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  TerminalSceneComponent_PlayChapterStartCallback_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  TerminalSceneComponent_PlayChapterStartCallback_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  TerminalSceneComponent_PlayChapterStartCallback_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (TerminalSceneComponent_PlayChapterStartCallback_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isPlay, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isPlay, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, isPlay, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isPlay, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isPlay,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isPlay, v21);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *v26; // x19
  TerminalSceneComponent_o *mTerminalList; // x0
  __int64 v28; // x1
  TerminalSceneComponent_o **p_that; // x20
  struct ScrTerminalListTop_o *v30; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8
  struct UIScrollView_o *scrollView; // x8
  __int64 v33; // x22
  System_String_o *v34; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v36; // x0
  CommonUI_o *v37; // x22
  UnityEngine_Vector2_o TUTORIAL_QUEST_ARROW_POS_FS; // kr00_8
  float v39; // s0
  float v40; // s1
  float v41; // s2
  float v42; // s3
  TerminalSceneComponent_o *v43; // x8
  float x; // s14
  float y; // s15
  float v46; // s10
  float v47; // s11
  float v48; // s12
  float v49; // s13
  System_Action_o *v50; // x23
  struct ScrTerminalListTop_o *v51; // x21
  System_Action_o *v52; // x20
  UnityEngine_Rect_o v53; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_42E61EF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&Method_GameObjectExtensions_RemoveComponent_Collider___, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(
      &Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__0__,
      v14,
      v15,
      v16);
    sub_B5D5C4(
      &Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__1__,
      v17,
      v18,
      v19);
    sub_B5D5C4(&TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_13679/*"TUTORIAL_MESSAGE_TERMINAL_QUEST1"*/, v23, v24, v25);
    byte_42E61EF = 1;
  }
  v26 = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)sub_B5D694(TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_TypeInfo);
  TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0___ctor(v26, 0LL);
  if ( !v26 )
    goto LABEL_23;
  v26->fields.that = that;
  p_that = &v26->fields.that;
  sub_B5D560(&v26->fields);
  if ( !v26->fields.that )
    goto LABEL_23;
  mTerminalList = (TerminalSceneComponent_o *)v26->fields.that->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_23;
  v26->fields.focus_quest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mTerminalList, 0LL);
  sub_B5D560(&v26->fields.focus_quest);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  mTerminalList = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13679/*"TUTORIAL_MESSAGE_TERMINAL_QUEST1"*/, 0LL);
  if ( !*p_that )
    goto LABEL_23;
  v30 = (*p_that)->fields.mTerminalList;
  if ( !v30 )
    goto LABEL_23;
  mQuestBoardListViewManager = v30->fields.mQuestBoardListViewManager;
  if ( !mQuestBoardListViewManager )
    goto LABEL_23;
  scrollView = mQuestBoardListViewManager->fields.scrollView;
  if ( !scrollView )
    goto LABEL_23;
  v33 = *(_QWORD *)&scrollView->fields.showScrollBars;
  if ( !v33 )
    goto LABEL_23;
  v34 = (System_String_o *)mTerminalList;
  mTerminalList = *(TerminalSceneComponent_o **)(v33 + 48);
  if ( !mTerminalList )
    goto LABEL_23;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mTerminalList, 0LL);
  GameObjectExtensions__RemoveComponent_UIRootReScale_(
    gameObject,
    (const MethodInfo_1CC4FAC *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mTerminalList = *(TerminalSceneComponent_o **)(v33 + 40);
  if ( !mTerminalList )
    goto LABEL_23;
  v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mTerminalList, 0LL);
  GameObjectExtensions__RemoveComponent_UIRootReScale_(
    v36,
    (const MethodInfo_1CC4FAC *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mTerminalList = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*p_that )
    goto LABEL_23;
  v37 = (CommonUI_o *)mTerminalList;
  TUTORIAL_QUEST_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(*p_that, 0LL);
  mTerminalList = *p_that;
  if ( !*p_that )
    goto LABEL_23;
  *(UnityEngine_Rect_o *)&v39 = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(mTerminalList, 0LL);
  v43 = *p_that;
  if ( !*p_that )
    goto LABEL_23;
  x = v43->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x;
  y = v43->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.y;
  v46 = v39;
  v47 = v40;
  v48 = v41;
  v49 = v42;
  v50 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v50,
    (Il2CppObject *)v26,
    Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v37 )
    goto LABEL_23;
  v53.fields.m_XMin = v46;
  v53.fields.m_YMin = v47;
  v53.fields.m_Width = v48;
  v53.fields.m_Height = v49;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v37,
    v34,
    TUTORIAL_QUEST_ARROW_POS_FS,
    v53,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v50,
    0LL);
  if ( !*p_that
    || (v51 = (*p_that)->fields.mTerminalList,
        v52 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v52,
          (Il2CppObject *)v26,
          Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0LL),
        !v51) )
  {
LABEL_23:
    sub_B5D69C(mTerminalList, v28);
  }
  v51->fields.mQuestClickAct = v52;
  sub_B5D560(&v51->fields.mQuestClickAct);
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
  int v2; // w2
  __int64 v3; // x3
  TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *v4; // x19
  struct TerminalSceneComponent_o *that; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8

  v4 = this;
  if ( (byte_42F5483 & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)sub_B5D5C4(
                                                                                        &Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___,
                                                                                        (_DWORD)method,
                                                                                        v2,
                                                                                        v3);
    byte_42F5483 = 1;
  }
  that = v4->fields.that;
  if ( !that )
    goto LABEL_12;
  mTerminalList = that->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_12;
  mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager;
  if ( !mQuestBoardListViewManager
    || (this = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)mQuestBoardListViewManager->fields.scrollView) == 0LL
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL),
        (this = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)v4->fields.focus_quest) == 0LL)
    || (((void (__fastcall *)(TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *, __int64, void *))this->klass[1]._1.parent)(
          this,
          1LL,
          this->klass[1]._1.generic_class),
        (this = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)v4->fields.focus_quest) == 0LL)
    || (this = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)UnityEngine_Component__get_gameObject(
                                                                                            (UnityEngine_Component_o *)this,
                                                                                            0LL)) == 0LL
    || (this = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                            (UnityEngine_GameObject_o *)this,
                                                                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0LL )
  {
LABEL_12:
    sub_B5D69C(this, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42F5484 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__2__, v8, v9, v10);
    byte_42F5484 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v14 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !v14 )
    sub_B5D69C(Instance, v12);
  CommonUI__CloseTutorialNotificationDialogArrow_18227360(v14, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B5D69C(0LL, method);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_o *v24; // x20
  ScrTerminalMap_o *mTerminalMap; // x0
  __int64 v26; // x1
  System_String_o *v27; // x21
  CommonUI_o *Instance; // x22
  UnityEngine_Vector2_o TUTORIAL_SPOT_ARROW_POS1_FS; // kr00_8
  float x; // s14
  float y; // s15
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v36; // x23
  struct ScrTerminalMap_o *v37; // x21
  System_Action_o *v38; // x19
  UnityEngine_Rect_o TUTORIAL_SPOT_ARROW_RECT1_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v40; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_42E61F0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(
      &Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__0__,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__1__,
      v15,
      v16,
      v17);
    sub_B5D5C4(&TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_13682/*"TUTORIAL_MESSAGE_TERMINAL_SPOT1"*/, v21, v22, v23);
    byte_42E61F0 = 1;
  }
  v24 = (TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_o *)sub_B5D694(TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_TypeInfo);
  TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0___ctor(v24, 0LL);
  if ( !v24 )
    goto LABEL_13;
  v24->fields.__4__this = this;
  sub_B5D560(&v24->fields.__4__this);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_13;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_13;
  v24->fields.focus_spot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0LL);
  sub_B5D560(&v24->fields);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_13682/*"TUTORIAL_MESSAGE_TERMINAL_SPOT1"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  TUTORIAL_SPOT_ARROW_POS1_FS = TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_POS1_FS(that, 0LL);
  TUTORIAL_SPOT_ARROW_RECT1_FS = TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_RECT1_FS(that, 0LL);
  x = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x;
  y = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.y;
  m_XMin = TUTORIAL_SPOT_ARROW_RECT1_FS.fields.m_XMin;
  m_YMin = TUTORIAL_SPOT_ARROW_RECT1_FS.fields.m_YMin;
  m_Width = TUTORIAL_SPOT_ARROW_RECT1_FS.fields.m_Width;
  m_Height = TUTORIAL_SPOT_ARROW_RECT1_FS.fields.m_Height;
  v36 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v24,
    Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_13;
  v40.fields.m_XMin = m_XMin;
  v40.fields.m_YMin = m_YMin;
  v40.fields.m_Width = m_Width;
  v40.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    Instance,
    v27,
    TUTORIAL_SPOT_ARROW_POS1_FS,
    v40,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v36,
    0LL);
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__SetMapCamera_TutorialFocusSpot(mTerminalMap, v24->fields.focus_spot, 0.5, 0LL),
        v37 = that->fields.mTerminalMap,
        v38 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v38,
          (Il2CppObject *)v24,
          Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0LL),
        !v37) )
  {
LABEL_13:
    sub_B5D69C(mTerminalMap, v26);
  }
  v37->fields.mFocusSpot = (struct SrcSpotBasePrefab_o *)v38;
  sub_B5D560(&v37->fields.mFocusSpot);
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
      sub_B5D69C(that, that);
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
    sub_B5D69C(0LL, method);
  SrcSpotBasePrefab__SetBtnColliderEnable(focus_spot, 1, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0___begin_b__1(
        TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42F5485 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__2__, v8, v9, v10);
    byte_42F5485 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v14 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !v14 )
    sub_B5D69C(Instance, v12);
  CommonUI__CloseTutorialNotificationDialogArrow_18227360(v14, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial1_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(this, method);
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
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *v26; // x19
  TerminalSceneComponent_o *mTerminalList; // x0
  __int64 v28; // x1
  TerminalSceneComponent_o **p_that; // x20
  struct ScrTerminalListTop_o *v30; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8
  struct UIScrollView_o *scrollView; // x8
  __int64 v33; // x22
  System_String_o *v34; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v36; // x0
  CommonUI_o *v37; // x22
  UnityEngine_Vector2_o TUTORIAL_QUEST_ARROW_POS_FS; // kr00_8
  float v39; // s0
  float v40; // s1
  float v41; // s2
  float v42; // s3
  TerminalSceneComponent_o *v43; // x8
  float x; // s14
  float y; // s15
  float v46; // s10
  float v47; // s11
  float v48; // s12
  float v49; // s13
  System_Action_o *v50; // x23
  struct ScrTerminalListTop_o *v51; // x21
  System_Action_o *v52; // x20
  UnityEngine_Rect_o v53; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_42E61F1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&Method_GameObjectExtensions_RemoveComponent_Collider___, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(
      &Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__0__,
      v14,
      v15,
      v16);
    sub_B5D5C4(
      &Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__1__,
      v17,
      v18,
      v19);
    sub_B5D5C4(&TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_13680/*"TUTORIAL_MESSAGE_TERMINAL_QUEST2"*/, v23, v24, v25);
    byte_42E61F1 = 1;
  }
  v26 = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)sub_B5D694(TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_TypeInfo);
  TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0___ctor(v26, 0LL);
  if ( !v26 )
    goto LABEL_23;
  v26->fields.that = that;
  p_that = &v26->fields.that;
  sub_B5D560(&v26->fields);
  if ( !v26->fields.that )
    goto LABEL_23;
  mTerminalList = (TerminalSceneComponent_o *)v26->fields.that->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_23;
  v26->fields.focus_quest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mTerminalList, 0LL);
  sub_B5D560(&v26->fields.focus_quest);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  mTerminalList = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13680/*"TUTORIAL_MESSAGE_TERMINAL_QUEST2"*/, 0LL);
  if ( !*p_that )
    goto LABEL_23;
  v30 = (*p_that)->fields.mTerminalList;
  if ( !v30 )
    goto LABEL_23;
  mQuestBoardListViewManager = v30->fields.mQuestBoardListViewManager;
  if ( !mQuestBoardListViewManager )
    goto LABEL_23;
  scrollView = mQuestBoardListViewManager->fields.scrollView;
  if ( !scrollView )
    goto LABEL_23;
  v33 = *(_QWORD *)&scrollView->fields.showScrollBars;
  if ( !v33 )
    goto LABEL_23;
  v34 = (System_String_o *)mTerminalList;
  mTerminalList = *(TerminalSceneComponent_o **)(v33 + 48);
  if ( !mTerminalList )
    goto LABEL_23;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mTerminalList, 0LL);
  GameObjectExtensions__RemoveComponent_UIRootReScale_(
    gameObject,
    (const MethodInfo_1CC4FAC *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mTerminalList = *(TerminalSceneComponent_o **)(v33 + 40);
  if ( !mTerminalList )
    goto LABEL_23;
  v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mTerminalList, 0LL);
  GameObjectExtensions__RemoveComponent_UIRootReScale_(
    v36,
    (const MethodInfo_1CC4FAC *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mTerminalList = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*p_that )
    goto LABEL_23;
  v37 = (CommonUI_o *)mTerminalList;
  TUTORIAL_QUEST_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(*p_that, 0LL);
  mTerminalList = *p_that;
  if ( !*p_that )
    goto LABEL_23;
  *(UnityEngine_Rect_o *)&v39 = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(mTerminalList, 0LL);
  v43 = *p_that;
  if ( !*p_that )
    goto LABEL_23;
  x = v43->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x;
  y = v43->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.y;
  v46 = v39;
  v47 = v40;
  v48 = v41;
  v49 = v42;
  v50 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v50,
    (Il2CppObject *)v26,
    Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v37 )
    goto LABEL_23;
  v53.fields.m_XMin = v46;
  v53.fields.m_YMin = v47;
  v53.fields.m_Width = v48;
  v53.fields.m_Height = v49;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v37,
    v34,
    TUTORIAL_QUEST_ARROW_POS_FS,
    v53,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v50,
    0LL);
  if ( !*p_that
    || (v51 = (*p_that)->fields.mTerminalList,
        v52 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v52,
          (Il2CppObject *)v26,
          Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0LL),
        !v51) )
  {
LABEL_23:
    sub_B5D69C(mTerminalList, v28);
  }
  v51->fields.mQuestClickAct = v52;
  sub_B5D560(&v51->fields.mQuestClickAct);
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
  int v2; // w2
  __int64 v3; // x3
  TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *v4; // x19
  struct TerminalSceneComponent_o *that; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8

  v4 = this;
  if ( (byte_42F5486 & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)sub_B5D5C4(
                                                                                        &Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___,
                                                                                        (_DWORD)method,
                                                                                        v2,
                                                                                        v3);
    byte_42F5486 = 1;
  }
  that = v4->fields.that;
  if ( !that )
    goto LABEL_12;
  mTerminalList = that->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_12;
  mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager;
  if ( !mQuestBoardListViewManager
    || (this = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)mQuestBoardListViewManager->fields.scrollView) == 0LL
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL),
        (this = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)v4->fields.focus_quest) == 0LL)
    || (((void (__fastcall *)(TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *, __int64, void *))this->klass[1]._1.parent)(
          this,
          1LL,
          this->klass[1]._1.generic_class),
        (this = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)v4->fields.focus_quest) == 0LL)
    || (this = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)UnityEngine_Component__get_gameObject(
                                                                                            (UnityEngine_Component_o *)this,
                                                                                            0LL)) == 0LL
    || (this = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                            (UnityEngine_GameObject_o *)this,
                                                                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0LL )
  {
LABEL_12:
    sub_B5D69C(this, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42F5487 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__2__, v8, v9, v10);
    byte_42F5487 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v14 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !v14 )
    sub_B5D69C(Instance, v12);
  CommonUI__CloseTutorialNotificationDialogArrow_18227360(v14, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B5D69C(0LL, method);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_o *v24; // x20
  ScrTerminalMap_o *mTerminalMap; // x0
  __int64 v26; // x1
  System_String_o *v27; // x21
  CommonUI_o *Instance; // x22
  UnityEngine_Vector2_o TUTORIAL_SPOT_ARROW_POS2_FS; // kr00_8
  float x; // s14
  float y; // s15
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v36; // x23
  struct ScrTerminalMap_o *v37; // x21
  System_Action_o *v38; // x19
  UnityEngine_Rect_o TUTORIAL_SPOT_ARROW_RECT2_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v40; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_42E61F2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(
      &Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__0__,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__1__,
      v15,
      v16,
      v17);
    sub_B5D5C4(&TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_13683/*"TUTORIAL_MESSAGE_TERMINAL_SPOT2"*/, v21, v22, v23);
    byte_42E61F2 = 1;
  }
  v24 = (TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_o *)sub_B5D694(TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_TypeInfo);
  TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0___ctor(v24, 0LL);
  if ( !v24 )
    goto LABEL_13;
  v24->fields.__4__this = this;
  sub_B5D560(&v24->fields.__4__this);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_13;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_13;
  v24->fields.focus_spot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0LL);
  sub_B5D560(&v24->fields);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_13683/*"TUTORIAL_MESSAGE_TERMINAL_SPOT2"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  TUTORIAL_SPOT_ARROW_POS2_FS = TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_POS2_FS(that, 0LL);
  TUTORIAL_SPOT_ARROW_RECT2_FS = TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_RECT2_FS(that, 0LL);
  x = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x;
  y = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.y;
  m_XMin = TUTORIAL_SPOT_ARROW_RECT2_FS.fields.m_XMin;
  m_YMin = TUTORIAL_SPOT_ARROW_RECT2_FS.fields.m_YMin;
  m_Width = TUTORIAL_SPOT_ARROW_RECT2_FS.fields.m_Width;
  m_Height = TUTORIAL_SPOT_ARROW_RECT2_FS.fields.m_Height;
  v36 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v24,
    Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_13;
  v40.fields.m_XMin = m_XMin;
  v40.fields.m_YMin = m_YMin;
  v40.fields.m_Width = m_Width;
  v40.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    Instance,
    v27,
    TUTORIAL_SPOT_ARROW_POS2_FS,
    v40,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v36,
    0LL);
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__SetMapCamera_TutorialFocusSpot(mTerminalMap, v24->fields.focus_spot, 0.5, 0LL),
        v37 = that->fields.mTerminalMap,
        v38 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v38,
          (Il2CppObject *)v24,
          Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0LL),
        !v37) )
  {
LABEL_13:
    sub_B5D69C(mTerminalMap, v26);
  }
  v37->fields.mFocusSpot = (struct SrcSpotBasePrefab_o *)v38;
  sub_B5D560(&v37->fields.mFocusSpot);
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
      sub_B5D69C(that, that);
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
    sub_B5D69C(0LL, method);
  SrcSpotBasePrefab__SetBtnColliderEnable(focus_spot, 1, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0___begin_b__1(
        TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42F5488 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__2__, v8, v9, v10);
    byte_42F5488 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v14 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !v14 )
    sub_B5D69C(Instance, v12);
  CommonUI__CloseTutorialNotificationDialogArrow_18227360(v14, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial2_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(this, method);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_o *v26; // x19
  TerminalSceneComponent_o *Instance; // x0
  __int64 v28; // x1
  TerminalSceneComponent_o **p_that; // x22
  System_String_o *v30; // x20
  CommonUI_o *v31; // x21
  UnityEngine_Vector2_o TUTORIAL_GACHA_ARROW_POS_FS; // kr00_8
  float v33; // s0
  float v34; // s1
  float v35; // s2
  float v36; // s3
  TerminalSceneComponent_o *v37; // x8
  float x; // s14
  float y; // s15
  float v40; // s10
  float v41; // s11
  float v42; // s12
  float v43; // s13
  struct TerminalSceneComponent_StateTutorial3_GachaArrow___c_StaticFields *static_fields; // x8
  System_Action_o *_9__0_0; // x22
  Il2CppObject *v46; // x23
  struct TerminalSceneComponent_StateTutorial3_GachaArrow___c_StaticFields *v47; // x0
  System_Action_o *v48; // x20
  UnityEngine_Rect_o v49; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_42E61F3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__begin_b__0_0__, v11, v12, v13);
    sub_B5D5C4(
      &Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__1__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_13677/*"TUTORIAL_MESSAGE_TERMINAL_GACHA"*/, v23, v24, v25);
    byte_42E61F3 = 1;
  }
  v26 = (TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_o *)sub_B5D694(TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_TypeInfo);
  TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0___ctor(v26, 0LL);
  if ( !v26 )
    goto LABEL_20;
  v26->fields.that = that;
  p_that = &v26->fields.that;
  sub_B5D560(&v26->fields);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_13677/*"TUTORIAL_MESSAGE_TERMINAL_GACHA"*/, 0LL);
  Instance = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*p_that )
    goto LABEL_20;
  v31 = (CommonUI_o *)Instance;
  TUTORIAL_GACHA_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_GACHA_ARROW_POS_FS(*p_that, 0LL);
  Instance = *p_that;
  if ( !*p_that )
    goto LABEL_20;
  *(UnityEngine_Rect_o *)&v33 = TerminalSceneComponent__get_TUTORIAL_GACHA_ARROW_RECT_FS(Instance, 0LL);
  v37 = *p_that;
  if ( !*p_that )
    goto LABEL_20;
  x = v37->fields.TUTORIAL_MENU_MESSAGE_POS.fields.x;
  y = v37->fields.TUTORIAL_MENU_MESSAGE_POS.fields.y;
  v40 = v33;
  v41 = v34;
  Instance = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo;
  v42 = v35;
  v43 = v36;
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
    v46 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(_9__0_0, v46, Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__begin_b__0_0__, 0LL);
    v47 = TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields;
    v47->__9__0_0 = _9__0_0;
    sub_B5D560(&v47->__9__0_0);
  }
  if ( !v31 )
LABEL_20:
    sub_B5D69C(Instance, v28);
  v49.fields.m_XMin = v40;
  v49.fields.m_YMin = v41;
  v49.fields.m_Width = v42;
  v49.fields.m_Height = v43;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v31,
    v30,
    TUTORIAL_GACHA_ARROW_POS_FS,
    v49,
    0.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    _9__0_0,
    0LL);
  v48 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v48,
    (Il2CppObject *)v26,
    Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__1__,
    0LL);
  MainMenuBar__SetDispBtnAct(2, v48, 0LL);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42F5489 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo, v1, v2, v3);
    byte_42F5489 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewManager_o *Instance; // x0
  __int64 v15; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42F548A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v8, v9, v10);
    sub_B5D5C4(
      &Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__2__,
      v11,
      v12,
      v13);
    byte_42F548A = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress(1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v17 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !v17 )
    sub_B5D69C(Instance, v15);
  CommonUI__CloseTutorialNotificationDialogArrow_18227360(v17, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B5D69C(0LL, method);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_o *v26; // x19
  TerminalSceneComponent_o *Instance; // x0
  __int64 v28; // x1
  TerminalSceneComponent_o **p_that; // x22
  System_String_o *v30; // x20
  CommonUI_o *v31; // x21
  UnityEngine_Vector2_o TUTORIAL_MENU_ARROW_POS_FS; // kr00_8
  float v33; // s0
  float v34; // s1
  float v35; // s2
  float v36; // s3
  TerminalSceneComponent_o *v37; // x8
  float x; // s14
  float y; // s15
  float v40; // s10
  float v41; // s11
  float v42; // s12
  float v43; // s13
  struct TerminalSceneComponent_StateTutorial3_MenuArrow___c_StaticFields *static_fields; // x8
  System_Action_o *_9__0_0; // x22
  Il2CppObject *v46; // x23
  struct TerminalSceneComponent_StateTutorial3_MenuArrow___c_StaticFields *v47; // x0
  System_Action_o *v48; // x20
  UnityEngine_Rect_o v49; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_42E61F4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__begin_b__0_0__, v11, v12, v13);
    sub_B5D5C4(
      &Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__1__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_13678/*"TUTORIAL_MESSAGE_TERMINAL_MENU"*/, v23, v24, v25);
    byte_42E61F4 = 1;
  }
  v26 = (TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_o *)sub_B5D694(TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_TypeInfo);
  TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0___ctor(v26, 0LL);
  if ( !v26 )
    goto LABEL_20;
  v26->fields.that = that;
  p_that = &v26->fields.that;
  sub_B5D560(&v26->fields);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_13678/*"TUTORIAL_MESSAGE_TERMINAL_MENU"*/, 0LL);
  Instance = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*p_that )
    goto LABEL_20;
  v31 = (CommonUI_o *)Instance;
  TUTORIAL_MENU_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_POS_FS(*p_that, 0LL);
  Instance = *p_that;
  if ( !*p_that )
    goto LABEL_20;
  *(UnityEngine_Rect_o *)&v33 = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_RECT_FS(Instance, 0LL);
  v37 = *p_that;
  if ( !*p_that )
    goto LABEL_20;
  x = v37->fields.TUTORIAL_MENU_MESSAGE_POS.fields.x;
  y = v37->fields.TUTORIAL_MENU_MESSAGE_POS.fields.y;
  v40 = v33;
  v41 = v34;
  Instance = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo;
  v42 = v35;
  v43 = v36;
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
    v46 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(_9__0_0, v46, Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__begin_b__0_0__, 0LL);
    v47 = TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields;
    v47->__9__0_0 = _9__0_0;
    sub_B5D560(&v47->__9__0_0);
  }
  if ( !v31 )
LABEL_20:
    sub_B5D69C(Instance, v28);
  v49.fields.m_XMin = v40;
  v49.fields.m_YMin = v41;
  v49.fields.m_Width = v42;
  v49.fields.m_Height = v43;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v31,
    v30,
    TUTORIAL_MENU_ARROW_POS_FS,
    v49,
    0.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    _9__0_0,
    0LL);
  v48 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v48,
    (Il2CppObject *)v26,
    Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__1__,
    0LL);
  MainMenuBar__SetMenuBtnAct(v48, 0LL);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42F548B & 1) == 0 )
  {
    sub_B5D5C4(&TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo, v1, v2, v3);
    byte_42F548B = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42F548C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__2__, v8, v9, v10);
    byte_42F548C = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v14 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !v14 )
    sub_B5D69C(Instance, v12);
  CommonUI__CloseTutorialNotificationDialogArrow_18227360(v14, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B5D69C(0LL, method);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *v26; // x19
  TerminalSceneComponent_o *mTerminalList; // x0
  __int64 v28; // x1
  TerminalSceneComponent_o **p_that; // x20
  struct ScrTerminalListTop_o *v30; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8
  struct UIScrollView_o *scrollView; // x8
  __int64 v33; // x22
  System_String_o *v34; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v36; // x0
  CommonUI_o *v37; // x22
  UnityEngine_Vector2_o TUTORIAL_QUEST_ARROW_POS_FS; // kr00_8
  float v39; // s0
  float v40; // s1
  float v41; // s2
  float v42; // s3
  TerminalSceneComponent_o *v43; // x8
  float x; // s14
  float y; // s15
  float v46; // s10
  float v47; // s11
  float v48; // s12
  float v49; // s13
  System_Action_o *v50; // x23
  struct ScrTerminalListTop_o *v51; // x21
  System_Action_o *v52; // x20
  UnityEngine_Rect_o v53; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_42E61F5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&Method_GameObjectExtensions_RemoveComponent_Collider___, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(
      &Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__0__,
      v14,
      v15,
      v16);
    sub_B5D5C4(
      &Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__1__,
      v17,
      v18,
      v19);
    sub_B5D5C4(&TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_13681/*"TUTORIAL_MESSAGE_TERMINAL_QUEST3"*/, v23, v24, v25);
    byte_42E61F5 = 1;
  }
  v26 = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)sub_B5D694(TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_TypeInfo);
  TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0___ctor(v26, 0LL);
  if ( !v26 )
    goto LABEL_23;
  v26->fields.that = that;
  p_that = &v26->fields.that;
  sub_B5D560(&v26->fields);
  if ( !v26->fields.that )
    goto LABEL_23;
  mTerminalList = (TerminalSceneComponent_o *)v26->fields.that->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_23;
  v26->fields.focus_quest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mTerminalList, 0LL);
  sub_B5D560(&v26->fields.focus_quest);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  mTerminalList = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13681/*"TUTORIAL_MESSAGE_TERMINAL_QUEST3"*/, 0LL);
  if ( !*p_that )
    goto LABEL_23;
  v30 = (*p_that)->fields.mTerminalList;
  if ( !v30 )
    goto LABEL_23;
  mQuestBoardListViewManager = v30->fields.mQuestBoardListViewManager;
  if ( !mQuestBoardListViewManager )
    goto LABEL_23;
  scrollView = mQuestBoardListViewManager->fields.scrollView;
  if ( !scrollView )
    goto LABEL_23;
  v33 = *(_QWORD *)&scrollView->fields.showScrollBars;
  if ( !v33 )
    goto LABEL_23;
  v34 = (System_String_o *)mTerminalList;
  mTerminalList = *(TerminalSceneComponent_o **)(v33 + 48);
  if ( !mTerminalList )
    goto LABEL_23;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mTerminalList, 0LL);
  GameObjectExtensions__RemoveComponent_UIRootReScale_(
    gameObject,
    (const MethodInfo_1CC4FAC *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mTerminalList = *(TerminalSceneComponent_o **)(v33 + 40);
  if ( !mTerminalList )
    goto LABEL_23;
  v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mTerminalList, 0LL);
  GameObjectExtensions__RemoveComponent_UIRootReScale_(
    v36,
    (const MethodInfo_1CC4FAC *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mTerminalList = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*p_that )
    goto LABEL_23;
  v37 = (CommonUI_o *)mTerminalList;
  TUTORIAL_QUEST_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(*p_that, 0LL);
  mTerminalList = *p_that;
  if ( !*p_that )
    goto LABEL_23;
  *(UnityEngine_Rect_o *)&v39 = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(mTerminalList, 0LL);
  v43 = *p_that;
  if ( !*p_that )
    goto LABEL_23;
  x = v43->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x;
  y = v43->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.y;
  v46 = v39;
  v47 = v40;
  v48 = v41;
  v49 = v42;
  v50 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v50,
    (Il2CppObject *)v26,
    Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v37 )
    goto LABEL_23;
  v53.fields.m_XMin = v46;
  v53.fields.m_YMin = v47;
  v53.fields.m_Width = v48;
  v53.fields.m_Height = v49;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v37,
    v34,
    TUTORIAL_QUEST_ARROW_POS_FS,
    v53,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v50,
    0LL);
  if ( !*p_that
    || (v51 = (*p_that)->fields.mTerminalList,
        v52 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v52,
          (Il2CppObject *)v26,
          Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0LL),
        !v51) )
  {
LABEL_23:
    sub_B5D69C(mTerminalList, v28);
  }
  v51->fields.mQuestClickAct = v52;
  sub_B5D560(&v51->fields.mQuestClickAct);
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
  int v2; // w2
  __int64 v3; // x3
  TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *v4; // x19
  struct TerminalSceneComponent_o *that; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8

  v4 = this;
  if ( (byte_42F548D & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)sub_B5D5C4(
                                                                                        &Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___,
                                                                                        (_DWORD)method,
                                                                                        v2,
                                                                                        v3);
    byte_42F548D = 1;
  }
  that = v4->fields.that;
  if ( !that )
    goto LABEL_12;
  mTerminalList = that->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_12;
  mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager;
  if ( !mQuestBoardListViewManager
    || (this = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)mQuestBoardListViewManager->fields.scrollView) == 0LL
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL),
        (this = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)v4->fields.focus_quest) == 0LL)
    || (((void (__fastcall *)(TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *, __int64, void *))this->klass[1]._1.parent)(
          this,
          1LL,
          this->klass[1]._1.generic_class),
        (this = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)v4->fields.focus_quest) == 0LL)
    || (this = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)UnityEngine_Component__get_gameObject(
                                                                                            (UnityEngine_Component_o *)this,
                                                                                            0LL)) == 0LL
    || (this = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                            (UnityEngine_GameObject_o *)this,
                                                                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0LL )
  {
LABEL_12:
    sub_B5D69C(this, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42F548E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__2__, v8, v9, v10);
    byte_42F548E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v14 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !v14 )
    sub_B5D69C(Instance, v12);
  CommonUI__CloseTutorialNotificationDialogArrow_18227360(v14, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B5D69C(0LL, method);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_o *v18; // x20
  ScrTerminalMap_o *mTerminalMap; // x0
  __int64 v20; // x1
  CommonUI_o *Instance; // x21
  UnityEngine_Vector2_o TUTORIAL_SPOT_ARROW_POS4_FS; // kr00_8
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v27; // x22
  struct ScrTerminalMap_o *v28; // x21
  System_Action_o *v29; // x19
  UnityEngine_Rect_o TUTORIAL_SPOT_ARROW_RECT4_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v31; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_42E61F6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__0__, v9, v10, v11);
    sub_B5D5C4(
      &Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__1__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_TypeInfo, v15, v16, v17);
    byte_42E61F6 = 1;
  }
  v18 = (TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_o *)sub_B5D694(TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_TypeInfo);
  TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0___ctor(v18, 0LL);
  if ( !v18 )
    goto LABEL_10;
  v18->fields.__4__this = this;
  sub_B5D560(&v18->fields.__4__this);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_10;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_10;
  v18->fields.focus_spot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0LL);
  sub_B5D560(&v18->fields);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  TUTORIAL_SPOT_ARROW_POS4_FS = TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_POS4_FS(that, 0LL);
  TUTORIAL_SPOT_ARROW_RECT4_FS = TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_RECT4_FS(that, 0LL);
  m_XMin = TUTORIAL_SPOT_ARROW_RECT4_FS.fields.m_XMin;
  m_YMin = TUTORIAL_SPOT_ARROW_RECT4_FS.fields.m_YMin;
  m_Width = TUTORIAL_SPOT_ARROW_RECT4_FS.fields.m_Width;
  m_Height = TUTORIAL_SPOT_ARROW_RECT4_FS.fields.m_Height;
  v27 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v18,
    Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_10;
  v31.fields.m_XMin = m_XMin;
  v31.fields.m_YMin = m_YMin;
  v31.fields.m_Width = m_Width;
  v31.fields.m_Height = m_Height;
  CommonUI__OpenTutorialArrowMark(Instance, TUTORIAL_SPOT_ARROW_POS4_FS, 90.0, v31, v27, 0LL);
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__SetMapCamera_TutorialFocusSpot(mTerminalMap, v18->fields.focus_spot, 0.5, 0LL),
        v28 = that->fields.mTerminalMap,
        v29 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v29,
          (Il2CppObject *)v18,
          Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0LL),
        !v28) )
  {
LABEL_10:
    sub_B5D69C(mTerminalMap, v20);
  }
  v28->fields.mFocusSpot = (struct SrcSpotBasePrefab_o *)v29;
  sub_B5D560(&v28->fields.mFocusSpot);
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
      sub_B5D69C(that, that);
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
    sub_B5D69C(0LL, method);
  SrcSpotBasePrefab__SetBtnColliderEnable(focus_spot, 1, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0___begin_b__1(
        TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42F548F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__2__, v8, v9, v10);
    byte_42F548F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v14 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !v14 )
    sub_B5D69C(Instance, v12);
  CommonUI__CloseTutorialArrowMark(v14, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial4_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(this, method);
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
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_o *v20; // x19
  TerminalSceneComponent_o *Instance; // x0
  __int64 v22; // x1
  TerminalSceneComponent_o **p_that; // x21
  CommonUI_o *v24; // x20
  UnityEngine_Vector2_o TUTORIAL_COMBINE_ARROW_POS_FS; // kr00_8
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  struct TerminalSceneComponent_StateTutorial5_CombineArrow___c_StaticFields *static_fields; // x8
  System_Action_o *_9__0_0; // x21
  Il2CppObject *v32; // x22
  struct TerminalSceneComponent_StateTutorial5_CombineArrow___c_StaticFields *v33; // x0
  System_Action_o *v34; // x20
  UnityEngine_Rect_o TUTORIAL_COMBINE_ARROW_RECT_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v36; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_42E61F7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__begin_b__0_0__, v8, v9, v10);
    sub_B5D5C4(
      &Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__1__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo, v17, v18, v19);
    byte_42E61F7 = 1;
  }
  v20 = (TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_o *)sub_B5D694(TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_TypeInfo);
  TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_16;
  v20->fields.that = that;
  p_that = &v20->fields.that;
  sub_B5D560(&v20->fields);
  Instance = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v20->fields.that )
    goto LABEL_16;
  v24 = (CommonUI_o *)Instance;
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
    v32 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__0_0,
      v32,
      Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__begin_b__0_0__,
      0LL);
    v33 = TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields;
    v33->__9__0_0 = _9__0_0;
    sub_B5D560(&v33->__9__0_0);
  }
  if ( !v24 )
LABEL_16:
    sub_B5D69C(Instance, v22);
  v36.fields.m_XMin = m_XMin;
  v36.fields.m_YMin = m_YMin;
  v36.fields.m_Width = m_Width;
  v36.fields.m_Height = m_Height;
  CommonUI__OpenTutorialArrowMark(v24, TUTORIAL_COMBINE_ARROW_POS_FS, 0.0, v36, _9__0_0, 0LL);
  v34 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v20,
    Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__1__,
    0LL);
  MainMenuBar__SetDispBtnAct(3, v34, 0LL);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42F5490 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo, v1, v2, v3);
    byte_42F5490 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42F5491 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(
      &Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__2__,
      v8,
      v9,
      v10);
    byte_42F5491 = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v14 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !v14 )
    sub_B5D69C(Instance, v12);
  CommonUI__CloseTutorialArrowMark(v14, _9__2, 0LL);
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
    sub_B5D69C(that, method);
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
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_o *v26; // x19
  TerminalSceneComponent_o *v27; // x0
  __int64 v28; // x1
  TerminalSceneComponent_o **p_that; // x22
  CommonUI_o *Instance; // x20
  System_String_o *v31; // x21
  UnityEngine_Vector2_o TUTORIAL_MENU_ARROW_POS2_FS; // kr00_8
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  struct TerminalSceneComponent_StateTutorial5_MenuArrow___c_StaticFields *static_fields; // x8
  System_Action_o *_9__0_0; // x22
  Il2CppObject *v39; // x23
  struct TerminalSceneComponent_StateTutorial5_MenuArrow___c_StaticFields *v40; // x0
  System_Action_o *v41; // x20
  UnityEngine_Rect_o TUTORIAL_MENU_ARROW_RECT_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v43; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_42E61F8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__begin_b__0_0__, v11, v12, v13);
    sub_B5D5C4(
      &Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__1__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_13659/*"TUTORIAL_MESSAGE_COMBINE1"*/, v23, v24, v25);
    byte_42E61F8 = 1;
  }
  v26 = (TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_o *)sub_B5D694(TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_TypeInfo);
  TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0___ctor(v26, 0LL);
  if ( !v26 )
    goto LABEL_19;
  v26->fields.that = that;
  p_that = &v26->fields.that;
  sub_B5D560(&v26->fields);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v27 = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13659/*"TUTORIAL_MESSAGE_COMBINE1"*/, 0LL);
  if ( !*p_that )
    goto LABEL_19;
  v31 = (System_String_o *)v27;
  TUTORIAL_MENU_ARROW_POS2_FS = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_POS2_FS(*p_that, 0LL);
  v27 = *p_that;
  if ( !*p_that )
    goto LABEL_19;
  TUTORIAL_MENU_ARROW_RECT_FS = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_RECT_FS(v27, 0LL);
  m_XMin = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_XMin;
  m_YMin = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_YMin;
  m_Width = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_Width;
  v27 = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo;
  m_Height = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_Height;
  if ( (BYTE3(TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo);
    v27 = (TerminalSceneComponent_o *)TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo;
  }
  static_fields = *(struct TerminalSceneComponent_StateTutorial5_MenuArrow___c_StaticFields **)&v27->fields.TUTORIAL_COMBINE_ARROW_RECT.fields.m_XMin;
  _9__0_0 = static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v27->fields.mQuestInformation) & 4) != 0 && !LODWORD(v27->fields.mFSM) )
    {
      j_il2cpp_runtime_class_init_0(v27);
      static_fields = TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(_9__0_0, v39, Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__begin_b__0_0__, 0LL);
    v40 = TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields;
    v40->__9__0_0 = _9__0_0;
    sub_B5D560(&v40->__9__0_0);
  }
  if ( !Instance )
LABEL_19:
    sub_B5D69C(v27, v28);
  v43.fields.m_XMin = m_XMin;
  v43.fields.m_YMin = m_YMin;
  v43.fields.m_Width = m_Width;
  v43.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    Instance,
    v31,
    TUTORIAL_MENU_ARROW_POS2_FS,
    v43,
    0.0,
    (UnityEngine_Vector2_o)0xC224000000000000LL,
    -1,
    _9__0_0,
    0LL);
  v41 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v26,
    Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__1__,
    0LL);
  MainMenuBar__SetMenuBtnAct(v41, 0LL);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42F5492 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo, v1, v2, v3);
    byte_42F5492 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42F5493 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__2__, v8, v9, v10);
    byte_42F5493 = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v14 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !v14 )
    sub_B5D69C(Instance, v12);
  CommonUI__CloseTutorialNotificationDialogArrow_18227360(v14, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v16; // x21
  UnityEngine_WaitUntil_o *v17; // x20
  bool result; // w0
  System_Action_o *openCampaignDirectBonus; // x0

  if ( (byte_42E61E9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_TerminalSceneComponent__CoWaitBlankEerthActionEnd_b__244_0__, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v11, v12, v13);
    byte_42E61E9 = 1;
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
    v16 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v16,
      _4__this,
      Method_TerminalSceneComponent__CoWaitBlankEerthActionEnd_b__244_0__,
      (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
    v17 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v17, v16, 0LL);
    this->fields.__2__current = (Il2CppObject *)v17;
    sub_B5D560(&this->fields.__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_TerminalSceneComponent__CoWaitBlankEerthActionEnd_d__244_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v16; // x21
  UnityEngine_WaitUntil_o *v17; // x20
  bool result; // w0
  System_Action_o *openCampaignDirectBonus; // x0

  if ( (byte_42E61EA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_b__243_0__, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v11, v12, v13);
    byte_42E61EA = 1;
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
    v16 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v16,
      _4__this,
      Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_b__243_0__,
      (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
    v17 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v17, v16, 0LL);
    this->fields.__2__current = (Il2CppObject *)v17;
    sub_B5D560(&this->fields.__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__243_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int32_t _1__state; // w8
  struct TerminalSceneComponent_o *_4__this; // x21
  __int64 v67; // x20
  System_Action_o *callback; // x0
  UserServantEntity_o *usd; // x22
  System_Action_o *v70; // x23
  System_Action_o *v71; // x22
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x8
  struct TerminalTransitionInfo_o *v73; // x8
  SoundManager_o *v74; // x21
  System_String_o *voiceAssetName; // x22
  System_Action_o *v76; // x23
  System_Action_o *v77; // x21
  System_Action_o *v78; // x21
  System_Action_o *v79; // x21
  System_Action_o *v80; // x21
  System_Action_o *v81; // x21
  System_Action_o *v82; // x21
  System_Action_o *v83; // x21
  System_Action_o *v84; // x21
  System_Action_o *v85; // x21
  System_Func_bool__o *v86; // x21
  UnityEngine_WaitUntil_o *v87; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_42E61EB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_bool___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__0__, v20, v21, v22);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__10__, v23, v24, v25);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__11__, v26, v27, v28);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__12__, v29, v30, v31);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__1__, v32, v33, v34);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__2__, v35, v36, v37);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__3__, v38, v39, v40);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__4__, v41, v42, v43);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__5__, v44, v45, v46);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__6__, v47, v48, v49);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__7__, v50, v51, v52);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__8__, v53, v54, v55);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__9__, v56, v57, v58);
    sub_B5D5C4(&TerminalSceneComponent___c__DisplayClass171_0_TypeInfo, v59, v60, v61);
    sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v62, v63, v64);
    byte_42E61EB = 1;
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
  v67 = sub_B5D694(TerminalSceneComponent___c__DisplayClass171_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v67, 0LL);
  if ( !v67 )
    goto LABEL_25;
  *(_BYTE *)(v67 + 23) = 0;
  *(_DWORD *)(v67 + 19) = 0;
  *(_DWORD *)(v67 + 24) = 0;
  *(_WORD *)(v67 + 16) = 256;
  *(_BYTE *)(v67 + 18) = 1;
  usd = this->fields.usd;
  v70 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v70,
    (Il2CppObject *)v67,
    Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__0__,
    0LL);
  if ( !_4__this )
    goto LABEL_25;
  TerminalSceneComponent__SetupStandServant(_4__this, usd, 0, v70, 0LL);
  callback = (System_Action_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !callback )
    goto LABEL_25;
  if ( !AtlasManager__isLoadedSkinData((AtlasManager_o *)callback, 4, 0LL) )
  {
    *(_BYTE *)(v67 + 17) = 0;
    v71 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v71,
      (Il2CppObject *)v67,
      Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__1__,
      0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__LoadUISkin(v71, 4, 10, 0LL);
  }
  TransitionInfo_k__BackingField = _4__this->fields._TransitionInfo_k__BackingField;
  if ( !TransitionInfo_k__BackingField
    || System_String__IsNullOrEmpty(TransitionInfo_k__BackingField->fields.voiceAssetName, 0LL) )
  {
    goto LABEL_18;
  }
  *(_BYTE *)(v67 + 18) = 0;
  callback = (System_Action_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v73 = _4__this->fields._TransitionInfo_k__BackingField;
  if ( !v73
    || (v74 = (SoundManager_o *)callback,
        voiceAssetName = v73->fields.voiceAssetName,
        v76 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v76,
          (Il2CppObject *)v67,
          Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__2__,
          0LL),
        !v74) )
  {
LABEL_25:
    sub_B5D69C(callback, method);
  }
  SoundManager__LoadAudioAssetStorage(v74, voiceAssetName, v76, 1, 0LL);
LABEL_18:
  v77 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v77,
    (Il2CppObject *)v67,
    Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__3__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadBanner(v77, 10, 0LL);
  v78 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v78,
    (Il2CppObject *)v67,
    Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__4__,
    0LL);
  AtlasManager__LoadFaceAtlas(v78, 10, 0LL);
  v79 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v79,
    (Il2CppObject *)v67,
    Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__5__,
    0LL);
  AtlasManager__LoadEquipFace(v79, 10, 0LL);
  v80 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v80,
    (Il2CppObject *)v67,
    Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__6__,
    0LL);
  AtlasManager__LoadFriendshipExceed(v80, 10, 0LL);
  v81 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v81,
    (Il2CppObject *)v67,
    Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__7__,
    0LL);
  AtlasManager__LoadCommandCode(v81, 10, 0LL);
  v82 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v82,
    (Il2CppObject *)v67,
    Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__8__,
    0LL);
  AtlasManager__LoadCommandCodeMini(v82, 10, 0LL);
  v83 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v83,
    (Il2CppObject *)v67,
    Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__9__,
    0LL);
  AtlasManager__LoadEventAtlas(v83, 10, 0LL);
  v84 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v84,
    (Il2CppObject *)v67,
    Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__10__,
    0LL);
  AtlasManager__LoadEventUI(v84, 10, 0LL);
  v85 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v85,
    (Il2CppObject *)v67,
    Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__11__,
    0LL);
  AtlasManager__LoadCharaGraphOptionAtlas(v85, 10, 0LL);
  v86 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v86,
    (Il2CppObject *)v67,
    Method_TerminalSceneComponent___c__DisplayClass171_0__LoadAsync_b__12__,
    (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
  v87 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v87, v86, 0LL);
  this->fields.__2__current = (Il2CppObject *)v87;
  p__2__current = &this->fields.__2__current;
  sub_B5D560(p__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_TerminalSceneComponent__LoadAsync_d__171_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int32_t _1__state; // w8
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__187_0; // x20
  Il2CppObject *v23; // x21
  struct TerminalSceneComponent___c_StaticFields *v24; // x0
  UnityEngine_WaitWhile_o *v25; // x21
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  TerminalSceneComponent___c_c *v28; // x0

  if ( (byte_42E61EC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__WaitStopSEQuestPhaseRewardEffect_b__187_0__, v11, v12, v13);
    sub_B5D5C4(&TerminalSceneComponent___c_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_WaitWhile_TypeInfo, v17, v18, v19);
    byte_42E61EC = 1;
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
  v28 = TerminalSceneComponent___c_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v28 = TerminalSceneComponent___c_TypeInfo;
  }
  static_fields = v28->static_fields;
  _9__187_0 = static_fields->__9__187_0;
  if ( !_9__187_0 )
  {
    if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__187_0 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      _9__187_0,
      v23,
      Method_TerminalSceneComponent___c__WaitStopSEQuestPhaseRewardEffect_b__187_0__,
      (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
    v24 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v24->__9__187_0 = _9__187_0;
    sub_B5D560(&v24->__9__187_0);
  }
  v25 = (UnityEngine_WaitWhile_o *)sub_B5D694(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v25, _9__187_0, 0LL);
  this->fields.__2__current = (Il2CppObject *)v25;
  p__2__current = &this->fields.__2__current;
  sub_B5D560(p__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__187_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E61CB & 1) == 0 )
  {
    sub_B5D5C4(&TerminalSceneComponent___c_TypeInfo, v1, v2, v3);
    byte_42E61CB = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(TerminalSceneComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TerminalSceneComponent___c_o *)v4;
  sub_B5D560(static_fields);
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
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E61D4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)action, (_DWORD)method, v3);
    byte_42E61D4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  CommonUI__StartFriendPointNotification(Instance, action, 0LL);
}


void __fastcall TerminalSceneComponent___c___Fadein_MapDisp_Start_b__191_0(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E61CE & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)action, (_DWORD)method, v3);
    byte_42E61CE = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  CommonUI__StartLoginAndCampaignBonus(Instance, action, 0LL, 201, 0LL);
}


void __fastcall TerminalSceneComponent___c___Fadein_MapDisp_Start_b__191_1(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CommonUI_o *Instance; // x0
  __int64 v9; // x1
  CommonUI_o *v10; // x20

  if ( (byte_42E61CF & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, (_DWORD)action, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    byte_42E61CF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v10
    || (CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__ClearLoginResultData(Instance, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(Instance, v9);
  }
  CommonUI__ReleaseFortuneBonusAssetData(Instance, 0LL);
}


void __fastcall TerminalSceneComponent___c___Fadein_MapDisp_Start_b__191_6(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WebViewManager_o *Instance; // x0
  __int64 v9; // x1
  CommonUI_o *v10; // x20

  if ( (byte_42E61CD & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, (_DWORD)action, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    byte_42E61CD = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v10 )
    sub_B5D69C(Instance, v9);
  CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0LL);
}


ShopEntity_o *__fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__247_0(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1

  if ( (byte_42E61D5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, x, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E61D5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v12);
  }
  return (ShopEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                           x,
                           (const MethodInfo_23FAE10 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
}


bool __fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__247_1(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return x->fields.id;
}


ShopEntity_o *__fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__247_5(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1

  if ( (byte_42E61D6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, x, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E61D6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v12);
  }
  return (ShopEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                           x,
                           (const MethodInfo_23FAE10 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
}


int32_t __fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__247_6(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return ShopEntity__GetPrice(x, 0LL);
}


void __fastcall TerminalSceneComponent___c___RebootToNetworkError_b__208_0(
        TerminalSceneComponent___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ManagementManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E61D3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42E61D3 = 1;
  }
  Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  ManagementManager__reboot(Instance, 0, 0LL);
}


void __fastcall TerminalSceneComponent___c___StartWindowMessage_b__193_1(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WebViewManager_o *Instance; // x0
  __int64 v9; // x1
  CommonUI_o *v10; // x20

  if ( (byte_42E61D0 & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, (_DWORD)action, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    byte_42E61D0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v10 )
    sub_B5D69C(Instance, v9);
  CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0LL);
}


void __fastcall TerminalSceneComponent___c___StartWindowMessage_b__193_2(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  TerminalPramsManager_c *v8; // x0
  System_String_o *QuestWindowMessage_k__BackingField; // x20

  if ( (byte_42E61D1 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptManager_TypeInfo, (_DWORD)action, (_DWORD)method, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v5, v6, v7);
    byte_42E61D1 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5019 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)action, (_DWORD)method, v3);
    byte_42E5019 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  QuestWindowMessage_k__BackingField = v8->static_fields->_QuestWindowMessage_k__BackingField;
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  TerminalPramsManager_c *v8; // x0
  __int64 v9; // x1
  int v10; // w2
  __int64 v11; // x3
  AvalonSceneManager_o *v12; // x20
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_42E61D2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)action, (_DWORD)method, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v5, v6, v7);
    byte_42E61D2 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E591E )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)action, (_DWORD)method, v3);
    byte_42E591E = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  if ( v8->static_fields->_MessageDispType_k__BackingField != 2 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v8);
    TerminalPramsManager__InitMessageWindowData(0LL);
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0LL, 0, 0LL);
      goto LABEL_27;
    }
LABEL_28:
    sub_B5D69C(Instance, v9);
  }
  v12 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E6273 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v9, v10, v11);
    byte_42E6273 = 1;
  }
  Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v12 )
    goto LABEL_28;
  AvalonSceneManager__transitionScene(v12, 40, 1, (Il2CppObject *)Instance[2].fields.targetRoot[2].monitor, 0LL);
LABEL_27:
  ActionExtensions__Call(action, 0LL);
}


bool __fastcall TerminalSceneComponent___c___WaitStopSEQuestPhaseRewardEffect_b__187_0(
        TerminalSceneComponent___c_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E61CC & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E61CC = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B5A )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B5A = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_isPlayingQuestPhaseRewardEffect_k__BackingField;
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
  __int64 v3; // x3
  TerminalSceneComponent___c__DisplayClass168_0_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  struct TerminalSceneComponent_o *_4__this; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  struct TerminalSceneComponent_o *v20; // x8
  struct TerminalSceneComponent_o *v21; // x20

  v5 = this;
  if ( (byte_42E61D7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_BaseCore___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    this = (TerminalSceneComponent___c__DisplayClass168_0_o *)sub_B5D5C4(&StringLiteral_4375/*"CorePrefab"*/, v15, v16, v17);
    byte_42E61D7 = 1;
  }
  if ( !data )
    goto LABEL_12;
  _4__this = v5->fields.__4__this;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               data,
                                                                               (System_String_o *)StringLiteral_4375/*"CorePrefab"*/,
                                                                               (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (TerminalSceneComponent___c__DisplayClass168_0_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                              Object_WarBoardWaitTimeSetting,
                                                              (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !_4__this
    || (_4__this->fields.mEarthCoreObj = (struct UnityEngine_GameObject_o *)this,
        sub_B5D560(&_4__this->fields.mEarthCoreObj),
        (v20 = v5->fields.__4__this) == 0LL)
    || (GameObjectExtensions__SafeSetParent_32436524(v20->fields.mEarthCoreObj, v20->fields.mUiRoot, 0LL),
        (v21 = v5->fields.__4__this) == 0LL)
    || (this = (TerminalSceneComponent___c__DisplayClass168_0_o *)v21->fields.mEarthCoreObj) == 0LL )
  {
LABEL_12:
    sub_B5D69C(this, data);
  }
  v21->fields.mEarthCore = (struct BaseCore_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                  (UnityEngine_GameObject_o *)this,
                                                  (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_BaseCore___);
  sub_B5D560(&v21->fields.mEarthCore);
  ActionExtensions__Call(v5->fields.callback, 0LL);
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
      sub_B5D69C(this, method);
    }
    StandFigureSlideComponent__SlideIn((StandFigureSlideComponent_o *)this, 0LL, 0LL);
  }
  ActionExtensions__Call(v2->fields.endAction, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass182_0___SetupStandServant_b__1(
        TerminalSceneComponent___c__DisplayClass182_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalSceneComponent___c__DisplayClass182_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct TerminalSceneComponent_o *_4__this; // x8
  struct TerminalSceneComponent_o *v15; // x8
  int v16; // w2
  __int64 v17; // x3
  __n128 v18; // q0
  struct TerminalSceneComponent_o *v19; // x8
  struct StandFigureSlideComponent_o *mTerminalServant; // x9
  struct BaseCore_o *mEarthCore; // x8
  Il2CppObject *v22; // x20
  int v23; // w2
  __int64 v24; // x3
  __n128 inited; // q0
  struct TerminalSceneComponent_o *v26; // x8
  int32_t mStandSvtIdx; // w22
  struct TerminalSceneComponent_o *v28; // x8
  struct BaseCore_o *v29; // x22
  struct TerminalSceneComponent_o *v30; // x8
  StandFigureSlideComponent_o *v31; // x19
  System_Action_o *v32; // x21
  struct TerminalSceneComponent_o *v33; // x8
  struct BaseCore_o *v34; // x21
  struct TerminalSceneComponent_o *v35; // x8

  v4 = this;
  if ( (byte_42E61D8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass182_1__SetupStandServant_b__2__, v8, v9, v10);
    this = (TerminalSceneComponent___c__DisplayClass182_0_o *)sub_B5D5C4(
                                                                &TerminalSceneComponent___c__DisplayClass182_1_TypeInfo,
                                                                v11,
                                                                v12,
                                                                v13);
    byte_42E61D8 = 1;
  }
  _4__this = v4->fields.__4__this;
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
      v15 = v4->fields.__4__this;
      if ( v15 )
      {
        this = (TerminalSceneComponent___c__DisplayClass182_0_o *)v15->fields.mEarthCore;
        if ( this )
        {
          if ( *(&this[3].fields.isSlideIn + 1) )
            return;
          v18.n128_f32[0] = ((float (__fastcall *)(TerminalSceneComponent___c__DisplayClass182_0_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                              this,
                              this->klass[1]._1.interfaceOffsets);
          if ( v18.n128_f32[0] < 0.0 || v18.n128_f32[0] > 0.0 )
            return;
          v19 = v4->fields.__4__this;
          if ( v19 )
          {
            mTerminalServant = v19->fields.mTerminalServant;
            if ( mTerminalServant )
            {
              mEarthCore = v19->fields.mEarthCore;
              if ( mTerminalServant->fields.mIsFrameIn )
              {
                if ( mEarthCore )
                {
                  if ( mEarthCore->fields.mIsFocusIn )
                    return;
                  v22 = (Il2CppObject *)sub_B5D694(TerminalSceneComponent___c__DisplayClass182_1_TypeInfo);
                  System_Object___ctor(v22, 0LL);
                  if ( v22 )
                  {
                    v22[1].monitor = v4;
                    sub_B5D560(&v22[1].monitor);
                    this = (TerminalSceneComponent___c__DisplayClass182_0_o *)v4->fields.__4__this;
                    if ( this )
                    {
                      v22[1].klass = (Il2CppClass *)TerminalSceneComponent__GetNextStandServant(
                                                      (TerminalSceneComponent_o *)this,
                                                      0LL);
                      inited = sub_B5D560(&v22[1]);
                      v26 = v4->fields.__4__this;
                      if ( v26 )
                      {
                        mStandSvtIdx = v26->fields.mStandSvtIdx;
                        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                        {
                          inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                        }
                        if ( !byte_42E5014 )
                        {
                          sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v23, v24);
                          byte_42E5014 = 1;
                        }
                        this = (TerminalSceneComponent___c__DisplayClass182_0_o *)TerminalPramsManager_TypeInfo;
                        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                        {
                          inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                          this = (TerminalSceneComponent___c__DisplayClass182_0_o *)TerminalPramsManager_TypeInfo;
                        }
                        BYTE2(this[4].fields.__4__this->fields.TUTORIAL_QUEST_ARROW_POS.fields.x) = mStandSvtIdx != 0;
                        v28 = v4->fields.__4__this;
                        if ( v28 )
                        {
                          v29 = v28->fields.mEarthCore;
                          if ( !byte_42E4B2D )
                          {
                            sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v23, v24);
                            this = (TerminalSceneComponent___c__DisplayClass182_0_o *)TerminalPramsManager_TypeInfo;
                            byte_42E4B2D = 1;
                          }
                          if ( (BYTE3(this[7].fields.__4__this) & 4) != 0 && !LODWORD(this[5].fields.__4__this) )
                          {
                            inited = j_il2cpp_runtime_class_init_0(this);
                            this = (TerminalSceneComponent___c__DisplayClass182_0_o *)TerminalPramsManager_TypeInfo;
                          }
                          if ( v29 )
                          {
                            this = (TerminalSceneComponent___c__DisplayClass182_0_o *)((__int64 (__fastcall *)(struct BaseCore_o *, bool, _QWORD, Il2CppMethodPointer, long double))v29->klass->vtable._4_FocusInOut.method)(
                                                                                        v29,
                                                                                        BYTE2(this[4].fields.__4__this->fields.TUTORIAL_QUEST_ARROW_POS.fields.x) == 0,
                                                                                        0LL,
                                                                                        v29->klass->vtable._5_Awake.methodPtr,
                                                                                        *(long double *)&inited);
                            v30 = v4->fields.__4__this;
                            if ( v30 )
                            {
                              v31 = v30->fields.mTerminalServant;
                              v32 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                              System_Action___ctor(
                                v32,
                                v22,
                                Method_TerminalSceneComponent___c__DisplayClass182_1__SetupStandServant_b__2__,
                                0LL);
                              if ( v31 )
                              {
                                StandFigureSlideComponent__SlideOut(v31, v32, 0, 0LL);
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
                  v18 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                }
                if ( !byte_42E5014 )
                {
                  sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v16, v17);
                  byte_42E5014 = 1;
                }
                this = (TerminalSceneComponent___c__DisplayClass182_0_o *)TerminalPramsManager_TypeInfo;
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  v18 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  this = (TerminalSceneComponent___c__DisplayClass182_0_o *)TerminalPramsManager_TypeInfo;
                }
                BYTE2(this[4].fields.__4__this->fields.TUTORIAL_QUEST_ARROW_POS.fields.x) = 1;
                v33 = v4->fields.__4__this;
                if ( v33 )
                {
                  v34 = v33->fields.mEarthCore;
                  if ( !byte_42E4B2D )
                  {
                    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v16, v17);
                    this = (TerminalSceneComponent___c__DisplayClass182_0_o *)TerminalPramsManager_TypeInfo;
                    byte_42E4B2D = 1;
                  }
                  if ( (BYTE3(this[7].fields.__4__this) & 4) != 0 && !LODWORD(this[5].fields.__4__this) )
                  {
                    v18 = j_il2cpp_runtime_class_init_0(this);
                    this = (TerminalSceneComponent___c__DisplayClass182_0_o *)TerminalPramsManager_TypeInfo;
                  }
                  if ( v34 )
                  {
                    this = (TerminalSceneComponent___c__DisplayClass182_0_o *)((__int64 (__fastcall *)(struct BaseCore_o *, bool, _QWORD, Il2CppMethodPointer, long double))v34->klass->vtable._4_FocusInOut.method)(
                                                                                v34,
                                                                                BYTE2(this[4].fields.__4__this->fields.TUTORIAL_QUEST_ARROW_POS.fields.x) == 0,
                                                                                0LL,
                                                                                v34->klass->vtable._5_Awake.methodPtr,
                                                                                *(long double *)&v18);
                    v35 = v4->fields.__4__this;
                    if ( v35 )
                    {
                      this = (TerminalSceneComponent___c__DisplayClass182_0_o *)v35->fields.mTerminalServant;
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
      sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  TerminalSceneComponent___c__DisplayClass182_1_o *v4; // x20
  struct TerminalSceneComponent___c__DisplayClass182_0_o *CS___8__locals1; // x8
  TerminalSceneComponent_o *_4__this; // x19
  UserServantEntity_o *usd; // x20

  v4 = this;
  if ( (byte_42E61D9 & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass182_1_o *)sub_B5D5C4(
                                                                &TerminalPramsManager_TypeInfo,
                                                                (_DWORD)method,
                                                                v2,
                                                                v3);
    byte_42E61D9 = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_14;
  _4__this = CS___8__locals1->fields.__4__this;
  usd = v4->fields._usd;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B2D )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B2D = 1;
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *klass; // x22
  TerminalSceneComponent_o *v9; // x20

  v4 = (Il2CppObject *)this;
  if ( (byte_42E61DA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    this = (TerminalSceneComponent___c__DisplayClass188_0_o *)sub_B5D5C4(
                                                                &Method_TerminalSceneComponent___c__DisplayClass188_0__coFadein_WorldDisp_b__3__,
                                                                v5,
                                                                v6,
                                                                v7);
    byte_42E61DA = 1;
  }
  klass = (System_Action_o *)v4[2].klass;
  v9 = (TerminalSceneComponent_o *)v4[1].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v4,
      Method_TerminalSceneComponent___c__DisplayClass188_0__coFadein_WorldDisp_b__3__,
      0LL);
    v4[2].klass = (Il2CppClass *)klass;
    sub_B5D560(&v4[2]);
  }
  if ( !v9 )
    sub_B5D69C(this, method);
  TerminalSceneComponent__StartWindowMessage(v9, klass, 0LL);
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
    sub_B5D69C(_4__this, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(this, action);
  TerminalSceneComponent__StartEventDailyPoint((TerminalSceneComponent_o *)this, war_dat->fields.eventId, action, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass191_0___Fadein_MapDisp_Start_b__3(
        TerminalSceneComponent___c__DisplayClass191_0_o *this,
        const MethodInfo *method)
{
  struct WarEntity_o *war_dat; // x9

  war_dat = this->fields.war_dat;
  if ( !war_dat || !this->fields.__4__this )
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, action);
  }
  QuestBoardListViewManager__SetMode((QuestBoardListViewManager_o *)this, 4, action, 0, 0, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass191_0___Fadein_MapDisp_Start_b__5(
        TerminalSceneComponent___c__DisplayClass191_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v3; // x3
  TerminalSceneComponent___c__DisplayClass191_0_o *v5; // x20
  struct TerminalSceneComponent_o *_4__this; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  v5 = this;
  if ( (byte_42E61DB & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass191_0_o *)sub_B5D5C4(
                                                                &Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__,
                                                                (_DWORD)action,
                                                                (_DWORD)method,
                                                                v3);
    byte_42E61DB = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this
    || (mTerminalMap = _4__this->fields.mTerminalMap) == 0LL
    || (this = (TerminalSceneComponent___c__DisplayClass191_0_o *)mTerminalMap->fields.allMaskObj) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (this = (TerminalSceneComponent___c__DisplayClass191_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(this, action);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_GameObject_o *IsNullOrEmpty; // x0
  __int64 v12; // x8
  __int64 v13; // x8
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  TerminalPramsManager_c *v17; // x0
  int v18; // w2
  __int64 v19; // x3
  AvalonSceneManager_o *Instance; // x19
  struct TerminalSceneComponent___c__DisplayClass191_0_o *CS___8__locals1; // x8

  if ( (byte_42E61DC & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v8, v9, v10);
    byte_42E61DC = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B1E = 1;
  }
  IsNullOrEmpty = (UnityEngine_GameObject_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    IsNullOrEmpty = (UnityEngine_GameObject_o *)TerminalSceneComponent_TypeInfo;
  }
  v12 = **(_QWORD **)&IsNullOrEmpty[7].fields.m_CachedPtr;
  if ( !v12 )
    goto LABEL_36;
  v13 = *(_QWORD *)(v12 + 256);
  if ( !v13 )
    goto LABEL_36;
  IsNullOrEmpty = *(UnityEngine_GameObject_o **)(v13 + 528);
  if ( !IsNullOrEmpty )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(IsNullOrEmpty, this->fields.oldActive, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5019 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v14, v15, v16);
    byte_42E5019 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  IsNullOrEmpty = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(
                                                v17->static_fields->_QuestWindowMessage_k__BackingField,
                                                0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E6273 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v18, v19);
      byte_42E6273 = 1;
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
    sub_B5D69C(IsNullOrEmpty, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  System_Action_o *_9__2; // x21
  CommonUI_o *v14; // x20
  float fadeTime; // s8

  if ( (byte_42E61DD & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass194_0__FadeInAndTriggerEventEffects_b__2__, v8, v9, v10);
    byte_42E61DD = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v14 = (CommonUI_o *)Instance;
  fadeTime = this->fields.fadeTime;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent___c__DisplayClass194_0__FadeInAndTriggerEventEffects_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B5D560(&this->fields.__9__2);
  }
  if ( !v14 )
    sub_B5D69C(Instance, v12);
  CommonUI__maskFadein(v14, fadeTime, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass194_0___FadeInAndTriggerEventEffects_b__1(
        TerminalSceneComponent___c__DisplayClass194_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(_4__this, this->fields.eventId, this->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass194_0___FadeInAndTriggerEventEffects_b__2(
        TerminalSceneComponent___c__DisplayClass194_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  System_Action_o *_9__3; // x22
  QuestAfterAction_o *v14; // x20

  if ( (byte_42E61DE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass194_0__FadeInAndTriggerEventEffects_b__3__, v8, v9, v10);
    byte_42E61DE = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  _9__3 = this->fields.__9__3;
  v14 = (QuestAfterAction_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent___c__DisplayClass194_0__FadeInAndTriggerEventEffects_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B5D560(&this->fields.__9__3);
  }
  if ( !v14 )
    sub_B5D69C(Instance, v12);
  QuestAfterAction__Play(v14, _9__3, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass194_0___FadeInAndTriggerEventEffects_b__3(
        TerminalSceneComponent___c__DisplayClass194_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(_4__this, this->fields.eventId, this->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass194_0___FadeInAndTriggerEventEffects_b__4(
        TerminalSceneComponent___c__DisplayClass194_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(this, method);
  TitleInfoControl__CheckSuperBossHpAnim(mTitleInfo, this->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass197_0___FadeInAndTriggerEventEffectsNext_b__1(
        TerminalSceneComponent___c__DisplayClass197_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(this, method);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  ScrTerminalListTop_o *Instance; // x0
  __int64 v13; // x1
  struct TerminalSceneComponent_o *_4__this; // x8
  CommonUI_o *v15; // x20

  if ( (byte_42E61DF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_DialogMessageMaster___, (_DWORD)action, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42E61DF = 1;
  }
  Instance = (ScrTerminalListTop_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v15 = (CommonUI_o *)Instance, (Instance = _4__this->fields.mTerminalList) == 0LL)
    || (Instance = (ScrTerminalListTop_o *)ScrTerminalListTop__PopEventSvtGets(Instance, 0LL), !v15)
    || (CommonUI__SetupLoginResultData(v15, (System_Int32_array *)Instance, 0LL),
        (Instance = (ScrTerminalListTop_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (ScrTerminalListTop_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_DialogMessageMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v13);
  }
  DialogMessageMaster__ShowAvailables((DialogMessageMaster_o *)Instance, 1, action, 0, 0, 0, 0, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass241_0___CheckRewardPopupChain_b__1(
        TerminalSceneComponent___c__DisplayClass241_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  WebViewManager_o *Instance; // x0
  __int64 v13; // x1
  System_Action_o *_9__4; // x22
  CommonUI_o *v15; // x21

  if ( (byte_42E61E0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)action, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass241_0__CheckRewardPopupChain_b__4__, v9, v10, v11);
    byte_42E61E0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__4 = this->fields.__9__4;
  v15 = (CommonUI_o *)Instance;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent___c__DisplayClass241_0__CheckRewardPopupChain_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    sub_B5D560(&this->fields.__9__4);
  }
  if ( !v15 )
    sub_B5D69C(Instance, v13);
  CommonUI__StartLoginAndCampaignBonus(v15, action, _9__4, -1, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass241_0___CheckRewardPopupChain_b__3(
        TerminalSceneComponent___c__DisplayClass241_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalSceneComponent_o *_4__this; // x0

  if ( (byte_42E61E1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E61E1 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (TerminalSceneComponent__CheckOpenCampaignDirectBonus(_4__this, 0LL),
        (_4__this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__ClearLoginResultData((CommonUI_o *)_4__this, 0LL),
        (_4__this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(_4__this, method);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
  _4__this->fields._IsPlayingCampaignDirectBonus_k__BackingField = 0;
}


void __fastcall TerminalSceneComponent___c__DisplayClass242_0___CheckOpenCampaignDirectBonus_b__1(
        TerminalSceneComponent___c__DisplayClass242_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  int v9; // w2
  __int64 v10; // x3
  CommonUI_o *Instance; // x20
  TerminalPramsManager_c *v12; // x0
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  TerminalPramsManager_c *v16; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_42E61E2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v5, v6, v7);
    byte_42E61E2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CDD )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v8, v9, v10);
    byte_42E5CDD = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    sub_B5D69C(v12, v8);
  CommonUI__OpenCampaignDirectBonus(
    Instance,
    v12->static_fields->_CampaignDirectBonus_k__BackingField,
    this->fields.endAction,
    0LL);
  if ( !byte_42E5024 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v13, v14, v15);
    byte_42E5024 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v16->static_fields;
  static_fields->_CampaignDirectBonus_k__BackingField = 0LL;
  sub_B5D560(&static_fields->_CampaignDirectBonus_k__BackingField);
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
  __int64 v3; // x3

  if ( (byte_42E61E3 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptManager_TypeInfo, (_DWORD)str, (_DWORD)method, v3);
    byte_42E61E3 = 1;
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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x20
  __int64 v19; // x0
  __int64 v20; // x1
  TerminalSceneComponent_c *v21; // x0
  System_String_o *MASTER_MISSION_RESET_KEY; // x21
  System_String_o *v23; // x0
  CommonUI_o *Instance; // x19
  System_Action_o *v25; // x21

  if ( (byte_42E61E4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass251_1__CheckMasterMissionReset_b__1__, v12, v13, v14);
    sub_B5D5C4(&TerminalSceneComponent___c__DisplayClass251_1_TypeInfo, v15, v16, v17);
    byte_42E61E4 = 1;
  }
  v18 = sub_B5D694(TerminalSceneComponent___c__DisplayClass251_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_9;
  *(_QWORD *)(v18 + 24) = this;
  sub_B5D560(v18 + 24);
  *(_BYTE *)(v18 + 16) = isDecide;
  v21 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v21 = TerminalSceneComponent_TypeInfo;
  }
  MASTER_MISSION_RESET_KEY = v21->static_fields->MASTER_MISSION_RESET_KEY;
  v23 = System_Int64__ToString((int64_t)&this->fields, 0LL);
  UnityEngine_PlayerPrefs__SetString(MASTER_MISSION_RESET_KEY, v23, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v25 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v18,
    Method_TerminalSceneComponent___c__DisplayClass251_1__CheckMasterMissionReset_b__1__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B5D69C(v19, v20);
  CommonUI__CloseConfirmDialog_18202348(Instance, v25, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass251_0___CheckMasterMissionReset_b__2(
        TerminalSceneComponent___c__DisplayClass251_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  ScrPlayerStatus_o *mPlayerStatus; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (mPlayerStatus = _4__this->fields.mPlayerStatus) == 0LL )
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  TerminalSceneComponent___c__DisplayClass251_1_o *v4; // x20
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  CommonUI_o *v14; // x19
  AvalonSceneManager_c *v15; // x8
  Il2CppObject *CS___8__locals1; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *monitor; // x21
  struct TerminalSceneComponent___c__DisplayClass251_0_o *v19; // x8

  v4 = this;
  if ( (byte_42E61E5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    this = (TerminalSceneComponent___c__DisplayClass251_1_o *)sub_B5D5C4(
                                                                &Method_TerminalSceneComponent___c__DisplayClass251_0__CheckMasterMissionReset_b__2__,
                                                                v11,
                                                                v12,
                                                                v13);
    byte_42E61E5 = 1;
  }
  if ( v4->fields.isDecide )
  {
    this = (TerminalSceneComponent___c__DisplayClass251_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = (CommonUI_o *)this;
    v15 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v15 = AvalonSceneManager_TypeInfo;
    }
    CS___8__locals1 = (Il2CppObject *)v4->fields.CS___8__locals1;
    if ( CS___8__locals1 )
    {
      DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
      monitor = (System_Action_o *)CS___8__locals1[2].monitor;
      if ( !monitor )
      {
        monitor = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          monitor,
          CS___8__locals1,
          Method_TerminalSceneComponent___c__DisplayClass251_0__CheckMasterMissionReset_b__2__,
          0LL);
        CS___8__locals1[2].monitor = monitor;
        sub_B5D560(&CS___8__locals1[2].monitor);
      }
      if ( v14 )
      {
        CommonUI__maskFadeout(v14, 1, DEFAULT_FADE_TIME, monitor, 0LL);
        return;
      }
    }
LABEL_14:
    sub_B5D69C(this, method);
  }
  v19 = v4->fields.CS___8__locals1;
  if ( !v19 )
    goto LABEL_14;
  ActionExtensions__Call(v19->fields.callback, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  BattleResultBondsComponent_c *v5; // x0

  if ( (byte_42E61E6 & 1) == 0 )
  {
    sub_B5D5C4(&BattleResultBondsComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E61E6 = 1;
  }
  v5 = BattleResultBondsComponent_TypeInfo;
  if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
    v5 = BattleResultBondsComponent_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v5->static_fields->GET_EXIST_SVT_KEY, 0LL);
  ActionExtensions__Call(this->fields.callBack, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass252_0___CheckNotificationDialog_b__2(
        TerminalSceneComponent___c__DisplayClass252_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleResultBondsComponent_c *v5; // x0

  if ( (byte_42E61E7 & 1) == 0 )
  {
    sub_B5D5C4(&BattleResultBondsComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E61E7 = 1;
  }
  v5 = BattleResultBondsComponent_TypeInfo;
  if ( (BYTE3(BattleResultBondsComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
    v5 = BattleResultBondsComponent_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v5->static_fields->GET_EXIST_SVT_KEY, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *CS___8__locals1; // x21
  GetSvtCoin_array *coin; // x20
  System_Action_o *klass; // x22
  CommonUI_o *v16; // x19

  if ( (byte_42E61E8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass252_0__CheckNotificationDialog_b__2__, v8, v9, v10);
    byte_42E61E8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = (Il2CppObject *)this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  coin = this->fields.coin;
  klass = (System_Action_o *)CS___8__locals1[2].klass;
  v16 = (CommonUI_o *)Instance;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      CS___8__locals1,
      Method_TerminalSceneComponent___c__DisplayClass252_0__CheckNotificationDialog_b__2__,
      0LL);
    CS___8__locals1[2].klass = (Il2CppClass *)klass;
    sub_B5D560(&CS___8__locals1[2]);
  }
  if ( !v16 )
LABEL_8:
    sub_B5D69C(Instance, v12);
  CommonUI__CreateServantCoinConfirmDialog(v16, 1, coin, klass, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  TerminalSceneComponent__coFadein_WorldDisp_d__188_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int32_t _1__state; // w8
  struct TerminalSceneComponent_o *_4__this; // x20
  Il2CppObject *v49; // x21
  int v50; // w2
  __int64 v51; // x3
  bool *p_isAuto_5__2; // x21
  TerminalPramsManager_c *v53; // x0
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  TerminalPramsManager_c *v57; // x0
  System_Collections_IEnumerator_o *v58; // x0
  System_Action_c *klass; // x8
  __int64 v60; // x8
  int v61; // w2
  __int64 v62; // x3
  TerminalPramsManager_c *v63; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  int v66; // w2
  __int64 v67; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x21
  System_String_o *ShowingFolderBGM; // x0
  int v70; // w2
  __int64 v71; // x3
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v73; // x8
  Il2CppObject *v74; // x21
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v76; // x0
  __int64 *v77; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  Il2CppObject *_8__1; // x19
  System_Action_o *v80; // x21
  AvalonSceneManager_c *v81; // x8
  System_Action_o *v82; // x19
  struct TerminalSceneComponent___c__DisplayClass188_0_o *v83; // x9
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_42E61ED & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v14, v15, v16);
    sub_B5D5C4(&System_GC_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&SoundManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass188_0__coFadein_WorldDisp_b__0__, v35, v36, v37);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass188_0__coFadein_WorldDisp_b__1__, v38, v39, v40);
    sub_B5D5C4(&Method_TerminalSceneComponent___c__DisplayClass188_0__coFadein_WorldDisp_b__2__, v41, v42, v43);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)sub_B5D5C4(
                                                                    &TerminalSceneComponent___c__DisplayClass188_0_TypeInfo,
                                                                    v44,
                                                                    v45,
                                                                    v46);
    byte_42E61ED = 1;
  }
  entity = 0LL;
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    p_isAuto_5__2 = &v4->fields._isAuto_5__2;
    v4->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v4->fields.__1__state = -1;
    v49 = (Il2CppObject *)sub_B5D694(TerminalSceneComponent___c__DisplayClass188_0_TypeInfo);
    System_Object___ctor(v49, 0LL);
    v4->fields.__8__1 = (struct TerminalSceneComponent___c__DisplayClass188_0_o *)v49;
    sub_B5D560(&v4->fields.__8__1);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)v4->fields.__8__1;
    if ( !this )
      goto LABEL_128;
    *(_QWORD *)&this->fields.__1__state = v4->fields.__4__this;
    sub_B5D560(&this->fields);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)v4->fields.__8__1;
    if ( !this )
      goto LABEL_128;
    this->fields.__2__current = (Il2CppObject *)v4->fields.endAct;
    sub_B5D560(&this->fields.__2__current);
    v4->fields._isAuto_5__2 = 0;
    p_isAuto_5__2 = &v4->fields._isAuto_5__2;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B54 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v50, v51);
      byte_42E4B54 = 1;
    }
    v53 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v53 = TerminalPramsManager_TypeInfo;
    }
    if ( !v53->static_fields->_IsMapReturnFolder_k__BackingField )
    {
      if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v53);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)TerminalPramsManager__IsAuto(0LL);
      *p_isAuto_5__2 = (unsigned __int8)this & 1;
      if ( !_4__this )
        goto LABEL_128;
      TerminalSceneComponent__EndAuto(_4__this, 0LL);
      if ( !byte_42E4B5A )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v54, v55, v56);
        byte_42E4B5A = 1;
      }
      v57 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v57 = TerminalPramsManager_TypeInfo;
      }
      if ( v57->static_fields->_isPlayingQuestPhaseRewardEffect_k__BackingField )
      {
        v58 = TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect(_4__this, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)_4__this, v58, 0LL);
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
    if ( !byte_42E4B32 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v50, v51);
      byte_42E4B32 = 1;
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
      if ( !byte_42E4B1E )
      {
        sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v50, v51);
        byte_42E4B1E = 1;
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
      v60 = *(_QWORD *)&klass->_2.static_fields_size;
      if ( !v60 )
        goto LABEL_128;
      this = *(TerminalSceneComponent__coFadein_WorldDisp_d__188_o **)(v60 + 528);
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
      sub_B5D69C(this, method);
    if ( !ScrTerminalListTop__isShowingFolder((ScrTerminalListTop_o *)this, 0LL) )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E4B28 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v61, v62);
        byte_42E4B28 = 1;
      }
      v63 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v63 = TerminalPramsManager_TypeInfo;
      }
      v63->static_fields->_DispState_k__BackingField = 1;
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)_4__this->fields.mTitleInfo;
      if ( !this )
        goto LABEL_128;
      TitleInfoControl__SetActiveEventInfo_18375312((TitleInfoControl_o *)this, 1, 16, 0, 0, 0LL, 0LL);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_128;
      CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, 0, 1, 0LL);
    }
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_128;
    CommonUI__SetBgCameraActive((CommonUI_o *)this, 1, 0LL);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)_4__this->fields.mTerminalMap;
    if ( !this )
      goto LABEL_128;
    ScrTerminalMap__ReleaseMap((ScrTerminalMap_o *)this, 1, 0LL);
    if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
    System_GC__Collect_43893280(0LL);
    if ( v4->fields.isExecuteUnusedAssets )
    {
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( this )
      {
        AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__188_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          v4->fields.__2__current = (Il2CppObject *)AssetManager__WaitForExecutionUnloadUnuseAssets(
                                                      (AssetManager_o *)this,
                                                      0LL);
          p__2__current = &v4->fields.__2__current;
          sub_B5D560(p__2__current);
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
      _8__1 = (Il2CppObject *)v4->fields.__8__1;
      v80 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v80,
        _8__1,
        Method_TerminalSceneComponent___c__DisplayClass188_0__coFadein_WorldDisp_b__1__,
        0LL);
      TerminalSceneComponent__StartWindowMessage(_4__this, v80, 0LL);
      return 0;
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v81 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v81 = AvalonSceneManager_TypeInfo;
    }
    v74 = (Il2CppObject *)v4->fields.__8__1;
    DEFAULT_FADE_TIME = v81->static_fields->DEFAULT_FADE_TIME;
    v76 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    v77 = &Method_TerminalSceneComponent___c__DisplayClass188_0__coFadein_WorldDisp_b__2__;
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
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B20 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v66, v67);
    byte_42E4B20 = 1;
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
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
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
  if ( !byte_42E4B32 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v70, v71);
    byte_42E4B32 = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v73 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v73 = AvalonSceneManager_TypeInfo;
    }
    v74 = (Il2CppObject *)v4->fields.__8__1;
    DEFAULT_FADE_TIME = v73->static_fields->DEFAULT_FADE_TIME;
    v76 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    v77 = &Method_TerminalSceneComponent___c__DisplayClass188_0__coFadein_WorldDisp_b__0__;
LABEL_122:
    v82 = v76;
    System_Action___ctor(v76, v74, *v77, 0LL);
    if ( !Instance )
      goto LABEL_128;
    CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v82, 0LL);
    return 0;
  }
  if ( !entity )
    goto LABEL_128;
  v83 = v4->fields.__8__1;
  if ( !v83 )
    goto LABEL_128;
  TerminalSceneComponent__FadeInAndTriggerEventEffects(
    _4__this,
    v4->fields.fadeTime,
    entity->fields.eventId,
    v83->fields.endAct,
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_TerminalSceneComponent__coFadein_WorldDisp_d__188_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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