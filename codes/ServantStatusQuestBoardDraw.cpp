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
  ServantStatusQuestBoardDraw_c *v16; // x8
  struct ServantStatusQuestBoardDraw_StaticFields *static_fields; // x9
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

  if ( (byte_421772A & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusQuestBoardDraw_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_19538/*"img_conductor_03"*/, v8);
    sub_B0D8A4(&StringLiteral_19539/*"img_conductor_04"*/, v9);
    sub_B0D8A4(&StringLiteral_19537/*"img_conductor_02"*/, v10);
    sub_B0D8A4(&StringLiteral_17224/*"caldeagate_notice_{0:00}"*/, v11);
    sub_B0D8A4(&StringLiteral_19635/*"img_questboard_1001"*/, v12);
    sub_B0D8A4(&StringLiteral_19536/*"img_conductor_01"*/, v13);
    sub_B0D8A4(&StringLiteral_19540/*"img_conductor_questboard"*/, v14);
    sub_B0D8A4(&StringLiteral_19532/*"img_commonbg"*/, v15);
    byte_421772A = 1;
  }
  ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH = 320;
  ServantStatusQuestBoardDraw_TypeInfo->static_fields->ADVANCE_NOTICE_BASE_WIDTH = 416;
  v16 = ServantStatusQuestBoardDraw_TypeInfo;
  ServantStatusQuestBoardDraw_TypeInfo->static_fields->ADVANCE_NOTICE_BASE_HEIGHT = 90;
  v16->static_fields->ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT = 36;
  static_fields = v16->static_fields;
  *(_QWORD *)&static_fields->CLEAR_POS_AREA.fields.x = 0xC23C0000431B0000LL;
  static_fields->CLEAR_POS_AREA.fields.z = 0.0;
  v18 = v16->static_fields;
  *(_QWORD *)&v18->CLEAR_POS_QUEST.fields.x = 0xC25C0000C3370000LL;
  v18->CLEAR_POS_QUEST.fields.z = 0.0;
  v16->static_fields->QUEST_BOARD_PHASE_INTERVAL = 21;
  v16->static_fields->QUEST_BOARD_PHASE_LOOF_INTERVAL = 30;
  v16->static_fields->QUEST_BOARD_PHASE_EX_INTERVAL = 17;
  v16->static_fields->QUEST_BOARD_PHASE_EX_LOOF_INTERVAL = 26;
  v19 = v16->static_fields;
  v20 = (System_Int32_array **)StringLiteral_19532/*"img_commonbg"*/;
  v19->DARK_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_19532/*"img_commonbg"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v19->DARK_BOARD_SPRITE_NAME, v20, v2, v3, v4, v5, v6, v7);
  v21 = ServantStatusQuestBoardDraw_TypeInfo;
  ServantStatusQuestBoardDraw_TypeInfo->static_fields->DARK_BOARD_WIDTH = 496;
  v21->static_fields->DARK_BOARD_HIGHT = 122;
  v22 = v21->static_fields;
  v23 = (System_Int32_array **)StringLiteral_19540/*"img_conductor_questboard"*/;
  v22->BASE_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_19540/*"img_conductor_questboard"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v22->BASE_BOARD_SPRITE_NAME, v23, v24, v25, v26, v27, v28, v29);
  v30 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v31 = (System_Int32_array **)StringLiteral_19537/*"img_conductor_02"*/;
  v30->TITLE_SPRITE_NAME_INTERLUDE = (struct System_String_o *)StringLiteral_19537/*"img_conductor_02"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v30->TITLE_SPRITE_NAME_INTERLUDE, v31, v32, v33, v34, v35, v36, v37);
  v38 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v39 = (System_Int32_array **)StringLiteral_19536/*"img_conductor_01"*/;
  v38->TITLE_SPRITE_NAME_INTERLUDE_MAP = (struct System_String_o *)StringLiteral_19536/*"img_conductor_01"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v38->TITLE_SPRITE_NAME_INTERLUDE_MAP, v39, v40, v41, v42, v43, v44, v45);
  v46 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v47 = (System_Int32_array **)StringLiteral_19538/*"img_conductor_03"*/;
  v46->TITLE_SPRITE_NAME_RAINFORCEMENT = (struct System_String_o *)StringLiteral_19538/*"img_conductor_03"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v46->TITLE_SPRITE_NAME_RAINFORCEMENT, v47, v48, v49, v50, v51, v52, v53);
  v54 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v55 = (System_Int32_array **)StringLiteral_17224/*"caldeagate_notice_{0:00}"*/;
  v54->QUEST_BOARD_INFO_FRAME_NAME = (struct System_String_o *)StringLiteral_17224/*"caldeagate_notice_{0:00}"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v54->QUEST_BOARD_INFO_FRAME_NAME, v55, v56, v57, v58, v59, v60, v61);
  v62 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v63 = (System_Int32_array **)StringLiteral_19635/*"img_questboard_1001"*/;
  v62->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME = (struct System_String_o *)StringLiteral_19635/*"img_questboard_1001"*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v62->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  v70 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v71 = (System_Int32_array **)StringLiteral_19539/*"img_conductor_04"*/;
  v70->TITLE_SPRITE_NAME_LIMIT_UNSEAL = (struct System_String_o *)StringLiteral_19539/*"img_conductor_04"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v70->TITLE_SPRITE_NAME_LIMIT_UNSEAL, v71, v72, v73, v74, v75, v76, v77);
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
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x21
  int size; // w8
  int v10; // w20
  MapControl_QuestInfo_o *v11; // x1
  int64_t Time; // x3
  const MethodInfo *v13; // x4
  ServantStatusQuestBoardDraw_o *v14; // x0
  int32_t v15; // w2

  v5 = this;
  if ( (byte_4217722 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, qinf);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, v6);
    this = (ServantStatusQuestBoardDraw_o *)sub_B0D8A4(&NetworkManager_TypeInfo, v7);
    byte_4217722 = 1;
  }
  if ( (byte_4217723 & 1) == 0 )
  {
    this = (ServantStatusQuestBoardDraw_o *)sub_B0D8A4(
                                              &Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__,
                                              qinf);
    byte_4217723 = 1;
  }
  mInfoTextList = v5->fields.mInfoTextList;
  if ( mInfoTextList )
  {
    size = mInfoTextList->fields._size;
    if ( size >= 2 )
    {
      if ( questBoardManagerer )
      {
        v10 = questBoardManagerer->fields.mAlphaAnimCnt % size;
        if ( size <= (unsigned int)v10 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        this = (ServantStatusQuestBoardDraw_o *)mInfoTextList->fields._items->m_Items[v10];
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
            v14 = v5;
            v15 = v10;
LABEL_26:
            ServantStatusQuestBoardDraw__UpdateInfoText(v14, v11, v15, Time, v13);
            return;
          }
          return;
        }
      }
LABEL_28:
      sub_B0D97C(this);
    }
  }
  if ( (byte_4217724 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, qinf);
    byte_4217724 = 1;
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
    v14 = v5;
    v15 = 0;
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
  int v8; // w8
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x0

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
    v11 = sub_B0D9A8(this);
    sub_B0D948(v11, 0LL);
  }
  v6 = (int32_t *)mRewardIconInfs->m_Items[v5];
  if ( !v6 )
    goto LABEL_18;
  v7 = v6[11];
  this = (ServantStatusQuestBoardDraw_o *)this->fields.mRewardIcon;
  v8 = v6[7];
  if ( v7 >= 1 )
  {
    if ( this )
    {
      if ( v8 <= 1 )
        v9 = -1;
      else
        v9 = v6[7];
      ItemIconComponent__SetItemImage_26857580((ItemIconComponent_o *)this, v7, v9, 0LL);
      return;
    }
LABEL_18:
    sub_B0D97C(this);
  }
  if ( !this )
    goto LABEL_18;
  if ( v8 <= 1 )
    v10 = -1;
  else
    v10 = v6[7];
  ItemIconComponent__SetGift((ItemIconComponent_o *)this, v6[5], v6[6], v10, 0, 0LL);
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
  const MethodInfo *v22; // x3
  QuestBoardInformaionText_o *v23; // x27
  int32_t consumeType; // w8
  struct System_Int32_array *targetIds; // x8
  System_String_o *v26; // x20
  Il2CppObject *EventName; // x0
  System_String_o *v28; // x20
  int64_t EndTime; // x19
  __int64 v30; // x1
  __int64 v31; // x2
  QuestBoardInformaionText_o *v32; // x0
  QuestPhaseEntity_o *entity; // [xsp+28h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v35; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4217727 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestPhaseMaster___, questEntity);
    sub_B0D8A4(&DataManager_TypeInfo, v16);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v17);
    sub_B0D8A4(&QuestBoardInformaionText_TypeInfo, v18);
    sub_B0D8A4(&StringLiteral_23617/*"{0}"*/, v19);
    this = (ServantStatusQuestBoardDraw_o *)sub_B0D8A4(&StringLiteral_13449/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, v20);
    byte_4217727 = 1;
  }
  entity = 0LL;
  if ( !eventEnt || !eventCampaignEnt )
    goto LABEL_35;
  target = eventCampaignEnt->fields.target;
  this = (ServantStatusQuestBoardDraw_o *)CombineAdjustTarget__isTerminalExposable(target, 0LL);
  v23 = 0LL;
  if ( ((unsigned __int8)this & 1) == 0 )
    return v23;
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
        if ( !ServantStatusQuestBoardDraw__IsValidSupportSelection(this, questEntity, phase, v22) )
          return 0LL;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (ServantStatusQuestBoardDraw_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
      sub_B0D97C(this);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_13449/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0LL);
  EventName = (Il2CppObject *)EventEntity__getEventName(eventEnt, 0LL);
  v28 = System_String__Format_43845440(v26, EventName, (Il2CppObject *)StringLiteral_23617/*"{0}"*/, 0LL);
  EndTime = EventEntity__GetEndTime(eventEnt, 0, 0LL);
  v32 = (QuestBoardInformaionText_o *)sub_B0D974(QuestBoardInformaionText_TypeInfo, v30, v31);
  v36.fields.r = 0.0;
  v36.fields.g = 0.0;
  v36.fields.b = 0.0;
  v36.fields.a = 0.0;
  v35.fields.x = 0.0;
  v35.fields.y = 0.0;
  v35.fields.z = 0.0;
  v23 = v32;
  QuestBoardInformaionText___ctor(v32, v28, EndTime, 1, 0, v36, -1, 0, v35, 0, 0LL, 0LL, 0LL);
  return v23;
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
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v30; // x20
  int64_t endedAt; // x20
  System_String_o *EventName; // x21
  System_String_o *v33; // x0
  System_String_o *v34; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  QuestBoardInformaionText_o *v37; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v38; // x22
  WarEntity_o *entity; // [xsp+28h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v41; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4217725 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&quest_id);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v14);
    sub_B0D8A4(&DataManager_TypeInfo, v15);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__, v19);
    sub_B0D8A4(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo, v20);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v21);
    sub_B0D8A4(&QuestBoardInformaionText_TypeInfo, v22);
    sub_B0D8A4(&StringLiteral_23617/*"{0}"*/, v23);
    sub_B0D8A4(&StringLiteral_80/*" "*/, v24);
    sub_B0D8A4(&StringLiteral_13454/*"TIME_REST_STRING"*/, v25);
    byte_4217725 = 1;
  }
  entity = 0LL;
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo,
                                                                                                  *(_QWORD *)&quest_id,
                                                                                                  *(_QWORD *)&phase);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
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
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  if ( !questBoardManager || !CampaignTextListByEventQuestMaster )
    goto LABEL_24;
  EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                             (QuestReleaseOverwriteMaster_o *)CampaignTextListByEventQuestMaster,
                             this->fields.questId,
                             questBoardManager->fields.mListCreatedTime,
                             0LL);
  if ( !EntityByQuestIdAndTime )
    return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v26;
  v30 = EntityByQuestIdAndTime;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !CampaignTextListByEventQuestMaster )
    goto LABEL_24;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)CampaignTextListByEventQuestMaster,
          &entity,
          v30->fields.eventId,
          (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v26;
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)entity;
  if ( !entity )
