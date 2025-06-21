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

  if ( (byte_4B19F80 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusQuestBoardDraw_TypeInfo, v1);
    sub_1BCAFF8(&StringLiteral_20189/*"img_conductor_03"*/, v4);
    sub_1BCAFF8(&StringLiteral_20190/*"img_conductor_04"*/, v5);
    sub_1BCAFF8(&StringLiteral_20188/*"img_conductor_02"*/, v6);
    sub_1BCAFF8(&StringLiteral_20326/*"img_questboard_1001"*/, v7);
    sub_1BCAFF8(&StringLiteral_20187/*"img_conductor_01"*/, v8);
    sub_1BCAFF8(&StringLiteral_20194/*"img_conductor_questboard"*/, v9);
    sub_1BCAFF8(&StringLiteral_20183/*"img_commonbg"*/, v10);
    byte_4B19F80 = 1;
  }
  static_fields = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->TITLE_LABEL_BASE_WIDTH = xmmword_BE2CC0;
  static_fields->ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X = -208.0;
  v12 = StringLiteral_20183/*"img_commonbg"*/;
  static_fields->DARK_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_20183/*"img_commonbg"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->DARK_BOARD_SPRITE_NAME, v12, v2, v3);
  v13 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  *(_QWORD *)&v13->DARK_BOARD_WIDTH = 0x7A000001F0LL;
  v14 = StringLiteral_20194/*"img_conductor_questboard"*/;
  v13->BASE_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_20194/*"img_conductor_questboard"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v13->BASE_BOARD_SPRITE_NAME, v14, v15, v16);
  v17 = StringLiteral_20188/*"img_conductor_02"*/;
  v18 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v18->TITLE_SPRITE_NAME_INTERLUDE = (struct System_String_o *)StringLiteral_20188/*"img_conductor_02"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v18->TITLE_SPRITE_NAME_INTERLUDE, v17, v19, v20);
  v21 = StringLiteral_20187/*"img_conductor_01"*/;
  v22 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v22->TITLE_SPRITE_NAME_INTERLUDE_MAP = (struct System_String_o *)StringLiteral_20187/*"img_conductor_01"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v22->TITLE_SPRITE_NAME_INTERLUDE_MAP, v21, v23, v24);
  v25 = StringLiteral_20189/*"img_conductor_03"*/;
  v26 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v26->TITLE_SPRITE_NAME_RAINFORCEMENT = (struct System_String_o *)StringLiteral_20189/*"img_conductor_03"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v26->TITLE_SPRITE_NAME_RAINFORCEMENT, v25, v27, v28);
  v29 = StringLiteral_20326/*"img_questboard_1001"*/;
  v30 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v30->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME = (struct System_String_o *)StringLiteral_20326/*"img_questboard_1001"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v30->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME, v29, v31, v32);
  v33 = StringLiteral_20190/*"img_conductor_04"*/;
  v34 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v34->TITLE_SPRITE_NAME_LIMIT_UNSEAL = (struct System_String_o *)StringLiteral_20190/*"img_conductor_04"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v34->TITLE_SPRITE_NAME_LIMIT_UNSEAL, v33, v35, v36);
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

  if ( (byte_4B19F78 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, qinf);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__, v6);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v7);
    byte_4B19F78 = 1;
  }
  if ( (byte_4B19F79 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, qinf);
    byte_4B19F79 = 1;
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
                                                                       (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
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
      sub_1BCB254(mInfoTextList, qinf);
    }
  }
  if ( (byte_4B19F7A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, qinf);
    byte_4B19F7A = 1;
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  }
  if ( !mInfoTextList || !mInfoTextList->fields._size )
    return;
  mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 mInfoTextList,
                                                                 0,
                                                                 (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
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
    sub_1BCB25C(this, questBoardManager, method);
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
      ItemIconComponent__SetItemImage_40110424((ItemIconComponent_o *)this, (int32_t)questBoardManager, v8, 0LL);
      return;
    }
LABEL_18:
    sub_1BCB254(this, questBoardManager);
  }
  if ( !this )
    goto LABEL_18;
  if ( num <= 1 )
    v9 = -1;
  else
    v9 = v6->fields.num;
  ItemIconComponent__SetGift_40107980((ItemIconComponent_o *)this, v6->fields.type, v6->fields.objectId, v9, 0, 0LL);
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

  if ( (byte_4B19F7D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestPhaseMaster___, questEntity);
    sub_1BCAFF8(&DataManager_TypeInfo, v17);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v18);
    sub_1BCAFF8(&QuestBoardInformationText_TypeInfo, v19);
    sub_1BCAFF8(&StringLiteral_24882/*"{0}"*/, v20);
    this = (ServantStatusQuestBoardDraw_o *)sub_1BCAFF8(&StringLiteral_13312/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, v21);
    byte_4B19F7D = 1;
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
  this = (ServantStatusQuestBoardDraw_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !questEntity || !this )
LABEL_40:
    sub_1BCB254(this, questEntity);
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
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_13312/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0LL);
  EventName = (Il2CppObject *)EventEntity__getEventName(eventEnt, 0LL);
  v29 = System_String__Format_62491716(v27, EventName, (Il2CppObject *)StringLiteral_24882/*"{0}"*/, 0LL);
  EndTime = EventEntity__GetEndTime(eventEnt, 0, 0LL);
  v24 = (QuestBoardInformationText_o *)sub_1BCB244(QuestBoardInformationText_TypeInfo);
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

  if ( (byte_4B19F7B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&quest_id);
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v16);
    sub_1BCAFF8(&DataManager_TypeInfo, v17);
    sub_1BCAFF8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__, v20);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__, v21);
    sub_1BCAFF8(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo, v22);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v23);
    sub_1BCAFF8(&QuestBoardInformationText_TypeInfo, v24);
    sub_1BCAFF8(&StringLiteral_24882/*"{0}"*/, v25);
    sub_1BCAFF8(&StringLiteral_113/*" "*/, v26);
    sub_1BCAFF8(&StringLiteral_13322/*"TIME_REST_STRING"*/, v27);
    byte_4B19F7B = 1;
  }
  entity = 0LL;
  v28 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
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
    (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
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
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !CampaignTextListByEventQuestMaster )
    goto LABEL_25;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)CampaignTextListByEventQuestMaster,
          &entity,
          v32->fields.eventId,
          (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
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
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_13322/*"TIME_REST_STRING"*/, 0LL);
  v39 = System_String__Concat_62490676(
          EventName,
          (System_String_o *)StringLiteral_113/*" "*/,
          v38,
          (System_String_o *)StringLiteral_24882/*"{0}"*/,
          0LL);
  v40 = (QuestBoardInformationText_o *)sub_1BCB244(QuestBoardInformationText_TypeInfo);
  QuestBoardInformationText___ctor(v40, v39, v36, 0, 1, 0LL, 0LL);
  items = v28->fields._items;
  v44 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
  ++v28->fields._version;
  if ( !items )
LABEL_25:
    sub_1BCB254(CampaignTextListByEventQuestMaster, v30);
  size = v28->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v28,
      (Il2CppObject *)v40,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v46 = &items->obj.klass + size;
    v28->fields._size = size + 1;
    v46[4] = (Il2CppClass *)v40;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v46 + 4), (int32_t)v40, v41, v42);
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
  __int64 v30; // x2
  int v31; // w8
  void *v32; // x28
  unsigned int v33; // w19
  EventEntity_o *v34; // x29
  const MethodInfo *v35; // x3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass *v39; // x1
  Il2CppClass **v40; // x0
  const MethodInfo *v42; // [xsp+8h] [xbp-78h]
  bool v43; // [xsp+14h] [xbp-6Ch]
  bool *v44; // [xsp+18h] [xbp-68h]

  if ( (byte_4B19F7C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventCampaignMaster___, *(_QWORD *)&questId);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventQuestMaster___, v16);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestMaster___, v17);
    sub_1BCAFF8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__, v20);
    sub_1BCAFF8(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo, v21);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4B19F7C = 1;
  }
  v23 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  v43 = isQuestNoneCleared;
  v26 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = DataManager__GetMasterData_object_(
               v26,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               questId,
               (const MethodInfo_32C7E00 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !questBoardManager )
    goto LABEL_22;
  mListCreatedTime = questBoardManager->fields.mListCreatedTime;
  v29 = (QuestEntity_o *)Instance;
  Instance = DataManager__GetMasterData_object_(
               v26,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventQuestMaster___);
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
  v31 = *((_DWORD *)Instance + 6);
  v32 = Instance;
  if ( v31 >= 1 )
  {
    v33 = 0;
    while ( 1 )
    {
      if ( v33 >= v31 )
        sub_1BCB25C(Instance, v25, v30);
      v34 = (EventEntity_o *)*((_QWORD *)v32 + (int)v33 + 4);
      if ( !v34 || !MasterData_object )
        break;
      Instance = EventCampaignMaster__getData((EventCampaignMaster_o *)MasterData_object, v34->fields.id, 0LL);
      if ( Instance )
      {
        Instance = ServantStatusQuestBoardDraw__CreateQuestBoardInformationText(
                     this,
                     v29,
                     v34,
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
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
          }
          else
          {
            v40 = &items->obj.klass + size;
            v23->fields._size = size + 1;
            v40[4] = v39;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v40 + 4), (int32_t)v39, v30, v35);
          }
        }
      }
      v31 = *((_DWORD *)v32 + 6);
      if ( (int)++v33 >= v31 )
        return (System_Collections_Generic_List_QuestBoardInformationText__o *)v23;
    }
