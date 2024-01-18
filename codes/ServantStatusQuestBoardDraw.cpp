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

  if ( (byte_418A81F & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusQuestBoardDraw_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_19476/*"img_conductor_03"*/, v8);
    sub_B2C35C(&StringLiteral_19477/*"img_conductor_04"*/, v9);
    sub_B2C35C(&StringLiteral_19475/*"img_conductor_02"*/, v10);
    sub_B2C35C(&StringLiteral_17172/*"caldeagate_notice_{0:00}"*/, v11);
    sub_B2C35C(&StringLiteral_19573/*"img_questboard_1001"*/, v12);
    sub_B2C35C(&StringLiteral_19474/*"img_conductor_01"*/, v13);
    sub_B2C35C(&StringLiteral_19478/*"img_conductor_questboard"*/, v14);
    sub_B2C35C(&StringLiteral_19470/*"img_commonbg"*/, v15);
    byte_418A81F = 1;
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
  v20 = (System_Int32_array **)StringLiteral_19470/*"img_commonbg"*/;
  v19->DARK_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_19470/*"img_commonbg"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v19->DARK_BOARD_SPRITE_NAME, v20, v2, v3, v4, v5, v6, v7);
  v21 = ServantStatusQuestBoardDraw_TypeInfo;
  ServantStatusQuestBoardDraw_TypeInfo->static_fields->DARK_BOARD_WIDTH = 496;
  v21->static_fields->DARK_BOARD_HIGHT = 122;
  v22 = v21->static_fields;
  v23 = (System_Int32_array **)StringLiteral_19478/*"img_conductor_questboard"*/;
  v22->BASE_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_19478/*"img_conductor_questboard"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v22->BASE_BOARD_SPRITE_NAME, v23, v24, v25, v26, v27, v28, v29);
  v30 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v31 = (System_Int32_array **)StringLiteral_19475/*"img_conductor_02"*/;
  v30->TITLE_SPRITE_NAME_INTERLUDE = (struct System_String_o *)StringLiteral_19475/*"img_conductor_02"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v30->TITLE_SPRITE_NAME_INTERLUDE, v31, v32, v33, v34, v35, v36, v37);
  v38 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v39 = (System_Int32_array **)StringLiteral_19474/*"img_conductor_01"*/;
  v38->TITLE_SPRITE_NAME_INTERLUDE_MAP = (struct System_String_o *)StringLiteral_19474/*"img_conductor_01"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v38->TITLE_SPRITE_NAME_INTERLUDE_MAP, v39, v40, v41, v42, v43, v44, v45);
  v46 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v47 = (System_Int32_array **)StringLiteral_19476/*"img_conductor_03"*/;
  v46->TITLE_SPRITE_NAME_RAINFORCEMENT = (struct System_String_o *)StringLiteral_19476/*"img_conductor_03"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v46->TITLE_SPRITE_NAME_RAINFORCEMENT, v47, v48, v49, v50, v51, v52, v53);
  v54 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v55 = (System_Int32_array **)StringLiteral_17172/*"caldeagate_notice_{0:00}"*/;
  v54->QUEST_BOARD_INFO_FRAME_NAME = (struct System_String_o *)StringLiteral_17172/*"caldeagate_notice_{0:00}"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v54->QUEST_BOARD_INFO_FRAME_NAME, v55, v56, v57, v58, v59, v60, v61);
  v62 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v63 = (System_Int32_array **)StringLiteral_19573/*"img_questboard_1001"*/;
  v62->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME = (struct System_String_o *)StringLiteral_19573/*"img_questboard_1001"*/;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v62->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  v70 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v71 = (System_Int32_array **)StringLiteral_19477/*"img_conductor_04"*/;
  v70->TITLE_SPRITE_NAME_LIMIT_UNSEAL = (struct System_String_o *)StringLiteral_19477/*"img_conductor_04"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v70->TITLE_SPRITE_NAME_LIMIT_UNSEAL, v71, v72, v73, v74, v75, v76, v77);
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
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x8
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v9; // x21
  int32_t v10; // w20
  MapControl_QuestInfo_o *v11; // x1
  int64_t Time; // x3
  const MethodInfo *v13; // x4
  ServantStatusQuestBoardDraw_o *v14; // x0
  int32_t v15; // w2

  v5 = this;
  if ( (byte_418A817 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, qinf);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, v6);
    this = (ServantStatusQuestBoardDraw_o *)sub_B2C35C(&NetworkManager_TypeInfo, v7);
    byte_418A817 = 1;
  }
  if ( (byte_418A818 & 1) == 0 )
  {
    this = (ServantStatusQuestBoardDraw_o *)sub_B2C35C(
                                              &Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__,
                                              qinf);
    byte_418A818 = 1;
  }
  mInfoTextList = v5->fields.mInfoTextList;
  if ( mInfoTextList )
  {
    qinf = (MapControl_QuestInfo_o *)(unsigned int)mInfoTextList->fields._size;
    if ( (int)qinf >= 2 )
    {
      if ( questBoardManagerer )
      {
        this = (ServantStatusQuestBoardDraw_o *)ServantStatusQuestBoardManager__GetAlphaAnimCnt(
                                                  questBoardManagerer,
                                                  (int32_t)qinf,
                                                  0LL);
        v9 = v5->fields.mInfoTextList;
        if ( v9 )
        {
          v10 = (int)this;
          if ( v9->fields._size <= (unsigned int)this )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          this = (ServantStatusQuestBoardDraw_o *)v9->fields._items->m_Items[(int)this];
          if ( this )
          {
            if ( QuestBoardInformaionText__ChangeText(
                   (QuestBoardInformaionText_o *)this,
                   &v5->fields.mOptionInfoLb,
                   0LL) )
            {
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              Time = NetworkManager__getTime(0LL);
              v14 = v5;
              v15 = v10;
LABEL_27:
              ServantStatusQuestBoardDraw__UpdateInfoText(v14, v11, v15, Time, v13);
              return;
            }
            return;
          }
        }
      }
LABEL_29:
      sub_B2C434(this, qinf);
    }
  }
  if ( (byte_418A819 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, qinf);
    byte_418A819 = 1;
    mInfoTextList = v5->fields.mInfoTextList;
  }
  if ( !mInfoTextList || !mInfoTextList->fields._size )
    return;
  this = (ServantStatusQuestBoardDraw_o *)mInfoTextList->fields._items->m_Items[0];
  if ( !this )
    goto LABEL_29;
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
    goto LABEL_27;
  }
}


void __fastcall ServantStatusQuestBoardDraw__ChangeNextRewardIcon(
        ServantStatusQuestBoardDraw_o *this,
        ServantStatusQuestBoardManager_o *questBoardManager,
        const MethodInfo *method)
{
  struct GiftEntity_array *mRewardIconInfs; // x20
  int32_t max_length; // w8
  ServantStatusQuestBoardDraw_o *v5; // x19
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
  v5 = this;
  this = (ServantStatusQuestBoardDraw_o *)ServantStatusQuestBoardManager__GetAlphaAnimCnt(
                                            questBoardManager,
                                            max_length,
                                            0LL);
  if ( (unsigned int)this >= mRewardIconInfs->max_length )
  {
    v10 = sub_B2C460(this);
    sub_B2C400(v10, 0LL);
  }
  v6 = mRewardIconInfs->m_Items[(int)this];
  if ( !v6 )
    goto LABEL_18;
  questBoardManager = (ServantStatusQuestBoardManager_o *)(unsigned int)v6->fields.prioredIconId;
  this = (ServantStatusQuestBoardDraw_o *)v5->fields.mRewardIcon;
  num = v6->fields.num;
  if ( (int)questBoardManager >= 1 )
  {
    if ( this )
    {
      if ( num <= 1 )
        v8 = -1;
      else
        v8 = v6->fields.num;
      ItemIconComponent__SetItemImage_27396332((ItemIconComponent_o *)this, (int32_t)questBoardManager, v8, 0LL);
      return;
    }
LABEL_18:
    sub_B2C434(this, questBoardManager);
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
  QuestBoardInformaionText_o *v30; // x0
  QuestPhaseEntity_o *entity; // [xsp+28h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v33; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418A81C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_QuestPhaseMaster___, questEntity);
    sub_B2C35C(&DataManager_TypeInfo, v16);
    sub_B2C35C(&LocalizationManager_TypeInfo, v17);
    sub_B2C35C(&QuestBoardInformaionText_TypeInfo, v18);
    sub_B2C35C(&StringLiteral_23539/*"{0}"*/, v19);
    this = (ServantStatusQuestBoardDraw_o *)sub_B2C35C(&StringLiteral_13405/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, v20);
    byte_418A81C = 1;
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
        this = (ServantStatusQuestBoardDraw_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
      sub_B2C434(this, questEntity);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_13405/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0LL);
  EventName = (Il2CppObject *)EventEntity__getEventName(eventEnt, 0LL);
  v28 = System_String__Format_44301068(v26, EventName, (Il2CppObject *)StringLiteral_23539/*"{0}"*/, 0LL);
  EndTime = EventEntity__GetEndTime(eventEnt, 0, 0LL);
  v30 = (QuestBoardInformaionText_o *)sub_B2C42C(QuestBoardInformaionText_TypeInfo);
  v34.fields.r = 0.0;
  v34.fields.g = 0.0;
  v34.fields.b = 0.0;
  v34.fields.a = 0.0;
  v33.fields.x = 0.0;
  v33.fields.y = 0.0;
  v33.fields.z = 0.0;
  v23 = v30;
  QuestBoardInformaionText___ctor(v30, v28, EndTime, 1, 0, v34, -1, 0, v33, 0, 0LL, 0LL, 0LL);
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
  __int64 v29; // x1
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v31; // x20
  int64_t endedAt; // x20
  System_String_o *EventName; // x21
  System_String_o *v34; // x0
  System_String_o *v35; // x21
  QuestBoardInformaionText_o *v36; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x22
  WarEntity_o *entity; // [xsp+28h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v40; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418A81A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&quest_id);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v14);
    sub_B2C35C(&DataManager_TypeInfo, v15);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__, v19);
    sub_B2C35C(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo, v20);
    sub_B2C35C(&LocalizationManager_TypeInfo, v21);
    sub_B2C35C(&QuestBoardInformaionText_TypeInfo, v22);
    sub_B2C35C(&StringLiteral_23539/*"{0}"*/, v23);
    sub_B2C35C(&StringLiteral_80/*" "*/, v24);
    sub_B2C35C(&StringLiteral_13410/*"TIME_REST_STRING"*/, v25);
    byte_418A81A = 1;
  }
  entity = 0LL;
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
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
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  if ( !questBoardManager || !CampaignTextListByEventQuestMaster )
    goto LABEL_24;
  EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                             (QuestReleaseOverwriteMaster_o *)CampaignTextListByEventQuestMaster,
                             this->fields.questId,
                             questBoardManager->fields.mListCreatedTime,
                             0LL);
  if ( !EntityByQuestIdAndTime )
    return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v26;
  v31 = EntityByQuestIdAndTime;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !CampaignTextListByEventQuestMaster )
    goto LABEL_24;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)CampaignTextListByEventQuestMaster,
          &entity,
          v31->fields.eventId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v26;
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)entity;
  if ( !entity )
