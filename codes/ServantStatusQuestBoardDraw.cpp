void __fastcall ServantStatusQuestBoardDraw___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  ServantStatusQuestBoardDraw_c *v7; // x8
  struct ServantStatusQuestBoardDraw_StaticFields *static_fields; // x9
  struct ServantStatusQuestBoardDraw_StaticFields *v9; // x9
  struct ServantStatusQuestBoardDraw_StaticFields *v10; // x0
  System_Int32_array **v11; // x1
  ServantStatusQuestBoardDraw_c *v12; // x8
  struct ServantStatusQuestBoardDraw_StaticFields *v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct ServantStatusQuestBoardDraw_StaticFields *v21; // x0
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct ServantStatusQuestBoardDraw_StaticFields *v29; // x0
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct ServantStatusQuestBoardDraw_StaticFields *v37; // x0
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct ServantStatusQuestBoardDraw_StaticFields *v45; // x0
  System_Int32_array **v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  struct ServantStatusQuestBoardDraw_StaticFields *v53; // x0
  System_Int32_array **v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct ServantStatusQuestBoardDraw_StaticFields *v61; // x0
  System_Int32_array **v62; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7

  if ( (byte_42B32C8 & 1) == 0 )
  {
    sub_B52984(&ServantStatusQuestBoardDraw_TypeInfo);
    sub_B52984(&StringLiteral_19623/*"img_conductor_03"*/);
    sub_B52984(&StringLiteral_19624/*"img_conductor_04"*/);
    sub_B52984(&StringLiteral_19622/*"img_conductor_02"*/);
    sub_B52984(&StringLiteral_17291/*"caldeagate_notice_{0:00}"*/);
    sub_B52984(&StringLiteral_19720/*"img_questboard_1001"*/);
    sub_B52984(&StringLiteral_19621/*"img_conductor_01"*/);
    sub_B52984(&StringLiteral_19625/*"img_conductor_questboard"*/);
    sub_B52984(&StringLiteral_19617/*"img_commonbg"*/);
    byte_42B32C8 = 1;
  }
  ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH = 320;
  ServantStatusQuestBoardDraw_TypeInfo->static_fields->ADVANCE_NOTICE_BASE_WIDTH = 416;
  v7 = ServantStatusQuestBoardDraw_TypeInfo;
  ServantStatusQuestBoardDraw_TypeInfo->static_fields->ADVANCE_NOTICE_BASE_HEIGHT = 90;
  v7->static_fields->ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT = 36;
  v7->static_fields->ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X = -208.0;
  static_fields = v7->static_fields;
  *(_QWORD *)&static_fields->CLEAR_POS_AREA.fields.x = 0xC23C0000431B0000LL;
  static_fields->CLEAR_POS_AREA.fields.z = 0.0;
  v9 = v7->static_fields;
  *(_QWORD *)&v9->CLEAR_POS_QUEST.fields.x = 0xC25C0000C3370000LL;
  v9->CLEAR_POS_QUEST.fields.z = 0.0;
  v7->static_fields->QUEST_BOARD_PHASE_INTERVAL = 21;
  v7->static_fields->QUEST_BOARD_PHASE_LOOF_INTERVAL = 30;
  v7->static_fields->QUEST_BOARD_PHASE_EX_INTERVAL = 17;
  v7->static_fields->QUEST_BOARD_PHASE_EX_LOOF_INTERVAL = 26;
  v10 = v7->static_fields;
  v11 = (System_Int32_array **)StringLiteral_19617/*"img_commonbg"*/;
  v10->DARK_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_19617/*"img_commonbg"*/;
  sub_B52920((BattleServantConfConponent_o *)&v10->DARK_BOARD_SPRITE_NAME, v11, v1, v2, v3, v4, v5, v6);
  v12 = ServantStatusQuestBoardDraw_TypeInfo;
  ServantStatusQuestBoardDraw_TypeInfo->static_fields->DARK_BOARD_WIDTH = 496;
  v12->static_fields->DARK_BOARD_HIGHT = 122;
  v13 = v12->static_fields;
  v14 = (System_Int32_array **)StringLiteral_19625/*"img_conductor_questboard"*/;
  v13->BASE_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_19625/*"img_conductor_questboard"*/;
  sub_B52920((BattleServantConfConponent_o *)&v13->BASE_BOARD_SPRITE_NAME, v14, v15, v16, v17, v18, v19, v20);
  v21 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_19622/*"img_conductor_02"*/;
  v21->TITLE_SPRITE_NAME_INTERLUDE = (struct System_String_o *)StringLiteral_19622/*"img_conductor_02"*/;
  sub_B52920((BattleServantConfConponent_o *)&v21->TITLE_SPRITE_NAME_INTERLUDE, v22, v23, v24, v25, v26, v27, v28);
  v29 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v30 = (System_Int32_array **)StringLiteral_19621/*"img_conductor_01"*/;
  v29->TITLE_SPRITE_NAME_INTERLUDE_MAP = (struct System_String_o *)StringLiteral_19621/*"img_conductor_01"*/;
  sub_B52920((BattleServantConfConponent_o *)&v29->TITLE_SPRITE_NAME_INTERLUDE_MAP, v30, v31, v32, v33, v34, v35, v36);
  v37 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v38 = (System_Int32_array **)StringLiteral_19623/*"img_conductor_03"*/;
  v37->TITLE_SPRITE_NAME_RAINFORCEMENT = (struct System_String_o *)StringLiteral_19623/*"img_conductor_03"*/;
  sub_B52920((BattleServantConfConponent_o *)&v37->TITLE_SPRITE_NAME_RAINFORCEMENT, v38, v39, v40, v41, v42, v43, v44);
  v45 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v46 = (System_Int32_array **)StringLiteral_17291/*"caldeagate_notice_{0:00}"*/;
  v45->QUEST_BOARD_INFO_FRAME_NAME = (struct System_String_o *)StringLiteral_17291/*"caldeagate_notice_{0:00}"*/;
  sub_B52920((BattleServantConfConponent_o *)&v45->QUEST_BOARD_INFO_FRAME_NAME, v46, v47, v48, v49, v50, v51, v52);
  v53 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v54 = (System_Int32_array **)StringLiteral_19720/*"img_questboard_1001"*/;
  v53->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME = (struct System_String_o *)StringLiteral_19720/*"img_questboard_1001"*/;
  sub_B52920(
    (BattleServantConfConponent_o *)&v53->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  v61 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v62 = (System_Int32_array **)StringLiteral_19624/*"img_conductor_04"*/;
  v61->TITLE_SPRITE_NAME_LIMIT_UNSEAL = (struct System_String_o *)StringLiteral_19624/*"img_conductor_04"*/;
  sub_B52920((BattleServantConfConponent_o *)&v61->TITLE_SPRITE_NAME_LIMIT_UNSEAL, v62, v63, v64, v65, v66, v67, v68);
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
  ServantStatusQuestBoardDraw_o *v5; // x19
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x21
  int size; // w8
  int v8; // w20
  MapControl_QuestInfo_o *v9; // x1
  int64_t Time; // x3
  const MethodInfo *v11; // x4
  ServantStatusQuestBoardDraw_o *v12; // x0
  int32_t v13; // w2

  v5 = this;
  if ( (byte_42B32C0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__);
    this = (ServantStatusQuestBoardDraw_o *)sub_B52984(&NetworkManager_TypeInfo);
    byte_42B32C0 = 1;
  }
  if ( (byte_42B32C1 & 1) == 0 )
  {
    this = (ServantStatusQuestBoardDraw_o *)sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__);
    byte_42B32C1 = 1;
  }
  mInfoTextList = v5->fields.mInfoTextList;
  if ( mInfoTextList )
  {
    size = mInfoTextList->fields._size;
    if ( size >= 2 )
    {
      if ( questBoardManagerer )
      {
        v8 = questBoardManagerer->fields.mAlphaAnimCnt % size;
        if ( size <= (unsigned int)v8 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        this = (ServantStatusQuestBoardDraw_o *)mInfoTextList->fields._items->m_Items[v8];
        if ( this )
        {
          if ( QuestBoardInformaionText__ChangeText((QuestBoardInformaionText_o *)this, &v5->fields.mOptionInfoLb, 0LL) )
          {
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            Time = NetworkManager__getTime(0LL);
            v12 = v5;
            v13 = v8;
LABEL_26:
            ServantStatusQuestBoardDraw__UpdateInfoText(v12, v9, v13, Time, v11);
            return;
          }
          return;
        }
      }
LABEL_28:
      sub_B52A5C(this, qinf);
    }
  }
  if ( (byte_42B32C2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__);
    byte_42B32C2 = 1;
    mInfoTextList = v5->fields.mInfoTextList;
  }
  if ( !mInfoTextList || !mInfoTextList->fields._size )
    return;
  this = (ServantStatusQuestBoardDraw_o *)mInfoTextList->fields._items->m_Items[0];
  if ( !this )
    goto LABEL_28;
  if ( QuestBoardInformaionText__ChangeText((QuestBoardInformaionText_o *)this, &v5->fields.mOptionInfoLb, 0LL) )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
    v12 = v5;
    v13 = 0;
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
  GiftEntity_o *v6; // x9
  int num; // w8
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x0

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
    v10 = sub_B52A88(this);
    sub_B52A28(v10, 0LL);
  }
  v6 = mRewardIconInfs->m_Items[v5];
  if ( !v6 )
    goto LABEL_18;
  questBoardManager = (ServantStatusQuestBoardManager_o *)(unsigned int)v6->fields.prioredIconId;
  this = (ServantStatusQuestBoardDraw_o *)this->fields.mRewardIcon;
  num = v6->fields.num;
  if ( (int)questBoardManager >= 1 )
  {
    if ( this )
    {
      if ( num <= 1 )
        v8 = -1;
      else
        v8 = v6->fields.num;
      ItemIconComponent__SetItemImage_28310700((ItemIconComponent_o *)this, (int32_t)questBoardManager, v8, 0LL);
      return;
    }
LABEL_18:
    sub_B52A5C(this, questBoardManager);
  }
  if ( !this )
    goto LABEL_18;
  if ( num <= 1 )
    v9 = -1;
  else
    v9 = v6->fields.num;
  ItemIconComponent__SetGift((ItemIconComponent_o *)this, v6->fields.type, v6->fields.objectId, v9, 0, 0LL);
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
  int32_t target; // w26
  const MethodInfo *v17; // x3
  QuestBoardInformaionText_o *v18; // x27
  int32_t consumeType; // w8
  struct System_Int32_array *targetIds; // x8
  System_String_o *v21; // x20
  Il2CppObject *EventName; // x0
  System_String_o *v23; // x20
  int64_t EndTime; // x19
  QuestBoardInformaionText_o *v25; // x0
  QuestPhaseEntity_o *entity; // [xsp+28h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v28; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B32C5 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&QuestBoardInformaionText_TypeInfo);
    sub_B52984(&StringLiteral_23732/*"{0}"*/);
    this = (ServantStatusQuestBoardDraw_o *)sub_B52984(&StringLiteral_13502/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/);
    byte_42B32C5 = 1;
  }
  entity = 0LL;
  if ( !eventEnt || !eventCampaignEnt )
    goto LABEL_35;
  target = eventCampaignEnt->fields.target;
  this = (ServantStatusQuestBoardDraw_o *)CombineAdjustTarget__isTerminalExposable(target, 0LL);
  v18 = 0LL;
  if ( ((unsigned __int8)this & 1) == 0 )
    return v18;
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
        if ( !ServantStatusQuestBoardDraw__IsValidSupportSelection(this, questEntity, phase, v17) )
          return 0LL;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (ServantStatusQuestBoardDraw_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
        if ( !questEntity || !this )
          goto LABEL_35;
        this = (ServantStatusQuestBoardDraw_o *)QuestPhaseMaster__TryGetEntity(
                                                  (QuestPhaseMaster_o *)this,
                                                  &entity,
                                                  questEntity->fields.id,
                                                  phase,
                                                  0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
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
      sub_B52A5C(this, questEntity);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_13502/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0LL);
  EventName = (Il2CppObject *)EventEntity__getEventName(eventEnt, 0LL);
  v23 = System_String__Format_44563852(v21, EventName, (Il2CppObject *)StringLiteral_23732/*"{0}"*/, 0LL);
  EndTime = EventEntity__GetEndTime(eventEnt, 0, 0LL);
  v25 = (QuestBoardInformaionText_o *)sub_B52A54(QuestBoardInformaionText_TypeInfo);
  v29.fields.r = 0.0;
  v29.fields.g = 0.0;
  v29.fields.b = 0.0;
  v29.fields.a = 0.0;
  v28.fields.x = 0.0;
  v28.fields.y = 0.0;
  v28.fields.z = 0.0;
  v18 = v25;
  QuestBoardInformaionText___ctor(v25, v23, EndTime, 1, 0, v29, -1, 0, v28, 0, 0LL, 0LL, 0LL);
  return v18;
}


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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  const MethodInfo *v15; // x7
  System_Collections_Generic_IEnumerable_T__o *CampaignTextListByEventQuestMaster; // x0
  __int64 v17; // x1
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v19; // x20
  System_String_o *EventName; // x21
  System_String_o *v21; // x0
  WarEntity_o *entity; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_42B32C3 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_EventMaster___);
    sub_B52984(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
    sub_B52984(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&QuestBoardInformaionText_TypeInfo);
    sub_B52984(&StringLiteral_23732/*"{0}"*/);
    sub_B52984(&StringLiteral_81/*" "*/);
    sub_B52984(&StringLiteral_13507/*"TIME_REST_STRING"*/);
    byte_42B32C3 = 1;
  }
  entity = 0LL;
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)ServantStatusQuestBoardDraw__GetCampaignTextListByEventQuestMaster(
                                                                                        this,
                                                                                        this->fields.questId,
                                                                                        phase,
                                                                                        isQuestNoneCleared,
                                                                                        questBoardManager,
                                                                                        costCalcVal,
                                                                                        fixedVal,
                                                                                        v15);
  if ( !v14 )
    goto LABEL_22;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v14,
    CampaignTextListByEventQuestMaster,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  if ( !questBoardManager || !CampaignTextListByEventQuestMaster )
    goto LABEL_22;
  EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                             (QuestReleaseOverwriteMaster_o *)CampaignTextListByEventQuestMaster,
                             this->fields.questId,
                             questBoardManager->fields.mListCreatedTime,
                             0LL);
  if ( !EntityByQuestIdAndTime )
    return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v14;
  v19 = EntityByQuestIdAndTime;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !CampaignTextListByEventQuestMaster )
    goto LABEL_22;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)CampaignTextListByEventQuestMaster,
          &entity,
          v19->fields.eventId,
          (const MethodInfo_23E2334 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v14;
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)entity;
  if ( !entity )
