void __fastcall ServantStatusQuestBoardDraw___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  struct ServantStatusQuestBoardDraw_StaticFields *static_fields; // x0
  int64_t v8; // x1
  struct ServantStatusQuestBoardDraw_StaticFields *v9; // x0
  int64_t v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x1
  struct ServantStatusQuestBoardDraw_StaticFields *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x1
  struct ServantStatusQuestBoardDraw_StaticFields *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x1
  struct ServantStatusQuestBoardDraw_StaticFields *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x1
  struct ServantStatusQuestBoardDraw_StaticFields *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x1
  struct ServantStatusQuestBoardDraw_StaticFields *v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7

  if ( (byte_4BD9FBD & 1) == 0 )
  {
    sub_1C21E38(&ServantStatusQuestBoardDraw_TypeInfo);
    sub_1C21E38(&StringLiteral_20659/*"img_conductor_03"*/);
    sub_1C21E38(&StringLiteral_20660/*"img_conductor_04"*/);
    sub_1C21E38(&StringLiteral_20658/*"img_conductor_02"*/);
    sub_1C21E38(&StringLiteral_20776/*"img_questboard_1001"*/);
    sub_1C21E38(&StringLiteral_20657/*"img_conductor_01"*/);
    sub_1C21E38(&StringLiteral_20661/*"img_conductor_questboard"*/);
    sub_1C21E38(&StringLiteral_20653/*"img_commonbg"*/);
    byte_4BD9FBD = 1;
  }
  static_fields = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->TITLE_LABEL_BASE_WIDTH = xmmword_BFEDE0;
  static_fields->ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X = -208.0;
  v8 = StringLiteral_20653/*"img_commonbg"*/;
  static_fields->DARK_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_20653/*"img_commonbg"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->DARK_BOARD_SPRITE_NAME, v8, v1, v2, v3, v4, v5, v6);
  v9 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  *(_QWORD *)&v9->DARK_BOARD_WIDTH = 0x7A000001F0LL;
  v10 = StringLiteral_20661/*"img_conductor_questboard"*/;
  v9->BASE_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_20661/*"img_conductor_questboard"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v9->BASE_BOARD_SPRITE_NAME, v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_20658/*"img_conductor_02"*/;
  v18 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v18->TITLE_SPRITE_NAME_INTERLUDE = (struct System_String_o *)StringLiteral_20658/*"img_conductor_02"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v18->TITLE_SPRITE_NAME_INTERLUDE, v17, v19, v20, v21, v22, v23, v24);
  v25 = StringLiteral_20657/*"img_conductor_01"*/;
  v26 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v26->TITLE_SPRITE_NAME_INTERLUDE_MAP = (struct System_String_o *)StringLiteral_20657/*"img_conductor_01"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v26->TITLE_SPRITE_NAME_INTERLUDE_MAP, v25, v27, v28, v29, v30, v31, v32);
  v33 = StringLiteral_20659/*"img_conductor_03"*/;
  v34 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v34->TITLE_SPRITE_NAME_RAINFORCEMENT = (struct System_String_o *)StringLiteral_20659/*"img_conductor_03"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v34->TITLE_SPRITE_NAME_RAINFORCEMENT, v33, v35, v36, v37, v38, v39, v40);
  v41 = StringLiteral_20776/*"img_questboard_1001"*/;
  v42 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v42->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME = (struct System_String_o *)StringLiteral_20776/*"img_questboard_1001"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v42->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME,
    v41,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v49 = StringLiteral_20660/*"img_conductor_04"*/;
  v50 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v50->TITLE_SPRITE_NAME_LIMIT_UNSEAL = (struct System_String_o *)StringLiteral_20660/*"img_conductor_04"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v50->TITLE_SPRITE_NAME_LIMIT_UNSEAL, v49, v51, v52, v53, v54, v55, v56);
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
  System_Collections_Generic_List_object__o *mInfoTextList; // x0
  int size; // w8
  int v8; // w20
  MapControl_QuestInfo_o *v9; // x1
  int64_t Time; // x3
  const MethodInfo *v11; // x4
  ServantStatusQuestBoardDraw_o *v12; // x0
  int32_t v13; // w2

  if ( (byte_4BD9FB5 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD9FB5 = 1;
  }
  if ( (byte_4BD9FB6 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4BD9FB6 = 1;
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
                                                                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
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
      sub_1C22094(mInfoTextList, qinf);
    }
  }
  if ( (byte_4BD9FB7 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4BD9FB7 = 1;
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  }
  if ( !mInfoTextList || !mInfoTextList->fields._size )
    return;
  mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 mInfoTextList,
                                                                 0,
                                                                 (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
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
    v12 = this;
    v13 = 0;
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
    sub_1C2209C(this, questBoardManager);
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
      ItemIconComponent__SetItemImage_39389052((ItemIconComponent_o *)this, (int32_t)questBoardManager, v8, 0LL);
      return;
    }
LABEL_18:
    sub_1C22094(this, questBoardManager);
  }
  if ( !this )
    goto LABEL_18;
  if ( num <= 1 )
    v9 = -1;
  else
    v9 = v6->fields.num;
  ItemIconComponent__SetGift_39386620((ItemIconComponent_o *)this, v6->fields.type, v6->fields.objectId, v9, 0, 0LL);
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

  if ( (byte_4BD9FBA & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&QuestBoardInformationText_TypeInfo);
    sub_1C21E38(&StringLiteral_25427/*"{0}"*/);
    this = (ServantStatusQuestBoardDraw_o *)sub_1C21E38(&StringLiteral_13594/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/);
    byte_4BD9FBA = 1;
  }
  entity = 0LL;
  if ( !eventEnt || !eventCampaignEnt )
    goto LABEL_40;
  target = eventCampaignEnt->fields.target;
  this = (ServantStatusQuestBoardDraw_o *)CombineAdjustTarget__isTerminalExposable(target, 0LL);
  v19 = 0LL;
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
    v19 = 0LL;
    if ( target == 25 || target == 35 )
      return v19;
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
  if ( !ServantStatusQuestBoardDraw__IsValidSupportSelection(this, questEntity, phase, v18) )
    return 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ServantStatusQuestBoardDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !questEntity || !this )
LABEL_40:
    sub_1C22094(this, questEntity);
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
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_13594/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0LL);
  EventName = (Il2CppObject *)EventEntity__getEventName(eventEnt, 0LL);
  v24 = System_String__Format_63129848(v22, EventName, (Il2CppObject *)StringLiteral_25427/*"{0}"*/, 0LL);
  EndTime = EventEntity__GetEndTime(eventEnt, 0, 0LL);
  v19 = (QuestBoardInformationText_o *)sub_1C22084(QuestBoardInformationText_TypeInfo);
  QuestBoardInformationText___ctor(v19, v24, EndTime, 1, 0, 0LL, 0LL);
  return v19;
}


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
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  const MethodInfo *v40; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4BD9FB8 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&QuestBoardInformationText_TypeInfo);
    sub_1C21E38(&StringLiteral_25427/*"{0}"*/);
    sub_1C21E38(&StringLiteral_117/*" "*/);
    sub_1C21E38(&StringLiteral_13604/*"TIME_REST_STRING"*/);
    byte_4BD9FB8 = 1;
  }
  entity = 0LL;
  v16 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
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
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  if ( !questBoardManager || !CampaignTextListByEventQuestMaster )
    goto LABEL_25;
  EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                             (QuestReleaseOverwriteMaster_o *)CampaignTextListByEventQuestMaster,
                             this->fields.questId,
                             questBoardManager->fields.mListCreatedTime,
                             0LL);
  if ( !EntityByQuestIdAndTime )
    return (System_Collections_Generic_List_QuestBoardInformationText__o *)v16;
  v20 = EntityByQuestIdAndTime;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !CampaignTextListByEventQuestMaster )
    goto LABEL_25;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)CampaignTextListByEventQuestMaster,
          &entity,
          v20->fields.eventId,
          (const MethodInfo_325BE14 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
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
  EventName = EventEntity__getEventName((EventEntity_o *)entity, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_13604/*"TIME_REST_STRING"*/, 0LL);
  v27 = System_String__Concat_63128740(
          EventName,
          (System_String_o *)StringLiteral_117/*" "*/,
          v26,
          (System_String_o *)StringLiteral_25427/*"{0}"*/,
          0LL);
  v28 = (QuestBoardInformationText_o *)sub_1C22084(QuestBoardInformationText_TypeInfo);
  QuestBoardInformationText___ctor(v28, v27, v24, 0, 1, 0LL, 0LL);
  items = v16->fields._items;
  v36 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
  ++v16->fields._version;
  if ( !items )
LABEL_25:
    sub_1C22094(CampaignTextListByEventQuestMaster, v18);
  size = v16->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v16,
      (Il2CppObject *)v28,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = &items->obj.klass + size;
    v16->fields._size = size + 1;
    v38[4] = (Il2CppClass *)v28;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v38 + 4), (int64_t)v28, v29, v30, v31, v32, v33, v34);
  }
  return (System_Collections_Generic_List_QuestBoardInformationText__o *)v16;
}


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
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  int64_t v36; // x1
  Il2CppClass **v37; // x0
  const MethodInfo *v39; // [xsp+8h] [xbp-78h]
  bool v40; // [xsp+14h] [xbp-6Ch]
  bool *v41; // [xsp+18h] [xbp-68h]

  if ( (byte_4BD9FB9 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD9FB9 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  v40 = isQuestNoneCleared;
  v19 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = DataManager__GetMasterData_object_(
               v19,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               questId,
               (const MethodInfo_325BDC8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !questBoardManager )
    goto LABEL_22;
  mListCreatedTime = questBoardManager->fields.mListCreatedTime;
  v22 = (QuestEntity_o *)Instance;
  Instance = DataManager__GetMasterData_object_(
               v19,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventQuestMaster___);
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
  v23 = *((_DWORD *)Instance + 6);
  v24 = Instance;
  if ( v23 >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= v23 )
        sub_1C2209C(Instance, v18);
      v26 = (EventEntity_o *)*((_QWORD *)v24 + (int)v25 + 4);
      if ( !v26 || !MasterData_object )
        break;
      Instance = EventCampaignMaster__getData((EventCampaignMaster_o *)MasterData_object, v26->fields.id, 0LL);
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
          v36 = (int64_t)Instance;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v16,
              (Il2CppObject *)Instance,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = &items->obj.klass + size;
            v16->fields._size = size + 1;
            v37[4] = (Il2CppClass *)v36;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v37 + 4), v36, v27, v28, v29, v30, v31, v32);
          }
        }
      }
      v23 = *((_DWORD *)v24 + 6);
      if ( (int)++v25 >= v23 )
        return (System_Collections_Generic_List_QuestBoardInformationText__o *)v16;
    }