LABEL_24:
    sub_B0D97C(CampaignTextListByEventQuestMaster);
  if ( LODWORD(entity->fields.age) == 25 )
  {
    endedAt = v30->fields.endedAt;
    if ( endedAt <= 0 )
      endedAt = *(_QWORD *)&entity->fields.eventId;
    EventName = EventEntity__getEventName((EventEntity_o *)entity, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_13454/*"TIME_REST_STRING"*/, 0LL);
    v34 = System_String__Concat_43853316(
            EventName,
            (System_String_o *)StringLiteral_80/*" "*/,
            v33,
            (System_String_o *)StringLiteral_23617/*"{0}"*/,
            0LL);
    v37 = (QuestBoardInformaionText_o *)sub_B0D974(QuestBoardInformaionText_TypeInfo, v35, v36);
    v42.fields.r = 0.0;
    v42.fields.g = 0.0;
    v42.fields.b = 0.0;
    v42.fields.a = 0.0;
    v41.fields.x = 0.0;
    v41.fields.y = 0.0;
    v41.fields.z = 0.0;
    v38 = (EventMissionProgressRequest_Argument_ProgressData_o *)v37;
    QuestBoardInformaionText___ctor(v37, v34, endedAt, 0, 0, v42, -1, 0, v41, 1, 0LL, 0LL, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v26,
      v38,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
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
  void *Instance; // x0
  DataManager_o *v23; // x24
  EventCampaignMaster_o *MasterData_WarQuestSelectionMaster; // x25
  int64_t mListCreatedTime; // x28
  QuestEntity_o *v26; // x27
  int v27; // w8
  void *v28; // x26
  unsigned int v29; // w19
  EventEntity_o *v30; // x28
  __int64 v32; // x0
  const MethodInfo *v33; // [xsp+0h] [xbp-70h]
  bool v34; // [xsp+14h] [xbp-5Ch]

  if ( (byte_4217726 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventCampaignMaster___, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventQuestMaster___, v14);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, v15);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__, v18);
    sub_B0D8A4(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo, v19);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    byte_4217726 = 1;
  }
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo,
                                                                                                  *(_QWORD *)&questId,
                                                                                                  *(_QWORD *)&phase);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v34 = isQuestNoneCleared;
  v23 = (DataManager_o *)Instance;
  MasterData_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               v23,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               questId,
               (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !questBoardManager )
    goto LABEL_19;
  mListCreatedTime = questBoardManager->fields.mListCreatedTime;
  v26 = (QuestEntity_o *)Instance;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               v23,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventQuestMaster___);
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
  v27 = *((_DWORD *)Instance + 6);
  v28 = Instance;
  if ( v27 >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      if ( v29 >= v27 )
      {
        v32 = sub_B0D9A8(Instance);
        sub_B0D948(v32, 0LL);
      }
      v30 = (EventEntity_o *)*((_QWORD *)v28 + (int)v29 + 4);
      if ( !v30 || !MasterData_WarQuestSelectionMaster )
        break;
      Instance = EventCampaignMaster__getData(MasterData_WarQuestSelectionMaster, v30->fields.id, 0LL);
      if ( Instance )
      {
        Instance = ServantStatusQuestBoardDraw__CreateQuestBoardInformationText(
                     this,
                     v26,
                     v30,
                     (EventCampaignEntity_o *)Instance,
                     phase,
                     v34,
                     costCalcVal,
                     fixedVal,
                     v33);
        if ( Instance )
        {
          if ( !v21 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v21,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
        }
      }
      v27 = *((_DWORD *)v28 + 6);
      if ( (int)++v29 >= v27 )
        return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v21;
    }
LABEL_19:
    sub_B0D97C(Instance);
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
  MapControl_WarInfo_o *IsQuestReleaseAll; // x0
  struct MapControl_SpotInfo_o *SpotInfo_k__BackingField; // x8
  QuestReleaseOverwriteMaster_o *Master_WarQuestSelectionMaster; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x20
  QuestReleaseEntity_o *v27; // x0
  MapControl_WarInfo_o *v28; // x20
  __int64 v29; // x8
  __int64 v30; // x23
  __int64 v31; // x8
  int32_t v32; // w19
  int32_t v33; // w22
  int64_t v34; // x21
  __int64 v35; // x0
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_421771C & 1) == 0 )
  {
    sub_B0D8A4(&CondType_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestReleaseMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v14);
    sub_B0D8A4(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v15);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v16);
    byte_421771C = 1;
  }
  entityList = 0LL;
  memset(&v37, 0, sizeof(v37));
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
  Master_WarQuestSelectionMaster = (QuestReleaseOverwriteMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo,
                                                                                                  v21,
                                                                                                  v22);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v23;
  if ( !Master_WarQuestSelectionMaster )