LABEL_22:
    sub_B52A5C(CampaignTextListByEventQuestMaster, v17);
  if ( LODWORD(entity->fields.age) == 25 )
  {
    EventName = EventEntity__getEventName((EventEntity_o *)entity, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_13507/*"TIME_REST_STRING"*/, 0LL);
    System_String__Concat_44571728(
      EventName,
      (System_String_o *)StringLiteral_81/*" "*/,
      v21,
      (System_String_o *)StringLiteral_23732/*"{0}"*/,
      0LL);
    JUMPOUT(0x1D93D60LL);
  }
  return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v14;
}


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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x23
  void *Instance; // x0
  __int64 v16; // x1
  DataManager_o *v17; // x24
  EventCampaignMaster_o *MasterData_WarQuestSelectionMaster; // x25
  int64_t mListCreatedTime; // x28
  QuestEntity_o *v20; // x27
  int v21; // w8
  void *v22; // x26
  unsigned int v23; // w19
  EventEntity_o *v24; // x28
  __int64 v26; // x0
  const MethodInfo *v27; // [xsp+0h] [xbp-70h]
  bool v28; // [xsp+14h] [xbp-5Ch]

  if ( (byte_42B32C4 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
    sub_B52984(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B32C4 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v28 = isQuestNoneCleared;
  v17 = (DataManager_o *)Instance;
  MasterData_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               v17,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               questId,
               (const MethodInfo_23E22D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !questBoardManager )
    goto LABEL_19;
  mListCreatedTime = questBoardManager->fields.mListCreatedTime;
  v20 = (QuestEntity_o *)Instance;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               v17,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = EventQuestMaster__GetEnabledEventCampaignForQuest(
               (EventQuestMaster_o *)Instance,
               questId,
               phase,
               mListCreatedTime,
               7,
               0LL);
  if ( !Instance )
    goto LABEL_19;
  v21 = *((_DWORD *)Instance + 6);
  v22 = Instance;
  if ( v21 >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      if ( v23 >= v21 )
      {
        v26 = sub_B52A88(Instance);
        sub_B52A28(v26, 0LL);
      }
      v24 = (EventEntity_o *)*((_QWORD *)v22 + (int)v23 + 4);
      if ( !v24 || !MasterData_WarQuestSelectionMaster )
        break;
      Instance = EventCampaignMaster__getData(MasterData_WarQuestSelectionMaster, v24->fields.id, 0LL);
      if ( Instance )
      {
        Instance = ServantStatusQuestBoardDraw__CreateQuestBoardInformationText(
                     this,
                     v20,
                     v24,
                     (EventCampaignEntity_o *)Instance,
                     phase,
                     v28,
                     costCalcVal,
                     fixedVal,
                     v27);
        if ( Instance )
        {
          if ( !v14 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v14,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
        }
      }
      v21 = *((_DWORD *)v22 + 6);
      if ( (int)++v23 >= v21 )
        return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v14;
    }
LABEL_19:
    sub_B52A5C(Instance, v16);
  }
  return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v14;
}


bool __fastcall ServantStatusQuestBoardDraw__IsClose(MapControl_QuestInfo_o *qinf, const MethodInfo *method)
{
  MapControl_WarInfo_o *IsQuestReleaseAll; // x0
  __int64 v4; // x1
  struct MapControl_SpotInfo_o *SpotInfo_k__BackingField; // x8
  QuestReleaseOverwriteMaster_o *Master_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  __int64 v10; // x1
  QuestReleaseEntity_o *v11; // x0
  MapControl_WarInfo_o *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x23
  __int64 v15; // x8
  int32_t v16; // w19
  int32_t v17; // w22
  int64_t v18; // x21
  __int64 v19; // x0
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_42B32BA & 1) == 0 )
  {
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_B52984(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42B32BA = 1;
  }
  entityList = 0LL;
  memset(&v21, 0, sizeof(v21));
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  IsQuestReleaseAll = (MapControl_WarInfo_o *)TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL);
  if ( ((unsigned __int8)IsQuestReleaseAll & 1) != 0 )
    return 0;
  if ( !qinf )
    goto LABEL_53;
  if ( MapControl_QuestInfo__IsClear(qinf, 0LL) )
    return 0;
  if ( MapControl_QuestInfo__GetQuestType(qinf, 0LL) == 3 )
  {
    IsQuestReleaseAll = qinf->fields._WarInfo_k__BackingField;
    if ( !IsQuestReleaseAll )
      goto LABEL_53;
    IsQuestReleaseAll = (MapControl_WarInfo_o *)MapControl_WarInfo__GetMine(IsQuestReleaseAll, 0LL);
    if ( !IsQuestReleaseAll )
      goto LABEL_53;
    if ( !WarEntity__HasFlag((WarEntity_o *)IsQuestReleaseAll, 16, 0LL) )
    {
      IsQuestReleaseAll = qinf->fields._WarInfo_k__BackingField;
      if ( !IsQuestReleaseAll )
        goto LABEL_53;
      IsQuestReleaseAll = (MapControl_WarInfo_o *)MapControl_WarInfo__GetStatus(IsQuestReleaseAll, 0LL);
      if ( !(_DWORD)IsQuestReleaseAll )
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
  Master_WarQuestSelectionMaster = (QuestReleaseOverwriteMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v8;
  if ( !Master_WarQuestSelectionMaster )
LABEL_53:
    sub_B52A5C(IsQuestReleaseAll, v4);
  if ( !QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
          Master_WarQuestSelectionMaster,
          &entityList,
          qinf->fields.questId,
          0LL,
          0LL) )
    goto LABEL_57;
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  IsQuestReleaseAll = (MapControl_WarInfo_o *)entityList;
  if ( !entityList )
    goto LABEL_53;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entityList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
  v21 = v20;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v21,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
  {
    if ( !v21.fields.current )
      sub_B52A5C(0LL, v10);
    v11 = QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
            (QuestReleaseOverwriteEntity_o *)v21.fields.current,
            0LL);
    if ( !v9 )
      sub_B52A5C(v11, v11);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v9,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
  if ( !v9 )
    goto LABEL_53;
  IsQuestReleaseAll = (MapControl_WarInfo_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                                (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
  v12 = IsQuestReleaseAll;
  if ( !IsQuestReleaseAll )
  {
LABEL_57:
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    IsQuestReleaseAll = (MapControl_WarInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
    if ( !IsQuestReleaseAll )
      goto LABEL_53;
    IsQuestReleaseAll = (MapControl_WarInfo_o *)QuestReleaseMaster__getListByQuestID(
                                                  (QuestReleaseMaster_o *)IsQuestReleaseAll,
                                                  qinf->fields.questId,
                                                  0LL);
    v12 = IsQuestReleaseAll;
  }
  if ( !v12 )
    goto LABEL_53;
  v13 = *(_QWORD *)&v12->fields.status;
  if ( !v13 )
    return qinf->fields.dispType != 1;
  if ( (int)v13 >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v14 >= (unsigned int)v13 )
      {
        v19 = sub_B52A88(IsQuestReleaseAll);
        sub_B52A28(v19, 0LL);
      }
      v15 = *((_QWORD *)&v12->fields.mapInfoList + v14);
      if ( !v15 )
        break;
      v17 = *(_DWORD *)(v15 + 20);
      v16 = *(_DWORD *)(v15 + 24);
      v18 = *(_QWORD *)(v15 + 32);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestReleaseAll = (MapControl_WarInfo_o *)CondType__IsOpen(v17, v16, v18, 0, 0LL);
      if ( ((unsigned __int8)IsQuestReleaseAll & 1) == 0 )
        return 1;
      LODWORD(v13) = v12->fields.status;
      if ( (int)++v14 >= (int)v13 )
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

  if ( (byte_42B32C2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__);
    byte_42B32C2 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  return !mInfoTextList || mInfoTextList->fields._size == 0;
}


bool __fastcall ServantStatusQuestBoardDraw__IsMultiInfoText(
        ServantStatusQuestBoardDraw_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x8

  if ( (byte_42B32C1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__);
    byte_42B32C1 = 1;
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
  QuestRestrictionInfoMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  bool HasFlag; // w0
  bool v9; // w21
  QuestRestrictionInfoEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B32C6 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
    sub_B52984(&DataManager_TypeInfo);
    byte_42B32C6 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
  if ( !questEntity || !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  if ( QuestRestrictionInfoMaster__TryGetEntity(
         Master_WarQuestSelectionMaster,
         &entity,
         questEntity->fields.id,
         phase,
         0LL) )
  {
    Master_WarQuestSelectionMaster = (QuestRestrictionInfoMaster_o *)entity;
    if ( !entity )
      goto LABEL_18;
    if ( !QuestRestrictionInfoEntity__HasFlag(entity, 0x80000LL, 0LL) )
    {
      Master_WarQuestSelectionMaster = (QuestRestrictionInfoMaster_o *)entity;
      if ( entity )
      {
        HasFlag = QuestRestrictionInfoEntity__HasFlag(entity, 0x100000LL, 0LL);
LABEL_16:
        v9 = !HasFlag;
        return v9 & ~QuestEntity__HasFlag_25292224(questEntity, 2LL, phase, 0LL) & 1;
      }
LABEL_18:
      sub_B52A5C(Master_WarQuestSelectionMaster, v7);
    }
  }
  else if ( !QuestEntity__HasFlag_25292224(questEntity, 0x80000LL, phase, 0LL) )
  {
    HasFlag = QuestEntity__HasFlag_25292224(questEntity, 0x100000LL, phase, 0LL);
    goto LABEL_16;
  }
  v9 = 0;
  return v9 & ~QuestEntity__HasFlag_25292224(questEntity, 2LL, phase, 0LL) & 1;
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
  UnityEngine_Object_o *inputMessageObject; // x20
  int32_t questId; // w8
  UnityEngine_GameObject_o *v5; // x19
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B32C7 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_10038/*"OnClickServantQuest"*/);
    byte_42B32C7 = 1;
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
    v5 = this->fields.inputMessageObject;
    v8 = questId;
    v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
    if ( !v5 )
      sub_B52A5C(v6, v7);
    UnityEngine_GameObject__SendMessage_41490956(v5, (System_String_o *)StringLiteral_10038/*"OnClickServantQuest"*/, v6, 0LL);
  }
}


void __fastcall ServantStatusQuestBoardDraw__ResetInfoTextList(
        ServantStatusQuestBoardDraw_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_XWeaponTrail_Element__o *v3; // x0
  BattleServantConfConponent_o *p_mInfoTextList; // x19
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // t1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42B32BD & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
    sub_B52984(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
    byte_42B32BD = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  p_mInfoTextList = (BattleServantConfConponent_o *)&this->fields.mInfoTextList;
  v3 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)mInfoTextList;
  if ( mInfoTextList )
  {
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      v3,
      (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Clear__);
  }
  else
  {
    v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v6,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
    p_mInfoTextList->klass = (BattleServantConfConponent_c *)v6;
    sub_B52920(p_mInfoTextList, (System_Int32_array **)v6, v7, v8, v9, v10, v11, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusQuestBoardDraw__SetAdvanceNoticeText(
        ServantStatusQuestBoardDraw_o *this,
        int32_t questReleaseClosedID,
        WarEntity_o *warEntity,
        QuestEntity_o *questEntity,
        QuestReleaseEntity_o *questReleaseEntity,
        int64_t checkTime,
        const MethodInfo *method)
{
  __int64 Master_WarQuestSelectionMaster; // x0
  __int64 v14; // x1
  System_String_o *age; // x20
  bool v16; // w25
  int32_t name_high; // w21
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  int32_t v20; // w27
  int32_t targetId; // w26
  System_String_o *v22; // x21
  int32_t WarID_ByQuestID; // w26
  WarEntity_o *v24; // x0
  Il2CppObject *PrioredName; // x0
  int64_t OpenedAt; // x26
  System_Object_array *v27; // x26
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x27
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x27
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x27
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x27
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v57; // x22
  _BOOL4 v58; // w26
  UILabel_o *mTitleNameLb; // x24
  int32_t leftIndent; // w24
  int32_t *p_ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT; // x8
  UILabel_o *mCondChangeMessage; // x19
  int32_t v63; // w25
  float v64; // s8
  UILabel_o **p_mAdvanceNoticeLb; // x28
  float v66; // s1
  float v67; // s0
  int v68; // s2
  float v69; // s8
  float v70; // s0
  float v71; // s1
  float v72; // s0
  int v73; // s2
  float v74; // s1
  int v75; // s2
  UIWidget_o *mOverwriteAdvanceNoticeLb; // x23
  const MethodInfo *v77; // x4
  const MethodInfo *v78; // x4
  System_String_o *overlayClosedMessage; // x20
  UILabel_o *v80; // x22
  float v81; // s8
  UnityEngine_Object_o *mOverwriteAdvanceNoticeArrowObj; // x20
  __int64 v83; // x0
  __int64 v84; // x0
  char v85; // [xsp+8h] [xbp-88h]
  int32_t Minute; // [xsp+Ch] [xbp-84h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-80h] BYREF
  int32_t Day; // [xsp+14h] [xbp-7Ch] BYREF
  int64_t value; // [xsp+18h] [xbp-78h] BYREF
  uint64_t dateData; // [xsp+20h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF
  System_DateTime_o v92; // 0:x0.8
  System_DateTime_o v93; // 0:x0.8
  System_DateTime_o v94; // 0:x0.8
  System_DateTime_o v95; // 0:x0.8
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B32BF & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ClosedMessageMaster___);
    sub_B52984(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_B52984(&Method_DataManager_GetMaster_WarMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&long_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ServantStatusQuestBoardDraw_TypeInfo);
    sub_B52984(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B52984(&SingletonTemplate_QuestTree__TypeInfo);
    sub_B52984(&StringLiteral_14822/*"UNKNOWN_QUEST_NAME"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B32BF = 1;
  }
  dateData = 0LL;
  entity = 0LL;
  if ( questReleaseClosedID < 1 )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ClosedMessageMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_130;
  age = (System_String_o *)StringLiteral_1/*""*/;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
         &entity,
         questReleaseClosedID,
         (const MethodInfo_23E2334 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__) )
  {
    Master_WarQuestSelectionMaster = (__int64)entity;
    if ( !entity )
      goto LABEL_130;
    age = entity->fields.age;
    Master_WarQuestSelectionMaster = ClosedMessageEntity__IsChangeDispClosedMessage(
                                       (ClosedMessageEntity_o *)entity,
                                       0LL);
    if ( !entity )
      goto LABEL_130;
    v16 = Master_WarQuestSelectionMaster;
    Master_WarQuestSelectionMaster = ClosedMessageEntity__IsChangeDispPositionLeft((ClosedMessageEntity_o *)entity, 0LL);
    if ( !entity )
      goto LABEL_130;
    name_high = HIDWORD(entity->fields.name);
    if ( !questReleaseEntity )
      goto LABEL_130;
  }
  else
  {
    name_high = 0;
    Master_WarQuestSelectionMaster = 0LL;
    v16 = 0;
    if ( !questReleaseEntity )
      goto LABEL_130;
  }
  v85 = Master_WarQuestSelectionMaster;
  switch ( questReleaseEntity->fields.type )
  {
    case 1:
      v20 = name_high;
      targetId = questReleaseEntity->fields.targetId;
      v22 = (System_String_o *)StringLiteral_1/*""*/;
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      Master_WarQuestSelectionMaster = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_130;
      WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Master_WarQuestSelectionMaster, targetId, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_130;
      v24 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
              WarID_ByQuestID,
              (const MethodInfo_23E22D8 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( v24 )
      {
        PrioredName = (Il2CppObject *)WarEntity__GetPrioredName(v24, 0LL);
        age = System_String__Format(age, PrioredName, 0LL);
      }
      else
      {
        age = v22;
      }
      name_high = v20;
      goto LABEL_46;
    case 6:
    case 7:
    case 9:
      value = questReleaseEntity->fields.value;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &value);
      v19 = System_String__Format(age, v18, 0LL);
      goto LABEL_45;
    case 0xC:
      if ( !questEntity )
        goto LABEL_130;
      OpenedAt = QuestEntity__getOpenedAt(questEntity, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      dateData = NetworkManager__getServerDateTime_25742200(OpenedAt, 0LL).fields.dateData;
      v27 = (System_Object_array *)sub_B5299C(object___TypeInfo, 4LL);
      v92.fields.dateData = (uint64_t)&dateData;
      LODWORD(value) = System_DateTime__get_Month(v92, 0LL);
      Master_WarQuestSelectionMaster = j_il2cpp_value_box_0(int_TypeInfo, &value);
      if ( !v27 )
        goto LABEL_130;
      v34 = (System_Int32_array **)Master_WarQuestSelectionMaster;
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = sub_B52A44(Master_WarQuestSelectionMaster, v27->obj.klass->_1.element_class);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_132;
      }
      if ( !v27->max_length )
        goto LABEL_131;
      v27->m_Items[0] = (Il2CppObject *)v34;
      sub_B52920((BattleServantConfConponent_o *)v27->m_Items, v34, v28, v29, v30, v31, v32, v33);
      v93.fields.dateData = (uint64_t)&dateData;
      Day = System_DateTime__get_Day(v93, 0LL);
      Master_WarQuestSelectionMaster = j_il2cpp_value_box_0(int_TypeInfo, &Day);
      v41 = (System_Int32_array **)Master_WarQuestSelectionMaster;
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = sub_B52A44(Master_WarQuestSelectionMaster, v27->obj.klass->_1.element_class);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_132;
      }
      if ( v27->max_length <= 1 )
        goto LABEL_131;
      v27->m_Items[1] = (Il2CppObject *)v41;
      sub_B52920((BattleServantConfConponent_o *)&v27->m_Items[1], v41, v35, v36, v37, v38, v39, v40);
      v94.fields.dateData = (uint64_t)&dateData;
      Hour = System_DateTime__get_Hour(v94, 0LL);
      Master_WarQuestSelectionMaster = j_il2cpp_value_box_0(int_TypeInfo, &Hour);
      v48 = (System_Int32_array **)Master_WarQuestSelectionMaster;
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = sub_B52A44(Master_WarQuestSelectionMaster, v27->obj.klass->_1.element_class);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_132;
      }
      if ( v27->max_length <= 2 )
        goto LABEL_131;
      v27->m_Items[2] = (Il2CppObject *)v48;
      sub_B52920((BattleServantConfConponent_o *)&v27->m_Items[2], v48, v42, v43, v44, v45, v46, v47);
      v95.fields.dateData = (uint64_t)&dateData;
      Minute = System_DateTime__get_Minute(v95, 0LL);
      Master_WarQuestSelectionMaster = j_il2cpp_value_box_0(int_TypeInfo, &Minute);
      v55 = (System_Int32_array **)Master_WarQuestSelectionMaster;
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = sub_B52A44(Master_WarQuestSelectionMaster, v27->obj.klass->_1.element_class);
        if ( !Master_WarQuestSelectionMaster )
        {
LABEL_132:
          v84 = sub_B52A7C(Master_WarQuestSelectionMaster);
          sub_B52A28(v84, 0LL);
        }
      }
      if ( v27->max_length <= 3 )
      {
LABEL_131:
        v83 = sub_B52A88(Master_WarQuestSelectionMaster);
        sub_B52A28(v83, 0LL);
      }
      v27->m_Items[3] = (Il2CppObject *)v55;
      sub_B52920((BattleServantConfConponent_o *)&v27->m_Items[3], v55, v49, v50, v51, v52, v53, v54);
      v19 = System_String__Format_44647040(age, v27, 0LL);
LABEL_45:
      age = v19;
LABEL_46:
      if ( warEntity != 0LL && !v16 )
        v16 = WarEntity__IsChangeDispClosedMessage(warEntity, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_130;
      EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                                 (QuestReleaseOverwriteMaster_o *)Master_WarQuestSelectionMaster,
                                 this->fields.questId,
                                 checkTime,
                                 0LL);
      v57 = EntityByQuestIdAndTime;
      if ( EntityByQuestIdAndTime )
      {
        v58 = !System_String__IsNullOrEmpty(EntityByQuestIdAndTime->fields.overlayClosedMessage, 0LL);
        if ( v16 )
        {
LABEL_54:
          Master_WarQuestSelectionMaster = (__int64)this->fields.mAdvanceNoticeObj;
          if ( Master_WarQuestSelectionMaster )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
            mTitleNameLb = this->fields.mTitleNameLb;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (__int64)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_14822/*"UNKNOWN_QUEST_NAME"*/,
                                                        0LL);
            if ( mTitleNameLb )
            {
              UILabel__set_text(mTitleNameLb, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
              Master_WarQuestSelectionMaster = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
              if ( v58 )
              {
                if ( (WORD1(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
                }
                if ( !v57 )
                  goto LABEL_130;
                Master_WarQuestSelectionMaster = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
                leftIndent = v57->fields.leftIndent;
                p_ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT = &ServantStatusQuestBoardDraw_TypeInfo->static_fields->ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT;
              }
              else
              {
                if ( (WORD1(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
                  Master_WarQuestSelectionMaster = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
                }
                leftIndent = 0;
                p_ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT = (int32_t *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184)
                                                                   + 8LL);
              }
              v63 = *p_ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT;
              if ( (v85 & 1) != 0 )
              {
                if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
                  && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
                {
                  j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
                  Master_WarQuestSelectionMaster = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
                }
                v64 = *(float *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL);
                p_mAdvanceNoticeLb = &this->fields.mAdvanceNoticeLb;
                Master_WarQuestSelectionMaster = (__int64)this->fields.mAdvanceNoticeLb;
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_130;
                UIWidget__set_pivot((UIWidget_o *)Master_WarQuestSelectionMaster, 3, 0LL);
                Master_WarQuestSelectionMaster = (__int64)*p_mAdvanceNoticeLb;
                if ( !*p_mAdvanceNoticeLb )
                  goto LABEL_130;
                Master_WarQuestSelectionMaster = (__int64)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                            0LL);
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_130;
                v66 = 0.0;
                if ( v58 )
                  v66 = 24.0;
                v68 = 0;
                v67 = v64 + (float)name_high;
                UnityEngine_Transform__set_localPosition(
                  (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster,
                  *(UnityEngine_Vector3_o *)(&v66 - 1),
                  0LL);
                Master_WarQuestSelectionMaster = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
                if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
                  Master_WarQuestSelectionMaster = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
                }
                if ( !this->fields.mOverwriteAdvanceNoticeLb )
                  goto LABEL_130;
                v69 = *(float *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL);
                UIWidget__set_pivot((UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb, 3, 0LL);
                Master_WarQuestSelectionMaster = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_130;
                Master_WarQuestSelectionMaster = (__int64)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                            0LL);
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_130;
                v70 = v69 + (float)leftIndent;
              }
              else
              {
                p_mAdvanceNoticeLb = &this->fields.mAdvanceNoticeLb;
                Master_WarQuestSelectionMaster = (__int64)this->fields.mAdvanceNoticeLb;
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_130;
                UIWidget__set_pivot((UIWidget_o *)Master_WarQuestSelectionMaster, 4, 0LL);
                Master_WarQuestSelectionMaster = (__int64)*p_mAdvanceNoticeLb;
                if ( !*p_mAdvanceNoticeLb )
                  goto LABEL_130;
                Master_WarQuestSelectionMaster = (__int64)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                            0LL);
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_130;
                v71 = 0.0;
                if ( v58 )
                  v71 = 24.0;
                v73 = 0;
                v72 = (float)name_high * 0.5;
                UnityEngine_Transform__set_localPosition(
                  (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster,
                  *(UnityEngine_Vector3_o *)(&v71 - 1),
                  0LL);
                Master_WarQuestSelectionMaster = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_130;
                UIWidget__set_pivot((UIWidget_o *)Master_WarQuestSelectionMaster, 4, 0LL);
                Master_WarQuestSelectionMaster = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_130;
                Master_WarQuestSelectionMaster = (__int64)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                            0LL);
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_130;
                v70 = (float)leftIndent * 0.5;
              }
              v74 = -26.0;
              v75 = 0;
              UnityEngine_Transform__set_localPosition(
                (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster,
                *(UnityEngine_Vector3_o *)&v70,
                0LL);
              Master_WarQuestSelectionMaster = (__int64)*p_mAdvanceNoticeLb;
              if ( *p_mAdvanceNoticeLb )
              {
                UIWidget__set_height((UIWidget_o *)Master_WarQuestSelectionMaster, v63, 0LL);
                Master_WarQuestSelectionMaster = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
                mOverwriteAdvanceNoticeLb = (UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb;
                if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
                }
                if ( mOverwriteAdvanceNoticeLb )
                {
                  UIWidget__set_height(
                    mOverwriteAdvanceNoticeLb,
                    ServantStatusQuestBoardDraw_TypeInfo->static_fields->ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT,
                    0LL);
                  ServantStatusQuestBoardDraw___SetAdvanceNoticeText_g__CalculateLabel_61_0(
                    *p_mAdvanceNoticeLb,
                    age,
                    v63,
                    name_high,
                    v77);
                  if ( v58 )
                  {
                    Master_WarQuestSelectionMaster = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
                    if ( !Master_WarQuestSelectionMaster )
                      goto LABEL_130;
                    UnityEngine_GameObject__SetActive(
                      (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                      1,
                      0LL);
                    if ( !v57 )
                      goto LABEL_130;
                    overlayClosedMessage = v57->fields.overlayClosedMessage;
                    v80 = this->fields.mOverwriteAdvanceNoticeLb;
                    if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
                    }
                    v81 = (float)name_high * 0.5;
                    ServantStatusQuestBoardDraw___SetAdvanceNoticeText_g__CalculateLabel_61_0(
                      v80,
                      overlayClosedMessage,
                      v63,
                      leftIndent,
                      v78);
                  }
                  else
                  {
                    v81 = 0.0;
                  }
                  mOverwriteAdvanceNoticeArrowObj = (UnityEngine_Object_o *)this->fields.mOverwriteAdvanceNoticeArrowObj;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( UnityEngine_Object__op_Inequality(mOverwriteAdvanceNoticeArrowObj, 0LL, 0LL) )
                  {
                    Master_WarQuestSelectionMaster = (__int64)this->fields.mOverwriteAdvanceNoticeArrowObj;
                    if ( !Master_WarQuestSelectionMaster )
                      goto LABEL_130;
                    Master_WarQuestSelectionMaster = (__int64)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                                                0LL);
                    if ( !Master_WarQuestSelectionMaster )
                      goto LABEL_130;
                    v96.fields.y = 0.0;
                    v96.fields.z = 0.0;
                    v96.fields.x = v81;
                    UnityEngine_Transform__set_localPosition(
                      (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster,
                      v96,
                      0LL);
                  }
                  return;
                }
              }
            }
          }
LABEL_130:
          sub_B52A5C(Master_WarQuestSelectionMaster, v14);
        }
      }
      else
      {
        v58 = 0;
        if ( v16 )
          goto LABEL_54;
      }
      Master_WarQuestSelectionMaster = (__int64)this->fields.mTitleNameLb;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_130;
      UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, age, 0LL);
      Master_WarQuestSelectionMaster = (__int64)this->fields.mAdvanceNoticeLb;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_130;
      UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      Master_WarQuestSelectionMaster = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_130;
      UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( v58 )
      {
        Master_WarQuestSelectionMaster = (__int64)this->fields.mCondObject;
        if ( Master_WarQuestSelectionMaster )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
          if ( v57 )
          {
            Master_WarQuestSelectionMaster = (__int64)this->fields.mCondChangeMessage;
            if ( Master_WarQuestSelectionMaster )
            {
              UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, v57->fields.overlayClosedMessage, 0LL);
              mCondChangeMessage = this->fields.mCondChangeMessage;
              Master_WarQuestSelectionMaster = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
              if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
              }
              if ( mCondChangeMessage )
              {
                UILabel__SetCondensedScale(
                  mCondChangeMessage,
                  ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH,
                  0LL);
                return;
              }
            }
          }
        }
        goto LABEL_130;
      }
      return;
    default:
      goto LABEL_46;
  }
}


void __fastcall ServantStatusQuestBoardDraw__SetDark(ServantStatusQuestBoardDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *mcBaseP; // x20
  UIWidget_o *mLineSp; // x0
  UILabel_o *mNoneLb; // x20
  const MethodInfo *v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct MapControl_QuestInfo_o **p_qinf; // x19
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_42B32BB & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&ServantStatusQuestBoardDraw_TypeInfo);
    sub_B52984(&StringLiteral_12068/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B32BB = 1;
  }
  UnityEngine_Color__get_black(0LL);
  mcBaseP = this->fields.mcBaseP;
  mLineSp = (UIWidget_o *)ServantStatusQuestBoardDraw_TypeInfo;
  if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  }
  if ( !mcBaseP )
    goto LABEL_29;
  UISprite__set_spriteName(mcBaseP, ServantStatusQuestBoardDraw_TypeInfo->static_fields->DARK_BOARD_SPRITE_NAME, 0LL);
  mLineSp = (UIWidget_o *)this->fields.mcBaseP;
  if ( !mLineSp )
    goto LABEL_29;
  UIWidget__set_width(mLineSp, ServantStatusQuestBoardDraw_TypeInfo->static_fields->DARK_BOARD_WIDTH, 0LL);
  mLineSp = (UIWidget_o *)this->fields.mcBaseP;
  if ( !mLineSp )
    goto LABEL_29;
  UIWidget__set_height(mLineSp, ServantStatusQuestBoardDraw_TypeInfo->static_fields->DARK_BOARD_HIGHT, 0LL);
  mLineSp = (UIWidget_o *)this->fields.mLineSp;
  if ( !mLineSp )
    goto LABEL_29;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLineSp, 0, 0LL);
  mLineSp = (UIWidget_o *)this->fields.mTitle2Sp;
  if ( !mLineSp )
    goto LABEL_29;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLineSp, 0, 0LL);
  mLineSp = (UIWidget_o *)this->fields.mTitleSp;
  if ( !mLineSp )
    goto LABEL_29;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLineSp, 0, 0LL);
  mLineSp = (UIWidget_o *)this->fields.mClearObj;
  if ( !mLineSp )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0LL);
  mLineSp = (UIWidget_o *)this->fields.mLinkObj;
  if ( !mLineSp )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0LL);
  mNoneLb = this->fields.mNoneLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  mLineSp = (UIWidget_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12068/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/, 0LL);
  if ( !mNoneLb )
    goto LABEL_29;
  UILabel__set_text(mNoneLb, (System_String_o *)mLineSp, 0LL);
  mLineSp = (UIWidget_o *)this->fields.mTitleNameLb;
  if ( !mLineSp )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)mLineSp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  mLineSp = (UIWidget_o *)this->fields.mTitleShortcutSp;
  if ( !mLineSp )
    goto LABEL_29;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLineSp, 0, 0LL);
  mLineSp = (UIWidget_o *)this->fields.mTitleShortcutLb;
  if ( !mLineSp )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)mLineSp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  ServantStatusQuestBoardDraw__ResetInfoTextList(this, v7);
  mLineSp = (UIWidget_o *)this->fields.mOptionInfoLb;
  if ( !mLineSp )
    goto LABEL_29;
  mLineSp = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mLineSp, 0LL);
  if ( !mLineSp )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0LL);
  this->fields.mRewardIconInfs = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.mRewardIconInfs, 0LL, v8, v9, v10, v11, v12, v13);
  mLineSp = (UIWidget_o *)this->fields.mRewardIcon;
  if ( !mLineSp
    || (mLineSp = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mLineSp, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0LL),
        (mLineSp = (UIWidget_o *)this->fields.mRewardObj) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0LL),
        (mLineSp = (UIWidget_o *)this->fields.mRewardGetSP) == 0LL)
    || (mLineSp = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mLineSp, 0LL)) == 0LL )
  {
LABEL_29:
    sub_B52A5C(mLineSp, v3);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0LL);
  this->fields.inputMessageObject = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.inputMessageObject, 0LL, v14, v15, v16, v17, v18, v19);
  this->fields.qinf = 0LL;
  p_qinf = &this->fields.qinf;
  *((_DWORD *)p_qinf - 2) = 0;
  sub_B52920((BattleServantConfConponent_o *)p_qinf, 0LL, v21, v22, v23, v24, v25, v26);
}