LABEL_22:
    sub_1C22094(Instance, v18);
  }
  return (System_Collections_Generic_List_QuestBoardInformationText__o *)v16;
}


bool __fastcall ServantStatusQuestBoardDraw__IsClose(MapControl_QuestInfo_o *qinf, const MethodInfo *method)
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x1
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

  if ( (byte_4BD9FAF & 1) == 0 )
  {
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9FAF = 1;
  }
  entityList = 0LL;
  memset(&v32, 0, sizeof(v32));
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
    v5 = 0;
    return v5 & 1;
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
        v5 = 1;
        return v5 & 1;
      }
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v9;
  if ( !Master_object )
    goto LABEL_53;
  if ( QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
         (QuestReleaseOverwriteMaster_o *)Master_object,
         &entityList,
         qinf->fields.questId,
         0LL,
         0LL) )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    IsQuestReleaseAll = (MapControl_WarInfo_o *)entityList;
    if ( !entityList )
      goto LABEL_53;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v31,
      (System_Collections_Generic_List_object__o *)entityList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    v32 = v31;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
    {
      if ( !v32.fields._current )
        sub_1C22094(0LL, v11);
      v12 = (Il2CppObject *)QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
                              (QuestReleaseOverwriteEntity_o *)v32.fields._current,
                              0LL);
      v19 = (int64_t)v12;
      if ( !v10 )
        sub_1C22094(v12, v12);
      items = v10->fields._items;
      v21 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
      ++v10->fields._version;
      if ( !items )
        sub_1C22094(v12, v12);
      size = v10->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          v12,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v19;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v23 + 4), v19, v13, v14, v15, v16, v17, v18);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    if ( !v10 )
      goto LABEL_53;
    IsQuestReleaseAll = (MapControl_WarInfo_o *)System_Collections_Generic_List_object___ToArray(
                                                  v10,
                                                  (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    v24 = IsQuestReleaseAll;
    if ( IsQuestReleaseAll )
      goto LABEL_37;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsQuestReleaseAll = (MapControl_WarInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !IsQuestReleaseAll )
LABEL_53:
    sub_1C22094(IsQuestReleaseAll, v4);
  IsQuestReleaseAll = (MapControl_WarInfo_o *)QuestReleaseMaster__getListByQuestID(
                                                (QuestReleaseMaster_o *)IsQuestReleaseAll,
                                                qinf->fields.questId,
                                                0LL);
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
  v26 = 0LL;
  do
  {
    if ( (unsigned int)v26 >= (unsigned int)v25 )
      sub_1C2209C(IsQuestReleaseAll, v4);
    v27 = *((_QWORD *)&v24->fields.mapInfoList + v26);
    if ( !v27 )
      goto LABEL_53;
    v29 = *(_DWORD *)(v27 + 20);
    v28 = *(_DWORD *)(v27 + 24);
    v30 = *(_QWORD *)(v27 + 32);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestReleaseAll = (MapControl_WarInfo_o *)CondType__IsOpen(v29, v28, v30, 0, 0LL, 0LL);
    if ( ((unsigned __int8)IsQuestReleaseAll & 1) == 0 )
      break;
    LODWORD(v25) = v24->fields.status;
    ++v26;
  }
  while ( (int)v26 < (int)v25 );
  v5 = (unsigned __int8)IsQuestReleaseAll ^ 1;
  return v5 & 1;
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

  if ( (byte_4BD9FB7 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4BD9FB7 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  return !mInfoTextList || mInfoTextList->fields._size == 0;
}


bool __fastcall ServantStatusQuestBoardDraw__IsMultiInfoText(
        ServantStatusQuestBoardDraw_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8

  if ( (byte_4BD9FB6 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4BD9FB6 = 1;
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
  QuestRestrictionInfoMaster_o *Master_object; // x0
  __int64 v7; // x1
  bool HasFlag; // w0
  bool v9; // w21
  QuestRestrictionInfoEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BD9FBB & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BD9FBB = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
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
        v9 = !HasFlag;
        return v9 & ~QuestEntity__HasFlag_40740584(questEntity, 2LL, phase, 0LL) & 1;
      }
LABEL_17:
      sub_1C22094(Master_object, v7);
    }
  }
  else if ( !QuestEntity__HasFlag_40740584(questEntity, 0x80000LL, phase, 0LL) )
  {
    HasFlag = QuestEntity__HasFlag_40740584(questEntity, 0x100000LL, phase, 0LL);
    goto LABEL_15;
  }
  v9 = 0;
  return v9 & ~QuestEntity__HasFlag_40740584(questEntity, 2LL, phase, 0LL) & 1;
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
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  int32_t questId; // w8
  UnityEngine_GameObject_o *v8; // x19
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BD9FBC & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_ServantStatusQuestBoardDraw_OnClick__);
    sub_1C21E38(&StringLiteral_10065/*"OnClickServantQuest"*/);
    byte_4BD9FBC = 1;
  }
  inputMessageObject = (UnityEngine_Object_o *)this->fields.inputMessageObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(inputMessageObject, 0LL, 0LL) || (questId = this->fields.questId) == 0 )
  {
    v11 = Method_ServantStatusQuestBoardDraw_OnClick__;
    if ( (*((_BYTE *)Method_ServantStatusQuestBoardDraw_OnClick__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1C21E50(Method_ServantStatusQuestBoardDraw_OnClick__);
    v12 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 2, 0, 0LL);
  }
  else
  {
    v8 = this->fields.inputMessageObject;
    v13 = questId;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v4, v5, v6);
    if ( !v8 )
      sub_1C22094(v9, v10);
    UnityEngine_GameObject__SendMessage_70850984(v8, (System_String_o *)StringLiteral_10065/*"OnClickServantQuest"*/, v9, 0LL);
  }
}