LABEL_24:
    sub_B2C434(CampaignTextListByEventQuestMaster, v29);
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
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_13410/*"TIME_REST_STRING"*/, 0LL);
    v35 = System_String__Concat_44308944(
            EventName,
            (System_String_o *)StringLiteral_80/*" "*/,
            v34,
            (System_String_o *)StringLiteral_23539/*"{0}"*/,
            0LL);
    v36 = (QuestBoardInformaionText_o *)sub_B2C42C(QuestBoardInformaionText_TypeInfo);
    v41.fields.r = 0.0;
    v41.fields.g = 0.0;
    v41.fields.b = 0.0;
    v41.fields.a = 0.0;
    v40.fields.x = 0.0;
    v40.fields.y = 0.0;
    v40.fields.z = 0.0;
    v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)v36;
    QuestBoardInformaionText___ctor(v36, v35, endedAt, 0, 0, v41, -1, 0, v40, 1, 0LL, 0LL, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v26,
      v37,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
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
  __int64 v23; // x1
  DataManager_o *v24; // x24
  EventCampaignMaster_o *MasterData_WarQuestSelectionMaster; // x25
  int64_t mListCreatedTime; // x28
  QuestEntity_o *v27; // x27
  int v28; // w8
  void *v29; // x26
  unsigned int v30; // w19
  EventEntity_o *v31; // x28
  __int64 v33; // x0
  const MethodInfo *v34; // [xsp+0h] [xbp-70h]
  bool v35; // [xsp+14h] [xbp-5Ch]

  if ( (byte_418A81B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCampaignMaster___, *(_QWORD *)&questId);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventQuestMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v15);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__, v18);
    sub_B2C35C(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    byte_418A81B = 1;
  }
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v35 = isQuestNoneCleared;
  v24 = (DataManager_o *)Instance;
  MasterData_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               v24,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               questId,
               (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !questBoardManager )
    goto LABEL_19;
  mListCreatedTime = questBoardManager->fields.mListCreatedTime;
  v27 = (QuestEntity_o *)Instance;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               v24,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventQuestMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = EventQuestMaster__GetEnabledEventCampaignForQuest(
               (EventQuestMaster_o *)Instance,
               questId,
               phase,
               mListCreatedTime,
               0LL);
  if ( !Instance )
    goto LABEL_19;
  v28 = *((_DWORD *)Instance + 6);
  v29 = Instance;
  if ( v28 >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      if ( v30 >= v28 )
      {
        v33 = sub_B2C460(Instance);
        sub_B2C400(v33, 0LL);
      }
      v31 = (EventEntity_o *)*((_QWORD *)v29 + (int)v30 + 4);
      if ( !v31 || !MasterData_WarQuestSelectionMaster )
        break;
      Instance = EventCampaignMaster__getData(MasterData_WarQuestSelectionMaster, v31->fields.id, 0LL);
      if ( Instance )
      {
        Instance = ServantStatusQuestBoardDraw__CreateQuestBoardInformationText(
                     this,
                     v27,
                     v31,
                     (EventCampaignEntity_o *)Instance,
                     phase,
                     v35,
                     costCalcVal,
                     fixedVal,
                     v34);
        if ( Instance )
        {
          if ( !v21 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v21,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
        }
      }
      v28 = *((_DWORD *)v29 + 6);
      if ( (int)++v30 >= v28 )
        return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v21;
    }
LABEL_19:
    sub_B2C434(Instance, v23);
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
  __int64 v18; // x1
  struct MapControl_SpotInfo_o *SpotInfo_k__BackingField; // x8
  QuestReleaseOverwriteMaster_o *Master_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  __int64 v24; // x1
  QuestReleaseEntity_o *v25; // x0
  MapControl_WarInfo_o *v26; // x20
  __int64 v27; // x8
  __int64 v28; // x23
  __int64 v29; // x8
  int32_t v30; // w19
  int32_t v31; // w22
  int64_t v32; // x21
  __int64 v33; // x0
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_418A811 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestReleaseMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v14);
    sub_B2C35C(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v15);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v16);
    byte_418A811 = 1;
  }
  entityList = 0LL;
  memset(&v35, 0, sizeof(v35));
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
  Master_WarQuestSelectionMaster = (QuestReleaseOverwriteMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v22;
  if ( !Master_WarQuestSelectionMaster )
LABEL_53:
    sub_B2C434(IsQuestReleaseAll, v18);
  if ( !QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
          Master_WarQuestSelectionMaster,
          &entityList,
          qinf->fields.questId,
          0LL,
          0LL) )
    goto LABEL_57;
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  IsQuestReleaseAll = (MapControl_WarInfo_o *)entityList;
  if ( !entityList )
    goto LABEL_53;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v34,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entityList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
  v35 = v34;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v35,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
  {
    if ( !v35.fields.current )
      sub_B2C434(0LL, v24);
    v25 = QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
            (QuestReleaseOverwriteEntity_o *)v35.fields.current,
            0LL);
    if ( !v23 )
      sub_B2C434(v25, v25);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v23,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v35,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
  if ( !v23 )
    goto LABEL_53;
  IsQuestReleaseAll = (MapControl_WarInfo_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                                                (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
  v26 = IsQuestReleaseAll;
  if ( !IsQuestReleaseAll )
  {
LABEL_57:
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    IsQuestReleaseAll = (MapControl_WarInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestReleaseMaster___);
    if ( !IsQuestReleaseAll )
      goto LABEL_53;
    IsQuestReleaseAll = (MapControl_WarInfo_o *)QuestReleaseMaster__getListByQuestID(
                                                  (QuestReleaseMaster_o *)IsQuestReleaseAll,
                                                  qinf->fields.questId,
                                                  0LL);
    v26 = IsQuestReleaseAll;
  }
  if ( !v26 )
    goto LABEL_53;
  v27 = *(_QWORD *)&v26->fields.status;
  if ( !v27 )
    return qinf->fields.dispType != 1;
  if ( (int)v27 >= 1 )
  {
    v28 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v28 >= (unsigned int)v27 )
      {
        v33 = sub_B2C460(IsQuestReleaseAll);
        sub_B2C400(v33, 0LL);
      }
      v29 = *((_QWORD *)&v26->fields.mapInfoList + v28);
      if ( !v29 )
        break;
      v31 = *(_DWORD *)(v29 + 20);
      v30 = *(_DWORD *)(v29 + 24);
      v32 = *(_QWORD *)(v29 + 32);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestReleaseAll = (MapControl_WarInfo_o *)CondType__IsOpen(v31, v30, v32, 0, 0LL);
      if ( ((unsigned __int8)IsQuestReleaseAll & 1) == 0 )
        return 1;
      LODWORD(v27) = v26->fields.status;
      if ( (int)++v28 >= (int)v27 )
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

  if ( (byte_418A819 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, method);
    byte_418A819 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  return !mInfoTextList || mInfoTextList->fields._size == 0;
}


bool __fastcall ServantStatusQuestBoardDraw__IsMultiInfoText(
        ServantStatusQuestBoardDraw_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x8

  if ( (byte_418A818 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, method);
    byte_418A818 = 1;
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
  __int64 v8; // x1
  bool HasFlag; // w0
  bool v10; // w21
  QuestRestrictionInfoEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418A81D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_QuestRestrictionInfoMaster___, questEntity);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    byte_418A81D = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
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
        v10 = !HasFlag;
        return v10 & ~QuestEntity__HasFlag_23879348(questEntity, 2LL, phase, 0LL) & 1;
      }
LABEL_18:
      sub_B2C434(Master_WarQuestSelectionMaster, v8);
    }
  }
  else if ( !QuestEntity__HasFlag_23879348(questEntity, 0x80000LL, phase, 0LL) )
  {
    HasFlag = QuestEntity__HasFlag_23879348(questEntity, 0x100000LL, phase, 0LL);
    goto LABEL_16;
  }
  v10 = 0;
  return v10 & ~QuestEntity__HasFlag_23879348(questEntity, 2LL, phase, 0LL) & 1;
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
  __int64 v10; // x1
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418A81E & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_9974/*"OnClickServantQuest"*/, v5);
    byte_418A81E = 1;
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
    v11 = questId;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
    if ( !v8 )
      sub_B2C434(v9, v10);
    UnityEngine_GameObject__SendMessage_40660472(v8, (System_String_o *)StringLiteral_9974/*"OnClickServantQuest"*/, v9, 0LL);
  }
}


