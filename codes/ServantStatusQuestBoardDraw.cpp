void __fastcall ServantStatusQuestBoardDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct ServantStatusQuestBoardDraw_StaticFields *static_fields; // x0
  int32_t v12; // w1
  struct ServantStatusQuestBoardDraw_StaticFields *v13; // x0
  int32_t v14; // w1
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
  int32_t v29; // w1
  struct ServantStatusQuestBoardDraw_StaticFields *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w1
  struct ServantStatusQuestBoardDraw_StaticFields *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3

  if ( (byte_49B8731 & 1) == 0 )
  {
    sub_1B4CF90(&ServantStatusQuestBoardDraw_TypeInfo, v1);
    sub_1B4CF90(&StringLiteral_20000/*"img_conductor_03"*/, v4);
    sub_1B4CF90(&StringLiteral_20001/*"img_conductor_04"*/, v5);
    sub_1B4CF90(&StringLiteral_19999/*"img_conductor_02"*/, v6);
    sub_1B4CF90(&StringLiteral_20117/*"img_questboard_1001"*/, v7);
    sub_1B4CF90(&StringLiteral_19998/*"img_conductor_01"*/, v8);
    sub_1B4CF90(&StringLiteral_20002/*"img_conductor_questboard"*/, v9);
    sub_1B4CF90(&StringLiteral_19994/*"img_commonbg"*/, v10);
    byte_49B8731 = 1;
  }
  static_fields = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->TITLE_LABEL_BASE_WIDTH = xmmword_BAAC30;
  static_fields->ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X = -208.0;
  v12 = StringLiteral_19994/*"img_commonbg"*/;
  static_fields->DARK_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_19994/*"img_commonbg"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->DARK_BOARD_SPRITE_NAME, v12, v2, v3);
  v13 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  *(_QWORD *)&v13->DARK_BOARD_WIDTH = 0x7A000001F0LL;
  v14 = StringLiteral_20002/*"img_conductor_questboard"*/;
  v13->BASE_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_20002/*"img_conductor_questboard"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&v13->BASE_BOARD_SPRITE_NAME, v14, v15, v16);
  v17 = StringLiteral_19999/*"img_conductor_02"*/;
  v18 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v18->TITLE_SPRITE_NAME_INTERLUDE = (struct System_String_o *)StringLiteral_19999/*"img_conductor_02"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&v18->TITLE_SPRITE_NAME_INTERLUDE, v17, v19, v20);
  v21 = StringLiteral_19998/*"img_conductor_01"*/;
  v22 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v22->TITLE_SPRITE_NAME_INTERLUDE_MAP = (struct System_String_o *)StringLiteral_19998/*"img_conductor_01"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&v22->TITLE_SPRITE_NAME_INTERLUDE_MAP, v21, v23, v24);
  v25 = StringLiteral_20000/*"img_conductor_03"*/;
  v26 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v26->TITLE_SPRITE_NAME_RAINFORCEMENT = (struct System_String_o *)StringLiteral_20000/*"img_conductor_03"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&v26->TITLE_SPRITE_NAME_RAINFORCEMENT, v25, v27, v28);
  v29 = StringLiteral_20117/*"img_questboard_1001"*/;
  v30 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v30->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME = (struct System_String_o *)StringLiteral_20117/*"img_questboard_1001"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&v30->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME, v29, v31, v32);
  v33 = StringLiteral_20001/*"img_conductor_04"*/;
  v34 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v34->TITLE_SPRITE_NAME_LIMIT_UNSEAL = (struct System_String_o *)StringLiteral_20001/*"img_conductor_04"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&v34->TITLE_SPRITE_NAME_LIMIT_UNSEAL, v33, v35, v36);
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
  System_Collections_Generic_List_object__o *mInfoTextList; // x0
  int size; // w8
  int v10; // w20
  MapControl_QuestInfo_o *v11; // x1
  int64_t Time; // x3
  const MethodInfo *v13; // x4
  ServantStatusQuestBoardDraw_o *v14; // x0
  int32_t v15; // w2

  if ( (byte_49B8729 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, qinf);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__, v6);
    sub_1B4CF90(&NetworkManager_TypeInfo, v7);
    byte_49B8729 = 1;
  }
  if ( (byte_49B872A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, qinf);
    byte_49B872A = 1;
  }
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( mInfoTextList )
  {
    size = mInfoTextList->fields._size;
    if ( size >= 2 )
    {
      if ( questBoardManagerer )
      {
        v10 = questBoardManagerer->fields.mAlphaAnimCnt % size;
        mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       mInfoTextList,
                                                                       v10,
                                                                       (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
        if ( mInfoTextList )
        {
          if ( QuestBoardInformationText__ChangeText(
                 (QuestBoardInformationText_o *)mInfoTextList,
                 &this->fields.mOptionInfoLb,
                 0LL) )
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Time = NetworkManager__getTime(0LL);
            v14 = this;
            v15 = v10;
LABEL_22:
            ServantStatusQuestBoardDraw__UpdateInfoText(v14, v11, v15, Time, v13);
            return;
          }
          return;
        }
      }
LABEL_24:
      sub_1B4D1EC(mInfoTextList, qinf);
    }
  }
  if ( (byte_49B872B & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, qinf);
    byte_49B872B = 1;
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  }
  if ( !mInfoTextList || !mInfoTextList->fields._size )
    return;
  mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 mInfoTextList,
                                                                 0,
                                                                 (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
  if ( !mInfoTextList )
    goto LABEL_24;
  if ( QuestBoardInformationText__ChangeText(
         (QuestBoardInformationText_o *)mInfoTextList,
         &this->fields.mOptionInfoLb,
         0LL) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    v14 = this;
    v15 = 0;
    goto LABEL_22;
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
  GiftEntity_o *v6; // x8
  int num; // w9
  int32_t v8; // w2
  int32_t v9; // w3

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
    sub_1B4D1F4(this, questBoardManager);
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
      ItemIconComponent__SetItemImage_38684828((ItemIconComponent_o *)this, (int32_t)questBoardManager, v8, 0LL);
      return;
    }
LABEL_18:
    sub_1B4D1EC(this, questBoardManager);
  }
  if ( !this )
    goto LABEL_18;
  if ( num <= 1 )
    v9 = -1;
  else
    v9 = v6->fields.num;
  ItemIconComponent__SetGift_38682396((ItemIconComponent_o *)this, v6->fields.type, v6->fields.objectId, v9, 0, 0LL);
}


QuestBoardInformationText_o *__fastcall ServantStatusQuestBoardDraw__CreateQuestBoardInformationText(
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  int target; // w25
  const MethodInfo *v23; // x3
  QuestBoardInformationText_o *v24; // x27
  struct System_Int32_array *targetIds; // x8
  int32_t consumeType; // w8
  System_String_o *v27; // x20
  Il2CppObject *EventName; // x0
  System_String_o *v29; // x20
  int64_t EndTime; // x19
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49B872E & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestPhaseMaster___, questEntity);
    sub_1B4CF90(&DataManager_TypeInfo, v17);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v18);
    sub_1B4CF90(&QuestBoardInformationText_TypeInfo, v19);
    sub_1B4CF90(&StringLiteral_24692/*"{0}"*/, v20);
    this = (ServantStatusQuestBoardDraw_o *)sub_1B4CF90(&StringLiteral_13132/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, v21);
    byte_49B872E = 1;
  }
  entity = 0LL;
  if ( !eventEnt || !eventCampaignEnt )
    goto LABEL_40;
  target = eventCampaignEnt->fields.target;
  this = (ServantStatusQuestBoardDraw_o *)CombineAdjustTarget__isTerminalExposable(target, 0LL);
  v24 = 0LL;
  if ( ((unsigned __int8)this & 1) == 0 )
    return v24;
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
    v24 = 0LL;
    if ( target == 25 || target == 35 )
      return v24;
    goto LABEL_36;
  }
  if ( target == 12 )
  {
LABEL_25:
    if ( (eventCampaignEnt->fields.calcType & 0xFFFFFFFE) != 2 )
      return 0LL;
    if ( !questEntity )
      goto LABEL_40;
    consumeType = questEntity->fields.consumeType;
    if ( consumeType != 4 && consumeType != 1 )
      return 0LL;
    *costCalcVal = eventCampaignEnt->fields.value;
    if ( eventCampaignEnt->fields.calcType != 3 )
      *fixedVal = eventCampaignEnt->fields.value;
  }
  if ( target != 24 )
    goto LABEL_36;
  targetIds = eventCampaignEnt->fields.targetIds;
  if ( !targetIds || !*(_QWORD *)&targetIds->max_length )
    goto LABEL_36;
  if ( !ServantStatusQuestBoardDraw__IsValidSupportSelection(this, questEntity, phase, v23) )
    return 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ServantStatusQuestBoardDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !questEntity || !this )
LABEL_40:
    sub_1B4D1EC(this, questEntity);
  this = (ServantStatusQuestBoardDraw_o *)QuestPhaseMaster__TryGetEntity(
                                            (QuestPhaseMaster_o *)this,
                                            &entity,
                                            questEntity->fields.id,
                                            phase,
                                            0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( entity )
    {
      if ( !entity->fields.isNpcOnly )
        goto LABEL_36;
      return 0LL;
    }
    goto LABEL_40;
  }
LABEL_36:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_13132/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0LL);
  EventName = (Il2CppObject *)EventEntity__getEventName(eventEnt, 0LL);
  v29 = System_String__Format_61134760(v27, EventName, (Il2CppObject *)StringLiteral_24692/*"{0}"*/, 0LL);
  EndTime = EventEntity__GetEndTime(eventEnt, 0, 0LL);
  v24 = (QuestBoardInformationText_o *)sub_1B4D1DC(QuestBoardInformationText_TypeInfo);
  QuestBoardInformationText___ctor(v24, v29, EndTime, 1, 0, 0LL, 0LL);
  return v24;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestBoardInformationText__o *__fastcall ServantStatusQuestBoardDraw__GetCampaignText(
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
  System_Collections_Generic_List_object__o *v28; // x19
  System_Collections_Generic_IEnumerable_T__o *CampaignTextListByEventQuestMaster; // x0
  __int64 v30; // x1
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v32; // x20
  Il2CppObject *p_endedAt; // x20
  __int64 endedAt; // t1
  int64_t *v35; // x8
  int64_t v36; // x20
  System_String_o *EventName; // x21
  System_String_o *v38; // x0
  System_String_o *v39; // x22
  QuestBoardInformationText_o *v40; // x21
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  const MethodInfo *v48; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_49B872C & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&quest_id);
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v16);
    sub_1B4CF90(&DataManager_TypeInfo, v17);
    sub_1B4CF90(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v18);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__, v19);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__, v20);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__, v21);
    sub_1B4CF90(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo, v22);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v23);
    sub_1B4CF90(&QuestBoardInformationText_TypeInfo, v24);
    sub_1B4CF90(&StringLiteral_24692/*"{0}"*/, v25);
    sub_1B4CF90(&StringLiteral_115/*" "*/, v26);
    sub_1B4CF90(&StringLiteral_13142/*"TIME_REST_STRING"*/, v27);
    byte_49B872C = 1;
  }
  entity = 0LL;
  v28 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)ServantStatusQuestBoardDraw__GetCampaignTextListByEventQuestMaster(
                                                                                        this,
                                                                                        this->fields.questId,
                                                                                        phase,
                                                                                        isQuestNoneCleared,
                                                                                        questBoardManager,
                                                                                        costCalcVal,
                                                                                        fixedVal,
                                                                                        isNotItemConsume,
                                                                                        v48);
  if ( !v28 )
    goto LABEL_25;
  System_Collections_Generic_List_object___AddRange(
    v28,
    CampaignTextListByEventQuestMaster,
    (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  if ( !questBoardManager || !CampaignTextListByEventQuestMaster )
    goto LABEL_25;
  EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                             (QuestReleaseOverwriteMaster_o *)CampaignTextListByEventQuestMaster,
                             this->fields.questId,
                             questBoardManager->fields.mListCreatedTime,
                             0LL);
  if ( !EntityByQuestIdAndTime )
    return (System_Collections_Generic_List_QuestBoardInformationText__o *)v28;
  v32 = EntityByQuestIdAndTime;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !CampaignTextListByEventQuestMaster )
    goto LABEL_25;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)CampaignTextListByEventQuestMaster,
          &entity,
          v32->fields.eventId,
          (const MethodInfo_319D9E8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return (System_Collections_Generic_List_QuestBoardInformationText__o *)v28;
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)entity;
  if ( !entity )
    goto LABEL_25;
  if ( LODWORD(entity[1].monitor) != 25 )
    return (System_Collections_Generic_List_QuestBoardInformationText__o *)v28;
  endedAt = v32->fields.endedAt;
  p_endedAt = (Il2CppObject *)&v32->fields.endedAt;
  v35 = (int64_t *)(endedAt <= 0 ? &entity[6] : p_endedAt);
  v36 = *v35;
  EventName = EventEntity__getEventName((EventEntity_o *)entity, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_13142/*"TIME_REST_STRING"*/, 0LL);
  v39 = System_String__Concat_61133720(
          EventName,
          (System_String_o *)StringLiteral_115/*" "*/,
          v38,
          (System_String_o *)StringLiteral_24692/*"{0}"*/,
          0LL);
  v40 = (QuestBoardInformationText_o *)sub_1B4D1DC(QuestBoardInformationText_TypeInfo);
  QuestBoardInformationText___ctor(v40, v39, v36, 0, 1, 0LL, 0LL);
  items = v28->fields._items;
  v44 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
  ++v28->fields._version;
  if ( !items )
