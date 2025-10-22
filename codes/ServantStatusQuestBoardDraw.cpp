void ServantStatusQuestBoardDraw___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct ServantStatusQuestBoardDraw_StaticFields *static_fields; // x0
  int32_t v4; // w1
  struct ServantStatusQuestBoardDraw_StaticFields *v5; // x0
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  struct ServantStatusQuestBoardDraw_StaticFields *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  struct ServantStatusQuestBoardDraw_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  struct ServantStatusQuestBoardDraw_StaticFields *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  struct ServantStatusQuestBoardDraw_StaticFields *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  struct ServantStatusQuestBoardDraw_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3

  if ( (byte_4C5441E & 1) == 0 )
  {
    sub_1C3E564(&ServantStatusQuestBoardDraw_TypeInfo);
    sub_1C3E564(&StringLiteral_20389/*"img_conductor_03"*/);
    sub_1C3E564(&StringLiteral_20390/*"img_conductor_04"*/);
    sub_1C3E564(&StringLiteral_20388/*"img_conductor_02"*/);
    sub_1C3E564(&StringLiteral_20530/*"img_questboard_1001"*/);
    sub_1C3E564(&StringLiteral_20387/*"img_conductor_01"*/);
    sub_1C3E564(&StringLiteral_20394/*"img_conductor_questboard"*/);
    sub_1C3E564(&StringLiteral_20383/*"img_commonbg"*/);
    byte_4C5441E = 1;
  }
  static_fields = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->TITLE_LABEL_BASE_WIDTH = xmmword_C12D40;
  static_fields->ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X = -208.0;
  v4 = StringLiteral_20383/*"img_commonbg"*/;
  static_fields->DARK_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_20383/*"img_commonbg"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->DARK_BOARD_SPRITE_NAME, v4, v1, v2);
  v5 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  *(_QWORD *)&v5->DARK_BOARD_WIDTH = 0x7A000001F0LL;
  v6 = StringLiteral_20394/*"img_conductor_questboard"*/;
  v5->BASE_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_20394/*"img_conductor_questboard"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v5->BASE_BOARD_SPRITE_NAME, v6, v7, v8);
  v9 = StringLiteral_20388/*"img_conductor_02"*/;
  v10 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v10->TITLE_SPRITE_NAME_INTERLUDE = (struct System_String_o *)StringLiteral_20388/*"img_conductor_02"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v10->TITLE_SPRITE_NAME_INTERLUDE, v9, v11, v12);
  v13 = StringLiteral_20387/*"img_conductor_01"*/;
  v14 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v14->TITLE_SPRITE_NAME_INTERLUDE_MAP = (struct System_String_o *)StringLiteral_20387/*"img_conductor_01"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v14->TITLE_SPRITE_NAME_INTERLUDE_MAP, v13, v15, v16);
  v17 = StringLiteral_20389/*"img_conductor_03"*/;
  v18 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v18->TITLE_SPRITE_NAME_RAINFORCEMENT = (struct System_String_o *)StringLiteral_20389/*"img_conductor_03"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v18->TITLE_SPRITE_NAME_RAINFORCEMENT, v17, v19, v20);
  v21 = StringLiteral_20530/*"img_questboard_1001"*/;
  v22 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v22->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME = (struct System_String_o *)StringLiteral_20530/*"img_questboard_1001"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v22->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME, v21, v23, v24);
  v25 = StringLiteral_20390/*"img_conductor_04"*/;
  v26 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v26->TITLE_SPRITE_NAME_LIMIT_UNSEAL = (struct System_String_o *)StringLiteral_20390/*"img_conductor_04"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v26->TITLE_SPRITE_NAME_LIMIT_UNSEAL, v25, v27, v28);
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

  if ( (byte_4C54416 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C54416 = 1;
  }
  if ( (byte_4C54417 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4C54417 = 1;
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
                                                                       (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
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
      sub_1C3E7C0(mInfoTextList, qinf);
    }
  }
  if ( (byte_4C54418 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4C54418 = 1;
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  }
  if ( !mInfoTextList || !mInfoTextList->fields._size )
    return;
  mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 mInfoTextList,
                                                                 0,
                                                                 (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
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
    sub_1C3E7C8(this, questBoardManager);
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
      ItemIconComponent__SetItemImage_40970836((ItemIconComponent_o *)this, (int32_t)questBoardManager, v8, 0);
      return;
    }
LABEL_18:
    sub_1C3E7C0(this, questBoardManager);
  }
  if ( !this )
    goto LABEL_18;
  if ( num <= 1 )
    v9 = -1;
  else
    v9 = (unsigned int)v6->fields.num;
  ItemIconComponent__SetGift_40968388((ItemIconComponent_o *)this, v6->fields.type, v6->fields.objectId, v9, 0, 0);
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

  if ( (byte_4C5441B & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&QuestBoardInformationText_TypeInfo);
    sub_1C3E564(&StringLiteral_25121/*"{0}"*/);
    this = (ServantStatusQuestBoardDraw_o *)sub_1C3E564(&StringLiteral_13438/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/);
    byte_4C5441B = 1;
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
  this = (ServantStatusQuestBoardDraw_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !questEntity || !this )
LABEL_40:
    sub_1C3E7C0(this, questEntity);
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
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_13438/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0);
  EventName = (Il2CppObject *)EventEntity__getEventName(eventEnt, 0);
  v24 = System_String__Format_63677760(v22, EventName, (Il2CppObject *)StringLiteral_25121/*"{0}"*/, 0);
  EndTime = EventEntity__GetEndTime(eventEnt, 0, 0);
  v19 = (QuestBoardInformationText_o *)sub_1C3E7B0(QuestBoardInformationText_TypeInfo);
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
  const MethodInfo *v30; // x3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  const MethodInfo *v36; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4C54419 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&QuestBoardInformationText_TypeInfo);
    sub_1C3E564(&StringLiteral_25121/*"{0}"*/);
    sub_1C3E564(&StringLiteral_113/*" "*/);
    sub_1C3E564(&StringLiteral_13448/*"TIME_REST_STRING"*/);
    byte_4C54419 = 1;
  }
  entity = 0;
  v16 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)ServantStatusQuestBoardDraw__GetCampaignTextListByEventQuestMaster(
                                                                                        this,
                                                                                        this->fields.questId,
                                                                                        phase,
                                                                                        isQuestNoneCleared,
                                                                                        questBoardManager,
                                                                                        costCalcVal,
                                                                                        fixedVal,
                                                                                        isNotItemConsume,
                                                                                        v36);
  if ( !v16 )
    goto LABEL_25;
  System_Collections_Generic_List_object___AddRange(
    v16,
    CampaignTextListByEventQuestMaster,
    (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
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
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !CampaignTextListByEventQuestMaster )
    goto LABEL_25;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)CampaignTextListByEventQuestMaster,
          &entity,
          v20->fields.eventId,
          (const MethodInfo_33B2FA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
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
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_13448/*"TIME_REST_STRING"*/, 0);
  v27 = System_String__Concat_63676720(
          EventName,
          (System_String_o *)StringLiteral_113/*" "*/,
          v26,
          (System_String_o *)StringLiteral_25121/*"{0}"*/,
          0);
  v28 = (QuestBoardInformationText_o *)sub_1C3E7B0(QuestBoardInformationText_TypeInfo);
  QuestBoardInformationText___ctor(v28, v27, v24, 0, 1, 0, 0);
  items = v16->fields._items;
  v32 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
  ++v16->fields._version;
  if ( !items )
