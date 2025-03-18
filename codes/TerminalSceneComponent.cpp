void __fastcall TerminalSceneComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  TerminalSceneComponent_c *v13; // x8
  int64_t v14; // x1
  struct TerminalSceneComponent_StaticFields *static_fields; // x0
  int64_t v16; // x1
  struct TerminalSceneComponent_StaticFields *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct TerminalSceneComponent_StaticFields *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x1
  struct TerminalSceneComponent_StaticFields *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x1
  struct TerminalSceneComponent_StaticFields *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7

  if ( (byte_4C24157 & 1) == 0 )
  {
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_10303/*"Parent table key is missing in relation '{0}'."*/, v8);
    sub_1C3B764(&StringLiteral_10302/*"Parent of RectTransform is being set with parent property. Consider using the SetParent method instead, with the worldPositionStays argument set to false. This will retain local orientation and scale rather than world orientation and scale, which can prevent common UI scaling issues."*/, v9);
    sub_1C3B764(&StringLiteral_21740/*"nmtoken"*/, v10);
    sub_1C3B764(&StringLiteral_13883/*"The specified value is not valid."*/, v11);
    sub_1C3B764(&StringLiteral_10252/*"PURCHASE_CANCEL"*/, v12);
    byte_4C24157 = 1;
  }
  v13 = TerminalSceneComponent_TypeInfo;
  TerminalSceneComponent_TypeInfo->static_fields->DEFAULT_AMBIENT_LIGHT_COLOR = (struct UnityEngine_Color_o)xmmword_C0E480;
  v14 = StringLiteral_21740/*"nmtoken"*/;
  static_fields = v13->static_fields;
  static_fields->MASTER_MISSION_RESET_KEY = (struct System_String_o *)StringLiteral_21740/*"nmtoken"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->MASTER_MISSION_RESET_KEY, v14, v2, v3, v4, v5, v6, v7);
  v16 = StringLiteral_13883/*"The specified value is not valid."*/;
  v17 = TerminalSceneComponent_TypeInfo->static_fields;
  v17->EARTH_ASSET_NAME = (struct System_String_o *)StringLiteral_13883/*"The specified value is not valid."*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v17->EARTH_ASSET_NAME, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_10252/*"PURCHASE_CANCEL"*/;
  v25 = TerminalSceneComponent_TypeInfo->static_fields;
  v25->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY = (struct System_String_o *)StringLiteral_10252/*"PURCHASE_CANCEL"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v25->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_10302/*"Parent of RectTransform is being set with parent property. Consider using the SetParent method instead, with the worldPositionStays argument set to false. This will retain local orientation and scale rather than world orientation and scale, which can prevent common UI scaling issues."*/;
  v33 = TerminalSceneComponent_TypeInfo->static_fields;
  v33->OVERWRITE_COMMON_BG_TYPE1_KEY = (struct System_String_o *)StringLiteral_10302/*"Parent of RectTransform is being set with parent property. Consider using the SetParent method instead, with the worldPositionStays argument set to false. This will retain local orientation and scale rather than world orientation and scale, which can prevent common UI scaling issues."*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v33->OVERWRITE_COMMON_BG_TYPE1_KEY, v32, v34, v35, v36, v37, v38, v39);
  v40 = StringLiteral_10303/*"Parent table key is missing in relation '{0}'."*/;
  v41 = TerminalSceneComponent_TypeInfo->static_fields;
  v41->OVERWRITE_COMMON_BG_TYPE2_KEY = (struct System_String_o *)StringLiteral_10303/*"Parent table key is missing in relation '{0}'."*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v41->OVERWRITE_COMMON_BG_TYPE2_KEY, v40, v42, v43, v44, v45, v46, v47);
  *(_WORD *)&TerminalSceneComponent_TypeInfo->static_fields->isTitleToTerminalTransition = 0;
}


void __fastcall TerminalSceneComponent___ctor(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  this->fields.TUTORIAL_SPOT_ARROW_POS = (struct UnityEngine_Vector2_o)3263954944LL;
  this->fields.TUTORIAL_SPOT_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_C0E910;
  *(_OWORD *)&this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x = xmmword_C0E670;
  this->fields.TUTORIAL_QUEST_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_C0D810;
  *(_OWORD *)&this->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x = xmmword_C0E680;
  this->fields.TUTORIAL_MENU_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_C0E9C0;
  *(_OWORD *)&this->fields.TUTORIAL_MENU_MESSAGE_POS.fields.x = xmmword_C0D230;
  this->fields.TUTORIAL_GACHA_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_C0D940;
  this->fields.TUTORIAL_MENU_ARROW_POS2 = (struct UnityEngine_Vector2_o)0xC366000043DB0000LL;
  this->fields.TUTORIAL_COMBINE_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_C0DC50;
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
  __int64 v9; // x1
  TerminalSceneComponent_c *v10; // x0
  UnityEngine_GameObject_o *UiFlag; // x0
  __int64 v12; // x1
  bool v13; // w1

  if ( (byte_4C2410C & 1) == 0 )
  {
    sub_1C3B764(&ServantCommentManager_TypeInfo, method);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v9);
    byte_4C2410C = 1;
  }
  v10 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v10 = TerminalSceneComponent_TypeInfo;
  }
  v10->static_fields->mInstance = this;
  sub_1C3B708(
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
        v13 = 1;
        goto LABEL_15;
      }
    }
LABEL_16:
    sub_1C3B9C0(UiFlag, v12);
  }
  UnityEngine_GameObject__SetActive(this->fields.mBgText, 0, 0LL);
  UiFlag = this->fields.mBgGradLeft;
  if ( !UiFlag )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(UiFlag, 0, 0LL);
  UiFlag = this->fields.mBgGradRight;
  if ( !UiFlag )
    goto LABEL_16;
  v13 = 0;
LABEL_15:
  UnityEngine_GameObject__SetActive(UiFlag, v13, 0LL);
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
    sub_1C3B708(
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
    sub_1C3B9C0(0LL, item);
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
    sub_1C3B9C0(0LL, questId);
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
    sub_1C3B9C0(this, item);
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
    sub_1C3B9C0(this, method);
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
    sub_1C3B9C0(this, isPlaySe);
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
  int max_length; // w8
  System_Collections_ICollection_o *v12; // x20
  unsigned int v13; // w21
  EventTutorialEntity_o *v14; // x24
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  EventTutorialEntity_TextTuto_o *v16; // x8
  struct EventTutorialEntity_TextTuto_array *v17; // x8
  EventTutorialEntity_TextTuto_o *v18; // x8
  System_Collections_ICollection_o *v19; // x8
  int klass; // w25
  struct EventTutorialEntity_TextTuto_array *v21; // x8
  EventTutorialEntity_TextTuto_o *v22; // x8

  if ( (byte_4C24156 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, *(_QWORD *)&openType);
    sub_1C3B764(&EventTutorialMaster_EventTutorialArgs_TypeInfo, v4);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v5);
    byte_4C24156 = 1;
  }
  v6 = (EventTutorialMaster_EventTutorialArgs_o *)sub_1C3B9B0(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor(v6, 0LL);
  if ( !v6
    || (v6->fields.eventId = 0,
        v6->fields.openKind = openType,
        v9 = sub_1C3B9B0(EventTutorialMaster_EventTutorialArgs_TypeInfo),
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
    sub_1C3B9C0(IsNullOrEmpty, v8);
  }
  max_length = AvailableTutorialArray->max_length;
  if ( max_length >= 1 )
  {
    v12 = IsNullOrEmpty;
    v13 = 0;
    while ( v13 < max_length )
    {
      v14 = AvailableTutorialArray->m_Items[v13];
      if ( !v14 )
        goto LABEL_31;
      IsNullOrEmpty = (System_Collections_ICollection_o *)BasicHelper__IsNullOrEmpty(
                                                            (System_Collections_ICollection_o *)v14->fields.textJson,
                                                            0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        textJson = v14->fields.textJson;
        if ( !textJson )
          goto LABEL_31;
        if ( !textJson->max_length )
          break;
        v16 = textJson->m_Items[0];
        if ( !v16 )
          goto LABEL_31;
        if ( v16->fields.isQuestRelease )
        {
          IsNullOrEmpty = (System_Collections_ICollection_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( IsNullOrEmpty )
          {
            IsNullOrEmpty = (System_Collections_ICollection_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            v17 = v14->fields.textJson;
            if ( !v17 )
              goto LABEL_31;
            if ( !v17->max_length )
              break;
            v18 = v17->m_Items[0];
            if ( !v18 || !IsNullOrEmpty )
              goto LABEL_31;
            IsNullOrEmpty = (System_Collections_ICollection_o *)QuestTree__GetQuestInfo(
                                                                  (QuestTree_o *)IsNullOrEmpty,
                                                                  v18->fields.questId,
                                                                  0LL);
            if ( IsNullOrEmpty )
            {
              v19 = IsNullOrEmpty;
              IsNullOrEmpty = (System_Collections_ICollection_o *)BalanceConfig_TypeInfo;
              klass = (int)v19[4].klass;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                IsNullOrEmpty = (System_Collections_ICollection_o *)BalanceConfig_TypeInfo;
              }
              if ( klass == *((_DWORD *)IsNullOrEmpty[11].monitor + 204) )
              {
                IsNullOrEmpty = (System_Collections_ICollection_o *)BasicHelper__IsNullOrEmpty(v12, 0LL);
                if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
                {
                  v21 = v14->fields.textJson;
                  if ( !v21 )
                    goto LABEL_31;
                  if ( !v21->max_length )
                    break;
                  v22 = v21->m_Items[0];
                  if ( !v22 )
                    goto LABEL_31;
                  v22->fields.isQuestRelease = 0;
                }
              }
            }
          }
        }
      }
      max_length = AvailableTutorialArray->max_length;
      if ( (int)++v13 >= max_length )
        return;
    }
    sub_1C3B9C8(IsNullOrEmpty, v8);
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

  if ( (byte_4C2413B & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, *(_QWORD *)&eventId);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventDetailMaster___, v4);
    sub_1C3B764(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_1C3B764(&System_DateTime_TypeInfo, v6);
    sub_1C3B764(&NetworkManager_TypeInfo, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v9);
    byte_4C2413B = 1;
  }
  entity = 0LL;
  t2.fields._dateData = 0LL;
  v27 = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_40;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_329AE94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_40:
    sub_1C3B9C0(Instance, v11);
  if ( EventDetailEntity__IsEventDailyPoint((EventDetailEntity_o *)entity, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F4E9 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v12);
      byte_4C1F4E9 = 1;
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
    dateData = NetworkManager__getDateTime_39987032(BeforeTimeEventDailyPoint_k__BackingField, 0LL).fields._dateData;
    if ( !byte_4C1F4E8 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v15);
      byte_4C1F4E8 = 1;
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
    System_DateTime___ctor_64047384(v34, Year, Month, v24, v23->static_fields->EventDailyPointResetAt, 0, 0, 0LL);
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
  System_String_o *String_71081024; // x0
  const MethodInfo *v8; // x5

  if ( (byte_4C2414B & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_2016/*"APPEND_SKILL_OPEN_CONFIRM"*/, callback);
    sub_1C3B764(&StringLiteral_20011/*"img_list_not_clear_cond"*/, v5);
    sub_1C3B764(&StringLiteral_2015/*"APPEND_SKILL_LVUP_TITLE"*/, v6);
    byte_4C2414B = 1;
  }
  String_71081024 = UnityEngine_PlayerPrefs__GetString_71081024((System_String_o *)StringLiteral_20011/*"img_list_not_clear_cond"*/, 0LL);
  if ( System_String__IsNullOrEmpty(String_71081024, 0LL) )
    ActionExtensions__Call(callback, 0LL);
  else
    TerminalSceneComponent__OpenExchangeDialogue(
      this,
      (System_String_o *)StringLiteral_20011/*"img_list_not_clear_cond"*/,
      (System_String_o *)StringLiteral_2016/*"APPEND_SKILL_OPEN_CONFIRM"*/,
      (System_String_o *)StringLiteral_2015/*"APPEND_SKILL_LVUP_TITLE"*/,
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
  System_String_o *String_71081024; // x0
  const MethodInfo *v8; // x5

  if ( (byte_4C2414C & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_2018/*"APPEND_SKILL_OPEN_MSG"*/, callback);
    sub_1C3B764(&StringLiteral_23398/*"sy2"*/, v5);
    sub_1C3B764(&StringLiteral_2017/*"APPEND_SKILL_OPEN_HAVE_COIN"*/, v6);
    byte_4C2414C = 1;
  }
  String_71081024 = UnityEngine_PlayerPrefs__GetString_71081024((System_String_o *)StringLiteral_23398/*"sy2"*/, 0LL);
  if ( System_String__IsNullOrEmpty(String_71081024, 0LL) )
    ActionExtensions__Call(callback, 0LL);
  else
    TerminalSceneComponent__OpenExchangeDialogue(
      this,
      (System_String_o *)StringLiteral_23398/*"sy2"*/,
      (System_String_o *)StringLiteral_2018/*"APPEND_SKILL_OPEN_MSG"*/,
      (System_String_o *)StringLiteral_2017/*"APPEND_SKILL_OPEN_HAVE_COIN"*/,
      callback,
      v8);
}


void __fastcall TerminalSceneComponent__CheckLastPlayBgm(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTerminalList; // x20
  __int64 v4; // x1
  ScrTerminalListTop_o *v5; // x0

  if ( (byte_4C24131 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C24131 = 1;
  }
  mTerminalList = (UnityEngine_Object_o *)this->fields.mTerminalList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mTerminalList, 0LL, 0LL) )
  {
    v5 = this->fields.mTerminalList;
    if ( !v5 )
      sub_1C3B9C0(0LL, v4);
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Action_o **v25; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  _QWORD *v32; // x21
  TerminalSceneComponent_c *v33; // x0
  System_String_o *String; // x0
  int64_t v35; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v37; // x21
  System_String_o *v38; // x22
  System_String_o *v39; // x23
  CommonConfirmDialog_ClickDelegate_o *v40; // x24
  TerminalSceneComponent_c *v41; // x0
  struct TerminalSceneComponent_StaticFields *static_fields; // x8
  int64_t v43; // x0
  System_String_o *MASTER_MISSION_RESET_KEY; // x19
  System_String_o *v45; // x0

  if ( (byte_4C2414F & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, callback);
    sub_1C3B764(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1C3B764(&LocalizationManager_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v8);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass262_0__CheckMasterMissionReset_b__0__, v9);
    sub_1C3B764(&TerminalSceneComponent___c__DisplayClass262_0_TypeInfo, v10);
    sub_1C3B764(&StringLiteral_8955/*"Moved Permanently"*/, v11);
    sub_1C3B764(&StringLiteral_8954/*"Move_Point_{0}"*/, v12);
    sub_1C3B764(&StringLiteral_3799/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/, v13);
    sub_1C3B764(&StringLiteral_1/*""*/, v14);
    sub_1C3B764(&StringLiteral_1191/*"1.0"*/, v15);
    byte_4C2414F = 1;
  }
  v16 = sub_1C3B9B0(TerminalSceneComponent___c__DisplayClass262_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_20;
  *(_QWORD *)(v16 + 24) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v16 + 24), (int64_t)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 32) = callback;
  v25 = (System_Action_o **)(v16 + 32);
  sub_1C3B708((PartyOrganizationUtility_o *)(v16 + 32), (int64_t)callback, v26, v27, v28, v29, v30, v31);
  mPlayerStatus = this->fields.mPlayerStatus;
  if ( !mPlayerStatus )
    goto LABEL_20;
  *(_QWORD *)(v16 + 16) = ScrPlayerStatus__GetMstMissionStarts(mPlayerStatus, 0LL);
  v32 = (_QWORD *)(v16 + 16);
  v33 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v33 = TerminalSceneComponent_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             v33->static_fields->MASTER_MISSION_RESET_KEY,
             (System_String_o *)StringLiteral_1191/*"1.0"*/,
             0LL);
  v35 = System_Int64__Parse(String, 0LL);
  if ( *v32 )
  {
    if ( v35 )
    {
      if ( v35 != *v32 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v37 = LocalizationManager__Get((System_String_o *)StringLiteral_8955/*"Moved Permanently"*/, 0LL);
        v38 = LocalizationManager__Get((System_String_o *)StringLiteral_8954/*"Move_Point_{0}"*/, 0LL);
        v39 = LocalizationManager__Get((System_String_o *)StringLiteral_3799/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/, 0LL);
        v40 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C3B9B0(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v40,
          (Il2CppObject *)v16,
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
            v37,
            v38,
            v39,
            v40,
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
        sub_1C3B9C0(mPlayerStatus, v18);
      }
    }
    else
    {
      v41 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v41 = TerminalSceneComponent_TypeInfo;
      }
      static_fields = v41->static_fields;
      v43 = v16 + 16;
      MASTER_MISSION_RESET_KEY = static_fields->MASTER_MISSION_RESET_KEY;
      v45 = System_Int64__ToString(v43, 0LL);
      UnityEngine_PlayerPrefs__SetString(MASTER_MISSION_RESET_KEY, v45, 0LL);
    }
  }
  ActionExtensions__Call(*v25, 0LL);
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
  int64_t v22; // x19
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Action_o **v31; // x20
  BattleResultBondsComponent_c *v32; // x0
  BattleResultBondsComponent_c *v33; // x0
  Il2CppObject *String_71081024; // x21
  System_Object_array *v35; // x0
  System_Object_array *v36; // x22
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v38; // x23
  __int64 v39; // x25
  Il2CppObject *v40; // x8
  BattleResultBondsComponent_c *v41; // x0
  BattleResultBondsComponent_c *v42; // x0
  System_Action_o *v43; // x20
  EventServantEntity_o *v44; // x21
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *v51; // x22
  __int64 v52; // x22
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x19
  int64_t v60; // x20
  Il2CppObject *v61; // x8
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  System_String_o *v74; // x19
  Il2CppObject *v75; // x22
  __int64 v76; // x0
  Il2CppObject *v77; // [xsp+30h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4C24150 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, callBack);
    sub_1C3B764(&BattleResultBondsComponent_TypeInfo, v4);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1C3B764(&Method_DataManager_GetMaster_SvtCoinMaster___, v6);
    sub_1C3B764(&DataManager_TypeInfo, v7);
    sub_1C3B764(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v8);
    sub_1C3B764(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v9);
    sub_1C3B764(&GetSvtCoin___TypeInfo, v10);
    sub_1C3B764(&GetSvtCoin_TypeInfo, v11);
    sub_1C3B764(&Method_JsonManager_DeserializeArray_GetSvts___, v12);
    sub_1C3B764(&JsonManager_TypeInfo, v13);
    sub_1C3B764(&LocalizationManager_TypeInfo, v14);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass263_0__CheckNotificationDialog_b__0__, v17);
    sub_1C3B764(&TerminalSceneComponent___c__DisplayClass263_0_TypeInfo, v18);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass263_1__CheckNotificationDialog_b__1__, v19);
    sub_1C3B764(&TerminalSceneComponent___c__DisplayClass263_1_TypeInfo, v20);
    sub_1C3B764(&StringLiteral_12621/*"Spanish (Costa Rica)"*/, v21);
    byte_4C24150 = 1;
  }
  v77 = 0LL;
  entity = 0LL;
  v22 = sub_1C3B9B0(TerminalSceneComponent___c__DisplayClass263_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_54;
  *(_QWORD *)(v22 + 16) = callBack;
  v31 = (System_Action_o **)(v22 + 16);
  sub_1C3B708((PartyOrganizationUtility_o *)(v22 + 16), (int64_t)callBack, v25, v26, v27, v28, v29, v30);
  v32 = BattleResultBondsComponent_TypeInfo;
  if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
    v32 = BattleResultBondsComponent_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v32->static_fields->GET_EXIST_SVT_KEY, 0LL) )
  {
    v33 = BattleResultBondsComponent_TypeInfo;
    if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
      v33 = BattleResultBondsComponent_TypeInfo;
    }
    String_71081024 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_71081024(
                                        v33->static_fields->GET_EXIST_SVT_KEY,
                                        0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v35 = JsonManager__DeserializeArray_object_(
            String_71081024,
            (const MethodInfo_3058CE8 *)Method_JsonManager_DeserializeArray_GetSvts___);
    if ( v35 )
    {
      v36 = v35;
      if ( *(_QWORD *)&v35->max_length )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_54;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantMaster___);
        max_length = v36->max_length;
        if ( max_length >= 1 )
        {
          v38 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v39 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v39 >= max_length )
              goto LABEL_55;
            v40 = v36->m_Items[v39];
            if ( !v40 || !v38 )
              goto LABEL_54;
            Instance = (DataManager_o *)DataMasterBase_object__object__long___TryGetEntity(
                                          v38,
                                          &entity,
                                          (int64_t)v40[1].klass,
                                          (const MethodInfo_329D3F0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
            if ( (_DWORD)v39 == v36->max_length - 1 )
            {
              v41 = BattleResultBondsComponent_TypeInfo;
              if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
                v41 = BattleResultBondsComponent_TypeInfo;
              }
              UnityEngine_PlayerPrefs__DeleteKey(v41->static_fields->GET_EXIST_SVT_KEY, 0LL);
              ActionExtensions__Call(*v31, 0LL);
            }
            max_length = v36->max_length;
            if ( (int)++v39 >= max_length )
              goto LABEL_29;
          }
          v43 = *(System_Action_o **)(v22 + 24);
          v44 = (EventServantEntity_o *)Instance;
          if ( !v43 )
          {
            v43 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
            System_Action___ctor(
              v43,
              (Il2CppObject *)v22,
              Method_TerminalSceneComponent___c__DisplayClass263_0__CheckNotificationDialog_b__0__,
              0LL);
            *(_QWORD *)(v22 + 24) = v43;
            sub_1C3B708((PartyOrganizationUtility_o *)(v22 + 24), (int64_t)v43, v45, v46, v47, v48, v49, v50);
          }
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_SvtCoinMaster___);
          if ( entity )
          {
            v51 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
            Instance = (DataManager_o *)UserServantEntity__getSvtId((UserServantEntity_o *)entity, 0LL);
            if ( v51 )
            {
              Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            v51,
                                            &v77,
                                            (int32_t)Instance,
                                            (const MethodInfo_329AE94 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !v77 )
                  goto LABEL_54;
                if ( SHIDWORD(v77[1].klass) >= 1 )
                {
                  v52 = sub_1C3B9B0(TerminalSceneComponent___c__DisplayClass263_1_TypeInfo);
                  System_Object___ctor((Il2CppObject *)v52, 0LL);
                  if ( !v52 )
                    goto LABEL_54;
                  *(_QWORD *)(v52 + 24) = v22;
                  sub_1C3B708((PartyOrganizationUtility_o *)(v52 + 24), v22, v53, v54, v55, v56, v57, v58);
                  v59 = sub_1C3B80C(GetSvtCoin___TypeInfo, 1LL);
                  v60 = sub_1C3B9B0(GetSvtCoin_TypeInfo);
                  GetSvtCoin___ctor((GetSvtCoin_o *)v60, 0LL);
                  v61 = v77;
                  if ( !v77 )
                    goto LABEL_54;
                  if ( !v60 )
                    goto LABEL_54;
                  *(_DWORD *)(v60 + 16) = v77[1].klass;
                  *(int32x2_t *)(v60 + 20) = vrev64_s32(*(int32x2_t *)((char *)&v61[1].klass + 4));
                  if ( !v59 )
                    goto LABEL_54;
                  Instance = (DataManager_o *)sub_1C3B8A0(v60, *(_QWORD *)(*(_QWORD *)v59 + 64LL));
                  if ( !Instance )
                  {
                    v76 = sub_1C3B9E4(0LL);
                    sub_1C3B88C(v76, 0LL);
                  }
                  if ( !*(_DWORD *)(v59 + 24) )
LABEL_55:
                    sub_1C3B9C8(Instance, v24);
                  *(_QWORD *)(v59 + 32) = v60;
                  sub_1C3B708((PartyOrganizationUtility_o *)(v59 + 32), v60, v62, v63, v64, v65, v66, v67);
                  *(_QWORD *)(v52 + 16) = v59;
                  sub_1C3B708((PartyOrganizationUtility_o *)(v52 + 16), v59, v68, v69, v70, v71, v72, v73);
                  v43 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
                  System_Action___ctor(
                    v43,
                    (Il2CppObject *)v52,
                    Method_TerminalSceneComponent___c__DisplayClass263_1__CheckNotificationDialog_b__1__,
                    0LL);
                }
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v74 = LocalizationManager__Get((System_String_o *)StringLiteral_12621/*"Spanish (Costa Rica)"*/, 0LL);
              v75 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              Instance = (DataManager_o *)EventServantEntity__GetGetMessage(v44, 0LL);
              if ( v75 )
              {
                CommonUI__OpenNotificationDialog(
                  (CommonUI_o *)v75,
                  v74,
                  (System_String_o *)Instance,
                  v43,
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
          sub_1C3B9C0(Instance, v24);
        }
      }
    }
LABEL_29:
    v42 = BattleResultBondsComponent_TypeInfo;
    if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
      v42 = BattleResultBondsComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__DeleteKey(v42->static_fields->GET_EXIST_SVT_KEY, 0LL);
  }
  ActionExtensions__Call(*v31, 0LL);
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
  __int64 mTerminalList; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Action_o **v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int v28; // w21
  __int64 v29; // x23
  bool IsBlankEarthAction; // w24
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  TerminalSceneComponent___c_c *v37; // x8
  __int64 v38; // x25
  System_Action_object__o *_9__253_0; // x26
  Il2CppObject *v40; // x27
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
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
  System_Action_object__o *v54; // x26
  Il2CppObject *v55; // x27
  struct TerminalSceneComponent___c_StaticFields *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  System_Action_object__o *v63; // x26
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  ActionChain_o *v70; // x22
  const MethodInfo *v71; // x2
  System_Collections_IEnumerator_o *v72; // x0

  if ( (byte_4C24148 & 1) == 0 )
  {
    sub_1C3B764(&ActionChain_TypeInfo, callback);
    sub_1C3B764(&System_Action_Action____TypeInfo, v5);
    sub_1C3B764(&System_Action_Action__TypeInfo, v6);
    sub_1C3B764(&Method_TerminalSceneComponent___c__CheckOpenCampaignDirectBonus_b__253_0__, v7);
    sub_1C3B764(&Method_TerminalSceneComponent___c__CheckOpenCampaignDirectBonus_b__253_1__, v8);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass253_0__CheckOpenCampaignDirectBonus_b__2__, v9);
    sub_1C3B764(&TerminalSceneComponent___c__DisplayClass253_0_TypeInfo, v10);
    sub_1C3B764(&TerminalSceneComponent___c_TypeInfo, v11);
    byte_4C24148 = 1;
  }
  v12 = sub_1C3B9B0(TerminalSceneComponent___c__DisplayClass253_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_33;
  *(_QWORD *)(v12 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = callback;
  v21 = (System_Action_o **)(v12 + 24);
  sub_1C3B708((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)callback, v22, v23, v24, v25, v26, v27);
  mTerminalList = (__int64)this->fields.mTerminalList;
  this->fields._IsPlayingCampaignDirectBonus_k__BackingField = 1;
  if ( !mTerminalList )
    goto LABEL_33;
  mTerminalList = ScrTerminalListTop__CheckTerminalTopEffect((ScrTerminalListTop_o *)mTerminalList, 0LL);
  if ( !this->fields.mTerminalList )
    goto LABEL_33;
  v28 = mTerminalList;
  mTerminalList = (__int64)ScrTerminalListTop__GetCurrentLoginEntity(this->fields.mTerminalList, 0LL);
  if ( !this->fields.mTerminalList )
    goto LABEL_33;
  v29 = mTerminalList;
  IsBlankEarthAction = ScrTerminalListTop__IsBlankEarthAction(this->fields.mTerminalList, 0LL);
  mTerminalList = sub_1C3B80C(System_Action_Action____TypeInfo, 3LL);
  v37 = TerminalSceneComponent___c_TypeInfo;
  v38 = mTerminalList;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v37 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__253_0 = (System_Action_object__o *)v37->static_fields->__9__253_0;
  if ( !_9__253_0 )
  {
    if ( !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v37 = TerminalSceneComponent___c_TypeInfo;
    }
    v40 = (Il2CppObject *)v37->static_fields->__9;
    _9__253_0 = (System_Action_object__o *)sub_1C3B9B0(System_Action_Action__TypeInfo);
    System_Action_object____ctor(
      _9__253_0,
      v40,
      Method_TerminalSceneComponent___c__CheckOpenCampaignDirectBonus_b__253_0__,
      0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__253_0 = (struct System_Action_Action__o *)_9__253_0;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__253_0,
      (int64_t)_9__253_0,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  if ( !v38 )
    goto LABEL_33;
  if ( !*(_DWORD *)(v38 + 24) )
    goto LABEL_34;
  *(_QWORD *)(v38 + 32) = _9__253_0;
  sub_1C3B708((PartyOrganizationUtility_o *)(v38 + 32), (int64_t)_9__253_0, v31, v32, v33, v34, v35, v36);
  mTerminalList = (__int64)TerminalSceneComponent___c_TypeInfo;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    mTerminalList = (__int64)TerminalSceneComponent___c_TypeInfo;
  }
  v54 = *(System_Action_object__o **)(*(_QWORD *)(mTerminalList + 184) + 136LL);
  if ( !v54 )
  {
    if ( !*(_DWORD *)(mTerminalList + 224) )
    {
      j_il2cpp_runtime_class_init_0(mTerminalList);
      mTerminalList = (__int64)TerminalSceneComponent___c_TypeInfo;
    }
    v55 = **(Il2CppObject ***)(mTerminalList + 184);
    v54 = (System_Action_object__o *)sub_1C3B9B0(System_Action_Action__TypeInfo);
    System_Action_object____ctor(
      v54,
      v55,
      Method_TerminalSceneComponent___c__CheckOpenCampaignDirectBonus_b__253_1__,
      0LL);
    v56 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v56->__9__253_1 = (struct System_Action_Action__o *)v54;
    sub_1C3B708((PartyOrganizationUtility_o *)&v56->__9__253_1, (int64_t)v54, v57, v58, v59, v60, v61, v62);
  }
  if ( *(_DWORD *)(v38 + 24) <= 1u
    || (*(_QWORD *)(v38 + 40) = v54,
        sub_1C3B708((PartyOrganizationUtility_o *)(v38 + 40), (int64_t)v54, v48, v49, v50, v51, v52, v53),
        v63 = (System_Action_object__o *)sub_1C3B9B0(System_Action_Action__TypeInfo),
        System_Action_object____ctor(
          v63,
          (Il2CppObject *)v12,
          Method_TerminalSceneComponent___c__DisplayClass253_0__CheckOpenCampaignDirectBonus_b__2__,
          0LL),
        *(_DWORD *)(v38 + 24) <= 2u) )
  {
LABEL_34:
    sub_1C3B9C8(mTerminalList, v14);
  }
  *(_QWORD *)(v38 + 48) = v63;
  sub_1C3B708((PartyOrganizationUtility_o *)(v38 + 48), (int64_t)v63, v64, v65, v66, v67, v68, v69);
  v70 = (ActionChain_o *)sub_1C3B9B0(ActionChain_TypeInfo);
  ActionChain___ctor_47992068(v70, (System_Action_Action__array *)v38, 0LL);
  if ( v28 <= 0 && v29 == 0 && !IsBlankEarthAction )
  {
    if ( v70 )
    {
      ChainableActionBase__Execute((ChainableActionBase_o *)v70, 0LL);
      return;
    }
LABEL_33:
    sub_1C3B9C0(mTerminalList, v14);
  }
  if ( !v29 && v28 >= 1 )
  {
    v72 = TerminalSceneComponent__CoWaitTerminalTopEffectEnd(this, v70, v71);
LABEL_31:
    UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, v72, 0LL);
    return;
  }
  if ( IsBlankEarthAction )
  {
    v72 = TerminalSceneComponent__CoWaitBlankEarthActionEnd(this, v70, v71);
    goto LABEL_31;
  }
  this->fields._IsPlayingCampaignDirectBonus_k__BackingField = 0;
  ActionExtensions__Call(*v21, 0LL);
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

  if ( (byte_4C2413D & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, *(_QWORD *)&warId);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v4);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v5);
    byte_4C2413D = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_1C3B9C0(Instance, v7);
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
  __int64 v36; // x20
  void *Instance; // x0
  __int64 v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  TerminalSceneComponent_o *CampaignDirectBonus; // x0
  const MethodInfo *v52; // x2
  __int64 v53; // x0
  Il2CppObject *mTerminalList; // x23
  __int64 v55; // x21
  System_Action_object__o *v56; // x22
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  System_Action_object__o *v63; // x22
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  System_Action_object__o *v70; // x22
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  Il2CppObject *v77; // x24
  System_Action_object__o *v78; // x22
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  Il2CppObject *v85; // x24
  System_Action_object__o *v86; // x22
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  Il2CppObject *v93; // x24
  System_Action_object__o *v94; // x22
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  System_Action_object__o *v101; // x22
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  System_Action_object__o *v108; // x22
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  System_Action_object__o *v115; // x22
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  System_Action_object__o *v128; // x22
  Il2CppObject *v129; // x23
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  System_Action_object__o *v137; // x22
  int64_t v138; // x2
  int32_t v139; // w3
  System_String_o *v140; // x4
  BattleSetupInfo_o *v141; // x5
  FollowerInfo_o *v142; // x6
  PartyListViewItem_o *v143; // x7
  System_Action_object__o *v144; // x22
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  System_Action_object__o *v151; // x22
  int64_t v152; // x2
  int32_t v153; // w3
  System_String_o *v154; // x4
  BattleSetupInfo_o *v155; // x5
  FollowerInfo_o *v156; // x6
  PartyListViewItem_o *v157; // x7
  System_Action_object__o *v158; // x22
  int64_t v159; // x2
  int32_t v160; // w3
  System_String_o *v161; // x4
  BattleSetupInfo_o *v162; // x5
  FollowerInfo_o *v163; // x6
  PartyListViewItem_o *v164; // x7
  System_Action_object__o *v165; // x22
  int64_t v166; // x2
  int32_t v167; // w3
  System_String_o *v168; // x4
  BattleSetupInfo_o *v169; // x5
  FollowerInfo_o *v170; // x6
  PartyListViewItem_o *v171; // x7
  System_Action_object__o *v172; // x22
  int64_t v173; // x2
  int32_t v174; // w3
  System_String_o *v175; // x4
  BattleSetupInfo_o *v176; // x5
  FollowerInfo_o *v177; // x6
  PartyListViewItem_o *v178; // x7
  System_Action_object__o *v179; // x19
  int64_t v180; // x2
  int32_t v181; // w3
  System_String_o *v182; // x4
  BattleSetupInfo_o *v183; // x5
  FollowerInfo_o *v184; // x6
  PartyListViewItem_o *v185; // x7
  ActionChain_o *v186; // x19
  __int64 v187; // x21
  System_Action_o *v188; // x22
  int64_t v189; // x2
  int32_t v190; // w3
  System_String_o *v191; // x4
  BattleSetupInfo_o *v192; // x5
  FollowerInfo_o *v193; // x6
  PartyListViewItem_o *v194; // x7

  if ( (byte_4C24146 & 1) == 0 )
  {
    sub_1C3B764(&ActionChain_TypeInfo, afterChain);
    sub_1C3B764(&System_Action___TypeInfo, v9);
    sub_1C3B764(&System_Action_Action____TypeInfo, v10);
    sub_1C3B764(&System_Action_Action__TypeInfo, v11);
    sub_1C3B764(&System_Action_TypeInfo, v12);
    sub_1C3B764(&Method_CommonUI_StartLoginMessages__, v13);
    sub_1C3B764(&Method_CommonUI_StartServantEventJoinLeaveNotification__, v14);
    sub_1C3B764(&Method_ScrTerminalListTop_ShowTerminalMessagesDialogue__, v15);
    sub_1C3B764(&Method_ScrTerminalListTop_StartShowWarClearReward__, v16);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v18);
    sub_1C3B764(&Method_TerminalSceneComponent_CheckAfterQuestClearDialog__, v19);
    sub_1C3B764(&Method_TerminalSceneComponent_CheckExchangeDialogTheFree__, v20);
    sub_1C3B764(&Method_TerminalSceneComponent_CheckExchangeDialogTheReturn__, v21);
    sub_1C3B764(&Method_TerminalSceneComponent_CheckMasterMissionReset__, v22);
    sub_1C3B764(&Method_TerminalSceneComponent_CheckNotificationDialog__, v23);
    sub_1C3B764(&Method_TerminalSceneComponent_CheckSaveRouteSelect__, v24);
    sub_1C3B764(&Method_TerminalSceneComponent_CheckSpecialAscensionTutorial__, v25);
    sub_1C3B764(&Method_TerminalSceneComponent_CheckTutorialOnTerminalAfterFreeExchangeDialog__, v26);
    sub_1C3B764(&Method_TerminalSceneComponent_CheckTutorialOnTerminal__, v27);
    sub_1C3B764(&TutorialFlag_TypeInfo, v28);
    sub_1C3B764(&Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__251_2__, v29);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass251_0__CheckRewardPopupChain_b__0__, v30);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass251_0__CheckRewardPopupChain_b__1__, v31);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass251_0__CheckRewardPopupChain_b__3__, v32);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass251_0__CheckRewardPopupChain_b__4__, v33);
    sub_1C3B764(&TerminalSceneComponent___c__DisplayClass251_0_TypeInfo, v34);
    sub_1C3B764(&TerminalSceneComponent___c_TypeInfo, v35);
    byte_4C24146 = 1;
  }
  v36 = sub_1C3B9B0(TerminalSceneComponent___c__DisplayClass251_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v36, 0LL);
  if ( !v36 )
    goto LABEL_44;
  *(_QWORD *)(v36 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v36 + 16), (int64_t)this, v39, v40, v41, v42, v43, v44);
  *(_QWORD *)(v36 + 24) = afterChain;
  sub_1C3B708((PartyOrganizationUtility_o *)(v36 + 24), (int64_t)afterChain, v45, v46, v47, v48, v49, v50);
  if ( !checkTutorialEnded )
    goto LABEL_8;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_39109112(102, 0LL) )
  {
LABEL_8:
    if ( !noExecuteCondition )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CampaignDirectBonus = (TerminalSceneComponent_o *)CommonUI__get_CampaignDirectBonus((CommonUI_o *)Instance, 0LL);
        TerminalSceneComponent__SaveCampaignDirectBonusData(
          CampaignDirectBonus,
          (CommonUI_CampaignDirectBonusData_array *)CampaignDirectBonus,
          v52);
        v53 = sub_1C3B80C(System_Action_Action____TypeInfo, 17LL);
        mTerminalList = (Il2CppObject *)this->fields.mTerminalList;
        v55 = v53;
        v56 = (System_Action_object__o *)sub_1C3B9B0(System_Action_Action__TypeInfo);
        System_Action_object____ctor(v56, mTerminalList, Method_ScrTerminalListTop_StartShowWarClearReward__, 0LL);
        if ( v55 )
        {
          if ( !*(_DWORD *)(v55 + 24) )
            goto LABEL_43;
          *(_QWORD *)(v55 + 32) = v56;
          sub_1C3B708((PartyOrganizationUtility_o *)(v55 + 32), (int64_t)v56, v57, v58, v59, v60, v61, v62);
          v63 = (System_Action_object__o *)sub_1C3B9B0(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v63,
            (Il2CppObject *)this,
            Method_TerminalSceneComponent_CheckAfterQuestClearDialog__,
            0LL);
          if ( *(_DWORD *)(v55 + 24) <= 1u )
            goto LABEL_43;
          *(_QWORD *)(v55 + 40) = v63;
          sub_1C3B708((PartyOrganizationUtility_o *)(v55 + 40), (int64_t)v63, v64, v65, v66, v67, v68, v69);
          v70 = (System_Action_object__o *)sub_1C3B9B0(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v70,
            (Il2CppObject *)v36,
            Method_TerminalSceneComponent___c__DisplayClass251_0__CheckRewardPopupChain_b__0__,
            0LL);
          if ( *(_DWORD *)(v55 + 24) <= 2u )
            goto LABEL_43;
          *(_QWORD *)(v55 + 48) = v70;
          sub_1C3B708((PartyOrganizationUtility_o *)(v55 + 48), (int64_t)v70, v71, v72, v73, v74, v75, v76);
          v77 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v78 = (System_Action_object__o *)sub_1C3B9B0(System_Action_Action__TypeInfo);
          System_Action_object____ctor(v78, v77, Method_CommonUI_StartServantEventJoinLeaveNotification__, 0LL);
          if ( *(_DWORD *)(v55 + 24) <= 3u )
            goto LABEL_43;
          *(_QWORD *)(v55 + 56) = v78;
          sub_1C3B708((PartyOrganizationUtility_o *)(v55 + 56), (int64_t)v78, v79, v80, v81, v82, v83, v84);
          v85 = (Il2CppObject *)this->fields.mTerminalList;
          v86 = (System_Action_object__o *)sub_1C3B9B0(System_Action_Action__TypeInfo);
          System_Action_object____ctor(v86, v85, Method_ScrTerminalListTop_ShowTerminalMessagesDialogue__, 0LL);
          if ( *(_DWORD *)(v55 + 24) <= 4u )
            goto LABEL_43;
          *(_QWORD *)(v55 + 64) = v86;
          sub_1C3B708((PartyOrganizationUtility_o *)(v55 + 64), (int64_t)v86, v87, v88, v89, v90, v91, v92);
          v93 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v94 = (System_Action_object__o *)sub_1C3B9B0(System_Action_Action__TypeInfo);
          System_Action_object____ctor(v94, v93, Method_CommonUI_StartLoginMessages__, 0LL);
          if ( *(_DWORD *)(v55 + 24) <= 5u )
            goto LABEL_43;
          *(_QWORD *)(v55 + 72) = v94;
          sub_1C3B708((PartyOrganizationUtility_o *)(v55 + 72), (int64_t)v94, v95, v96, v97, v98, v99, v100);
          v101 = (System_Action_object__o *)sub_1C3B9B0(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v101,
            (Il2CppObject *)v36,
            Method_TerminalSceneComponent___c__DisplayClass251_0__CheckRewardPopupChain_b__1__,
            0LL);
          if ( *(_DWORD *)(v55 + 24) <= 6u )
            goto LABEL_43;
          *(_QWORD *)(v55 + 80) = v101;
          sub_1C3B708((PartyOrganizationUtility_o *)(v55 + 80), (int64_t)v101, v102, v103, v104, v105, v106, v107);
          v108 = (System_Action_object__o *)sub_1C3B9B0(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v108,
            (Il2CppObject *)this,
            Method_TerminalSceneComponent_CheckSpecialAscensionTutorial__,
            0LL);
          if ( *(_DWORD *)(v55 + 24) <= 7u )
            goto LABEL_43;
          *(_QWORD *)(v55 + 88) = v108;
          sub_1C3B708((PartyOrganizationUtility_o *)(v55 + 88), (int64_t)v108, v109, v110, v111, v112, v113, v114);
          v115 = (System_Action_object__o *)sub_1C3B9B0(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v115,
            (Il2CppObject *)this,
            Method_TerminalSceneComponent_CheckTutorialOnTerminal__,
            0LL);
          if ( *(_DWORD *)(v55 + 24) <= 8u )
            goto LABEL_43;
          *(_QWORD *)(v55 + 96) = v115;
          sub_1C3B708((PartyOrganizationUtility_o *)(v55 + 96), (int64_t)v115, v116, v117, v118, v119, v120, v121);
          Instance = TerminalSceneComponent___c_TypeInfo;
          if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
            Instance = TerminalSceneComponent___c_TypeInfo;
          }
          v128 = *(System_Action_object__o **)(*((_QWORD *)Instance + 23) + 112LL);
          if ( !v128 )
          {
            if ( !*((_DWORD *)Instance + 56) )
            {
              j_il2cpp_runtime_class_init_0(Instance);
              Instance = TerminalSceneComponent___c_TypeInfo;
            }
            v129 = (Il2CppObject *)**((_QWORD **)Instance + 23);
            v128 = (System_Action_object__o *)sub_1C3B9B0(System_Action_Action__TypeInfo);
            System_Action_object____ctor(
              v128,
              v129,
              Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__251_2__,
              0LL);
            static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
            static_fields->__9__251_2 = (struct System_Action_Action__o *)v128;
            sub_1C3B708(
              (PartyOrganizationUtility_o *)&static_fields->__9__251_2,
              (int64_t)v128,
              v131,
              v132,
              v133,
              v134,
              v135,
              v136);
          }
          if ( *(_DWORD *)(v55 + 24) <= 9u )
            goto LABEL_43;
          *(_QWORD *)(v55 + 104) = v128;
          sub_1C3B708((PartyOrganizationUtility_o *)(v55 + 104), (int64_t)v128, v122, v123, v124, v125, v126, v127);
          v137 = (System_Action_object__o *)sub_1C3B9B0(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v137,
            (Il2CppObject *)this,
            Method_TerminalSceneComponent_CheckNotificationDialog__,
            0LL);
          if ( *(_DWORD *)(v55 + 24) <= 0xAu )
            goto LABEL_43;
          *(_QWORD *)(v55 + 112) = v137;
          sub_1C3B708((PartyOrganizationUtility_o *)(v55 + 112), (int64_t)v137, v138, v139, v140, v141, v142, v143);
          v144 = (System_Action_object__o *)sub_1C3B9B0(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v144,
            (Il2CppObject *)this,
            Method_TerminalSceneComponent_CheckMasterMissionReset__,
            0LL);
          if ( *(_DWORD *)(v55 + 24) <= 0xBu )
            goto LABEL_43;
          *(_QWORD *)(v55 + 120) = v144;
          sub_1C3B708((PartyOrganizationUtility_o *)(v55 + 120), (int64_t)v144, v145, v146, v147, v148, v149, v150);
          v151 = (System_Action_object__o *)sub_1C3B9B0(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v151,
            (Il2CppObject *)this,
            Method_TerminalSceneComponent_CheckSaveRouteSelect__,
            0LL);
          if ( *(_DWORD *)(v55 + 24) <= 0xCu )
            goto LABEL_43;
          *(_QWORD *)(v55 + 128) = v151;
          sub_1C3B708((PartyOrganizationUtility_o *)(v55 + 128), (int64_t)v151, v152, v153, v154, v155, v156, v157);
          v158 = (System_Action_object__o *)sub_1C3B9B0(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v158,
            (Il2CppObject *)this,
            Method_TerminalSceneComponent_CheckExchangeDialogTheFree__,
            0LL);
          if ( *(_DWORD *)(v55 + 24) <= 0xDu )
            goto LABEL_43;
          *(_QWORD *)(v55 + 136) = v158;
          sub_1C3B708((PartyOrganizationUtility_o *)(v55 + 136), (int64_t)v158, v159, v160, v161, v162, v163, v164);
          v165 = (System_Action_object__o *)sub_1C3B9B0(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v165,
            (Il2CppObject *)this,
            Method_TerminalSceneComponent_CheckExchangeDialogTheReturn__,
            0LL);
          if ( *(_DWORD *)(v55 + 24) <= 0xEu )
            goto LABEL_43;
          *(_QWORD *)(v55 + 144) = v165;
          sub_1C3B708((PartyOrganizationUtility_o *)(v55 + 144), (int64_t)v165, v166, v167, v168, v169, v170, v171);
          v172 = (System_Action_object__o *)sub_1C3B9B0(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v172,
            (Il2CppObject *)this,
            Method_TerminalSceneComponent_CheckTutorialOnTerminalAfterFreeExchangeDialog__,
            0LL);
          if ( *(_DWORD *)(v55 + 24) <= 0xFu )
            goto LABEL_43;
          *(_QWORD *)(v55 + 152) = v172;
          sub_1C3B708((PartyOrganizationUtility_o *)(v55 + 152), (int64_t)v172, v173, v174, v175, v176, v177, v178);
          v179 = (System_Action_object__o *)sub_1C3B9B0(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v179,
            (Il2CppObject *)v36,
            Method_TerminalSceneComponent___c__DisplayClass251_0__CheckRewardPopupChain_b__3__,
            0LL);
          if ( *(_DWORD *)(v55 + 24) <= 0x10u )
            goto LABEL_43;
          *(_QWORD *)(v55 + 160) = v179;
          sub_1C3B708((PartyOrganizationUtility_o *)(v55 + 160), (int64_t)v179, v180, v181, v182, v183, v184, v185);
          v186 = (ActionChain_o *)sub_1C3B9B0(ActionChain_TypeInfo);
          ActionChain___ctor_47992068(v186, (System_Action_Action__array *)v55, 0LL);
          v187 = sub_1C3B80C(System_Action___TypeInfo, 1LL);
          v188 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
          System_Action___ctor(
            v188,
            (Il2CppObject *)v36,
            Method_TerminalSceneComponent___c__DisplayClass251_0__CheckRewardPopupChain_b__4__,
            0LL);
          if ( !v187 )
            goto LABEL_44;
          if ( !*(_DWORD *)(v187 + 24) )
LABEL_43:
            sub_1C3B9C8(Instance, v38);
          *(_QWORD *)(v187 + 32) = v188;
          sub_1C3B708((PartyOrganizationUtility_o *)(v187 + 32), (int64_t)v188, v189, v190, v191, v192, v193, v194);
          if ( v186 )
          {
            Instance = ChainableActionBase__Final((ChainableActionBase_o *)v186, (System_Action_array *)v187, 0LL);
            if ( Instance )
            {
              ChainableActionBase__Execute((ChainableActionBase_o *)Instance, 0LL);
              goto LABEL_40;
            }
          }
        }
      }
