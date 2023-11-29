void __fastcall ServantStatusQuestBoardDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct ServantStatusQuestBoardDraw_StaticFields *static_fields; // x8
  ServantStatusQuestBoardDraw_c *v17; // x8
  struct ServantStatusQuestBoardDraw_StaticFields *v18; // x9
  struct ServantStatusQuestBoardDraw_StaticFields *v19; // x0
  System_Int32_array **v20; // x1
  ServantStatusQuestBoardDraw_c *v21; // x8
  struct ServantStatusQuestBoardDraw_StaticFields *v22; // x0
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct ServantStatusQuestBoardDraw_StaticFields *v30; // x0
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct ServantStatusQuestBoardDraw_StaticFields *v38; // x0
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct ServantStatusQuestBoardDraw_StaticFields *v46; // x0
  System_Int32_array **v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct ServantStatusQuestBoardDraw_StaticFields *v54; // x0
  System_Int32_array **v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct ServantStatusQuestBoardDraw_StaticFields *v62; // x0
  System_Int32_array **v63; // x1
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct ServantStatusQuestBoardDraw_StaticFields *v70; // x0
  System_Int32_array **v71; // x1
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7

  if ( (byte_40FCA8C & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusQuestBoardDraw_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_19402, v8);
    sub_B16FFC(&StringLiteral_19403, v9);
    sub_B16FFC(&StringLiteral_19401, v10);
    sub_B16FFC(&StringLiteral_17106, v11);
    sub_B16FFC(&StringLiteral_19499, v12);
    sub_B16FFC(&StringLiteral_19400, v13);
    sub_B16FFC(&StringLiteral_19404, v14);
    sub_B16FFC(&StringLiteral_19396, v15);
    byte_40FCA8C = 1;
  }
  ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH = 320;
  static_fields = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CLEAR_POS_AREA.fields.x = 0xC23C0000431B0000LL;
  static_fields->CLEAR_POS_AREA.fields.z = 0.0;
  v17 = ServantStatusQuestBoardDraw_TypeInfo;
  v18 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  *(_QWORD *)&v18->CLEAR_POS_QUEST.fields.x = 0xC25C0000C3370000LL;
  v18->CLEAR_POS_QUEST.fields.z = 0.0;
  v17->static_fields->QUEST_BOARD_PHASE_INTERVAL = 21;
  v17->static_fields->QUEST_BOARD_PHASE_LOOF_INTERVAL = 30;
  v17->static_fields->QUEST_BOARD_PHASE_EX_INTERVAL = 17;
  v17->static_fields->QUEST_BOARD_PHASE_EX_LOOF_INTERVAL = 26;
  v19 = v17->static_fields;
  v20 = (System_Int32_array **)StringLiteral_19396;
  v19->DARK_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_19396;
  sub_B16F98((BattleServantConfConponent_o *)&v19->DARK_BOARD_SPRITE_NAME, v20, v2, v3, v4, v5, v6, v7);
  v21 = ServantStatusQuestBoardDraw_TypeInfo;
  ServantStatusQuestBoardDraw_TypeInfo->static_fields->DARK_BOARD_WIDTH = 496;
  v21->static_fields->DARK_BOARD_HIGHT = 122;
  v22 = v21->static_fields;
  v23 = (System_Int32_array **)StringLiteral_19404;
  v22->BASE_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_19404;
  sub_B16F98((BattleServantConfConponent_o *)&v22->BASE_BOARD_SPRITE_NAME, v23, v24, v25, v26, v27, v28, v29);
  v30 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v31 = (System_Int32_array **)StringLiteral_19401;
  v30->TITLE_SPRITE_NAME_INTERLUDE = (struct System_String_o *)StringLiteral_19401;
  sub_B16F98((BattleServantConfConponent_o *)&v30->TITLE_SPRITE_NAME_INTERLUDE, v31, v32, v33, v34, v35, v36, v37);
  v38 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v39 = (System_Int32_array **)StringLiteral_19400;
  v38->TITLE_SPRITE_NAME_INTERLUDE_MAP = (struct System_String_o *)StringLiteral_19400;
  sub_B16F98((BattleServantConfConponent_o *)&v38->TITLE_SPRITE_NAME_INTERLUDE_MAP, v39, v40, v41, v42, v43, v44, v45);
  v46 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v47 = (System_Int32_array **)StringLiteral_19402;
  v46->TITLE_SPRITE_NAME_RAINFORCEMENT = (struct System_String_o *)StringLiteral_19402;
  sub_B16F98((BattleServantConfConponent_o *)&v46->TITLE_SPRITE_NAME_RAINFORCEMENT, v47, v48, v49, v50, v51, v52, v53);
  v54 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v55 = (System_Int32_array **)StringLiteral_17106;
  v54->QUEST_BOARD_INFO_FRAME_NAME = (struct System_String_o *)StringLiteral_17106;
  sub_B16F98((BattleServantConfConponent_o *)&v54->QUEST_BOARD_INFO_FRAME_NAME, v55, v56, v57, v58, v59, v60, v61);
  v62 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v63 = (System_Int32_array **)StringLiteral_19499;
  v62->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME = (struct System_String_o *)StringLiteral_19499;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v62->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  v70 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v71 = (System_Int32_array **)StringLiteral_19403;
  v70->TITLE_SPRITE_NAME_LIMIT_UNSEAL = (struct System_String_o *)StringLiteral_19403;
  sub_B16F98((BattleServantConfConponent_o *)&v70->TITLE_SPRITE_NAME_LIMIT_UNSEAL, v71, v72, v73, v74, v75, v76, v77);
}


void __fastcall ServantStatusQuestBoardDraw___ctor(ServantStatusQuestBoardDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusQuestBoardDraw__ChangeNextInfoText(
        ServantStatusQuestBoardDraw_o *this,
        MapControl_QuestInfo_o *qinf,
        ServantStatusQuestBoardManager_o *questBoardManagerer,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x21
  int size; // w8
  int v10; // w20
  QuestBoardInformaionText_o *v11; // x0
  MapControl_QuestInfo_o *v12; // x1
  int64_t Time; // x3
  const MethodInfo *v14; // x4
  ServantStatusQuestBoardDraw_o *v15; // x0
  int32_t v16; // w2
  QuestBoardInformaionText_o *v17; // x0

  if ( (byte_40FCA84 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, qinf);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    byte_40FCA84 = 1;
  }
  if ( (byte_40FCA85 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, qinf);
    byte_40FCA85 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList )
  {
    size = mInfoTextList->fields._size;
    if ( size >= 2 )
    {
      if ( questBoardManagerer )
      {
        v10 = questBoardManagerer->fields.mAlphaAnimCnt % size;
        if ( size <= (unsigned int)v10 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v11 = mInfoTextList->fields._items->m_Items[v10];
        if ( v11 )
        {
          if ( QuestBoardInformaionText__ChangeText(v11, &this->fields.mOptionInfoLb, 0LL) )
          {
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            Time = NetworkManager__getTime(0LL);
            v15 = this;
            v16 = v10;
LABEL_26:
            ServantStatusQuestBoardDraw__UpdateInfoText(v15, v12, v16, Time, v14);
            return;
          }
          return;
        }
      }
LABEL_28:
      sub_B170D4();
    }
  }
  if ( (byte_40FCA86 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, qinf);
    byte_40FCA86 = 1;
    mInfoTextList = this->fields.mInfoTextList;
  }
  if ( !mInfoTextList || !mInfoTextList->fields._size )
    return;
  v17 = mInfoTextList->fields._items->m_Items[0];
  if ( !v17 )
    goto LABEL_28;
  if ( QuestBoardInformaionText__ChangeText(v17, &this->fields.mOptionInfoLb, 0LL) )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
    v15 = this;
    v16 = 0;
    goto LABEL_26;
  }
}


void __fastcall ServantStatusQuestBoardDraw__ChangeNextRewardIcon(
        ServantStatusQuestBoardDraw_o *this,
        ServantStatusQuestBoardManager_o *questBoardManager,
        const MethodInfo *method)
{
  struct GiftEntity_array *mRewardIconInfs; // x8
  int max_length; // w9
  int v5; // w10
  int32_t *v6; // x9
  int32_t v7; // w1
  ItemIconComponent_o *mRewardIcon; // x0
  int v9; // w8
  int32_t v10; // w2
  int32_t v11; // w3

  mRewardIconInfs = this->fields.mRewardIconInfs;
  if ( !mRewardIconInfs )
    return;
  max_length = mRewardIconInfs->max_length;
  if ( max_length < 2 )
    return;
  if ( !questBoardManager )
    goto LABEL_18;
  v5 = questBoardManager->fields.mAlphaAnimCnt % max_length;
  if ( v5 >= (unsigned int)max_length )
  {
    sub_B17100(this, questBoardManager, method);
    sub_B170A0();
  }
  v6 = (int32_t *)mRewardIconInfs->m_Items[v5];
  if ( !v6 )
    goto LABEL_18;
  v7 = v6[11];
  mRewardIcon = this->fields.mRewardIcon;
  v9 = v6[7];
  if ( v7 >= 1 )
  {
    if ( mRewardIcon )
    {
      if ( v9 <= 1 )
        v10 = -1;
      else
        v10 = v6[7];
      ItemIconComponent__SetItemImage_28930192(mRewardIcon, v7, v10, 0LL);
      return;
    }
LABEL_18:
    sub_B170D4();
  }
  if ( !mRewardIcon )
    goto LABEL_18;
  if ( v9 <= 1 )
    v11 = -1;
  else
    v11 = v6[7];
  ItemIconComponent__SetGift(mRewardIcon, v6[5], v6[6], v11, 0, 0LL);
}


QuestBoardInformaionText_o *__fastcall ServantStatusQuestBoardDraw__CreateQuestBoardInformationText(
        ServantStatusQuestBoardDraw_o *this,
        QuestEntity_o *questEntity,
        EventEntity_o *eventEnt,
        EventCampaignEntity_o *eventCampaignEnt,
        int32_t phase,
        bool isQuestNoneCleared,
        int32_t *costCalcVal,
        int32_t *fixedVal,
        const MethodInfo *method)
{
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  int32_t target; // w26
  _BOOL8 isTerminalExposable; // x0
  const MethodInfo *v23; // x3
  QuestBoardInformaionText_o *v24; // x27
  int32_t consumeType; // w8
  struct System_Int32_array *targetIds; // x8
  QuestPhaseMaster_o *Master_WarQuestSelectionMaster; // x0
  System_String_o *v28; // x20
  Il2CppObject *EventName; // x0
  System_String_o *v30; // x20
  int64_t EndTime; // x19
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  QuestBoardInformaionText_o *v36; // x0
  QuestPhaseEntity_o *entity; // [xsp+28h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v39; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FCA89 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_QuestPhaseMaster___, questEntity);
    sub_B16FFC(&DataManager_TypeInfo, v16);
    sub_B16FFC(&LocalizationManager_TypeInfo, v17);
    sub_B16FFC(&QuestBoardInformaionText_TypeInfo, v18);
    sub_B16FFC(&StringLiteral_23445, v19);
    sub_B16FFC(&StringLiteral_13349, v20);
    byte_40FCA89 = 1;
  }
  entity = 0LL;
  if ( !eventEnt || !eventCampaignEnt )
    goto LABEL_35;
  target = eventCampaignEnt->fields.target;
  isTerminalExposable = CombineAdjustTarget__isTerminalExposable(target, 0LL);
  v24 = 0LL;
  if ( !isTerminalExposable )
    return v24;
  if ( target == 25 && !isQuestNoneCleared )
    return 0LL;
  switch ( target )
  {
    case 25:
      goto LABEL_12;
    case 24:
      targetIds = eventCampaignEnt->fields.targetIds;
      if ( targetIds && *(_QWORD *)&targetIds->max_length )
      {
        if ( !ServantStatusQuestBoardDraw__IsValidSupportSelection(
                (ServantStatusQuestBoardDraw_o *)isTerminalExposable,
                questEntity,
                phase,
                v23) )
          return 0LL;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
        if ( !questEntity || !Master_WarQuestSelectionMaster )
          goto LABEL_35;
        if ( QuestPhaseMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, questEntity->fields.id, phase, 0LL) )
        {
          if ( !entity )
            goto LABEL_35;
          if ( entity->fields.isNpcOnly )
            return 0LL;
        }
      }
      break;
    case 12:
LABEL_12:
      if ( (eventCampaignEnt->fields.calcType & 0xFFFFFFFE) != 2 )
        return 0LL;
      if ( questEntity )
      {
        consumeType = questEntity->fields.consumeType;
        if ( consumeType == 4 || consumeType == 1 )
        {
          *costCalcVal = eventCampaignEnt->fields.value;
          if ( eventCampaignEnt->fields.calcType != 3 )
            *fixedVal = eventCampaignEnt->fields.value;
          break;
        }
        return 0LL;
      }
LABEL_35:
      sub_B170D4();
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_13349, 0LL);
  EventName = (Il2CppObject *)EventEntity__getEventName(eventEnt, 0LL);
  v30 = System_String__Format_43739268(v28, EventName, (Il2CppObject *)StringLiteral_23445, 0LL);
  EndTime = EventEntity__GetEndTime(eventEnt, 0, 0LL);
  v36 = (QuestBoardInformaionText_o *)sub_B170CC(QuestBoardInformaionText_TypeInfo, v32, v33, v34, v35);
  v40.fields.r = 0.0;
  v40.fields.g = 0.0;
  v40.fields.b = 0.0;
  v40.fields.a = 0.0;
  v39.fields.x = 0.0;
  v39.fields.y = 0.0;
  v39.fields.z = 0.0;
  v24 = v36;
  QuestBoardInformaionText___ctor(v36, v30, EndTime, 1, 0, v40, -1, 0, v39, 0, 0LL, 0LL, 0LL);
  return v24;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestBoardInformaionText__o *__fastcall ServantStatusQuestBoardDraw__GetCampaignText(
        ServantStatusQuestBoardDraw_o *this,
        int32_t quest_id,
        int32_t phase,
        bool isQuestNoneCleared,
        ServantStatusQuestBoardManager_o *questBoardManager,
        int32_t *costCalcVal,
        int32_t *fixedVal,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x19
  const MethodInfo *v27; // x7
  System_Collections_Generic_IEnumerable_T__o *CampaignTextListByEventQuestMaster; // x0
  QuestReleaseOverwriteMaster_o *Master_WarQuestSelectionMaster; // x0
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v31; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v32; // x0
  int64_t endedAt; // x20
  System_String_o *EventName; // x21
  System_String_o *v35; // x0
  System_String_o *v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  QuestBoardInformaionText_o *v41; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v42; // x22
  WarEntity_o *entity; // [xsp+28h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v45; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FCA87 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&quest_id);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v14);
    sub_B16FFC(&DataManager_TypeInfo, v15);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__, v19);
    sub_B16FFC(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo, v20);
    sub_B16FFC(&LocalizationManager_TypeInfo, v21);
    sub_B16FFC(&QuestBoardInformaionText_TypeInfo, v22);
    sub_B16FFC(&StringLiteral_23445, v23);
    sub_B16FFC(&StringLiteral_80, v24);
    sub_B16FFC(&StringLiteral_13354, v25);
    byte_40FCA87 = 1;
  }
  entity = 0LL;
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo,
                                                                                                  *(_QWORD *)&quest_id,
                                                                                                  *(_QWORD *)&phase,
                                                                                                  isQuestNoneCleared,
                                                                                                  questBoardManager);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)ServantStatusQuestBoardDraw__GetCampaignTextListByEventQuestMaster(
                                                                                        this,
                                                                                        this->fields.questId,
                                                                                        phase,
                                                                                        isQuestNoneCleared,
                                                                                        questBoardManager,
                                                                                        costCalcVal,
                                                                                        fixedVal,
                                                                                        v27);
  if ( !v26 )
    goto LABEL_24;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v26,
    CampaignTextListByEventQuestMaster,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestReleaseOverwriteMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  if ( !questBoardManager || !Master_WarQuestSelectionMaster )
    goto LABEL_24;
  EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                             Master_WarQuestSelectionMaster,
                             this->fields.questId,
                             questBoardManager->fields.mListCreatedTime,
                             0LL);
  if ( !EntityByQuestIdAndTime )
    return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v26;
  v31 = EntityByQuestIdAndTime;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v32 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !v32 )
    goto LABEL_24;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v32,
          &entity,
          v31->fields.eventId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v26;
  if ( !entity )
