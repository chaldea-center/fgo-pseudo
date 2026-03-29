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

  if ( (byte_4D2E5BF & 1) == 0 )
  {
    sub_1C93AD4(&ServantStatusQuestBoardDraw_TypeInfo);
    sub_1C93AD4(&StringLiteral_20598/*"img_conductor_03"*/);
    sub_1C93AD4(&StringLiteral_20599/*"img_conductor_04"*/);
    sub_1C93AD4(&StringLiteral_20597/*"img_conductor_02"*/);
    sub_1C93AD4(&StringLiteral_20745/*"img_questboard_1001"*/);
    sub_1C93AD4(&StringLiteral_20596/*"img_conductor_01"*/);
    sub_1C93AD4(&StringLiteral_20603/*"img_conductor_questboard"*/);
    sub_1C93AD4(&StringLiteral_20592/*"img_commonbg"*/);
    byte_4D2E5BF = 1;
  }
  static_fields = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->TITLE_LABEL_BASE_WIDTH = xmmword_D01790;
  static_fields->ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X = -208.0;
  v8 = StringLiteral_20592/*"img_commonbg"*/;
  static_fields->DARK_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_20592/*"img_commonbg"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->DARK_BOARD_SPRITE_NAME, v8, v1, v2, v3, v4, v5, v6);
  v9 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  *(_QWORD *)&v9->DARK_BOARD_WIDTH = 0x7A000001F0LL;
  v10 = StringLiteral_20603/*"img_conductor_questboard"*/;
  v9->BASE_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_20603/*"img_conductor_questboard"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v9->BASE_BOARD_SPRITE_NAME, v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_20597/*"img_conductor_02"*/;
  v18 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v18->TITLE_SPRITE_NAME_INTERLUDE = (struct System_String_o *)StringLiteral_20597/*"img_conductor_02"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v18->TITLE_SPRITE_NAME_INTERLUDE, v17, v19, v20, v21, v22, v23, v24);
  v25 = StringLiteral_20596/*"img_conductor_01"*/;
  v26 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v26->TITLE_SPRITE_NAME_INTERLUDE_MAP = (struct System_String_o *)StringLiteral_20596/*"img_conductor_01"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v26->TITLE_SPRITE_NAME_INTERLUDE_MAP, v25, v27, v28, v29, v30, v31, v32);
  v33 = StringLiteral_20598/*"img_conductor_03"*/;
  v34 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v34->TITLE_SPRITE_NAME_RAINFORCEMENT = (struct System_String_o *)StringLiteral_20598/*"img_conductor_03"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v34->TITLE_SPRITE_NAME_RAINFORCEMENT, v33, v35, v36, v37, v38, v39, v40);
  v41 = StringLiteral_20745/*"img_questboard_1001"*/;
  v42 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v42->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME = (struct System_String_o *)StringLiteral_20745/*"img_questboard_1001"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v42->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME,
    v41,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v49 = StringLiteral_20599/*"img_conductor_04"*/;
  v50 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v50->TITLE_SPRITE_NAME_LIMIT_UNSEAL = (struct System_String_o *)StringLiteral_20599/*"img_conductor_04"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v50->TITLE_SPRITE_NAME_LIMIT_UNSEAL, v49, v51, v52, v53, v54, v55, v56);
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

  if ( (byte_4D2E5B7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2E5B7 = 1;
  }
  if ( (byte_4D2E5B8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4D2E5B8 = 1;
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
                                                                       (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
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
      sub_1C93D2C(mInfoTextList, qinf);
    }
  }
  if ( (byte_4D2E5B9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4D2E5B9 = 1;
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  }
  if ( !mInfoTextList || !mInfoTextList->fields._size )
    return;
  mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 mInfoTextList,
                                                                 0,
                                                                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
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
    sub_1C93D34(this);
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
      ItemIconComponent__SetItemImage_41643304((ItemIconComponent_o *)this, (int32_t)questBoardManager, v8, 0);
      return;
    }
LABEL_18:
    sub_1C93D2C(this, questBoardManager);
  }
  if ( !this )
    goto LABEL_18;
  if ( num <= 1 )
    v9 = -1;
  else
    v9 = (unsigned int)v6->fields.num;
  ItemIconComponent__SetGift_41640856((ItemIconComponent_o *)this, v6->fields.type, v6->fields.objectId, v9, 0, 0);
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

  if ( (byte_4D2E5BC & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&QuestBoardInformationText_TypeInfo);
    sub_1C93AD4(&StringLiteral_25426/*"{0}"*/);
    this = (ServantStatusQuestBoardDraw_o *)sub_1C93AD4(&StringLiteral_13526/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/);
    byte_4D2E5BC = 1;
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
  this = (ServantStatusQuestBoardDraw_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !questEntity || !this )
LABEL_40:
    sub_1C93D2C(this, questEntity);
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
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_13526/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0);
  EventName = (Il2CppObject *)EventEntity__getEventName(eventEnt, 0);
  v24 = System_String__Format_64467032(v22, EventName, (Il2CppObject *)StringLiteral_25426/*"{0}"*/, 0);
  EndTime = EventEntity__GetEndTime(eventEnt, 0, 0);
  v19 = (QuestBoardInformationText_o *)sub_1C93D20(QuestBoardInformationText_TypeInfo);
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

  if ( (byte_4D2E5BA & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&QuestBoardInformationText_TypeInfo);
    sub_1C93AD4(&StringLiteral_25426/*"{0}"*/);
    sub_1C93AD4(&StringLiteral_113/*" "*/);
    sub_1C93AD4(&StringLiteral_13536/*"TIME_REST_STRING"*/);
    byte_4D2E5BA = 1;
  }
  entity = 0;
  v16 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
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
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
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
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !CampaignTextListByEventQuestMaster )
    goto LABEL_25;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)CampaignTextListByEventQuestMaster,
          &entity,
          v20->fields.eventId,
          (const MethodInfo_34632C0 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
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
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_13536/*"TIME_REST_STRING"*/, 0);
  v27 = System_String__Concat_64465992(
          EventName,
          (System_String_o *)StringLiteral_113/*" "*/,
          v26,
          (System_String_o *)StringLiteral_25426/*"{0}"*/,
          0);
  v28 = (QuestBoardInformationText_o *)sub_1C93D20(QuestBoardInformationText_TypeInfo);
  QuestBoardInformationText___ctor(v28, v27, v24, 0, 1, 0, 0);
  items = v16->fields._items;
  v36 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
  ++v16->fields._version;
  if ( !items )
LABEL_25:
    sub_1C93D2C(CampaignTextListByEventQuestMaster, v18);
  size = v16->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v16,
      (Il2CppObject *)v28,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = &items->obj.klass + size;
    v16->fields._size = size + 1;
    v38[4] = (Il2CppClass *)v28;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v38 + 4), (int32_t)v28, v29, v30, v31, v32, v33, v34);
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

  if ( (byte_4D2E5BB & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C93AD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2E5BB = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  v40 = isQuestNoneCleared;
  v19 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = DataManager__GetMasterData_object_(
               v19,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               questId,
               (const MethodInfo_3463274 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !questBoardManager )
    goto LABEL_22;
  mListCreatedTime = questBoardManager->fields.mListCreatedTime;
  v22 = (QuestEntity_o *)Instance;
  Instance = DataManager__GetMasterData_object_(
               v19,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventQuestMaster___);
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
        sub_1C93D34(Instance);
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
              *(const MethodInfo_387999C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = &items->obj.klass + size;
            v16->fields._size = size + 1;
            v37[4] = v36;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v37 + 4), (int32_t)v36, v27, v28, v29, v30, v31, v32);
          }
        }
      }
      v23 = *((_DWORD *)v24 + 6);
      if ( (int)++v25 >= v23 )
        return (System_Collections_Generic_List_QuestBoardInformationText__o *)v16;
    }