LABEL_22:
    sub_1BCB254(Instance, v25);
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
  __int64 v34; // x2
  MapControl_WarInfo_o *v35; // x20
  __int64 v36; // x8
  __int64 v37; // x23
  __int64 v38; // x8
  int32_t v39; // w19
  int32_t v40; // w22
  int64_t v41; // x21
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4B19F71 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestReleaseMaster___, v3);
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v4);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v13);
    sub_1BCAFF8(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v14);
    sub_1BCAFF8(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v15);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v16);
    byte_4B19F71 = 1;
  }
  entityList = 0LL;
  memset(&v43, 0, sizeof(v43));
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  v23 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
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
    v24 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v24,
      (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    IsQuestReleaseAll = (MapControl_WarInfo_o *)entityList;
    if ( !entityList )
      goto LABEL_53;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v42,
      (System_Collections_Generic_List_object__o *)entityList,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    v43 = v42;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v43,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
    {
      if ( !v43.fields._current )
        sub_1BCB254(0LL, v25);
      v26 = (Il2CppObject *)QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
                              (QuestReleaseOverwriteEntity_o *)v43.fields._current,
                              0LL);
      v29 = v26;
      if ( !v24 )
        sub_1BCB254(v26, v26);
      items = v24->fields._items;
      v31 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
      ++v24->fields._version;
      if ( !items )
        sub_1BCB254(v26, v26);
      size = v24->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v24,
          v26,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v24->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v29;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v29, v27, v28);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v43,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    if ( !v24 )
      goto LABEL_53;
    IsQuestReleaseAll = (MapControl_WarInfo_o *)System_Collections_Generic_List_object___ToArray(
                                                  v24,
                                                  (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    v35 = IsQuestReleaseAll;
    if ( IsQuestReleaseAll )
      goto LABEL_37;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsQuestReleaseAll = (MapControl_WarInfo_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !IsQuestReleaseAll )
LABEL_53:
    sub_1BCB254(IsQuestReleaseAll, v18);
  IsQuestReleaseAll = (MapControl_WarInfo_o *)QuestReleaseMaster__getListByQuestID(
                                                (QuestReleaseMaster_o *)IsQuestReleaseAll,
                                                qinf->fields.questId,
                                                0LL);
  v35 = IsQuestReleaseAll;
LABEL_37:
  if ( !v35 )
    goto LABEL_53;
  v36 = *(_QWORD *)&v35->fields.status;
  if ( !v36 )
  {
    v19 = qinf->fields.dispType != 1;
    return v19 & 1;
  }
  if ( (int)v36 < 1 )
    goto LABEL_8;
  v37 = 0LL;
  do
  {
    if ( (unsigned int)v37 >= (unsigned int)v36 )
      sub_1BCB25C(IsQuestReleaseAll, v18, v34);
    v38 = *((_QWORD *)&v35->fields.mapInfoList + v37);
    if ( !v38 )
      goto LABEL_53;
    v40 = *(_DWORD *)(v38 + 20);
    v39 = *(_DWORD *)(v38 + 24);
    v41 = *(_QWORD *)(v38 + 32);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestReleaseAll = (MapControl_WarInfo_o *)CondType__IsOpen(v40, v39, v41, 0, 0LL, 0LL);
    if ( ((unsigned __int8)IsQuestReleaseAll & 1) == 0 )
      break;
    LODWORD(v36) = v35->fields.status;
    ++v37;
  }
  while ( (int)v37 < (int)v36 );
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

  if ( (byte_4B19F7A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, method);
    byte_4B19F7A = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  return !mInfoTextList || mInfoTextList->fields._size == 0;
}


bool __fastcall ServantStatusQuestBoardDraw__IsMultiInfoText(
        ServantStatusQuestBoardDraw_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8

  if ( (byte_4B19F79 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, method);
    byte_4B19F79 = 1;
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

  if ( (byte_4B19F7E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestRestrictionInfoMaster___, questEntity);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    byte_4B19F7E = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
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
        return v10 & ~QuestEntity__HasFlag_41618860(questEntity, 2LL, phase, 0LL) & 1;
      }
LABEL_17:
      sub_1BCB254(Master_object, v8);
    }
  }
  else if ( !QuestEntity__HasFlag_41618860(questEntity, 0x80000LL, phase, 0LL) )
  {
    HasFlag = QuestEntity__HasFlag_41618860(questEntity, 0x100000LL, phase, 0LL);
    goto LABEL_15;
  }
  v10 = 0;
  return v10 & ~QuestEntity__HasFlag_41618860(questEntity, 2LL, phase, 0LL) & 1;
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

  if ( (byte_4B19F7F & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    sub_1BCAFF8(&Method_ServantStatusQuestBoardDraw_OnClick__, v4);
    sub_1BCAFF8(&StringLiteral_9795/*"OnClickServantQuest"*/, v5);
    byte_4B19F7F = 1;
  }
  inputMessageObject = (UnityEngine_Object_o *)this->fields.inputMessageObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(inputMessageObject, 0LL, 0LL) || (questId = this->fields.questId) == 0 )
  {
    v14 = Method_ServantStatusQuestBoardDraw_OnClick__;
    if ( (*((_BYTE *)Method_ServantStatusQuestBoardDraw_OnClick__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1BCB010(Method_ServantStatusQuestBoardDraw_OnClick__);
    v15 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v14, v14[4]);
    OverwriteAssetSoundName__PlaySystemSe(v15, 2, 0, 0LL);
  }
  else
  {
    v11 = this->fields.inputMessageObject;
    v16 = questId;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v7, v8, v9);
    if ( !v11 )
      sub_1BCB254(v12, v13);
    UnityEngine_GameObject__SendMessage_70117864(v11, (System_String_o *)StringLiteral_9795/*"OnClickServantQuest"*/, v12, 0LL);
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

  if ( (byte_4B19F74 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestBoardInformationText__Clear__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__, v3);
    sub_1BCAFF8(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo, v4);
    byte_4B19F74 = 1;
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
    v10 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    p_mInfoTextList->klass = (CGThumbnailListItem_c *)v10;
    sub_1BCAF9C(p_mInfoTextList, (int32_t)v10, v11, v12);
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
  __int64 v49; // x2
  const MethodInfo *v50; // x3
  Il2CppObject *v51; // x27
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  const MethodInfo *v55; // x3
  Il2CppObject *v56; // x27
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  const MethodInfo *v60; // x3
  Il2CppObject *v61; // x27
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  const MethodInfo *v65; // x3
  Il2CppObject *v66; // x27
  _BOOL4 v67; // w26
  UILabel_o *mTitleNameLb; // x24
  const MethodInfo *v69; // x2
  struct ServantStatusQuestBoardDraw_StaticFields *static_fields; // x8
  __int64 v71; // x9
  int32_t v72; // w24
  int leftIndent; // w25
  float v74; // s8
  float ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X; // s9
  float v76; // s1
  float v77; // s0
  int v78; // s2
  float v79; // s9
  float v80; // s0
  float v81; // s1
  float v82; // s0
  int v83; // s2
  float v84; // s1
  int v85; // s2
  UIWidget_o *mOverwriteAdvanceNoticeLb; // x23
  const MethodInfo *v87; // x4
  const MethodInfo *v88; // x4
  System_String_o *overlayClosedMessage; // x20
  UILabel_o *v90; // x21
  float v91; // s8
  UnityEngine_Object_o *mOverwriteAdvanceNoticeArrowObj; // x20
  __int64 v93; // x0
  int32_t Minute; // [xsp+Ch] [xbp-94h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-90h] BYREF
  int32_t Day; // [xsp+14h] [xbp-8Ch] BYREF
  int64_t value; // [xsp+18h] [xbp-88h] BYREF
  uint64_t dateData; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-78h] BYREF
  System_DateTime_o v100; // 0:x0.8
  System_DateTime_o v101; // 0:x0.8
  System_DateTime_o v102; // 0:x0.8
  System_DateTime_o v103; // 0:x0.8
  UnityEngine_Vector3_o v104; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19F76 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ClosedMessageMaster___, *(_QWORD *)&questReleaseClosedID);
    sub_1BCAFF8(&Method_DataManager_GetMaster_WarMaster___, v14);
    sub_1BCAFF8(&DataManager_TypeInfo, v15);
    sub_1BCAFF8(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v16);
    sub_1BCAFF8(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v17);
    sub_1BCAFF8(&System_DateTime_TypeInfo, v18);
    sub_1BCAFF8(&int_TypeInfo, v19);
    sub_1BCAFF8(&long_TypeInfo, v20);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v21);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v22);
    sub_1BCAFF8(&object___TypeInfo, v23);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v24);
    sub_1BCAFF8(&ServantStatusQuestBoardDraw_TypeInfo, v25);
    sub_1BCAFF8(&Method_SingletonTemplate_QuestTree__get_Instance__, v26);
    sub_1BCAFF8(&StringLiteral_14704/*"UNKNOWN_QUEST_NAME"*/, v27);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v28);
    byte_4B19F76 = 1;
  }
  dateData = 0LL;
  entity = 0LL;
  if ( questReleaseClosedID < 1 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ClosedMessageMaster___);
  if ( !Master_object )
    goto LABEL_115;
  monitor = (System_String_o *)StringLiteral_1/*""*/;
  Master_object = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    questReleaseClosedID,
                    (const MethodInfo_32C7E4C *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
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
      Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Master_object )
        goto LABEL_115;
      WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Master_object, targetId, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !Master_object )
        goto LABEL_115;
      v43 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              WarID_ByQuestID,
              (const MethodInfo_32C7E00 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
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
        v67 = 0;
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
              ServantStatusQuestBoardDraw__SetOverwriteCondText(this, questReleaseOverwriteEntity, v69);
              return;
            }
          }
        }
        goto LABEL_115;
      }
      v67 = !System_String__IsNullOrEmpty(questReleaseOverwriteEntity->fields.overlayClosedMessage, 0LL);
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
          Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14704/*"UNKNOWN_QUEST_NAME"*/, 0LL);
          klass = (Il2CppClass *)Master_object;
        }
        if ( !mTitleNameLb )