LABEL_24:
    sub_B170D4();
  if ( LODWORD(entity->fields.age) == 25 )
  {
    endedAt = v31->fields.endedAt;
    if ( endedAt <= 0 )
      endedAt = *(_QWORD *)&entity->fields.eventId;
    EventName = EventEntity__getEventName((EventEntity_o *)entity, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_13354, 0LL);
    v36 = System_String__Concat_43747144(
            EventName,
            (System_String_o *)StringLiteral_80,
            v35,
            (System_String_o *)StringLiteral_23445,
            0LL);
    v41 = (QuestBoardInformaionText_o *)sub_B170CC(QuestBoardInformaionText_TypeInfo, v37, v38, v39, v40);
    v46.fields.r = 0.0;
    v46.fields.g = 0.0;
    v46.fields.b = 0.0;
    v46.fields.a = 0.0;
    v45.fields.x = 0.0;
    v45.fields.y = 0.0;
    v45.fields.z = 0.0;
    v42 = (EventMissionProgressRequest_Argument_ProgressData_o *)v41;
    QuestBoardInformaionText___ctor(v41, v36, endedAt, 0, 0, v46, -1, 0, v45, 1, 0LL, 0LL, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v26,
      v42,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
  }
  return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v26;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestBoardInformaionText__o *__fastcall ServantStatusQuestBoardDraw__GetCampaignTextListByEventQuestMaster(
        ServantStatusQuestBoardDraw_o *this,
        int32_t questId,
        int32_t phase,
        bool isQuestNoneCleared,
        ServantStatusQuestBoardManager_o *questBoardManager,
        int32_t *costCalcVal,
        int32_t *fixedVal,
        const MethodInfo *method)
{
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x23
  WebViewManager_o *Instance; // x0
  DataManager_o *v23; // x24
  EventCampaignMaster_o *MasterData_WarQuestSelectionMaster; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v25; // x0
  WarEntity_o *Entity; // x0
  int64_t mListCreatedTime; // x28
  QuestEntity_o *v28; // x27
  EventQuestMaster_o *v29; // x0
  EventCampaignEntity_o *EnabledEventCampaignForQuest; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  int idx; // w8
  EventCampaignEntity_o *v34; // x26
  unsigned int v35; // w19
  EventEntity_o *v36; // x28
  const MethodInfo *v38; // [xsp+0h] [xbp-70h]
  bool v39; // [xsp+14h] [xbp-5Ch]

  if ( (byte_40FCA88 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCampaignMaster___, *(_QWORD *)&questId);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventQuestMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v15);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__, v18);
    sub_B16FFC(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    byte_40FCA88 = 1;
  }
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo,
                                                                                                  *(_QWORD *)&questId,
                                                                                                  *(_QWORD *)&phase,
                                                                                                  isQuestNoneCleared,
                                                                                                  questBoardManager);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v39 = isQuestNoneCleared;
  v23 = (DataManager_o *)Instance;
  MasterData_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  v25 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         v23,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !v25 )
    goto LABEL_19;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v25,
             questId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !questBoardManager )
    goto LABEL_19;
  mListCreatedTime = questBoardManager->fields.mListCreatedTime;
  v28 = (QuestEntity_o *)Entity;
  v29 = (EventQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v23,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  if ( !v29 )
    goto LABEL_19;
  EnabledEventCampaignForQuest = (EventCampaignEntity_o *)EventQuestMaster__GetEnabledEventCampaignForQuest(
                                                            v29,
                                                            questId,
                                                            phase,
                                                            mListCreatedTime,
                                                            0LL);
  if ( !EnabledEventCampaignForQuest )
    goto LABEL_19;
  idx = EnabledEventCampaignForQuest->fields.idx;
  v34 = EnabledEventCampaignForQuest;
  if ( idx >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      if ( v35 >= idx )
      {
        sub_B17100(EnabledEventCampaignForQuest, v31, v32);
        sub_B170A0();
      }
      v36 = (EventEntity_o *)*((_QWORD *)&v34->fields.priority + (int)v35);
      if ( !v36 || !MasterData_WarQuestSelectionMaster )
        break;
      EnabledEventCampaignForQuest = EventCampaignMaster__getData(
                                       MasterData_WarQuestSelectionMaster,
                                       v36->fields.id,
                                       0LL);
      if ( EnabledEventCampaignForQuest )
      {
        EnabledEventCampaignForQuest = (EventCampaignEntity_o *)ServantStatusQuestBoardDraw__CreateQuestBoardInformationText(
                                                                  this,
                                                                  v28,
                                                                  v36,
                                                                  EnabledEventCampaignForQuest,
                                                                  phase,
                                                                  v39,
                                                                  costCalcVal,
                                                                  fixedVal,
                                                                  v38);
        if ( EnabledEventCampaignForQuest )
        {
          if ( !v21 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v21,
            (EventMissionProgressRequest_Argument_ProgressData_o *)EnabledEventCampaignForQuest,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
        }
      }
      idx = v34->fields.idx;
      if ( (int)++v35 >= idx )
        return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v21;
    }
LABEL_19:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v21;
}


bool __fastcall ServantStatusQuestBoardDraw__IsClose(MapControl_QuestInfo_o *qinf, const MethodInfo *method)
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
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  WarEntity_o *Mine; // x0
  MapControl_WarInfo_o *v20; // x0
  struct MapControl_SpotInfo_o *SpotInfo_k__BackingField; // x8
  QuestReleaseOverwriteMaster_o *Master_WarQuestSelectionMaster; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x20
  QuestReleaseEntity_o *v33; // x1
  void *ListByQuestID; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  _QWORD *v37; // x20
  QuestReleaseMaster_o *v38; // x0
  __int64 v39; // x8
  __int64 v40; // x23
  __int64 v41; // x8
  int32_t v42; // w19
  int32_t v43; // w22
  int64_t v44; // x21
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_40FCA7E & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestReleaseMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v4);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v14);
    sub_B16FFC(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v15);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v16);
    byte_40FCA7E = 1;
  }
  entityList = 0LL;
  memset(&v46, 0, sizeof(v46));
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL) )
    return 0;
  if ( !qinf )
    goto LABEL_53;
  if ( MapControl_QuestInfo__IsClear(qinf, 0LL) )
    return 0;
  if ( MapControl_QuestInfo__GetQuestType(qinf, 0LL) == 3 )
  {
    WarInfo_k__BackingField = qinf->fields._WarInfo_k__BackingField;
    if ( !WarInfo_k__BackingField )
      goto LABEL_53;
    Mine = MapControl_WarInfo__GetMine(WarInfo_k__BackingField, 0LL);
    if ( !Mine )
      goto LABEL_53;
    if ( !WarEntity__HasFlag(Mine, 16, 0LL) )
    {
      v20 = qinf->fields._WarInfo_k__BackingField;
      if ( !v20 )
        goto LABEL_53;
      if ( !MapControl_WarInfo__GetStatus(v20, 0LL) )
        return 1;
      SpotInfo_k__BackingField = qinf->fields._SpotInfo_k__BackingField;
      if ( !SpotInfo_k__BackingField )
        goto LABEL_53;
      if ( SpotInfo_k__BackingField->fields.dispType != 1 )
        return 1;
    }
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestReleaseOverwriteMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo,
                                                                                                  v23,
                                                                                                  v24,
                                                                                                  v25,
                                                                                                  v26);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v27;
  if ( !Master_WarQuestSelectionMaster )