LABEL_22:
    sub_1C93D2C(Instance, v18);
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

  if ( (byte_4D2E5B0 & 1) == 0 )
  {
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2E5B0 = 1;
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
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
    v10 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    IsQuestReleaseAll = (MapControl_WarInfo_o *)entityList;
    if ( !entityList )
      goto LABEL_53;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v31,
      (System_Collections_Generic_List_object__o *)entityList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    v32 = v31;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
    {
      if ( !v32.fields._current )
        sub_1C93D2C(0, v11);
      v12 = (Il2CppObject *)QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
                              (QuestReleaseOverwriteEntity_o *)v32.fields._current,
                              0);
      v19 = v12;
      if ( !v10 )
        sub_1C93D2C(v12, v12);
      items = v10->fields._items;
      v21 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
      ++v10->fields._version;
      if ( !items )
        sub_1C93D2C(v12, v12);
      size = v10->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          v12,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v19;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v19, v13, v14, v15, v16, v17, v18);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    if ( !v10 )
      goto LABEL_53;
    IsQuestReleaseAll = (MapControl_WarInfo_o *)System_Collections_Generic_List_object___ToArray(
                                                  v10,
                                                  (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    v24 = IsQuestReleaseAll;
    if ( IsQuestReleaseAll )
      goto LABEL_37;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsQuestReleaseAll = (MapControl_WarInfo_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !IsQuestReleaseAll )
LABEL_53:
    sub_1C93D2C(IsQuestReleaseAll, v4);
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
      sub_1C93D34(IsQuestReleaseAll);
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

  if ( (byte_4D2E5B9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4D2E5B9 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  return !mInfoTextList || mInfoTextList->fields._size == 0;
}


bool ServantStatusQuestBoardDraw__IsMultiInfoText(ServantStatusQuestBoardDraw_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8

  if ( (byte_4D2E5B8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4D2E5B8 = 1;
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

  if ( (byte_4D2E5BD & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    byte_4D2E5BD = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
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
        return v9 & ~QuestEntity__HasFlag_43185356(questEntity, 2, phase, 0) & 1;
      }
LABEL_17:
      sub_1C93D2C(Master_object, v7);
    }
  }
  else if ( !QuestEntity__HasFlag_43185356(questEntity, 0x80000, phase, 0) )
  {
    HasFlag = QuestEntity__HasFlag_43185356(questEntity, 0x100000, phase, 0);
    goto LABEL_15;
  }
  v9 = 0;
  return v9 & ~QuestEntity__HasFlag_43185356(questEntity, 2, phase, 0) & 1;
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

  if ( (byte_4D2E5BE & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_ServantStatusQuestBoardDraw_OnClick__);
    sub_1C93AD4(&StringLiteral_9927/*"OnClickServantQuest"*/);
    byte_4D2E5BE = 1;
  }
  inputMessageObject = (UnityEngine_Object_o *)this->fields.inputMessageObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(inputMessageObject, 0, 0) || (questId = this->fields.questId) == 0 )
  {
    v8 = Method_ServantStatusQuestBoardDraw_OnClick__;
    if ( (*((_BYTE *)Method_ServantStatusQuestBoardDraw_OnClick__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C93AEC(Method_ServantStatusQuestBoardDraw_OnClick__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0);
  }
  else
  {
    v5 = this->fields.inputMessageObject;
    v10 = questId;
    v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
    if ( !v5 )
      sub_1C93D2C(v6, v7);
    UnityEngine_GameObject__SendMessage_72101188(v5, (System_String_o *)StringLiteral_9927/*"OnClickServantQuest"*/, v6, 0);
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

  if ( (byte_4D2E5B3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestBoardInformationText__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    byte_4D2E5B3 = 1;
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
    v8 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    p_mInfoTextList->klass = (GrandQuestFolderBoardItem_c *)v8;
    sub_1C93A78(p_mInfoTextList, (int32_t)v8, v9, v10, v11, v12, v13, v14);
  }
}


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
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  Il2CppObject *v34; // x27
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  Il2CppObject *v41; // x27
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  Il2CppObject *v48; // x27
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  Il2CppObject *v55; // x27
  _BOOL4 v56; // w26
  UILabel_o *mTitleNameLb; // x24
  const MethodInfo *v58; // x2
  struct ServantStatusQuestBoardDraw_StaticFields *static_fields; // x8
  __int64 v60; // x9
  int32_t v61; // w24
  int leftIndent; // w25
  float v63; // s8
  float ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X; // s9
  float v65; // s9
  UIWidget_o *mOverwriteAdvanceNoticeLb; // x23
  const MethodInfo *v67; // x4
  const MethodInfo *v68; // x4
  System_String_o *overlayClosedMessage; // x20
  UILabel_o *v70; // x21
  float v71; // s8
  UnityEngine_Object_o *mOverwriteAdvanceNoticeArrowObj; // x20
  __int64 v73; // x0
  int32_t Minute; // [xsp+Ch] [xbp-94h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-90h] BYREF
  int32_t Day; // [xsp+14h] [xbp-8Ch] BYREF
  int64_t value; // [xsp+18h] [xbp-88h] BYREF
  uint64_t dateData; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2E5B5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ClosedMessageMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_1C93AD4(&System_DateTime_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&long_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&object___TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&ServantStatusQuestBoardDraw_TypeInfo);
    sub_1C93AD4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C93AD4(&StringLiteral_14929/*"UNKNOWN_QUEST_NAME"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2E5B5 = 1;
  }
  dateData = 0;
  entity = 0;
  if ( questReleaseClosedID < 1 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ClosedMessageMaster___);
  if ( !Master_object )
    goto LABEL_115;
  monitor = (System_String_o *)StringLiteral_1/*""*/;
  Master_object = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    questReleaseClosedID,
                    (const MethodInfo_34632C0 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
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
      Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Master_object )
        goto LABEL_115;
      WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Master_object, targetId, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !Master_object )
        goto LABEL_115;
      v25 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              WarID_ByQuestID,
              (const MethodInfo_3463274 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
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
        v56 = 0;
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
              ServantStatusQuestBoardDraw__SetOverwriteCondText(this, questReleaseOverwriteEntity, v58);
              return;
            }
          }
        }
        goto LABEL_115;
      }
      v56 = !System_String__IsNullOrEmpty(questReleaseOverwriteEntity->fields.overlayClosedMessage, 0);
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
          Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14929/*"UNKNOWN_QUEST_NAME"*/, 0);
          klass = (Il2CppClass *)Master_object;
        }
        if ( !mTitleNameLb )
LABEL_115:
          sub_1C93D2C(Master_object, klass);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14929/*"UNKNOWN_QUEST_NAME"*/, 0);
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
      v60 = 12;
      if ( !v56 )
        v60 = 8;
      v61 = *(int32_t *)((char *)&static_fields->TITLE_LABEL_BASE_WIDTH + v60);
      if ( v56 )
      {
        if ( !questReleaseOverwriteEntity )
          goto LABEL_115;
        leftIndent = questReleaseOverwriteEntity->fields.leftIndent;
      }
      else
      {
        leftIndent = 0;
      }
      v63 = (float)monitor_high;
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
        v80.fields.y = 24.0;
        if ( !v56 )
          v80.fields.y = 0.0;
        v80.fields.z = 0.0;
        v80.fields.x = ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X + v63;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Master_object, v80, 0);
        Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
        if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
          Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
        }
        if ( !this->fields.mOverwriteAdvanceNoticeLb )
          goto LABEL_115;
        v65 = *(float *)(*(_QWORD *)(Master_object + 184) + 16LL);
        UIWidget__set_pivot((UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb, 3, 0);
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_115;
        Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0);
        if ( !Master_object )
          goto LABEL_115;
        v81.fields.x = v65 + (float)leftIndent;
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
        v82.fields.y = 24.0;
        if ( !v56 )
          v82.fields.y = 0.0;
        v82.fields.z = 0.0;
        v82.fields.x = v63 * 0.5;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Master_object, v82, 0);
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
        v81.fields.x = (float)leftIndent * 0.5;
      }
      v81.fields.y = -26.0;
      v81.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Master_object, v81, 0);
      Master_object = (__int64)this->fields.mAdvanceNoticeLb;
      if ( !Master_object )
        goto LABEL_115;
      UIWidget__set_height((UIWidget_o *)Master_object, v61, 0);
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
        v61,
        monitor_high,
        v67);
      if ( v56 )
      {
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
        if ( !Master_object )
          goto LABEL_115;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
        if ( !questReleaseOverwriteEntity )
          goto LABEL_115;
        overlayClosedMessage = questReleaseOverwriteEntity->fields.overlayClosedMessage;
        v70 = this->fields.mOverwriteAdvanceNoticeLb;
        if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
        v71 = v63 * 0.5;
        ServantStatusQuestBoardDraw___SetAdvanceNoticeText_g__CalculateLabel_54_0(
          v70,
          overlayClosedMessage,
          v61,
          leftIndent,
          v68);
      }
      else
      {
        v71 = 0.0;
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
            v83.fields.y = 0.0;
            v83.fields.z = 0.0;
            v83.fields.x = v71;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Master_object, v83, 0);
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
      dateData = NetworkManager__getServerDateTime_42097084(OpenedAt, 0).fields._dateData;
      v27 = (System_Object_array *)sub_1C93B7C(object___TypeInfo, 4);
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      LODWORD(value) = System_DateTime__get_Month((System_DateTime_o)&dateData, 0);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &value);
      if ( !v27 )
        goto LABEL_115;
      v34 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1C93C10(Master_object, v27->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_117;
      }
      if ( !LODWORD(v27->max_length) )
        goto LABEL_116;
      v27->m_Items[0] = v34;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)v27->m_Items, (int32_t)v34, v28, v29, v30, v31, v32, v33);
      Day = System_DateTime__get_Day((System_DateTime_o)&dateData, 0);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Day);
      v41 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1C93C10(Master_object, v27->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_117;
      }
      if ( LODWORD(v27->max_length) <= 1 )
        goto LABEL_116;
      v27->m_Items[1] = v41;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v27->m_Items[1], (int32_t)v41, v35, v36, v37, v38, v39, v40);
      Hour = System_DateTime__get_Hour((System_DateTime_o)&dateData, 0);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Hour);
      v48 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1C93C10(Master_object, v27->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_117;
      }
      if ( LODWORD(v27->max_length) <= 2 )
        goto LABEL_116;
      v27->m_Items[2] = v48;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v27->m_Items[2], (int32_t)v48, v42, v43, v44, v45, v46, v47);
      Minute = System_DateTime__get_Minute((System_DateTime_o)&dateData, 0);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Minute);
      v55 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1C93C10(Master_object, v27->obj.klass->_1.element_class);
        if ( !Master_object )
        {
LABEL_117:
          v73 = sub_1C93D50();
          sub_1C93BFC(v73, 0);
        }
      }
      if ( LODWORD(v27->max_length) <= 3 )