LABEL_25:
    sub_1C3E7C0(CampaignTextListByEventQuestMaster, v18);
  size = v16->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v16,
      (Il2CppObject *)v28,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &items->obj.klass + size;
    v16->fields._size = size + 1;
    v34[4] = (Il2CppClass *)v28;
    sub_1C3E508((CGThumbnailListItem_o *)(v34 + 4), (int32_t)v28, v29, v30);
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
  const MethodInfo *v28; // x3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass *v32; // x1
  Il2CppClass **v33; // x0
  const MethodInfo *v35; // [xsp+8h] [xbp-78h]
  bool v36; // [xsp+14h] [xbp-6Ch]
  bool *v37; // [xsp+18h] [xbp-68h]

  if ( (byte_4C5441A & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C3E564(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C5441A = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  v36 = isQuestNoneCleared;
  v19 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = DataManager__GetMasterData_object_(
               v19,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               questId,
               (const MethodInfo_33B2F58 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !questBoardManager )
    goto LABEL_22;
  mListCreatedTime = questBoardManager->fields.mListCreatedTime;
  v22 = (QuestEntity_o *)Instance;
  Instance = DataManager__GetMasterData_object_(
               v19,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventQuestMaster___);
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
        sub_1C3E7C8(Instance, v18);
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
                     v36,
                     costCalcVal,
                     fixedVal,
                     v37,
                     v35);
        if ( Instance )
        {
          if ( !v16 )
            break;
          items = v16->fields._items;
          v30 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
          ++v16->fields._version;
          if ( !items )
            break;
          size = v16->fields._size;
          v32 = (Il2CppClass *)Instance;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v16,
              (Il2CppObject *)Instance,
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v16->fields._size = size + 1;
            v33[4] = v32;
            sub_1C3E508((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v32, v27, v28);
          }
        }
      }
      v23 = *((_DWORD *)v24 + 6);
      if ( (int)++v25 >= v23 )
        return (System_Collections_Generic_List_QuestBoardInformationText__o *)v16;
    }
LABEL_22:
    sub_1C3E7C0(Instance, v18);
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
  const MethodInfo *v14; // x3
  Il2CppObject *v15; // x1
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  MapControl_WarInfo_o *v20; // x20
  __int64 v21; // x8
  __int64 v22; // x23
  __int64 v23; // x8
  int32_t v24; // w19
  int32_t v25; // w22
  int64_t v26; // x21
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4C5440F & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5440F = 1;
  }
  entityList = 0;
  memset(&v28, 0, sizeof(v28));
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
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
    v10 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    IsQuestReleaseAll = (MapControl_WarInfo_o *)entityList;
    if ( !entityList )
      goto LABEL_53;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v27,
      (System_Collections_Generic_List_object__o *)entityList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    v28 = v27;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v28,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
    {
      if ( !v28.fields._current )
        sub_1C3E7C0(0, v11);
      v12 = (Il2CppObject *)QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
                              (QuestReleaseOverwriteEntity_o *)v28.fields._current,
                              0);
      v15 = v12;
      if ( !v10 )
        sub_1C3E7C0(v12, v12);
      items = v10->fields._items;
      v17 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
      ++v10->fields._version;
      if ( !items )
        sub_1C3E7C0(v12, v12);
      size = v10->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          v12,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v15;
        sub_1C3E508((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v15, v13, v14);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    if ( !v10 )
      goto LABEL_53;
    IsQuestReleaseAll = (MapControl_WarInfo_o *)System_Collections_Generic_List_object___ToArray(
                                                  v10,
                                                  (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    v20 = IsQuestReleaseAll;
    if ( IsQuestReleaseAll )
      goto LABEL_37;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsQuestReleaseAll = (MapControl_WarInfo_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !IsQuestReleaseAll )
LABEL_53:
    sub_1C3E7C0(IsQuestReleaseAll, v4);
  IsQuestReleaseAll = (MapControl_WarInfo_o *)QuestReleaseMaster__getListByQuestID(
                                                (QuestReleaseMaster_o *)IsQuestReleaseAll,
                                                qinf->fields.questId,
                                                0);
  v20 = IsQuestReleaseAll;
LABEL_37:
  if ( !v20 )
    goto LABEL_53;
  v21 = *(_QWORD *)&v20->fields.status;
  if ( !v21 )
  {
    v5 = qinf->fields.dispType != 1;
    return v5 & 1;
  }
  if ( (int)v21 < 1 )
    goto LABEL_8;
  v22 = 0;
  do
  {
    if ( (unsigned int)v22 >= (unsigned int)v21 )
      sub_1C3E7C8(IsQuestReleaseAll, v4);
    v23 = *((_QWORD *)&v20->fields.mapInfoList + v22);
    if ( !v23 )
      goto LABEL_53;
    v25 = *(_DWORD *)(v23 + 20);
    v24 = *(_DWORD *)(v23 + 24);
    v26 = *(_QWORD *)(v23 + 32);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestReleaseAll = (MapControl_WarInfo_o *)CondType__IsOpen(v25, v24, v26, 0, 0, 0);
    if ( ((unsigned __int8)IsQuestReleaseAll & 1) == 0 )
      break;
    LODWORD(v21) = v20->fields.status;
    ++v22;
  }
  while ( (int)v22 < (int)v21 );
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

  if ( (byte_4C54418 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4C54418 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  return !mInfoTextList || mInfoTextList->fields._size == 0;
}


bool ServantStatusQuestBoardDraw__IsMultiInfoText(ServantStatusQuestBoardDraw_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8

  if ( (byte_4C54417 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4C54417 = 1;
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

  if ( (byte_4C5441C & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C5441C = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
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
        return v9 & ~QuestEntity__HasFlag_42521064(questEntity, 2, phase, 0) & 1;
      }
LABEL_17:
      sub_1C3E7C0(Master_object, v7);
    }
  }
  else if ( !QuestEntity__HasFlag_42521064(questEntity, 0x80000, phase, 0) )
  {
    HasFlag = QuestEntity__HasFlag_42521064(questEntity, 0x100000, phase, 0);
    goto LABEL_15;
  }
  v9 = 0;
  return v9 & ~QuestEntity__HasFlag_42521064(questEntity, 2, phase, 0) & 1;
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
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  int32_t questId; // w8
  UnityEngine_GameObject_o *v11; // x19
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C5441D & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_ServantStatusQuestBoardDraw_OnClick__);
    sub_1C3E564(&StringLiteral_9872/*"OnClickServantQuest"*/);
    byte_4C5441D = 1;
  }
  inputMessageObject = (UnityEngine_Object_o *)this->fields.inputMessageObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(inputMessageObject, 0, 0) || (questId = this->fields.questId) == 0 )
  {
    v14 = Method_ServantStatusQuestBoardDraw_OnClick__;
    if ( (*((_BYTE *)Method_ServantStatusQuestBoardDraw_OnClick__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1C3E57C(Method_ServantStatusQuestBoardDraw_OnClick__);
    v15 = (System_Reflection_MethodBase_o *)sub_1C3E548(v14, v14[4]);
    OverwriteAssetSoundName__PlaySystemSe(v15, 2, 0, 0);
  }
  else
  {
    v11 = this->fields.inputMessageObject;
    v16 = questId;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v4, v5, v6, v7, v8, v9);
    if ( !v11 )
      sub_1C3E7C0(v12, v13);
    UnityEngine_GameObject__SendMessage_71323352(v11, (System_String_o *)StringLiteral_9872/*"OnClickServantQuest"*/, v12, 0);
  }
}


void ServantStatusQuestBoardDraw__ResetInfoTextList(ServantStatusQuestBoardDraw_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *v3; // x8
  CGThumbnailListItem_o *p_mInfoTextList; // x19
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // t1
  int32_t size; // w2
  int v7; // w9
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C54412 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestBoardInformationText__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    byte_4C54412 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  p_mInfoTextList = (CGThumbnailListItem_o *)&this->fields.mInfoTextList;
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
    v8 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    p_mInfoTextList->klass = (CGThumbnailListItem_c *)v8;
    sub_1C3E508(p_mInfoTextList, (int32_t)v8, v9, v10);
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
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  bool v23; // w25
  int32_t monitor_high; // w22
  char v25; // w23
  Il2CppObject *PrioredName; // x0
  System_String_o *v27; // x0
  int32_t targetId; // w26
  __int64 v29; // x27
  int32_t WarID_ByQuestID; // w26
  Il2CppObject *v31; // x0
  int64_t OpenedAt; // x26
  System_Object_array *v33; // x26
  System_DateTime_o v34; // x0
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  __int64 v38; // x5
  __int64 v39; // x6
  __int64 v40; // x7
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  Il2CppObject *v43; // x27
  System_DateTime_o v44; // x0
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  __int64 v48; // x5
  __int64 v49; // x6
  __int64 v50; // x7
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  Il2CppObject *v53; // x27
  System_DateTime_o v54; // x0
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  __int64 v58; // x5
  __int64 v59; // x6
  __int64 v60; // x7
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  Il2CppObject *v63; // x27
  System_DateTime_o v64; // x0
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  __int64 v68; // x5
  __int64 v69; // x6
  __int64 v70; // x7
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  Il2CppObject *v73; // x27
  _BOOL4 v74; // w26
  UILabel_o *mTitleNameLb; // x24
  const MethodInfo *v76; // x2
  struct ServantStatusQuestBoardDraw_StaticFields *static_fields; // x8
  __int64 v78; // x9
  int32_t v79; // w24
  int leftIndent; // w25
  float v81; // s8
  float ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X; // s9
  float v83; // s1 OVERLAPPED
  float v84; // s0
  int v85; // s2
  float v86; // s9
  float v87; // s0 OVERLAPPED
  float v88; // s1 OVERLAPPED
  float v89; // s0
  int v90; // s2
  float v91; // s1
  int v92; // s2
  UIWidget_o *mOverwriteAdvanceNoticeLb; // x23
  const MethodInfo *v94; // x4
  const MethodInfo *v95; // x4
  System_String_o *overlayClosedMessage; // x20
  UILabel_o *v97; // x21
  float v98; // s8
  UnityEngine_Object_o *mOverwriteAdvanceNoticeArrowObj; // x20
  __int64 v100; // x0
  int32_t Minute; // [xsp+Ch] [xbp-94h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-90h] BYREF
  int32_t Day; // [xsp+14h] [xbp-8Ch] BYREF
  int64_t value; // [xsp+18h] [xbp-88h] BYREF
  uint64_t dateData; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v107; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C54414 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_ClosedMessageMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_1C3E564(&System_DateTime_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&long_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&ServantStatusQuestBoardDraw_TypeInfo);
    sub_1C3E564(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C3E564(&StringLiteral_14835/*"UNKNOWN_QUEST_NAME"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C54414 = 1;
  }
  dateData = 0;
  entity = 0;
  if ( questReleaseClosedID < 1 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ClosedMessageMaster___);
  if ( !Master_object )
    goto LABEL_115;
  monitor = (System_String_o *)StringLiteral_1/*""*/;
  Master_object = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    questReleaseClosedID,
                    (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
  if ( (Master_object & 1) != 0 )
  {
    Master_object = (__int64)entity;
    if ( !entity )
      goto LABEL_115;
    monitor = (System_String_o *)entity[1].monitor;
    Master_object = ClosedMessageEntity__IsChangeDispClosedMessage((ClosedMessageEntity_o *)entity, 0);
    if ( !entity )
      goto LABEL_115;
    v23 = Master_object;
    Master_object = ClosedMessageEntity__IsChangeDispPositionLeft((ClosedMessageEntity_o *)entity, 0);
    if ( !entity )
      goto LABEL_115;
    monitor_high = HIDWORD(entity[2].monitor);
    v25 = Master_object;
  }
  else
  {
    monitor_high = 0;
    v25 = 0;
    v23 = 0;
  }
  if ( !questReleaseEntity )
    goto LABEL_115;
  switch ( questReleaseEntity->fields.type )
  {
    case 1:
      targetId = questReleaseEntity->fields.targetId;
      v29 = StringLiteral_1/*""*/;
      Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Master_object )
        goto LABEL_115;
      WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Master_object, targetId, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarMaster___);
      if ( !Master_object )
        goto LABEL_115;
      v31 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              WarID_ByQuestID,
              (const MethodInfo_33B2F58 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( v31 )
      {
        PrioredName = (Il2CppObject *)WarEntity__GetPrioredName((WarEntity_o *)v31, 0);
LABEL_16:
        v27 = System_String__Format(monitor, PrioredName, 0);
LABEL_42:
        monitor = v27;
      }
      else
      {
        monitor = (System_String_o *)v29;
      }
LABEL_43:
      if ( warEntity != 0 && !v23 )
        v23 = WarEntity__IsChangeDispClosedMessage(warEntity, 0);
      if ( !questReleaseOverwriteEntity )
      {
        v74 = 0;
        if ( v23 )
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
              ServantStatusQuestBoardDraw__SetOverwriteCondText(this, questReleaseOverwriteEntity, v76);
              return;
            }
          }
        }
        goto LABEL_115;
      }
      v74 = !System_String__IsNullOrEmpty(questReleaseOverwriteEntity->fields.overlayClosedMessage, 0);
      if ( !v23 )
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
          Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14835/*"UNKNOWN_QUEST_NAME"*/, 0);
          klass = (Il2CppClass *)Master_object;
        }
        if ( !mTitleNameLb )
LABEL_115:
          sub_1C3E7C0(Master_object, klass);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14835/*"UNKNOWN_QUEST_NAME"*/, 0);
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
      v78 = 12;
      if ( !v74 )
        v78 = 8;
      v79 = *(int32_t *)((char *)&static_fields->TITLE_LABEL_BASE_WIDTH + v78);
      if ( v74 )
      {
        if ( !questReleaseOverwriteEntity )
          goto LABEL_115;
        leftIndent = questReleaseOverwriteEntity->fields.leftIndent;
      }
      else
      {
        leftIndent = 0;
      }
      v81 = (float)monitor_high;
      if ( (v25 & 1) != 0 )
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
        v83 = 24.0;
        if ( !v74 )
          v83 = 0.0;
        v85 = 0;
        v84 = ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X + v81;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)Master_object,
          *(UnityEngine_Vector3_o *)(&v83 - 1),
          0);
        Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
        if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
          Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
        }
        if ( !this->fields.mOverwriteAdvanceNoticeLb )
          goto LABEL_115;
        v86 = *(float *)(*(_QWORD *)(Master_object + 184) + 16LL);
        UIWidget__set_pivot((UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb, 3, 0);
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_115;
        Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0);
        if ( !Master_object )
          goto LABEL_115;
        v87 = v86 + (float)leftIndent;
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
        v88 = 24.0;
        if ( !v74 )
          v88 = 0.0;
        v90 = 0;
        v89 = v81 * 0.5;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)Master_object,
          *(UnityEngine_Vector3_o *)(&v88 - 1),
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
        v87 = (float)leftIndent * 0.5;
      }
      v91 = -26.0;
      v92 = 0;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)Master_object,
        *(UnityEngine_Vector3_o *)&v87,
        0);
      Master_object = (__int64)this->fields.mAdvanceNoticeLb;
      if ( !Master_object )
        goto LABEL_115;
      UIWidget__set_height((UIWidget_o *)Master_object, v79, 0);
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
        v79,
        monitor_high,
        v94);
      if ( v74 )
      {
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
        if ( !Master_object )
          goto LABEL_115;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
        if ( !questReleaseOverwriteEntity )
          goto LABEL_115;
        overlayClosedMessage = questReleaseOverwriteEntity->fields.overlayClosedMessage;
        v97 = this->fields.mOverwriteAdvanceNoticeLb;
        if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
        v98 = v81 * 0.5;
        ServantStatusQuestBoardDraw___SetAdvanceNoticeText_g__CalculateLabel_54_0(
          v97,
          overlayClosedMessage,
          v79,
          leftIndent,
          v95);
      }
      else
      {
        v98 = 0.0;
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
            v107.fields.y = 0.0;
            v107.fields.z = 0.0;
            v107.fields.x = v98;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Master_object, v107, 0);
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
      PrioredName = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &value, v17, v18, v19, v20, v21, v22);
      goto LABEL_16;
    case 0xC:
      if ( !questEntity )
        goto LABEL_115;
      OpenedAt = QuestEntity__getOpenedAt(questEntity, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      dateData = NetworkManager__getServerDateTime_41416004(OpenedAt, 0).fields._dateData;
      v33 = (System_Object_array *)sub_1C3E60C(object___TypeInfo, 4);
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v34.fields._dateData = (uint64_t)&dateData;
      LODWORD(value) = System_DateTime__get_Month(v34, 0);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &value, v35, v36, v37, v38, v39, v40);
      if ( !v33 )
        goto LABEL_115;
      v43 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1C3E6A0(Master_object, v33->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_117;
      }
      if ( !LODWORD(v33->max_length) )
        goto LABEL_116;
      v33->m_Items[0] = v43;
      sub_1C3E508((CGThumbnailListItem_o *)v33->m_Items, (int32_t)v43, v41, v42);
      v44.fields._dateData = (uint64_t)&dateData;
      Day = System_DateTime__get_Day(v44, 0);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Day, v45, v46, v47, v48, v49, v50);
      v53 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1C3E6A0(Master_object, v33->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_117;
      }
      if ( LODWORD(v33->max_length) <= 1 )
        goto LABEL_116;
      v33->m_Items[1] = v53;
      sub_1C3E508((CGThumbnailListItem_o *)&v33->m_Items[1], (int32_t)v53, v51, v52);
      v54.fields._dateData = (uint64_t)&dateData;
      Hour = System_DateTime__get_Hour(v54, 0);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Hour, v55, v56, v57, v58, v59, v60);
      v63 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1C3E6A0(Master_object, v33->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_117;
      }
      if ( LODWORD(v33->max_length) <= 2 )
        goto LABEL_116;
      v33->m_Items[2] = v63;
      sub_1C3E508((CGThumbnailListItem_o *)&v33->m_Items[2], (int32_t)v63, v61, v62);
      v64.fields._dateData = (uint64_t)&dateData;
      Minute = System_DateTime__get_Minute(v64, 0);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Minute, v65, v66, v67, v68, v69, v70);
      v73 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1C3E6A0(Master_object, v33->obj.klass->_1.element_class);
        if ( !Master_object )
        {
LABEL_117:
          v100 = sub_1C3E7E4();
          sub_1C3E68C(v100, 0);
        }
      }
      if ( LODWORD(v33->max_length) <= 3 )
