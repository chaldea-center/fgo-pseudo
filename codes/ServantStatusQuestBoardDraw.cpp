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

  if ( (byte_4C40681 & 1) == 0 )
  {
    sub_1C37058(&ServantStatusQuestBoardDraw_TypeInfo);
    sub_1C37058(&StringLiteral_20371/*"img_conductor_03"*/);
    sub_1C37058(&StringLiteral_20372/*"img_conductor_04"*/);
    sub_1C37058(&StringLiteral_20370/*"img_conductor_02"*/);
    sub_1C37058(&StringLiteral_20512/*"img_questboard_1001"*/);
    sub_1C37058(&StringLiteral_20369/*"img_conductor_01"*/);
    sub_1C37058(&StringLiteral_20376/*"img_conductor_questboard"*/);
    sub_1C37058(&StringLiteral_20365/*"img_commonbg"*/);
    byte_4C40681 = 1;
  }
  static_fields = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->TITLE_LABEL_BASE_WIDTH = xmmword_C0F6D0;
  static_fields->ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X = -208.0;
  v4 = StringLiteral_20365/*"img_commonbg"*/;
  static_fields->DARK_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_20365/*"img_commonbg"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->DARK_BOARD_SPRITE_NAME, v4, v1, v2);
  v5 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  *(_QWORD *)&v5->DARK_BOARD_WIDTH = 0x7A000001F0LL;
  v6 = StringLiteral_20376/*"img_conductor_questboard"*/;
  v5->BASE_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_20376/*"img_conductor_questboard"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v5->BASE_BOARD_SPRITE_NAME, v6, v7, v8);
  v9 = StringLiteral_20370/*"img_conductor_02"*/;
  v10 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v10->TITLE_SPRITE_NAME_INTERLUDE = (struct System_String_o *)StringLiteral_20370/*"img_conductor_02"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v10->TITLE_SPRITE_NAME_INTERLUDE, v9, v11, v12);
  v13 = StringLiteral_20369/*"img_conductor_01"*/;
  v14 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v14->TITLE_SPRITE_NAME_INTERLUDE_MAP = (struct System_String_o *)StringLiteral_20369/*"img_conductor_01"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v14->TITLE_SPRITE_NAME_INTERLUDE_MAP, v13, v15, v16);
  v17 = StringLiteral_20371/*"img_conductor_03"*/;
  v18 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v18->TITLE_SPRITE_NAME_RAINFORCEMENT = (struct System_String_o *)StringLiteral_20371/*"img_conductor_03"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v18->TITLE_SPRITE_NAME_RAINFORCEMENT, v17, v19, v20);
  v21 = StringLiteral_20512/*"img_questboard_1001"*/;
  v22 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v22->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME = (struct System_String_o *)StringLiteral_20512/*"img_questboard_1001"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v22->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME, v21, v23, v24);
  v25 = StringLiteral_20372/*"img_conductor_04"*/;
  v26 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v26->TITLE_SPRITE_NAME_LIMIT_UNSEAL = (struct System_String_o *)StringLiteral_20372/*"img_conductor_04"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v26->TITLE_SPRITE_NAME_LIMIT_UNSEAL, v25, v27, v28);
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

  if ( (byte_4C40679 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C40679 = 1;
  }
  if ( (byte_4C4067A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4C4067A = 1;
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
                                                                       (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
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
      sub_1C372B4(mInfoTextList);
    }
  }
  if ( (byte_4C4067B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4C4067B = 1;
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  }
  if ( !mInfoTextList || !mInfoTextList->fields._size )
    return;
  mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 mInfoTextList,
                                                                 0,
                                                                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
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
  int32_t *v6; // x9
  int32_t v7; // w1
  int v8; // w8
  int64_t v9; // x2
  int64_t v10; // x3

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
    sub_1C372BC(this);
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
        v9 = (unsigned int)v6[7];
      ItemIconComponent__SetItemImage_40924348((ItemIconComponent_o *)this, v7, v9, 0);
      return;
    }
LABEL_18:
    sub_1C372B4(this);
  }
  if ( !this )
    goto LABEL_18;
  if ( v8 <= 1 )
    v10 = -1;
  else
    v10 = (unsigned int)v6[7];
  ItemIconComponent__SetGift_40921900((ItemIconComponent_o *)this, v6[5], v6[6], v10, 0, 0);
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

  if ( (byte_4C4067E & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&QuestBoardInformationText_TypeInfo);
    sub_1C37058(&StringLiteral_25101/*"{0}"*/);
    this = (ServantStatusQuestBoardDraw_o *)sub_1C37058(&StringLiteral_13428/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/);
    byte_4C4067E = 1;
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
  this = (ServantStatusQuestBoardDraw_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !questEntity || !this )
LABEL_40:
    sub_1C372B4(this);
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
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_13428/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0);
  EventName = (Il2CppObject *)EventEntity__getEventName(eventEnt, 0);
  v24 = System_String__Format_63602948(v22, EventName, (Il2CppObject *)StringLiteral_25101/*"{0}"*/, 0);
  EndTime = EventEntity__GetEndTime(eventEnt, 0, 0);
  v19 = (QuestBoardInformationText_o *)sub_1C372A4(QuestBoardInformationText_TypeInfo);
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
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v19; // x20
  Il2CppObject *p_endedAt; // x20
  __int64 endedAt; // t1
  int64_t *v22; // x8
  int64_t v23; // x20
  System_String_o *EventName; // x21
  System_String_o *v25; // x0
  System_String_o *v26; // x22
  QuestBoardInformationText_o *v27; // x21
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  const MethodInfo *v35; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4C4067C & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1C37058(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&QuestBoardInformationText_TypeInfo);
    sub_1C37058(&StringLiteral_25101/*"{0}"*/);
    sub_1C37058(&StringLiteral_113/*" "*/);
    sub_1C37058(&StringLiteral_13438/*"TIME_REST_STRING"*/);
    byte_4C4067C = 1;
  }
  entity = 0;
  v16 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)ServantStatusQuestBoardDraw__GetCampaignTextListByEventQuestMaster(
                                                                                        this,
                                                                                        this->fields.questId,
                                                                                        phase,
                                                                                        isQuestNoneCleared,
                                                                                        questBoardManager,
                                                                                        costCalcVal,
                                                                                        fixedVal,
                                                                                        isNotItemConsume,
                                                                                        v35);
  if ( !v16 )
    goto LABEL_25;
  System_Collections_Generic_List_object___AddRange(
    v16,
    CampaignTextListByEventQuestMaster,
    (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  if ( !questBoardManager || !CampaignTextListByEventQuestMaster )
    goto LABEL_25;
  EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                             (QuestReleaseOverwriteMaster_o *)CampaignTextListByEventQuestMaster,
                             this->fields.questId,
                             questBoardManager->fields.mListCreatedTime,
                             0);
  if ( !EntityByQuestIdAndTime )
    return (System_Collections_Generic_List_QuestBoardInformationText__o *)v16;
  v19 = EntityByQuestIdAndTime;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !CampaignTextListByEventQuestMaster )
    goto LABEL_25;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)CampaignTextListByEventQuestMaster,
          &entity,
          v19->fields.eventId,
          (const MethodInfo_33A10EC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return (System_Collections_Generic_List_QuestBoardInformationText__o *)v16;
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)entity;
  if ( !entity )
    goto LABEL_25;
  if ( LODWORD(entity[1].monitor) != 25 )
    return (System_Collections_Generic_List_QuestBoardInformationText__o *)v16;
  endedAt = v19->fields.endedAt;
  p_endedAt = (Il2CppObject *)&v19->fields.endedAt;
  v22 = (int64_t *)(endedAt <= 0 ? &entity[6] : p_endedAt);
  v23 = *v22;
  EventName = EventEntity__getEventName((EventEntity_o *)entity, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_13438/*"TIME_REST_STRING"*/, 0);
  v26 = System_String__Concat_63601908(
          EventName,
          (System_String_o *)StringLiteral_113/*" "*/,
          v25,
          (System_String_o *)StringLiteral_25101/*"{0}"*/,
          0);
  v27 = (QuestBoardInformationText_o *)sub_1C372A4(QuestBoardInformationText_TypeInfo);
  QuestBoardInformationText___ctor(v27, v26, v23, 0, 1, 0, 0);
  items = v16->fields._items;
  v31 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
  ++v16->fields._version;
  if ( !items )