LABEL_44:
      sub_1C3B9C0(Instance, v38);
    }
  }
  ActionExtensions__Call(*(System_Action_o **)(v36 + 24), 0LL);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  NetworkManager_ResultCallbackFunc_o *v20; // x20
  System_Int32_array *routes; // [xsp+8h] [xbp-38h] BYREF
  int32_t phase; // [xsp+18h] [xbp-28h] BYREF
  int32_t questId; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4C2414E & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestPhaseMaster___, callback);
    sub_1C3B764(&Method_NetworkManager_getRequest_BattleRouteSelectRequest___, v4);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1C3B764(&ScriptManager_TypeInfo, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass260_0__CheckSaveRouteSelect_b__0__, v9);
    sub_1C3B764(&TerminalSceneComponent___c__DisplayClass260_0_TypeInfo, v10);
    byte_4C2414E = 1;
  }
  v11 = sub_1C3B9B0(TerminalSceneComponent___c__DisplayClass260_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_19;
  *(_QWORD *)(v11 + 16) = callback;
  sub_1C3B708((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)callback, v14, v15, v16, v17, v18, v19);
  phase = -1;
  questId = -1;
  routes = 0LL;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( ScriptManager__GetSelectRouteArrayInCollection(&questId, &phase, &routes, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    if ( !Instance )
      goto LABEL_19;
    if ( QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, phase, 0LL) )
    {
      v20 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v20,
        (Il2CppObject *)v11,
        Method_TerminalSceneComponent___c__DisplayClass260_0__CheckSaveRouteSelect_b__0__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__getRequest_object_(
                   v20,
                   (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
      if ( Instance )
      {
        BattleRouteSelectRequest__beginRequest((BattleRouteSelectRequest_o *)Instance, questId, phase, routes, 0LL);
        return;
      }
LABEL_19:
      sub_1C3B9C0(Instance, v13);
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
  if ( (byte_4C24151 & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_1C3B764(&CombineRootComponent_TypeInfo, callback);
    byte_4C24151 = 1;
  }
  if ( !v4->fields.isTutorialAfter )
  {
    mTerminalMap = v4->fields.mTerminalMap;
    if ( !mTerminalMap || (this = (TerminalSceneComponent_o *)mTerminalMap->fields.dispRoot) == 0LL )
      sub_1C3B9C0(this, callback);
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

  if ( (byte_4C2413A & 1) == 0 )
  {
    sub_1C3B764(&OpeningMovieData_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_1C3B764(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v5);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v6);
    sub_1C3B764(&TutorialFlag_TypeInfo, v7);
    sub_1C3B764(&StringLiteral_13807/*"The process cannot access the file because it is being used by another process."*/, v8);
    sub_1C3B764(&StringLiteral_13808/*"The property '{0}' has no 'get' or 'set' accessors"*/, v9);
    sub_1C3B764(&StringLiteral_13809/*"The property handle and the type handle are incompatible."*/, v10);
    sub_1C3B764(&StringLiteral_13810/*"The property renderPipelineShaderTag has not been overridden. At build time, any shader variants that use any RenderPipeline tag will be stripped."*/, v11);
    byte_4C2413A = 1;
  }
  this->fields.mTutorialKind = 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_39109112(102, 0LL) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__GetProgress(0LL) == 4 )
      return 0;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1C3B9C0(Instance, v14);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1EA90 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v12);
    byte_4C1EA90 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  this->fields.mIsStart_LoginBonusWhiteBg = !v16->static_fields->_IsAutoResume_k__BackingField;
  if ( !byte_4C1CCCA )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v12);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4C1CCCA = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_4C1EA8B )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v12);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4C1EA8B = 1;
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
  if ( !byte_4C1EA8F )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v14);
    byte_4C1EA8F = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_WarId_k__BackingField = FirstWarId;
  if ( !byte_4C1EA8E )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v14);
    v18 = TerminalPramsManager_TypeInfo;
    byte_4C1EA8E = 1;
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
  v19 = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  this->fields.mTutorialKind = 5;
  v20 = (clsQuestCheck_o *)v19;
  Instance = (CommonUI_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_13807/*"The process cannot access the file because it is being used by another process."*/, 0LL);
  if ( !v20 )
    goto LABEL_83;
  if ( !clsQuestCheck__IsQuestClear(v20, (int32_t)Instance, 0, 0LL) )
  {
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_13807/*"The process cannot access the file because it is being used by another process."*/, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1EA89 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v14);
      byte_4C1EA89 = 1;
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
  v21 = ConstantMaster__getValue((System_String_o *)StringLiteral_13808/*"The property '{0}' has no 'get' or 'set' accessors"*/, 0LL);
  if ( !clsQuestCheck__IsQuestClear(v20, v21, 0, 0LL) )
  {
    v15 = 0;
    v26 = 1;
    goto LABEL_70;
  }
  v22 = ConstantMaster__getValue((System_String_o *)StringLiteral_13809/*"The property handle and the type handle are incompatible."*/, 0LL);
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
  if ( !TutorialFlag__Get_39109112(101, 0LL) )
    goto LABEL_86;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(2, 0LL) )
  {
LABEL_86:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1E64A )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v23);
      byte_4C1E64A = 1;
    }
    v30 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v30 = TerminalPramsManager_TypeInfo;
    }
    v30->static_fields->_SummonType_k__BackingField = 1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_83;
    v31 = 40;
    goto LABEL_80;
  }
  v24 = ConstantMaster__getValue((System_String_o *)StringLiteral_13810/*"The property renderPipelineShaderTag has not been overridden. At build time, any shader variants that use any RenderPipeline tag will be stripped."*/, 0LL);
  v15 = 0;
  if ( clsQuestCheck__IsQuestClear(v20, v24, 0, 0LL) )
    return v15;
  v25 = ConstantMaster__getValue((System_String_o *)StringLiteral_13810/*"The property renderPipelineShaderTag has not been overridden. At build time, any shader variants that use any RenderPipeline tag will be stripped."*/, 0LL);
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
    sub_1C3B9C0(this, callback);
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
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4C24114 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    sub_1C3B764(&TerminalTransitionInfo_TypeInfo, v3);
    byte_4C24114 = 1;
  }
  v4 = (TerminalTransitionInfo_o *)sub_1C3B9B0(TerminalTransitionInfo_TypeInfo);
  TerminalTransitionInfo___ctor(v4, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__TerminalTransitionInfoSave_SaveData(v4, 0LL);
  this->fields._TransitionInfo_k__BackingField = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields._TransitionInfo_k__BackingField, 0LL, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4C2414A & 1) == 0 )
  {
    sub_1C3B764(&TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__255_TypeInfo, openCampaignDirectBonus);
    byte_4C2414A = 1;
  }
  v5 = sub_1C3B9B0(TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__255_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = openCampaignDirectBonus;
  sub_1C3B708((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)openCampaignDirectBonus, v12, v13, v14, v15, v16, v17);
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

  if ( (byte_4C24149 & 1) == 0 )
  {
    sub_1C3B764(&TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__254_TypeInfo, openCampaignDirectBonus);
    byte_4C24149 = 1;
  }
  v5 = sub_1C3B9B0(TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__254_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = openCampaignDirectBonus;
  sub_1C3B708((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)openCampaignDirectBonus, v12, v13, v14, v15, v16, v17);
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

  if ( (byte_4C24113 & 1) == 0 )
  {
    sub_1C3B764(&TerminalTransitionInfo_TypeInfo, info);
    byte_4C24113 = 1;
  }
  v5 = (TerminalTransitionInfo_o *)sub_1C3B9B0(TerminalTransitionInfo_TypeInfo);
  TerminalTransitionInfo___ctor(v5, 0LL);
  this->fields._TransitionInfo_k__BackingField = v5;
  sub_1C3B708(
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
    sub_1C3B9C0(0LL, v12);
  TerminalTransitionInfo__SetParameters(TransitionInfo_k__BackingField, info, 0LL);
}


void __fastcall TerminalSceneComponent__EndAuto(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  ScrPlayerStatus_o *mPlayerStatus; // x19
  QuestAfterAction_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4C24125 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, method);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v3);
    byte_4C24125 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C241AD )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C241AD = 1;
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
    if ( !byte_4C241AE )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
      byte_4C241AE = 1;
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
    if ( !byte_4C1CAE5 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v7);
      byte_4C1CAE5 = 1;
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
  Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  if ( QuestAfterAction__IsExistTerminalTransition(Instance, 0LL) )
  {
    Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( Instance )
    {
      QuestAfterAction__Clear(Instance, 0LL);
      return;
    }
LABEL_29:
    sub_1C3B9C0(Instance, method);
  }
}


float __fastcall TerminalSceneComponent__FSMenuOffsetX(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C24107 & 1) == 0 )
  {
    sub_1C3B764(&FSUtility_TypeInfo, method);
    byte_4C24107 = 1;
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x3
  struct ScrTerminalListTop_o *mTerminalList; // x8
  System_Action_o *v38; // x2
  __int64 v39; // x8
  __int64 v40; // x8
  __int64 v41; // x8
  __int64 v42; // x8
  __int64 v43; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v45; // x1
  int32_t v46; // w22
  int32_t v47; // w23
  SceneJumpInfo_o *v48; // x21
  TerminalPramsManager_c *v49; // x0
  __int64 v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  TerminalPramsManager_c *v57; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  ScrTerminalMap_o *mTerminalMap; // x22
  int32_t v60; // w23
  __int64 v61; // x1
  System_String_o *MapModelEntryAnimationName; // x22
  TerminalPramsManager_c *v63; // x0
  Il2CppObject *v64; // x0
  float v65; // s8
  CommonUI_o *v66; // x19
  System_Action_o *v67; // x21
  Il2CppObject *v68; // x19
  System_Action_o *v69; // x21
  CommonUI_o *v70; // x21
  ScrTerminalMap_o *v71; // x19
  System_Action_o *v72; // x21

  if ( (byte_4C24127 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1C3B764(&AvalonSceneManager_TypeInfo, v9);
    sub_1C3B764(&SceneJumpInfo_TypeInfo, v10);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v12);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v13);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v14);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass201_0__FadeInAndTriggerEventEffects_b__0__, v15);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass201_0__FadeInAndTriggerEventEffects_b__1__, v16);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass201_0__FadeInAndTriggerEventEffects_b__4__, v17);
    sub_1C3B764(&TerminalSceneComponent___c__DisplayClass201_0_TypeInfo, v18);
    sub_1C3B764(&StringLiteral_1/*""*/, v19);
    byte_4C24127 = 1;
  }
  v20 = sub_1C3B9B0(TerminalSceneComponent___c__DisplayClass201_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_99;
  *(float *)(v20 + 16) = fadeTime;
  *(_QWORD *)(v20 + 24) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v20 + 24), (int64_t)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v20 + 40) = callback;
  *(_DWORD *)(v20 + 32) = eventId;
  sub_1C3B708((PartyOrganizationUtility_o *)(v20 + 40), (int64_t)callback, v29, v30, v31, v32, v33, v34);
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_99;
  v22 = *(unsigned int *)(v20 + 32);
  if ( mTerminalList->fields.isBackFromBlankEarthMap )
  {
    v38 = *(System_Action_o **)(v20 + 40);
LABEL_7:
    TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(this, v22, v38, v36);
    return;
  }
  if ( (int)v22 >= 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F4FB )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v22);
      byte_4C1F4FB = 1;
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
      if ( !byte_4C1F4FB )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v22);
        byte_4C1F4FB = 1;
      }
      Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
      }
      v39 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields.fadeType + 208LL);
      if ( !v39 )
        goto LABEL_99;
      if ( *(_DWORD *)(v39 + 16) == *(_DWORD *)(v20 + 32) )
      {
        if ( !Instance[2].fields.m_CachedPtr )
          j_il2cpp_runtime_class_init_0(Instance);
        if ( !byte_4C1F4FB )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, v22);
          byte_4C1F4FB = 1;
        }
        Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
        }
        v40 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields.fadeType + 208LL);
        if ( !v40 )
          goto LABEL_99;
        if ( *(_DWORD *)(v40 + 20) )
        {
          if ( !Instance[2].fields.m_CachedPtr )
            j_il2cpp_runtime_class_init_0(Instance);
          if ( !byte_4C1F4FB )
          {
            sub_1C3B764(&TerminalPramsManager_TypeInfo, v22);
            byte_4C1F4FB = 1;
          }
          Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
          }
          v41 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields.fadeType + 208LL);
          if ( v41 )
          {
            if ( *(_DWORD *)(v41 + 20) == 1 )
            {
              if ( !Instance[2].fields.m_CachedPtr )
                j_il2cpp_runtime_class_init_0(Instance);
              if ( !byte_4C1F4FB )
              {
                sub_1C3B764(&TerminalPramsManager_TypeInfo, v22);
                byte_4C1F4FB = 1;
              }
              Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
              }
              v42 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields.fadeType + 208LL);
              if ( !v42 )
                goto LABEL_99;
              v43 = *(_QWORD *)(v42 + 24);
              if ( v43
                && *(int *)(v43 + 24) >= 1
                && !(IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v43 + 32), 0LL)) )
              {
                if ( !*(_DWORD *)(v43 + 24) )
                  sub_1C3B9C8(IsNullOrEmpty, v45);
                v46 = System_Int32__Parse(*(System_String_o **)(v43 + 32), 0LL) + 1;
              }
              else
              {
                v46 = 0;
              }
              v47 = *(_DWORD *)(v20 + 32);
              v48 = (SceneJumpInfo_o *)sub_1C3B9B0(SceneJumpInfo_TypeInfo);
              SceneJumpInfo___ctor_40098360(v48, (System_String_o *)StringLiteral_1/*""*/, v47, v46, 0LL);
              Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !Instance )
                goto LABEL_99;
              AvalonSceneManager__transitionScene(Instance, 72, 1, (Il2CppObject *)v48, 0LL);
              Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
            }
            if ( !Instance[2].fields.m_CachedPtr )
              j_il2cpp_runtime_class_init_0(Instance);
            if ( !byte_4C1F4FB )
            {
              sub_1C3B764(&TerminalPramsManager_TypeInfo, v22);
              byte_4C1F4FB = 1;
            }
            v49 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v49 = TerminalPramsManager_TypeInfo;
            }
            Instance = (AvalonSceneManager_o *)v49->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
            if ( Instance )
            {
              SpecifiedSceneInfo__InitParameter((SpecifiedSceneInfo_o *)Instance, 0LL);
              if ( !byte_4C1F4DC )
              {
                sub_1C3B764(&TerminalPramsManager_TypeInfo, v50);
                byte_4C1F4DC = 1;
              }
              v57 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v57 = TerminalPramsManager_TypeInfo;
              }
              static_fields = v57->static_fields;
              static_fields->_SpecifiedChangeSceneInfo_k__BackingField = 0LL;
              sub_1C3B708(
                (PartyOrganizationUtility_o *)&static_fields->_SpecifiedChangeSceneInfo_k__BackingField,
                0LL,
                v51,
                v52,
                v53,
                v54,
                v55,
                v56);
              LODWORD(v22) = *(_DWORD *)(v20 + 32);
              v38 = *(System_Action_o **)(v20 + 40);
              goto LABEL_7;
            }
          }
LABEL_99:
          sub_1C3B9C0(Instance, v22);
        }
      }
    }
  }
  if ( TerminalSceneComponent__IsEnabledMapOnEvent((TerminalSceneComponent_o *)Instance, *(_DWORD *)(v20 + 32), v35) )
  {
    Instance = (AvalonSceneManager_o *)this->fields.mTerminalMap;
    if ( !Instance )
      goto LABEL_99;
    if ( !ScrTerminalMap__IsMapModel((ScrTerminalMap_o *)Instance, 0LL) )
      goto LABEL_88;
    mTerminalMap = this->fields.mTerminalMap;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1EC65 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v22);
      byte_4C1EC65 = 1;
    }
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    }
    v60 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields.fadeType + 140LL);
    if ( !byte_4C1EC66 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v22);
      Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
      byte_4C1EC66 = 1;
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
                                   v60,
                                   *(_DWORD *)(*(_QWORD *)&Instance[1].fields.fadeType + 144LL),
                                   0LL);
    if ( !byte_4C1F4DF )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v61);
      byte_4C1F4DF = 1;
    }
    v63 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v63 = TerminalPramsManager_TypeInfo;
    }
    v63->static_fields->_MapModelClearQuestId_k__BackingField = 0;
    if ( !byte_4C1F4E0 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v61);
      v63 = TerminalPramsManager_TypeInfo;
      byte_4C1F4E0 = 1;
    }
    if ( !v63->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v63);
      v63 = TerminalPramsManager_TypeInfo;
    }
    v63->static_fields->_MapModelClearPhaseCount_k__BackingField = 0;
    if ( !System_String__IsNullOrEmpty(MapModelEntryAnimationName, 0LL) )
    {
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v70 = (CommonUI_o *)Instance;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v70 )
        goto LABEL_99;
      CommonUI__maskFadein(v70, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
      v71 = this->fields.mTerminalMap;
      v72 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(
        v72,
        (Il2CppObject *)v20,
        Method_TerminalSceneComponent___c__DisplayClass201_0__FadeInAndTriggerEventEffects_b__4__,
        0LL);
      if ( !v71 )
        goto LABEL_99;
      ScrTerminalMap__PlayMapModelEntryAnimation(v71, MapModelEntryAnimationName, v72, 0LL);
    }
    else
    {
LABEL_88:
      v64 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v65 = *(float *)(v20 + 16);
      v66 = (CommonUI_o *)v64;
      v67 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(
        v67,
        (Il2CppObject *)v20,
        Method_TerminalSceneComponent___c__DisplayClass201_0__FadeInAndTriggerEventEffects_b__1__,
        0LL);
      if ( !v66 )
        goto LABEL_99;
      CommonUI__maskFadein(v66, v65, v67, 0LL);
    }
  }
  else
  {
    v68 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    v69 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      v69,
      (Il2CppObject *)v20,
      Method_TerminalSceneComponent___c__DisplayClass201_0__FadeInAndTriggerEventEffects_b__0__,
      0LL);
    if ( !v68 )
      goto LABEL_99;
    QuestAfterAction__LoadVoice((QuestAfterAction_o *)v68, v69, 0LL);
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Action_o **v23; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Action_o *v30; // x2
  Il2CppObject *v31; // x1
  struct TitleInfoControl_o *mTitleInfo; // x19
  Il2CppObject *v33; // x20
  System_Action_o *v34; // x21
  struct TitleInfoControl_o *v35; // x23
  TerminalPramsManager_c *v36; // x0
  System_Action_o *v37; // x19
  System_Action_o *v38; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C2412A & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventDetailMaster___, v7);
    sub_1C3B764(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v8);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v10);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass204_0__FadeInAndTriggerEventEffectsNext_b__0__, v11);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass204_0__FadeInAndTriggerEventEffectsNext_b__1__, v12);
    sub_1C3B764(&TerminalSceneComponent___c__DisplayClass204_0_TypeInfo, v13);
    byte_4C2412A = 1;
  }
  entity = 0LL;
  v14 = sub_1C3B9B0(TerminalSceneComponent___c__DisplayClass204_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_68;
  *(_QWORD *)(v14 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 24) = callback;
  v23 = (System_Action_o **)(v14 + 24);
  sub_1C3B708((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)callback, v24, v25, v26, v27, v28, v29);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_68;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_329AE94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
    sub_1C3B9C0(Instance, v16);
  if ( EventDetailEntity__isRaidDefeatCount((EventDetailEntity_o *)entity, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.mTitleInfo;
    if ( Instance )
    {
      TitleInfoControl__PlayEventRaidDefeatedEffect((TitleInfoControl_o *)Instance, eventId, 0, *v23, 0LL);
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
      TitleInfoControl__CheckSuperBossHpAnim((TitleInfoControl_o *)Instance, *v23, 0LL);
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
      v30 = *v23;
      v31 = entity;
LABEL_31:
      TitleInfoControl__EventTowerStart((TitleInfoControl_o *)Instance, (EventDetailEntity_o *)v31, v30, 0LL);
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
      v33 = entity;
      v34 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(
        v34,
        (Il2CppObject *)v14,
        Method_TerminalSceneComponent___c__DisplayClass204_0__FadeInAndTriggerEventEffectsNext_b__0__,
        0LL);
      if ( !mTitleInfo )
        goto LABEL_68;
      Instance = (DataManager_o *)mTitleInfo;
      v31 = v33;
      v30 = v34;
      goto LABEL_31;
    }
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_68;
  Instance = (DataManager_o *)EventDetailEntity__IsGroupPoint((EventDetailEntity_o *)entity, 0LL);
  v35 = this->fields.mTitleInfo;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v35 )
      goto LABEL_68;
    TitleInfoControl__CheckEventPointGroupReward(this->fields.mTitleInfo, eventId, *v23, 0LL);
    v36 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v36 = TerminalPramsManager_TypeInfo;
    }
    if ( v36->static_fields->joinGroupId >= 1 )
    {
      Instance = (DataManager_o *)this->fields.mTitleInfo;
      if ( !Instance )
        goto LABEL_68;
      TitleInfoControl__vsGaugeEvent((TitleInfoControl_o *)Instance, eventId, 0LL);
    }
    return;
  }
  if ( !v35 )
    goto LABEL_68;
  if ( v35->fields.needPlayDailyPointItemEffect )
  {
    v37 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      v37,
      (Il2CppObject *)v14,
      Method_TerminalSceneComponent___c__DisplayClass204_0__FadeInAndTriggerEventEffectsNext_b__1__,
      0LL);
    TitleInfoControl__UpdateDailyPointWithEffect(v35, v37, 0LL);
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
    TitleInfoControl__CheckEventPointGaugeAnim((TitleInfoControl_o *)Instance, (EventDetailEntity_o *)entity, *v23, 0LL);
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
      *v23,
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
      ScrTerminalMap__UpdateEventBoardGame((ScrTerminalMap_o *)Instance, *v23, 0LL);
      return;
    }
    v38 = *v23;
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
    v38 = *v23;
LABEL_65:
    ActionExtensions__Call(v38, 0LL);
    return;
  }
  Instance = (DataManager_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_68;
  TitleInfoControl__StartEventUIAnimation((TitleInfoControl_o *)Instance, 1, *v23, 0LL);
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

  if ( (byte_4C2411E & 1) == 0 )
  {
    sub_1C3B764(&AvalonSceneManager_TypeInfo, isExecuteUnusedAssets);
    byte_4C2411E = 1;
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
  UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, v8, 0LL);
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
  const MethodInfo *v26; // x2
  Il2CppObject *Instance; // x19
  AvalonSceneManager_c *v28; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v30; // x21

  if ( (byte_4C24122 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, end_act);
    sub_1C3B764(&AvalonSceneManager_TypeInfo, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass196_0__Fadein_MapDisp_b__0__, v9);
    sub_1C3B764(&TerminalSceneComponent___c__DisplayClass196_0_TypeInfo, v10);
    byte_4C24122 = 1;
  }
  v11 = sub_1C3B9B0(TerminalSceneComponent___c__DisplayClass196_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_10;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = end_act;
  sub_1C3B708((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)end_act, v20, v21, v22, v23, v24, v25);
  if ( this->fields._FirstFadeTime_k__BackingField > 0.0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v28 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v28 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v28->static_fields->DEFAULT_FADE_TIME;
    v30 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      v30,
      (Il2CppObject *)v11,
      Method_TerminalSceneComponent___c__DisplayClass196_0__Fadein_MapDisp_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeChangeColor((CommonUI_o *)Instance, 2, DEFAULT_FADE_TIME, v30, 0LL);
      return;
    }
LABEL_10:
    sub_1C3B9C0(v12, v13);
  }
  TerminalSceneComponent__Fadein_MapDisp_Load(this, fade_time, *(System_Action_o **)(v11 + 24), v26);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  TerminalPramsManager_c *v27; // x0
  __int64 v28; // x8
  __int64 v29; // x8
  WarEntity_o *v30; // x21
  __int64 v31; // x1
  TerminalPramsManager_c *v32; // x0
  _BOOL4 isInvisibleConnectAndLoad; // w22
  TitleInfoControl_o *mTitleInfo; // x19
  System_Action_o *v35; // x22

  if ( (byte_4C24123 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, end_act);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v8);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v9);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass197_0__Fadein_MapDisp_Load_b__0__, v10);
    sub_1C3B764(&TerminalSceneComponent___c__DisplayClass197_0_TypeInfo, v11);
    byte_4C24123 = 1;
  }
  v12 = sub_1C3B9B0(TerminalSceneComponent___c__DisplayClass197_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_32;
  *(_QWORD *)(v12 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 32) = end_act;
  *(float *)(v12 + 24) = fade_time;
  sub_1C3B708((PartyOrganizationUtility_o *)(v12 + 32), (int64_t)end_act, v21, v22, v23, v24, v25, v26);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1DCA3 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v14);
    byte_4C1DCA3 = 1;
  }
  v27 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v27 = TerminalPramsManager_TypeInfo;
  }
  if ( !v27->static_fields->_IsDispOnly_k__BackingField )
  {
    TerminalSceneComponent__EndAuto(this, v14);
    goto LABEL_22;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C1CAE3 )
  {
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v14);
    byte_4C1CAE3 = 1;
  }
  mTerminalMap = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mTerminalMap = TerminalSceneComponent_TypeInfo;
  }
  v28 = **((_QWORD **)mTerminalMap + 23);
  if ( !v28 || (v29 = *(_QWORD *)(v28 + 264)) == 0 || (mTerminalMap = *(void **)(v29 + 552)) == 0LL )