LABEL_116:
        sub_1C3E7C8(Master_object, klass);
      v33->m_Items[3] = v73;
      sub_1C3E508((CGThumbnailListItem_o *)&v33->m_Items[3], (int32_t)v73, v71, v72);
      v27 = System_String__Format_63677896(monitor, v33, 0);
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
  const MethodInfo *v8; // x3
  struct UnityEngine_GameObject_o **p_inputMessageObject; // x19
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C54410 & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&ServantStatusQuestBoardDraw_TypeInfo);
    sub_1C3E564(&StringLiteral_11929/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C54410 = 1;
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
  mLineSp = (UIWidget_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11929/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/, 0);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mRewardIconInfs, 0, v7, v8);
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
    sub_1C3E7C0(mLineSp, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0);
  this->fields.inputMessageObject = 0;
  p_inputMessageObject = &this->fields.inputMessageObject;
  sub_1C3E508((CGThumbnailListItem_o *)p_inputMessageObject, 0, v10, v11);
  *((_DWORD *)p_inputMessageObject + 2) = 0;
  p_inputMessageObject[2] = 0;
  sub_1C3E508((CGThumbnailListItem_o *)(p_inputMessageObject + 2), 0, v12, v13);
}


void ServantStatusQuestBoardDraw__SetInfoTextAlpha(
        ServantStatusQuestBoardDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8
  BoardOptionTextWithIconComponent_o *mOptionInfoLb; // x0

  if ( (byte_4C54417 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4C54417 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList && mInfoTextList->fields._size >= 2 )
  {
    mOptionInfoLb = this->fields.mOptionInfoLb;
    if ( !mOptionInfoLb )
      sub_1C3E7C0(0, method);
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
  __int64 Master_object; // x0
  __int64 giftIconId; // x1
  bool IsSvtCoinQuest; // w27
  bool v15; // w26
  int current; // w22
  QuestEntity_o *Mine; // x24
  const MethodInfo *v18; // x1
  bool v19; // w26
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  char v22; // w28
  const MethodInfo *v23; // x1
  _BOOL4 IsClear; // w29
  int32_t id; // w8
  int32_t warId; // w20
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v28; // x20
  _BOOL4 v29; // w25
  QuestReleaseEntity_o **v30; // x28
  Il2CppObject *v31; // x25
  bool HasStatus; // w22
  int32_t questPhase; // w20
  int32_t PhaseMax; // w8
  Il2CppObject *v35; // x0
  _BOOL4 v36; // w20
  int v37; // w23
  float v38; // s9
  _BOOL4 v39; // w26
  float v40; // s8
  BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x22
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct UISprite_o *mcBaseP; // x8
  struct UIAtlas_o *mAtlas; // x1
  UISprite_o *v46; // x20
  _BOOL4 v47; // w23
  UISprite_o *v48; // x20
  UISprite_o *v49; // x20
  _BOOL4 v50; // w25
  ServantStatusQuestBoardDraw_c *v51; // x0
  UISprite_o *v52; // x25
  System_String_o *BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME; // x20
  UISprite_o *v54; // x20
  _BOOL4 v55; // w20
  UISprite_o *mTitleSp; // x20
  _BOOL4 v57; // w29
  UISprite_o *v58; // x25
  uint32_t cctor_finished; // w8
  __int64 v60; // x9
  _BOOL4 v61; // w9
  UISprite_o *v62; // x25
  ServantStatusQuestBoardDraw_c *v63; // x0
  System_String_o *TITLE_SPRITE_NAME_LIMIT_UNSEAL; // x20
  bool v65; // w0
  UISprite_o *v66; // x20
  UISprite_o *v67; // x20
  UISprite_o *mTitle2Sp; // x20
  UISprite_o *mLineSp; // x20
  struct UISprite_o *v70; // x8
  int v71; // s0 OVERLAPPED
  int v72; // s1
  int v73; // s2
  float v74; // s3
  Il2CppObject *v75; // x20
  System_Collections_Generic_List_object__o *v76; // x25
  ServantStatusQuestBoardDraw___c_c *v77; // x0
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *v78; // x25
  System_Func_object__int__o *_9__48_0; // x20
  Il2CppObject *v80; // x29
  struct ServantStatusQuestBoardDraw___c_StaticFields *static_fields; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v84; // x0
  Il2CppObject *v85; // x0
  int64_t v86; // x5
  const MethodInfo *v87; // x7
  QuestReleaseOverwriteEntity_o *v88; // x25
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *v89; // x20
  System_Func_object__bool__o *v90; // x29
  Il2CppObject *v91; // x0
  QuestReleaseEntity_o *v92; // x4
  ServantStatusQuestBoardManager_o *v93; // x28
  UILabel_o *v94; // x20
  System_String_o **v95; // x8
  LocalizationManager_c *v96; // x0
  System_String_o **v97; // x9
  System_String_o *v98; // x23
  const MethodInfo *v99; // x2
  struct UILabel_o *mTitleNameLb; // x20
  System_String_o *v101; // x1
  System_String_o *v102; // x20
  Il2CppObject *v103; // x23
  Il2CppObject *BattleName; // x0
  int32_t v105; // w20
  int32_t TITLE_LABEL_BASE_WIDTH; // w23
  bool v107; // cc
  UnityEngine_Transform_o *v108; // x20
  struct UILabel_o *v109; // x8
  UnityEngine_GameObject_o *v110; // x23
  float y; // s1
  float x; // s0 OVERLAPPED
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *v114; // x8
  int v115; // s2
  int v116; // s1
  int v117; // s0 OVERLAPPED
  float v118; // s3
  struct UnityEngine_GameObject_o *v119; // x20
  int32_t v120; // w2
  const MethodInfo *v121; // x3
  struct UnityEngine_GameObject_o *v122; // x1
  UISprite_o *mTitleShortcutSp; // x20
  struct UISprite_o *v124; // x8
  int32_t ServantId; // w20
  __int64 v126; // x23
  UILabel_o *mTitleShortcutLb; // x20
  Il2CppObject *v128; // x0
  __int64 v129; // x25
  __int64 v130; // x27
  ServantLimitImageMaster_o *v131; // x23
  const MethodInfo *v132; // x1
  const MethodInfo *v133; // x1
  __int64 endTime; // x23
  System_Collections_Generic_List_object__o *mInfoTextList; // x20
  System_String_o *v136; // x27
  QuestBoardInformationText_o *v137; // x25
  int32_t v138; // w2
  const MethodInfo *v139; // x3
  struct System_Object_array *items; // x8
  _QWORD *v141; // x9
  __int64 size; // x10
  Il2CppClass **v143; // x0
  int32_t v144; // w23
  int32_t v145; // w0
  int32_t v146; // w1
  struct System_Collections_Generic_List_QuestBoardInformationText__o *v147; // x20
  int32_t v148; // w2
  int v149; // w8
  int32_t v150; // w9
  bool v151; // w20
  int32_t v152; // w8
  int32_t v153; // w2
  const MethodInfo *v154; // x3
  bool v155; // w1
  int v156; // w8
  UnityEngine_Component_o *mServantLimitRewardObtainedSP; // x20
  char v158; // w20
  int32_t v159; // w2
  const MethodInfo *v160; // x3
  __int64 v161; // x8
  struct GiftEntity_array *v162; // x21
  int v163; // w9
  _DWORD *v164; // x9
  int v165; // w8
  int64_t v166; // x2
  int64_t v167; // x3
  const MethodInfo *v168; // [xsp+0h] [xbp-150h]
  _BOOL4 v169; // [xsp+1Ch] [xbp-134h]
  _BOOL4 v170; // [xsp+20h] [xbp-130h]
  __int64 v171; // [xsp+20h] [xbp-130h]
  int32_t limitCounta; // [xsp+2Ch] [xbp-124h]
  WarEntity_o *warEntity; // [xsp+30h] [xbp-120h]
  int v174; // [xsp+3Ch] [xbp-114h]
  int questReleaseClosedID; // [xsp+40h] [xbp-110h]
  int32_t phase; // [xsp+44h] [xbp-10Ch]
  QuestBehaviorMaster_o *v177; // [xsp+48h] [xbp-108h]
  bool v178; // [xsp+50h] [xbp-100h]
  int v179; // [xsp+54h] [xbp-FCh]
  int64_t nowTime; // [xsp+58h] [xbp-F8h]
  int32_t QuestType; // [xsp+6Ch] [xbp-E4h]
  _BOOL4 IsLimitCountSealQuest; // [xsp+70h] [xbp-E0h]
  char v184; // [xsp+74h] [xbp-DCh]
  ServantStatusQuestBoardManager_o *v185; // [xsp+78h] [xbp-D8h]
  Il2CppObject *object; // [xsp+80h] [xbp-D0h]
  System_Collections_Generic_List_Enumerator_int__o v187; // [xsp+88h] [xbp-C8h] BYREF
  bool isNotItemConsume; // [xsp+A4h] [xbp-ACh] BYREF
  int32_t fixedVal[2]; // [xsp+A8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v190; // [xsp+B0h] [xbp-A0h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+C8h] [xbp-88h] BYREF
  UserQuestEntity_o *v192; // [xsp+D0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+D8h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v194; // 0:x0.16
  UnityEngine_Vector3_o v195; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v196; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v197; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v198; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v199; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v200; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v201; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v202; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v203; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v204; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v205; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v206; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v207; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v208; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v209; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v210; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C54411 & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_QuestExtensionMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity____78227504);
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_OrderByDescending_QuestReleaseOverwriteEntity__int___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C3E564(&System_Func_QuestReleaseOverwriteEntity__int__TypeInfo);
    sub_1C3E564(&System_Func_QuestReleaseOverwriteEntity__bool__TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&QuestBoardInformationText_TypeInfo);
    sub_1C3E564(&ServantStatusQuestBoardDraw_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C3E564(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C3E564(&Method_ServantStatusQuestBoardDraw___c__SetItem_b__48_0__);
    sub_1C3E564(&Method_ServantStatusQuestBoardDraw___c__DisplayClass48_0__SetItem_b__1__);
    sub_1C3E564(&ServantStatusQuestBoardDraw___c__DisplayClass48_0_TypeInfo);
    sub_1C3E564(&ServantStatusQuestBoardDraw___c_TypeInfo);
    sub_1C3E564(&StringLiteral_13441/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_1C3E564(&StringLiteral_20392/*"img_conductor_line"*/);
    sub_1C3E564(&StringLiteral_20395/*"img_conductor_questboard_paladin"*/);
    sub_1C3E564(&StringLiteral_25121/*"{0}"*/);
    sub_1C3E564(&StringLiteral_20397/*"img_conductor_quicklink_02"*/);
    sub_1C3E564(&StringLiteral_12000/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE2"*/);
    sub_1C3E564(&StringLiteral_20241/*"icon_reward_limits_release"*/);
    sub_1C3E564(&StringLiteral_12002/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT2"*/);
    sub_1C3E564(&StringLiteral_12001/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/);
    sub_1C3E564(&StringLiteral_20391/*"img_conductor_05"*/);
    sub_1C3E564(&StringLiteral_20396/*"img_conductor_quicklink"*/);
    sub_1C3E564(&StringLiteral_20398/*"img_conductor_scq"*/);
    sub_1C3E564(&StringLiteral_20393/*"img_conductor_line_white"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_20399/*"img_conductor_sq"*/);
    sub_1C3E564(&StringLiteral_11999/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE"*/);
    sub_1C3E564(&StringLiteral_11954/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/);
    byte_4C54411 = 1;
  }
  v192 = 0;
  entity = 0;
  entityList = 0;
  memset(&v190, 0, sizeof(v190));
  *(_QWORD *)fixedVal = 0;
  isNotItemConsume = 0;
  object = (Il2CppObject *)sub_1C3E7B0(ServantStatusQuestBoardDraw___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor(object, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_QuestExtensionMaster___);
  if ( !qinf || !Master_object )
    goto LABEL_382;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         qinf->fields.questId,
         (const MethodInfo_33B2FA4 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__) )
  {
    Master_object = (__int64)entity;
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
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Master_object )
    goto LABEL_382;
  limitCounta = limitCount;
  v185 = questBoardManager;
  Master_object = (__int64)QuestGroupMaster__GetInterludeQuestIdList(
                             (QuestGroupMaster_o *)Master_object,
                             qinf->fields.questId,
                             0);
  if ( !Master_object )
    goto LABEL_382;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v187,
    (System_Collections_Generic_List_int__o *)Master_object,
    (const MethodInfo_3798F10 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v190 = v187;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v190,
            (const MethodInfo_353BE34 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v15 )
      break;
    current = v190.fields._current;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsQuestClear_40371188(current, -1, 0, 0) )
      goto LABEL_22;
  }
  current = 0;
LABEL_22:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v190,
    (const MethodInfo_353BE30 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( !questBoardManager )
    goto LABEL_382;
  nowTime = questBoardManager->fields.mListCreatedTime;
  Mine = MapControl_QuestInfo__GetMine(qinf, 0);
  QuestType = MapControl_QuestInfo__GetQuestType(qinf, 0);
  v19 = v15 || MapControl_QuestInfo__IsClear(qinf, 0);
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  Master_object = ServantStatusQuestBoardDraw__IsClose(qinf, v18);
  v22 = Master_object;
  if ( beforeQuestInfo )
  {
    IsClear = MapControl_QuestInfo__IsClear(beforeQuestInfo, 0);
    if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    Master_object = ServantStatusQuestBoardDraw__IsClose(beforeQuestInfo, v23);
    v174 = Master_object & 1;
    if ( !Mine )
      goto LABEL_382;
  }
  else
  {
    v174 = 0;
    IsClear = 1;
    if ( !Mine )
      goto LABEL_382;
  }
  id = Mine->fields.id;
  this->fields.qinf = qinf;
  this->fields.questId = id;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.qinf, (int32_t)qinf, v20, v21);
  warId = qinf->fields.warId;
  Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Master_object )
    goto LABEL_382;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Master_object, warId, 0);
  v28 = WarEntityByWarID;
  if ( WarEntityByWarID )
    v29 = !WarEntity__IsFolder(WarEntityByWarID, 0);
  else
    v29 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_object )
    goto LABEL_382;
  IsLimitCountSealQuest = ServantLimitImageMaster__IsLimitCountSealQuest(
                            (ServantLimitImageMaster_o *)Master_object,
                            this->fields.questId,
                            0);
  Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !object )
    goto LABEL_382;
  v184 = v22;
  if ( !Master_object )
    goto LABEL_382;
  v30 = (QuestReleaseEntity_o **)&object[1];
  clsQuestCheck__mfQuestReleaseCheckGetEntityByQuestID(
    (clsQuestCheck_o *)Master_object,
    Mine->fields.id,
    (QuestReleaseEntity_o **)&object[1],
    qinf,
    0);
  if ( object[1].klass )
    questReleaseClosedID = (*v30)->fields.closedMessageId;
  else
    questReleaseClosedID = 0;
  v170 = v29;
  warEntity = v28;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v31 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  Master_object = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (__int64)NetworkManager_TypeInfo;
  }
  if ( current < 1 )
  {
    if ( !v31 )
      goto LABEL_382;
    current = this->fields.questId;
  }
  else if ( !v31 )
  {
    goto LABEL_382;
  }
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)v31,
    &v192,
    *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL),
    current,
    0);
  if ( v192 )
    HasStatus = UserQuestEntity__HasStatus(v192, 4, 0);
  else
    HasStatus = 0;
  questPhase = qinf->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(qinf, 0);
  if ( questPhase + 1 < PhaseMax )
    PhaseMax = questPhase + 1;
  phase = PhaseMax;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v35 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  v36 = !v19 && IsClear;
  v177 = (QuestBehaviorMaster_o *)v35;
  if ( v19 )
  {
    v37 = 1;
LABEL_77:
    v38 = 1.0;
    v39 = v37;
    if ( IsSvtCoinQuest )
      v40 = 1.0;
    else
      v40 = 0.5;
    v37 = 1;
    goto LABEL_81;
  }
  if ( v35 )
  {
    if ( QuestBehaviorMaster__IsOpenQuestBehaviorCond((QuestBehaviorMaster_o *)v35, this->fields.questId, phase, 9, 0) )
    {
      v184 = 0;
      questReleaseClosedID = 0;
      HasStatus = 0;
      v37 = 1;
      IsClear = v36;
      goto LABEL_77;
    }
    IsClear = v36;
  }
  v37 = 0;
  if ( (v184 & 1) != 0 )
  {
    v184 = 1;
    goto LABEL_77;
  }
  v40 = 1.0;
  v39 = 0;
  v184 = 0;
  v38 = 1.0;
