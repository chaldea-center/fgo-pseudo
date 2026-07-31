void ServantStatusQuestBoardDraw___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  __int64 v7; // x1
  struct ServantStatusQuestBoardDraw_StaticFields *static_fields; // x0
  int32_t v9; // w1
  MissionNaviTransitionBoardItem_o *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  struct ServantStatusQuestBoardDraw_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int32_t v25; // w1
  struct ServantStatusQuestBoardDraw_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  int32_t v33; // w1
  struct ServantStatusQuestBoardDraw_StaticFields *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  int32_t v41; // w1
  struct ServantStatusQuestBoardDraw_StaticFields *v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  int32_t v49; // w1
  struct ServantStatusQuestBoardDraw_StaticFields *v50; // x0
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7

  if ( (byte_5935D4A & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusQuestBoardDraw_TypeInfo);
    sub_21FFC50(&StringLiteral_21313/*"img_conductor_03"*/);
    sub_21FFC50(&StringLiteral_21314/*"img_conductor_04"*/);
    sub_21FFC50(&StringLiteral_21312/*"img_conductor_02"*/);
    sub_21FFC50(&StringLiteral_21461/*"img_questboard_1001"*/);
    sub_21FFC50(&StringLiteral_21311/*"img_conductor_01"*/);
    sub_21FFC50(&StringLiteral_21318/*"img_conductor_questboard"*/);
    sub_21FFC50(&StringLiteral_21307/*"img_commonbg"*/);
    byte_5935D4A = 1;
  }
  v7 = StringLiteral_21307/*"img_commonbg"*/;
  static_fields = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->TITLE_LABEL_BASE_WIDTH = xmmword_E93D50;
  static_fields->ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X = -208.0;
  static_fields->DARK_BOARD_SPRITE_NAME = (struct System_String_o *)v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->DARK_BOARD_SPRITE_NAME, v7, v1, v2, v3, v4, v5, v6);
  v9 = StringLiteral_21318/*"img_conductor_questboard"*/;
  v10 = (MissionNaviTransitionBoardItem_o *)ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v10->fields.sortValue0B = StringLiteral_21318/*"img_conductor_questboard"*/;
  v10 = (MissionNaviTransitionBoardItem_o *)((char *)v10 + 40);
  *(_QWORD *)&v10[-1].fields._BoardType_k__BackingField = 0x7A000001F0LL;
  sub_21FFBF4(v10, v9, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_21312/*"img_conductor_02"*/;
  v18 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v18->TITLE_SPRITE_NAME_INTERLUDE = (struct System_String_o *)StringLiteral_21312/*"img_conductor_02"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v18->TITLE_SPRITE_NAME_INTERLUDE, v17, v19, v20, v21, v22, v23, v24);
  v25 = StringLiteral_21311/*"img_conductor_01"*/;
  v26 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v26->TITLE_SPRITE_NAME_INTERLUDE_MAP = (struct System_String_o *)StringLiteral_21311/*"img_conductor_01"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v26->TITLE_SPRITE_NAME_INTERLUDE_MAP,
    v25,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = StringLiteral_21313/*"img_conductor_03"*/;
  v34 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v34->TITLE_SPRITE_NAME_RAINFORCEMENT = (struct System_String_o *)StringLiteral_21313/*"img_conductor_03"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v34->TITLE_SPRITE_NAME_RAINFORCEMENT,
    v33,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = StringLiteral_21461/*"img_questboard_1001"*/;
  v42 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v42->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME = (struct System_String_o *)StringLiteral_21461/*"img_questboard_1001"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v42->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME,
    v41,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v49 = StringLiteral_21314/*"img_conductor_04"*/;
  v50 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v50->TITLE_SPRITE_NAME_LIMIT_UNSEAL = (struct System_String_o *)StringLiteral_21314/*"img_conductor_04"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v50->TITLE_SPRITE_NAME_LIMIT_UNSEAL,
    v49,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
}


void ServantStatusQuestBoardDraw___ctor(ServantStatusQuestBoardDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusQuestBoardDraw__ChangeNextInfoText(
        ServantStatusQuestBoardDraw_o *this,
        MapControl_QuestInfo_o *qinf,
        ServantStatusQuestBoardManager_o *questBoardManagerer,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mInfoTextList; // x0
  int size; // w8
  int32_t v8; // w20
  __int64 v9; // x1
  __int64 v10; // x2
  int64_t Time; // x3
  MapControl_QuestInfo_o *v12; // x1
  const MethodInfo *v13; // x4

  if ( (byte_5935D42 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5935D42 = 1;
  }
  if ( (byte_5935D43 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_5935D43 = 1;
  }
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( mInfoTextList )
  {
    size = mInfoTextList->fields._size;
    if ( size >= 2 )
    {
      if ( questBoardManagerer )
      {
        v8 = questBoardManagerer->fields.mAlphaAnimCnt % size;
        mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       mInfoTextList,
                                                                       v8,
                                                                       (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
        if ( mInfoTextList )
        {
          if ( !QuestBoardInformationText__ChangeText(
                  (QuestBoardInformationText_o *)mInfoTextList,
                  &this->fields.mOptionInfoLb,
                  0) )
            return;
LABEL_18:
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v10);
          Time = NetworkManager__getTime(0);
          ServantStatusQuestBoardDraw__UpdateInfoText(this, v12, v8, Time, v13);
          return;
        }
      }
      goto LABEL_22;
    }
  }
  if ( (byte_5935D44 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
    byte_5935D44 = 1;
  }
  if ( mInfoTextList && mInfoTextList->fields._size )
  {
    mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                   mInfoTextList,
                                                                   0,
                                                                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    if ( mInfoTextList )
    {
      if ( !QuestBoardInformationText__ChangeText(
              (QuestBoardInformationText_o *)mInfoTextList,
              &this->fields.mOptionInfoLb,
              0) )
        return;
      v8 = 0;
      goto LABEL_18;
    }
LABEL_22:
    sub_21FFECC(mInfoTextList, qinf);
  }
}


void ServantStatusQuestBoardDraw__ChangeNextRewardIcon(
        ServantStatusQuestBoardDraw_o *this,
        ServantStatusQuestBoardManager_o *questBoardManager,
        const MethodInfo *method)
{
  struct GiftEntity_array *mRewardIconInfs; // x8
  int max_length; // w9
  int v5; // w10
  GiftEntity_o *v6; // x8
  int64_t num; // x8
  int64_t v8; // x2
  int64_t v9; // x3

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
    sub_21FFED4(this);
  v6 = mRewardIconInfs->m_Items[v5];
  if ( !v6 )
    goto LABEL_18;
  questBoardManager = (ServantStatusQuestBoardManager_o *)(unsigned int)v6->fields.prioredIconId;
  this = (ServantStatusQuestBoardDraw_o *)this->fields.mRewardIcon;
  if ( (int)questBoardManager >= 1 )
  {
    if ( this )
    {
      num = (unsigned int)v6->fields.num;
      if ( (int)num <= 1 )
        v8 = -1;
      else
        v8 = num;
      ItemIconComponent__SetItemImage_47939376((ItemIconComponent_o *)this, (int32_t)questBoardManager, v8, 0);
      return;
    }
LABEL_18:
    sub_21FFECC(this, questBoardManager);
  }
  if ( !this )
    goto LABEL_18;
  if ( v6->fields.num <= 1 )
    v9 = -1;
  else
    v9 = (unsigned int)v6->fields.num;
  ItemIconComponent__SetGift_47936840((ItemIconComponent_o *)this, v6->fields.type, v6->fields.objectId, v9, 0, 0);
}


QuestBoardInformationText_o *ServantStatusQuestBoardDraw__CreateQuestBoardInformationText(
        ServantStatusQuestBoardDraw_o *this,
        QuestEntity_o *questEntity,
        EventEntity_o *eventEnt,
        EventCampaignEntity_o *eventCampaignEnt,
        int32_t phase,
        bool isQuestNoneCleared,
        int32_t *costCalcVal,
        int32_t *fixedVal,
        bool *isNotItemConsume,
        const MethodInfo *method)
{
  int target; // w25
  int32_t id; // w27
  __int64 v19; // x1
  __int64 v20; // x2
  QuestBoardInformationText_o *v21; // x28
  __int64 v22; // x2
  const MethodInfo *v23; // x3
  struct System_Int32_array *targetIds; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  bool IsOverrideEntryCondMessage; // w20
  System_String_o *v30; // x0
  System_String_o *v31; // x21
  int64_t EndTime; // x19
  QuestBoardInformationText_o *v33; // x0
  bool v34; // w3
  System_String_o *v35; // x1
  int64_t v36; // x2
  int32_t consumeType; // w8
  int32_t value; // w8
  System_String_o *v39; // x20
  Il2CppObject *EventName; // x0
  System_String_o *v41; // x20
  int64_t v42; // x19
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5935D47 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&QuestBoardInformationText_TypeInfo);
    sub_21FFC50(&StringLiteral_26433/*"{0}"*/);
    this = (ServantStatusQuestBoardDraw_o *)sub_21FFC50(&StringLiteral_13954/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/);
    byte_5935D47 = 1;
  }
  message = 0;
  entity = 0;
  if ( !eventEnt || !eventCampaignEnt )
    goto LABEL_48;
  target = eventCampaignEnt->fields.target;
  id = eventEnt->fields.id;
  v21 = 0;
  if ( CombineAdjustTarget__isTerminalExposable(target, 0) )
  {
    if ( isQuestNoneCleared || (v21 = 0, target != 25) && target != 35 )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19, v20);
      this = (ServantStatusQuestBoardDraw_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
      if ( !this )
        goto LABEL_48;
      this = (ServantStatusQuestBoardDraw_o *)EventCampaignReleaseMaster__isRelease(
                                                (EventCampaignReleaseMaster_o *)this,
                                                id,
                                                eventCampaignEnt->fields.target,
                                                0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, questEntity, v22);
        this = (ServantStatusQuestBoardDraw_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventCampaignMaster___);
        if ( this )
        {
          IsOverrideEntryCondMessage = EventCampaignMaster__IsOverrideEntryCondMessage(
                                         (EventCampaignMaster_o *)this,
                                         &message,
                                         eventCampaignEnt,
                                         0);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27, v28);
          v30 = LocalizationManager__Get((System_String_o *)StringLiteral_13954/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0);
          v31 = System_String__Format_75484576(v30, (Il2CppObject *)message, (Il2CppObject *)StringLiteral_26433/*"{0}"*/, 0);
          EndTime = EventEntity__GetEndTime(eventEnt, 0, 0);
          v33 = (QuestBoardInformationText_o *)sub_21FFEBC(QuestBoardInformationText_TypeInfo);
          v21 = v33;
          v34 = IsOverrideEntryCondMessage;
          v35 = v31;
          v36 = EndTime;
          goto LABEL_46;
        }
        goto LABEL_48;
      }
      if ( target > 24 )
      {
        if ( target == 35 )
        {
          *isNotItemConsume = 1;
          goto LABEL_43;
        }
        if ( target != 25 )
        {
LABEL_43:
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, questEntity, v22);
          v39 = LocalizationManager__Get((System_String_o *)StringLiteral_13954/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0);
          EventName = (Il2CppObject *)EventEntity__getEventName(eventEnt, 0);
          v41 = System_String__Format_75484576(v39, EventName, (Il2CppObject *)StringLiteral_26433/*"{0}"*/, 0);
          v42 = EventEntity__GetEndTime(eventEnt, 0, 0);
          v33 = (QuestBoardInformationText_o *)sub_21FFEBC(QuestBoardInformationText_TypeInfo);
          v21 = v33;
          v35 = v41;
          v36 = v42;
          v34 = 1;
LABEL_46:
          QuestBoardInformationText___ctor(v33, v35, v36, v34, 0, 0, 0);
          return v21;
        }
      }
      else if ( target != 12 )
      {
        goto LABEL_15;
      }
      if ( (eventCampaignEnt->fields.calcType & 0xFFFFFFFE) != 2 )
        return 0;
      if ( !questEntity )
        goto LABEL_48;
      consumeType = questEntity->fields.consumeType;
      if ( consumeType != 4 && consumeType != 1 )
        return 0;
      value = eventCampaignEnt->fields.value;
      *costCalcVal = value;
      if ( eventCampaignEnt->fields.calcType != 3 )
        *fixedVal = value;
LABEL_15:
      if ( target != 24 )
        goto LABEL_43;
      targetIds = eventCampaignEnt->fields.targetIds;
      if ( !targetIds || !targetIds->max_length )
        goto LABEL_43;
      if ( ServantStatusQuestBoardDraw__IsValidSupportSelection(this, questEntity, phase, v23) )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v25, v26);
        this = (ServantStatusQuestBoardDraw_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
        if ( !questEntity || !this )
          goto LABEL_48;
        this = (ServantStatusQuestBoardDraw_o *)QuestPhaseMaster__TryGetEntity(
                                                  (QuestPhaseMaster_o *)this,
                                                  &entity,
                                                  questEntity->fields.id,
                                                  phase,
                                                  0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( entity )
          {
            if ( !entity->fields.isNpcOnly )
              goto LABEL_43;
            return 0;
          }
LABEL_48:
          sub_21FFECC(this, questEntity);
        }
        goto LABEL_43;
      }
      return 0;
    }
  }
  return v21;
}