void __fastcall ServantStatusQuestBoardDraw__ResetInfoTextList(
        ServantStatusQuestBoardDraw_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *v3; // x8
  PartyOrganizationUtility_o *p_mInfoTextList; // x19
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // t1
  int32_t size; // w2
  int v7; // w9
  System_Collections_Generic_List_object__o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BD9FB2 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    byte_4BD9FB2 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  p_mInfoTextList = (PartyOrganizationUtility_o *)&this->fields.mInfoTextList;
  v3 = mInfoTextList;
  if ( mInfoTextList )
  {
    size = v3->fields._size;
    v7 = v3->fields._version + 1;
    v3->fields._size = 0;
    v3->fields._version = v7;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v3->fields._items, 0, size, 0LL);
  }
  else
  {
    v8 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    p_mInfoTextList->klass = (PartyOrganizationUtility_c *)v8;
    sub_1C21DDC(p_mInfoTextList, (int64_t)v8, v9, v10, v11, v12, v13, v14);
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
  __int64 Master_object; // x0
  Il2CppClass *klass; // x1
  System_String_o *monitor; // x20
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  bool v19; // w25
  int32_t monitor_high; // w22
  Il2CppObject *PrioredName; // x0
  System_String_o *v22; // x0
  int32_t targetId; // w26
  System_String_o *v24; // x21
  int32_t WarID_ByQuestID; // w26
  Il2CppObject *v26; // x0
  int64_t OpenedAt; // x26
  System_Object_array *v28; // x26
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x27
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x27
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x27
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x27
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v70; // x23
  _BOOL4 v71; // w26
  UILabel_o *mTitleNameLb; // x24
  int32_t v73; // w21
  UILabel_o *mCondChangeMessage; // x19
  struct ServantStatusQuestBoardDraw_StaticFields *static_fields; // x8
  __int64 v76; // x9
  int32_t v77; // w24
  int32_t leftIndent; // w25
  float v79; // s8
  float ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X; // s9
  float v81; // s1
  float v82; // s0
  int v83; // s2
  float v84; // s9
  float v85; // s0
  float v86; // s1
  float v87; // s0
  int v88; // s2
  float v89; // s1
  int v90; // s2
  UIWidget_o *mOverwriteAdvanceNoticeLb; // x22
  const MethodInfo *v92; // x4
  const MethodInfo *v93; // x4
  System_String_o *overlayClosedMessage; // x20
  UILabel_o *v95; // x21
  float v96; // s8
  UnityEngine_Object_o *mOverwriteAdvanceNoticeArrowObj; // x20
  __int64 v98; // x0
  char v99; // [xsp+8h] [xbp-98h]
  int32_t Minute; // [xsp+Ch] [xbp-94h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-90h] BYREF
  int32_t Day; // [xsp+14h] [xbp-8Ch] BYREF
  int64_t value; // [xsp+18h] [xbp-88h] BYREF
  uint64_t dateData; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-78h] BYREF
  System_DateTime_o v106; // 0:x0.8
  System_DateTime_o v107; // 0:x0.8
  System_DateTime_o v108; // 0:x0.8
  System_DateTime_o v109; // 0:x0.8
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD9FB4 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ClosedMessageMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_1C21E38(&System_DateTime_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&long_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ServantStatusQuestBoardDraw_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C21E38(&StringLiteral_15070/*"UNKNOWN_QUEST_NAME"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD9FB4 = 1;
  }
  dateData = 0LL;
  entity = 0LL;
  if ( questReleaseClosedID < 1 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ClosedMessageMaster___);
  if ( !Master_object )
    goto LABEL_125;
  monitor = (System_String_o *)StringLiteral_1/*""*/;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         questReleaseClosedID,
         (const MethodInfo_325BE14 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__) )
  {
    Master_object = (__int64)entity;
    if ( !entity )
      goto LABEL_125;
    monitor = (System_String_o *)entity[1].monitor;
    Master_object = ClosedMessageEntity__IsChangeDispClosedMessage((ClosedMessageEntity_o *)entity, 0LL);
    if ( !entity )
      goto LABEL_125;
    v19 = Master_object;
    Master_object = ClosedMessageEntity__IsChangeDispPositionLeft((ClosedMessageEntity_o *)entity, 0LL);
    if ( !entity )
      goto LABEL_125;
    monitor_high = HIDWORD(entity[2].monitor);
  }
  else
  {
    monitor_high = 0;
    Master_object = 0LL;
    v19 = 0;
  }
  if ( !questReleaseEntity )
    goto LABEL_125;
  v99 = Master_object;
  switch ( questReleaseEntity->fields.type )
  {
    case 1:
      targetId = questReleaseEntity->fields.targetId;
      v24 = (System_String_o *)StringLiteral_1/*""*/;
      Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Master_object )
        goto LABEL_125;
      WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Master_object, targetId, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !Master_object )
        goto LABEL_125;
      v26 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              WarID_ByQuestID,
              (const MethodInfo_325BDC8 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( v26 )
      {
        PrioredName = (Il2CppObject *)WarEntity__GetPrioredName((WarEntity_o *)v26, 0LL);
LABEL_16:
        v22 = System_String__Format(monitor, PrioredName, 0LL);
LABEL_42:
        monitor = v22;
      }
      else
      {
        monitor = v24;
      }
LABEL_43:
      if ( warEntity != 0LL && !v19 )
        v19 = WarEntity__IsChangeDispClosedMessage(warEntity, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
      if ( !Master_object )
        goto LABEL_125;
      EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                                 (QuestReleaseOverwriteMaster_o *)Master_object,
                                 this->fields.questId,
                                 checkTime,
                                 0LL);
      v70 = EntityByQuestIdAndTime;
      if ( !EntityByQuestIdAndTime )
      {
        v71 = 0;
        if ( v19 )
          goto LABEL_50;
LABEL_56:
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
              if ( !v71 )
                return;
              Master_object = (__int64)this->fields.mCondObject;
              if ( Master_object )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
                if ( v70 )
                {
                  Master_object = (__int64)this->fields.mCondChangeMessage;
                  if ( Master_object )
                  {
                    UILabel__set_text((UILabel_o *)Master_object, v70->fields.overlayClosedMessage, 0LL);
                    mCondChangeMessage = this->fields.mCondChangeMessage;
                    Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
                    if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
                    if ( mCondChangeMessage )
                    {
                      UILabel__SetCondensedScale(
                        mCondChangeMessage,
                        ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH,
                        0,
                        0LL);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_125;
      }
      v71 = !System_String__IsNullOrEmpty(EntityByQuestIdAndTime->fields.overlayClosedMessage, 0LL);
      if ( !v19 )
        goto LABEL_56;
LABEL_50:
      Master_object = (__int64)this->fields.mAdvanceNoticeObj;
      if ( !Master_object )
        goto LABEL_125;
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
            goto LABEL_125;
          klass = entity[2].klass;
          v73 = monitor_high;
        }
        else
        {
          v73 = monitor_high;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15070/*"UNKNOWN_QUEST_NAME"*/, 0LL);
          klass = (Il2CppClass *)Master_object;
        }
        if ( !mTitleNameLb )
LABEL_125:
          sub_1C22094(Master_object, klass);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15070/*"UNKNOWN_QUEST_NAME"*/, 0LL);
        if ( !mTitleNameLb )
          goto LABEL_125;
        klass = (Il2CppClass *)Master_object;
        v73 = monitor_high;
      }
      UILabel__set_text(mTitleNameLb, (System_String_o *)klass, 0LL);
      Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
        Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      }
      static_fields = *(struct ServantStatusQuestBoardDraw_StaticFields **)(Master_object + 184);
      v76 = 12LL;
      if ( !v71 )
        v76 = 8LL;
      v77 = *(int32_t *)((char *)&static_fields->TITLE_LABEL_BASE_WIDTH + v76);
      if ( v71 )
      {
        if ( !v70 )
          goto LABEL_125;
        leftIndent = v70->fields.leftIndent;
      }
      else
      {
        leftIndent = 0;
      }
      v79 = (float)v73;
      if ( (v99 & 1) != 0 )
      {
        if ( !*(_DWORD *)(Master_object + 224) )
        {
          j_il2cpp_runtime_class_init_0(Master_object);
          static_fields = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
        }
        Master_object = (__int64)this->fields.mAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_125;
        ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X = static_fields->ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X;
        UIWidget__set_pivot((UIWidget_o *)Master_object, 3, 0LL);
        Master_object = (__int64)this->fields.mAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_125;
        Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
        if ( !Master_object )
          goto LABEL_125;
        v81 = 24.0;
        if ( !v71 )
          v81 = 0.0;
        v83 = 0;
        v82 = ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X + v79;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)Master_object,
          *(UnityEngine_Vector3_o *)(&v81 - 1),
          0LL);
        Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
        if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
          Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
        }
        if ( !this->fields.mOverwriteAdvanceNoticeLb )
          goto LABEL_125;
        v84 = *(float *)(*(_QWORD *)(Master_object + 184) + 16LL);
        UIWidget__set_pivot((UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb, 3, 0LL);
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_125;
        Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
        if ( !Master_object )
          goto LABEL_125;
        v85 = v84 + (float)leftIndent;
      }
      else
      {
        Master_object = (__int64)this->fields.mAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_125;
        UIWidget__set_pivot((UIWidget_o *)Master_object, 4, 0LL);
        Master_object = (__int64)this->fields.mAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_125;
        Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
        if ( !Master_object )
          goto LABEL_125;
        v86 = 24.0;
        if ( !v71 )
          v86 = 0.0;
        v88 = 0;
        v87 = v79 * 0.5;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)Master_object,
          *(UnityEngine_Vector3_o *)(&v86 - 1),
          0LL);
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_125;
        UIWidget__set_pivot((UIWidget_o *)Master_object, 4, 0LL);
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_125;
        Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
        if ( !Master_object )
          goto LABEL_125;
        v85 = (float)leftIndent * 0.5;
      }
      v89 = -26.0;
      v90 = 0;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)Master_object,
        *(UnityEngine_Vector3_o *)&v85,
        0LL);
      Master_object = (__int64)this->fields.mAdvanceNoticeLb;
      if ( !Master_object )
        goto LABEL_125;
      UIWidget__set_height((UIWidget_o *)Master_object, v77, 0LL);
      Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      mOverwriteAdvanceNoticeLb = (UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      if ( !mOverwriteAdvanceNoticeLb )
        goto LABEL_125;
      UIWidget__set_height(
        mOverwriteAdvanceNoticeLb,
        ServantStatusQuestBoardDraw_TypeInfo->static_fields->ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT,
        0LL);
      ServantStatusQuestBoardDraw___SetAdvanceNoticeText_g__CalculateLabel_54_0(
        this->fields.mAdvanceNoticeLb,
        monitor,
        v77,
        v73,
        v92);
      if ( v71 )
      {
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
        if ( !Master_object )
          goto LABEL_125;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
        if ( !v70 )
          goto LABEL_125;
        overlayClosedMessage = v70->fields.overlayClosedMessage;
        v95 = this->fields.mOverwriteAdvanceNoticeLb;
        if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
        v96 = v79 * 0.5;
        ServantStatusQuestBoardDraw___SetAdvanceNoticeText_g__CalculateLabel_54_0(
          v95,
          overlayClosedMessage,
          v77,
          leftIndent,
          v93);
      }
      else
      {
        v96 = 0.0;
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
            v110.fields.y = 0.0;
            v110.fields.z = 0.0;
            v110.fields.x = v96;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Master_object, v110, 0LL);
            return;
          }
        }
        goto LABEL_125;
      }
      return;
    case 6:
    case 7:
    case 9:
      value = questReleaseEntity->fields.value;
      PrioredName = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &value, v16, v17, v18);
      goto LABEL_16;
    case 0xC:
      if ( !questEntity )
        goto LABEL_125;
      OpenedAt = QuestEntity__getOpenedAt(questEntity, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      dateData = NetworkManager__getServerDateTime_39807404(OpenedAt, 0LL).fields._dateData;
      v28 = (System_Object_array *)sub_1C21EE0(object___TypeInfo, 4LL);
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v106.fields._dateData = (uint64_t)&dateData;
      LODWORD(value) = System_DateTime__get_Month(v106, 0LL);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &value, v29, v30, v31);
      if ( !v28 )
        goto LABEL_125;
      v38 = Master_object;
      if ( Master_object )
      {
        Master_object = sub_1C21F74(Master_object, v28->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_127;
      }
      if ( !v28->max_length )
        goto LABEL_126;
      v28->m_Items[0] = (Il2CppObject *)v38;
      sub_1C21DDC((PartyOrganizationUtility_o *)v28->m_Items, v38, v32, v33, v34, v35, v36, v37);
      v107.fields._dateData = (uint64_t)&dateData;
      Day = System_DateTime__get_Day(v107, 0LL);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Day, v39, v40, v41);
      v48 = Master_object;
      if ( Master_object )
      {
        Master_object = sub_1C21F74(Master_object, v28->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_127;
      }
      if ( v28->max_length <= 1 )
        goto LABEL_126;
      v28->m_Items[1] = (Il2CppObject *)v48;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v28->m_Items[1], v48, v42, v43, v44, v45, v46, v47);
      v108.fields._dateData = (uint64_t)&dateData;
      Hour = System_DateTime__get_Hour(v108, 0LL);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Hour, v49, v50, v51);
      v58 = Master_object;
      if ( Master_object )
      {
        Master_object = sub_1C21F74(Master_object, v28->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_127;
      }
      if ( v28->max_length <= 2 )
        goto LABEL_126;
      v28->m_Items[2] = (Il2CppObject *)v58;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v28->m_Items[2], v58, v52, v53, v54, v55, v56, v57);
      v109.fields._dateData = (uint64_t)&dateData;
      Minute = System_DateTime__get_Minute(v109, 0LL);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Minute, v59, v60, v61);
      v68 = Master_object;
      if ( Master_object )
      {
        Master_object = sub_1C21F74(Master_object, v28->obj.klass->_1.element_class);
        if ( !Master_object )
        {
LABEL_127:
          v98 = sub_1C220B8();
          sub_1C21F60(v98, 0LL);
        }
      }
      if ( v28->max_length <= 3 )