LABEL_81:
  Master_object = (__int64)this->fields.mTitleObj;
  v178 = HasStatus;
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  Master_object = (__int64)this->fields.mOptionInfoLb;
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  Master_object = (__int64)this->fields.mRewardObj;
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  Master_object = (__int64)this->fields.mAdvanceNoticeObj;
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  Master_object = (__int64)this->fields.mCondObject;
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  Master_object = (__int64)this->fields.mServantLimitRewardObtainedSP;
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  mcBaseP = this->fields.mcBaseP;
  if ( !mcBaseP )
    goto LABEL_382;
  mAtlas = mcBaseP->fields.mAtlas;
  this->fields.basePanelAtlas = mAtlas;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.basePanelAtlas, (int32_t)mAtlas, v42, v43);
  Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
  v46 = this->fields.mcBaseP;
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  v179 = v37;
  if ( !v46 )
    goto LABEL_382;
  UISprite__set_spriteName(v46, ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME, 0);
  v47 = !IsSvtCoinQuest && IsClear;
  if ( IsSvtCoinQuest )
  {
    v48 = this->fields.mcBaseP;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( !AtlasManager__SetEventUI(v48, (System_String_o *)StringLiteral_20395/*"img_conductor_questboard_paladin"*/, 0) )
    {
      Master_object = (__int64)this->fields.mcBaseP;
      if ( !Master_object )
        goto LABEL_382;
      UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0);
      Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      v49 = this->fields.mcBaseP;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      if ( !v49 )
        goto LABEL_382;
      UISprite__set_spriteName(v49, ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME, 0);
    }
    v47 = 0;
    v50 = IsClear;
  }
  else if ( IsLimitCountSealQuest )
  {
    v51 = ServantStatusQuestBoardDraw_TypeInfo;
    v52 = this->fields.mcBaseP;
    if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      v51 = ServantStatusQuestBoardDraw_TypeInfo;
    }
    BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME = v51->static_fields->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( !AtlasManager__SetEventUI(v52, BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME, 0) )
    {
      Master_object = (__int64)this->fields.mcBaseP;
      if ( !Master_object )
        goto LABEL_382;
      UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0);
      v54 = this->fields.mcBaseP;
      Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      if ( !v54 )
        goto LABEL_382;
      UISprite__set_spriteName(v54, ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME, 0);
    }
    v50 = 0;
    IsClear = v47;
  }
  else
  {
    v50 = 0;
    v47 = IsClear;
  }
  Master_object = (__int64)this->fields.mcBaseP;
  if ( !Master_object )
    goto LABEL_382;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_object + 840LL))(
    Master_object,
    *(_QWORD *)(*(_QWORD *)Master_object + 848LL));
  Master_object = (__int64)this->fields.mcBaseP;
  if ( !Master_object )
    goto LABEL_382;
  v197.fields.r = v40;
  v197.fields.g = v40;
  v197.fields.b = v40;
  v197.fields.a = v38;
  UIWidget__set_color((UIWidget_o *)Master_object, v197, 0);
  Master_object = (__int64)this->fields.mLineSp;
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0);
  Master_object = (__int64)this->fields.mLineSp;
  if ( !Master_object )
    goto LABEL_382;
  v198.fields.r = v40;
  v198.fields.g = v40;
  v198.fields.b = v40;
  v198.fields.a = v38;
  UIWidget__set_color((UIWidget_o *)Master_object, v198, 0);
  Master_object = (__int64)this->fields.mTitle2Sp;
  v55 = v39 && IsClear;
  if ( IsSvtCoinQuest || !v39 )
  {
    if ( !Master_object )
      goto LABEL_382;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0);
    Master_object = (__int64)this->fields.mTitle2Sp;
    if ( !Master_object )
      goto LABEL_382;
    v199.fields.r = v40;
    v199.fields.g = v40;
    v199.fields.b = v40;
    v199.fields.a = v38;
    UIWidget__set_color((UIWidget_o *)Master_object, v199, 0);
    Master_object = (__int64)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_382;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0);
    if ( IsSvtCoinQuest )
    {
      mTitleSp = this->fields.mTitleSp;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( AtlasManager__SetEventUI(mTitleSp, (System_String_o *)StringLiteral_20391/*"img_conductor_05"*/, 0) )
      {
        v195.fields.x = -22.0;
        v195.fields.y = 0.0;
        v195.fields.z = 0.0;
        ComponentHelper__SetLocalPosition((UnityEngine_Component_o *)this->fields.mTitleSp, v195, 0);
      }
      else
      {
        Master_object = (__int64)this->fields.mTitleSp;
        if ( !Master_object )
          goto LABEL_382;
        UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0);
        v67 = this->fields.mTitleSp;
        Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
        if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
        if ( !v67 )
          goto LABEL_382;
        UISprite__set_spriteName(
          v67,
          ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_SPRITE_NAME_INTERLUDE,
          0);
      }
      mTitle2Sp = this->fields.mTitle2Sp;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( !AtlasManager__SetEventUI(mTitle2Sp, (System_String_o *)StringLiteral_20397/*"img_conductor_quicklink_02"*/, 0) )
      {
        Master_object = (__int64)this->fields.mTitle2Sp;
        if ( !Master_object )
          goto LABEL_382;
        UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0);
        Master_object = (__int64)this->fields.mTitle2Sp;
        if ( !Master_object )
          goto LABEL_382;
        UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)StringLiteral_20396/*"img_conductor_quicklink"*/, 0);
      }
      Master_object = (__int64)this->fields.mTitle2Sp;
      if ( !Master_object )
        goto LABEL_382;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_object + 840LL))(
        Master_object,
        *(_QWORD *)(*(_QWORD *)Master_object + 848LL));
      Master_object = (__int64)this->fields.mTitle2Sp;
      if ( !Master_object )
        goto LABEL_382;
      v200.fields.r = v40;
      v200.fields.g = v40;
      v200.fields.b = v40;
      v200.fields.a = v38;
      UIWidget__set_color((UIWidget_o *)Master_object, v200, 0);
      mLineSp = this->fields.mLineSp;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      Master_object = AtlasManager__SetEventUI(mLineSp, (System_String_o *)StringLiteral_20393/*"img_conductor_line_white"*/, 0);
      v70 = this->fields.mLineSp;
      if ( (Master_object & 1) != 0 )
      {
        if ( !v70 )
          goto LABEL_382;
        v71 = 1060023983;
        v72 = 1058839709;
        v73 = 1051240617;
        v74 = 1.0;
        Master_object = (__int64)this->fields.mLineSp;
      }
      else
      {
        if ( !v70 )
          goto LABEL_382;
        UISprite__set_atlas(this->fields.mLineSp, this->fields.basePanelAtlas, 0);
        Master_object = (__int64)this->fields.mLineSp;
        if ( !Master_object )
          goto LABEL_382;
        UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)StringLiteral_20392/*"img_conductor_line"*/, 0);
        Master_object = (__int64)this->fields.mLineSp;
        if ( !Master_object )
          goto LABEL_382;
        v71 = LODWORD(v40);
        v72 = LODWORD(v40);
        v73 = LODWORD(v40);
        v74 = v38;
      }
      UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)&v71, 0);
    }
    else
    {
      Master_object = (__int64)this->fields.mTitleSp;
      v57 = QuestType == 3 && v47;
      if ( !Master_object )
        goto LABEL_382;
      UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0);
      v58 = this->fields.mTitleSp;
      Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      cctor_finished = ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished;
      if ( QuestType != 3 )
      {
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
        if ( !v58 )
          goto LABEL_382;
        UISprite__set_spriteName(
          v58,
          ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_SPRITE_NAME_RAINFORCEMENT,
          0);
        goto LABEL_193;
      }
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      if ( !v58 )
        goto LABEL_382;
      v60 = 56;
      if ( !v170 )
        v60 = 48;
      v171 = v60;
      UISprite__set_spriteName(
        v58,
        *(System_String_o **)((char *)&ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH + v60),
        0);
      v61 = IsLimitCountSealQuest && v57;
      if ( !IsLimitCountSealQuest )
        goto LABEL_193;
      v169 = v61;
      v62 = this->fields.mTitleSp;
      v63 = ServantStatusQuestBoardDraw_TypeInfo;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
        v63 = ServantStatusQuestBoardDraw_TypeInfo;
      }
      TITLE_SPRITE_NAME_LIMIT_UNSEAL = v63->static_fields->TITLE_SPRITE_NAME_LIMIT_UNSEAL;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v65 = AtlasManager__SetEventUI(v62, TITLE_SPRITE_NAME_LIMIT_UNSEAL, 0);
      v50 = v169;
      v47 = v57;
      if ( v65 )
      {
LABEL_193:
        Master_object = (__int64)this->fields.mTitleSp;
        if ( !Master_object )
          goto LABEL_382;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_object + 840LL))(
          Master_object,
          *(_QWORD *)(*(_QWORD *)Master_object + 848LL));
        Master_object = (__int64)this->fields.mTitleSp;
        if ( !Master_object )
          goto LABEL_382;
        v201.fields.r = v40;
        v201.fields.g = v40;
        v201.fields.b = v40;
        v201.fields.a = v38;
        UIWidget__set_color((UIWidget_o *)Master_object, v201, 0);
        Master_object = (__int64)this->fields.mLinkObj;
        if ( !Master_object )
          goto LABEL_382;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
        Master_object = (__int64)this->fields.mLinkObj;
        if ( !Master_object )
          goto LABEL_382;
        Master_object = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Master_object, 0);
        if ( !Master_object )
          goto LABEL_382;
        Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)Master_object,
                                   (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( !Master_object )
          goto LABEL_382;
        v202.fields.r = v40;
        v202.fields.g = v40;
        v202.fields.b = v40;
        v202.fields.a = v38;
        UIWidget__set_color((UIWidget_o *)Master_object, v202, 0);
        goto LABEL_200;
      }
      Master_object = (__int64)this->fields.mTitleSp;
      if ( !Master_object )
        goto LABEL_382;
      UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0);
      v66 = this->fields.mTitleSp;
      Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      if ( !v66 )
        goto LABEL_382;
      UISprite__set_spriteName(
        v66,
        *(System_String_o **)((char *)&ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH + v171),
        0);
    }
    v47 = v50;
    goto LABEL_193;
  }
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 0, 0);
  Master_object = (__int64)this->fields.mTitleSp;
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 0, 0);
  Master_object = (__int64)this->fields.mLinkObj;
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  v47 = v55;
LABEL_200:
  Master_object = (__int64)this->fields.mClearObj;
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v39, 0);
  Master_object = (__int64)this->fields.mNoneLb;
  if ( !Master_object )
    goto LABEL_382;
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v75 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  v76 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v76,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v76;
  if ( !v75 )
    goto LABEL_382;
  QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
    (QuestReleaseOverwriteMaster_o *)v75,
    &entityList,
    this->fields.questId,
    nowTime,
    0);
  v77 = ServantStatusQuestBoardDraw___c_TypeInfo;
  v78 = entityList;
  if ( !ServantStatusQuestBoardDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw___c_TypeInfo);
    v77 = ServantStatusQuestBoardDraw___c_TypeInfo;
  }
  _9__48_0 = (System_Func_object__int__o *)v77->static_fields->__9__48_0;
  if ( !_9__48_0 )
  {
    if ( !v77->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v77);
      v77 = ServantStatusQuestBoardDraw___c_TypeInfo;
    }
    v80 = (Il2CppObject *)v77->static_fields->__9;
    _9__48_0 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_QuestReleaseOverwriteEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__48_0, v80, Method_ServantStatusQuestBoardDraw___c__SetItem_b__48_0__, 0);
    static_fields = ServantStatusQuestBoardDraw___c_TypeInfo->static_fields;
    static_fields->__9__48_0 = (struct System_Func_QuestReleaseOverwriteEntity__int__o *)_9__48_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__48_0, (int32_t)_9__48_0, v82, v83);
    p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  }
  v84 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v78,
                                                               (System_Func_TSource__TKey__o *)_9__48_0,
                                                               (const MethodInfo_3129820 *)Method_System_Linq_Enumerable_OrderByDescending_QuestReleaseOverwriteEntity__int___);
  v85 = System_Linq_Enumerable__FirstOrDefault_object_(
          v84,
          (const MethodInfo_3122250 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity___);
  v88 = (QuestReleaseOverwriteEntity_o *)v85;
  if ( *v30 )
  {
    if ( v85 )
    {
      v89 = entityList;
      v90 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_QuestReleaseOverwriteEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v90,
        object,
        Method_ServantStatusQuestBoardDraw___c__DisplayClass48_0__SetItem_b__1__,
        0);
      v91 = System_Linq_Enumerable__FirstOrDefault_object__51525108(
              (System_Collections_Generic_IEnumerable_TSource__o *)v89,
              (System_Func_TSource__bool__o *)v90,
              (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity____78227504);
      if ( v91 )
        v88 = (QuestReleaseOverwriteEntity_o *)v91;
    }
  }
  if ( IsSvtCoinQuest || v39 || v47 )
  {
    v92 = *v30;
    if ( questReleaseClosedID < 1 )
    {
      v93 = v185;
      if ( v92 && v92->fields.type == 8 )
      {
        mTitleNameLb = this->fields.mTitleNameLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11954/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/, 0);
        if ( !mTitleNameLb )
          goto LABEL_382;
        v101 = (System_String_o *)Master_object;
        Master_object = (__int64)mTitleNameLb;
      }
      else
      {
        Master_object = (__int64)QuestEntity__getQuestName(Mine, 0);
        if ( !Master_object )
          goto LABEL_382;
        v102 = (System_String_o *)Master_object;
        if ( System_String__Contains((System_String_o *)Master_object, (System_String_o *)StringLiteral_25121/*"{0}"*/, 0) )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v103 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantMaster___);
          Master_object = QuestEntity__getServantId(Mine, 0);
          if ( !v103 )
            goto LABEL_382;
          Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)v103,
                                     Master_object,
                                     (const MethodInfo_33B2F58 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Master_object )
            goto LABEL_382;
          BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Master_object, 0, -1, 0);
          v102 = System_String__Format(v102, BattleName, 0);
        }
        Master_object = (__int64)this->fields.mTitleNameLb;
        if ( !Master_object )
          goto LABEL_382;
        v101 = v102;
      }
      UILabel__set_text((UILabel_o *)Master_object, v101, 0);
    }
    else
    {
      ServantStatusQuestBoardDraw__SetAdvanceNoticeText(this, questReleaseClosedID, warEntity, Mine, v92, v86, v88, v87);
      v93 = v185;
    }
  }
  else
  {
    v94 = this->fields.mTitleNameLb;
    if ( QuestType == 3 )
    {
      v95 = (System_String_o **)&StringLiteral_11999/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE"*/;
      v96 = LocalizationManager_TypeInfo;
      v97 = (System_String_o **)&StringLiteral_12000/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE2"*/;
    }
    else
    {
      v95 = (System_String_o **)&StringLiteral_12001/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/;
      v96 = LocalizationManager_TypeInfo;
      v97 = (System_String_o **)&StringLiteral_12002/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT2"*/;
    }
    v93 = v185;
    if ( v174 )
      v95 = v97;
    v98 = *v95;
    if ( !v96->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v96);
    Master_object = (__int64)LocalizationManager__Get(v98, 0);
    if ( !v94 )
      goto LABEL_382;
    UILabel__set_text(v94, (System_String_o *)Master_object, 0);
    if ( v88 )
      ServantStatusQuestBoardDraw__SetOverwriteCondText(this, v88, v99);
  }
  Master_object = (__int64)this->fields.mTitleNameLb;
  if ( !Master_object )
    goto LABEL_382;
  v105 = *(_DWORD *)(Master_object + 168);
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    Master_object = (__int64)this->fields.mTitleNameLb;
    if ( !Master_object )
      goto LABEL_382;
  }
  TITLE_LABEL_BASE_WIDTH = ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH;
  Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0);
  v107 = v105 <= TITLE_LABEL_BASE_WIDTH;
  v108 = (UnityEngine_Transform_o *)Master_object;
  if ( v107 )
  {
    if ( !byte_4C506A6 )
    {
      Master_object = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
      byte_4C506A6 = 1;
    }
    if ( !v108 )
      goto LABEL_382;
    v110 = inputMessageObject;
    v114 = UnityEngine_Vector3_TypeInfo->static_fields;
    y = v114->oneVector.fields.y;
    z = v114->oneVector.fields.z;
    x = v114->oneVector.fields.x;
  }
  else
  {
    Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
    if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    v109 = this->fields.mTitleNameLb;
    v110 = inputMessageObject;
    if ( !v109 || !v108 )
      goto LABEL_382;
    y = 1.0;
    x = (float)ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH / (float)v109->fields.mWidth;
    z = 1.0;
  }
  UnityEngine_Transform__set_localScale(v108, *(UnityEngine_Vector3_o *)&x, 0);
  Master_object = (__int64)this->fields.mTitleNameLb;
  if ( IsSvtCoinQuest )
  {
    if ( !Master_object )
      goto LABEL_382;
    v115 = 1054398681;
    v116 = 1055714541;
    v117 = 1056372471;
    v118 = 1.0;
    v119 = v110;
  }
  else
  {
    if ( !Master_object )
      goto LABEL_382;
    v119 = 0;
    v117 = LODWORD(v40);
    v116 = LODWORD(v40);
    v115 = LODWORD(v40);
    v118 = v38;
  }
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)&v117, 0);
  if ( v179 )
    v122 = v119;
  else
    v122 = v110;
  this->fields.inputMessageObject = v122;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.inputMessageObject, (int32_t)v122, v120, v121);
  if ( IsSvtCoinQuest )
  {
    Master_object = (__int64)this->fields.mTitleShortcutSp;
    if ( !Master_object )
      goto LABEL_382;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0);
    mTitleShortcutSp = this->fields.mTitleShortcutSp;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Master_object = AtlasManager__SetEventUI(mTitleShortcutSp, (System_String_o *)StringLiteral_20398/*"img_conductor_scq"*/, 0);
    v124 = this->fields.mTitleShortcutSp;
    if ( (Master_object & 1) != 0 )
    {
      if ( !v124 )
        goto LABEL_382;
      v203.fields.r = 0.48235;
      v203.fields.g = 0.46275;
      v203.fields.b = 0.42353;
      v203.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)this->fields.mTitleShortcutSp, v203, 0);
      v196.fields.y = 19.0;
      v196.fields.z = 0.0;
      v196.fields.x = -226.0;
      ComponentHelper__SetLocalPosition((UnityEngine_Component_o *)this->fields.mTitleShortcutSp, v196, 0);
    }
    else
    {
      if ( !v124 )
        goto LABEL_382;
      UISprite__set_atlas(this->fields.mTitleShortcutSp, this->fields.basePanelAtlas, 0);
      Master_object = (__int64)this->fields.mTitleShortcutSp;
      if ( !Master_object )
        goto LABEL_382;
      UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)StringLiteral_20399/*"img_conductor_sq"*/, 0);
      Master_object = (__int64)this->fields.mTitleShortcutSp;
      if ( !Master_object )
        goto LABEL_382;
      v206.fields.r = v40;
      v206.fields.g = v40;
      v206.fields.b = v40;
      v206.fields.a = v38;
      UIWidget__set_color((UIWidget_o *)Master_object, v206, 0);
    }
    Master_object = (__int64)this->fields.mTitleShortcutSp;
    if ( !Master_object )
      goto LABEL_382;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_object + 840LL))(
      Master_object,
      *(_QWORD *)(*(_QWORD *)Master_object + 848LL));
    Master_object = (__int64)this->fields.mTitleShortcutLb;
    if ( !Master_object )
      goto LABEL_382;
    UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0);
    ServantStatusQuestBoardDraw__ResetInfoTextList(this, v133);
    goto LABEL_300;
  }
  if ( QuestType != 3 )
  {
    Master_object = (__int64)this->fields.mTitleShortcutSp;
    if ( !Master_object )
      goto LABEL_382;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0);
    Master_object = (__int64)this->fields.mTitleShortcutSp;
    if ( !Master_object )
      goto LABEL_382;
    v205.fields.r = v40;
    v205.fields.g = v40;
    v205.fields.b = v40;
    v205.fields.a = v38;
    UIWidget__set_color((UIWidget_o *)Master_object, v205, 0);
    Master_object = (__int64)this->fields.mTitleShortcutLb;
    if ( !Master_object )
      goto LABEL_382;
    goto LABEL_298;
  }
  ServantId = QuestEntity__getServantId(Mine, 0);
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             ServantId,
                             (const MethodInfo_33B2F58 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.mTitleShortcutSp )
    goto LABEL_382;
  v126 = Master_object;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mTitleShortcutSp, 0, 0);
  mTitleShortcutLb = this->fields.mTitleShortcutLb;
  if ( !v126 )
  {
    if ( !mTitleShortcutLb )
      goto LABEL_382;
    Master_object = (__int64)this->fields.mTitleShortcutLb;
LABEL_298:
    UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0);
    goto LABEL_299;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v128 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v130 = *(_QWORD *)(v126 + 16);
  v129 = *(_QWORD *)(v126 + 24);
  v131 = (ServantLimitImageMaster_o *)v128;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v194.fields.currentCryptoKey = v130;
  *(_QWORD *)&v194.fields.fakeValue = v129;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v194, 0);
  if ( !v131 )
    goto LABEL_382;
  Master_object = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                             v131,
                             Master_object,
                             limitCounta,
                             0,
                             0);
  if ( !mTitleShortcutLb )
    goto LABEL_382;
  UILabel__set_text(mTitleShortcutLb, (System_String_o *)Master_object, 0);
  Master_object = (__int64)this->fields.mTitleShortcutLb;
  if ( !Master_object )
    goto LABEL_382;
  v204.fields.r = v40;
  v204.fields.g = v40;
  v204.fields.b = v40;
  v204.fields.a = v38;
  UIWidget__set_color((UIWidget_o *)Master_object, v204, 0);