LABEL_53:
    sub_B170D4();
  if ( !QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
          Master_WarQuestSelectionMaster,
          &entityList,
          qinf->fields.questId,
          0LL,
          0LL) )
    goto LABEL_57;
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                                                                  v28,
                                                                                                  v29,
                                                                                                  v30,
                                                                                                  v31);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  if ( !entityList )
    goto LABEL_53;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v45,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entityList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
  v46 = v45;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v46,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
  {
    if ( !v46.fields.current )
      sub_B170D4();
    v33 = QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
            (QuestReleaseOverwriteEntity_o *)v46.fields.current,
            0LL);
    if ( !v32 )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v32,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v33,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v46,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
  if ( !v32 )
    goto LABEL_53;
  ListByQuestID = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v32,
                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
  v37 = ListByQuestID;
  if ( !ListByQuestID )
  {
LABEL_57:
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v38 = (QuestReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
    if ( !v38 )
      goto LABEL_53;
    ListByQuestID = QuestReleaseMaster__getListByQuestID(v38, qinf->fields.questId, 0LL);
    v37 = ListByQuestID;
  }
  if ( !v37 )
    goto LABEL_53;
  v39 = v37[3];
  if ( !v39 )
    return qinf->fields.dispType != 1;
  if ( (int)v39 >= 1 )
  {
    v40 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v40 >= (unsigned int)v39 )
      {
        sub_B17100(ListByQuestID, v35, v36);
        sub_B170A0();
      }
      v41 = v37[v40 + 4];
      if ( !v41 )
        break;
      v43 = *(_DWORD *)(v41 + 20);
      v42 = *(_DWORD *)(v41 + 24);
      v44 = *(_QWORD *)(v41 + 32);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ListByQuestID = (void *)CondType__IsOpen(v43, v42, v44, 0, 0LL);
      if ( ((unsigned __int8)ListByQuestID & 1) == 0 )
        return 1;
      LODWORD(v39) = *((_DWORD *)v37 + 6);
      if ( (int)++v40 >= (int)v39 )
        return 0;
    }
    goto LABEL_53;
  }
  return 0;
}


bool __fastcall ServantStatusQuestBoardDraw__IsEventTime(
        ServantStatusQuestBoardDraw_o *this,
        EventEntity_o *eventEntity,
        int64_t checkTime,
        const MethodInfo *method)
{
  return eventEntity && EventEntity__IsEventPeriod(eventEntity, checkTime, 0LL);
}


bool __fastcall ServantStatusQuestBoardDraw__IsInfoTextListNullOrEmpty(
        ServantStatusQuestBoardDraw_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x8

  if ( (byte_40FCA86 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, method);
    byte_40FCA86 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  return !mInfoTextList || mInfoTextList->fields._size == 0;
}


bool __fastcall ServantStatusQuestBoardDraw__IsMultiInfoText(
        ServantStatusQuestBoardDraw_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x8

  if ( (byte_40FCA85 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, method);
    byte_40FCA85 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  return mInfoTextList && mInfoTextList->fields._size > 1;
}


bool __fastcall ServantStatusQuestBoardDraw__IsRewardIcons(
        ServantStatusQuestBoardDraw_o *this,
        const MethodInfo *method)
{
  struct GiftEntity_array *mRewardIconInfs; // x8

  mRewardIconInfs = this->fields.mRewardIconInfs;
  return mRewardIconInfs && (signed int)mRewardIconInfs->max_length > 1;
}


bool __fastcall ServantStatusQuestBoardDraw__IsValidSupportSelection(
        ServantStatusQuestBoardDraw_o *this,
        QuestEntity_o *questEntity,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v6; // x1
  QuestRestrictionInfoMaster_o *Master_WarQuestSelectionMaster; // x0
  bool HasFlag; // w0
  bool v9; // w21
  QuestRestrictionInfoEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FCA8A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_QuestRestrictionInfoMaster___, questEntity);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    byte_40FCA8A = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
  if ( !questEntity || !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  if ( QuestRestrictionInfoMaster__TryGetEntity(
         Master_WarQuestSelectionMaster,
         &entity,
         questEntity->fields.id,
         phase,
         0LL) )
  {
    if ( !entity )
      goto LABEL_18;
    if ( !QuestRestrictionInfoEntity__HasFlag(entity, 0x80000LL, 0LL) )
    {
      if ( entity )
      {
        HasFlag = QuestRestrictionInfoEntity__HasFlag(entity, 0x100000LL, 0LL);
LABEL_16:
        v9 = !HasFlag;
        return v9 & ~QuestEntity__HasFlag_23922108(questEntity, 2LL, phase, 0LL) & 1;
      }
LABEL_18:
      sub_B170D4();
    }
  }
  else if ( !QuestEntity__HasFlag_23922108(questEntity, 0x80000LL, phase, 0LL) )
  {
    HasFlag = QuestEntity__HasFlag_23922108(questEntity, 0x100000LL, phase, 0LL);
    goto LABEL_16;
  }
  v9 = 0;
  return v9 & ~QuestEntity__HasFlag_23922108(questEntity, 2LL, phase, 0LL) & 1;
}


void __fastcall ServantStatusQuestBoardDraw__OnChangeAlphaAnim(
        ServantStatusQuestBoardDraw_o *this,
        ServantStatusQuestBoardManager_o *questBoardManager,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x2

  ServantStatusQuestBoardDraw__ChangeNextInfoText(
    this,
    (MapControl_QuestInfo_o *)questBoardManager,
    questBoardManager,
    v3);
  ServantStatusQuestBoardDraw__ChangeNextRewardIcon(this, questBoardManager, v6);
}


void __fastcall ServantStatusQuestBoardDraw__OnClick(ServantStatusQuestBoardDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *inputMessageObject; // x20
  int32_t questId; // w8
  UnityEngine_GameObject_o *v8; // x19
  Il2CppObject *v9; // x0
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FCA8B & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_9942, v5);
    byte_40FCA8B = 1;
  }
  inputMessageObject = (UnityEngine_Object_o *)this->fields.inputMessageObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(inputMessageObject, 0LL, 0LL) || (questId = this->fields.questId) == 0 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
  }
  else
  {
    v8 = this->fields.inputMessageObject;
    v10 = questId;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
    if ( !v8 )
      sub_B170D4();
    UnityEngine_GameObject__SendMessage_40693300(v8, (System_String_o *)StringLiteral_9942, v9, 0LL);
  }
}


void __fastcall ServantStatusQuestBoardDraw__ResetInfoTextList(
        ServantStatusQuestBoardDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v8; // x0
  BattleServantConfConponent_o *p_mInfoTextList; // x19
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // t1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_40FCA82 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Clear__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo, v7);
    byte_40FCA82 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  p_mInfoTextList = (BattleServantConfConponent_o *)&this->fields.mInfoTextList;
  v8 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)mInfoTextList;
  if ( mInfoTextList )
  {
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      v8,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Clear__);
  }
  else
  {
    v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo,
                                                                                                    method,
                                                                                                    v2,
                                                                                                    v3,
                                                                                                    v4);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v11,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
    p_mInfoTextList->klass = (BattleServantConfConponent_c *)v11;
    sub_B16F98(p_mInfoTextList, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
  }
}


void __fastcall ServantStatusQuestBoardDraw__SetDark(ServantStatusQuestBoardDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UISprite_o *mcBaseP; // x20
  UIWidget_o *v7; // x0
  UIWidget_o *v8; // x0
  UnityEngine_Behaviour_o *mLineSp; // x0
  UnityEngine_Behaviour_o *mTitle2Sp; // x0
  UnityEngine_Behaviour_o *mTitleSp; // x0
  UnityEngine_GameObject_o *mClearObj; // x0
  UnityEngine_GameObject_o *mLinkObj; // x0
  UILabel_o *mNoneLb; // x20
  System_String_o *v15; // x0
  UILabel_o *mTitleNameLb; // x0
  UnityEngine_Behaviour_o *mTitleShortcutSp; // x0
  UILabel_o *mTitleShortcutLb; // x0
  const MethodInfo *v19; // x1
  UnityEngine_Component_o *mOptionInfoLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_Component_o *mRewardIcon; // x0
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_GameObject_o *mRewardObj; // x0
  UnityEngine_Component_o *mRewardGetSP; // x0
  UnityEngine_GameObject_o *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct MapControl_QuestInfo_o **p_qinf; // x19
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7

  if ( (byte_40FCA7F & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&ServantStatusQuestBoardDraw_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_11926, v4);
    sub_B16FFC(&StringLiteral_1, v5);
    byte_40FCA7F = 1;
  }
  UnityEngine_Color__get_black(0LL);
  mcBaseP = this->fields.mcBaseP;
  if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  }
  if ( !mcBaseP )
    goto LABEL_29;
  UISprite__set_spriteName(mcBaseP, ServantStatusQuestBoardDraw_TypeInfo->static_fields->DARK_BOARD_SPRITE_NAME, 0LL);
  v7 = (UIWidget_o *)this->fields.mcBaseP;
  if ( !v7 )
    goto LABEL_29;
  UIWidget__set_width(v7, ServantStatusQuestBoardDraw_TypeInfo->static_fields->DARK_BOARD_WIDTH, 0LL);
  v8 = (UIWidget_o *)this->fields.mcBaseP;
  if ( !v8 )
    goto LABEL_29;
  UIWidget__set_height(v8, ServantStatusQuestBoardDraw_TypeInfo->static_fields->DARK_BOARD_HIGHT, 0LL);
  mLineSp = (UnityEngine_Behaviour_o *)this->fields.mLineSp;
  if ( !mLineSp )
    goto LABEL_29;
  UnityEngine_Behaviour__set_enabled(mLineSp, 0, 0LL);
  mTitle2Sp = (UnityEngine_Behaviour_o *)this->fields.mTitle2Sp;
  if ( !mTitle2Sp )
    goto LABEL_29;
  UnityEngine_Behaviour__set_enabled(mTitle2Sp, 0, 0LL);
  mTitleSp = (UnityEngine_Behaviour_o *)this->fields.mTitleSp;
  if ( !mTitleSp )
    goto LABEL_29;
  UnityEngine_Behaviour__set_enabled(mTitleSp, 0, 0LL);
  mClearObj = this->fields.mClearObj;
  if ( !mClearObj )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(mClearObj, 0, 0LL);
  mLinkObj = this->fields.mLinkObj;
  if ( !mLinkObj )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(mLinkObj, 0, 0LL);
  mNoneLb = this->fields.mNoneLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11926, 0LL);
  if ( !mNoneLb )
    goto LABEL_29;
  UILabel__set_text(mNoneLb, v15, 0LL);
  mTitleNameLb = this->fields.mTitleNameLb;
  if ( !mTitleNameLb )
    goto LABEL_29;
  UILabel__set_text(mTitleNameLb, (System_String_o *)StringLiteral_1, 0LL);
  mTitleShortcutSp = (UnityEngine_Behaviour_o *)this->fields.mTitleShortcutSp;
  if ( !mTitleShortcutSp )
    goto LABEL_29;
  UnityEngine_Behaviour__set_enabled(mTitleShortcutSp, 0, 0LL);
  mTitleShortcutLb = this->fields.mTitleShortcutLb;
  if ( !mTitleShortcutLb )
    goto LABEL_29;
  UILabel__set_text(mTitleShortcutLb, (System_String_o *)StringLiteral_1, 0LL);
  ServantStatusQuestBoardDraw__ResetInfoTextList(this, v19);
  mOptionInfoLb = (UnityEngine_Component_o *)this->fields.mOptionInfoLb;
  if ( !mOptionInfoLb )
    goto LABEL_29;
  gameObject = UnityEngine_Component__get_gameObject(mOptionInfoLb, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.mRewardIconInfs = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.mRewardIconInfs, 0LL, v22, v23, v24, v25, v26, v27);
  mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardIcon;
  if ( !mRewardIcon
    || (v29 = UnityEngine_Component__get_gameObject(mRewardIcon, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v29, 0, 0LL), (mRewardObj = this->fields.mRewardObj) == 0LL)
    || (UnityEngine_GameObject__SetActive(mRewardObj, 0, 0LL),
        (mRewardGetSP = (UnityEngine_Component_o *)this->fields.mRewardGetSP) == 0LL)
    || (v32 = UnityEngine_Component__get_gameObject(mRewardGetSP, 0LL)) == 0LL )
  {
LABEL_29:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v32, 0, 0LL);
  this->fields.inputMessageObject = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.inputMessageObject, 0LL, v33, v34, v35, v36, v37, v38);
  this->fields.qinf = 0LL;
  p_qinf = &this->fields.qinf;
  *((_DWORD *)p_qinf - 2) = 0;
  sub_B16F98((BattleServantConfConponent_o *)p_qinf, 0LL, v40, v41, v42, v43, v44, v45);
}