LABEL_32:
    sub_1C3B9C0(mTerminalMap, v14);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mTerminalMap, 1, 0LL);
LABEL_22:
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_32;
  v30 = (WarEntity_o *)*((_QWORD *)mTerminalMap + 45);
  ScrTerminalMap__SetDisp((ScrTerminalMap_o *)mTerminalMap, 1, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F116 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v31);
    byte_4C1F116 = 1;
  }
  v32 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v32 = TerminalPramsManager_TypeInfo;
  }
  isInvisibleConnectAndLoad = v32->static_fields->isInvisibleConnectAndLoad;
  mTerminalMap = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_32;
  CommonUI__SetLoadMode((CommonUI_o *)mTerminalMap, !isInvisibleConnectAndLoad, 0LL);
  mTitleInfo = this->fields.mTitleInfo;
  v35 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v12,
    Method_TerminalSceneComponent___c__DisplayClass197_0__Fadein_MapDisp_Load_b__0__,
    0LL);
  if ( !mTitleInfo )
    goto LABEL_32;
  TitleInfoControl__SetActiveEventInfo(mTitleInfo, v30, 32, v35, 0LL);
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
  int64_t v33; // x20
  __int64 Instance; // x0
  _BOOL8 v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t *v42; // x21
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct ScrTerminalMap_o *mTerminalMap; // x8
  int64_t mWarEnt; // x1
  int64_t v57; // x22
  struct ScrTerminalMap_o *v58; // x8
  MapEntity_o *mMapEnt; // x23
  System_String_o *ActiveStateName; // x24
  System_String_o *PrioredBgmName; // x0
  const MethodInfo *v62; // x2
  TerminalPramsManager_c *v63; // x0
  struct ScrTerminalMap_o *v64; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  TerminalPramsManager_c *v66; // x0
  __int64 v67; // x21
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  Il2CppObject **v74; // x22
  __int64 v75; // x8
  __int64 v76; // x8
  __int64 v77; // x8
  __int64 v78; // x8
  __int64 v79; // x8
  __int64 v80; // x8
  __int64 v81; // x0
  Il2CppObject *v82; // x24
  __int64 v83; // x20
  System_Action_object__o *v84; // x23
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  Il2CppObject *v91; // x23
  System_Action_object__o *v92; // x22
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  System_Action_object__o *v105; // x22
  Il2CppObject *v106; // x23
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  Il2CppObject *v114; // x24
  System_Action_object__o *v115; // x22
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  ActionChain_o *v122; // x22
  __int64 v123; // x20
  System_Action_o *v124; // x23
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  ChainableActionBase_o *v131; // x0
  System_Action_array *v132; // x1
  int32_t v133; // w21
  System_Action_o *v134; // x22
  const MethodInfo *v135; // x3
  __int64 v136; // x22
  Il2CppObject *v137; // x24
  System_Action_object__o *v138; // x23
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  System_Action_object__o *v151; // x23
  Il2CppObject *v152; // x24
  struct TerminalSceneComponent___c_StaticFields *v153; // x0
  int64_t v154; // x2
  int32_t v155; // w3
  System_String_o *v156; // x4
  BattleSetupInfo_o *v157; // x5
  FollowerInfo_o *v158; // x6
  PartyListViewItem_o *v159; // x7
  int64_t v160; // x2
  int32_t v161; // w3
  System_String_o *v162; // x4
  BattleSetupInfo_o *v163; // x5
  FollowerInfo_o *v164; // x6
  PartyListViewItem_o *v165; // x7
  System_Action_object__o *v166; // x23
  Il2CppObject *v167; // x24
  struct TerminalSceneComponent___c_StaticFields *v168; // x0
  int64_t v169; // x2
  int32_t v170; // w3
  System_String_o *v171; // x4
  BattleSetupInfo_o *v172; // x5
  FollowerInfo_o *v173; // x6
  PartyListViewItem_o *v174; // x7
  System_Action_object__o *v175; // x23
  int64_t v176; // x2
  int32_t v177; // w3
  System_String_o *v178; // x4
  BattleSetupInfo_o *v179; // x5
  FollowerInfo_o *v180; // x6
  PartyListViewItem_o *v181; // x7
  ActionChain_o *v182; // x20
  int64_t v183; // x2
  int32_t v184; // w3
  System_String_o *v185; // x4
  BattleSetupInfo_o *v186; // x5
  FollowerInfo_o *v187; // x6
  PartyListViewItem_o *v188; // x7
  System_Action_array *v189; // x22
  int64_t v190; // x1

  if ( (byte_4C24124 & 1) == 0 )
  {
    sub_1C3B764(&ActionChain_TypeInfo, end_act);
    sub_1C3B764(&System_Action___TypeInfo, v7);
    sub_1C3B764(&System_Action_Action____TypeInfo, v8);
    sub_1C3B764(&System_Action_Action__TypeInfo, v9);
    sub_1C3B764(&System_Action_TypeInfo, v10);
    sub_1C3B764(&Method_CommonUI_StartLoginMessages__, v11);
    sub_1C3B764(&Method_QuestAfterAction_Play__, v12);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1C3B764(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v14);
    sub_1C3B764(&SoundManager_TypeInfo, v15);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v16);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v17);
    sub_1C3B764(&TutorialFlag_TypeInfo, v18);
    sub_1C3B764(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__198_0__, v19);
    sub_1C3B764(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__198_1__, v20);
    sub_1C3B764(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__198_6__, v21);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass198_0__Fadein_MapDisp_Start_b__2__, v22);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass198_0__Fadein_MapDisp_Start_b__3__, v23);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass198_0__Fadein_MapDisp_Start_b__4__, v24);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass198_0__Fadein_MapDisp_Start_b__5__, v25);
    sub_1C3B764(&TerminalSceneComponent___c__DisplayClass198_0_TypeInfo, v26);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass198_1__Fadein_MapDisp_Start_b__7__, v27);
    sub_1C3B764(&TerminalSceneComponent___c__DisplayClass198_1_TypeInfo, v28);
    sub_1C3B764(&TerminalSceneComponent___c_TypeInfo, v29);
    sub_1C3B764(&StringLiteral_3443/*"CLICK_INTERRUPTION_MENU"*/, v30);
    sub_1C3B764(&StringLiteral_3442/*"CLICK_INTERRUPTION"*/, v31);
    sub_1C3B764(&StringLiteral_3444/*"CLICK_MASTER_FORMATION"*/, v32);
    byte_4C24124 = 1;
  }
  v33 = sub_1C3B9B0(TerminalSceneComponent___c__DisplayClass198_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v33, 0LL);
  if ( !v33 )
    goto LABEL_160;
  *(_QWORD *)(v33 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v33 + 16), (int64_t)this, v36, v37, v38, v39, v40, v41);
  *(_QWORD *)(v33 + 40) = end_act;
  v42 = (int64_t *)(v33 + 40);
  *(float *)(v33 + 32) = fade_time;
  sub_1C3B708((PartyOrganizationUtility_o *)(v33 + 40), (int64_t)end_act, v43, v44, v45, v46, v47, v48);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_160;
  mWarEnt = (int64_t)mTerminalMap->fields.mWarEnt;
  *(_QWORD *)(v33 + 24) = mWarEnt;
  v57 = v33 + 24;
  sub_1C3B708((PartyOrganizationUtility_o *)(v33 + 24), mWarEnt, v49, v50, v51, v52, v53, v54);
  v58 = this->fields.mTerminalMap;
  if ( !v58 )
    goto LABEL_160;
  Instance = (__int64)this->fields.mTerminalList;
  if ( !Instance )
    goto LABEL_160;
  mMapEnt = v58->fields.mMapEnt;
  Instance = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_160;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)Instance, 0LL);
  v35 = System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3442/*"CLICK_INTERRUPTION"*/, 0LL)
     || System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3443/*"CLICK_INTERRUPTION_MENU"*/, 0LL)
     || System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3444/*"CLICK_MASTER_FORMATION"*/, 0LL);
  Instance = (__int64)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_160;
  TitleInfoControl__setBackBtnSprite_38560752((TitleInfoControl_o *)Instance, v35, 0, 0, 0LL);
  Instance = (__int64)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_160;
  TitleInfoControl__FrameIn((TitleInfoControl_o *)Instance, 0, 0LL);
  MainMenuBar__FrameIn(0, 0LL);
  Instance = (__int64)this->fields.mPlayerStatus;
  if ( !Instance )
    goto LABEL_160;
  ScrPlayerStatus__FrameIn((ScrPlayerStatus_o *)Instance, 0, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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
    if ( !byte_4C1F056 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v35);
      byte_4C1F056 = 1;
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
      TerminalSceneComponent__playBgm(this, PrioredBgmName, v62);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F056 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v35);
    byte_4C1F056 = 1;
  }
  v63 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v63 = TerminalPramsManager_TypeInfo;
  }
  if ( v63->static_fields->_IsPlayScriptWithMap_k__BackingField )
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
    v63 = TerminalPramsManager_TypeInfo;
  }
  if ( !v63->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v63);
  if ( !byte_4C1DCA3 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v35);
    byte_4C1DCA3 = 1;
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
    if ( !byte_4C1F043 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v35);
      byte_4C1F043 = 1;
    }
    Instance = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( *(_BYTE *)(*(_QWORD *)(Instance + 184) + 106LL) )
    {
      v64 = this->fields.mTerminalMap;
      if ( !v64 )
        goto LABEL_160;
      Instance = (__int64)v64->fields.spotMaskObj;
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
  if ( !byte_4C1F043 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v35);
    byte_4C1F043 = 1;
  }
  v66 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v66 = TerminalPramsManager_TypeInfo;
  }
  if ( v66->static_fields->_IsScriptDisp_k__BackingField )
    goto LABEL_136;
  if ( !v66->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v66);
  if ( !byte_4C1DCA3 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v35);
    byte_4C1DCA3 = 1;
  }
  Instance = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(Instance + 184) + 103LL) )
  {
    v67 = sub_1C3B9B0(TerminalSceneComponent___c__DisplayClass198_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v67, 0LL);
    if ( v67 )
    {
      *(_QWORD *)(v67 + 24) = v33;
      v74 = (Il2CppObject **)(v67 + 24);
      sub_1C3B708((PartyOrganizationUtility_o *)(v67 + 24), v33, v68, v69, v70, v71, v72, v73);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4C1CAE3 )
      {
        sub_1C3B764(&TerminalSceneComponent_TypeInfo, v35);
        byte_4C1CAE3 = 1;
      }
      Instance = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v75 = **(_QWORD **)(Instance + 184);
      if ( v75 )
      {
        v76 = *(_QWORD *)(v75 + 264);
        if ( v76 )
        {
          Instance = *(_QWORD *)(v76 + 552);
          if ( Instance )
          {
            *(_BYTE *)(v67 + 16) = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
            Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
            if ( Instance )
            {
              QuestAfterAction__Init((QuestAfterAction_o *)Instance, 0LL);
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
              if ( Instance )
              {
                QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)Instance, 1, 0LL);
                Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                if ( Instance )
                {
                  if ( QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0LL) )
                  {
                    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    if ( !byte_4C1CAE3 )
                    {
                      sub_1C3B764(&TerminalSceneComponent_TypeInfo, v35);
                      byte_4C1CAE3 = 1;
                    }
                    Instance = (__int64)TerminalSceneComponent_TypeInfo;
                    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                      Instance = (__int64)TerminalSceneComponent_TypeInfo;
                    }
                    v77 = **(_QWORD **)(Instance + 184);
                    if ( !v77 )
                      goto LABEL_160;
                    v78 = *(_QWORD *)(v77 + 264);
                    if ( !v78 )
                      goto LABEL_160;
                    Instance = *(_QWORD *)(v78 + 552);
                    if ( !Instance )
                      goto LABEL_160;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                  }
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  if ( !byte_4C1CAE3 )
                  {
                    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v35);
                    byte_4C1CAE3 = 1;
                  }
                  Instance = (__int64)TerminalSceneComponent_TypeInfo;
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    Instance = (__int64)TerminalSceneComponent_TypeInfo;
                  }
                  v79 = **(_QWORD **)(Instance + 184);
                  if ( v79 )
                  {
                    v80 = *(_QWORD *)(v79 + 264);
                    if ( v80 )
                    {
                      Instance = *(_QWORD *)(v80 + 552);
                      if ( Instance )
                      {
                        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
                        {
                          Instance = (__int64)this->fields.mTerminalMap;
                          if ( !Instance )
                            goto LABEL_160;
                          ScrTerminalMap__AllMaskStart((ScrTerminalMap_o *)Instance, 0, 1, 0LL);
                        }
                        v81 = sub_1C3B80C(System_Action_Action____TypeInfo, 4LL);
                        v82 = *v74;
                        v83 = v81;
                        v84 = (System_Action_object__o *)sub_1C3B9B0(System_Action_Action__TypeInfo);
                        System_Action_object____ctor(
                          v84,
                          v82,
                          Method_TerminalSceneComponent___c__DisplayClass198_0__Fadein_MapDisp_Start_b__4__,
                          0LL);
                        if ( v83 )
                        {
                          if ( *(_DWORD *)(v83 + 24) )
                          {
                            *(_QWORD *)(v83 + 32) = v84;
                            sub_1C3B708(
                              (PartyOrganizationUtility_o *)(v83 + 32),
                              (int64_t)v84,
                              v85,
                              v86,
                              v87,
                              v88,
                              v89,
                              v90);
                            v91 = *v74;
                            v92 = (System_Action_object__o *)sub_1C3B9B0(System_Action_Action__TypeInfo);
                            System_Action_object____ctor(
                              v92,
                              v91,
                              Method_TerminalSceneComponent___c__DisplayClass198_0__Fadein_MapDisp_Start_b__5__,
                              0LL);
                            if ( *(_DWORD *)(v83 + 24) > 1u )
                            {
                              *(_QWORD *)(v83 + 40) = v92;
                              sub_1C3B708(
                                (PartyOrganizationUtility_o *)(v83 + 40),
                                (int64_t)v92,
                                v93,
                                v94,
                                v95,
                                v96,
                                v97,
                                v98);
                              Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
                              if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
                                Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
                              }
                              v105 = *(System_Action_object__o **)(*(_QWORD *)(Instance + 184) + 16LL);
                              if ( !v105 )
                              {
                                if ( !*(_DWORD *)(Instance + 224) )
                                {
                                  j_il2cpp_runtime_class_init_0(Instance);
                                  Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
                                }
                                v106 = **(Il2CppObject ***)(Instance + 184);
                                v105 = (System_Action_object__o *)sub_1C3B9B0(System_Action_Action__TypeInfo);
                                System_Action_object____ctor(
                                  v105,
                                  v106,
                                  Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__198_6__,
                                  0LL);
                                static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
                                static_fields->__9__198_6 = (struct System_Action_Action__o *)v105;
                                sub_1C3B708(
                                  (PartyOrganizationUtility_o *)&static_fields->__9__198_6,
                                  (int64_t)v105,
                                  v108,
                                  v109,
                                  v110,
                                  v111,
                                  v112,
                                  v113);
                              }
                              if ( *(_DWORD *)(v83 + 24) > 2u )
                              {
                                *(_QWORD *)(v83 + 48) = v105;
                                sub_1C3B708(
                                  (PartyOrganizationUtility_o *)(v83 + 48),
                                  (int64_t)v105,
                                  v99,
                                  v100,
                                  v101,
                                  v102,
                                  v103,
                                  v104);
                                v114 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                                v115 = (System_Action_object__o *)sub_1C3B9B0(System_Action_Action__TypeInfo);
                                System_Action_object____ctor(v115, v114, Method_QuestAfterAction_Play__, 0LL);
                                if ( *(_DWORD *)(v83 + 24) > 3u )
                                {
                                  *(_QWORD *)(v83 + 56) = v115;
                                  sub_1C3B708(
                                    (PartyOrganizationUtility_o *)(v83 + 56),
                                    (int64_t)v115,
                                    v116,
                                    v117,
                                    v118,
                                    v119,
                                    v120,
                                    v121);
                                  v122 = (ActionChain_o *)sub_1C3B9B0(ActionChain_TypeInfo);
                                  ActionChain___ctor_47992068(v122, (System_Action_Action__array *)v83, 0LL);
                                  v123 = sub_1C3B80C(System_Action___TypeInfo, 1LL);
                                  v124 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
                                  System_Action___ctor(
                                    v124,
                                    (Il2CppObject *)v67,
                                    Method_TerminalSceneComponent___c__DisplayClass198_1__Fadein_MapDisp_Start_b__7__,
                                    0LL);
                                  if ( !v123 )
                                    goto LABEL_160;
                                  if ( *(_DWORD *)(v123 + 24) )
                                  {
                                    *(_QWORD *)(v123 + 32) = v124;
                                    sub_1C3B708(
                                      (PartyOrganizationUtility_o *)(v123 + 32),
                                      (int64_t)v124,
                                      v125,
                                      v126,
                                      v127,
                                      v128,
                                      v129,
                                      v130);
                                    if ( !v122 )
                                      goto LABEL_160;
                                    v131 = (ChainableActionBase_o *)v122;
                                    v132 = (System_Action_array *)v123;
                                    goto LABEL_127;
                                  }
                                }
                              }
                            }
                          }
LABEL_161:
                          sub_1C3B9C8(Instance, v35);
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
    sub_1C3B9C0(Instance, v35);
  }
  if ( this->fields.mIsStart_LoginBonusWhiteBg )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    Instance = TutorialFlag__Get_39109112(102, 0LL);
    if ( (Instance & 1) != 0 && !this->fields.isTutorialAfter )
    {
      this->fields.mIsStart_LoginBonusWhiteBg = 0;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetupLoginResultData((CommonUI_o *)Instance, 0LL, 0LL);
        v136 = sub_1C3B80C(System_Action_Action____TypeInfo, 4LL);
        v137 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v138 = (System_Action_object__o *)sub_1C3B9B0(System_Action_Action__TypeInfo);
        System_Action_object____ctor(v138, v137, Method_CommonUI_StartLoginMessages__, 0LL);
        if ( v136 )
        {
          if ( !*(_DWORD *)(v136 + 24) )
            goto LABEL_161;
          *(_QWORD *)(v136 + 32) = v138;
          sub_1C3B708((PartyOrganizationUtility_o *)(v136 + 32), (int64_t)v138, v139, v140, v141, v142, v143, v144);
          Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
          if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
            Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
          }
          v151 = *(System_Action_object__o **)(*(_QWORD *)(Instance + 184) + 24LL);
          if ( !v151 )
          {
            if ( !*(_DWORD *)(Instance + 224) )
            {
              j_il2cpp_runtime_class_init_0(Instance);
              Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
            }
            v152 = **(Il2CppObject ***)(Instance + 184);
            v151 = (System_Action_object__o *)sub_1C3B9B0(System_Action_Action__TypeInfo);
            System_Action_object____ctor(
              v151,
              v152,
              Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__198_0__,
              0LL);
            v153 = TerminalSceneComponent___c_TypeInfo->static_fields;
            v153->__9__198_0 = (struct System_Action_Action__o *)v151;
            sub_1C3B708(
              (PartyOrganizationUtility_o *)&v153->__9__198_0,
              (int64_t)v151,
              v154,
              v155,
              v156,
              v157,
              v158,
              v159);
          }
          if ( *(_DWORD *)(v136 + 24) <= 1u )
            goto LABEL_161;
          *(_QWORD *)(v136 + 40) = v151;
          sub_1C3B708((PartyOrganizationUtility_o *)(v136 + 40), (int64_t)v151, v145, v146, v147, v148, v149, v150);
          Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
          if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
            Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
          }
          v166 = *(System_Action_object__o **)(*(_QWORD *)(Instance + 184) + 32LL);
          if ( !v166 )
          {
            if ( !*(_DWORD *)(Instance + 224) )
            {
              j_il2cpp_runtime_class_init_0(Instance);
              Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
            }
            v167 = **(Il2CppObject ***)(Instance + 184);
            v166 = (System_Action_object__o *)sub_1C3B9B0(System_Action_Action__TypeInfo);
            System_Action_object____ctor(
              v166,
              v167,
              Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__198_1__,
              0LL);
            v168 = TerminalSceneComponent___c_TypeInfo->static_fields;
            v168->__9__198_1 = (struct System_Action_Action__o *)v166;
            sub_1C3B708(
              (PartyOrganizationUtility_o *)&v168->__9__198_1,
              (int64_t)v166,
              v169,
              v170,
              v171,
              v172,
              v173,
              v174);
          }
          if ( *(_DWORD *)(v136 + 24) <= 2u )
            goto LABEL_161;
          *(_QWORD *)(v136 + 48) = v166;
          sub_1C3B708((PartyOrganizationUtility_o *)(v136 + 48), (int64_t)v166, v160, v161, v162, v163, v164, v165);
          v175 = (System_Action_object__o *)sub_1C3B9B0(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v175,
            (Il2CppObject *)v33,
            Method_TerminalSceneComponent___c__DisplayClass198_0__Fadein_MapDisp_Start_b__2__,
            0LL);
          if ( *(_DWORD *)(v136 + 24) <= 3u )
            goto LABEL_161;
          *(_QWORD *)(v136 + 56) = v175;
          sub_1C3B708((PartyOrganizationUtility_o *)(v136 + 56), (int64_t)v175, v176, v177, v178, v179, v180, v181);
          v182 = (ActionChain_o *)sub_1C3B9B0(ActionChain_TypeInfo);
          ActionChain___ctor_47992068(v182, (System_Action_Action__array *)v136, 0LL);
          Instance = sub_1C3B80C(System_Action___TypeInfo, 1LL);
          if ( Instance )
          {
            v189 = (System_Action_array *)Instance;
            if ( !*(_DWORD *)(Instance + 24) )
              goto LABEL_161;
            v190 = *v42;
            *(_QWORD *)(Instance + 32) = *v42;
            sub_1C3B708((PartyOrganizationUtility_o *)(Instance + 32), v190, v183, v184, v185, v186, v187, v188);
            if ( v182 )
            {
              v131 = (ChainableActionBase_o *)v182;
              v132 = v189;
LABEL_127:
              Instance = (__int64)ChainableActionBase__Final(v131, v132, 0LL);
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
  if ( !*(_QWORD *)v57 )
    goto LABEL_160;
  v133 = *(_DWORD *)(*(_QWORD *)v57 + 96LL);
  v134 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v134,
    (Il2CppObject *)v33,
    Method_TerminalSceneComponent___c__DisplayClass198_0__Fadein_MapDisp_Start_b__3__,
    0LL);
  TerminalSceneComponent__StartEventDailyPoint(this, v133, v134, v135);
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

  if ( (byte_4C2411F & 1) == 0 )
  {
    sub_1C3B764(&AvalonSceneManager_TypeInfo, end_act);
    byte_4C2411F = 1;
  }
  v6 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v6 = AvalonSceneManager_TypeInfo;
  }
  v7 = TerminalSceneComponent__coFadein_WorldDisp(this, v6->static_fields->DEFAULT_FADE_TIME, end_act, 1, v3);
  UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
}


void __fastcall TerminalSceneComponent__Fadein_WorldDisp_43723424(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  System_Collections_IEnumerator_o *v6; // x1

  v6 = TerminalSceneComponent__coFadein_WorldDisp(this, fade_time, end_act, 1, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
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
    sub_1C3B9C0(this, method);
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
        sub_1C3B9C8(this, method);
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

  if ( (byte_4C24155 & 1) == 0 )
  {
    sub_1C3B764(&string_TypeInfo, method);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v3);
    byte_4C24155 = 1;
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
    return UnityEngine_PlayerPrefs__GetString_71081024(OVERWRITE_COMMON_BG_TYPE2_KEY, 0LL);
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
    return UnityEngine_PlayerPrefs__GetString_71081024(OVERWRITE_COMMON_BG_TYPE2_KEY, 0LL);
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
  signed int max_length; // w8
  unsigned int v12; // w23
  QuestEntity_o *v13; // x21
  int32_t id; // w22
  int klass_high; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C24140 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, questEntList);
    sub_1C3B764(&Method_DataManager_GetMaster_SpotMaster___, v4);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    sub_1C3B764(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v7);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v8);
    byte_4C24140 = 1;
  }
  entity = 0LL;
  Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  if ( !BYTE3(Instance[2].fields._lookup) )
  {
    if ( !questEntList )
      goto LABEL_28;
    max_length = questEntList->max_length;
    if ( max_length >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        if ( v12 >= max_length )
          sub_1C3B9C8(Instance, v10);
        v13 = questEntList->m_Items[v12];
        if ( !v13 )
          break;
        id = v13->fields.id;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)CondType__IsQuestClear_39011304(id, -1, 0, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_SpotMaster___);
          if ( !Instance )
            break;
          Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                     Instance,
                                                                     &entity,
                                                                     v13->fields.spotId,
                                                                     (const MethodInfo_329AE94 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              break;
            klass_high = HIDWORD(entity[1].klass);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4C1EA88 )
            {
              sub_1C3B764(&TerminalPramsManager_TypeInfo, v10);
              byte_4C1EA88 = 1;
            }
            Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
            }
            if ( klass_high == HIDWORD(Instance[2].fields.list->klass) )
              return v13;
          }
        }
        max_length = questEntList->max_length;
        if ( (int)++v12 >= max_length )
          return 0LL;
      }
LABEL_28:
      sub_1C3B9C0(Instance, v10);
    }
  }
  return 0LL;
}


int32_t __fastcall TerminalSceneComponent__GetState(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_o *v2; // x19
  struct CStateManager_TerminalSceneComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_4C24143 & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_1C3B764(&Method_CStateManager_TerminalSceneComponent__getState__, method);
    byte_4C24143 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C3B9C0(this, method);
  return mFSM->fields.m_state;
}


void __fastcall TerminalSceneComponent__InitLighting(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4C24153 & 1) == 0 )
  {
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, method);
    byte_4C24153 = 1;
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

  if ( (byte_4C24128 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_MapMaster___, *(_QWORD *)&eventId);
    sub_1C3B764(&Method_DataManager_GetMasterData_WarMaster___, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4C24128 = 1;
  }
  if ( !eventId )
    return 1;
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_19;
  v8 = WarMaster__getByEventId((WarMaster_o *)Instance, eventId, 0LL);
  if ( !v8 )
    return 1;
  v9 = v8;
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_MapMaster___);
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
    sub_1C3B9C0(Instance, v7);
  }
  return 0;
}


bool __fastcall TerminalSceneComponent__IsMapActive(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalMap_o *mTerminalMap; // x8

  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap || (this = (TerminalSceneComponent_o *)mTerminalMap->fields.dispRoot) == 0LL )
    sub_1C3B9C0(this, method);
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

  if ( (byte_4C2412C & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v3);
    sub_1C3B764(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_1C3B764(&StringLiteral_9036/*"NETWORK_USER_DELETE_CANCEL"*/, v5);
    byte_4C2412C = 1;
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
      if ( (System_String__IndexOf_63400188(v8, (System_String_o *)StringLiteral_9036/*"NETWORK_USER_DELETE_CANCEL"*/, 0LL) & 0x80000000) != 0
        || MainMenuBar__get_IsEnableOutSideCollider(0LL) )
      {
        return 0;
      }
      mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !mTerminalMap )
        goto LABEL_60;
      if ( !CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)mTerminalMap, 0LL) )
      {
        mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !mTerminalMap )
          goto LABEL_60;
        if ( !CommonUI__IsActive_ApRecvDlgComp((CommonUI_o *)mTerminalMap, 0LL) )
        {
          mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !mTerminalMap )
            goto LABEL_60;
          if ( !CommonUI__IsActive_EventItemSelectDlgComp((CommonUI_o *)mTerminalMap, 0LL) )
          {
            mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !mTerminalMap )
              goto LABEL_60;
            if ( !CommonUI__IsActive_CommonConfirmDialog((CommonUI_o *)mTerminalMap, 0LL) )
            {
              mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !mTerminalMap )
                goto LABEL_60;
              if ( !CommonUI__IsActive_NotifiDialog((CommonUI_o *)mTerminalMap, 0LL) )
              {
                mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !mTerminalMap )
                  goto LABEL_60;
                if ( !CommonUI__IsActive_TutorialBigDialog((CommonUI_o *)mTerminalMap, 0LL) )
                {
                  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !mTerminalMap )
                    goto LABEL_60;
                  if ( !CommonUI__IsActive_MasterMission((CommonUI_o *)mTerminalMap, 0LL) )
                  {
                    mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( !mTerminalMap )
                      goto LABEL_60;
                    if ( !CommonUI__IsActive_MasterProfile((CommonUI_o *)mTerminalMap, 0LL) )
                    {
                      mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      if ( !mTerminalMap )
                        goto LABEL_60;
                      if ( !CommonUI__IsActive_MissionListDialog((CommonUI_o *)mTerminalMap, 0LL) )
                      {
                        mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        if ( !mTerminalMap )
                          goto LABEL_60;
                        if ( !CommonUI__IsActive_AssistEffectConfirmDialog((CommonUI_o *)mTerminalMap, 0LL) )
                        {
                          mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          if ( !mTerminalMap )
                            goto LABEL_60;
                          if ( !CommonUI__IsActive_CommandAssistConfirmDialog((CommonUI_o *)mTerminalMap, 0LL) )
                          {
                            mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            if ( !mTerminalMap )
                              goto LABEL_60;
                            if ( !CommonUI__IsActive_AchievementExchangeConditionsDialog(
                                    (CommonUI_o *)mTerminalMap,
                                    0LL) )
                            {
                              mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                              if ( !mTerminalMap )
                                goto LABEL_60;
                              if ( !CommonUI__IsActive_SvtFrameShortDialog((CommonUI_o *)mTerminalMap, 0LL) )
                              {
                                mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                                  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                                  if ( !mTerminalMap )
                                    goto LABEL_60;
                                  if ( !QuestAfterAction__IsPlaying((QuestAfterAction_o *)mTerminalMap, 0LL) )
                                  {
                                    mTerminalMap = (ScrTerminalMap_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
                                            mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                                            if ( mTerminalMap )
                                            {
                                              if ( BYTE3(mTerminalMap->fields.rootEffectP) )
                                                return 0;
                                              mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                              if ( mTerminalMap )
                                                return !CommonUI__IsActive_MessageAndScrollDetailConfirmDialog(
                                                          (CommonUI_o *)mTerminalMap,
                                                          0LL);
                                            }
LABEL_60:
                                            sub_1C3B9C0(mTerminalMap, method);
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
    sub_1C3B9C0(this, 0LL);
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

  if ( (byte_4C2413C & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, method);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v3);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v4);
    byte_4C2413C = 1;
  }
  IsWarStartAnim_k__BackingField = this->fields._IsWarStartAnim_k__BackingField;
  v6 = this->fields.mTutorialKind == 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IsWarStartActionSkip = TerminalPramsManager__get_Debug_IsWarStartActionSkip(0LL);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1EA88 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v8);
    byte_4C1EA88 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    sub_1C3B9C0(v10, v8);
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
    if ( CondType__IsQuestPhaseClear_39069888(targetId, 1, -1, 0, 0LL) )
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
  if ( !byte_4C1EA88 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v14);
    byte_4C1EA88 = 1;
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

  if ( (byte_4C24105 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_2146/*"AdManager Initialize error.(Start - Adjust) message="*/, method);
    byte_4C24105 = 1;
  }
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList
    || (mTerminalList = (ScrTerminalListTop_o *)ScrTerminalListTop__mfGetMyFsmP(mTerminalList, 0LL)) == 0LL
    || (mTerminalList = (ScrTerminalListTop_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)mTerminalList, 0LL)) == 0LL )
  {
    sub_1C3B9C0(mTerminalList, method);
  }
  return System_String__IndexOf_63400188((System_String_o *)mTerminalList, (System_String_o *)StringLiteral_2146/*"AdManager Initialize error.(Start - Adjust) message="*/, 0LL) >= 0;
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

  if ( (byte_4C24111 & 1) == 0 )
  {
    sub_1C3B764(&TerminalSceneComponent__LoadAsync_d__176_TypeInfo, usd);
    byte_4C24111 = 1;
  }
  v7 = sub_1C3B9B0(TerminalSceneComponent__LoadAsync_d__176_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = usd;
  sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)usd, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 48) = callback;
  sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)callback, v20, v21, v22, v23, v24, v25);
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
  const MethodInfo_37AC6C4 *v11; // x2
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
  if ( (byte_4C24152 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Nullable_Vector3__get_HasValue__, dialog);
    this = (TerminalSceneComponent_o *)sub_1C3B764(&Method_System_Nullable_Vector3__get_Value__, v7);
    byte_4C24152 = 1;
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
    if ( !byte_4C1C516 )
    {
      sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v10);
      byte_4C1C516 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->oneVector.fields.x;
    y = static_fields->oneVector.fields.y;
    z = static_fields->oneVector.fields.z;
  }
  this = (TerminalSceneComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL);
  if ( !this )
LABEL_13:
    sub_1C3B9C0(this, dialog);
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
    sub_1C3B9C0(0LL, method);
  ((void (__fastcall *)(struct BaseCore_o *, Il2CppMethodPointer))mEarthCore->klass->vtable._7_OnPress.method)(
    mEarthCore,
    mEarthCore->klass->vtable._8_Setup.methodPtr);
}


void __fastcall TerminalSceneComponent__OnCoreRelease(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  BaseCore_o *mEarthCore; // x0

  mEarthCore = this->fields.mEarthCore;
  if ( !mEarthCore )
    sub_1C3B9C0(0LL, method);
  BaseCore__OnRelease(mEarthCore, 0LL);
}