LABEL_25:
    sub_1B4D1EC(CampaignTextListByEventQuestMaster, v30);
  size = v28->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v28,
      (Il2CppObject *)v40,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v46 = &items->obj.klass + size;
    v28->fields._size = size + 1;
    v46[4] = (Il2CppClass *)v40;
    sub_1B4CF34((CGThumbnailListItem_o *)(v46 + 4), (int32_t)v40, v41, v42);
  }
  return (System_Collections_Generic_List_QuestBoardInformationText__o *)v28;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestBoardInformationText__o *__fastcall ServantStatusQuestBoardDraw__GetCampaignTextListByEventQuestMaster(
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  System_Collections_Generic_List_object__o *v23; // x24
  void *Instance; // x0
  __int64 v25; // x1
  DataManager_o *v26; // x26
  Il2CppObject *MasterData_object; // x25
  int64_t mListCreatedTime; // x29
  QuestEntity_o *v29; // x27
  int v30; // w8
  void *v31; // x28
  unsigned int v32; // w19
  EventEntity_o *v33; // x29
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass *v39; // x1
  Il2CppClass **v40; // x0
  const MethodInfo *v42; // [xsp+8h] [xbp-78h]
  bool v43; // [xsp+14h] [xbp-6Ch]
  bool *v44; // [xsp+18h] [xbp-68h]

  if ( (byte_49B872D & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventCampaignMaster___, *(_QWORD *)&questId);
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventQuestMaster___, v16);
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestMaster___, v17);
    sub_1B4CF90(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v18);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__, v19);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__, v20);
    sub_1B4CF90(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo, v21);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_49B872D = 1;
  }
  v23 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  v43 = isQuestNoneCleared;
  v26 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = DataManager__GetMasterData_object_(
               v26,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               questId,
               (const MethodInfo_319D99C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !questBoardManager )
    goto LABEL_22;
  mListCreatedTime = questBoardManager->fields.mListCreatedTime;
  v29 = (QuestEntity_o *)Instance;
  Instance = DataManager__GetMasterData_object_(
               v26,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = EventQuestMaster__GetEnabledEventCampaignForQuest(
               (EventQuestMaster_o *)Instance,
               questId,
               phase,
               mListCreatedTime,
               7,
               0LL);
  if ( !Instance )
    goto LABEL_22;
  v30 = *((_DWORD *)Instance + 6);
  v31 = Instance;
  if ( v30 >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      if ( v32 >= v30 )
        sub_1B4D1F4(Instance, v25);
      v33 = (EventEntity_o *)*((_QWORD *)v31 + (int)v32 + 4);
      if ( !v33 || !MasterData_object )
        break;
      Instance = EventCampaignMaster__getData((EventCampaignMaster_o *)MasterData_object, v33->fields.id, 0LL);
      if ( Instance )
      {
        Instance = ServantStatusQuestBoardDraw__CreateQuestBoardInformationText(
                     this,
                     v29,
                     v33,
                     (EventCampaignEntity_o *)Instance,
                     phase,
                     v43,
                     costCalcVal,
                     fixedVal,
                     v44,
                     v42);
        if ( Instance )
        {
          if ( !v23 )
            break;
          items = v23->fields._items;
          v37 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
          ++v23->fields._version;
          if ( !items )
            break;
          size = v23->fields._size;
          v39 = (Il2CppClass *)Instance;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v23,
              (Il2CppObject *)Instance,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
          }
          else
          {
            v40 = &items->obj.klass + size;
            v23->fields._size = size + 1;
            v40[4] = v39;
            sub_1B4CF34((CGThumbnailListItem_o *)(v40 + 4), (int32_t)v39, v34, v35);
          }
        }
      }
      v30 = *((_DWORD *)v31 + 6);
      if ( (int)++v32 >= v30 )
        return (System_Collections_Generic_List_QuestBoardInformationText__o *)v23;
    }
LABEL_22:
    sub_1B4D1EC(Instance, v25);
  }
  return (System_Collections_Generic_List_QuestBoardInformationText__o *)v23;
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
  char v19; // w8
  struct MapControl_SpotInfo_o *SpotInfo_k__BackingField; // x8
  Il2CppObject *Master_object; // x20
  System_Collections_Generic_List_object__o *v23; // x21
  System_Collections_Generic_List_object__o *v24; // x20
  __int64 v25; // x1
  Il2CppObject *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  Il2CppObject *v29; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  MapControl_WarInfo_o *v34; // x20
  __int64 v35; // x8
  __int64 v36; // x23
  __int64 v37; // x8
  int32_t v38; // w19
  int32_t v39; // w22
  int64_t v40; // x21
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_49B8722 & 1) == 0 )
  {
    sub_1B4CF90(&CondType_TypeInfo, method);
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestReleaseMaster___, v3);
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v4);
    sub_1B4CF90(&DataManager_TypeInfo, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v13);
    sub_1B4CF90(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v14);
    sub_1B4CF90(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v15);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v16);
    byte_49B8722 = 1;
  }
  entityList = 0LL;
  memset(&v42, 0, sizeof(v42));
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IsQuestReleaseAll = (MapControl_WarInfo_o *)TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL);
  if ( ((unsigned __int8)IsQuestReleaseAll & 1) != 0 )
    goto LABEL_8;
  if ( !qinf )
    goto LABEL_53;
  if ( MapControl_QuestInfo__IsClear(qinf, 0LL) )
  {
LABEL_8:
    v19 = 0;
    return v19 & 1;
  }
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
        goto LABEL_49;
      SpotInfo_k__BackingField = qinf->fields._SpotInfo_k__BackingField;
      if ( !SpotInfo_k__BackingField )
        goto LABEL_53;
      if ( SpotInfo_k__BackingField->fields.dispType != 1 )
      {
LABEL_49:
        v19 = 1;
        return v19 & 1;
      }
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  v23 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v23;
  if ( !Master_object )
    goto LABEL_53;
  if ( QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
         (QuestReleaseOverwriteMaster_o *)Master_object,
         &entityList,
         qinf->fields.questId,
         0LL,
         0LL) )
  {
    v24 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v24,
      (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    IsQuestReleaseAll = (MapControl_WarInfo_o *)entityList;
    if ( !entityList )
      goto LABEL_53;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v41,
      (System_Collections_Generic_List_object__o *)entityList,
      (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    v42 = v41;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v42,
              (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
    {
      if ( !v42.fields._current )
        sub_1B4D1EC(0LL, v25);
      v26 = (Il2CppObject *)QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
                              (QuestReleaseOverwriteEntity_o *)v42.fields._current,
                              0LL);
      v29 = v26;
      if ( !v24 )
        sub_1B4D1EC(v26, v26);
      items = v24->fields._items;
      v31 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
      ++v24->fields._version;
      if ( !items )
        sub_1B4D1EC(v26, v26);
      size = v24->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v24,
          v26,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v24->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v29;
        sub_1B4CF34((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v29, v27, v28);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v42,
      (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    if ( !v24 )
      goto LABEL_53;
    IsQuestReleaseAll = (MapControl_WarInfo_o *)System_Collections_Generic_List_object___ToArray(
                                                  v24,
                                                  (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    v34 = IsQuestReleaseAll;
    if ( IsQuestReleaseAll )
      goto LABEL_37;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsQuestReleaseAll = (MapControl_WarInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !IsQuestReleaseAll )
LABEL_53:
    sub_1B4D1EC(IsQuestReleaseAll, v18);
  IsQuestReleaseAll = (MapControl_WarInfo_o *)QuestReleaseMaster__getListByQuestID(
                                                (QuestReleaseMaster_o *)IsQuestReleaseAll,
                                                qinf->fields.questId,
                                                0LL);
  v34 = IsQuestReleaseAll;
LABEL_37:
  if ( !v34 )
    goto LABEL_53;
  v35 = *(_QWORD *)&v34->fields.status;
  if ( !v35 )
  {
    v19 = qinf->fields.dispType != 1;
    return v19 & 1;
  }
  if ( (int)v35 < 1 )
    goto LABEL_8;
  v36 = 0LL;
  do
  {
    if ( (unsigned int)v36 >= (unsigned int)v35 )
      sub_1B4D1F4(IsQuestReleaseAll, v18);
    v37 = *((_QWORD *)&v34->fields.mapInfoList + v36);
    if ( !v37 )
      goto LABEL_53;
    v39 = *(_DWORD *)(v37 + 20);
    v38 = *(_DWORD *)(v37 + 24);
    v40 = *(_QWORD *)(v37 + 32);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestReleaseAll = (MapControl_WarInfo_o *)CondType__IsOpen(v39, v38, v40, 0, 0LL, 0LL);
    if ( ((unsigned __int8)IsQuestReleaseAll & 1) == 0 )
      break;
    LODWORD(v35) = v34->fields.status;
    ++v36;
  }
  while ( (int)v36 < (int)v35 );
  v19 = (unsigned __int8)IsQuestReleaseAll ^ 1;
  return v19 & 1;
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
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8

  if ( (byte_49B872B & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, method);
    byte_49B872B = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  return !mInfoTextList || mInfoTextList->fields._size == 0;
}


bool __fastcall ServantStatusQuestBoardDraw__IsMultiInfoText(
        ServantStatusQuestBoardDraw_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8

  if ( (byte_49B872A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, method);
    byte_49B872A = 1;
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
  QuestRestrictionInfoMaster_o *Master_object; // x0
  __int64 v8; // x1
  bool HasFlag; // w0
  bool v10; // w21
  QuestRestrictionInfoEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49B872F & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestRestrictionInfoMaster___, questEntity);
    sub_1B4CF90(&DataManager_TypeInfo, v6);
    byte_49B872F = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
  if ( !questEntity || !Master_object )
    goto LABEL_17;
  if ( QuestRestrictionInfoMaster__TryGetEntity(Master_object, &entity, questEntity->fields.id, phase, 0LL) )
  {
    Master_object = (QuestRestrictionInfoMaster_o *)entity;
    if ( !entity )
      goto LABEL_17;
    if ( !QuestRestrictionInfoEntity__HasFlag(entity, 0x80000LL, 0LL) )
    {
      Master_object = (QuestRestrictionInfoMaster_o *)entity;
      if ( entity )
      {
        HasFlag = QuestRestrictionInfoEntity__HasFlag(entity, 0x100000LL, 0LL);
LABEL_15:
        v10 = !HasFlag;
        return v10 & ~QuestEntity__HasFlag_40048268(questEntity, 2LL, phase, 0LL) & 1;
      }
LABEL_17:
      sub_1B4D1EC(Master_object, v8);
    }
  }
  else if ( !QuestEntity__HasFlag_40048268(questEntity, 0x80000LL, phase, 0LL) )
  {
    HasFlag = QuestEntity__HasFlag_40048268(questEntity, 0x100000LL, phase, 0LL);
    goto LABEL_15;
  }
  v10 = 0;
  return v10 & ~QuestEntity__HasFlag_40048268(questEntity, 2LL, phase, 0LL) & 1;
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
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  int32_t questId; // w8
  UnityEngine_GameObject_o *v11; // x19
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49B8730 & 1) == 0 )
  {
    sub_1B4CF90(&int_TypeInfo, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    sub_1B4CF90(&Method_ServantStatusQuestBoardDraw_OnClick__, v4);
    sub_1B4CF90(&StringLiteral_9668/*"OnClickServantQuest"*/, v5);
    byte_49B8730 = 1;
  }
  inputMessageObject = (UnityEngine_Object_o *)this->fields.inputMessageObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(inputMessageObject, 0LL, 0LL) || (questId = this->fields.questId) == 0 )
  {
    v14 = Method_ServantStatusQuestBoardDraw_OnClick__;
    if ( (*((_BYTE *)Method_ServantStatusQuestBoardDraw_OnClick__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1B4CFA8(Method_ServantStatusQuestBoardDraw_OnClick__);
    v15 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v14, v14[4]);
    OverwriteAssetSoundName__PlaySystemSe(v15, 2, 0, 0LL);
  }
  else
  {
    v11 = this->fields.inputMessageObject;
    v16 = questId;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v7, v8, v9);
    if ( !v11 )
      sub_1B4D1EC(v12, v13);
    UnityEngine_GameObject__SendMessage_68785828(v11, (System_String_o *)StringLiteral_9668/*"OnClickServantQuest"*/, v12, 0LL);
  }
}


void __fastcall ServantStatusQuestBoardDraw__ResetInfoTextList(
        ServantStatusQuestBoardDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_QuestBoardInformationText__o *v5; // x8
  CGThumbnailListItem_o *p_mInfoTextList; // x19
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // t1
  int32_t size; // w2
  int v9; // w9
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_49B8725 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestBoardInformationText__Clear__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__, v3);
    sub_1B4CF90(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo, v4);
    byte_49B8725 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  p_mInfoTextList = (CGThumbnailListItem_o *)&this->fields.mInfoTextList;
  v5 = mInfoTextList;
  if ( mInfoTextList )
  {
    size = v5->fields._size;
    v9 = v5->fields._version + 1;
    v5->fields._size = 0;
    v5->fields._version = v9;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v5->fields._items, 0, size, 0LL);
  }
  else
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    p_mInfoTextList->klass = (CGThumbnailListItem_c *)v10;
    sub_1B4CF34(p_mInfoTextList, (int32_t)v10, v11, v12);
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
        QuestReleaseOverwriteEntity_o *questReleaseOverwriteEntity,
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
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 Master_object; // x0
  Il2CppClass *klass; // x1
  System_String_o *monitor; // x21
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  bool v35; // w25
  int32_t monitor_high; // w22
  char v37; // w23
  Il2CppObject *PrioredName; // x0
  System_String_o *v39; // x0
  int32_t targetId; // w26
  System_String_o *v41; // x27
  int32_t WarID_ByQuestID; // w26
  Il2CppObject *v43; // x0
  int64_t OpenedAt; // x26
  System_Object_array *v45; // x26
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  Il2CppObject *v51; // x27
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  Il2CppObject *v57; // x27
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  Il2CppObject *v63; // x27
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  Il2CppObject *v69; // x27
  _BOOL4 v70; // w26
  UILabel_o *mTitleNameLb; // x24
  const MethodInfo *v72; // x2
  struct ServantStatusQuestBoardDraw_StaticFields *static_fields; // x8
  __int64 v74; // x9
  int32_t v75; // w24
  int leftIndent; // w25
  float v77; // s8
  float ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X; // s9
  float v79; // s1
  float v80; // s0
  int v81; // s2
  float v82; // s9
  float v83; // s0
  float v84; // s1
  float v85; // s0
  int v86; // s2
  float v87; // s1
  int v88; // s2
  UIWidget_o *mOverwriteAdvanceNoticeLb; // x23
  const MethodInfo *v90; // x4
  const MethodInfo *v91; // x4
  System_String_o *overlayClosedMessage; // x20
  UILabel_o *v93; // x21
  float v94; // s8
  UnityEngine_Object_o *mOverwriteAdvanceNoticeArrowObj; // x20
  __int64 v96; // x0
  int32_t Minute; // [xsp+Ch] [xbp-94h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-90h] BYREF
  int32_t Day; // [xsp+14h] [xbp-8Ch] BYREF
  int64_t value; // [xsp+18h] [xbp-88h] BYREF
  uint64_t dateData; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-78h] BYREF
  System_DateTime_o v103; // 0:x0.8
  System_DateTime_o v104; // 0:x0.8
  System_DateTime_o v105; // 0:x0.8
  System_DateTime_o v106; // 0:x0.8
  UnityEngine_Vector3_o v107; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49B8727 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_ClosedMessageMaster___, *(_QWORD *)&questReleaseClosedID);
    sub_1B4CF90(&Method_DataManager_GetMaster_WarMaster___, v14);
    sub_1B4CF90(&DataManager_TypeInfo, v15);
    sub_1B4CF90(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v16);
    sub_1B4CF90(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v17);
    sub_1B4CF90(&System_DateTime_TypeInfo, v18);
    sub_1B4CF90(&int_TypeInfo, v19);
    sub_1B4CF90(&long_TypeInfo, v20);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v21);
    sub_1B4CF90(&NetworkManager_TypeInfo, v22);
    sub_1B4CF90(&object___TypeInfo, v23);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v24);
    sub_1B4CF90(&ServantStatusQuestBoardDraw_TypeInfo, v25);
    sub_1B4CF90(&Method_SingletonTemplate_QuestTree__get_Instance__, v26);
    sub_1B4CF90(&StringLiteral_14521/*"UNKNOWN_QUEST_NAME"*/, v27);
    sub_1B4CF90(&StringLiteral_1/*""*/, v28);
    byte_49B8727 = 1;
  }
  dateData = 0LL;
  entity = 0LL;
  if ( questReleaseClosedID < 1 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ClosedMessageMaster___);
  if ( !Master_object )
    goto LABEL_115;
  monitor = (System_String_o *)StringLiteral_1/*""*/;
  Master_object = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    questReleaseClosedID,
                    (const MethodInfo_319D9E8 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
  if ( (Master_object & 1) != 0 )
  {
    Master_object = (__int64)entity;
    if ( !entity )
      goto LABEL_115;
    monitor = (System_String_o *)entity[1].monitor;
    Master_object = ClosedMessageEntity__IsChangeDispClosedMessage((ClosedMessageEntity_o *)entity, 0LL);
    if ( !entity )
      goto LABEL_115;
    v35 = Master_object;
    Master_object = ClosedMessageEntity__IsChangeDispPositionLeft((ClosedMessageEntity_o *)entity, 0LL);
    if ( !entity )
      goto LABEL_115;
    monitor_high = HIDWORD(entity[2].monitor);
    v37 = Master_object;
  }
  else
  {
    monitor_high = 0;
    v37 = 0;
    v35 = 0;
  }
  if ( !questReleaseEntity )
    goto LABEL_115;
  switch ( questReleaseEntity->fields.type )
  {
    case 1:
      targetId = questReleaseEntity->fields.targetId;
      v41 = (System_String_o *)StringLiteral_1/*""*/;
      Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Master_object )
        goto LABEL_115;
      WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Master_object, targetId, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !Master_object )
        goto LABEL_115;
      v43 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              WarID_ByQuestID,
              (const MethodInfo_319D99C *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( v43 )
      {
        PrioredName = (Il2CppObject *)WarEntity__GetPrioredName((WarEntity_o *)v43, 0LL);
LABEL_16:
        v39 = System_String__Format(monitor, PrioredName, 0LL);
LABEL_42:
        monitor = v39;
      }
      else
      {
        monitor = v41;
      }
LABEL_43:
      if ( warEntity != 0LL && !v35 )
        v35 = WarEntity__IsChangeDispClosedMessage(warEntity, 0LL);
      if ( !questReleaseOverwriteEntity )
      {
        v70 = 0;
        if ( v35 )
          goto LABEL_47;
LABEL_53:
        Master_object = (__int64)this->fields.mTitleNameLb;
        if ( Master_object )
        {
          UILabel__set_text((UILabel_o *)Master_object, monitor, 0LL);
          Master_object = (__int64)this->fields.mAdvanceNoticeLb;
          if ( Master_object )
          {
            UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
            if ( Master_object )
            {
              UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              ServantStatusQuestBoardDraw__SetOverwriteCondText(this, questReleaseOverwriteEntity, v72);
              return;
            }
          }
        }
        goto LABEL_115;
      }
      v70 = !System_String__IsNullOrEmpty(questReleaseOverwriteEntity->fields.overlayClosedMessage, 0LL);
      if ( !v35 )
        goto LABEL_53;
LABEL_47:
      Master_object = (__int64)this->fields.mAdvanceNoticeObj;
      if ( !Master_object )
        goto LABEL_115;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
      mTitleNameLb = this->fields.mTitleNameLb;
      if ( entity )
      {
        Master_object = System_String__op_Inequality(
                          (System_String_o *)entity[2].klass,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL);
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
          Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14521/*"UNKNOWN_QUEST_NAME"*/, 0LL);
          klass = (Il2CppClass *)Master_object;
        }
        if ( !mTitleNameLb )
LABEL_115:
          sub_1B4D1EC(Master_object, klass);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14521/*"UNKNOWN_QUEST_NAME"*/, 0LL);
        if ( !mTitleNameLb )
          goto LABEL_115;
        klass = (Il2CppClass *)Master_object;
      }
      UILabel__set_text(mTitleNameLb, (System_String_o *)klass, 0LL);
      Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
        Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      }
      static_fields = *(struct ServantStatusQuestBoardDraw_StaticFields **)(Master_object + 184);
      v74 = 12LL;
      if ( !v70 )
        v74 = 8LL;
      v75 = *(int32_t *)((char *)&static_fields->TITLE_LABEL_BASE_WIDTH + v74);
      if ( v70 )
      {
        if ( !questReleaseOverwriteEntity )
          goto LABEL_115;
        leftIndent = questReleaseOverwriteEntity->fields.leftIndent;
      }
      else
      {
        leftIndent = 0;
      }
      v77 = (float)monitor_high;
      if ( (v37 & 1) != 0 )
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
        UIWidget__set_pivot((UIWidget_o *)Master_object, 3, 0LL);
        Master_object = (__int64)this->fields.mAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_115;
        Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
        if ( !Master_object )
          goto LABEL_115;
        v79 = 24.0;
        if ( !v70 )
          v79 = 0.0;
        v81 = 0;
        v80 = ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X + v77;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)Master_object,
          *(UnityEngine_Vector3_o *)(&v79 - 1),
          0LL);
        Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
        if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
          Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
        }
        if ( !this->fields.mOverwriteAdvanceNoticeLb )
          goto LABEL_115;
        v82 = *(float *)(*(_QWORD *)(Master_object + 184) + 16LL);
        UIWidget__set_pivot((UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb, 3, 0LL);
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_115;
        Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
        if ( !Master_object )
          goto LABEL_115;
        v83 = v82 + (float)leftIndent;
      }
      else
      {
        Master_object = (__int64)this->fields.mAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_115;
        UIWidget__set_pivot((UIWidget_o *)Master_object, 4, 0LL);
        Master_object = (__int64)this->fields.mAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_115;
        Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
        if ( !Master_object )
          goto LABEL_115;
        v84 = 24.0;
        if ( !v70 )
          v84 = 0.0;
        v86 = 0;
        v85 = v77 * 0.5;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)Master_object,
          *(UnityEngine_Vector3_o *)(&v84 - 1),
          0LL);
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_115;
        UIWidget__set_pivot((UIWidget_o *)Master_object, 4, 0LL);
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_115;
        Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
        if ( !Master_object )
          goto LABEL_115;
        v83 = (float)leftIndent * 0.5;
      }
      v87 = -26.0;
      v88 = 0;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)Master_object,
        *(UnityEngine_Vector3_o *)&v83,
        0LL);
      Master_object = (__int64)this->fields.mAdvanceNoticeLb;
      if ( !Master_object )
        goto LABEL_115;
      UIWidget__set_height((UIWidget_o *)Master_object, v75, 0LL);
      Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      mOverwriteAdvanceNoticeLb = (UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      if ( !mOverwriteAdvanceNoticeLb )
        goto LABEL_115;
      UIWidget__set_height(
        mOverwriteAdvanceNoticeLb,
        ServantStatusQuestBoardDraw_TypeInfo->static_fields->ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT,
        0LL);
      ServantStatusQuestBoardDraw___SetAdvanceNoticeText_g__CalculateLabel_54_0(
        this->fields.mAdvanceNoticeLb,
        monitor,
        v75,
        monitor_high,
        v90);
      if ( v70 )
      {
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
        if ( !Master_object )
          goto LABEL_115;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
        if ( !questReleaseOverwriteEntity )
          goto LABEL_115;
        overlayClosedMessage = questReleaseOverwriteEntity->fields.overlayClosedMessage;
        v93 = this->fields.mOverwriteAdvanceNoticeLb;
        if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
        v94 = v77 * 0.5;
        ServantStatusQuestBoardDraw___SetAdvanceNoticeText_g__CalculateLabel_54_0(
          v93,
          overlayClosedMessage,
          v75,
          leftIndent,
          v91);
      }
      else
      {
        v94 = 0.0;
      }
      mOverwriteAdvanceNoticeArrowObj = (UnityEngine_Object_o *)this->fields.mOverwriteAdvanceNoticeArrowObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(mOverwriteAdvanceNoticeArrowObj, 0LL, 0LL) )
      {
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeArrowObj;
        if ( Master_object )
        {
          Master_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Master_object, 0LL);
          if ( Master_object )
          {
            v107.fields.y = 0.0;
            v107.fields.z = 0.0;
            v107.fields.x = v94;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Master_object, v107, 0LL);
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
      PrioredName = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &value, v32, v33, v34);
      goto LABEL_16;
    case 0xC:
      if ( !questEntity )
        goto LABEL_115;
      OpenedAt = QuestEntity__getOpenedAt(questEntity, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      dateData = NetworkManager__getServerDateTime_39105304(OpenedAt, 0LL).fields._dateData;
      v45 = (System_Object_array *)sub_1B4D038(object___TypeInfo, 4LL);
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v103.fields._dateData = (uint64_t)&dateData;
      LODWORD(value) = System_DateTime__get_Month(v103, 0LL);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &value, v46, v47, v48);
      if ( !v45 )
        goto LABEL_115;
      v51 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1B4D0CC(Master_object, v45->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_117;
      }
      if ( !v45->max_length )
        goto LABEL_116;
      v45->m_Items[0] = v51;
      sub_1B4CF34((CGThumbnailListItem_o *)v45->m_Items, (int32_t)v51, v49, v50);
      v104.fields._dateData = (uint64_t)&dateData;
      Day = System_DateTime__get_Day(v104, 0LL);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Day, v52, v53, v54);
      v57 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1B4D0CC(Master_object, v45->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_117;
      }
      if ( v45->max_length <= 1 )
        goto LABEL_116;
      v45->m_Items[1] = v57;
      sub_1B4CF34((CGThumbnailListItem_o *)&v45->m_Items[1], (int32_t)v57, v55, v56);
      v105.fields._dateData = (uint64_t)&dateData;
      Hour = System_DateTime__get_Hour(v105, 0LL);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Hour, v58, v59, v60);
      v63 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1B4D0CC(Master_object, v45->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_117;
      }
      if ( v45->max_length <= 2 )
        goto LABEL_116;
      v45->m_Items[2] = v63;
      sub_1B4CF34((CGThumbnailListItem_o *)&v45->m_Items[2], (int32_t)v63, v61, v62);
      v106.fields._dateData = (uint64_t)&dateData;
      Minute = System_DateTime__get_Minute(v106, 0LL);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Minute, v64, v65, v66);
      v69 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1B4D0CC(Master_object, v45->obj.klass->_1.element_class);
        if ( !Master_object )
        {
LABEL_117:
          v96 = sub_1B4D210();
          sub_1B4D0B8(v96, 0LL);
        }
      }
      if ( v45->max_length <= 3 )