System_Collections_Generic_List_QuestBoardInformationText__o *ServantStatusQuestBoardDraw__GetCampaignText(
        ServantStatusQuestBoardDraw_o *this,
        int32_t quest_id,
        int32_t phase,
        bool isQuestNoneCleared,
        ServantStatusQuestBoardManager_o *questBoardManager,
        int32_t *costCalcVal,
        int32_t *fixedVal,
        bool *isNotItemConsume,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v16; // x19
  System_Collections_Generic_IEnumerable_T__o *CampaignTextListByEventQuestMaster; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x2
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  QuestReleaseOverwriteEntity_o *v24; // x20
  Il2CppObject *p_endedAt; // x20
  __int64 endedAt; // t1
  int64_t *v27; // x8
  int64_t v28; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  System_String_o *EventName; // x21
  System_String_o *v32; // x0
  System_String_o *v33; // x22
  QuestBoardInformationText_o *v34; // x21
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  const MethodInfo *v46; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5935D45 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&QuestBoardInformationText_TypeInfo);
    sub_21FFC50(&StringLiteral_26433/*"{0}"*/);
    sub_21FFC50(&StringLiteral_113/*" "*/);
    sub_21FFC50(&StringLiteral_13964/*"TIME_REST_STRING"*/);
    byte_5935D45 = 1;
  }
  entity = 0;
  v16 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)ServantStatusQuestBoardDraw__GetCampaignTextListByEventQuestMaster(
                                                                                        this,
                                                                                        this->fields.questId,
                                                                                        phase,
                                                                                        isQuestNoneCleared,
                                                                                        questBoardManager,
                                                                                        costCalcVal,
                                                                                        fixedVal,
                                                                                        isNotItemConsume,
                                                                                        v46);
  if ( !v16 )
    goto LABEL_25;
  System_Collections_Generic_List_object___AddRange(
    v16,
    CampaignTextListByEventQuestMaster,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19, v20);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  if ( !questBoardManager || !CampaignTextListByEventQuestMaster )
    goto LABEL_25;
  EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                             (QuestReleaseOverwriteMaster_o *)CampaignTextListByEventQuestMaster,
                             this->fields.questId,
                             questBoardManager->fields.mListCreatedTime,
                             0);
  if ( !EntityByQuestIdAndTime )
    return (System_Collections_Generic_List_QuestBoardInformationText__o *)v16;
  v24 = EntityByQuestIdAndTime;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22, v23);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !CampaignTextListByEventQuestMaster )
    goto LABEL_25;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)CampaignTextListByEventQuestMaster,
          &entity,
          v24->fields.eventId,
          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return (System_Collections_Generic_List_QuestBoardInformationText__o *)v16;
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)entity;
  if ( !entity )
    goto LABEL_25;
  if ( LODWORD(entity[1].monitor) != 25 )
    return (System_Collections_Generic_List_QuestBoardInformationText__o *)v16;
  endedAt = v24->fields.endedAt;
  p_endedAt = (Il2CppObject *)&v24->fields.endedAt;
  v27 = (int64_t *)(endedAt <= 0 ? &entity[6] : p_endedAt);
  v28 = *v27;
  EventName = EventEntity__getEventName((EventEntity_o *)entity, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29, v30);
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_13964/*"TIME_REST_STRING"*/, 0);
  v33 = System_String__Concat_75483552(
          EventName,
          (System_String_o *)StringLiteral_113/*" "*/,
          v32,
          (System_String_o *)StringLiteral_26433/*"{0}"*/,
          0);
  v34 = (QuestBoardInformationText_o *)sub_21FFEBC(QuestBoardInformationText_TypeInfo);
  QuestBoardInformationText___ctor(v34, v33, v28, 0, 1, 0, 0);
  items = v16->fields._items;
  v42 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
  ++v16->fields._version;
  if ( !items )
LABEL_25:
    sub_21FFECC(CampaignTextListByEventQuestMaster, v18);
  size = v16->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v16,
      (Il2CppObject *)v34,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
  }
  else
  {
    v44 = &items->obj.klass + size;
    v16->fields._size = size + 1;
    v44[4] = (Il2CppClass *)v34;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v44 + 4), (int32_t)v34, v35, v36, v37, v38, v39, v40);
  }
  return (System_Collections_Generic_List_QuestBoardInformationText__o *)v16;
}


System_Collections_Generic_List_QuestBoardInformationText__o *ServantStatusQuestBoardDraw__GetCampaignTextListByEventQuestMaster(
        ServantStatusQuestBoardDraw_o *this,
        int32_t questId,
        int32_t phase,
        bool isQuestNoneCleared,
        ServantStatusQuestBoardManager_o *questBoardManager,
        int32_t *costCalcVal,
        int32_t *fixedVal,
        bool *isNotItemConsume,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v16; // x25
  void *Instance; // x0
  __int64 v18; // x1
  DataManager_o *v19; // x28
  Il2CppObject *MasterData_object; // x26
  int32_t v21; // w19
  QuestEntity_o *v22; // x27
  int64_t mListCreatedTime; // x29
  int v24; // w8
  void *v25; // x28
  unsigned int v26; // w19
  EventEntity_o *v27; // x29
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass *v37; // x1
  Il2CppClass **v38; // x0
  const MethodInfo *v40; // [xsp+8h] [xbp-78h]
  bool *v41; // [xsp+18h] [xbp-68h]

  if ( (byte_5935D46 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5935D46 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  v19 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = DataManager__GetMasterData_object_(
               v19,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_22;
  v21 = questId;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               questId,
               (const MethodInfo_3EDD388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !questBoardManager )
    goto LABEL_22;
  v22 = (QuestEntity_o *)Instance;
  mListCreatedTime = questBoardManager->fields.mListCreatedTime;
  Instance = DataManager__GetMasterData_object_(
               v19,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = EventQuestMaster__GetEnabledEventCampaignForQuest(
               (EventQuestMaster_o *)Instance,
               v21,
               phase,
               mListCreatedTime,
               7,
               0);
  if ( !Instance )
    goto LABEL_22;
  v24 = *((_DWORD *)Instance + 6);
  v25 = Instance;
  if ( v24 >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= v24 )
        sub_21FFED4(Instance);
      v27 = (EventEntity_o *)*((_QWORD *)v25 + (int)v26 + 4);
      if ( !v27 || !MasterData_object )
        break;
      Instance = EventCampaignMaster__getData((EventCampaignMaster_o *)MasterData_object, v27->fields.id, 0);
      if ( Instance )
      {
        Instance = ServantStatusQuestBoardDraw__CreateQuestBoardInformationText(
                     this,
                     v22,
                     v27,
                     (EventCampaignEntity_o *)Instance,
                     phase,
                     isQuestNoneCleared,
                     costCalcVal,
                     fixedVal,
                     v41,
                     v40);
        if ( Instance )
        {
          if ( !v16 )
            break;
          items = v16->fields._items;
          v35 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
          ++v16->fields._version;
          if ( !items )
            break;
          size = v16->fields._size;
          v37 = (Il2CppClass *)Instance;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v16,
              (Il2CppObject *)Instance,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = &items->obj.klass + size;
            v16->fields._size = size + 1;
            v38[4] = v37;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v38 + 4), (int32_t)v37, v28, v29, v30, v31, v32, v33);
          }
        }
      }
      v24 = *((_DWORD *)v25 + 6);
      if ( (int)++v26 >= v24 )
        return (System_Collections_Generic_List_QuestBoardInformationText__o *)v16;
    }
LABEL_22:
    sub_21FFECC(Instance, v18);
  }
  return (System_Collections_Generic_List_QuestBoardInformationText__o *)v16;
}


bool ServantStatusQuestBoardDraw__IsClose(MapControl_QuestInfo_o *qinf, const MethodInfo *method)
{
  __int64 v2; // x2
  MapControl_WarInfo_o *IsQuestReleaseAll; // x0
  __int64 v5; // x1
  char v6; // w8
  __int64 v8; // x2
  struct MapControl_SpotInfo_o *SpotInfo_k__BackingField; // x8
  Il2CppObject *Master_object; // x20
  System_Collections_Generic_List_object__o *v11; // x21
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x20
  __int64 v14; // x1
  Il2CppObject *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  Il2CppObject *v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  MapControl_WarInfo_o *v27; // x20
  __int64 v28; // x8
  __int64 v29; // x23
  __int64 v30; // x8
  int64_t v31; // x22
  int32_t v32; // w19
  int32_t v33; // w21
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_5935D3B & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5935D3B = 1;
  }
  entityList = 0;
  memset(&v35, 0, sizeof(v35));
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  IsQuestReleaseAll = (MapControl_WarInfo_o *)TerminalPramsManager__get_Debug_IsQuestReleaseAll(0);
  if ( ((unsigned __int8)IsQuestReleaseAll & 1) != 0 )
    goto LABEL_8;
  if ( !qinf )
    goto LABEL_51;
  if ( MapControl_QuestInfo__IsClear(qinf, 0) )
  {
LABEL_8:
    v6 = 0;
    return v6 & 1;
  }
  if ( MapControl_QuestInfo__GetQuestType(qinf, 0) == 3 )
  {
    IsQuestReleaseAll = qinf->fields._WarInfo_k__BackingField;
    if ( !IsQuestReleaseAll )
      goto LABEL_51;
    IsQuestReleaseAll = (MapControl_WarInfo_o *)MapControl_WarInfo__GetMine(IsQuestReleaseAll, 0);
    if ( !IsQuestReleaseAll )
      goto LABEL_51;
    if ( !WarEntity__HasFlag((WarEntity_o *)IsQuestReleaseAll, 16, 0) )
    {
      IsQuestReleaseAll = qinf->fields._WarInfo_k__BackingField;
      if ( !IsQuestReleaseAll )
        goto LABEL_51;
      IsQuestReleaseAll = (MapControl_WarInfo_o *)MapControl_WarInfo__GetStatus(IsQuestReleaseAll, 0);
      if ( !(_DWORD)IsQuestReleaseAll )
        goto LABEL_48;
      SpotInfo_k__BackingField = qinf->fields._SpotInfo_k__BackingField;
      if ( !SpotInfo_k__BackingField )
        goto LABEL_51;
      if ( SpotInfo_k__BackingField->fields.dispType != 1 )
      {
LABEL_48:
        v6 = 1;
        return v6 & 1;
      }
    }
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5, v8);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  v11 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v11;
  if ( !Master_object )
    goto LABEL_51;
  if ( QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
         (QuestReleaseOverwriteMaster_o *)Master_object,
         &entityList,
         qinf->fields.questId,
         0,
         0) )
  {
    v13 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v13,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    IsQuestReleaseAll = (MapControl_WarInfo_o *)entityList;
    if ( !entityList )
      goto LABEL_51;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v34,
      (System_Collections_Generic_List_object__o *)entityList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    v35 = v34;
    v34.fields._list = 0;
    *(_QWORD *)&v34.fields._index = &v35;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v35,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
    {
      if ( !v35.fields._current )
        sub_21FFECC(0, v14);
      v15 = (Il2CppObject *)QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
                              (QuestReleaseOverwriteEntity_o *)v35.fields._current,
                              0);
      v22 = v15;
      if ( !v13
        || (items = v13->fields._items,
            v24 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__,
            ++v13->fields._version,
            !items) )
      {
        sub_21FFECC(v15, v15);
      }
      size = v13->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v13,
          v15,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        v13->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v22;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v22, v16, v17, v18, v19, v20, v21);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v35,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    if ( !v13 )
      goto LABEL_51;
    IsQuestReleaseAll = (MapControl_WarInfo_o *)System_Collections_Generic_List_object___ToArray(
                                                  v13,
                                                  (const MethodInfo_445164C *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    v27 = IsQuestReleaseAll;
    if ( IsQuestReleaseAll )
      goto LABEL_37;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5, v12);
  IsQuestReleaseAll = (MapControl_WarInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !IsQuestReleaseAll
    || (IsQuestReleaseAll = (MapControl_WarInfo_o *)QuestReleaseMaster__getListByQuestID(
                                                      (QuestReleaseMaster_o *)IsQuestReleaseAll,
                                                      qinf->fields.questId,
                                                      0),
        (v27 = IsQuestReleaseAll) == 0) )
  {
LABEL_51:
    sub_21FFECC(IsQuestReleaseAll, v5);
  }
LABEL_37:
  v28 = *(_QWORD *)&v27->fields.status;
  if ( !v28 )
  {
    v6 = qinf->fields.dispType != 1;
    return v6 & 1;
  }
  if ( (int)v28 < 1 )
    goto LABEL_8;
  v29 = 0;
  do
  {
    if ( (unsigned int)v29 >= (unsigned int)v28 )
      sub_21FFED4(IsQuestReleaseAll);
    v30 = *((_QWORD *)&v27->fields.mapInfoList + v29);
    if ( !v30 )
      goto LABEL_51;
    v31 = *(_QWORD *)(v30 + 32);
    v32 = *(_DWORD *)(v30 + 20);
    v33 = *(_DWORD *)(v30 + 24);
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v5, v12);
    IsQuestReleaseAll = (MapControl_WarInfo_o *)CondType__IsOpen(v32, v33, v31, 0, 0, 0);
    if ( ((unsigned __int8)IsQuestReleaseAll & 1) == 0 )
      break;
    LODWORD(v28) = v27->fields.status;
    ++v29;
  }
  while ( (int)v29 < (int)v28 );
  v6 = (unsigned __int8)IsQuestReleaseAll ^ 1;
  return v6 & 1;
}


bool ServantStatusQuestBoardDraw__IsEventTime(
        ServantStatusQuestBoardDraw_o *this,
        EventEntity_o *eventEntity,
        int64_t checkTime,
        const MethodInfo *method)
{
  return eventEntity && EventEntity__IsEventPeriod(eventEntity, checkTime, 0);
}