LABEL_115:
          sub_1BCB254(Master_object, klass);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14704/*"UNKNOWN_QUEST_NAME"*/, 0LL);
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
      v71 = 12LL;
      if ( !v67 )
        v71 = 8LL;
      v72 = *(int32_t *)((char *)&static_fields->TITLE_LABEL_BASE_WIDTH + v71);
      if ( v67 )
      {
        if ( !questReleaseOverwriteEntity )
          goto LABEL_115;
        leftIndent = questReleaseOverwriteEntity->fields.leftIndent;
      }
      else
      {
        leftIndent = 0;
      }
      v74 = (float)monitor_high;
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
        v76 = 24.0;
        if ( !v67 )
          v76 = 0.0;
        v78 = 0;
        v77 = ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X + v74;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)Master_object,
          *(UnityEngine_Vector3_o *)(&v76 - 1),
          0LL);
        Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
        if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
          Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
        }
        if ( !this->fields.mOverwriteAdvanceNoticeLb )
          goto LABEL_115;
        v79 = *(float *)(*(_QWORD *)(Master_object + 184) + 16LL);
        UIWidget__set_pivot((UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb, 3, 0LL);
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_115;
        Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
        if ( !Master_object )
          goto LABEL_115;
        v80 = v79 + (float)leftIndent;
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
        v81 = 24.0;
        if ( !v67 )
          v81 = 0.0;
        v83 = 0;
        v82 = v74 * 0.5;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)Master_object,
          *(UnityEngine_Vector3_o *)(&v81 - 1),
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
        v80 = (float)leftIndent * 0.5;
      }
      v84 = -26.0;
      v85 = 0;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)Master_object,
        *(UnityEngine_Vector3_o *)&v80,
        0LL);
      Master_object = (__int64)this->fields.mAdvanceNoticeLb;
      if ( !Master_object )
        goto LABEL_115;
      UIWidget__set_height((UIWidget_o *)Master_object, v72, 0LL);
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
        v72,
        monitor_high,
        v87);
      if ( v67 )
      {
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
        if ( !Master_object )
          goto LABEL_115;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
        if ( !questReleaseOverwriteEntity )
          goto LABEL_115;
        overlayClosedMessage = questReleaseOverwriteEntity->fields.overlayClosedMessage;
        v90 = this->fields.mOverwriteAdvanceNoticeLb;
        if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
        v91 = v74 * 0.5;
        ServantStatusQuestBoardDraw___SetAdvanceNoticeText_g__CalculateLabel_54_0(
          v90,
          overlayClosedMessage,
          v72,
          leftIndent,
          v88);
      }
      else
      {
        v91 = 0.0;
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
            v104.fields.y = 0.0;
            v104.fields.z = 0.0;
            v104.fields.x = v91;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Master_object, v104, 0LL);
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
      dateData = NetworkManager__getServerDateTime_40543292(OpenedAt, 0LL).fields._dateData;
      v45 = (System_Object_array *)sub_1BCB0A0(object___TypeInfo, 4LL);
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v100.fields._dateData = (uint64_t)&dateData;
      LODWORD(value) = System_DateTime__get_Month(v100, 0LL);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &value, v46, v47, v48);
      if ( !v45 )
        goto LABEL_115;
      v51 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1BCB134(Master_object, v45->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_117;
      }
      if ( !v45->max_length )
        goto LABEL_116;
      v45->m_Items[0] = v51;
      sub_1BCAF9C((CGThumbnailListItem_o *)v45->m_Items, (int32_t)v51, v49, v50);
      v101.fields._dateData = (uint64_t)&dateData;
      Day = System_DateTime__get_Day(v101, 0LL);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Day, v52, v53, v54);
      v56 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1BCB134(Master_object, v45->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_117;
      }
      if ( v45->max_length <= 1 )
        goto LABEL_116;
      v45->m_Items[1] = v56;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v45->m_Items[1], (int32_t)v56, v49, v55);
      v102.fields._dateData = (uint64_t)&dateData;
      Hour = System_DateTime__get_Hour(v102, 0LL);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Hour, v57, v58, v59);
      v61 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1BCB134(Master_object, v45->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_117;
      }
      if ( v45->max_length <= 2 )
        goto LABEL_116;
      v45->m_Items[2] = v61;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v45->m_Items[2], (int32_t)v61, v49, v60);
      v103.fields._dateData = (uint64_t)&dateData;
      Minute = System_DateTime__get_Minute(v103, 0LL);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Minute, v62, v63, v64);
      v66 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1BCB134(Master_object, v45->obj.klass->_1.element_class);
        if ( !Master_object )
        {
LABEL_117:
          v93 = sub_1BCB278();
          sub_1BCB120(v93, 0LL);
        }
      }
      if ( v45->max_length <= 3 )
LABEL_116:
        sub_1BCB25C(Master_object, klass, v49);
      v45->m_Items[3] = v66;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v45->m_Items[3], (int32_t)v66, v49, v65);
      v39 = System_String__Format_62491852(monitor, v45, 0LL);
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

  if ( (byte_4B19F72 & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, method);
    sub_1BCAFF8(&ServantStatusQuestBoardDraw_TypeInfo, v3);
    sub_1BCAFF8(&StringLiteral_11822/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/, v4);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v5);
    byte_4B19F72 = 1;
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
  mLineSp = (UIWidget_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11822/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/, 0LL);
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
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mRewardIconInfs, 0, v10, v11);
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
    sub_1BCB254(mLineSp, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0LL);
  this->fields.inputMessageObject = 0LL;
  p_inputMessageObject = &this->fields.inputMessageObject;
  sub_1BCAF9C((CGThumbnailListItem_o *)p_inputMessageObject, 0, v13, v14);
  *((_DWORD *)p_inputMessageObject + 2) = 0;
  p_inputMessageObject[2] = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)(p_inputMessageObject + 2), 0, v15, v16);
}


