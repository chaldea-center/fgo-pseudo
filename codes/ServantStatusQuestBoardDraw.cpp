void ServantStatusQuestBoardDraw___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  struct ServantStatusQuestBoardDraw_StaticFields *static_fields; // x0
  int32_t v8; // w1
  struct ServantStatusQuestBoardDraw_StaticFields *v9; // x0
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w1
  struct ServantStatusQuestBoardDraw_StaticFields *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w1
  struct ServantStatusQuestBoardDraw_StaticFields *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w1
  struct ServantStatusQuestBoardDraw_StaticFields *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  int32_t v41; // w1
  struct ServantStatusQuestBoardDraw_StaticFields *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  int32_t v49; // w1
  struct ServantStatusQuestBoardDraw_StaticFields *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7

  if ( (byte_4D2A505 & 1) == 0 )
  {
    sub_1C94098(&ServantStatusQuestBoardDraw_TypeInfo);
    sub_1C94098(&StringLiteral_20544/*"img_conductor_03"*/);
    sub_1C94098(&StringLiteral_20545/*"img_conductor_04"*/);
    sub_1C94098(&StringLiteral_20543/*"img_conductor_02"*/);
    sub_1C94098(&StringLiteral_20689/*"img_questboard_1001"*/);
    sub_1C94098(&StringLiteral_20542/*"img_conductor_01"*/);
    sub_1C94098(&StringLiteral_20549/*"img_conductor_questboard"*/);
    sub_1C94098(&StringLiteral_20538/*"img_commonbg"*/);
    byte_4D2A505 = 1;
  }
  static_fields = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->TITLE_LABEL_BASE_WIDTH = xmmword_CFF8B0;
  static_fields->ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X = -208.0;
  v8 = StringLiteral_20538/*"img_commonbg"*/;
  static_fields->DARK_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_20538/*"img_commonbg"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->DARK_BOARD_SPRITE_NAME, v8, v1, v2, v3, v4, v5, v6);
  v9 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  *(_QWORD *)&v9->DARK_BOARD_WIDTH = 0x7A000001F0LL;
  v10 = StringLiteral_20549/*"img_conductor_questboard"*/;
  v9->BASE_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_20549/*"img_conductor_questboard"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v9->BASE_BOARD_SPRITE_NAME, v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_20543/*"img_conductor_02"*/;
  v18 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v18->TITLE_SPRITE_NAME_INTERLUDE = (struct System_String_o *)StringLiteral_20543/*"img_conductor_02"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v18->TITLE_SPRITE_NAME_INTERLUDE, v17, v19, v20, v21, v22, v23, v24);
  v25 = StringLiteral_20542/*"img_conductor_01"*/;
  v26 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v26->TITLE_SPRITE_NAME_INTERLUDE_MAP = (struct System_String_o *)StringLiteral_20542/*"img_conductor_01"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v26->TITLE_SPRITE_NAME_INTERLUDE_MAP, v25, v27, v28, v29, v30, v31, v32);
  v33 = StringLiteral_20544/*"img_conductor_03"*/;
  v34 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v34->TITLE_SPRITE_NAME_RAINFORCEMENT = (struct System_String_o *)StringLiteral_20544/*"img_conductor_03"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v34->TITLE_SPRITE_NAME_RAINFORCEMENT, v33, v35, v36, v37, v38, v39, v40);
  v41 = StringLiteral_20689/*"img_questboard_1001"*/;
  v42 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v42->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME = (struct System_String_o *)StringLiteral_20689/*"img_questboard_1001"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v42->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME,
    v41,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v49 = StringLiteral_20545/*"img_conductor_04"*/;
  v50 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v50->TITLE_SPRITE_NAME_LIMIT_UNSEAL = (struct System_String_o *)StringLiteral_20545/*"img_conductor_04"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v50->TITLE_SPRITE_NAME_LIMIT_UNSEAL, v49, v51, v52, v53, v54, v55, v56);
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
  MapControl_QuestInfo_o *v9; // x1
  int64_t Time; // x3
  const MethodInfo *v11; // x4
  ServantStatusQuestBoardDraw_o *v12; // x0
  int32_t v13; // w2

  if ( (byte_4D2A4FD & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2A4FD = 1;
  }
  if ( (byte_4D2A4FE & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4D2A4FE = 1;
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
                                                                       (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
        if ( mInfoTextList )
        {
          if ( QuestBoardInformationText__ChangeText(
                 (QuestBoardInformationText_o *)mInfoTextList,
                 &this->fields.mOptionInfoLb,
                 0) )
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Time = NetworkManager__getTime(0);
            v12 = this;
            v13 = v8;
LABEL_22:
            ServantStatusQuestBoardDraw__UpdateInfoText(v12, v9, v13, Time, v11);
            return;
          }
          return;
        }
      }
LABEL_24:
      sub_1C942F0(mInfoTextList, qinf);
    }
  }
  if ( (byte_4D2A4FF & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4D2A4FF = 1;
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  }
  if ( !mInfoTextList || !mInfoTextList->fields._size )
    return;
  mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 mInfoTextList,
                                                                 0,
                                                                 (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
  if ( !mInfoTextList )
    goto LABEL_24;
  if ( QuestBoardInformationText__ChangeText(
         (QuestBoardInformationText_o *)mInfoTextList,
         &this->fields.mOptionInfoLb,
         0) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0);
    v12 = this;
    v13 = 0;
    goto LABEL_22;
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
  GiftEntity_o *v6; // x9
  int num; // w8
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
    sub_1C942F8(this);
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
        v8 = (unsigned int)v6->fields.num;
      ItemIconComponent__SetItemImage_41676908((ItemIconComponent_o *)this, (int32_t)questBoardManager, v8, 0);
      return;
    }
LABEL_18:
    sub_1C942F0(this, questBoardManager);
  }
  if ( !this )
    goto LABEL_18;
  if ( num <= 1 )
    v9 = -1;
  else
    v9 = (unsigned int)v6->fields.num;
  ItemIconComponent__SetGift_41674460((ItemIconComponent_o *)this, v6->fields.type, v6->fields.objectId, v9, 0, 0);
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
  const MethodInfo *v18; // x3
  QuestBoardInformationText_o *v19; // x27
  struct System_Int32_array *targetIds; // x8
  int32_t consumeType; // w8
  System_String_o *v22; // x20
  Il2CppObject *EventName; // x0
  System_String_o *v24; // x20
  int64_t EndTime; // x19
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D2A502 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&QuestBoardInformationText_TypeInfo);
    sub_1C94098(&StringLiteral_25354/*"{0}"*/);
    this = (ServantStatusQuestBoardDraw_o *)sub_1C94098(&StringLiteral_13483/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/);
    byte_4D2A502 = 1;
  }
  entity = 0;
  if ( !eventEnt || !eventCampaignEnt )
    goto LABEL_40;
  target = eventCampaignEnt->fields.target;
  this = (ServantStatusQuestBoardDraw_o *)CombineAdjustTarget__isTerminalExposable(target, 0);
  v19 = 0;
  if ( ((unsigned __int8)this & 1) == 0 )
    return v19;
  if ( isQuestNoneCleared )
  {
    if ( target > 24 )
    {
      if ( target == 35 )
      {
        *isNotItemConsume = 1;
        goto LABEL_36;
      }
      if ( target != 25 )
        goto LABEL_36;
      goto LABEL_25;
    }
  }
  else if ( target > 24 )
  {
    v19 = 0;
    if ( target == 25 || target == 35 )
      return v19;
    goto LABEL_36;
  }
  if ( target == 12 )
  {
LABEL_25:
    if ( (eventCampaignEnt->fields.calcType & 0xFFFFFFFE) != 2 )
      return 0;
    if ( !questEntity )
      goto LABEL_40;
    consumeType = questEntity->fields.consumeType;
    if ( consumeType != 4 && consumeType != 1 )
      return 0;
    *costCalcVal = eventCampaignEnt->fields.value;
    if ( eventCampaignEnt->fields.calcType != 3 )
      *fixedVal = eventCampaignEnt->fields.value;
  }
  if ( target != 24 )
    goto LABEL_36;
  targetIds = eventCampaignEnt->fields.targetIds;
  if ( !targetIds || !targetIds->max_length )
    goto LABEL_36;
  if ( !ServantStatusQuestBoardDraw__IsValidSupportSelection(this, questEntity, phase, v18) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ServantStatusQuestBoardDraw_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !questEntity || !this )
LABEL_40:
    sub_1C942F0(this, questEntity);
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
        goto LABEL_36;
      return 0;
    }
    goto LABEL_40;
  }
LABEL_36:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_13483/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0);
  EventName = (Il2CppObject *)EventEntity__getEventName(eventEnt, 0);
  v24 = System_String__Format_64459052(v22, EventName, (Il2CppObject *)StringLiteral_25354/*"{0}"*/, 0);
  EndTime = EventEntity__GetEndTime(eventEnt, 0, 0);
  v19 = (QuestBoardInformationText_o *)sub_1C942E4(QuestBoardInformationText_TypeInfo);
  QuestBoardInformationText___ctor(v19, v24, EndTime, 1, 0, 0, 0);
  return v19;
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
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v20; // x20
  Il2CppObject *p_endedAt; // x20
  __int64 endedAt; // t1
  int64_t *v23; // x8
  int64_t v24; // x20
  System_String_o *EventName; // x21
  System_String_o *v26; // x0
  System_String_o *v27; // x22
  QuestBoardInformationText_o *v28; // x21
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  const MethodInfo *v40; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4D2A500 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1C94098(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&QuestBoardInformationText_TypeInfo);
    sub_1C94098(&StringLiteral_25354/*"{0}"*/);
    sub_1C94098(&StringLiteral_113/*" "*/);
    sub_1C94098(&StringLiteral_13493/*"TIME_REST_STRING"*/);
    byte_4D2A500 = 1;
  }
  entity = 0;
  v16 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)ServantStatusQuestBoardDraw__GetCampaignTextListByEventQuestMaster(
                                                                                        this,
                                                                                        this->fields.questId,
                                                                                        phase,
                                                                                        isQuestNoneCleared,
                                                                                        questBoardManager,
                                                                                        costCalcVal,
                                                                                        fixedVal,
                                                                                        isNotItemConsume,
                                                                                        v40);
  if ( !v16 )
    goto LABEL_25;
  System_Collections_Generic_List_object___AddRange(
    v16,
    CampaignTextListByEventQuestMaster,
    (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  if ( !questBoardManager || !CampaignTextListByEventQuestMaster )
    goto LABEL_25;
  EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                             (QuestReleaseOverwriteMaster_o *)CampaignTextListByEventQuestMaster,
                             this->fields.questId,
                             questBoardManager->fields.mListCreatedTime,
                             0);
  if ( !EntityByQuestIdAndTime )
    return (System_Collections_Generic_List_QuestBoardInformationText__o *)v16;
  v20 = EntityByQuestIdAndTime;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !CampaignTextListByEventQuestMaster )
    goto LABEL_25;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)CampaignTextListByEventQuestMaster,
          &entity,
          v20->fields.eventId,
          (const MethodInfo_345B50C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return (System_Collections_Generic_List_QuestBoardInformationText__o *)v16;
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)entity;
  if ( !entity )
    goto LABEL_25;
  if ( LODWORD(entity[1].monitor) != 25 )
    return (System_Collections_Generic_List_QuestBoardInformationText__o *)v16;
  endedAt = v20->fields.endedAt;
  p_endedAt = (Il2CppObject *)&v20->fields.endedAt;
  v23 = (int64_t *)(endedAt <= 0 ? &entity[6] : p_endedAt);
  v24 = *v23;
  EventName = EventEntity__getEventName((EventEntity_o *)entity, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_13493/*"TIME_REST_STRING"*/, 0);
  v27 = System_String__Concat_64458012(
          EventName,
          (System_String_o *)StringLiteral_113/*" "*/,
          v26,
          (System_String_o *)StringLiteral_25354/*"{0}"*/,
          0);
  v28 = (QuestBoardInformationText_o *)sub_1C942E4(QuestBoardInformationText_TypeInfo);
  QuestBoardInformationText___ctor(v28, v27, v24, 0, 1, 0, 0);
  items = v16->fields._items;
  v36 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
  ++v16->fields._version;
  if ( !items )