bool ServantStatusQuestBoardDraw__IsInfoTextListNullOrEmpty(
        ServantStatusQuestBoardDraw_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8

  if ( (byte_5935D44 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_5935D44 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  return !mInfoTextList || mInfoTextList->fields._size == 0;
}


bool ServantStatusQuestBoardDraw__IsMultiInfoText(ServantStatusQuestBoardDraw_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8

  if ( (byte_5935D43 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_5935D43 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  return mInfoTextList && mInfoTextList->fields._size > 1;
}


bool ServantStatusQuestBoardDraw__IsRewardIcons(ServantStatusQuestBoardDraw_o *this, const MethodInfo *method)
{
  struct GiftEntity_array *mRewardIconInfs; // x8

  mRewardIconInfs = this->fields.mRewardIconInfs;
  return mRewardIconInfs && SLODWORD(mRewardIconInfs->max_length) > 1;
}


// local variable allocation has failed, the output may be wrong!
bool ServantStatusQuestBoardDraw__IsValidSupportSelection(
        ServantStatusQuestBoardDraw_o *this,
        QuestEntity_o *questEntity,
        int32_t phase,
        const MethodInfo *method)
{
  int v6; // w8
  QuestRestrictionInfoMaster_o *Master_object; // x0
  __int64 v8; // x1
  bool HasFlag; // w0
  bool v10; // w21
  QuestRestrictionInfoEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5935D48 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5935D48 = 1;
  }
  v6 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v6 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, questEntity, *(_QWORD *)&phase);
  Master_object = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
  if ( !questEntity || !Master_object )
    goto LABEL_17;
  if ( QuestRestrictionInfoMaster__TryGetEntity(Master_object, &entity, questEntity->fields.id, phase, 0) )
  {
    Master_object = (QuestRestrictionInfoMaster_o *)entity;
    if ( !entity )
      goto LABEL_17;
    if ( !QuestRestrictionInfoEntity__HasFlag(entity, 0x80000, 0) )
    {
      Master_object = (QuestRestrictionInfoMaster_o *)entity;
      if ( entity )
      {
        HasFlag = QuestRestrictionInfoEntity__HasFlag(entity, 0x100000, 0);
LABEL_15:
        v10 = !HasFlag;
        return v10 & ~QuestEntity__HasFlag_49432408(questEntity, 2, phase, 0) & 1;
      }
LABEL_17:
      sub_21FFECC(Master_object, v8);
    }
  }
  else if ( !QuestEntity__HasFlag_49432408(questEntity, 0x80000, phase, 0) )
  {
    HasFlag = QuestEntity__HasFlag_49432408(questEntity, 0x100000, phase, 0);
    goto LABEL_15;
  }
  v10 = 0;
  return v10 & ~QuestEntity__HasFlag_49432408(questEntity, 2, phase, 0) & 1;
}


void ServantStatusQuestBoardDraw__OnChangeAlphaAnim(
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


void ServantStatusQuestBoardDraw__OnClick(ServantStatusQuestBoardDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *inputMessageObject; // x20
  int32_t questId; // w8
  UnityEngine_GameObject_o *v6; // x19
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5935D49 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_ServantStatusQuestBoardDraw_OnClick__);
    sub_21FFC50(&StringLiteral_10258/*"OnClickServantQuest"*/);
    byte_5935D49 = 1;
  }
  inputMessageObject = (UnityEngine_Object_o *)this->fields.inputMessageObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(inputMessageObject, 0, 0) || (questId = this->fields.questId) == 0 )
  {
    v9 = Method_ServantStatusQuestBoardDraw_OnClick__;
    if ( (*((_BYTE *)Method_ServantStatusQuestBoardDraw_OnClick__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_21FFC68(Method_ServantStatusQuestBoardDraw_OnClick__);
    v10 = (System_Reflection_MethodBase_o *)sub_21FFC34(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0, 0);
  }
  else
  {
    v6 = this->fields.inputMessageObject;
    v11 = questId;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v11);
    if ( !v6 )
      sub_21FFECC(v7, v8);
    UnityEngine_GameObject__SendMessage_83224784(v6, (System_String_o *)StringLiteral_10258/*"OnClickServantQuest"*/, v7, 0);
  }
}


void ServantStatusQuestBoardDraw__ResetInfoTextList(ServantStatusQuestBoardDraw_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *v3; // x8
  MissionNaviTransitionBoardItem_o *p_mInfoTextList; // x19
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // t1
  int32_t size; // w2
  int v7; // w9
  System_Collections_Generic_List_object__o *v8; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_5935D3E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestBoardInformationText__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    byte_5935D3E = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  p_mInfoTextList = (MissionNaviTransitionBoardItem_o *)&this->fields.mInfoTextList;
  v3 = mInfoTextList;
  if ( mInfoTextList )
  {
    size = v3->fields._size;
    v7 = v3->fields._version + 1;
    v3->fields._size = 0;
    v3->fields._version = v7;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v3->fields._items, 0, size, 0);
  }
  else
  {
    v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    p_mInfoTextList->klass = (MissionNaviTransitionBoardItem_c *)v8;
    sub_21FFBF4(p_mInfoTextList, (int32_t)v8, v9, v10, v11, v12, v13, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusQuestBoardDraw__SetAdvanceNoticeText(
        ServantStatusQuestBoardDraw_o *this,
        int32_t questReleaseClosedID,
        WarEntity_o *warEntity,
        QuestEntity_o *questEntity,
        QuestReleaseEntity_o *questReleaseEntity,
        int64_t checkTime,
        QuestReleaseOverwriteEntity_o *questReleaseOverwriteEntity,
        const MethodInfo *method)
{
  __int64 Master_object; // x0
  Il2CppClass *klass; // x1
  System_String_o *monitor; // x22
  bool v17; // w25
  int monitor_high; // w21
  char v19; // w23
  int32_t type; // w8
  int32_t targetId; // w26
  System_String_o *v22; // x27
  __int64 v23; // x1
  __int64 v24; // x2
  int32_t WarID_ByQuestID; // w26
  Il2CppObject *v26; // x0
  Il2CppObject *PrioredName; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  int64_t OpenedAt; // x26
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x26
  System_DateTime_o v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  __int64 v41; // x27
  __int64 v42; // x1
  System_DateTime_o v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  __int64 v50; // x27
  System_DateTime_o v51; // x0
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  __int64 v58; // x27
  System_DateTime_o v59; // x0
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  __int64 v66; // x27
  System_String_o *v67; // x0
  bool IsNullOrEmpty; // w24
  __int64 v69; // x1
  __int64 v70; // x2
  UILabel_o *mTitleNameLb; // x25
  __int64 v72; // x2
  const MethodInfo *v73; // x2
  __int64 v74; // x2
  int v75; // w8
  int32_t leftIndent; // w25
  int32_t *p_ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT; // x8
  int32_t v78; // w26
  float v79; // s8
  float v80; // s1 OVERLAPPED
  float v81; // s0
  int v82; // s2
  __int64 v83; // x2
  float v84; // s8
  float v85; // s0 OVERLAPPED
  float v86; // s1
  float v87; // s0 OVERLAPPED
  int v88; // s2
  int v89; // s2
  float v90; // s1
  __int64 v91; // x2
  UIWidget_o *mOverwriteAdvanceNoticeLb; // x23
  const MethodInfo *v93; // x4
  __int64 v94; // x2
  float v95; // s8
  __int64 v96; // x2
  const MethodInfo *v97; // x4
  System_String_o *overlayClosedMessage; // x20
  UILabel_o *v99; // x22
  UnityEngine_Object_o *mOverwriteAdvanceNoticeArrowObj; // x20
  __int64 v101; // x0
  int32_t Minute; // [xsp+4h] [xbp-8Ch] BYREF
  int32_t Hour; // [xsp+8h] [xbp-88h] BYREF
  int32_t Day; // [xsp+Ch] [xbp-84h] BYREF
  int64_t value; // [xsp+10h] [xbp-80h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v108; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5935D40 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ClosedMessageMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_WarMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_21FFC50(&System_DateTime_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&ServantStatusQuestBoardDraw_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_21FFC50(&StringLiteral_15394/*"UNKNOWN_QUEST_NAME"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5935D40 = 1;
  }
  entity = 0;
  dateData = 0;
  if ( questReleaseClosedID < 1 )
    return;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questReleaseClosedID, warEntity);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ClosedMessageMaster___);
  if ( !Master_object )
    goto LABEL_118;
  monitor = (System_String_o *)StringLiteral_1/*""*/;
  Master_object = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    questReleaseClosedID,
                    (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
  if ( (Master_object & 1) != 0 )
  {
    Master_object = (__int64)entity;
    if ( !entity )
      goto LABEL_118;
    monitor = (System_String_o *)entity[1].monitor;
    Master_object = ClosedMessageEntity__IsChangeDispClosedMessage((ClosedMessageEntity_o *)entity, 0);
    if ( !entity )
      goto LABEL_118;
    v17 = Master_object;
    Master_object = ClosedMessageEntity__IsChangeDispPositionLeft((ClosedMessageEntity_o *)entity, 0);
    if ( !entity )
      goto LABEL_118;
    monitor_high = HIDWORD(entity[2].monitor);
    v19 = Master_object;
  }
  else
  {
    monitor_high = 0;
    v19 = 0;
    v17 = 0;
  }
  if ( !questReleaseEntity )
    goto LABEL_118;
  type = questReleaseEntity->fields.type;
  if ( type > 8 )
  {
    if ( type == 9 )
      goto LABEL_44;
    if ( type != 12 )
      goto LABEL_47;
    if ( !questEntity )
      goto LABEL_118;
    OpenedAt = QuestEntity__getOpenedAt(questEntity, 0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v28, v29);
    dateData = NetworkManager__getServerDateTime_48311712(OpenedAt, 0).fields._dateData;
    v33 = sub_21FFD10(object___TypeInfo, 4);
    if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v31, v32);
    v34.fields._dateData = (uint64_t)&dateData;
    LODWORD(value) = System_DateTime__get_Month(v34, 0);
    Master_object = j_il2cpp_value_box_0(qword_594C070, &value);
    if ( !v33 )
      goto LABEL_118;
    v41 = Master_object;
    if ( !Master_object || (Master_object = sub_21FFDA4(Master_object, *(_QWORD *)(*(_QWORD *)v33 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v33 + 24) )
        goto LABEL_119;
      *(_QWORD *)(v33 + 32) = v41;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v33 + 32), v41, v35, v36, v37, v38, v39, v40);
      v43.fields._dateData = (uint64_t)&dateData;
      Day = System_DateTime__get_Day(v43, 0);
      Master_object = j_il2cpp_value_box_0(qword_594C070, &Day);
      v50 = Master_object;
      if ( !Master_object || (Master_object = sub_21FFDA4(Master_object, *(_QWORD *)(*(_QWORD *)v33 + 64LL))) != 0 )
      {
        if ( (*(_DWORD *)(v33 + 24) & 0xFFFFFFFE) == 0 )
          goto LABEL_119;
        *(_QWORD *)(v33 + 40) = v50;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v33 + 40), v50, v44, v45, v46, v47, v48, v49);
        v51.fields._dateData = (uint64_t)&dateData;
        Hour = System_DateTime__get_Hour(v51, 0);
        Master_object = j_il2cpp_value_box_0(qword_594C070, &Hour);
        v58 = Master_object;
        if ( !Master_object || (Master_object = sub_21FFDA4(Master_object, *(_QWORD *)(*(_QWORD *)v33 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v33 + 24) <= 2u )
            goto LABEL_119;
          *(_QWORD *)(v33 + 48) = v58;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v33 + 48), v58, v52, v53, v54, v55, v56, v57);
          v59.fields._dateData = (uint64_t)&dateData;
          Minute = System_DateTime__get_Minute(v59, 0);
          Master_object = j_il2cpp_value_box_0(qword_594C070, &Minute);
          v66 = Master_object;
          if ( !Master_object || (Master_object = sub_21FFDA4(Master_object, *(_QWORD *)(*(_QWORD *)v33 + 64LL))) != 0 )
          {
            if ( (*(_DWORD *)(v33 + 24) & 0xFFFFFFFC) != 0 )
            {
              *(_QWORD *)(v33 + 56) = v66;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v33 + 56), v66, v60, v61, v62, v63, v64, v65);
              v67 = System_String__Format_75484712(monitor, (System_Object_array *)v33, 0);
LABEL_46:
              monitor = v67;
              goto LABEL_47;
            }
LABEL_119:
            sub_21FFED4(Master_object);
          }
        }
      }
    }
    v101 = sub_21FFEF0(Master_object, v42);
    sub_21FFD90(v101, 0);
  }
  if ( (unsigned int)(type - 6) < 2 )
  {
LABEL_44:
    value = questReleaseEntity->fields.value;
    PrioredName = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &value);
    goto LABEL_45;
  }
  if ( type != 1 )
    goto LABEL_47;
  targetId = questReleaseEntity->fields.targetId;
  v22 = (System_String_o *)StringLiteral_1/*""*/;
  Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Master_object )
    goto LABEL_118;
  WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Master_object, targetId, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v23, v24);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_118;
  v26 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          WarID_ByQuestID,
          (const MethodInfo_3EDD388 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( v26 )
  {
    PrioredName = (Il2CppObject *)WarEntity__GetPrioredName((WarEntity_o *)v26, 0);
LABEL_45:
    v67 = System_String__Format(monitor, PrioredName, 0);
    goto LABEL_46;
  }
  monitor = v22;
LABEL_47:
  if ( warEntity != 0 && !v17 )
    v17 = WarEntity__IsChangeDispClosedMessage(warEntity, 0);
  if ( !questReleaseOverwriteEntity )
  {
    IsNullOrEmpty = 1;
    if ( v17 )
      goto LABEL_51;
LABEL_57:
    Master_object = (__int64)this->fields.mTitleNameLb;
    if ( Master_object )
    {
      UILabel__set_text((UILabel_o *)Master_object, monitor, 0);
      Master_object = (__int64)this->fields.mAdvanceNoticeLb;
      if ( Master_object )
      {
        UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0);
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( Master_object )
        {
          UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0);
          ServantStatusQuestBoardDraw__SetOverwriteCondText(this, questReleaseOverwriteEntity, v73);
          return;
        }
      }
    }
    goto LABEL_118;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(questReleaseOverwriteEntity->fields.overlayClosedMessage, 0);
  if ( !v17 )
    goto LABEL_57;
LABEL_51:
  Master_object = (__int64)this->fields.mAdvanceNoticeObj;
  if ( !Master_object )
    goto LABEL_118;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  mTitleNameLb = this->fields.mTitleNameLb;
  if ( entity )
  {
    Master_object = System_String__op_Inequality(
                      (System_String_o *)entity[2].klass,
                      (System_String_o *)StringLiteral_1/*""*/,
                      0);
    if ( (Master_object & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_118;
      klass = entity[2].klass;
    }
    else
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, klass, v72);
      Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15394/*"UNKNOWN_QUEST_NAME"*/, 0);
      klass = (Il2CppClass *)Master_object;
    }
    if ( !mTitleNameLb )