void __fastcall TerminalSceneComponent__OnDestroy(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  TerminalSceneComponent_c *v6; // x0
  UnityEngine_Object_o *mInstance; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  TerminalSceneComponent_c *v14; // x0
  long double v15; // q0
  __int64 v16; // x0
  __int64 v17; // x0
  UnityEngine_Object_o *v18; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_String_o *loadEarthAssetName; // x20
  const MethodInfo *v26; // x1

  if ( (byte_4C2410D & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, method);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__getInstance__, v4);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v5);
    byte_4C2410D = 1;
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
    v14 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v14 = TerminalSceneComponent_TypeInfo;
    }
    v14->static_fields->mInstance = 0LL;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)TerminalSceneComponent_TypeInfo->static_fields,
      0LL,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    v16 = *((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C8D640(v15);
    v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1C8D640(v15);
    v18 = **(UnityEngine_Object_o ***)(v17 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Implicit(v18, 0LL) )
    {
      loadEarthAssetName = this->fields.loadEarthAssetName;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage(loadEarthAssetName, 0LL);
    }
    this->fields.loadEarthAssetName = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.loadEarthAssetName, 0LL, v19, v20, v21, v22, v23, v24);
    StandFigureManager__ReleaseCharaFigure(0LL);
    TerminalSceneComponent__ReleaseAssetToResume(this, v26);
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
  System_String_o *String_71081024; // x0
  __int64 v33; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x24
  System_Func_object__int__o *v35; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Int32_array *v37; // x0
  TerminalSceneComponent___c_c *v38; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x24
  System_Func_T__TResult__o *_9__258_0; // x25
  Il2CppObject *v41; // x26
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  System_Collections_Generic_List_TSource__o *v50; // x0
  TerminalSceneComponent___c_c *v51; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x24
  System_Func_object__bool__o *_9__258_1; // x25
  Il2CppObject *v54; // x26
  struct TerminalSceneComponent___c_StaticFields *v55; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x0
  TerminalSceneComponent___c_c *v63; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x24
  System_Func_object__bool__o *_9__258_2; // x25
  Il2CppObject *v66; // x26
  struct TerminalSceneComponent___c_StaticFields *v67; // x0
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v74; // x24
  System_Func_object__bool__o *v75; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x0
  System_Collections_Generic_List_TSource__o *v77; // x0
  TerminalSceneComponent___c_c *v78; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x23
  System_Func_object__int__o *_9__258_4; // x24
  Il2CppObject *v81; // x25
  PartyOrganizationUtility_o *v82; // x0
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v89; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v90; // x23
  Il2CppObject *Instance; // x24
  System_String_o *v92; // x22
  TerminalSceneComponent___c_c *v93; // x0
  System_Func_T__TResult__o *_9__258_5; // x24
  Il2CppObject *v95; // x25
  struct TerminalSceneComponent___c_StaticFields *v96; // x0
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v103; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v104; // x25
  System_String_o *v105; // x0
  TerminalSceneComponent___c_c *v106; // x8
  System_String_o *v107; // x21
  System_Func_object__int__o *_9__258_6; // x26
  Il2CppObject *v109; // x27
  struct TerminalSceneComponent___c_StaticFields *v110; // x0
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  __int64 v117; // x2
  __int64 v118; // x3
  __int64 v119; // x4
  Il2CppObject *v120; // x0
  int32_t v123; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4C2414D & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_Select_int__ShopEntity___, playerPrefsKey);
    sub_1C3B764(&Method_System_Linq_Enumerable_Select_ShopEntity__int___, v9);
    sub_1C3B764(&Method_System_Linq_Enumerable_Select_string__int___, v10);
    sub_1C3B764(&Method_System_Linq_Enumerable_Sum_ShopEntity___, v11);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_int___, v12);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToList_ShopEntity___, v13);
    sub_1C3B764(&Method_System_Linq_Enumerable_Where_ShopEntity___, v14);
    sub_1C3B764(&System_Func_int__ShopEntity__TypeInfo, v15);
    sub_1C3B764(&System_Func_ShopEntity__int__TypeInfo, v16);
    sub_1C3B764(&System_Func_ShopEntity__bool__TypeInfo, v17);
    sub_1C3B764(&System_Func_string__int__TypeInfo, v18);
    sub_1C3B764(&Method_System_Int32_Parse__, v19);
    sub_1C3B764(&int_TypeInfo, v20);
    sub_1C3B764(&LocalizationManager_TypeInfo, v21);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v22);
    sub_1C3B764(&Method_TerminalSceneComponent__OpenExchangeDialogue_b__258_3__, v23);
    sub_1C3B764(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__258_0__, v24);
    sub_1C3B764(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__258_1__, v25);
    sub_1C3B764(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__258_2__, v26);
    sub_1C3B764(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__258_4__, v27);
    sub_1C3B764(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__258_5__, v28);
    sub_1C3B764(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__258_6__, v29);
    sub_1C3B764(&TerminalSceneComponent___c_TypeInfo, v30);
    sub_1C3B764(&StringLiteral_20011/*"img_list_not_clear_cond"*/, v31);
    byte_4C2414D = 1;
  }
  String_71081024 = UnityEngine_PlayerPrefs__GetString_71081024(playerPrefsKey, 0LL);
  if ( !String_71081024 )
    goto LABEL_34;
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_71081024, 0x2Cu, 0, 0LL);
  v35 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_string__int__TypeInfo);
  System_Func_object__int____ctor(v35, 0LL, Method_System_Int32_Parse__, 0LL);
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v34,
                                                               (System_Func_TSource__TResult__o *)v35,
                                                               (const MethodInfo_30221C0 *)Method_System_Linq_Enumerable_Select_string__int___);
  v37 = System_Linq_Enumerable__ToArray_int_(
          v36,
          (const MethodInfo_302AB30 *)Method_System_Linq_Enumerable_ToArray_int___);
  v38 = TerminalSceneComponent___c_TypeInfo;
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)v37;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v38 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__258_0 = (System_Func_T__TResult__o *)v38->static_fields->__9__258_0;
  if ( !_9__258_0 )
  {
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      v38 = TerminalSceneComponent___c_TypeInfo;
    }
    v41 = (Il2CppObject *)v38->static_fields->__9;
    _9__258_0 = (System_Func_T__TResult__o *)sub_1C3B9B0(System_Func_int__ShopEntity__TypeInfo);
    System_Func_int__object____ctor(
      _9__258_0,
      v41,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__258_0__,
      0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__258_0 = (struct System_Func_int__ShopEntity__o *)_9__258_0;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__258_0,
      (int64_t)_9__258_0,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
  }
  v49 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               v39,
                                                               (System_Func_TSource__TResult__o *)_9__258_0,
                                                               (const MethodInfo_30203C8 *)Method_System_Linq_Enumerable_Select_int__ShopEntity___);
  v50 = System_Linq_Enumerable__ToList_object_(
          v49,
          (const MethodInfo_302EAAC *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
  v51 = TerminalSceneComponent___c_TypeInfo;
  v52 = (System_Collections_Generic_IEnumerable_TSource__o *)v50;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v51 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__258_1 = (System_Func_object__bool__o *)v51->static_fields->__9__258_1;
  if ( !_9__258_1 )
  {
    if ( !v51->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v51);
      v51 = TerminalSceneComponent___c_TypeInfo;
    }
    v54 = (Il2CppObject *)v51->static_fields->__9;
    _9__258_1 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__258_1,
      v54,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__258_1__,
      0LL);
    v55 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v55->__9__258_1 = (struct System_Func_ShopEntity__bool__o *)_9__258_1;
    sub_1C3B708((PartyOrganizationUtility_o *)&v55->__9__258_1, (int64_t)_9__258_1, v56, v57, v58, v59, v60, v61);
  }
  v62 = System_Linq_Enumerable__Where_object_(
          v52,
          (System_Func_TSource__bool__o *)_9__258_1,
          (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v63 = TerminalSceneComponent___c_TypeInfo;
  v64 = v62;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v63 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__258_2 = (System_Func_object__bool__o *)v63->static_fields->__9__258_2;
  if ( !_9__258_2 )
  {
    if ( !v63->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v63);
      v63 = TerminalSceneComponent___c_TypeInfo;
    }
    v66 = (Il2CppObject *)v63->static_fields->__9;
    _9__258_2 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__258_2,
      v66,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__258_2__,
      0LL);
    v67 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v67->__9__258_2 = (struct System_Func_ShopEntity__bool__o *)_9__258_2;
    sub_1C3B708((PartyOrganizationUtility_o *)&v67->__9__258_2, (int64_t)_9__258_2, v68, v69, v70, v71, v72, v73);
  }
  v74 = System_Linq_Enumerable__Where_object_(
          v64,
          (System_Func_TSource__bool__o *)_9__258_2,
          (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v75 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_ShopEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v75,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent__OpenExchangeDialogue_b__258_3__,
    0LL);
  v76 = System_Linq_Enumerable__Where_object_(
          v74,
          (System_Func_TSource__bool__o *)v75,
          (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v77 = System_Linq_Enumerable__ToList_object_(
          v76,
          (const MethodInfo_302EAAC *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
  v78 = TerminalSceneComponent___c_TypeInfo;
  v79 = (System_Collections_Generic_IEnumerable_TSource__o *)v77;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v78 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__258_4 = (System_Func_object__int__o *)v78->static_fields->__9__258_4;
  if ( !_9__258_4 )
  {
    if ( !v78->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v78);
      v78 = TerminalSceneComponent___c_TypeInfo;
    }
    v81 = (Il2CppObject *)v78->static_fields->__9;
    _9__258_4 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_ShopEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__258_4,
      v81,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__258_4__,
      0LL);
    v82 = (PartyOrganizationUtility_o *)TerminalSceneComponent___c_TypeInfo->static_fields;
    v82[1].klass = (PartyOrganizationUtility_c *)_9__258_4;
    sub_1C3B708(v82 + 1, (int64_t)_9__258_4, v83, v84, v85, v86, v87, v88);
  }
  v89 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v79,
                                                               (System_Func_TSource__TResult__o *)_9__258_4,
                                                               (const MethodInfo_30221C0 *)Method_System_Linq_Enumerable_Select_ShopEntity__int___);
  String_71081024 = (System_String_o *)System_Linq_Enumerable__ToArray_int_(
                                         v89,
                                         (const MethodInfo_302AB30 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !String_71081024 )
    goto LABEL_34;
  v90 = (System_Collections_Generic_IEnumerable_TSource__o *)String_71081024;
  if ( String_71081024[1].klass )
  {
    if ( System_String__op_Equality(playerPrefsKey, (System_String_o *)StringLiteral_20011/*"img_list_not_clear_cond"*/, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v92 = LocalizationManager__Get(localizationKeyForTitle, 0LL);
      String_71081024 = LocalizationManager__Get(localizationKeyForDetail, 0LL);
      if ( !Instance )
        goto LABEL_34;
      goto LABEL_51;
    }
    v93 = TerminalSceneComponent___c_TypeInfo;
    if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v93 = TerminalSceneComponent___c_TypeInfo;
    }
    _9__258_5 = (System_Func_T__TResult__o *)v93->static_fields->__9__258_5;
    if ( !_9__258_5 )
    {
      if ( !v93->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v93);
        v93 = TerminalSceneComponent___c_TypeInfo;
      }
      v95 = (Il2CppObject *)v93->static_fields->__9;
      _9__258_5 = (System_Func_T__TResult__o *)sub_1C3B9B0(System_Func_int__ShopEntity__TypeInfo);
      System_Func_int__object____ctor(
        _9__258_5,
        v95,
        Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__258_5__,
        0LL);
      v96 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v96->__9__258_5 = (struct System_Func_int__ShopEntity__o *)_9__258_5;
      sub_1C3B708((PartyOrganizationUtility_o *)&v96->__9__258_5, (int64_t)_9__258_5, v97, v98, v99, v100, v101, v102);
    }
    v103 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                  v90,
                                                                  (System_Func_TSource__TResult__o *)_9__258_5,
                                                                  (const MethodInfo_30203C8 *)Method_System_Linq_Enumerable_Select_int__ShopEntity___);
    v104 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v103,
                                                                  (const MethodInfo_302EAAC *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v92 = LocalizationManager__Get(localizationKeyForTitle, 0LL);
    v105 = LocalizationManager__Get(localizationKeyForDetail, 0LL);
    v106 = TerminalSceneComponent___c_TypeInfo;
    v107 = v105;
    if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v106 = TerminalSceneComponent___c_TypeInfo;
    }
    _9__258_6 = (System_Func_object__int__o *)v106->static_fields->__9__258_6;
    if ( !_9__258_6 )
    {
      if ( !v106->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v106);
        v106 = TerminalSceneComponent___c_TypeInfo;
      }
      v109 = (Il2CppObject *)v106->static_fields->__9;
      _9__258_6 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_ShopEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__258_6,
        v109,
        Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__258_6__,
        0LL);
      v110 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v110->__9__258_6 = (struct System_Func_ShopEntity__int__o *)_9__258_6;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&v110->__9__258_6,
        (int64_t)_9__258_6,
        v111,
        v112,
        v113,
        v114,
        v115,
        v116);
    }
    v123 = System_Linq_Enumerable__Sum_object_(
             v104,
             (System_Func_TSource__int__o *)_9__258_6,
             (const MethodInfo_3029848 *)Method_System_Linq_Enumerable_Sum_ShopEntity___);
    v120 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v123, v117, v118, v119);
    String_71081024 = System_String__Format(v107, v120, 0LL);
    if ( Instance )
    {
LABEL_51:
      CommonUI__OpenAchievementExchangeConditionsDialog(
        (CommonUI_o *)Instance,
        (System_Int32_array *)v90,
        v92,
        String_71081024,
        action,
        0LL);
      goto LABEL_52;
    }
LABEL_34:
    sub_1C3B9C0(String_71081024, v33);
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  TerminalSceneComponent_o *QuestEntityListByType; // x0
  const MethodInfo *v31; // x2
  QuestEntity_o *PlayAutoExecuteQuestEntity; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  QuestMaster_o *v39; // x23
  int32_t v40; // w24
  TerminalPramsManager_c *v41; // x0
  int32_t list_high; // w23
  NetworkManager_ResultCallbackFunc_o *v43; // x19
  Il2CppObject *Request_object; // x19
  int32_t items_high; // w21
  bool HasFlag; // w0
  ScrTerminalListTop_o *mTerminalList; // x22
  bool v48; // w23
  TerminalPramsManager_c *v49; // x0
  int32_t QuestId_k__BackingField; // w19
  int32_t PhaseCnt_k__BackingField; // w23
  System_Action_o *v52; // x20
  int32_t klass_high; // w21
  int32_t v54; // w23

  if ( (byte_4C2413F & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestMaster___, v3);
    sub_1C3B764(&DataManager_TypeInfo, v4);
    sub_1C3B764(&Method_NetworkManager_getRequest_BattleSetupScenarioRequest___, v5);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v8);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v9);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v10);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass228_0__PlayAutoExecuteQuest_b__0__, v11);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass228_0__PlayAutoExecuteQuest_b__1__, v12);
    sub_1C3B764(&TerminalSceneComponent___c__DisplayClass228_0_TypeInfo, v13);
    byte_4C2413F = 1;
  }
  v14 = sub_1C3B9B0(TerminalSceneComponent___c__DisplayClass228_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_71;
  *(_QWORD *)(v14 + 24) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 16) = 0LL;
  v23 = v14 + 16;
  sub_1C3B708((PartyOrganizationUtility_o *)(v14 + 16), 0LL, v24, v25, v26, v27, v28, v29);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_71;
  QuestEntityListByType = (TerminalSceneComponent_o *)QuestMaster__GetQuestEntityListByType(Master_object, 8, 0LL);
  if ( QuestEntityListByType )
  {
    PlayAutoExecuteQuestEntity = TerminalSceneComponent__GetPlayAutoExecuteQuestEntity(
                                   QuestEntityListByType,
                                   (QuestEntity_array *)QuestEntityListByType,
                                   v31);
    *(_QWORD *)v23 = PlayAutoExecuteQuestEntity;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)(v14 + 16),
      (int64_t)PlayAutoExecuteQuestEntity,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    if ( *(_QWORD *)v23 )
    {
      Master_object = (QuestMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !*(_QWORD *)v23 )
        goto LABEL_71;
      if ( !Master_object )
        goto LABEL_71;
      Master_object = (QuestMaster_o *)QuestTree__GetQuestInfo(
                                         (QuestTree_o *)Master_object,
                                         *(_DWORD *)(*(_QWORD *)v23 + 16LL),
                                         0LL);
      if ( !Master_object )
        goto LABEL_71;
      v39 = Master_object;
      if ( Master_object->fields.revision == 1 )
      {
        if ( !*(_QWORD *)v23 )
          goto LABEL_71;
        v40 = *(_DWORD *)(*(_QWORD *)v23 + 16LL);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C1EA89 )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, v16);
          byte_4C1EA89 = 1;
        }
        v41 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v41 = TerminalPramsManager_TypeInfo;
        }
        v41->static_fields->_QuestId_k__BackingField = v40;
        list_high = HIDWORD(v39->fields.list);
        if ( !byte_4C1EA8D )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, v16);
          v41 = TerminalPramsManager_TypeInfo;
          byte_4C1EA8D = 1;
        }
        if ( !v41->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v41);
          v41 = TerminalPramsManager_TypeInfo;
        }
        v41->static_fields->_PhaseCnt_k__BackingField = list_high;
        Master_object = *(QuestMaster_o **)v23;
        if ( !*(_QWORD *)v23 )
          goto LABEL_71;
        if ( QuestEntity__HasFlag((QuestEntity_o *)Master_object, 2LL, 0LL) )
        {
          Master_object = (QuestMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
          if ( Master_object )
          {
            BYTE3(Master_object[2].fields._lookup) = 1;
            v43 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
            NetworkManager_ResultCallbackFunc___ctor(
              v43,
              (Il2CppObject *)v14,
              Method_TerminalSceneComponent___c__DisplayClass228_0__PlayAutoExecuteQuest_b__1__,
              0LL);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Request_object = NetworkManager__getRequest_object_(
                               v43,
                               (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4C1CBC4 )
            {
              sub_1C3B764(&TerminalPramsManager_TypeInfo, v16);
              byte_4C1CBC4 = 1;
            }
            Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
            }
            items_high = HIDWORD(Master_object[2].fields.list->fields.items);
            if ( !byte_4C1CBC3 )
            {
              sub_1C3B764(&TerminalPramsManager_TypeInfo, v16);
              Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
              byte_4C1CBC3 = 1;
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
          sub_1C3B9C0(Master_object, v16);
        }
        Master_object = *(QuestMaster_o **)v23;
        if ( !*(_QWORD *)v23 )
          goto LABEL_71;
        HasFlag = QuestEntity__HasFlag((QuestEntity_o *)Master_object, 0x400000LL, 0LL);
        mTerminalList = this->fields.mTerminalList;
        v48 = HasFlag;
        if ( TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          if ( HasFlag )
          {
LABEL_45:
            if ( !byte_4C1CBC4 )
            {
              sub_1C3B764(&TerminalPramsManager_TypeInfo, v16);
              byte_4C1CBC4 = 1;
            }
            v49 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v49 = TerminalPramsManager_TypeInfo;
            }
            QuestId_k__BackingField = v49->static_fields->_QuestId_k__BackingField;
            if ( !byte_4C1CBC3 )
            {
              sub_1C3B764(&TerminalPramsManager_TypeInfo, v16);
              v49 = TerminalPramsManager_TypeInfo;
              byte_4C1CBC3 = 1;
            }
            if ( !v49->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v49);
              v49 = TerminalPramsManager_TypeInfo;
            }
            PhaseCnt_k__BackingField = v49->static_fields->_PhaseCnt_k__BackingField;
            v52 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
            System_Action___ctor(
              v52,
              (Il2CppObject *)v14,
              Method_TerminalSceneComponent___c__DisplayClass228_0__PlayAutoExecuteQuest_b__0__,
              0LL);
            if ( !mTerminalList )
              goto LABEL_71;
            ScrTerminalListTop__StartQuestBeforeAction(
              mTerminalList,
              QuestId_k__BackingField,
              PhaseCnt_k__BackingField + 1,
              v52,
              0LL);
            return;
          }
        }
        else
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( v48 )
            goto LABEL_45;
        }
        if ( !byte_4C1EA88 )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, v16);
          byte_4C1EA88 = 1;
        }
        Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
        }
        klass_high = HIDWORD(Master_object[2].fields.list->klass);
        if ( !byte_4C1CBC4 )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, v16);
          Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
          byte_4C1CBC4 = 1;
        }
        if ( !LODWORD(Master_object[3].monitor) )
        {
          j_il2cpp_runtime_class_init_0(Master_object);
          Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
        }
        v54 = HIDWORD(Master_object[2].fields.list->fields.items);
        if ( !byte_4C1CBC3 )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, v16);
          Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
          byte_4C1CBC3 = 1;
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
          v54,
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  Il2CppObject *Instance; // x20
  WarEntity_o *v20; // x20
  int32_t StartType; // w0
  __int64 v22; // x1
  BattleScriptRootComponent_TalkScriptInfo_o *v23; // x21
  TerminalPramsManager_c *v24; // x0
  int32_t v25; // w22
  TerminalPramsManager_c *v26; // x0
  int32_t targetId; // w22
  int32_t WarId_k__BackingField; // w23
  TerminalPramsManager_c *v29; // x0
  BalanceConfig_c *v30; // x8
  int32_t v31; // w22
  TerminalSceneComponent_c *v32; // x0
  __int64 v33; // x1
  int64_t v34; // x22
  TerminalPramsManager_c *v35; // x0
  int32_t v36; // w22
  TerminalPramsManager_c *v37; // x0

  if ( (byte_4C2413E & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, end_act);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_1C3B764(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v7);
    sub_1C3B764(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, v8);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v9);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v10);
    byte_4C2413E = 1;
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
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.OnResumeFromChapterStart,
    (int64_t)end_act,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1EA88 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v12);
    byte_4C1EA88 = 1;
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
  v20 = IsPlayChapterStart;
  StartType = WarEntity__GetStartType(IsPlayChapterStart, 0LL);
  if ( StartType == 2 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1EA88 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v22);
      byte_4C1EA88 = 1;
    }
    v26 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v26 = TerminalPramsManager_TypeInfo;
    }
    targetId = v20->fields.targetId;
    WarId_k__BackingField = v26->static_fields->_WarId_k__BackingField;
    v23 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_1C3B9B0(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    BattleScriptRootComponent_TalkScriptInfo___ctor_46032204(v23, WarId_k__BackingField, targetId, 0, 1, 0, 0, 0, 0LL);
  }
  else
  {
    v23 = 0LL;
    if ( StartType == 1 )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C1EA88 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v22);
        byte_4C1EA88 = 1;
      }
      v24 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v24 = TerminalPramsManager_TypeInfo;
      }
      v25 = v24->static_fields->_WarId_k__BackingField;
      v23 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_1C3B9B0(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
      BattleScriptRootComponent_TalkScriptInfo___ctor_46032204(v23, v25, 0, 0, 1, 0, 0, 0, 0LL);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1EA88 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v22);
    byte_4C1EA88 = 1;
  }
  v29 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v30 = BalanceConfig_TypeInfo;
  v31 = v29->static_fields->_WarId_k__BackingField;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v30 = BalanceConfig_TypeInfo;
  }
  if ( v31 == v30->static_fields->OrdealCallWarId )
  {
    v32 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v32 = TerminalSceneComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v32->static_fields->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY, 1, 0LL);
  }
  if ( WarEntity__HasFlag(v20, 0x8000, 0LL) )
  {
    v34 = v20->fields.targetId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1EA89 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v33);
      byte_4C1EA89 = 1;
    }
    v35 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v35 = TerminalPramsManager_TypeInfo;
    }
    v35->static_fields->_QuestId_k__BackingField = v34;
    v36 = v20->fields.targetId;
    if ( !byte_4C1ECD9 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v33);
      v35 = TerminalPramsManager_TypeInfo;
      byte_4C1ECD9 = 1;
    }
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = TerminalPramsManager_TypeInfo;
    }
    v35->static_fields->_LastPlayedQuestId_k__BackingField = v36;
    TerminalPramsManager__CheckClearSelectedStoryQuestId(v20->fields.targetId, 0LL);
    TerminalPramsManager__PlayQuestSave_SaveData(0LL);
    IsPlayChapterStart = (WarEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( IsPlayChapterStart )
    {
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)IsPlayChapterStart, 0LL);
      IsPlayChapterStart = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( IsPlayChapterStart )
      {
        AvalonSceneManager__changeScene((AvalonSceneManager_o *)IsPlayChapterStart, 38, 2, (Il2CppObject *)v23, 0LL);
        return;
      }
    }
LABEL_64:
    sub_1C3B9C0(IsPlayChapterStart, v12);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1ECD3 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v33);
    byte_4C1ECD3 = 1;
  }
  v37 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v37 = TerminalPramsManager_TypeInfo;
  }
  v37->static_fields->meSceneStatus = 3;
  IsPlayChapterStart = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !IsPlayChapterStart )
    goto LABEL_64;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)IsPlayChapterStart, 38, 2, (Il2CppObject *)v23, 0LL);
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
  __int64 v23; // x1
  TerminalPramsManager_c *v24; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  int32_t v26; // w21
  System_Action_o *v27; // x22
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct MapControl_MapInfo_o *mMapInfo; // x8

  if ( (byte_4C24141 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, callbackAfter);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v5);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass233_0__PlayEventTutorial_b__0__, v6);
    sub_1C3B764(&TerminalSceneComponent___c__DisplayClass233_0_TypeInfo, v7);
    byte_4C24141 = 1;
  }
  v8 = sub_1C3B9B0(TerminalSceneComponent___c__DisplayClass233_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_16;
  *(_QWORD *)(v8 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 24) = callbackAfter;
  sub_1C3B708((PartyOrganizationUtility_o *)(v8 + 24), (int64_t)callbackAfter, v17, v18, v19, v20, v21, v22);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1EA88 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v23);
    byte_4C1EA88 = 1;
  }
  v24 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
  }
  EventID = (UnityEngine_Component_o *)WarMaster__getEventID(v24->static_fields->_WarId_k__BackingField, 0LL);
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_16;
  v26 = (int)EventID;
  EventID = (UnityEngine_Component_o *)mTerminalList->fields.mActionBgColl;
  if ( !EventID
    || (EventID = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(EventID, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EventID, 1, 0LL),
        v27 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo),
        System_Action___ctor(
          v27,
          (Il2CppObject *)v8,
          Method_TerminalSceneComponent___c__DisplayClass233_0__PlayEventTutorial_b__0__,
          0LL),
        (mTerminalMap = this->fields.mTerminalMap) == 0LL)
    || (mMapInfo = mTerminalMap->fields.mMapInfo) == 0LL )
  {
LABEL_16:
    sub_1C3B9C0(EventID, v10);
  }
  EventTutorialMaster__CheckTutorial(v26, 1, v27, mMapInfo->fields.mapId, 0, 0, 0, 0LL);
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

  if ( (byte_4C24142 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, callback);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v5);
    byte_4C24142 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  if ( QuestAfterAction__IsPlaying((QuestAfterAction_o *)Instance, 0LL) )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1EA88 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v8);
    byte_4C1EA88 = 1;
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
    sub_1C3B9C0(Instance, v7);
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
    sub_1C3B9C0(mQuestInformation, method);
  return QuestInformationComponent__isListBuilding(mQuestInformation, 0LL);
}


int32_t __fastcall TerminalSceneComponent__QuestInfoShowing(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct QuestInformationComponent_o *mQuestInformation; // x8

  mQuestInformation = this->fields.mQuestInformation;
  if ( !mQuestInformation )
    sub_1C3B9C0(this, method);
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
  ErrorDialog_ClickDelegate_o *_9__215_0; // x22
  Il2CppObject *v15; // x23
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4C24135 & 1) == 0 )
  {
    sub_1C3B764(&ErrorDialog_ClickDelegate_TypeInfo, method);
    sub_1C3B764(&LocalizationManager_TypeInfo, v2);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C3B764(&Method_TerminalSceneComponent___c__RebootToNetworkError_b__215_0__, v4);
    sub_1C3B764(&TerminalSceneComponent___c_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_13574/*"The _stream member is not CloseEx hence the risk of connection been orphaned."*/, v6);
    sub_1C3B764(&StringLiteral_13573/*"The XmlReader state should be Interactive."*/, v7);
    byte_4C24135 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_13574/*"The _stream member is not CloseEx hence the risk of connection been orphaned."*/, 0LL);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_13573/*"The XmlReader state should be Interactive."*/, 0LL);
  v12 = TerminalSceneComponent___c_TypeInfo;
  v13 = v10;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v12 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__215_0 = v12->static_fields->__9__215_0;
  if ( !_9__215_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = TerminalSceneComponent___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__215_0 = (ErrorDialog_ClickDelegate_o *)sub_1C3B9B0(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(
      _9__215_0,
      v15,
      Method_TerminalSceneComponent___c__RebootToNetworkError_b__215_0__,
      0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__215_0 = _9__215_0;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__215_0,
      (int64_t)_9__215_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !Instance )
    sub_1C3B9C0(v10, v11);
  CommonUI__OpenErrorDialog((CommonUI_o *)Instance, v9, v13, _9__215_0, 1, 0LL);
}


void __fastcall TerminalSceneComponent__ReleaseAssetToResume(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTerminalList; // x20
  TitleInfoControl_o *v4; // x0
  __int64 v5; // x1
  struct ScrTerminalListTop_o *v6; // x8
  UnityEngine_Object_o *mQuestBoardListViewManager; // x20
  UnityEngine_Object_o *mTitleInfo; // x20

  if ( (byte_4C24118 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C24118 = 1;
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
    sub_1C3B9C0(v4, v5);
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

  if ( (byte_4C24147 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, campaignDirectBonus);
    byte_4C24147 = 1;
  }
  if ( campaignDirectBonus )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F4E4 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, campaignDirectBonus);
      byte_4C1F4E4 = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v9->static_fields;
    static_fields->_CampaignDirectBonus_k__BackingField = campaignDirectBonus;
    sub_1C3B708(
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
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20
  struct TerminalSceneComponent_PlayChapterStartCallback_o *v7; // x8
  PartyOrganizationUtility_o *p_OnResumeFromChapterStart; // x19
  struct TerminalSceneComponent_PlayChapterStartCallback_o *OnResumeFromChapterStart; // t1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4C24112 & 1) == 0 )
  {
    sub_1C3B764(&AvalonSceneManager_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4C24112 = 1;
  }
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
  if ( this->fields.isFadeInAfterResumeLoad )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v6 )
      sub_1C3B9C0(Instance, v5);
    CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
    this->fields.isFadeInAfterResumeLoad = 0;
  }
  OnResumeFromChapterStart = this->fields.OnResumeFromChapterStart;
  p_OnResumeFromChapterStart = (PartyOrganizationUtility_o *)&this->fields.OnResumeFromChapterStart;
  v7 = OnResumeFromChapterStart;
  if ( OnResumeFromChapterStart )
  {
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v7->fields.m_target)(
      v7->fields.original_method_info,
      1LL,
      *(_QWORD *)&v7->fields.extra_arg);
    p_OnResumeFromChapterStart->klass = 0LL;
    sub_1C3B708(p_OnResumeFromChapterStart, 0LL, v10, v11, v12, v13, v14, v15);
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
    sub_1C3B9C0(this, isEnable);
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

  if ( (byte_4C24154 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, isActive);
    sub_1C3B764(&StringLiteral_5417/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_MESSAGE"*/, v5);
    byte_4C24154 = 1;
  }
  GameObjectWithLog = (UnityEngine_Object_o *)GameObjectExtensions__FindGameObjectWithLog(
                                                this->fields.mEarthCoreObj,
                                                (System_String_o *)StringLiteral_5417/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_MESSAGE"*/,
                                                0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality(GameObjectWithLog, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !GameObjectWithLog )
      sub_1C3B9C0(v7, v8);
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

  if ( (byte_4C2411D & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, isDisp);
    byte_4C2411D = 1;
  }
  mTerminalServant = (UnityEngine_Component_o *)this->fields.mTerminalServant;
  if ( !mTerminalServant
    || (gameObject = UnityEngine_Component__get_gameObject(mTerminalServant, 0LL),
        (mTerminalServant = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL)) == 0LL)
    || (mTerminalServant = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mTerminalServant, 0LL)) == 0LL
    || (mTerminalServant = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        (UnityEngine_GameObject_o *)mTerminalServant,
                                                        (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___)) == 0LL )
  {
    sub_1C3B9C0(mTerminalServant, isDisp);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  UnityEngine_Object_o *mEarthCore; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v29; // x0
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  TerminalSceneComponent_c *v33; // x0
  int *v34; // x1
  System_String_o *EARTH_ASSET_NAME; // x21
  System_Int32_c *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  TerminalSceneComponent_c *v39; // x0
  Il2CppObject *v40; // x0
  struct System_String_o *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  Il2CppObject *Instance; // x0
  System_String_o *loadEarthAssetName; // x19
  AssetManager_o *v50; // x21
  AssetLoader_LoadEndDataHandler_o *v51; // x22
  int v52; // [xsp+8h] [xbp-38h] BYREF
  int v53; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C2410F & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, callback);
    sub_1C3B764(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v6);
    sub_1C3B764(&ServantCommentManager_TypeInfo, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v8);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v9);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass173_0__SetEarthView_b__0__, v10);
    sub_1C3B764(&TerminalSceneComponent___c__DisplayClass173_0_TypeInfo, v11);
    byte_4C2410F = 1;
  }
  v12 = sub_1C3B9B0(TerminalSceneComponent___c__DisplayClass173_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_30;
  *(_QWORD *)(v12 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = callback;
  sub_1C3B708((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)callback, v21, v22, v23, v24, v25, v26);
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
              v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0LL);
              GameObjectExtensions__SetLocalPositionZ(v29, -792.87, 0LL);
              v33 = TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                v33 = TerminalSceneComponent_TypeInfo;
              }
              v34 = &v53;
              EARTH_ASSET_NAME = v33->static_fields->EARTH_ASSET_NAME;
              v36 = int_TypeInfo;
              v53 = 2;
              goto LABEL_28;
            }
          }
        }
      }
    }
LABEL_30:
    sub_1C3B9C0(mEarthEffCamera, v14);
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
  v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0LL);
  GameObjectExtensions__SetLocalPositionZ(v37, -50000.0, 0LL);
  mEarthEffCamera = this->fields.mEarthEffCamera;
  if ( !mEarthEffCamera )
    goto LABEL_30;
  v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0LL);
  GameObjectExtensions__SetLocalPositionZ(v38, -50000.0, 0LL);
  v39 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v39 = TerminalSceneComponent_TypeInfo;
  }
  v34 = &v52;
  EARTH_ASSET_NAME = v39->static_fields->EARTH_ASSET_NAME;
  v36 = int_TypeInfo;
  v52 = 1;
LABEL_28:
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(v36, v34, v30, v31, v32);
  v41 = System_String__Format(EARTH_ASSET_NAME, v40, 0LL);
  this->fields.loadEarthAssetName = v41;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.loadEarthAssetName,
    (int64_t)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  loadEarthAssetName = this->fields.loadEarthAssetName;
  v50 = (AssetManager_o *)Instance;
  v51 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3B9B0(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v51,
    (Il2CppObject *)v12,
    Method_TerminalSceneComponent___c__DisplayClass173_0__SetEarthView_b__0__,
    0LL);
  if ( !v50 )
    goto LABEL_30;
  AssetManager__LoadAssetStorage(v50, loadEarthAssetName, v51, 1, 0LL);
}