void __fastcall ServantStatusQuestBoardDraw__SetInfoTextAlpha(
        ServantStatusQuestBoardDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x8
  BoardOptionTextWithIconComponent_o *mOptionInfoLb; // x0

  if ( (byte_40FCA85 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, method);
    byte_40FCA85 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList && mInfoTextList->fields._size >= 2 )
  {
    mOptionInfoLb = this->fields.mOptionInfoLb;
    if ( !mOptionInfoLb )
      sub_B170D4();
    BoardOptionTextWithIconComponent__set_Alpha(mOptionInfoLb, alpha, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusQuestBoardDraw__SetItem(
        ServantStatusQuestBoardDraw_o *this,
        MapControl_QuestInfo_o *qinf,
        MapControl_QuestInfo_o *beforeQuestInfo,
        UnityEngine_GameObject_o *inputMessageObject,
        ServantStatusQuestBoardManager_o *questBoardManager,
        int32_t limitCount,
        const MethodInfo *method)
{
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
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x21
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  QuestGroupMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_int__o *InterludeQuestIdList; // x0
  int current; // w26
  char v70; // w23
  int64_t mListCreatedTime; // x28
  QuestEntity_o *Mine; // x25
  const MethodInfo *v73; // x1
  int v74; // w23
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  _BOOL4 IsClose; // w27
  const MethodInfo *v82; // x1
  int32_t id; // w8
  int32_t warId; // w20
  QuestTree_o *v85; // x0
  WarEntity_o *WarEntityByWarID; // x0
  bool v87; // w8
  ServantLimitImageMaster_o *v88; // x0
  ServantLimitImageMaster_o *v89; // x24
  _BOOL4 IsLimitCountSealQuest; // w20
  QuestEntity_o *v91; // x28
  clsQuestCheck_o *v92; // x0
  int32_t v93; // w1
  int v94; // w25
  WarQuestSelectionMaster_o *v95; // x27
  int64_t v96; // x0
  int64_t v97; // x2
  UserQuestMaster_o *v98; // x0
  int32_t questId; // w3
  int64_t UserId; // x0
  char HasStatus; // w27
  _BOOL4 IsCommonReleaseMultiClear; // w0
  int v103; // w9
  char v104; // w24
  int v105; // s0
  int v106; // s1
  int v107; // s2
  int v108; // s3
  UnityEngine_GameObject_o *mTitleObj; // x0
  QuestEntity_o *v110; // x25
  UnityEngine_Component_o *mOptionInfoLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *mRewardObj; // x0
  UnityEngine_GameObject_o *mCondObject; // x0
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  struct UISprite_o *mcBaseP; // x8
  struct UIAtlas_o *mAtlas; // x1
  UISprite_o *v123; // x24
  __int64 v124; // x1
  __int64 v125; // x2
  __int64 v126; // x3
  __int64 v127; // x4
  System_Action_o *v128; // x24
  struct UISprite_o *v129; // x0
  UIWidget_o *v130; // x0
  UnityEngine_Behaviour_o *mLineSp; // x0
  UIWidget_o *v132; // x0
  UnityEngine_Behaviour_o *mTitle2Sp; // x0
  UnityEngine_Behaviour_o *mTitleSp; // x0
  UnityEngine_GameObject_o *mLinkObj; // x0
  UIWidget_o *v136; // x0
  UnityEngine_Behaviour_o *v137; // x0
  UISprite_o *v138; // x0
  UISprite_o *v139; // x24
  ServantStatusQuestBoardDraw_c *v140; // x0
  System_String_o **p_TITLE_SPRITE_NAME_INTERLUDE_MAP; // x8
  __int64 v142; // x1
  __int64 v143; // x2
  __int64 v144; // x3
  __int64 v145; // x4
  System_Action_o *v146; // x20
  struct UISprite_o *v147; // x0
  UIWidget_o *v148; // x0
  UnityEngine_GameObject_o *v149; // x0
  UnityEngine_GameObject_o *v150; // x0
  UnityEngine_GameObject_o *v151; // x0
  UIWidget_o *Component_srcLineSprite; // x0
  UnityEngine_GameObject_o *mClearObj; // x0
  UILabel_o *mNoneLb; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v155; // x0
  System_String_o *age; // x20
  char v157; // w28
  struct UILabel_o *mTitleNameLb; // x20
  UIWidget_o **p_mTitleNameLb; // x27
  System_String_o **v160; // x8
  LocalizationManager_c *v161; // x0
  System_String_o **v162; // x9
  System_String_o *v163; // x24
  char v164; // w22
  System_String_o *v165; // x0
  System_String_o *v166; // x0
  System_String_o *v167; // x1
  UILabel_o *v168; // x0
  Il2CppObject *PrioredName; // x0
  System_String_o *QuestName; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v171; // x24
  int32_t ServantId; // w0
  ServantEntity_o *v173; // x0
  int64_t OpenedAt; // x24
  __int64 v175; // x2
  System_Object_array *v176; // x24
  GiftEntity_array *GiftListById; // x0
  __int64 v178; // x1
  System_String_array **v179; // x2
  System_String_array **v180; // x3
  System_Boolean_array **v181; // x4
  System_Int32_array **v182; // x5
  System_Int32_array *v183; // x6
  System_Int32_array *v184; // x7
  System_Int32_array **v185; // x27
  System_String_array **v186; // x3
  System_Boolean_array **v187; // x4
  System_Int32_array **v188; // x5
  System_Int32_array *v189; // x6
  System_Int32_array *v190; // x7
  System_Int32_array **v191; // x27
  System_String_array **v192; // x3
  System_Boolean_array **v193; // x4
  System_Int32_array **v194; // x5
  System_Int32_array *v195; // x6
  System_Int32_array *v196; // x7
  System_Int32_array **v197; // x27
  System_String_array **v198; // x3
  System_Boolean_array **v199; // x4
  System_Int32_array **v200; // x5
  System_Int32_array *v201; // x6
  System_Int32_array *v202; // x7
  System_Int32_array **v203; // x27
  System_String_o *v204; // x0
  int32_t targetId; // w24
  System_String_o *v206; // x27
  QuestTree_o *v207; // x0
  int32_t WarID_ByQuestID; // w24
  DataMasterBase_WarMaster__WarEntity__int__o *v209; // x0
  WarEntity_o *v210; // x0
  UnityEngine_Component_o *v211; // x0
  int32_t m_CachedPtr; // w20
  bool v213; // cc
  UnityEngine_Transform_o *transform; // x20
  char v215; // w24
  BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x26
  int v217; // s0
  char v220; // w23
  System_String_array **v221; // x2
  System_String_array **v222; // x3
  System_Boolean_array **v223; // x4
  System_Int32_array **v224; // x5
  System_Int32_array *v225; // x6
  System_Int32_array *v226; // x7
  ServantStatusQuestBoardManager_o *v227; // x27
  QuestReleaseOverwriteMaster_o *v228; // x0
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  const MethodInfo *v230; // x2
  struct UnityEngine_GameObject_o *v231; // x1
  int32_t v232; // w20
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *v235; // x0
  ServantEntity_o *v236; // x24
  UILabel_o *mTitleShortcutLb; // x20
  System_String_o *Name; // x0
  UIWidget_o *v239; // x0
  const MethodInfo *v240; // x1
  UnityEngine_Behaviour_o *mTitleShortcutSp; // x0
  UIWidget_o *v242; // x0
  UILabel_o *v243; // x0
  int64_t endTime; // x20
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x24
  System_String_o *v246; // x28
  __int64 v247; // x1
  __int64 v248; // x2
  __int64 v249; // x3
  __int64 v250; // x4
  QuestBoardInformaionText_o *v251; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v252; // x27
  int32_t questPhase; // w20
  int32_t PhaseMax; // w0
  int32_t v255; // w0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v256; // x20
  int32_t v257; // w1
  const MethodInfo *v258; // x7
  System_Collections_Generic_IEnumerable_T__o *CampaignText; // x0
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v260; // x20
  int size; // w8
  int v262; // w24
  QuestBoardInformaionText_o *v263; // x0
  BoardOptionTextWithIconComponent_o *v264; // x0
  bool v265; // w20
  UnityEngine_Transform_o *v266; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v268; // x0
  UnityEngine_GameObject_o *v269; // x0
  System_String_array **v270; // x2
  System_String_array **v271; // x3
  System_Boolean_array **v272; // x4
  System_Int32_array **v273; // x5
  System_Int32_array *v274; // x6
  System_Int32_array *v275; // x7
  UnityEngine_Component_o *mRewardIcon; // x0
  UnityEngine_GameObject_o *v277; // x0
  ItemIconComponent_o *v278; // x0
  int32_t giftIconId; // w1
  UnityEngine_Component_o *v280; // x0
  char v281; // w20
  UnityEngine_GameObject_o *v282; // x0
  WebViewManager_o *v283; // x0
  GiftMaster_o *v284; // x0
  System_String_array **v285; // x3
  System_Boolean_array **v286; // x4
  System_Int32_array **v287; // x5
  System_Int32_array *v288; // x6
  System_Int32_array *v289; // x7
  __int64 v290; // x8
  struct GiftEntity_array *v291; // x22
  int v292; // w9
  int32_t *v293; // x9
  int32_t v294; // w1
  ItemIconComponent_o *v295; // x0
  int v296; // w8
  int32_t v297; // w2
  UnityEngine_GameObject_o *v298; // x0
  int32_t v299; // w3
  UnityEngine_Component_o *v300; // x0
  UnityEngine_GameObject_o *v301; // x0
  UnityEngine_GameObject_o *v302; // x0
  UIWidget_o *v303; // x0
  ItemIconComponent_o *v304; // x0
  UnityEngine_Component_o *mRewardGetSP; // x0
  UnityEngine_GameObject_o *v306; // x0
  UIWidget_o *v307; // x0
  int32_t limitCounta; // [xsp+20h] [xbp-100h]
  _BOOL4 v309; // [xsp+24h] [xbp-FCh]
  int64_t nowTime; // [xsp+28h] [xbp-F8h]
  _BOOL4 IsClear; // [xsp+34h] [xbp-ECh]
  char v312; // [xsp+38h] [xbp-E8h]
  char v313; // [xsp+3Ch] [xbp-E4h]
  UnityEngine_GameObject_o *v314; // [xsp+40h] [xbp-E0h]
  MapControl_QuestInfo_o *v315; // [xsp+48h] [xbp-D8h]
  ServantStatusQuestBoardManager_o *v316; // [xsp+50h] [xbp-D0h]
  char v317; // [xsp+58h] [xbp-C8h]
  int key; // [xsp+5Ch] [xbp-C4h]
  int32_t QuestType; // [xsp+60h] [xbp-C0h]
  int32_t Minute; // [xsp+64h] [xbp-BCh] BYREF
  int32_t Hour; // [xsp+68h] [xbp-B8h] BYREF
  int32_t Day; // [xsp+6Ch] [xbp-B4h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v323; // [xsp+70h] [xbp-B0h] BYREF
  int32_t fixedVal[2]; // [xsp+88h] [xbp-98h] BYREF
  uint64_t dateData; // [xsp+90h] [xbp-90h] BYREF
  WarEntity_o *v326; // [xsp+98h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v327; // [xsp+A0h] [xbp-80h] BYREF
  UserQuestEntity_o *entity; // [xsp+B8h] [xbp-68h] BYREF
  QuestReleaseEntity_o *questReleaseNG; // [xsp+C0h] [xbp-60h] BYREF
  System_DateTime_o v330; // 0:x0.8
  System_DateTime_o v331; // 0:x0.8
  System_DateTime_o v332; // 0:x0.8
  System_DateTime_o v333; // 0:x0.8
  UnityEngine_Vector3_o v334; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v335; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v336; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FCA80 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, qinf);
    sub_B16FFC(&AtlasManager_TypeInfo, v13);
    sub_B16FFC(&CondType_TypeInfo, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_B16FFC(&Method_DataManager_GetMaster_ClosedMessageMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestGroupMaster___, v18);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v19);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v20);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v21);
    sub_B16FFC(&Method_DataManager_GetMaster_UserQuestMaster___, v22);
    sub_B16FFC(&Method_DataManager_GetMaster_WarMaster___, v23);
    sub_B16FFC(&DataManager_TypeInfo, v24);
    sub_B16FFC(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v25);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v26);
    sub_B16FFC(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v27);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v28);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v29);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v30);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v31);
    sub_B16FFC(&int_TypeInfo, v32);
    sub_B16FFC(&long_TypeInfo, v33);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__, v34);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v35);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v36);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, v37);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, v38);
    sub_B16FFC(&LocalizationManager_TypeInfo, v39);
    sub_B16FFC(&NetworkManager_TypeInfo, v40);
    sub_B16FFC(&object___TypeInfo, v41);
    sub_B16FFC(&QuestBoardInformaionText_TypeInfo, v42);
    sub_B16FFC(&ServantStatusQuestBoardDraw_TypeInfo, v43);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v44);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v45);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v46);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v47);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v48);
    sub_B16FFC(&Method_ServantStatusQuestBoardDraw___c__DisplayClass46_0__SetItem_b__0__, v49);
    sub_B16FFC(&Method_ServantStatusQuestBoardDraw___c__DisplayClass46_0__SetItem_b__1__, v50);
    sub_B16FFC(&ServantStatusQuestBoardDraw___c__DisplayClass46_0_TypeInfo, v51);
    sub_B16FFC(&StringLiteral_13352, v52);
    sub_B16FFC(&StringLiteral_23445, v53);
    sub_B16FFC(&StringLiteral_11995, v54);
    sub_B16FFC(&StringLiteral_11997, v55);
    sub_B16FFC(&StringLiteral_11996, v56);
    sub_B16FFC(&StringLiteral_1, v57);
    sub_B16FFC(&StringLiteral_11994, v58);
    sub_B16FFC(&StringLiteral_11948, v59);
    byte_40FCA80 = 1;
  }
  entity = 0LL;
  questReleaseNG = 0LL;
  memset(&v327, 0, sizeof(v327));
  v326 = 0LL;
  *(_QWORD *)fixedVal = 0LL;
  dateData = 0LL;
  v60 = sub_B170CC(
          ServantStatusQuestBoardDraw___c__DisplayClass46_0_TypeInfo,
          qinf,
          beforeQuestInfo,
          inputMessageObject,
          questBoardManager);
  ServantStatusQuestBoardDraw___c__DisplayClass46_0___ctor(
    (ServantStatusQuestBoardDraw___c__DisplayClass46_0_o *)v60,
    0LL);
  if ( !v60 )
    goto LABEL_307;
  *(_QWORD *)(v60 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v60 + 16), (System_Int32_array **)this, v61, v62, v63, v64, v65, v66);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !qinf )
    goto LABEL_307;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_307;
  v314 = inputMessageObject;
  limitCounta = limitCount;
  InterludeQuestIdList = QuestGroupMaster__GetInterludeQuestIdList(
                           Master_WarQuestSelectionMaster,
                           qinf->fields.questId,
                           0LL);
  if ( !InterludeQuestIdList )
    goto LABEL_307;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v323,
    InterludeQuestIdList,
    (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v327 = v323;
  v315 = qinf;
  v316 = questBoardManager;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v327,
            (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v327.fields.current;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsQuestClear_25438860(current, -1, 0, 0LL) )
    {
      v70 = 1;
      goto LABEL_18;
    }
  }
  v70 = 0;
  current = 0;