void __fastcall ServantStatusQuestBoardDraw__SetInfoTextAlpha(
        ServantStatusQuestBoardDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x8
  BoardOptionTextWithIconComponent_o *mOptionInfoLb; // x0

  if ( (byte_42B32C1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__);
    byte_42B32C1 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList && mInfoTextList->fields._size >= 2 )
  {
    mOptionInfoLb = this->fields.mOptionInfoLb;
    if ( !mOptionInfoLb )
      sub_B52A5C(0LL, method);
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
  __int64 v13; // x20
  int64_t Master_WarQuestSelectionMaster; // x0
  __int64 giftIconId; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int current; // w26
  char v23; // w19
  int64_t mListCreatedTime; // x25
  QuestEntity_o *Mine; // x28
  const MethodInfo *v26; // x1
  int v27; // w23
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  int v34; // w19
  const MethodInfo *v35; // x1
  int v36; // w27
  int32_t id; // w8
  int32_t warId; // w21
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v40; // x21
  bool v41; // w8
  ServantLimitImageMaster_o *v42; // x27
  _BOOL4 IsLimitCountSealQuest; // w25
  int closedMessageId; // w21
  WarQuestSelectionMaster_o *v45; // x28
  int64_t v46; // x2
  UserQuestMaster_o *v47; // x0
  int32_t questId; // w3
  char HasStatus; // w26
  _BOOL4 IsCommonReleaseMultiClear; // w0
  char v51; // w28
  int v52; // s0
  int v53; // s1
  int v54; // s2
  int v55; // s3
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct UISprite_o *mcBaseP; // x8
  struct UIAtlas_o *mAtlas; // x1
  UISprite_o *v64; // x27
  System_Action_o *v65; // x27
  UISprite_o *mTitleSp; // x27
  System_String_o **v67; // x8
  System_Action_o *v68; // x25
  const MethodInfo *v69; // x6
  char v70; // w27
  struct UILabel_o **p_mTitleNameLb; // x19
  struct UILabel_o *mTitleNameLb; // x21
  System_String_o **v73; // x8
  LocalizationManager_c *v74; // x0
  System_String_o **v75; // x9
  System_String_o *v76; // x25
  System_String_o *v77; // x0
  System_String_o *v78; // x1
  int32_t v79; // w21
  bool v80; // cc
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Transform_o *v82; // x0
  float v83; // s0
  float v84; // s1
  float v85; // s2
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  struct UnityEngine_GameObject_o *v92; // x1
  char v93; // w19
  QuestEntity_o *v94; // x28
  int32_t ServantId; // w21
  BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x26
  ServantEntity_o *v97; // x25
  UILabel_o *mTitleShortcutLb; // x21
  ServantStatusQuestBoardManager_o *v99; // x25
  const MethodInfo *v100; // x1
  bool v101; // w21
  __int64 endTime; // x21
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x25
  System_String_o *v104; // x28
  QuestBoardInformaionText_o *v105; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v106; // x27
  char v107; // w27
  int32_t questPhase; // w19
  int32_t PhaseMax; // w0
  int32_t v110; // w0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v111; // x21
  int32_t v112; // w1
  const MethodInfo *v113; // x7
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v114; // x19
  int size; // w8
  int v116; // w21
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  char v123; // w19
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  __int64 v130; // x8
  struct GiftEntity_array *v131; // x22
  int v132; // w9
  _DWORD *v133; // x9
  int v134; // w8
  int32_t v135; // w2
  System_String_o *v136; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v137; // x25
  Il2CppObject *BattleName; // x0
  int32_t v139; // w3
  __int64 v140; // x0
  WarEntity_o *v141; // [xsp+18h] [xbp-E8h]
  int64_t v142; // [xsp+20h] [xbp-E0h]
  int32_t limitCounta; // [xsp+28h] [xbp-D8h]
  int v144; // [xsp+2Ch] [xbp-D4h]
  _BOOL4 IsClear; // [xsp+30h] [xbp-D0h]
  char v146; // [xsp+34h] [xbp-CCh]
  UnityEngine_GameObject_o *v147; // [xsp+38h] [xbp-C8h]
  ServantStatusQuestBoardManager_o *v148; // [xsp+48h] [xbp-B8h]
  QuestEntity_o *questEntity; // [xsp+50h] [xbp-B0h]
  int32_t QuestType; // [xsp+5Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_int__o v151; // [xsp+60h] [xbp-A0h] BYREF
  int32_t fixedVal[2]; // [xsp+78h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v153; // [xsp+80h] [xbp-80h] BYREF
  UserQuestEntity_o *entity; // [xsp+98h] [xbp-68h] BYREF
  QuestReleaseEntity_o *questReleaseNG; // [xsp+A0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v156; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v157; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B32BC & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&QuestBoardInformaionText_TypeInfo);
    sub_B52984(&ServantStatusQuestBoardDraw_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B52984(&SingletonTemplate_QuestTree__TypeInfo);
    sub_B52984(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B52984(&Method_ServantStatusQuestBoardDraw___c__DisplayClass55_0__SetItem_b__0__);
    sub_B52984(&Method_ServantStatusQuestBoardDraw___c__DisplayClass55_0__SetItem_b__1__);
    sub_B52984(&ServantStatusQuestBoardDraw___c__DisplayClass55_0_TypeInfo);
    sub_B52984(&StringLiteral_13505/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_B52984(&StringLiteral_23732/*"{0}"*/);
    sub_B52984(&StringLiteral_12135/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE2"*/);
    sub_B52984(&StringLiteral_12137/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT2"*/);
    sub_B52984(&StringLiteral_12136/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_12134/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE"*/);
    sub_B52984(&StringLiteral_12091/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/);
    byte_42B32BC = 1;
  }
  entity = 0LL;
  questReleaseNG = 0LL;
  memset(&v153, 0, sizeof(v153));
  *(_QWORD *)fixedVal = 0LL;
  v13 = sub_B52A54(ServantStatusQuestBoardDraw___c__DisplayClass55_0_TypeInfo);
  ServantStatusQuestBoardDraw___c__DisplayClass55_0___ctor(
    (ServantStatusQuestBoardDraw___c__DisplayClass55_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_264;
  *(_QWORD *)(v13 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !qinf )
    goto LABEL_264;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  v147 = inputMessageObject;
  limitCounta = limitCount;
  Master_WarQuestSelectionMaster = (int64_t)QuestGroupMaster__GetInterludeQuestIdList(
                                              (QuestGroupMaster_o *)Master_WarQuestSelectionMaster,
                                              qinf->fields.questId,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v151,
    (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_3057DF4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v153 = v151;
  v148 = questBoardManager;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v153,
            (const MethodInfo_200F3F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v153.fields.current;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsQuestClear_25987760(current, -1, 0, 0LL) )
    {
      v23 = 1;
      goto LABEL_18;
    }
  }
  v23 = 0;
  current = 0;
LABEL_18:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v153,
    (const MethodInfo_200F3EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( !questBoardManager )
    goto LABEL_264;
  mListCreatedTime = questBoardManager->fields.mListCreatedTime;
  Mine = MapControl_QuestInfo__GetMine(qinf, 0LL);
  QuestType = MapControl_QuestInfo__GetQuestType(qinf, 0LL);
  v27 = (v23 & 1) != 0 || MapControl_QuestInfo__IsClear(qinf, 0LL);
  if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  }
  Master_WarQuestSelectionMaster = ServantStatusQuestBoardDraw__IsClose(qinf, v26);
  v34 = Master_WarQuestSelectionMaster;
  if ( beforeQuestInfo )
  {
    IsClear = MapControl_QuestInfo__IsClear(beforeQuestInfo, 0LL);
    if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    }
    Master_WarQuestSelectionMaster = ServantStatusQuestBoardDraw__IsClose(beforeQuestInfo, v35);
    v36 = Master_WarQuestSelectionMaster & 1;
    if ( !Mine )
      goto LABEL_264;
  }
  else
  {
    v36 = 0;
    IsClear = 1;
    if ( !Mine )
      goto LABEL_264;
  }
  id = Mine->fields.id;
  this->fields.qinf = qinf;
  this->fields.questId = id;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.qinf,
    (System_Int32_array **)qinf,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  warId = qinf->fields.warId;
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  Master_WarQuestSelectionMaster = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Master_WarQuestSelectionMaster, warId, 0LL);
  v40 = WarEntityByWarID;
  if ( WarEntityByWarID )
    v41 = !WarEntity__IsFolder(WarEntityByWarID, 0LL);
  else
    v41 = 0;
  v144 = v36;
  v142 = mListCreatedTime;
  *(_BYTE *)(v13 + 40) = v41;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  v42 = (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster;
  IsLimitCountSealQuest = ServantLimitImageMaster__IsLimitCountSealQuest(
                            (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster,
                            this->fields.questId,
                            0LL);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  Master_WarQuestSelectionMaster = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  v141 = v40;
  clsQuestCheck__mfQuestReleaseCheckGetEntityByQuestID(
    (clsQuestCheck_o *)Master_WarQuestSelectionMaster,
    Mine->fields.id,
    &questReleaseNG,
    qinf,
    0LL);
  if ( questReleaseNG )
    closedMessageId = questReleaseNG->fields.closedMessageId;
  else
    closedMessageId = 0;
  questEntity = Mine;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v45 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( current < 1 )
  {
    if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = NetworkManager__get_UserId(0LL);
    if ( !v45 )
      goto LABEL_264;
    questId = this->fields.questId;
    v46 = Master_WarQuestSelectionMaster;
    v47 = (UserQuestMaster_o *)v45;
  }
  else
  {
    if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = NetworkManager__get_UserId(0LL);
    if ( !v45 )
      goto LABEL_264;
    v46 = Master_WarQuestSelectionMaster;
    v47 = (UserQuestMaster_o *)v45;
    questId = current;
  }
  UserQuestMaster__TryGetEntity(v47, &entity, v46, questId, 0LL);
  if ( entity )
    HasStatus = UserQuestEntity__HasStatus(entity, 4, 0LL);
  else
    HasStatus = 0;
  if ( (IsLimitCountSealQuest & ~v27 & 1) != 0 )
  {
    IsCommonReleaseMultiClear = ServantLimitImageMaster__IsCommonReleaseMultiClear(v42, this->fields.questId, 0LL);
    v27 = IsCommonReleaseMultiClear;
    HasStatus &= !IsCommonReleaseMultiClear;
    if ( IsCommonReleaseMultiClear )
      closedMessageId = 0;
    v34 &= !IsCommonReleaseMultiClear;
  }
  v146 = HasStatus;
  v51 = v34 | v27;
  if ( ((v34 | v27) & 1) != 0 )
    *(UnityEngine_Color_o *)&v52 = UnityEngine_Color__get_gray(0LL);
  else
    *(UnityEngine_Color_o *)&v52 = UnityEngine_Color__get_white(0LL);
  *(_DWORD *)(v13 + 24) = v52;
  *(_DWORD *)(v13 + 28) = v53;
  *(_DWORD *)(v13 + 32) = v54;
  *(_DWORD *)(v13 + 36) = v55;
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleObj;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mOptionInfoLb;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  Master_WarQuestSelectionMaster = (int64_t)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardObj;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mAdvanceNoticeObj;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mOverwriteAdvanceNoticeObj;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mCondObject;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
  mcBaseP = this->fields.mcBaseP;
  if ( !mcBaseP )
    goto LABEL_264;
  mAtlas = mcBaseP->fields.mAtlas;
  this->fields.basePanelAtlas = mAtlas;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.basePanelAtlas,
    (System_Int32_array **)mAtlas,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  v64 = this->fields.mcBaseP;
  Master_WarQuestSelectionMaster = (int64_t)ServantStatusQuestBoardDraw_TypeInfo;
  if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  }
  if ( !v64 )
    goto LABEL_264;
  UISprite__set_spriteName(v64, ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME, 0LL);
  if ( IsLimitCountSealQuest )
  {
    v65 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v65,
      (Il2CppObject *)v13,
      Method_ServantStatusQuestBoardDraw___c__DisplayClass55_0__SetItem_b__0__,
      0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__LoadEventUI(v65, 1, 0LL);
  }
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mcBaseP;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Master_WarQuestSelectionMaster + 840LL))(
    Master_WarQuestSelectionMaster,
    *(_QWORD *)(*(_QWORD *)Master_WarQuestSelectionMaster + 848LL));
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mcBaseP;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v13 + 24), 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mLineSp;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mLineSp;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v13 + 24), 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitle2Sp;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  if ( (v27 & 1) != 0 )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_WarQuestSelectionMaster, 0, 0LL);
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleSp;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_WarQuestSelectionMaster, 0, 0LL);
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mLinkObj;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_WarQuestSelectionMaster, 1, 0LL);
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitle2Sp;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v13 + 24), 0LL);
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleSp;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_WarQuestSelectionMaster, 1, 0LL);
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleSp;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    UISprite__set_atlas((UISprite_o *)Master_WarQuestSelectionMaster, this->fields.basePanelAtlas, 0LL);
    mTitleSp = this->fields.mTitleSp;
    if ( QuestType == 3 )
    {
      Master_WarQuestSelectionMaster = (int64_t)ServantStatusQuestBoardDraw_TypeInfo;
      if ( *(_BYTE *)(v13 + 40) )
      {
        if ( (WORD1(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
          Master_WarQuestSelectionMaster = (int64_t)ServantStatusQuestBoardDraw_TypeInfo;
        }
        v67 = (System_String_o **)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 96LL);
        if ( !mTitleSp )
          goto LABEL_264;
      }
      else
      {
        if ( (WORD1(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
          Master_WarQuestSelectionMaster = (int64_t)ServantStatusQuestBoardDraw_TypeInfo;
        }
        v67 = (System_String_o **)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 88LL);
        if ( !mTitleSp )
          goto LABEL_264;
      }
      UISprite__set_spriteName(mTitleSp, *v67, 0LL);
      if ( IsLimitCountSealQuest )
      {
        v68 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(
          v68,
          (Il2CppObject *)v13,
          Method_ServantStatusQuestBoardDraw___c__DisplayClass55_0__SetItem_b__1__,
          0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__LoadEventUI(v68, 1, 0LL);
      }
    }
    else
    {
      Master_WarQuestSelectionMaster = (int64_t)ServantStatusQuestBoardDraw_TypeInfo;
      if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      }
      if ( !mTitleSp )
        goto LABEL_264;
      UISprite__set_spriteName(
        mTitleSp,
        ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_SPRITE_NAME_RAINFORCEMENT,
        0LL);
    }
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleSp;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Master_WarQuestSelectionMaster + 840LL))(
      Master_WarQuestSelectionMaster,
      *(_QWORD *)(*(_QWORD *)Master_WarQuestSelectionMaster + 848LL));
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleSp;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v13 + 24), 0LL);
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mLinkObj;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mLinkObj;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    Master_WarQuestSelectionMaster = (int64_t)UnityEngine_GameObject__get_gameObject(
                                                (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                                0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    Master_WarQuestSelectionMaster = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                                (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v13 + 24), 0LL);
  }
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mClearObj;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, v27 & 1, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mNoneLb;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !(v27 & 1 | IsClear) )
  {
    v70 = v34;
    p_mTitleNameLb = &this->fields.mTitleNameLb;
    mTitleNameLb = this->fields.mTitleNameLb;
    if ( QuestType == 3 )
    {
      v73 = (System_String_o **)&StringLiteral_12135/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE2"*/;
      v74 = LocalizationManager_TypeInfo;
      v75 = (System_String_o **)&StringLiteral_12134/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE"*/;
    }
    else
    {
      v73 = (System_String_o **)&StringLiteral_12137/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT2"*/;
      v74 = LocalizationManager_TypeInfo;
      v75 = (System_String_o **)&StringLiteral_12136/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/;
    }
    if ( !v144 )
      v73 = v75;
    v76 = *v73;
    if ( (BYTE3(v74->vtable._0_Equals.methodPtr) & 4) != 0 && !v74->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v74);
    v77 = v76;
    goto LABEL_145;
  }
  if ( closedMessageId < 1 )
  {
    if ( !questReleaseNG || questReleaseNG->fields.type != 8 )
    {
      Master_WarQuestSelectionMaster = (int64_t)QuestEntity__getQuestName(questEntity, 0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_264;
      v136 = (System_String_o *)Master_WarQuestSelectionMaster;
      if ( System_String__Contains(
             (System_String_o *)Master_WarQuestSelectionMaster,
             (System_String_o *)StringLiteral_23732/*"{0}"*/,
             0LL) )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v137 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantMaster___);
        Master_WarQuestSelectionMaster = QuestEntity__getServantId(questEntity, 0LL);
        if ( !v137 )
          goto LABEL_264;
        Master_WarQuestSelectionMaster = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    v137,
                                                    Master_WarQuestSelectionMaster,
                                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_264;
        v70 = v34;
        BattleName = (Il2CppObject *)ServantEntity__getBattleName(
                                       (ServantEntity_o *)Master_WarQuestSelectionMaster,
                                       0,
                                       -1,
                                       0LL);
        v136 = System_String__Format(v136, BattleName, 0LL);
      }
      else
      {
        v70 = v34;
      }
      p_mTitleNameLb = &this->fields.mTitleNameLb;
      Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleNameLb;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_264;
      v78 = v136;
      goto LABEL_147;
    }
    v70 = v34;
    p_mTitleNameLb = &this->fields.mTitleNameLb;
    mTitleNameLb = this->fields.mTitleNameLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v77 = (System_String_o *)StringLiteral_12091/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/;