void __fastcall ServantStatusQuestBoardDraw__ResetInfoTextList(
        ServantStatusQuestBoardDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v5; // x0
  BattleServantConfConponent_o *p_mInfoTextList; // x19
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // t1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_418A815 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Clear__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo, v4);
    byte_418A815 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  p_mInfoTextList = (BattleServantConfConponent_o *)&this->fields.mInfoTextList;
  v5 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)mInfoTextList;
  if ( mInfoTextList )
  {
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      v5,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Clear__);
  }
  else
  {
    v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v8,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
    p_mInfoTextList->klass = (BattleServantConfConponent_c *)v8;
    sub_B2C2F8(p_mInfoTextList, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
  }
}


void __fastcall ServantStatusQuestBoardDraw__SetDark(ServantStatusQuestBoardDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UISprite_o *mcBaseP; // x20
  UIWidget_o *mLineSp; // x0
  UILabel_o *mNoneLb; // x20
  const MethodInfo *v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct MapControl_QuestInfo_o **p_qinf; // x19
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_418A812 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&ServantStatusQuestBoardDraw_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_11976/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/, v4);
    sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_418A812 = 1;
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
  mLineSp = (UIWidget_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11976/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/, 0LL);
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
  ServantStatusQuestBoardDraw__ResetInfoTextList(this, v10);
  mLineSp = (UIWidget_o *)this->fields.mOptionInfoLb;
  if ( !mLineSp )
    goto LABEL_29;
  mLineSp = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mLineSp, 0LL);
  if ( !mLineSp )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0LL);
  this->fields.mRewardIconInfs = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.mRewardIconInfs, 0LL, v11, v12, v13, v14, v15, v16);
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
    sub_B2C434(mLineSp, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0LL);
  this->fields.inputMessageObject = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.inputMessageObject, 0LL, v17, v18, v19, v20, v21, v22);
  this->fields.qinf = 0LL;
  p_qinf = &this->fields.qinf;
  *((_DWORD *)p_qinf - 2) = 0;
  sub_B2C2F8((BattleServantConfConponent_o *)p_qinf, 0LL, v24, v25, v26, v27, v28, v29);
}