LABEL_25:
    sub_1C372B4(CampaignTextListByEventQuestMaster);
  size = v16->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v16,
      (Il2CppObject *)v27,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &items->obj.klass + size;
    v16->fields._size = size + 1;
    v33[4] = (Il2CppClass *)v27;
    sub_1C36FFC((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v27, v28, v29);
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
  DataManager_o *v18; // x26
  Il2CppObject *MasterData_object; // x25
  int64_t mListCreatedTime; // x29
  QuestEntity_o *v21; // x27
  int v22; // w8
  void *v23; // x28
  unsigned int v24; // w19
  EventEntity_o *v25; // x29
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass *v31; // x1
  Il2CppClass **v32; // x0
  const MethodInfo *v34; // [xsp+8h] [xbp-78h]
  bool v35; // [xsp+14h] [xbp-6Ch]
  bool *v36; // [xsp+18h] [xbp-68h]

  if ( (byte_4C4067D & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C37058(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1C37058(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C4067D = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  v35 = isQuestNoneCleared;
  v18 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = DataManager__GetMasterData_object_(
               v18,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               questId,
               (const MethodInfo_33A10A0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !questBoardManager )
    goto LABEL_22;
  mListCreatedTime = questBoardManager->fields.mListCreatedTime;
  v21 = (QuestEntity_o *)Instance;
  Instance = DataManager__GetMasterData_object_(
               v18,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventQuestMaster___);
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
  v22 = *((_DWORD *)Instance + 6);
  v23 = Instance;
  if ( v22 >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      if ( v24 >= v22 )
        sub_1C372BC(Instance);
      v25 = (EventEntity_o *)*((_QWORD *)v23 + (int)v24 + 4);
      if ( !v25 || !MasterData_object )
        break;
      Instance = EventCampaignMaster__getData((EventCampaignMaster_o *)MasterData_object, v25->fields.id, 0);
      if ( Instance )
      {
        Instance = ServantStatusQuestBoardDraw__CreateQuestBoardInformationText(
                     this,
                     v21,
                     v25,
                     (EventCampaignEntity_o *)Instance,
                     phase,
                     v35,
                     costCalcVal,
                     fixedVal,
                     v36,
                     v34);
        if ( Instance )
        {
          if ( !v16 )
            break;
          items = v16->fields._items;
          v29 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
          ++v16->fields._version;
          if ( !items )
            break;
          size = v16->fields._size;
          v31 = (Il2CppClass *)Instance;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v16,
              (Il2CppObject *)Instance,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &items->obj.klass + size;
            v16->fields._size = size + 1;
            v32[4] = v31;
            sub_1C36FFC((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v31, v26, v27);
          }
        }
      }
      v22 = *((_DWORD *)v23 + 6);
      if ( (int)++v24 >= v22 )
        return (System_Collections_Generic_List_QuestBoardInformationText__o *)v16;
    }
LABEL_22:
    sub_1C372B4(Instance);
  }
  return (System_Collections_Generic_List_QuestBoardInformationText__o *)v16;
}


bool ServantStatusQuestBoardDraw__IsClose(MapControl_QuestInfo_o *qinf, const MethodInfo *method)
{
  MapControl_WarInfo_o *IsQuestReleaseAll; // x0
  char v4; // w8
  struct MapControl_SpotInfo_o *SpotInfo_k__BackingField; // x8
  Il2CppObject *Master_object; // x20
  System_Collections_Generic_List_object__o *v8; // x21
  System_Collections_Generic_List_object__o *v9; // x20
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *v13; // x1
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  MapControl_WarInfo_o *v18; // x20
  __int64 v19; // x8
  __int64 v20; // x23
  __int64 v21; // x8
  int32_t v22; // w19
  int32_t v23; // w22
  int64_t v24; // x21
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4C40672 & 1) == 0 )
  {
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C40672 = 1;
  }
  entityList = 0;
  memset(&v26, 0, sizeof(v26));
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
    v4 = 0;
    return v4 & 1;
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
        v4 = 1;
        return v4 & 1;
      }
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v8;
  if ( !Master_object )
    goto LABEL_53;
  if ( QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
         (QuestReleaseOverwriteMaster_o *)Master_object,
         &entityList,
         qinf->fields.questId,
         0,
         0) )
  {
    v9 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    IsQuestReleaseAll = (MapControl_WarInfo_o *)entityList;
    if ( !entityList )
      goto LABEL_53;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v25,
      (System_Collections_Generic_List_object__o *)entityList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    v26 = v25;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v26,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
    {
      if ( !v26.fields._current )
        sub_1C372B4(0);
      v10 = (Il2CppObject *)QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
                              (QuestReleaseOverwriteEntity_o *)v26.fields._current,
                              0);
      v13 = v10;
      if ( !v9 )
        sub_1C372B4(v10);
      items = v9->fields._items;
      v15 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
      ++v9->fields._version;
      if ( !items )
        sub_1C372B4(v10);
      size = v9->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          v10,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v17 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v17[4] = (Il2CppClass *)v13;
        sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v13, v11, v12);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v26,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    if ( !v9 )
      goto LABEL_53;
    IsQuestReleaseAll = (MapControl_WarInfo_o *)System_Collections_Generic_List_object___ToArray(
                                                  v9,
                                                  (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    v18 = IsQuestReleaseAll;
    if ( IsQuestReleaseAll )
      goto LABEL_37;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsQuestReleaseAll = (MapControl_WarInfo_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !IsQuestReleaseAll )
LABEL_53:
    sub_1C372B4(IsQuestReleaseAll);
  IsQuestReleaseAll = (MapControl_WarInfo_o *)QuestReleaseMaster__getListByQuestID(
                                                (QuestReleaseMaster_o *)IsQuestReleaseAll,
                                                qinf->fields.questId,
                                                0);
  v18 = IsQuestReleaseAll;
LABEL_37:
  if ( !v18 )
    goto LABEL_53;
  v19 = *(_QWORD *)&v18->fields.status;
  if ( !v19 )
  {
    v4 = qinf->fields.dispType != 1;
    return v4 & 1;
  }
  if ( (int)v19 < 1 )
    goto LABEL_8;
  v20 = 0;
  do
  {
    if ( (unsigned int)v20 >= (unsigned int)v19 )
      sub_1C372BC(IsQuestReleaseAll);
    v21 = *((_QWORD *)&v18->fields.mapInfoList + v20);
    if ( !v21 )
      goto LABEL_53;
    v23 = *(_DWORD *)(v21 + 20);
    v22 = *(_DWORD *)(v21 + 24);
    v24 = *(_QWORD *)(v21 + 32);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestReleaseAll = (MapControl_WarInfo_o *)CondType__IsOpen(v23, v22, v24, 0, 0, 0);
    if ( ((unsigned __int8)IsQuestReleaseAll & 1) == 0 )
      break;
    LODWORD(v19) = v18->fields.status;
    ++v20;
  }
  while ( (int)v20 < (int)v19 );
  v4 = (unsigned __int8)IsQuestReleaseAll ^ 1;
  return v4 & 1;
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

  if ( (byte_4C4067B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4C4067B = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  return !mInfoTextList || mInfoTextList->fields._size == 0;
}


bool ServantStatusQuestBoardDraw__IsMultiInfoText(ServantStatusQuestBoardDraw_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8

  if ( (byte_4C4067A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4C4067A = 1;
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
  bool HasFlag; // w0
  bool v8; // w21
  QuestRestrictionInfoEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C4067F & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C4067F = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
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
        v8 = !HasFlag;
        return v8 & ~QuestEntity__HasFlag_42469280(questEntity, 2, phase, 0) & 1;
      }
LABEL_17:
      sub_1C372B4(Master_object);
    }
  }
  else if ( !QuestEntity__HasFlag_42469280(questEntity, 0x80000, phase, 0) )
  {
    HasFlag = QuestEntity__HasFlag_42469280(questEntity, 0x100000, phase, 0);
    goto LABEL_15;
  }
  v8 = 0;
  return v8 & ~QuestEntity__HasFlag_42469280(questEntity, 2, phase, 0) & 1;
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
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C40680 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_ServantStatusQuestBoardDraw_OnClick__);
    sub_1C37058(&StringLiteral_9872/*"OnClickServantQuest"*/);
    byte_4C40680 = 1;
  }
  inputMessageObject = (UnityEngine_Object_o *)this->fields.inputMessageObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(inputMessageObject, 0, 0) || (questId = this->fields.questId) == 0 )
  {
    v13 = Method_ServantStatusQuestBoardDraw_OnClick__;
    if ( (*((_BYTE *)Method_ServantStatusQuestBoardDraw_OnClick__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1C37070(Method_ServantStatusQuestBoardDraw_OnClick__);
    v14 = (System_Reflection_MethodBase_o *)sub_1C3703C(v13, v13[4]);
    OverwriteAssetSoundName__PlaySystemSe(v14, 2, 0, 0);
  }
  else
  {
    v11 = this->fields.inputMessageObject;
    v15 = questId;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v4, v5, v6, v7, v8, v9);
    if ( !v11 )
      sub_1C372B4(v12);
    UnityEngine_GameObject__SendMessage_71248540(v11, (System_String_o *)StringLiteral_9872/*"OnClickServantQuest"*/, v12, 0);
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

  if ( (byte_4C40675 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1C37058(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    byte_4C40675 = 1;
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
    v8 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    p_mInfoTextList->klass = (CGThumbnailListItem_c *)v8;
    sub_1C36FFC(p_mInfoTextList, (int32_t)v8, v9, v10);
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
  System_String_o *monitor; // x21
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  bool v22; // w25
  int32_t monitor_high; // w22
  char v24; // w23
  Il2CppObject *PrioredName; // x0
  System_String_o *v26; // x0
  int32_t targetId; // w26
  __int64 v28; // x27
  int32_t WarID_ByQuestID; // w26
  Il2CppObject *v30; // x0
  int64_t OpenedAt; // x26
  System_Object_array *v32; // x26
  System_DateTime_o v33; // x0
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x5
  __int64 v38; // x6
  __int64 v39; // x7
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  Il2CppObject *v42; // x27
  System_DateTime_o v43; // x0
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  __int64 v47; // x5
  __int64 v48; // x6
  __int64 v49; // x7
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  Il2CppObject *v52; // x27
  System_DateTime_o v53; // x0
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  __int64 v57; // x5
  __int64 v58; // x6
  __int64 v59; // x7
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  Il2CppObject *v62; // x27
  System_DateTime_o v63; // x0
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  __int64 v67; // x5
  __int64 v68; // x6
  __int64 v69; // x7
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  Il2CppObject *v72; // x27
  _BOOL4 v73; // w26
  UILabel_o *mTitleNameLb; // x24
  Il2CppClass *klass; // x1
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

  if ( (byte_4C40677 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ClosedMessageMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_1C37058(&System_DateTime_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&object___TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ServantStatusQuestBoardDraw_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C37058(&StringLiteral_14825/*"UNKNOWN_QUEST_NAME"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C40677 = 1;
  }
  dateData = 0;
  entity = 0;
  if ( questReleaseClosedID < 1 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ClosedMessageMaster___);
  if ( !Master_object )
    goto LABEL_115;
  monitor = (System_String_o *)StringLiteral_1/*""*/;
  Master_object = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    questReleaseClosedID,
                    (const MethodInfo_33A10EC *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
  if ( (Master_object & 1) != 0 )
  {
    Master_object = (__int64)entity;
    if ( !entity )
      goto LABEL_115;
    monitor = (System_String_o *)entity[1].monitor;
    Master_object = ClosedMessageEntity__IsChangeDispClosedMessage((ClosedMessageEntity_o *)entity, 0);
    if ( !entity )
      goto LABEL_115;
    v22 = Master_object;
    Master_object = ClosedMessageEntity__IsChangeDispPositionLeft((ClosedMessageEntity_o *)entity, 0);
    if ( !entity )
      goto LABEL_115;
    monitor_high = HIDWORD(entity[2].monitor);
    v24 = Master_object;
  }
  else
  {
    monitor_high = 0;
    v24 = 0;
    v22 = 0;
  }
  if ( !questReleaseEntity )
    goto LABEL_115;
  switch ( questReleaseEntity->fields.type )
  {
    case 1:
      targetId = questReleaseEntity->fields.targetId;
      v28 = StringLiteral_1/*""*/;
      Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Master_object )
        goto LABEL_115;
      WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Master_object, targetId, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !Master_object )
        goto LABEL_115;
      v30 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              WarID_ByQuestID,
              (const MethodInfo_33A10A0 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( v30 )
      {
        PrioredName = (Il2CppObject *)WarEntity__GetPrioredName((WarEntity_o *)v30, 0);
LABEL_16:
        v26 = System_String__Format(monitor, PrioredName, 0);
LABEL_42:
        monitor = v26;
      }
      else
      {
        monitor = (System_String_o *)v28;
      }
LABEL_43:
      if ( warEntity != 0 && !v22 )
        v22 = WarEntity__IsChangeDispClosedMessage(warEntity, 0);
      if ( !questReleaseOverwriteEntity )
      {
        v73 = 0;
        if ( v22 )
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
      v73 = !System_String__IsNullOrEmpty(questReleaseOverwriteEntity->fields.overlayClosedMessage, 0);
      if ( !v22 )
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
          Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14825/*"UNKNOWN_QUEST_NAME"*/, 0);
          klass = (Il2CppClass *)Master_object;
        }
        if ( !mTitleNameLb )
LABEL_115:
          sub_1C372B4(Master_object);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14825/*"UNKNOWN_QUEST_NAME"*/, 0);
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
      if ( !v73 )
        v78 = 8;
      v79 = *(int32_t *)((char *)&static_fields->TITLE_LABEL_BASE_WIDTH + v78);
      if ( v73 )
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
      if ( (v24 & 1) != 0 )
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
        if ( !v73 )
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
        if ( !v73 )
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
      if ( v73 )
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
      PrioredName = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &value, v16, v17, v18, v19, v20, v21);
      goto LABEL_16;
    case 0xC:
      if ( !questEntity )
        goto LABEL_115;
      OpenedAt = QuestEntity__getOpenedAt(questEntity, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      dateData = NetworkManager__getServerDateTime_41367476(OpenedAt, 0).fields._dateData;
      v32 = (System_Object_array *)sub_1C37100(object___TypeInfo, 4);
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v33.fields._dateData = (uint64_t)&dateData;
      LODWORD(value) = System_DateTime__get_Month(v33, 0);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &value, v34, v35, v36, v37, v38, v39);
      if ( !v32 )
        goto LABEL_115;
      v42 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1C37194(Master_object, v32->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_117;
      }
      if ( !LODWORD(v32->max_length) )
        goto LABEL_116;
      v32->m_Items[0] = v42;
      sub_1C36FFC((CGThumbnailListItem_o *)v32->m_Items, (int32_t)v42, v40, v41);
      v43.fields._dateData = (uint64_t)&dateData;
      Day = System_DateTime__get_Day(v43, 0);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Day, v44, v45, v46, v47, v48, v49);
      v52 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1C37194(Master_object, v32->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_117;
      }
      if ( LODWORD(v32->max_length) <= 1 )
        goto LABEL_116;
      v32->m_Items[1] = v52;
      sub_1C36FFC((CGThumbnailListItem_o *)&v32->m_Items[1], (int32_t)v52, v50, v51);
      v53.fields._dateData = (uint64_t)&dateData;
      Hour = System_DateTime__get_Hour(v53, 0);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Hour, v54, v55, v56, v57, v58, v59);
      v62 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1C37194(Master_object, v32->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_117;
      }
      if ( LODWORD(v32->max_length) <= 2 )
        goto LABEL_116;
      v32->m_Items[2] = v62;
      sub_1C36FFC((CGThumbnailListItem_o *)&v32->m_Items[2], (int32_t)v62, v60, v61);
      v63.fields._dateData = (uint64_t)&dateData;
      Minute = System_DateTime__get_Minute(v63, 0);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Minute, v64, v65, v66, v67, v68, v69);
      v72 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1C37194(Master_object, v32->obj.klass->_1.element_class);
        if ( !Master_object )
        {
LABEL_117:
          v100 = sub_1C372D8();
          sub_1C37180(v100, 0);
        }
      }
      if ( LODWORD(v32->max_length) <= 3 )
LABEL_116:
        sub_1C372BC(Master_object);
      v32->m_Items[3] = v72;
      sub_1C36FFC((CGThumbnailListItem_o *)&v32->m_Items[3], (int32_t)v72, v70, v71);
      v26 = System_String__Format_63603084(monitor, v32, 0);
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

  if ( (byte_4C40673 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&ServantStatusQuestBoardDraw_TypeInfo);
    sub_1C37058(&StringLiteral_11927/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C40673 = 1;
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
  mLineSp = (UIWidget_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11927/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/, 0);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mRewardIconInfs, 0, v7, v8);
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
    sub_1C372B4(mLineSp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0);
  this->fields.inputMessageObject = 0;
  p_inputMessageObject = &this->fields.inputMessageObject;
  sub_1C36FFC((CGThumbnailListItem_o *)p_inputMessageObject, 0, v10, v11);
  *((_DWORD *)p_inputMessageObject + 2) = 0;
  p_inputMessageObject[2] = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)(p_inputMessageObject + 2), 0, v12, v13);
}


void ServantStatusQuestBoardDraw__SetInfoTextAlpha(
        ServantStatusQuestBoardDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8
  BoardOptionTextWithIconComponent_o *mOptionInfoLb; // x0

  if ( (byte_4C4067A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4C4067A = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList && mInfoTextList->fields._size >= 2 )
  {
    mOptionInfoLb = this->fields.mOptionInfoLb;
    if ( !mOptionInfoLb )
      sub_1C372B4(0);
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
  bool IsSvtCoinQuest; // w27
  bool v14; // w26
  int current; // w22
  QuestEntity_o *Mine; // x24
  const MethodInfo *v17; // x1
  bool v18; // w26
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  char v21; // w28
  const MethodInfo *v22; // x1
  _BOOL4 IsClear; // w29
  int32_t id; // w8
  int32_t warId; // w20
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v27; // x20
  _BOOL4 v28; // w25
  QuestReleaseEntity_o **v29; // x28
  Il2CppObject *v30; // x25
  bool HasStatus; // w22
  int32_t questPhase; // w20
  int32_t PhaseMax; // w8
  Il2CppObject *v34; // x0
  _BOOL4 v35; // w20
  int v36; // w23
  float v37; // s9
  _BOOL4 v38; // w26
  float v39; // s8
  BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x22
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct UISprite_o *mcBaseP; // x8
  struct UIAtlas_o *mAtlas; // x1
  UISprite_o *v45; // x20
  _BOOL4 v46; // w23
  UISprite_o *v47; // x20
  UISprite_o *v48; // x20
  _BOOL4 v49; // w25
  ServantStatusQuestBoardDraw_c *v50; // x0
  UISprite_o *v51; // x25
  System_String_o *BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME; // x20
  UISprite_o *v53; // x20
  _BOOL4 v54; // w20
  UISprite_o *mTitleSp; // x20
  _BOOL4 v56; // w29
  UISprite_o *v57; // x25
  uint32_t cctor_finished; // w8
  __int64 v59; // x9
  _BOOL4 v60; // w9
  UISprite_o *v61; // x25
  ServantStatusQuestBoardDraw_c *v62; // x0
  System_String_o *TITLE_SPRITE_NAME_LIMIT_UNSEAL; // x20
  bool v64; // w0
  UISprite_o *v65; // x20
  UISprite_o *v66; // x20
  UISprite_o *mTitle2Sp; // x20
  UISprite_o *mLineSp; // x20
  struct UISprite_o *v69; // x8
  int v70; // s0 OVERLAPPED
  int v71; // s1
  int v72; // s2
  float v73; // s3
  Il2CppObject *v74; // x20
  System_Collections_Generic_List_object__o *v75; // x25
  ServantStatusQuestBoardDraw___c_c *v76; // x0
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *v77; // x25
  System_Func_object__int__o *_9__48_0; // x20
  Il2CppObject *v79; // x29
  struct ServantStatusQuestBoardDraw___c_StaticFields *static_fields; // x0
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x0
  Il2CppObject *v84; // x0
  int64_t v85; // x5
  const MethodInfo *v86; // x7
  QuestReleaseOverwriteEntity_o *v87; // x25
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *v88; // x20
  System_Func_object__bool__o *v89; // x29
  Il2CppObject *v90; // x0
  QuestReleaseEntity_o *v91; // x4
  ServantStatusQuestBoardManager_o *v92; // x28
  UILabel_o *v93; // x20
  System_String_o **v94; // x8
  LocalizationManager_c *v95; // x0
  System_String_o **v96; // x9
  System_String_o *v97; // x23
  const MethodInfo *v98; // x2
  struct UILabel_o *mTitleNameLb; // x20
  System_String_o *v100; // x1
  System_String_o *v101; // x20
  Il2CppObject *v102; // x23
  Il2CppObject *BattleName; // x0
  int32_t monitor; // w20
  int32_t TITLE_LABEL_BASE_WIDTH; // w23
  bool v106; // cc
  UnityEngine_Transform_o *v107; // x20
  struct UILabel_o *v108; // x8
  UnityEngine_GameObject_o *v109; // x23
  float y; // s1
  float x; // s0 OVERLAPPED
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *v113; // x8
  int v114; // s2
  int v115; // s1
  int v116; // s0 OVERLAPPED
  float v117; // s3
  struct UnityEngine_GameObject_o *v118; // x20
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  struct UnityEngine_GameObject_o *v121; // x1
  UISprite_o *mTitleShortcutSp; // x20
  struct UISprite_o *v123; // x8
  int32_t ServantId; // w20
  BoardOptionTextWithIconComponent_o *v125; // x23
  UILabel_o *mTitleShortcutLb; // x20
  Il2CppObject *v127; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x25
  intptr_t m_CachedPtr; // x27
  ServantLimitImageMaster_o *v130; // x23
  const MethodInfo *v131; // x1
  const MethodInfo *v132; // x1
  __int64 endTime; // x23
  System_Collections_Generic_List_object__o *mInfoTextList; // x20
  System_String_o *v135; // x27
  QuestBoardInformationText_o *v136; // x25
  int32_t v137; // w2
  const MethodInfo *v138; // x3
  struct System_Object_array *items; // x8
  _QWORD *v140; // x9
  __int64 size; // x10
  Il2CppClass **v142; // x0
  int32_t v143; // w23
  int32_t v144; // w0
  int32_t v145; // w1
  struct System_Collections_Generic_List_QuestBoardInformationText__o *v146; // x20
  int32_t v147; // w2
  int v148; // w8
  int32_t v149; // w9
  bool v150; // w20
  int32_t v151; // w8
  int32_t v152; // w2
  const MethodInfo *v153; // x3
  int32_t giftIconId; // w1
  bool v155; // w1
  int v156; // w8
  UnityEngine_Component_o *mServantLimitRewardObtainedSP; // x20
  char v158; // w20
  int32_t v159; // w2
  const MethodInfo *v160; // x3
  struct System_Threading_CancellationTokenSource_o *v161; // x8
  struct GiftEntity_array *v162; // x21
  int v163; // w9
  int32_t *v164; // x9
  int32_t v165; // w1
  int v166; // w8
  int64_t v167; // x2
  int64_t v168; // x3
  const MethodInfo *v169; // [xsp+0h] [xbp-150h]
  _BOOL4 v170; // [xsp+1Ch] [xbp-134h]
  _BOOL4 v171; // [xsp+20h] [xbp-130h]
  __int64 v172; // [xsp+20h] [xbp-130h]
  int32_t limitCounta; // [xsp+2Ch] [xbp-124h]
  WarEntity_o *warEntity; // [xsp+30h] [xbp-120h]
  int v175; // [xsp+3Ch] [xbp-114h]
  int questReleaseClosedID; // [xsp+40h] [xbp-110h]
  int32_t phase; // [xsp+44h] [xbp-10Ch]
  QuestBehaviorMaster_o *v178; // [xsp+48h] [xbp-108h]
  bool v179; // [xsp+50h] [xbp-100h]
  int v180; // [xsp+54h] [xbp-FCh]
  int64_t nowTime; // [xsp+58h] [xbp-F8h]
  int32_t QuestType; // [xsp+6Ch] [xbp-E4h]
  _BOOL4 IsLimitCountSealQuest; // [xsp+70h] [xbp-E0h]
  char v185; // [xsp+74h] [xbp-DCh]
  ServantStatusQuestBoardManager_o *v186; // [xsp+78h] [xbp-D8h]
  Il2CppObject *object; // [xsp+80h] [xbp-D0h]
  System_Collections_Generic_List_Enumerator_int__o v188; // [xsp+88h] [xbp-C8h] BYREF
  bool isNotItemConsume; // [xsp+A4h] [xbp-ACh] BYREF
  int32_t fixedVal[2]; // [xsp+A8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v191; // [xsp+B0h] [xbp-A0h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+C8h] [xbp-88h] BYREF
  UserQuestEntity_o *v193; // [xsp+D0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+D8h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v195; // 0:x0.16
  UnityEngine_Vector3_o v196; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v197; // 0:s0.4,4:s1.4,8:s2.4
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
  UnityEngine_Color_o v211; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C40674 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_QuestExtensionMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity____78147488);
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderByDescending_QuestReleaseOverwriteEntity__int___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C37058(&System_Func_QuestReleaseOverwriteEntity__int__TypeInfo);
    sub_1C37058(&System_Func_QuestReleaseOverwriteEntity__bool__TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&QuestBoardInformationText_TypeInfo);
    sub_1C37058(&ServantStatusQuestBoardDraw_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C37058(&Method_ServantStatusQuestBoardDraw___c__SetItem_b__48_0__);
    sub_1C37058(&Method_ServantStatusQuestBoardDraw___c__DisplayClass48_0__SetItem_b__1__);
    sub_1C37058(&ServantStatusQuestBoardDraw___c__DisplayClass48_0_TypeInfo);
    sub_1C37058(&ServantStatusQuestBoardDraw___c_TypeInfo);
    sub_1C37058(&StringLiteral_13431/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_1C37058(&StringLiteral_20374/*"img_conductor_line"*/);
    sub_1C37058(&StringLiteral_20377/*"img_conductor_questboard_paladin"*/);
    sub_1C37058(&StringLiteral_25101/*"{0}"*/);
    sub_1C37058(&StringLiteral_20379/*"img_conductor_quicklink_02"*/);
    sub_1C37058(&StringLiteral_11998/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE2"*/);
    sub_1C37058(&StringLiteral_20223/*"icon_reward_limits_release"*/);
    sub_1C37058(&StringLiteral_12000/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT2"*/);
    sub_1C37058(&StringLiteral_11999/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/);
    sub_1C37058(&StringLiteral_20373/*"img_conductor_05"*/);
    sub_1C37058(&StringLiteral_20378/*"img_conductor_quicklink"*/);
    sub_1C37058(&StringLiteral_20380/*"img_conductor_scq"*/);
    sub_1C37058(&StringLiteral_20375/*"img_conductor_line_white"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_20381/*"img_conductor_sq"*/);
    sub_1C37058(&StringLiteral_11997/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE"*/);
    sub_1C37058(&StringLiteral_11952/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/);
    byte_4C40674 = 1;
  }
  v193 = 0;
  entity = 0;
  entityList = 0;
  memset(&v191, 0, sizeof(v191));
  *(_QWORD *)fixedVal = 0;
  isNotItemConsume = 0;
  object = (Il2CppObject *)sub_1C372A4(ServantStatusQuestBoardDraw___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor(object, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (BoardOptionTextWithIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestExtensionMaster___);
  if ( !qinf || !Master_object )
    goto LABEL_382;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         qinf->fields.questId,
         (const MethodInfo_33A10EC *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__) )
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
  Master_object = (BoardOptionTextWithIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Master_object )
    goto LABEL_382;
  limitCounta = limitCount;
  v186 = questBoardManager;
  Master_object = (BoardOptionTextWithIconComponent_o *)QuestGroupMaster__GetInterludeQuestIdList(
                                                          (QuestGroupMaster_o *)Master_object,
                                                          qinf->fields.questId,
                                                          0);
  if ( !Master_object )
    goto LABEL_382;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v188,
    (System_Collections_Generic_List_int__o *)Master_object,
    (const MethodInfo_3786AD4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v191 = v188;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v191,
            (const MethodInfo_35299F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v14 )
      break;
    current = v191.fields._current;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsQuestClear_40324848(current, -1, 0, 0) )
      goto LABEL_22;
  }
  current = 0;
LABEL_22:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v191,
    (const MethodInfo_35299F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( !questBoardManager )
    goto LABEL_382;
  nowTime = questBoardManager->fields.mListCreatedTime;
  Mine = MapControl_QuestInfo__GetMine(qinf, 0);
  QuestType = MapControl_QuestInfo__GetQuestType(qinf, 0);
  v18 = v14 || MapControl_QuestInfo__IsClear(qinf, 0);
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  Master_object = (BoardOptionTextWithIconComponent_o *)ServantStatusQuestBoardDraw__IsClose(qinf, v17);
  v21 = (char)Master_object;
  if ( beforeQuestInfo )
  {
    IsClear = MapControl_QuestInfo__IsClear(beforeQuestInfo, 0);
    if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    Master_object = (BoardOptionTextWithIconComponent_o *)ServantStatusQuestBoardDraw__IsClose(beforeQuestInfo, v22);
    v175 = (unsigned __int8)Master_object & 1;
    if ( !Mine )
      goto LABEL_382;
  }
  else
  {
    v175 = 0;
    IsClear = 1;
    if ( !Mine )
      goto LABEL_382;
  }
  id = Mine->fields.id;
  this->fields.qinf = qinf;
  this->fields.questId = id;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.qinf, (int32_t)qinf, v19, v20);
  warId = qinf->fields.warId;
  Master_object = (BoardOptionTextWithIconComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Master_object )
    goto LABEL_382;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Master_object, warId, 0);
  v27 = WarEntityByWarID;
  if ( WarEntityByWarID )
    v28 = !WarEntity__IsFolder(WarEntityByWarID, 0);
  else
    v28 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (BoardOptionTextWithIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_object )
    goto LABEL_382;
  IsLimitCountSealQuest = ServantLimitImageMaster__IsLimitCountSealQuest(
                            (ServantLimitImageMaster_o *)Master_object,
                            this->fields.questId,
                            0);
  Master_object = (BoardOptionTextWithIconComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !object )
    goto LABEL_382;
  v185 = v21;
  if ( !Master_object )
    goto LABEL_382;
  v29 = (QuestReleaseEntity_o **)&object[1];
  clsQuestCheck__mfQuestReleaseCheckGetEntityByQuestID(
    (clsQuestCheck_o *)Master_object,
    Mine->fields.id,
    (QuestReleaseEntity_o **)&object[1],
    qinf,
    0);
  if ( object[1].klass )
    questReleaseClosedID = (*v29)->fields.closedMessageId;
  else
    questReleaseClosedID = 0;
  v171 = v28;
  warEntity = v27;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v30 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
  }
  Master_object = (BoardOptionTextWithIconComponent_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (BoardOptionTextWithIconComponent_o *)NetworkManager_TypeInfo;
  }
  if ( current < 1 )
  {
    if ( !v30 )
      goto LABEL_382;
    current = this->fields.questId;
  }
  else if ( !v30 )
  {
    goto LABEL_382;
  }
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)v30,
    &v193,
    (int64_t)Master_object[2].fields.m_CancellationTokenSource[1].klass,
    current,
    0);
  if ( v193 )
    HasStatus = UserQuestEntity__HasStatus(v193, 4, 0);
  else
    HasStatus = 0;
  questPhase = qinf->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(qinf, 0);
  if ( questPhase + 1 < PhaseMax )
    PhaseMax = questPhase + 1;
  phase = PhaseMax;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v34 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  v35 = !v18 && IsClear;
  v178 = (QuestBehaviorMaster_o *)v34;
  if ( v18 )
  {
    v36 = 1;
LABEL_77:
    v37 = 1.0;
    v38 = v36;
    if ( IsSvtCoinQuest )
      v39 = 1.0;
    else
      v39 = 0.5;
    v36 = 1;
    goto LABEL_81;
  }
  if ( v34 )
  {
    if ( QuestBehaviorMaster__IsOpenQuestBehaviorCond((QuestBehaviorMaster_o *)v34, this->fields.questId, phase, 9, 0) )
    {
      v185 = 0;
      questReleaseClosedID = 0;
      HasStatus = 0;
      v36 = 1;
      IsClear = v35;
      goto LABEL_77;
    }
    IsClear = v35;
  }
  v36 = 0;
  if ( (v185 & 1) != 0 )
  {
    v185 = 1;
    goto LABEL_77;
  }
  v39 = 1.0;
  v38 = 0;
  v185 = 0;
  v37 = 1.0;
LABEL_81:
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitleObj;
  v179 = HasStatus;
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.basePanelAtlas, (int32_t)mAtlas, v41, v42);
  Master_object = (BoardOptionTextWithIconComponent_o *)ServantStatusQuestBoardDraw_TypeInfo;
  v45 = this->fields.mcBaseP;
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  v180 = v36;
  if ( !v45 )
    goto LABEL_382;
  UISprite__set_spriteName(v45, ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME, 0);
  v46 = !IsSvtCoinQuest && IsClear;
  if ( IsSvtCoinQuest )
  {
    v47 = this->fields.mcBaseP;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( !AtlasManager__SetEventUI(v47, (System_String_o *)StringLiteral_20377/*"img_conductor_questboard_paladin"*/, 0) )
    {
      Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mcBaseP;
      if ( !Master_object )
        goto LABEL_382;
      UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0);
      Master_object = (BoardOptionTextWithIconComponent_o *)ServantStatusQuestBoardDraw_TypeInfo;
      v48 = this->fields.mcBaseP;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      if ( !v48 )
        goto LABEL_382;
      UISprite__set_spriteName(v48, ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME, 0);
    }
    v46 = 0;
    v49 = IsClear;
  }
  else if ( IsLimitCountSealQuest )
  {
    v50 = ServantStatusQuestBoardDraw_TypeInfo;
    v51 = this->fields.mcBaseP;
    if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      v50 = ServantStatusQuestBoardDraw_TypeInfo;
    }
    BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME = v50->static_fields->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( !AtlasManager__SetEventUI(v51, BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME, 0) )
    {
      Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mcBaseP;
      if ( !Master_object )
        goto LABEL_382;
      UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0);
      v53 = this->fields.mcBaseP;
      Master_object = (BoardOptionTextWithIconComponent_o *)ServantStatusQuestBoardDraw_TypeInfo;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      if ( !v53 )
        goto LABEL_382;
      UISprite__set_spriteName(v53, ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME, 0);
    }
    v49 = 0;
    IsClear = v46;
  }
  else
  {
    v49 = 0;
    v46 = IsClear;
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
  v198.fields.r = v39;
  v198.fields.g = v39;
  v198.fields.b = v39;
  v198.fields.a = v37;
  UIWidget__set_color((UIWidget_o *)Master_object, v198, 0);
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mLineSp;
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0);
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mLineSp;
  if ( !Master_object )
    goto LABEL_382;
  v199.fields.r = v39;
  v199.fields.g = v39;
  v199.fields.b = v39;
  v199.fields.a = v37;
  UIWidget__set_color((UIWidget_o *)Master_object, v199, 0);
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitle2Sp;
  v54 = v38 && IsClear;
  if ( IsSvtCoinQuest || !v38 )
  {
    if ( !Master_object )
      goto LABEL_382;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0);
    Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitle2Sp;
    if ( !Master_object )
      goto LABEL_382;
    v200.fields.r = v39;
    v200.fields.g = v39;
    v200.fields.b = v39;
    v200.fields.a = v37;
    UIWidget__set_color((UIWidget_o *)Master_object, v200, 0);
    Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_382;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0);
    if ( IsSvtCoinQuest )
    {
      mTitleSp = this->fields.mTitleSp;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( AtlasManager__SetEventUI(mTitleSp, (System_String_o *)StringLiteral_20373/*"img_conductor_05"*/, 0) )
      {
        v196.fields.x = -22.0;
        v196.fields.y = 0.0;
        v196.fields.z = 0.0;
        ComponentHelper__SetLocalPosition((UnityEngine_Component_o *)this->fields.mTitleSp, v196, 0);
      }
      else
      {
        Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitleSp;
        if ( !Master_object )
          goto LABEL_382;
        UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0);
        v66 = this->fields.mTitleSp;
        Master_object = (BoardOptionTextWithIconComponent_o *)ServantStatusQuestBoardDraw_TypeInfo;
        if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
        if ( !v66 )
          goto LABEL_382;
        UISprite__set_spriteName(
          v66,
          ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_SPRITE_NAME_INTERLUDE,
          0);
      }
      mTitle2Sp = this->fields.mTitle2Sp;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( !AtlasManager__SetEventUI(mTitle2Sp, (System_String_o *)StringLiteral_20379/*"img_conductor_quicklink_02"*/, 0) )
      {
        Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitle2Sp;
        if ( !Master_object )
          goto LABEL_382;
        UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0);
        Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitle2Sp;
        if ( !Master_object )
          goto LABEL_382;
        UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)StringLiteral_20378/*"img_conductor_quicklink"*/, 0);
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
      v201.fields.r = v39;
      v201.fields.g = v39;
      v201.fields.b = v39;
      v201.fields.a = v37;
      UIWidget__set_color((UIWidget_o *)Master_object, v201, 0);
      mLineSp = this->fields.mLineSp;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      Master_object = (BoardOptionTextWithIconComponent_o *)AtlasManager__SetEventUI(
                                                              mLineSp,
                                                              (System_String_o *)StringLiteral_20375/*"img_conductor_line_white"*/,
                                                              0);
      v69 = this->fields.mLineSp;
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !v69 )
          goto LABEL_382;
        v70 = 1060023983;
        v71 = 1058839709;
        v72 = 1051240617;
        v73 = 1.0;
        Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mLineSp;
      }
      else
      {
        if ( !v69 )
          goto LABEL_382;
        UISprite__set_atlas(this->fields.mLineSp, this->fields.basePanelAtlas, 0);
        Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mLineSp;
        if ( !Master_object )
          goto LABEL_382;
        UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)StringLiteral_20374/*"img_conductor_line"*/, 0);
        Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mLineSp;
        if ( !Master_object )
          goto LABEL_382;
        v70 = LODWORD(v39);
        v71 = LODWORD(v39);
        v72 = LODWORD(v39);
        v73 = v37;
      }
      UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)&v70, 0);
    }
    else
    {
      Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitleSp;
      v56 = QuestType == 3 && v46;
      if ( !Master_object )
        goto LABEL_382;
      UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0);
      v57 = this->fields.mTitleSp;
      Master_object = (BoardOptionTextWithIconComponent_o *)ServantStatusQuestBoardDraw_TypeInfo;
      cctor_finished = ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished;
      if ( QuestType != 3 )
      {
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
        if ( !v57 )
          goto LABEL_382;
        UISprite__set_spriteName(
          v57,
          ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_SPRITE_NAME_RAINFORCEMENT,
          0);
        goto LABEL_193;
      }
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      if ( !v57 )
        goto LABEL_382;
      v59 = 56;
      if ( !v171 )
        v59 = 48;
      v172 = v59;
      UISprite__set_spriteName(
        v57,
        *(System_String_o **)((char *)&ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH + v59),
        0);
      v60 = IsLimitCountSealQuest && v56;
      if ( !IsLimitCountSealQuest )
        goto LABEL_193;
      v170 = v60;
      v61 = this->fields.mTitleSp;
      v62 = ServantStatusQuestBoardDraw_TypeInfo;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
        v62 = ServantStatusQuestBoardDraw_TypeInfo;
      }
      TITLE_SPRITE_NAME_LIMIT_UNSEAL = v62->static_fields->TITLE_SPRITE_NAME_LIMIT_UNSEAL;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v64 = AtlasManager__SetEventUI(v61, TITLE_SPRITE_NAME_LIMIT_UNSEAL, 0);
      v49 = v170;
      v46 = v56;
      if ( v64 )
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
        v202.fields.r = v39;
        v202.fields.g = v39;
        v202.fields.b = v39;
        v202.fields.a = v37;
        UIWidget__set_color((UIWidget_o *)Master_object, v202, 0);
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
                                                                (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( !Master_object )
          goto LABEL_382;
        v203.fields.r = v39;
        v203.fields.g = v39;
        v203.fields.b = v39;
        v203.fields.a = v37;
        UIWidget__set_color((UIWidget_o *)Master_object, v203, 0);
        goto LABEL_200;
      }
      Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitleSp;
      if ( !Master_object )
        goto LABEL_382;
      UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0);
      v65 = this->fields.mTitleSp;
      Master_object = (BoardOptionTextWithIconComponent_o *)ServantStatusQuestBoardDraw_TypeInfo;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      if ( !v65 )
        goto LABEL_382;
      UISprite__set_spriteName(
        v65,
        *(System_String_o **)((char *)&ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH + v172),
        0);
    }
    v46 = v49;
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
  v46 = v54;