LABEL_25:
    sub_1C942F0(CampaignTextListByEventQuestMaster, v18);
  size = v16->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v16,
      (Il2CppObject *)v28,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = &items->obj.klass + size;
    v16->fields._size = size + 1;
    v38[4] = (Il2CppClass *)v28;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v38 + 4), (int32_t)v28, v29, v30, v31, v32, v33, v34);
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
  System_Collections_Generic_List_object__o *v16; // x24
  void *Instance; // x0
  __int64 v18; // x1
  DataManager_o *v19; // x26
  Il2CppObject *MasterData_object; // x25
  int64_t mListCreatedTime; // x29
  QuestEntity_o *v22; // x27
  int v23; // w8
  void *v24; // x28
  unsigned int v25; // w19
  EventEntity_o *v26; // x29
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass *v36; // x1
  Il2CppClass **v37; // x0
  const MethodInfo *v39; // [xsp+8h] [xbp-78h]
  bool v40; // [xsp+14h] [xbp-6Ch]
  bool *v41; // [xsp+18h] [xbp-68h]

  if ( (byte_4D2A501 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C94098(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1C94098(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2A501 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  v40 = isQuestNoneCleared;
  v19 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = DataManager__GetMasterData_object_(
               v19,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               questId,
               (const MethodInfo_345B4C0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !questBoardManager )
    goto LABEL_22;
  mListCreatedTime = questBoardManager->fields.mListCreatedTime;
  v22 = (QuestEntity_o *)Instance;
  Instance = DataManager__GetMasterData_object_(
               v19,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = EventQuestMaster__GetEnabledEventCampaignForQuest(
               (EventQuestMaster_o *)Instance,
               questId,
               phase,
               mListCreatedTime,
               7,
               0);
  if ( !Instance )
    goto LABEL_22;
  v23 = *((_DWORD *)Instance + 6);
  v24 = Instance;
  if ( v23 >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= v23 )
        sub_1C942F8(Instance);
      v26 = (EventEntity_o *)*((_QWORD *)v24 + (int)v25 + 4);
      if ( !v26 || !MasterData_object )
        break;
      Instance = EventCampaignMaster__getData((EventCampaignMaster_o *)MasterData_object, v26->fields.id, 0);
      if ( Instance )
      {
        Instance = ServantStatusQuestBoardDraw__CreateQuestBoardInformationText(
                     this,
                     v22,
                     v26,
                     (EventCampaignEntity_o *)Instance,
                     phase,
                     v40,
                     costCalcVal,
                     fixedVal,
                     v41,
                     v39);
        if ( Instance )
        {
          if ( !v16 )
            break;
          items = v16->fields._items;
          v34 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
          ++v16->fields._version;
          if ( !items )
            break;
          size = v16->fields._size;
          v36 = (Il2CppClass *)Instance;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v16,
              (Il2CppObject *)Instance,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = &items->obj.klass + size;
            v16->fields._size = size + 1;
            v37[4] = v36;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v37 + 4), (int32_t)v36, v27, v28, v29, v30, v31, v32);
          }
        }
      }
      v23 = *((_DWORD *)v24 + 6);
      if ( (int)++v25 >= v23 )
        return (System_Collections_Generic_List_QuestBoardInformationText__o *)v16;
    }
LABEL_22:
    sub_1C942F0(Instance, v18);
  }
  return (System_Collections_Generic_List_QuestBoardInformationText__o *)v16;
}