LABEL_145:
    Master_WarQuestSelectionMaster = (int64_t)LocalizationManager__Get(v77, 0LL);
    if ( !mTitleNameLb )
      goto LABEL_264;
    v78 = (System_String_o *)Master_WarQuestSelectionMaster;
    Master_WarQuestSelectionMaster = (int64_t)mTitleNameLb;
LABEL_147:
    UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, v78, 0LL);
    goto LABEL_148;
  }
  v70 = v34;
  ServantStatusQuestBoardDraw__SetAdvanceNoticeText(this, closedMessageId, v141, questEntity, questReleaseNG, v142, v69);
  p_mTitleNameLb = &this->fields.mTitleNameLb;
LABEL_148:
  Master_WarQuestSelectionMaster = (int64_t)*p_mTitleNameLb;
  if ( !*p_mTitleNameLb )
    goto LABEL_264;
  v79 = *(_DWORD *)(Master_WarQuestSelectionMaster + 160);
  if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    Master_WarQuestSelectionMaster = (int64_t)*p_mTitleNameLb;
    if ( !*p_mTitleNameLb )
      goto LABEL_264;
  }
  v80 = v79 <= ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
  if ( v80 )
  {
    *(UnityEngine_Vector3_o *)&v83 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_264;
    v82 = transform;
  }
  else
  {
    Master_WarQuestSelectionMaster = (int64_t)ServantStatusQuestBoardDraw_TypeInfo;
    if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    }
    if ( !*p_mTitleNameLb || !transform )
      goto LABEL_264;
    v82 = transform;
    v83 = (float)ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH
        / (float)(*p_mTitleNameLb)->fields.mWidth;
    v84 = 1.0;
    v85 = 1.0;
  }
  UnityEngine_Transform__set_localScale(v82, *(UnityEngine_Vector3_o *)&v83, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)*p_mTitleNameLb;
  if ( !*p_mTitleNameLb )
    goto LABEL_264;
  UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v13 + 24), 0LL);
  if ( (v51 & 1) != 0 )
    v92 = 0LL;
  else
    v92 = v147;
  this->fields.inputMessageObject = v92;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.inputMessageObject,
    (System_Int32_array **)v92,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  v93 = v70;
  if ( QuestType != 3 )
  {
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleShortcutSp;
    v94 = questEntity;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    p_mOptionInfoLb = &this->fields.mOptionInfoLb;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_WarQuestSelectionMaster, 1, 0LL);
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleShortcutSp;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v13 + 24), 0LL);
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleShortcutLb;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    goto LABEL_185;
  }
  v94 = questEntity;
  ServantId = QuestEntity__getServantId(questEntity, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)Master_WarQuestSelectionMaster,
                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  Master_WarQuestSelectionMaster = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                              ServantId,
                                              (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.mTitleShortcutSp )
    goto LABEL_264;
  v97 = (ServantEntity_o *)Master_WarQuestSelectionMaster;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mTitleShortcutSp, 0, 0LL);
  mTitleShortcutLb = this->fields.mTitleShortcutLb;
  if ( !v97 )
  {
    if ( !mTitleShortcutLb )
      goto LABEL_264;
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleShortcutLb;
LABEL_185:
    UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v99 = v148;
    goto LABEL_186;
  }
  Master_WarQuestSelectionMaster = (int64_t)ServantEntity__getName(v97, limitCounta, -1, 0LL);
  if ( !mTitleShortcutLb )
    goto LABEL_264;
  UILabel__set_text(mTitleShortcutLb, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleShortcutLb;
  v99 = v148;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v13 + 24), 0LL);