LABEL_116:
        sub_1B4D1F4(Master_object, klass);
      v45->m_Items[3] = v69;
      sub_1B4CF34((CGThumbnailListItem_o *)&v45->m_Items[3], (int32_t)v69, v67, v68);
      v39 = System_String__Format_61134896(monitor, v45, 0LL);
      goto LABEL_42;
    default:
      goto LABEL_43;
  }
}


void __fastcall ServantStatusQuestBoardDraw__SetDark(ServantStatusQuestBoardDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UIWidget_o *mLineSp; // x0
  UISprite_o *mcBaseP; // x20
  UILabel_o *mNoneLb; // x20
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct UnityEngine_GameObject_o **p_inputMessageObject; // x19
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_49B8723 & 1) == 0 )
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, method);
    sub_1B4CF90(&ServantStatusQuestBoardDraw_TypeInfo, v3);
    sub_1B4CF90(&StringLiteral_11657/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/, v4);
    sub_1B4CF90(&StringLiteral_1/*""*/, v5);
    byte_49B8723 = 1;
  }
  mLineSp = (UIWidget_o *)ServantStatusQuestBoardDraw_TypeInfo;
  mcBaseP = this->fields.mcBaseP;
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  if ( !mcBaseP )
    goto LABEL_27;
  UISprite__set_spriteName(mcBaseP, ServantStatusQuestBoardDraw_TypeInfo->static_fields->DARK_BOARD_SPRITE_NAME, 0LL);
  mLineSp = (UIWidget_o *)this->fields.mcBaseP;
  if ( !mLineSp )
    goto LABEL_27;
  UIWidget__set_width(mLineSp, ServantStatusQuestBoardDraw_TypeInfo->static_fields->DARK_BOARD_WIDTH, 0LL);
  mLineSp = (UIWidget_o *)this->fields.mcBaseP;
  if ( !mLineSp )
    goto LABEL_27;
  UIWidget__set_height(mLineSp, ServantStatusQuestBoardDraw_TypeInfo->static_fields->DARK_BOARD_HIGHT, 0LL);
  mLineSp = (UIWidget_o *)this->fields.mLineSp;
  if ( !mLineSp )
    goto LABEL_27;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLineSp, 0, 0LL);
  mLineSp = (UIWidget_o *)this->fields.mTitle2Sp;
  if ( !mLineSp )
    goto LABEL_27;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLineSp, 0, 0LL);
  mLineSp = (UIWidget_o *)this->fields.mTitleSp;
  if ( !mLineSp )
    goto LABEL_27;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLineSp, 0, 0LL);
  mLineSp = (UIWidget_o *)this->fields.mClearObj;
  if ( !mLineSp )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0LL);
  mLineSp = (UIWidget_o *)this->fields.mLinkObj;
  if ( !mLineSp )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0LL);
  mNoneLb = this->fields.mNoneLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  mLineSp = (UIWidget_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11657/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/, 0LL);
  if ( !mNoneLb )
    goto LABEL_27;
  UILabel__set_text(mNoneLb, (System_String_o *)mLineSp, 0LL);
  mLineSp = (UIWidget_o *)this->fields.mTitleNameLb;
  if ( !mLineSp )
    goto LABEL_27;
  UILabel__set_text((UILabel_o *)mLineSp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  mLineSp = (UIWidget_o *)this->fields.mTitleShortcutSp;
  if ( !mLineSp )
    goto LABEL_27;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLineSp, 0, 0LL);
  mLineSp = (UIWidget_o *)this->fields.mTitleShortcutLb;
  if ( !mLineSp )
    goto LABEL_27;
  UILabel__set_text((UILabel_o *)mLineSp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  ServantStatusQuestBoardDraw__ResetInfoTextList(this, v9);
  mLineSp = (UIWidget_o *)this->fields.mOptionInfoLb;
  if ( !mLineSp )
    goto LABEL_27;
  mLineSp = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mLineSp, 0LL);
  if ( !mLineSp )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0LL);
  this->fields.mRewardIconInfs = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.mRewardIconInfs, 0, v10, v11);
  mLineSp = (UIWidget_o *)this->fields.mRewardIcon;
  if ( !mLineSp
    || (mLineSp = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mLineSp, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0LL),
        (mLineSp = (UIWidget_o *)this->fields.mRewardObj) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0LL),
        (mLineSp = (UIWidget_o *)this->fields.mRewardGetSP) == 0LL)
    || (mLineSp = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mLineSp, 0LL)) == 0LL )
  {
LABEL_27:
    sub_1B4D1EC(mLineSp, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0LL);
  this->fields.inputMessageObject = 0LL;
  p_inputMessageObject = &this->fields.inputMessageObject;
  sub_1B4CF34((CGThumbnailListItem_o *)p_inputMessageObject, 0, v13, v14);
  *((_DWORD *)p_inputMessageObject + 2) = 0;
  p_inputMessageObject[2] = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)(p_inputMessageObject + 2), 0, v15, v16);
}