void __fastcall TerminalSceneComponent__SetQuestBoardInfoOff(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x0
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList || (mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager) == 0LL )
    sub_1C3B9C0(mTerminalList, method);
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
    sub_1C3B9C0(0LL, method);
  QuestInformationComponent__SetResetReady(mQuestInformation, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent__SetState(
        TerminalSceneComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4C24144 & 1) == 0 )
  {
    sub_1C3B764(&Method_CStateManager_TerminalSceneComponent__setState__, *(_QWORD *)&state);
    byte_4C24144 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C3B9C0(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_3225C7C *)Method_CStateManager_TerminalSceneComponent__setState__);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  StandFigureSlideComponent_o *mTerminalServant; // x22
  System_Action_o *v28; // x23
  struct StandFigureSlideComponent_o *v29; // x19
  System_Action_o *v30; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  if ( (byte_4C2411C & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, usd);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass189_0__SetupStandServant_b__0__, v9);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass189_0__SetupStandServant_b__1__, v10);
    sub_1C3B764(&TerminalSceneComponent___c__DisplayClass189_0_TypeInfo, v11);
    byte_4C2411C = 1;
  }
  v12 = sub_1C3B9B0(TerminalSceneComponent___c__DisplayClass189_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_7;
  *(_BYTE *)(v12 + 16) = isSlideIn;
  *(_QWORD *)(v12 + 24) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 32) = endAction;
  sub_1C3B708((PartyOrganizationUtility_o *)(v12 + 32), (int64_t)endAction, v21, v22, v23, v24, v25, v26);
  mTerminalServant = this->fields.mTerminalServant;
  v28 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v12,
    Method_TerminalSceneComponent___c__DisplayClass189_0__SetupStandServant_b__0__,
    0LL);
  if ( !mTerminalServant
    || (StandFigureSlideComponent__Setup(mTerminalServant, usd, 0, v28, 0LL),
        v29 = this->fields.mTerminalServant,
        v30 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo),
        System_Action___ctor(
          v30,
          (Il2CppObject *)v12,
          Method_TerminalSceneComponent___c__DisplayClass189_0__SetupStandServant_b__1__,
          0LL),
        !v29) )
  {
LABEL_7:
    sub_1C3B9C0(v13, v14);
  }
  v29->fields.mBtnAct = v30;
  sub_1C3B708((PartyOrganizationUtility_o *)&v29->fields.mBtnAct, (int64_t)v30, v31, v32, v33, v34, v35, v36);
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
    sub_1C3B708(
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Action_object__o *v33; // x20
  Il2CppObject *v34; // x21
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_Action_object__o *v48; // x20
  Il2CppObject *v49; // x21
  struct TerminalSceneComponent___c_StaticFields *v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  System_Action_object__o *v63; // x20
  Il2CppObject *v64; // x21
  struct TerminalSceneComponent___c_StaticFields *v65; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  ActionChain_o *v72; // x20

  if ( (byte_4C24126 & 1) == 0 )
  {
    sub_1C3B764(&ActionChain_TypeInfo, callbackFunc);
    sub_1C3B764(&System_Action_Action____TypeInfo, v5);
    sub_1C3B764(&System_Action_Action__TypeInfo, v6);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v7);
    sub_1C3B764(&Method_TerminalSceneComponent__StartWindowMessage_b__200_0__, v8);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v9);
    sub_1C3B764(&Method_TerminalSceneComponent___c__StartWindowMessage_b__200_1__, v10);
    sub_1C3B764(&Method_TerminalSceneComponent___c__StartWindowMessage_b__200_2__, v11);
    sub_1C3B764(&Method_TerminalSceneComponent___c__StartWindowMessage_b__200_3__, v12);
    sub_1C3B764(&TerminalSceneComponent___c_TypeInfo, v13);
    byte_4C24126 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1DCA3 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, callbackFunc);
    byte_4C1DCA3 = 1;
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
    if ( !byte_4C241AF )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, callbackFunc);
      byte_4C241AF = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    if ( !System_String__IsNullOrEmpty(v15->static_fields->_QuestWindowMessage_k__BackingField, 0LL) )
    {
      v19 = sub_1C3B80C(System_Action_Action____TypeInfo, 4LL);
      v20 = (System_Action_object__o *)sub_1C3B9B0(System_Action_Action__TypeInfo);
      System_Action_object____ctor(
        v20,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent__StartWindowMessage_b__200_0__,
        0LL);
      if ( v19 )
      {
        if ( !*(_DWORD *)(v19 + 24) )
          goto LABEL_55;
        *(_QWORD *)(v19 + 32) = v20;
        sub_1C3B708((PartyOrganizationUtility_o *)(v19 + 32), (int64_t)v20, v21, v22, v23, v24, v25, v26);
        v16 = TerminalSceneComponent___c_TypeInfo;
        if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
          v16 = TerminalSceneComponent___c_TypeInfo;
        }
        v33 = *(System_Action_object__o **)(*((_QWORD *)v16 + 23) + 40LL);
        if ( !v33 )
        {
          if ( !*((_DWORD *)v16 + 56) )
          {
            j_il2cpp_runtime_class_init_0(v16);
            v16 = TerminalSceneComponent___c_TypeInfo;
          }
          v34 = (Il2CppObject *)**((_QWORD **)v16 + 23);
          v33 = (System_Action_object__o *)sub_1C3B9B0(System_Action_Action__TypeInfo);
          System_Action_object____ctor(v33, v34, Method_TerminalSceneComponent___c__StartWindowMessage_b__200_1__, 0LL);
          static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
          static_fields->__9__200_1 = (struct System_Action_Action__o *)v33;
          sub_1C3B708(
            (PartyOrganizationUtility_o *)&static_fields->__9__200_1,
            (int64_t)v33,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41);
        }
        if ( *(_DWORD *)(v19 + 24) <= 1u )
          goto LABEL_55;
        *(_QWORD *)(v19 + 40) = v33;
        sub_1C3B708((PartyOrganizationUtility_o *)(v19 + 40), (int64_t)v33, v27, v28, v29, v30, v31, v32);
        v16 = TerminalSceneComponent___c_TypeInfo;
        if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
          v16 = TerminalSceneComponent___c_TypeInfo;
        }
        v48 = *(System_Action_object__o **)(*((_QWORD *)v16 + 23) + 48LL);
        if ( !v48 )
        {
          if ( !*((_DWORD *)v16 + 56) )
          {
            j_il2cpp_runtime_class_init_0(v16);
            v16 = TerminalSceneComponent___c_TypeInfo;
          }
          v49 = (Il2CppObject *)**((_QWORD **)v16 + 23);
          v48 = (System_Action_object__o *)sub_1C3B9B0(System_Action_Action__TypeInfo);
          System_Action_object____ctor(v48, v49, Method_TerminalSceneComponent___c__StartWindowMessage_b__200_2__, 0LL);
          v50 = TerminalSceneComponent___c_TypeInfo->static_fields;
          v50->__9__200_2 = (struct System_Action_Action__o *)v48;
          sub_1C3B708((PartyOrganizationUtility_o *)&v50->__9__200_2, (int64_t)v48, v51, v52, v53, v54, v55, v56);
        }
        if ( *(_DWORD *)(v19 + 24) <= 2u )
          goto LABEL_55;
        *(_QWORD *)(v19 + 48) = v48;
        sub_1C3B708((PartyOrganizationUtility_o *)(v19 + 48), (int64_t)v48, v42, v43, v44, v45, v46, v47);
        v16 = TerminalSceneComponent___c_TypeInfo;
        if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
          v16 = TerminalSceneComponent___c_TypeInfo;
        }
        v63 = *(System_Action_object__o **)(*((_QWORD *)v16 + 23) + 56LL);
        if ( !v63 )
        {
          if ( !*((_DWORD *)v16 + 56) )
          {
            j_il2cpp_runtime_class_init_0(v16);
            v16 = TerminalSceneComponent___c_TypeInfo;
          }
          v64 = (Il2CppObject *)**((_QWORD **)v16 + 23);
          v63 = (System_Action_object__o *)sub_1C3B9B0(System_Action_Action__TypeInfo);
          System_Action_object____ctor(v63, v64, Method_TerminalSceneComponent___c__StartWindowMessage_b__200_3__, 0LL);
          v65 = TerminalSceneComponent___c_TypeInfo->static_fields;
          v65->__9__200_3 = (struct System_Action_Action__o *)v63;
          sub_1C3B708((PartyOrganizationUtility_o *)&v65->__9__200_3, (int64_t)v63, v66, v67, v68, v69, v70, v71);
        }
        if ( *(_DWORD *)(v19 + 24) <= 3u )
LABEL_55:
          sub_1C3B9C8(v16, callbackFunc);
        *(_QWORD *)(v19 + 56) = v63;
        sub_1C3B708((PartyOrganizationUtility_o *)(v19 + 56), (int64_t)v63, v57, v58, v59, v60, v61, v62);
        v72 = (ActionChain_o *)sub_1C3B9B0(ActionChain_TypeInfo);
        ActionChain___ctor_47992068(v72, (System_Action_Action__array *)v19, 0LL);
        if ( v72 )
        {
          ChainableActionBase__Execute((ChainableActionBase_o *)v72, 0LL);
          return;
        }
      }
LABEL_54:
      sub_1C3B9C0(v16, callbackFunc);
    }
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C1CAE3 )
  {
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, callbackFunc);
    byte_4C1CAE3 = 1;
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

  if ( (byte_4C24129 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_1C3B764(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4C24129 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_329AE94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
    sub_1C3B9C0(Instance, v10);
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

  if ( (byte_4C2412B & 1) == 0 )
  {
    sub_1C3B764(&Method_CStateManager_TerminalSceneComponent__update__, method);
    sub_1C3B764(&CTouch_TypeInfo, v3);
    byte_4C2412B = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_3225C58 *)Method_CStateManager_TerminalSceneComponent__update__);
  mTerminalMap = this->fields.mTerminalMap;
  IsMapTouchEnabled = TerminalSceneComponent__IsMapTouchEnabled(this, v4);
  if ( !mTerminalMap )
    sub_1C3B9C0(IsMapTouchEnabled, v8);
  ScrTerminalMap__ProcessMapCamera(mTerminalMap, IsMapTouchEnabled, 0LL);
}


void __fastcall TerminalSceneComponent__UpdateCompleteMissionIconUI(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  ScrPlayerStatus_o *mPlayerStatus; // x0

  mPlayerStatus = this->fields.mPlayerStatus;
  if ( !mPlayerStatus )
    sub_1C3B9C0(0LL, method);
  ScrPlayerStatus__UpdateCompleteMissionIconUI(mPlayerStatus, 0LL);
}


void __fastcall TerminalSceneComponent__UpdateQuestBoardList(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x8

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList || (this = (TerminalSceneComponent_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0LL )
    sub_1C3B9C0(this, method);
  QuestBoardListViewManager__SetupDisp((QuestBoardListViewManager_o *)this, 0LL);
}


void __fastcall TerminalSceneComponent__UpdateTitleEventInfo(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *mTitleInfo; // x0

  mTitleInfo = this->fields.mTitleInfo;
  if ( !mTitleInfo )
    sub_1C3B9C0(0LL, method);
  TitleInfoControl__UpdateEventItemInfo(mTitleInfo, 0LL);
}


System_Collections_IEnumerator_o *__fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4C24120 & 1) == 0 )
  {
    sub_1C3B764(&TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__194_TypeInfo, method);
    byte_4C24120 = 1;
  }
  v2 = sub_1C3B9B0(TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__194_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0LL);
  *(_DWORD *)(v2 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v2;
}


bool __fastcall TerminalSceneComponent___CoWaitBlankEarthActionEnd_b__255_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *mTerminalList; // x0

  if ( (byte_4C2415D & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4C2415D = 1;
  }
  mTerminalList = (CommonUI_o *)this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_9;
  if ( !ScrTerminalListTop__IsBlankEarthAction((ScrTerminalListTop_o *)mTerminalList, 0LL) )
  {
    mTerminalList = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( mTerminalList )
      return !CommonUI__IsActive_NotifiDialog(mTerminalList, 0LL);
LABEL_9:
    sub_1C3B9C0(mTerminalList, method);
  }
  return 0;
}


bool __fastcall TerminalSceneComponent___CoWaitTerminalTopEffectEnd_b__254_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *mTerminalList; // x0

  if ( (byte_4C2415C & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4C2415C = 1;
  }
  mTerminalList = (CommonUI_o *)this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_9;
  if ( ScrTerminalListTop__CheckTerminalTopEffect((ScrTerminalListTop_o *)mTerminalList, 0LL) <= 0 )
  {
    mTerminalList = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( mTerminalList )
      return !CommonUI__IsActive_NotifiDialog(mTerminalList, 0LL);
LABEL_9:
    sub_1C3B9C0(mTerminalList, method);
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
    sub_1C3B9C0(this, action);
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
  if ( (byte_4C24158 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, gotNewServant);
    sub_1C3B764(&Method_DataManager_GetMaster_EventRaidMaster___, v5);
    sub_1C3B764(&DataManager_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v8);
    sub_1C3B764(&Method_TerminalSceneComponent__beginInitialize_b__172_3__, v9);
    this = (TerminalSceneComponent_o *)sub_1C3B764(&Method_TerminalSceneComponent__beginInitialize_b__172_4__, v10);
    byte_4C24158 = 1;
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
    this = (TerminalSceneComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventRaidMaster___);
    v14 = v4->fields.mTerminalMap;
    if ( !v14 )
      goto LABEL_30;
    mWarEnt = v14->fields.mWarEnt;
    if ( !mWarEnt || !this )
      goto LABEL_30;
    if ( EventRaidMaster__GetRaidGorupMax((EventRaidMaster_o *)this, mWarEnt->fields.eventId, 0LL) >= 1 )
    {
      v16 = v4->fields.mTerminalMap;
      v17 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
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
        v19 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
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
    sub_1C3B9C0(this, gotNewServant);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1CCCA )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, gotNewServant);
    byte_4C1CCCA = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_IsAutoResume_k__BackingField = 1;
  this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    sub_1C3B9C0(mPlayerStatus, method);
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

  if ( (byte_4C2415A & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4C2415A = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL),
        (Instance = (AvalonSceneManager_o *)this->fields.mEarthCore) == 0LL)
    || (mTerminalMap = this->fields.mTerminalMap,
        Instance = (AvalonSceneManager_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)Instance,
                                             0LL),
        !mTerminalMap) )
  {
    sub_1C3B9C0(Instance, v4);
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

  if ( (byte_4C24159 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v3);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v4);
    sub_1C3B764(&Method_TerminalSceneComponent__beginInitialize_b__172_5__, v5);
    byte_4C24159 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1EA88 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v6);
    byte_4C1EA88 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v8->static_fields->_WarId_k__BackingField;
  v10 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__172_5__, 0LL);
  if ( !Instance )
    sub_1C3B9C0(v11, v12);
  v13 = QuestTree__mfBaseTreeUpdateWithOpenCheck((QuestTree_o *)Instance, WarId_k__BackingField, v10, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, v13, 0LL);
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
    sub_1C3B9C0(this, method);
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
    sub_1C3B9C0(mTerminalList, method);
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
  if ( (byte_4C2415B & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_1C3B764(&StringLiteral_5636/*"EV_GIFT_PROC_FIN"*/, method);
    byte_4C2415B = 1;
  }
  TerminalSceneComponent__deleteQuestMovie(this, method);
  myFSM = v2->fields.myFSM;
  if ( !myFSM )
    sub_1C3B9C0(0LL, v3);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_5636/*"EV_GIFT_PROC_FIN"*/, 0LL);
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
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  struct UnityEngine_Camera_o *mUICamera; // x20
  CTouch_c *v50; // x0
  struct CTouch_StaticFields *static_fields; // x0
  struct CStateManager_TerminalSceneComponent__o **p_mFSM; // x20
  CStateManager_T__o *v53; // x21
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  CStateManager_T__o *mFSM; // x21
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
  CStateManager_T__o *v72; // x21
  Il2CppObject *v73; // x22
  CStateManager_T__o *v74; // x21
  Il2CppObject *v75; // x22
  CStateManager_T__o *v76; // x21
  Il2CppObject *v77; // x22
  CStateManager_T__o *v78; // x21
  Il2CppObject *v79; // x22
  CStateManager_T__o *v80; // x20
  Il2CppObject *v81; // x21
  const MethodInfo *v82; // x2
  ScrPlayerStatus_o *mPlayerStatus; // x20
  System_Func_bool__bool__o *v84; // x21
  struct ScrPlayerStatus_o *v85; // x21
  System_Action_o *v86; // x20
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  struct ScrTerminalMap_o *mTerminalMap; // x8
  System_Action_o *v94; // x20
  const MethodInfo *v95; // x2

  if ( (byte_4C2410E & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&AndroidUtil_TypeInfo, v3);
    sub_1C3B764(&BalanceConfig_TypeInfo, v4);
    sub_1C3B764(&Method_CStateManager_TerminalSceneComponent___ctor__, v5);
    sub_1C3B764(&Method_CStateManager_TerminalSceneComponent__add__, v6);
    sub_1C3B764(&CStateManager_TerminalSceneComponent__TypeInfo, v7);
    sub_1C3B764(&CTouch_TypeInfo, v8);
    sub_1C3B764(&System_Func_bool__bool__TypeInfo, v9);
    sub_1C3B764(&ServantProfileEventJoinManager_TypeInfo, v10);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v12);
    sub_1C3B764(&TerminalSceneComponent_StateNormal_TypeInfo, v13);
    sub_1C3B764(&TerminalSceneComponent_StateTutorial1_QuestArrow_TypeInfo, v14);
    sub_1C3B764(&TerminalSceneComponent_StateTutorial1_SpotArrow_TypeInfo, v15);
    sub_1C3B764(&TerminalSceneComponent_StateTutorial2_QuestArrow_TypeInfo, v16);
    sub_1C3B764(&TerminalSceneComponent_StateTutorial2_SpotArrow_TypeInfo, v17);
    sub_1C3B764(&TerminalSceneComponent_StateTutorial3_GachaArrow_TypeInfo, v18);
    sub_1C3B764(&TerminalSceneComponent_StateTutorial3_MenuArrow_TypeInfo, v19);
    sub_1C3B764(&TerminalSceneComponent_StateTutorial4_QuestArrow_TypeInfo, v20);
    sub_1C3B764(&TerminalSceneComponent_StateTutorial4_SpotArrow_TypeInfo, v21);
    sub_1C3B764(&TerminalSceneComponent_StateTutorial5_CombineArrow_TypeInfo, v22);
    sub_1C3B764(&TerminalSceneComponent_StateTutorial5_MenuArrow_TypeInfo, v23);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v24);
    sub_1C3B764(&Method_TerminalSceneComponent__beginInitialize_b__172_0__, v25);
    sub_1C3B764(&Method_TerminalSceneComponent__beginInitialize_b__172_1__, v26);
    sub_1C3B764(&Method_TerminalSceneComponent__beginInitialize_b__172_2__, v27);
    sub_1C3B764(&StringLiteral_1/*""*/, v28);
    byte_4C2410E = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  AndroidUtil__DeleteOldSaveData(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__Load_SaveData(0LL);
  if ( !byte_4C1EA90 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v29);
    byte_4C1EA90 = 1;
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
    if ( !byte_4C1EA8B )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v29);
      byte_4C1EA8B = 1;
    }
    v31 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v31 = TerminalPramsManager_TypeInfo;
    }
    v31->static_fields->_DispState_k__BackingField = 0;
    if ( !byte_4C1EDF6 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v29);
      v31 = TerminalPramsManager_TypeInfo;
      byte_4C1EDF6 = 1;
    }
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = TerminalPramsManager_TypeInfo;
    }
    v31->static_fields->_SelectedStoryQuestId_k__BackingField = 0;
    TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(0LL);
    if ( !byte_4C1DEB2 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v32);
      byte_4C1DEB2 = 1;
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
  Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  if ( QuestAfterAction__CheckChangeBlankEarth(Instance, 0LL) )
    goto LABEL_39;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C241A8 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v37);
    byte_4C241A8 = 1;
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
    if ( !byte_4C1ECD7 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v37);
      byte_4C1ECD7 = 1;
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
  if ( !byte_4C1ECD3 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v37);
    byte_4C1ECD3 = 1;
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
  if ( !byte_4C1FD38 )
  {
    sub_1C3B764(&CTouch_TypeInfo, v42);
    byte_4C1FD38 = 1;
  }
  v50 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v50 = CTouch_TypeInfo;
  }
  static_fields = v50->static_fields;
  static_fields->mScreenCam = mUICamera;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->mScreenCam,
    (int64_t)mUICamera,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v53 = (CStateManager_T__o *)sub_1C3B9B0(CStateManager_TerminalSceneComponent__TypeInfo);
    CStateManager_object____ctor(
      v53,
      (Il2CppObject *)this,
      11,
      (const MethodInfo_3225B48 *)Method_CStateManager_TerminalSceneComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_TerminalSceneComponent__o *)v53;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v53, v54, v55, v56, v57, v58, v59);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v61 = (Il2CppObject *)sub_1C3B9B0(TerminalSceneComponent_StateNormal_TypeInfo);
    System_Object___ctor(v61, 0LL);
    if ( mFSM )
    {
      CStateManager_object___add(
        mFSM,
        0,
        (IState_T__o *)v61,
        (const MethodInfo_3225BF0 *)Method_CStateManager_TerminalSceneComponent__add__);
      v62 = (CStateManager_T__o *)*p_mFSM;
      v63 = (Il2CppObject *)sub_1C3B9B0(TerminalSceneComponent_StateTutorial1_SpotArrow_TypeInfo);
      System_Object___ctor(v63, 0LL);
      if ( v62 )
      {
        CStateManager_object___add(
          v62,
          1,
          (IState_T__o *)v63,
          (const MethodInfo_3225BF0 *)Method_CStateManager_TerminalSceneComponent__add__);
        v64 = (CStateManager_T__o *)*p_mFSM;
        v65 = (Il2CppObject *)sub_1C3B9B0(TerminalSceneComponent_StateTutorial1_QuestArrow_TypeInfo);
        System_Object___ctor(v65, 0LL);
        if ( v64 )
        {
          CStateManager_object___add(
            v64,
            2,
            (IState_T__o *)v65,
            (const MethodInfo_3225BF0 *)Method_CStateManager_TerminalSceneComponent__add__);
          v66 = (CStateManager_T__o *)*p_mFSM;
          v67 = (Il2CppObject *)sub_1C3B9B0(TerminalSceneComponent_StateTutorial2_SpotArrow_TypeInfo);
          System_Object___ctor(v67, 0LL);
          if ( v66 )
          {
            CStateManager_object___add(
              v66,
              3,
              (IState_T__o *)v67,
              (const MethodInfo_3225BF0 *)Method_CStateManager_TerminalSceneComponent__add__);
            v68 = (CStateManager_T__o *)*p_mFSM;
            v69 = (Il2CppObject *)sub_1C3B9B0(TerminalSceneComponent_StateTutorial2_QuestArrow_TypeInfo);
            System_Object___ctor(v69, 0LL);
            if ( v68 )
            {
              CStateManager_object___add(
                v68,
                4,
                (IState_T__o *)v69,
                (const MethodInfo_3225BF0 *)Method_CStateManager_TerminalSceneComponent__add__);
              v70 = (CStateManager_T__o *)*p_mFSM;
              v71 = (Il2CppObject *)sub_1C3B9B0(TerminalSceneComponent_StateTutorial3_MenuArrow_TypeInfo);
              System_Object___ctor(v71, 0LL);
              if ( v70 )
              {
                CStateManager_object___add(
                  v70,
                  5,
                  (IState_T__o *)v71,
                  (const MethodInfo_3225BF0 *)Method_CStateManager_TerminalSceneComponent__add__);
                v72 = (CStateManager_T__o *)*p_mFSM;
                v73 = (Il2CppObject *)sub_1C3B9B0(TerminalSceneComponent_StateTutorial3_GachaArrow_TypeInfo);
                System_Object___ctor(v73, 0LL);
                if ( v72 )
                {
                  CStateManager_object___add(
                    v72,
                    6,
                    (IState_T__o *)v73,
                    (const MethodInfo_3225BF0 *)Method_CStateManager_TerminalSceneComponent__add__);
                  v74 = (CStateManager_T__o *)*p_mFSM;
                  v75 = (Il2CppObject *)sub_1C3B9B0(TerminalSceneComponent_StateTutorial4_SpotArrow_TypeInfo);
                  System_Object___ctor(v75, 0LL);
                  if ( v74 )
                  {
                    CStateManager_object___add(
                      v74,
                      7,
                      (IState_T__o *)v75,
                      (const MethodInfo_3225BF0 *)Method_CStateManager_TerminalSceneComponent__add__);
                    v76 = (CStateManager_T__o *)*p_mFSM;
                    v77 = (Il2CppObject *)sub_1C3B9B0(TerminalSceneComponent_StateTutorial4_QuestArrow_TypeInfo);
                    System_Object___ctor(v77, 0LL);
                    if ( v76 )
                    {
                      CStateManager_object___add(
                        v76,
                        8,
                        (IState_T__o *)v77,
                        (const MethodInfo_3225BF0 *)Method_CStateManager_TerminalSceneComponent__add__);
                      v78 = (CStateManager_T__o *)*p_mFSM;
                      v79 = (Il2CppObject *)sub_1C3B9B0(TerminalSceneComponent_StateTutorial5_MenuArrow_TypeInfo);
                      System_Object___ctor(v79, 0LL);
                      if ( v78 )
                      {
                        CStateManager_object___add(
                          v78,
                          9,
                          (IState_T__o *)v79,
                          (const MethodInfo_3225BF0 *)Method_CStateManager_TerminalSceneComponent__add__);
                        v80 = (CStateManager_T__o *)*p_mFSM;
                        v81 = (Il2CppObject *)sub_1C3B9B0(TerminalSceneComponent_StateTutorial5_CombineArrow_TypeInfo);
                        System_Object___ctor(v81, 0LL);
                        if ( v80 )
                        {
                          CStateManager_object___add(
                            v80,
                            10,
                            (IState_T__o *)v81,
                            (const MethodInfo_3225BF0 *)Method_CStateManager_TerminalSceneComponent__add__);
                          TerminalSceneComponent__SetState(this, 0, v82);
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
    sub_1C3B9C0(Instance, v35);
  }
LABEL_73:
  Instance = (QuestAfterAction_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_88;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Instance, 0LL, 1, (System_String_o *)StringLiteral_1/*""*/, 1, 0LL);
  Instance = (QuestAfterAction_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_88;
  TitleInfoControl__changeTitleInfo_38564436((TitleInfoControl_o *)Instance, 1, 1, 0, 0LL);
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
  v84 = (System_Func_bool__bool__o *)sub_1C3B9B0(System_Func_bool__bool__TypeInfo);
  System_Func_bool__bool____ctor(
    v84,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent__beginInitialize_b__172_0__,
    0LL);
  if ( !mPlayerStatus )
    goto LABEL_88;
  ScrPlayerStatus__SetCloseGiftAct(mPlayerStatus, v84, 0LL);
  v85 = this->fields.mPlayerStatus;
  v86 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v86, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__172_1__, 0LL);
  if ( !v85 )
    goto LABEL_88;
  v85->fields.mRecoverAct = v86;
  sub_1C3B708((PartyOrganizationUtility_o *)&v85->fields.mRecoverAct, (int64_t)v86, v87, v88, v89, v90, v91, v92);
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
  v94 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v94, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__172_2__, 0LL);
  TerminalSceneComponent__SetEarthView(this, v94, v95);
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  ServantProfileEventJoinManager__UpdateProfileServantEventJoin(0LL);
}


void __fastcall TerminalSceneComponent__beginPause(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4C2411A & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4C2411A = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v4);
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

  if ( (byte_4C24119 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1C3B764(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1C3B764(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v6);
    byte_4C24119 = 1;
  }
  entity = 0LL;
  this->fields.isFadeInAfterResumeLoad = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  if ( !byte_4C1F041 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v8);
    byte_4C1F041 = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Instance )
        goto LABEL_43;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             &entity,
             eventId,
             (const MethodInfo_329AE94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      {
        Instance = entity;
        if ( entity )
        {
          IsEventPeriod = EventEntity__IsEventPeriod((EventEntity_o *)entity, 0LL, 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( IsEventPeriod )
          {
            if ( byte_4C1ECD3 )
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
            sub_1C3B764(&TerminalPramsManager_TypeInfo, v8);
            byte_4C1ECD3 = 1;
            goto LABEL_32;
          }
          if ( !byte_4C1ECD3 )
          {
            sub_1C3B764(&TerminalPramsManager_TypeInfo, v8);
            byte_4C1ECD3 = 1;
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
        sub_1C3B9C0(Instance, v8);
      }
      v13 = TerminalPramsManager_TypeInfo;
    }
    if ( !v13->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v13);
    if ( byte_4C1ECD3 )
      goto LABEL_32;
    goto LABEL_31;
  }
LABEL_35:
  this->fields.quitType = 1;
  SceneRootComponent__beginResume_40100528((SceneRootComponent_o *)this, 0LL);
}


void __fastcall TerminalSceneComponent__beginStartUp(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(TerminalSceneComponent_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_beginStartUp.method)(
    this,
    0LL,
    this->klass->vtable._6_beginStartUp.methodPtr);
}


void __fastcall TerminalSceneComponent__beginStartUp_43718396(
        TerminalSceneComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 methodPtr_low; // x10
  Il2CppObject *v20; // x1
  TerminalSceneComponent_c *v21; // x0
  const MethodInfo *v22; // x2
  __int64 v23; // x1
  TerminalPramsManager_c *v24; // x0
  TerminalPramsManager_c *v25; // x0
  Il2CppObject *Instance; // x0
  const MethodInfo *v27; // x1
  Il2CppObject *MasterData_object; // x20
  struct UserServantEntity_array *UserServantListFromDeckIsTerminal; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct UserServantEntity_array *mStandSvtDatas; // x8
  __int64 mStandSvtIdx; // x9
  UserServantEntity_o *NextStandServant; // x20
  bool isSavedMemoryMode; // w22
  System_Action_o *v40; // x0
  System_Action_o *v41; // x21
  const MethodInfo *v42; // x4
  const MethodInfo *v43; // x3
  System_Collections_IEnumerator_o *Async; // x1

  if ( (byte_4C24110 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, data);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserDeckMaster___, v10);
    sub_1C3B764(&OptionManager_TypeInfo, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v13);
    sub_1C3B764(&Method_TerminalSceneComponent_SendMessageStartUpAndResume__, v14);
    sub_1C3B764(&Method_TerminalSceneComponent__beginStartUp_b__175_0__, v15);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v16);
    sub_1C3B764(&TerminalTransitionInfo_TypeInfo, v17);
    sub_1C3B764(&TutorialFlag_TypeInfo, v18);
    byte_4C24110 = 1;
  }
  if ( data
    && (methodPtr_low = LOBYTE(TerminalTransitionInfo_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (TerminalTransitionInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == TerminalTransitionInfo_TypeInfo )
      v20 = data;
    else
      v20 = 0LL;
  }
  else
  {
    v20 = 0LL;
  }
  this->fields._TransitionInfo_k__BackingField = (struct TerminalTransitionInfo_o *)v20;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._TransitionInfo_k__BackingField,
    (int64_t)v20,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v21 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v21 = TerminalSceneComponent_TypeInfo;
  }
  UnityEngine_RenderSettings__set_ambientLight(v21->static_fields->DEFAULT_AMBIENT_LIGHT_COLOR, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 1, 32, 0LL);
  MainMenuBar__setMenuActive(1, this->fields.mUICamera, 0LL);
  TerminalSceneComponent__SetDispStandServant(this, 1, v22);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C241A9 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v23);
    byte_4C241A9 = 1;
  }
  v24 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
  }
  if ( !v24->static_fields->_IsDispDone_UIStandFigure_k__BackingField )
  {
    if ( !v24->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v24);
    if ( !byte_4C241AA )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v23);
      byte_4C241AA = 1;
    }
    v25 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v25 = TerminalPramsManager_TypeInfo;
    }
    v25->static_fields->_IsDispDone_UIStandFigure_k__BackingField = 1;
    if ( !byte_4C241AB )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v23);
      v25 = TerminalPramsManager_TypeInfo;
      byte_4C241AB = 1;
    }
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = TerminalPramsManager_TypeInfo;
    }
    v25->static_fields->_IsDispUIStandFigure_k__BackingField = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Instance = (Il2CppObject *)TutorialFlag__Get_39109112(126, 0LL);
  if ( !MasterData_object
    || (((unsigned __int8)Instance & 1) == 0
      ? (UserServantListFromDeckIsTerminal = UserDeckMaster__GetUserServantListFromDeckIsTerminal(
                                               (UserDeckMaster_o *)MasterData_object,
                                               0LL))
      : (UserServantListFromDeckIsTerminal = UserDeckMaster__GetUserServantListFromDeckReaveHeroine(
                                               (UserDeckMaster_o *)MasterData_object,
                                               0LL)),
        this->fields.mStandSvtDatas = UserServantListFromDeckIsTerminal,
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&this->fields.mStandSvtDatas,
          (int64_t)UserServantListFromDeckIsTerminal,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35),
        (mStandSvtDatas = this->fields.mStandSvtDatas) == 0LL) )
  {
LABEL_45:
    sub_1C3B9C0(Instance, v27);
  }
  mStandSvtIdx = this->fields.mStandSvtIdx;
  if ( (unsigned int)mStandSvtIdx >= mStandSvtDatas->max_length )
    sub_1C3B9C8(Instance, v27);
  NextStandServant = mStandSvtDatas->m_Items[mStandSvtIdx];
  if ( !NextStandServant )
    NextStandServant = TerminalSceneComponent__GetNextStandServant(this, v27);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  isSavedMemoryMode = OptionManager__isSavedMemoryMode(0LL);
  v40 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  v41 = v40;
  if ( isSavedMemoryMode )
  {
    System_Action___ctor(v40, (Il2CppObject *)this, Method_TerminalSceneComponent__beginStartUp_b__175_0__, 0LL);
    TerminalSceneComponent__SetupStandServant(this, NextStandServant, 0, v41, v42);
  }
  else
  {
    System_Action___ctor(v40, (Il2CppObject *)this, Method_TerminalSceneComponent_SendMessageStartUpAndResume__, 0LL);
    Async = TerminalSceneComponent__LoadAsync(this, NextStandServant, v41, v43);
    UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, Async, 0LL);
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  Il2CppObject *v26; // x21
  TerminalPramsManager_c *v27; // x0
  PartyOrganizationUtility_o *p_eventDailyPoint_k__BackingField; // x0
  int32_t monitor_high; // w21
  TerminalPramsManager_c *v30; // x0
  __int64 v31; // x1
  int64_t Time_39986252; // x21
  TerminalPramsManager_c *v33; // x0
  int32_t eventId; // w21
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct ScrTerminalListTop_o *v36; // x8
  UnityEngine_GameObject_o *mActionPanel; // x21
  TitleInfoControl_o *mTitleInfo; // x20
  System_Action_o *v39; // x22
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  System_DateTime_o v41; // 0:x0.8

  v4 = this;
  if ( (byte_4C24139 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, result);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventDetailMaster___, v5);
    sub_1C3B764(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_1C3B764(&Method_JsonManager_Deserialize_EventDailyPoint___, v7);
    sub_1C3B764(&JsonManager_TypeInfo, v8);
    sub_1C3B764(&NetworkManager_TypeInfo, v9);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1C3B764(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v11);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v12);
    sub_1C3B764(&Method_TerminalSceneComponent__callbackEventDailyPoint_b__220_0__, v13);
    sub_1C3B764(&StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v14);
    sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, v15);
    this = (TerminalSceneComponent_o *)sub_1C3B764(&StringLiteral_25660, v16);
    byte_4C24139 = 1;
  }
  entity = 0LL;
  if ( !result )
    goto LABEL_46;
  if ( System_String__Equals_63376928(result, (System_String_o *)StringLiteral_22507/*"referrerMapId"*/, 0LL) )
  {
    this = (TerminalSceneComponent_o *)v4->fields.myFSM;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, 0LL);
      return;
    }
LABEL_46:
    sub_1C3B9C0(this, result);
  }
  this = (TerminalSceneComponent_o *)System_String__Equals_63376928(result, (System_String_o *)StringLiteral_25660, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_43;
  mTerminalMap = v4->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_46;
  mWarEnt = mTerminalMap->fields.mWarEnt;
  this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_46;
  this = (TerminalSceneComponent_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !mWarEnt || !this )
    goto LABEL_46;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          mWarEnt->fields.eventId,
          (const MethodInfo_329AE94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
LABEL_43:
    this = (TerminalSceneComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !this )
      goto LABEL_46;
    MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0LL);
    ActionExtensions__Call(v4->fields.afterEventDailyPoint, 0LL);
  }
  else
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v26 = JsonManager__Deserialize_object_(
            (Il2CppObject *)result,
            (const MethodInfo_3058B98 *)Method_JsonManager_Deserialize_EventDailyPoint___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C20BC6 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v19);
      byte_4C20BC6 = 1;
    }
    v27 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v27 = TerminalPramsManager_TypeInfo;
    }
    p_eventDailyPoint_k__BackingField = (PartyOrganizationUtility_o *)&v27->static_fields->_eventDailyPoint_k__BackingField;
    p_eventDailyPoint_k__BackingField->klass = (PartyOrganizationUtility_c *)v26;
    sub_1C3B708(p_eventDailyPoint_k__BackingField, (int64_t)v26, v20, v21, v22, v23, v24, v25);
    if ( !entity )
      goto LABEL_46;
    monitor_high = HIDWORD(entity[2].monitor);
    if ( !byte_4C241B0 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, result);
      byte_4C241B0 = 1;
    }
    v30 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v30 = TerminalPramsManager_TypeInfo;
    }
    v30->static_fields->_EventDailyPointItem_k__BackingField = monitor_high;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v41.fields._dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
    Time_39986252 = NetworkManager__getTime_39986252(v41, 0LL);
    if ( !byte_4C1F4D9 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v31);
      byte_4C1F4D9 = 1;
    }
    v33 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v33 = TerminalPramsManager_TypeInfo;
    }
    v33->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = Time_39986252;
    eventId = mWarEnt->fields.eventId;
    if ( !byte_4C1F4D8 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v31);
      v33 = TerminalPramsManager_TypeInfo;
      byte_4C1F4D8 = 1;
    }
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v33 = TerminalPramsManager_TypeInfo;
    }
    v33->static_fields->_EventDailyPointEventId_k__BackingField = eventId;
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
    v36 = v4->fields.mTerminalList;
    if ( !v36 )
      goto LABEL_46;
    mActionPanel = v36->fields.mActionPanel;
    mTitleInfo = v4->fields.mTitleInfo;
    v39 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      v39,
      (Il2CppObject *)v4,
      Method_TerminalSceneComponent__callbackEventDailyPoint_b__220_0__,
      0LL);
    if ( !mTitleInfo )
      goto LABEL_46;
    TitleInfoControl__EventDailyPointOpen(mTitleInfo, mActionPanel, v39, 0LL);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4C24134 & 1) == 0 )
  {
    sub_1C3B764(&Method_JsonManager_Deserialize_TopHomeInfo___, result);
    sub_1C3B764(&JsonManager_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_11289/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/, v6);
    sub_1C3B764(&StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v7);
    sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, v8);
    byte_4C24134 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22507/*"referrerMapId"*/, 0LL) )
  {
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, 0LL);
      return;
    }