LABEL_186:
  ServantStatusQuestBoardDraw__ResetInfoTextList(this, v100);
  if ( (v27 & 1) != 0 )
  {
    v101 = 0;
  }
  else
  {
    fixedVal[0] = -1;
    fixedVal[1] = 0;
    endTime = qinf->fields.endTime;
    if ( endTime >= 1 && !QuestEntity__HasFlag(v94, 32LL, 0LL) )
    {
      mInfoTextList = this->fields.mInfoTextList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v104 = LocalizationManager__Get((System_String_o *)StringLiteral_13505/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
      v105 = (QuestBoardInformaionText_o *)sub_B52A54(QuestBoardInformaionText_TypeInfo);
      v157.fields.r = 0.0;
      v157.fields.g = 0.0;
      v157.fields.b = 0.0;
      v157.fields.a = 0.0;
      v156.fields.x = 0.0;
      v156.fields.y = 0.0;
      v156.fields.z = 0.0;
      v106 = (EventMissionProgressRequest_Argument_ProgressData_o *)v105;
      QuestBoardInformaionText___ctor(v105, v104, endTime, 0, 0, v157, -1, 0, v156, 1, 0LL, 0LL, 0LL);
      if ( !mInfoTextList )
        goto LABEL_264;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mInfoTextList,
        v106,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
      v99 = v148;
      v94 = questEntity;
    }
    v107 = v93;
    questPhase = qinf->fields.questPhase;
    PhaseMax = MapControl_QuestInfo__GetPhaseMax(qinf, 0LL);
    v110 = UnityEngine_Mathf__Min_41525188(questPhase + 1, PhaseMax, 0LL);
    v111 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.mInfoTextList;
    Master_WarQuestSelectionMaster = (int64_t)ServantStatusQuestBoardDraw__GetCampaignText(
                                                this,
                                                v112,
                                                v110,
                                                0,
                                                v99,
                                                &fixedVal[1],
                                                fixedVal,
                                                v113);
    if ( !v111 )
      goto LABEL_264;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      v111,
      (System_Collections_Generic_IEnumerable_T__o *)Master_WarQuestSelectionMaster,
      (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
    v114 = this->fields.mInfoTextList;
    if ( !v114 )
      goto LABEL_264;
    size = v114->fields._size;
    if ( size < 1 )
    {
      v101 = 0;
      v93 = v107;
    }
    else
    {
      v116 = v99->fields.mAlphaAnimCnt % size;
      if ( size <= (unsigned int)v116 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      Master_WarQuestSelectionMaster = (int64_t)v114->fields._items->m_Items[v116];
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_264;
      QuestBoardInformaionText__SetTime(
        (QuestBoardInformaionText_o *)Master_WarQuestSelectionMaster,
        p_mOptionInfoLb,
        &this->fields.mOptionInfoFrameSp,
        0LL);
      Master_WarQuestSelectionMaster = (int64_t)this->fields.mOptionInfoLb;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_264;
      v93 = v107;
      BoardOptionTextWithIconComponent__set_Alpha(
        (BoardOptionTextWithIconComponent_o *)Master_WarQuestSelectionMaster,
        1.0,
        0LL);
      v101 = 1;
      qinf->fields.costCalcVal = fixedVal[1];
      qinf->fields._fixedCostVal_k__BackingField = fixedVal[0];
    }
  }
  Master_WarQuestSelectionMaster = (int64_t)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_264;
  Master_WarQuestSelectionMaster = (int64_t)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  Master_WarQuestSelectionMaster = (int64_t)UnityEngine_Transform__get_parent(
                                              (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  Master_WarQuestSelectionMaster = (int64_t)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, v101, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_264;
  Master_WarQuestSelectionMaster = (int64_t)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, v101, 0LL);
  this->fields.mRewardIconInfs = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.mRewardIconInfs, 0LL, v117, v118, v119, v120, v121, v122);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardIcon;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  Master_WarQuestSelectionMaster = (int64_t)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
  if ( (v93 & 1) == 0 || !QuestEntity__HasFlag(v94, 4096LL, 0LL) )
  {
    giftIconId = (unsigned int)v94->fields.giftIconId;
    if ( (int)giftIconId >= 1 )
    {
      Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardIcon;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_264;
      goto LABEL_218;
    }
    if ( v94->fields.giftId < 1 )
    {
      Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardObj;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_264;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
      v123 = v146;
      goto LABEL_221;
    }
    Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)Master_WarQuestSelectionMaster,
                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    Master_WarQuestSelectionMaster = (int64_t)GiftMaster__GetGiftListById(
                                                (GiftMaster_o *)Master_WarQuestSelectionMaster,
                                                v94->fields.giftId,
                                                0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    v130 = *(_QWORD *)(Master_WarQuestSelectionMaster + 24);
    v123 = v146;
    v131 = (struct GiftEntity_array *)Master_WarQuestSelectionMaster;
    if ( !v130 )
    {
LABEL_262:
      this->fields.mRewardIconInfs = v131;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.mRewardIconInfs,
        (System_Int32_array **)v131,
        v124,
        v125,
        v126,
        v127,
        v128,
        v129);
      goto LABEL_221;
    }
    v132 = v99->fields.mAlphaAnimCnt % (int)v130;
    if ( v132 >= (unsigned int)v130 )
    {
      v140 = sub_B52A88(Master_WarQuestSelectionMaster);
      sub_B52A28(v140, 0LL);
    }
    v133 = *(_DWORD **)(Master_WarQuestSelectionMaster + 8LL * v132 + 32);
    if ( v133 )
    {
      giftIconId = (unsigned int)v133[11];
      Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardIcon;
      v134 = v133[7];
      if ( (int)giftIconId < 1 )
      {
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_264;
        v139 = v134 <= 1 ? -1 : v133[7];
        ItemIconComponent__SetGift(
          (ItemIconComponent_o *)Master_WarQuestSelectionMaster,
          v133[5],
          v133[6],
          v139,
          0,
          0LL);
      }
      else
      {
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_264;
        v135 = v134 <= 1 ? -1 : v133[7];
        ItemIconComponent__SetItemImage_28310700(
          (ItemIconComponent_o *)Master_WarQuestSelectionMaster,
          giftIconId,
          v135,
          0LL);
      }
      Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardIcon;
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = (int64_t)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                    0LL);
        if ( Master_WarQuestSelectionMaster )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
          goto LABEL_262;
        }
      }
    }