LABEL_116:
        sub_1C93D34(Master_object);
      v27->m_Items[3] = v55;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v27->m_Items[3], (int32_t)v55, v49, v50, v51, v52, v53, v54);
      v21 = System_String__Format_64467168(monitor, v27, 0);
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

  if ( (byte_4D2E5B1 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&ServantStatusQuestBoardDraw_TypeInfo);
    sub_1C93AD4(&StringLiteral_12014/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2E5B1 = 1;
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
  mLineSp = (UIWidget_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12014/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/, 0);
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
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mRewardIconInfs, 0, v7, v8, v9, v10, v11, v12);
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
    sub_1C93D2C(mLineSp, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0);
  this->fields.inputMessageObject = 0;
  p_inputMessageObject = &this->fields.inputMessageObject;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_inputMessageObject, 0, v14, v15, v16, v17, v18, v19);
  *((_DWORD *)p_inputMessageObject + 2) = 0;
  p_inputMessageObject[2] = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(p_inputMessageObject + 2), 0, v20, v21, v22, v23, v24, v25);
}


void ServantStatusQuestBoardDraw__SetInfoTextAlpha(
        ServantStatusQuestBoardDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8
  BoardOptionTextWithIconComponent_o *mOptionInfoLb; // x0

  if ( (byte_4D2E5B8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4D2E5B8 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList && mInfoTextList->fields._size >= 2 )
  {
    mOptionInfoLb = this->fields.mOptionInfoLb;
    if ( !mOptionInfoLb )
      sub_1C93D2C(0, method);
    BoardOptionTextWithIconComponent__set_Alpha(mOptionInfoLb, alpha, 0);
  }
}


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
  Il2CppObject *v82; // x20
  System_Collections_Generic_List_object__o *v83; // x25
  ServantStatusQuestBoardDraw___c_c *v84; // x0
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *v85; // x25
  System_Func_object__int__o *_9__48_0; // x20
  Il2CppObject *v87; // x29
  struct ServantStatusQuestBoardDraw___c_StaticFields *static_fields; // x0
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v95; // x0
  Il2CppObject *v96; // x0
  int64_t v97; // x5
  const MethodInfo *v98; // x7
  QuestReleaseOverwriteEntity_o *v99; // x25
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *v100; // x20
  System_Func_object__bool__o *v101; // x29
  Il2CppObject *v102; // x0
  QuestReleaseEntity_o *v103; // x4
  ServantStatusQuestBoardManager_o *v104; // x28
  UILabel_o *v105; // x20
  System_String_o **v106; // x8
  LocalizationManager_c *v107; // x0
  System_String_o **v108; // x9
  System_String_o *v109; // x23
  const MethodInfo *v110; // x2
  struct UILabel_o *mTitleNameLb; // x20
  System_String_o *v112; // x1
  System_String_o *v113; // x20
  Il2CppObject *v114; // x23
  Il2CppObject *BattleName; // x0
  int32_t v116; // w20
  int32_t TITLE_LABEL_BASE_WIDTH; // w23
  bool v118; // cc
  UnityEngine_Transform_o *v119; // x20
  struct UILabel_o *v120; // x8
  UnityEngine_GameObject_o *v121; // x23
  struct UnityEngine_GameObject_o *v127; // x20
  int32_t v128; // w2
  int32_t v129; // w3
  System_String_o *v130; // x4
  int32_t v131; // w5
  int64_t v132; // x6
  System_String_o *v133; // x7
  struct UnityEngine_GameObject_o *v134; // x1
  UISprite_o *mTitleShortcutSp; // x20
  struct UISprite_o *v136; // x8
  int32_t ServantId; // w20
  __int64 v138; // x23
  UILabel_o *mTitleShortcutLb; // x20
  Il2CppObject *v140; // x0
  __int64 v141; // x25
  __int64 v142; // x27
  ServantLimitImageMaster_o *v143; // x23
  const MethodInfo *v144; // x1
  const MethodInfo *v145; // x1
  __int64 endTime; // x23
  System_Collections_Generic_List_object__o *mInfoTextList; // x20
  System_String_o *v148; // x27
  QuestBoardInformationText_o *v149; // x25
  int32_t v150; // w2
  int32_t v151; // w3
  System_String_o *v152; // x4
  int32_t v153; // w5
  int64_t v154; // x6
  System_String_o *v155; // x7
  struct System_Object_array *items; // x8
  _QWORD *v157; // x9
  __int64 size; // x10
  Il2CppClass **v159; // x0
  int32_t v160; // w23
  int32_t v161; // w0
  int32_t v162; // w1
  struct System_Collections_Generic_List_QuestBoardInformationText__o *v163; // x20
  int32_t v164; // w2
  int v165; // w8
  int32_t v166; // w9
  bool v167; // w20
  int32_t v168; // w8
  int32_t v169; // w2
  int32_t v170; // w3
  System_String_o *v171; // x4
  int32_t v172; // w5
  int64_t v173; // x6
  System_String_o *v174; // x7
  bool v175; // w1
  int v176; // w8
  UnityEngine_Component_o *mServantLimitRewardObtainedSP; // x20
  char v178; // w20
  int32_t v179; // w2
  int32_t v180; // w3
  System_String_o *v181; // x4
  int32_t v182; // w5
  int64_t v183; // x6
  System_String_o *v184; // x7
  __int64 v185; // x8
  struct GiftEntity_array *v186; // x21
  int v187; // w9
  _DWORD *v188; // x9
  int v189; // w8
  int64_t v190; // x2
  int64_t v191; // x3
  const MethodInfo *v192; // [xsp+0h] [xbp-150h]
  _BOOL4 v193; // [xsp+1Ch] [xbp-134h]
  _BOOL4 v194; // [xsp+20h] [xbp-130h]
  __int64 v195; // [xsp+20h] [xbp-130h]
  int32_t limitCounta; // [xsp+2Ch] [xbp-124h]
  WarEntity_o *warEntity; // [xsp+30h] [xbp-120h]
  int v198; // [xsp+3Ch] [xbp-114h]
  int questReleaseClosedID; // [xsp+40h] [xbp-110h]
  int32_t phase; // [xsp+44h] [xbp-10Ch]
  QuestBehaviorMaster_o *v201; // [xsp+48h] [xbp-108h]
  bool v202; // [xsp+50h] [xbp-100h]
  int v203; // [xsp+54h] [xbp-FCh]
  int64_t nowTime; // [xsp+58h] [xbp-F8h]
  int32_t QuestType; // [xsp+6Ch] [xbp-E4h]
  _BOOL4 IsLimitCountSealQuest; // [xsp+70h] [xbp-E0h]
  char v208; // [xsp+74h] [xbp-DCh]
  ServantStatusQuestBoardManager_o *v209; // [xsp+78h] [xbp-D8h]
  Il2CppObject *object; // [xsp+80h] [xbp-D0h]
  System_Collections_Generic_List_Enumerator_int__o v211; // [xsp+88h] [xbp-C8h] BYREF
  bool isNotItemConsume; // [xsp+A4h] [xbp-ACh] BYREF
  int32_t fixedVal[2]; // [xsp+A8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v214; // [xsp+B0h] [xbp-A0h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+C8h] [xbp-88h] BYREF
  UserQuestEntity_o *v216; // [xsp+D0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+D8h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v218; // 0:x0.16
  UnityEngine_Vector3_o v219; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o oneVector; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v221; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v222; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v223; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v224; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
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

  if ( (byte_4D2E5B2 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestExtensionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity____79100656);
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_OrderByDescending_QuestReleaseOverwriteEntity__int___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C93AD4(&System_Func_QuestReleaseOverwriteEntity__int__TypeInfo);
    sub_1C93AD4(&System_Func_QuestReleaseOverwriteEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&QuestBoardInformationText_TypeInfo);
    sub_1C93AD4(&ServantStatusQuestBoardDraw_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C93AD4(&Method_ServantStatusQuestBoardDraw___c__SetItem_b__48_0__);
    sub_1C93AD4(&Method_ServantStatusQuestBoardDraw___c__DisplayClass48_0__SetItem_b__1__);
    sub_1C93AD4(&ServantStatusQuestBoardDraw___c__DisplayClass48_0_TypeInfo);
    sub_1C93AD4(&ServantStatusQuestBoardDraw___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_13529/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_1C93AD4(&StringLiteral_20601/*"img_conductor_line"*/);
    sub_1C93AD4(&StringLiteral_20604/*"img_conductor_questboard_paladin"*/);
    sub_1C93AD4(&StringLiteral_25426/*"{0}"*/);
    sub_1C93AD4(&StringLiteral_20606/*"img_conductor_quicklink_02"*/);
    sub_1C93AD4(&StringLiteral_12085/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE2"*/);
    sub_1C93AD4(&StringLiteral_20448/*"icon_reward_limits_release"*/);
    sub_1C93AD4(&StringLiteral_12087/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT2"*/);
    sub_1C93AD4(&StringLiteral_12086/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/);
    sub_1C93AD4(&StringLiteral_20600/*"img_conductor_05"*/);
    sub_1C93AD4(&StringLiteral_20605/*"img_conductor_quicklink"*/);
    sub_1C93AD4(&StringLiteral_20607/*"img_conductor_scq"*/);
    sub_1C93AD4(&StringLiteral_20602/*"img_conductor_line_white"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_20608/*"img_conductor_sq"*/);
    sub_1C93AD4(&StringLiteral_12084/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE"*/);
    sub_1C93AD4(&StringLiteral_12039/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/);
    byte_4D2E5B2 = 1;
  }
  v216 = 0;
  entity = 0;
  entityList = 0;
  memset(&v214, 0, sizeof(v214));
  *(_QWORD *)fixedVal = 0;
  isNotItemConsume = 0;
  object = (Il2CppObject *)sub_1C93D20(ServantStatusQuestBoardDraw___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor(object, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestExtensionMaster___);
  if ( !qinf || !Master_object )
    goto LABEL_382;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         qinf->fields.questId,
         (const MethodInfo_34632C0 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__) )
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
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Master_object )
    goto LABEL_382;
  limitCounta = limitCount;
  v209 = questBoardManager;
  Master_object = (__int64)QuestGroupMaster__GetInterludeQuestIdList(
                             (QuestGroupMaster_o *)Master_object,
                             qinf->fields.questId,
                             0);
  if ( !Master_object )
    goto LABEL_382;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v211,
    (System_Collections_Generic_List_int__o *)Master_object,
    (const MethodInfo_385D44C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v214 = v211;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v214,
            (const MethodInfo_35F6200 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v15 )
      break;
    current = v214.fields._current;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsQuestClear_41038904(current, -1, 0, 0) )
      goto LABEL_22;
  }
  current = 0;
LABEL_22:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v214,
    (const MethodInfo_35F61FC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( !questBoardManager )
    goto LABEL_382;
  nowTime = questBoardManager->fields.mListCreatedTime;
  Mine = MapControl_QuestInfo__GetMine(qinf, 0);
  QuestType = MapControl_QuestInfo__GetQuestType(qinf, 0);
  v19 = v15 || MapControl_QuestInfo__IsClear(qinf, 0);
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  Master_object = ServantStatusQuestBoardDraw__IsClose(qinf, v18);
  v26 = Master_object;
  if ( beforeQuestInfo )
  {
    IsClear = MapControl_QuestInfo__IsClear(beforeQuestInfo, 0);
    if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    Master_object = ServantStatusQuestBoardDraw__IsClose(beforeQuestInfo, v27);
    v198 = Master_object & 1;
    if ( !Mine )
      goto LABEL_382;
  }
  else
  {
    v198 = 0;
    IsClear = 1;
    if ( !Mine )
      goto LABEL_382;
  }
  id = Mine->fields.id;
  this->fields.qinf = qinf;
  this->fields.questId = id;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.qinf, (int32_t)qinf, v20, v21, v22, v23, v24, v25);
  warId = qinf->fields.warId;
  Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_object )
    goto LABEL_382;
  IsLimitCountSealQuest = ServantLimitImageMaster__IsLimitCountSealQuest(
                            (ServantLimitImageMaster_o *)Master_object,
                            this->fields.questId,
                            0);
  Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !object )
    goto LABEL_382;
  v208 = v26;
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
  v194 = v33;
  warEntity = v32;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v35 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  Master_object = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (__int64)NetworkManager_TypeInfo;
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
    &v216,
    *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL),
    current,
    0);
  if ( v216 )
    HasStatus = UserQuestEntity__HasStatus(v216, 4, 0);
  else
    HasStatus = 0;
  questPhase = qinf->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(qinf, 0);
  if ( questPhase + 1 < PhaseMax )
    PhaseMax = questPhase + 1;
  phase = PhaseMax;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v39 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  v40 = !v19 && IsClear;
  v201 = (QuestBehaviorMaster_o *)v39;
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
      v208 = 0;
      questReleaseClosedID = 0;
      HasStatus = 0;
      v41 = 1;
      IsClear = v40;
      goto LABEL_77;
    }
    IsClear = v40;
  }
  v41 = 0;
  if ( (v208 & 1) != 0 )
  {
    v208 = 1;
    goto LABEL_77;
  }
  v44 = 1.0;
  v43 = 0;
  v208 = 0;
  v42 = 1.0;