void __fastcall ServantStatusQuestBoardDraw__SetInfoTextAlpha(
        ServantStatusQuestBoardDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x8
  BoardOptionTextWithIconComponent_o *mOptionInfoLb; // x0

  if ( (byte_418A818 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, method);
    byte_418A818 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList && mInfoTextList->fields._size >= 2 )
  {
    mOptionInfoLb = this->fields.mOptionInfoLb;
    if ( !mOptionInfoLb )
      sub_B2C434(0LL, method);
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
  __int64 Master_WarQuestSelectionMaster; // x0
  __int64 size; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  int current; // w26
  char v70; // w23
  QuestEntity_o *Mine; // x28
  const MethodInfo *v72; // x1
  int v73; // w23
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  int v80; // w25
  const MethodInfo *v81; // x1
  int v82; // w27
  int32_t id; // w8
  int32_t warId; // w20
  WarEntity_o *WarEntityByWarID; // x0
  bool v86; // w8
  ServantLimitImageMaster_o *v87; // x24
  _BOOL4 IsLimitCountSealQuest; // w20
  int closedMessageId; // w27
  WarQuestSelectionMaster_o *v90; // x28
  int64_t v91; // x2
  UserQuestMaster_o *v92; // x0
  int32_t questId; // w3
  char HasStatus; // w26
  _BOOL4 IsCommonReleaseMultiClear; // w0
  int v96; // s0
  int v97; // s1
  int v98; // s2
  int v99; // s3
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  struct UISprite_o *mcBaseP; // x8
  struct UIAtlas_o *mAtlas; // x1
  UISprite_o *v108; // x24
  System_Action_o *v109; // x24
  UISprite_o *mTitleSp; // x24
  System_String_o **v111; // x8
  System_Action_o *v112; // x20
  System_String_o *age; // x20
  Il2CppObject *PrioredName; // x0
  struct UILabel_o *mTitleNameLb; // x20
  struct UILabel_o **p_mTitleNameLb; // x27
  System_String_o **v117; // x8
  LocalizationManager_c *v118; // x0
  System_String_o **v119; // x9
  System_String_o *v120; // x24
  System_String_o *v121; // x0
  System_String_o *v122; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v123; // x24
  int64_t OpenedAt; // x24
  System_Object_array *v125; // x24
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  System_Int32_array **v132; // x27
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  System_Int32_array **v139; // x27
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  System_Int32_array **v146; // x27
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  System_Int32_array **v153; // x27
  System_String_o *v154; // x0
  int32_t targetId; // w24
  System_String_o *v156; // x27
  int32_t WarID_ByQuestID; // w24
  WarEntity_o *v158; // x0
  int32_t v159; // w20
  bool v160; // cc
  UnityEngine_Transform_o *transform; // x20
  int v162; // s0
  System_String_array **v165; // x2
  System_String_array **v166; // x3
  System_Boolean_array **v167; // x4
  System_Int32_array **v168; // x5
  System_Int32_array *v169; // x6
  System_Int32_array *v170; // x7
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  const MethodInfo *v172; // x2
  struct UnityEngine_GameObject_o *v173; // x1
  QuestEntity_o *v174; // x28
  int32_t ServantId; // w20
  ServantStatusQuestBoardManager_o *v176; // x27
  ServantEntity_o *v177; // x24
  UILabel_o *mTitleShortcutLb; // x20
  BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x25
  const MethodInfo *v180; // x1
  System_String_o *v181; // x1
  __int64 endTime; // x20
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x24
  System_String_o *v184; // x28
  QuestBoardInformaionText_o *v185; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v186; // x27
  int32_t questPhase; // w20
  int32_t PhaseMax; // w0
  int32_t v189; // w0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v190; // x20
  int32_t v191; // w1
  const MethodInfo *v192; // x7
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v193; // x24
  int32_t AlphaAnimCnt; // w20
  bool v195; // w20
  System_String_array **v196; // x2
  System_String_array **v197; // x3
  System_Boolean_array **v198; // x4
  System_Int32_array **v199; // x5
  System_Int32_array *v200; // x6
  System_Int32_array *v201; // x7
  bool v202; // w1
  System_String_array **v203; // x2
  System_String_array **v204; // x3
  System_Boolean_array **v205; // x4
  System_Int32_array **v206; // x5
  System_Int32_array *v207; // x6
  System_Int32_array *v208; // x7
  __int64 v209; // x1
  struct GiftEntity_array *v210; // x22
  GiftEntity_o *v211; // x9
  int num; // w8
  int32_t v213; // w2
  int32_t v214; // w3
  __int64 v215; // x0
  __int64 v216; // x0
  int32_t limitCounta; // [xsp+18h] [xbp-108h]
  int v218; // [xsp+1Ch] [xbp-104h]
  int64_t nowTime; // [xsp+20h] [xbp-100h]
  _BOOL4 IsClear; // [xsp+2Ch] [xbp-F4h]
  UnityEngine_GameObject_o *v221; // [xsp+40h] [xbp-E0h]
  ServantStatusQuestBoardManager_o *v222; // [xsp+48h] [xbp-D8h]
  QuestEntity_o *v223; // [xsp+50h] [xbp-D0h]
  char v224; // [xsp+5Ch] [xbp-C4h]
  int32_t QuestType; // [xsp+60h] [xbp-C0h]
  int32_t Minute; // [xsp+64h] [xbp-BCh] BYREF
  int32_t Hour; // [xsp+68h] [xbp-B8h] BYREF
  int32_t Day; // [xsp+6Ch] [xbp-B4h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v229; // [xsp+70h] [xbp-B0h] BYREF
  int32_t fixedVal[2]; // [xsp+88h] [xbp-98h] BYREF
  uint64_t dateData; // [xsp+90h] [xbp-90h] BYREF
  WarEntity_o *v232; // [xsp+98h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v233; // [xsp+A0h] [xbp-80h] BYREF
  UserQuestEntity_o *entity; // [xsp+B8h] [xbp-68h] BYREF
  QuestReleaseEntity_o *questReleaseNG; // [xsp+C0h] [xbp-60h] BYREF
  System_DateTime_o v236; // 0:x0.8
  System_DateTime_o v237; // 0:x0.8
  System_DateTime_o v238; // 0:x0.8
  System_DateTime_o v239; // 0:x0.8
  UnityEngine_Vector3_o v240; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v241; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v242; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418A813 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, qinf);
    sub_B2C35C(&AtlasManager_TypeInfo, v13);
    sub_B2C35C(&CondType_TypeInfo, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftMaster___, v15);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_B2C35C(&Method_DataManager_GetMaster_ClosedMessageMaster___, v17);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestGroupMaster___, v18);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v19);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v20);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v21);
    sub_B2C35C(&Method_DataManager_GetMaster_UserQuestMaster___, v22);
    sub_B2C35C(&Method_DataManager_GetMaster_WarMaster___, v23);
    sub_B2C35C(&DataManager_TypeInfo, v24);
    sub_B2C35C(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v25);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v26);
    sub_B2C35C(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v27);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v28);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v29);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v30);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v31);
    sub_B2C35C(&int_TypeInfo, v32);
    sub_B2C35C(&long_TypeInfo, v33);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__, v34);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v35);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v36);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, v37);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, v38);
    sub_B2C35C(&LocalizationManager_TypeInfo, v39);
    sub_B2C35C(&NetworkManager_TypeInfo, v40);
    sub_B2C35C(&object___TypeInfo, v41);
    sub_B2C35C(&QuestBoardInformaionText_TypeInfo, v42);
    sub_B2C35C(&ServantStatusQuestBoardDraw_TypeInfo, v43);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v44);
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v45);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v46);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v47);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v48);
    sub_B2C35C(&Method_ServantStatusQuestBoardDraw___c__DisplayClass46_0__SetItem_b__0__, v49);
    sub_B2C35C(&Method_ServantStatusQuestBoardDraw___c__DisplayClass46_0__SetItem_b__1__, v50);
    sub_B2C35C(&ServantStatusQuestBoardDraw___c__DisplayClass46_0_TypeInfo, v51);
    sub_B2C35C(&StringLiteral_13408/*"TIME_REST_QUEST_BOARD_QUEST"*/, v52);
    sub_B2C35C(&StringLiteral_23539/*"{0}"*/, v53);
    sub_B2C35C(&StringLiteral_12045/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE2"*/, v54);
    sub_B2C35C(&StringLiteral_12047/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT2"*/, v55);
    sub_B2C35C(&StringLiteral_12046/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/, v56);
    sub_B2C35C(&StringLiteral_1/*""*/, v57);
    sub_B2C35C(&StringLiteral_12044/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE"*/, v58);
    sub_B2C35C(&StringLiteral_11998/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/, v59);
    byte_418A813 = 1;
  }
  entity = 0LL;
  questReleaseNG = 0LL;
  memset(&v233, 0, sizeof(v233));
  v232 = 0LL;
  *(_QWORD *)fixedVal = 0LL;
  dateData = 0LL;
  v60 = sub_B2C42C(ServantStatusQuestBoardDraw___c__DisplayClass46_0_TypeInfo);
  ServantStatusQuestBoardDraw___c__DisplayClass46_0___ctor(
    (ServantStatusQuestBoardDraw___c__DisplayClass46_0_o *)v60,
    0LL);
  if ( !v60 )
    goto LABEL_306;
  *(_QWORD *)(v60 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v60 + 16), (System_Int32_array **)this, v63, v64, v65, v66, v67, v68);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !qinf )
    goto LABEL_306;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_306;
  v221 = inputMessageObject;
  limitCounta = limitCount;
  Master_WarQuestSelectionMaster = (__int64)QuestGroupMaster__GetInterludeQuestIdList(
                                              (QuestGroupMaster_o *)Master_WarQuestSelectionMaster,
                                              qinf->fields.questId,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_306;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v229,
    (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v233 = v229;
  v222 = questBoardManager;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v233,
            (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v233.fields.current;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsQuestClear_25746984(current, -1, 0, 0LL) )
    {
      v70 = 1;
      goto LABEL_18;
    }
  }
  v70 = 0;
  current = 0;
LABEL_18:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v233,
    (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( !questBoardManager )
    goto LABEL_306;
  nowTime = questBoardManager->fields.mListCreatedTime;
  Mine = MapControl_QuestInfo__GetMine(qinf, 0LL);
  QuestType = MapControl_QuestInfo__GetQuestType(qinf, 0LL);
  v73 = (v70 & 1) != 0 || MapControl_QuestInfo__IsClear(qinf, 0LL);
  if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  }
  Master_WarQuestSelectionMaster = ServantStatusQuestBoardDraw__IsClose(qinf, v72);
  v80 = Master_WarQuestSelectionMaster;
  if ( beforeQuestInfo )
  {
    IsClear = MapControl_QuestInfo__IsClear(beforeQuestInfo, 0LL);
    if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    }
    Master_WarQuestSelectionMaster = ServantStatusQuestBoardDraw__IsClose(beforeQuestInfo, v81);
    v82 = Master_WarQuestSelectionMaster & 1;
    if ( !Mine )
      goto LABEL_306;
  }
  else
  {
    v82 = 0;
    IsClear = 1;
    if ( !Mine )
      goto LABEL_306;
  }
  id = Mine->fields.id;
  this->fields.qinf = qinf;
  this->fields.questId = id;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.qinf,
    (System_Int32_array **)qinf,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  warId = qinf->fields.warId;
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  Master_WarQuestSelectionMaster = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_306;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Master_WarQuestSelectionMaster, warId, 0LL);
  if ( WarEntityByWarID )
    v86 = !WarEntity__IsFolder(WarEntityByWarID, 0LL);
  else
    v86 = 0;
  *(_BYTE *)(v60 + 40) = v86;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_306;
  v87 = (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster;
  IsLimitCountSealQuest = ServantLimitImageMaster__IsLimitCountSealQuest(
                            (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster,
                            this->fields.questId,
                            0LL);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  Master_WarQuestSelectionMaster = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_306;
  v218 = v82;
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
  v223 = Mine;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v90 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( current < 1 )
  {
    if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = NetworkManager__get_UserId(0LL);
    if ( !v90 )
      goto LABEL_306;
    questId = this->fields.questId;
    v91 = Master_WarQuestSelectionMaster;
    v92 = (UserQuestMaster_o *)v90;
  }
  else
  {
    if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = NetworkManager__get_UserId(0LL);
    if ( !v90 )
      goto LABEL_306;
    v91 = Master_WarQuestSelectionMaster;
    v92 = (UserQuestMaster_o *)v90;
    questId = current;
  }
  UserQuestMaster__TryGetEntity(v92, &entity, v91, questId, 0LL);
  if ( entity )
    HasStatus = UserQuestEntity__HasStatus(entity, 4, 0LL);
  else
    HasStatus = 0;
  if ( (IsLimitCountSealQuest & ~v73 & 1) != 0 )
  {
    IsCommonReleaseMultiClear = ServantLimitImageMaster__IsCommonReleaseMultiClear(v87, this->fields.questId, 0LL);
    v73 = IsCommonReleaseMultiClear;
    HasStatus &= !IsCommonReleaseMultiClear;
    if ( IsCommonReleaseMultiClear )
      closedMessageId = 0;
    v80 &= !IsCommonReleaseMultiClear;
  }
  v224 = v80;
  if ( ((v80 | v73) & 1) != 0 )
    *(UnityEngine_Color_o *)&v96 = UnityEngine_Color__get_gray(0LL);
  else
    *(UnityEngine_Color_o *)&v96 = UnityEngine_Color__get_white(0LL);
  *(_DWORD *)(v60 + 24) = v96;
  *(_DWORD *)(v60 + 28) = v97;
  *(_DWORD *)(v60 + 32) = v98;
  *(_DWORD *)(v60 + 36) = v99;
  Master_WarQuestSelectionMaster = (__int64)this->fields.mTitleObj;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  Master_WarQuestSelectionMaster = (__int64)this->fields.mOptionInfoLb;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_306;
  Master_WarQuestSelectionMaster = (__int64)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
  Master_WarQuestSelectionMaster = (__int64)this->fields.mRewardObj;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  Master_WarQuestSelectionMaster = (__int64)this->fields.mCondObject;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
  mcBaseP = this->fields.mcBaseP;
  if ( !mcBaseP )
    goto LABEL_306;
  mAtlas = mcBaseP->fields.mAtlas;
  this->fields.basePanelAtlas = mAtlas;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.basePanelAtlas,
    (System_Int32_array **)mAtlas,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
  v108 = this->fields.mcBaseP;
  Master_WarQuestSelectionMaster = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
  if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  }
  if ( !v108 )
    goto LABEL_306;
  UISprite__set_spriteName(v108, ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME, 0LL);
  if ( IsLimitCountSealQuest )
  {
    v109 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v109,
      (Il2CppObject *)v60,
      Method_ServantStatusQuestBoardDraw___c__DisplayClass46_0__SetItem_b__0__,
      0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__LoadEventUI(v109, 1, 0LL);
  }
  Master_WarQuestSelectionMaster = (__int64)this->fields.mcBaseP;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_306;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_WarQuestSelectionMaster + 840LL))(
    Master_WarQuestSelectionMaster,
    *(_QWORD *)(*(_QWORD *)Master_WarQuestSelectionMaster + 848LL));
  Master_WarQuestSelectionMaster = (__int64)this->fields.mcBaseP;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_306;
  UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v60 + 24), 0LL);
  Master_WarQuestSelectionMaster = (__int64)this->fields.mLineSp;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_306;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  Master_WarQuestSelectionMaster = (__int64)this->fields.mLineSp;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_306;
  UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v60 + 24), 0LL);
  Master_WarQuestSelectionMaster = (__int64)this->fields.mTitle2Sp;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_306;
  if ( (v73 & 1) != 0 )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_WarQuestSelectionMaster, 0, 0LL);
    Master_WarQuestSelectionMaster = (__int64)this->fields.mTitleSp;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_306;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_WarQuestSelectionMaster, 0, 0LL);
    Master_WarQuestSelectionMaster = (__int64)this->fields.mLinkObj;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_306;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_WarQuestSelectionMaster, 1, 0LL);
    Master_WarQuestSelectionMaster = (__int64)this->fields.mTitle2Sp;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_306;
    UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v60 + 24), 0LL);
    Master_WarQuestSelectionMaster = (__int64)this->fields.mTitleSp;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_306;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_WarQuestSelectionMaster, 1, 0LL);
    Master_WarQuestSelectionMaster = (__int64)this->fields.mTitleSp;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_306;
    UISprite__set_atlas((UISprite_o *)Master_WarQuestSelectionMaster, this->fields.basePanelAtlas, 0LL);
    mTitleSp = this->fields.mTitleSp;
    if ( QuestType == 3 )
    {
      Master_WarQuestSelectionMaster = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      if ( *(_BYTE *)(v60 + 40) )
      {
        if ( (WORD1(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
          Master_WarQuestSelectionMaster = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
        }
        v111 = (System_String_o **)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 80LL);
        if ( !mTitleSp )
          goto LABEL_306;
      }
      else
      {
        if ( (WORD1(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
          Master_WarQuestSelectionMaster = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
        }
        v111 = (System_String_o **)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 72LL);
        if ( !mTitleSp )
          goto LABEL_306;
      }
      UISprite__set_spriteName(mTitleSp, *v111, 0LL);
      if ( IsLimitCountSealQuest )
      {
        v112 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          v112,
          (Il2CppObject *)v60,
          Method_ServantStatusQuestBoardDraw___c__DisplayClass46_0__SetItem_b__1__,
          0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__LoadEventUI(v112, 1, 0LL);
      }
    }
    else
    {
      Master_WarQuestSelectionMaster = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      }
      if ( !mTitleSp )
        goto LABEL_306;
      UISprite__set_spriteName(
        mTitleSp,
        ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_SPRITE_NAME_RAINFORCEMENT,
        0LL);
    }
    Master_WarQuestSelectionMaster = (__int64)this->fields.mTitleSp;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_306;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_WarQuestSelectionMaster + 840LL))(
      Master_WarQuestSelectionMaster,
      *(_QWORD *)(*(_QWORD *)Master_WarQuestSelectionMaster + 848LL));
    Master_WarQuestSelectionMaster = (__int64)this->fields.mTitleSp;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_306;
    UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v60 + 24), 0LL);
    Master_WarQuestSelectionMaster = (__int64)this->fields.mLinkObj;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_306;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
    Master_WarQuestSelectionMaster = (__int64)this->fields.mLinkObj;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_306;
    Master_WarQuestSelectionMaster = (__int64)UnityEngine_GameObject__get_gameObject(
                                                (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                                0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_306;
    Master_WarQuestSelectionMaster = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_306;
    UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v60 + 24), 0LL);
  }
  Master_WarQuestSelectionMaster = (__int64)this->fields.mClearObj;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, v73 & 1, 0LL);
  Master_WarQuestSelectionMaster = (__int64)this->fields.mNoneLb;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_306;
  UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !(v73 & 1 | IsClear) )
  {
    p_mTitleNameLb = &this->fields.mTitleNameLb;
    mTitleNameLb = this->fields.mTitleNameLb;
    if ( QuestType == 3 )
    {
      v117 = (System_String_o **)&StringLiteral_12045/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE2"*/;
      v118 = LocalizationManager_TypeInfo;
      v119 = (System_String_o **)&StringLiteral_12044/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE"*/;
    }
    else
    {
      v117 = (System_String_o **)&StringLiteral_12047/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT2"*/;
      v118 = LocalizationManager_TypeInfo;
      v119 = (System_String_o **)&StringLiteral_12046/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/;
    }
    if ( !v218 )
      v117 = v119;
    v120 = *v117;
    if ( (BYTE3(v118->vtable._0_Equals.methodPtr) & 4) != 0 && !v118->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v118);
    v121 = v120;
    goto LABEL_152;
  }
  if ( closedMessageId >= 1 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClosedMessageMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_306;
    age = (System_String_o *)StringLiteral_1/*""*/;
    Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                       &v232,
                                       closedMessageId,
                                       (const MethodInfo_24E412C *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    if ( (Master_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( !v232 )
        goto LABEL_306;
      age = v232->fields.age;
    }
    if ( !questReleaseNG )
      goto LABEL_306;
    switch ( questReleaseNG->fields.type )
    {
      case 1:
        targetId = questReleaseNG->fields.targetId;
        v156 = (System_String_o *)StringLiteral_1/*""*/;
        if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
        }
        Master_WarQuestSelectionMaster = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_306;
        WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Master_WarQuestSelectionMaster, targetId, 0LL);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarMaster___);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_306;
        v158 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                 WarID_ByQuestID,
                 (const MethodInfo_24E40D0 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
        if ( v158 )
        {
          PrioredName = (Il2CppObject *)WarEntity__GetPrioredName(v158, 0LL);
          goto LABEL_195;
        }
        age = v156;
        break;
      case 6:
      case 7:
      case 9:
        v229.fields.list = (struct System_Collections_Generic_List_T__o *)questReleaseNG->fields.value;
        PrioredName = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v229);
        goto LABEL_195;
      case 0xC:
        OpenedAt = QuestEntity__getOpenedAt(v223, 0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        dateData = NetworkManager__getServerDateTime_26271756(OpenedAt, 0LL).fields.dateData;
        v125 = (System_Object_array *)sub_B2C374(object___TypeInfo, 4LL);
        v236.fields.dateData = (uint64_t)&dateData;
        LODWORD(v229.fields.list) = System_DateTime__get_Month(v236, 0LL);
        Master_WarQuestSelectionMaster = j_il2cpp_value_box_0(int_TypeInfo, &v229);
        if ( !v125 )
          goto LABEL_306;
        v132 = (System_Int32_array **)Master_WarQuestSelectionMaster;
        if ( Master_WarQuestSelectionMaster )
        {
          Master_WarQuestSelectionMaster = sub_B2C41C(Master_WarQuestSelectionMaster, v125->obj.klass->_1.element_class);
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_305;
        }
        if ( !v125->max_length )
          goto LABEL_304;
        v125->m_Items[0] = (Il2CppObject *)v132;
        sub_B2C2F8((BattleServantConfConponent_o *)v125->m_Items, v132, v126, v127, v128, v129, v130, v131);
        v237.fields.dateData = (uint64_t)&dateData;
        Day = System_DateTime__get_Day(v237, 0LL);
        Master_WarQuestSelectionMaster = j_il2cpp_value_box_0(int_TypeInfo, &Day);
        v139 = (System_Int32_array **)Master_WarQuestSelectionMaster;
        if ( Master_WarQuestSelectionMaster )
        {
          Master_WarQuestSelectionMaster = sub_B2C41C(Master_WarQuestSelectionMaster, v125->obj.klass->_1.element_class);
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_305;
        }
        if ( v125->max_length <= 1 )
          goto LABEL_304;
        v125->m_Items[1] = (Il2CppObject *)v139;
        sub_B2C2F8((BattleServantConfConponent_o *)&v125->m_Items[1], v139, v133, v134, v135, v136, v137, v138);
        v238.fields.dateData = (uint64_t)&dateData;
        Hour = System_DateTime__get_Hour(v238, 0LL);
        Master_WarQuestSelectionMaster = j_il2cpp_value_box_0(int_TypeInfo, &Hour);
        v146 = (System_Int32_array **)Master_WarQuestSelectionMaster;
        if ( Master_WarQuestSelectionMaster )
        {
          Master_WarQuestSelectionMaster = sub_B2C41C(Master_WarQuestSelectionMaster, v125->obj.klass->_1.element_class);
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_305;
        }
        if ( v125->max_length <= 2 )
          goto LABEL_304;
        v125->m_Items[2] = (Il2CppObject *)v146;
        sub_B2C2F8((BattleServantConfConponent_o *)&v125->m_Items[2], v146, v140, v141, v142, v143, v144, v145);
        v239.fields.dateData = (uint64_t)&dateData;
        Minute = System_DateTime__get_Minute(v239, 0LL);
        Master_WarQuestSelectionMaster = j_il2cpp_value_box_0(int_TypeInfo, &Minute);
        v153 = (System_Int32_array **)Master_WarQuestSelectionMaster;
        if ( Master_WarQuestSelectionMaster )
        {
          Master_WarQuestSelectionMaster = sub_B2C41C(Master_WarQuestSelectionMaster, v125->obj.klass->_1.element_class);
          if ( !Master_WarQuestSelectionMaster )
          {
LABEL_305:
            v216 = sub_B2C454(Master_WarQuestSelectionMaster);
            sub_B2C400(v216, 0LL);
          }
        }
        if ( v125->max_length <= 3 )
          goto LABEL_304;
        v125->m_Items[3] = (Il2CppObject *)v153;
        sub_B2C2F8((BattleServantConfConponent_o *)&v125->m_Items[3], v153, v147, v148, v149, v150, v151, v152);
        v154 = System_String__Format_44384256(age, v125, 0LL);
        goto LABEL_196;
      default:
        goto LABEL_197;
    }
    goto LABEL_197;
  }
  if ( questReleaseNG && questReleaseNG->fields.type == 8 )
  {
    p_mTitleNameLb = &this->fields.mTitleNameLb;
    mTitleNameLb = this->fields.mTitleNameLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v121 = (System_String_o *)StringLiteral_11998/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/;
LABEL_152:
    Master_WarQuestSelectionMaster = (__int64)LocalizationManager__Get(v121, 0LL);
    if ( !mTitleNameLb )
      goto LABEL_306;
    v122 = (System_String_o *)Master_WarQuestSelectionMaster;
    Master_WarQuestSelectionMaster = (__int64)mTitleNameLb;
    goto LABEL_199;
  }
  Master_WarQuestSelectionMaster = (__int64)QuestEntity__getQuestName(v223, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_306;
  age = (System_String_o *)Master_WarQuestSelectionMaster;
  if ( System_String__Contains(
         (System_String_o *)Master_WarQuestSelectionMaster,
         (System_String_o *)StringLiteral_23539/*"{0}"*/,
         0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v123 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
    Master_WarQuestSelectionMaster = QuestEntity__getServantId(v223, 0LL);
    if ( !v123 )
      goto LABEL_306;
    Master_WarQuestSelectionMaster = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                v123,
                                                Master_WarQuestSelectionMaster,
                                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_306;
    PrioredName = (Il2CppObject *)ServantEntity__getBattleName(
                                    (ServantEntity_o *)Master_WarQuestSelectionMaster,
                                    0,
                                    -1,
                                    0LL);
LABEL_195:
    v154 = System_String__Format(age, PrioredName, 0LL);
LABEL_196:
    age = v154;
  }
LABEL_197:
  p_mTitleNameLb = &this->fields.mTitleNameLb;
  Master_WarQuestSelectionMaster = (__int64)this->fields.mTitleNameLb;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_306;
  v122 = age;
LABEL_199:
  UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, v122, 0LL);
  Master_WarQuestSelectionMaster = (__int64)*p_mTitleNameLb;
  if ( !*p_mTitleNameLb )
    goto LABEL_306;
  v159 = *(_DWORD *)(Master_WarQuestSelectionMaster + 160);
  if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)*p_mTitleNameLb;
    if ( !*p_mTitleNameLb )
      goto LABEL_306;
  }
  v160 = v159 <= ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
  if ( v160 )
  {
    *(UnityEngine_Vector3_o *)&v162 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_306;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v162, 0LL);
  }
  else
  {
    Master_WarQuestSelectionMaster = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
    if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    }
    if ( !*p_mTitleNameLb || !transform )
      goto LABEL_306;
    v240.fields.x = (float)ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH
                  / (float)(*p_mTitleNameLb)->fields.mWidth;
    v240.fields.y = 1.0;
    v240.fields.z = 1.0;
    UnityEngine_Transform__set_localScale(transform, v240, 0LL);
  }
  Master_WarQuestSelectionMaster = (__int64)*p_mTitleNameLb;
  if ( !*p_mTitleNameLb )
    goto LABEL_306;
  UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v60 + 24), 0LL);
  if ( (v80 & 1) != 0 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_306;
    EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                               (QuestReleaseOverwriteMaster_o *)Master_WarQuestSelectionMaster,
                               this->fields.questId,
                               nowTime,
                               0LL);
    ServantStatusQuestBoardDraw__SetupCondtionChangeMessage(this, EntityByQuestIdAndTime, v172);
  }
  if ( (((unsigned __int8)v80 | (unsigned __int8)v73) & 1) != 0 )
    v173 = 0LL;
  else
    v173 = v221;
  this->fields.inputMessageObject = v173;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.inputMessageObject,
    (System_Int32_array **)v173,
    v165,
    v166,
    v167,
    v168,
    v169,
    v170);
  if ( QuestType == 3 )
  {
    v174 = v223;
    ServantId = QuestEntity__getServantId(v223, 0LL);
    Master_WarQuestSelectionMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_306;
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)Master_WarQuestSelectionMaster,
                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    v176 = v222;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_306;
    Master_WarQuestSelectionMaster = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                ServantId,
                                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !this->fields.mTitleShortcutSp )
      goto LABEL_306;
    v177 = (ServantEntity_o *)Master_WarQuestSelectionMaster;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mTitleShortcutSp, 0, 0LL);
    mTitleShortcutLb = this->fields.mTitleShortcutLb;
    if ( v177 )
    {
      Master_WarQuestSelectionMaster = (__int64)ServantEntity__getName(v177, limitCounta, -1, 0LL);
      if ( !mTitleShortcutLb )
        goto LABEL_306;
      UILabel__set_text(mTitleShortcutLb, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
      Master_WarQuestSelectionMaster = (__int64)this->fields.mTitleShortcutLb;
      p_mOptionInfoLb = &this->fields.mOptionInfoLb;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_306;
      UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v60 + 24), 0LL);
      goto LABEL_237;
    }
    if ( !mTitleShortcutLb )
      goto LABEL_306;
    v181 = (System_String_o *)StringLiteral_1/*""*/;
    Master_WarQuestSelectionMaster = (__int64)this->fields.mTitleShortcutLb;
  }
  else
  {
    Master_WarQuestSelectionMaster = (__int64)this->fields.mTitleShortcutSp;
    v174 = v223;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_306;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_WarQuestSelectionMaster, 1, 0LL);
    Master_WarQuestSelectionMaster = (__int64)this->fields.mTitleShortcutSp;
    v176 = v222;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_306;
    UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v60 + 24), 0LL);
    Master_WarQuestSelectionMaster = (__int64)this->fields.mTitleShortcutLb;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_306;
    v181 = (System_String_o *)StringLiteral_1/*""*/;
  }
  UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, v181, 0LL);
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
LABEL_237:
  ServantStatusQuestBoardDraw__ResetInfoTextList(this, v180);
  if ( (v73 & 1) != 0 )
    goto LABEL_253;
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  endTime = qinf->fields.endTime;
  if ( endTime >= 1 && !QuestEntity__HasFlag(v174, 32LL, 0LL) )
  {
    mInfoTextList = this->fields.mInfoTextList;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v184 = LocalizationManager__Get((System_String_o *)StringLiteral_13408/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
    v185 = (QuestBoardInformaionText_o *)sub_B2C42C(QuestBoardInformaionText_TypeInfo);
    v242.fields.r = 0.0;
    v242.fields.g = 0.0;
    v242.fields.b = 0.0;
    v242.fields.a = 0.0;
    v241.fields.x = 0.0;
    v241.fields.y = 0.0;
    v241.fields.z = 0.0;
    v186 = (EventMissionProgressRequest_Argument_ProgressData_o *)v185;
    QuestBoardInformaionText___ctor(v185, v184, endTime, 0, 0, v242, -1, 0, v241, 1, 0LL, 0LL, 0LL);
    if ( !mInfoTextList )
      goto LABEL_306;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mInfoTextList,
      v186,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    v176 = v222;
    v174 = v223;
  }
  questPhase = qinf->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(qinf, 0LL);
  v189 = UnityEngine_Mathf__Min_40694704(questPhase + 1, PhaseMax, 0LL);
  v190 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.mInfoTextList;
  Master_WarQuestSelectionMaster = (__int64)ServantStatusQuestBoardDraw__GetCampaignText(
                                              this,
                                              v191,
                                              v189,
                                              0,
                                              v176,
                                              &fixedVal[1],
                                              fixedVal,
                                              v192);
  if ( !v190 )
    goto LABEL_306;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    v190,
    (System_Collections_Generic_IEnumerable_T__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
  v193 = this->fields.mInfoTextList;
  if ( !v193 )
    goto LABEL_306;
  size = (unsigned int)v193->fields._size;
  if ( (int)size < 1 )
  {
LABEL_253:
    v195 = 0;
  }
  else
  {
    AlphaAnimCnt = ServantStatusQuestBoardManager__GetAlphaAnimCnt(v176, size, 0LL);
    if ( v193->fields._size <= (unsigned int)AlphaAnimCnt )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    Master_WarQuestSelectionMaster = (__int64)v193->fields._items->m_Items[AlphaAnimCnt];
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_306;
    QuestBoardInformaionText__SetTime(
      (QuestBoardInformaionText_o *)Master_WarQuestSelectionMaster,
      p_mOptionInfoLb,
      &this->fields.mOptionInfoFrameSp,
      0LL);
    Master_WarQuestSelectionMaster = (__int64)this->fields.mOptionInfoLb;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_306;
    BoardOptionTextWithIconComponent__set_Alpha(
      (BoardOptionTextWithIconComponent_o *)Master_WarQuestSelectionMaster,
      1.0,
      0LL);
    v195 = 1;
    qinf->fields.costCalcVal = fixedVal[1];
    qinf->fields._fixedCostVal_k__BackingField = fixedVal[0];
  }
  Master_WarQuestSelectionMaster = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_306;
  Master_WarQuestSelectionMaster = (__int64)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_306;
  Master_WarQuestSelectionMaster = (__int64)UnityEngine_Transform__get_parent(
                                              (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_306;
  Master_WarQuestSelectionMaster = (__int64)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, v195, 0LL);
  Master_WarQuestSelectionMaster = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_306;
  Master_WarQuestSelectionMaster = (__int64)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, v195, 0LL);
  this->fields.mRewardIconInfs = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.mRewardIconInfs, 0LL, v196, v197, v198, v199, v200, v201);
  Master_WarQuestSelectionMaster = (__int64)this->fields.mRewardIcon;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_306;
  Master_WarQuestSelectionMaster = (__int64)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
  if ( (v224 & 1) != 0 && QuestEntity__HasFlag(v174, 4096LL, 0LL) )
  {
    Master_WarQuestSelectionMaster = (__int64)this->fields.mRewardIcon;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_306;
    LODWORD(size) = 99;
LABEL_268:
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)Master_WarQuestSelectionMaster, size, 0LL);
    Master_WarQuestSelectionMaster = (__int64)this->fields.mRewardIcon;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_306;
    Master_WarQuestSelectionMaster = (__int64)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_306;
    v202 = 1;
    goto LABEL_271;
  }
  size = (unsigned int)v174->fields.giftIconId;
  if ( (int)size >= 1 )
  {
    Master_WarQuestSelectionMaster = (__int64)this->fields.mRewardIcon;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_306;
    goto LABEL_268;
  }
  if ( v174->fields.giftId >= 1 )
  {
    Master_WarQuestSelectionMaster = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_306;
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)Master_WarQuestSelectionMaster,
                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_306;
    Master_WarQuestSelectionMaster = (__int64)GiftMaster__GetGiftListById(
                                                (GiftMaster_o *)Master_WarQuestSelectionMaster,
                                                v174->fields.giftId,
                                                0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_306;
    v209 = *(_QWORD *)(Master_WarQuestSelectionMaster + 24);
    v210 = (struct GiftEntity_array *)Master_WarQuestSelectionMaster;
    if ( !v209 )
      goto LABEL_302;
    Master_WarQuestSelectionMaster = ServantStatusQuestBoardManager__GetAlphaAnimCnt(v176, v209, 0LL);
    if ( (unsigned int)Master_WarQuestSelectionMaster >= v210->max_length )
    {
LABEL_304:
      v215 = sub_B2C460(Master_WarQuestSelectionMaster);
      sub_B2C400(v215, 0LL);
    }
    v211 = v210->m_Items[(int)Master_WarQuestSelectionMaster];
    if ( v211 )
    {
      size = (unsigned int)v211->fields.prioredIconId;
      Master_WarQuestSelectionMaster = (__int64)this->fields.mRewardIcon;
      num = v211->fields.num;
      if ( (int)size < 1 )
      {
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_306;
        v214 = num <= 1 ? -1 : v211->fields.num;
        ItemIconComponent__SetGift(
          (ItemIconComponent_o *)Master_WarQuestSelectionMaster,
          v211->fields.type,
          v211->fields.objectId,
          v214,
          0,
          0LL);
      }
      else
      {
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_306;
        v213 = num <= 1 ? -1 : v211->fields.num;
        ItemIconComponent__SetItemImage_27396332((ItemIconComponent_o *)Master_WarQuestSelectionMaster, size, v213, 0LL);
      }
      Master_WarQuestSelectionMaster = (__int64)this->fields.mRewardIcon;
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = (__int64)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                    0LL);
        if ( Master_WarQuestSelectionMaster )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
LABEL_302:
          this->fields.mRewardIconInfs = v210;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.mRewardIconInfs,
            (System_Int32_array **)v210,
            v203,
            v204,
            v205,
            v206,
            v207,
            v208);
          goto LABEL_272;
        }
      }
    }