LABEL_200:
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mClearObj;
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v38, 0);
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mNoneLb;
  if ( !Master_object )
    goto LABEL_382;
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v74 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  v75 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v75,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v75;
  if ( !v74 )
    goto LABEL_382;
  QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
    (QuestReleaseOverwriteMaster_o *)v74,
    &entityList,
    this->fields.questId,
    nowTime,
    0);
  v76 = ServantStatusQuestBoardDraw___c_TypeInfo;
  v77 = entityList;
  if ( !ServantStatusQuestBoardDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw___c_TypeInfo);
    v76 = ServantStatusQuestBoardDraw___c_TypeInfo;
  }
  _9__48_0 = (System_Func_object__int__o *)v76->static_fields->__9__48_0;
  if ( !_9__48_0 )
  {
    if ( !v76->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v76);
      v76 = ServantStatusQuestBoardDraw___c_TypeInfo;
    }
    v79 = (Il2CppObject *)v76->static_fields->__9;
    _9__48_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_QuestReleaseOverwriteEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__48_0, v79, Method_ServantStatusQuestBoardDraw___c__SetItem_b__48_0__, 0);
    static_fields = ServantStatusQuestBoardDraw___c_TypeInfo->static_fields;
    static_fields->__9__48_0 = (struct System_Func_QuestReleaseOverwriteEntity__int__o *)_9__48_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__48_0, (int32_t)_9__48_0, v81, v82);
    p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  }
  v83 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v77,
                                                               (System_Func_TSource__TKey__o *)_9__48_0,
                                                               (const MethodInfo_311792C *)Method_System_Linq_Enumerable_OrderByDescending_QuestReleaseOverwriteEntity__int___);
  v84 = System_Linq_Enumerable__FirstOrDefault_object_(
          v83,
          (const MethodInfo_311035C *)Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity___);
  v87 = (QuestReleaseOverwriteEntity_o *)v84;
  if ( *v29 )
  {
    if ( v84 )
    {
      v88 = entityList;
      v89 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_QuestReleaseOverwriteEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v89,
        object,
        Method_ServantStatusQuestBoardDraw___c__DisplayClass48_0__SetItem_b__1__,
        0);
      v90 = System_Linq_Enumerable__FirstOrDefault_object__51451648(
              (System_Collections_Generic_IEnumerable_TSource__o *)v88,
              (System_Func_TSource__bool__o *)v89,
              (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity____78147488);
      if ( v90 )
        v87 = (QuestReleaseOverwriteEntity_o *)v90;
    }
  }
  if ( IsSvtCoinQuest || v38 || v46 )
  {
    v91 = *v29;
    if ( questReleaseClosedID < 1 )
    {
      v92 = v186;
      if ( v91 && v91->fields.type == 8 )
      {
        mTitleNameLb = this->fields.mTitleNameLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Master_object = (BoardOptionTextWithIconComponent_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_11952/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/,
                                                                0);
        if ( !mTitleNameLb )
          goto LABEL_382;
        v100 = (System_String_o *)Master_object;
        Master_object = (BoardOptionTextWithIconComponent_o *)mTitleNameLb;
      }
      else
      {
        Master_object = (BoardOptionTextWithIconComponent_o *)QuestEntity__getQuestName(Mine, 0);
        if ( !Master_object )
          goto LABEL_382;
        v101 = (System_String_o *)Master_object;
        if ( System_String__Contains((System_String_o *)Master_object, (System_String_o *)StringLiteral_25101/*"{0}"*/, 0) )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v102 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantMaster___);
          Master_object = (BoardOptionTextWithIconComponent_o *)QuestEntity__getServantId(Mine, 0);
          if ( !v102 )
            goto LABEL_382;
          Master_object = (BoardOptionTextWithIconComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v102,
                                                                  (int32_t)Master_object,
                                                                  (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Master_object )
            goto LABEL_382;
          BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Master_object, 0, -1, 0);
          v101 = System_String__Format(v101, BattleName, 0);
        }
        Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitleNameLb;
        if ( !Master_object )
          goto LABEL_382;
        v100 = v101;
      }
      UILabel__set_text((UILabel_o *)Master_object, v100, 0);
    }
    else
    {
      ServantStatusQuestBoardDraw__SetAdvanceNoticeText(this, questReleaseClosedID, warEntity, Mine, v91, v85, v87, v86);
      v92 = v186;
    }
  }
  else
  {
    v93 = this->fields.mTitleNameLb;
    if ( QuestType == 3 )
    {
      v94 = (System_String_o **)&StringLiteral_11997/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE"*/;
      v95 = LocalizationManager_TypeInfo;
      v96 = (System_String_o **)&StringLiteral_11998/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE2"*/;
    }
    else
    {
      v94 = (System_String_o **)&StringLiteral_11999/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/;
      v95 = LocalizationManager_TypeInfo;
      v96 = (System_String_o **)&StringLiteral_12000/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT2"*/;
    }
    v92 = v186;
    if ( v175 )
      v94 = v96;
    v97 = *v94;
    if ( !v95->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v95);
    Master_object = (BoardOptionTextWithIconComponent_o *)LocalizationManager__Get(v97, 0);
    if ( !v93 )
      goto LABEL_382;
    UILabel__set_text(v93, (System_String_o *)Master_object, 0);
    if ( v87 )
      ServantStatusQuestBoardDraw__SetOverwriteCondText(this, v87, v98);
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
  v106 = monitor <= TITLE_LABEL_BASE_WIDTH;
  v107 = (UnityEngine_Transform_o *)Master_object;
  if ( v106 )
  {
    if ( !byte_4C3C926 )
    {
      Master_object = (BoardOptionTextWithIconComponent_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C926 = 1;
    }
    if ( !v107 )
      goto LABEL_382;
    v109 = inputMessageObject;
    v113 = UnityEngine_Vector3_TypeInfo->static_fields;
    y = v113->oneVector.fields.y;
    z = v113->oneVector.fields.z;
    x = v113->oneVector.fields.x;
  }
  else
  {
    Master_object = (BoardOptionTextWithIconComponent_o *)ServantStatusQuestBoardDraw_TypeInfo;
    if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    v108 = this->fields.mTitleNameLb;
    v109 = inputMessageObject;
    if ( !v108 || !v107 )
      goto LABEL_382;
    y = 1.0;
    x = (float)ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH / (float)v108->fields.mWidth;
    z = 1.0;
  }
  UnityEngine_Transform__set_localScale(v107, *(UnityEngine_Vector3_o *)&x, 0);
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitleNameLb;
  if ( IsSvtCoinQuest )
  {
    if ( !Master_object )
      goto LABEL_382;
    v114 = 1054398681;
    v115 = 1055714541;
    v116 = 1056372471;
    v117 = 1.0;
    v118 = v109;
  }
  else
  {
    if ( !Master_object )
      goto LABEL_382;
    v118 = 0;
    v116 = LODWORD(v39);
    v115 = LODWORD(v39);
    v114 = LODWORD(v39);
    v117 = v37;
  }
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)&v116, 0);
  if ( v180 )
    v121 = v118;
  else
    v121 = v109;
  this->fields.inputMessageObject = v121;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.inputMessageObject, (int32_t)v121, v119, v120);
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
                                                            (System_String_o *)StringLiteral_20380/*"img_conductor_scq"*/,
                                                            0);
    v123 = this->fields.mTitleShortcutSp;
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !v123 )
        goto LABEL_382;
      v204.fields.r = 0.48235;
      v204.fields.g = 0.46275;
      v204.fields.b = 0.42353;
      v204.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)this->fields.mTitleShortcutSp, v204, 0);
      v197.fields.y = 19.0;
      v197.fields.z = 0.0;
      v197.fields.x = -226.0;
      ComponentHelper__SetLocalPosition((UnityEngine_Component_o *)this->fields.mTitleShortcutSp, v197, 0);
    }
    else
    {
      if ( !v123 )
        goto LABEL_382;
      UISprite__set_atlas(this->fields.mTitleShortcutSp, this->fields.basePanelAtlas, 0);
      Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitleShortcutSp;
      if ( !Master_object )
        goto LABEL_382;
      UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)StringLiteral_20381/*"img_conductor_sq"*/, 0);
      Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitleShortcutSp;
      if ( !Master_object )
        goto LABEL_382;
      v207.fields.r = v39;
      v207.fields.g = v39;
      v207.fields.b = v39;
      v207.fields.a = v37;
      UIWidget__set_color((UIWidget_o *)Master_object, v207, 0);
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
    ServantStatusQuestBoardDraw__ResetInfoTextList(this, v132);
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
    v206.fields.r = v39;
    v206.fields.g = v39;
    v206.fields.b = v39;
    v206.fields.a = v37;
    UIWidget__set_color((UIWidget_o *)Master_object, v206, 0);
    Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mTitleShortcutLb;
    if ( !Master_object )
      goto LABEL_382;
    goto LABEL_298;
  }
  ServantId = QuestEntity__getServantId(Mine, 0);
  Master_object = (BoardOptionTextWithIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (BoardOptionTextWithIconComponent_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)Master_object,
                                                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (BoardOptionTextWithIconComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                          ServantId,
                                                          (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.mTitleShortcutSp )
    goto LABEL_382;
  v125 = Master_object;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mTitleShortcutSp, 0, 0);
  mTitleShortcutLb = this->fields.mTitleShortcutLb;
  if ( !v125 )
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
  v127 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  m_CachedPtr = v125->fields.m_CachedPtr;
  m_CancellationTokenSource = v125->fields.m_CancellationTokenSource;
  v130 = (ServantLimitImageMaster_o *)v127;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v195.fields.currentCryptoKey = m_CachedPtr;
  *(_QWORD *)&v195.fields.fakeValue = m_CancellationTokenSource;
  Master_object = (BoardOptionTextWithIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                          v195,
                                                          0);
  if ( !v130 )
    goto LABEL_382;
  Master_object = (BoardOptionTextWithIconComponent_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                          v130,
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
  v205.fields.r = v39;
  v205.fields.g = v39;
  v205.fields.b = v39;
  v205.fields.a = v37;
  UIWidget__set_color((UIWidget_o *)Master_object, v205, 0);
LABEL_299:
  ServantStatusQuestBoardDraw__ResetInfoTextList(this, v131);
  if ( v38 )
  {
LABEL_318:
    v150 = 0;
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
    v135 = LocalizationManager__Get((System_String_o *)StringLiteral_13431/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0);
    v136 = (QuestBoardInformationText_o *)sub_1C372A4(QuestBoardInformationText_TypeInfo);
    QuestBoardInformationText___ctor(v136, v135, endTime, 0, 1, 0, 0);
    if ( !mInfoTextList )
      goto LABEL_382;
    items = mInfoTextList->fields._items;
    v140 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
    ++mInfoTextList->fields._version;
    if ( !items )
      goto LABEL_382;
    size = mInfoTextList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        mInfoTextList,
        (Il2CppObject *)v136,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v140[4] + 192LL) + 112LL));
    }
    else
    {
      v142 = &items->obj.klass + size;
      mInfoTextList->fields._size = size + 1;
      v142[4] = (Il2CppClass *)v136;
      sub_1C36FFC((CGThumbnailListItem_o *)(v142 + 4), (int32_t)v136, v137, v138);
    }
  }
  v143 = qinf->fields.questPhase;
  v144 = MapControl_QuestInfo__GetPhaseMax(qinf, 0);
  v146 = this->fields.mInfoTextList;
  if ( v143 + 1 < v144 )
    v147 = v143 + 1;
  else
    v147 = v144;
  Master_object = (BoardOptionTextWithIconComponent_o *)ServantStatusQuestBoardDraw__GetCampaignText(
                                                          this,
                                                          v145,
                                                          v147,
                                                          0,
                                                          v92,
                                                          &fixedVal[1],
                                                          fixedVal,
                                                          &isNotItemConsume,
                                                          v169);
  if ( !v146 )
    goto LABEL_382;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v146,
    (System_Collections_Generic_IEnumerable_T__o *)Master_object,
    (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mInfoTextList;
  if ( !Master_object )
    goto LABEL_382;
  v148 = (int)Master_object->fields.m_CancellationTokenSource;
  if ( v148 < 1 )
    goto LABEL_318;
  Master_object = (BoardOptionTextWithIconComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                          (System_Collections_Generic_List_object__o *)Master_object,
                                                          v92->fields.mAlphaAnimCnt % v148,
                                                          (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
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
  v149 = fixedVal[1];
  v150 = 1;
  qinf->fields.isNotItemConsume = isNotItemConsume;
  v151 = fixedVal[0];
  qinf->fields.costCalcVal = v149;
  qinf->fields._fixedCostVal_k__BackingField = v151;
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v150, 0);
  Master_object = *p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_382;
  Master_object = (BoardOptionTextWithIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)Master_object,
                                                          0);
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v150, 0);
  this->fields.mRewardIconInfs = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mRewardIconInfs, 0, v152, v153);
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mRewardIcon;
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (BoardOptionTextWithIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)Master_object,
                                                          0);
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  if ( (v185 & 1) != 0 && QuestEntity__HasFlag(Mine, 4096, 0) )
  {
    Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mRewardIcon;
    if ( !Master_object )
      goto LABEL_382;
    giftIconId = 99;
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
    v155 = 1;
    goto LABEL_336;
  }
  giftIconId = Mine->fields.giftIconId;
  if ( giftIconId >= 1 )
  {
    Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mRewardIcon;
    if ( !Master_object )
      goto LABEL_382;
    goto LABEL_333;
  }
  if ( Mine->fields.giftId >= 1 )
  {
    Master_object = (BoardOptionTextWithIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_382;
    Master_object = (BoardOptionTextWithIconComponent_o *)DataManager__GetMasterData_object_(
                                                            (DataManager_o *)Master_object,
                                                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !Master_object )
      goto LABEL_382;
    Master_object = (BoardOptionTextWithIconComponent_o *)GiftMaster__GetGiftListById(
                                                            (GiftMaster_o *)Master_object,
                                                            Mine->fields.giftId,
                                                            0);
    if ( !Master_object )
      goto LABEL_382;
    v161 = Master_object->fields.m_CancellationTokenSource;
    v162 = (struct GiftEntity_array *)Master_object;
    if ( !v161 )
      goto LABEL_381;
    v163 = v92->fields.mAlphaAnimCnt % (int)v161;
    if ( v163 >= (unsigned int)v161 )
      sub_1C372BC(Master_object);
    v164 = (int32_t *)*((_QWORD *)&Master_object->fields.forwardLabel + v163);
    if ( v164 )
    {
      v165 = v164[11];
      Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mRewardIcon;
      v166 = v164[7];
      if ( v165 < 1 )
      {
        if ( !Master_object )
          goto LABEL_382;
        v168 = v166 <= 1 ? -1LL : (unsigned int)v164[7];
        ItemIconComponent__SetGift_40921900((ItemIconComponent_o *)Master_object, v164[5], v164[6], v168, 0, 0);
      }
      else
      {
        if ( !Master_object )
          goto LABEL_382;
        v167 = v166 <= 1 ? -1LL : (unsigned int)v164[7];
        ItemIconComponent__SetItemImage_40924348((ItemIconComponent_o *)Master_object, v165, v167, 0);
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
          this->fields.mRewardIconInfs = v162;
          sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mRewardIconInfs, (int32_t)v162, v159, v160);
          goto LABEL_337;
        }
      }
    }