LABEL_81:
  Master_object = (__int64)this->fields.mTitleObj;
  v202 = HasStatus;
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
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.basePanelAtlas,
    (int32_t)mAtlas,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
  v54 = this->fields.mcBaseP;
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  v203 = v41;
  if ( !v54 )
    goto LABEL_382;
  UISprite__set_spriteName(v54, ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME, 0);
  v55 = !IsSvtCoinQuest && IsClear;
  if ( IsSvtCoinQuest )
  {
    v56 = this->fields.mcBaseP;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( !AtlasManager__SetEventUI(v56, (System_String_o *)StringLiteral_20604/*"img_conductor_questboard_paladin"*/, 0) )
    {
      Master_object = (__int64)this->fields.mcBaseP;
      if ( !Master_object )
        goto LABEL_382;
      UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0);
      Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
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
      Master_object = (__int64)this->fields.mcBaseP;
      if ( !Master_object )
        goto LABEL_382;
      UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0);
      v62 = this->fields.mcBaseP;
      Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
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
  Master_object = (__int64)this->fields.mcBaseP;
  if ( !Master_object )
    goto LABEL_382;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_object + 840LL))(
    Master_object,
    *(_QWORD *)(*(_QWORD *)Master_object + 848LL));
  Master_object = (__int64)this->fields.mcBaseP;
  if ( !Master_object )
    goto LABEL_382;
  v222.fields.r = v44;
  v222.fields.g = v44;
  v222.fields.b = v44;
  v222.fields.a = v42;
  UIWidget__set_color((UIWidget_o *)Master_object, v222, 0);
  Master_object = (__int64)this->fields.mLineSp;
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0);
  Master_object = (__int64)this->fields.mLineSp;
  if ( !Master_object )
    goto LABEL_382;
  v223.fields.r = v44;
  v223.fields.g = v44;
  v223.fields.b = v44;
  v223.fields.a = v42;
  UIWidget__set_color((UIWidget_o *)Master_object, v223, 0);
  Master_object = (__int64)this->fields.mTitle2Sp;
  v63 = v43 && IsClear;
  if ( IsSvtCoinQuest || !v43 )
  {
    if ( !Master_object )
      goto LABEL_382;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0);
    Master_object = (__int64)this->fields.mTitle2Sp;
    if ( !Master_object )
      goto LABEL_382;
    v224.fields.r = v44;
    v224.fields.g = v44;
    v224.fields.b = v44;
    v224.fields.a = v42;
    UIWidget__set_color((UIWidget_o *)Master_object, v224, 0);
    Master_object = (__int64)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_382;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0);
    if ( IsSvtCoinQuest )
    {
      mTitleSp = this->fields.mTitleSp;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( AtlasManager__SetEventUI(mTitleSp, (System_String_o *)StringLiteral_20600/*"img_conductor_05"*/, 0) )
      {
        v219.fields.x = -22.0;
        v219.fields.y = 0.0;
        v219.fields.z = 0.0;
        ComponentHelper__SetLocalPosition((UnityEngine_Component_o *)this->fields.mTitleSp, v219, 0);
      }
      else
      {
        Master_object = (__int64)this->fields.mTitleSp;
        if ( !Master_object )
          goto LABEL_382;
        UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0);
        v75 = this->fields.mTitleSp;
        Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
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
      if ( !AtlasManager__SetEventUI(mTitle2Sp, (System_String_o *)StringLiteral_20606/*"img_conductor_quicklink_02"*/, 0) )
      {
        Master_object = (__int64)this->fields.mTitle2Sp;
        if ( !Master_object )
          goto LABEL_382;
        UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0);
        Master_object = (__int64)this->fields.mTitle2Sp;
        if ( !Master_object )
          goto LABEL_382;
        UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)StringLiteral_20605/*"img_conductor_quicklink"*/, 0);
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
      v225.fields.r = v44;
      v225.fields.g = v44;
      v225.fields.b = v44;
      v225.fields.a = v42;
      UIWidget__set_color((UIWidget_o *)Master_object, v225, 0);
      mLineSp = this->fields.mLineSp;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      Master_object = AtlasManager__SetEventUI(mLineSp, (System_String_o *)StringLiteral_20602/*"img_conductor_line_white"*/, 0);
      v78 = this->fields.mLineSp;
      if ( (Master_object & 1) != 0 )
      {
        if ( !v78 )
          goto LABEL_382;
        v226.fields.r = 0.68235;
        v226.fields.g = 0.61176;
        v226.fields.b = 0.32941;
        v226.fields.a = 1.0;
        Master_object = (__int64)this->fields.mLineSp;
      }
      else
      {
        if ( !v78 )
          goto LABEL_382;
        UISprite__set_atlas(this->fields.mLineSp, this->fields.basePanelAtlas, 0);
        Master_object = (__int64)this->fields.mLineSp;
        if ( !Master_object )
          goto LABEL_382;
        UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)StringLiteral_20601/*"img_conductor_line"*/, 0);
        Master_object = (__int64)this->fields.mLineSp;
        if ( !Master_object )
          goto LABEL_382;
        v226.fields.r = v44;
        v226.fields.g = v44;
        v226.fields.b = v44;
        v226.fields.a = v42;
      }
      UIWidget__set_color((UIWidget_o *)Master_object, v226, 0);
    }
    else
    {
      Master_object = (__int64)this->fields.mTitleSp;
      v65 = QuestType == 3 && v55;
      if ( !Master_object )
        goto LABEL_382;
      UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0);
      v66 = this->fields.mTitleSp;
      Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
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
      if ( !v194 )
        v68 = 48;
      v195 = v68;
      UISprite__set_spriteName(
        v66,
        *(System_String_o **)((char *)&ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH + v68),
        0);
      v69 = IsLimitCountSealQuest && v65;
      if ( !IsLimitCountSealQuest )
        goto LABEL_193;
      v193 = v69;
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
      v58 = v193;
      v55 = v65;
      if ( v73 )
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
        v227.fields.r = v44;
        v227.fields.g = v44;
        v227.fields.b = v44;
        v227.fields.a = v42;
        UIWidget__set_color((UIWidget_o *)Master_object, v227, 0);
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
                                   (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( !Master_object )
          goto LABEL_382;
        v228.fields.r = v44;
        v228.fields.g = v44;
        v228.fields.b = v44;
        v228.fields.a = v42;
        UIWidget__set_color((UIWidget_o *)Master_object, v228, 0);
        goto LABEL_200;
      }
      Master_object = (__int64)this->fields.mTitleSp;
      if ( !Master_object )
        goto LABEL_382;
      UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0);
      v74 = this->fields.mTitleSp;
      Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      if ( !v74 )
        goto LABEL_382;
      UISprite__set_spriteName(
        v74,
        *(System_String_o **)((char *)&ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH + v195),
        0);
    }
    v55 = v58;
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
  v55 = v63;