LABEL_264:
    sub_B52A5C(Master_WarQuestSelectionMaster, giftIconId);
  }
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardIcon;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  LODWORD(giftIconId) = 99;
LABEL_218:
  ItemIconComponent__SetItemImage((ItemIconComponent_o *)Master_WarQuestSelectionMaster, giftIconId, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardIcon;
  v123 = v146;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  Master_WarQuestSelectionMaster = (int64_t)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
LABEL_221:
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardObj;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  Master_WarQuestSelectionMaster = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                              (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v13 + 24), 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardIcon;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  ItemIconComponent__SetColor(
    (ItemIconComponent_o *)Master_WarQuestSelectionMaster,
    *(UnityEngine_Color_o *)(v13 + 24),
    0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardGetSP;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  Master_WarQuestSelectionMaster = (int64_t)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
    v27 & (v123 ^ 1) & 1,
    0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardGetSP;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v13 + 24), 0LL);
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
      sub_B52A5C(0LL, method);
    ItemIconComponent__SetAlpha(mRewardIcon, alpha, 0LL);
  }
}


void __fastcall ServantStatusQuestBoardDraw__UpdateInfoText(
        ServantStatusQuestBoardDraw_o *this,
        MapControl_QuestInfo_o *qinf,
        int32_t strIndex,
        int64_t checkTime,
        const MethodInfo *method)
{
  ServantStatusQuestBoardDraw_o *v7; // x20
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x22

  v7 = this;
  if ( (byte_42B32BE & 1) == 0 )
  {
    this = (ServantStatusQuestBoardDraw_o *)sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__);
    byte_42B32BE = 1;
  }
  mInfoTextList = v7->fields.mInfoTextList;
  if ( !mInfoTextList )
    goto LABEL_8;
  if ( mInfoTextList->fields._size <= (unsigned int)strIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  this = (ServantStatusQuestBoardDraw_o *)mInfoTextList->fields._items->m_Items[strIndex];
  if ( !this )
LABEL_8:
    sub_B52A5C(this, qinf);
  QuestBoardInformaionText__Update(
    (QuestBoardInformaionText_o *)this,
    &v7->fields.mOptionInfoLb,
    &v7->fields.mOptionInfoFrameSp,
    checkTime,
    0LL);
}