LABEL_299:
  ServantStatusQuestBoardDraw__ResetInfoTextList(this, v132);
  if ( v39 )
  {
LABEL_318:
    v151 = 0;
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
    v136 = LocalizationManager__Get((System_String_o *)StringLiteral_13441/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0);
    v137 = (QuestBoardInformationText_o *)sub_1C3E7B0(QuestBoardInformationText_TypeInfo);
    QuestBoardInformationText___ctor(v137, v136, endTime, 0, 1, 0, 0);
    if ( !mInfoTextList )
      goto LABEL_382;
    items = mInfoTextList->fields._items;
    v141 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
    ++mInfoTextList->fields._version;
    if ( !items )
      goto LABEL_382;
    size = mInfoTextList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        mInfoTextList,
        (Il2CppObject *)v137,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v141[4] + 192LL) + 112LL));
    }
    else
    {
      v143 = &items->obj.klass + size;
      mInfoTextList->fields._size = size + 1;
      v143[4] = (Il2CppClass *)v137;
      sub_1C3E508((CGThumbnailListItem_o *)(v143 + 4), (int32_t)v137, v138, v139);
    }
  }
  v144 = qinf->fields.questPhase;
  v145 = MapControl_QuestInfo__GetPhaseMax(qinf, 0);
  v147 = this->fields.mInfoTextList;
  if ( v144 + 1 < v145 )
    v148 = v144 + 1;
  else
    v148 = v145;
  Master_object = (__int64)ServantStatusQuestBoardDraw__GetCampaignText(
                             this,
                             v146,
                             v148,
                             0,
                             v93,
                             &fixedVal[1],
                             fixedVal,
                             &isNotItemConsume,
                             v168);
  if ( !v147 )
    goto LABEL_382;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v147,
    (System_Collections_Generic_IEnumerable_T__o *)Master_object,
    (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  Master_object = (__int64)this->fields.mInfoTextList;
  if ( !Master_object )
    goto LABEL_382;
  v149 = *(_DWORD *)(Master_object + 24);
  if ( v149 < 1 )
    goto LABEL_318;
  Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)Master_object,
                             v93->fields.mAlphaAnimCnt % v149,
                             (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
  if ( !Master_object )
    goto LABEL_382;
  QuestBoardInformationText__SetTime(
    (QuestBoardInformationText_o *)Master_object,
    p_mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    0);
  Master_object = (__int64)this->fields.mOptionInfoLb;
  if ( !Master_object )
    goto LABEL_382;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Master_object, 1.0, 0);
  v150 = fixedVal[1];
  v151 = 1;
  qinf->fields.isNotItemConsume = isNotItemConsume;
  v152 = fixedVal[0];
  qinf->fields.costCalcVal = v150;
  qinf->fields._fixedCostVal_k__BackingField = v152;