void __fastcall ServantStatusQuestBoardDraw__SetInfoTextAlpha(
        ServantStatusQuestBoardDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8
  BoardOptionTextWithIconComponent_o *mOptionInfoLb; // x0

  if ( (byte_4B19F79 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, method);
    byte_4B19F79 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList && mInfoTextList->fields._size >= 2 )
  {
    mOptionInfoLb = this->fields.mOptionInfoLb;
    if ( !mOptionInfoLb )
      sub_1BCB254(0LL, method);
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
  __int64 v64; // x1
  __int64 v65; // x1
  __int64 v66; // x1
  __int64 v67; // x1
  __int64 v68; // x1
  __int64 v69; // x1
  __int64 Master_object; // x0
  __int64 giftIconId; // x1
  bool IsSvtCoinQuest; // w27
  bool v73; // w26
  int current; // w22
  QuestEntity_o *Mine; // x24
  const MethodInfo *v76; // x1
  bool v77; // w26
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  char v80; // w28
  const MethodInfo *v81; // x1
  _BOOL4 IsClear; // w29
  int32_t id; // w8
  int32_t warId; // w20
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v86; // x20
  _BOOL4 v87; // w25
  QuestReleaseEntity_o **v88; // x28
  Il2CppObject *v89; // x25
  bool HasStatus; // w22
  int32_t questPhase; // w20
  int32_t PhaseMax; // w8
  Il2CppObject *v93; // x0
  _BOOL4 v94; // w20
  int v95; // w23
  float v96; // s9
  _BOOL4 v97; // w26
  float v98; // s8
  BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x22
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  struct UISprite_o *mcBaseP; // x8
  struct UIAtlas_o *mAtlas; // x1
  UISprite_o *v104; // x20
  _BOOL4 v105; // w23
  UISprite_o *v106; // x20
  UISprite_o *v107; // x20
  _BOOL4 v108; // w25
  ServantStatusQuestBoardDraw_c *v109; // x0
  UISprite_o *v110; // x25
  System_String_o *BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME; // x20
  UISprite_o *v112; // x20
  _BOOL4 v113; // w20
  UISprite_o *mTitleSp; // x20
  _BOOL4 v115; // w29
  UISprite_o *v116; // x25
  uint32_t cctor_finished; // w8
  __int64 v118; // x9
  _BOOL4 v119; // w9
  UISprite_o *v120; // x25
  ServantStatusQuestBoardDraw_c *v121; // x0
  System_String_o *TITLE_SPRITE_NAME_LIMIT_UNSEAL; // x20
  bool v123; // w0
  UISprite_o *v124; // x20
  UISprite_o *v125; // x20
  UISprite_o *mTitle2Sp; // x20
  UISprite_o *mLineSp; // x20
  struct UISprite_o *v128; // x8
  int v129; // s0
  int v130; // s1
  int v131; // s2
  float v132; // s3
  Il2CppObject *v133; // x20
  System_Collections_Generic_List_object__o *v134; // x25
  ServantStatusQuestBoardDraw___c_c *v135; // x0
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *v136; // x25
  System_Func_object__int__o *_9__48_0; // x20
  Il2CppObject *v138; // x29
  struct ServantStatusQuestBoardDraw___c_StaticFields *static_fields; // x0
  int32_t v140; // w2
  const MethodInfo *v141; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v142; // x0
  Il2CppObject *v143; // x0
  int64_t v144; // x5
  const MethodInfo *v145; // x7
  QuestReleaseOverwriteEntity_o *v146; // x25
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *v147; // x20
  System_Func_object__bool__o *v148; // x29
  Il2CppObject *v149; // x0
  QuestReleaseEntity_o *v150; // x4
  ServantStatusQuestBoardManager_o *v151; // x28
  UILabel_o *v152; // x20
  System_String_o **v153; // x8
  LocalizationManager_c *v154; // x0
  System_String_o **v155; // x9
  System_String_o *v156; // x23
  const MethodInfo *v157; // x2
  struct UILabel_o *mTitleNameLb; // x20
  System_String_o *v159; // x1
  System_String_o *v160; // x20
  Il2CppObject *v161; // x23
  Il2CppObject *BattleName; // x0
  int32_t v163; // w20
  int32_t TITLE_LABEL_BASE_WIDTH; // w23
  bool v165; // cc
  UnityEngine_Transform_o *v166; // x20
  struct UILabel_o *v167; // x8
  UnityEngine_GameObject_o *v168; // x23
  float y; // s1
  float x; // s0
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *v172; // x8
  int v173; // s2
  int v174; // s1
  int v175; // s0
  float v176; // s3
  struct UnityEngine_GameObject_o *v177; // x20
  int32_t v178; // w2
  const MethodInfo *v179; // x3
  struct UnityEngine_GameObject_o *v180; // x1
  UISprite_o *mTitleShortcutSp; // x20
  struct UISprite_o *v182; // x8
  int32_t ServantId; // w20
  __int64 v184; // x23
  UILabel_o *mTitleShortcutLb; // x20
  Il2CppObject *v186; // x0
  __int64 v187; // x25
  __int64 v188; // x27
  ServantLimitImageMaster_o *v189; // x23
  const MethodInfo *v190; // x1
  const MethodInfo *v191; // x1
  __int64 endTime; // x23
  System_Collections_Generic_List_object__o *mInfoTextList; // x20
  System_String_o *v194; // x27
  QuestBoardInformationText_o *v195; // x25
  int32_t v196; // w2
  const MethodInfo *v197; // x3
  struct System_Object_array *items; // x8
  _QWORD *v199; // x9
  __int64 size; // x10
  Il2CppClass **v201; // x0
  int32_t v202; // w23
  int32_t v203; // w0
  int32_t v204; // w1
  struct System_Collections_Generic_List_QuestBoardInformationText__o *v205; // x20
  int32_t v206; // w2
  int v207; // w8
  int32_t v208; // w9
  bool v209; // w20
  int32_t v210; // w8
  int32_t v211; // w2
  const MethodInfo *v212; // x3
  bool v213; // w1
  int v214; // w8
  UnityEngine_Component_o *mServantLimitRewardObtainedSP; // x20
  char v216; // w20
  __int64 v217; // x2
  const MethodInfo *v218; // x3
  __int64 v219; // x8
  struct GiftEntity_array *v220; // x21
  int v221; // w9
  _DWORD *v222; // x8
  int v223; // w9
  int32_t v224; // w2
  int32_t v225; // w3
  const MethodInfo *v226; // [xsp+0h] [xbp-150h]
  _BOOL4 v227; // [xsp+1Ch] [xbp-134h]
  _BOOL4 v228; // [xsp+20h] [xbp-130h]
  __int64 v229; // [xsp+20h] [xbp-130h]
  int32_t limitCounta; // [xsp+2Ch] [xbp-124h]
  WarEntity_o *warEntity; // [xsp+30h] [xbp-120h]
  int v232; // [xsp+3Ch] [xbp-114h]
  int questReleaseClosedID; // [xsp+40h] [xbp-110h]
  int32_t phase; // [xsp+44h] [xbp-10Ch]
  QuestBehaviorMaster_o *v235; // [xsp+48h] [xbp-108h]
  bool v236; // [xsp+50h] [xbp-100h]
  int v237; // [xsp+54h] [xbp-FCh]
  int64_t nowTime; // [xsp+58h] [xbp-F8h]
  int32_t QuestType; // [xsp+6Ch] [xbp-E4h]
  _BOOL4 IsLimitCountSealQuest; // [xsp+70h] [xbp-E0h]
  char v242; // [xsp+74h] [xbp-DCh]
  ServantStatusQuestBoardManager_o *v243; // [xsp+78h] [xbp-D8h]
  Il2CppObject *object; // [xsp+80h] [xbp-D0h]
  System_Collections_Generic_List_Enumerator_int__o v245; // [xsp+88h] [xbp-C8h] BYREF
  bool isNotItemConsume; // [xsp+A4h] [xbp-ACh] BYREF
  int32_t fixedVal[2]; // [xsp+A8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v248; // [xsp+B0h] [xbp-A0h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+C8h] [xbp-88h] BYREF
  UserQuestEntity_o *v250; // [xsp+D0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+D8h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v252; // 0:x0.16
  UnityEngine_Vector3_o v253; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v254; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v255; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v256; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v257; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v258; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v259; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v260; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v261; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v262; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v263; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v264; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v265; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v266; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v267; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v268; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19F73 & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, qinf);
    sub_1BCAFF8(&CondType_TypeInfo, v12);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_GiftMaster___, v13);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestBehaviorMaster___, v15);
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestExtensionMaster___, v16);
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestGroupMaster___, v17);
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v18);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v19);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantMaster___, v20);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserQuestMaster___, v21);
    sub_1BCAFF8(&DataManager_TypeInfo, v22);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v23);
    sub_1BCAFF8(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__, v24);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity____76957016, v25);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity___, v26);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_OrderByDescending_QuestReleaseOverwriteEntity__int___, v27);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v28);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v29);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v30);
    sub_1BCAFF8(&System_Func_QuestReleaseOverwriteEntity__int__TypeInfo, v31);
    sub_1BCAFF8(&System_Func_QuestReleaseOverwriteEntity__bool__TypeInfo, v32);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v33);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__, v34);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__, v35);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v36);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v37);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, v38);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__, v39);
    sub_1BCAFF8(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v40);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v41);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v42);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v43);
    sub_1BCAFF8(&QuestBoardInformationText_TypeInfo, v44);
    sub_1BCAFF8(&ServantStatusQuestBoardDraw_TypeInfo, v45);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v46);
    sub_1BCAFF8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v47);
    sub_1BCAFF8(&Method_SingletonTemplate_QuestTree__get_Instance__, v48);
    sub_1BCAFF8(&Method_ServantStatusQuestBoardDraw___c__SetItem_b__48_0__, v49);
    sub_1BCAFF8(&Method_ServantStatusQuestBoardDraw___c__DisplayClass48_0__SetItem_b__1__, v50);
    sub_1BCAFF8(&ServantStatusQuestBoardDraw___c__DisplayClass48_0_TypeInfo, v51);
    sub_1BCAFF8(&ServantStatusQuestBoardDraw___c_TypeInfo, v52);
    sub_1BCAFF8(&StringLiteral_13315/*"TIME_REST_QUEST_BOARD_QUEST"*/, v53);
    sub_1BCAFF8(&StringLiteral_20192/*"img_conductor_line"*/, v54);
    sub_1BCAFF8(&StringLiteral_20195/*"img_conductor_questboard_paladin"*/, v55);
    sub_1BCAFF8(&StringLiteral_24882/*"{0}"*/, v56);
    sub_1BCAFF8(&StringLiteral_20197/*"img_conductor_quicklink_02"*/, v57);
    sub_1BCAFF8(&StringLiteral_11893/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE2"*/, v58);
    sub_1BCAFF8(&StringLiteral_20043/*"icon_reward_limits_release"*/, v59);
    sub_1BCAFF8(&StringLiteral_11895/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT2"*/, v60);
    sub_1BCAFF8(&StringLiteral_11894/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/, v61);
    sub_1BCAFF8(&StringLiteral_20191/*"img_conductor_05"*/, v62);
    sub_1BCAFF8(&StringLiteral_20196/*"img_conductor_quicklink"*/, v63);
    sub_1BCAFF8(&StringLiteral_20198/*"img_conductor_scq"*/, v64);
    sub_1BCAFF8(&StringLiteral_20193/*"img_conductor_line_white"*/, v65);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v66);
    sub_1BCAFF8(&StringLiteral_20199/*"img_conductor_sq"*/, v67);
    sub_1BCAFF8(&StringLiteral_11892/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE"*/, v68);
    sub_1BCAFF8(&StringLiteral_11847/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/, v69);
    byte_4B19F73 = 1;
  }
  v250 = 0LL;
  entity = 0LL;
  entityList = 0LL;
  memset(&v248, 0, sizeof(v248));
  *(_QWORD *)fixedVal = 0LL;
  isNotItemConsume = 0;
  object = (Il2CppObject *)sub_1BCB244(ServantStatusQuestBoardDraw___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor(object, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestExtensionMaster___);
  if ( !qinf || !Master_object )
    goto LABEL_382;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         qinf->fields.questId,
         (const MethodInfo_32C7E4C *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__) )
  {
    Master_object = (__int64)entity;
    if ( !entity )
      goto LABEL_382;
    IsSvtCoinQuest = QuestExtensionEntity__IsSvtCoinQuest((QuestExtensionEntity_o *)entity, 0LL);
  }
  else
  {
    IsSvtCoinQuest = 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Master_object )
    goto LABEL_382;
  limitCounta = limitCount;
  v243 = questBoardManager;
  Master_object = (__int64)QuestGroupMaster__GetInterludeQuestIdList(
                             (QuestGroupMaster_o *)Master_object,
                             qinf->fields.questId,
                             0LL);
  if ( !Master_object )
    goto LABEL_382;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v245,
    (System_Collections_Generic_List_int__o *)Master_object,
    (const MethodInfo_369D680 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v248 = v245;
  while ( 1 )
  {
    v73 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v248,
            (const MethodInfo_344B704 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v73 )
      break;
    current = v248.fields._current;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsQuestClear_39516796(current, -1, 0, 0LL) )
      goto LABEL_22;
  }
  current = 0;
LABEL_22:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v248,
    (const MethodInfo_344B700 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( !questBoardManager )
    goto LABEL_382;
  nowTime = questBoardManager->fields.mListCreatedTime;
  Mine = MapControl_QuestInfo__GetMine(qinf, 0LL);
  QuestType = MapControl_QuestInfo__GetQuestType(qinf, 0LL);
  v77 = v73 || MapControl_QuestInfo__IsClear(qinf, 0LL);
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  Master_object = ServantStatusQuestBoardDraw__IsClose(qinf, v76);
  v80 = Master_object;
  if ( beforeQuestInfo )
  {
    IsClear = MapControl_QuestInfo__IsClear(beforeQuestInfo, 0LL);
    if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    Master_object = ServantStatusQuestBoardDraw__IsClose(beforeQuestInfo, v81);
    v232 = Master_object & 1;
    if ( !Mine )
      goto LABEL_382;
  }
  else
  {
    v232 = 0;
    IsClear = 1;
    if ( !Mine )
      goto LABEL_382;
  }
  id = Mine->fields.id;
  this->fields.qinf = qinf;
  this->fields.questId = id;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.qinf, (int32_t)qinf, v78, v79);
  warId = qinf->fields.warId;
  Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Master_object )
    goto LABEL_382;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Master_object, warId, 0LL);
  v86 = WarEntityByWarID;
  if ( WarEntityByWarID )
    v87 = !WarEntity__IsFolder(WarEntityByWarID, 0LL);
  else
    v87 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_object )
    goto LABEL_382;
  IsLimitCountSealQuest = ServantLimitImageMaster__IsLimitCountSealQuest(
                            (ServantLimitImageMaster_o *)Master_object,
                            this->fields.questId,
                            0LL);
  Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !object )
    goto LABEL_382;
  v242 = v80;
  if ( !Master_object )
    goto LABEL_382;
  v88 = (QuestReleaseEntity_o **)&object[1];
  clsQuestCheck__mfQuestReleaseCheckGetEntityByQuestID(
    (clsQuestCheck_o *)Master_object,
    Mine->fields.id,
    (QuestReleaseEntity_o **)&object[1],
    qinf,
    0LL);
  if ( object[1].klass )
    questReleaseClosedID = (*v88)->fields.closedMessageId;
  else
    questReleaseClosedID = 0;
  v228 = v87;
  warEntity = v86;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v89 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, giftIconId);
    byte_4B165D1 = 1;
  }
  Master_object = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (__int64)NetworkManager_TypeInfo;
  }
  if ( current < 1 )
  {
    if ( !v89 )
      goto LABEL_382;
    current = this->fields.questId;
  }
  else if ( !v89 )
  {
    goto LABEL_382;
  }
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)v89,
    &v250,
    *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL),
    current,
    0LL);
  if ( v250 )
    HasStatus = UserQuestEntity__HasStatus(v250, 4, 0LL);
  else
    HasStatus = 0;
  questPhase = qinf->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(qinf, 0LL);
  if ( questPhase + 1 < PhaseMax )
    PhaseMax = questPhase + 1;
  phase = PhaseMax;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v93 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  v94 = !v77 && IsClear;
  v235 = (QuestBehaviorMaster_o *)v93;
  if ( v77 )
  {
    v95 = 1;
LABEL_77:
    v96 = 1.0;
    v97 = v95;
    if ( IsSvtCoinQuest )
      v98 = 1.0;
    else
      v98 = 0.5;
    v95 = 1;
    goto LABEL_81;
  }
  if ( v93 )
  {
    if ( QuestBehaviorMaster__IsOpenQuestBehaviorCond((QuestBehaviorMaster_o *)v93, this->fields.questId, phase, 9, 0LL) )
    {
      v242 = 0;
      questReleaseClosedID = 0;
      HasStatus = 0;
      v95 = 1;
      IsClear = v94;
      goto LABEL_77;
    }
    IsClear = v94;
  }
  v95 = 0;
  if ( (v242 & 1) != 0 )
  {
    v242 = 1;
    goto LABEL_77;
  }
  v98 = 1.0;
  v97 = 0;
  v242 = 0;
  v96 = 1.0;