void __fastcall ServantStatusQuestBoardDraw__SetInfoTextAlpha(
        ServantStatusQuestBoardDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8
  BoardOptionTextWithIconComponent_o *mOptionInfoLb; // x0

  if ( (byte_49B872A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, method);
    byte_49B872A = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList && mInfoTextList->fields._size >= 2 )
  {
    mOptionInfoLb = this->fields.mOptionInfoLb;
    if ( !mOptionInfoLb )
      sub_1B4D1EC(0LL, method);
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
  __int64 v60; // x1
  __int64 v61; // x1
  __int64 v62; // x1
  __int64 v63; // x1
  __int64 v64; // x20
  __int64 Master_object; // x0
  __int64 giftIconId; // x1
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  bool v69; // w24
  int current; // w23
  QuestEntity_o *Mine; // x27
  const MethodInfo *v72; // x1
  bool v73; // w26
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  char v76; // w29
  const MethodInfo *v77; // x1
  int32_t id; // w8
  int32_t warId; // w21
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v81; // x21
  bool v82; // w8
  QuestReleaseEntity_o **v83; // x29
  int32_t closedMessageId; // w24
  Il2CppObject *v85; // x28
  bool HasStatus; // w23
  int32_t questPhase; // w21
  int32_t PhaseMax; // w8
  Il2CppObject *v89; // x0
  _BOOL4 v90; // w21
  _BOOL4 v91; // w26
  float v92; // s1
  float v93; // s0
  BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x23
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  struct UISprite_o *mcBaseP; // x8
  struct UIAtlas_o *mAtlas; // x1
  UISprite_o *v99; // x25
  System_Action_o *v100; // x25
  _BOOL4 v101; // w21
  UISprite_o *mTitleSp; // x28
  QuestEntity_o *v103; // x23
  int32_t v104; // w27
  int v105; // w24
  __int64 v106; // x9
  System_Action_o *v107; // x25
  Il2CppObject *v108; // x25
  System_Collections_Generic_List_object__o *v109; // x28
  ServantStatusQuestBoardDraw___c_c *v110; // x0
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *v111; // x28
  System_Func_object__int__o *_9__48_2; // x25
  Il2CppObject *v113; // x21
  struct ServantStatusQuestBoardDraw___c_StaticFields *static_fields; // x0
  int32_t v115; // w2
  const MethodInfo *v116; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v117; // x0
  Il2CppObject *v118; // x0
  int64_t v119; // x5
  const MethodInfo *v120; // x7
  QuestReleaseOverwriteEntity_o *v121; // x28
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *v122; // x21
  System_Func_object__bool__o *v123; // x25
  Il2CppObject *v124; // x0
  QuestReleaseEntity_o *v125; // x4
  ServantStatusQuestBoardManager_o *v126; // x29
  UILabel_o *v127; // x21
  System_String_o **v128; // x8
  LocalizationManager_c *v129; // x0
  System_String_o **v130; // x9
  System_String_o *v131; // x24
  const MethodInfo *v132; // x2
  struct UILabel_o *mTitleNameLb; // x21
  System_String_o *v134; // x1
  System_String_o *v135; // x21
  Il2CppObject *v136; // x24
  Il2CppObject *BattleName; // x0
  int32_t v138; // w21
  int32_t TITLE_LABEL_BASE_WIDTH; // w24
  bool v140; // cc
  UnityEngine_Transform_o *v141; // x21
  struct UILabel_o *v142; // x8
  float y; // s1
  float x; // s0
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *v146; // x8
  int32_t v147; // w2
  const MethodInfo *v148; // x3
  int32_t ServantId; // w21
  __int64 v150; // x24
  UILabel_o *mTitleShortcutLb; // x21
  Il2CppObject *v152; // x0
  __int64 v153; // x25
  __int64 v154; // x28
  ServantLimitImageMaster_o *v155; // x24
  const MethodInfo *v156; // x1
  __int64 endTime; // x24
  System_Collections_Generic_List_object__o *mInfoTextList; // x21
  System_String_o *v159; // x28
  QuestBoardInformationText_o *v160; // x25
  int32_t v161; // w2
  const MethodInfo *v162; // x3
  struct System_Object_array *items; // x8
  _QWORD *v164; // x9
  __int64 size; // x10
  Il2CppClass **v166; // x0
  int32_t v167; // w24
  int32_t v168; // w0
  int32_t v169; // w1
  struct System_Collections_Generic_List_QuestBoardInformationText__o *v170; // x21
  int32_t v171; // w2
  int v172; // w8
  int32_t v173; // w9
  bool v174; // w21
  int32_t v175; // w8
  int32_t v176; // w2
  const MethodInfo *v177; // x3
  bool v178; // w1
  int v179; // w8
  UnityEngine_Component_o *mServantLimitRewardObtainedSP; // x21
  char v181; // w21
  int32_t v182; // w2
  const MethodInfo *v183; // x3
  __int64 v184; // x8
  struct GiftEntity_array *v185; // x22
  int v186; // w9
  _DWORD *v187; // x8
  int v188; // w9
  int32_t v189; // w2
  int32_t v190; // w3
  const MethodInfo *v191; // [xsp+0h] [xbp-120h]
  WarEntity_o *warEntity; // [xsp+18h] [xbp-108h]
  int32_t limitCounta; // [xsp+24h] [xbp-FCh]
  int v194; // [xsp+28h] [xbp-F8h]
  int32_t phase; // [xsp+2Ch] [xbp-F4h]
  QuestBehaviorMaster_o *v196; // [xsp+30h] [xbp-F0h]
  bool v197; // [xsp+3Ch] [xbp-E4h]
  int64_t nowTime; // [xsp+40h] [xbp-E0h]
  struct UnityEngine_GameObject_o *v199; // [xsp+48h] [xbp-D8h]
  char v200; // [xsp+50h] [xbp-D0h]
  int32_t QuestType; // [xsp+54h] [xbp-CCh]
  ServantStatusQuestBoardManager_o *v202; // [xsp+58h] [xbp-C8h]
  _BOOL4 IsLimitCountSealQuest; // [xsp+60h] [xbp-C0h]
  _BOOL4 IsClear; // [xsp+64h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_int__o v205; // [xsp+68h] [xbp-B8h] BYREF
  bool isNotItemConsume; // [xsp+84h] [xbp-9Ch] BYREF
  int32_t fixedVal[2]; // [xsp+88h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v208; // [xsp+90h] [xbp-90h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+B0h] [xbp-70h] BYREF
  UserQuestEntity_o *entity; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v211; // 0:x0.16

  if ( (byte_49B8724 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, qinf);
    sub_1B4CF90(&AtlasManager_TypeInfo, v13);
    sub_1B4CF90(&CondType_TypeInfo, v14);
    sub_1B4CF90(&Method_DataManager_GetMasterData_GiftMaster___, v15);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestBehaviorMaster___, v17);
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestGroupMaster___, v18);
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v19);
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v20);
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantMaster___, v21);
    sub_1B4CF90(&Method_DataManager_GetMaster_UserQuestMaster___, v22);
    sub_1B4CF90(&DataManager_TypeInfo, v23);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v24);
    sub_1B4CF90(&Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity____75532504, v25);
    sub_1B4CF90(&Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity___, v26);
    sub_1B4CF90(&Method_System_Linq_Enumerable_OrderByDescending_QuestReleaseOverwriteEntity__int___, v27);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v28);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v29);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v30);
    sub_1B4CF90(&System_Func_QuestReleaseOverwriteEntity__int__TypeInfo, v31);
    sub_1B4CF90(&System_Func_QuestReleaseOverwriteEntity__bool__TypeInfo, v32);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v33);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__, v34);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__, v35);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__GetEnumerator__, v36);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v37);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, v38);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__, v39);
    sub_1B4CF90(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v40);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v41);
    sub_1B4CF90(&NetworkManager_TypeInfo, v42);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v43);
    sub_1B4CF90(&QuestBoardInformationText_TypeInfo, v44);
    sub_1B4CF90(&ServantStatusQuestBoardDraw_TypeInfo, v45);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v46);
    sub_1B4CF90(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v47);
    sub_1B4CF90(&Method_SingletonTemplate_QuestTree__get_Instance__, v48);
    sub_1B4CF90(&Method_ServantStatusQuestBoardDraw___c__SetItem_b__48_2__, v49);
    sub_1B4CF90(&Method_ServantStatusQuestBoardDraw___c__DisplayClass48_0__SetItem_b__0__, v50);
    sub_1B4CF90(&Method_ServantStatusQuestBoardDraw___c__DisplayClass48_0__SetItem_b__1__, v51);
    sub_1B4CF90(&Method_ServantStatusQuestBoardDraw___c__DisplayClass48_0__SetItem_b__3__, v52);
    sub_1B4CF90(&ServantStatusQuestBoardDraw___c__DisplayClass48_0_TypeInfo, v53);
    sub_1B4CF90(&ServantStatusQuestBoardDraw___c_TypeInfo, v54);
    sub_1B4CF90(&StringLiteral_13135/*"TIME_REST_QUEST_BOARD_QUEST"*/, v55);
    sub_1B4CF90(&StringLiteral_24692/*"{0}"*/, v56);
    sub_1B4CF90(&StringLiteral_11725/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE2"*/, v57);
    sub_1B4CF90(&StringLiteral_19870/*"icon_reward_limits_release"*/, v58);
    sub_1B4CF90(&StringLiteral_11727/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT2"*/, v59);
    sub_1B4CF90(&StringLiteral_11726/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/, v60);
    sub_1B4CF90(&StringLiteral_1/*""*/, v61);
    sub_1B4CF90(&StringLiteral_11724/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE"*/, v62);
    sub_1B4CF90(&StringLiteral_11681/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/, v63);
    byte_49B8724 = 1;
  }
  entityList = 0LL;
  entity = 0LL;
  memset(&v208, 0, sizeof(v208));
  *(_QWORD *)fixedVal = 0LL;
  isNotItemConsume = 0;
  v64 = sub_1B4D1DC(ServantStatusQuestBoardDraw___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v64, 0LL);
  if ( !v64 )
    goto LABEL_288;
  *(_QWORD *)(v64 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v64 + 16), (int32_t)this, v67, v68);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !qinf )
    goto LABEL_288;
  if ( !Master_object )
    goto LABEL_288;
  v199 = inputMessageObject;
  limitCounta = limitCount;
  v202 = questBoardManager;
  Master_object = (__int64)QuestGroupMaster__GetInterludeQuestIdList(
                             (QuestGroupMaster_o *)Master_object,
                             qinf->fields.questId,
                             0LL);
  if ( !Master_object )
    goto LABEL_288;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v205,
    (System_Collections_Generic_List_int__o *)Master_object,
    (const MethodInfo_3563C8C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v208 = v205;
  while ( 1 )
  {
    v69 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v208,
            (const MethodInfo_3304A70 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v69 )
      break;
    current = v208.fields._current;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsQuestClear_38126524(current, -1, 0, 0LL) )
      goto LABEL_16;
  }
  current = 0;