LABEL_18:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v327,
    (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( !questBoardManager )
    goto LABEL_307;
  mListCreatedTime = questBoardManager->fields.mListCreatedTime;
  Mine = MapControl_QuestInfo__GetMine(qinf, 0LL);
  QuestType = MapControl_QuestInfo__GetQuestType(qinf, 0LL);
  v74 = (v70 & 1) != 0 || MapControl_QuestInfo__IsClear(qinf, 0LL);
  if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  }
  IsClose = ServantStatusQuestBoardDraw__IsClose(qinf, v73);
  if ( beforeQuestInfo )
  {
    IsClear = MapControl_QuestInfo__IsClear(beforeQuestInfo, 0LL);
    if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    }
    v309 = ServantStatusQuestBoardDraw__IsClose(beforeQuestInfo, v82);
    if ( !Mine )
      goto LABEL_307;
  }
  else
  {
    v309 = 0;
    IsClear = 1;
    if ( !Mine )
      goto LABEL_307;
  }
  id = Mine->fields.id;
  this->fields.qinf = qinf;
  this->fields.questId = id;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.qinf,
    (System_Int32_array **)qinf,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  warId = qinf->fields.warId;
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v85 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !v85 )
    goto LABEL_307;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(v85, warId, 0LL);
  if ( WarEntityByWarID )
    v87 = !WarEntity__IsFolder(WarEntityByWarID, 0LL);
  else
    v87 = 0;
  *(_BYTE *)(v60 + 40) = v87;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v88 = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !v88 )
    goto LABEL_307;
  v89 = v88;
  nowTime = mListCreatedTime;
  IsLimitCountSealQuest = ServantLimitImageMaster__IsLimitCountSealQuest(v88, this->fields.questId, 0LL);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v91 = Mine;
  v92 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !v92 )
    goto LABEL_307;
  v93 = Mine->fields.id;
  v94 = IsClose;
  clsQuestCheck__mfQuestReleaseCheckGetEntityByQuestID(v92, v93, &questReleaseNG, qinf, 0LL);
  if ( questReleaseNG )
    key = questReleaseNG->fields.closedMessageId;
  else
    key = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v95 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( current < 1 )
  {
    if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v95 )
      goto LABEL_307;
    questId = this->fields.questId;
    v97 = UserId;
    v98 = (UserQuestMaster_o *)v95;
  }
  else
  {
    if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v96 = NetworkManager__get_UserId(0LL);
    if ( !v95 )
      goto LABEL_307;
    v97 = v96;
    v98 = (UserQuestMaster_o *)v95;
    questId = current;
  }
  UserQuestMaster__TryGetEntity(v98, &entity, v97, questId, 0LL);
  if ( entity )
    HasStatus = UserQuestEntity__HasStatus(entity, 4, 0LL);
  else
    HasStatus = 0;
  if ( (IsLimitCountSealQuest & ~v74 & 1) != 0 )
  {
    IsCommonReleaseMultiClear = ServantLimitImageMaster__IsCommonReleaseMultiClear(v89, this->fields.questId, 0LL);
    v103 = key;
    v74 = IsCommonReleaseMultiClear;
    HasStatus &= !IsCommonReleaseMultiClear;
    if ( IsCommonReleaseMultiClear )
      v103 = 0;
    v94 &= !IsCommonReleaseMultiClear;
    key = v103;
  }
  v104 = v94 | v74;
  v317 = v94;
  if ( ((v94 | v74) & 1) != 0 )
    *(UnityEngine_Color_o *)&v105 = UnityEngine_Color__get_gray(0LL);
  else
    *(UnityEngine_Color_o *)&v105 = UnityEngine_Color__get_white(0LL);
  *(_DWORD *)(v60 + 24) = v105;
  *(_DWORD *)(v60 + 28) = v106;
  *(_DWORD *)(v60 + 32) = v107;
  *(_DWORD *)(v60 + 36) = v108;
  mTitleObj = this->fields.mTitleObj;
  v110 = v91;
  if ( !mTitleObj )
    goto LABEL_307;
  UnityEngine_GameObject__SetActive(mTitleObj, 1, 0LL);
  mOptionInfoLb = (UnityEngine_Component_o *)this->fields.mOptionInfoLb;
  if ( !mOptionInfoLb )
    goto LABEL_307;
  gameObject = UnityEngine_Component__get_gameObject(mOptionInfoLb, 0LL);
  if ( !gameObject )
    goto LABEL_307;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  mRewardObj = this->fields.mRewardObj;
  if ( !mRewardObj )
    goto LABEL_307;
  UnityEngine_GameObject__SetActive(mRewardObj, 1, 0LL);
  mCondObject = this->fields.mCondObject;
  if ( !mCondObject )
    goto LABEL_307;
  v312 = v104;
  UnityEngine_GameObject__SetActive(mCondObject, 0, 0LL);
  mcBaseP = this->fields.mcBaseP;
  if ( !mcBaseP )
    goto LABEL_307;
  mAtlas = mcBaseP->fields.mAtlas;
  this->fields.basePanelAtlas = mAtlas;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.basePanelAtlas,
    (System_Int32_array **)mAtlas,
    v115,
    v116,
    v117,
    v118,
    v119,
    v120);
  v123 = this->fields.mcBaseP;
  if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  }
  if ( !v123 )
    goto LABEL_307;
  UISprite__set_spriteName(v123, ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME, 0LL);
  if ( IsLimitCountSealQuest )
  {
    v128 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v124, v125, v126, v127);
    System_Action___ctor(
      v128,
      (Il2CppObject *)v60,
      Method_ServantStatusQuestBoardDraw___c__DisplayClass46_0__SetItem_b__0__,
      0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__LoadEventUI(v128, 1, 0LL);
  }
  v129 = this->fields.mcBaseP;
  if ( !v129 )
    goto LABEL_307;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v129->klass->vtable._33_MakePixelPerfect.method)(
    v129,
    v129->klass->vtable._34_get_minWidth.methodPtr);
  v130 = (UIWidget_o *)this->fields.mcBaseP;
  if ( !v130 )
    goto LABEL_307;
  UIWidget__set_color(v130, *(UnityEngine_Color_o *)(v60 + 24), 0LL);
  mLineSp = (UnityEngine_Behaviour_o *)this->fields.mLineSp;
  if ( !mLineSp )
    goto LABEL_307;
  UnityEngine_Behaviour__set_enabled(mLineSp, 1, 0LL);
  v132 = (UIWidget_o *)this->fields.mLineSp;
  if ( !v132 )
    goto LABEL_307;
  UIWidget__set_color(v132, *(UnityEngine_Color_o *)(v60 + 24), 0LL);
  mTitle2Sp = (UnityEngine_Behaviour_o *)this->fields.mTitle2Sp;
  if ( !mTitle2Sp )
    goto LABEL_307;
  if ( (v74 & 1) != 0 )
  {
    UnityEngine_Behaviour__set_enabled(mTitle2Sp, 0, 0LL);
    mTitleSp = (UnityEngine_Behaviour_o *)this->fields.mTitleSp;
    if ( !mTitleSp )
      goto LABEL_307;
    UnityEngine_Behaviour__set_enabled(mTitleSp, 0, 0LL);
    mLinkObj = this->fields.mLinkObj;
    if ( !mLinkObj )
      goto LABEL_307;
    UnityEngine_GameObject__SetActive(mLinkObj, 0, 0LL);
  }
  else
  {
    UnityEngine_Behaviour__set_enabled(mTitle2Sp, 1, 0LL);
    v136 = (UIWidget_o *)this->fields.mTitle2Sp;
    if ( !v136 )
      goto LABEL_307;
    UIWidget__set_color(v136, *(UnityEngine_Color_o *)(v60 + 24), 0LL);
    v137 = (UnityEngine_Behaviour_o *)this->fields.mTitleSp;
    if ( !v137 )
      goto LABEL_307;
    UnityEngine_Behaviour__set_enabled(v137, 1, 0LL);
    v138 = this->fields.mTitleSp;
    if ( !v138 )
      goto LABEL_307;
    UISprite__set_atlas(v138, this->fields.basePanelAtlas, 0LL);
    v139 = this->fields.mTitleSp;
    if ( QuestType == 3 )
    {
      v140 = ServantStatusQuestBoardDraw_TypeInfo;
      if ( *(_BYTE *)(v60 + 40) )
      {
        if ( (WORD1(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
          v140 = ServantStatusQuestBoardDraw_TypeInfo;
        }
        p_TITLE_SPRITE_NAME_INTERLUDE_MAP = &v140->static_fields->TITLE_SPRITE_NAME_INTERLUDE_MAP;
        if ( !v139 )
          goto LABEL_307;
      }
      else
      {
        if ( (WORD1(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
          v140 = ServantStatusQuestBoardDraw_TypeInfo;
        }
        p_TITLE_SPRITE_NAME_INTERLUDE_MAP = &v140->static_fields->TITLE_SPRITE_NAME_INTERLUDE;
        if ( !v139 )
          goto LABEL_307;
      }
      UISprite__set_spriteName(v139, *p_TITLE_SPRITE_NAME_INTERLUDE_MAP, 0LL);
      if ( IsLimitCountSealQuest )
      {
        v146 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v142, v143, v144, v145);
        System_Action___ctor(
          v146,
          (Il2CppObject *)v60,
          Method_ServantStatusQuestBoardDraw___c__DisplayClass46_0__SetItem_b__1__,
          0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__LoadEventUI(v146, 1, 0LL);
      }
    }
    else
    {
      if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      }
      if ( !v139 )
        goto LABEL_307;
      UISprite__set_spriteName(
        v139,
        ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_SPRITE_NAME_RAINFORCEMENT,
        0LL);
    }
    v147 = this->fields.mTitleSp;
    if ( !v147 )
      goto LABEL_307;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v147->klass->vtable._33_MakePixelPerfect.method)(
      v147,
      v147->klass->vtable._34_get_minWidth.methodPtr);
    v148 = (UIWidget_o *)this->fields.mTitleSp;
    if ( !v148 )
      goto LABEL_307;
    UIWidget__set_color(v148, *(UnityEngine_Color_o *)(v60 + 24), 0LL);
    v149 = this->fields.mLinkObj;
    if ( !v149 )
      goto LABEL_307;
    UnityEngine_GameObject__SetActive(v149, 1, 0LL);
    v150 = this->fields.mLinkObj;
    if ( !v150 )
      goto LABEL_307;
    v151 = UnityEngine_GameObject__get_gameObject(v150, 0LL);
    if ( !v151 )
      goto LABEL_307;
    Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              v151,
                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !Component_srcLineSprite )
      goto LABEL_307;
    UIWidget__set_color(Component_srcLineSprite, *(UnityEngine_Color_o *)(v60 + 24), 0LL);
  }
  mClearObj = this->fields.mClearObj;
  if ( !mClearObj )
    goto LABEL_307;
  UnityEngine_GameObject__SetActive(mClearObj, v74 & 1, 0LL);
  mNoneLb = this->fields.mNoneLb;
  if ( !mNoneLb )
    goto LABEL_307;
  UILabel__set_text(mNoneLb, (System_String_o *)StringLiteral_1, 0LL);
  v313 = HasStatus;
  if ( !(v74 & 1 | IsClear) )
  {
    p_mTitleNameLb = (UIWidget_o **)&this->fields.mTitleNameLb;
    mTitleNameLb = this->fields.mTitleNameLb;
    if ( QuestType == 3 )
    {
      v160 = (System_String_o **)&StringLiteral_11995;
      v161 = LocalizationManager_TypeInfo;
      v162 = (System_String_o **)&StringLiteral_11994;
    }
    else
    {
      v160 = (System_String_o **)&StringLiteral_11997;
      v161 = LocalizationManager_TypeInfo;
      v162 = (System_String_o **)&StringLiteral_11996;
    }
    v157 = v317;
    if ( !v309 )
      v160 = v162;
    v163 = *v160;
    if ( (BYTE3(v161->vtable._0_Equals.methodPtr) & 4) != 0 && !v161->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v161);
    v164 = v74;
    v165 = v163;
    goto LABEL_149;
  }
  if ( key >= 1 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v155 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClosedMessageMaster___);
    if ( !v155 )
      goto LABEL_307;
    age = (System_String_o *)StringLiteral_1;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           v155,
           &v326,
           key,
           (const MethodInfo_266F3E4 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__) )
    {
      v157 = v317;
      if ( !v326 )
        goto LABEL_307;
      age = v326->fields.age;
    }
    else
    {
      v157 = v317;
    }
    if ( !questReleaseNG )
      goto LABEL_307;
    switch ( questReleaseNG->fields.type )
    {
      case 1:
        targetId = questReleaseNG->fields.targetId;
        v206 = (System_String_o *)StringLiteral_1;
        if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
        }
        v207 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !v207 )
          goto LABEL_307;
        WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(v207, targetId, 0LL);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v209 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarMaster___);
        if ( !v209 )
          goto LABEL_307;
        v210 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 v209,
                 WarID_ByQuestID,
                 (const MethodInfo_266F388 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
        if ( v210 )
        {
          PrioredName = (Il2CppObject *)WarEntity__GetPrioredName(v210, 0LL);
          goto LABEL_196;
        }
        age = v206;
        break;
      case 6:
      case 7:
      case 9:
        v323.fields.list = (struct System_Collections_Generic_List_T__o *)questReleaseNG->fields.value;
        PrioredName = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v323);
        goto LABEL_196;
      case 0xC:
        OpenedAt = QuestEntity__getOpenedAt(v110, 0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        dateData = NetworkManager__getServerDateTime_23685560(OpenedAt, 0LL).fields.dateData;
        v176 = (System_Object_array *)sub_B17014(object___TypeInfo, 4LL, v175);
        v330.fields.dateData = (uint64_t)&dateData;
        LODWORD(v323.fields.list) = System_DateTime__get_Month(v330, 0LL);
        GiftListById = (GiftEntity_array *)j_il2cpp_value_box_0(int_TypeInfo, &v323);
        if ( !v176 )
          goto LABEL_307;
        v185 = (System_Int32_array **)GiftListById;
        if ( GiftListById )
        {
          GiftListById = (GiftEntity_array *)sub_B170BC(GiftListById, v176->obj.klass->_1.element_class);
          if ( !GiftListById )
            goto LABEL_306;
        }
        if ( !v176->max_length )
          goto LABEL_305;
        v176->m_Items[0] = (Il2CppObject *)v185;
        sub_B16F98((BattleServantConfConponent_o *)v176->m_Items, v185, v179, v180, v181, v182, v183, v184);
        v331.fields.dateData = (uint64_t)&dateData;
        Day = System_DateTime__get_Day(v331, 0LL);
        GiftListById = (GiftEntity_array *)j_il2cpp_value_box_0(int_TypeInfo, &Day);
        v191 = (System_Int32_array **)GiftListById;
        if ( GiftListById )
        {
          GiftListById = (GiftEntity_array *)sub_B170BC(GiftListById, v176->obj.klass->_1.element_class);
          if ( !GiftListById )
            goto LABEL_306;
        }
        if ( v176->max_length <= 1 )
          goto LABEL_305;
        v176->m_Items[1] = (Il2CppObject *)v191;
        sub_B16F98((BattleServantConfConponent_o *)&v176->m_Items[1], v191, v179, v186, v187, v188, v189, v190);
        v332.fields.dateData = (uint64_t)&dateData;
        Hour = System_DateTime__get_Hour(v332, 0LL);
        GiftListById = (GiftEntity_array *)j_il2cpp_value_box_0(int_TypeInfo, &Hour);
        v197 = (System_Int32_array **)GiftListById;
        if ( GiftListById )
        {
          GiftListById = (GiftEntity_array *)sub_B170BC(GiftListById, v176->obj.klass->_1.element_class);
          if ( !GiftListById )
            goto LABEL_306;
        }
        if ( v176->max_length <= 2 )
          goto LABEL_305;
        v176->m_Items[2] = (Il2CppObject *)v197;
        sub_B16F98((BattleServantConfConponent_o *)&v176->m_Items[2], v197, v179, v192, v193, v194, v195, v196);
        v333.fields.dateData = (uint64_t)&dateData;
        Minute = System_DateTime__get_Minute(v333, 0LL);
        GiftListById = (GiftEntity_array *)j_il2cpp_value_box_0(int_TypeInfo, &Minute);
        v203 = (System_Int32_array **)GiftListById;
        if ( GiftListById )
        {
          GiftListById = (GiftEntity_array *)sub_B170BC(GiftListById, v176->obj.klass->_1.element_class);
          if ( !GiftListById )
          {
LABEL_306:
            sub_B170F4(GiftListById);
            sub_B170A0();
          }
        }
        v157 = v317;
        if ( v176->max_length <= 3 )
          goto LABEL_305;
        v176->m_Items[3] = (Il2CppObject *)v203;
        sub_B16F98((BattleServantConfConponent_o *)&v176->m_Items[3], v203, v179, v198, v199, v200, v201, v202);
        v204 = System_String__Format_43822456(age, v176, 0LL);
        goto LABEL_197;
      default:
        goto LABEL_198;
    }
    goto LABEL_198;
  }
  if ( questReleaseNG && questReleaseNG->fields.type == 8 )
  {
    p_mTitleNameLb = (UIWidget_o **)&this->fields.mTitleNameLb;
    mTitleNameLb = this->fields.mTitleNameLb;
    v157 = v317;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v164 = v74;
    v165 = (System_String_o *)StringLiteral_11948;
LABEL_149:
    v166 = LocalizationManager__Get(v165, 0LL);
    if ( !mTitleNameLb )
      goto LABEL_307;
    v167 = v166;
    v168 = mTitleNameLb;
    goto LABEL_200;
  }
  QuestName = QuestEntity__getQuestName(v91, 0LL);
  v157 = v317;
  if ( !QuestName )
    goto LABEL_307;
  age = QuestName;
  if ( System_String__Contains(QuestName, (System_String_o *)StringLiteral_23445, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v171 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
    ServantId = QuestEntity__getServantId(v110, 0LL);
    if ( !v171 )
      goto LABEL_307;
    v173 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v171,
                                ServantId,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !v173 )
      goto LABEL_307;
    PrioredName = (Il2CppObject *)ServantEntity__getBattleName(v173, 0, -1, 0LL);
LABEL_196:
    v204 = System_String__Format(age, PrioredName, 0LL);
LABEL_197:
    age = v204;
  }