LABEL_200:
  Master_object = (__int64)this->fields.mClearObj;
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v43, 0);
  Master_object = (__int64)this->fields.mNoneLb;
  if ( !Master_object )
    goto LABEL_382;
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v82 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  v83 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v83,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v83;
  if ( !v82 )
    goto LABEL_382;
  QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
    (QuestReleaseOverwriteMaster_o *)v82,
    &entityList,
    this->fields.questId,
    nowTime,
    0);
  v84 = ServantStatusQuestBoardDraw___c_TypeInfo;
  v85 = entityList;
  if ( !ServantStatusQuestBoardDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw___c_TypeInfo);
    v84 = ServantStatusQuestBoardDraw___c_TypeInfo;
  }
  _9__48_0 = (System_Func_object__int__o *)v84->static_fields->__9__48_0;
  if ( !_9__48_0 )
  {
    if ( !v84->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v84);
      v84 = ServantStatusQuestBoardDraw___c_TypeInfo;
    }
    v87 = (Il2CppObject *)v84->static_fields->__9;
    _9__48_0 = (System_Func_object__int__o *)sub_1C93D20(System_Func_QuestReleaseOverwriteEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__48_0, v87, Method_ServantStatusQuestBoardDraw___c__SetItem_b__48_0__, 0);
    static_fields = ServantStatusQuestBoardDraw___c_TypeInfo->static_fields;
    static_fields->__9__48_0 = (struct System_Func_QuestReleaseOverwriteEntity__int__o *)_9__48_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__48_0,
      (int32_t)_9__48_0,
      v89,
      v90,
      v91,
      v92,
      v93,
      v94);
    p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  }
  v95 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v85,
                                                               (System_Func_TSource__TKey__o *)_9__48_0,
                                                               (const MethodInfo_31D3DE4 *)Method_System_Linq_Enumerable_OrderByDescending_QuestReleaseOverwriteEntity__int___);
  v96 = System_Linq_Enumerable__FirstOrDefault_object_(
          v95,
          (const MethodInfo_31CC378 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity___);
  v99 = (QuestReleaseOverwriteEntity_o *)v96;
  if ( *v34 )
  {
    if ( v96 )
    {
      v100 = entityList;
      v101 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_QuestReleaseOverwriteEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v101,
        object,
        Method_ServantStatusQuestBoardDraw___c__DisplayClass48_0__SetItem_b__1__,
        0);
      v102 = System_Linq_Enumerable__FirstOrDefault_object__52221724(
               (System_Collections_Generic_IEnumerable_TSource__o *)v100,
               (System_Func_TSource__bool__o *)v101,
               (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_QuestReleaseOverwriteEntity____79100656);
      if ( v102 )
        v99 = (QuestReleaseOverwriteEntity_o *)v102;
    }
  }
  if ( IsSvtCoinQuest || v43 || v55 )
  {
    v103 = *v34;
    if ( questReleaseClosedID < 1 )
    {
      v104 = v209;
      if ( v103 && v103->fields.type == 8 )
      {
        mTitleNameLb = this->fields.mTitleNameLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12039/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/, 0);
        if ( !mTitleNameLb )
          goto LABEL_382;
        v112 = (System_String_o *)Master_object;
        Master_object = (__int64)mTitleNameLb;
      }
      else
      {
        Master_object = (__int64)QuestEntity__getQuestName(Mine, 0);
        if ( !Master_object )
          goto LABEL_382;
        v113 = (System_String_o *)Master_object;
        if ( System_String__Contains((System_String_o *)Master_object, (System_String_o *)StringLiteral_25426/*"{0}"*/, 0) )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v114 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantMaster___);
          Master_object = QuestEntity__getServantId(Mine, 0);
          if ( !v114 )
            goto LABEL_382;
          Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)v114,
                                     Master_object,
                                     (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Master_object )
            goto LABEL_382;
          BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Master_object, 0, -1, 0);
          v113 = System_String__Format(v113, BattleName, 0);
        }
        Master_object = (__int64)this->fields.mTitleNameLb;
        if ( !Master_object )
          goto LABEL_382;
        v112 = v113;
      }
      UILabel__set_text((UILabel_o *)Master_object, v112, 0);
    }
    else
    {
      ServantStatusQuestBoardDraw__SetAdvanceNoticeText(
        this,
        questReleaseClosedID,
        warEntity,
        Mine,
        v103,
        v97,
        v99,
        v98);
      v104 = v209;
    }
  }
  else
  {
    v105 = this->fields.mTitleNameLb;
    if ( QuestType == 3 )
    {
      v106 = (System_String_o **)&StringLiteral_12084/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE"*/;
      v107 = LocalizationManager_TypeInfo;
      v108 = (System_String_o **)&StringLiteral_12085/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE2"*/;
    }
    else
    {
      v106 = (System_String_o **)&StringLiteral_12086/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/;
      v107 = LocalizationManager_TypeInfo;
      v108 = (System_String_o **)&StringLiteral_12087/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT2"*/;
    }
    v104 = v209;
    if ( v198 )
      v106 = v108;
    v109 = *v106;
    if ( !v107->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v107);
    Master_object = (__int64)LocalizationManager__Get(v109, 0);
    if ( !v105 )
      goto LABEL_382;
    UILabel__set_text(v105, (System_String_o *)Master_object, 0);
    if ( v99 )
      ServantStatusQuestBoardDraw__SetOverwriteCondText(this, v99, v110);
  }
  Master_object = (__int64)this->fields.mTitleNameLb;
  if ( !Master_object )
    goto LABEL_382;
  v116 = *(_DWORD *)(Master_object + 168);
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    Master_object = (__int64)this->fields.mTitleNameLb;
    if ( !Master_object )
      goto LABEL_382;
  }
  TITLE_LABEL_BASE_WIDTH = ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH;
  Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0);
  v118 = v116 <= TITLE_LABEL_BASE_WIDTH;
  v119 = (UnityEngine_Transform_o *)Master_object;
  if ( v118 )
  {
    if ( !byte_4D2A13E )
    {
      Master_object = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A13E = 1;
    }
    if ( !v119 )
      goto LABEL_382;
    v121 = inputMessageObject;
    oneVector = UnityEngine_Vector3_TypeInfo->static_fields->oneVector;
  }
  else
  {
    Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
    if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    v120 = this->fields.mTitleNameLb;
    v121 = inputMessageObject;
    if ( !v120 || !v119 )
      goto LABEL_382;
    oneVector.fields.y = 1.0;
    oneVector.fields.x = (float)ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH
                       / (float)v120->fields.mWidth;
    oneVector.fields.z = 1.0;
  }
  UnityEngine_Transform__set_localScale(v119, oneVector, 0);
  Master_object = (__int64)this->fields.mTitleNameLb;
  if ( IsSvtCoinQuest )
  {
    if ( !Master_object )
      goto LABEL_382;
    v229.fields.b = 0.42353;
    v229.fields.g = 0.46275;
    v229.fields.r = 0.48235;
    v229.fields.a = 1.0;
    v127 = v121;
  }
  else
  {
    if ( !Master_object )
      goto LABEL_382;
    v127 = 0;
    v229.fields.r = v44;
    v229.fields.g = v44;
    v229.fields.b = v44;
    v229.fields.a = v42;
  }
  UIWidget__set_color((UIWidget_o *)Master_object, v229, 0);
  if ( v203 )
    v134 = v127;
  else
    v134 = v121;
  this->fields.inputMessageObject = v134;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.inputMessageObject,
    (int32_t)v134,
    v128,
    v129,
    v130,
    v131,
    v132,
    v133);
  if ( IsSvtCoinQuest )
  {
    Master_object = (__int64)this->fields.mTitleShortcutSp;
    if ( !Master_object )
      goto LABEL_382;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0);
    mTitleShortcutSp = this->fields.mTitleShortcutSp;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Master_object = AtlasManager__SetEventUI(mTitleShortcutSp, (System_String_o *)StringLiteral_20607/*"img_conductor_scq"*/, 0);
    v136 = this->fields.mTitleShortcutSp;
    if ( (Master_object & 1) != 0 )
    {
      if ( !v136 )
        goto LABEL_382;
      v230.fields.r = 0.48235;
      v230.fields.g = 0.46275;
      v230.fields.b = 0.42353;
      v230.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)this->fields.mTitleShortcutSp, v230, 0);
      v221.fields.y = 19.0;
      v221.fields.z = 0.0;
      v221.fields.x = -226.0;
      ComponentHelper__SetLocalPosition((UnityEngine_Component_o *)this->fields.mTitleShortcutSp, v221, 0);
    }
    else
    {
      if ( !v136 )
        goto LABEL_382;
      UISprite__set_atlas(this->fields.mTitleShortcutSp, this->fields.basePanelAtlas, 0);
      Master_object = (__int64)this->fields.mTitleShortcutSp;
      if ( !Master_object )
        goto LABEL_382;
      UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)StringLiteral_20608/*"img_conductor_sq"*/, 0);
      Master_object = (__int64)this->fields.mTitleShortcutSp;
      if ( !Master_object )
        goto LABEL_382;
      v233.fields.r = v44;
      v233.fields.g = v44;
      v233.fields.b = v44;
      v233.fields.a = v42;
      UIWidget__set_color((UIWidget_o *)Master_object, v233, 0);
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
    ServantStatusQuestBoardDraw__ResetInfoTextList(this, v145);
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
    v232.fields.r = v44;
    v232.fields.g = v44;
    v232.fields.b = v44;
    v232.fields.a = v42;
    UIWidget__set_color((UIWidget_o *)Master_object, v232, 0);
    Master_object = (__int64)this->fields.mTitleShortcutLb;
    if ( !Master_object )
      goto LABEL_382;
    goto LABEL_298;
  }
  ServantId = QuestEntity__getServantId(Mine, 0);
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             ServantId,
                             (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.mTitleShortcutSp )
    goto LABEL_382;
  v138 = Master_object;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mTitleShortcutSp, 0, 0);
  mTitleShortcutLb = this->fields.mTitleShortcutLb;
  if ( !v138 )
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
  v140 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v142 = *(_QWORD *)(v138 + 16);
  v141 = *(_QWORD *)(v138 + 24);
  v143 = (ServantLimitImageMaster_o *)v140;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v218.fields.currentCryptoKey = v142;
  *(_QWORD *)&v218.fields.fakeValue = v141;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v218, 0);
  if ( !v143 )
    goto LABEL_382;
  Master_object = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                             v143,
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
  v231.fields.r = v44;
  v231.fields.g = v44;
  v231.fields.b = v44;
  v231.fields.a = v42;
  UIWidget__set_color((UIWidget_o *)Master_object, v231, 0);