LABEL_16:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v208,
    (const MethodInfo_3304A6C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( !v202 )
    goto LABEL_288;
  nowTime = v202->fields.mListCreatedTime;
  Mine = MapControl_QuestInfo__GetMine(qinf, 0LL);
  QuestType = MapControl_QuestInfo__GetQuestType(qinf, 0LL);
  v73 = v69 || MapControl_QuestInfo__IsClear(qinf, 0LL);
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  Master_object = ServantStatusQuestBoardDraw__IsClose(qinf, v72);
  v76 = Master_object;
  if ( beforeQuestInfo )
  {
    IsClear = MapControl_QuestInfo__IsClear(beforeQuestInfo, 0LL);
    if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    Master_object = ServantStatusQuestBoardDraw__IsClose(beforeQuestInfo, v77);
    v194 = Master_object & 1;
    if ( !Mine )
      goto LABEL_288;
  }
  else
  {
    v194 = 0;
    IsClear = 1;
    if ( !Mine )
      goto LABEL_288;
  }
  id = Mine->fields.id;
  this->fields.qinf = qinf;
  this->fields.questId = id;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.qinf, (int32_t)qinf, v74, v75);
  warId = qinf->fields.warId;
  Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Master_object )
    goto LABEL_288;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Master_object, warId, 0LL);
  v81 = WarEntityByWarID;
  if ( WarEntityByWarID )
    v82 = !WarEntity__IsFolder(WarEntityByWarID, 0LL);
  else
    v82 = 0;
  *(_BYTE *)(v64 + 40) = v82;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_object )
    goto LABEL_288;
  v200 = v76;
  IsLimitCountSealQuest = ServantLimitImageMaster__IsLimitCountSealQuest(
                            (ServantLimitImageMaster_o *)Master_object,
                            this->fields.questId,
                            0LL);
  Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Master_object )
    goto LABEL_288;
  v83 = (QuestReleaseEntity_o **)(v64 + 48);
  clsQuestCheck__mfQuestReleaseCheckGetEntityByQuestID(
    (clsQuestCheck_o *)Master_object,
    Mine->fields.id,
    (QuestReleaseEntity_o **)(v64 + 48),
    qinf,
    0LL);
  if ( *(_QWORD *)(v64 + 48) )
    closedMessageId = (*v83)->fields.closedMessageId;
  else
    closedMessageId = 0;
  warEntity = v81;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v85 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49B57A5 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, giftIconId);
    byte_49B57A5 = 1;
  }
  Master_object = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (__int64)NetworkManager_TypeInfo;
  }
  if ( current < 1 )
  {
    if ( !v85 )
      goto LABEL_288;
    current = this->fields.questId;
  }
  else if ( !v85 )
  {
    goto LABEL_288;
  }
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)v85,
    &entity,
    *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL),
    current,
    0LL);
  if ( entity )
    HasStatus = UserQuestEntity__HasStatus(entity, 4, 0LL);
  else
    HasStatus = 0;
  questPhase = qinf->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(qinf, 0LL);
  if ( questPhase + 1 < PhaseMax )
    PhaseMax = questPhase + 1;
  phase = PhaseMax;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v89 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  v196 = (QuestBehaviorMaster_o *)v89;
  v90 = !v73 && IsClear;
  if ( v73 )
  {
    v91 = 1;
LABEL_70:
    v92 = 1.0;
    v93 = 0.5;
    v199 = 0LL;
    goto LABEL_71;
  }
  if ( v89 )
  {
    if ( QuestBehaviorMaster__IsOpenQuestBehaviorCond((QuestBehaviorMaster_o *)v89, this->fields.questId, phase, 9, 0LL) )
    {
      v200 = 0;
      closedMessageId = 0;
      HasStatus = 0;
      v91 = 1;
      IsClear = v90;
      goto LABEL_70;
    }
    IsClear = v90;
  }
  v91 = 0;
  if ( (v200 & 1) != 0 )
  {
    v200 = 1;
    goto LABEL_70;
  }
  v93 = 1.0;
  v200 = 0;
  v92 = 1.0;