LABEL_53:
    sub_B0D97C(IsQuestReleaseAll);
  if ( !QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
          Master_WarQuestSelectionMaster,
          &entityList,
          qinf->fields.questId,
          0LL,
          0LL) )
    goto LABEL_57;
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                                                                  v24,
                                                                                                  v25);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  IsQuestReleaseAll = (MapControl_WarInfo_o *)entityList;
  if ( !entityList )
    goto LABEL_53;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v36,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entityList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
  v37 = v36;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v37,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
  {
    if ( !v37.fields.current )
      sub_B0D97C(0LL);
    v27 = QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
            (QuestReleaseOverwriteEntity_o *)v37.fields.current,
            0LL);
    if ( !v26 )
      sub_B0D97C(v27);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v26,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v37,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
  if ( !v26 )
    goto LABEL_53;
  IsQuestReleaseAll = (MapControl_WarInfo_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v26,
                                                (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
  v28 = IsQuestReleaseAll;
  if ( !IsQuestReleaseAll )
  {
LABEL_57:
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    IsQuestReleaseAll = (MapControl_WarInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
    if ( !IsQuestReleaseAll )
      goto LABEL_53;
    IsQuestReleaseAll = (MapControl_WarInfo_o *)QuestReleaseMaster__getListByQuestID(
                                                  (QuestReleaseMaster_o *)IsQuestReleaseAll,
                                                  qinf->fields.questId,
                                                  0LL);
    v28 = IsQuestReleaseAll;
  }
  if ( !v28 )
    goto LABEL_53;
  v29 = *(_QWORD *)&v28->fields.status;
  if ( !v29 )
    return qinf->fields.dispType != 1;
  if ( (int)v29 >= 1 )
  {
    v30 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v30 >= (unsigned int)v29 )
      {
        v35 = sub_B0D9A8(IsQuestReleaseAll);
        sub_B0D948(v35, 0LL);
      }
      v31 = *((_QWORD *)&v28->fields.mapInfoList + v30);
      if ( !v31 )
        break;
      v33 = *(_DWORD *)(v31 + 20);
      v32 = *(_DWORD *)(v31 + 24);
      v34 = *(_QWORD *)(v31 + 32);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestReleaseAll = (MapControl_WarInfo_o *)CondType__IsOpen(v33, v32, v34, 0, 0LL);
      if ( ((unsigned __int8)IsQuestReleaseAll & 1) == 0 )
        return 1;
      LODWORD(v29) = v28->fields.status;
      if ( (int)++v30 >= (int)v29 )
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

  if ( (byte_4217724 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, method);
    byte_4217724 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  return !mInfoTextList || mInfoTextList->fields._size == 0;
}


bool __fastcall ServantStatusQuestBoardDraw__IsMultiInfoText(
        ServantStatusQuestBoardDraw_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x8

  if ( (byte_4217723 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, method);
    byte_4217723 = 1;
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

  if ( (byte_4217728 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestRestrictionInfoMaster___, questEntity);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    byte_4217728 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
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
        return v9 & ~QuestEntity__HasFlag_23244236(questEntity, 2LL, phase, 0LL) & 1;
      }
LABEL_18:
      sub_B0D97C(Master_WarQuestSelectionMaster);
    }
  }
  else if ( !QuestEntity__HasFlag_23244236(questEntity, 0x80000LL, phase, 0LL) )
  {
    HasFlag = QuestEntity__HasFlag_23244236(questEntity, 0x100000LL, phase, 0LL);
    goto LABEL_16;
  }
  v9 = 0;
  return v9 & ~QuestEntity__HasFlag_23244236(questEntity, 2LL, phase, 0LL) & 1;
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

  if ( (byte_4217729 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_9998/*"OnClickServantQuest"*/, v5);
    byte_4217729 = 1;
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
      sub_B0D97C(v9);
    UnityEngine_GameObject__SendMessage_40784812(v8, (System_String_o *)StringLiteral_9998/*"OnClickServantQuest"*/, v9, 0LL);
  }
}


void __fastcall ServantStatusQuestBoardDraw__ResetInfoTextList(
        ServantStatusQuestBoardDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v6; // x0
  BattleServantConfConponent_o *p_mInfoTextList; // x19
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // t1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_421771F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Clear__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo, v5);
    byte_421771F = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  p_mInfoTextList = (BattleServantConfConponent_o *)&this->fields.mInfoTextList;
  v6 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)mInfoTextList;
  if ( mInfoTextList )
  {
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      v6,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Clear__);
  }
  else
  {
    v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo,
                                                                                                   method,
                                                                                                   v2);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v9,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
    p_mInfoTextList->klass = (BattleServantConfConponent_c *)v9;
    sub_B0D840(p_mInfoTextList, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
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
  __int64 Master_WarQuestSelectionMaster; // x0
  System_String_o *age; // x20
  Il2CppObject *PrioredName; // x0
  System_String_o *v31; // x0
  int32_t targetId; // w23
  System_String_o *v33; // x24
  int32_t WarID_ByQuestID; // w23
  WarEntity_o *v35; // x0
  int64_t OpenedAt; // x23
  System_Object_array *v37; // x23
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x24
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x24
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x24
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x24
  bool v66; // w23
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v68; // x21
  _BOOL4 v69; // w24
  UILabel_o *mTitleNameLb; // x22
  ServantStatusQuestBoardDraw_c *v71; // x0
  int32_t *p_ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT; // x8
  UILabel_o *mCondChangeMessage; // x19
  int32_t v74; // w22
  float v75; // s1
  int v76; // s2
  int v77; // s0
  float v78; // s1
  int v79; // s2
  int v80; // s0
  float v81; // s1
  int v82; // s0
  int v83; // s2
  UIWidget_o *mOverwriteAdvanceNoticeLb; // x23
  const MethodInfo *v85; // x3
  const MethodInfo *v86; // x3
  System_String_o *overlayClosedMessage; // x20
  UILabel_o *v88; // x19
  __int64 v89; // x0
  __int64 v90; // x0
  int32_t Minute; // [xsp+Ch] [xbp-74h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-70h] BYREF
  int32_t Day; // [xsp+14h] [xbp-6Ch] BYREF
  int64_t value; // [xsp+18h] [xbp-68h] BYREF
  uint64_t dateData; // [xsp+20h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF
  System_DateTime_o v97; // 0:x0.8
  System_DateTime_o v98; // 0:x0.8
  System_DateTime_o v99; // 0:x0.8
  System_DateTime_o v100; // 0:x0.8

  if ( (byte_4217721 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ClosedMessageMaster___, *(_QWORD *)&questReleaseClosedID);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarMaster___, v14);
    sub_B0D8A4(&DataManager_TypeInfo, v15);
    sub_B0D8A4(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v16);
    sub_B0D8A4(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v17);
    sub_B0D8A4(&int_TypeInfo, v18);
    sub_B0D8A4(&long_TypeInfo, v19);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v20);
    sub_B0D8A4(&NetworkManager_TypeInfo, v21);
    sub_B0D8A4(&object___TypeInfo, v22);
    sub_B0D8A4(&ServantStatusQuestBoardDraw_TypeInfo, v23);
    sub_B0D8A4(&Method_SingletonTemplate_QuestTree__get_Instance__, v24);
    sub_B0D8A4(&SingletonTemplate_QuestTree__TypeInfo, v25);
    sub_B0D8A4(&StringLiteral_14769/*"UNKNOWN_QUEST_NAME"*/, v26);
    sub_B0D8A4(&StringLiteral_1/*""*/, v27);
    byte_4217721 = 1;
  }
  dateData = 0LL;
  entity = 0LL;
  if ( questReleaseClosedID >= 1 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClosedMessageMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_114;
    age = (System_String_o *)StringLiteral_1/*""*/;
    Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                       &entity,
                                       questReleaseClosedID,
                                       (const MethodInfo_2669C30 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    if ( (Master_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_114;
      age = entity->fields.age;
    }
    if ( !questReleaseEntity )
      goto LABEL_114;
    switch ( questReleaseEntity->fields.type )
    {
      case 1:
        targetId = questReleaseEntity->fields.targetId;
        v33 = (System_String_o *)StringLiteral_1/*""*/;
        if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
        }
        Master_WarQuestSelectionMaster = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_114;
        WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Master_WarQuestSelectionMaster, targetId, 0LL);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarMaster___);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_114;
        v35 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                WarID_ByQuestID,
                (const MethodInfo_2669BD4 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
        if ( v35 )
        {
          PrioredName = (Il2CppObject *)WarEntity__GetPrioredName(v35, 0LL);
LABEL_14:
          v31 = System_String__Format(age, PrioredName, 0LL);
LABEL_43:
          age = v31;
        }
        else
        {
          age = v33;
        }
LABEL_44:
        Master_WarQuestSelectionMaster = (__int64)entity;
        if ( !entity )
          goto LABEL_114;
        v66 = ClosedMessageEntity__IsChangeDispClosedMessage((ClosedMessageEntity_o *)entity, 0LL);
        if ( warEntity && !v66 )
          v66 = WarEntity__IsChangeDispClosedMessage(warEntity, 0LL);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_114;
        EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                                   (QuestReleaseOverwriteMaster_o *)Master_WarQuestSelectionMaster,
                                   this->fields.questId,
                                   checkTime,
                                   0LL);
        v68 = EntityByQuestIdAndTime;
        if ( EntityByQuestIdAndTime )
        {
          v69 = !System_String__IsNullOrEmpty(EntityByQuestIdAndTime->fields.overlayClosedMessage, 0LL);
          if ( v66 )
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
                                                          (System_String_o *)StringLiteral_14769/*"UNKNOWN_QUEST_NAME"*/,
                                                          0LL);
              if ( mTitleNameLb )
              {
                UILabel__set_text(mTitleNameLb, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
                v71 = ServantStatusQuestBoardDraw_TypeInfo;
                if ( v69 )
                {
                  if ( (WORD1(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                    && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
                    v71 = ServantStatusQuestBoardDraw_TypeInfo;
                  }
                  p_ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT = &v71->static_fields->ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT;
                }
                else
                {
                  if ( (WORD1(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                    && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
                    v71 = ServantStatusQuestBoardDraw_TypeInfo;
                  }
                  p_ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT = &v71->static_fields->ADVANCE_NOTICE_BASE_HEIGHT;
                }
                Master_WarQuestSelectionMaster = (__int64)entity;
                if ( entity )
                {
                  v74 = *p_ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT;
                  Master_WarQuestSelectionMaster = ClosedMessageEntity__IsChangeDispPositionLeft(
                                                     (ClosedMessageEntity_o *)entity,
                                                     0LL);
                  if ( this->fields.mAdvanceNoticeLb )
                  {
                    if ( (Master_WarQuestSelectionMaster & 1) != 0 )
                    {
                      UIWidget__set_pivot((UIWidget_o *)this->fields.mAdvanceNoticeLb, 3, 0LL);
                      Master_WarQuestSelectionMaster = (__int64)this->fields.mAdvanceNoticeLb;
                      if ( !Master_WarQuestSelectionMaster )
                        goto LABEL_114;
                      Master_WarQuestSelectionMaster = (__int64)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                                  0LL);
                      if ( !Master_WarQuestSelectionMaster )
                        goto LABEL_114;
                      v75 = 24.0;
                      if ( !v69 )
                        v75 = 0.0;
                      v76 = 0;
                      v77 = -1018167296;
                      UnityEngine_Transform__set_localPosition(
                        (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster,
                        *(UnityEngine_Vector3_o *)(&v75 - 1),
                        0LL);
                      Master_WarQuestSelectionMaster = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
                      if ( !Master_WarQuestSelectionMaster )
                        goto LABEL_114;
                      UIWidget__set_pivot((UIWidget_o *)Master_WarQuestSelectionMaster, 3, 0LL);
                      Master_WarQuestSelectionMaster = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
                      if ( !Master_WarQuestSelectionMaster )
                        goto LABEL_114;
                      Master_WarQuestSelectionMaster = (__int64)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                                  0LL);
                      if ( !Master_WarQuestSelectionMaster )
                        goto LABEL_114;
                      v78 = -26.0;
                      v79 = 0;
                      v80 = -1018167296;
                    }
                    else
                    {
                      UIWidget__set_pivot((UIWidget_o *)this->fields.mAdvanceNoticeLb, 4, 0LL);
                      Master_WarQuestSelectionMaster = (__int64)this->fields.mAdvanceNoticeLb;
                      if ( !Master_WarQuestSelectionMaster )
                        goto LABEL_114;
                      Master_WarQuestSelectionMaster = (__int64)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                                  0LL);
                      if ( !Master_WarQuestSelectionMaster )
                        goto LABEL_114;
                      v81 = 24.0;
                      if ( !v69 )
                        v81 = 0.0;
                      v82 = 0;
                      v83 = 0;
                      UnityEngine_Transform__set_localPosition(
                        (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster,
                        *(UnityEngine_Vector3_o *)(&v81 - 1),
                        0LL);
                      Master_WarQuestSelectionMaster = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
                      if ( !Master_WarQuestSelectionMaster )
                        goto LABEL_114;
                      UIWidget__set_pivot((UIWidget_o *)Master_WarQuestSelectionMaster, 4, 0LL);
                      Master_WarQuestSelectionMaster = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
                      if ( !Master_WarQuestSelectionMaster )
                        goto LABEL_114;
                      Master_WarQuestSelectionMaster = (__int64)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                                  0LL);
                      if ( !Master_WarQuestSelectionMaster )
                        goto LABEL_114;
                      v78 = -26.0;
                      v80 = 0;
                      v79 = 0;
                    }
                    UnityEngine_Transform__set_localPosition(
                      (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster,
                      *(UnityEngine_Vector3_o *)&v80,
                      0LL);
                    Master_WarQuestSelectionMaster = (__int64)this->fields.mAdvanceNoticeLb;
                    if ( Master_WarQuestSelectionMaster )
                    {
                      UIWidget__set_height((UIWidget_o *)Master_WarQuestSelectionMaster, v74, 0LL);
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
                        ServantStatusQuestBoardDraw___SetAdvanceNoticeText_g__CalculateLabel_59_0(
                          this->fields.mAdvanceNoticeLb,
                          age,
                          v74,
                          v85);
                        if ( !v69 )
                          return;
                        Master_WarQuestSelectionMaster = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
                        if ( Master_WarQuestSelectionMaster )
                        {
                          UnityEngine_GameObject__SetActive(
                            (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                            1,
                            0LL);
                          if ( v68 )
                          {
                            overlayClosedMessage = v68->fields.overlayClosedMessage;
                            v88 = this->fields.mOverwriteAdvanceNoticeLb;
                            if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
                            }
                            ServantStatusQuestBoardDraw___SetAdvanceNoticeText_g__CalculateLabel_59_0(
                              v88,
                              overlayClosedMessage,
                              v74,
                              v86);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
LABEL_114:
            sub_B0D97C(Master_WarQuestSelectionMaster);
          }
        }
        else
        {
          v69 = 0;
          if ( v66 )
            goto LABEL_54;
        }
        Master_WarQuestSelectionMaster = (__int64)this->fields.mTitleNameLb;
        if ( Master_WarQuestSelectionMaster )
        {
          UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, age, 0LL);
          Master_WarQuestSelectionMaster = (__int64)this->fields.mAdvanceNoticeLb;
          if ( Master_WarQuestSelectionMaster )
          {
            UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            Master_WarQuestSelectionMaster = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
            if ( Master_WarQuestSelectionMaster )
            {
              UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              if ( !v69 )
                return;
              Master_WarQuestSelectionMaster = (__int64)this->fields.mCondObject;
              if ( Master_WarQuestSelectionMaster )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
                if ( v68 )
                {
                  Master_WarQuestSelectionMaster = (__int64)this->fields.mCondChangeMessage;
                  if ( Master_WarQuestSelectionMaster )
                  {
                    UILabel__set_text(
                      (UILabel_o *)Master_WarQuestSelectionMaster,
                      v68->fields.overlayClosedMessage,
                      0LL);
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
            }
          }
        }
        goto LABEL_114;
      case 6:
      case 7:
      case 9:
        value = questReleaseEntity->fields.value;
        PrioredName = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &value);
        goto LABEL_14;
      case 0xC:
        if ( !questEntity )
          goto LABEL_114;
        OpenedAt = QuestEntity__getOpenedAt(questEntity, 0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        dateData = NetworkManager__getServerDateTime_25504848(OpenedAt, 0LL).fields.dateData;
        v37 = (System_Object_array *)sub_B0D8BC(object___TypeInfo, 4LL);
        v97.fields.dateData = (uint64_t)&dateData;
        LODWORD(value) = System_DateTime__get_Month(v97, 0LL);
        Master_WarQuestSelectionMaster = j_il2cpp_value_box_0(int_TypeInfo, &value);
        if ( !v37 )
          goto LABEL_114;
        v44 = (System_Int32_array **)Master_WarQuestSelectionMaster;
        if ( Master_WarQuestSelectionMaster )
        {
          Master_WarQuestSelectionMaster = sub_B0D964(Master_WarQuestSelectionMaster, v37->obj.klass->_1.element_class);
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_116;
        }
        if ( !v37->max_length )
          goto LABEL_115;
        v37->m_Items[0] = (Il2CppObject *)v44;
        sub_B0D840((BattleServantConfConponent_o *)v37->m_Items, v44, v38, v39, v40, v41, v42, v43);
        v98.fields.dateData = (uint64_t)&dateData;
        Day = System_DateTime__get_Day(v98, 0LL);
        Master_WarQuestSelectionMaster = j_il2cpp_value_box_0(int_TypeInfo, &Day);
        v51 = (System_Int32_array **)Master_WarQuestSelectionMaster;
        if ( Master_WarQuestSelectionMaster )
        {
          Master_WarQuestSelectionMaster = sub_B0D964(Master_WarQuestSelectionMaster, v37->obj.klass->_1.element_class);
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_116;
        }
        if ( v37->max_length <= 1 )
          goto LABEL_115;
        v37->m_Items[1] = (Il2CppObject *)v51;
        sub_B0D840((BattleServantConfConponent_o *)&v37->m_Items[1], v51, v45, v46, v47, v48, v49, v50);
        v99.fields.dateData = (uint64_t)&dateData;
        Hour = System_DateTime__get_Hour(v99, 0LL);
        Master_WarQuestSelectionMaster = j_il2cpp_value_box_0(int_TypeInfo, &Hour);
        v58 = (System_Int32_array **)Master_WarQuestSelectionMaster;
        if ( Master_WarQuestSelectionMaster )
        {
          Master_WarQuestSelectionMaster = sub_B0D964(Master_WarQuestSelectionMaster, v37->obj.klass->_1.element_class);
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_116;
        }
        if ( v37->max_length <= 2 )
          goto LABEL_115;
        v37->m_Items[2] = (Il2CppObject *)v58;
        sub_B0D840((BattleServantConfConponent_o *)&v37->m_Items[2], v58, v52, v53, v54, v55, v56, v57);
        v100.fields.dateData = (uint64_t)&dateData;
        Minute = System_DateTime__get_Minute(v100, 0LL);
        Master_WarQuestSelectionMaster = j_il2cpp_value_box_0(int_TypeInfo, &Minute);
        v65 = (System_Int32_array **)Master_WarQuestSelectionMaster;
        if ( Master_WarQuestSelectionMaster )
        {
          Master_WarQuestSelectionMaster = sub_B0D964(Master_WarQuestSelectionMaster, v37->obj.klass->_1.element_class);
          if ( !Master_WarQuestSelectionMaster )
          {
LABEL_116:
            v90 = sub_B0D99C(Master_WarQuestSelectionMaster);
            sub_B0D948(v90, 0LL);
          }
        }
        if ( v37->max_length <= 3 )
        {
LABEL_115:
          v89 = sub_B0D9A8(Master_WarQuestSelectionMaster);
          sub_B0D948(v89, 0LL);
        }
        v37->m_Items[3] = (Il2CppObject *)v65;
        sub_B0D840((BattleServantConfConponent_o *)&v37->m_Items[3], v65, v59, v60, v61, v62, v63, v64);
        v31 = System_String__Format_43928628(age, v37, 0LL);
        goto LABEL_43;
      default:
        goto LABEL_44;
    }
  }
}


void __fastcall ServantStatusQuestBoardDraw__SetDark(ServantStatusQuestBoardDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UISprite_o *mcBaseP; // x20
  UIWidget_o *mLineSp; // x0
  UILabel_o *mNoneLb; // x20
  const MethodInfo *v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct MapControl_QuestInfo_o **p_qinf; // x19
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_421771D & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&ServantStatusQuestBoardDraw_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_12013/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/, v4);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_421771D = 1;
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
  mLineSp = (UIWidget_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12013/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/, 0LL);
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
  ServantStatusQuestBoardDraw__ResetInfoTextList(this, v9);
  mLineSp = (UIWidget_o *)this->fields.mOptionInfoLb;
  if ( !mLineSp )
    goto LABEL_29;
  mLineSp = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mLineSp, 0LL);
  if ( !mLineSp )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0LL);
  this->fields.mRewardIconInfs = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.mRewardIconInfs, 0LL, v10, v11, v12, v13, v14, v15);
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
    sub_B0D97C(mLineSp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0LL);
  this->fields.inputMessageObject = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.inputMessageObject, 0LL, v16, v17, v18, v19, v20, v21);
  this->fields.qinf = 0LL;
  p_qinf = &this->fields.qinf;
  *((_DWORD *)p_qinf - 2) = 0;
  sub_B0D840((BattleServantConfConponent_o *)p_qinf, 0LL, v23, v24, v25, v26, v27, v28);
}


void __fastcall ServantStatusQuestBoardDraw__SetInfoTextAlpha(
        ServantStatusQuestBoardDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x8
  BoardOptionTextWithIconComponent_o *mOptionInfoLb; // x0

  if ( (byte_4217723 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, method);
    byte_4217723 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList && mInfoTextList->fields._size >= 2 )
  {
    mOptionInfoLb = this->fields.mOptionInfoLb;
    if ( !mOptionInfoLb )
      sub_B0D97C(0LL);
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
  __int64 v52; // x20
  int64_t Master_WarQuestSelectionMaster; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  int current; // w26
  char v61; // w19
  int64_t mListCreatedTime; // x25
  QuestEntity_o *Mine; // x28
  const MethodInfo *v64; // x1
  int v65; // w23
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  int v72; // w19
  const MethodInfo *v73; // x1
  int v74; // w27
  int32_t id; // w8
  int32_t warId; // w21
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v78; // x21
  bool v79; // w8
  ServantLimitImageMaster_o *v80; // x27
  _BOOL4 IsLimitCountSealQuest; // w25
  int closedMessageId; // w21
  WarQuestSelectionMaster_o *v83; // x28
  int64_t v84; // x2
  UserQuestMaster_o *v85; // x0
  int32_t questId; // w3
  char HasStatus; // w26
  _BOOL4 IsCommonReleaseMultiClear; // w0
  char v89; // w28
  int v90; // s0
  int v91; // s1
  int v92; // s2
  int v93; // s3
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  struct UISprite_o *mcBaseP; // x8
  struct UIAtlas_o *mAtlas; // x1
  UISprite_o *v102; // x27
  __int64 v103; // x1
  __int64 v104; // x2
  System_Action_o *v105; // x27
  UISprite_o *mTitleSp; // x27
  System_String_o **v107; // x8
  __int64 v108; // x1
  __int64 v109; // x2
  System_Action_o *v110; // x25
  const MethodInfo *v111; // x6
  char v112; // w27
  struct UILabel_o **p_mTitleNameLb; // x19
  struct UILabel_o *mTitleNameLb; // x21
  System_String_o **v115; // x8
  LocalizationManager_c *v116; // x0
  System_String_o **v117; // x9
  System_String_o *v118; // x25
  System_String_o *v119; // x0
  System_String_o *v120; // x1
  int32_t v121; // w21
  bool v122; // cc
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Transform_o *v124; // x0
  float v125; // s0
  float v126; // s1
  float v127; // s2
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  struct UnityEngine_GameObject_o *v134; // x1
  char v135; // w19
  QuestEntity_o *v136; // x28
  int32_t ServantId; // w21
  BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x26
  ServantEntity_o *v139; // x25
  UILabel_o *mTitleShortcutLb; // x21
  ServantStatusQuestBoardManager_o *v141; // x25
  const MethodInfo *v142; // x1
  bool v143; // w21
  __int64 endTime; // x21
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x25
  System_String_o *v146; // x28
  __int64 v147; // x1
  __int64 v148; // x2
  QuestBoardInformaionText_o *v149; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v150; // x27
  char v151; // w27
  int32_t questPhase; // w19
  int32_t PhaseMax; // w0
  int32_t v154; // w0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v155; // x21
  int32_t v156; // w1
  const MethodInfo *v157; // x7
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v158; // x19
  int size; // w8
  int v160; // w21
  System_String_array **v161; // x2
  System_String_array **v162; // x3
  System_Boolean_array **v163; // x4
  System_Int32_array **v164; // x5
  System_Int32_array *v165; // x6
  System_Int32_array *v166; // x7
  int32_t giftIconId; // w1
  char v168; // w19
  System_String_array **v169; // x2
  System_String_array **v170; // x3
  System_Boolean_array **v171; // x4
  System_Int32_array **v172; // x5
  System_Int32_array *v173; // x6
  System_Int32_array *v174; // x7
  __int64 v175; // x8
  struct GiftEntity_array *v176; // x22
  int v177; // w9
  int32_t *v178; // x9
  int32_t v179; // w1
  int v180; // w8
  int32_t v181; // w2
  System_String_o *v182; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v183; // x25
  Il2CppObject *BattleName; // x0
  int32_t v185; // w3
  __int64 v186; // x0
  WarEntity_o *v187; // [xsp+18h] [xbp-E8h]
  int64_t v188; // [xsp+20h] [xbp-E0h]
  int32_t limitCounta; // [xsp+28h] [xbp-D8h]
  int v190; // [xsp+2Ch] [xbp-D4h]
  _BOOL4 IsClear; // [xsp+30h] [xbp-D0h]
  char v192; // [xsp+34h] [xbp-CCh]
  UnityEngine_GameObject_o *v193; // [xsp+38h] [xbp-C8h]
  ServantStatusQuestBoardManager_o *v194; // [xsp+48h] [xbp-B8h]
  QuestEntity_o *questEntity; // [xsp+50h] [xbp-B0h]
  int32_t QuestType; // [xsp+5Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_int__o v197; // [xsp+60h] [xbp-A0h] BYREF
  int32_t fixedVal[2]; // [xsp+78h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v199; // [xsp+80h] [xbp-80h] BYREF
  UserQuestEntity_o *entity; // [xsp+98h] [xbp-68h] BYREF
  QuestReleaseEntity_o *questReleaseNG; // [xsp+A0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v202; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v203; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_421771E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, qinf);
    sub_B0D8A4(&AtlasManager_TypeInfo, v13);
    sub_B0D8A4(&CondType_TypeInfo, v14);
    sub_B0D8A4(&Method_DataManager_GetMasterData_GiftMaster___, v15);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestGroupMaster___, v17);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v18);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v19);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserQuestMaster___, v20);
    sub_B0D8A4(&DataManager_TypeInfo, v21);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v25);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v28);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v29);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, v30);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, v31);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v32);
    sub_B0D8A4(&NetworkManager_TypeInfo, v33);
    sub_B0D8A4(&QuestBoardInformaionText_TypeInfo, v34);
    sub_B0D8A4(&ServantStatusQuestBoardDraw_TypeInfo, v35);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36);
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v37);
    sub_B0D8A4(&Method_SingletonTemplate_QuestTree__get_Instance__, v38);
    sub_B0D8A4(&SingletonTemplate_QuestTree__TypeInfo, v39);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v40);
    sub_B0D8A4(&Method_ServantStatusQuestBoardDraw___c__DisplayClass53_0__SetItem_b__0__, v41);
    sub_B0D8A4(&Method_ServantStatusQuestBoardDraw___c__DisplayClass53_0__SetItem_b__1__, v42);
    sub_B0D8A4(&ServantStatusQuestBoardDraw___c__DisplayClass53_0_TypeInfo, v43);
    sub_B0D8A4(&StringLiteral_13452/*"TIME_REST_QUEST_BOARD_QUEST"*/, v44);
    sub_B0D8A4(&StringLiteral_23617/*"{0}"*/, v45);
    sub_B0D8A4(&StringLiteral_12083/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE2"*/, v46);
    sub_B0D8A4(&StringLiteral_12085/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT2"*/, v47);
    sub_B0D8A4(&StringLiteral_12084/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/, v48);
    sub_B0D8A4(&StringLiteral_1/*""*/, v49);
    sub_B0D8A4(&StringLiteral_12082/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE"*/, v50);
    sub_B0D8A4(&StringLiteral_12036/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/, v51);
    byte_421771E = 1;
  }
  entity = 0LL;
  questReleaseNG = 0LL;
  memset(&v199, 0, sizeof(v199));
  *(_QWORD *)fixedVal = 0LL;
  v52 = sub_B0D974(ServantStatusQuestBoardDraw___c__DisplayClass53_0_TypeInfo, qinf, beforeQuestInfo);
  ServantStatusQuestBoardDraw___c__DisplayClass53_0___ctor(
    (ServantStatusQuestBoardDraw___c__DisplayClass53_0_o *)v52,
    0LL);
  if ( !v52 )
    goto LABEL_263;
  *(_QWORD *)(v52 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v52 + 16), (System_Int32_array **)this, v54, v55, v56, v57, v58, v59);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !qinf )
    goto LABEL_263;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  v193 = inputMessageObject;
  limitCounta = limitCount;
  Master_WarQuestSelectionMaster = (int64_t)QuestGroupMaster__GetInterludeQuestIdList(
                                              (QuestGroupMaster_o *)Master_WarQuestSelectionMaster,
                                              qinf->fields.questId,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v197,
    (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v199 = v197;
  v194 = questBoardManager;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v199,
            (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v199.fields.current;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsQuestClear_25410236(current, -1, 0, 0LL) )
    {
      v61 = 1;
      goto LABEL_18;
    }
  }
  v61 = 0;
  current = 0;
LABEL_18:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v199,
    (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( !questBoardManager )
    goto LABEL_263;
  mListCreatedTime = questBoardManager->fields.mListCreatedTime;
  Mine = MapControl_QuestInfo__GetMine(qinf, 0LL);
  QuestType = MapControl_QuestInfo__GetQuestType(qinf, 0LL);
  v65 = (v61 & 1) != 0 || MapControl_QuestInfo__IsClear(qinf, 0LL);
  if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  }
  Master_WarQuestSelectionMaster = ServantStatusQuestBoardDraw__IsClose(qinf, v64);
  v72 = Master_WarQuestSelectionMaster;
  if ( beforeQuestInfo )
  {
    IsClear = MapControl_QuestInfo__IsClear(beforeQuestInfo, 0LL);
    if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    }
    Master_WarQuestSelectionMaster = ServantStatusQuestBoardDraw__IsClose(beforeQuestInfo, v73);
    v74 = Master_WarQuestSelectionMaster & 1;
    if ( !Mine )
      goto LABEL_263;
  }
  else
  {
    v74 = 0;
    IsClear = 1;
    if ( !Mine )
      goto LABEL_263;
  }
  id = Mine->fields.id;
  this->fields.qinf = qinf;
  this->fields.questId = id;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.qinf,
    (System_Int32_array **)qinf,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  warId = qinf->fields.warId;
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  Master_WarQuestSelectionMaster = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Master_WarQuestSelectionMaster, warId, 0LL);
  v78 = WarEntityByWarID;
  if ( WarEntityByWarID )
    v79 = !WarEntity__IsFolder(WarEntityByWarID, 0LL);
  else
    v79 = 0;
  v190 = v74;
  v188 = mListCreatedTime;
  *(_BYTE *)(v52 + 40) = v79;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  v80 = (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster;
  IsLimitCountSealQuest = ServantLimitImageMaster__IsLimitCountSealQuest(
                            (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster,
                            this->fields.questId,
                            0LL);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  Master_WarQuestSelectionMaster = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  v187 = v78;
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
  v83 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( current < 1 )
  {
    if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = NetworkManager__get_UserId(0LL);
    if ( !v83 )
      goto LABEL_263;
    questId = this->fields.questId;
    v84 = Master_WarQuestSelectionMaster;
    v85 = (UserQuestMaster_o *)v83;
  }
  else
  {
    if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = NetworkManager__get_UserId(0LL);
    if ( !v83 )
      goto LABEL_263;
    v84 = Master_WarQuestSelectionMaster;
    v85 = (UserQuestMaster_o *)v83;
    questId = current;
  }
  UserQuestMaster__TryGetEntity(v85, &entity, v84, questId, 0LL);
  if ( entity )
    HasStatus = UserQuestEntity__HasStatus(entity, 4, 0LL);
  else
    HasStatus = 0;
  if ( (IsLimitCountSealQuest & ~v65 & 1) != 0 )
  {
    IsCommonReleaseMultiClear = ServantLimitImageMaster__IsCommonReleaseMultiClear(v80, this->fields.questId, 0LL);
    v65 = IsCommonReleaseMultiClear;
    HasStatus &= !IsCommonReleaseMultiClear;
    if ( IsCommonReleaseMultiClear )
      closedMessageId = 0;
    v72 &= !IsCommonReleaseMultiClear;
  }
  v192 = HasStatus;
  v89 = v72 | v65;
  if ( ((v72 | v65) & 1) != 0 )
    *(UnityEngine_Color_o *)&v90 = UnityEngine_Color__get_gray(0LL);
  else
    *(UnityEngine_Color_o *)&v90 = UnityEngine_Color__get_white(0LL);
  *(_DWORD *)(v52 + 24) = v90;
  *(_DWORD *)(v52 + 28) = v91;
  *(_DWORD *)(v52 + 32) = v92;
  *(_DWORD *)(v52 + 36) = v93;
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleObj;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mOptionInfoLb;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  Master_WarQuestSelectionMaster = (int64_t)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardObj;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mAdvanceNoticeObj;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mCondObject;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
  mcBaseP = this->fields.mcBaseP;
  if ( !mcBaseP )
    goto LABEL_263;
  mAtlas = mcBaseP->fields.mAtlas;
  this->fields.basePanelAtlas = mAtlas;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.basePanelAtlas,
    (System_Int32_array **)mAtlas,
    v94,
    v95,
    v96,
    v97,
    v98,
    v99);
  v102 = this->fields.mcBaseP;
  Master_WarQuestSelectionMaster = (int64_t)ServantStatusQuestBoardDraw_TypeInfo;
  if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  }
  if ( !v102 )
    goto LABEL_263;
  UISprite__set_spriteName(v102, ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME, 0LL);
  if ( IsLimitCountSealQuest )
  {
    v105 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v103, v104);
    System_Action___ctor(
      v105,
      (Il2CppObject *)v52,
      Method_ServantStatusQuestBoardDraw___c__DisplayClass53_0__SetItem_b__0__,
      0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__LoadEventUI(v105, 1, 0LL);
  }
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mcBaseP;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Master_WarQuestSelectionMaster + 840LL))(
    Master_WarQuestSelectionMaster,
    *(_QWORD *)(*(_QWORD *)Master_WarQuestSelectionMaster + 848LL));
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mcBaseP;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v52 + 24), 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mLineSp;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mLineSp;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v52 + 24), 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitle2Sp;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  if ( (v65 & 1) != 0 )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_WarQuestSelectionMaster, 0, 0LL);
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleSp;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_263;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_WarQuestSelectionMaster, 0, 0LL);
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mLinkObj;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_263;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_WarQuestSelectionMaster, 1, 0LL);
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitle2Sp;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_263;
    UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v52 + 24), 0LL);
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleSp;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_263;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_WarQuestSelectionMaster, 1, 0LL);
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleSp;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_263;
    UISprite__set_atlas((UISprite_o *)Master_WarQuestSelectionMaster, this->fields.basePanelAtlas, 0LL);
    mTitleSp = this->fields.mTitleSp;
    if ( QuestType == 3 )
    {
      Master_WarQuestSelectionMaster = (int64_t)ServantStatusQuestBoardDraw_TypeInfo;
      if ( *(_BYTE *)(v52 + 40) )
      {
        if ( (WORD1(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
          Master_WarQuestSelectionMaster = (int64_t)ServantStatusQuestBoardDraw_TypeInfo;
        }
        v107 = (System_String_o **)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 88LL);
        if ( !mTitleSp )
          goto LABEL_263;
      }
      else
      {
        if ( (WORD1(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
          Master_WarQuestSelectionMaster = (int64_t)ServantStatusQuestBoardDraw_TypeInfo;
        }
        v107 = (System_String_o **)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 80LL);
        if ( !mTitleSp )
          goto LABEL_263;
      }
      UISprite__set_spriteName(mTitleSp, *v107, 0LL);
      if ( IsLimitCountSealQuest )
      {
        v110 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v108, v109);
        System_Action___ctor(
          v110,
          (Il2CppObject *)v52,
          Method_ServantStatusQuestBoardDraw___c__DisplayClass53_0__SetItem_b__1__,
          0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__LoadEventUI(v110, 1, 0LL);
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
        goto LABEL_263;
      UISprite__set_spriteName(
        mTitleSp,
        ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_SPRITE_NAME_RAINFORCEMENT,
        0LL);
    }
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleSp;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_263;
    (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Master_WarQuestSelectionMaster + 840LL))(
      Master_WarQuestSelectionMaster,
      *(_QWORD *)(*(_QWORD *)Master_WarQuestSelectionMaster + 848LL));
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleSp;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_263;
    UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v52 + 24), 0LL);
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mLinkObj;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_263;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mLinkObj;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_263;
    Master_WarQuestSelectionMaster = (int64_t)UnityEngine_GameObject__get_gameObject(
                                                (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                                0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_263;
    Master_WarQuestSelectionMaster = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_263;
    UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v52 + 24), 0LL);
  }
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mClearObj;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, v65 & 1, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mNoneLb;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !(v65 & 1 | IsClear) )
  {
    v112 = v72;
    p_mTitleNameLb = &this->fields.mTitleNameLb;
    mTitleNameLb = this->fields.mTitleNameLb;
    if ( QuestType == 3 )
    {
      v115 = (System_String_o **)&StringLiteral_12083/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE2"*/;
      v116 = LocalizationManager_TypeInfo;
      v117 = (System_String_o **)&StringLiteral_12082/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE"*/;
    }
    else
    {
      v115 = (System_String_o **)&StringLiteral_12085/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT2"*/;
      v116 = LocalizationManager_TypeInfo;
      v117 = (System_String_o **)&StringLiteral_12084/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/;
    }
    if ( !v190 )
      v115 = v117;
    v118 = *v115;
    if ( (BYTE3(v116->vtable._0_Equals.methodPtr) & 4) != 0 && !v116->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v116);
    v119 = v118;
    goto LABEL_144;
  }
  if ( closedMessageId < 1 )
  {
    if ( !questReleaseNG || questReleaseNG->fields.type != 8 )
    {
      Master_WarQuestSelectionMaster = (int64_t)QuestEntity__getQuestName(questEntity, 0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_263;
      v182 = (System_String_o *)Master_WarQuestSelectionMaster;
      if ( System_String__Contains(
             (System_String_o *)Master_WarQuestSelectionMaster,
             (System_String_o *)StringLiteral_23617/*"{0}"*/,
             0LL) )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v183 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
        Master_WarQuestSelectionMaster = QuestEntity__getServantId(questEntity, 0LL);
        if ( !v183 )
          goto LABEL_263;
        Master_WarQuestSelectionMaster = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    v183,
                                                    Master_WarQuestSelectionMaster,
                                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_263;
        v112 = v72;
        BattleName = (Il2CppObject *)ServantEntity__getBattleName(
                                       (ServantEntity_o *)Master_WarQuestSelectionMaster,
                                       0,
                                       -1,
                                       0LL);
        v182 = System_String__Format(v182, BattleName, 0LL);
      }
      else
      {
        v112 = v72;
      }
      p_mTitleNameLb = &this->fields.mTitleNameLb;
      Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleNameLb;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_263;
      v120 = v182;
      goto LABEL_146;
    }
    v112 = v72;
    p_mTitleNameLb = &this->fields.mTitleNameLb;
    mTitleNameLb = this->fields.mTitleNameLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v119 = (System_String_o *)StringLiteral_12036/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/;
LABEL_144:
    Master_WarQuestSelectionMaster = (int64_t)LocalizationManager__Get(v119, 0LL);
    if ( !mTitleNameLb )
      goto LABEL_263;
    v120 = (System_String_o *)Master_WarQuestSelectionMaster;
    Master_WarQuestSelectionMaster = (int64_t)mTitleNameLb;
LABEL_146:
    UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, v120, 0LL);
    goto LABEL_147;
  }
  v112 = v72;
  ServantStatusQuestBoardDraw__SetAdvanceNoticeText(
    this,
    closedMessageId,
    v187,
    questEntity,
    questReleaseNG,
    v188,
    v111);
  p_mTitleNameLb = &this->fields.mTitleNameLb;