bool ServantStatusQuestBoardDraw__IsClose(MapControl_QuestInfo_o *qinf, const MethodInfo *method)
{
  MapControl_WarInfo_o *IsQuestReleaseAll; // x0
  __int64 v4; // x1
  char v5; // w8
  struct MapControl_SpotInfo_o *SpotInfo_k__BackingField; // x8
  Il2CppObject *Master_object; // x20
  System_Collections_Generic_List_object__o *v9; // x21
  System_Collections_Generic_List_object__o *v10; // x20
  __int64 v11; // x1
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  Il2CppObject *v19; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  MapControl_WarInfo_o *v24; // x20
  __int64 v25; // x8
  __int64 v26; // x23
  __int64 v27; // x8
  int32_t v28; // w19
  int32_t v29; // w22
  int64_t v30; // x21
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4D2A4F6 & 1) == 0 )
  {
    sub_1C94098(&CondType_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D2A4F6 = 1;
  }
  entityList = 0;
  memset(&v32, 0, sizeof(v32));
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IsQuestReleaseAll = (MapControl_WarInfo_o *)TerminalPramsManager__get_Debug_IsQuestReleaseAll(0);
  if ( ((unsigned __int8)IsQuestReleaseAll & 1) != 0 )
    goto LABEL_8;
  if ( !qinf )
    goto LABEL_53;
  if ( MapControl_QuestInfo__IsClear(qinf, 0) )
  {
LABEL_8:
    v5 = 0;
    return v5 & 1;
  }
  if ( MapControl_QuestInfo__GetQuestType(qinf, 0) == 3 )
  {
    IsQuestReleaseAll = qinf->fields._WarInfo_k__BackingField;
    if ( !IsQuestReleaseAll )
      goto LABEL_53;
    IsQuestReleaseAll = (MapControl_WarInfo_o *)MapControl_WarInfo__GetMine(IsQuestReleaseAll, 0);
    if ( !IsQuestReleaseAll )
      goto LABEL_53;
    if ( !WarEntity__HasFlag((WarEntity_o *)IsQuestReleaseAll, 16, 0) )
    {
      IsQuestReleaseAll = qinf->fields._WarInfo_k__BackingField;
      if ( !IsQuestReleaseAll )
        goto LABEL_53;
      IsQuestReleaseAll = (MapControl_WarInfo_o *)MapControl_WarInfo__GetStatus(IsQuestReleaseAll, 0);
      if ( !(_DWORD)IsQuestReleaseAll )
        goto LABEL_49;
      SpotInfo_k__BackingField = qinf->fields._SpotInfo_k__BackingField;
      if ( !SpotInfo_k__BackingField )
        goto LABEL_53;
      if ( SpotInfo_k__BackingField->fields.dispType != 1 )
      {
LABEL_49:
        v5 = 1;
        return v5 & 1;
      }
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v9;
  if ( !Master_object )
    goto LABEL_53;
  if ( QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
         (QuestReleaseOverwriteMaster_o *)Master_object,
         &entityList,
         qinf->fields.questId,
         0,
         0) )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    IsQuestReleaseAll = (MapControl_WarInfo_o *)entityList;
    if ( !entityList )
      goto LABEL_53;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v31,
      (System_Collections_Generic_List_object__o *)entityList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    v32 = v31;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
    {
      if ( !v32.fields._current )
        sub_1C942F0(0, v11);
      v12 = (Il2CppObject *)QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
                              (QuestReleaseOverwriteEntity_o *)v32.fields._current,
                              0);
      v19 = v12;
      if ( !v10 )
        sub_1C942F0(v12, v12);
      items = v10->fields._items;
      v21 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
      ++v10->fields._version;
      if ( !items )
        sub_1C942F0(v12, v12);
      size = v10->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          v12,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v19;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v19, v13, v14, v15, v16, v17, v18);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    if ( !v10 )
      goto LABEL_53;
    IsQuestReleaseAll = (MapControl_WarInfo_o *)System_Collections_Generic_List_object___ToArray(
                                                  v10,
                                                  (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    v24 = IsQuestReleaseAll;
    if ( IsQuestReleaseAll )
      goto LABEL_37;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsQuestReleaseAll = (MapControl_WarInfo_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !IsQuestReleaseAll )
LABEL_53:
    sub_1C942F0(IsQuestReleaseAll, v4);
  IsQuestReleaseAll = (MapControl_WarInfo_o *)QuestReleaseMaster__getListByQuestID(
                                                (QuestReleaseMaster_o *)IsQuestReleaseAll,
                                                qinf->fields.questId,
                                                0);
  v24 = IsQuestReleaseAll;
LABEL_37:
  if ( !v24 )
    goto LABEL_53;
  v25 = *(_QWORD *)&v24->fields.status;
  if ( !v25 )
  {
    v5 = qinf->fields.dispType != 1;
    return v5 & 1;
  }
  if ( (int)v25 < 1 )
    goto LABEL_8;
  v26 = 0;
  do
  {
    if ( (unsigned int)v26 >= (unsigned int)v25 )
      sub_1C942F8(IsQuestReleaseAll);
    v27 = *((_QWORD *)&v24->fields.mapInfoList + v26);
    if ( !v27 )
      goto LABEL_53;
    v29 = *(_DWORD *)(v27 + 20);
    v28 = *(_DWORD *)(v27 + 24);
    v30 = *(_QWORD *)(v27 + 32);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestReleaseAll = (MapControl_WarInfo_o *)CondType__IsOpen(v29, v28, v30, 0, 0, 0);
    if ( ((unsigned __int8)IsQuestReleaseAll & 1) == 0 )
      break;
    LODWORD(v25) = v24->fields.status;
    ++v26;
  }
  while ( (int)v26 < (int)v25 );
  v5 = (unsigned __int8)IsQuestReleaseAll ^ 1;
  return v5 & 1;
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

  if ( (byte_4D2A4FF & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4D2A4FF = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  return !mInfoTextList || mInfoTextList->fields._size == 0;
}


bool ServantStatusQuestBoardDraw__IsMultiInfoText(ServantStatusQuestBoardDraw_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8

  if ( (byte_4D2A4FE & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4D2A4FE = 1;
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


bool ServantStatusQuestBoardDraw__IsValidSupportSelection(
        ServantStatusQuestBoardDraw_o *this,
        QuestEntity_o *questEntity,
        int32_t phase,
        const MethodInfo *method)
{
  QuestRestrictionInfoMaster_o *Master_object; // x0
  __int64 v7; // x1
  bool HasFlag; // w0
  bool v9; // w21
  QuestRestrictionInfoEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2A503 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D2A503 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
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
        v9 = !HasFlag;
        return v9 & ~QuestEntity__HasFlag_43240700(questEntity, 2, phase, 0) & 1;
      }
LABEL_17:
      sub_1C942F0(Master_object, v7);
    }
  }
  else if ( !QuestEntity__HasFlag_43240700(questEntity, 0x80000, phase, 0) )
  {
    HasFlag = QuestEntity__HasFlag_43240700(questEntity, 0x100000, phase, 0);
    goto LABEL_15;
  }
  v9 = 0;
  return v9 & ~QuestEntity__HasFlag_43240700(questEntity, 2, phase, 0) & 1;
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
  UnityEngine_Object_o *inputMessageObject; // x20
  int32_t questId; // w8
  UnityEngine_GameObject_o *v5; // x19
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2A504 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_ServantStatusQuestBoardDraw_OnClick__);
    sub_1C94098(&StringLiteral_9893/*"OnClickServantQuest"*/);
    byte_4D2A504 = 1;
  }
  inputMessageObject = (UnityEngine_Object_o *)this->fields.inputMessageObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(inputMessageObject, 0, 0) || (questId = this->fields.questId) == 0 )
  {
    v8 = Method_ServantStatusQuestBoardDraw_OnClick__;
    if ( (*((_BYTE *)Method_ServantStatusQuestBoardDraw_OnClick__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C940B0(Method_ServantStatusQuestBoardDraw_OnClick__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C9407C(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0);
  }
  else
  {
    v5 = this->fields.inputMessageObject;
    v10 = questId;
    v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
    if ( !v5 )
      sub_1C942F0(v6, v7);
    UnityEngine_GameObject__SendMessage_72092252(v5, (System_String_o *)StringLiteral_9893/*"OnClickServantQuest"*/, v6, 0);
  }
}


void ServantStatusQuestBoardDraw__ResetInfoTextList(ServantStatusQuestBoardDraw_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *v3; // x8
  GrandQuestFolderBoardItem_o *p_mInfoTextList; // x19
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // t1
  int32_t size; // w2
  int v7; // w9
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D2A4F9 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_QuestBoardInformationText__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1C94098(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    byte_4D2A4F9 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  p_mInfoTextList = (GrandQuestFolderBoardItem_o *)&this->fields.mInfoTextList;
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
    v8 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    p_mInfoTextList->klass = (GrandQuestFolderBoardItem_c *)v8;
    sub_1C9403C(p_mInfoTextList, (int32_t)v8, v9, v10, v11, v12, v13, v14);
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
  System_String_o *monitor; // x21
  bool v17; // w25
  int32_t monitor_high; // w22
  char v19; // w23
  Il2CppObject *PrioredName; // x0
  System_String_o *v21; // x0
  int32_t targetId; // w26
  __int64 v23; // x27
  int32_t WarID_ByQuestID; // w26
  Il2CppObject *v25; // x0
  int64_t OpenedAt; // x26
  System_Object_array *v27; // x26
  System_DateTime_o v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  Il2CppObject *v35; // x27
  System_DateTime_o v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  Il2CppObject *v43; // x27
  System_DateTime_o v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  Il2CppObject *v51; // x27
  System_DateTime_o v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  Il2CppObject *v59; // x27
  _BOOL4 v60; // w26
  UILabel_o *mTitleNameLb; // x24
  const MethodInfo *v62; // x2
  struct ServantStatusQuestBoardDraw_StaticFields *static_fields; // x8
  __int64 v64; // x9
  int32_t v65; // w24
  int leftIndent; // w25
  float v67; // s8
  float ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X; // s9
  float v69; // s1 OVERLAPPED
  float v70; // s0
  int v71; // s2
  float v72; // s9
  float v73; // s0 OVERLAPPED
  float v74; // s1 OVERLAPPED
  float v75; // s0
  int v76; // s2
  float v77; // s1
  int v78; // s2
  UIWidget_o *mOverwriteAdvanceNoticeLb; // x23
  const MethodInfo *v80; // x4
  const MethodInfo *v81; // x4
  System_String_o *overlayClosedMessage; // x20
  UILabel_o *v83; // x21
  float v84; // s8
  UnityEngine_Object_o *mOverwriteAdvanceNoticeArrowObj; // x20
  __int64 v86; // x0
  int32_t Minute; // [xsp+Ch] [xbp-94h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-90h] BYREF
  int32_t Day; // [xsp+14h] [xbp-8Ch] BYREF
  int64_t value; // [xsp+18h] [xbp-88h] BYREF
  uint64_t dateData; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2A4FB & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_ClosedMessageMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_1C94098(&System_DateTime_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&long_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&ServantStatusQuestBoardDraw_TypeInfo);
    sub_1C94098(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C94098(&StringLiteral_14885/*"UNKNOWN_QUEST_NAME"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2A4FB = 1;
  }
  dateData = 0;
  entity = 0;
  if ( questReleaseClosedID < 1 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ClosedMessageMaster___);
  if ( !Master_object )
    goto LABEL_115;
  monitor = (System_String_o *)StringLiteral_1/*""*/;
  Master_object = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    questReleaseClosedID,
                    (const MethodInfo_345B50C *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
  if ( (Master_object & 1) != 0 )
  {
    Master_object = (__int64)entity;
    if ( !entity )
      goto LABEL_115;
    monitor = (System_String_o *)entity[1].monitor;
    Master_object = ClosedMessageEntity__IsChangeDispClosedMessage((ClosedMessageEntity_o *)entity, 0);
    if ( !entity )
      goto LABEL_115;
    v17 = Master_object;
    Master_object = ClosedMessageEntity__IsChangeDispPositionLeft((ClosedMessageEntity_o *)entity, 0);
    if ( !entity )
      goto LABEL_115;
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
    goto LABEL_115;
  switch ( questReleaseEntity->fields.type )
  {
    case 1:
      targetId = questReleaseEntity->fields.targetId;
      v23 = StringLiteral_1/*""*/;
      Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Master_object )
        goto LABEL_115;
      WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Master_object, targetId, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !Master_object )
        goto LABEL_115;
      v25 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              WarID_ByQuestID,
              (const MethodInfo_345B4C0 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( v25 )
      {
        PrioredName = (Il2CppObject *)WarEntity__GetPrioredName((WarEntity_o *)v25, 0);
LABEL_16:
        v21 = System_String__Format(monitor, PrioredName, 0);
LABEL_42:
        monitor = v21;
      }
      else
      {
        monitor = (System_String_o *)v23;
      }
LABEL_43:
      if ( warEntity != 0 && !v17 )
        v17 = WarEntity__IsChangeDispClosedMessage(warEntity, 0);
      if ( !questReleaseOverwriteEntity )
      {
        v60 = 0;
        if ( v17 )
          goto LABEL_47;
LABEL_53:
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
              ServantStatusQuestBoardDraw__SetOverwriteCondText(this, questReleaseOverwriteEntity, v62);
              return;
            }
          }
        }
        goto LABEL_115;
      }
      v60 = !System_String__IsNullOrEmpty(questReleaseOverwriteEntity->fields.overlayClosedMessage, 0);
      if ( !v17 )
        goto LABEL_53;
LABEL_47:
      Master_object = (__int64)this->fields.mAdvanceNoticeObj;
      if ( !Master_object )
        goto LABEL_115;
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
            goto LABEL_115;
          klass = entity[2].klass;
        }
        else
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14885/*"UNKNOWN_QUEST_NAME"*/, 0);
          klass = (Il2CppClass *)Master_object;
        }
        if ( !mTitleNameLb )
LABEL_115:
          sub_1C942F0(Master_object, klass);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14885/*"UNKNOWN_QUEST_NAME"*/, 0);
        if ( !mTitleNameLb )
          goto LABEL_115;
        klass = (Il2CppClass *)Master_object;
      }
      UILabel__set_text(mTitleNameLb, (System_String_o *)klass, 0);
      Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
        Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      }
      static_fields = *(struct ServantStatusQuestBoardDraw_StaticFields **)(Master_object + 184);
      v64 = 12;
      if ( !v60 )
        v64 = 8;
      v65 = *(int32_t *)((char *)&static_fields->TITLE_LABEL_BASE_WIDTH + v64);
      if ( v60 )
      {
        if ( !questReleaseOverwriteEntity )
          goto LABEL_115;
        leftIndent = questReleaseOverwriteEntity->fields.leftIndent;
      }
      else
      {
        leftIndent = 0;
      }
      v67 = (float)monitor_high;
      if ( (v19 & 1) != 0 )
      {
        if ( !*(_DWORD *)(Master_object + 224) )
        {
          j_il2cpp_runtime_class_init_0(Master_object);
          static_fields = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
        }
        Master_object = (__int64)this->fields.mAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_115;
        ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X = static_fields->ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X;
        UIWidget__set_pivot((UIWidget_o *)Master_object, 3, 0);
        Master_object = (__int64)this->fields.mAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_115;
        Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0);
        if ( !Master_object )
          goto LABEL_115;
        v69 = 24.0;
        if ( !v60 )
          v69 = 0.0;
        v71 = 0;
        v70 = ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X + v67;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)Master_object,
          *(UnityEngine_Vector3_o *)(&v69 - 1),
          0);
        Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
        if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
          Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
        }
        if ( !this->fields.mOverwriteAdvanceNoticeLb )
          goto LABEL_115;
        v72 = *(float *)(*(_QWORD *)(Master_object + 184) + 16LL);
        UIWidget__set_pivot((UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb, 3, 0);
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_115;
        Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0);
        if ( !Master_object )
          goto LABEL_115;
        v73 = v72 + (float)leftIndent;
      }
      else
      {
        Master_object = (__int64)this->fields.mAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_115;
        UIWidget__set_pivot((UIWidget_o *)Master_object, 4, 0);
        Master_object = (__int64)this->fields.mAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_115;
        Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0);
        if ( !Master_object )
          goto LABEL_115;
        v74 = 24.0;
        if ( !v60 )
          v74 = 0.0;
        v76 = 0;
        v75 = v67 * 0.5;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)Master_object,
          *(UnityEngine_Vector3_o *)(&v74 - 1),
          0);
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_115;
        UIWidget__set_pivot((UIWidget_o *)Master_object, 4, 0);
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_115;
        Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0);
        if ( !Master_object )
          goto LABEL_115;
        v73 = (float)leftIndent * 0.5;
      }
      v77 = -26.0;
      v78 = 0;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)Master_object,
        *(UnityEngine_Vector3_o *)&v73,
        0);
      Master_object = (__int64)this->fields.mAdvanceNoticeLb;
      if ( !Master_object )
        goto LABEL_115;
      UIWidget__set_height((UIWidget_o *)Master_object, v65, 0);
      Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      mOverwriteAdvanceNoticeLb = (UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      if ( !mOverwriteAdvanceNoticeLb )
        goto LABEL_115;
      UIWidget__set_height(
        mOverwriteAdvanceNoticeLb,
        ServantStatusQuestBoardDraw_TypeInfo->static_fields->ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT,
        0);
      ServantStatusQuestBoardDraw___SetAdvanceNoticeText_g__CalculateLabel_54_0(
        this->fields.mAdvanceNoticeLb,
        monitor,
        v65,
        monitor_high,
        v80);
      if ( v60 )
      {
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
        if ( !Master_object )
          goto LABEL_115;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
        if ( !questReleaseOverwriteEntity )
          goto LABEL_115;
        overlayClosedMessage = questReleaseOverwriteEntity->fields.overlayClosedMessage;
        v83 = this->fields.mOverwriteAdvanceNoticeLb;
        if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
        v84 = v67 * 0.5;
        ServantStatusQuestBoardDraw___SetAdvanceNoticeText_g__CalculateLabel_54_0(
          v83,
          overlayClosedMessage,
          v65,
          leftIndent,
          v81);
      }
      else
      {
        v84 = 0.0;
      }
      mOverwriteAdvanceNoticeArrowObj = (UnityEngine_Object_o *)this->fields.mOverwriteAdvanceNoticeArrowObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(mOverwriteAdvanceNoticeArrowObj, 0, 0) )
      {
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeArrowObj;
        if ( Master_object )
        {
          Master_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Master_object, 0);
          if ( Master_object )
          {
            v93.fields.y = 0.0;
            v93.fields.z = 0.0;
            v93.fields.x = v84;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Master_object, v93, 0);
            return;
          }
        }
        goto LABEL_115;
      }
      return;
    case 6:
    case 7:
    case 9:
      value = questReleaseEntity->fields.value;
      PrioredName = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &value);
      goto LABEL_16;
    case 0xC:
      if ( !questEntity )
        goto LABEL_115;
      OpenedAt = QuestEntity__getOpenedAt(questEntity, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      dateData = NetworkManager__getServerDateTime_42129376(OpenedAt, 0).fields._dateData;
      v27 = (System_Object_array *)sub_1C94140(object___TypeInfo, 4);
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v28.fields._dateData = (uint64_t)&dateData;
      LODWORD(value) = System_DateTime__get_Month(v28, 0);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &value);
      if ( !v27 )
        goto LABEL_115;
      v35 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1C941D4(Master_object, v27->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_117;
      }
      if ( !LODWORD(v27->max_length) )
        goto LABEL_116;
      v27->m_Items[0] = v35;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)v27->m_Items, (int32_t)v35, v29, v30, v31, v32, v33, v34);
      v36.fields._dateData = (uint64_t)&dateData;
      Day = System_DateTime__get_Day(v36, 0);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Day);
      v43 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1C941D4(Master_object, v27->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_117;
      }
      if ( LODWORD(v27->max_length) <= 1 )
        goto LABEL_116;
      v27->m_Items[1] = v43;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v27->m_Items[1], (int32_t)v43, v37, v38, v39, v40, v41, v42);
      v44.fields._dateData = (uint64_t)&dateData;
      Hour = System_DateTime__get_Hour(v44, 0);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Hour);
      v51 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1C941D4(Master_object, v27->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_117;
      }
      if ( LODWORD(v27->max_length) <= 2 )
        goto LABEL_116;
      v27->m_Items[2] = v51;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v27->m_Items[2], (int32_t)v51, v45, v46, v47, v48, v49, v50);
      v52.fields._dateData = (uint64_t)&dateData;
      Minute = System_DateTime__get_Minute(v52, 0);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Minute);
      v59 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1C941D4(Master_object, v27->obj.klass->_1.element_class);
        if ( !Master_object )
        {
LABEL_117:
          v86 = sub_1C94314();
          sub_1C941C0(v86, 0);
        }
      }
      if ( LODWORD(v27->max_length) <= 3 )