LABEL_71:
  *(float *)(v64 + 24) = v93;
  *(float *)(v64 + 28) = v93;
  *(float *)(v64 + 32) = v93;
  *(float *)(v64 + 36) = v92;
  Master_object = (__int64)this->fields.mTitleObj;
  v197 = HasStatus;
  if ( !Master_object )
    goto LABEL_288;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  Master_object = (__int64)this->fields.mOptionInfoLb;
  if ( !Master_object )
    goto LABEL_288;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_288;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  Master_object = (__int64)this->fields.mRewardObj;
  if ( !Master_object )
    goto LABEL_288;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  Master_object = (__int64)this->fields.mAdvanceNoticeObj;
  if ( !Master_object )
    goto LABEL_288;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
  if ( !Master_object )
    goto LABEL_288;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  Master_object = (__int64)this->fields.mCondObject;
  if ( !Master_object )
    goto LABEL_288;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  Master_object = (__int64)this->fields.mServantLimitRewardObtainedSP;
  if ( !Master_object )
    goto LABEL_288;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_288;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  mcBaseP = this->fields.mcBaseP;
  if ( !mcBaseP )
    goto LABEL_288;
  mAtlas = mcBaseP->fields.mAtlas;
  this->fields.basePanelAtlas = mAtlas;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.basePanelAtlas, (int32_t)mAtlas, v95, v96);
  Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
  v99 = this->fields.mcBaseP;
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  if ( !v99 )
    goto LABEL_288;
  UISprite__set_spriteName(v99, ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME, 0LL);
  if ( IsLimitCountSealQuest )
  {
    v100 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      v100,
      (Il2CppObject *)v64,
      Method_ServantStatusQuestBoardDraw___c__DisplayClass48_0__SetItem_b__0__,
      0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadEventUI(v100, 1, 0LL);
  }
  Master_object = (__int64)this->fields.mcBaseP;
  if ( !Master_object )
    goto LABEL_288;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_object + 840LL))(
    Master_object,
    *(_QWORD *)(*(_QWORD *)Master_object + 848LL));
  Master_object = (__int64)this->fields.mcBaseP;
  if ( !Master_object )
    goto LABEL_288;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v64 + 24), 0LL);
  Master_object = (__int64)this->fields.mLineSp;
  if ( !Master_object )
    goto LABEL_288;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0LL);
  Master_object = (__int64)this->fields.mLineSp;
  if ( !Master_object )
    goto LABEL_288;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v64 + 24), 0LL);
  Master_object = (__int64)this->fields.mTitle2Sp;
  v101 = !v91 && IsClear;
  if ( !Master_object )
    goto LABEL_288;
  if ( v91 )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 0, 0LL);
    Master_object = (__int64)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_288;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 0, 0LL);
    Master_object = (__int64)this->fields.mLinkObj;
    if ( !Master_object )
      goto LABEL_288;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0LL);
    Master_object = (__int64)this->fields.mTitle2Sp;
    if ( !Master_object )
      goto LABEL_288;
    UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v64 + 24), 0LL);
    Master_object = (__int64)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_288;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0LL);
    Master_object = (__int64)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_288;
    UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0LL);
    mTitleSp = this->fields.mTitleSp;
    if ( QuestType == 3 )
    {
      v103 = Mine;
      v104 = closedMessageId;
      Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      v105 = *(unsigned __int8 *)(v64 + 40);
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      if ( !mTitleSp )
        goto LABEL_288;
      v106 = 56LL;
      if ( !v105 )
        v106 = 48LL;
      UISprite__set_spriteName(
        mTitleSp,
        *(System_String_o **)((char *)&ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH + v106),
        0LL);
      if ( IsLimitCountSealQuest )
      {
        v107 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
        System_Action___ctor(
          v107,
          (Il2CppObject *)v64,
          Method_ServantStatusQuestBoardDraw___c__DisplayClass48_0__SetItem_b__1__,
          0LL);
        closedMessageId = v104;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__LoadEventUI(v107, 1, 0LL);
      }
      else
      {
        closedMessageId = v104;
      }
      Mine = v103;
      p_mOptionInfoLb = &this->fields.mOptionInfoLb;
    }
    else
    {
      Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      if ( !mTitleSp )
        goto LABEL_288;
      UISprite__set_spriteName(
        mTitleSp,
        ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_SPRITE_NAME_RAINFORCEMENT,
        0LL);
      v101 = IsClear;
    }
    Master_object = (__int64)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_288;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_object + 840LL))(
      Master_object,
      *(_QWORD *)(*(_QWORD *)Master_object + 848LL));
    Master_object = (__int64)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_288;
    UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v64 + 24), 0LL);
    Master_object = (__int64)this->fields.mLinkObj;
    if ( !Master_object )
      goto LABEL_288;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
    Master_object = (__int64)this->fields.mLinkObj;
    if ( !Master_object )
      goto LABEL_288;
    Master_object = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Master_object, 0LL);
    if ( !Master_object )
      goto LABEL_288;
    Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)Master_object,
                               (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !Master_object )
      goto LABEL_288;
    UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v64 + 24), 0LL);
    IsClear = v101;
  }
  Master_object = (__int64)this->fields.mClearObj;
  if ( !Master_object )
    goto LABEL_288;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v91, 0LL);
  Master_object = (__int64)this->fields.mNoneLb;
  if ( !Master_object )
    goto LABEL_288;
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v108 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  v109 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v109,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v109;
  if ( !v108 )
    goto LABEL_288;
  QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
    (QuestReleaseOverwriteMaster_o *)v108,
    &entityList,
    this->fields.questId,
    nowTime,
    0LL);
  v110 = ServantStatusQuestBoardDraw___c_TypeInfo;
  v111 = entityList;
  if ( !ServantStatusQuestBoardDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw___c_TypeInfo);
    v110 = ServantStatusQuestBoardDraw___c_TypeInfo;
  }
  _9__48_2 = (System_Func_object__int__o *)v110->static_fields->__9__48_2;
  if ( !_9__48_2 )
  {
    if ( !v110->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v110);
      v110 = ServantStatusQuestBoardDraw___c_TypeInfo;
    }
    v113 = (Il2CppObject *)v110->static_fields->__9;
    _9__48_2 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_QuestReleaseOverwriteEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__48_2, v113, Method_ServantStatusQuestBoardDraw___c__SetItem_b__48_2__, 0LL);
    static_fields = ServantStatusQuestBoardDraw___c_TypeInfo->static_fields;
    static_fields->__9__48_2 = (struct System_Func_QuestReleaseOverwriteEntity__int__o *)_9__48_2;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__48_2, (int32_t)_9__48_2, v115, v116);
    v83 = (QuestReleaseEntity_o **)(v64 + 48);
  }
  v117 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v111,
                                                                (System_Func_TSource__TKey__o *)_9__48_2,
                                                                (const MethodInfo_2F2E09C *)Method_System_Linq_Enumerable_OrderByDescending_QuestReleaseOverwriteEntity__int___);
  v118 = System_Linq_Enumerable__FirstOrDefault_object_(
           v117,
           (const MethodInfo_2F26C18 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity___);
  v121 = (QuestReleaseOverwriteEntity_o *)v118;
  if ( *v83 )
  {
    if ( v118 )
    {
      v122 = entityList;
      v123 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_QuestReleaseOverwriteEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v123,
        (Il2CppObject *)v64,
        Method_ServantStatusQuestBoardDraw___c__DisplayClass48_0__SetItem_b__3__,
        0LL);
      v124 = System_Linq_Enumerable__FirstOrDefault_object__49446844(
               (System_Collections_Generic_IEnumerable_TSource__o *)v122,
               (System_Func_TSource__bool__o *)v123,
               (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity____75532504);
      if ( v124 )
        v121 = (QuestReleaseOverwriteEntity_o *)v124;
    }
  }
  if ( v91 || IsClear )
  {
    v125 = *v83;
    if ( closedMessageId < 1 )
    {
      v126 = v202;
      if ( v125 && v125->fields.type == 8 )
      {
        mTitleNameLb = this->fields.mTitleNameLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11681/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/, 0LL);
        if ( !mTitleNameLb )
          goto LABEL_288;
        v134 = (System_String_o *)Master_object;
        Master_object = (__int64)mTitleNameLb;
      }
      else
      {
        Master_object = (__int64)QuestEntity__getQuestName(Mine, 0LL);
        if ( !Master_object )
          goto LABEL_288;
        v135 = (System_String_o *)Master_object;
        if ( System_String__Contains((System_String_o *)Master_object, (System_String_o *)StringLiteral_24692/*"{0}"*/, 0LL) )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v136 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantMaster___);
          Master_object = QuestEntity__getServantId(Mine, 0LL);
          if ( !v136 )
            goto LABEL_288;
          Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)v136,
                                     Master_object,
                                     (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Master_object )
            goto LABEL_288;
          BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Master_object, 0, -1, 0LL);
          v135 = System_String__Format(v135, BattleName, 0LL);
        }
        Master_object = (__int64)this->fields.mTitleNameLb;
        if ( !Master_object )
          goto LABEL_288;
        v134 = v135;
      }
      UILabel__set_text((UILabel_o *)Master_object, v134, 0LL);
    }
    else
    {
      ServantStatusQuestBoardDraw__SetAdvanceNoticeText(this, closedMessageId, warEntity, Mine, v125, v119, v121, v120);
      v126 = v202;
    }
  }
  else
  {
    v127 = this->fields.mTitleNameLb;
    if ( QuestType == 3 )
    {
      v128 = (System_String_o **)&StringLiteral_11724/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE"*/;
      v129 = LocalizationManager_TypeInfo;
      v130 = (System_String_o **)&StringLiteral_11725/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE2"*/;
    }
    else
    {
      v128 = (System_String_o **)&StringLiteral_11726/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/;
      v129 = LocalizationManager_TypeInfo;
      v130 = (System_String_o **)&StringLiteral_11727/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT2"*/;
    }
    v126 = v202;
    if ( v194 )
      v128 = v130;
    v131 = *v128;
    if ( !v129->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v129);
    Master_object = (__int64)LocalizationManager__Get(v131, 0LL);
    if ( !v127 )
      goto LABEL_288;
    UILabel__set_text(v127, (System_String_o *)Master_object, 0LL);
    if ( v121 )
      ServantStatusQuestBoardDraw__SetOverwriteCondText(this, v121, v132);
  }
  Master_object = (__int64)this->fields.mTitleNameLb;
  if ( !Master_object )
    goto LABEL_288;
  v138 = *(_DWORD *)(Master_object + 168);
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    Master_object = (__int64)this->fields.mTitleNameLb;
    if ( !Master_object )
      goto LABEL_288;
  }
  TITLE_LABEL_BASE_WIDTH = ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH;
  Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
  v140 = v138 <= TITLE_LABEL_BASE_WIDTH;
  v141 = (UnityEngine_Transform_o *)Master_object;
  if ( v140 )
  {
    if ( !byte_49B5366 )
    {
      Master_object = sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, giftIconId);
      byte_49B5366 = 1;
    }
    if ( !v141 )
      goto LABEL_288;
    v146 = UnityEngine_Vector3_TypeInfo->static_fields;
    y = v146->oneVector.fields.y;
    z = v146->oneVector.fields.z;
    x = v146->oneVector.fields.x;
  }
  else
  {
    Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
    if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    v142 = this->fields.mTitleNameLb;
    if ( !v142 || !v141 )
      goto LABEL_288;
    y = 1.0;
    x = (float)ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH / (float)v142->fields.mWidth;
    z = 1.0;
  }
  UnityEngine_Transform__set_localScale(v141, *(UnityEngine_Vector3_o *)&x, 0LL);
  Master_object = (__int64)this->fields.mTitleNameLb;
  if ( !Master_object )
    goto LABEL_288;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v64 + 24), 0LL);
  this->fields.inputMessageObject = v199;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.inputMessageObject, (int32_t)v199, v147, v148);
  if ( QuestType != 3 )
  {
    Master_object = (__int64)this->fields.mTitleShortcutSp;
    if ( !Master_object )
      goto LABEL_288;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0LL);
    Master_object = (__int64)this->fields.mTitleShortcutSp;
    if ( !Master_object )
      goto LABEL_288;
    UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v64 + 24), 0LL);
    Master_object = (__int64)this->fields.mTitleShortcutLb;
    if ( !Master_object )
      goto LABEL_288;
    goto LABEL_204;
  }
  ServantId = QuestEntity__getServantId(Mine, 0LL);
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_288;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Master_object )
    goto LABEL_288;
  Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             ServantId,
                             (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.mTitleShortcutSp )
    goto LABEL_288;
  v150 = Master_object;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mTitleShortcutSp, 0, 0LL);
  mTitleShortcutLb = this->fields.mTitleShortcutLb;
  if ( !v150 )
  {
    if ( !mTitleShortcutLb )
      goto LABEL_288;
    Master_object = (__int64)this->fields.mTitleShortcutLb;
LABEL_204:
    UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    goto LABEL_205;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v152 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v154 = *(_QWORD *)(v150 + 16);
  v153 = *(_QWORD *)(v150 + 24);
  v155 = (ServantLimitImageMaster_o *)v152;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v211.fields.currentCryptoKey = v154;
  *(_QWORD *)&v211.fields.fakeValue = v153;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v211, 0LL);
  if ( !v155 )
    goto LABEL_288;
  Master_object = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                             v155,
                             Master_object,
                             limitCounta,
                             0,
                             0LL);
  if ( !mTitleShortcutLb )
    goto LABEL_288;
  UILabel__set_text(mTitleShortcutLb, (System_String_o *)Master_object, 0LL);
  Master_object = (__int64)this->fields.mTitleShortcutLb;
  if ( !Master_object )
    goto LABEL_288;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v64 + 24), 0LL);