LABEL_319:
  Master_object = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_382;
  Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v151, 0);
  Master_object = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_382;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v151, 0);
  this->fields.mRewardIconInfs = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mRewardIconInfs, 0, v153, v154);
  Master_object = (__int64)this->fields.mRewardIcon;
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  if ( (v184 & 1) != 0 && QuestEntity__HasFlag(Mine, 4096, 0) )
  {
    Master_object = (__int64)this->fields.mRewardIcon;
    if ( !Master_object )
      goto LABEL_382;
    LODWORD(giftIconId) = 99;
LABEL_333:
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)Master_object, giftIconId, 0);
    Master_object = (__int64)this->fields.mRewardIcon;
    if ( !Master_object )
      goto LABEL_382;
    Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
    if ( !Master_object )
      goto LABEL_382;
    v155 = 1;
    goto LABEL_336;
  }
  giftIconId = (unsigned int)Mine->fields.giftIconId;
  if ( (int)giftIconId >= 1 )
  {
    Master_object = (__int64)this->fields.mRewardIcon;
    if ( !Master_object )
      goto LABEL_382;
    goto LABEL_333;
  }
  if ( Mine->fields.giftId >= 1 )
  {
    Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_382;
    Master_object = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !Master_object )
      goto LABEL_382;
    Master_object = (__int64)GiftMaster__GetGiftListById((GiftMaster_o *)Master_object, Mine->fields.giftId, 0);
    if ( !Master_object )
      goto LABEL_382;
    v161 = *(_QWORD *)(Master_object + 24);
    v162 = (struct GiftEntity_array *)Master_object;
    if ( !v161 )
      goto LABEL_381;
    v163 = v93->fields.mAlphaAnimCnt % (int)v161;
    if ( v163 >= (unsigned int)v161 )
      sub_1C3E7C8(Master_object, giftIconId);
    v164 = *(_DWORD **)(Master_object + 8LL * v163 + 32);
    if ( v164 )
    {
      giftIconId = (unsigned int)v164[11];
      Master_object = (__int64)this->fields.mRewardIcon;
      v165 = v164[7];
      if ( (int)giftIconId < 1 )
      {
        if ( !Master_object )
          goto LABEL_382;
        v167 = v165 <= 1 ? -1LL : (unsigned int)v164[7];
        ItemIconComponent__SetGift_40968388((ItemIconComponent_o *)Master_object, v164[5], v164[6], v167, 0, 0);
      }
      else
      {
        if ( !Master_object )
          goto LABEL_382;
        v166 = v165 <= 1 ? -1LL : (unsigned int)v164[7];
        ItemIconComponent__SetItemImage_40970836((ItemIconComponent_o *)Master_object, giftIconId, v166, 0);
      }
      Master_object = (__int64)this->fields.mRewardIcon;
      if ( Master_object )
      {
        Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
        if ( Master_object )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
LABEL_381:
          this->fields.mRewardIconInfs = v162;
          sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mRewardIconInfs, (int32_t)v162, v159, v160);
          goto LABEL_337;
        }
      }
    }