LABEL_126:
        sub_1C2209C(Master_object, klass);
      v28->m_Items[3] = (Il2CppObject *)v68;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v28->m_Items[3], v68, v62, v63, v64, v65, v66, v67);
      v22 = System_String__Format_63129984(monitor, v28, 0LL);
      goto LABEL_42;
    default:
      goto LABEL_43;
  }
}


void __fastcall ServantStatusQuestBoardDraw__SetDark(ServantStatusQuestBoardDraw_o *this, const MethodInfo *method)
{
  UIWidget_o *mLineSp; // x0
  UISprite_o *mcBaseP; // x20
  UILabel_o *mNoneLb; // x20
  const MethodInfo *v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct UnityEngine_GameObject_o **p_inputMessageObject; // x19
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4BD9FB0 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&ServantStatusQuestBoardDraw_TypeInfo);
    sub_1C21E38(&StringLiteral_12092/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD9FB0 = 1;
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
  mLineSp = (UIWidget_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12092/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/, 0LL);
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
  ServantStatusQuestBoardDraw__ResetInfoTextList(this, v6);
  mLineSp = (UIWidget_o *)this->fields.mOptionInfoLb;
  if ( !mLineSp )
    goto LABEL_27;
  mLineSp = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mLineSp, 0LL);
  if ( !mLineSp )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0LL);
  this->fields.mRewardIconInfs = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.mRewardIconInfs, 0LL, v7, v8, v9, v10, v11, v12);
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
    sub_1C22094(mLineSp, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0LL);
  this->fields.inputMessageObject = 0LL;
  p_inputMessageObject = &this->fields.inputMessageObject;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_inputMessageObject, 0LL, v14, v15, v16, v17, v18, v19);
  *((_DWORD *)p_inputMessageObject + 2) = 0;
  p_inputMessageObject[2] = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)(p_inputMessageObject + 2), 0LL, v20, v21, v22, v23, v24, v25);
}