LABEL_205:
  ServantStatusQuestBoardDraw__ResetInfoTextList(this, v156);
  if ( v91 )
    goto LABEL_224;
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  isNotItemConsume = 0;
  endTime = qinf->fields.endTime;
  if ( endTime >= 1 && !QuestEntity__HasFlag(Mine, 32LL, 0LL) )
  {
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v159 = LocalizationManager__Get((System_String_o *)StringLiteral_13135/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
    v160 = (QuestBoardInformationText_o *)sub_1B4D1DC(QuestBoardInformationText_TypeInfo);
    QuestBoardInformationText___ctor(v160, v159, endTime, 0, 1, 0LL, 0LL);
    if ( !mInfoTextList )
      goto LABEL_288;
    items = mInfoTextList->fields._items;
    v164 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
    ++mInfoTextList->fields._version;
    if ( !items )
      goto LABEL_288;
    size = mInfoTextList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        mInfoTextList,
        (Il2CppObject *)v160,
        *(const MethodInfo_35801DC **)(*(_QWORD *)(v164[4] + 192LL) + 112LL));
    }
    else
    {
      v166 = &items->obj.klass + size;
      mInfoTextList->fields._size = size + 1;
      v166[4] = (Il2CppClass *)v160;
      sub_1B4CF34((CGThumbnailListItem_o *)(v166 + 4), (int32_t)v160, v161, v162);
    }
  }
  v167 = qinf->fields.questPhase;
  v168 = MapControl_QuestInfo__GetPhaseMax(qinf, 0LL);
  v170 = this->fields.mInfoTextList;
  if ( v167 + 1 < v168 )
    v171 = v167 + 1;
  else
    v171 = v168;
  Master_object = (__int64)ServantStatusQuestBoardDraw__GetCampaignText(
                             this,
                             v169,
                             v171,
                             0,
                             v126,
                             &fixedVal[1],
                             fixedVal,
                             &isNotItemConsume,
                             v191);
  if ( !v170 )
    goto LABEL_288;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v170,
    (System_Collections_Generic_IEnumerable_T__o *)Master_object,
    (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  Master_object = (__int64)this->fields.mInfoTextList;
  if ( !Master_object )
    goto LABEL_288;
  v172 = *(_DWORD *)(Master_object + 24);
  if ( v172 < 1 )
  {
LABEL_224:
    v174 = 0;
  }
  else
  {
    Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)Master_object,
                               v126->fields.mAlphaAnimCnt % v172,
                               (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    if ( !Master_object )
      goto LABEL_288;
    QuestBoardInformationText__SetTime(
      (QuestBoardInformationText_o *)Master_object,
      p_mOptionInfoLb,
      &this->fields.mOptionInfoFrameSp,
      0LL);
    Master_object = (__int64)this->fields.mOptionInfoLb;
    if ( !Master_object )
      goto LABEL_288;
    BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Master_object, 1.0, 0LL);
    v173 = fixedVal[1];
    v174 = 1;
    qinf->fields.isNotItemConsume = isNotItemConsume;
    v175 = fixedVal[0];
    qinf->fields.costCalcVal = v173;
    qinf->fields._fixedCostVal_k__BackingField = v175;
  }
  Master_object = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_288;
  Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_288;
  Master_object = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_288;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_288;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v174, 0LL);
  Master_object = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_288;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_288;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v174, 0LL);
  this->fields.mRewardIconInfs = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.mRewardIconInfs, 0, v176, v177);
  Master_object = (__int64)this->fields.mRewardIcon;
  if ( !Master_object )
    goto LABEL_288;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_288;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  if ( (v200 & 1) != 0 && QuestEntity__HasFlag(Mine, 4096LL, 0LL) )
  {
    Master_object = (__int64)this->fields.mRewardIcon;
    if ( !Master_object )
      goto LABEL_288;
    LODWORD(giftIconId) = 99;
LABEL_239:
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)Master_object, giftIconId, 0LL);
    Master_object = (__int64)this->fields.mRewardIcon;
    if ( !Master_object )
      goto LABEL_288;
    Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
    if ( !Master_object )
      goto LABEL_288;
    v178 = 1;
    goto LABEL_242;
  }
  giftIconId = (unsigned int)Mine->fields.giftIconId;
  if ( (int)giftIconId >= 1 )
  {
    Master_object = (__int64)this->fields.mRewardIcon;
    if ( !Master_object )
      goto LABEL_288;
    goto LABEL_239;
  }
  if ( Mine->fields.giftId >= 1 )
  {
    Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_288;
    Master_object = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !Master_object )
      goto LABEL_288;
    Master_object = (__int64)GiftMaster__GetGiftListById((GiftMaster_o *)Master_object, Mine->fields.giftId, 0LL);
    if ( !Master_object )
      goto LABEL_288;
    v184 = *(_QWORD *)(Master_object + 24);
    v185 = (struct GiftEntity_array *)Master_object;
    if ( !v184 )
      goto LABEL_287;
    v186 = v126->fields.mAlphaAnimCnt % (int)v184;
    if ( v186 >= (unsigned int)v184 )
      sub_1B4D1F4(Master_object, giftIconId);
    v187 = *(_DWORD **)(Master_object + 8LL * v186 + 32);
    if ( v187 )
    {
      giftIconId = (unsigned int)v187[11];
      Master_object = (__int64)this->fields.mRewardIcon;
      v188 = v187[7];
      if ( (int)giftIconId < 1 )
      {
        if ( !Master_object )
          goto LABEL_288;
        v190 = v188 <= 1 ? -1 : v187[7];
        ItemIconComponent__SetGift_38682396((ItemIconComponent_o *)Master_object, v187[5], v187[6], v190, 0, 0LL);
      }
      else
      {
        if ( !Master_object )
          goto LABEL_288;
        v189 = v188 <= 1 ? -1 : v187[7];
        ItemIconComponent__SetItemImage_38684828((ItemIconComponent_o *)Master_object, giftIconId, v189, 0LL);
      }
      Master_object = (__int64)this->fields.mRewardIcon;
      if ( Master_object )
      {
        Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
        if ( Master_object )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
LABEL_287:
          this->fields.mRewardIconInfs = v185;
          sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.mRewardIconInfs, (int32_t)v185, v182, v183);
          goto LABEL_243;
        }
      }
    }
LABEL_288:
    sub_1B4D1EC(Master_object, giftIconId);
  }
  Master_object = (__int64)this->fields.mRewardObj;
  if ( !Master_object )
    goto LABEL_288;
  v178 = 0;
LABEL_242:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v178, 0LL);
LABEL_243:
  Master_object = (__int64)this->fields.mRewardObj;
  if ( !Master_object )
    goto LABEL_288;
  Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Master_object,
                             (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Master_object )
    goto LABEL_288;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v64 + 24), 0LL);
  Master_object = (__int64)this->fields.mRewardIcon;
  if ( !Master_object )
    goto LABEL_288;
  ItemIconComponent__SetColor((ItemIconComponent_o *)Master_object, *(UnityEngine_Color_o *)(v64 + 24), 0LL);
  Master_object = (__int64)v196;
  v179 = IsLimitCountSealQuest && v91;
  if ( !v196 || (v179 & 1) != 0 )
  {
    mServantLimitRewardObtainedSP = (UnityEngine_Component_o *)this->fields.mServantLimitRewardObtainedSP;
    if ( !v179 )
    {
LABEL_249:
      if ( !mServantLimitRewardObtainedSP )
        goto LABEL_288;
      Master_object = (__int64)UnityEngine_Component__get_gameObject(mServantLimitRewardObtainedSP, 0LL);
      if ( !Master_object )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
      v181 = 1;
      goto LABEL_260;
    }
  }
  else
  {
    Master_object = QuestBehaviorMaster__IsOpenQuestBehaviorCond(v196, this->fields.questId, phase, 10, 0LL);
    mServantLimitRewardObtainedSP = (UnityEngine_Component_o *)this->fields.mServantLimitRewardObtainedSP;
    if ( (Master_object & 1) == 0 )
      goto LABEL_249;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(
    (UISprite_o *)mServantLimitRewardObtainedSP,
    (System_String_o *)StringLiteral_19870/*"icon_reward_limits_release"*/,
    0LL);
  Master_object = (__int64)this->fields.mServantLimitRewardObtainedSP;
  if ( !Master_object )
    goto LABEL_288;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_288;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  Master_object = (__int64)this->fields.mServantLimitRewardObtainedSP;
  if ( !Master_object )
    goto LABEL_288;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_object + 840LL))(
    Master_object,
    *(_QWORD *)(*(_QWORD *)Master_object + 848LL));
  Master_object = (__int64)this->fields.mServantLimitRewardObtainedSP;
  if ( !Master_object )
    goto LABEL_288;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v64 + 24), 0LL);
  v181 = 0;
LABEL_260:
  Master_object = (__int64)this->fields.mRewardGetSP;
  if ( !Master_object )
    goto LABEL_288;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_288;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v91 & v181 & !v197, 0LL);
  Master_object = (__int64)this->fields.mRewardGetSP;
  if ( !Master_object )
    goto LABEL_288;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v64 + 24), 0LL);
}