void __fastcall ServantStatusQuestBoardDraw__UpdateItem(
        ServantStatusQuestBoardDraw_o *this,
        ServantStatusQuestBoardManager_o *questBoardManager,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  if ( !questBoardManager )
    sub_B52A5C(this, 0LL);
  ServantStatusQuestBoardDraw__SetInfoTextAlpha(
    this,
    questBoardManager->fields.mAlphaAnimNow,
    (const MethodInfo *)questBoardManager);
  ServantStatusQuestBoardDraw__SetRewardIconAlpha(this, questBoardManager->fields.mAlphaAnimNow, v5);
}


void __fastcall ServantStatusQuestBoardDraw___SetAdvanceNoticeText_g__CalculateLabel_61_0(
        UILabel_o *label,
        System_String_o *message,
        int32_t baseHeight,
        int32_t indent,
        const MethodInfo *method)
{
  UILabel_o *v8; // x19
  int mHeight; // w22
  ServantStatusQuestBoardDraw_c *v10; // x0
  float v11; // s8
  UnityEngine_Transform_o *transform; // x20
  float v13; // s0
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  v8 = label;
  if ( (byte_42B32C9 & 1) == 0 )
  {
    label = (UILabel_o *)sub_B52984(&ServantStatusQuestBoardDraw_TypeInfo);
    byte_42B32C9 = 1;
  }
  if ( !v8 )
    goto LABEL_10;
  UILabel__set_text(v8, message, 0LL);
  UILabel__AssumeNaturalSize(v8, 0LL);
  mHeight = v8->fields.mHeight;
  UIWidget__set_height((UIWidget_o *)v8, baseHeight, 0LL);
  v10 = ServantStatusQuestBoardDraw_TypeInfo;
  if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    v10 = ServantStatusQuestBoardDraw_TypeInfo;
  }
  UILabel__SetCondensedScale(v8, v10->static_fields->ADVANCE_NOTICE_BASE_WIDTH - indent, 0LL);
  v11 = UnityEngine_Mathf__Clamp(1.0 - (float)((float)baseHeight / (float)mHeight), 0.0, 1.0, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0LL);
  label = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0LL);
  if ( !label
    || (LODWORD(v13) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)label, 0LL),
        !transform) )
  {
LABEL_10:
    sub_B52A5C(label, message);
  }
  v14.fields.y = 1.0;
  v14.fields.x = v11 + v13;
  v14.fields.z = 1.0;
  UnityEngine_Transform__set_localScale(transform, v14, 0LL);
}