LABEL_118:
      sub_21FFECC(Master_object, klass);
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v69, v70);
    Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15394/*"UNKNOWN_QUEST_NAME"*/, 0);
    if ( !mTitleNameLb )
      goto LABEL_118;
    klass = (Il2CppClass *)Master_object;
  }
  UILabel__set_text(mTitleNameLb, (System_String_o *)klass, 0);
  Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
  v75 = *(&ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished + 1);
  if ( IsNullOrEmpty )
  {
    if ( !v75 )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, klass, v74);
      Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
    }
    leftIndent = 0;
    p_ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT = (int32_t *)(*(_QWORD *)(Master_object + 184) + 8LL);
  }
  else
  {
    if ( !v75 )
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, klass, v74);
    if ( !questReleaseOverwriteEntity )
      goto LABEL_118;
    Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
    leftIndent = questReleaseOverwriteEntity->fields.leftIndent;
    p_ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT = &ServantStatusQuestBoardDraw_TypeInfo->static_fields->ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT;
  }
  v78 = *p_ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT;
  if ( (v19 & 1) != 0 )
  {
    if ( !*(_DWORD *)(Master_object + 228) )
    {
      j_il2cpp_runtime_class_init_0(Master_object, klass, v74);
      Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
    }
    if ( !this->fields.mAdvanceNoticeLb )
      goto LABEL_118;
    v79 = *(float *)(*(_QWORD *)(Master_object + 184) + 16LL);
    UIWidget__set_pivot((UIWidget_o *)this->fields.mAdvanceNoticeLb, 3, 0);
    Master_object = (__int64)this->fields.mAdvanceNoticeLb;
    if ( !Master_object )
      goto LABEL_118;
    Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0);
    if ( !Master_object )
      goto LABEL_118;
    v80 = 0.0;
    if ( !IsNullOrEmpty )
      v80 = 24.0;
    v82 = 0;
    v81 = v79 + (float)monitor_high;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)Master_object,
      *(UnityEngine_Vector3_o *)(&v80 - 1),
      0);
    Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
    if ( !*(&ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, klass, v83);
      Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
    }
    if ( !this->fields.mOverwriteAdvanceNoticeLb )
      goto LABEL_118;
    v84 = *(float *)(*(_QWORD *)(Master_object + 184) + 16LL);
    UIWidget__set_pivot((UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb, 3, 0);
    Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
    if ( !Master_object )
      goto LABEL_118;
    Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0);
    if ( !Master_object )
      goto LABEL_118;
    v85 = v84 + (float)leftIndent;
  }
  else
  {
    Master_object = (__int64)this->fields.mAdvanceNoticeLb;
    if ( !Master_object )
      goto LABEL_118;
    UIWidget__set_pivot((UIWidget_o *)Master_object, 4, 0);
    Master_object = (__int64)this->fields.mAdvanceNoticeLb;
    if ( !Master_object )
      goto LABEL_118;
    Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0);
    if ( !Master_object )
      goto LABEL_118;
    v86 = 0.0;
    v87 = vcvts_n_f32_s32(monitor_high, 1u);
    if ( !IsNullOrEmpty )
      v86 = 24.0;
    v88 = 0;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)Master_object,
      *(UnityEngine_Vector3_o *)&v87,
      0);
    Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
    if ( !Master_object )
      goto LABEL_118;
    UIWidget__set_pivot((UIWidget_o *)Master_object, 4, 0);
    Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
    if ( !Master_object )
      goto LABEL_118;
    Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0);
    if ( !Master_object )
      goto LABEL_118;
    v85 = vcvts_n_f32_s32(leftIndent, 1u);
  }
  v89 = 0;
  v90 = -26.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Master_object, *(UnityEngine_Vector3_o *)&v85, 0);
  Master_object = (__int64)this->fields.mAdvanceNoticeLb;
  if ( !Master_object )
    goto LABEL_118;
  UIWidget__set_height((UIWidget_o *)Master_object, v78, 0);
  Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
  mOverwriteAdvanceNoticeLb = (UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb;
  if ( !*(&ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, klass, v91);
  if ( !mOverwriteAdvanceNoticeLb )
    goto LABEL_118;
  UIWidget__set_height(
    mOverwriteAdvanceNoticeLb,
    ServantStatusQuestBoardDraw_TypeInfo->static_fields->ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT,
    0);
  ServantStatusQuestBoardDraw___SetAdvanceNoticeText_g__CalculateLabel_54_0(
    this->fields.mAdvanceNoticeLb,
    monitor,
    v78,
    monitor_high,
    v93);
  v95 = 0.0;
  if ( !IsNullOrEmpty )
  {
    Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
    if ( !Master_object )
      goto LABEL_118;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
    if ( !questReleaseOverwriteEntity )
      goto LABEL_118;
    overlayClosedMessage = questReleaseOverwriteEntity->fields.overlayClosedMessage;
    v99 = this->fields.mOverwriteAdvanceNoticeLb;
    if ( !*(&ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, klass, v96);
    v95 = vcvts_n_f32_s32(monitor_high, 1u);
    ServantStatusQuestBoardDraw___SetAdvanceNoticeText_g__CalculateLabel_54_0(
      v99,
      overlayClosedMessage,
      v78,
      leftIndent,
      v97);
  }
  mOverwriteAdvanceNoticeArrowObj = (UnityEngine_Object_o *)this->fields.mOverwriteAdvanceNoticeArrowObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, klass, v94);
  if ( UnityEngine_Object__op_Inequality(mOverwriteAdvanceNoticeArrowObj, 0, 0) )
  {
    Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeArrowObj;
    if ( Master_object )
    {
      Master_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Master_object, 0);
      if ( Master_object )
      {
        v108.fields.y = 0.0;
        v108.fields.z = 0.0;
        v108.fields.x = v95;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Master_object, v108, 0);
        return;
      }
    }
    goto LABEL_118;
  }
}


void ServantStatusQuestBoardDraw__SetDark(ServantStatusQuestBoardDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UIWidget_o *mLineSp; // x0
  UISprite_o *mcBaseP; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  UILabel_o *mNoneLb; // x20
  const MethodInfo *v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct UnityEngine_GameObject_o **p_inputMessageObject; // x19
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  if ( (byte_5935D3C & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&ServantStatusQuestBoardDraw_TypeInfo);
    sub_21FFC50(&StringLiteral_12416/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5935D3C = 1;
  }
  mLineSp = (UIWidget_o *)ServantStatusQuestBoardDraw_TypeInfo;
  mcBaseP = this->fields.mcBaseP;
  if ( !*(&ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, method, v2);
  if ( !mcBaseP )
    goto LABEL_27;
  UISprite__set_spriteName(mcBaseP, ServantStatusQuestBoardDraw_TypeInfo->static_fields->DARK_BOARD_SPRITE_NAME, 0);
  mLineSp = (UIWidget_o *)this->fields.mcBaseP;
  if ( !mLineSp )
    goto LABEL_27;
  UIWidget__set_width(mLineSp, ServantStatusQuestBoardDraw_TypeInfo->static_fields->DARK_BOARD_WIDTH, 0);
  mLineSp = (UIWidget_o *)this->fields.mcBaseP;
  if ( !mLineSp )
    goto LABEL_27;
  UIWidget__set_height(mLineSp, ServantStatusQuestBoardDraw_TypeInfo->static_fields->DARK_BOARD_HIGHT, 0);
  mLineSp = (UIWidget_o *)this->fields.mLineSp;
  if ( !mLineSp )
    goto LABEL_27;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLineSp, 0, 0);
  mLineSp = (UIWidget_o *)this->fields.mTitle2Sp;
  if ( !mLineSp )
    goto LABEL_27;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLineSp, 0, 0);
  mLineSp = (UIWidget_o *)this->fields.mTitleSp;
  if ( !mLineSp )
    goto LABEL_27;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLineSp, 0, 0);
  mLineSp = (UIWidget_o *)this->fields.mClearObj;
  if ( !mLineSp )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0);
  mLineSp = (UIWidget_o *)this->fields.mLinkObj;
  if ( !mLineSp )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0);
  mNoneLb = this->fields.mNoneLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
  mLineSp = (UIWidget_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12416/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/, 0);
  if ( !mNoneLb )
    goto LABEL_27;
  UILabel__set_text(mNoneLb, (System_String_o *)mLineSp, 0);
  mLineSp = (UIWidget_o *)this->fields.mTitleNameLb;
  if ( !mLineSp )
    goto LABEL_27;
  UILabel__set_text((UILabel_o *)mLineSp, (System_String_o *)StringLiteral_1/*""*/, 0);
  mLineSp = (UIWidget_o *)this->fields.mTitleShortcutSp;
  if ( !mLineSp )
    goto LABEL_27;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLineSp, 0, 0);
  mLineSp = (UIWidget_o *)this->fields.mTitleShortcutLb;
  if ( !mLineSp )
    goto LABEL_27;
  UILabel__set_text((UILabel_o *)mLineSp, (System_String_o *)StringLiteral_1/*""*/, 0);
  ServantStatusQuestBoardDraw__ResetInfoTextList(this, v9);
  mLineSp = (UIWidget_o *)this->fields.mOptionInfoLb;
  if ( !mLineSp )
    goto LABEL_27;
  mLineSp = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mLineSp, 0);
  if ( !mLineSp )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0);
  this->fields.mRewardIconInfs = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mRewardIconInfs, 0, v10, v11, v12, v13, v14, v15);
  mLineSp = (UIWidget_o *)this->fields.mRewardIcon;
  if ( !mLineSp
    || (mLineSp = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mLineSp, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0),
        (mLineSp = (UIWidget_o *)this->fields.mRewardObj) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0),
        (mLineSp = (UIWidget_o *)this->fields.mRewardGetSP) == 0)
    || (mLineSp = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mLineSp, 0)) == 0 )
  {
LABEL_27:
    sub_21FFECC(mLineSp, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0);
  this->fields.inputMessageObject = 0;
  p_inputMessageObject = &this->fields.inputMessageObject;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_inputMessageObject, 0, v17, v18, v19, v20, v21, v22);
  *((_DWORD *)p_inputMessageObject + 2) = 0;
  p_inputMessageObject[2] = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(p_inputMessageObject + 2), 0, v23, v24, v25, v26, v27, v28);
}