LABEL_116:
        sub_1C942F8(Master_object);
      v27->m_Items[3] = v59;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v27->m_Items[3], (int32_t)v59, v53, v54, v55, v56, v57, v58);
      v21 = System_String__Format_64459188(monitor, v27, 0);
      goto LABEL_42;
    default:
      goto LABEL_43;
  }
}


void ServantStatusQuestBoardDraw__SetDark(ServantStatusQuestBoardDraw_o *this, const MethodInfo *method)
{
  UIWidget_o *mLineSp; // x0
  UISprite_o *mcBaseP; // x20
  UILabel_o *mNoneLb; // x20
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct UnityEngine_GameObject_o **p_inputMessageObject; // x19
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4D2A4F7 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&ServantStatusQuestBoardDraw_TypeInfo);
    sub_1C94098(&StringLiteral_11974/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2A4F7 = 1;
  }
  mLineSp = (UIWidget_o *)ServantStatusQuestBoardDraw_TypeInfo;
  mcBaseP = this->fields.mcBaseP;
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
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
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  mLineSp = (UIWidget_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11974/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/, 0);
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
  ServantStatusQuestBoardDraw__ResetInfoTextList(this, v6);
  mLineSp = (UIWidget_o *)this->fields.mOptionInfoLb;
  if ( !mLineSp )
    goto LABEL_27;
  mLineSp = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mLineSp, 0);
  if ( !mLineSp )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0);
  this->fields.mRewardIconInfs = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mRewardIconInfs, 0, v7, v8, v9, v10, v11, v12);
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
    sub_1C942F0(mLineSp, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0);
  this->fields.inputMessageObject = 0;
  p_inputMessageObject = &this->fields.inputMessageObject;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p_inputMessageObject, 0, v14, v15, v16, v17, v18, v19);
  *((_DWORD *)p_inputMessageObject + 2) = 0;
  p_inputMessageObject[2] = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(p_inputMessageObject + 2), 0, v20, v21, v22, v23, v24, v25);
}