LABEL_198:
  p_mTitleNameLb = (UIWidget_o **)&this->fields.mTitleNameLb;
  v168 = this->fields.mTitleNameLb;
  if ( !v168 )
    goto LABEL_307;
  v164 = v74;
  v167 = age;
LABEL_200:
  UILabel__set_text(v168, v167, 0LL);
  v211 = (UnityEngine_Component_o *)*p_mTitleNameLb;
  if ( !*p_mTitleNameLb )
    goto LABEL_307;
  m_CachedPtr = v211[6].fields.m_CachedPtr;
  if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    v211 = (UnityEngine_Component_o *)*p_mTitleNameLb;
    if ( !*p_mTitleNameLb )
      goto LABEL_307;
  }
  v213 = m_CachedPtr <= ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH;
  transform = UnityEngine_Component__get_transform(v211, 0LL);
  if ( v213 )
  {
    *(UnityEngine_Vector3_o *)&v217 = UnityEngine_Vector3__get_one(0LL);
    v215 = v312;
    if ( !transform )
      goto LABEL_307;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v217, 0LL);
    p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  }
  else
  {
    v215 = v312;
    if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    }
    if ( !*p_mTitleNameLb || !transform )
      goto LABEL_307;
    p_mOptionInfoLb = &this->fields.mOptionInfoLb;
    v334.fields.x = (float)ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH
                  / (float)(*p_mTitleNameLb)->fields.mWidth;
    v334.fields.y = 1.0;
    v334.fields.z = 1.0;
    UnityEngine_Transform__set_localScale(transform, v334, 0LL);
  }
  if ( !*p_mTitleNameLb )
    goto LABEL_307;
  v220 = v164;
  UIWidget__set_color(*p_mTitleNameLb, *(UnityEngine_Color_o *)(v60 + 24), 0LL);
  v227 = v316;
  if ( (v157 & 1) != 0 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v228 = (QuestReleaseOverwriteMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    if ( !v228 )
      goto LABEL_307;
    EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                               v228,
                               this->fields.questId,
                               nowTime,
                               0LL);
    ServantStatusQuestBoardDraw__SetupCondtionChangeMessage(this, EntityByQuestIdAndTime, v230);
  }
  if ( (v215 & 1) != 0 )
    v231 = 0LL;
  else
    v231 = v314;
  this->fields.inputMessageObject = v231;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.inputMessageObject,
    (System_Int32_array **)v231,
    v221,
    v222,
    v223,
    v224,
    v225,
    v226);
  if ( QuestType == 3 )
  {
    v232 = QuestEntity__getServantId(v110, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_307;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_307;
    v235 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             v232,
             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !this->fields.mTitleShortcutSp )
      goto LABEL_307;
    v236 = (ServantEntity_o *)v235;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mTitleShortcutSp, 0, 0LL);
    mTitleShortcutLb = this->fields.mTitleShortcutLb;
    if ( v236 )
    {
      Name = ServantEntity__getName(v236, limitCounta, -1, 0LL);
      if ( !mTitleShortcutLb )
        goto LABEL_307;
      UILabel__set_text(mTitleShortcutLb, Name, 0LL);
      v239 = (UIWidget_o *)this->fields.mTitleShortcutLb;
      if ( !v239 )
        goto LABEL_307;
      UIWidget__set_color(v239, *(UnityEngine_Color_o *)(v60 + 24), 0LL);
      goto LABEL_238;
    }
    if ( !mTitleShortcutLb )
      goto LABEL_307;
    v243 = this->fields.mTitleShortcutLb;
  }
  else
  {
    mTitleShortcutSp = (UnityEngine_Behaviour_o *)this->fields.mTitleShortcutSp;
    if ( !mTitleShortcutSp )
      goto LABEL_307;
    UnityEngine_Behaviour__set_enabled(mTitleShortcutSp, 1, 0LL);
    v242 = (UIWidget_o *)this->fields.mTitleShortcutSp;
    if ( !v242 )
      goto LABEL_307;
    UIWidget__set_color(v242, *(UnityEngine_Color_o *)(v60 + 24), 0LL);
    v243 = this->fields.mTitleShortcutLb;
    if ( !v243 )
      goto LABEL_307;
  }
  UILabel__set_text(v243, (System_String_o *)StringLiteral_1, 0LL);