LABEL_382:
    sub_1C372B4(Master_object);
  }
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mRewardObj;
  if ( !Master_object )
    goto LABEL_382;
  v155 = 0;
LABEL_336:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v155, 0);
LABEL_337:
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mRewardObj;
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (BoardOptionTextWithIconComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          (UnityEngine_GameObject_o *)Master_object,
                                                          (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Master_object )
    goto LABEL_382;
  v208.fields.r = v39;
  v208.fields.g = v39;
  v208.fields.b = v39;
  v208.fields.a = v37;
  UIWidget__set_color((UIWidget_o *)Master_object, v208, 0);
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mRewardIcon;
  if ( !Master_object )
    goto LABEL_382;
  v209.fields.r = v39;
  v209.fields.g = v39;
  v209.fields.b = v39;
  v209.fields.a = v37;
  ItemIconComponent__SetColor((ItemIconComponent_o *)Master_object, v209, 0);
  Master_object = (BoardOptionTextWithIconComponent_o *)v178;
  v156 = IsLimitCountSealQuest && v38;
  if ( !v178 || (v156 & 1) != 0 )
  {
    mServantLimitRewardObtainedSP = (UnityEngine_Component_o *)this->fields.mServantLimitRewardObtainedSP;
    if ( !v156 )
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
      v158 = 1;
      goto LABEL_354;
    }
  }
  else
  {
    Master_object = (BoardOptionTextWithIconComponent_o *)QuestBehaviorMaster__IsOpenQuestBehaviorCond(
                                                            v178,
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
    (System_String_o *)StringLiteral_20223/*"icon_reward_limits_release"*/,
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
  v210.fields.r = v39;
  v210.fields.g = v39;
  v210.fields.b = v39;
  v210.fields.a = v37;
  UIWidget__set_color((UIWidget_o *)Master_object, v210, 0);
  v158 = 0;
LABEL_354:
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mRewardGetSP;
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (BoardOptionTextWithIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)Master_object,
                                                          0);
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v38 & v158 & !v179, 0);
  Master_object = (BoardOptionTextWithIconComponent_o *)this->fields.mRewardGetSP;
  if ( !Master_object )
    goto LABEL_382;
  v211.fields.r = v39;
  v211.fields.g = v39;
  v211.fields.b = v39;
  v211.fields.a = v37;
  UIWidget__set_color((UIWidget_o *)Master_object, v211, 0);
}