void __fastcall ServantStatusQuestBoardDraw__SetInfoTextAlpha(
        ServantStatusQuestBoardDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8
  BoardOptionTextWithIconComponent_o *mOptionInfoLb; // x0

  if ( (byte_4BD9FB6 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4BD9FB6 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList && mInfoTextList->fields._size >= 2 )
  {
    mOptionInfoLb = this->fields.mOptionInfoLb;
    if ( !mOptionInfoLb )
      sub_1C22094(0LL, method);
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
  __int64 Master_object; // x0
  __int64 giftIconId; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  bool v22; // w24
  int current; // w23
  QuestEntity_o *Mine; // x26
  const MethodInfo *v25; // x1
  bool v26; // w25
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  const MethodInfo *v33; // x1
  _BOOL4 IsClear; // w27
  int v35; // w8
  int32_t id; // w8
  int32_t warId; // w21
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v39; // x24
  bool v40; // w8
  Il2CppObject *v41; // x29
  int32_t questPhase; // w21
  int32_t PhaseMax; // w8
  Il2CppObject *v44; // x0
  Il2CppObject *v45; // x21
  _BOOL4 v46; // w23
  _BOOL4 v47; // w25
  float v48; // s1
  float v49; // s0
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x23
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct UISprite_o *mcBaseP; // x8
  struct UIAtlas_o *mAtlas; // x1
  UISprite_o *v59; // x29
  System_Action_o *v60; // x29
  _BOOL4 v61; // w28
  UISprite_o *mTitleSp; // x29
  int v63; // w27
  __int64 v64; // x9
  System_Action_o *v65; // x29
  const MethodInfo *v66; // x6
  QuestBehaviorMaster_o *v67; // x29
  struct UILabel_o *mTitleNameLb; // x21
  System_String_o **v69; // x8
  LocalizationManager_c *v70; // x0
  System_String_o **v71; // x9
  System_String_o *v72; // x24
  System_String_o *v73; // x0
  System_String_o *v74; // x1
  int32_t v75; // w21
  int32_t TITLE_LABEL_BASE_WIDTH; // w24
  bool v77; // cc
  UnityEngine_Transform_o *v78; // x21
  struct UILabel_o *v79; // x8
  float y; // s1
  float x; // s0
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  int32_t ServantId; // w21
  __int64 v91; // x24
  UILabel_o *mTitleShortcutLb; // x21
  Il2CppObject *v93; // x0
  __int64 v94; // x27
  __int64 v95; // x28
  ServantLimitImageMaster_o *v96; // x24
  const MethodInfo *v97; // x1
  System_String_o *v98; // x1
  __int64 endTime; // x24
  System_Collections_Generic_List_object__o *mInfoTextList; // x21
  System_String_o *v101; // x28
  QuestBoardInformationText_o *v102; // x27
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  struct System_Object_array *items; // x8
  _QWORD *v110; // x9
  __int64 size; // x10
  Il2CppClass **v112; // x0
  System_String_o *v113; // x21
  Il2CppObject *v114; // x24
  Il2CppObject *BattleName; // x0
  int32_t v116; // w24
  int32_t v117; // w0
  int32_t v118; // w1
  struct System_Collections_Generic_List_QuestBoardInformationText__o *v119; // x21
  int32_t v120; // w2
  int v121; // w8
  int32_t v122; // w9
  bool v123; // w21
  int32_t v124; // w8
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  QuestBehaviorMaster_o *v131; // x21
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  __int64 v138; // x8
  struct GiftEntity_array *v139; // x22
  int v140; // w9
  _DWORD *v141; // x8
  int v142; // w9
  int32_t v143; // w2
  int32_t v144; // w3
  int v145; // w8
  UnityEngine_Component_o *mServantLimitRewardObtainedSP; // x21
  char v147; // w21
  const MethodInfo *v148; // [xsp+0h] [xbp-110h]
  int32_t limitCounta; // [xsp+1Ch] [xbp-F4h]
  int64_t checkTime; // [xsp+20h] [xbp-F0h]
  int v151; // [xsp+28h] [xbp-E8h]
  int questReleaseClosedID; // [xsp+2Ch] [xbp-E4h]
  int32_t phase; // [xsp+30h] [xbp-E0h]
  bool HasStatus; // [xsp+34h] [xbp-DCh]
  struct UnityEngine_GameObject_o *v155; // [xsp+38h] [xbp-D8h]
  char v156; // [xsp+44h] [xbp-CCh]
  ServantStatusQuestBoardManager_o *questBoardManagera; // [xsp+48h] [xbp-C8h]
  int32_t QuestType; // [xsp+50h] [xbp-C0h]
  _BOOL4 IsLimitCountSealQuest; // [xsp+54h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_int__o v160; // [xsp+58h] [xbp-B8h] BYREF
  bool isNotItemConsume; // [xsp+74h] [xbp-9Ch] BYREF
  int32_t fixedVal[2]; // [xsp+78h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v163; // [xsp+80h] [xbp-90h] BYREF
  UserQuestEntity_o *entity; // [xsp+A0h] [xbp-70h] BYREF
  QuestReleaseEntity_o *questReleaseNG; // [xsp+A8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v166; // 0:x0.16

  if ( (byte_4BD9FB1 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&QuestBoardInformationText_TypeInfo);
    sub_1C21E38(&ServantStatusQuestBoardDraw_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C21E38(&Method_ServantStatusQuestBoardDraw___c__DisplayClass48_0__SetItem_b__0__);
    sub_1C21E38(&Method_ServantStatusQuestBoardDraw___c__DisplayClass48_0__SetItem_b__1__);
    sub_1C21E38(&ServantStatusQuestBoardDraw___c__DisplayClass48_0_TypeInfo);
    sub_1C21E38(&StringLiteral_13597/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_1C21E38(&StringLiteral_25427/*"{0}"*/);
    sub_1C21E38(&StringLiteral_12159/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE2"*/);
    sub_1C21E38(&StringLiteral_20526/*"icon_reward_limits_release"*/);
    sub_1C21E38(&StringLiteral_12161/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT2"*/);
    sub_1C21E38(&StringLiteral_12160/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_12158/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE"*/);
    sub_1C21E38(&StringLiteral_12115/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/);
    byte_4BD9FB1 = 1;
  }
  entity = 0LL;
  questReleaseNG = 0LL;
  memset(&v163, 0, sizeof(v163));
  *(_QWORD *)fixedVal = 0LL;
  isNotItemConsume = 0;
  v13 = sub_1C22084(ServantStatusQuestBoardDraw___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_272;
  *(_QWORD *)(v13 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)this, v16, v17, v18, v19, v20, v21);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !qinf )
    goto LABEL_272;
  if ( !Master_object )
    goto LABEL_272;
  v155 = inputMessageObject;
  limitCounta = limitCount;
  questBoardManagera = questBoardManager;
  Master_object = (__int64)QuestGroupMaster__GetInterludeQuestIdList(
                             (QuestGroupMaster_o *)Master_object,
                             qinf->fields.questId,
                             0LL);
  if ( !Master_object )
    goto LABEL_272;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v160,
    (System_Collections_Generic_List_int__o *)Master_object,
    (const MethodInfo_3632B64 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v163 = v160;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v163,
            (const MethodInfo_33DD1D0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v22 )
      break;
    current = v163.fields._current;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsQuestClear_38834244(current, -1, 0, 0LL) )
      goto LABEL_16;
  }
  current = 0;
LABEL_16:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v163,
    (const MethodInfo_33DD1CC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( !questBoardManagera )
    goto LABEL_272;
  checkTime = questBoardManagera->fields.mListCreatedTime;
  Mine = MapControl_QuestInfo__GetMine(qinf, 0LL);
  QuestType = MapControl_QuestInfo__GetQuestType(qinf, 0LL);
  v26 = v22 || MapControl_QuestInfo__IsClear(qinf, 0LL);
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  Master_object = ServantStatusQuestBoardDraw__IsClose(qinf, v25);
  v156 = Master_object;
  if ( beforeQuestInfo )
  {
    IsClear = MapControl_QuestInfo__IsClear(beforeQuestInfo, 0LL);
    if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    Master_object = ServantStatusQuestBoardDraw__IsClose(beforeQuestInfo, v33);
    v35 = Master_object & 1;
    if ( !Mine )
      goto LABEL_272;
  }
  else
  {
    v35 = 0;
    IsClear = 1;
    if ( !Mine )
      goto LABEL_272;
  }
  v151 = v35;
  id = Mine->fields.id;
  this->fields.qinf = qinf;
  this->fields.questId = id;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.qinf, (int64_t)qinf, v27, v28, v29, v30, v31, v32);
  warId = qinf->fields.warId;
  Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Master_object )
    goto LABEL_272;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Master_object, warId, 0LL);
  v39 = WarEntityByWarID;
  if ( WarEntityByWarID )
    v40 = !WarEntity__IsFolder(WarEntityByWarID, 0LL);
  else
    v40 = 0;
  *(_BYTE *)(v13 + 40) = v40;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_object )
    goto LABEL_272;
  IsLimitCountSealQuest = ServantLimitImageMaster__IsLimitCountSealQuest(
                            (ServantLimitImageMaster_o *)Master_object,
                            this->fields.questId,
                            0LL);
  Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Master_object )
    goto LABEL_272;
  clsQuestCheck__mfQuestReleaseCheckGetEntityByQuestID(
    (clsQuestCheck_o *)Master_object,
    Mine->fields.id,
    &questReleaseNG,
    qinf,
    0LL);
  if ( questReleaseNG )
    questReleaseClosedID = questReleaseNG->fields.closedMessageId;
  else
    questReleaseClosedID = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v41 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  Master_object = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (__int64)NetworkManager_TypeInfo;
  }
  if ( current < 1 )
  {
    if ( !v41 )
      goto LABEL_272;
    current = this->fields.questId;
  }
  else if ( !v41 )
  {
    goto LABEL_272;
  }
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)v41,
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
  v44 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  v45 = v44;
  v46 = !v26 && IsClear;
  if ( v26 )
  {
    v47 = 1;
LABEL_70:
    v48 = 1.0;
    v49 = 0.5;
    v155 = 0LL;
    goto LABEL_71;
  }
  if ( v44 )
  {
    if ( QuestBehaviorMaster__IsOpenQuestBehaviorCond((QuestBehaviorMaster_o *)v44, this->fields.questId, phase, 9, 0LL) )
    {
      v156 = 0;
      questReleaseClosedID = 0;
      HasStatus = 0;
      v47 = 1;
      IsClear = v46;
      goto LABEL_70;
    }
    IsClear = v46;
  }
  v47 = 0;
  if ( (v156 & 1) != 0 )
  {
    v156 = 1;
    goto LABEL_70;
  }
  v49 = 1.0;
  v156 = 0;
  v48 = 1.0;