LABEL_299:
  ServantStatusQuestBoardDraw__ResetInfoTextList(this, v144);
  if ( v43 )
  {
LABEL_318:
    v167 = 0;
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
    v148 = LocalizationManager__Get((System_String_o *)StringLiteral_13529/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0);
    v149 = (QuestBoardInformationText_o *)sub_1C93D20(QuestBoardInformationText_TypeInfo);
    QuestBoardInformationText___ctor(v149, v148, endTime, 0, 1, 0, 0);
    if ( !mInfoTextList )
      goto LABEL_382;
    items = mInfoTextList->fields._items;
    v157 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
    ++mInfoTextList->fields._version;
    if ( !items )
      goto LABEL_382;
    size = mInfoTextList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        mInfoTextList,
        (Il2CppObject *)v149,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v157[4] + 192LL) + 112LL));
    }
    else
    {
      v159 = &items->obj.klass + size;
      mInfoTextList->fields._size = size + 1;
      v159[4] = (Il2CppClass *)v149;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v159 + 4), (int32_t)v149, v150, v151, v152, v153, v154, v155);
    }
  }
  v160 = qinf->fields.questPhase;
  v161 = MapControl_QuestInfo__GetPhaseMax(qinf, 0);
  v163 = this->fields.mInfoTextList;
  if ( v160 + 1 < v161 )
    v164 = v160 + 1;
  else
    v164 = v161;
  Master_object = (__int64)ServantStatusQuestBoardDraw__GetCampaignText(
                             this,
                             v162,
                             v164,
                             0,
                             v104,
                             &fixedVal[1],
                             fixedVal,
                             &isNotItemConsume,
                             v192);
  if ( !v163 )
    goto LABEL_382;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v163,
    (System_Collections_Generic_IEnumerable_T__o *)Master_object,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  Master_object = (__int64)this->fields.mInfoTextList;
  if ( !Master_object )
    goto LABEL_382;
  v165 = *(_DWORD *)(Master_object + 24);
  if ( v165 < 1 )
    goto LABEL_318;
  Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)Master_object,
                             v104->fields.mAlphaAnimCnt % v165,
                             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
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
  v166 = fixedVal[1];
  v167 = 1;
  qinf->fields.isNotItemConsume = isNotItemConsume;
  v168 = fixedVal[0];
  qinf->fields.costCalcVal = v166;
  qinf->fields._fixedCostVal_k__BackingField = v168;
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v167, 0);
  Master_object = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_382;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v167, 0);
  this->fields.mRewardIconInfs = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mRewardIconInfs, 0, v169, v170, v171, v172, v173, v174);
  Master_object = (__int64)this->fields.mRewardIcon;
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  if ( (v208 & 1) != 0 && QuestEntity__HasFlag(Mine, 4096, 0) )
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
    v175 = 1;
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
    Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_382;
    Master_object = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !Master_object )
      goto LABEL_382;
    Master_object = (__int64)GiftMaster__GetGiftListById((GiftMaster_o *)Master_object, Mine->fields.giftId, 0);
    if ( !Master_object )
      goto LABEL_382;
    v185 = *(_QWORD *)(Master_object + 24);
    v186 = (struct GiftEntity_array *)Master_object;
    if ( !v185 )
      goto LABEL_381;
    v187 = v104->fields.mAlphaAnimCnt % (int)v185;
    if ( v187 >= (unsigned int)v185 )
      sub_1C93D34(Master_object);
    v188 = *(_DWORD **)(Master_object + 8LL * v187 + 32);
    if ( v188 )
    {
      giftIconId = (unsigned int)v188[11];
      Master_object = (__int64)this->fields.mRewardIcon;
      v189 = v188[7];
      if ( (int)giftIconId < 1 )
      {
        if ( !Master_object )
          goto LABEL_382;
        v191 = v189 <= 1 ? -1LL : (unsigned int)v188[7];
        ItemIconComponent__SetGift_41640856((ItemIconComponent_o *)Master_object, v188[5], v188[6], v191, 0, 0);
      }
      else
      {
        if ( !Master_object )
          goto LABEL_382;
        v190 = v189 <= 1 ? -1LL : (unsigned int)v188[7];
        ItemIconComponent__SetItemImage_41643304((ItemIconComponent_o *)Master_object, giftIconId, v190, 0);
      }
      Master_object = (__int64)this->fields.mRewardIcon;
      if ( Master_object )
      {
        Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
        if ( Master_object )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
LABEL_381:
          this->fields.mRewardIconInfs = v186;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&this->fields.mRewardIconInfs,
            (int32_t)v186,
            v179,
            v180,
            v181,
            v182,
            v183,
            v184);
          goto LABEL_337;
        }
      }
    }