LABEL_147:
  Master_WarQuestSelectionMaster = (int64_t)*p_mTitleNameLb;
  if ( !*p_mTitleNameLb )
    goto LABEL_263;
  v121 = *(_DWORD *)(Master_WarQuestSelectionMaster + 160);
  if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    Master_WarQuestSelectionMaster = (int64_t)*p_mTitleNameLb;
    if ( !*p_mTitleNameLb )
      goto LABEL_263;
  }
  v122 = v121 <= ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
  if ( v122 )
  {
    *(UnityEngine_Vector3_o *)&v125 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_263;
    v124 = transform;
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
      goto LABEL_263;
    v124 = transform;
    v125 = (float)ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH
         / (float)(*p_mTitleNameLb)->fields.mWidth;
    v126 = 1.0;
    v127 = 1.0;
  }
  UnityEngine_Transform__set_localScale(v124, *(UnityEngine_Vector3_o *)&v125, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)*p_mTitleNameLb;
  if ( !*p_mTitleNameLb )
    goto LABEL_263;
  UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v52 + 24), 0LL);
  if ( (v89 & 1) != 0 )
    v134 = 0LL;
  else
    v134 = v193;
  this->fields.inputMessageObject = v134;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.inputMessageObject,
    (System_Int32_array **)v134,
    v128,
    v129,
    v130,
    v131,
    v132,
    v133);
  v135 = v112;
  if ( QuestType != 3 )
  {
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleShortcutSp;
    v136 = questEntity;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_263;
    p_mOptionInfoLb = &this->fields.mOptionInfoLb;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_WarQuestSelectionMaster, 1, 0LL);
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleShortcutSp;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_263;
    UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v52 + 24), 0LL);
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleShortcutLb;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_263;
    goto LABEL_184;
  }
  v136 = questEntity;
  ServantId = QuestEntity__getServantId(questEntity, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)Master_WarQuestSelectionMaster,
                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  Master_WarQuestSelectionMaster = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                              ServantId,
                                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.mTitleShortcutSp )
    goto LABEL_263;
  v139 = (ServantEntity_o *)Master_WarQuestSelectionMaster;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mTitleShortcutSp, 0, 0LL);
  mTitleShortcutLb = this->fields.mTitleShortcutLb;
  if ( !v139 )
  {
    if ( !mTitleShortcutLb )
      goto LABEL_263;
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleShortcutLb;
LABEL_184:
    UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v141 = v194;
    goto LABEL_185;
  }
  Master_WarQuestSelectionMaster = (int64_t)ServantEntity__getName(v139, limitCounta, -1, 0LL);
  if ( !mTitleShortcutLb )
    goto LABEL_263;
  UILabel__set_text(mTitleShortcutLb, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleShortcutLb;
  v141 = v194;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v52 + 24), 0LL);