BoardMessageEntity_o *__fastcall ServantStatusQuestBoardDraw__findOverrideQuestMessage(
        ServantStatusQuestBoardDraw_o *this,
        BoardMessageEntity_array *boardMessageData,
        int32_t eventId,
        const MethodInfo *method)
{
  signed int max_length; // w8
  unsigned int v5; // w9
  __int64 v6; // x0

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
        v6 = sub_B52A88(this);
        sub_B52A28(v6, 0LL);
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
    sub_B52A5C(this, boardMessageData);
  }
  return 0LL;
}


void __fastcall ServantStatusQuestBoardDraw___c__DisplayClass55_0___ctor(
        ServantStatusQuestBoardDraw___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusQuestBoardDraw___c__DisplayClass55_0___SetItem_b__0(
        ServantStatusQuestBoardDraw___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *_4__this; // x20
  UISprite_o *v4; // x0
  __int64 v5; // x1
  struct ServantStatusQuestBoardDraw_o *v6; // x8
  UnityEngine_Object_o *mcBaseP; // x20
  struct ServantStatusQuestBoardDraw_o *v8; // x8
  UISprite_o *v9; // x20
  ServantStatusQuestBoardDraw_c *v10; // x0
  System_String_o *BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME; // x21
  struct ServantStatusQuestBoardDraw_o *v12; // x9
  char v13; // w8
  struct ServantStatusQuestBoardDraw_o *v14; // x8
  UISprite_o *v15; // x20
  struct ServantStatusQuestBoardDraw_o *v16; // x8
  struct ServantStatusQuestBoardDraw_o *v17; // x8

  if ( (byte_42AD391 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ServantStatusQuestBoardDraw_TypeInfo);
    byte_42AD391 = 1;
  }
  _4__this = (UnityEngine_Object_o *)this->fields.__4__this;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = (UISprite_o *)UnityEngine_Object__op_Equality(_4__this, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) == 0 )
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
      v4 = (UISprite_o *)UnityEngine_Object__op_Equality(mcBaseP, 0LL, 0LL);
      if ( ((unsigned __int8)v4 & 1) != 0 )
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
        v4 = (UISprite_o *)AtlasManager__SetEventUI(v9, BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME, 0LL);
        v12 = this->fields.__4__this;
        if ( v12 )
        {
          v13 = (char)v4;
          v4 = v12->fields.mcBaseP;
          if ( (v13 & 1) != 0 )
          {
            if ( !v4 )
              goto LABEL_35;
          }
          else
          {
            if ( !v4 )
              goto LABEL_35;
            UISprite__set_atlas(v4, v12->fields.basePanelAtlas, 0LL);
            v14 = this->fields.__4__this;
            if ( !v14 )
              goto LABEL_35;
            v4 = (UISprite_o *)ServantStatusQuestBoardDraw_TypeInfo;
            v15 = v14->fields.mcBaseP;
            if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
            }
            if ( !v15 )
              goto LABEL_35;
            UISprite__set_spriteName(
              v15,
              ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME,
              0LL);
            v16 = this->fields.__4__this;
            if ( !v16 )
              goto LABEL_35;
            v4 = v16->fields.mcBaseP;
            if ( !v4 )
              goto LABEL_35;
          }
          v4 = (UISprite_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v4->klass->vtable._33_MakePixelPerfect.method)(
                               v4,
                               v4->klass->vtable._34_get_minWidth.methodPtr);
          v17 = this->fields.__4__this;
          if ( v17 )
          {
            v4 = v17->fields.mcBaseP;
            if ( v4 )
            {
              UIWidget__set_color((UIWidget_o *)v4, this->fields.baseCol, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_35:
    sub_B52A5C(v4, v5);
  }
}


void __fastcall ServantStatusQuestBoardDraw___c__DisplayClass55_0___SetItem_b__1(
        ServantStatusQuestBoardDraw___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *_4__this; // x20
  UISprite_o *v4; // x0
  __int64 v5; // x1
  struct ServantStatusQuestBoardDraw_o *v6; // x8
  UnityEngine_Object_o *mTitleSp; // x20
  struct ServantStatusQuestBoardDraw_o *v8; // x8
  UISprite_o *v9; // x20
  ServantStatusQuestBoardDraw_c *v10; // x0
  System_String_o *TITLE_SPRITE_NAME_LIMIT_UNSEAL; // x21
  struct ServantStatusQuestBoardDraw_o *v12; // x9
  char v13; // w8
  struct ServantStatusQuestBoardDraw_o *v14; // x8
  UISprite_o *v15; // x20
  System_String_o **p_monitor; // x8
  struct ServantStatusQuestBoardDraw_o *v17; // x8
  struct ServantStatusQuestBoardDraw_o *v18; // x8

  if ( (byte_42AD392 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ServantStatusQuestBoardDraw_TypeInfo);
    byte_42AD392 = 1;
  }
  _4__this = (UnityEngine_Object_o *)this->fields.__4__this;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = (UISprite_o *)UnityEngine_Object__op_Equality(_4__this, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) == 0 )
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
      v4 = (UISprite_o *)UnityEngine_Object__op_Equality(mTitleSp, 0LL, 0LL);
      if ( ((unsigned __int8)v4 & 1) != 0 )
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
        v4 = (UISprite_o *)AtlasManager__SetEventUI(v9, TITLE_SPRITE_NAME_LIMIT_UNSEAL, 0LL);
        v12 = this->fields.__4__this;
        if ( v12 )
        {
          v13 = (char)v4;
          v4 = v12->fields.mTitleSp;
          if ( (v13 & 1) != 0 )
          {
            if ( !v4 )
              goto LABEL_41;
          }
          else
          {
            if ( !v4 )
              goto LABEL_41;
            UISprite__set_atlas(v4, v12->fields.basePanelAtlas, 0LL);
            v14 = this->fields.__4__this;
            if ( !v14 )
              goto LABEL_41;
            v4 = (UISprite_o *)ServantStatusQuestBoardDraw_TypeInfo;
            v15 = v14->fields.mTitleSp;
            if ( this->fields.isMap )
            {
              if ( (WORD1(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
                v4 = (UISprite_o *)ServantStatusQuestBoardDraw_TypeInfo;
              }
              p_monitor = (System_String_o **)&v4->fields.onPostFill[1].monitor;
              if ( !v15 )
                goto LABEL_41;
            }
            else
            {
              if ( (WORD1(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
                v4 = (UISprite_o *)ServantStatusQuestBoardDraw_TypeInfo;
              }
              p_monitor = (System_String_o **)&v4->fields.onPostFill[1];
              if ( !v15 )
                goto LABEL_41;
            }
            UISprite__set_spriteName(v15, *p_monitor, 0LL);
            v17 = this->fields.__4__this;
            if ( !v17 )
              goto LABEL_41;
            v4 = v17->fields.mTitleSp;
            if ( !v4 )
              goto LABEL_41;
          }
          v4 = (UISprite_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v4->klass->vtable._33_MakePixelPerfect.method)(
                               v4,
                               v4->klass->vtable._34_get_minWidth.methodPtr);
          v18 = this->fields.__4__this;
          if ( v18 )
          {
            v4 = v18->fields.mTitleSp;
            if ( v4 )
            {
              UIWidget__set_color((UIWidget_o *)v4, this->fields.baseCol, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_41:
    sub_B52A5C(v4, v5);
  }
}