LABEL_382:
    sub_1C93D2C(Master_object, giftIconId);
  }
  Master_object = (__int64)this->fields.mRewardObj;
  if ( !Master_object )
    goto LABEL_382;
  v175 = 0;
LABEL_336:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v175, 0);
LABEL_337:
  Master_object = (__int64)this->fields.mRewardObj;
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Master_object,
                             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Master_object )
    goto LABEL_382;
  v234.fields.r = v44;
  v234.fields.g = v44;
  v234.fields.b = v44;
  v234.fields.a = v42;
  UIWidget__set_color((UIWidget_o *)Master_object, v234, 0);
  Master_object = (__int64)this->fields.mRewardIcon;
  if ( !Master_object )
    goto LABEL_382;
  v235.fields.r = v44;
  v235.fields.g = v44;
  v235.fields.b = v44;
  v235.fields.a = v42;
  ItemIconComponent__SetColor((ItemIconComponent_o *)Master_object, v235, 0);
  Master_object = (__int64)v201;
  v176 = IsLimitCountSealQuest && v43;
  if ( !v201 || (v176 & 1) != 0 )
  {
    mServantLimitRewardObtainedSP = (UnityEngine_Component_o *)this->fields.mServantLimitRewardObtainedSP;
    if ( !v176 )
    {
LABEL_343:
      if ( !mServantLimitRewardObtainedSP )
        goto LABEL_382;
      Master_object = (__int64)UnityEngine_Component__get_gameObject(mServantLimitRewardObtainedSP, 0);
      if ( !Master_object )
        goto LABEL_382;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
      v178 = 1;
      goto LABEL_354;
    }
  }
  else
  {
    Master_object = QuestBehaviorMaster__IsOpenQuestBehaviorCond(v201, this->fields.questId, phase, 10, 0);
    mServantLimitRewardObtainedSP = (UnityEngine_Component_o *)this->fields.mServantLimitRewardObtainedSP;
    if ( (Master_object & 1) == 0 )
      goto LABEL_343;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(
    (UISprite_o *)mServantLimitRewardObtainedSP,
    (System_String_o *)StringLiteral_20448/*"icon_reward_limits_release"*/,
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
  v236.fields.r = v44;
  v236.fields.g = v44;
  v236.fields.b = v44;
  v236.fields.a = v42;
  UIWidget__set_color((UIWidget_o *)Master_object, v236, 0);
  v178 = 0;
LABEL_354:
  Master_object = (__int64)this->fields.mRewardGetSP;
  if ( !Master_object )
    goto LABEL_382;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_382;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v43 & v178 & !v202, 0);
  Master_object = (__int64)this->fields.mRewardGetSP;
  if ( !Master_object )
    goto LABEL_382;
  v237.fields.r = v44;
  v237.fields.g = v44;
  v237.fields.b = v44;
  v237.fields.a = v42;
  UIWidget__set_color((UIWidget_o *)Master_object, v237, 0);
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

  if ( (byte_4D2E5B6 & 1) == 0 )
  {
    sub_1C93AD4(&ServantStatusQuestBoardDraw_TypeInfo);
    byte_4D2E5B6 = 1;
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
      sub_1C93D2C(mCondObject, v6);
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
      sub_1C93D2C(0, method);
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

  if ( (byte_4D2E5B4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    byte_4D2E5B4 = 1;
  }
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !mInfoTextList
    || (mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       mInfoTextList,
                                                                       strIndex,
                                                                       (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__)) == 0 )
  {
    sub_1C93D2C(mInfoTextList, qinf);
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
    sub_1C93D2C(this, 0);
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
  float v12; // s1
  float v13; // s2
  float v14; // s0
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  v8 = label;
  if ( (byte_4D2E5C0 & 1) == 0 )
  {
    label = (UILabel_o *)sub_1C93AD4(&ServantStatusQuestBoardDraw_TypeInfo);
    byte_4D2E5C0 = 1;
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
    || (LODWORD(v14) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)label, 0),
        !transform) )
  {
LABEL_11:
    sub_1C93D2C(label, message);
  }
  v12 = 1.0 - (float)((float)baseHeight / (float)mHeight);
  v13 = fminf(v12, 1.0);
  if ( v12 < 0.0 )
    v13 = 0.0;
  v15.fields.y = 1.0;
  v15.fields.x = v13 + v14;
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
        sub_1C93D34(this);
      this = (ServantStatusQuestBoardDraw_o *)boardMessageData->m_Items[v5];
      if ( !this )
        break;
      if ( HIDWORD(this->fields.m_CancellationTokenSource) == 4 && LODWORD(this->fields.mcBaseP) == eventId )
        return (BoardMessageEntity_o *)this;
      if ( max_length == ++v5 )
        return 0;
    }
LABEL_12:
    sub_1C93D2C(this, boardMessageData);
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

  if ( (byte_4D2E5C1 & 1) == 0 )
  {
    sub_1C93AD4(&ServantStatusQuestBoardDraw___c_TypeInfo);
    byte_4D2E5C1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(ServantStatusQuestBoardDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantStatusQuestBoardDraw___c_TypeInfo->static_fields->__9 = (struct ServantStatusQuestBoardDraw___c_o *)v1;
  sub_1C93A78(
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
    sub_1C93D2C(this, 0);
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
    sub_1C93D2C(this, entity);
  return entity->fields.imagePriority == rQuestRlsNG->fields.imagePriority;
}