void ServantStatusQuestBoardDraw__SetInfoTextAlpha(
        ServantStatusQuestBoardDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8
  BoardOptionTextWithIconComponent_o *mOptionInfoLb; // x0

  if ( (byte_5935D43 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_5935D43 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList && mInfoTextList->fields._size >= 2 )
  {
    mOptionInfoLb = this->fields.mOptionInfoLb;
    if ( !mOptionInfoLb )
      sub_21FFECC(0, method);
    BoardOptionTextWithIconComponent__set_Alpha(mOptionInfoLb, alpha, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusQuestBoardDraw__SetItem(
        ServantStatusQuestBoardDraw_o *this,
        MapControl_QuestInfo_o *qinf,
        MapControl_QuestInfo_o *beforeQuestInfo,
        UnityEngine_GameObject_o *inputMessageObject,
        ServantStatusQuestBoardManager_o *questBoardManager,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v12; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 Master_object; // x0
  __int64 giftIconId; // x1
  __int64 v17; // x2
  _BOOL4 IsSvtCoinQuest; // w26
  __int64 v19; // x1
  __int64 v20; // x2
  bool v21; // w25
  int current; // w28
  ServantStatusQuestBoardManager_o *v23; // x27
  int64_t mListCreatedTime; // x24
  QuestEntity_o *Mine; // x29
  const MethodInfo *v26; // x1
  __int64 v27; // x2
  bool v28; // w25
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  char v35; // w23
  const MethodInfo *v36; // x1
  __int64 v37; // x2
  int v38; // w24
  int32_t id; // w8
  int32_t warId; // w20
  WarEntity_o *WarEntityByWarID; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  WarEntity_o *v44; // x20
  _BOOL4 IsLimitCountSealQuest; // w24
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x8
  __int64 v49; // x2
  Il2CppObject *v50; // x20
  int v51; // w8
  bool HasStatus; // w23
  int32_t questPhase; // w20
  __int64 v54; // x1
  __int64 v55; // x2
  int32_t PhaseMax; // w8
  Il2CppObject *v57; // x0
  Il2CppObject *v58; // x20
  _BOOL4 v59; // w25
  float v60; // s9
  float v61; // s8
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x28
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  struct UISprite_o *mcBaseP; // x8
  struct UIAtlas_o *mAtlas; // x1
  __int64 v71; // x2
  UISprite_o *v72; // x20
  __int64 v73; // x2
  struct UISprite_o *v74; // x20
  UISprite_o *v75; // x0
  System_String_o *v76; // x1
  struct UISprite_o *v77; // x20
  ServantStatusQuestBoardDraw_c *v78; // x0
  System_String_o *BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME; // x29
  __int64 v80; // x2
  UISprite_o *v81; // x20
  __int64 v82; // x2
  UISprite_o *mTitleSp; // x20
  bool v84; // w8
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x2
  UISprite_o *v88; // x20
  int v89; // w8
  System_String_o **v90; // x8
  __int64 v91; // x2
  UISprite_o *v92; // x20
  UISprite_o *mTitle2Sp; // x20
  __int64 v94; // x1
  __int64 v95; // x2
  UISprite_o *mLineSp; // x20
  bool v97; // w8
  __int64 v98; // x2
  UISprite_o *v99; // x20
  System_String_o *TITLE_SPRITE_NAME_RAINFORCEMENT; // x1
  __int64 v101; // x2
  UISprite_o *v102; // x20
  ServantStatusQuestBoardDraw_c *v103; // x0
  System_String_o *TITLE_SPRITE_NAME_LIMIT_UNSEAL; // x29
  __int64 v105; // x1
  __int64 v106; // x2
  Il2CppObject *v107; // x20
  System_Collections_Generic_List_object__o *v108; // x29
  __int64 v109; // x1
  __int64 v110; // x2
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *v111; // x20
  ServantStatusQuestBoardDraw___c_c *v112; // x0
  struct ServantStatusQuestBoardDraw___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__48_0; // x29
  Il2CppObject *v115; // x26
  struct ServantStatusQuestBoardDraw___c_StaticFields *v116; // x0
  System_String_o *v117; // x2
  System_String_o *v118; // x3
  int32_t v119; // w4
  int32_t v120; // w5
  bool v121; // w6
  bool v122; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v123; // x0
  Il2CppObject *v124; // x0
  __int64 v125; // x1
  __int64 v126; // x2
  int64_t v127; // x5
  const MethodInfo *v128; // x7
  QuestReleaseOverwriteEntity_o *v129; // x20
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *v130; // x26
  System_Func_object__bool__o *v131; // x29
  System_Collections_Generic_IEnumerable_TSource__o *v132; // x0
  Il2CppObject *v133; // x0
  QuestEntity_o *v134; // x29
  QuestReleaseEntity_o *v135; // x4
  const MethodInfo *v136; // x2
  UILabel_o *v137; // x22
  System_String_o **v138; // x9
  System_String_o **v139; // x10
  System_String_o *v140; // x26
  struct UILabel_o *mTitleNameLb; // x20
  System_String_o *v142; // x1
  System_String_o *v143; // x20
  __int64 v144; // x2
  Il2CppObject *v145; // x22
  Il2CppObject *BattleName; // x0
  struct UILabel_o *v147; // x8
  int32_t mWidth; // w20
  ServantStatusQuestBoardDraw_c *v149; // x0
  struct ServantStatusQuestBoardDraw_StaticFields *v150; // x8
  __int64 v151; // x2
  UnityEngine_Transform_o *v152; // x20
  struct UILabel_o *v153; // x8
  float z; // s2
  float x; // s0 OVERLAPPED
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *v157; // x8
  System_String_o *v158; // x2
  System_String_o *v159; // x3
  int32_t v160; // w4
  int32_t v161; // w5
  bool v162; // w6
  bool v163; // w7
  __int64 v164; // x1
  __int64 v165; // x2
  UISprite_o *mTitleShortcutSp; // x20
  bool v167; // w8
  System_String_o *v168; // x2
  System_String_o *v169; // x3
  int32_t v170; // w4
  int32_t v171; // w5
  bool v172; // w6
  bool v173; // w7
  int32_t ServantId; // w20
  __int64 v175; // x22
  __int64 v176; // x2
  UILabel_o *mTitleShortcutLb; // x20
  bool v178; // w29
  Il2CppObject *v179; // x0
  __int64 v180; // x1
  __int64 v181; // x2
  __int64 v182; // x23
  __int64 v183; // x26
  ServantLimitImageMaster_o *v184; // x22
  const MethodInfo *v185; // x1
  const MethodInfo *v186; // x1
  __int64 endTime; // x22
  __int64 v188; // x1
  __int64 v189; // x2
  bool v190; // w29
  System_Collections_Generic_List_object__o *mInfoTextList; // x20
  System_String_o *v192; // x26
  QuestBoardInformationText_o *v193; // x23
  System_String_o *v194; // x2
  System_String_o *v195; // x3
  int32_t v196; // w4
  int32_t v197; // w5
  bool v198; // w6
  bool v199; // w7
  struct System_Object_array *items; // x8
  _QWORD *v201; // x9
  __int64 size; // x10
  Il2CppClass **v203; // x0
  int32_t v204; // w22
  int32_t v205; // w0
  int32_t v206; // w1
  struct System_Collections_Generic_List_QuestBoardInformationText__o *v207; // x20
  int32_t v208; // w2
  int v209; // w8
  int32_t v210; // w9
  int32_t v211; // w10
  bool v212; // w20
  System_String_o *v213; // x2
  System_String_o *v214; // x3
  int32_t v215; // w4
  int32_t v216; // w5
  bool v217; // w6
  bool v218; // w7
  QuestBehaviorMaster_o *v219; // x20
  System_String_o *v220; // x2
  System_String_o *v221; // x3
  int32_t v222; // w4
  int32_t v223; // w5
  bool v224; // w6
  bool v225; // w7
  __int64 v226; // x8
  struct GiftEntity_array *v227; // x21
  int v228; // w9
  __int64 v229; // x8
  __int64 v230; // x8
  int64_t v231; // x2
  int64_t v232; // x3
  __int64 v233; // x2
  int v234; // w8
  char v235; // w8
  bool v236; // w20
  UISprite_o *mServantLimitRewardObtainedSP; // x20
  __int64 v238; // x2
  int v239; // w8
  System_String_o **v240; // x8
  const MethodInfo *v241; // [xsp+0h] [xbp-150h]
  bool IsFolder; // [xsp+10h] [xbp-140h]
  int32_t limitCounta; // [xsp+14h] [xbp-13Ch]
  WarEntity_o *warEntity; // [xsp+18h] [xbp-138h]
  struct UnityEngine_GameObject_o *v245; // [xsp+20h] [xbp-130h]
  int v246; // [xsp+28h] [xbp-128h]
  int questReleaseClosedID; // [xsp+2Ch] [xbp-124h]
  int32_t phase; // [xsp+3Ch] [xbp-114h]
  QuestBehaviorMaster_o *v250; // [xsp+40h] [xbp-110h]
  int64_t nowTime; // [xsp+48h] [xbp-108h]
  _BOOL4 IsClear; // [xsp+50h] [xbp-100h]
  int32_t QuestType; // [xsp+54h] [xbp-FCh]
  QuestEntity_o *questEntity; // [xsp+58h] [xbp-F8h]
  char v255; // [xsp+60h] [xbp-F0h]
  _BOOL4 v256; // [xsp+64h] [xbp-ECh]
  System_Collections_Generic_List_Enumerator_int__o v257; // [xsp+68h] [xbp-E8h] BYREF
  bool isNotItemConsume; // [xsp+84h] [xbp-CCh] BYREF
  int32_t fixedVal[2]; // [xsp+88h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v260; // [xsp+90h] [xbp-C0h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+B0h] [xbp-A0h] BYREF
  UserQuestEntity_o *v262; // [xsp+B8h] [xbp-98h] BYREF
  Il2CppObject *entity; // [xsp+C8h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v264; // 0:x0.16
  UnityEngine_Vector3_o v265; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v266; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v267; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v268; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v269; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v270; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v271; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v272; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v273; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v274; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v275; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v276; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v277; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v278; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v279; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v280; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v281; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v282; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v283; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v284; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5935D3D & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestExtensionMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity____91526336);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderByDescending_QuestReleaseOverwriteEntity__int___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_21FFC50(&System_Func_QuestReleaseOverwriteEntity__int__TypeInfo);
    sub_21FFC50(&System_Func_QuestReleaseOverwriteEntity__bool__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&QuestBoardInformationText_TypeInfo);
    sub_21FFC50(&ServantStatusQuestBoardDraw_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_21FFC50(&Method_ServantStatusQuestBoardDraw___c__SetItem_b__48_0__);
    sub_21FFC50(&Method_ServantStatusQuestBoardDraw___c__DisplayClass48_0__SetItem_b__1__);
    sub_21FFC50(&ServantStatusQuestBoardDraw___c__DisplayClass48_0_TypeInfo);
    sub_21FFC50(&ServantStatusQuestBoardDraw___c_TypeInfo);
    sub_21FFC50(&StringLiteral_13957/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_21FFC50(&StringLiteral_21316/*"img_conductor_line"*/);
    sub_21FFC50(&StringLiteral_21319/*"img_conductor_questboard_paladin"*/);
    sub_21FFC50(&StringLiteral_26433/*"{0}"*/);
    sub_21FFC50(&StringLiteral_21321/*"img_conductor_quicklink_02"*/);
    sub_21FFC50(&StringLiteral_12487/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE2"*/);
    sub_21FFC50(&StringLiteral_21158/*"icon_reward_limits_release"*/);
    sub_21FFC50(&StringLiteral_12489/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT2"*/);
    sub_21FFC50(&StringLiteral_12488/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/);
    sub_21FFC50(&StringLiteral_21315/*"img_conductor_05"*/);
    sub_21FFC50(&StringLiteral_21320/*"img_conductor_quicklink"*/);
    sub_21FFC50(&StringLiteral_21322/*"img_conductor_scq"*/);
    sub_21FFC50(&StringLiteral_21317/*"img_conductor_line_white"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_21323/*"img_conductor_sq"*/);
    sub_21FFC50(&StringLiteral_12486/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE"*/);
    sub_21FFC50(&StringLiteral_12441/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/);
    byte_5935D3D = 1;
  }
  entity = 0;
  entityList = 0;
  v262 = 0;
  memset(&v260, 0, sizeof(v260));
  *(_QWORD *)fixedVal = 0;
  isNotItemConsume = 0;
  v12 = sub_21FFEBC(ServantStatusQuestBoardDraw___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13, v14);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestExtensionMaster___);
  if ( !qinf || !Master_object )
    goto LABEL_372;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         qinf->fields.questId,
         (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__) )
  {
    Master_object = (__int64)entity;
    if ( !entity )
      goto LABEL_372;
    IsSvtCoinQuest = QuestExtensionEntity__IsSvtCoinQuest((QuestExtensionEntity_o *)entity, 0);
  }
  else
  {
    IsSvtCoinQuest = 0;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, giftIconId, v17);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Master_object )
    goto LABEL_372;
  v256 = IsSvtCoinQuest;
  limitCounta = limitCount;
  Master_object = (__int64)QuestGroupMaster__GetInterludeQuestIdList(
                             (QuestGroupMaster_o *)Master_object,
                             qinf->fields.questId,
                             0);
  if ( !Master_object )
    goto LABEL_372;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v257,
    (System_Collections_Generic_List_int__o *)Master_object,
    (const MethodInfo_4433BE8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v260 = v257;
  v257.fields._list = 0;
  *(_QWORD *)&v257.fields._index = &v260;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v260,
            (const MethodInfo_40C2130 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v21 )
      break;
    current = v260.fields._current;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v19, v20);
    if ( CondType__IsQuestClear_47254560(current, -1, 0, 0) )
      goto LABEL_22;
  }
  current = 0;
LABEL_22:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v260,
    (const MethodInfo_40C212C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( !questBoardManager )
    goto LABEL_372;
  v23 = questBoardManager;
  mListCreatedTime = questBoardManager->fields.mListCreatedTime;
  Mine = MapControl_QuestInfo__GetMine(qinf, 0);
  QuestType = MapControl_QuestInfo__GetQuestType(qinf, 0);
  v28 = v21 || MapControl_QuestInfo__IsClear(qinf, 0);
  if ( !*(&ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, v26, v27);
  Master_object = ServantStatusQuestBoardDraw__IsClose(qinf, v26);
  v35 = Master_object;
  nowTime = mListCreatedTime;
  if ( beforeQuestInfo )
  {
    IsClear = MapControl_QuestInfo__IsClear(beforeQuestInfo, 0);
    if ( !*(&ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, v36, v37);
    Master_object = ServantStatusQuestBoardDraw__IsClose(beforeQuestInfo, v36);
    v38 = Master_object & 1;
    if ( !Mine )
      goto LABEL_372;
  }
  else
  {
    v38 = 0;
    IsClear = 1;
    if ( !Mine )
      goto LABEL_372;
  }
  id = Mine->fields.id;
  this->fields.qinf = qinf;
  this->fields.questId = id;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.qinf, (int32_t)qinf, v29, v30, v31, v32, v33, v34);
  warId = qinf->fields.warId;
  Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Master_object )
    goto LABEL_372;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Master_object, warId, 0);
  v44 = WarEntityByWarID;
  if ( WarEntityByWarID )
    IsFolder = WarEntity__IsFolder(WarEntityByWarID, 0);
  else
    IsFolder = 1;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v42, v43);
  v246 = v38;
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_object )
    goto LABEL_372;
  IsLimitCountSealQuest = ServantLimitImageMaster__IsLimitCountSealQuest(
                            (ServantLimitImageMaster_o *)Master_object,
                            this->fields.questId,
                            0);
  Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !v12 || !Master_object )
    goto LABEL_372;
  clsQuestCheck__mfQuestReleaseCheckGetEntityByQuestID(
    (clsQuestCheck_o *)Master_object,
    Mine->fields.id,
    (QuestReleaseEntity_o **)(v12 + 16),
    qinf,
    0);
  v48 = *(_QWORD *)(v12 + 16);
  if ( v48 )
    questReleaseClosedID = *(_DWORD *)(v48 + 40);
  else
    questReleaseClosedID = 0;
  warEntity = v44;
  v255 = v35;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v46, v47);
  v50 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserQuestMaster___);
  v51 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
  if ( current < 1 )
  {
    if ( !v51 )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, giftIconId, v49);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    Master_object = (__int64)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, giftIconId, v49);
      Master_object = (__int64)NetworkManager_TypeInfo;
    }
    if ( !v50 )
      goto LABEL_372;
    current = this->fields.questId;
  }
  else
  {
    if ( !v51 )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, giftIconId, v49);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    Master_object = (__int64)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, giftIconId, v49);
      Master_object = (__int64)NetworkManager_TypeInfo;
    }
    if ( !v50 )
      goto LABEL_372;
  }
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)v50,
    &v262,
    *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL),
    current,
    0);
  if ( v262 )
    HasStatus = UserQuestEntity__HasStatus(v262, 4, 0);
  else
    HasStatus = 0;
  questPhase = qinf->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(qinf, 0);
  if ( questPhase + 1 < PhaseMax )
    PhaseMax = questPhase + 1;
  phase = PhaseMax;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v54, v55);
  v57 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  v58 = v57;
  if ( v28 )
    goto LABEL_76;
  if ( v57
    && QuestBehaviorMaster__IsOpenQuestBehaviorCond((QuestBehaviorMaster_o *)v57, this->fields.questId, phase, 9, 0) )
  {
    v255 = 0;
    HasStatus = 0;
    questReleaseClosedID = 0;
LABEL_76:
    v59 = 1;
    goto LABEL_79;
  }
  v59 = 0;
  if ( (v255 & 1) != 0 )
  {
    v255 = 1;
LABEL_79:
    v60 = 1.0;
    v245 = 0;
    if ( IsSvtCoinQuest )
      v61 = 1.0;
    else
      v61 = 0.5;
    goto LABEL_82;
  }
  v61 = 1.0;
  v60 = 1.0;
  v255 = 0;
  v245 = inputMessageObject;