LABEL_306:
    sub_B2C434(Master_WarQuestSelectionMaster, size);
  }
  Master_WarQuestSelectionMaster = (__int64)this->fields.mRewardObj;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_306;
  v202 = 0;
LABEL_271:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, v202, 0LL);
LABEL_272:
  Master_WarQuestSelectionMaster = (__int64)this->fields.mRewardObj;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_306;
  Master_WarQuestSelectionMaster = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_306;
  UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v60 + 24), 0LL);
  Master_WarQuestSelectionMaster = (__int64)this->fields.mRewardIcon;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_306;
  ItemIconComponent__SetColor(
    (ItemIconComponent_o *)Master_WarQuestSelectionMaster,
    *(UnityEngine_Color_o *)(v60 + 24),
    0LL);
  Master_WarQuestSelectionMaster = (__int64)this->fields.mRewardGetSP;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_306;
  Master_WarQuestSelectionMaster = (__int64)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
    v73 & (HasStatus ^ 1) & 1,
    0LL);
  Master_WarQuestSelectionMaster = (__int64)this->fields.mRewardGetSP;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_306;
  UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v60 + 24), 0LL);
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
      sub_B2C434(0LL, method);
    ItemIconComponent__SetAlpha(mRewardIcon, alpha, 0LL);
  }
}