LABEL_185:
  ServantStatusQuestBoardDraw__ResetInfoTextList(this, v142);
  if ( (v65 & 1) != 0 )
  {
    v143 = 0;
  }
  else
  {
    fixedVal[0] = -1;
    fixedVal[1] = 0;
    endTime = qinf->fields.endTime;
    if ( endTime >= 1 && !QuestEntity__HasFlag(v136, 32LL, 0LL) )
    {
      mInfoTextList = this->fields.mInfoTextList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v146 = LocalizationManager__Get((System_String_o *)StringLiteral_13452/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
      v149 = (QuestBoardInformaionText_o *)sub_B0D974(QuestBoardInformaionText_TypeInfo, v147, v148);
      v203.fields.r = 0.0;
      v203.fields.g = 0.0;
      v203.fields.b = 0.0;
      v203.fields.a = 0.0;
      v202.fields.x = 0.0;
      v202.fields.y = 0.0;
      v202.fields.z = 0.0;
      v150 = (EventMissionProgressRequest_Argument_ProgressData_o *)v149;
      QuestBoardInformaionText___ctor(v149, v146, endTime, 0, 0, v203, -1, 0, v202, 1, 0LL, 0LL, 0LL);
      if ( !mInfoTextList )
        goto LABEL_263;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mInfoTextList,
        v150,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
      v141 = v194;
      v136 = questEntity;
    }
    v151 = v135;
    questPhase = qinf->fields.questPhase;
    PhaseMax = MapControl_QuestInfo__GetPhaseMax(qinf, 0LL);
    v154 = UnityEngine_Mathf__Min_40819044(questPhase + 1, PhaseMax, 0LL);
    v155 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.mInfoTextList;
    Master_WarQuestSelectionMaster = (int64_t)ServantStatusQuestBoardDraw__GetCampaignText(
                                                this,
                                                v156,
                                                v154,
                                                0,
                                                v141,
                                                &fixedVal[1],
                                                fixedVal,
                                                v157);
    if ( !v155 )
      goto LABEL_263;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      v155,
      (System_Collections_Generic_IEnumerable_T__o *)Master_WarQuestSelectionMaster,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
    v158 = this->fields.mInfoTextList;
    if ( !v158 )
      goto LABEL_263;
    size = v158->fields._size;
    if ( size < 1 )
    {
      v143 = 0;
      v135 = v151;
    }
    else
    {
      v160 = v141->fields.mAlphaAnimCnt % size;
      if ( size <= (unsigned int)v160 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      Master_WarQuestSelectionMaster = (int64_t)v158->fields._items->m_Items[v160];
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_263;
      QuestBoardInformaionText__SetTime(
        (QuestBoardInformaionText_o *)Master_WarQuestSelectionMaster,
        p_mOptionInfoLb,
        &this->fields.mOptionInfoFrameSp,
        0LL);
      Master_WarQuestSelectionMaster = (int64_t)this->fields.mOptionInfoLb;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_263;
      v135 = v151;
      BoardOptionTextWithIconComponent__set_Alpha(
        (BoardOptionTextWithIconComponent_o *)Master_WarQuestSelectionMaster,
        1.0,
        0LL);
      v143 = 1;
      qinf->fields.costCalcVal = fixedVal[1];
      qinf->fields._fixedCostVal_k__BackingField = fixedVal[0];
    }
  }
  Master_WarQuestSelectionMaster = (int64_t)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_263;
  Master_WarQuestSelectionMaster = (int64_t)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  Master_WarQuestSelectionMaster = (int64_t)UnityEngine_Transform__get_parent(
                                              (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  Master_WarQuestSelectionMaster = (int64_t)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, v143, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_263;
  Master_WarQuestSelectionMaster = (int64_t)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, v143, 0LL);
  this->fields.mRewardIconInfs = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.mRewardIconInfs, 0LL, v161, v162, v163, v164, v165, v166);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardIcon;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  Master_WarQuestSelectionMaster = (int64_t)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
  if ( (v135 & 1) == 0 || !QuestEntity__HasFlag(v136, 4096LL, 0LL) )
  {
    giftIconId = v136->fields.giftIconId;
    if ( giftIconId >= 1 )
    {
      Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardIcon;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_263;
      goto LABEL_217;
    }
    if ( v136->fields.giftId < 1 )
    {
      Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardObj;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_263;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
      v168 = v192;
      goto LABEL_220;
    }
    Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_263;
    Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)Master_WarQuestSelectionMaster,
                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_263;
    Master_WarQuestSelectionMaster = (int64_t)GiftMaster__GetGiftListById(
                                                (GiftMaster_o *)Master_WarQuestSelectionMaster,
                                                v136->fields.giftId,
                                                0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_263;
    v175 = *(_QWORD *)(Master_WarQuestSelectionMaster + 24);
    v168 = v192;
    v176 = (struct GiftEntity_array *)Master_WarQuestSelectionMaster;
    if ( !v175 )
    {
LABEL_261:
      this->fields.mRewardIconInfs = v176;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.mRewardIconInfs,
        (System_Int32_array **)v176,
        v169,
        v170,
        v171,
        v172,
        v173,
        v174);
      goto LABEL_220;
    }
    v177 = v141->fields.mAlphaAnimCnt % (int)v175;
    if ( v177 >= (unsigned int)v175 )
    {
      v186 = sub_B0D9A8(Master_WarQuestSelectionMaster);
      sub_B0D948(v186, 0LL);
    }
    v178 = *(int32_t **)(Master_WarQuestSelectionMaster + 8LL * v177 + 32);
    if ( v178 )
    {
      v179 = v178[11];
      Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardIcon;
      v180 = v178[7];
      if ( v179 < 1 )
      {
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_263;
        v185 = v180 <= 1 ? -1 : v178[7];
        ItemIconComponent__SetGift(
          (ItemIconComponent_o *)Master_WarQuestSelectionMaster,
          v178[5],
          v178[6],
          v185,
          0,
          0LL);
      }
      else
      {
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_263;
        v181 = v180 <= 1 ? -1 : v178[7];
        ItemIconComponent__SetItemImage_26857580((ItemIconComponent_o *)Master_WarQuestSelectionMaster, v179, v181, 0LL);
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
          goto LABEL_261;
        }
      }
    }
LABEL_263:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardIcon;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  giftIconId = 99;
LABEL_217:
  ItemIconComponent__SetItemImage((ItemIconComponent_o *)Master_WarQuestSelectionMaster, giftIconId, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardIcon;
  v168 = v192;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  Master_WarQuestSelectionMaster = (int64_t)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
LABEL_220:
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardObj;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  Master_WarQuestSelectionMaster = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v52 + 24), 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardIcon;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  ItemIconComponent__SetColor(
    (ItemIconComponent_o *)Master_WarQuestSelectionMaster,
    *(UnityEngine_Color_o *)(v52 + 24),
    0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardGetSP;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  Master_WarQuestSelectionMaster = (int64_t)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
    v65 & (v168 ^ 1) & 1,
    0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardGetSP;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_263;
  UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v52 + 24), 0LL);
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
      sub_B0D97C(0LL);
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
  if ( (byte_4217720 & 1) == 0 )
  {
    this = (ServantStatusQuestBoardDraw_o *)sub_B0D8A4(
                                              &Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__,
                                              qinf);
    byte_4217720 = 1;
  }
  mInfoTextList = v7->fields.mInfoTextList;
  if ( !mInfoTextList )
    goto LABEL_8;
  if ( mInfoTextList->fields._size <= (unsigned int)strIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  this = (ServantStatusQuestBoardDraw_o *)mInfoTextList->fields._items->m_Items[strIndex];
  if ( !this )
LABEL_8:
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  ServantStatusQuestBoardDraw__SetInfoTextAlpha(
    this,
    questBoardManager->fields.mAlphaAnimNow,
    (const MethodInfo *)questBoardManager);
  ServantStatusQuestBoardDraw__SetRewardIconAlpha(this, questBoardManager->fields.mAlphaAnimNow, v5);
}