void __fastcall ServantStatusQuestBoardDraw__SetOverwriteCondText(
        ServantStatusQuestBoardDraw_o *this,
        QuestReleaseOverwriteEntity_o *questReleaseOverwriteEntity,
        const MethodInfo *method)
{
  System_String_o *overlayClosedMessage; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *mCondObject; // x0
  UILabel_o *mCondChangeMessage; // x19

  if ( (byte_49B8728 & 1) == 0 )
  {
    sub_1B4CF90(&ServantStatusQuestBoardDraw_TypeInfo, questReleaseOverwriteEntity);
    byte_49B8728 = 1;
  }
  if ( questReleaseOverwriteEntity )
    overlayClosedMessage = questReleaseOverwriteEntity->fields.overlayClosedMessage;
  else
    overlayClosedMessage = 0LL;
  if ( !System_String__IsNullOrEmpty(overlayClosedMessage, 0LL) )
  {
    mCondObject = this->fields.mCondObject;
    if ( !mCondObject )
      goto LABEL_14;
    UnityEngine_GameObject__SetActive(mCondObject, 1, 0LL);
    if ( !questReleaseOverwriteEntity )
      goto LABEL_14;
    mCondObject = (UnityEngine_GameObject_o *)this->fields.mCondChangeMessage;
    if ( !mCondObject )
      goto LABEL_14;
    UILabel__set_text((UILabel_o *)mCondObject, questReleaseOverwriteEntity->fields.overlayClosedMessage, 0LL);
    mCondChangeMessage = this->fields.mCondChangeMessage;
    mCondObject = (UnityEngine_GameObject_o *)ServantStatusQuestBoardDraw_TypeInfo;
    if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    if ( !mCondChangeMessage )
LABEL_14:
      sub_1B4D1EC(mCondObject, v6);
    UILabel__SetCondensedScale(
      mCondChangeMessage,
      ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH,
      0,
      0LL);
  }
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
      sub_1B4D1EC(0LL, method);
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
  System_Collections_Generic_List_object__o *mInfoTextList; // x0

  if ( (byte_49B8726 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__, qinf);
    byte_49B8726 = 1;
  }
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !mInfoTextList
    || (mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       mInfoTextList,
                                                                       strIndex,
                                                                       (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__)) == 0LL )
  {
    sub_1B4D1EC(mInfoTextList, qinf);
  }
  QuestBoardInformationText__Update(
    (QuestBoardInformationText_o *)mInfoTextList,
    &this->fields.mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
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
    sub_1B4D1EC(this, 0LL);
  ServantStatusQuestBoardDraw__SetInfoTextAlpha(
    this,
    questBoardManager->fields.mAlphaAnimNow,
    (const MethodInfo *)questBoardManager);
  ServantStatusQuestBoardDraw__SetRewardIconAlpha(this, questBoardManager->fields.mAlphaAnimNow, v5);
}


void __fastcall ServantStatusQuestBoardDraw___SetAdvanceNoticeText_g__CalculateLabel_54_0(
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
  if ( (byte_49B8732 & 1) == 0 )
  {
    label = (UILabel_o *)sub_1B4CF90(&ServantStatusQuestBoardDraw_TypeInfo, message);
    byte_49B8732 = 1;
  }
  if ( !v8 )
    goto LABEL_11;
  UILabel__set_text(v8, message, 0LL);
  UILabel__AssumeNaturalSize(v8, 0LL);
  mHeight = v8->fields.mHeight;
  UIWidget__set_height((UIWidget_o *)v8, baseHeight, 0LL);
  v10 = ServantStatusQuestBoardDraw_TypeInfo;
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    v10 = ServantStatusQuestBoardDraw_TypeInfo;
  }
  UILabel__SetCondensedScale(v8, v10->static_fields->ADVANCE_NOTICE_BASE_WIDTH - indent, 0, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0LL);
  label = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0LL);
  if ( !label
    || (LODWORD(v12) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)label, 0LL),
        !transform) )
  {
LABEL_11:
    sub_1B4D1EC(label, message);
  }
  v13 = 1.0 - (float)((float)baseHeight / (float)mHeight);
  v14 = fminf(v13, 1.0);
  if ( v13 < 0.0 )
    v14 = 0.0;
  v15.fields.y = 1.0;
  v15.fields.x = v14 + v12;
  v15.fields.z = 1.0;
  UnityEngine_Transform__set_localScale(transform, v15, 0LL);
}


BoardMessageEntity_o *__fastcall ServantStatusQuestBoardDraw__findOverrideQuestMessage(
        ServantStatusQuestBoardDraw_o *this,
        BoardMessageEntity_array *boardMessageData,
        int32_t eventId,
        const MethodInfo *method)
{
  signed int max_length; // w8
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
        sub_1B4D1F4(this, boardMessageData);
      this = (ServantStatusQuestBoardDraw_o *)boardMessageData->m_Items[v5];
      if ( !this )
        break;
      if ( HIDWORD(this->fields.m_CancellationTokenSource) == 4 && LODWORD(this->fields.mcBaseP) == eventId )
        return (BoardMessageEntity_o *)this;
      if ( max_length == ++v5 )
        return 0LL;
    }
LABEL_12:
    sub_1B4D1EC(this, boardMessageData);
  }
  return 0LL;
}


void __fastcall ServantStatusQuestBoardDraw___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49B8733 & 1) == 0 )
  {
    sub_1B4CF90(&ServantStatusQuestBoardDraw___c_TypeInfo, v1);
    byte_49B8733 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(ServantStatusQuestBoardDraw___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantStatusQuestBoardDraw___c_TypeInfo->static_fields->__9 = (struct ServantStatusQuestBoardDraw___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)ServantStatusQuestBoardDraw___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ServantStatusQuestBoardDraw___c___ctor(
        ServantStatusQuestBoardDraw___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantStatusQuestBoardDraw___c___SetItem_b__48_2(
        ServantStatusQuestBoardDraw___c_o *this,
        QuestReleaseOverwriteEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B4D1EC(this, 0LL);
  return entity->fields.imagePriority;
}


void __fastcall ServantStatusQuestBoardDraw___c__DisplayClass48_0___ctor(
        ServantStatusQuestBoardDraw___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusQuestBoardDraw___c__DisplayClass48_0___SetItem_b__0(
        ServantStatusQuestBoardDraw___c__DisplayClass48_0_o *this,
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

  if ( (byte_49B8734 & 1) == 0 )
  {
    sub_1B4CF90(&AtlasManager_TypeInfo, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    sub_1B4CF90(&ServantStatusQuestBoardDraw_TypeInfo, v4);
    byte_49B8734 = 1;
  }
  _4__this = (UnityEngine_Object_o *)this->fields.__4__this;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (UISprite_o *)UnityEngine_Object__op_Equality(_4__this, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    v8 = this->fields.__4__this;
    if ( v8 )
    {
      mcBaseP = (UnityEngine_Object_o *)v8->fields.mcBaseP;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v6 = (UISprite_o *)UnityEngine_Object__op_Equality(mcBaseP, 0LL, 0LL);
      if ( ((unsigned __int8)v6 & 1) != 0 )
        return;
      v10 = this->fields.__4__this;
      if ( v10 )
      {
        v11 = v10->fields.mcBaseP;
        v12 = ServantStatusQuestBoardDraw_TypeInfo;
        if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
          v12 = ServantStatusQuestBoardDraw_TypeInfo;
        }
        BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME = v12->static_fields->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        v6 = (UISprite_o *)AtlasManager__SetEventUI(v11, BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME, 0LL);
        v14 = this->fields.__4__this;
        if ( v14 )
        {
          v15 = (char)v6;
          v6 = v14->fields.mcBaseP;
          if ( (v15 & 1) != 0 )
          {
            if ( !v6 )
              goto LABEL_30;
          }
          else
          {
            if ( !v6 )
              goto LABEL_30;
            UISprite__set_atlas(v6, v14->fields.basePanelAtlas, 0LL);
            v16 = this->fields.__4__this;
            if ( !v16 )
              goto LABEL_30;
            v6 = (UISprite_o *)ServantStatusQuestBoardDraw_TypeInfo;
            v17 = v16->fields.mcBaseP;
            if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
            if ( !v17 )
              goto LABEL_30;
            UISprite__set_spriteName(
              v17,
              ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME,
              0LL);
            v18 = this->fields.__4__this;
            if ( !v18 )
              goto LABEL_30;
            v6 = v18->fields.mcBaseP;
            if ( !v6 )
              goto LABEL_30;
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
LABEL_30:
    sub_1B4D1EC(v6, v7);
  }
}


void __fastcall ServantStatusQuestBoardDraw___c__DisplayClass48_0___SetItem_b__1(
        ServantStatusQuestBoardDraw___c__DisplayClass48_0_o *this,
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
  _BOOL4 isMap; // w21
  __int64 v19; // x9
  struct ServantStatusQuestBoardDraw_o *v20; // x8
  struct ServantStatusQuestBoardDraw_o *v21; // x8

  if ( (byte_49B8735 & 1) == 0 )
  {
    sub_1B4CF90(&AtlasManager_TypeInfo, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    sub_1B4CF90(&ServantStatusQuestBoardDraw_TypeInfo, v4);
    byte_49B8735 = 1;
  }
  _4__this = (UnityEngine_Object_o *)this->fields.__4__this;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (UISprite_o *)UnityEngine_Object__op_Equality(_4__this, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    v8 = this->fields.__4__this;
    if ( v8 )
    {
      mTitleSp = (UnityEngine_Object_o *)v8->fields.mTitleSp;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v6 = (UISprite_o *)UnityEngine_Object__op_Equality(mTitleSp, 0LL, 0LL);
      if ( ((unsigned __int8)v6 & 1) != 0 )
        return;
      v10 = this->fields.__4__this;
      if ( v10 )
      {
        v11 = v10->fields.mTitleSp;
        v12 = ServantStatusQuestBoardDraw_TypeInfo;
        if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
          v12 = ServantStatusQuestBoardDraw_TypeInfo;
        }
        TITLE_SPRITE_NAME_LIMIT_UNSEAL = v12->static_fields->TITLE_SPRITE_NAME_LIMIT_UNSEAL;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        v6 = (UISprite_o *)AtlasManager__SetEventUI(v11, TITLE_SPRITE_NAME_LIMIT_UNSEAL, 0LL);
        v14 = this->fields.__4__this;
        if ( v14 )
        {
          v15 = (char)v6;
          v6 = v14->fields.mTitleSp;
          if ( (v15 & 1) != 0 )
          {
            if ( !v6 )
              goto LABEL_32;
          }
          else
          {
            if ( !v6 )
              goto LABEL_32;
            UISprite__set_atlas(v6, v14->fields.basePanelAtlas, 0LL);
            v16 = this->fields.__4__this;
            if ( !v16 )
              goto LABEL_32;
            v6 = (UISprite_o *)ServantStatusQuestBoardDraw_TypeInfo;
            v17 = v16->fields.mTitleSp;
            isMap = this->fields.isMap;
            if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
            if ( !v17 )
              goto LABEL_32;
            v19 = 56LL;
            if ( !isMap )
              v19 = 48LL;
            UISprite__set_spriteName(
              v17,
              *(System_String_o **)((char *)&ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH
                                  + v19),
              0LL);
            v20 = this->fields.__4__this;
            if ( !v20 )
              goto LABEL_32;
            v6 = v20->fields.mTitleSp;
            if ( !v6 )
              goto LABEL_32;
          }
          v6 = (UISprite_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
                               v6,
                               v6->klass->vtable._34_get_minWidth.methodPtr);
          v21 = this->fields.__4__this;
          if ( v21 )
          {
            v6 = v21->fields.mTitleSp;
            if ( v6 )
            {
              UIWidget__set_color((UIWidget_o *)v6, this->fields.baseCol, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_32:
    sub_1B4D1EC(v6, v7);
  }
}


bool __fastcall ServantStatusQuestBoardDraw___c__DisplayClass48_0___SetItem_b__3(
        ServantStatusQuestBoardDraw___c__DisplayClass48_0_o *this,
        QuestReleaseOverwriteEntity_o *entity,
        const MethodInfo *method)
{
  struct QuestReleaseEntity_o *rQuestRlsNG; // x8

  if ( !entity || (rQuestRlsNG = this->fields.rQuestRlsNG) == 0LL )
    sub_1B4D1EC(this, entity);
  return entity->fields.imagePriority == rQuestRlsNG->fields.imagePriority;
}