LABEL_82:
  Master_object = (__int64)this->fields.mTitleObj;
  if ( !Master_object )
    goto LABEL_372;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  Master_object = (__int64)this->fields.mOptionInfoLb;
  if ( !Master_object )
    goto LABEL_372;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_372;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  Master_object = (__int64)this->fields.mRewardObj;
  if ( !Master_object )
    goto LABEL_372;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  Master_object = (__int64)this->fields.mAdvanceNoticeObj;
  if ( !Master_object )
    goto LABEL_372;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
  if ( !Master_object )
    goto LABEL_372;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  Master_object = (__int64)this->fields.mCondObject;
  if ( !Master_object )
    goto LABEL_372;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  Master_object = (__int64)this->fields.mServantLimitRewardObtainedSP;
  if ( !Master_object )
    goto LABEL_372;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_372;
  v250 = (QuestBehaviorMaster_o *)v58;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  mcBaseP = this->fields.mcBaseP;
  if ( !mcBaseP )
    goto LABEL_372;
  mAtlas = mcBaseP->fields.mAtlas;
  this->fields.basePanelAtlas = mAtlas;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.basePanelAtlas,
    (int32_t)mAtlas,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  v72 = this->fields.mcBaseP;
  Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
  if ( !*(&ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, giftIconId, v71);
  if ( !v72 )
    goto LABEL_372;
  UISprite__set_spriteName(v72, ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME, 0);
  questEntity = Mine;
  if ( IsSvtCoinQuest )
  {
    v74 = this->fields.mcBaseP;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, giftIconId, v73);
    v75 = v74;
    v76 = (System_String_o *)StringLiteral_21319/*"img_conductor_questboard_paladin"*/;
  }
  else
  {
    if ( !IsLimitCountSealQuest )
      goto LABEL_111;
    v77 = this->fields.mcBaseP;
    v78 = ServantStatusQuestBoardDraw_TypeInfo;
    if ( !*(&ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, giftIconId, v73);
      v78 = ServantStatusQuestBoardDraw_TypeInfo;
    }
    BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME = v78->static_fields->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, giftIconId, v73);
    v75 = v77;
    v76 = BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME;
  }
  if ( !AtlasManager__SetEventUI(v75, v76, 0) )
  {
    Master_object = (__int64)this->fields.mcBaseP;
    if ( !Master_object )
      goto LABEL_372;
    UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0);
    v81 = this->fields.mcBaseP;
    Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
    if ( !*(&ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, giftIconId, v80);
    if ( !v81 )
      goto LABEL_372;
    UISprite__set_spriteName(v81, ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME, 0);
  }
LABEL_111:
  Master_object = (__int64)this->fields.mcBaseP;
  if ( !Master_object )
    goto LABEL_372;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_object + 840LL))(
    Master_object,
    *(_QWORD *)(*(_QWORD *)Master_object + 848LL));
  Master_object = (__int64)this->fields.mcBaseP;
  if ( !Master_object )
    goto LABEL_372;
  v267.fields.r = v61;
  v267.fields.g = v61;
  v267.fields.b = v61;
  v267.fields.a = v60;
  UIWidget__set_color((UIWidget_o *)Master_object, v267, 0);
  Master_object = (__int64)this->fields.mLineSp;
  if ( !Master_object )
    goto LABEL_372;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0);
  Master_object = (__int64)this->fields.mLineSp;
  if ( !Master_object )
    goto LABEL_372;
  v268.fields.r = v61;
  v268.fields.g = v61;
  v268.fields.b = v61;
  v268.fields.a = v60;
  UIWidget__set_color((UIWidget_o *)Master_object, v268, 0);
  Master_object = (__int64)this->fields.mTitle2Sp;
  if ( IsSvtCoinQuest || !v59 )
  {
    if ( !Master_object )
      goto LABEL_372;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0);
    Master_object = (__int64)this->fields.mTitle2Sp;
    if ( !Master_object )
      goto LABEL_372;
    v269.fields.r = v61;
    v269.fields.g = v61;
    v269.fields.b = v61;
    v269.fields.a = v60;
    UIWidget__set_color((UIWidget_o *)Master_object, v269, 0);
    Master_object = (__int64)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_372;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0);
    if ( IsSvtCoinQuest )
    {
      mTitleSp = this->fields.mTitleSp;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, giftIconId, v82);
      v84 = AtlasManager__SetEventUI(mTitleSp, (System_String_o *)StringLiteral_21315/*"img_conductor_05"*/, 0);
      Master_object = (__int64)this->fields.mTitleSp;
      if ( v84 )
      {
        v265.fields.y = 0.0;
        v265.fields.z = 0.0;
        v265.fields.x = -22.0;
        ComponentHelper__SetLocalPosition((UnityEngine_Component_o *)Master_object, v265, 0);
      }
      else
      {
        if ( !Master_object )
          goto LABEL_372;
        UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0);
        v92 = this->fields.mTitleSp;
        Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
        if ( !*(&ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, giftIconId, v91);
        if ( !v92 )
          goto LABEL_372;
        UISprite__set_spriteName(
          v92,
          ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_SPRITE_NAME_INTERLUDE,
          0);
      }
      mTitle2Sp = this->fields.mTitle2Sp;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v85, v86);
      if ( !AtlasManager__SetEventUI(mTitle2Sp, (System_String_o *)StringLiteral_21321/*"img_conductor_quicklink_02"*/, 0) )
      {
        Master_object = (__int64)this->fields.mTitle2Sp;
        if ( !Master_object )
          goto LABEL_372;
        UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0);
        Master_object = (__int64)this->fields.mTitle2Sp;
        if ( !Master_object )
          goto LABEL_372;
        UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)StringLiteral_21320/*"img_conductor_quicklink"*/, 0);
      }
      Master_object = (__int64)this->fields.mTitle2Sp;
      if ( !Master_object )
        goto LABEL_372;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_object + 840LL))(
        Master_object,
        *(_QWORD *)(*(_QWORD *)Master_object + 848LL));
      Master_object = (__int64)this->fields.mTitle2Sp;
      if ( !Master_object )
        goto LABEL_372;
      v270.fields.r = v61;
      v270.fields.g = v61;
      v270.fields.b = v61;
      v270.fields.a = v60;
      UIWidget__set_color((UIWidget_o *)Master_object, v270, 0);
      mLineSp = this->fields.mLineSp;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v94, v95);
      v97 = AtlasManager__SetEventUI(mLineSp, (System_String_o *)StringLiteral_21317/*"img_conductor_line_white"*/, 0);
      Master_object = (__int64)this->fields.mLineSp;
      if ( v97 )
      {
        if ( !Master_object )
          goto LABEL_372;
        v271.fields.a = 1.0;
        v271.fields.r = 0.68235;
        v271.fields.g = 0.61176;
        v271.fields.b = 0.32941;
        UIWidget__set_color((UIWidget_o *)Master_object, v271, 0);
      }
      else
      {
        if ( !Master_object )
          goto LABEL_372;
        UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0);
        Master_object = (__int64)this->fields.mLineSp;
        if ( !Master_object )
          goto LABEL_372;
        UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)StringLiteral_21316/*"img_conductor_line"*/, 0);
        Master_object = (__int64)this->fields.mLineSp;
        if ( !Master_object )
          goto LABEL_372;
        v272.fields.r = v61;
        v272.fields.g = v61;
        v272.fields.b = v61;
        v272.fields.a = v60;
        UIWidget__set_color((UIWidget_o *)Master_object, v272, 0);
      }
    }
    else
    {
      Master_object = (__int64)this->fields.mTitleSp;
      if ( QuestType == 3 )
      {
        if ( !Master_object )
          goto LABEL_372;
        UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0);
        v88 = this->fields.mTitleSp;
        Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
        v89 = *(&ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished + 1);
        if ( IsFolder )
        {
          if ( !v89 )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, giftIconId, v87);
            Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
          }
          v90 = (System_String_o **)(*(_QWORD *)(Master_object + 184) + 48LL);
        }
        else
        {
          if ( !v89 )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, giftIconId, v87);
            Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
          }
          v90 = (System_String_o **)(*(_QWORD *)(Master_object + 184) + 56LL);
        }
        if ( !v88 )
          goto LABEL_372;
        UISprite__set_spriteName(v88, *v90, 0);
        if ( !IsLimitCountSealQuest )
          goto LABEL_173;
        v102 = this->fields.mTitleSp;
        v103 = ServantStatusQuestBoardDraw_TypeInfo;
        if ( !*(&ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, giftIconId, v101);
          v103 = ServantStatusQuestBoardDraw_TypeInfo;
        }
        TITLE_SPRITE_NAME_LIMIT_UNSEAL = v103->static_fields->TITLE_SPRITE_NAME_LIMIT_UNSEAL;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, giftIconId, v101);
        if ( AtlasManager__SetEventUI(v102, TITLE_SPRITE_NAME_LIMIT_UNSEAL, 0) )
          goto LABEL_173;
        Master_object = (__int64)this->fields.mTitleSp;
        if ( !Master_object )
          goto LABEL_372;
        UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0);
        v99 = this->fields.mTitleSp;
        Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
        v239 = *(&ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished + 1);
        if ( IsFolder )
        {
          if ( !v239 )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, giftIconId, v238);
            Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
          }
          v240 = (System_String_o **)(*(_QWORD *)(Master_object + 184) + 48LL);
        }
        else
        {
          if ( !v239 )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, giftIconId, v238);
            Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
          }
          v240 = (System_String_o **)(*(_QWORD *)(Master_object + 184) + 56LL);
        }
        if ( !v99 )
          goto LABEL_372;
        TITLE_SPRITE_NAME_RAINFORCEMENT = *v240;
      }
      else
      {
        if ( !Master_object )
          goto LABEL_372;
        UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0);
        v99 = this->fields.mTitleSp;
        Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
        if ( !*(&ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, giftIconId, v98);
        if ( !v99 )
          goto LABEL_372;
        TITLE_SPRITE_NAME_RAINFORCEMENT = ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_SPRITE_NAME_RAINFORCEMENT;
      }
      UISprite__set_spriteName(v99, TITLE_SPRITE_NAME_RAINFORCEMENT, 0);
    }
LABEL_173:
    Master_object = (__int64)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_372;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_object + 840LL))(
      Master_object,
      *(_QWORD *)(*(_QWORD *)Master_object + 848LL));
    Master_object = (__int64)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_372;
    v273.fields.r = v61;
    v273.fields.g = v61;
    v273.fields.b = v61;
    v273.fields.a = v60;
    UIWidget__set_color((UIWidget_o *)Master_object, v273, 0);
    Master_object = (__int64)this->fields.mLinkObj;
    if ( !Master_object )
      goto LABEL_372;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
    Master_object = (__int64)this->fields.mLinkObj;
    if ( !Master_object )
      goto LABEL_372;
    Master_object = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Master_object, 0);
    if ( !Master_object )
      goto LABEL_372;
    Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)Master_object,
                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !Master_object )
      goto LABEL_372;
    v274.fields.r = v61;
    v274.fields.g = v61;
    v274.fields.b = v61;
    v274.fields.a = v60;
    UIWidget__set_color((UIWidget_o *)Master_object, v274, 0);
    goto LABEL_180;
  }
  if ( !Master_object )
    goto LABEL_372;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 0, 0);
  Master_object = (__int64)this->fields.mTitleSp;
  if ( !Master_object )
    goto LABEL_372;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 0, 0);
  Master_object = (__int64)this->fields.mLinkObj;
  if ( !Master_object )
    goto LABEL_372;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