LABEL_81:
  Master_object = (__int64)this->fields.mTitleObj;
  v236 = HasStatus;
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  Master_object = (__int64)this->fields.mOptionInfoLb;
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  Master_object = (__int64)this->fields.mRewardObj;
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  Master_object = (__int64)this->fields.mAdvanceNoticeObj;
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  Master_object = (__int64)this->fields.mCondObject;
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  Master_object = (__int64)this->fields.mServantLimitRewardObtainedSP;
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  mcBaseP = this->fields.mcBaseP;
  if ( !mcBaseP )
    goto LABEL_382;
  mAtlas = mcBaseP->fields.mAtlas;
  this->fields.basePanelAtlas = mAtlas;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.basePanelAtlas, (int32_t)mAtlas, v100, v101);
  Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
  v104 = this->fields.mcBaseP;
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  v237 = v95;
  if ( !v104 )
    goto LABEL_382;
  UISprite__set_spriteName(v104, ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME, 0LL);
  v105 = !IsSvtCoinQuest && IsClear;
  if ( IsSvtCoinQuest )
  {
    v106 = this->fields.mcBaseP;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( !AtlasManager__SetEventUI(v106, (System_String_o *)StringLiteral_20195/*"img_conductor_questboard_paladin"*/, 0LL) )
    {
      Master_object = (__int64)this->fields.mcBaseP;
      if ( !Master_object )
        goto LABEL_382;
      UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0LL);
      Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      v107 = this->fields.mcBaseP;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      if ( !v107 )
        goto LABEL_382;
      UISprite__set_spriteName(v107, ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME, 0LL);
    }
    v105 = 0;
    v108 = IsClear;
  }
  else if ( IsLimitCountSealQuest )
  {
    v109 = ServantStatusQuestBoardDraw_TypeInfo;
    v110 = this->fields.mcBaseP;
    if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      v109 = ServantStatusQuestBoardDraw_TypeInfo;
    }
    BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME = v109->static_fields->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( !AtlasManager__SetEventUI(v110, BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME, 0LL) )
    {
      Master_object = (__int64)this->fields.mcBaseP;
      if ( !Master_object )
        goto LABEL_382;
      UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0LL);
      v112 = this->fields.mcBaseP;
      Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      if ( !v112 )
        goto LABEL_382;
      UISprite__set_spriteName(v112, ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME, 0LL);
    }
    v108 = 0;
    IsClear = v105;
  }
  else
  {
    v108 = 0;
    v105 = IsClear;
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
  v255.fields.r = v98;
  v255.fields.g = v98;
  v255.fields.b = v98;
  v255.fields.a = v96;
  UIWidget__set_color((UIWidget_o *)Master_object, v255, 0LL);
  Master_object = (__int64)this->fields.mLineSp;
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0LL);
  Master_object = (__int64)this->fields.mLineSp;
  if ( !Master_object )
    goto LABEL_382;
  v256.fields.r = v98;
  v256.fields.g = v98;
  v256.fields.b = v98;
  v256.fields.a = v96;
  UIWidget__set_color((UIWidget_o *)Master_object, v256, 0LL);
  Master_object = (__int64)this->fields.mTitle2Sp;
  v113 = v97 && IsClear;
  if ( IsSvtCoinQuest || !v97 )
  {
    if ( !Master_object )
      goto LABEL_382;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0LL);
    Master_object = (__int64)this->fields.mTitle2Sp;
    if ( !Master_object )
      goto LABEL_382;
    v257.fields.r = v98;
    v257.fields.g = v98;
    v257.fields.b = v98;
    v257.fields.a = v96;
    UIWidget__set_color((UIWidget_o *)Master_object, v257, 0LL);
    Master_object = (__int64)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_382;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0LL);
    if ( IsSvtCoinQuest )
    {
      mTitleSp = this->fields.mTitleSp;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( AtlasManager__SetEventUI(mTitleSp, (System_String_o *)StringLiteral_20191/*"img_conductor_05"*/, 0LL) )
      {
        v253.fields.x = -22.0;
        v253.fields.y = 0.0;
        v253.fields.z = 0.0;
        ComponentHelper__SetLocalPosition((UnityEngine_Component_o *)this->fields.mTitleSp, v253, 0LL);
      }
      else
      {
        Master_object = (__int64)this->fields.mTitleSp;
        if ( !Master_object )
          goto LABEL_382;
        UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0LL);
        v125 = this->fields.mTitleSp;
        Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
        if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
        if ( !v125 )
          goto LABEL_382;
        UISprite__set_spriteName(
          v125,
          ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_SPRITE_NAME_INTERLUDE,
          0LL);
      }
      mTitle2Sp = this->fields.mTitle2Sp;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( !AtlasManager__SetEventUI(mTitle2Sp, (System_String_o *)StringLiteral_20197/*"img_conductor_quicklink_02"*/, 0LL) )
      {
        Master_object = (__int64)this->fields.mTitle2Sp;
        if ( !Master_object )
          goto LABEL_382;
        UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0LL);
        Master_object = (__int64)this->fields.mTitle2Sp;
        if ( !Master_object )
          goto LABEL_382;
        UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)StringLiteral_20196/*"img_conductor_quicklink"*/, 0LL);
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
      v258.fields.r = v98;
      v258.fields.g = v98;
      v258.fields.b = v98;
      v258.fields.a = v96;
      UIWidget__set_color((UIWidget_o *)Master_object, v258, 0LL);
      mLineSp = this->fields.mLineSp;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      Master_object = AtlasManager__SetEventUI(mLineSp, (System_String_o *)StringLiteral_20193/*"img_conductor_line_white"*/, 0LL);
      v128 = this->fields.mLineSp;
      if ( (Master_object & 1) != 0 )
      {
        if ( !v128 )
          goto LABEL_382;
        v129 = 1060023983;
        v130 = 1058839709;
        v131 = 1051240617;
        v132 = 1.0;
        Master_object = (__int64)this->fields.mLineSp;
      }
      else
      {
        if ( !v128 )
          goto LABEL_382;
        UISprite__set_atlas(this->fields.mLineSp, this->fields.basePanelAtlas, 0LL);
        Master_object = (__int64)this->fields.mLineSp;
        if ( !Master_object )
          goto LABEL_382;
        UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)StringLiteral_20192/*"img_conductor_line"*/, 0LL);
        Master_object = (__int64)this->fields.mLineSp;
        if ( !Master_object )
          goto LABEL_382;
        v129 = LODWORD(v98);
        v130 = LODWORD(v98);
        v131 = LODWORD(v98);
        v132 = v96;
      }
      UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)&v129, 0LL);
    }
    else
    {
      Master_object = (__int64)this->fields.mTitleSp;
      v115 = QuestType == 3 && v105;
      if ( !Master_object )
        goto LABEL_382;
      UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0LL);
      v116 = this->fields.mTitleSp;
      Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      cctor_finished = ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished;
      if ( QuestType != 3 )
      {
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
        if ( !v116 )
          goto LABEL_382;
        UISprite__set_spriteName(
          v116,
          ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_SPRITE_NAME_RAINFORCEMENT,
          0LL);
        goto LABEL_193;
      }
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      if ( !v116 )
        goto LABEL_382;
      v118 = 56LL;
      if ( !v228 )
        v118 = 48LL;
      v229 = v118;
      UISprite__set_spriteName(
        v116,
        *(System_String_o **)((char *)&ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH + v118),
        0LL);
      v119 = IsLimitCountSealQuest && v115;
      if ( !IsLimitCountSealQuest )
        goto LABEL_193;
      v227 = v119;
      v120 = this->fields.mTitleSp;
      v121 = ServantStatusQuestBoardDraw_TypeInfo;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
        v121 = ServantStatusQuestBoardDraw_TypeInfo;
      }
      TITLE_SPRITE_NAME_LIMIT_UNSEAL = v121->static_fields->TITLE_SPRITE_NAME_LIMIT_UNSEAL;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v123 = AtlasManager__SetEventUI(v120, TITLE_SPRITE_NAME_LIMIT_UNSEAL, 0LL);
      v108 = v227;
      v105 = v115;
      if ( v123 )
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
        v259.fields.r = v98;
        v259.fields.g = v98;
        v259.fields.b = v98;
        v259.fields.a = v96;
        UIWidget__set_color((UIWidget_o *)Master_object, v259, 0LL);
        Master_object = (__int64)this->fields.mLinkObj;
        if ( !Master_object )
          goto LABEL_382;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
        Master_object = (__int64)this->fields.mLinkObj;
        if ( !Master_object )
          goto LABEL_382;
        Master_object = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Master_object, 0LL);
        if ( !Master_object )
          goto LABEL_382;
        Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)Master_object,
                                   (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( !Master_object )
          goto LABEL_382;
        v260.fields.r = v98;
        v260.fields.g = v98;
        v260.fields.b = v98;
        v260.fields.a = v96;
        UIWidget__set_color((UIWidget_o *)Master_object, v260, 0LL);
        goto LABEL_200;
      }
      Master_object = (__int64)this->fields.mTitleSp;
      if ( !Master_object )
        goto LABEL_382;
      UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0LL);
      v124 = this->fields.mTitleSp;
      Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      if ( !v124 )
        goto LABEL_382;
      UISprite__set_spriteName(
        v124,
        *(System_String_o **)((char *)&ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH + v229),
        0LL);
    }
    v105 = v108;
    goto LABEL_193;
  }
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 0, 0LL);
  Master_object = (__int64)this->fields.mTitleSp;
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 0, 0LL);
  Master_object = (__int64)this->fields.mLinkObj;
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  v105 = v113;
LABEL_200:
  Master_object = (__int64)this->fields.mClearObj;
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v97, 0LL);
  Master_object = (__int64)this->fields.mNoneLb;
  if ( !Master_object )
    goto LABEL_382;
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v133 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  v134 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v134,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v134;
  if ( !v133 )
    goto LABEL_382;
  QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
    (QuestReleaseOverwriteMaster_o *)v133,
    &entityList,
    this->fields.questId,
    nowTime,
    0LL);
  v135 = ServantStatusQuestBoardDraw___c_TypeInfo;
  v136 = entityList;
  if ( !ServantStatusQuestBoardDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw___c_TypeInfo);
    v135 = ServantStatusQuestBoardDraw___c_TypeInfo;
  }
  _9__48_0 = (System_Func_object__int__o *)v135->static_fields->__9__48_0;
  if ( !_9__48_0 )
  {
    if ( !v135->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v135);
      v135 = ServantStatusQuestBoardDraw___c_TypeInfo;
    }
    v138 = (Il2CppObject *)v135->static_fields->__9;
    _9__48_0 = (System_Func_object__int__o *)sub_1BCB244(System_Func_QuestReleaseOverwriteEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__48_0, v138, Method_ServantStatusQuestBoardDraw___c__SetItem_b__48_0__, 0LL);
    static_fields = ServantStatusQuestBoardDraw___c_TypeInfo->static_fields;
    static_fields->__9__48_0 = (struct System_Func_QuestReleaseOverwriteEntity__int__o *)_9__48_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__48_0, (int32_t)_9__48_0, v140, v141);
    p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  }
  v142 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v136,
                                                                (System_Func_TSource__TKey__o *)_9__48_0,
                                                                (const MethodInfo_30466C8 *)Method_System_Linq_Enumerable_OrderByDescending_QuestReleaseOverwriteEntity__int___);
  v143 = System_Linq_Enumerable__FirstOrDefault_object_(
           v142,
           (const MethodInfo_303F1D0 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity___);
  v146 = (QuestReleaseOverwriteEntity_o *)v143;
  if ( *v88 )
  {
    if ( v143 )
    {
      v147 = entityList;
      v148 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_QuestReleaseOverwriteEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v148,
        object,
        Method_ServantStatusQuestBoardDraw___c__DisplayClass48_0__SetItem_b__1__,
        0LL);
      v149 = System_Linq_Enumerable__FirstOrDefault_object__50595188(
               (System_Collections_Generic_IEnumerable_TSource__o *)v147,
               (System_Func_TSource__bool__o *)v148,
               (const MethodInfo_3040574 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity____76957016);
      if ( v149 )
        v146 = (QuestReleaseOverwriteEntity_o *)v149;
    }
  }
  if ( IsSvtCoinQuest || v97 || v105 )
  {
    v150 = *v88;
    if ( questReleaseClosedID < 1 )
    {
      v151 = v243;
      if ( v150 && v150->fields.type == 8 )
      {
        mTitleNameLb = this->fields.mTitleNameLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11847/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/, 0LL);
        if ( !mTitleNameLb )
          goto LABEL_382;
        v159 = (System_String_o *)Master_object;
        Master_object = (__int64)mTitleNameLb;
      }
      else
      {
        Master_object = (__int64)QuestEntity__getQuestName(Mine, 0LL);
        if ( !Master_object )
          goto LABEL_382;
        v160 = (System_String_o *)Master_object;
        if ( System_String__Contains((System_String_o *)Master_object, (System_String_o *)StringLiteral_24882/*"{0}"*/, 0LL) )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v161 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantMaster___);
          Master_object = QuestEntity__getServantId(Mine, 0LL);
          if ( !v161 )
            goto LABEL_382;
          Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)v161,
                                     Master_object,
                                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Master_object )
            goto LABEL_382;
          BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Master_object, 0, -1, 0LL);
          v160 = System_String__Format(v160, BattleName, 0LL);
        }
        Master_object = (__int64)this->fields.mTitleNameLb;
        if ( !Master_object )
          goto LABEL_382;
        v159 = v160;
      }
      UILabel__set_text((UILabel_o *)Master_object, v159, 0LL);
    }
    else
    {
      ServantStatusQuestBoardDraw__SetAdvanceNoticeText(
        this,
        questReleaseClosedID,
        warEntity,
        Mine,
        v150,
        v144,
        v146,
        v145);
      v151 = v243;
    }
  }
  else
  {
    v152 = this->fields.mTitleNameLb;
    if ( QuestType == 3 )
    {
      v153 = (System_String_o **)&StringLiteral_11892/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE"*/;
      v154 = LocalizationManager_TypeInfo;
      v155 = (System_String_o **)&StringLiteral_11893/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE2"*/;
    }
    else
    {
      v153 = (System_String_o **)&StringLiteral_11894/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/;
      v154 = LocalizationManager_TypeInfo;
      v155 = (System_String_o **)&StringLiteral_11895/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT2"*/;
    }
    v151 = v243;
    if ( v232 )
      v153 = v155;
    v156 = *v153;
    if ( !v154->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v154);
    Master_object = (__int64)LocalizationManager__Get(v156, 0LL);
    if ( !v152 )
      goto LABEL_382;
    UILabel__set_text(v152, (System_String_o *)Master_object, 0LL);
    if ( v146 )
      ServantStatusQuestBoardDraw__SetOverwriteCondText(this, v146, v157);
  }
  Master_object = (__int64)this->fields.mTitleNameLb;
  if ( !Master_object )
    goto LABEL_382;
  v163 = *(_DWORD *)(Master_object + 168);
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    Master_object = (__int64)this->fields.mTitleNameLb;
    if ( !Master_object )
      goto LABEL_382;
  }
  TITLE_LABEL_BASE_WIDTH = ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH;
  Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
  v165 = v163 <= TITLE_LABEL_BASE_WIDTH;
  v166 = (UnityEngine_Transform_o *)Master_object;
  if ( v165 )
  {
    if ( !byte_4B16196 )
    {
      Master_object = sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, giftIconId);
      byte_4B16196 = 1;
    }
    if ( !v166 )
      goto LABEL_382;
    v168 = inputMessageObject;
    v172 = UnityEngine_Vector3_TypeInfo->static_fields;
    y = v172->oneVector.fields.y;
    z = v172->oneVector.fields.z;
    x = v172->oneVector.fields.x;
  }
  else
  {
    Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
    if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    v167 = this->fields.mTitleNameLb;
    v168 = inputMessageObject;
    if ( !v167 || !v166 )
      goto LABEL_382;
    y = 1.0;
    x = (float)ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH / (float)v167->fields.mWidth;
    z = 1.0;
  }
  UnityEngine_Transform__set_localScale(v166, *(UnityEngine_Vector3_o *)&x, 0LL);
  Master_object = (__int64)this->fields.mTitleNameLb;
  if ( IsSvtCoinQuest )
  {
    if ( !Master_object )
      goto LABEL_382;
    v173 = 1054398681;
    v174 = 1055714541;
    v175 = 1056372471;
    v176 = 1.0;
    v177 = v168;
  }
  else
  {
    if ( !Master_object )
      goto LABEL_382;
    v177 = 0LL;
    v175 = LODWORD(v98);
    v174 = LODWORD(v98);
    v173 = LODWORD(v98);
    v176 = v96;
  }
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)&v175, 0LL);
  if ( v237 )
    v180 = v177;
  else
    v180 = v168;
  this->fields.inputMessageObject = v180;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.inputMessageObject, (int32_t)v180, v178, v179);
  if ( IsSvtCoinQuest )
  {
    Master_object = (__int64)this->fields.mTitleShortcutSp;
    if ( !Master_object )
      goto LABEL_382;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0LL);
    mTitleShortcutSp = this->fields.mTitleShortcutSp;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Master_object = AtlasManager__SetEventUI(mTitleShortcutSp, (System_String_o *)StringLiteral_20198/*"img_conductor_scq"*/, 0LL);
    v182 = this->fields.mTitleShortcutSp;
    if ( (Master_object & 1) != 0 )
    {
      if ( !v182 )
        goto LABEL_382;
      v261.fields.r = 0.48235;
      v261.fields.g = 0.46275;
      v261.fields.b = 0.42353;
      v261.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)this->fields.mTitleShortcutSp, v261, 0LL);
      v254.fields.y = 19.0;
      v254.fields.z = 0.0;
      v254.fields.x = -226.0;
      ComponentHelper__SetLocalPosition((UnityEngine_Component_o *)this->fields.mTitleShortcutSp, v254, 0LL);
    }
    else
    {
      if ( !v182 )
        goto LABEL_382;
      UISprite__set_atlas(this->fields.mTitleShortcutSp, this->fields.basePanelAtlas, 0LL);
      Master_object = (__int64)this->fields.mTitleShortcutSp;
      if ( !Master_object )
        goto LABEL_382;
      UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)StringLiteral_20199/*"img_conductor_sq"*/, 0LL);
      Master_object = (__int64)this->fields.mTitleShortcutSp;
      if ( !Master_object )
        goto LABEL_382;
      v264.fields.r = v98;
      v264.fields.g = v98;
      v264.fields.b = v98;
      v264.fields.a = v96;
      UIWidget__set_color((UIWidget_o *)Master_object, v264, 0LL);
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
    UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    ServantStatusQuestBoardDraw__ResetInfoTextList(this, v191);
    goto LABEL_300;
  }
  if ( QuestType != 3 )
  {
    Master_object = (__int64)this->fields.mTitleShortcutSp;
    if ( !Master_object )
      goto LABEL_382;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0LL);
    Master_object = (__int64)this->fields.mTitleShortcutSp;
    if ( !Master_object )
      goto LABEL_382;
    v263.fields.r = v98;
    v263.fields.g = v98;
    v263.fields.b = v98;
    v263.fields.a = v96;
    UIWidget__set_color((UIWidget_o *)Master_object, v263, 0LL);
    Master_object = (__int64)this->fields.mTitleShortcutLb;
    if ( !Master_object )
      goto LABEL_382;
    goto LABEL_298;
  }
  ServantId = QuestEntity__getServantId(Mine, 0LL);
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             ServantId,
                             (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.mTitleShortcutSp )
    goto LABEL_382;
  v184 = Master_object;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mTitleShortcutSp, 0, 0LL);
  mTitleShortcutLb = this->fields.mTitleShortcutLb;
  if ( !v184 )
  {
    if ( !mTitleShortcutLb )
      goto LABEL_382;
    Master_object = (__int64)this->fields.mTitleShortcutLb;
LABEL_298:
    UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    goto LABEL_299;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v186 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v188 = *(_QWORD *)(v184 + 16);
  v187 = *(_QWORD *)(v184 + 24);
  v189 = (ServantLimitImageMaster_o *)v186;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v252.fields.currentCryptoKey = v188;
  *(_QWORD *)&v252.fields.fakeValue = v187;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v252, 0LL);
  if ( !v189 )
    goto LABEL_382;
  Master_object = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                             v189,
                             Master_object,
                             limitCounta,
                             0,
                             0LL);
  if ( !mTitleShortcutLb )
    goto LABEL_382;
  UILabel__set_text(mTitleShortcutLb, (System_String_o *)Master_object, 0LL);
  Master_object = (__int64)this->fields.mTitleShortcutLb;
  if ( !Master_object )
    goto LABEL_382;
  v262.fields.r = v98;
  v262.fields.g = v98;
  v262.fields.b = v98;
  v262.fields.a = v96;
  UIWidget__set_color((UIWidget_o *)Master_object, v262, 0LL);