void __fastcall ServantStatusQuestBoardDraw___SetAdvanceNoticeText_g__CalculateLabel_59_0(
        UILabel_o *label,
        System_String_o *message,
        int32_t baseHeight,
        const MethodInfo *method)
{
  UILabel_o *v6; // x19
  int mHeight; // w21
  ServantStatusQuestBoardDraw_c *v8; // x0
  float v9; // s8
  UnityEngine_Transform_o *transform; // x20
  float v11; // s0
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  v6 = label;
  if ( (byte_421772B & 1) == 0 )
  {
    label = (UILabel_o *)sub_B0D8A4(&ServantStatusQuestBoardDraw_TypeInfo, message);
    byte_421772B = 1;
  }
  if ( !v6 )
    goto LABEL_10;
  UILabel__set_text(v6, message, 0LL);
  UILabel__AssumeNaturalSize(v6, 0LL);
  mHeight = v6->fields.mHeight;
  UIWidget__set_height((UIWidget_o *)v6, baseHeight, 0LL);
  v8 = ServantStatusQuestBoardDraw_TypeInfo;
  if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    v8 = ServantStatusQuestBoardDraw_TypeInfo;
  }
  UILabel__SetCondensedScale(v6, v8->static_fields->ADVANCE_NOTICE_BASE_WIDTH, 0LL);
  v9 = UnityEngine_Mathf__Clamp(1.0 - (float)((float)baseHeight / (float)mHeight), 0.0, 1.0, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v6, 0LL);
  label = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v6, 0LL);
  if ( !label
    || (LODWORD(v11) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)label, 0LL),
        !transform) )
  {
LABEL_10:
    sub_B0D97C(label);
  }
  v12.fields.y = 1.0;
  v12.fields.x = v9 + v11;
  v12.fields.z = 1.0;
  UnityEngine_Transform__set_localScale(transform, v12, 0LL);
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
        v6 = sub_B0D9A8(this);
        sub_B0D948(v6, 0LL);
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
    sub_B0D97C(this);
  }
  return 0LL;
}