LABEL_180:
  Master_object = (__int64)this->fields.mClearObj;
  if ( !Master_object )
    goto LABEL_372;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v59, 0);
  Master_object = (__int64)this->fields.mNoneLb;
  if ( !Master_object )
    goto LABEL_372;
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v105, v106);
  v107 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  v108 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v108,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v108;
  if ( !v107 )
    goto LABEL_372;
  QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
    (QuestReleaseOverwriteMaster_o *)v107,
    &entityList,
    this->fields.questId,
    nowTime,
    0);
  v111 = entityList;
  v112 = ServantStatusQuestBoardDraw___c_TypeInfo;
  if ( !*(&ServantStatusQuestBoardDraw___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw___c_TypeInfo, v109, v110);
    v112 = ServantStatusQuestBoardDraw___c_TypeInfo;
  }
  static_fields = v112->static_fields;
  _9__48_0 = (System_Func_object__int__o *)static_fields->__9__48_0;
  if ( !_9__48_0 )
  {
    if ( !*(&v112->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v112, v109, v110);
      static_fields = ServantStatusQuestBoardDraw___c_TypeInfo->static_fields;
    }
    v115 = (Il2CppObject *)static_fields->__9;
    _9__48_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_QuestReleaseOverwriteEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__48_0, v115, Method_ServantStatusQuestBoardDraw___c__SetItem_b__48_0__, 0);
    v116 = ServantStatusQuestBoardDraw___c_TypeInfo->static_fields;
    v116->__9__48_0 = (struct System_Func_QuestReleaseOverwriteEntity__int__o *)_9__48_0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v116->__9__48_0,
      (int32_t)_9__48_0,
      v117,
      v118,
      v119,
      v120,
      v121,
      v122);
    IsSvtCoinQuest = v256;
  }
  v123 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v111,
                                                                (System_Func_TSource__TKey__o *)_9__48_0,
                                                                (const MethodInfo_3855CFC *)Method_System_Linq_Enumerable_OrderByDescending_QuestReleaseOverwriteEntity__int___);
  v124 = System_Linq_Enumerable__FirstOrDefault_object_(
           v123,
           (const MethodInfo_384E0B0 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity___);
  v129 = (QuestReleaseOverwriteEntity_o *)v124;
  if ( *(_QWORD *)(v12 + 16) )
  {
    if ( v124 )
    {
      v130 = entityList;
      v131 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_QuestReleaseOverwriteEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v131,
        (Il2CppObject *)v12,
        Method_ServantStatusQuestBoardDraw___c__DisplayClass48_0__SetItem_b__1__,
        0);
      v132 = (System_Collections_Generic_IEnumerable_TSource__o *)v130;
      IsSvtCoinQuest = v256;
      v133 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
               v132,
               (System_Func_TSource__bool__o *)v131,
               (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity____91526336);
      if ( v133 )
        v129 = (QuestReleaseOverwriteEntity_o *)v133;
    }
  }
  v134 = questEntity;
  if ( IsClear || v59 || IsSvtCoinQuest )
  {
    v135 = *(QuestReleaseEntity_o **)(v12 + 16);
    if ( questReleaseClosedID < 1 )
    {
      if ( v135 && v135->fields.type == 8 )
      {
        mTitleNameLb = this->fields.mTitleNameLb;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, (unsigned int)questReleaseClosedID, v126);
        Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12441/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/, 0);
        if ( !mTitleNameLb )
          goto LABEL_372;
        v142 = (System_String_o *)Master_object;
        Master_object = (__int64)mTitleNameLb;
      }
      else
      {
        Master_object = (__int64)QuestEntity__getQuestName(questEntity, 0);
        if ( !Master_object )
          goto LABEL_372;
        v143 = (System_String_o *)Master_object;
        if ( System_String__Contains((System_String_o *)Master_object, (System_String_o *)StringLiteral_26433/*"{0}"*/, 0) )
        {
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, giftIconId, v144);
          v145 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
          Master_object = QuestEntity__getServantId(questEntity, 0);
          if ( !v145 )
            goto LABEL_372;
          Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)v145,
                                     Master_object,
                                     (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Master_object )
            goto LABEL_372;
          BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Master_object, 0, -1, 0);
          v143 = System_String__Format(v143, BattleName, 0);
        }
        Master_object = (__int64)this->fields.mTitleNameLb;
        if ( !Master_object )
          goto LABEL_372;
        v142 = v143;
      }
      UILabel__set_text((UILabel_o *)Master_object, v142, 0);
    }
    else
    {
      ServantStatusQuestBoardDraw__SetAdvanceNoticeText(
        this,
        questReleaseClosedID,
        warEntity,
        questEntity,
        v135,
        v127,
        v129,
        v128);
    }
  }
  else
  {
    v137 = this->fields.mTitleNameLb;
    if ( QuestType == 3 )
    {
      v138 = (System_String_o **)&StringLiteral_12486/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE"*/;
      v139 = (System_String_o **)&StringLiteral_12487/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE2"*/;
    }
    else
    {
      v138 = (System_String_o **)&StringLiteral_12488/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/;
      v139 = (System_String_o **)&StringLiteral_12489/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT2"*/;
    }
    if ( v246 )
      v138 = v139;
    v140 = *v138;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v125, v126);
    Master_object = (__int64)LocalizationManager__Get(v140, 0);
    if ( !v137 )
      goto LABEL_372;
    LOBYTE(IsSvtCoinQuest) = v256;
    UILabel__set_text(v137, (System_String_o *)Master_object, 0);
    if ( v129 )
      ServantStatusQuestBoardDraw__SetOverwriteCondText(this, v129, v136);
  }
  v147 = this->fields.mTitleNameLb;
  if ( !v147 )
    goto LABEL_372;
  mWidth = v147->fields.mWidth;
  v149 = ServantStatusQuestBoardDraw_TypeInfo;
  if ( !*(&ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, giftIconId, v136);
    v149 = ServantStatusQuestBoardDraw_TypeInfo;
  }
  v150 = v149->static_fields;
  Master_object = (__int64)this->fields.mTitleNameLb;
  if ( mWidth <= v150->TITLE_LABEL_BASE_WIDTH )
  {
    if ( !Master_object )
      goto LABEL_372;
    Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0);
    v152 = (UnityEngine_Transform_o *)Master_object;
    if ( !byte_5931945 )
    {
      Master_object = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931945 = 1;
    }
    if ( !v152 )
      goto LABEL_372;
    v157 = UnityEngine_Vector3_TypeInfo->static_fields;
    y = v157->oneVector.fields.y;
    z = v157->oneVector.fields.z;
    x = v157->oneVector.fields.x;
  }
  else
  {
    if ( !Master_object )
      goto LABEL_372;
    Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0);
    v152 = (UnityEngine_Transform_o *)Master_object;
    if ( !*(&ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, giftIconId, v151);
    v153 = this->fields.mTitleNameLb;
    if ( !v153 || !v152 )
      goto LABEL_372;
    z = 1.0;
    x = (float)ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH / (float)v153->fields.mWidth;
    y = 1.0;
  }
  UnityEngine_Transform__set_localScale(v152, *(UnityEngine_Vector3_o *)&x, 0);
  Master_object = (__int64)this->fields.mTitleNameLb;
  if ( IsSvtCoinQuest )
  {
    if ( !Master_object )
      goto LABEL_372;
    v275.fields.a = 1.0;
    v275.fields.r = 0.48235;
    v275.fields.g = 0.46275;
    v275.fields.b = 0.42353;
    UIWidget__set_color((UIWidget_o *)Master_object, v275, 0);
    this->fields.inputMessageObject = inputMessageObject;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.inputMessageObject,
      (int32_t)inputMessageObject,
      v158,
      v159,
      v160,
      v161,
      v162,
      v163);
    Master_object = (__int64)this->fields.mTitleShortcutSp;
    if ( !Master_object )
      goto LABEL_372;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0);
    mTitleShortcutSp = this->fields.mTitleShortcutSp;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v164, v165);
    v167 = AtlasManager__SetEventUI(mTitleShortcutSp, (System_String_o *)StringLiteral_21322/*"img_conductor_scq"*/, 0);
    Master_object = (__int64)this->fields.mTitleShortcutSp;
    if ( v167 )
    {
      if ( !Master_object )
        goto LABEL_372;
      v276.fields.r = 0.48235;
      v276.fields.g = 0.46275;
      v276.fields.b = 0.42353;
      v276.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)Master_object, v276, 0);
      v266.fields.z = 0.0;
      v266.fields.y = 19.0;
      v266.fields.x = -226.0;
      ComponentHelper__SetLocalPosition((UnityEngine_Component_o *)this->fields.mTitleShortcutSp, v266, 0);
    }
    else
    {
      if ( !Master_object )
        goto LABEL_372;
      UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0);
      Master_object = (__int64)this->fields.mTitleShortcutSp;
      if ( !Master_object )
        goto LABEL_372;
      UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)StringLiteral_21323/*"img_conductor_sq"*/, 0);
      Master_object = (__int64)this->fields.mTitleShortcutSp;
      if ( !Master_object )
        goto LABEL_372;
      v280.fields.r = v61;
      v280.fields.g = v61;
      v280.fields.b = v61;
      v280.fields.a = v60;
      UIWidget__set_color((UIWidget_o *)Master_object, v280, 0);
    }
    Master_object = (__int64)this->fields.mTitleShortcutSp;
    if ( !Master_object )
      goto LABEL_372;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_object + 840LL))(
      Master_object,
      *(_QWORD *)(*(_QWORD *)Master_object + 848LL));
    Master_object = (__int64)this->fields.mTitleShortcutLb;
    if ( !Master_object )
      goto LABEL_372;
    UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0);
    ServantStatusQuestBoardDraw__ResetInfoTextList(this, v186);
    goto LABEL_276;
  }
  if ( !Master_object )
    goto LABEL_372;
  v277.fields.r = v61;
  v277.fields.g = v61;
  v277.fields.b = v61;
  v277.fields.a = v60;
  UIWidget__set_color((UIWidget_o *)Master_object, v277, 0);
  this->fields.inputMessageObject = v245;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.inputMessageObject,
    (int32_t)v245,
    v168,
    v169,
    v170,
    v171,
    v172,
    v173);
  if ( QuestType != 3 )
  {
    Master_object = (__int64)this->fields.mTitleShortcutSp;
    if ( !Master_object )
      goto LABEL_372;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0);
    Master_object = (__int64)this->fields.mTitleShortcutSp;
    if ( !Master_object )
      goto LABEL_372;
    v279.fields.r = v61;
    v279.fields.g = v61;
    v279.fields.b = v61;
    v279.fields.a = v60;
    UIWidget__set_color((UIWidget_o *)Master_object, v279, 0);
    Master_object = (__int64)this->fields.mTitleShortcutLb;
    if ( !Master_object )
      goto LABEL_372;
    goto LABEL_274;
  }
  ServantId = QuestEntity__getServantId(questEntity, 0);
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_372;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Master_object )
    goto LABEL_372;
  Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             ServantId,
                             (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.mTitleShortcutSp )
    goto LABEL_372;
  v175 = Master_object;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mTitleShortcutSp, 0, 0);
  mTitleShortcutLb = this->fields.mTitleShortcutLb;
  if ( !v175 )
  {
    if ( !mTitleShortcutLb )
      goto LABEL_372;
    Master_object = (__int64)this->fields.mTitleShortcutLb;
LABEL_274:
    UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0);
    goto LABEL_275;
  }
  v178 = HasStatus;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, giftIconId, v176);
  v179 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v182 = *(_QWORD *)(v175 + 16);
  v183 = *(_QWORD *)(v175 + 24);
  v184 = (ServantLimitImageMaster_o *)v179;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v180, v181);
  *(_QWORD *)&v264.fields.currentCryptoKey = v182;
  *(_QWORD *)&v264.fields.fakeValue = v183;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v264, 0);
  if ( !v184 )
    goto LABEL_372;
  Master_object = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                             v184,
                             Master_object,
                             limitCounta,
                             0,
                             0,
                             0);
  if ( !mTitleShortcutLb )
    goto LABEL_372;
  HasStatus = v178;
  UILabel__set_text(mTitleShortcutLb, (System_String_o *)Master_object, 0);
  Master_object = (__int64)this->fields.mTitleShortcutLb;
  v134 = questEntity;
  if ( !Master_object )
    goto LABEL_372;
  v278.fields.r = v61;
  v278.fields.g = v61;
  v278.fields.b = v61;
  v278.fields.a = v60;
  UIWidget__set_color((UIWidget_o *)Master_object, v278, 0);
LABEL_275:
  ServantStatusQuestBoardDraw__ResetInfoTextList(this, v185);
  if ( v59 )
  {
LABEL_295:
    v212 = 0;
    goto LABEL_296;
  }
LABEL_276:
  endTime = qinf->fields.endTime;
  isNotItemConsume = 0;
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  if ( endTime >= 1 && !QuestEntity__HasFlag(v134, 32, 0) )
  {
    v190 = HasStatus;
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v188, v189);
    v192 = LocalizationManager__Get((System_String_o *)StringLiteral_13957/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0);
    v193 = (QuestBoardInformationText_o *)sub_21FFEBC(QuestBoardInformationText_TypeInfo);
    QuestBoardInformationText___ctor(v193, v192, endTime, 0, 1, 0, 0);
    if ( !mInfoTextList )
      goto LABEL_372;
    items = mInfoTextList->fields._items;
    v201 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
    ++mInfoTextList->fields._version;
    if ( !items )
      goto LABEL_372;
    size = mInfoTextList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        mInfoTextList,
        (Il2CppObject *)v193,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v201[4] + 192LL) + 112LL));
    }
    else
    {
      v203 = &items->obj.klass + size;
      mInfoTextList->fields._size = size + 1;
      v203[4] = (Il2CppClass *)v193;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v203 + 4), (int32_t)v193, v194, v195, v196, v197, v198, v199);
    }
    HasStatus = v190;
    v134 = questEntity;
  }
  v204 = qinf->fields.questPhase;
  v205 = MapControl_QuestInfo__GetPhaseMax(qinf, 0);
  v207 = this->fields.mInfoTextList;
  if ( v204 + 1 < v205 )
    v208 = v204 + 1;
  else
    v208 = v205;
  Master_object = (__int64)ServantStatusQuestBoardDraw__GetCampaignText(
                             this,
                             v206,
                             v208,
                             0,
                             v23,
                             &fixedVal[1],
                             fixedVal,
                             &isNotItemConsume,
                             v241);
  if ( !v207 )
    goto LABEL_372;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v207,
    (System_Collections_Generic_IEnumerable_T__o *)Master_object,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  Master_object = (__int64)this->fields.mInfoTextList;
  if ( !Master_object )
    goto LABEL_372;
  v209 = *(_DWORD *)(Master_object + 24);
  if ( v209 < 1 )
    goto LABEL_295;
  Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)Master_object,
                             v23->fields.mAlphaAnimCnt % v209,
                             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
  if ( !Master_object )
    goto LABEL_372;
  QuestBoardInformationText__SetTime(
    (QuestBoardInformationText_o *)Master_object,
    &this->fields.mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    0);
  Master_object = (__int64)this->fields.mOptionInfoLb;
  if ( !Master_object )
    goto LABEL_372;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Master_object, 1.0, 0);
  v211 = fixedVal[0];
  v210 = fixedVal[1];
  v212 = 1;
  qinf->fields.isNotItemConsume = isNotItemConsume;
  qinf->fields.costCalcVal = v210;
  qinf->fields._fixedCostVal_k__BackingField = v211;