void ServantStatusQuestBoardDraw__SetInfoTextAlpha(
        ServantStatusQuestBoardDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8
  BoardOptionTextWithIconComponent_o *mOptionInfoLb; // x0

  if ( (byte_4D2A4FE & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4D2A4FE = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList && mInfoTextList->fields._size >= 2 )
  {
    mOptionInfoLb = this->fields.mOptionInfoLb;
    if ( !mOptionInfoLb )
      sub_1C942F0(0, method);
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
  BoardOptionTextWithIconComponent_o *Master_object; // x0
  __int64 giftIconId; // x1
  bool IsSvtCoinQuest; // w27
  bool v15; // w26
  int current; // w22
  QuestEntity_o *Mine; // x24
  const MethodInfo *v18; // x1
  bool v19; // w26
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  char v26; // w28
  const MethodInfo *v27; // x1
  _BOOL4 IsClear; // w29
  int32_t id; // w8
  int32_t warId; // w20
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v32; // x20
  _BOOL4 v33; // w25
  QuestReleaseEntity_o **v34; // x28
  Il2CppObject *v35; // x25
  bool HasStatus; // w22
  int32_t questPhase; // w20
  int32_t PhaseMax; // w8
  Il2CppObject *v39; // x0
  _BOOL4 v40; // w20
  int v41; // w23
  float v42; // s9
  _BOOL4 v43; // w26
  float v44; // s8
  BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x22
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  struct UISprite_o *mcBaseP; // x8
  struct UIAtlas_o *mAtlas; // x1
  UISprite_o *v54; // x20
  _BOOL4 v55; // w23
  UISprite_o *v56; // x20
  UISprite_o *v57; // x20
  _BOOL4 v58; // w25
  ServantStatusQuestBoardDraw_c *v59; // x0
  UISprite_o *v60; // x25
  System_String_o *BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME; // x20
  UISprite_o *v62; // x20
  _BOOL4 v63; // w20
  UISprite_o *mTitleSp; // x20
  _BOOL4 v65; // w29
  UISprite_o *v66; // x25
  uint32_t cctor_finished; // w8
  __int64 v68; // x9
  _BOOL4 v69; // w9
  UISprite_o *v70; // x25
  ServantStatusQuestBoardDraw_c *v71; // x0
  System_String_o *TITLE_SPRITE_NAME_LIMIT_UNSEAL; // x20
  bool v73; // w0
  UISprite_o *v74; // x20
  UISprite_o *v75; // x20
  UISprite_o *mTitle2Sp; // x20
  UISprite_o *mLineSp; // x20
  struct UISprite_o *v78; // x8
  int v79; // s0 OVERLAPPED
  int v80; // s1
  int v81; // s2
  float v82; // s3
  Il2CppObject *v83; // x20
  System_Collections_Generic_List_object__o *v84; // x25
  ServantStatusQuestBoardDraw___c_c *v85; // x0
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *v86; // x25
  System_Func_object__int__o *_9__48_0; // x20
  Il2CppObject *v88; // x29
  struct ServantStatusQuestBoardDraw___c_StaticFields *static_fields; // x0
  int32_t v90; // w2
  int32_t v91; // w3
  System_String_o *v92; // x4
  int32_t v93; // w5
  int64_t v94; // x6
  System_String_o *v95; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v96; // x0
  Il2CppObject *v97; // x0
  int64_t v98; // x5
  const MethodInfo *v99; // x7
  QuestReleaseOverwriteEntity_o *v100; // x25
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *v101; // x20
  System_Func_object__bool__o *v102; // x29
  Il2CppObject *v103; // x0
  QuestReleaseEntity_o *v104; // x4
  ServantStatusQuestBoardManager_o *v105; // x28
  UILabel_o *v106; // x20
  System_String_o **v107; // x8
  LocalizationManager_c *v108; // x0
  System_String_o **v109; // x9
  System_String_o *v110; // x23
  const MethodInfo *v111; // x2
  struct UILabel_o *mTitleNameLb; // x20
  System_String_o *v113; // x1
  System_String_o *v114; // x20
  Il2CppObject *v115; // x23
  Il2CppObject *BattleName; // x0
  int32_t monitor; // w20
  int32_t TITLE_LABEL_BASE_WIDTH; // w23
  bool v119; // cc
  UnityEngine_Transform_o *v120; // x20
  struct UILabel_o *v121; // x8
  UnityEngine_GameObject_o *v122; // x23
  float y; // s1
  float x; // s0 OVERLAPPED
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *v126; // x8
  int v127; // s2
  int v128; // s1
  int v129; // s0 OVERLAPPED
  float v130; // s3
  struct UnityEngine_GameObject_o *v131; // x20
  int32_t v132; // w2
  int32_t v133; // w3
  System_String_o *v134; // x4
  int32_t v135; // w5
  int64_t v136; // x6
  System_String_o *v137; // x7
  struct UnityEngine_GameObject_o *v138; // x1
  UISprite_o *mTitleShortcutSp; // x20
  struct UISprite_o *v140; // x8
  int32_t ServantId; // w20
  BoardOptionTextWithIconComponent_o *v142; // x23
  UILabel_o *mTitleShortcutLb; // x20
  Il2CppObject *v144; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x25
  intptr_t m_CachedPtr; // x27
  ServantLimitImageMaster_o *v147; // x23
  const MethodInfo *v148; // x1
  const MethodInfo *v149; // x1
  __int64 endTime; // x23
  System_Collections_Generic_List_object__o *mInfoTextList; // x20
  System_String_o *v152; // x27
  QuestBoardInformationText_o *v153; // x25
  int32_t v154; // w2
  int32_t v155; // w3
  System_String_o *v156; // x4
  int32_t v157; // w5
  int64_t v158; // x6
  System_String_o *v159; // x7
  struct System_Object_array *items; // x8
  _QWORD *v161; // x9
  __int64 size; // x10
  Il2CppClass **v163; // x0
  int32_t v164; // w23
  int32_t v165; // w0
  int32_t v166; // w1
  struct System_Collections_Generic_List_QuestBoardInformationText__o *v167; // x20
  int32_t v168; // w2
  int v169; // w8
  int32_t v170; // w9
  bool v171; // w20
  int32_t v172; // w8
  int32_t v173; // w2
  int32_t v174; // w3
  System_String_o *v175; // x4
  int32_t v176; // w5
  int64_t v177; // x6
  System_String_o *v178; // x7
  bool v179; // w1
  int v180; // w8
  UnityEngine_Component_o *mServantLimitRewardObtainedSP; // x20
  char v182; // w20
  int32_t v183; // w2
  int32_t v184; // w3
  System_String_o *v185; // x4
  int32_t v186; // w5
  int64_t v187; // x6
  System_String_o *v188; // x7
  struct System_Threading_CancellationTokenSource_o *v189; // x8
  struct GiftEntity_array *v190; // x21
  int v191; // w9
  _DWORD *v192; // x9
  int v193; // w8
  int64_t v194; // x2
  int64_t v195; // x3
  const MethodInfo *v196; // [xsp+0h] [xbp-150h]
  _BOOL4 v197; // [xsp+1Ch] [xbp-134h]
  _BOOL4 v198; // [xsp+20h] [xbp-130h]
  __int64 v199; // [xsp+20h] [xbp-130h]
  int32_t limitCounta; // [xsp+2Ch] [xbp-124h]
  WarEntity_o *warEntity; // [xsp+30h] [xbp-120h]
  int v202; // [xsp+3Ch] [xbp-114h]
  int questReleaseClosedID; // [xsp+40h] [xbp-110h]
  int32_t phase; // [xsp+44h] [xbp-10Ch]
  QuestBehaviorMaster_o *v205; // [xsp+48h] [xbp-108h]
  bool v206; // [xsp+50h] [xbp-100h]
  int v207; // [xsp+54h] [xbp-FCh]
  int64_t nowTime; // [xsp+58h] [xbp-F8h]
  int32_t QuestType; // [xsp+6Ch] [xbp-E4h]
  _BOOL4 IsLimitCountSealQuest; // [xsp+70h] [xbp-E0h]
  char v212; // [xsp+74h] [xbp-DCh]
  ServantStatusQuestBoardManager_o *v213; // [xsp+78h] [xbp-D8h]
  Il2CppObject *object; // [xsp+80h] [xbp-D0h]
  System_Collections_Generic_List_Enumerator_int__o v215; // [xsp+88h] [xbp-C8h] BYREF
  bool isNotItemConsume; // [xsp+A4h] [xbp-ACh] BYREF
  int32_t fixedVal[2]; // [xsp+A8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v218; // [xsp+B0h] [xbp-A0h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+C8h] [xbp-88h] BYREF
  UserQuestEntity_o *v220; // [xsp+D0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+D8h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v222; // 0:x0.16
  UnityEngine_Vector3_o v223; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v224; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v225; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v226; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v227; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v228; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v229; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v230; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v231; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v232; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v233; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v234; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v235; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v236; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v237; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v238; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2A4F8 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&CondType_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_QuestExtensionMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
    sub_1C94098(&Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity____79087568);
    sub_1C94098(&Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity___);
    sub_1C94098(&Method_System_Linq_Enumerable_OrderByDescending_QuestReleaseOverwriteEntity__int___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C94098(&System_Func_QuestReleaseOverwriteEntity__int__TypeInfo);
    sub_1C94098(&System_Func_QuestReleaseOverwriteEntity__bool__TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&QuestBoardInformationText_TypeInfo);
    sub_1C94098(&ServantStatusQuestBoardDraw_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C94098(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C94098(&Method_ServantStatusQuestBoardDraw___c__SetItem_b__48_0__);
    sub_1C94098(&Method_ServantStatusQuestBoardDraw___c__DisplayClass48_0__SetItem_b__1__);
    sub_1C94098(&ServantStatusQuestBoardDraw___c__DisplayClass48_0_TypeInfo);
    sub_1C94098(&ServantStatusQuestBoardDraw___c_TypeInfo);
    sub_1C94098(&StringLiteral_13486/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_1C94098(&StringLiteral_20547/*"img_conductor_line"*/);
    sub_1C94098(&StringLiteral_20550/*"img_conductor_questboard_paladin"*/);
    sub_1C94098(&StringLiteral_25354/*"{0}"*/);
    sub_1C94098(&StringLiteral_20552/*"img_conductor_quicklink_02"*/);
    sub_1C94098(&StringLiteral_12045/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE2"*/);
    sub_1C94098(&StringLiteral_20394/*"icon_reward_limits_release"*/);
    sub_1C94098(&StringLiteral_12047/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT2"*/);
    sub_1C94098(&StringLiteral_12046/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/);
    sub_1C94098(&StringLiteral_20546/*"img_conductor_05"*/);
    sub_1C94098(&StringLiteral_20551/*"img_conductor_quicklink"*/);
    sub_1C94098(&StringLiteral_20553/*"img_conductor_scq"*/);
    sub_1C94098(&StringLiteral_20548/*"img_conductor_line_white"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_20554/*"img_conductor_sq"*/);
    sub_1C94098(&StringLiteral_12044/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE"*/);
    sub_1C94098(&StringLiteral_11999/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/);
    byte_4D2A4F8 = 1;
  }
  v220 = 0;
  entity = 0;
  entityList = 0;
  memset(&v218, 0, sizeof(v218));
  *(_QWORD *)fixedVal = 0;
  isNotItemConsume = 0;
  object = (Il2CppObject *)sub_1C942E4(ServantStatusQuestBoardDraw___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor(object, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (BoardOptionTextWithIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_QuestExtensionMaster___);
  if ( !qinf || !Master_object )
    goto LABEL_382;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         qinf->fields.questId,
         (const MethodInfo_345B50C *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__) )
  {
    Master_object = (BoardOptionTextWithIconComponent_o *)entity;
    if ( !entity )
      goto LABEL_382;
    IsSvtCoinQuest = QuestExtensionEntity__IsSvtCoinQuest((QuestExtensionEntity_o *)entity, 0);
  }
  else
  {
    IsSvtCoinQuest = 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (BoardOptionTextWithIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Master_object )
    goto LABEL_382;
  limitCounta = limitCount;
  v213 = questBoardManager;
  Master_object = (BoardOptionTextWithIconComponent_o *)QuestGroupMaster__GetInterludeQuestIdList(
                                                          (QuestGroupMaster_o *)Master_object,
                                                          qinf->fields.questId,
                                                          0);
  if ( !Master_object )
    goto LABEL_382;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v215,
    (System_Collections_Generic_List_int__o *)Master_object,
    (const MethodInfo_384E8E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v218 = v215;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v218,
            (const MethodInfo_35E83A8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v15 )
      break;
    current = v218.fields._current;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsQuestClear_41072884(current, -1, 0, 0) )
      goto LABEL_22;
  }
  current = 0;
LABEL_22:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v218,
    (const MethodInfo_35E83A4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( !questBoardManager )
    goto LABEL_382;
  nowTime = questBoardManager->fields.mListCreatedTime;
  Mine = MapControl_QuestInfo__GetMine(qinf, 0);
  QuestType = MapControl_QuestInfo__GetQuestType(qinf, 0);
  v19 = v15 || MapControl_QuestInfo__IsClear(qinf, 0);
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  Master_object = (BoardOptionTextWithIconComponent_o *)ServantStatusQuestBoardDraw__IsClose(qinf, v18);
  v26 = (char)Master_object;
  if ( beforeQuestInfo )
  {
    IsClear = MapControl_QuestInfo__IsClear(beforeQuestInfo, 0);
    if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    Master_object = (BoardOptionTextWithIconComponent_o *)ServantStatusQuestBoardDraw__IsClose(beforeQuestInfo, v27);
    v202 = (unsigned __int8)Master_object & 1;
    if ( !Mine )
      goto LABEL_382;
  }
  else
  {
    v202 = 0;
    IsClear = 1;
    if ( !Mine )
      goto LABEL_382;
  }
  id = Mine->fields.id;
  this->fields.qinf = qinf;
  this->fields.questId = id;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.qinf, (int32_t)qinf, v20, v21, v22, v23, v24, v25);
  warId = qinf->fields.warId;
  Master_object = (BoardOptionTextWithIconComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Master_object )
    goto LABEL_382;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Master_object, warId, 0);
  v32 = WarEntityByWarID;
  if ( WarEntityByWarID )
    v33 = !WarEntity__IsFolder(WarEntityByWarID, 0);
  else
    v33 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (BoardOptionTextWithIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_object )
    goto LABEL_382;
  IsLimitCountSealQuest = ServantLimitImageMaster__IsLimitCountSealQuest(
                            (ServantLimitImageMaster_o *)Master_object,
                            this->fields.questId,
                            0);
  Master_object = (BoardOptionTextWithIconComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !object )
    goto LABEL_382;
  v212 = v26;
  if ( !Master_object )
    goto LABEL_382;
  v34 = (QuestReleaseEntity_o **)&object[1];
  clsQuestCheck__mfQuestReleaseCheckGetEntityByQuestID(
    (clsQuestCheck_o *)Master_object,
    Mine->fields.id,
    (QuestReleaseEntity_o **)&object[1],
    qinf,
    0);
  if ( object[1].klass )
    questReleaseClosedID = (*v34)->fields.closedMessageId;
  else
    questReleaseClosedID = 0;
  v198 = v33;
  warEntity = v32;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v35 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2633A )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2633A = 1;
  }
  Master_object = (BoardOptionTextWithIconComponent_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (BoardOptionTextWithIconComponent_o *)NetworkManager_TypeInfo;
  }
  if ( current < 1 )
  {
    if ( !v35 )
      goto LABEL_382;
    current = this->fields.questId;
  }
  else if ( !v35 )
  {
    goto LABEL_382;
  }
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)v35,
    &v220,
    (int64_t)Master_object[2].fields.m_CancellationTokenSource[1].klass,
    current,
    0);
  if ( v220 )
    HasStatus = UserQuestEntity__HasStatus(v220, 4, 0);
  else
    HasStatus = 0;
  questPhase = qinf->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(qinf, 0);
  if ( questPhase + 1 < PhaseMax )
    PhaseMax = questPhase + 1;
  phase = PhaseMax;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v39 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  v40 = !v19 && IsClear;
  v205 = (QuestBehaviorMaster_o *)v39;
  if ( v19 )
  {
    v41 = 1;
LABEL_77:
    v42 = 1.0;
    v43 = v41;
    if ( IsSvtCoinQuest )
      v44 = 1.0;
    else
      v44 = 0.5;
    v41 = 1;
    goto LABEL_81;
  }
  if ( v39 )
  {
    if ( QuestBehaviorMaster__IsOpenQuestBehaviorCond((QuestBehaviorMaster_o *)v39, this->fields.questId, phase, 9, 0) )
    {
      v212 = 0;
      questReleaseClosedID = 0;
      HasStatus = 0;
      v41 = 1;
      IsClear = v40;
      goto LABEL_77;
    }
    IsClear = v40;
  }
  v41 = 0;
  if ( (v212 & 1) != 0 )
  {
    v212 = 1;
    goto LABEL_77;
  }
  v44 = 1.0;
  v43 = 0;
  v212 = 0;
  v42 = 1.0;
LABEL_81:
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitleObj;
  v206 = HasStatus;
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  Master_object = this->fields.mOptionInfoLb;
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (BoardOptionTextWithIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)Master_object,
                                                          0);
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mRewardObj;
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mAdvanceNoticeObj;
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mOverwriteAdvanceNoticeObj;
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mCondObject;
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mServantLimitRewardObtainedSP;
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (BoardOptionTextWithIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)Master_object,
                                                          0);
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  mcBaseP = this->fields.mcBaseP;
  if ( !mcBaseP )
    goto LABEL_382;
  mAtlas = mcBaseP->fields.mAtlas;
  this->fields.basePanelAtlas = mAtlas;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.basePanelAtlas,
    (int32_t)mAtlas,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  Master_object = (BoardOptionTextWithIconComponent_o *)ServantStatusQuestBoardDraw_TypeInfo;
  v54 = this->fields.mcBaseP;
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  v207 = v41;
  if ( !v54 )
    goto LABEL_382;
  UISprite__set_spriteName(v54, ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME, 0);
  v55 = !IsSvtCoinQuest && IsClear;
  if ( IsSvtCoinQuest )
  {
    v56 = this->fields.mcBaseP;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( !AtlasManager__SetEventUI(v56, (System_String_o *)StringLiteral_20550/*"img_conductor_questboard_paladin"*/, 0) )
    {
      Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mcBaseP;
      if ( !Master_object )
        goto LABEL_382;
      UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0);
      Master_object = (BoardOptionTextWithIconComponent_o *)ServantStatusQuestBoardDraw_TypeInfo;
      v57 = this->fields.mcBaseP;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      if ( !v57 )
        goto LABEL_382;
      UISprite__set_spriteName(v57, ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME, 0);
    }
    v55 = 0;
    v58 = IsClear;
  }
  else if ( IsLimitCountSealQuest )
  {
    v59 = ServantStatusQuestBoardDraw_TypeInfo;
    v60 = this->fields.mcBaseP;
    if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      v59 = ServantStatusQuestBoardDraw_TypeInfo;
    }
    BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME = v59->static_fields->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( !AtlasManager__SetEventUI(v60, BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME, 0) )
    {
      Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mcBaseP;
      if ( !Master_object )
        goto LABEL_382;
      UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0);
      v62 = this->fields.mcBaseP;
      Master_object = (BoardOptionTextWithIconComponent_o *)ServantStatusQuestBoardDraw_TypeInfo;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      if ( !v62 )
        goto LABEL_382;
      UISprite__set_spriteName(v62, ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME, 0);
    }
    v58 = 0;
    IsClear = v55;
  }
  else
  {
    v58 = 0;
    v55 = IsClear;
  }
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mcBaseP;
  if ( !Master_object )
    goto LABEL_382;
  ((void (__fastcall *)(BoardOptionTextWithIconComponent_o *, void *))Master_object->klass[2]._1.parent)(
    Master_object,
    Master_object->klass[2]._1.generic_class);
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mcBaseP;
  if ( !Master_object )
    goto LABEL_382;
  v225.fields.r = v44;
  v225.fields.g = v44;
  v225.fields.b = v44;
  v225.fields.a = v42;
  UIWidget__set_color((UIWidget_o *)Master_object, v225, 0);
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mLineSp;
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0);
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mLineSp;
  if ( !Master_object )
    goto LABEL_382;
  v226.fields.r = v44;
  v226.fields.g = v44;
  v226.fields.b = v44;
  v226.fields.a = v42;
  UIWidget__set_color((UIWidget_o *)Master_object, v226, 0);
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitle2Sp;
  v63 = v43 && IsClear;
  if ( IsSvtCoinQuest || !v43 )
  {
    if ( !Master_object )
      goto LABEL_382;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0);
    Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitle2Sp;
    if ( !Master_object )
      goto LABEL_382;
    v227.fields.r = v44;
    v227.fields.g = v44;
    v227.fields.b = v44;
    v227.fields.a = v42;
    UIWidget__set_color((UIWidget_o *)Master_object, v227, 0);
    Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_382;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0);
    if ( IsSvtCoinQuest )
    {
      mTitleSp = this->fields.mTitleSp;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( AtlasManager__SetEventUI(mTitleSp, (System_String_o *)StringLiteral_20546/*"img_conductor_05"*/, 0) )
      {
        v223.fields.x = -22.0;
        v223.fields.y = 0.0;
        v223.fields.z = 0.0;
        ComponentHelper__SetLocalPosition((UnityEngine_Component_o *)this->fields.mTitleSp, v223, 0);
      }
      else
      {
        Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitleSp;
        if ( !Master_object )
          goto LABEL_382;
        UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0);
        v75 = this->fields.mTitleSp;
        Master_object = (BoardOptionTextWithIconComponent_o *)ServantStatusQuestBoardDraw_TypeInfo;
        if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
        if ( !v75 )
          goto LABEL_382;
        UISprite__set_spriteName(
          v75,
          ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_SPRITE_NAME_INTERLUDE,
          0);
      }
      mTitle2Sp = this->fields.mTitle2Sp;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( !AtlasManager__SetEventUI(mTitle2Sp, (System_String_o *)StringLiteral_20552/*"img_conductor_quicklink_02"*/, 0) )
      {
        Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitle2Sp;
        if ( !Master_object )
          goto LABEL_382;
        UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0);
        Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitle2Sp;
        if ( !Master_object )
          goto LABEL_382;
        UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)StringLiteral_20551/*"img_conductor_quicklink"*/, 0);
      }
      Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitle2Sp;
      if ( !Master_object )
        goto LABEL_382;
      ((void (__fastcall *)(BoardOptionTextWithIconComponent_o *, void *))Master_object->klass[2]._1.parent)(
        Master_object,
        Master_object->klass[2]._1.generic_class);
      Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitle2Sp;
      if ( !Master_object )
        goto LABEL_382;
      v228.fields.r = v44;
      v228.fields.g = v44;
      v228.fields.b = v44;
      v228.fields.a = v42;
      UIWidget__set_color((UIWidget_o *)Master_object, v228, 0);
      mLineSp = this->fields.mLineSp;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      Master_object = (BoardOptionTextWithIconComponent_o *)AtlasManager__SetEventUI(
                                                              mLineSp,
                                                              (System_String_o *)StringLiteral_20548/*"img_conductor_line_white"*/,
                                                              0);
      v78 = this->fields.mLineSp;
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !v78 )
          goto LABEL_382;
        v79 = 1060023983;
        v80 = 1058839709;
        v81 = 1051240617;
        v82 = 1.0;
        Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mLineSp;
      }
      else
      {
        if ( !v78 )
          goto LABEL_382;
        UISprite__set_atlas(this->fields.mLineSp, this->fields.basePanelAtlas, 0);
        Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mLineSp;
        if ( !Master_object )
          goto LABEL_382;
        UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)StringLiteral_20547/*"img_conductor_line"*/, 0);
        Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mLineSp;
        if ( !Master_object )
          goto LABEL_382;
        v79 = LODWORD(v44);
        v80 = LODWORD(v44);
        v81 = LODWORD(v44);
        v82 = v42;
      }
      UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)&v79, 0);
    }
    else
    {
      Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitleSp;
      v65 = QuestType == 3 && v55;
      if ( !Master_object )
        goto LABEL_382;
      UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0);
      v66 = this->fields.mTitleSp;
      Master_object = (BoardOptionTextWithIconComponent_o *)ServantStatusQuestBoardDraw_TypeInfo;
      cctor_finished = ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished;
      if ( QuestType != 3 )
      {
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
        if ( !v66 )
          goto LABEL_382;
        UISprite__set_spriteName(
          v66,
          ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_SPRITE_NAME_RAINFORCEMENT,
          0);
        goto LABEL_193;
      }
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      if ( !v66 )
        goto LABEL_382;
      v68 = 56;
      if ( !v198 )
        v68 = 48;
      v199 = v68;
      UISprite__set_spriteName(
        v66,
        *(System_String_o **)((char *)&ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH + v68),
        0);
      v69 = IsLimitCountSealQuest && v65;
      if ( !IsLimitCountSealQuest )
        goto LABEL_193;
      v197 = v69;
      v70 = this->fields.mTitleSp;
      v71 = ServantStatusQuestBoardDraw_TypeInfo;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
        v71 = ServantStatusQuestBoardDraw_TypeInfo;
      }
      TITLE_SPRITE_NAME_LIMIT_UNSEAL = v71->static_fields->TITLE_SPRITE_NAME_LIMIT_UNSEAL;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v73 = AtlasManager__SetEventUI(v70, TITLE_SPRITE_NAME_LIMIT_UNSEAL, 0);
      v58 = v197;
      v55 = v65;
      if ( v73 )
      {
LABEL_193:
        Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitleSp;
        if ( !Master_object )
          goto LABEL_382;
        ((void (__fastcall *)(BoardOptionTextWithIconComponent_o *, void *))Master_object->klass[2]._1.parent)(
          Master_object,
          Master_object->klass[2]._1.generic_class);
        Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitleSp;
        if ( !Master_object )
          goto LABEL_382;
        v229.fields.r = v44;
        v229.fields.g = v44;
        v229.fields.b = v44;
        v229.fields.a = v42;
        UIWidget__set_color((UIWidget_o *)Master_object, v229, 0);
        Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mLinkObj;
        if ( !Master_object )
          goto LABEL_382;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
        Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mLinkObj;
        if ( !Master_object )
          goto LABEL_382;
        Master_object = (BoardOptionTextWithIconComponent_o *)UnityEngine_GameObject__get_gameObject(
                                                                (UnityEngine_GameObject_o *)Master_object,
                                                                0);
        if ( !Master_object )
          goto LABEL_382;
        Master_object = (BoardOptionTextWithIconComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                (UnityEngine_GameObject_o *)Master_object,
                                                                (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( !Master_object )
          goto LABEL_382;
        v230.fields.r = v44;
        v230.fields.g = v44;
        v230.fields.b = v44;
        v230.fields.a = v42;
        UIWidget__set_color((UIWidget_o *)Master_object, v230, 0);
        goto LABEL_200;
      }
      Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitleSp;
      if ( !Master_object )
        goto LABEL_382;
      UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0);
      v74 = this->fields.mTitleSp;
      Master_object = (BoardOptionTextWithIconComponent_o *)ServantStatusQuestBoardDraw_TypeInfo;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      if ( !v74 )
        goto LABEL_382;
      UISprite__set_spriteName(
        v74,
        *(System_String_o **)((char *)&ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH + v199),
        0);
    }
    v55 = v58;
    goto LABEL_193;
  }
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 0, 0);
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitleSp;
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 0, 0);
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mLinkObj;
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  v55 = v63;
LABEL_200:
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mClearObj;
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v43, 0);
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mNoneLb;
  if ( !Master_object )
    goto LABEL_382;
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v83 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  v84 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v84,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v84;
  if ( !v83 )
    goto LABEL_382;
  QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
    (QuestReleaseOverwriteMaster_o *)v83,
    &entityList,
    this->fields.questId,
    nowTime,
    0);
  v85 = ServantStatusQuestBoardDraw___c_TypeInfo;
  v86 = entityList;
  if ( !ServantStatusQuestBoardDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw___c_TypeInfo);
    v85 = ServantStatusQuestBoardDraw___c_TypeInfo;
  }
  _9__48_0 = (System_Func_object__int__o *)v85->static_fields->__9__48_0;
  if ( !_9__48_0 )
  {
    if ( !v85->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v85);
      v85 = ServantStatusQuestBoardDraw___c_TypeInfo;
    }
    v88 = (Il2CppObject *)v85->static_fields->__9;
    _9__48_0 = (System_Func_object__int__o *)sub_1C942E4(System_Func_QuestReleaseOverwriteEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__48_0, v88, Method_ServantStatusQuestBoardDraw___c__SetItem_b__48_0__, 0);
    static_fields = ServantStatusQuestBoardDraw___c_TypeInfo->static_fields;
    static_fields->__9__48_0 = (struct System_Func_QuestReleaseOverwriteEntity__int__o *)_9__48_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__48_0,
      (int32_t)_9__48_0,
      v90,
      v91,
      v92,
      v93,
      v94,
      v95);
    p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  }
  v96 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v86,
                                                               (System_Func_TSource__TKey__o *)_9__48_0,
                                                               (const MethodInfo_31CC684 *)Method_System_Linq_Enumerable_OrderByDescending_QuestReleaseOverwriteEntity__int___);
  v97 = System_Linq_Enumerable__FirstOrDefault_object_(
          v96,
          (const MethodInfo_31C4BAC *)Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity___);
  v100 = (QuestReleaseOverwriteEntity_o *)v97;
  if ( *v34 )
  {
    if ( v97 )
    {
      v101 = entityList;
      v102 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_QuestReleaseOverwriteEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v102,
        object,
        Method_ServantStatusQuestBoardDraw___c__DisplayClass48_0__SetItem_b__1__,
        0);
      v103 = System_Linq_Enumerable__FirstOrDefault_object__52191056(
               (System_Collections_Generic_IEnumerable_TSource__o *)v101,
               (System_Func_TSource__bool__o *)v102,
               (const MethodInfo_31C5F50 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity____79087568);
      if ( v103 )
        v100 = (QuestReleaseOverwriteEntity_o *)v103;
    }
  }
  if ( IsSvtCoinQuest || v43 || v55 )
  {
    v104 = *v34;
    if ( questReleaseClosedID < 1 )
    {
      v105 = v213;
      if ( v104 && v104->fields.type == 8 )
      {
        mTitleNameLb = this->fields.mTitleNameLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Master_object = (BoardOptionTextWithIconComponent_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_11999/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/,
                                                                0);
        if ( !mTitleNameLb )
          goto LABEL_382;
        v113 = (System_String_o *)Master_object;
        Master_object = (BoardOptionTextWithIconComponent_o *)mTitleNameLb;
      }
      else
      {
        Master_object = (BoardOptionTextWithIconComponent_o *)QuestEntity__getQuestName(Mine, 0);
        if ( !Master_object )
          goto LABEL_382;
        v114 = (System_String_o *)Master_object;
        if ( System_String__Contains((System_String_o *)Master_object, (System_String_o *)StringLiteral_25354/*"{0}"*/, 0) )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v115 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
          Master_object = (BoardOptionTextWithIconComponent_o *)QuestEntity__getServantId(Mine, 0);
          if ( !v115 )
            goto LABEL_382;
          Master_object = (BoardOptionTextWithIconComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v115,
                                                                  (int32_t)Master_object,
                                                                  (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Master_object )
            goto LABEL_382;
          BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Master_object, 0, -1, 0);
          v114 = System_String__Format(v114, BattleName, 0);
        }
        Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitleNameLb;
        if ( !Master_object )
          goto LABEL_382;
        v113 = v114;
      }
      UILabel__set_text((UILabel_o *)Master_object, v113, 0);
    }
    else
    {
      ServantStatusQuestBoardDraw__SetAdvanceNoticeText(
        this,
        questReleaseClosedID,
        warEntity,
        Mine,
        v104,
        v98,
        v100,
        v99);
      v105 = v213;
    }
  }
  else
  {
    v106 = this->fields.mTitleNameLb;
    if ( QuestType == 3 )
    {
      v107 = (System_String_o **)&StringLiteral_12044/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE"*/;
      v108 = LocalizationManager_TypeInfo;
      v109 = (System_String_o **)&StringLiteral_12045/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE2"*/;
    }
    else
    {
      v107 = (System_String_o **)&StringLiteral_12046/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/;
      v108 = LocalizationManager_TypeInfo;
      v109 = (System_String_o **)&StringLiteral_12047/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT2"*/;
    }
    v105 = v213;
    if ( v202 )
      v107 = v109;
    v110 = *v107;
    if ( !v108->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v108);
    Master_object = (BoardOptionTextWithIconComponent_o *)LocalizationManager__Get(v110, 0);
    if ( !v106 )
      goto LABEL_382;
    UILabel__set_text(v106, (System_String_o *)Master_object, 0);
    if ( v100 )
      ServantStatusQuestBoardDraw__SetOverwriteCondText(this, v100, v111);
  }
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitleNameLb;
  if ( !Master_object )
    goto LABEL_382;
  monitor = (int32_t)Master_object[2].monitor;
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitleNameLb;
    if ( !Master_object )
      goto LABEL_382;
  }
  TITLE_LABEL_BASE_WIDTH = ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH;
  Master_object = (BoardOptionTextWithIconComponent_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)Master_object,
                                                          0);
  v119 = monitor <= TITLE_LABEL_BASE_WIDTH;
  v120 = (UnityEngine_Transform_o *)Master_object;
  if ( v119 )
  {
    if ( !byte_4D25F1E )
    {
      Master_object = (BoardOptionTextWithIconComponent_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
      byte_4D25F1E = 1;
    }
    if ( !v120 )
      goto LABEL_382;
    v122 = inputMessageObject;
    v126 = UnityEngine_Vector3_TypeInfo->static_fields;
    y = v126->oneVector.fields.y;
    z = v126->oneVector.fields.z;
    x = v126->oneVector.fields.x;
  }
  else
  {
    Master_object = (BoardOptionTextWithIconComponent_o *)ServantStatusQuestBoardDraw_TypeInfo;
    if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    v121 = this->fields.mTitleNameLb;
    v122 = inputMessageObject;
    if ( !v121 || !v120 )
      goto LABEL_382;
    y = 1.0;
    x = (float)ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH / (float)v121->fields.mWidth;
    z = 1.0;
  }
  UnityEngine_Transform__set_localScale(v120, *(UnityEngine_Vector3_o *)&x, 0);
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitleNameLb;
  if ( IsSvtCoinQuest )
  {
    if ( !Master_object )
      goto LABEL_382;
    v127 = 1054398681;
    v128 = 1055714541;
    v129 = 1056372471;
    v130 = 1.0;
    v131 = v122;
  }
  else
  {
    if ( !Master_object )
      goto LABEL_382;
    v131 = 0;
    v129 = LODWORD(v44);
    v128 = LODWORD(v44);
    v127 = LODWORD(v44);
    v130 = v42;
  }
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)&v129, 0);
  if ( v207 )
    v138 = v131;
  else
    v138 = v122;
  this->fields.inputMessageObject = v138;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.inputMessageObject,
    (int32_t)v138,
    v132,
    v133,
    v134,
    v135,
    v136,
    v137);
  if ( IsSvtCoinQuest )
  {
    Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitleShortcutSp;
    if ( !Master_object )
      goto LABEL_382;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0);
    mTitleShortcutSp = this->fields.mTitleShortcutSp;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Master_object = (BoardOptionTextWithIconComponent_o *)AtlasManager__SetEventUI(
                                                            mTitleShortcutSp,
                                                            (System_String_o *)StringLiteral_20553/*"img_conductor_scq"*/,
                                                            0);
    v140 = this->fields.mTitleShortcutSp;
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !v140 )
        goto LABEL_382;
      v231.fields.r = 0.48235;
      v231.fields.g = 0.46275;
      v231.fields.b = 0.42353;
      v231.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)this->fields.mTitleShortcutSp, v231, 0);
      v224.fields.y = 19.0;
      v224.fields.z = 0.0;
      v224.fields.x = -226.0;
      ComponentHelper__SetLocalPosition((UnityEngine_Component_o *)this->fields.mTitleShortcutSp, v224, 0);
    }
    else
    {
      if ( !v140 )
        goto LABEL_382;
      UISprite__set_atlas(this->fields.mTitleShortcutSp, this->fields.basePanelAtlas, 0);
      Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitleShortcutSp;
      if ( !Master_object )
        goto LABEL_382;
      UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)StringLiteral_20554/*"img_conductor_sq"*/, 0);
      Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitleShortcutSp;
      if ( !Master_object )
        goto LABEL_382;
      v234.fields.r = v44;
      v234.fields.g = v44;
      v234.fields.b = v44;
      v234.fields.a = v42;
      UIWidget__set_color((UIWidget_o *)Master_object, v234, 0);
    }
    Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitleShortcutSp;
    if ( !Master_object )
      goto LABEL_382;
    ((void (__fastcall *)(BoardOptionTextWithIconComponent_o *, void *))Master_object->klass[2]._1.parent)(
      Master_object,
      Master_object->klass[2]._1.generic_class);
    Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitleShortcutLb;
    if ( !Master_object )
      goto LABEL_382;
    UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0);
    ServantStatusQuestBoardDraw__ResetInfoTextList(this, v149);
    goto LABEL_300;
  }
  if ( QuestType != 3 )
  {
    Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitleShortcutSp;
    if ( !Master_object )
      goto LABEL_382;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0);
    Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitleShortcutSp;
    if ( !Master_object )
      goto LABEL_382;
    v233.fields.r = v44;
    v233.fields.g = v44;
    v233.fields.b = v44;
    v233.fields.a = v42;
    UIWidget__set_color((UIWidget_o *)Master_object, v233, 0);
    Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitleShortcutLb;
    if ( !Master_object )
      goto LABEL_382;
    goto LABEL_298;
  }
  ServantId = QuestEntity__getServantId(Mine, 0);
  Master_object = (BoardOptionTextWithIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (BoardOptionTextWithIconComponent_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)Master_object,
                                                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (BoardOptionTextWithIconComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                          ServantId,
                                                          (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.mTitleShortcutSp )
    goto LABEL_382;
  v142 = Master_object;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mTitleShortcutSp, 0, 0);
  mTitleShortcutLb = this->fields.mTitleShortcutLb;
  if ( !v142 )
  {
    if ( !mTitleShortcutLb )
      goto LABEL_382;
    Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitleShortcutLb;
LABEL_298:
    UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0);
    goto LABEL_299;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v144 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  m_CachedPtr = v142->fields.m_CachedPtr;
  m_CancellationTokenSource = v142->fields.m_CancellationTokenSource;
  v147 = (ServantLimitImageMaster_o *)v144;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v222.fields.currentCryptoKey = m_CachedPtr;
  *(_QWORD *)&v222.fields.fakeValue = m_CancellationTokenSource;
  Master_object = (BoardOptionTextWithIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                                          v222,
                                                          0);
  if ( !v147 )
    goto LABEL_382;
  Master_object = (BoardOptionTextWithIconComponent_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                          v147,
                                                          (int32_t)Master_object,
                                                          limitCounta,
                                                          0,
                                                          0);
  if ( !mTitleShortcutLb )
    goto LABEL_382;
  UILabel__set_text(mTitleShortcutLb, (System_String_o *)Master_object, 0);
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitleShortcutLb;
  if ( !Master_object )
    goto LABEL_382;
  v232.fields.r = v44;
  v232.fields.g = v44;
  v232.fields.b = v44;
  v232.fields.a = v42;
  UIWidget__set_color((UIWidget_o *)Master_object, v232, 0);
LABEL_299:
  ServantStatusQuestBoardDraw__ResetInfoTextList(this, v148);
  if ( v43 )
  {
LABEL_318:
    v171 = 0;
    goto LABEL_319;
  }
LABEL_300:
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  isNotItemConsume = 0;
  endTime = qinf->fields.endTime;
  if ( endTime >= 1 && !QuestEntity__HasFlag(Mine, 32, 0) )
  {
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v152 = LocalizationManager__Get((System_String_o *)StringLiteral_13486/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0);
    v153 = (QuestBoardInformationText_o *)sub_1C942E4(QuestBoardInformationText_TypeInfo);
    QuestBoardInformationText___ctor(v153, v152, endTime, 0, 1, 0, 0);
    if ( !mInfoTextList )
      goto LABEL_382;
    items = mInfoTextList->fields._items;
    v161 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
    ++mInfoTextList->fields._version;
    if ( !items )
      goto LABEL_382;
    size = mInfoTextList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        mInfoTextList,
        (Il2CppObject *)v153,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v161[4] + 192LL) + 112LL));
    }
    else
    {
      v163 = &items->obj.klass + size;
      mInfoTextList->fields._size = size + 1;
      v163[4] = (Il2CppClass *)v153;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v163 + 4), (int32_t)v153, v154, v155, v156, v157, v158, v159);
    }
  }
  v164 = qinf->fields.questPhase;
  v165 = MapControl_QuestInfo__GetPhaseMax(qinf, 0);
  v167 = this->fields.mInfoTextList;
  if ( v164 + 1 < v165 )
    v168 = v164 + 1;
  else
    v168 = v165;
  Master_object = (BoardOptionTextWithIconComponent_o *)ServantStatusQuestBoardDraw__GetCampaignText(
                                                          this,
                                                          v166,
                                                          v168,
                                                          0,
                                                          v105,
                                                          &fixedVal[1],
                                                          fixedVal,
                                                          &isNotItemConsume,
                                                          v196);
  if ( !v167 )
    goto LABEL_382;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v167,
    (System_Collections_Generic_IEnumerable_T__o *)Master_object,
    (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mInfoTextList;
  if ( !Master_object )
    goto LABEL_382;
  v169 = (int)Master_object->fields.m_CancellationTokenSource;
  if ( v169 < 1 )
    goto LABEL_318;
  Master_object = (BoardOptionTextWithIconComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                          (System_Collections_Generic_List_object__o *)Master_object,
                                                          v105->fields.mAlphaAnimCnt % v169,
                                                          (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
  if ( !Master_object )
    goto LABEL_382;
  QuestBoardInformationText__SetTime(
    (QuestBoardInformationText_o *)Master_object,
    p_mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    0);
  Master_object = this->fields.mOptionInfoLb;
  if ( !Master_object )
    goto LABEL_382;
  BoardOptionTextWithIconComponent__set_Alpha(Master_object, 1.0, 0);
  v170 = fixedVal[1];
  v171 = 1;
  qinf->fields.isNotItemConsume = isNotItemConsume;
  v172 = fixedVal[0];
  qinf->fields.costCalcVal = v170;
  qinf->fields._fixedCostVal_k__BackingField = v172;
LABEL_319:
  Master_object = *p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_382;
  Master_object = (BoardOptionTextWithIconComponent_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)Master_object,
                                                          0);
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (BoardOptionTextWithIconComponent_o *)UnityEngine_Transform__get_parent(
                                                          (UnityEngine_Transform_o *)Master_object,
                                                          0);
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (BoardOptionTextWithIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)Master_object,
                                                          0);
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v171, 0);
  Master_object = *p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_382;
  Master_object = (BoardOptionTextWithIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)Master_object,
                                                          0);
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v171, 0);
  this->fields.mRewardIconInfs = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mRewardIconInfs, 0, v173, v174, v175, v176, v177, v178);
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mRewardIcon;
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (BoardOptionTextWithIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)Master_object,
                                                          0);
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  if ( (v212 & 1) != 0 && QuestEntity__HasFlag(Mine, 4096, 0) )
  {
    Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mRewardIcon;
    if ( !Master_object )
      goto LABEL_382;
    LODWORD(giftIconId) = 99;
LABEL_333:
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)Master_object, giftIconId, 0);
    Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mRewardIcon;
    if ( !Master_object )
      goto LABEL_382;
    Master_object = (BoardOptionTextWithIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)Master_object,
                                                            0);
    if ( !Master_object )
      goto LABEL_382;
    v179 = 1;
    goto LABEL_336;
  }
  giftIconId = (unsigned int)Mine->fields.giftIconId;
  if ( (int)giftIconId >= 1 )
  {
    Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mRewardIcon;
    if ( !Master_object )
      goto LABEL_382;
    goto LABEL_333;
  }
  if ( Mine->fields.giftId >= 1 )
  {
    Master_object = (BoardOptionTextWithIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_382;
    Master_object = (BoardOptionTextWithIconComponent_o *)DataManager__GetMasterData_object_(
                                                            (DataManager_o *)Master_object,
                                                            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !Master_object )
      goto LABEL_382;
    Master_object = (BoardOptionTextWithIconComponent_o *)GiftMaster__GetGiftListById(
                                                            (GiftMaster_o *)Master_object,
                                                            Mine->fields.giftId,
                                                            0);
    if ( !Master_object )
      goto LABEL_382;
    v189 = Master_object->fields.m_CancellationTokenSource;
    v190 = (struct GiftEntity_array *)Master_object;
    if ( !v189 )
      goto LABEL_381;
    v191 = v105->fields.mAlphaAnimCnt % (int)v189;
    if ( v191 >= (unsigned int)v189 )
      sub_1C942F8(Master_object);
    v192 = (_DWORD *)*((_QWORD *)&Master_object->fields.forwardLabel + v191);
    if ( v192 )
    {
      giftIconId = (unsigned int)v192[11];
      Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mRewardIcon;
      v193 = v192[7];
      if ( (int)giftIconId < 1 )
      {
        if ( !Master_object )
          goto LABEL_382;
        v195 = v193 <= 1 ? -1LL : (unsigned int)v192[7];
        ItemIconComponent__SetGift_41674460((ItemIconComponent_o *)Master_object, v192[5], v192[6], v195, 0, 0);
      }
      else
      {
        if ( !Master_object )
          goto LABEL_382;
        v194 = v193 <= 1 ? -1LL : (unsigned int)v192[7];
        ItemIconComponent__SetItemImage_41676908((ItemIconComponent_o *)Master_object, giftIconId, v194, 0);
      }
      Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mRewardIcon;
      if ( Master_object )
      {
        Master_object = (BoardOptionTextWithIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)Master_object,
                                                                0);
        if ( Master_object )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
LABEL_381:
          this->fields.mRewardIconInfs = v190;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&this->fields.mRewardIconInfs,
            (int32_t)v190,
            v183,
            v184,
            v185,
            v186,
            v187,
            v188);
          goto LABEL_337;
        }
      }
    }