LABEL_11:
    sub_1C3B9C0(myFSM, v9);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = JsonManager__Deserialize_object_(
            (Il2CppObject *)result,
            (const MethodInfo_3058B98 *)Method_JsonManager_Deserialize_TopHomeInfo___);
  if ( !myFSM )
    goto LABEL_11;
  TopHomeRequest__setRecentRefreshTime(*((_QWORD *)myFSM + 2), 0LL);
  MainMenuBar__UpdateNoticeNumber(0LL);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)StringLiteral_11289/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/, 0LL);
  afterTopLogin = this->fields.afterTopLogin;
  this->fields.isTopLoginBusy = 0;
  ActionExtensions__Call(afterTopLogin, 0LL);
  this->fields.afterTopLogin = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.afterTopLogin, 0LL, v12, v13, v14, v15, v16, v17);
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
  System_Converter_TInput__TOutput__o *_9__213_0; // x21
  Il2CppObject *v31; // x22
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_String_array *v39; // x0
  System_String_o *v40; // x0
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x0
  System_Collections_Generic_List_int__o *v42; // x19
  TerminalSceneComponent___c_c *v43; // x8
  System_Converter_TInput__TOutput__o *_9__213_1; // x20
  Il2CppObject *v45; // x21
  struct TerminalSceneComponent___c_StaticFields *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_String_array *v53; // x0
  System_String_o *v54; // x0

  if ( (byte_4C24133 & 1) == 0 )
  {
    sub_1C3B764(&System_Converter_int__string__TypeInfo, result);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToList_int___, v5);
    sub_1C3B764(&Method_JsonManager_Deserialize_CommonUI_LoginResultData___, v6);
    sub_1C3B764(&JsonManager_TypeInfo, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__ConvertAll_string___, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__ToArray__, v9);
    sub_1C3B764(&Method_NetworkManager_getRequest_TopHomeRequest___, v10);
    sub_1C3B764(&NetworkManager_TypeInfo, v11);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v12);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v13);
    sub_1C3B764(&Method_TerminalSceneComponent_callbackTopHome__, v14);
    sub_1C3B764(&Method_TerminalSceneComponent___c__callbackTopLogin_b__213_0__, v15);
    sub_1C3B764(&Method_TerminalSceneComponent___c__callbackTopLogin_b__213_1__, v16);
    sub_1C3B764(&TerminalSceneComponent___c_TypeInfo, v17);
    sub_1C3B764(&StringLiteral_20011/*"img_list_not_clear_cond"*/, v18);
    sub_1C3B764(&StringLiteral_11289/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/, v19);
    sub_1C3B764(&StringLiteral_23398/*"sy2"*/, v20);
    sub_1C3B764(&StringLiteral_845/*", line {0}, position {1}"*/, v21);
    byte_4C24133 = 1;
  }
  v22 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v22,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_callbackTopHome__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v22,
                     (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_TopHomeRequest___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F116 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v23);
    byte_4C1F116 = 1;
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
    PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11289/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/, 0LL);
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
                              (const MethodInfo_3058B98 *)Method_JsonManager_Deserialize_CommonUI_LoginResultData___);
  if ( !myFSM )
LABEL_45:
    sub_1C3B9C0(myFSM, v23);
  v26 = myFSM;
  monitor = (System_Collections_Generic_IEnumerable_TSource__o *)myFSM[2].monitor;
  if ( monitor )
  {
    myFSM = (PlayMakerFSM_o *)System_Linq_Enumerable__ToList_int_(
                                monitor,
                                (const MethodInfo_302E840 *)Method_System_Linq_Enumerable_ToList_int___);
    v28 = (System_Collections_Generic_List_int__o *)myFSM;
    v29 = TerminalSceneComponent___c_TypeInfo;
    if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v29 = TerminalSceneComponent___c_TypeInfo;
    }
    _9__213_0 = (System_Converter_TInput__TOutput__o *)v29->static_fields->__9__213_0;
    if ( !_9__213_0 )
    {
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        v29 = TerminalSceneComponent___c_TypeInfo;
      }
      v31 = (Il2CppObject *)v29->static_fields->__9;
      _9__213_0 = (System_Converter_TInput__TOutput__o *)sub_1C3B9B0(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(
        _9__213_0,
        v31,
        Method_TerminalSceneComponent___c__callbackTopLogin_b__213_0__,
        0LL);
      static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
      static_fields->__9__213_0 = (struct System_Converter_int__string__o *)_9__213_0;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&static_fields->__9__213_0,
        (int64_t)_9__213_0,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    if ( !v28 )
      goto LABEL_45;
    myFSM = (PlayMakerFSM_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                v28,
                                (System_Converter_T__TOutput__o *)_9__213_0,
                                (const MethodInfo_2F1F7B8 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !myFSM )
      goto LABEL_45;
    v39 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)myFSM,
                                   (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_string__ToArray__);
    v40 = System_String__Join((System_String_o *)StringLiteral_845/*", line {0}, position {1}"*/, v39, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_20011/*"img_list_not_clear_cond"*/, v40, 0LL);
  }
  klass = (System_Collections_Generic_IEnumerable_TSource__o *)v26[2].klass;
  if ( klass )
  {
    myFSM = (PlayMakerFSM_o *)System_Linq_Enumerable__ToList_int_(
                                klass,
                                (const MethodInfo_302E840 *)Method_System_Linq_Enumerable_ToList_int___);
    v42 = (System_Collections_Generic_List_int__o *)myFSM;
    v43 = TerminalSceneComponent___c_TypeInfo;
    if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v43 = TerminalSceneComponent___c_TypeInfo;
    }
    _9__213_1 = (System_Converter_TInput__TOutput__o *)v43->static_fields->__9__213_1;
    if ( !_9__213_1 )
    {
      if ( !v43->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v43);
        v43 = TerminalSceneComponent___c_TypeInfo;
      }
      v45 = (Il2CppObject *)v43->static_fields->__9;
      _9__213_1 = (System_Converter_TInput__TOutput__o *)sub_1C3B9B0(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(
        _9__213_1,
        v45,
        Method_TerminalSceneComponent___c__callbackTopLogin_b__213_1__,
        0LL);
      v46 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v46->__9__213_1 = (struct System_Converter_int__string__o *)_9__213_1;
      sub_1C3B708((PartyOrganizationUtility_o *)&v46->__9__213_1, (int64_t)_9__213_1, v47, v48, v49, v50, v51, v52);
    }
    if ( v42 )
    {
      myFSM = (PlayMakerFSM_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                  v42,
                                  (System_Converter_T__TOutput__o *)_9__213_1,
                                  (const MethodInfo_2F1F7B8 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
      if ( myFSM )
      {
        v53 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                       (System_Collections_Generic_List_object__o *)myFSM,
                                       (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_string__ToArray__);
        v54 = System_String__Join((System_String_o *)StringLiteral_845/*", line {0}, position {1}"*/, v53, 0LL);
        UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_23398/*"sy2"*/, v54, 0LL);
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

  if ( (byte_4C24121 & 1) == 0 )
  {
    sub_1C3B764(&TerminalSceneComponent__coFadein_WorldDisp_d__195_TypeInfo, endAct);
    byte_4C24121 = 1;
  }
  v9 = isExecuteUnusedAssets;
  v10 = sub_1C3B9B0(TerminalSceneComponent__coFadein_WorldDisp_d__195_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)this, v11, v12, v13, v14, v15, v16);
  *(float *)(v10 + 64) = fadeTime;
  *(_QWORD *)(v10 + 40) = endAct;
  sub_1C3B708((PartyOrganizationUtility_o *)(v10 + 40), (int64_t)endAct, v17, v18, v19, v20, v21, v22);
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

  if ( (byte_4C24137 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__GetEnumerator__, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestMaster___, v2);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestPhaseMaster___, v3);
    sub_1C3B764(&DataManager_TypeInfo, v4);
    sub_1C3B764(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5);
    sub_1C3B764(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__getEntityList__, v6);
    sub_1C3B764(&System_IDisposable_TypeInfo, v7);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo, v8);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1C3B764(&NetworkManager_TypeInfo, v10);
    sub_1C3B764(&QuestPhaseMaster_TypeInfo, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4C24137 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object
    || (datalist = (System_Collections_ObjectModel_Collection_T__o *)Master_object->fields.datalist,
        (Master_object = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Master_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                           Master_object,
                                           (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestMaster___),
        !datalist) )
  {
    sub_1C3B9C0(Master_object, v15);
  }
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 datalist,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v18);
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
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v27 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo, 0LL);
    }
    v29 = (QuestPhaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                                  Enumerator,
                                  *(_QWORD *)(v27 + 8));
    v30 = QuestPhaseMaster_TypeInfo;
    if ( !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo);
    if ( !v29 )
      sub_1C3B9C0(v30, v28);
    ScriptStr = QuestPhaseEntity__getScriptStr(
                  v29,
                  QuestPhaseMaster_TypeInfo->static_fields->MOVIE_QUEST_SCRIPT_STR,
                  0LL,
                  0LL);
    v33 = ScriptStr;
    if ( ScriptStr )
    {
      if ( !v17 )
        sub_1C3B9C0(ScriptStr, v32);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v17,
                 v29->fields.questId,
                 (const MethodInfo_329AE48 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
    v38 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
}


void __fastcall TerminalSceneComponent__fadeoutBgm(
        TerminalSceneComponent_o *this,
        float fadeoutTime,
        const MethodInfo *method)
{
  if ( (byte_4C24130 & 1) == 0 )
  {
    sub_1C3B764(&SoundManager_TypeInfo, method);
    byte_4C24130 = 1;
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

  if ( (byte_4C24106 & 1) == 0 )
  {
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v1);
    byte_4C24106 = 1;
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

  if ( (byte_4C24109 & 1) == 0 )
  {
    sub_1C3B764(&FSUtility_TypeInfo, method);
    byte_4C24109 = 1;
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

  if ( (byte_4C24108 & 1) == 0 )
  {
    sub_1C3B764(&FSUtility_TypeInfo, method);
    byte_4C24108 = 1;
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

  if ( (byte_4C2410A & 1) == 0 )
  {
    sub_1C3B764(&FSUtility_TypeInfo, method);
    byte_4C2410A = 1;
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

  if ( (byte_4C2410B & 1) == 0 )
  {
    sub_1C3B764(&FSUtility_TypeInfo, method);
    byte_4C2410B = 1;
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

  if ( (byte_4C24115 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&AtlasManager_TypeInfo, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v4);
    sub_1C3B764(&Method_TerminalSceneComponent__loadCommonBG_b__180_0__, v5);
    byte_4C24115 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v7);
  if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 4, 0LL) )
  {
    TerminalSceneComponent__loadOutGameAtlas(this, v8);
  }
  else
  {
    v9 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_TerminalSceneComponent__loadCommonBG_b__180_0__, 0LL);
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

  if ( (byte_4C24116 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&AtlasManager_TypeInfo, v3);
    sub_1C3B764(&Method_TerminalSceneComponent__loadOutGameAtlas_b__181_0__, v4);
    byte_4C24116 = 1;
  }
  v5 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_TerminalSceneComponent__loadOutGameAtlas_b__181_0__, 0LL);
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

  if ( (byte_4C24117 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v3);
    sub_1C3B764(&Method_TerminalSceneComponent_SendMessageStartUpAndResume__, v4);
    byte_4C24117 = 1;
  }
  TransitionInfo_k__BackingField = this->fields._TransitionInfo_k__BackingField;
  if ( TransitionInfo_k__BackingField
    && !System_String__IsNullOrEmpty(TransitionInfo_k__BackingField->fields.voiceAssetName, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v8 = this->fields._TransitionInfo_k__BackingField;
    if ( !v8
      || (voiceAssetName = v8->fields.voiceAssetName,
          v10 = (SoundManager_o *)Instance,
          v11 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo),
          System_Action___ctor(
            v11,
            (Il2CppObject *)this,
            Method_TerminalSceneComponent_SendMessageStartUpAndResume__,
            0LL),
          !v10) )
    {
      sub_1C3B9C0(Instance, v7);
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

  if ( (byte_4C24145 & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_5861/*"End tag mismatch: expected {0} but found {1}"*/, v3);
    sub_1C3B764(&StringLiteral_5862/*"EndAccept"*/, v4);
    byte_4C24145 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F041 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F041 = 1;
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
      v8 = &StringLiteral_5861/*"End tag mismatch: expected {0} but found {1}"*/;
      goto LABEL_15;
    }
LABEL_16:
    sub_1C3B9C0(myFSM, method);
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_16;
  v8 = &StringLiteral_5862/*"EndAccept"*/;
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
    sub_1C3B9C0(0LL, sEventStr);
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

  if ( (byte_4C24136 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v3);
    sub_1C3B764(&Method_TerminalSceneComponent__mfsmfInitTable_b__217_0__, v4);
    byte_4C24136 = 1;
  }
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__ReleaseMap(mTerminalMap, 0, 0LL), (mTerminalList = this->fields.mTerminalList) == 0LL)
    || (mTerminalMap = (ScrTerminalMap_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0LL
    || (ListViewManager__DestroyList((ListViewManager_o *)mTerminalMap, 0LL),
        Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__),
        v8 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_TerminalSceneComponent__mfsmfInitTable_b__217_0__, 0LL),
        !Instance) )
  {
    sub_1C3B9C0(mTerminalMap, method);
  }
  v9 = QuestTree__Init((QuestTree_o *)Instance, v8, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
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

  if ( (byte_4C2412D & 1) == 0 )
  {
    sub_1C3B764(&SoundManager_TypeInfo, bgmName);
    byte_4C2412D = 1;
  }
  if ( System_String__IsNullOrEmpty(bgmName, 0LL) )
  {
    TerminalSceneComponent__playDefaultBgm(this, v5);
  }
  else
  {
    this->fields.mPlayBgmName = bgmName;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mPlayBgmName, (int64_t)bgmName, v6, v7, v8, v9, v10, v11);
    mPlayBgmName = this->fields.mPlayBgmName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm(mPlayBgmName, 0LL);
  }
}


void __fastcall TerminalSceneComponent__playBgm_43734160(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  System_String_o *mPlayBgmName; // x19

  if ( (byte_4C2412F & 1) == 0 )
  {
    sub_1C3B764(&SoundManager_TypeInfo, method);
    byte_4C2412F = 1;
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

  if ( (byte_4C2412E & 1) == 0 )
  {
    sub_1C3B764(&BgmManager_TypeInfo, method);
    byte_4C2412E = 1;
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  Il2CppObject *MasterData_object; // x0
  TerminalOverwriteMaster_o *v26; // x20
  bool OverwriteSkinName; // w0
  TerminalSceneComponent_c *v28; // x8
  bool v29; // w22
  System_String_o *OVERWRITE_COMMON_BG_TYPE1_KEY; // x21
  System_String_o *Empty; // x1
  bool v32; // w0
  TerminalSceneComponent_c *v33; // x8
  bool v34; // w21
  System_String_o *OVERWRITE_COMMON_BG_TYPE2_KEY; // x20
  System_String_o *v36; // x1
  System_String_o *str1; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *skinName; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C2411B & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_TerminalOverwriteMaster___, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v5);
    sub_1C3B764(&SoundManager_TypeInfo, v6);
    sub_1C3B764(&string_TypeInfo, v7);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v8);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v9);
    sub_1C3B764(&StringLiteral_15072/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/, v10);
    byte_4C2411B = 1;
  }
  skinName = 0LL;
  str1 = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  AutomatedAction__TerminateMissionAction((AutomatedAction_o *)Instance, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C241AC )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v13);
    byte_4C241AC = 1;
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
    if ( !byte_4C1F2F9 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v13);
      byte_4C1F2F9 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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
      sub_1C3B708((PartyOrganizationUtility_o *)((char *)Instance + 40), 0LL, v19, v20, v21, v22, v23, v24);
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
    sub_1C3B9C0(Instance, v12);
  }
LABEL_34:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
  if ( MasterData_object )
  {
    v26 = (TerminalOverwriteMaster_o *)MasterData_object;
    OverwriteSkinName = TerminalOverwriteMaster__TryGetOverwriteSkinName(
                          (TerminalOverwriteMaster_o *)MasterData_object,
                          2,
                          &skinName,
                          0LL);
    v28 = TerminalSceneComponent_TypeInfo;
    v29 = OverwriteSkinName;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v28 = TerminalSceneComponent_TypeInfo;
    }
    OVERWRITE_COMMON_BG_TYPE1_KEY = v28->static_fields->OVERWRITE_COMMON_BG_TYPE1_KEY;
    if ( v29 )
      Empty = System_String__Concat_63368612((System_String_o *)StringLiteral_15072/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/, skinName, 0LL);
    else
      Empty = string_TypeInfo->static_fields->Empty;
    UnityEngine_PlayerPrefs__SetString(OVERWRITE_COMMON_BG_TYPE1_KEY, Empty, 0LL);
    v32 = TerminalOverwriteMaster__TryGetOverwriteSkinName(v26, 4, &str1, 0LL);
    v33 = TerminalSceneComponent_TypeInfo;
    v34 = v32;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v33 = TerminalSceneComponent_TypeInfo;
    }
    OVERWRITE_COMMON_BG_TYPE2_KEY = v33->static_fields->OVERWRITE_COMMON_BG_TYPE2_KEY;
    if ( v34 )
      v36 = System_String__Concat_63368612((System_String_o *)StringLiteral_15072/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/, str1, 0LL);
    else
      v36 = string_TypeInfo->static_fields->Empty;
    UnityEngine_PlayerPrefs__SetString(OVERWRITE_COMMON_BG_TYPE2_KEY, v36, 0LL);
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

  if ( (byte_4C24138 & 1) == 0 )
  {
    sub_1C3B764(&Method_NetworkManager_getRequest_EventDailyPointRequest___, *(_QWORD *)&eventId);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    sub_1C3B764(&Method_TerminalSceneComponent_callbackEventDailyPoint__, v8);
    byte_4C24138 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_callbackEventDailyPoint__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               v11,
               (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_EventDailyPointRequest___);
  if ( !Instance )
LABEL_8:
    sub_1C3B9C0(Instance, v10);
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

  if ( (byte_4C24132 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_LoginCallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v3);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v4);
    sub_1C3B764(&Method_TerminalSceneComponent_callbackTopLogin__, v5);
    sub_1C3B764(&TutorialFlag_TypeInfo, v6);
    sub_1C3B764(&StringLiteral_11289/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/, v7);
    byte_4C24132 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_39109112(102, 0LL) )
    goto LABEL_13;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F056 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v8);
    byte_4C1F056 = 1;
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
      PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11289/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/, 0LL);
      this->fields.isTopLoginBusy = 0;
      return;
    }
LABEL_17:
    sub_1C3B9C0(myFSM, v8);
  }
  this->fields.isTopLoginBusy = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v12 = (NetworkManager_LoginCallbackFunc_o *)sub_1C3B9B0(NetworkManager_LoginCallbackFunc_TypeInfo);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._TransitionInfo_k__BackingField = value;
  sub_1C3B708(
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
  sub_1C3B708(
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
  if ( (sub_1C3B824(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A7EA40;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A7E9F8;
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
  if ( (byte_4C2415E & 1) == 0 )
  {
    sub_1C3B764(&bool_TypeInfo, isPlay);
    byte_4C2415E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C3B718(this, v9, callback, object);
}


void __fastcall TerminalSceneComponent_PlayChapterStartCallback__EndInvoke(
        TerminalSceneComponent_PlayChapterStartCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  TerminalSceneComponent_o **v20; // x20
  QuestBoardListViewObject_o *FocusQuest; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8
  struct UIScrollView_o *scrollView; // x8
  struct UIProgressBar_o *verticalScrollBar; // x23
  System_String_o *v32; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v34; // x0
  CommonUI_o *v35; // x22
  UnityEngine_Vector2_o TUTORIAL_QUEST_ARROW_POS_FS; // kr00_8
  float v37; // s0
  float v38; // s1
  float v39; // s2
  float v40; // s3
  TerminalSceneComponent_o *v41; // x8
  float x; // s14
  float y; // s15
  float v44; // s10
  float v45; // s11
  float v46; // s12
  float v47; // s13
  System_Action_o *v48; // x23
  struct ScrTerminalListTop_o *v49; // x21
  System_Action_o *v50; // x20
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  UnityEngine_Rect_o v57; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4C24161 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, that);
    sub_1C3B764(&Method_GameObjectExtensions_RemoveComponent_Collider___, v4);
    sub_1C3B764(&LocalizationManager_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C3B764(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__0__, v7);
    sub_1C3B764(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__1__, v8);
    sub_1C3B764(&TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_TypeInfo, v9);
    sub_1C3B764(&StringLiteral_13802/*"The prefix '{0}' cannot be bound to the empty namespace name."*/, v10);
    byte_4C24161 = 1;
  }
  v11 = sub_1C3B9B0(TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_22;
  *(_QWORD *)(v11 + 16) = that;
  v20 = (TerminalSceneComponent_o **)(v11 + 16);
  sub_1C3B708((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)that, v14, v15, v16, v17, v18, v19);
  if ( !*(_QWORD *)(v11 + 16) )
    goto LABEL_22;
  mFG = *(TerminalSceneComponent_o **)(*(_QWORD *)(v11 + 16) + 256LL);
  if ( !mFG )
    goto LABEL_22;
  FocusQuest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mFG, 0LL);
  *(_QWORD *)(v11 + 24) = FocusQuest;
  sub_1C3B708((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)FocusQuest, v22, v23, v24, v25, v26, v27);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  mFG = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13802/*"The prefix '{0}' cannot be bound to the empty namespace name."*/, 0LL);
  if ( !*v20 )
    goto LABEL_22;
  mTerminalList = (*v20)->fields.mTerminalList;
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
  v32 = (System_String_o *)mFG;
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mFG;
  if ( !mFG )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0LL);
  GameObjectExtensions__RemoveComponent_object_(
    gameObject,
    (const MethodInfo_30433BC *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mBG;
  if ( !mFG )
    goto LABEL_22;
  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0LL);
  GameObjectExtensions__RemoveComponent_object_(
    v34,
    (const MethodInfo_30433BC *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v20 )
    goto LABEL_22;
  v35 = (CommonUI_o *)mFG;
  TUTORIAL_QUEST_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(*v20, v13);
  mFG = *v20;
  if ( !*v20 )
    goto LABEL_22;
  *(UnityEngine_Rect_o *)&v37 = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(mFG, v13);
  v41 = *v20;
  if ( !*v20 )
    goto LABEL_22;
  x = v41->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x;
  y = v41->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.y;
  v44 = v37;
  v45 = v38;
  v46 = v39;
  v47 = v40;
  v48 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v48,
    (Il2CppObject *)v11,
    Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v35 )
    goto LABEL_22;
  v57.fields.m_XMin = v44;
  v57.fields.m_YMin = v45;
  v57.fields.m_Width = v46;
  v57.fields.m_Height = v47;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v35,
    v32,
    TUTORIAL_QUEST_ARROW_POS_FS,
    v57,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v48,
    0LL);
  if ( !*v20
    || (v49 = (*v20)->fields.mTerminalList,
        v50 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo),
        System_Action___ctor(
          v50,
          (Il2CppObject *)v11,
          Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0LL),
        !v49) )
  {
LABEL_22:
    sub_1C3B9C0(mFG, v13);
  }
  v49->fields.mQuestClickAct = v50;
  sub_1C3B708((PartyOrganizationUtility_o *)&v49->fields.mQuestClickAct, (int64_t)v50, v51, v52, v53, v54, v55, v56);
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
  if ( (byte_4C24162 & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)sub_1C3B764(
                                                                                        &Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___,
                                                                                        method);
    byte_4C24162 = 1;
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
                                                                                            (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0LL )
  {
LABEL_12:
    sub_1C3B9C0(this, method);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4C24163 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C3B764(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__2__, v4);
    byte_4C24163 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v9, v10, v11, v12, v13, v14);
  }
  if ( !v8 )
    sub_1C3B9C0(Instance, v6);
  CommonUI__CloseTutorialNotificationDialogArrow_31257460(v8, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1C3B9C0(0LL, method);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  SrcSpotBasePrefab_o *FocusSpot; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_String_o *v27; // x21
  Il2CppObject *Instance; // x22
  const MethodInfo *v29; // x1
  UnityEngine_Vector2_o v30; // kr00_8
  const MethodInfo *v31; // x1
  float x; // s14
  float y; // s15
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v38; // x23
  struct ScrTerminalMap_o *v39; // x21
  System_Action_o *v40; // x19
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  UnityEngine_Vector2_o v47; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v48; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v50; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4C2415F & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, that);
    sub_1C3B764(&LocalizationManager_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C3B764(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__0__, v7);
    sub_1C3B764(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__1__, v8);
    sub_1C3B764(&TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_TypeInfo, v9);
    sub_1C3B764(&StringLiteral_13805/*"The printf operation failed"*/, v10);
    byte_4C2415F = 1;
  }
  v11 = sub_1C3B9B0(TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_12;
  *(_QWORD *)(v11 + 24) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)this, v14, v15, v16, v17, v18, v19);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_12;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_12;
  FocusSpot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0LL);
  *(_QWORD *)(v11 + 16) = FocusSpot;
  sub_1C3B708((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)FocusSpot, v21, v22, v23, v24, v25, v26);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_13805/*"The printf operation failed"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v47.fields.y = -97.0;
  v47.fields.x = -55.0;
  v30 = TerminalSceneComponent__FSSpotArrowPosLerp(that, v47, v29);
  v48.fields.y = 0.0;
  v48.fields.x = -55.0;
  v49 = TerminalSceneComponent__FSSpotArrowRectLerp(that, v48, v31);
  x = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x;
  y = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.y;
  m_XMin = v49.fields.m_XMin;
  m_YMin = v49.fields.m_YMin;
  m_Width = v49.fields.m_Width;
  m_Height = v49.fields.m_Height;
  v38 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v11,
    Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_12;
  v50.fields.m_XMin = m_XMin;
  v50.fields.m_YMin = m_YMin;
  v50.fields.m_Width = m_Width;
  v50.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    (CommonUI_o *)Instance,
    v27,
    v30,
    v50,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v38,
    0LL);
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__SetMapCamera_TutorialFocusSpot(mTerminalMap, *(SrcSpotBasePrefab_o **)(v11 + 16), 0.5, 0LL),
        v39 = that->fields.mTerminalMap,
        v40 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo),
        System_Action___ctor(
          v40,
          (Il2CppObject *)v11,
          Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0LL),
        !v39) )
  {
LABEL_12:
    sub_1C3B9C0(mTerminalMap, v13);
  }
  v39->fields.mSpotClickAct = v40;
  sub_1C3B708((PartyOrganizationUtility_o *)&v39->fields.mSpotClickAct, (int64_t)v40, v41, v42, v43, v44, v45, v46);
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
      sub_1C3B9C0(that, that);
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
    sub_1C3B9C0(0LL, method);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4C24160 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C3B764(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__2__, v4);
    byte_4C24160 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v9, v10, v11, v12, v13, v14);
  }
  if ( !v8 )
    sub_1C3B9C0(Instance, v6);
  CommonUI__CloseTutorialNotificationDialogArrow_31257460(v8, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial1_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3B9C0(this, method);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  TerminalSceneComponent_o **v20; // x20
  QuestBoardListViewObject_o *FocusQuest; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8
  struct UIScrollView_o *scrollView; // x8
  struct UIProgressBar_o *verticalScrollBar; // x23
  System_String_o *v32; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v34; // x0
  CommonUI_o *v35; // x22
  UnityEngine_Vector2_o TUTORIAL_QUEST_ARROW_POS_FS; // kr00_8
  float v37; // s0
  float v38; // s1
  float v39; // s2
  float v40; // s3
  TerminalSceneComponent_o *v41; // x8
  float x; // s14
  float y; // s15
  float v44; // s10
  float v45; // s11
  float v46; // s12
  float v47; // s13
  System_Action_o *v48; // x23
  struct ScrTerminalListTop_o *v49; // x21
  System_Action_o *v50; // x20
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  UnityEngine_Rect_o v57; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4C24166 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, that);
    sub_1C3B764(&Method_GameObjectExtensions_RemoveComponent_Collider___, v4);
    sub_1C3B764(&LocalizationManager_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C3B764(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__0__, v7);
    sub_1C3B764(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__1__, v8);
    sub_1C3B764(&TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_TypeInfo, v9);
    sub_1C3B764(&StringLiteral_13803/*"The prefix '{0}' cannot be redefined from '{1}' to '{2}' within the same start element tag."*/, v10);
    byte_4C24166 = 1;
  }
  v11 = sub_1C3B9B0(TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_22;
  *(_QWORD *)(v11 + 16) = that;
  v20 = (TerminalSceneComponent_o **)(v11 + 16);
  sub_1C3B708((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)that, v14, v15, v16, v17, v18, v19);
  if ( !*(_QWORD *)(v11 + 16) )
    goto LABEL_22;
  mFG = *(TerminalSceneComponent_o **)(*(_QWORD *)(v11 + 16) + 256LL);
  if ( !mFG )
    goto LABEL_22;
  FocusQuest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mFG, 0LL);
  *(_QWORD *)(v11 + 24) = FocusQuest;
  sub_1C3B708((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)FocusQuest, v22, v23, v24, v25, v26, v27);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  mFG = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13803/*"The prefix '{0}' cannot be redefined from '{1}' to '{2}' within the same start element tag."*/, 0LL);
  if ( !*v20 )
    goto LABEL_22;
  mTerminalList = (*v20)->fields.mTerminalList;
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
  v32 = (System_String_o *)mFG;
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mFG;
  if ( !mFG )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0LL);
  GameObjectExtensions__RemoveComponent_object_(
    gameObject,
    (const MethodInfo_30433BC *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mBG;
  if ( !mFG )
    goto LABEL_22;
  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0LL);
  GameObjectExtensions__RemoveComponent_object_(
    v34,
    (const MethodInfo_30433BC *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v20 )
    goto LABEL_22;
  v35 = (CommonUI_o *)mFG;
  TUTORIAL_QUEST_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(*v20, v13);
  mFG = *v20;
  if ( !*v20 )
    goto LABEL_22;
  *(UnityEngine_Rect_o *)&v37 = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(mFG, v13);
  v41 = *v20;
  if ( !*v20 )
    goto LABEL_22;
  x = v41->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x;
  y = v41->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.y;
  v44 = v37;
  v45 = v38;
  v46 = v39;
  v47 = v40;
  v48 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v48,
    (Il2CppObject *)v11,
    Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v35 )
    goto LABEL_22;
  v57.fields.m_XMin = v44;
  v57.fields.m_YMin = v45;
  v57.fields.m_Width = v46;
  v57.fields.m_Height = v47;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v35,
    v32,
    TUTORIAL_QUEST_ARROW_POS_FS,
    v57,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v48,
    0LL);
  if ( !*v20
    || (v49 = (*v20)->fields.mTerminalList,
        v50 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo),
        System_Action___ctor(
          v50,
          (Il2CppObject *)v11,
          Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0LL),
        !v49) )
  {
LABEL_22:
    sub_1C3B9C0(mFG, v13);
  }
  v49->fields.mQuestClickAct = v50;
  sub_1C3B708((PartyOrganizationUtility_o *)&v49->fields.mQuestClickAct, (int64_t)v50, v51, v52, v53, v54, v55, v56);
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
  if ( (byte_4C24167 & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)sub_1C3B764(
                                                                                        &Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___,
                                                                                        method);
    byte_4C24167 = 1;
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
                                                                                            (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0LL )
  {
LABEL_12:
    sub_1C3B9C0(this, method);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4C24168 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C3B764(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__2__, v4);
    byte_4C24168 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v9, v10, v11, v12, v13, v14);
  }
  if ( !v8 )
    sub_1C3B9C0(Instance, v6);
  CommonUI__CloseTutorialNotificationDialogArrow_31257460(v8, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1C3B9C0(0LL, method);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  SrcSpotBasePrefab_o *FocusSpot; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_String_o *v27; // x21
  Il2CppObject *Instance; // x22
  const MethodInfo *v29; // x1
  UnityEngine_Vector2_o v30; // kr00_8
  const MethodInfo *v31; // x1
  float x; // s14
  float y; // s15
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v38; // x23
  struct ScrTerminalMap_o *v39; // x21
  System_Action_o *v40; // x19
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  UnityEngine_Vector2_o v47; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v48; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v50; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4C24164 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, that);
    sub_1C3B764(&LocalizationManager_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C3B764(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__0__, v7);
    sub_1C3B764(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__1__, v8);
    sub_1C3B764(&TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_TypeInfo, v9);
    sub_1C3B764(&StringLiteral_13806/*"The process cannot access the file '{0}' because it is being used by another process."*/, v10);
    byte_4C24164 = 1;
  }
  v11 = sub_1C3B9B0(TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_12;
  *(_QWORD *)(v11 + 24) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)this, v14, v15, v16, v17, v18, v19);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_12;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_12;
  FocusSpot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0LL);
  *(_QWORD *)(v11 + 16) = FocusSpot;
  sub_1C3B708((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)FocusSpot, v21, v22, v23, v24, v25, v26);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_13806/*"The process cannot access the file '{0}' because it is being used by another process."*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v47.fields.x = 0.0;
  v47.fields.y = -113.0;
  v30 = TerminalSceneComponent__FSSpotArrowPosLerp(that, v47, v29);
  v48.fields.x = 0.0;
  v48.fields.y = 0.0;
  v49 = TerminalSceneComponent__FSSpotArrowRectLerp(that, v48, v31);
  x = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x;
  y = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.y;
  m_XMin = v49.fields.m_XMin;
  m_YMin = v49.fields.m_YMin;
  m_Width = v49.fields.m_Width;
  m_Height = v49.fields.m_Height;
  v38 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v11,
    Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_12;
  v50.fields.m_XMin = m_XMin;
  v50.fields.m_YMin = m_YMin;
  v50.fields.m_Width = m_Width;
  v50.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    (CommonUI_o *)Instance,
    v27,
    v30,
    v50,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v38,
    0LL);
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__SetMapCamera_TutorialFocusSpot(mTerminalMap, *(SrcSpotBasePrefab_o **)(v11 + 16), 0.5, 0LL),
        v39 = that->fields.mTerminalMap,
        v40 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo),
        System_Action___ctor(
          v40,
          (Il2CppObject *)v11,
          Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0LL),
        !v39) )
  {
LABEL_12:
    sub_1C3B9C0(mTerminalMap, v13);
  }
  v39->fields.mSpotClickAct = v40;
  sub_1C3B708((PartyOrganizationUtility_o *)&v39->fields.mSpotClickAct, (int64_t)v40, v41, v42, v43, v44, v45, v46);
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
      sub_1C3B9C0(that, that);
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
    sub_1C3B9C0(0LL, method);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4C24165 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C3B764(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__2__, v4);
    byte_4C24165 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v9, v10, v11, v12, v13, v14);
  }
  if ( !v8 )
    sub_1C3B9C0(Instance, v6);
  CommonUI__CloseTutorialNotificationDialogArrow_31257460(v8, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial2_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3B9C0(this, method);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 *v20; // x21
  System_String_o *v21; // x20
  __int64 v22; // x8
  CommonUI_o *v23; // x21
  float v24; // s8
  float v25; // s13
  float v26; // s9
  float v27; // s14
  float v28; // s10
  unsigned int v29; // s11
  unsigned int v30; // s12
  System_Action_o *v31; // x22
  Il2CppObject *v32; // x23
  struct TerminalSceneComponent_StateTutorial3_GachaArrow___c_StaticFields *static_fields; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Action_o *v40; // x20
  UnityEngine_Vector2_o v41; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v42; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4C2416C & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, that);
    sub_1C3B764(&LocalizationManager_TypeInfo, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C3B764(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__begin_b__0_0__, v6);
    sub_1C3B764(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__1__, v7);
    sub_1C3B764(&TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_TypeInfo, v8);
    sub_1C3B764(&TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo, v9);
    sub_1C3B764(&StringLiteral_13800/*"The prefix 'xml' is bound to the namespace name 'http://www.w3.org/XML/1998/namespace'. Other prefixes must not be bound to this namespace name, and it must not be declared as the default namespace."*/, v10);
    byte_4C2416C = 1;
  }
  v11 = sub_1C3B9B0(TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_15;
  *(_QWORD *)(v11 + 16) = that;
  v20 = (__int64 *)(v11 + 16);
  sub_1C3B708((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)that, v14, v15, v16, v17, v18, v19);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_13800/*"The prefix 'xml' is bound to the namespace name 'http://www.w3.org/XML/1998/namespace'. Other prefixes must not be bound to this namespace name, and it must not be declared as the default namespace."*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = *v20;
  if ( !*v20 )
    goto LABEL_15;
  v23 = (CommonUI_o *)Instance;
  v24 = *(float *)(v22 + 160);
  v25 = *(float *)(v22 + 164);
  v26 = *(float *)(v22 + 168);
  v27 = *(float *)(v22 + 172);
  Instance = TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo;
  v28 = *(float *)(v22 + 176);
  v29 = *(_DWORD *)(v22 + 152);
  v30 = *(_DWORD *)(v22 + 156);
  if ( !TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo);
    Instance = TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo;
  }
  v31 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v31 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo;
    }
    v32 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v31 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v31, v32, Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__begin_b__0_0__, 0LL);
    static_fields = TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = v31;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)v31, v34, v35, v36, v37, v38, v39);
  }
  if ( !v23 )
LABEL_15:
    sub_1C3B9C0(Instance, v13);
  v42.fields.m_YMin = v27 + 53.0;
  v41.fields.y = v25 + 33.0;
  v42.fields.m_Height = 135.0;
  v41.fields.x = v24;
  v42.fields.m_XMin = v26;
  v42.fields.m_Width = v28;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v23,
    v21,
    v41,
    v42,
    0.0,
    (UnityEngine_Vector2_o)__PAIR64__(v30, v29),
    -1,
    v31,
    0LL);
  v40 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v40,
    (Il2CppObject *)v11,
    Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__1__,
    0LL);
  MainMenuBar__SetDispBtnAct(2, v40, 0LL);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C2416D & 1) == 0 )
  {
    sub_1C3B764(&TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo, v1);
    byte_4C2416D = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial3_GachaArrow___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4C2416E & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C3B764(&TutorialFlag_TypeInfo, v4);
    sub_1C3B764(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__2__, v5);
    byte_4C2416E = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress(1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v9 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v10, v11, v12, v13, v14, v15);
  }
  if ( !v9 )
    sub_1C3B9C0(Instance, v7);
  CommonUI__CloseTutorialNotificationDialogArrow_31257460(v9, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1C3B9C0(0LL, method);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  TerminalSceneComponent_o **v20; // x22
  System_String_o *v21; // x20
  CommonUI_o *v22; // x21
  UnityEngine_Vector2_o TUTORIAL_MENU_ARROW_POS_FS; // kr00_8
  TerminalSceneComponent_o *v24; // x8
  float m_XMin; // s12
  float m_YMin; // s14
  float m_Height; // s8
  float m_Width; // s10
  float v29; // s0
  TerminalSceneComponent_o *v30; // x8
  float x; // s13
  float y; // s15
  float v33; // s11
  System_Action_o *v34; // x22
  Il2CppObject *v35; // x23
  struct TerminalSceneComponent_StateTutorial3_MenuArrow___c_StaticFields *static_fields; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_Action_o *v43; // x20
  UnityEngine_Rect_o v44; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4C24169 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, that);
    sub_1C3B764(&LocalizationManager_TypeInfo, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C3B764(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__begin_b__0_0__, v6);
    sub_1C3B764(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__1__, v7);
    sub_1C3B764(&TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_TypeInfo, v8);
    sub_1C3B764(&TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo, v9);
    sub_1C3B764(&StringLiteral_13801/*"The prefix 'xmlns' is bound to the namespace name 'http://www.w3.org/2000/xmlns/'. It must not be declared. Other prefixes must not be bound to this namespace name, and it must not be declared as the default namespace."*/, v10);
    byte_4C24169 = 1;
  }
  v11 = sub_1C3B9B0(TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_17;
  *(_QWORD *)(v11 + 16) = that;
  v20 = (TerminalSceneComponent_o **)(v11 + 16);
  sub_1C3B708((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)that, v14, v15, v16, v17, v18, v19);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_13801/*"The prefix 'xmlns' is bound to the namespace name 'http://www.w3.org/2000/xmlns/'. It must not be declared. Other prefixes must not be bound to this namespace name, and it must not be declared as the default namespace."*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v20 )
    goto LABEL_17;
  v22 = (CommonUI_o *)Instance;
  TUTORIAL_MENU_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_POS_FS(*v20, v13);
  v24 = *v20;
  if ( !*v20 )
    goto LABEL_17;
  m_XMin = v24->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_XMin;
  m_YMin = v24->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_YMin;
  m_Width = v24->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width;
  m_Height = v24->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Height;
  v29 = TerminalSceneComponent__FSMenuOffsetX((TerminalSceneComponent_o *)Instance, v13);
  v30 = *v20;
  if ( !*v20 )
    goto LABEL_17;
  x = v30->fields.TUTORIAL_MENU_MESSAGE_POS.fields.x;
  y = v30->fields.TUTORIAL_MENU_MESSAGE_POS.fields.y;
  v33 = v29;
  Instance = TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo;
  if ( !TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo);
    Instance = TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo;
  }
  v34 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v34 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo;
    }
    v35 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v34 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v34, v35, Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__begin_b__0_0__, 0LL);
    static_fields = TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = v34;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)v34, v37, v38, v39, v40, v41, v42);
  }
  if ( !v22 )
LABEL_17:
    sub_1C3B9C0(Instance, v13);
  v44.fields.m_Height = m_Height + 33.0;
  v44.fields.m_YMin = m_YMin + 33.0;
  v44.fields.m_XMin = m_XMin + v33;
  v44.fields.m_Width = m_Width;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v22,
    v21,
    TUTORIAL_MENU_ARROW_POS_FS,
    v44,
    0.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v34,
    0LL);
  v43 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v11,
    Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__1__,
    0LL);
  MainMenuBar__SetMenuBtnAct(v43, 0LL);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C2416A & 1) == 0 )
  {
    sub_1C3B764(&TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo, v1);
    byte_4C2416A = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial3_MenuArrow___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4C2416B & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C3B764(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__2__, v4);
    byte_4C2416B = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v9, v10, v11, v12, v13, v14);
  }
  if ( !v8 )
    sub_1C3B9C0(Instance, v6);
  CommonUI__CloseTutorialNotificationDialogArrow_31257460(v8, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1C3B9C0(0LL, method);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  TerminalSceneComponent_o **v20; // x20
  QuestBoardListViewObject_o *FocusQuest; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8
  struct UIScrollView_o *scrollView; // x8
  struct UIProgressBar_o *verticalScrollBar; // x23
  System_String_o *v32; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v34; // x0
  CommonUI_o *v35; // x22
  UnityEngine_Vector2_o TUTORIAL_QUEST_ARROW_POS_FS; // kr00_8
  float v37; // s0
  float v38; // s1
  float v39; // s2
  float v40; // s3
  TerminalSceneComponent_o *v41; // x8
  float x; // s14
  float y; // s15
  float v44; // s10
  float v45; // s11
  float v46; // s12
  float v47; // s13
  System_Action_o *v48; // x23
  struct ScrTerminalListTop_o *v49; // x21
  System_Action_o *v50; // x20
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  UnityEngine_Rect_o v57; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4C24171 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, that);
    sub_1C3B764(&Method_GameObjectExtensions_RemoveComponent_Collider___, v4);
    sub_1C3B764(&LocalizationManager_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C3B764(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__0__, v7);
    sub_1C3B764(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__1__, v8);
    sub_1C3B764(&TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_TypeInfo, v9);
    sub_1C3B764(&StringLiteral_13804/*"The prefix '{0}' in XPath cannot be resolved."*/, v10);
    byte_4C24171 = 1;
  }
  v11 = sub_1C3B9B0(TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_22;
  *(_QWORD *)(v11 + 16) = that;
  v20 = (TerminalSceneComponent_o **)(v11 + 16);
  sub_1C3B708((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)that, v14, v15, v16, v17, v18, v19);
  if ( !*(_QWORD *)(v11 + 16) )
    goto LABEL_22;
  mFG = *(TerminalSceneComponent_o **)(*(_QWORD *)(v11 + 16) + 256LL);
  if ( !mFG )
    goto LABEL_22;
  FocusQuest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mFG, 0LL);
  *(_QWORD *)(v11 + 24) = FocusQuest;
  sub_1C3B708((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)FocusQuest, v22, v23, v24, v25, v26, v27);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  mFG = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13804/*"The prefix '{0}' in XPath cannot be resolved."*/, 0LL);
  if ( !*v20 )
    goto LABEL_22;
  mTerminalList = (*v20)->fields.mTerminalList;
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
  v32 = (System_String_o *)mFG;
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mFG;
  if ( !mFG )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0LL);
  GameObjectExtensions__RemoveComponent_object_(
    gameObject,
    (const MethodInfo_30433BC *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mBG;
  if ( !mFG )
    goto LABEL_22;
  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0LL);
  GameObjectExtensions__RemoveComponent_object_(
    v34,
    (const MethodInfo_30433BC *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v20 )
    goto LABEL_22;
  v35 = (CommonUI_o *)mFG;
  TUTORIAL_QUEST_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(*v20, v13);
  mFG = *v20;
  if ( !*v20 )
    goto LABEL_22;
  *(UnityEngine_Rect_o *)&v37 = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(mFG, v13);
  v41 = *v20;
  if ( !*v20 )
    goto LABEL_22;
  x = v41->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x;
  y = v41->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.y;
  v44 = v37;
  v45 = v38;
  v46 = v39;
  v47 = v40;
  v48 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v48,
    (Il2CppObject *)v11,
    Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v35 )
    goto LABEL_22;
  v57.fields.m_XMin = v44;
  v57.fields.m_YMin = v45;
  v57.fields.m_Width = v46;
  v57.fields.m_Height = v47;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v35,
    v32,
    TUTORIAL_QUEST_ARROW_POS_FS,
    v57,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v48,
    0LL);
  if ( !*v20
    || (v49 = (*v20)->fields.mTerminalList,
        v50 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo),
        System_Action___ctor(
          v50,
          (Il2CppObject *)v11,
          Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0LL),
        !v49) )
  {
LABEL_22:
    sub_1C3B9C0(mFG, v13);
  }
  v49->fields.mQuestClickAct = v50;
  sub_1C3B708((PartyOrganizationUtility_o *)&v49->fields.mQuestClickAct, (int64_t)v50, v51, v52, v53, v54, v55, v56);
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
  if ( (byte_4C24172 & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)sub_1C3B764(
                                                                                        &Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___,
                                                                                        method);
    byte_4C24172 = 1;
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
                                                                                            (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0LL )
  {
LABEL_12:
    sub_1C3B9C0(this, method);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4C24173 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C3B764(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__2__, v4);
    byte_4C24173 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v9, v10, v11, v12, v13, v14);
  }
  if ( !v8 )
    sub_1C3B9C0(Instance, v6);
  CommonUI__CloseTutorialNotificationDialogArrow_31257460(v8, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1C3B9C0(0LL, method);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  SrcSpotBasePrefab_o *FocusSpot; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  Il2CppObject *Instance; // x21
  const MethodInfo *v26; // x1
  UnityEngine_Vector2_o v27; // kr00_8
  const MethodInfo *v28; // x1
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v33; // x22
  struct ScrTerminalMap_o *v34; // x21
  System_Action_o *v35; // x19
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  UnityEngine_Vector2_o v42; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v43; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v45; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4C2416F & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, that);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C3B764(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__0__, v6);
    sub_1C3B764(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__1__, v7);
    sub_1C3B764(&TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_TypeInfo, v8);
    byte_4C2416F = 1;
  }
  v9 = sub_1C3B9B0(TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_10;
  *(_QWORD *)(v9 + 24) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)this, v12, v13, v14, v15, v16, v17);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_10;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_10;
  FocusSpot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0LL);
  *(_QWORD *)(v9 + 16) = FocusSpot;
  sub_1C3B708((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)FocusSpot, v19, v20, v21, v22, v23, v24);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v42.fields.x = 0.0;
  v42.fields.y = -113.0;
  v27 = TerminalSceneComponent__FSSpotArrowPosLerp(that, v42, v26);
  v43.fields.x = 0.0;
  v43.fields.y = 0.0;
  v44 = TerminalSceneComponent__FSSpotArrowRectLerp(that, v43, v28);
  m_XMin = v44.fields.m_XMin;
  m_YMin = v44.fields.m_YMin;
  m_Width = v44.fields.m_Width;
  m_Height = v44.fields.m_Height;
  v33 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v9,
    Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_10;
  v45.fields.m_XMin = m_XMin;
  v45.fields.m_YMin = m_YMin;
  v45.fields.m_Width = m_Width;
  v45.fields.m_Height = m_Height;
  CommonUI__OpenTutorialArrowMark((CommonUI_o *)Instance, v27, 90.0, v45, v33, 0LL);
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__SetMapCamera_TutorialFocusSpot(mTerminalMap, *(SrcSpotBasePrefab_o **)(v9 + 16), 0.5, 0LL),
        v34 = that->fields.mTerminalMap,
        v35 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo),
        System_Action___ctor(
          v35,
          (Il2CppObject *)v9,
          Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0LL),
        !v34) )
  {
LABEL_10:
    sub_1C3B9C0(mTerminalMap, v11);
  }
  v34->fields.mSpotClickAct = v35;
  sub_1C3B708((PartyOrganizationUtility_o *)&v34->fields.mSpotClickAct, (int64_t)v35, v36, v37, v38, v39, v40, v41);
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
      sub_1C3B9C0(that, that);
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
    sub_1C3B9C0(0LL, method);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4C24170 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C3B764(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__2__, v4);
    byte_4C24170 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v9, v10, v11, v12, v13, v14);
  }
  if ( !v8 )
    sub_1C3B9C0(Instance, v6);
  CommonUI__CloseTutorialArrowMark(v8, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial4_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3B9C0(this, method);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  float *v18; // x8
  CommonUI_o *v19; // x20
  float v20; // s9
  float v21; // s11
  float v22; // s8
  float v23; // s12
  float v24; // s10
  System_Action_o *v25; // x21
  Il2CppObject *v26; // x22
  struct TerminalSceneComponent_StateTutorial5_CombineArrow___c_StaticFields *static_fields; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Action_o *v34; // x20
  UnityEngine_Vector2_o v35; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v36; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4C24177 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, that);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C3B764(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__begin_b__0_0__, v5);
    sub_1C3B764(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__1__, v6);
    sub_1C3B764(&TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_TypeInfo, v7);
    sub_1C3B764(&TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo, v8);
    byte_4C24177 = 1;
  }
  v9 = sub_1C3B9B0(TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_13;
  *(_QWORD *)(v9 + 16) = that;
  sub_1C3B708((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)that, v12, v13, v14, v15, v16, v17);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = *(float **)(v9 + 16);
  if ( !v18 )
    goto LABEL_13;
  v19 = (CommonUI_o *)Instance;
  v20 = v18[52];
  v21 = v18[53];
  v22 = v18[48];
  v23 = v18[49];
  Instance = TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo;
  v24 = v18[50];
  if ( !TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo);
    Instance = TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo;
  }
  v25 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v25 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo;
    }
    v26 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v25 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v25, v26, Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__begin_b__0_0__, 0LL);
    static_fields = TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = v25;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)v25, v28, v29, v30, v31, v32, v33);
  }
  if ( !v19 )