LABEL_382:
    sub_1C3E7C0(Master_object, giftIconId);
  }
  Master_object = (__int64)this->fields.mRewardObj;
  if ( !Master_object )
    goto LABEL_382;
  v155 = 0;
LABEL_336:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v155, 0);
LABEL_337:
  Master_object = (__int64)this->fields.mRewardObj;
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Master_object,
                             (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Master_object )
    goto LABEL_382;
  v207.fields.r = v40;
  v207.fields.g = v40;
  v207.fields.b = v40;
  v207.fields.a = v38;
  UIWidget__set_color((UIWidget_o *)Master_object, v207, 0);
  Master_object = (__int64)this->fields.mRewardIcon;
  if ( !Master_object )
    goto LABEL_382;
  v208.fields.r = v40;
  v208.fields.g = v40;
  v208.fields.b = v40;
  v208.fields.a = v38;
  ItemIconComponent__SetColor((ItemIconComponent_o *)Master_object, v208, 0);
  Master_object = (__int64)v177;
  v156 = IsLimitCountSealQuest && v39;
  if ( !v177 || (v156 & 1) != 0 )
  {
    mServantLimitRewardObtainedSP = (UnityEngine_Component_o *)this->fields.mServantLimitRewardObtainedSP;
    if ( !v156 )
    {
LABEL_343:
      if ( !mServantLimitRewardObtainedSP )
        goto LABEL_382;
      Master_object = (__int64)UnityEngine_Component__get_gameObject(mServantLimitRewardObtainedSP, 0);
      if ( !Master_object )
        goto LABEL_382;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
      v158 = 1;
      goto LABEL_354;
    }
  }
  else
  {
    Master_object = QuestBehaviorMaster__IsOpenQuestBehaviorCond(v177, this->fields.questId, phase, 10, 0);
    mServantLimitRewardObtainedSP = (UnityEngine_Component_o *)this->fields.mServantLimitRewardObtainedSP;
    if ( (Master_object & 1) == 0 )
      goto LABEL_343;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(
    (UISprite_o *)mServantLimitRewardObtainedSP,
    (System_String_o *)StringLiteral_20241/*"icon_reward_limits_release"*/,
    0);
  Master_object = (__int64)this->fields.mServantLimitRewardObtainedSP;
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  Master_object = (__int64)this->fields.mServantLimitRewardObtainedSP;
  if ( !Master_object )
    goto LABEL_382;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_object + 840LL))(
    Master_object,
    *(_QWORD *)(*(_QWORD *)Master_object + 848LL));
  Master_object = (__int64)this->fields.mServantLimitRewardObtainedSP;
  if ( !Master_object )
    goto LABEL_382;
  v209.fields.r = v40;
  v209.fields.g = v40;
  v209.fields.b = v40;
  v209.fields.a = v38;
  UIWidget__set_color((UIWidget_o *)Master_object, v209, 0);
  v158 = 0;