LABEL_296:
  Master_object = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_372;
  Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_372;
  Master_object = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_372;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_372;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v212, 0);
  Master_object = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_372;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_372;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v212, 0);
  this->fields.mRewardIconInfs = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mRewardIconInfs, 0, v213, v214, v215, v216, v217, v218);
  Master_object = (__int64)this->fields.mRewardIcon;
  if ( !Master_object )
    goto LABEL_372;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_372;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  if ( (v255 & 1) == 0 || !QuestEntity__HasFlag(v134, 4096, 0) )
  {
    giftIconId = (unsigned int)v134->fields.giftIconId;
    if ( (int)giftIconId >= 1 )
    {
      Master_object = (__int64)this->fields.mRewardIcon;
      if ( !Master_object )
        goto LABEL_372;
      goto LABEL_310;
    }
    if ( v134->fields.giftId < 1 )
    {
      Master_object = (__int64)this->fields.mRewardObj;
      if ( !Master_object )
        goto LABEL_372;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
      goto LABEL_337;
    }
    Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_372;
    Master_object = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !Master_object )
      goto LABEL_372;
    Master_object = (__int64)GiftMaster__GetGiftListById((GiftMaster_o *)Master_object, v134->fields.giftId, 0);
    if ( !Master_object )
      goto LABEL_372;
    v226 = *(_QWORD *)(Master_object + 24);
    v227 = (struct GiftEntity_array *)Master_object;
    if ( !v226 )
    {
LABEL_336:
      this->fields.mRewardIconInfs = v227;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.mRewardIconInfs,
        (int32_t)v227,
        v220,
        v221,
        v222,
        v223,
        v224,
        v225);
LABEL_337:
      v219 = v250;
      goto LABEL_338;
    }
    v228 = v23->fields.mAlphaAnimCnt % (int)v226;
    if ( v228 >= (unsigned int)v226 )
      sub_21FFED4(Master_object);
    v229 = *(_QWORD *)(Master_object + 8LL * v228 + 32);
    if ( v229 )
    {
      giftIconId = *(unsigned int *)(v229 + 44);
      Master_object = (__int64)this->fields.mRewardIcon;
      if ( (int)giftIconId < 1 )
      {
        if ( !Master_object )
          goto LABEL_372;
        v232 = *(int *)(v229 + 28) <= 1 ? -1LL : *(unsigned int *)(v229 + 28);
        ItemIconComponent__SetGift_47936840(
          (ItemIconComponent_o *)Master_object,
          *(_DWORD *)(v229 + 20),
          *(_DWORD *)(v229 + 24),
          v232,
          0,
          0);
      }
      else
      {
        if ( !Master_object )
          goto LABEL_372;
        v230 = *(unsigned int *)(v229 + 28);
        v231 = (int)v230 <= 1 ? -1LL : v230;
        ItemIconComponent__SetItemImage_47939376((ItemIconComponent_o *)Master_object, giftIconId, v231, 0);
      }
      Master_object = (__int64)this->fields.mRewardIcon;
      if ( Master_object )
      {
        Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
        if ( Master_object )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
          goto LABEL_336;
        }
      }
    }
LABEL_372:
    sub_21FFECC(Master_object, giftIconId);
  }
  Master_object = (__int64)this->fields.mRewardIcon;
  if ( !Master_object )
    goto LABEL_372;
  LODWORD(giftIconId) = 99;
LABEL_310:
  ItemIconComponent__SetItemImage((ItemIconComponent_o *)Master_object, giftIconId, 0);
  Master_object = (__int64)this->fields.mRewardIcon;
  v219 = v250;
  if ( !Master_object )
    goto LABEL_372;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_372;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
LABEL_338:
  Master_object = (__int64)this->fields.mRewardObj;
  if ( !Master_object )
    goto LABEL_372;
  Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Master_object,
                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Master_object )
    goto LABEL_372;
  v281.fields.r = v61;
  v281.fields.g = v61;
  v281.fields.b = v61;
  v281.fields.a = v60;
  UIWidget__set_color((UIWidget_o *)Master_object, v281, 0);
  Master_object = (__int64)this->fields.mRewardIcon;
  if ( !Master_object )
    goto LABEL_372;
  v282.fields.r = v61;
  v282.fields.g = v61;
  v282.fields.b = v61;
  v282.fields.a = v60;
  ItemIconComponent__SetColor((ItemIconComponent_o *)Master_object, v282, 0);
  v234 = IsLimitCountSealQuest && v59;
  if ( !v219 || (v234 & 1) != 0 )
  {
    if ( !v234 )
      goto LABEL_344;
LABEL_349:
    mServantLimitRewardObtainedSP = this->fields.mServantLimitRewardObtainedSP;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, giftIconId, v233);
    AtlasManager__SetDownloadCommonSprite(mServantLimitRewardObtainedSP, (System_String_o *)StringLiteral_21158/*"icon_reward_limits_release"*/, 0);
    Master_object = (__int64)this->fields.mServantLimitRewardObtainedSP;
    if ( !Master_object )
      goto LABEL_372;
    Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
    if ( !Master_object )
      goto LABEL_372;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
    Master_object = (__int64)this->fields.mServantLimitRewardObtainedSP;
    if ( !Master_object )
      goto LABEL_372;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_object + 840LL))(
      Master_object,
      *(_QWORD *)(*(_QWORD *)Master_object + 848LL));
    Master_object = (__int64)this->fields.mServantLimitRewardObtainedSP;
    if ( !Master_object )
      goto LABEL_372;
    v283.fields.r = v61;
    v283.fields.g = v61;
    v283.fields.b = v61;
    v283.fields.a = v60;
    UIWidget__set_color((UIWidget_o *)Master_object, v283, 0);
    v235 = 0;
    if ( v59 )
      goto LABEL_347;
LABEL_356:
    v236 = 0;
    goto LABEL_357;
  }
  if ( QuestBehaviorMaster__IsOpenQuestBehaviorCond(v219, this->fields.questId, phase, 10, 0) )
    goto LABEL_349;
LABEL_344:
  Master_object = (__int64)this->fields.mServantLimitRewardObtainedSP;
  if ( !Master_object )
    goto LABEL_372;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_372;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  v235 = 1;
  if ( !v59 )
    goto LABEL_356;
LABEL_347:
  v236 = v235 & !HasStatus;
LABEL_357:
  Master_object = (__int64)this->fields.mRewardGetSP;
  if ( !Master_object )
    goto LABEL_372;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_372;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v236, 0);
  Master_object = (__int64)this->fields.mRewardGetSP;
  if ( !Master_object )
    goto LABEL_372;
  v284.fields.r = v61;
  v284.fields.g = v61;
  v284.fields.b = v61;
  v284.fields.a = v60;
  UIWidget__set_color((UIWidget_o *)Master_object, v284, 0);
}


void ServantStatusQuestBoardDraw__SetOverwriteCondText(
        ServantStatusQuestBoardDraw_o *this,
        QuestReleaseOverwriteEntity_o *questReleaseOverwriteEntity,
        const MethodInfo *method)
{
  System_String_o *overlayClosedMessage; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *mCondObject; // x0
  __int64 v8; // x2
  UILabel_o *mCondChangeMessage; // x19

  if ( (byte_5935D41 & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusQuestBoardDraw_TypeInfo);
    byte_5935D41 = 1;
  }
  if ( questReleaseOverwriteEntity )
    overlayClosedMessage = questReleaseOverwriteEntity->fields.overlayClosedMessage;
  else
    overlayClosedMessage = 0;
  if ( !System_String__IsNullOrEmpty(overlayClosedMessage, 0) )
  {
    mCondObject = this->fields.mCondObject;
    if ( !mCondObject )
      goto LABEL_14;
    UnityEngine_GameObject__SetActive(mCondObject, 1, 0);
    if ( !questReleaseOverwriteEntity )
      goto LABEL_14;
    mCondObject = (UnityEngine_GameObject_o *)this->fields.mCondChangeMessage;
    if ( !mCondObject )
      goto LABEL_14;
    UILabel__set_text((UILabel_o *)mCondObject, questReleaseOverwriteEntity->fields.overlayClosedMessage, 0);
    mCondChangeMessage = this->fields.mCondChangeMessage;
    mCondObject = (UnityEngine_GameObject_o *)ServantStatusQuestBoardDraw_TypeInfo;
    if ( !*(&ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, v6, v8);
    if ( !mCondChangeMessage )
LABEL_14:
      sub_21FFECC(mCondObject, v6);
    UILabel__SetCondensedScale(
      mCondChangeMessage,
      ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH,
      0,
      0);
  }
}


void ServantStatusQuestBoardDraw__SetRewardIconAlpha(
        ServantStatusQuestBoardDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct GiftEntity_array *mRewardIconInfs; // x8
  ItemIconComponent_o *mRewardIcon; // x0

  mRewardIconInfs = this->fields.mRewardIconInfs;
  if ( mRewardIconInfs && SLODWORD(mRewardIconInfs->max_length) >= 2 )
  {
    mRewardIcon = this->fields.mRewardIcon;
    if ( !mRewardIcon )
      sub_21FFECC(0, method);
    ItemIconComponent__SetAlpha(mRewardIcon, alpha, 0);
  }
}


void ServantStatusQuestBoardDraw__UpdateInfoText(
        ServantStatusQuestBoardDraw_o *this,
        MapControl_QuestInfo_o *qinf,
        int32_t strIndex,
        int64_t checkTime,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mInfoTextList; // x0

  if ( (byte_5935D3F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    byte_5935D3F = 1;
  }
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !mInfoTextList
    || (mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       mInfoTextList,
                                                                       strIndex,
                                                                       (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__)) == 0 )
  {
    sub_21FFECC(mInfoTextList, qinf);
  }
  QuestBoardInformationText__Update(
    (QuestBoardInformationText_o *)mInfoTextList,
    &this->fields.mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    checkTime,
    0);
}


void ServantStatusQuestBoardDraw__UpdateItem(
        ServantStatusQuestBoardDraw_o *this,
        ServantStatusQuestBoardManager_o *questBoardManager,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  if ( !questBoardManager )
    sub_21FFECC(this, 0);
  ServantStatusQuestBoardDraw__SetInfoTextAlpha(
    this,
    questBoardManager->fields.mAlphaAnimNow,
    (const MethodInfo *)questBoardManager);
  ServantStatusQuestBoardDraw__SetRewardIconAlpha(this, questBoardManager->fields.mAlphaAnimNow, v5);
}


void ServantStatusQuestBoardDraw___SetAdvanceNoticeText_g__CalculateLabel_54_0(
        UILabel_o *label,
        System_String_o *message,
        int32_t baseHeight,
        int32_t indent,
        const MethodInfo *method)
{
  UILabel_o *v8; // x20
  int mHeight; // w22
  __int64 v10; // x1
  __int64 v11; // x2
  ServantStatusQuestBoardDraw_c *v12; // x0
  UnityEngine_Transform_o *transform; // x21
  float v14; // s0
  float v15; // s2
  float v16; // s1
  float v17; // s1
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  v8 = label;
  if ( (byte_5935D4B & 1) == 0 )
  {
    label = (UILabel_o *)sub_21FFC50(&ServantStatusQuestBoardDraw_TypeInfo);
    byte_5935D4B = 1;
  }
  if ( !v8 )
    goto LABEL_14;
  UILabel__set_text(v8, message, 0);
  UILabel__AssumeNaturalSize(v8, 0);
  mHeight = v8->fields.mHeight;
  UIWidget__set_height((UIWidget_o *)v8, baseHeight, 0);
  v12 = ServantStatusQuestBoardDraw_TypeInfo;
  if ( !*(&ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, v10, v11);
    v12 = ServantStatusQuestBoardDraw_TypeInfo;
  }
  UILabel__SetCondensedScale(v8, v12->static_fields->ADVANCE_NOTICE_BASE_WIDTH - indent, 0, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0);
  label = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0);
  if ( !label
    || (LODWORD(v14) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)label, 0),
        !transform) )
  {
LABEL_14:
    sub_21FFECC(label, message);
  }
  v15 = 1.0;
  v16 = 1.0 - (float)((float)baseHeight / (float)mHeight);
  if ( v16 <= 1.0 )
    v15 = 1.0 - (float)((float)baseHeight / (float)mHeight);
  if ( v16 >= 0.0 )
    v17 = v15;
  else
    v17 = 0.0;
  v18.fields.z = 1.0;
  v18.fields.x = v17 + v14;
  v18.fields.y = 1.0;
  UnityEngine_Transform__set_localScale(transform, v18, 0);
}


BoardMessageEntity_o *ServantStatusQuestBoardDraw__findOverrideQuestMessage(
        ServantStatusQuestBoardDraw_o *this,
        BoardMessageEntity_array *boardMessageData,
        int32_t eventId,
        const MethodInfo *method)
{
  int max_length; // w8
  int v5; // w10

  if ( !boardMessageData )
    goto LABEL_11;
  max_length = boardMessageData->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( max_length == v5 )
        sub_21FFED4(this);
      this = (ServantStatusQuestBoardDraw_o *)boardMessageData->m_Items[v5];
      if ( !this )
        break;
      if ( HIDWORD(this->fields.m_CancellationTokenSource) == 4 && LODWORD(this->fields.mcBaseP) == eventId )
        return (BoardMessageEntity_o *)this;
      if ( (max_length & ~(max_length >> 31)) == ++v5 )
        return 0;
    }
LABEL_11:
    sub_21FFECC(this, boardMessageData);
  }
  return 0;
}


void ServantStatusQuestBoardDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5935D4C & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusQuestBoardDraw___c_TypeInfo);
    byte_5935D4C = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ServantStatusQuestBoardDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantStatusQuestBoardDraw___c_TypeInfo->static_fields->__9 = (struct ServantStatusQuestBoardDraw___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ServantStatusQuestBoardDraw___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantStatusQuestBoardDraw___c___ctor(ServantStatusQuestBoardDraw___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantStatusQuestBoardDraw___c___SetItem_b__48_0(
        ServantStatusQuestBoardDraw___c_o *this,
        QuestReleaseOverwriteEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_21FFECC(this, 0);
  return entity->fields.imagePriority;
}


void ServantStatusQuestBoardDraw___c__DisplayClass48_0___ctor(
        ServantStatusQuestBoardDraw___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantStatusQuestBoardDraw___c__DisplayClass48_0___SetItem_b__1(
        ServantStatusQuestBoardDraw___c__DisplayClass48_0_o *this,
        QuestReleaseOverwriteEntity_o *entity,
        const MethodInfo *method)
{
  struct QuestReleaseEntity_o *rQuestRlsNG; // x8

  if ( !entity || (rQuestRlsNG = this->fields.rQuestRlsNG) == 0 )
    sub_21FFECC(this, entity);
  return entity->fields.imagePriority == rQuestRlsNG->fields.imagePriority;
}