LABEL_13:
    sub_1C3B9C0(Instance, v11);
  v36.fields.m_YMin = v23 + 53.0;
  v35.fields.y = v21 + 33.0;
  v36.fields.m_Height = 135.0;
  v35.fields.x = v20;
  v36.fields.m_XMin = v22;
  v36.fields.m_Width = v24;
  CommonUI__OpenTutorialArrowMark(v19, v35, 0.0, v36, v25, 0LL);
  v34 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v9,
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C24178 & 1) == 0 )
  {
    sub_1C3B764(&TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo, v1);
    byte_4C24178 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial5_CombineArrow___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4C24179 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C3B764(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__2__, v4);
    byte_4C24179 = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v9, v10, v11, v12, v13, v14);
  }
  if ( !v8 )
    sub_1C3B9C0(Instance, v6);
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
    sub_1C3B9C0(that, method);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  TerminalSceneComponent_o **v20; // x22
  Il2CppObject *Instance; // x20
  System_String_o *v22; // x21
  UnityEngine_Vector2_o TUTORIAL_MENU_ARROW_POS2_FS; // kr00_8
  TerminalSceneComponent_o *v24; // x8
  float m_XMin; // s12
  float m_YMin; // s13
  float m_Width; // s10
  float m_Height; // s14
  float v29; // s0
  float v30; // s11
  System_Action_o *v31; // x22
  Il2CppObject *v32; // x23
  struct TerminalSceneComponent_StateTutorial5_MenuArrow___c_StaticFields *static_fields; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Action_o *v40; // x20
  UnityEngine_Rect_o v41; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4C24174 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, that);
    sub_1C3B764(&LocalizationManager_TypeInfo, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C3B764(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__begin_b__0_0__, v6);
    sub_1C3B764(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__1__, v7);
    sub_1C3B764(&TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_TypeInfo, v8);
    sub_1C3B764(&TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo, v9);
    sub_1C3B764(&StringLiteral_13782/*"The object {0} is being remoted by a proxy that does not support interface discovery.  This type of remoted object is not supported."*/, v10);
    byte_4C24174 = 1;
  }
  v11 = sub_1C3B9B0(TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_16;
  *(_QWORD *)(v11 + 16) = that;
  v20 = (TerminalSceneComponent_o **)(v11 + 16);
  sub_1C3B708((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)that, v14, v15, v16, v17, v18, v19);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_13782/*"The object {0} is being remoted by a proxy that does not support interface discovery.  This type of remoted object is not supported."*/, 0LL);
  if ( !*v20 )
    goto LABEL_16;
  v22 = (System_String_o *)v12;
  TUTORIAL_MENU_ARROW_POS2_FS = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_POS2_FS(*v20, v13);
  v24 = *v20;
  if ( !*v20 )
    goto LABEL_16;
  m_XMin = v24->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_XMin;
  m_YMin = v24->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_YMin;
  m_Width = v24->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width;
  m_Height = v24->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Height;
  v29 = TerminalSceneComponent__FSMenuOffsetX((TerminalSceneComponent_o *)v12, v13);
  v12 = TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo;
  v30 = v29;
  if ( !TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo);
    v12 = TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo;
  }
  v31 = *(System_Action_o **)(*((_QWORD *)v12 + 23) + 8LL);
  if ( !v31 )
  {
    if ( !*((_DWORD *)v12 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo;
    }
    v32 = (Il2CppObject *)**((_QWORD **)v12 + 23);
    v31 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v31, v32, Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__begin_b__0_0__, 0LL);
    static_fields = TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = v31;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)v31, v34, v35, v36, v37, v38, v39);
  }
  if ( !Instance )