LABEL_238:
  ServantStatusQuestBoardDraw__ResetInfoTextList(this, v240);
  if ( (v164 & 1) != 0 )
    goto LABEL_254;
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  endTime = v315->fields.endTime;
  if ( endTime >= 1 && !QuestEntity__HasFlag(v110, 32LL, 0LL) )
  {
    mInfoTextList = this->fields.mInfoTextList;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v246 = LocalizationManager__Get((System_String_o *)StringLiteral_13352, 0LL);
    v251 = (QuestBoardInformaionText_o *)sub_B170CC(QuestBoardInformaionText_TypeInfo, v247, v248, v249, v250);
    v336.fields.r = 0.0;
    v336.fields.g = 0.0;
    v336.fields.b = 0.0;
    v336.fields.a = 0.0;
    v335.fields.x = 0.0;
    v335.fields.y = 0.0;
    v335.fields.z = 0.0;
    v252 = (EventMissionProgressRequest_Argument_ProgressData_o *)v251;
    QuestBoardInformaionText___ctor(v251, v246, endTime, 0, 0, v336, -1, 0, v335, 1, 0LL, 0LL, 0LL);
    if ( !mInfoTextList )
      goto LABEL_307;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mInfoTextList,
      v252,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    v227 = v316;
    v157 = v317;
  }
  questPhase = v315->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(v315, 0LL);
  v255 = UnityEngine_Mathf__Min_40727532(questPhase + 1, PhaseMax, 0LL);
  v256 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.mInfoTextList;
  CampaignText = (System_Collections_Generic_IEnumerable_T__o *)ServantStatusQuestBoardDraw__GetCampaignText(
                                                                  this,
                                                                  v257,
                                                                  v255,
                                                                  0,
                                                                  v227,
                                                                  &fixedVal[1],
                                                                  fixedVal,
                                                                  v258);
  if ( !v256 )
    goto LABEL_307;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    v256,
    CampaignText,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
  v260 = this->fields.mInfoTextList;
  if ( !v260 )
    goto LABEL_307;
  size = v260->fields._size;
  if ( size < 1 )
  {
LABEL_254:
    v265 = 0;
  }
  else
  {
    v262 = v227->fields.mAlphaAnimCnt % size;
    if ( size <= (unsigned int)v262 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v263 = v260->fields._items->m_Items[v262];
    if ( !v263 )
      goto LABEL_307;
    QuestBoardInformaionText__SetTime(v263, p_mOptionInfoLb, &this->fields.mOptionInfoFrameSp, 0LL);
    v264 = this->fields.mOptionInfoLb;
    if ( !v264 )
      goto LABEL_307;
    BoardOptionTextWithIconComponent__set_Alpha(v264, 1.0, 0LL);
    v265 = 1;
    v315->fields.costCalcVal = fixedVal[1];
    v315->fields._fixedCostVal_k__BackingField = fixedVal[0];
  }
  if ( !*p_mOptionInfoLb )
    goto LABEL_307;
  v266 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)*p_mOptionInfoLb, 0LL);
  if ( !v266 )
    goto LABEL_307;
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v266, 0LL);
  if ( !parent )
    goto LABEL_307;
  v268 = UnityEngine_Component__get_gameObject(parent, 0LL);
  if ( !v268 )
    goto LABEL_307;
  UnityEngine_GameObject__SetActive(v268, v265, 0LL);
  if ( !*p_mOptionInfoLb )
    goto LABEL_307;
  v269 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*p_mOptionInfoLb, 0LL);
  if ( !v269 )
    goto LABEL_307;
  UnityEngine_GameObject__SetActive(v269, v265, 0LL);
  this->fields.mRewardIconInfs = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.mRewardIconInfs, 0LL, v270, v271, v272, v273, v274, v275);
  mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardIcon;
  if ( !mRewardIcon )
    goto LABEL_307;
  v277 = UnityEngine_Component__get_gameObject(mRewardIcon, 0LL);
  if ( !v277 )
    goto LABEL_307;
  UnityEngine_GameObject__SetActive(v277, 0, 0LL);
  if ( (v157 & 1) == 0 || !QuestEntity__HasFlag(v110, 4096LL, 0LL) )
  {
    giftIconId = v110->fields.giftIconId;
    if ( giftIconId >= 1 )
    {
      v278 = this->fields.mRewardIcon;
      if ( !v278 )
        goto LABEL_307;
      goto LABEL_269;
    }
    if ( v110->fields.giftId < 1 )
    {
      v298 = this->fields.mRewardObj;
      if ( !v298 )
        goto LABEL_307;
      UnityEngine_GameObject__SetActive(v298, 0, 0LL);
      goto LABEL_296;
    }
    v283 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v283 )
      goto LABEL_307;
    v284 = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)v283,
                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !v284 )
      goto LABEL_307;
    GiftListById = GiftMaster__GetGiftListById(v284, v110->fields.giftId, 0LL);
    if ( !GiftListById )
      goto LABEL_307;
    v290 = *(_QWORD *)&GiftListById->max_length;
    v291 = GiftListById;
    if ( !v290 )
    {
LABEL_295:
      this->fields.mRewardIconInfs = v291;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.mRewardIconInfs,
        (System_Int32_array **)v291,
        v179,
        v285,
        v286,
        v287,
        v288,
        v289);
LABEL_296:
      v281 = v313;
      goto LABEL_297;
    }
    v292 = v227->fields.mAlphaAnimCnt % (int)v290;
    if ( v292 >= (unsigned int)v290 )
    {
LABEL_305:
      sub_B17100(GiftListById, v178, v179);
      sub_B170A0();
    }
    v293 = (int32_t *)GiftListById->m_Items[v292];
    if ( v293 )
    {
      v294 = v293[11];
      v295 = this->fields.mRewardIcon;
      v296 = v293[7];
      if ( v294 < 1 )
      {
        if ( !v295 )
          goto LABEL_307;
        v299 = v296 <= 1 ? -1 : v293[7];
        ItemIconComponent__SetGift(v295, v293[5], v293[6], v299, 0, 0LL);
      }
      else
      {
        if ( !v295 )
          goto LABEL_307;
        v297 = v296 <= 1 ? -1 : v293[7];
        ItemIconComponent__SetItemImage_28930192(v295, v294, v297, 0LL);
      }
      v300 = (UnityEngine_Component_o *)this->fields.mRewardIcon;
      if ( v300 )
      {
        v301 = UnityEngine_Component__get_gameObject(v300, 0LL);
        if ( v301 )
        {
          UnityEngine_GameObject__SetActive(v301, 1, 0LL);
          goto LABEL_295;
        }
      }
    }
LABEL_307:
    sub_B170D4();
  }
  v278 = this->fields.mRewardIcon;
  if ( !v278 )
    goto LABEL_307;
  giftIconId = 99;
LABEL_269:
  ItemIconComponent__SetItemImage(v278, giftIconId, 0LL);
  v280 = (UnityEngine_Component_o *)this->fields.mRewardIcon;
  v281 = v313;
  if ( !v280 )
    goto LABEL_307;
  v282 = UnityEngine_Component__get_gameObject(v280, 0LL);
  if ( !v282 )
    goto LABEL_307;
  UnityEngine_GameObject__SetActive(v282, 1, 0LL);
LABEL_297:
  v302 = this->fields.mRewardObj;
  if ( !v302 )
    goto LABEL_307;
  v303 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         v302,
                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !v303 )
    goto LABEL_307;
  UIWidget__set_color(v303, *(UnityEngine_Color_o *)(v60 + 24), 0LL);
  v304 = this->fields.mRewardIcon;
  if ( !v304 )
    goto LABEL_307;
  ItemIconComponent__SetColor(v304, *(UnityEngine_Color_o *)(v60 + 24), 0LL);
  mRewardGetSP = (UnityEngine_Component_o *)this->fields.mRewardGetSP;
  if ( !mRewardGetSP )
    goto LABEL_307;
  v306 = UnityEngine_Component__get_gameObject(mRewardGetSP, 0LL);
  if ( !v306 )
    goto LABEL_307;
  UnityEngine_GameObject__SetActive(v306, v220 & (v281 ^ 1) & 1, 0LL);
  v307 = (UIWidget_o *)this->fields.mRewardGetSP;
  if ( !v307 )
    goto LABEL_307;
  UIWidget__set_color(v307, *(UnityEngine_Color_o *)(v60 + 24), 0LL);
}