LABEL_382:
    sub_1C942F0(Master_object, giftIconId);
  }
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mRewardObj;
  if ( !Master_object )
    goto LABEL_382;
  v179 = 0;
LABEL_336:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v179, 0);
LABEL_337:
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mRewardObj;
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (BoardOptionTextWithIconComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          (UnityEngine_GameObject_o *)Master_object,
                                                          (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Master_object )
    goto LABEL_382;
  v235.fields.r = v44;
  v235.fields.g = v44;
  v235.fields.b = v44;
  v235.fields.a = v42;
  UIWidget__set_color((UIWidget_o *)Master_object, v235, 0);
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mRewardIcon;
  if ( !Master_object )
    goto LABEL_382;
  v236.fields.r = v44;
  v236.fields.g = v44;
  v236.fields.b = v44;
  v236.fields.a = v42;
  ItemIconComponent__SetColor((ItemIconComponent_o *)Master_object, v236, 0);
  Master_object = (BoardOptionTextWithIconComponent_o *)v205;
  v180 = IsLimitCountSealQuest && v43;
  if ( !v205 || (v180 & 1) != 0 )
  {
    mServantLimitRewardObtainedSP = (UnityEngine_Component_o *)this->fields.mServantLimitRewardObtainedSP;
    if ( !v180 )
    {
LABEL_343:
      if ( !mServantLimitRewardObtainedSP )
        goto LABEL_382;
      Master_object = (BoardOptionTextWithIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                              mServantLimitRewardObtainedSP,
                                                              0);
      if ( !Master_object )
        goto LABEL_382;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
      v182 = 1;
      goto LABEL_354;
    }
  }
  else
  {
    Master_object = (BoardOptionTextWithIconComponent_o *)QuestBehaviorMaster__IsOpenQuestBehaviorCond(
                                                            v205,
                                                            this->fields.questId,
                                                            phase,
                                                            10,
                                                            0);
    mServantLimitRewardObtainedSP = (UnityEngine_Component_o *)this->fields.mServantLimitRewardObtainedSP;
    if ( ((unsigned __int8)Master_object & 1) == 0 )
      goto LABEL_343;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(
    (UISprite_o *)mServantLimitRewardObtainedSP,
    (System_String_o *)StringLiteral_20394/*"icon_reward_limits_release"*/,
    0);
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mServantLimitRewardObtainedSP;
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (BoardOptionTextWithIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)Master_object,
                                                          0);
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mServantLimitRewardObtainedSP;
  if ( !Master_object )
    goto LABEL_382;
  ((void (__fastcall *)(BoardOptionTextWithIconComponent_o *, void *))Master_object->klass[2]._1.parent)(
    Master_object,
    Master_object->klass[2]._1.generic_class);
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mServantLimitRewardObtainedSP;
  if ( !Master_object )
    goto LABEL_382;
  v237.fields.r = v44;
  v237.fields.g = v44;
  v237.fields.b = v44;
  v237.fields.a = v42;
  UIWidget__set_color((UIWidget_o *)Master_object, v237, 0);
  v182 = 0;
LABEL_354:
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mRewardGetSP;
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (BoardOptionTextWithIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)Master_object,
                                                          0);
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v43 & v182 & !v206, 0);
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mRewardGetSP;
  if ( !Master_object )
    goto LABEL_382;
  v238.fields.r = v44;
  v238.fields.g = v44;
  v238.fields.b = v44;
  v238.fields.a = v42;
  UIWidget__set_color((UIWidget_o *)Master_object, v238, 0);
}