LABEL_299:
  ServantStatusQuestBoardDraw__ResetInfoTextList(this, v190);
  if ( v97 )
  {
LABEL_318:
    v209 = 0;
    goto LABEL_319;
  }
LABEL_300:
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  isNotItemConsume = 0;
  endTime = qinf->fields.endTime;
  if ( endTime >= 1 && !QuestEntity__HasFlag(Mine, 32LL, 0LL) )
  {
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v194 = LocalizationManager__Get((System_String_o *)StringLiteral_13315/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
    v195 = (QuestBoardInformationText_o *)sub_1BCB244(QuestBoardInformationText_TypeInfo);
    QuestBoardInformationText___ctor(v195, v194, endTime, 0, 1, 0LL, 0LL);
    if ( !mInfoTextList )
      goto LABEL_382;
    items = mInfoTextList->fields._items;
    v199 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
    ++mInfoTextList->fields._version;
    if ( !items )
      goto LABEL_382;
    size = mInfoTextList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        mInfoTextList,
        (Il2CppObject *)v195,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v199[4] + 192LL) + 112LL));
    }
    else
    {
      v201 = &items->obj.klass + size;
      mInfoTextList->fields._size = size + 1;
      v201[4] = (Il2CppClass *)v195;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v201 + 4), (int32_t)v195, v196, v197);
    }
  }
  v202 = qinf->fields.questPhase;
  v203 = MapControl_QuestInfo__GetPhaseMax(qinf, 0LL);
  v205 = this->fields.mInfoTextList;
  if ( v202 + 1 < v203 )
    v206 = v202 + 1;
  else
    v206 = v203;
  Master_object = (__int64)ServantStatusQuestBoardDraw__GetCampaignText(
                             this,
                             v204,
                             v206,
                             0,
                             v151,
                             &fixedVal[1],
                             fixedVal,
                             &isNotItemConsume,
                             v226);
  if ( !v205 )
    goto LABEL_382;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v205,
    (System_Collections_Generic_IEnumerable_T__o *)Master_object,
    (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  Master_object = (__int64)this->fields.mInfoTextList;
  if ( !Master_object )
    goto LABEL_382;
  v207 = *(_DWORD *)(Master_object + 24);
  if ( v207 < 1 )
    goto LABEL_318;
  Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)Master_object,
                             v151->fields.mAlphaAnimCnt % v207,
                             (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
  if ( !Master_object )
    goto LABEL_382;
  QuestBoardInformationText__SetTime(
    (QuestBoardInformationText_o *)Master_object,
    p_mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    0LL);
  Master_object = (__int64)this->fields.mOptionInfoLb;
  if ( !Master_object )
    goto LABEL_382;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Master_object, 1.0, 0LL);
  v208 = fixedVal[1];
  v209 = 1;
  qinf->fields.isNotItemConsume = isNotItemConsume;
  v210 = fixedVal[0];
  qinf->fields.costCalcVal = v208;
  qinf->fields._fixedCostVal_k__BackingField = v210;