LABEL_71:
  *(float *)(v13 + 24) = v49;
  *(float *)(v13 + 28) = v49;
  *(float *)(v13 + 32) = v49;
  *(float *)(v13 + 36) = v48;
  Master_object = (__int64)this->fields.mTitleObj;
  if ( !Master_object )
    goto LABEL_272;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  Master_object = (__int64)this->fields.mOptionInfoLb;
  if ( !Master_object )
    goto LABEL_272;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_272;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  Master_object = (__int64)this->fields.mRewardObj;
  if ( !Master_object )
    goto LABEL_272;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  Master_object = (__int64)this->fields.mAdvanceNoticeObj;
  if ( !Master_object )
    goto LABEL_272;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
  if ( !Master_object )
    goto LABEL_272;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  Master_object = (__int64)this->fields.mCondObject;
  if ( !Master_object )
    goto LABEL_272;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  Master_object = (__int64)this->fields.mServantLimitRewardObtainedSP;
  if ( !Master_object )
    goto LABEL_272;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_272;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  mcBaseP = this->fields.mcBaseP;
  if ( !mcBaseP )
    goto LABEL_272;
  mAtlas = mcBaseP->fields.mAtlas;
  this->fields.basePanelAtlas = mAtlas;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.basePanelAtlas, (int64_t)mAtlas, v51, v52, v53, v54, v55, v56);
  v59 = this->fields.mcBaseP;
  Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  if ( !v59 )
    goto LABEL_272;
  UISprite__set_spriteName(v59, ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME, 0LL);
  if ( IsLimitCountSealQuest )
  {
    v60 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v60,
      (Il2CppObject *)v13,
      Method_ServantStatusQuestBoardDraw___c__DisplayClass48_0__SetItem_b__0__,
      0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadEventUI(v60, 1, 0LL);
  }
  Master_object = (__int64)this->fields.mcBaseP;
  if ( !Master_object )
    goto LABEL_272;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_object + 840LL))(
    Master_object,
    *(_QWORD *)(*(_QWORD *)Master_object + 848LL));
  Master_object = (__int64)this->fields.mcBaseP;
  if ( !Master_object )
    goto LABEL_272;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v13 + 24), 0LL);
  Master_object = (__int64)this->fields.mLineSp;
  if ( !Master_object )
    goto LABEL_272;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0LL);
  Master_object = (__int64)this->fields.mLineSp;
  if ( !Master_object )
    goto LABEL_272;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v13 + 24), 0LL);
  Master_object = (__int64)this->fields.mTitle2Sp;
  v61 = !v47 && IsClear;
  if ( !Master_object )
    goto LABEL_272;
  if ( v47 )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 0, 0LL);
    Master_object = (__int64)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_272;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 0, 0LL);
    Master_object = (__int64)this->fields.mLinkObj;
    if ( !Master_object )
      goto LABEL_272;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0LL);
    Master_object = (__int64)this->fields.mTitle2Sp;
    if ( !Master_object )
      goto LABEL_272;
    UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v13 + 24), 0LL);
    Master_object = (__int64)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_272;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0LL);
    Master_object = (__int64)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_272;
    UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0LL);
    mTitleSp = this->fields.mTitleSp;
    if ( QuestType == 3 )
    {
      v63 = *(unsigned __int8 *)(v13 + 40);
      Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      if ( !mTitleSp )
        goto LABEL_272;
      v64 = 56LL;
      if ( !v63 )
        v64 = 48LL;
      UISprite__set_spriteName(
        mTitleSp,
        *(System_String_o **)((char *)&ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH + v64),
        0LL);
      if ( IsLimitCountSealQuest )
      {
        v65 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(
          v65,
          (Il2CppObject *)v13,
          Method_ServantStatusQuestBoardDraw___c__DisplayClass48_0__SetItem_b__1__,
          0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__LoadEventUI(v65, 1, 0LL);
      }
    }
    else
    {
      Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      if ( !mTitleSp )
        goto LABEL_272;
      UISprite__set_spriteName(
        mTitleSp,
        ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_SPRITE_NAME_RAINFORCEMENT,
        0LL);
      v61 = IsClear;
    }
    Master_object = (__int64)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_272;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_object + 840LL))(
      Master_object,
      *(_QWORD *)(*(_QWORD *)Master_object + 848LL));
    Master_object = (__int64)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_272;
    UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v13 + 24), 0LL);
    Master_object = (__int64)this->fields.mLinkObj;
    if ( !Master_object )
      goto LABEL_272;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
    Master_object = (__int64)this->fields.mLinkObj;
    if ( !Master_object )
      goto LABEL_272;
    Master_object = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Master_object, 0LL);
    if ( !Master_object )
      goto LABEL_272;
    Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)Master_object,
                               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !Master_object )
      goto LABEL_272;
    UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v13 + 24), 0LL);
    IsClear = v61;
  }
  Master_object = (__int64)this->fields.mClearObj;
  if ( !Master_object )
    goto LABEL_272;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v47, 0LL);
  Master_object = (__int64)this->fields.mNoneLb;
  if ( !Master_object )
    goto LABEL_272;
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !v47 && !IsClear )
  {
    v67 = (QuestBehaviorMaster_o *)v45;
    mTitleNameLb = this->fields.mTitleNameLb;
    if ( QuestType == 3 )
    {
      v69 = (System_String_o **)&StringLiteral_12158/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE"*/;
      v70 = LocalizationManager_TypeInfo;
      v71 = (System_String_o **)&StringLiteral_12159/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE2"*/;
    }
    else
    {
      v69 = (System_String_o **)&StringLiteral_12160/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/;
      v70 = LocalizationManager_TypeInfo;
      v71 = (System_String_o **)&StringLiteral_12161/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT2"*/;
    }
    if ( v151 )
      v69 = v71;
    v72 = *v69;
    if ( !v70->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v70);
    v73 = v72;
    goto LABEL_137;
  }
  v67 = (QuestBehaviorMaster_o *)v45;
  if ( questReleaseClosedID < 1 )
  {
    if ( !questReleaseNG || questReleaseNG->fields.type != 8 )
    {
      Master_object = (__int64)QuestEntity__getQuestName(Mine, 0LL);
      if ( !Master_object )
        goto LABEL_272;
      v113 = (System_String_o *)Master_object;
      if ( System_String__Contains((System_String_o *)Master_object, (System_String_o *)StringLiteral_25427/*"{0}"*/, 0LL) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v114 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantMaster___);
        Master_object = QuestEntity__getServantId(Mine, 0LL);
        if ( !v114 )
          goto LABEL_272;
        Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)v114,
                                   Master_object,
                                   (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Master_object )
          goto LABEL_272;
        BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Master_object, 0, -1, 0LL);
        v113 = System_String__Format(v113, BattleName, 0LL);
      }
      Master_object = (__int64)this->fields.mTitleNameLb;
      if ( !Master_object )
        goto LABEL_272;
      v74 = v113;
      goto LABEL_139;
    }
    mTitleNameLb = this->fields.mTitleNameLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v73 = (System_String_o *)StringLiteral_12115/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/;
LABEL_137:
    Master_object = (__int64)LocalizationManager__Get(v73, 0LL);
    if ( !mTitleNameLb )
      goto LABEL_272;
    v74 = (System_String_o *)Master_object;
    Master_object = (__int64)mTitleNameLb;
LABEL_139:
    UILabel__set_text((UILabel_o *)Master_object, v74, 0LL);
    goto LABEL_140;
  }
  ServantStatusQuestBoardDraw__SetAdvanceNoticeText(
    this,
    questReleaseClosedID,
    v39,
    Mine,
    questReleaseNG,
    checkTime,
    v66);