void ServantStatusQuestBoardDraw__SetOverwriteCondText(
        ServantStatusQuestBoardDraw_o *this,
        QuestReleaseOverwriteEntity_o *questReleaseOverwriteEntity,
        const MethodInfo *method)
{
  System_String_o *overlayClosedMessage; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *mCondObject; // x0
  UILabel_o *mCondChangeMessage; // x19

  if ( (byte_4D2A4FC & 1) == 0 )
  {
    sub_1C94098(&ServantStatusQuestBoardDraw_TypeInfo);
    byte_4D2A4FC = 1;
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
    if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    if ( !mCondChangeMessage )
LABEL_14:
      sub_1C942F0(mCondObject, v6);
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
      sub_1C942F0(0, method);
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

  if ( (byte_4D2A4FA & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    byte_4D2A4FA = 1;
  }
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !mInfoTextList
    || (mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       mInfoTextList,
                                                                       strIndex,
                                                                       (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__)) == 0 )
  {
    sub_1C942F0(mInfoTextList, qinf);
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
    sub_1C942F0(this, 0);
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
  ServantStatusQuestBoardDraw_c *v10; // x0
  UnityEngine_Transform_o *transform; // x21
  float v12; // s0
  float v13; // s1
  float v14; // s2
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  v8 = label;
  if ( (byte_4D2A506 & 1) == 0 )
  {
    label = (UILabel_o *)sub_1C94098(&ServantStatusQuestBoardDraw_TypeInfo);
    byte_4D2A506 = 1;
  }
  if ( !v8 )
    goto LABEL_11;
  UILabel__set_text(v8, message, 0);
  UILabel__AssumeNaturalSize(v8, 0);
  mHeight = v8->fields.mHeight;
  UIWidget__set_height((UIWidget_o *)v8, baseHeight, 0);
  v10 = ServantStatusQuestBoardDraw_TypeInfo;
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    v10 = ServantStatusQuestBoardDraw_TypeInfo;
  }
  UILabel__SetCondensedScale(v8, v10->static_fields->ADVANCE_NOTICE_BASE_WIDTH - indent, 0, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0);
  label = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0);
  if ( !label
    || (LODWORD(v12) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)label, 0),
        !transform) )
  {
LABEL_11:
    sub_1C942F0(label, message);
  }
  v13 = 1.0 - (float)((float)baseHeight / (float)mHeight);
  v14 = fminf(v13, 1.0);
  if ( v13 < 0.0 )
    v14 = 0.0;
  v15.fields.y = 1.0;
  v15.fields.x = v14 + v12;
  v15.fields.z = 1.0;
  UnityEngine_Transform__set_localScale(transform, v15, 0);
}