LABEL_319:
  Master_object = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_382;
  Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v209, 0LL);
  Master_object = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_382;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v209, 0LL);
  this->fields.mRewardIconInfs = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mRewardIconInfs, 0, v211, v212);
  Master_object = (__int64)this->fields.mRewardIcon;
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  if ( (v242 & 1) != 0 && QuestEntity__HasFlag(Mine, 4096LL, 0LL) )
  {
    Master_object = (__int64)this->fields.mRewardIcon;
    if ( !Master_object )
      goto LABEL_382;
    LODWORD(giftIconId) = 99;
LABEL_333:
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)Master_object, giftIconId, 0LL);
    Master_object = (__int64)this->fields.mRewardIcon;
    if ( !Master_object )
      goto LABEL_382;
    Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
    if ( !Master_object )
      goto LABEL_382;
    v213 = 1;
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
    Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_382;
    Master_object = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !Master_object )
      goto LABEL_382;
    Master_object = (__int64)GiftMaster__GetGiftListById((GiftMaster_o *)Master_object, Mine->fields.giftId, 0LL);
    if ( !Master_object )
      goto LABEL_382;
    v219 = *(_QWORD *)(Master_object + 24);
    v220 = (struct GiftEntity_array *)Master_object;
    if ( !v219 )
      goto LABEL_381;
    v221 = v151->fields.mAlphaAnimCnt % (int)v219;
    if ( v221 >= (unsigned int)v219 )
      sub_1BCB25C(Master_object, giftIconId, v217);
    v222 = *(_DWORD **)(Master_object + 8LL * v221 + 32);
    if ( v222 )
    {
      giftIconId = (unsigned int)v222[11];
      Master_object = (__int64)this->fields.mRewardIcon;
      v223 = v222[7];
      if ( (int)giftIconId < 1 )
      {
        if ( !Master_object )
          goto LABEL_382;
        v225 = v223 <= 1 ? -1 : v222[7];
        ItemIconComponent__SetGift_40107980((ItemIconComponent_o *)Master_object, v222[5], v222[6], v225, 0, 0LL);
      }
      else
      {
        if ( !Master_object )
          goto LABEL_382;
        v224 = v223 <= 1 ? -1 : v222[7];
        ItemIconComponent__SetItemImage_40110424((ItemIconComponent_o *)Master_object, giftIconId, v224, 0LL);
      }
      Master_object = (__int64)this->fields.mRewardIcon;
      if ( Master_object )
      {
        Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
        if ( Master_object )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
LABEL_381:
          this->fields.mRewardIconInfs = v220;
          sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mRewardIconInfs, (int32_t)v220, v217, v218);
          goto LABEL_337;
        }
      }
    }