LABEL_354:
  Master_object = (__int64)this->fields.mRewardGetSP;
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v39 & v158 & !v178, 0);
  Master_object = (__int64)this->fields.mRewardGetSP;
  if ( !Master_object )
    goto LABEL_382;
  v210.fields.r = v40;
  v210.fields.g = v40;
  v210.fields.b = v40;
  v210.fields.a = v38;
  UIWidget__set_color((UIWidget_o *)Master_object, v210, 0);
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

  if ( (byte_4C54415 & 1) == 0 )
  {
    sub_1C3E564(&ServantStatusQuestBoardDraw_TypeInfo);
    byte_4C54415 = 1;
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
      sub_1C3E7C0(mCondObject, v6);
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
      sub_1C3E7C0(0, method);
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

  if ( (byte_4C54413 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    byte_4C54413 = 1;
  }
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !mInfoTextList
    || (mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       mInfoTextList,
                                                                       strIndex,
                                                                       (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__)) == 0 )
  {
    sub_1C3E7C0(mInfoTextList, qinf);
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
    sub_1C3E7C0(this, 0);
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
  if ( (byte_4C5441F & 1) == 0 )
  {
    label = (UILabel_o *)sub_1C3E564(&ServantStatusQuestBoardDraw_TypeInfo);
    byte_4C5441F = 1;
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
    sub_1C3E7C0(label, message);
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
        sub_1C3E7C8(this, boardMessageData);
      this = (ServantStatusQuestBoardDraw_o *)boardMessageData->m_Items[v5];
      if ( !this )
        break;
      if ( HIDWORD(this->fields.m_CancellationTokenSource) == 4 && LODWORD(this->fields.mcBaseP) == eventId )
        return (BoardMessageEntity_o *)this;
      if ( max_length == ++v5 )
        return 0;
    }
LABEL_12:
    sub_1C3E7C0(this, boardMessageData);
  }
  return 0;
}


void ServantStatusQuestBoardDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C54420 & 1) == 0 )
  {
    sub_1C3E564(&ServantStatusQuestBoardDraw___c_TypeInfo);
    byte_4C54420 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(ServantStatusQuestBoardDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantStatusQuestBoardDraw___c_TypeInfo->static_fields->__9 = (struct ServantStatusQuestBoardDraw___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)ServantStatusQuestBoardDraw___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, entity);
  return entity->fields.imagePriority == rQuestRlsNG->fields.imagePriority;
}