void __fastcall ServantStatusQuestBoardDraw__SetRewardIconAlpha(
        ServantStatusQuestBoardDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct GiftEntity_array *mRewardIconInfs; // x8
  ItemIconComponent_o *mRewardIcon; // x0

  mRewardIconInfs = this->fields.mRewardIconInfs;
  if ( mRewardIconInfs && (int)mRewardIconInfs->max_length >= 2 )
  {
    mRewardIcon = this->fields.mRewardIcon;
    if ( !mRewardIcon )
      sub_B170D4();
    ItemIconComponent__SetAlpha(mRewardIcon, alpha, 0LL);
  }
}


void __fastcall ServantStatusQuestBoardDraw__SetupCondtionChangeMessage(
        ServantStatusQuestBoardDraw_o *this,
        QuestReleaseOverwriteEntity_o *questReleaseOverwriteEnt,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *mCondObject; // x0
  UILabel_o *mCondChangeMessage; // x0
  UILabel_o *v7; // x19

  if ( (byte_40FCA81 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusQuestBoardDraw_TypeInfo, questReleaseOverwriteEnt);
    byte_40FCA81 = 1;
  }
  if ( questReleaseOverwriteEnt
    && !System_String__IsNullOrEmpty(questReleaseOverwriteEnt->fields.overlayClosedMessage, 0LL) )
  {
    mCondObject = this->fields.mCondObject;
    if ( !mCondObject )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive(mCondObject, 1, 0LL);
    mCondChangeMessage = this->fields.mCondChangeMessage;
    if ( !mCondChangeMessage )
      goto LABEL_13;
    UILabel__set_text(mCondChangeMessage, questReleaseOverwriteEnt->fields.overlayClosedMessage, 0LL);
    v7 = this->fields.mCondChangeMessage;
    if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    }
    if ( !v7 )
LABEL_13:
      sub_B170D4();
    UILabel__SetCondensedScale(v7, ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH, 0LL);
  }
}


void __fastcall ServantStatusQuestBoardDraw__UpdateInfoText(
        ServantStatusQuestBoardDraw_o *this,
        MapControl_QuestInfo_o *qinf,
        int32_t strIndex,
        int64_t checkTime,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x22
  QuestBoardInformaionText_o *v9; // x0

  if ( (byte_40FCA83 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, qinf);
    byte_40FCA83 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( !mInfoTextList )
    goto LABEL_8;
  if ( mInfoTextList->fields._size <= (unsigned int)strIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v9 = mInfoTextList->fields._items->m_Items[strIndex];
  if ( !v9 )
LABEL_8:
    sub_B170D4();
  QuestBoardInformaionText__Update(v9, &this->fields.mOptionInfoLb, &this->fields.mOptionInfoFrameSp, checkTime, 0LL);
}


void __fastcall ServantStatusQuestBoardDraw__UpdateItem(
        ServantStatusQuestBoardDraw_o *this,
        ServantStatusQuestBoardManager_o *questBoardManager,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  if ( !questBoardManager )
    sub_B170D4();
  ServantStatusQuestBoardDraw__SetInfoTextAlpha(
    this,
    questBoardManager->fields.mAlphaAnimNow,
    (const MethodInfo *)questBoardManager);
  ServantStatusQuestBoardDraw__SetRewardIconAlpha(this, questBoardManager->fields.mAlphaAnimNow, v5);
}


// local variable allocation has failed, the output may be wrong!
BoardMessageEntity_o *__fastcall ServantStatusQuestBoardDraw__findOverrideQuestMessage(
        ServantStatusQuestBoardDraw_o *this,
        BoardMessageEntity_array *boardMessageData,
        int32_t eventId,
        const MethodInfo *method)
{
  signed int max_length; // w8
  unsigned int v5; // w9

  if ( !boardMessageData )
    goto LABEL_12;
  max_length = boardMessageData->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
      {
        sub_B17100(this, boardMessageData, *(_QWORD *)&eventId);
        sub_B170A0();
      }
      this = (ServantStatusQuestBoardDraw_o *)boardMessageData->m_Items[v5];
      if ( !this )
        break;
      if ( HIDWORD(this->fields.mcBaseP) == 4 && LODWORD(this->fields.mClearObj) == eventId )
        return (BoardMessageEntity_o *)this;
      if ( (int)++v5 >= max_length )
        return 0LL;
    }
LABEL_12:
    sub_B170D4();
  }
  return 0LL;
}


void __fastcall ServantStatusQuestBoardDraw___c__DisplayClass46_0___ctor(
        ServantStatusQuestBoardDraw___c__DisplayClass46_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusQuestBoardDraw___c__DisplayClass46_0___SetItem_b__0(
        ServantStatusQuestBoardDraw___c__DisplayClass46_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *_4__this; // x20
  struct ServantStatusQuestBoardDraw_o *v6; // x8
  UnityEngine_Object_o *mcBaseP; // x20
  struct ServantStatusQuestBoardDraw_o *v8; // x8
  UISprite_o *v9; // x20
  ServantStatusQuestBoardDraw_c *v10; // x0
  System_String_o *BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME; // x21
  bool v12; // w0
  struct ServantStatusQuestBoardDraw_o *v13; // x9
  bool v14; // w8
  UISprite_o *v15; // x0
  struct ServantStatusQuestBoardDraw_o *v16; // x8
  UISprite_o *v17; // x20
  struct ServantStatusQuestBoardDraw_o *v18; // x8
  struct ServantStatusQuestBoardDraw_o *v19; // x8
  UIWidget_o *v20; // x0

  if ( (byte_40F7672 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&ServantStatusQuestBoardDraw_TypeInfo, v4);
    byte_40F7672 = 1;
  }
  _4__this = (UnityEngine_Object_o *)this->fields.__4__this;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(_4__this, 0LL, 0LL) )
  {
    v6 = this->fields.__4__this;
    if ( v6 )
    {
      mcBaseP = (UnityEngine_Object_o *)v6->fields.mcBaseP;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(mcBaseP, 0LL, 0LL) )
        return;
      v8 = this->fields.__4__this;
      if ( v8 )
      {
        v9 = v8->fields.mcBaseP;
        v10 = ServantStatusQuestBoardDraw_TypeInfo;
        if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
          v10 = ServantStatusQuestBoardDraw_TypeInfo;
        }
        BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME = v10->static_fields->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        v12 = AtlasManager__SetEventUI(v9, BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME, 0LL);
        v13 = this->fields.__4__this;
        if ( v13 )
        {
          v14 = v12;
          v15 = v13->fields.mcBaseP;
          if ( v14 )
          {
            if ( !v15 )
              goto LABEL_35;
          }
          else
          {
            if ( !v15 )
              goto LABEL_35;
            UISprite__set_atlas(v15, v13->fields.basePanelAtlas, 0LL);
            v16 = this->fields.__4__this;
            if ( !v16 )
              goto LABEL_35;
            v17 = v16->fields.mcBaseP;
            if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
            }
            if ( !v17 )
              goto LABEL_35;
            UISprite__set_spriteName(
              v17,
              ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME,
              0LL);
            v18 = this->fields.__4__this;
            if ( !v18 )
              goto LABEL_35;
            v15 = v18->fields.mcBaseP;
            if ( !v15 )
              goto LABEL_35;
          }
          ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v15->klass->vtable._33_MakePixelPerfect.method)(
            v15,
            v15->klass->vtable._34_get_minWidth.methodPtr);
          v19 = this->fields.__4__this;
          if ( v19 )
          {
            v20 = (UIWidget_o *)v19->fields.mcBaseP;
            if ( v20 )
            {
              UIWidget__set_color(v20, this->fields.baseCol, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_35:
    sub_B170D4();
  }
}


void __fastcall ServantStatusQuestBoardDraw___c__DisplayClass46_0___SetItem_b__1(
        ServantStatusQuestBoardDraw___c__DisplayClass46_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *_4__this; // x20
  struct ServantStatusQuestBoardDraw_o *v6; // x8
  UnityEngine_Object_o *mTitleSp; // x20
  struct ServantStatusQuestBoardDraw_o *v8; // x8
  UISprite_o *v9; // x20
  ServantStatusQuestBoardDraw_c *v10; // x0
  System_String_o *TITLE_SPRITE_NAME_LIMIT_UNSEAL; // x21
  bool v12; // w0
  struct ServantStatusQuestBoardDraw_o *v13; // x9
  bool v14; // w8
  UISprite_o *v15; // x0
  struct ServantStatusQuestBoardDraw_o *v16; // x8
  ServantStatusQuestBoardDraw_c *v17; // x0
  UISprite_o *v18; // x20
  System_String_o **p_TITLE_SPRITE_NAME_INTERLUDE_MAP; // x8
  struct ServantStatusQuestBoardDraw_o *v20; // x8
  struct ServantStatusQuestBoardDraw_o *v21; // x8
  UIWidget_o *v22; // x0

  if ( (byte_40F7673 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&ServantStatusQuestBoardDraw_TypeInfo, v4);
    byte_40F7673 = 1;
  }
  _4__this = (UnityEngine_Object_o *)this->fields.__4__this;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(_4__this, 0LL, 0LL) )
  {
    v6 = this->fields.__4__this;
    if ( v6 )
    {
      mTitleSp = (UnityEngine_Object_o *)v6->fields.mTitleSp;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(mTitleSp, 0LL, 0LL) )
        return;
      v8 = this->fields.__4__this;
      if ( v8 )
      {
        v9 = v8->fields.mTitleSp;
        v10 = ServantStatusQuestBoardDraw_TypeInfo;
        if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
          v10 = ServantStatusQuestBoardDraw_TypeInfo;
        }
        TITLE_SPRITE_NAME_LIMIT_UNSEAL = v10->static_fields->TITLE_SPRITE_NAME_LIMIT_UNSEAL;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        v12 = AtlasManager__SetEventUI(v9, TITLE_SPRITE_NAME_LIMIT_UNSEAL, 0LL);
        v13 = this->fields.__4__this;
        if ( v13 )
        {
          v14 = v12;
          v15 = v13->fields.mTitleSp;
          if ( v14 )
          {
            if ( !v15 )
              goto LABEL_41;
          }
          else
          {
            if ( !v15 )
              goto LABEL_41;
            UISprite__set_atlas(v15, v13->fields.basePanelAtlas, 0LL);
            v16 = this->fields.__4__this;
            if ( !v16 )
              goto LABEL_41;
            v17 = ServantStatusQuestBoardDraw_TypeInfo;
            v18 = v16->fields.mTitleSp;
            if ( this->fields.isMap )
            {
              if ( (WORD1(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
                v17 = ServantStatusQuestBoardDraw_TypeInfo;
              }
              p_TITLE_SPRITE_NAME_INTERLUDE_MAP = &v17->static_fields->TITLE_SPRITE_NAME_INTERLUDE_MAP;
              if ( !v18 )
                goto LABEL_41;
            }
            else
            {
              if ( (WORD1(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
                v17 = ServantStatusQuestBoardDraw_TypeInfo;
              }
              p_TITLE_SPRITE_NAME_INTERLUDE_MAP = &v17->static_fields->TITLE_SPRITE_NAME_INTERLUDE;
              if ( !v18 )
                goto LABEL_41;
            }
            UISprite__set_spriteName(v18, *p_TITLE_SPRITE_NAME_INTERLUDE_MAP, 0LL);
            v20 = this->fields.__4__this;
            if ( !v20 )
              goto LABEL_41;
            v15 = v20->fields.mTitleSp;
            if ( !v15 )
              goto LABEL_41;
          }
          ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v15->klass->vtable._33_MakePixelPerfect.method)(
            v15,
            v15->klass->vtable._34_get_minWidth.methodPtr);
          v21 = this->fields.__4__this;
          if ( v21 )
          {
            v22 = (UIWidget_o *)v21->fields.mTitleSp;
            if ( v22 )
            {
              UIWidget__set_color(v22, this->fields.baseCol, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_41:
    sub_B170D4();
  }
}