LABEL_382:
    sub_1BCB254(Master_object, giftIconId);
  }
  Master_object = (__int64)this->fields.mRewardObj;
  if ( !Master_object )
    goto LABEL_382;
  v213 = 0;
LABEL_336:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v213, 0LL);
LABEL_337:
  Master_object = (__int64)this->fields.mRewardObj;
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Master_object,
                             (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Master_object )
    goto LABEL_382;
  v265.fields.r = v98;
  v265.fields.g = v98;
  v265.fields.b = v98;
  v265.fields.a = v96;
  UIWidget__set_color((UIWidget_o *)Master_object, v265, 0LL);
  Master_object = (__int64)this->fields.mRewardIcon;
  if ( !Master_object )
    goto LABEL_382;
  v266.fields.r = v98;
  v266.fields.g = v98;
  v266.fields.b = v98;
  v266.fields.a = v96;
  ItemIconComponent__SetColor((ItemIconComponent_o *)Master_object, v266, 0LL);
  Master_object = (__int64)v235;
  v214 = IsLimitCountSealQuest && v97;
  if ( !v235 || (v214 & 1) != 0 )
  {
    mServantLimitRewardObtainedSP = (UnityEngine_Component_o *)this->fields.mServantLimitRewardObtainedSP;
    if ( !v214 )
    {
LABEL_343:
      if ( !mServantLimitRewardObtainedSP )
        goto LABEL_382;
      Master_object = (__int64)UnityEngine_Component__get_gameObject(mServantLimitRewardObtainedSP, 0LL);
      if ( !Master_object )
        goto LABEL_382;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
      v216 = 1;
      goto LABEL_354;
    }
  }
  else
  {
    Master_object = QuestBehaviorMaster__IsOpenQuestBehaviorCond(v235, this->fields.questId, phase, 10, 0LL);
    mServantLimitRewardObtainedSP = (UnityEngine_Component_o *)this->fields.mServantLimitRewardObtainedSP;
    if ( (Master_object & 1) == 0 )
      goto LABEL_343;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(
    (UISprite_o *)mServantLimitRewardObtainedSP,
    (System_String_o *)StringLiteral_20043/*"icon_reward_limits_release"*/,
    0LL);
  Master_object = (__int64)this->fields.mServantLimitRewardObtainedSP;
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  Master_object = (__int64)this->fields.mServantLimitRewardObtainedSP;
  if ( !Master_object )
    goto LABEL_382;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_object + 840LL))(
    Master_object,
    *(_QWORD *)(*(_QWORD *)Master_object + 848LL));
  Master_object = (__int64)this->fields.mServantLimitRewardObtainedSP;
  if ( !Master_object )
    goto LABEL_382;
  v267.fields.r = v98;
  v267.fields.g = v98;
  v267.fields.b = v98;
  v267.fields.a = v96;
  UIWidget__set_color((UIWidget_o *)Master_object, v267, 0LL);
  v216 = 0;
LABEL_354:
  Master_object = (__int64)this->fields.mRewardGetSP;
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v97 & v216 & !v236, 0LL);
  Master_object = (__int64)this->fields.mRewardGetSP;
  if ( !Master_object )
    goto LABEL_382;
  v268.fields.r = v98;
  v268.fields.g = v98;
  v268.fields.b = v98;
  v268.fields.a = v96;
  UIWidget__set_color((UIWidget_o *)Master_object, v268, 0LL);
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

  if ( (byte_4B19F77 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusQuestBoardDraw_TypeInfo, questReleaseOverwriteEntity);
    byte_4B19F77 = 1;
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
      sub_1BCB254(mCondObject, v6);
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
      sub_1BCB254(0LL, method);
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

  if ( (byte_4B19F75 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__, qinf);
    byte_4B19F75 = 1;
  }
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !mInfoTextList
    || (mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       mInfoTextList,
                                                                       strIndex,
                                                                       (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__)) == 0LL )
  {
    sub_1BCB254(mInfoTextList, qinf);
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
    sub_1BCB254(this, 0LL);
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
  if ( (byte_4B19F81 & 1) == 0 )
  {
    label = (UILabel_o *)sub_1BCAFF8(&ServantStatusQuestBoardDraw_TypeInfo, message);
    byte_4B19F81 = 1;
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
    sub_1BCB254(label, message);
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


// local variable allocation has failed, the output may be wrong!
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
        sub_1BCB25C(this, boardMessageData, *(_QWORD *)&eventId);
      this = (ServantStatusQuestBoardDraw_o *)boardMessageData->m_Items[v5];
      if ( !this )
        break;
      if ( HIDWORD(this->fields.m_CancellationTokenSource) == 4 && LODWORD(this->fields.mcBaseP) == eventId )
        return (BoardMessageEntity_o *)this;
      if ( max_length == ++v5 )
        return 0LL;
    }
LABEL_12:
    sub_1BCB254(this, boardMessageData);
  }
  return 0LL;
}


void __fastcall ServantStatusQuestBoardDraw___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B19F82 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusQuestBoardDraw___c_TypeInfo, v1);
    byte_4B19F82 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(ServantStatusQuestBoardDraw___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantStatusQuestBoardDraw___c_TypeInfo->static_fields->__9 = (struct ServantStatusQuestBoardDraw___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)ServantStatusQuestBoardDraw___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ServantStatusQuestBoardDraw___c___ctor(
        ServantStatusQuestBoardDraw___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantStatusQuestBoardDraw___c___SetItem_b__48_0(
        ServantStatusQuestBoardDraw___c_o *this,
        QuestReleaseOverwriteEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCB254(this, 0LL);
  return entity->fields.imagePriority;
}


void __fastcall ServantStatusQuestBoardDraw___c__DisplayClass48_0___ctor(
        ServantStatusQuestBoardDraw___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantStatusQuestBoardDraw___c__DisplayClass48_0___SetItem_b__1(
        ServantStatusQuestBoardDraw___c__DisplayClass48_0_o *this,
        QuestReleaseOverwriteEntity_o *entity,
        const MethodInfo *method)
{
  struct QuestReleaseEntity_o *rQuestRlsNG; // x8

  if ( !entity || (rQuestRlsNG = this->fields.rQuestRlsNG) == 0LL )
    sub_1BCB254(this, entity);
  return entity->fields.imagePriority == rQuestRlsNG->fields.imagePriority;
}