LABEL_140:
  Master_object = (__int64)this->fields.mTitleNameLb;
  if ( !Master_object )
    goto LABEL_272;
  v75 = *(_DWORD *)(Master_object + 168);
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    Master_object = (__int64)this->fields.mTitleNameLb;
    if ( !Master_object )
      goto LABEL_272;
  }
  TITLE_LABEL_BASE_WIDTH = ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH;
  Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
  v77 = v75 <= TITLE_LABEL_BASE_WIDTH;
  v78 = (UnityEngine_Transform_o *)Master_object;
  if ( v77 )
  {
    if ( !byte_4BD6BB6 )
    {
      Master_object = sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB6 = 1;
    }
    if ( !v78 )
      goto LABEL_272;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    y = static_fields->oneVector.fields.y;
    z = static_fields->oneVector.fields.z;
    x = static_fields->oneVector.fields.x;
  }
  else
  {
    Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
    if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    v79 = this->fields.mTitleNameLb;
    if ( !v79 || !v78 )
      goto LABEL_272;
    y = 1.0;
    x = (float)ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH / (float)v79->fields.mWidth;
    z = 1.0;
  }
  UnityEngine_Transform__set_localScale(v78, *(UnityEngine_Vector3_o *)&x, 0LL);
  Master_object = (__int64)this->fields.mTitleNameLb;
  if ( !Master_object )
    goto LABEL_272;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v13 + 24), 0LL);
  this->fields.inputMessageObject = v155;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.inputMessageObject,
    (int64_t)v155,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  if ( QuestType != 3 )
  {
    Master_object = (__int64)this->fields.mTitleShortcutSp;
    if ( !Master_object )
      goto LABEL_272;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0LL);
    Master_object = (__int64)this->fields.mTitleShortcutSp;
    if ( !Master_object )
      goto LABEL_272;
    UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v13 + 24), 0LL);
    Master_object = (__int64)this->fields.mTitleShortcutLb;
    if ( !Master_object )
      goto LABEL_272;
    v98 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_178;
  }
  ServantId = QuestEntity__getServantId(Mine, 0LL);
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_272;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Master_object )
    goto LABEL_272;
  Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             ServantId,
                             (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.mTitleShortcutSp )
    goto LABEL_272;
  v91 = Master_object;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mTitleShortcutSp, 0, 0LL);
  mTitleShortcutLb = this->fields.mTitleShortcutLb;
  if ( !v91 )
  {
    if ( !mTitleShortcutLb )
      goto LABEL_272;
    v98 = (System_String_o *)StringLiteral_1/*""*/;
    Master_object = (__int64)this->fields.mTitleShortcutLb;
LABEL_178:
    UILabel__set_text((UILabel_o *)Master_object, v98, 0LL);
    goto LABEL_179;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v93 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v95 = *(_QWORD *)(v91 + 16);
  v94 = *(_QWORD *)(v91 + 24);
  v96 = (ServantLimitImageMaster_o *)v93;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v166.fields.currentCryptoKey = v95;
  *(_QWORD *)&v166.fields.fakeValue = v94;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v166, 0LL);
  if ( !v96 )
    goto LABEL_272;
  Master_object = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                             v96,
                             Master_object,
                             limitCounta,
                             0,
                             0LL);
  if ( !mTitleShortcutLb )
    goto LABEL_272;
  UILabel__set_text(mTitleShortcutLb, (System_String_o *)Master_object, 0LL);
  Master_object = (__int64)this->fields.mTitleShortcutLb;
  if ( !Master_object )
    goto LABEL_272;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v13 + 24), 0LL);
LABEL_179:
  ServantStatusQuestBoardDraw__ResetInfoTextList(this, v97);
  if ( v47 )
    goto LABEL_208;
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  isNotItemConsume = 0;
  endTime = qinf->fields.endTime;
  if ( endTime >= 1 && !QuestEntity__HasFlag(Mine, 32LL, 0LL) )
  {
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v101 = LocalizationManager__Get((System_String_o *)StringLiteral_13597/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
    v102 = (QuestBoardInformationText_o *)sub_1C22084(QuestBoardInformationText_TypeInfo);
    QuestBoardInformationText___ctor(v102, v101, endTime, 0, 1, 0LL, 0LL);
    if ( !mInfoTextList )
      goto LABEL_272;
    items = mInfoTextList->fields._items;
    v110 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
    ++mInfoTextList->fields._version;
    if ( !items )
      goto LABEL_272;
    size = mInfoTextList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        mInfoTextList,
        (Il2CppObject *)v102,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
    }
    else
    {
      v112 = &items->obj.klass + size;
      mInfoTextList->fields._size = size + 1;
      v112[4] = (Il2CppClass *)v102;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v112 + 4), (int64_t)v102, v103, v104, v105, v106, v107, v108);
    }
  }
  v116 = qinf->fields.questPhase;
  v117 = MapControl_QuestInfo__GetPhaseMax(qinf, 0LL);
  v119 = this->fields.mInfoTextList;
  if ( v116 + 1 < v117 )
    v120 = v116 + 1;
  else
    v120 = v117;
  Master_object = (__int64)ServantStatusQuestBoardDraw__GetCampaignText(
                             this,
                             v118,
                             v120,
                             0,
                             questBoardManagera,
                             &fixedVal[1],
                             fixedVal,
                             &isNotItemConsume,
                             v148);
  if ( !v119 )
    goto LABEL_272;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v119,
    (System_Collections_Generic_IEnumerable_T__o *)Master_object,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  Master_object = (__int64)this->fields.mInfoTextList;
  if ( !Master_object )
    goto LABEL_272;
  v121 = *(_DWORD *)(Master_object + 24);
  if ( v121 < 1 )
  {
LABEL_208:
    v123 = 0;
  }
  else
  {
    Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)Master_object,
                               questBoardManagera->fields.mAlphaAnimCnt % v121,
                               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    if ( !Master_object )
      goto LABEL_272;
    QuestBoardInformationText__SetTime(
      (QuestBoardInformationText_o *)Master_object,
      &this->fields.mOptionInfoLb,
      &this->fields.mOptionInfoFrameSp,
      0LL);
    Master_object = (__int64)this->fields.mOptionInfoLb;
    if ( !Master_object )
      goto LABEL_272;
    BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Master_object, 1.0, 0LL);
    v122 = fixedVal[1];
    v123 = 1;
    qinf->fields.isNotItemConsume = isNotItemConsume;
    v124 = fixedVal[0];
    qinf->fields.costCalcVal = v122;
    qinf->fields._fixedCostVal_k__BackingField = v124;
  }
  Master_object = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_272;
  Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_272;
  Master_object = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_272;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_272;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v123, 0LL);
  Master_object = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_272;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_272;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v123, 0LL);
  this->fields.mRewardIconInfs = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.mRewardIconInfs, 0LL, v125, v126, v127, v128, v129, v130);
  Master_object = (__int64)this->fields.mRewardIcon;
  if ( !Master_object )
    goto LABEL_272;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_272;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  if ( (v156 & 1) == 0 || !QuestEntity__HasFlag(Mine, 4096LL, 0LL) )
  {
    giftIconId = (unsigned int)Mine->fields.giftIconId;
    if ( (int)giftIconId >= 1 )
    {
      Master_object = (__int64)this->fields.mRewardIcon;
      if ( !Master_object )
        goto LABEL_272;
      goto LABEL_223;
    }
    if ( Mine->fields.giftId < 1 )
    {
      Master_object = (__int64)this->fields.mRewardObj;
      if ( !Master_object )
        goto LABEL_272;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
      goto LABEL_250;
    }
    Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_272;
    Master_object = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !Master_object )
      goto LABEL_272;
    Master_object = (__int64)GiftMaster__GetGiftListById((GiftMaster_o *)Master_object, Mine->fields.giftId, 0LL);
    if ( !Master_object )
      goto LABEL_272;
    v138 = *(_QWORD *)(Master_object + 24);
    v139 = (struct GiftEntity_array *)Master_object;
    if ( !v138 )
    {
LABEL_249:
      this->fields.mRewardIconInfs = v139;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.mRewardIconInfs,
        (int64_t)v139,
        v132,
        v133,
        v134,
        v135,
        v136,
        v137);
LABEL_250:
      v131 = v67;
      goto LABEL_251;
    }
    v140 = questBoardManagera->fields.mAlphaAnimCnt % (int)v138;
    if ( v140 >= (unsigned int)v138 )
      sub_1C2209C(Master_object, giftIconId);
    v141 = *(_DWORD **)(Master_object + 8LL * v140 + 32);
    if ( v141 )
    {
      giftIconId = (unsigned int)v141[11];
      Master_object = (__int64)this->fields.mRewardIcon;
      v142 = v141[7];
      if ( (int)giftIconId < 1 )
      {
        if ( !Master_object )
          goto LABEL_272;
        v144 = v142 <= 1 ? -1 : v141[7];
        ItemIconComponent__SetGift_39386620((ItemIconComponent_o *)Master_object, v141[5], v141[6], v144, 0, 0LL);
      }
      else
      {
        if ( !Master_object )
          goto LABEL_272;
        v143 = v142 <= 1 ? -1 : v141[7];
        ItemIconComponent__SetItemImage_39389052((ItemIconComponent_o *)Master_object, giftIconId, v143, 0LL);
      }
      Master_object = (__int64)this->fields.mRewardIcon;
      if ( Master_object )
      {
        Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
        if ( Master_object )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
          goto LABEL_249;
        }
      }
    }
LABEL_272:
    sub_1C22094(Master_object, giftIconId);
  }
  Master_object = (__int64)this->fields.mRewardIcon;
  if ( !Master_object )
    goto LABEL_272;
  LODWORD(giftIconId) = 99;
LABEL_223:
  ItemIconComponent__SetItemImage((ItemIconComponent_o *)Master_object, giftIconId, 0LL);
  Master_object = (__int64)this->fields.mRewardIcon;
  if ( !Master_object )
    goto LABEL_272;
  v131 = v67;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_272;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