BoardMessageEntity_o *ServantStatusQuestBoardDraw__findOverrideQuestMessage(
        ServantStatusQuestBoardDraw_o *this,
        BoardMessageEntity_array *boardMessageData,
        int32_t eventId,
        const MethodInfo *method)
{
  int max_length; // w8
  int v5; // w9

  if ( !boardMessageData )
    goto LABEL_12;
  max_length = boardMessageData->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( max_length == v5 )
        sub_1C942F8(this);
      this = (ServantStatusQuestBoardDraw_o *)boardMessageData->m_Items[v5];
      if ( !this )
        break;
      if ( HIDWORD(this->fields.m_CancellationTokenSource) == 4 && LODWORD(this->fields.mcBaseP) == eventId )
        return (BoardMessageEntity_o *)this;
      if ( max_length == ++v5 )
        return 0;
    }
LABEL_12:
    sub_1C942F0(this, boardMessageData);
  }
  return 0;
}


void ServantStatusQuestBoardDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2A507 & 1) == 0 )
  {
    sub_1C94098(&ServantStatusQuestBoardDraw___c_TypeInfo);
    byte_4D2A507 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(ServantStatusQuestBoardDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantStatusQuestBoardDraw___c_TypeInfo->static_fields->__9 = (struct ServantStatusQuestBoardDraw___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)ServantStatusQuestBoardDraw___c_TypeInfo->static_fields,
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
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, entity);
  return entity->fields.imagePriority == rQuestRlsNG->fields.imagePriority;
}