void ServantStatusQuestBoardDraw__SetOverwriteCondText(
        ServantStatusQuestBoardDraw_o *this,
        QuestReleaseOverwriteEntity_o *questReleaseOverwriteEntity,
        const MethodInfo *method)
{
  System_String_o *overlayClosedMessage; // x0
  UnityEngine_GameObject_o *mCondObject; // x0
  UILabel_o *mCondChangeMessage; // x19

  if ( (byte_4C40678 & 1) == 0 )
  {
    sub_1C37058(&ServantStatusQuestBoardDraw_TypeInfo);
    byte_4C40678 = 1;
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
      sub_1C372B4(mCondObject);
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
      sub_1C372B4(0);
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

  if ( (byte_4C40676 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    byte_4C40676 = 1;
  }
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !mInfoTextList
    || (mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       mInfoTextList,
                                                                       strIndex,
                                                                       (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__)) == 0 )
  {
    sub_1C372B4(mInfoTextList);
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
    sub_1C372B4(this);
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
  if ( (byte_4C40682 & 1) == 0 )
  {
    label = (UILabel_o *)sub_1C37058(&ServantStatusQuestBoardDraw_TypeInfo);
    byte_4C40682 = 1;
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
    sub_1C372B4(label);
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
        sub_1C372BC(this);
      this = (ServantStatusQuestBoardDraw_o *)boardMessageData->m_Items[v5];
      if ( !this )
        break;
      if ( HIDWORD(this->fields.m_CancellationTokenSource) == 4 && LODWORD(this->fields.mcBaseP) == eventId )
        return (BoardMessageEntity_o *)this;
      if ( max_length == ++v5 )
        return 0;
    }
LABEL_12:
    sub_1C372B4(this);
  }
  return 0;
}


void ServantStatusQuestBoardDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C40683 & 1) == 0 )
  {
    sub_1C37058(&ServantStatusQuestBoardDraw___c_TypeInfo);
    byte_4C40683 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ServantStatusQuestBoardDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantStatusQuestBoardDraw___c_TypeInfo->static_fields->__9 = (struct ServantStatusQuestBoardDraw___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ServantStatusQuestBoardDraw___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
  return entity->fields.imagePriority == rQuestRlsNG->fields.imagePriority;
}