LABEL_251:
  Master_object = (__int64)this->fields.mRewardObj;
  if ( !Master_object )
    goto LABEL_272;
  Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Master_object,
                             (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Master_object )
    goto LABEL_272;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v13 + 24), 0LL);
  Master_object = (__int64)this->fields.mRewardIcon;
  if ( !Master_object )
    goto LABEL_272;
  ItemIconComponent__SetColor((ItemIconComponent_o *)Master_object, *(UnityEngine_Color_o *)(v13 + 24), 0LL);
  v145 = IsLimitCountSealQuest && v47;
  if ( !v131 || (v145 & 1) != 0 )
  {
    mServantLimitRewardObtainedSP = (UnityEngine_Component_o *)this->fields.mServantLimitRewardObtainedSP;
    if ( !v145 )
    {
LABEL_257:
      if ( !mServantLimitRewardObtainedSP )
        goto LABEL_272;
      Master_object = (__int64)UnityEngine_Component__get_gameObject(mServantLimitRewardObtainedSP, 0LL);
      if ( !Master_object )
        goto LABEL_272;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
      v147 = 1;
      goto LABEL_268;
    }
  }
  else
  {
    Master_object = QuestBehaviorMaster__IsOpenQuestBehaviorCond(v131, this->fields.questId, phase, 10, 0LL);
    mServantLimitRewardObtainedSP = (UnityEngine_Component_o *)this->fields.mServantLimitRewardObtainedSP;
    if ( (Master_object & 1) == 0 )
      goto LABEL_257;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(
    (UISprite_o *)mServantLimitRewardObtainedSP,
    (System_String_o *)StringLiteral_20526/*"icon_reward_limits_release"*/,
    0LL);
  Master_object = (__int64)this->fields.mServantLimitRewardObtainedSP;
  if ( !Master_object )
    goto LABEL_272;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_272;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  Master_object = (__int64)this->fields.mServantLimitRewardObtainedSP;
  if ( !Master_object )
    goto LABEL_272;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_object + 840LL))(
    Master_object,
    *(_QWORD *)(*(_QWORD *)Master_object + 848LL));
  Master_object = (__int64)this->fields.mServantLimitRewardObtainedSP;
  if ( !Master_object )
    goto LABEL_272;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v13 + 24), 0LL);
  v147 = 0;
LABEL_268:
  Master_object = (__int64)this->fields.mRewardGetSP;
  if ( !Master_object )
    goto LABEL_272;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_272;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v47 & v147 & !HasStatus, 0LL);
  Master_object = (__int64)this->fields.mRewardGetSP;
  if ( !Master_object )
    goto LABEL_272;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v13 + 24), 0LL);
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
      sub_1C22094(0LL, method);
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

  if ( (byte_4BD9FB3 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    byte_4BD9FB3 = 1;
  }
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !mInfoTextList
    || (mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       mInfoTextList,
                                                                       strIndex,
                                                                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__)) == 0LL )
  {
    sub_1C22094(mInfoTextList, qinf);
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
    sub_1C22094(this, 0LL);
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
  if ( (byte_4BD9FBE & 1) == 0 )
  {
    label = (UILabel_o *)sub_1C21E38(&ServantStatusQuestBoardDraw_TypeInfo);
    byte_4BD9FBE = 1;
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
    sub_1C22094(label, message);
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
        sub_1C2209C(this, boardMessageData);
      this = (ServantStatusQuestBoardDraw_o *)boardMessageData->m_Items[v5];
      if ( !this )
        break;
      if ( HIDWORD(this->fields.m_CancellationTokenSource) == 4 && LODWORD(this->fields.mcBaseP) == eventId )
        return (BoardMessageEntity_o *)this;
      if ( max_length == ++v5 )
        return 0LL;
    }
LABEL_12:
    sub_1C22094(this, boardMessageData);
  }
  return 0LL;
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

  if ( (byte_4BD9FBF & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ServantStatusQuestBoardDraw_TypeInfo);
    byte_4BD9FBF = 1;
  }
  _4__this = (UnityEngine_Object_o *)this->fields.__4__this;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (UISprite_o *)UnityEngine_Object__op_Equality(_4__this, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) == 0 )
  {
    v6 = this->fields.__4__this;
    if ( v6 )
    {
      mcBaseP = (UnityEngine_Object_o *)v6->fields.mcBaseP;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v4 = (UISprite_o *)UnityEngine_Object__op_Equality(mcBaseP, 0LL, 0LL);
      if ( ((unsigned __int8)v4 & 1) != 0 )
        return;
      v8 = this->fields.__4__this;
      if ( v8 )
      {
        v9 = v8->fields.mcBaseP;
        v10 = ServantStatusQuestBoardDraw_TypeInfo;
        if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
          v10 = ServantStatusQuestBoardDraw_TypeInfo;
        }
        BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME = v10->static_fields->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        v4 = (UISprite_o *)AtlasManager__SetEventUI(v9, BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME, 0LL);
        v12 = this->fields.__4__this;
        if ( v12 )
        {
          v13 = (char)v4;
          v4 = v12->fields.mcBaseP;
          if ( (v13 & 1) != 0 )
          {
            if ( !v4 )
              goto LABEL_30;
          }
          else
          {
            if ( !v4 )
              goto LABEL_30;
            UISprite__set_atlas(v4, v12->fields.basePanelAtlas, 0LL);
            v14 = this->fields.__4__this;
            if ( !v14 )
              goto LABEL_30;
            v4 = (UISprite_o *)ServantStatusQuestBoardDraw_TypeInfo;
            v15 = v14->fields.mcBaseP;
            if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
            if ( !v15 )
              goto LABEL_30;
            UISprite__set_spriteName(
              v15,
              ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME,
              0LL);
            v16 = this->fields.__4__this;
            if ( !v16 )
              goto LABEL_30;
            v4 = v16->fields.mcBaseP;
            if ( !v4 )
              goto LABEL_30;
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
LABEL_30:
    sub_1C22094(v4, v5);
  }
}


void __fastcall ServantStatusQuestBoardDraw___c__DisplayClass48_0___SetItem_b__1(
        ServantStatusQuestBoardDraw___c__DisplayClass48_0_o *this,
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
  _BOOL4 isMap; // w21
  __int64 v17; // x9
  struct ServantStatusQuestBoardDraw_o *v18; // x8
  struct ServantStatusQuestBoardDraw_o *v19; // x8

  if ( (byte_4BD9FC0 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ServantStatusQuestBoardDraw_TypeInfo);
    byte_4BD9FC0 = 1;
  }
  _4__this = (UnityEngine_Object_o *)this->fields.__4__this;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (UISprite_o *)UnityEngine_Object__op_Equality(_4__this, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) == 0 )
  {
    v6 = this->fields.__4__this;
    if ( v6 )
    {
      mTitleSp = (UnityEngine_Object_o *)v6->fields.mTitleSp;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v4 = (UISprite_o *)UnityEngine_Object__op_Equality(mTitleSp, 0LL, 0LL);
      if ( ((unsigned __int8)v4 & 1) != 0 )
        return;
      v8 = this->fields.__4__this;
      if ( v8 )
      {
        v9 = v8->fields.mTitleSp;
        v10 = ServantStatusQuestBoardDraw_TypeInfo;
        if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
          v10 = ServantStatusQuestBoardDraw_TypeInfo;
        }
        TITLE_SPRITE_NAME_LIMIT_UNSEAL = v10->static_fields->TITLE_SPRITE_NAME_LIMIT_UNSEAL;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        v4 = (UISprite_o *)AtlasManager__SetEventUI(v9, TITLE_SPRITE_NAME_LIMIT_UNSEAL, 0LL);
        v12 = this->fields.__4__this;
        if ( v12 )
        {
          v13 = (char)v4;
          v4 = v12->fields.mTitleSp;
          if ( (v13 & 1) != 0 )
          {
            if ( !v4 )
              goto LABEL_32;
          }
          else
          {
            if ( !v4 )
              goto LABEL_32;
            UISprite__set_atlas(v4, v12->fields.basePanelAtlas, 0LL);
            v14 = this->fields.__4__this;
            if ( !v14 )
              goto LABEL_32;
            v4 = (UISprite_o *)ServantStatusQuestBoardDraw_TypeInfo;
            v15 = v14->fields.mTitleSp;
            isMap = this->fields.isMap;
            if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
            if ( !v15 )
              goto LABEL_32;
            v17 = 56LL;
            if ( !isMap )
              v17 = 48LL;
            UISprite__set_spriteName(
              v15,
              *(System_String_o **)((char *)&ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH
                                  + v17),
              0LL);
            v18 = this->fields.__4__this;
            if ( !v18 )
              goto LABEL_32;
            v4 = v18->fields.mTitleSp;
            if ( !v4 )
              goto LABEL_32;
          }
          v4 = (UISprite_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v4->klass->vtable._33_MakePixelPerfect.method)(
                               v4,
                               v4->klass->vtable._34_get_minWidth.methodPtr);
          v19 = this->fields.__4__this;
          if ( v19 )
          {
            v4 = v19->fields.mTitleSp;
            if ( v4 )
            {
              UIWidget__set_color((UIWidget_o *)v4, this->fields.baseCol, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_32:
    sub_1C22094(v4, v5);
  }
}