void __fastcall ServantStatusQuestBoardDraw__SetupCondtionChangeMessage(
        ServantStatusQuestBoardDraw_o *this,
        QuestReleaseOverwriteEntity_o *questReleaseOverwriteEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *mCondObject; // x0
  UILabel_o *mCondChangeMessage; // x19

  if ( (byte_418A814 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusQuestBoardDraw_TypeInfo, questReleaseOverwriteEnt);
    byte_418A814 = 1;
  }
  if ( questReleaseOverwriteEnt
    && !System_String__IsNullOrEmpty(questReleaseOverwriteEnt->fields.overlayClosedMessage, 0LL) )
  {
    mCondObject = this->fields.mCondObject;
    if ( !mCondObject )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive(mCondObject, 1, 0LL);
    mCondObject = (UnityEngine_GameObject_o *)this->fields.mCondChangeMessage;
    if ( !mCondObject )
      goto LABEL_13;
    UILabel__set_text((UILabel_o *)mCondObject, questReleaseOverwriteEnt->fields.overlayClosedMessage, 0LL);
    mCondChangeMessage = this->fields.mCondChangeMessage;
    mCondObject = (UnityEngine_GameObject_o *)ServantStatusQuestBoardDraw_TypeInfo;
    if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    }
    if ( !mCondChangeMessage )
LABEL_13:
      sub_B2C434(mCondObject, v5);
    UILabel__SetCondensedScale(
      mCondChangeMessage,
      ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH,
      0LL);
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
  if ( (byte_418A816 & 1) == 0 )
  {
    this = (ServantStatusQuestBoardDraw_o *)sub_B2C35C(
                                              &Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__,
                                              qinf);
    byte_418A816 = 1;
  }
  mInfoTextList = v7->fields.mInfoTextList;
  if ( !mInfoTextList )
    goto LABEL_8;
  if ( mInfoTextList->fields._size <= (unsigned int)strIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  this = (ServantStatusQuestBoardDraw_o *)mInfoTextList->fields._items->m_Items[strIndex];
  if ( !this )
LABEL_8:
    sub_B2C434(this, qinf);
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
    sub_B2C434(this, 0LL);
  ServantStatusQuestBoardDraw__SetInfoTextAlpha(
    this,
    questBoardManager->fields.mAlphaAnimNow,
    (const MethodInfo *)questBoardManager);
  ServantStatusQuestBoardDraw__SetRewardIconAlpha(this, questBoardManager->fields.mAlphaAnimNow, v5);
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
        v6 = sub_B2C460(this);
        sub_B2C400(v6, 0LL);
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
    sub_B2C434(this, boardMessageData);
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
  UISprite_o *v6; // x0
  __int64 v7; // x1
  struct ServantStatusQuestBoardDraw_o *v8; // x8
  UnityEngine_Object_o *mcBaseP; // x20
  struct ServantStatusQuestBoardDraw_o *v10; // x8
  UISprite_o *v11; // x20
  ServantStatusQuestBoardDraw_c *v12; // x0
  System_String_o *BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME; // x21
  struct ServantStatusQuestBoardDraw_o *v14; // x9
  char v15; // w8
  struct ServantStatusQuestBoardDraw_o *v16; // x8
  UISprite_o *v17; // x20
  struct ServantStatusQuestBoardDraw_o *v18; // x8
  struct ServantStatusQuestBoardDraw_o *v19; // x8

  if ( (byte_418542E & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&ServantStatusQuestBoardDraw_TypeInfo, v4);
    byte_418542E = 1;
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
    v8 = this->fields.__4__this;
    if ( v8 )
    {
      mcBaseP = (UnityEngine_Object_o *)v8->fields.mcBaseP;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v6 = (UISprite_o *)UnityEngine_Object__op_Equality(mcBaseP, 0LL, 0LL);
      if ( ((unsigned __int8)v6 & 1) != 0 )
        return;
      v10 = this->fields.__4__this;
      if ( v10 )
      {
        v11 = v10->fields.mcBaseP;
        v12 = ServantStatusQuestBoardDraw_TypeInfo;
        if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
          v12 = ServantStatusQuestBoardDraw_TypeInfo;
        }
        BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME = v12->static_fields->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        v6 = (UISprite_o *)AtlasManager__SetEventUI(v11, BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME, 0LL);
        v14 = this->fields.__4__this;
        if ( v14 )
        {
          v15 = (char)v6;
          v6 = v14->fields.mcBaseP;
          if ( (v15 & 1) != 0 )
          {
            if ( !v6 )
              goto LABEL_35;
          }
          else
          {
            if ( !v6 )
              goto LABEL_35;
            UISprite__set_atlas(v6, v14->fields.basePanelAtlas, 0LL);
            v16 = this->fields.__4__this;
            if ( !v16 )
              goto LABEL_35;
            v6 = (UISprite_o *)ServantStatusQuestBoardDraw_TypeInfo;
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
            v6 = v18->fields.mcBaseP;
            if ( !v6 )
              goto LABEL_35;
          }
          v6 = (UISprite_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
                               v6,
                               v6->klass->vtable._34_get_minWidth.methodPtr);
          v19 = this->fields.__4__this;
          if ( v19 )
          {
            v6 = v19->fields.mcBaseP;
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
    sub_B2C434(v6, v7);
  }
}


void __fastcall ServantStatusQuestBoardDraw___c__DisplayClass46_0___SetItem_b__1(
        ServantStatusQuestBoardDraw___c__DisplayClass46_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *_4__this; // x20
  UISprite_o *v6; // x0
  __int64 v7; // x1
  struct ServantStatusQuestBoardDraw_o *v8; // x8
  UnityEngine_Object_o *mTitleSp; // x20
  struct ServantStatusQuestBoardDraw_o *v10; // x8
  UISprite_o *v11; // x20
  ServantStatusQuestBoardDraw_c *v12; // x0
  System_String_o *TITLE_SPRITE_NAME_LIMIT_UNSEAL; // x21
  struct ServantStatusQuestBoardDraw_o *v14; // x9
  char v15; // w8
  struct ServantStatusQuestBoardDraw_o *v16; // x8
  UISprite_o *v17; // x20
  System_String_o **p_delegates; // x8
  struct ServantStatusQuestBoardDraw_o *v19; // x8
  struct ServantStatusQuestBoardDraw_o *v20; // x8

  if ( (byte_418542F & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&ServantStatusQuestBoardDraw_TypeInfo, v4);
    byte_418542F = 1;
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
    v8 = this->fields.__4__this;
    if ( v8 )
    {
      mTitleSp = (UnityEngine_Object_o *)v8->fields.mTitleSp;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v6 = (UISprite_o *)UnityEngine_Object__op_Equality(mTitleSp, 0LL, 0LL);
      if ( ((unsigned __int8)v6 & 1) != 0 )
        return;
      v10 = this->fields.__4__this;
      if ( v10 )
      {
        v11 = v10->fields.mTitleSp;
        v12 = ServantStatusQuestBoardDraw_TypeInfo;
        if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
          v12 = ServantStatusQuestBoardDraw_TypeInfo;
        }
        TITLE_SPRITE_NAME_LIMIT_UNSEAL = v12->static_fields->TITLE_SPRITE_NAME_LIMIT_UNSEAL;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        v6 = (UISprite_o *)AtlasManager__SetEventUI(v11, TITLE_SPRITE_NAME_LIMIT_UNSEAL, 0LL);
        v14 = this->fields.__4__this;
        if ( v14 )
        {
          v15 = (char)v6;
          v6 = v14->fields.mTitleSp;
          if ( (v15 & 1) != 0 )
          {
            if ( !v6 )
              goto LABEL_41;
          }
          else
          {
            if ( !v6 )
              goto LABEL_41;
            UISprite__set_atlas(v6, v14->fields.basePanelAtlas, 0LL);
            v16 = this->fields.__4__this;
            if ( !v16 )
              goto LABEL_41;
            v6 = (UISprite_o *)ServantStatusQuestBoardDraw_TypeInfo;
            v17 = v16->fields.mTitleSp;
            if ( this->fields.isMap )
            {
              if ( (WORD1(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
                v6 = (UISprite_o *)ServantStatusQuestBoardDraw_TypeInfo;
              }
              p_delegates = (System_String_o **)&v6->fields.onPostFill->fields.delegates;
              if ( !v17 )
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
              p_delegates = (System_String_o **)&v6->fields.onPostFill->fields.method_is_virtual;
              if ( !v17 )
                goto LABEL_41;
            }
            UISprite__set_spriteName(v17, *p_delegates, 0LL);
            v19 = this->fields.__4__this;
            if ( !v19 )
              goto LABEL_41;
            v6 = v19->fields.mTitleSp;
            if ( !v6 )
              goto LABEL_41;
          }
          v6 = (UISprite_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
                               v6,
                               v6->klass->vtable._34_get_minWidth.methodPtr);
          v20 = this->fields.__4__this;
          if ( v20 )
          {
            v6 = v20->fields.mTitleSp;
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
    sub_B2C434(v6, v7);
  }
}