LABEL_16:
    sub_1C3B9C0(v12, v13);
  v41.fields.m_Height = m_Height + 33.0;
  v41.fields.m_YMin = m_YMin + 33.0;
  v41.fields.m_XMin = m_XMin + v30;
  v41.fields.m_Width = m_Width;
  CommonUI__OpenTutorialNotificationDialogArrow(
    (CommonUI_o *)Instance,
    v22,
    TUTORIAL_MENU_ARROW_POS2_FS,
    v41,
    0.0,
    (UnityEngine_Vector2_o)0xC224000000000000LL,
    -1,
    v31,
    0LL);
  v40 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v40,
    (Il2CppObject *)v11,
    Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__1__,
    0LL);
  MainMenuBar__SetMenuBtnAct(v40, 0LL);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C24175 & 1) == 0 )
  {
    sub_1C3B764(&TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo, v1);
    byte_4C24175 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial5_MenuArrow___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4C24176 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C3B764(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__2__, v4);
    byte_4C24176 = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v9, v10, v11, v12, v13, v14);
  }
  if ( !v8 )
    sub_1C3B9C0(Instance, v6);
  CommonUI__CloseTutorialNotificationDialogArrow_31257460(v8, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1C3B9C0(0LL, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v7; // x21
  UnityEngine_WaitUntil_o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  bool result; // w0
  ChainableActionBase_o *openCampaignDirectBonus; // x0

  if ( (byte_4C241A3 & 1) == 0 )
  {
    sub_1C3B764(&System_Func_bool__TypeInfo, method);
    sub_1C3B764(&Method_TerminalSceneComponent__CoWaitBlankEarthActionEnd_b__255_0__, v3);
    sub_1C3B764(&UnityEngine_WaitUntil_TypeInfo, v4);
    byte_4C241A3 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    openCampaignDirectBonus = (ChainableActionBase_o *)this->fields.openCampaignDirectBonus;
    this->fields.__1__state = -1;
    if ( !openCampaignDirectBonus )
      sub_1C3B9C0(0LL, method);
    ChainableActionBase__Execute(openCampaignDirectBonus, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v7 = (System_Func_bool__o *)sub_1C3B9B0(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v7, _4__this, Method_TerminalSceneComponent__CoWaitBlankEarthActionEnd_b__255_0__, 0LL);
    v8 = (UnityEngine_WaitUntil_o *)sub_1C3B9B0(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v8, v7, 0LL);
    this->fields.__2__current = (Il2CppObject *)v8;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v8, v9, v10, v11, v12, v13, v14);
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

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__255_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v7; // x21
  UnityEngine_WaitUntil_o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  bool result; // w0
  ChainableActionBase_o *openCampaignDirectBonus; // x0

  if ( (byte_4C241A4 & 1) == 0 )
  {
    sub_1C3B764(&System_Func_bool__TypeInfo, method);
    sub_1C3B764(&Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_b__254_0__, v3);
    sub_1C3B764(&UnityEngine_WaitUntil_TypeInfo, v4);
    byte_4C241A4 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    openCampaignDirectBonus = (ChainableActionBase_o *)this->fields.openCampaignDirectBonus;
    this->fields.__1__state = -1;
    if ( !openCampaignDirectBonus )
      sub_1C3B9C0(0LL, method);
    ChainableActionBase__Execute(openCampaignDirectBonus, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v7 = (System_Func_bool__o *)sub_1C3B9B0(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v7, _4__this, Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_b__254_0__, 0LL);
    v8 = (UnityEngine_WaitUntil_o *)sub_1C3B9B0(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v8, v7, 0LL);
    this->fields.__2__current = (Il2CppObject *)v8;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v8, v9, v10, v11, v12, v13, v14);
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

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__254_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  bool result; // w0
  struct System_Action_o *callback; // x8

  v2 = this;
  if ( (byte_4C241A5 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&AtlasManager_TypeInfo, v3);
    sub_1C3B764(&System_Func_bool__TypeInfo, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v6);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__0__, v7);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__10__, v8);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__11__, v9);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__12__, v10);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__13__, v11);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__1__, v12);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__2__, v13);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__3__, v14);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__4__, v15);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__5__, v16);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__6__, v17);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__7__, v18);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__8__, v19);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__9__, v20);
    sub_1C3B764(&TerminalSceneComponent___c__DisplayClass176_0_TypeInfo, v21);
    this = (TerminalSceneComponent__LoadAsync_d__176_o *)sub_1C3B764(&UnityEngine_WaitUntil_TypeInfo, v22);
    byte_4C241A5 = 1;
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
  v25 = sub_1C3B9B0(TerminalSceneComponent___c__DisplayClass176_0_TypeInfo);
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
  v27 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__0__,
    0LL);
  if ( !_4__this )
    goto LABEL_23;
  TerminalSceneComponent__SetupStandServant(_4__this, usd, 0, v27, v28);
  this = (TerminalSceneComponent__LoadAsync_d__176_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !this )
    goto LABEL_23;
  if ( !AtlasManager__isLoadedSkinData((AtlasManager_o *)this, 4, 0LL) )
  {
    *(_BYTE *)(v25 + 17) = 0;
    v29 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      v29,
      (Il2CppObject *)v25,
      Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__1__,
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
  this = (TerminalSceneComponent__LoadAsync_d__176_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v31 = _4__this->fields._TransitionInfo_k__BackingField;
  if ( !v31
    || (v32 = (SoundManager_o *)this,
        voiceAssetName = v31->fields.voiceAssetName,
        v34 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo),
        System_Action___ctor(
          v34,
          (Il2CppObject *)v25,
          Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__2__,
          0LL),
        !v32) )
  {
LABEL_23:
    sub_1C3B9C0(this, method);
  }
  SoundManager__LoadAudioAssetStorage(v32, voiceAssetName, v34, 1, 0LL);
LABEL_17:
  v35 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__3__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadBanner(v35, 11, 0LL);
  v36 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__4__,
    0LL);
  AtlasManager__LoadFaceAtlas(v36, 11, 0LL);
  v37 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__5__,
    0LL);
  AtlasManager__LoadEquipFace(v37, 11, 0LL);
  v38 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__6__,
    0LL);
  AtlasManager__LoadFriendshipExceed(v38, 11, 0LL);
  v39 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__7__,
    0LL);
  AtlasManager__LoadCommandCode(v39, 11, 0LL);
  v40 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v40,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__8__,
    0LL);
  AtlasManager__LoadCommandCodeMini(v40, 11, 0LL);
  v41 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__9__,
    0LL);
  AtlasManager__LoadEventAtlas(v41, 11, 0LL);
  v42 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__10__,
    0LL);
  AtlasManager__LoadEventUI(v42, 11, 0LL);
  v43 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__11__,
    0LL);
  AtlasManager__LoadCharaGraphOptionAtlas(v43, 11, 0LL);
  v44 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v44,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__12__,
    0LL);
  AtlasManager__LoadPartyOrganizationAtlas(v44, 11, 0LL);
  v45 = (System_Func_bool__o *)sub_1C3B9B0(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v45,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__13__,
    0LL);
  v46 = (UnityEngine_WaitUntil_o *)sub_1C3B9B0(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v46, v45, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v46;
  p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
  sub_1C3B708(p__2__current, (int64_t)v46, v48, v49, v50, v51, v52, v53);
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

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_TerminalSceneComponent__LoadAsync_d__176_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  TerminalSceneComponent___c_c *v8; // x0
  System_Func_bool__o *_9__194_0; // x20
  Il2CppObject *v10; // x21
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  UnityEngine_WaitWhile_o *v18; // x21
  Il2CppObject **p__2__current; // x19
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  bool result; // w0

  if ( (byte_4C241A6 & 1) == 0 )
  {
    sub_1C3B764(&System_Func_bool__TypeInfo, method);
    sub_1C3B764(&SoundManager_TypeInfo, v3);
    sub_1C3B764(&Method_TerminalSceneComponent___c__WaitStopSEQuestPhaseRewardEffect_b__194_0__, v4);
    sub_1C3B764(&TerminalSceneComponent___c_TypeInfo, v5);
    sub_1C3B764(&UnityEngine_WaitWhile_TypeInfo, v6);
    byte_4C241A6 = 1;
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
  _9__194_0 = v8->static_fields->__9__194_0;
  if ( !_9__194_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = TerminalSceneComponent___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__194_0 = (System_Func_bool__o *)sub_1C3B9B0(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      _9__194_0,
      v10,
      Method_TerminalSceneComponent___c__WaitStopSEQuestPhaseRewardEffect_b__194_0__,
      0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__194_0 = _9__194_0;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__194_0,
      (int64_t)_9__194_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = (UnityEngine_WaitWhile_o *)sub_1C3B9B0(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v18, _9__194_0, 0LL);
  this->fields.__2__current = (Il2CppObject *)v18;
  p__2__current = &this->fields.__2__current;
  sub_1C3B708((PartyOrganizationUtility_o *)p__2__current, (int64_t)v18, v20, v21, v22, v23, v24, v25);
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

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__194_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C2417A & 1) == 0 )
  {
    sub_1C3B764(&TerminalSceneComponent___c_TypeInfo, v1);
    byte_4C2417A = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(TerminalSceneComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TerminalSceneComponent___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)TerminalSceneComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v7; // x0

  if ( (byte_4C24188 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, action);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v4);
    byte_4C24188 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1CAE4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v5);
    byte_4C1CAE4 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    sub_1C3B9C0(v7, v5);
  CommonUI__OpenCampaignDirectBonus(
    (CommonUI_o *)Instance,
    v7->static_fields->_CampaignDirectBonus_k__BackingField,
    action,
    0LL);
}


void __fastcall TerminalSceneComponent___c___CheckOpenCampaignDirectBonus_b__253_1(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v7; // x0

  if ( (byte_4C24189 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, action);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v4);
    byte_4C24189 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1CAE4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v5);
    byte_4C1CAE4 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    sub_1C3B9C0(v7, v5);
  CommonUI__OpenCampaignDirectBonusWithTransitionDialog(
    (CommonUI_o *)Instance,
    v7->static_fields->_CampaignDirectBonus_k__BackingField,
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

  if ( (byte_4C24186 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, action);
    byte_4C24186 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v5);
  CommonUI__StartFriendPointNotification((CommonUI_o *)Instance, action, 0LL);
}


void __fastcall TerminalSceneComponent___c___CheckRewardPopupChain_b__251_6(
        TerminalSceneComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C24187 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4C24187 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ClearLoginResultData((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__ReleaseFortuneBonusAssetData((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__ReleaseSelectBonusDialogAsset((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1C3B9C0(Instance, v3);
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

  if ( (byte_4C2417D & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, action);
    byte_4C2417D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v5);
  CommonUI__StartLoginAndCampaignBonus((CommonUI_o *)Instance, action, 0LL, 201, 0LL);
}


void __fastcall TerminalSceneComponent___c___Fadein_MapDisp_Start_b__198_1(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20

  if ( (byte_4C2417E & 1) == 0 )
  {
    sub_1C3B764(&AvalonSceneManager_TypeInfo, action);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4C2417E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v7
    || (CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__ClearLoginResultData((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__ReleaseFortuneBonusAssetData((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1C3B9C0(Instance, v6);
  }
  CommonUI__ReleaseLoginBonusWithTransitionDialogAssetData((CommonUI_o *)Instance, 0LL);
}


void __fastcall TerminalSceneComponent___c___Fadein_MapDisp_Start_b__198_6(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20

  if ( (byte_4C2417C & 1) == 0 )
  {
    sub_1C3B764(&AvalonSceneManager_TypeInfo, action);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4C2417C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v7 )
    sub_1C3B9C0(Instance, v6);
  CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_o *__fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__258_0(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4C2418A & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&x);
    sub_1C3B764(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4C2418A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v7);
  }
  return (ShopEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           x,
                           (const MethodInfo_329AE48 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
}


bool __fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__258_1(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3B9C0(this, 0LL);
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
    sub_1C3B9C0(this, 0LL);
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
    sub_1C3B9C0(this, 0LL);
  return x->fields.id;
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_o *__fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__258_5(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4C2418B & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&x);
    sub_1C3B764(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4C2418B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v7);
  }
  return (ShopEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           x,
                           (const MethodInfo_329AE48 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
}


int32_t __fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__258_6(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3B9C0(this, 0LL);
  return ShopEntity__GetPrice(x, 0LL);
}


void __fastcall TerminalSceneComponent___c___PlayAutoExecuteQuest_b__228_3(
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
  ScriptManager_CallbackFunc_o *_9__228_4; // x21
  Il2CppObject *v12; // x22
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4C24183 & 1) == 0 )
  {
    sub_1C3B764(&ScriptManager_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&ScriptManager_TypeInfo, v2);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v3);
    sub_1C3B764(&Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__228_4__, v4);
    sub_1C3B764(&TerminalSceneComponent___c_TypeInfo, v5);
    byte_4C24183 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1EA88 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1EA88 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v6->static_fields->_WarId_k__BackingField;
  if ( !byte_4C1CBC4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4C1CBC4 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v6->static_fields->_QuestId_k__BackingField;
  if ( !byte_4C1CBC3 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4C1CBC3 = 1;
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
  _9__228_4 = v9->static_fields->__9__228_4;
  if ( !_9__228_4 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = TerminalSceneComponent___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__228_4 = (ScriptManager_CallbackFunc_o *)sub_1C3B9B0(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(
      _9__228_4,
      v12,
      Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__228_4__,
      0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__228_4 = _9__228_4;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__228_4,
      (int64_t)_9__228_4,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent___c___PlayAutoExecuteQuest_b__228_4(
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
  NetworkManager_ResultCallbackFunc_o *_9__228_5; // x19
  Il2CppObject *v11; // x20
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  Il2CppObject *Request_object; // x19
  TerminalPramsManager_c *v21; // x0
  int32_t QuestId_k__BackingField; // w21
  int32_t PhaseCnt_k__BackingField; // w20
  System_Int32_array *SelectRouteArray; // x0
  __int64 v25; // x1

  if ( (byte_4C24184 & 1) == 0 )
  {
    sub_1C3B764(&Method_NetworkManager_getRequest_BattleScenarioRequest___, isExit);
    sub_1C3B764(&NetworkManager_TypeInfo, v3);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1C3B764(&ScriptManager_TypeInfo, v5);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v6);
    sub_1C3B764(&Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__228_5__, v7);
    sub_1C3B764(&TerminalSceneComponent___c_TypeInfo, v8);
    byte_4C24184 = 1;
  }
  v9 = TerminalSceneComponent___c_TypeInfo;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v9 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__228_5 = v9->static_fields->__9__228_5;
  if ( !_9__228_5 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = TerminalSceneComponent___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__228_5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__228_5,
      v11,
      Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__228_5__,
      0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__228_5 = _9__228_5;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__228_5,
      (int64_t)_9__228_5,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__228_5,
                     (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1CBC4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v19);
    byte_4C1CBC4 = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v21 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v21->static_fields->_QuestId_k__BackingField;
  if ( !byte_4C1CBC3 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v19);
    v21 = TerminalPramsManager_TypeInfo;
    byte_4C1CBC3 = 1;
  }
  if ( !v21->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v21);
    v21 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v21->static_fields->_PhaseCnt_k__BackingField;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  SelectRouteArray = ScriptManager__GetSelectRouteArray(0LL);
  if ( !Request_object )
    sub_1C3B9C0(SelectRouteArray, v25);
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

  if ( (byte_4C24185 & 1) == 0 )
  {
    sub_1C3B764(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___, jsonStr);
    sub_1C3B764(&JsonManager_TypeInfo, v4);
    sub_1C3B764(&ScriptManager_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v7);
    sub_1C3B764(&StringLiteral_16127/*"__field-group"*/, v8);
    sub_1C3B764(&StringLiteral_16386/*"align-items"*/, v9);
    byte_4C24185 = 1;
  }
  v10 = (Il2CppObject *)System_String__Concat_63379872(
                          (System_String_o *)StringLiteral_16127/*"__field-group"*/,
                          jsonStr,
                          (System_String_o *)StringLiteral_16386/*"align-items"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v11 = JsonManager__DeserializeArray_object_(
          v10,
          (const MethodInfo_3058CE8 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v11, 1, 0LL);
  if ( !byte_4C1CCCA )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v12);
    byte_4C1CCCA = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v13->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v15);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent___c___RebootToNetworkError_b__215_0(
        TerminalSceneComponent___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C24182 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, isDecide);
    byte_4C24182 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v4);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0LL);
}


void __fastcall TerminalSceneComponent___c___StartWindowMessage_b__200_1(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20

  if ( (byte_4C2417F & 1) == 0 )
  {
    sub_1C3B764(&AvalonSceneManager_TypeInfo, action);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4C2417F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v7 )
    sub_1C3B9C0(Instance, v6);
  CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0LL);
}


void __fastcall TerminalSceneComponent___c___StartWindowMessage_b__200_2(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  System_String_o *QuestWindowMessage_k__BackingField; // x20

  if ( (byte_4C24180 & 1) == 0 )
  {
    sub_1C3B764(&ScriptManager_TypeInfo, action);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v4);
    byte_4C24180 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C241AF )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, action);
    byte_4C241AF = 1;
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


void __fastcall TerminalSceneComponent___c___StartWindowMessage_b__200_3(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x20
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_4C24181 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, action);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v4);
    byte_4C24181 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1DCA4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, action);
    byte_4C1DCA4 = 1;
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
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0LL, 0, 0LL);
      goto LABEL_22;
    }
LABEL_23:
    sub_1C3B9C0(Instance, v6);
  }
  v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C241B1 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v6);
    byte_4C241B1 = 1;
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


bool __fastcall TerminalSceneComponent___c___WaitStopSEQuestPhaseRewardEffect_b__194_0(
        TerminalSceneComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C2417B & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__, method);
    byte_4C2417B = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v3);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct TerminalSceneComponent_o *_4__this; // x21
  Il2CppObject *Object_object__50142412; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct TerminalSceneComponent_o *v17; // x8
  struct TerminalSceneComponent_o *v18; // x20
  Il2CppObject *ComponentInChildren_object; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  v4 = this;
  if ( (byte_4C2418C & 1) == 0 )
  {
    sub_1C3B764(&Method_AssetData_GetObject_GameObject____77902856, data);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponentInChildren_BaseCore___, v5);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v7);
    this = (TerminalSceneComponent___c__DisplayClass173_0_o *)sub_1C3B764(&StringLiteral_4846/*"Custom/SoftEdgeUnlitCutZ (SoftClip)"*/, v8);
    byte_4C2418C = 1;
  }
  if ( !data )
    goto LABEL_11;
  _4__this = v4->fields.__4__this;
  Object_object__50142412 = AssetData__GetObject_object__50142412(
                              data,
                              (System_String_o *)StringLiteral_4846/*"Custom/SoftEdgeUnlitCutZ (SoftClip)"*/,
                              (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (TerminalSceneComponent___c__DisplayClass173_0_o *)UnityEngine_Object__Instantiate_object_(
                                                              Object_object__50142412,
                                                              (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !_4__this
    || (_4__this->fields.mEarthCoreObj = (struct UnityEngine_GameObject_o *)this,
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&_4__this->fields.mEarthCoreObj,
          (int64_t)this,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16),
        (v17 = v4->fields.__4__this) == 0LL)
    || (GameObjectExtensions__SafeSetParent_34969340(v17->fields.mEarthCoreObj, v17->fields.mUiRoot, 0LL),
        (v18 = v4->fields.__4__this) == 0LL)
    || (this = (TerminalSceneComponent___c__DisplayClass173_0_o *)v18->fields.mEarthCoreObj) == 0LL )
  {
LABEL_11:
    sub_1C3B9C0(this, data);
  }
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)this,
                                 (const MethodInfo_3041C7C *)Method_UnityEngine_GameObject_GetComponentInChildren_BaseCore___);
  v18->fields.mEarthCore = (struct BaseCore_o *)ComponentInChildren_object;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v18->fields.mEarthCore,
    (int64_t)ComponentInChildren_object,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
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
      sub_1C3B9C0(this, method);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  UserServantEntity_o *NextStandServant; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  long double inited; // q0
  struct TerminalSceneComponent_o *v27; // x8
  int32_t mStandSvtIdx; // w22
  struct TerminalSceneComponent_o *v29; // x8
  struct BaseCore_o *v30; // x22
  struct TerminalSceneComponent_o *v31; // x8
  StandFigureSlideComponent_o *v32; // x19
  System_Action_o *v33; // x21
  struct TerminalSceneComponent_o *v34; // x8
  struct BaseCore_o *v35; // x21
  struct TerminalSceneComponent_o *v36; // x8

  v2 = this;
  if ( (byte_4C2418D & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v3);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass189_1__SetupStandServant_b__2__, v4);
    this = (TerminalSceneComponent___c__DisplayClass189_0_o *)sub_1C3B764(
                                                                &TerminalSceneComponent___c__DisplayClass189_1_TypeInfo,
                                                                v5);
    byte_4C2418D = 1;
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
      v7 = v2->fields.__4__this;
      if ( !v7 )
        goto LABEL_54;
      this = (TerminalSceneComponent___c__DisplayClass189_0_o *)v7->fields.mEarthCore;
      if ( !this )
        goto LABEL_54;
      if ( !BYTE1(this[3].fields.__4__this) )
      {
        *(float *)&v8 = ((float (__fastcall *)(TerminalSceneComponent___c__DisplayClass189_0_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
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
              v12 = sub_1C3B9B0(TerminalSceneComponent___c__DisplayClass189_1_TypeInfo);
              System_Object___ctor((Il2CppObject *)v12, 0LL);
              if ( v12 )
              {
                *(_QWORD *)(v12 + 24) = v2;
                sub_1C3B708((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)v2, v13, v14, v15, v16, v17, v18);
                this = (TerminalSceneComponent___c__DisplayClass189_0_o *)v2->fields.__4__this;
                if ( this )
                {
                  NextStandServant = TerminalSceneComponent__GetNextStandServant(
                                       (TerminalSceneComponent_o *)this,
                                       method);
                  *(_QWORD *)(v12 + 16) = NextStandServant;
                  sub_1C3B708(
                    (PartyOrganizationUtility_o *)(v12 + 16),
                    (int64_t)NextStandServant,
                    v20,
                    v21,
                    v22,
                    v23,
                    v24,
                    v25);
                  v27 = v2->fields.__4__this;
                  if ( v27 )
                  {
                    mStandSvtIdx = v27->fields.mStandSvtIdx;
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                      inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    if ( !byte_4C241AB )
                    {
                      sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
                      byte_4C241AB = 1;
                    }
                    this = (TerminalSceneComponent___c__DisplayClass189_0_o *)TerminalPramsManager_TypeInfo;
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    {
                      inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                      this = (TerminalSceneComponent___c__DisplayClass189_0_o *)TerminalPramsManager_TypeInfo;
                    }
                    BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x) = mStandSvtIdx != 0;
                    v29 = v2->fields.__4__this;
                    if ( v29 )
                    {
                      v30 = v29->fields.mEarthCore;
                      if ( !byte_4C1F040 )
                      {
                        sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
                        this = (TerminalSceneComponent___c__DisplayClass189_0_o *)TerminalPramsManager_TypeInfo;
                        byte_4C1F040 = 1;
                      }
                      if ( !LODWORD(this[5].fields.__4__this) )
                      {
                        inited = j_il2cpp_runtime_class_init_0(this);
                        this = (TerminalSceneComponent___c__DisplayClass189_0_o *)TerminalPramsManager_TypeInfo;
                      }
                      if ( v30 )
                      {
                        this = (TerminalSceneComponent___c__DisplayClass189_0_o *)((__int64 (__fastcall *)(struct BaseCore_o *, bool, _QWORD, Il2CppMethodPointer, long double))v30->klass->vtable._4_FocusInOut.method)(
                                                                                    v30,
                                                                                    BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x) == 0,
                                                                                    0LL,
                                                                                    v30->klass->vtable._5_Awake.methodPtr,
                                                                                    inited);
                        v31 = v2->fields.__4__this;
                        if ( v31 )
                        {
                          v32 = v31->fields.mTerminalServant;
                          v33 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
                          System_Action___ctor(
                            v33,
                            (Il2CppObject *)v12,
                            Method_TerminalSceneComponent___c__DisplayClass189_1__SetupStandServant_b__2__,
                            0LL);
                          if ( v32 )
                          {
                            StandFigureSlideComponent__SlideOut(v32, v33, 0, 0LL);
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
              if ( !byte_4C241AB )
              {
                sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
                byte_4C241AB = 1;
              }
              this = (TerminalSceneComponent___c__DisplayClass189_0_o *)TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                v8 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                this = (TerminalSceneComponent___c__DisplayClass189_0_o *)TerminalPramsManager_TypeInfo;
              }
              BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x) = 1;
              v34 = v2->fields.__4__this;
              if ( v34 )
              {
                v35 = v34->fields.mEarthCore;
                if ( !byte_4C1F040 )
                {
                  sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
                  this = (TerminalSceneComponent___c__DisplayClass189_0_o *)TerminalPramsManager_TypeInfo;
                  byte_4C1F040 = 1;
                }
                if ( !LODWORD(this[5].fields.__4__this) )
                {
                  v8 = j_il2cpp_runtime_class_init_0(this);
                  this = (TerminalSceneComponent___c__DisplayClass189_0_o *)TerminalPramsManager_TypeInfo;
                }
                if ( v35 )
                {
                  this = (TerminalSceneComponent___c__DisplayClass189_0_o *)((__int64 (__fastcall *)(struct BaseCore_o *, bool, _QWORD, Il2CppMethodPointer, long double))v35->klass->vtable._4_FocusInOut.method)(
                                                                              v35,
                                                                              BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x) == 0,
                                                                              0LL,
                                                                              v35->klass->vtable._5_Awake.methodPtr,
                                                                              v8);
                  v36 = v2->fields.__4__this;
                  if ( v36 )
                  {
                    this = (TerminalSceneComponent___c__DisplayClass189_0_o *)v36->fields.mTerminalServant;
                    if ( this )
                    {
                      StandFigureSlideComponent__SlideIn((StandFigureSlideComponent_o *)this, 0LL, 0LL);
                      goto LABEL_53;
                    }
                  }
                }
              }
LABEL_54:
              sub_1C3B9C0(this, method);
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
  if ( (byte_4C2418E & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass189_1_o *)sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C2418E = 1;
  }
  CS___8__locals1 = v3->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_12;
  _4__this = CS___8__locals1->fields.__4__this;
  usd = v3->fields._usd;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F040 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F040 = 1;
  }
  this = (TerminalSceneComponent___c__DisplayClass189_1_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass189_1_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !_4__this )
LABEL_12:
    sub_1C3B9C0(this, method);
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
    sub_1C3B9C0(0LL, method);
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
  __int64 v4; // x1
  System_Action_o *_9__3; // x22
  TerminalSceneComponent_o *_4__this; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  v3 = this;
  if ( (byte_4C2418F & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    this = (TerminalSceneComponent___c__DisplayClass195_0_o *)sub_1C3B764(
                                                                &Method_TerminalSceneComponent___c__DisplayClass195_0__coFadein_WorldDisp_b__3__,
                                                                v4);
    byte_4C2418F = 1;
  }
  _9__3 = v3->fields.__9__3;
  _4__this = v3->fields.__4__this;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v3,
      Method_TerminalSceneComponent___c__DisplayClass195_0__coFadein_WorldDisp_b__3__,
      0LL);
    v3->fields.__9__3 = _9__3;
    sub_1C3B708((PartyOrganizationUtility_o *)&v3->fields.__9__3, (int64_t)_9__3, v7, v8, v9, v10, v11, v12);
  }
  if ( !_4__this )
    sub_1C3B9C0(this, method);
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
    sub_1C3B9C0(_4__this, method);
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
    sub_1C3B9C0(this, method);
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
    sub_1C3B9C0(this, action);
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
    sub_1C3B9C0(this, method);
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
    sub_1C3B9C0(this, action);
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
  if ( (byte_4C24190 & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass198_0_o *)sub_1C3B764(
                                                                &Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__,
                                                                action);
    byte_4C24190 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (mTerminalMap = _4__this->fields.mTerminalMap) == 0LL
    || (this = (TerminalSceneComponent___c__DisplayClass198_0_o *)mTerminalMap->fields.spotMaskObj) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (this = (TerminalSceneComponent___c__DisplayClass198_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__)) == 0LL) )
  {
    sub_1C3B9C0(this, action);
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
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *IsNullOrEmpty; // x0
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x1
  TerminalPramsManager_c *v9; // x0
  const MethodInfo *v10; // x2
  Il2CppObject *Instance; // x19
  struct TerminalSceneComponent___c__DisplayClass198_0_o *CS___8__locals1; // x8

  if ( (byte_4C24191 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v3);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v4);
    byte_4C24191 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C1CAE3 )
  {
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, method);
    byte_4C1CAE3 = 1;
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
  if ( !byte_4C241AF )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v8);
    byte_4C241AF = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C241B1 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
      byte_4C241B1 = 1;
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
    sub_1C3B9C0(IsNullOrEmpty, method);
  }
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_30;
  IsNullOrEmpty = (UnityEngine_GameObject_o *)CS___8__locals1->fields.__4__this;
  if ( !IsNullOrEmpty )
    goto LABEL_30;
  TerminalSceneComponent__StartWindowMessage((TerminalSceneComponent_o *)IsNullOrEmpty, 0LL, v10);
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__2; // x21
  CommonUI_o *v8; // x20
  float fadeTime; // s8
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4C24192 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass201_0__FadeInAndTriggerEventEffects_b__2__, v4);
    byte_4C24192 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  fadeTime = this->fields.fadeTime;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent___c__DisplayClass201_0__FadeInAndTriggerEventEffects_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v10, v11, v12, v13, v14, v15);
  }
  if ( !v8 )
    sub_1C3B9C0(Instance, v6);
  CommonUI__maskFadein(v8, fadeTime, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass201_0___FadeInAndTriggerEventEffects_b__1(
        TerminalSceneComponent___c__DisplayClass201_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1C3B9C0(this, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__3; // x22
  QuestAfterAction_o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4C24193 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v3);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass201_0__FadeInAndTriggerEventEffects_b__3__, v4);
    byte_4C24193 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  _9__3 = this->fields.__9__3;
  v8 = (QuestAfterAction_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent___c__DisplayClass201_0__FadeInAndTriggerEventEffects_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__9__3, (int64_t)_9__3, v9, v10, v11, v12, v13, v14);
  }
  if ( !v8 )
    sub_1C3B9C0(Instance, v6);
  QuestAfterAction__Play(v8, _9__3, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass201_0___FadeInAndTriggerEventEffects_b__3(
        TerminalSceneComponent___c__DisplayClass201_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1C3B9C0(this, method);
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
    sub_1C3B9C0(this, method);
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
    sub_1C3B9C0(this, method);
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
    sub_1C3B9C0(0LL, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct TerminalSceneComponent_o *_4__this; // x8
  ScrTerminalListTop_o *mTerminalList; // x20
  int32_t invoke_impl; // w21
  int m_target; // w24
  System_Action_o *_9__6; // x22
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  v2 = this;
  if ( (byte_4C24196 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v3);
    this = (TerminalSceneComponent___c__DisplayClass228_0_o *)sub_1C3B764(
                                                                &Method_TerminalSceneComponent___c__DisplayClass228_0__PlayAutoExecuteQuest_b__6__,
                                                                v4);
    byte_4C24196 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  mTerminalList = _4__this->fields.mTerminalList;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1CBC4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1CBC4 = 1;
  }
  this = (TerminalSceneComponent___c__DisplayClass228_0_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass228_0_o *)TerminalPramsManager_TypeInfo;
  }
  invoke_impl = this[3].fields.__9__6->fields.invoke_impl;
  if ( !byte_4C1CBC3 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    this = (TerminalSceneComponent___c__DisplayClass228_0_o *)TerminalPramsManager_TypeInfo;
    byte_4C1CBC3 = 1;
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
    _9__6 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)v2,
      Method_TerminalSceneComponent___c__DisplayClass228_0__PlayAutoExecuteQuest_b__6__,
      0LL);
    v2->fields.__9__6 = _9__6;
    sub_1C3B708((PartyOrganizationUtility_o *)&v2->fields.__9__6, (int64_t)_9__6, v10, v11, v12, v13, v14, v15);
  }
  if ( !mTerminalList )
LABEL_18:
    sub_1C3B9C0(this, method);
  ScrTerminalListTop__StartWindowMessage_35659532(mTerminalList, invoke_impl, m_target + 1, 2, _9__6, 0, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass228_0___PlayAutoExecuteQuest_b__1(
        TerminalSceneComponent___c__DisplayClass228_0_o *this,
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  clsQuestCheck_o *v21; // x19
  TerminalSceneComponent___c_c *v22; // x8
  System_Action_o *_9__228_3; // x20
  Il2CppObject *v24; // x21
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  if ( (byte_4C24194 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, result);
    sub_1C3B764(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v4);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v5);
    sub_1C3B764(&Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__228_3__, v6);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass228_0__PlayAutoExecuteQuest_b__2__, v7);
    sub_1C3B764(&TerminalSceneComponent___c_TypeInfo, v8);
    byte_4C24194 = 1;
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
      if ( !byte_4C1CBC4 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, result);
        byte_4C1CBC4 = 1;
      }
      questEnt = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        questEnt = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      }
      name_high = HIDWORD(questEnt[1].klass->_1.name);
      if ( !byte_4C1CBC3 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, result);
        questEnt = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
        byte_4C1CBC3 = 1;
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
        _9__2 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
        System_Action___ctor(
          _9__2,
          (Il2CppObject *)this,
          Method_TerminalSceneComponent___c__DisplayClass228_0__PlayAutoExecuteQuest_b__2__,
          0LL);
        this->fields.__9__2 = _9__2;
        sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v15, v16, v17, v18, v19, v20);
      }
      if ( mTerminalList )
      {
        ScrTerminalListTop__StartWindowMessage_35659532(mTerminalList, name_high, namespaze + 1, 2, _9__2, 1, 0LL);
        return;
      }
    }
LABEL_28:
    sub_1C3B9C0(questEnt, result);
  }
  questEnt = (QuestEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v21 = (clsQuestCheck_o *)questEnt;
  v22 = TerminalSceneComponent___c_TypeInfo;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v22 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__228_3 = v22->static_fields->__9__228_3;
  if ( !_9__228_3 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = TerminalSceneComponent___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v22->static_fields->__9;
    _9__228_3 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(_9__228_3, v24, Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__228_3__, 0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__228_3 = _9__228_3;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__228_3,
      (int64_t)_9__228_3,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  if ( !v21 )
    goto LABEL_28;
  clsQuestCheck__PlayQuestStartAction(v21, _9__228_3, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass228_0___PlayAutoExecuteQuest_b__2(
        TerminalSceneComponent___c__DisplayClass228_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass228_0_o *v2; // x20
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
  if ( (byte_4C24195 & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass228_0_o *)sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C24195 = 1;
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
  if ( !byte_4C1CBC4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v6);
    byte_4C1CBC4 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v7->static_fields->_QuestId_k__BackingField;
  if ( !byte_4C1ECD9 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v6);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4C1ECD9 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_LastPlayedQuestId_k__BackingField = QuestId_k__BackingField;
  if ( !byte_4C1CBC4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v6);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4C1CBC4 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  TerminalPramsManager__CheckClearSelectedStoryQuestId(v7->static_fields->_QuestId_k__BackingField, 0LL);
  if ( !byte_4C1CBC4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v9);
    byte_4C1CBC4 = 1;
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
    if ( !byte_4C1CBC4 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v12);
      byte_4C1CBC4 = 1;
    }
    v14 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v14 = TerminalPramsManager_TypeInfo;
    }
    SpotId = QuestMaster__GetSpotId(v14->static_fields->_QuestId_k__BackingField, 0LL);
    if ( !byte_4C1ECDA )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v15);
      byte_4C1ECDA = 1;
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
  this = (TerminalSceneComponent___c__DisplayClass228_0_o *)v17->fields.mTerminalList;
  if ( !this )
    goto LABEL_60;
  Effect = ScrTerminalListTop__IsDisplayGetEffect((ScrTerminalListTop_o *)this, 0LL);
  if ( !byte_4C1ECDB )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1ECDB = 1;
  }
  this = (TerminalSceneComponent___c__DisplayClass228_0_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass228_0_o *)TerminalPramsManager_TypeInfo;
  }
  BYTE2(this[3].fields.__9__6[1].fields.data) = Effect;
  v19 = v2->fields.__4__this;
  if ( !v19 )
    goto LABEL_60;
  mTerminalList = v19->fields.mTerminalList;
  if ( !byte_4C1CBC4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    this = (TerminalSceneComponent___c__DisplayClass228_0_o *)TerminalPramsManager_TypeInfo;
    byte_4C1CBC4 = 1;
  }
  if ( !LODWORD(this[4].fields.__9__2) )
  {
    j_il2cpp_runtime_class_init_0(this);
    this = (TerminalSceneComponent___c__DisplayClass228_0_o *)TerminalPramsManager_TypeInfo;
  }
  invoke_impl = this[3].fields.__9__6->fields.invoke_impl;
  if ( !byte_4C1CBC3 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    this = (TerminalSceneComponent___c__DisplayClass228_0_o *)TerminalPramsManager_TypeInfo;
    byte_4C1CBC3 = 1;
  }
  if ( !LODWORD(this[4].fields.__9__2) )
  {
    j_il2cpp_runtime_class_init_0(this);
    this = (TerminalSceneComponent___c__DisplayClass228_0_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !mTerminalList )
LABEL_60:
    sub_1C3B9C0(this, method);
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
  if ( (byte_4C24197 & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass228_0_o *)sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C24197 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_22;
  mTerminalList = _4__this->fields.mTerminalList;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1EA88 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1EA88 = 1;
  }
  this = (TerminalSceneComponent___c__DisplayClass228_0_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass228_0_o *)TerminalPramsManager_TypeInfo;
  }
  klass_high = HIDWORD(this[3].fields.__9__6->klass);
  if ( !byte_4C1CBC4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    this = (TerminalSceneComponent___c__DisplayClass228_0_o *)TerminalPramsManager_TypeInfo;
    byte_4C1CBC4 = 1;
  }
  if ( !LODWORD(this[4].fields.__9__2) )
  {
    j_il2cpp_runtime_class_init_0(this);
    this = (TerminalSceneComponent___c__DisplayClass228_0_o *)TerminalPramsManager_TypeInfo;
  }
  invoke_impl = this[3].fields.__9__6->fields.invoke_impl;
  if ( !byte_4C1CBC3 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    this = (TerminalSceneComponent___c__DisplayClass228_0_o *)TerminalPramsManager_TypeInfo;
    byte_4C1CBC3 = 1;
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
    sub_1C3B9C0(this, method);
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
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  TerminalSceneComponent_o *_4__this; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  v3 = this;
  if ( (byte_4C24198 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    this = (TerminalSceneComponent___c__DisplayClass233_0_o *)sub_1C3B764(
                                                                &Method_TerminalSceneComponent___c__DisplayClass233_0__PlayEventTutorial_b__1__,
                                                                v4);
    byte_4C24198 = 1;
  }
  _9__1 = v3->fields.__9__1;
  _4__this = v3->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_TerminalSceneComponent___c__DisplayClass233_0__PlayEventTutorial_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1C3B708((PartyOrganizationUtility_o *)&v3->fields.__9__1, (int64_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !_4__this )
    sub_1C3B9C0(this, method);
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
    sub_1C3B9C0(this, method);
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
  __int64 v5; // x1
  __int64 v6; // x1
  ScrTerminalListTop_o *Instance; // x0
  __int64 v8; // x1
  struct TerminalSceneComponent_o *_4__this; // x8
  CommonUI_o *v10; // x21
  struct TerminalSceneComponent_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_4C24199 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_DialogMessageMaster___, action);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4C24199 = 1;
  }
  Instance = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        (Instance = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (Instance = (ScrTerminalListTop_o *)CommonUI__get_CampaignDirectBonus((CommonUI_o *)Instance, 0LL), !v11)
    || (TerminalSceneComponent__SaveCampaignDirectBonusData(
          (TerminalSceneComponent_o *)Instance,
          (CommonUI_CampaignDirectBonusData_array *)Instance,
          v12),
        (Instance = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (ScrTerminalListTop_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_DialogMessageMaster___)) == 0LL )
  {
LABEL_11:
    sub_1C3B9C0(Instance, v8);
  }
  DialogMessageMaster__ShowAvailables((DialogMessageMaster_o *)Instance, 1, action, 0, 0, 0, 0, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass251_0___CheckRewardPopupChain_b__1(
        TerminalSceneComponent___c__DisplayClass251_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  System_Action_o *_9__5; // x22
  CommonUI_o *v10; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4C2419A & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, action);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass251_0__CheckRewardPopupChain_b__5__, v6);
    byte_4C2419A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__5 = this->fields.__9__5;
  v10 = (CommonUI_o *)Instance;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent___c__DisplayClass251_0__CheckRewardPopupChain_b__5__,
      0LL);
    this->fields.__9__5 = _9__5;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__9__5, (int64_t)_9__5, v11, v12, v13, v14, v15, v16);
  }
  if ( !v10 )
    sub_1C3B9C0(Instance, v8);
  CommonUI__StartLoginAndCampaignBonus(v10, action, _9__5, -1, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass251_0___CheckRewardPopupChain_b__3(
        TerminalSceneComponent___c__DisplayClass251_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (TerminalSceneComponent___c__DisplayClass251_0_o *)_4__this->fields.mTerminalList) == 0LL )
    sub_1C3B9C0(this, action);
  ScrTerminalListTop__CheckLoginAfterTransitionDialog((ScrTerminalListTop_o *)this, action, 100, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass251_0___CheckRewardPopupChain_b__4(
        TerminalSceneComponent___c__DisplayClass251_0_o *this,
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C2419B & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMaster_EventDetailMaster___, v3);
    sub_1C3B764(&DataManager_TypeInfo, v4);
    sub_1C3B764(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v6);
    sub_1C3B764(&Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__251_6__, v7);
    sub_1C3B764(&TerminalSceneComponent___c_TypeInfo, v8);
    byte_4C2419B = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1EA88 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1EA88 = 1;
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
    if ( !byte_4C1EA88 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
      byte_4C1EA88 = 1;
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_object )
    goto LABEL_39;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
    &entity,
    EventID,
    (const MethodInfo_329AE94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1EC68 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v13);
    byte_4C1EC68 = 1;
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
    v17 = *(System_Action_o **)(*((_QWORD *)Master_object + 23) + 120LL);
    if ( !v17 )
    {
      if ( !*((_DWORD *)Master_object + 56) )
      {
        j_il2cpp_runtime_class_init_0(Master_object);
        Master_object = TerminalSceneComponent___c_TypeInfo;
      }
      v18 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
      v17 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(v17, v18, Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__251_6__, 0LL);
      static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
      static_fields->__9__251_6 = v17;
      sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__251_6, (int64_t)v17, v20, v21, v22, v23, v24, v25);
    }
    if ( _4__this )
    {
      TerminalSceneComponent__CheckOpenCampaignDirectBonus(_4__this, v17, v14);
      goto LABEL_38;
    }
LABEL_39:
    sub_1C3B9C0(Master_object, v13);
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
    sub_1C3B9C0(this, method);
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
  if ( (byte_4C2419C & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass253_0_o *)sub_1C3B764(&TerminalPramsManager_TypeInfo, action);
    byte_4C2419C = 1;
  }
  _4__this = v8->fields.__4__this;
  if ( !_4__this )
    sub_1C3B9C0(this, action);
  _4__this->fields._IsPlayingCampaignDirectBonus_k__BackingField = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F4E4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, action);
    byte_4C1F4E4 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v10->static_fields;
  static_fields->_CampaignDirectBonus_k__BackingField = 0LL;
  sub_1C3B708(
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
  if ( (byte_4C2419D & 1) == 0 )
  {
    sub_1C3B764(&ScriptManager_TypeInfo, str);
    byte_4C2419D = 1;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent___c__DisplayClass262_0___CheckMasterMissionReset_b__0(
        TerminalSceneComponent___c__DisplayClass262_0_o *this,
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  TerminalSceneComponent_c *v18; // x0
  System_String_o *MASTER_MISSION_RESET_KEY; // x21
  System_String_o *v20; // x0
  Il2CppObject *Instance; // x19
  System_Action_o *v22; // x21

  if ( (byte_4C2419E & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, isDecide);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v6);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass262_1__CheckMasterMissionReset_b__1__, v7);
    sub_1C3B764(&TerminalSceneComponent___c__DisplayClass262_1_TypeInfo, v8);
    byte_4C2419E = 1;
  }
  v9 = sub_1C3B9B0(TerminalSceneComponent___c__DisplayClass262_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 24) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_BYTE *)(v9 + 16) = isDecide;
  v18 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v18 = TerminalSceneComponent_TypeInfo;
  }
  MASTER_MISSION_RESET_KEY = v18->static_fields->MASTER_MISSION_RESET_KEY;
  v20 = System_Int64__ToString((int64_t)&this->fields, 0LL);
  UnityEngine_PlayerPrefs__SetString(MASTER_MISSION_RESET_KEY, v20, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v9,
    Method_TerminalSceneComponent___c__DisplayClass262_1__CheckMasterMissionReset_b__1__,
    0LL);
  if ( !Instance )
LABEL_8:
    sub_1C3B9C0(v10, v11);
  CommonUI__CloseConfirmDialog_31232440((CommonUI_o *)Instance, v22, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass262_0___CheckMasterMissionReset_b__2(
        TerminalSceneComponent___c__DisplayClass262_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  ScrPlayerStatus_o *mPlayerStatus; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (mPlayerStatus = _4__this->fields.mPlayerStatus) == 0LL )
    sub_1C3B9C0(this, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x19
  struct TerminalSceneComponent___c__DisplayClass262_0_o *CS___8__locals1; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__2; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct TerminalSceneComponent___c__DisplayClass262_0_o *v17; // x8

  v2 = this;
  if ( (byte_4C2419F & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&AvalonSceneManager_TypeInfo, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    this = (TerminalSceneComponent___c__DisplayClass262_1_o *)sub_1C3B764(
                                                                &Method_TerminalSceneComponent___c__DisplayClass262_0__CheckMasterMissionReset_b__2__,
                                                                v5);
    byte_4C2419F = 1;
  }
  if ( v2->fields.isDecide )
  {
    this = (TerminalSceneComponent___c__DisplayClass262_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        _9__2 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
        System_Action___ctor(
          _9__2,
          (Il2CppObject *)CS___8__locals1,
          Method_TerminalSceneComponent___c__DisplayClass262_0__CheckMasterMissionReset_b__2__,
          0LL);
        CS___8__locals1->fields.__9__2 = _9__2;
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&CS___8__locals1->fields.__9__2,
          (int64_t)_9__2,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
      }
      if ( v7 )
      {
        CommonUI__maskFadeout(v7, 1, DEFAULT_FADE_TIME, _9__2, 0LL);
        return;
      }
    }
LABEL_13:
    sub_1C3B9C0(this, method);
  }
  v17 = v2->fields.CS___8__locals1;
  if ( !v17 )
    goto LABEL_13;
  ActionExtensions__Call(v17->fields.callback, 0LL);
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

  if ( (byte_4C241A0 & 1) == 0 )
  {
    sub_1C3B764(&BattleResultBondsComponent_TypeInfo, method);
    byte_4C241A0 = 1;
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

  if ( (byte_4C241A1 & 1) == 0 )
  {
    sub_1C3B764(&BattleResultBondsComponent_TypeInfo, method);
    byte_4C241A1 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct TerminalSceneComponent___c__DisplayClass263_0_o *CS___8__locals1; // x21
  GetSvtCoin_array *coin; // x20
  System_Action_o *_9__2; // x22
  CommonUI_o *v10; // x19
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4C241A2 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass263_0__CheckNotificationDialog_b__2__, v4);
    byte_4C241A2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  coin = this->fields.coin;
  _9__2 = CS___8__locals1->fields.__9__2;
  v10 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)CS___8__locals1,
      Method_TerminalSceneComponent___c__DisplayClass263_0__CheckNotificationDialog_b__2__,
      0LL);
    CS___8__locals1->fields.__9__2 = _9__2;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&CS___8__locals1->fields.__9__2,
      (int64_t)_9__2,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !v10 )
LABEL_8:
    sub_1C3B9C0(Instance, v6);
  CommonUI__CreateServantCoinConfirmDialog(v10, 1, coin, _9__2, 0LL);
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
  int32_t _1__state; // w8
  struct TerminalSceneComponent_o *_4__this; // x20
  Il2CppObject *v20; // x22
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  Il2CppObject *endAct; // x1
  TerminalPramsManager_c *v41; // x0
  _BOOL8 IsBusy; // x0
  const MethodInfo *v43; // x1
  System_Collections_IEnumerator_o *v44; // x0
  System_Action_c *klass; // x8
  __int64 v46; // x8
  TerminalPramsManager_c *v47; // x0
  System_Collections_IEnumerator_o *v48; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  bool result; // w0
  Il2CppObject *Master_object; // x21
  System_String_o *ShowingFolderBGM; // x0
  const MethodInfo *v59; // x2
  const MethodInfo *v60; // x3
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v62; // x8
  Il2CppObject *v63; // x21
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v65; // x0
  __int64 *v66; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct ScrTerminalListTop_o *v68; // x8
  Il2CppObject *_8__1; // x19
  System_Action_o *v70; // x21
  const MethodInfo *v71; // x2
  AvalonSceneManager_c *v72; // x8
  System_Action_o *v73; // x19
  struct TerminalSceneComponent___c__DisplayClass195_0_o *v74; // x9
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4C241A7 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&AvalonSceneManager_TypeInfo, v3);
    sub_1C3B764(&Method_DataManager_GetMaster_WarMaster___, v4);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    sub_1C3B764(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v6);
    sub_1C3B764(&System_GC_TypeInfo, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v9);
    sub_1C3B764(&Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__, v10);
    sub_1C3B764(&SoundManager_TypeInfo, v11);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v12);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v13);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass195_0__coFadein_WorldDisp_b__0__, v14);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass195_0__coFadein_WorldDisp_b__1__, v15);
    sub_1C3B764(&Method_TerminalSceneComponent___c__DisplayClass195_0__coFadein_WorldDisp_b__2__, v16);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)sub_1C3B764(
                                                                    &TerminalSceneComponent___c__DisplayClass195_0_TypeInfo,
                                                                    v17);
    byte_4C241A7 = 1;
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
    v20 = (Il2CppObject *)sub_1C3B9B0(TerminalSceneComponent___c__DisplayClass195_0_TypeInfo);
    System_Object___ctor(v20, 0LL);
    v2->fields.__8__1 = (struct TerminalSceneComponent___c__DisplayClass195_0_o *)v20;
    sub_1C3B708((PartyOrganizationUtility_o *)&v2->fields.__8__1, (int64_t)v20, v21, v22, v23, v24, v25, v26);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_108;
    v33 = (int64_t)v2->fields.__4__this;
    *(_QWORD *)&this->fields.__1__state = v33;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, v33, v27, v28, v29, v30, v31, v32);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_108;
    endAct = (Il2CppObject *)v2->fields.endAct;
    this->fields.__2__current = endAct;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)endAct, v34, v35, v36, v37, v38, v39);
    v2->fields._isAuto_5__2 = 0;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F05C )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
      byte_4C1F05C = 1;
    }
    v41 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v41 = TerminalPramsManager_TypeInfo;
    }
    if ( !v41->static_fields->_IsMapReturnFolder_k__BackingField )
    {
      if ( !v41->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v41);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)TerminalPramsManager__IsAuto(0LL);
      v2->fields._isAuto_5__2 = (unsigned __int8)this & 1;
      if ( !_4__this )
        goto LABEL_108;
      TerminalSceneComponent__EndAuto(_4__this, method);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
      if ( !this )
        goto LABEL_108;
      IsBusy = RewardMiniPopupExecutor__IsBusy((RewardMiniPopupExecutor_o *)this, 0LL);
      if ( IsBusy )
      {
        v44 = TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect((TerminalSceneComponent_o *)IsBusy, v43);
        UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)_4__this, v44, 0LL);
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
    if ( !byte_4C1DCA3 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
      byte_4C1DCA3 = 1;
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
      if ( !byte_4C1CAE3 )
      {
        sub_1C3B764(&TerminalSceneComponent_TypeInfo, method);
        byte_4C1CAE3 = 1;
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
      v46 = *(_QWORD *)&klass->_2.thread_static_fields_offset;
      if ( !v46 )
        goto LABEL_108;
      this = *(TerminalSceneComponent__coFadein_WorldDisp_d__195_o **)(v46 + 552);
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
      if ( !byte_4C1EA8B )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
        byte_4C1EA8B = 1;
      }
      v47 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v47 = TerminalPramsManager_TypeInfo;
      }
      v47->static_fields->_DispState_k__BackingField = 1;
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)_4__this->fields.mTitleInfo;
      if ( !this )
        goto LABEL_108;
      TitleInfoControl__SetActiveEventInfo_38555444((TitleInfoControl_o *)this, 1, 16, 0, 0, 0LL, 0LL);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_108;
      CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, 0, 1, 0LL);
    }
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_108;
    CommonUI__SetBgCameraActive((CommonUI_o *)this, 1, 0LL);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)_4__this->fields.mTerminalMap;
    if ( !this )
      goto LABEL_108;
    ScrTerminalMap__ReleaseMap((ScrTerminalMap_o *)this, 1, 0LL);
    if ( !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
    System_GC__Collect_64415268(0LL);
    if ( v2->fields.isExecuteUnusedAssets )
    {
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( this )
      {
        AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          v48 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
          v2->fields.__2__current = (Il2CppObject *)v48;
          p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
          sub_1C3B708(p__2__current, (int64_t)v48, v50, v51, v52, v53, v54, v55);
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1EA88 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1EA88 = 1;
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
          (const MethodInfo_329AE94 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
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
    v68 = _4__this->fields.mTerminalList;
    if ( v68 )
    {
      if ( v68->fields.isBackFromBlankEarthMap )
      {
        _8__1 = (Il2CppObject *)v2->fields.__8__1;
        v70 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
        System_Action___ctor(
          v70,
          _8__1,
          Method_TerminalSceneComponent___c__DisplayClass195_0__coFadein_WorldDisp_b__1__,
          0LL);
        TerminalSceneComponent__StartWindowMessage(_4__this, v70, v71);
        return 0;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v72 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v72 = AvalonSceneManager_TypeInfo;
      }
      v63 = (Il2CppObject *)v2->fields.__8__1;
      DEFAULT_FADE_TIME = v72->static_fields->DEFAULT_FADE_TIME;
      v65 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      v66 = &Method_TerminalSceneComponent___c__DisplayClass195_0__coFadein_WorldDisp_b__2__;
      goto LABEL_102;
    }
LABEL_108:
    sub_1C3B9C0(this, method);
  }
  this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)_4__this->fields.mTerminalList;
  if ( !this )
    goto LABEL_108;
  ShowingFolderBGM = ScrTerminalListTop__GetShowingFolderBGM((ScrTerminalListTop_o *)this, 0LL);
  TerminalSceneComponent__playBgm(_4__this, ShowingFolderBGM, v59);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1DCA3 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1DCA3 = 1;
  }
  this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)TerminalPramsManager_TypeInfo;
  }
  if ( HIBYTE(this[2].fields.endAct[1].klass) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v62 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v62 = AvalonSceneManager_TypeInfo;
    }
    v63 = (Il2CppObject *)v2->fields.__8__1;
    DEFAULT_FADE_TIME = v62->static_fields->DEFAULT_FADE_TIME;
    v65 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    v66 = &Method_TerminalSceneComponent___c__DisplayClass195_0__coFadein_WorldDisp_b__0__;
LABEL_102:
    v73 = v65;
    System_Action___ctor(v65, v63, *v66, 0LL);
    if ( !Instance )
      goto LABEL_108;
    CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v73, 0LL);
    return 0;
  }
  if ( !entity )
    goto LABEL_108;
  v74 = v2->fields.__8__1;
  if ( !v74 )
    goto LABEL_108;
  TerminalSceneComponent__FadeInAndTriggerEventEffects(
    _4__this,
    v2->fields.fadeTime,
    (int32_t)entity[6].klass,
    v74->fields.endAct,
    v60);
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

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_TerminalSceneComponent__coFadein_WorldDisp_d__195_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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