void __fastcall ServantStatusQuestBoardDraw___c__DisplayClass53_0___ctor(
        ServantStatusQuestBoardDraw___c__DisplayClass53_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusQuestBoardDraw___c__DisplayClass53_0___SetItem_b__0(
        ServantStatusQuestBoardDraw___c__DisplayClass53_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *_4__this; // x20
  UISprite_o *v6; // x0
  struct ServantStatusQuestBoardDraw_o *v7; // x8
  UnityEngine_Object_o *mcBaseP; // x20
  struct ServantStatusQuestBoardDraw_o *v9; // x8
  UISprite_o *v10; // x20
  ServantStatusQuestBoardDraw_c *v11; // x0
  System_String_o *BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME; // x21
  struct ServantStatusQuestBoardDraw_o *v13; // x9
  char v14; // w8
  struct ServantStatusQuestBoardDraw_o *v15; // x8
  UISprite_o *v16; // x20
  struct ServantStatusQuestBoardDraw_o *v17; // x8
  struct ServantStatusQuestBoardDraw_o *v18; // x8

  if ( (byte_4212277 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&ServantStatusQuestBoardDraw_TypeInfo, v4);
    byte_4212277 = 1;
  }
  _4__this = (UnityEngine_Object_o *)this->fields.__4__this;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (UISprite_o *)UnityEngine_Object__op_Equality(_4__this, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    v7 = this->fields.__4__this;
    if ( v7 )
    {
      mcBaseP = (UnityEngine_Object_o *)v7->fields.mcBaseP;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v6 = (UISprite_o *)UnityEngine_Object__op_Equality(mcBaseP, 0LL, 0LL);
      if ( ((unsigned __int8)v6 & 1) != 0 )
        return;
      v9 = this->fields.__4__this;
      if ( v9 )
      {
        v10 = v9->fields.mcBaseP;
        v11 = ServantStatusQuestBoardDraw_TypeInfo;
        if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
          v11 = ServantStatusQuestBoardDraw_TypeInfo;
        }
        BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME = v11->static_fields->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        v6 = (UISprite_o *)AtlasManager__SetEventUI(v10, BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME, 0LL);
        v13 = this->fields.__4__this;
        if ( v13 )
        {
          v14 = (char)v6;
          v6 = v13->fields.mcBaseP;
          if ( (v14 & 1) != 0 )
          {
            if ( !v6 )
              goto LABEL_35;
          }
          else
          {
            if ( !v6 )
              goto LABEL_35;
            UISprite__set_atlas(v6, v13->fields.basePanelAtlas, 0LL);
            v15 = this->fields.__4__this;
            if ( !v15 )
              goto LABEL_35;
            v6 = (UISprite_o *)ServantStatusQuestBoardDraw_TypeInfo;
            v16 = v15->fields.mcBaseP;
            if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
            }
            if ( !v16 )
              goto LABEL_35;
            UISprite__set_spriteName(
              v16,
              ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME,
              0LL);
            v17 = this->fields.__4__this;
            if ( !v17 )
              goto LABEL_35;
            v6 = v17->fields.mcBaseP;
            if ( !v6 )
              goto LABEL_35;
          }
          v6 = (UISprite_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
                               v6,
                               v6->klass->vtable._34_get_minWidth.methodPtr);
          v18 = this->fields.__4__this;
          if ( v18 )
          {
            v6 = v18->fields.mcBaseP;
            if ( v6 )
            {
              UIWidget__set_color((UIWidget_o *)v6, this->fields.baseCol, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_35:
    sub_B0D97C(v6);
  }
}


void __fastcall ServantStatusQuestBoardDraw___c__DisplayClass53_0___SetItem_b__1(
        ServantStatusQuestBoardDraw___c__DisplayClass53_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *_4__this; // x20
  UISprite_o *v6; // x0
  struct ServantStatusQuestBoardDraw_o *v7; // x8
  UnityEngine_Object_o *mTitleSp; // x20
  struct ServantStatusQuestBoardDraw_o *v9; // x8
  UISprite_o *v10; // x20
  ServantStatusQuestBoardDraw_c *v11; // x0
  System_String_o *TITLE_SPRITE_NAME_LIMIT_UNSEAL; // x21
  struct ServantStatusQuestBoardDraw_o *v13; // x9
  char v14; // w8
  struct ServantStatusQuestBoardDraw_o *v15; // x8
  UISprite_o *v16; // x20
  System_String_o **p_delegates; // x8
  struct ServantStatusQuestBoardDraw_o *v18; // x8
  struct ServantStatusQuestBoardDraw_o *v19; // x8

  if ( (byte_4212278 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&ServantStatusQuestBoardDraw_TypeInfo, v4);
    byte_4212278 = 1;
  }
  _4__this = (UnityEngine_Object_o *)this->fields.__4__this;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (UISprite_o *)UnityEngine_Object__op_Equality(_4__this, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    v7 = this->fields.__4__this;
    if ( v7 )
    {
      mTitleSp = (UnityEngine_Object_o *)v7->fields.mTitleSp;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v6 = (UISprite_o *)UnityEngine_Object__op_Equality(mTitleSp, 0LL, 0LL);
      if ( ((unsigned __int8)v6 & 1) != 0 )
        return;
      v9 = this->fields.__4__this;
      if ( v9 )
      {
        v10 = v9->fields.mTitleSp;
        v11 = ServantStatusQuestBoardDraw_TypeInfo;
        if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
          v11 = ServantStatusQuestBoardDraw_TypeInfo;
        }
        TITLE_SPRITE_NAME_LIMIT_UNSEAL = v11->static_fields->TITLE_SPRITE_NAME_LIMIT_UNSEAL;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        v6 = (UISprite_o *)AtlasManager__SetEventUI(v10, TITLE_SPRITE_NAME_LIMIT_UNSEAL, 0LL);
        v13 = this->fields.__4__this;
        if ( v13 )
        {
          v14 = (char)v6;
          v6 = v13->fields.mTitleSp;
          if ( (v14 & 1) != 0 )
          {
            if ( !v6 )
              goto LABEL_41;
          }
          else
          {
            if ( !v6 )
              goto LABEL_41;
            UISprite__set_atlas(v6, v13->fields.basePanelAtlas, 0LL);
            v15 = this->fields.__4__this;
            if ( !v15 )
              goto LABEL_41;
            v6 = (UISprite_o *)ServantStatusQuestBoardDraw_TypeInfo;
            v16 = v15->fields.mTitleSp;
            if ( this->fields.isMap )
            {
              if ( (WORD1(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
                v6 = (UISprite_o *)ServantStatusQuestBoardDraw_TypeInfo;
              }
              p_delegates = (System_String_o **)&v6->fields.onPostFill[1];
              if ( !v16 )
                goto LABEL_41;
            }
            else
            {
              if ( (WORD1(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
                v6 = (UISprite_o *)ServantStatusQuestBoardDraw_TypeInfo;
              }
              p_delegates = (System_String_o **)&v6->fields.onPostFill->fields.delegates;
              if ( !v16 )
                goto LABEL_41;
            }
            UISprite__set_spriteName(v16, *p_delegates, 0LL);
            v18 = this->fields.__4__this;
            if ( !v18 )
              goto LABEL_41;
            v6 = v18->fields.mTitleSp;
            if ( !v6 )
              goto LABEL_41;
          }
          v6 = (UISprite_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
                               v6,
                               v6->klass->vtable._34_get_minWidth.methodPtr);
          v19 = this->fields.__4__this;
          if ( v19 )
          {
            v6 = v19->fields.mTitleSp;
            if ( v6 )
            {
              UIWidget__set_color((UIWidget_o *)v6, this->fields.baseCol, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_41:
    sub_B0D97C(v6);
  }
}