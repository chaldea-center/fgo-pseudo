void __fastcall ServantStatusQuestBoardDraw___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  struct ServantStatusQuestBoardDraw_StaticFields *static_fields; // x0
  int32_t v4; // w1
  struct ServantStatusQuestBoardDraw_StaticFields *v5; // x0
  int32_t v6; // w1
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w1
  struct ServantStatusQuestBoardDraw_StaticFields *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w1
  struct ServantStatusQuestBoardDraw_StaticFields *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  struct ServantStatusQuestBoardDraw_StaticFields *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  struct ServantStatusQuestBoardDraw_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w1
  struct ServantStatusQuestBoardDraw_StaticFields *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3

  if ( (byte_4A58646 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusQuestBoardDraw_TypeInfo);
    sub_1B885B0(&StringLiteral_20298/*"img_conductor_03"*/);
    sub_1B885B0(&StringLiteral_20299/*"img_conductor_04"*/);
    sub_1B885B0(&StringLiteral_20297/*"img_conductor_02"*/);
    sub_1B885B0(&StringLiteral_20408/*"img_questboard_1001"*/);
    sub_1B885B0(&StringLiteral_20296/*"img_conductor_01"*/);
    sub_1B885B0(&StringLiteral_20300/*"img_conductor_questboard"*/);
    sub_1B885B0(&StringLiteral_20292/*"img_commonbg"*/);
    byte_4A58646 = 1;
  }
  static_fields = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->TITLE_LABEL_BASE_WIDTH = xmmword_BB52D0;
  static_fields->ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X = -208.0;
  v4 = StringLiteral_20292/*"img_commonbg"*/;
  static_fields->DARK_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_20292/*"img_commonbg"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->DARK_BOARD_SPRITE_NAME, v4, v1, v2);
  v5 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  *(_QWORD *)&v5->DARK_BOARD_WIDTH = 0x7A000001F0LL;
  v6 = StringLiteral_20300/*"img_conductor_questboard"*/;
  v5->BASE_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_20300/*"img_conductor_questboard"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->BASE_BOARD_SPRITE_NAME, v6, v7, v8);
  v9 = StringLiteral_20297/*"img_conductor_02"*/;
  v10 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v10->TITLE_SPRITE_NAME_INTERLUDE = (struct System_String_o *)StringLiteral_20297/*"img_conductor_02"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->TITLE_SPRITE_NAME_INTERLUDE, v9, v11, v12);
  v13 = StringLiteral_20296/*"img_conductor_01"*/;
  v14 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v14->TITLE_SPRITE_NAME_INTERLUDE_MAP = (struct System_String_o *)StringLiteral_20296/*"img_conductor_01"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->TITLE_SPRITE_NAME_INTERLUDE_MAP, v13, v15, v16);
  v17 = StringLiteral_20298/*"img_conductor_03"*/;
  v18 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v18->TITLE_SPRITE_NAME_RAINFORCEMENT = (struct System_String_o *)StringLiteral_20298/*"img_conductor_03"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v18->TITLE_SPRITE_NAME_RAINFORCEMENT, v17, v19, v20);
  v21 = StringLiteral_20408/*"img_questboard_1001"*/;
  v22 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v22->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME = (struct System_String_o *)StringLiteral_20408/*"img_questboard_1001"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v22->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME, v21, v23, v24);
  v25 = StringLiteral_20299/*"img_conductor_04"*/;
  v26 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v26->TITLE_SPRITE_NAME_LIMIT_UNSEAL = (struct System_String_o *)StringLiteral_20299/*"img_conductor_04"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v26->TITLE_SPRITE_NAME_LIMIT_UNSEAL, v25, v27, v28);
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

  if ( (byte_4A5863E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5863E = 1;
  }
  if ( (byte_4A5863F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4A5863F = 1;
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
                                                                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
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
      sub_1B8880C(mInfoTextList, qinf);
    }
  }
  if ( (byte_4A58640 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4A58640 = 1;
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  }
  if ( !mInfoTextList || !mInfoTextList->fields._size )
    return;
  mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 mInfoTextList,
                                                                 0,
                                                                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
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
    sub_1B88814(this, questBoardManager);
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
      ItemIconComponent__SetItemImage_38147292((ItemIconComponent_o *)this, (int32_t)questBoardManager, v8, 0LL);
      return;
    }
LABEL_18:
    sub_1B8880C(this, questBoardManager);
  }
  if ( !this )
    goto LABEL_18;
  if ( num <= 1 )
    v9 = -1;
  else
    v9 = v6->fields.num;
  ItemIconComponent__SetGift_38144896((ItemIconComponent_o *)this, v6->fields.type, v6->fields.objectId, v9, 0, 0LL);
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

  if ( (byte_4A58643 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&QuestBoardInformationText_TypeInfo);
    sub_1B885B0(&StringLiteral_24983/*"{0}"*/);
    this = (ServantStatusQuestBoardDraw_o *)sub_1B885B0(&StringLiteral_13338/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/);
    byte_4A58643 = 1;
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
  this = (ServantStatusQuestBoardDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !questEntity || !this )
LABEL_40:
    sub_1B8880C(this, questEntity);
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
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_13338/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0LL);
  EventName = (Il2CppObject *)EventEntity__getEventName(eventEnt, 0LL);
  v24 = System_String__Format_61721404(v22, EventName, (Il2CppObject *)StringLiteral_24983/*"{0}"*/, 0LL);
  EndTime = EventEntity__GetEndTime(eventEnt, 0, 0LL);
  v19 = (QuestBoardInformationText_o *)sub_1B887FC(QuestBoardInformationText_TypeInfo);
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
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  const MethodInfo *v36; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4A58641 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&QuestBoardInformationText_TypeInfo);
    sub_1B885B0(&StringLiteral_24983/*"{0}"*/);
    sub_1B885B0(&StringLiteral_117/*" "*/);
    sub_1B885B0(&StringLiteral_13348/*"TIME_REST_STRING"*/);
    byte_4A58641 = 1;
  }
  entity = 0LL;
  v16 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
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
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
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
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !CampaignTextListByEventQuestMaster )
    goto LABEL_25;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)CampaignTextListByEventQuestMaster,
          &entity,
          v20->fields.eventId,
          (const MethodInfo_311D988 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
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
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_13348/*"TIME_REST_STRING"*/, 0LL);
  v27 = System_String__Concat_61720296(
          EventName,
          (System_String_o *)StringLiteral_117/*" "*/,
          v26,
          (System_String_o *)StringLiteral_24983/*"{0}"*/,
          0LL);
  v28 = (QuestBoardInformationText_o *)sub_1B887FC(QuestBoardInformationText_TypeInfo);
  QuestBoardInformationText___ctor(v28, v27, v24, 0, 1, 0LL, 0LL);
  items = v16->fields._items;
  v32 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
  ++v16->fields._version;
  if ( !items )
LABEL_25:
    sub_1B8880C(CampaignTextListByEventQuestMaster, v18);
  size = v16->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v16,
      (Il2CppObject *)v28,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &items->obj.klass + size;
    v16->fields._size = size + 1;
    v34[4] = (Il2CppClass *)v28;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)v28, v29, v30);
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
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass *v32; // x1
  Il2CppClass **v33; // x0
  const MethodInfo *v35; // [xsp+8h] [xbp-78h]
  bool v36; // [xsp+14h] [xbp-6Ch]
  bool *v37; // [xsp+18h] [xbp-68h]

  if ( (byte_4A58642 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A58642 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  v36 = isQuestNoneCleared;
  v19 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = DataManager__GetMasterData_object_(
               v19,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               questId,
               (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !questBoardManager )
    goto LABEL_22;
  mListCreatedTime = questBoardManager->fields.mListCreatedTime;
  v22 = (QuestEntity_o *)Instance;
  Instance = DataManager__GetMasterData_object_(
               v19,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventQuestMaster___);
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
        sub_1B88814(Instance, v18);
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
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v16,
              (Il2CppObject *)Instance,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v16->fields._size = size + 1;
            v33[4] = v32;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v32, v27, v28);
          }
        }
      }
      v23 = *((_DWORD *)v24 + 6);
      if ( (int)++v25 >= v23 )
        return (System_Collections_Generic_List_QuestBoardInformationText__o *)v16;
    }
LABEL_22:
    sub_1B8880C(Instance, v18);
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
  int32_t v13; // w2
  int32_t v14; // w3
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

  if ( (byte_4A58638 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58638 = 1;
  }
  entityList = 0LL;
  memset(&v28, 0, sizeof(v28));
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
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
    v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    IsQuestReleaseAll = (MapControl_WarInfo_o *)entityList;
    if ( !entityList )
      goto LABEL_53;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v27,
      (System_Collections_Generic_List_object__o *)entityList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    v28 = v27;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v28,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
    {
      if ( !v28.fields._current )
        sub_1B8880C(0LL, v11);
      v12 = (Il2CppObject *)QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
                              (QuestReleaseOverwriteEntity_o *)v28.fields._current,
                              0LL);
      v15 = v12;
      if ( !v10 )
        sub_1B8880C(v12, v12);
      items = v10->fields._items;
      v17 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
      ++v10->fields._version;
      if ( !items )
        sub_1B8880C(v12, v12);
      size = v10->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          v12,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v15;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v15, v13, v14);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    if ( !v10 )
      goto LABEL_53;
    IsQuestReleaseAll = (MapControl_WarInfo_o *)System_Collections_Generic_List_object___ToArray(
                                                  v10,
                                                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    v20 = IsQuestReleaseAll;
    if ( IsQuestReleaseAll )
      goto LABEL_37;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsQuestReleaseAll = (MapControl_WarInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !IsQuestReleaseAll )
LABEL_53:
    sub_1B8880C(IsQuestReleaseAll, v4);
  IsQuestReleaseAll = (MapControl_WarInfo_o *)QuestReleaseMaster__getListByQuestID(
                                                (QuestReleaseMaster_o *)IsQuestReleaseAll,
                                                qinf->fields.questId,
                                                0LL);
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
  v22 = 0LL;
  do
  {
    if ( (unsigned int)v22 >= (unsigned int)v21 )
      sub_1B88814(IsQuestReleaseAll, v4);
    v23 = *((_QWORD *)&v20->fields.mapInfoList + v22);
    if ( !v23 )
      goto LABEL_53;
    v25 = *(_DWORD *)(v23 + 20);
    v24 = *(_DWORD *)(v23 + 24);
    v26 = *(_QWORD *)(v23 + 32);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestReleaseAll = (MapControl_WarInfo_o *)CondType__IsOpen(v25, v24, v26, 0, 0LL, 0LL);
    if ( ((unsigned __int8)IsQuestReleaseAll & 1) == 0 )
      break;
    LODWORD(v21) = v20->fields.status;
    ++v22;
  }
  while ( (int)v22 < (int)v21 );
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

  if ( (byte_4A58640 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4A58640 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  return !mInfoTextList || mInfoTextList->fields._size == 0;
}


bool __fastcall ServantStatusQuestBoardDraw__IsMultiInfoText(
        ServantStatusQuestBoardDraw_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8

  if ( (byte_4A5863F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4A5863F = 1;
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

  if ( (byte_4A58644 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A58644 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
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
        return v9 & ~QuestEntity__HasFlag_39473080(questEntity, 2LL, phase, 0LL) & 1;
      }
LABEL_17:
      sub_1B8880C(Master_object, v7);
    }
  }
  else if ( !QuestEntity__HasFlag_39473080(questEntity, 0x80000LL, phase, 0LL) )
  {
    HasFlag = QuestEntity__HasFlag_39473080(questEntity, 0x100000LL, phase, 0LL);
    goto LABEL_15;
  }
  v9 = 0;
  return v9 & ~QuestEntity__HasFlag_39473080(questEntity, 2LL, phase, 0LL) & 1;
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

  if ( (byte_4A58645 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_ServantStatusQuestBoardDraw_OnClick__);
    sub_1B885B0(&StringLiteral_9868/*"OnClickServantQuest"*/);
    byte_4A58645 = 1;
  }
  inputMessageObject = (UnityEngine_Object_o *)this->fields.inputMessageObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(inputMessageObject, 0LL, 0LL) || (questId = this->fields.questId) == 0 )
  {
    v11 = Method_ServantStatusQuestBoardDraw_OnClick__;
    if ( (*((_BYTE *)Method_ServantStatusQuestBoardDraw_OnClick__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1B885C8(Method_ServantStatusQuestBoardDraw_OnClick__);
    v12 = (System_Reflection_MethodBase_o *)sub_1B88594(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 2, 0LL);
  }
  else
  {
    v8 = this->fields.inputMessageObject;
    v13 = questId;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v4, v5, v6);
    if ( !v8 )
      sub_1B8880C(v9, v10);
    UnityEngine_GameObject__SendMessage_69440752(v8, (System_String_o *)StringLiteral_9868/*"OnClickServantQuest"*/, v9, 0LL);
  }
}


void __fastcall ServantStatusQuestBoardDraw__ResetInfoTextList(
        ServantStatusQuestBoardDraw_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *v3; // x8
  ServantStatusBattleListViewItem_o *p_mInfoTextList; // x19
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // t1
  int32_t size; // w2
  int v7; // w9
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5863B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    byte_4A5863B = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  p_mInfoTextList = (ServantStatusBattleListViewItem_o *)&this->fields.mInfoTextList;
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
    v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    p_mInfoTextList->klass = (ServantStatusBattleListViewItem_c *)v8;
    sub_1B88554(p_mInfoTextList, (int32_t)v8, v9, v10);
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
  __int64 v14; // x1
  System_String_o *monitor; // x20
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  bool v19; // w25
  int klass_high; // w24
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
  int32_t v32; // w2
  int32_t v33; // w3
  Il2CppObject *v34; // x27
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  int32_t v38; // w2
  int32_t v39; // w3
  Il2CppObject *v40; // x27
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  int32_t v44; // w2
  int32_t v45; // w3
  Il2CppObject *v46; // x27
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  int32_t v50; // w2
  int32_t v51; // w3
  Il2CppObject *v52; // x27
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v54; // x22
  _BOOL4 v55; // w26
  UILabel_o *mTitleNameLb; // x23
  int32_t v57; // w21
  struct ServantStatusQuestBoardDraw_StaticFields *static_fields; // x8
  __int64 v59; // x9
  int32_t v60; // w23
  int32_t leftIndent; // w25
  UILabel_o *mCondChangeMessage; // x19
  float v63; // s8
  float ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X; // s9
  float v65; // s1
  float v66; // s0
  int v67; // s2
  float v68; // s9
  float v69; // s0
  float v70; // s1
  float v71; // s0
  int v72; // s2
  float v73; // s1
  int v74; // s2
  UIWidget_o *mOverwriteAdvanceNoticeLb; // x24
  const MethodInfo *v76; // x4
  const MethodInfo *v77; // x4
  System_String_o *overlayClosedMessage; // x20
  UILabel_o *v79; // x21
  float v80; // s8
  UnityEngine_Object_o *mOverwriteAdvanceNoticeArrowObj; // x20
  __int64 v82; // x0
  char v83; // [xsp+8h] [xbp-98h]
  int32_t Minute; // [xsp+Ch] [xbp-94h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-90h] BYREF
  int32_t Day; // [xsp+14h] [xbp-8Ch] BYREF
  int64_t value; // [xsp+18h] [xbp-88h] BYREF
  uint64_t dateData; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-78h] BYREF
  System_DateTime_o v90; // 0:x0.8
  System_DateTime_o v91; // 0:x0.8
  System_DateTime_o v92; // 0:x0.8
  System_DateTime_o v93; // 0:x0.8
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5863D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ClosedMessageMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_WarMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantStatusQuestBoardDraw_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&StringLiteral_14809/*"UNKNOWN_QUEST_NAME"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5863D = 1;
  }
  dateData = 0LL;
  entity = 0LL;
  if ( questReleaseClosedID < 1 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClosedMessageMaster___);
  if ( !Master_object )
    goto LABEL_116;
  monitor = (System_String_o *)StringLiteral_1/*""*/;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         questReleaseClosedID,
         (const MethodInfo_311D988 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__) )
  {
    Master_object = (__int64)entity;
    if ( !entity )
      goto LABEL_116;
    monitor = (System_String_o *)entity[1].monitor;
    Master_object = ClosedMessageEntity__IsChangeDispClosedMessage((ClosedMessageEntity_o *)entity, 0LL);
    if ( !entity )
      goto LABEL_116;
    v19 = Master_object;
    Master_object = ClosedMessageEntity__IsChangeDispPositionLeft((ClosedMessageEntity_o *)entity, 0LL);
    if ( !entity )
      goto LABEL_116;
    klass_high = HIDWORD(entity[2].klass);
  }
  else
  {
    klass_high = 0;
    Master_object = 0LL;
    v19 = 0;
  }
  if ( !questReleaseEntity )
    goto LABEL_116;
  v83 = Master_object;
  switch ( questReleaseEntity->fields.type )
  {
    case 1:
      targetId = questReleaseEntity->fields.targetId;
      v24 = (System_String_o *)StringLiteral_1/*""*/;
      Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Master_object )
        goto LABEL_116;
      WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Master_object, targetId, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !Master_object )
        goto LABEL_116;
      v26 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              WarID_ByQuestID,
              (const MethodInfo_311D934 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
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
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
      if ( !Master_object )
        goto LABEL_116;
      EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                                 (QuestReleaseOverwriteMaster_o *)Master_object,
                                 this->fields.questId,
                                 checkTime,
                                 0LL);
      v54 = EntityByQuestIdAndTime;
      if ( !EntityByQuestIdAndTime )
      {
        v55 = 0;
        if ( v19 )
          goto LABEL_50;
LABEL_62:
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
              if ( !v55 )
                return;
              Master_object = (__int64)this->fields.mCondObject;
              if ( Master_object )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
                if ( v54 )
                {
                  Master_object = (__int64)this->fields.mCondChangeMessage;
                  if ( Master_object )
                  {
                    UILabel__set_text((UILabel_o *)Master_object, v54->fields.overlayClosedMessage, 0LL);
                    mCondChangeMessage = this->fields.mCondChangeMessage;
                    Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
                    if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
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
        goto LABEL_116;
      }
      v55 = !System_String__IsNullOrEmpty(EntityByQuestIdAndTime->fields.overlayClosedMessage, 0LL);
      if ( !v19 )
        goto LABEL_62;
LABEL_50:
      Master_object = (__int64)this->fields.mAdvanceNoticeObj;
      if ( !Master_object )
        goto LABEL_116;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
      mTitleNameLb = this->fields.mTitleNameLb;
      v57 = klass_high;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14809/*"UNKNOWN_QUEST_NAME"*/, 0LL);
      if ( !mTitleNameLb )
        goto LABEL_116;
      UILabel__set_text(mTitleNameLb, (System_String_o *)Master_object, 0LL);
      Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
        Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      }
      static_fields = *(struct ServantStatusQuestBoardDraw_StaticFields **)(Master_object + 184);
      v59 = 12LL;
      if ( !v55 )
        v59 = 8LL;
      v60 = *(int32_t *)((char *)&static_fields->TITLE_LABEL_BASE_WIDTH + v59);
      if ( v55 )
      {
        if ( !v54 )
          goto LABEL_116;
        leftIndent = v54->fields.leftIndent;
      }
      else
      {
        leftIndent = 0;
      }
      v63 = (float)klass_high;
      if ( (v83 & 1) != 0 )
      {
        if ( !*(_DWORD *)(Master_object + 224) )
        {
          j_il2cpp_runtime_class_init_0(Master_object);
          static_fields = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
        }
        Master_object = (__int64)this->fields.mAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_116;
        ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X = static_fields->ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X;
        UIWidget__set_pivot((UIWidget_o *)Master_object, 3, 0LL);
        Master_object = (__int64)this->fields.mAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_116;
        Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
        if ( !Master_object )
          goto LABEL_116;
        v65 = 24.0;
        if ( !v55 )
          v65 = 0.0;
        v67 = 0;
        v66 = ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X + v63;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)Master_object,
          *(UnityEngine_Vector3_o *)(&v65 - 1),
          0LL);
        Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
        if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
          Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
        }
        if ( !this->fields.mOverwriteAdvanceNoticeLb )
          goto LABEL_116;
        v68 = *(float *)(*(_QWORD *)(Master_object + 184) + 16LL);
        UIWidget__set_pivot((UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb, 3, 0LL);
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_116;
        Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
        if ( !Master_object )
          goto LABEL_116;
        v69 = v68 + (float)leftIndent;
      }
      else
      {
        Master_object = (__int64)this->fields.mAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_116;
        UIWidget__set_pivot((UIWidget_o *)Master_object, 4, 0LL);
        Master_object = (__int64)this->fields.mAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_116;
        Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
        if ( !Master_object )
          goto LABEL_116;
        v70 = 24.0;
        if ( !v55 )
          v70 = 0.0;
        v72 = 0;
        v71 = v63 * 0.5;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)Master_object,
          *(UnityEngine_Vector3_o *)(&v70 - 1),
          0LL);
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_116;
        UIWidget__set_pivot((UIWidget_o *)Master_object, 4, 0LL);
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_116;
        Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
        if ( !Master_object )
          goto LABEL_116;
        v69 = (float)leftIndent * 0.5;
      }
      v73 = -26.0;
      v74 = 0;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)Master_object,
        *(UnityEngine_Vector3_o *)&v69,
        0LL);
      Master_object = (__int64)this->fields.mAdvanceNoticeLb;
      if ( !Master_object )
        goto LABEL_116;
      UIWidget__set_height((UIWidget_o *)Master_object, v60, 0LL);
      Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      mOverwriteAdvanceNoticeLb = (UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      if ( !mOverwriteAdvanceNoticeLb )
        goto LABEL_116;
      UIWidget__set_height(
        mOverwriteAdvanceNoticeLb,
        ServantStatusQuestBoardDraw_TypeInfo->static_fields->ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT,
        0LL);
      ServantStatusQuestBoardDraw___SetAdvanceNoticeText_g__CalculateLabel_53_0(
        this->fields.mAdvanceNoticeLb,
        monitor,
        v60,
        v57,
        v76);
      if ( v55 )
      {
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
        if ( !Master_object )
          goto LABEL_116;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
        if ( !v54 )
          goto LABEL_116;
        overlayClosedMessage = v54->fields.overlayClosedMessage;
        v79 = this->fields.mOverwriteAdvanceNoticeLb;
        if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
        v80 = v63 * 0.5;
        ServantStatusQuestBoardDraw___SetAdvanceNoticeText_g__CalculateLabel_53_0(
          v79,
          overlayClosedMessage,
          v60,
          leftIndent,
          v77);
      }
      else
      {
        v80 = 0.0;
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
            v94.fields.y = 0.0;
            v94.fields.z = 0.0;
            v94.fields.x = v80;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Master_object, v94, 0LL);
            return;
          }
        }
LABEL_116:
        sub_1B8880C(Master_object, v14);
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
        goto LABEL_116;
      OpenedAt = QuestEntity__getOpenedAt(questEntity, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      dateData = NetworkManager__getServerDateTime_38479168(OpenedAt, 0LL).fields._dateData;
      v28 = (System_Object_array *)sub_1B88658(object___TypeInfo, 4LL);
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v90.fields._dateData = (uint64_t)&dateData;
      LODWORD(value) = System_DateTime__get_Month(v90, 0LL);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &value, v29, v30, v31);
      if ( !v28 )
        goto LABEL_116;
      v34 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1B886EC(Master_object, v28->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_118;
      }
      if ( !v28->max_length )
        goto LABEL_117;
      v28->m_Items[0] = v34;
      sub_1B88554((ServantStatusBattleListViewItem_o *)v28->m_Items, (int32_t)v34, v32, v33);
      v91.fields._dateData = (uint64_t)&dateData;
      Day = System_DateTime__get_Day(v91, 0LL);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Day, v35, v36, v37);
      v40 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1B886EC(Master_object, v28->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_118;
      }
      if ( v28->max_length <= 1 )
        goto LABEL_117;
      v28->m_Items[1] = v40;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v28->m_Items[1], (int32_t)v40, v38, v39);
      v92.fields._dateData = (uint64_t)&dateData;
      Hour = System_DateTime__get_Hour(v92, 0LL);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Hour, v41, v42, v43);
      v46 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1B886EC(Master_object, v28->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_118;
      }
      if ( v28->max_length <= 2 )
        goto LABEL_117;
      v28->m_Items[2] = v46;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v28->m_Items[2], (int32_t)v46, v44, v45);
      v93.fields._dateData = (uint64_t)&dateData;
      Minute = System_DateTime__get_Minute(v93, 0LL);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Minute, v47, v48, v49);
      v52 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1B886EC(Master_object, v28->obj.klass->_1.element_class);
        if ( !Master_object )
        {
LABEL_118:
          v82 = sub_1B88830();
          sub_1B886D8(v82, 0LL);
        }
      }
      if ( v28->max_length <= 3 )
LABEL_117:
        sub_1B88814(Master_object, v14);
      v28->m_Items[3] = v52;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v28->m_Items[3], (int32_t)v52, v50, v51);
      v22 = System_String__Format_61721540(monitor, v28, 0LL);
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
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3
  struct MapControl_QuestInfo_o **p_qinf; // x19
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A58639 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&ServantStatusQuestBoardDraw_TypeInfo);
    sub_1B885B0(&StringLiteral_11873/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A58639 = 1;
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
  mLineSp = (UIWidget_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11873/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/, 0LL);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mRewardIconInfs, 0, v7, v8);
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
    sub_1B8880C(mLineSp, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0LL);
  this->fields.inputMessageObject = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.inputMessageObject, 0, v9, v10);
  this->fields.qinf = 0LL;
  p_qinf = &this->fields.qinf;
  *((_DWORD *)p_qinf - 2) = 0;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_qinf, 0, v12, v13);
}


void __fastcall ServantStatusQuestBoardDraw__SetInfoTextAlpha(
        ServantStatusQuestBoardDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8
  BoardOptionTextWithIconComponent_o *mOptionInfoLb; // x0

  if ( (byte_4A5863F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    byte_4A5863F = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList && mInfoTextList->fields._size >= 2 )
  {
    mOptionInfoLb = this->fields.mOptionInfoLb;
    if ( !mOptionInfoLb )
      sub_1B8880C(0LL, method);
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
  int32_t v16; // w2
  int32_t v17; // w3
  bool v18; // w23
  int current; // w29
  int64_t mListCreatedTime; // x27
  QuestEntity_o *Mine; // x25
  const MethodInfo *v22; // x1
  int v23; // w24
  int32_t v24; // w2
  int32_t v25; // w3
  int v26; // w23
  const MethodInfo *v27; // x1
  int32_t id; // w8
  int32_t warId; // w21
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v31; // x21
  bool v32; // w8
  ServantLimitImageMaster_o *v33; // x28
  _BOOL4 IsLimitCountSealQuest; // w27
  int32_t closedMessageId; // w8
  Il2CppObject *v36; // x26
  bool HasStatus; // w26
  char v38; // w28
  char v39; // w23
  float v40; // s1
  float v41; // s0
  int32_t v42; // w2
  int32_t v43; // w3
  struct UISprite_o *mcBaseP; // x8
  struct UIAtlas_o *mAtlas; // x1
  UISprite_o *v46; // x26
  System_Action_o *v47; // x26
  _BOOL4 v48; // w25
  QuestEntity_o *v49; // x25
  WarEntity_o *v50; // x29
  char v51; // w21
  char v52; // w23
  UISprite_o *mTitleSp; // x28
  int v54; // w24
  __int64 v55; // x9
  System_Action_o *v56; // x26
  const MethodInfo *v57; // x6
  char v58; // w29
  char v59; // w23
  UILabel_o *v60; // x21
  System_String_o **v61; // x8
  LocalizationManager_c *v62; // x0
  System_String_o **v63; // x9
  System_String_o *v64; // x25
  struct UILabel_o *mTitleNameLb; // x21
  System_String_o *v66; // x1
  System_String_o *v67; // x21
  Il2CppObject *v68; // x25
  Il2CppObject *BattleName; // x0
  int32_t v70; // w21
  int32_t TITLE_LABEL_BASE_WIDTH; // w24
  bool v72; // cc
  UnityEngine_Transform_o *v73; // x21
  struct UILabel_o *v74; // x8
  float y; // s1
  float x; // s0
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  int32_t v79; // w2
  int32_t v80; // w3
  int32_t ServantId; // w21
  ServantEntity_o *v82; // x25
  UILabel_o *mTitleShortcutLb; // x21
  const MethodInfo *v84; // x1
  ServantStatusQuestBoardManager_o *v85; // x24
  __int64 endTime; // x25
  System_Collections_Generic_List_object__o *mInfoTextList; // x21
  System_String_o *v88; // x27
  QuestBoardInformationText_o *v89; // x26
  int32_t v90; // w2
  int32_t v91; // w3
  struct System_Object_array *items; // x8
  _QWORD *v93; // x9
  __int64 size; // x10
  Il2CppClass **v95; // x0
  int32_t questPhase; // w24
  int32_t PhaseMax; // w0
  int32_t v98; // w1
  int32_t v99; // w2
  struct System_Collections_Generic_List_QuestBoardInformationText__o *v100; // x21
  int v101; // w8
  int32_t v102; // w9
  bool v103; // w21
  int32_t v104; // w8
  int32_t v105; // w2
  int32_t v106; // w3
  bool v107; // w1
  int32_t v108; // w2
  int32_t v109; // w3
  __int64 v110; // x8
  struct GiftEntity_array *v111; // x22
  int v112; // w9
  _DWORD *v113; // x8
  int v114; // w9
  int32_t v115; // w2
  int32_t v116; // w3
  const MethodInfo *v117; // [xsp+0h] [xbp-120h]
  int64_t checkTime; // [xsp+18h] [xbp-108h]
  int32_t limitCounta; // [xsp+24h] [xbp-FCh]
  int v120; // [xsp+28h] [xbp-F8h]
  int questReleaseClosedID; // [xsp+2Ch] [xbp-F4h]
  BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // [xsp+30h] [xbp-F0h]
  bool v123; // [xsp+3Ch] [xbp-E4h]
  struct UnityEngine_GameObject_o *v124; // [xsp+40h] [xbp-E0h]
  int32_t QuestType; // [xsp+4Ch] [xbp-D4h]
  ServantStatusQuestBoardManager_o *questBoardManagera; // [xsp+50h] [xbp-D0h]
  _BOOL4 IsClear; // [xsp+5Ch] [xbp-C4h]
  QuestEntity_o *v128; // [xsp+60h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_int__o v129; // [xsp+68h] [xbp-B8h] BYREF
  bool isNotItemConsume; // [xsp+84h] [xbp-9Ch] BYREF
  int32_t fixedVal[2]; // [xsp+88h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v132; // [xsp+90h] [xbp-90h] BYREF
  UserQuestEntity_o *entity; // [xsp+B0h] [xbp-70h] BYREF
  QuestReleaseEntity_o *questReleaseNG; // [xsp+B8h] [xbp-68h] BYREF

  if ( (byte_4A5863A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&QuestBoardInformationText_TypeInfo);
    sub_1B885B0(&ServantStatusQuestBoardDraw_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&Method_ServantStatusQuestBoardDraw___c__DisplayClass47_0__SetItem_b__0__);
    sub_1B885B0(&Method_ServantStatusQuestBoardDraw___c__DisplayClass47_0__SetItem_b__1__);
    sub_1B885B0(&ServantStatusQuestBoardDraw___c__DisplayClass47_0_TypeInfo);
    sub_1B885B0(&StringLiteral_13341/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_1B885B0(&StringLiteral_24983/*"{0}"*/);
    sub_1B885B0(&StringLiteral_11940/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE2"*/);
    sub_1B885B0(&StringLiteral_11942/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT2"*/);
    sub_1B885B0(&StringLiteral_11941/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_11939/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE"*/);
    sub_1B885B0(&StringLiteral_11896/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/);
    byte_4A5863A = 1;
  }
  entity = 0LL;
  questReleaseNG = 0LL;
  memset(&v132, 0, sizeof(v132));
  *(_QWORD *)fixedVal = 0LL;
  isNotItemConsume = 0;
  v13 = sub_1B887FC(ServantStatusQuestBoardDraw___c__DisplayClass47_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_239;
  *(_QWORD *)(v13 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !qinf )
    goto LABEL_239;
  if ( !Master_object )
    goto LABEL_239;
  v124 = inputMessageObject;
  limitCounta = limitCount;
  questBoardManagera = questBoardManager;
  Master_object = (__int64)QuestGroupMaster__GetInterludeQuestIdList(
                             (QuestGroupMaster_o *)Master_object,
                             qinf->fields.questId,
                             0LL);
  if ( !Master_object )
    goto LABEL_239;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v129,
    (System_Collections_Generic_List_int__o *)Master_object,
    (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v132 = v129;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v132,
            (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v18 )
      break;
    current = v132.fields._current;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsQuestClear_37596684(current, -1, 0, 0LL) )
      goto LABEL_16;
  }
  current = 0;
LABEL_16:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v132,
    (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( !questBoardManager )
    goto LABEL_239;
  mListCreatedTime = questBoardManager->fields.mListCreatedTime;
  Mine = MapControl_QuestInfo__GetMine(qinf, 0LL);
  QuestType = MapControl_QuestInfo__GetQuestType(qinf, 0LL);
  v23 = v18 || MapControl_QuestInfo__IsClear(qinf, 0LL);
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  Master_object = ServantStatusQuestBoardDraw__IsClose(qinf, v22);
  v26 = Master_object;
  if ( beforeQuestInfo )
  {
    IsClear = MapControl_QuestInfo__IsClear(beforeQuestInfo, 0LL);
    if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    Master_object = ServantStatusQuestBoardDraw__IsClose(beforeQuestInfo, v27);
    v120 = Master_object & 1;
    if ( !Mine )
      goto LABEL_239;
  }
  else
  {
    v120 = 0;
    IsClear = 1;
    if ( !Mine )
      goto LABEL_239;
  }
  id = Mine->fields.id;
  this->fields.qinf = qinf;
  this->fields.questId = id;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.qinf, (int32_t)qinf, v24, v25);
  warId = qinf->fields.warId;
  Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Master_object )
    goto LABEL_239;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Master_object, warId, 0LL);
  v31 = WarEntityByWarID;
  if ( WarEntityByWarID )
    v32 = !WarEntity__IsFolder(WarEntityByWarID, 0LL);
  else
    v32 = 0;
  *(_BYTE *)(v13 + 40) = v32;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  checkTime = mListCreatedTime;
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_object )
    goto LABEL_239;
  v33 = (ServantLimitImageMaster_o *)Master_object;
  IsLimitCountSealQuest = ServantLimitImageMaster__IsLimitCountSealQuest(
                            (ServantLimitImageMaster_o *)Master_object,
                            this->fields.questId,
                            0LL);
  Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Master_object )
    goto LABEL_239;
  clsQuestCheck__mfQuestReleaseCheckGetEntityByQuestID(
    (clsQuestCheck_o *)Master_object,
    Mine->fields.id,
    &questReleaseNG,
    qinf,
    0LL);
  closedMessageId = (int)questReleaseNG;
  if ( questReleaseNG )
    closedMessageId = questReleaseNG->fields.closedMessageId;
  questReleaseClosedID = closedMessageId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v36 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = NetworkManager__get_UserId(0LL);
  if ( current < 1 )
  {
    if ( !v36 )
      goto LABEL_239;
    current = this->fields.questId;
  }
  else if ( !v36 )
  {
    goto LABEL_239;
  }
  UserQuestMaster__TryGetEntity((UserQuestMaster_o *)v36, &entity, Master_object, current, 0LL);
  if ( entity )
    HasStatus = UserQuestEntity__HasStatus(entity, 4, 0LL);
  else
    HasStatus = 0;
  if ( (IsLimitCountSealQuest & ~v23 & 1) != 0 )
  {
    if ( ServantLimitImageMaster__IsCommonReleaseMultiClear(v33, this->fields.questId, 0LL) )
    {
      v38 = 0;
      HasStatus = 0;
      v39 = 1;
      questReleaseClosedID = 0;
LABEL_56:
      v40 = 1.0;
      v41 = 0.5;
      v124 = 0LL;
      goto LABEL_58;
    }
    v23 = 0;
  }
  if ( ((v26 | v23) & 1) != 0 )
  {
    v38 = v26;
    v39 = v23;
    goto LABEL_56;
  }
  v39 = 0;
  v38 = 0;
  v41 = 1.0;
  v40 = 1.0;
LABEL_58:
  *(float *)(v13 + 24) = v41;
  *(float *)(v13 + 28) = v41;
  *(float *)(v13 + 32) = v41;
  *(float *)(v13 + 36) = v40;
  Master_object = (__int64)this->fields.mTitleObj;
  v123 = HasStatus;
  if ( !Master_object )
    goto LABEL_239;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  Master_object = (__int64)this->fields.mOptionInfoLb;
  if ( !Master_object )
    goto LABEL_239;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_239;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  Master_object = (__int64)this->fields.mRewardObj;
  if ( !Master_object )
    goto LABEL_239;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  Master_object = (__int64)this->fields.mAdvanceNoticeObj;
  if ( !Master_object )
    goto LABEL_239;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
  if ( !Master_object )
    goto LABEL_239;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  Master_object = (__int64)this->fields.mCondObject;
  if ( !Master_object )
    goto LABEL_239;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  mcBaseP = this->fields.mcBaseP;
  if ( !mcBaseP )
    goto LABEL_239;
  mAtlas = mcBaseP->fields.mAtlas;
  this->fields.basePanelAtlas = mAtlas;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.basePanelAtlas, (int32_t)mAtlas, v42, v43);
  Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
  v46 = this->fields.mcBaseP;
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  if ( !v46 )
    goto LABEL_239;
  UISprite__set_spriteName(v46, ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME, 0LL);
  if ( IsLimitCountSealQuest )
  {
    v47 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v47,
      (Il2CppObject *)v13,
      Method_ServantStatusQuestBoardDraw___c__DisplayClass47_0__SetItem_b__0__,
      0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadEventUI(v47, 1, 0LL);
  }
  Master_object = (__int64)this->fields.mcBaseP;
  if ( !Master_object )
    goto LABEL_239;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_object + 840LL))(
    Master_object,
    *(_QWORD *)(*(_QWORD *)Master_object + 848LL));
  Master_object = (__int64)this->fields.mcBaseP;
  if ( !Master_object )
    goto LABEL_239;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v13 + 24), 0LL);
  Master_object = (__int64)this->fields.mLineSp;
  if ( !Master_object )
    goto LABEL_239;
  v128 = Mine;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0LL);
  Master_object = (__int64)this->fields.mLineSp;
  if ( !Master_object )
    goto LABEL_239;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v13 + 24), 0LL);
  Master_object = (__int64)this->fields.mTitle2Sp;
  v48 = (v39 & 1) == 0 && IsClear;
  if ( !Master_object )
    goto LABEL_239;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( (v39 & 1) != 0 )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 0, 0LL);
    Master_object = (__int64)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_239;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 0, 0LL);
    Master_object = (__int64)this->fields.mLinkObj;
    v49 = v128;
    if ( !Master_object )
      goto LABEL_239;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0LL);
    Master_object = (__int64)this->fields.mTitle2Sp;
    if ( !Master_object )
      goto LABEL_239;
    v50 = v31;
    UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v13 + 24), 0LL);
    Master_object = (__int64)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_239;
    v51 = v39;
    v52 = v38;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0LL);
    Master_object = (__int64)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_239;
    UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0LL);
    mTitleSp = this->fields.mTitleSp;
    if ( QuestType == 3 )
    {
      Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      v54 = *(unsigned __int8 *)(v13 + 40);
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      if ( !mTitleSp )
        goto LABEL_239;
      v55 = 56LL;
      if ( !v54 )
        v55 = 48LL;
      UISprite__set_spriteName(
        mTitleSp,
        *(System_String_o **)((char *)&ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH + v55),
        0LL);
      if ( IsLimitCountSealQuest )
      {
        v56 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(
          v56,
          (Il2CppObject *)v13,
          Method_ServantStatusQuestBoardDraw___c__DisplayClass47_0__SetItem_b__1__,
          0LL);
        v38 = v52;
        v39 = v51;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__LoadEventUI(v56, 1, 0LL);
      }
      else
      {
        v38 = v52;
        v39 = v51;
      }
    }
    else
    {
      Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      if ( !mTitleSp )
        goto LABEL_239;
      UISprite__set_spriteName(
        mTitleSp,
        ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_SPRITE_NAME_RAINFORCEMENT,
        0LL);
      v48 = IsClear;
      v38 = v52;
      v39 = v51;
    }
    Master_object = (__int64)this->fields.mTitleSp;
    v31 = v50;
    if ( !Master_object )
      goto LABEL_239;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_object + 840LL))(
      Master_object,
      *(_QWORD *)(*(_QWORD *)Master_object + 848LL));
    Master_object = (__int64)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_239;
    UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v13 + 24), 0LL);
    Master_object = (__int64)this->fields.mLinkObj;
    if ( !Master_object )
      goto LABEL_239;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
    Master_object = (__int64)this->fields.mLinkObj;
    if ( !Master_object )
      goto LABEL_239;
    Master_object = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Master_object, 0LL);
    if ( !Master_object )
      goto LABEL_239;
    Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)Master_object,
                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !Master_object )
      goto LABEL_239;
    UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v13 + 24), 0LL);
    IsClear = v48;
    v49 = v128;
  }
  Master_object = (__int64)this->fields.mClearObj;
  if ( !Master_object )
    goto LABEL_239;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v39 & 1, 0LL);
  Master_object = (__int64)this->fields.mNoneLb;
  if ( !Master_object )
    goto LABEL_239;
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( v39 & 1 | IsClear )
  {
    if ( questReleaseClosedID < 1 )
    {
      if ( questReleaseNG && questReleaseNG->fields.type == 8 )
      {
        mTitleNameLb = this->fields.mTitleNameLb;
        v58 = v39;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v59 = v38;
        Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11896/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/, 0LL);
        if ( !mTitleNameLb )
          goto LABEL_239;
        v66 = (System_String_o *)Master_object;
        Master_object = (__int64)mTitleNameLb;
      }
      else
      {
        Master_object = (__int64)QuestEntity__getQuestName(v49, 0LL);
        if ( !Master_object )
          goto LABEL_239;
        v67 = (System_String_o *)Master_object;
        if ( System_String__Contains((System_String_o *)Master_object, (System_String_o *)StringLiteral_24983/*"{0}"*/, 0LL) )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v68 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
          Master_object = QuestEntity__getServantId(v128, 0LL);
          if ( !v68 )
            goto LABEL_239;
          v58 = v39;
          Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)v68,
                                     Master_object,
                                     (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Master_object )
            goto LABEL_239;
          v59 = v38;
          BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Master_object, 0, -1, 0LL);
          v49 = v128;
          v67 = System_String__Format(v67, BattleName, 0LL);
        }
        else
        {
          v58 = v39;
          v59 = v38;
        }
        Master_object = (__int64)this->fields.mTitleNameLb;
        if ( !Master_object )
          goto LABEL_239;
        v66 = v67;
      }
      UILabel__set_text((UILabel_o *)Master_object, v66, 0LL);
    }
    else
    {
      v58 = v39;
      v59 = v38;
      ServantStatusQuestBoardDraw__SetAdvanceNoticeText(
        this,
        questReleaseClosedID,
        v31,
        v49,
        questReleaseNG,
        checkTime,
        v57);
    }
  }
  else
  {
    v60 = this->fields.mTitleNameLb;
    v58 = v39;
    if ( QuestType == 3 )
    {
      v61 = (System_String_o **)&StringLiteral_11939/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE"*/;
      v62 = LocalizationManager_TypeInfo;
      v63 = (System_String_o **)&StringLiteral_11940/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE2"*/;
    }
    else
    {
      v61 = (System_String_o **)&StringLiteral_11941/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/;
      v62 = LocalizationManager_TypeInfo;
      v63 = (System_String_o **)&StringLiteral_11942/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT2"*/;
    }
    if ( v120 )
      v61 = v63;
    v64 = *v61;
    if ( !v62->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v62);
    v59 = v38;
    Master_object = (__int64)LocalizationManager__Get(v64, 0LL);
    if ( !v60 )
      goto LABEL_239;
    UILabel__set_text(v60, (System_String_o *)Master_object, 0LL);
    v49 = v128;
  }
  Master_object = (__int64)this->fields.mTitleNameLb;
  if ( !Master_object )
    goto LABEL_239;
  v70 = *(_DWORD *)(Master_object + 168);
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    Master_object = (__int64)this->fields.mTitleNameLb;
    if ( !Master_object )
      goto LABEL_239;
  }
  TITLE_LABEL_BASE_WIDTH = ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH;
  Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
  v72 = v70 <= TITLE_LABEL_BASE_WIDTH;
  v73 = (UnityEngine_Transform_o *)Master_object;
  if ( v72 )
  {
    if ( !byte_4A55CE6 )
    {
      Master_object = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE6 = 1;
    }
    if ( !v73 )
      goto LABEL_239;
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
    v74 = this->fields.mTitleNameLb;
    if ( !v74 || !v73 )
      goto LABEL_239;
    y = 1.0;
    x = (float)ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH / (float)v74->fields.mWidth;
    z = 1.0;
  }
  UnityEngine_Transform__set_localScale(v73, *(UnityEngine_Vector3_o *)&x, 0LL);
  Master_object = (__int64)this->fields.mTitleNameLb;
  if ( !Master_object )
    goto LABEL_239;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v13 + 24), 0LL);
  this->fields.inputMessageObject = v124;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.inputMessageObject, (int32_t)v124, v79, v80);
  if ( QuestType == 3 )
  {
    ServantId = QuestEntity__getServantId(v49, 0LL);
    Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_239;
    Master_object = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Master_object )
      goto LABEL_239;
    Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                               ServantId,
                               (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !this->fields.mTitleShortcutSp )
      goto LABEL_239;
    v82 = (ServantEntity_o *)Master_object;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mTitleShortcutSp, 0, 0LL);
    mTitleShortcutLb = this->fields.mTitleShortcutLb;
    if ( v82 )
    {
      Master_object = (__int64)ServantEntity__getName(v82, limitCounta, -1, 0LL);
      if ( !mTitleShortcutLb )
        goto LABEL_239;
      UILabel__set_text(mTitleShortcutLb, (System_String_o *)Master_object, 0LL);
      Master_object = (__int64)this->fields.mTitleShortcutLb;
      v49 = v128;
      if ( !Master_object )
        goto LABEL_239;
      UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v13 + 24), 0LL);
    }
    else
    {
      if ( !mTitleShortcutLb )
        goto LABEL_239;
      UILabel__set_text(this->fields.mTitleShortcutLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      v49 = v128;
    }
  }
  else
  {
    Master_object = (__int64)this->fields.mTitleShortcutSp;
    if ( !Master_object )
      goto LABEL_239;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0LL);
    Master_object = (__int64)this->fields.mTitleShortcutSp;
    if ( !Master_object )
      goto LABEL_239;
    UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v13 + 24), 0LL);
    Master_object = (__int64)this->fields.mTitleShortcutLb;
    if ( !Master_object )
      goto LABEL_239;
    UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  ServantStatusQuestBoardDraw__ResetInfoTextList(this, v84);
  if ( (v58 & 1) != 0 )
  {
    v85 = questBoardManagera;
LABEL_189:
    v103 = 0;
    goto LABEL_190;
  }
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  isNotItemConsume = 0;
  endTime = qinf->fields.endTime;
  if ( endTime >= 1 && !QuestEntity__HasFlag(v128, 32LL, 0LL) )
  {
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v88 = LocalizationManager__Get((System_String_o *)StringLiteral_13341/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
    v89 = (QuestBoardInformationText_o *)sub_1B887FC(QuestBoardInformationText_TypeInfo);
    QuestBoardInformationText___ctor(v89, v88, endTime, 0, 1, 0LL, 0LL);
    if ( !mInfoTextList )
      goto LABEL_239;
    items = mInfoTextList->fields._items;
    v93 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
    ++mInfoTextList->fields._version;
    if ( !items )
      goto LABEL_239;
    size = mInfoTextList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        mInfoTextList,
        (Il2CppObject *)v89,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
    }
    else
    {
      v95 = &items->obj.klass + size;
      mInfoTextList->fields._size = size + 1;
      v95[4] = (Il2CppClass *)v89;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v95 + 4), (int32_t)v89, v90, v91);
    }
  }
  questPhase = qinf->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(qinf, 0LL);
  if ( questPhase + 1 < PhaseMax )
    v99 = questPhase + 1;
  else
    v99 = PhaseMax;
  v85 = questBoardManagera;
  v100 = this->fields.mInfoTextList;
  Master_object = (__int64)ServantStatusQuestBoardDraw__GetCampaignText(
                             this,
                             v98,
                             v99,
                             0,
                             questBoardManagera,
                             &fixedVal[1],
                             fixedVal,
                             &isNotItemConsume,
                             v117);
  if ( !v100 )
    goto LABEL_239;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v100,
    (System_Collections_Generic_IEnumerable_T__o *)Master_object,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  Master_object = (__int64)this->fields.mInfoTextList;
  v49 = v128;
  if ( !Master_object )
    goto LABEL_239;
  v101 = *(_DWORD *)(Master_object + 24);
  if ( v101 < 1 )
    goto LABEL_189;
  Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)Master_object,
                             questBoardManagera->fields.mAlphaAnimCnt % v101,
                             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
  if ( !Master_object )
    goto LABEL_239;
  QuestBoardInformationText__SetTime(
    (QuestBoardInformationText_o *)Master_object,
    p_mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    0LL);
  Master_object = (__int64)this->fields.mOptionInfoLb;
  if ( !Master_object )
    goto LABEL_239;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Master_object, 1.0, 0LL);
  v102 = fixedVal[1];
  v103 = 1;
  qinf->fields.isNotItemConsume = isNotItemConsume;
  v104 = fixedVal[0];
  qinf->fields.costCalcVal = v102;
  qinf->fields._fixedCostVal_k__BackingField = v104;
LABEL_190:
  Master_object = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_239;
  Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_239;
  Master_object = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_239;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_239;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v103, 0LL);
  Master_object = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_239;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_239;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v103, 0LL);
  this->fields.mRewardIconInfs = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mRewardIconInfs, 0, v105, v106);
  Master_object = (__int64)this->fields.mRewardIcon;
  if ( !Master_object )
    goto LABEL_239;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_239;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  if ( (v59 & 1) != 0 && QuestEntity__HasFlag(v49, 4096LL, 0LL) )
  {
    Master_object = (__int64)this->fields.mRewardIcon;
    if ( !Master_object )
      goto LABEL_239;
    LODWORD(giftIconId) = 99;
LABEL_204:
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)Master_object, giftIconId, 0LL);
    Master_object = (__int64)this->fields.mRewardIcon;
    if ( !Master_object )
      goto LABEL_239;
    Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
    if ( !Master_object )
      goto LABEL_239;
    v107 = 1;
    goto LABEL_207;
  }
  giftIconId = (unsigned int)v49->fields.giftIconId;
  if ( (int)giftIconId >= 1 )
  {
    Master_object = (__int64)this->fields.mRewardIcon;
    if ( !Master_object )
      goto LABEL_239;
    goto LABEL_204;
  }
  if ( v49->fields.giftId >= 1 )
  {
    Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_239;
    Master_object = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !Master_object )
      goto LABEL_239;
    Master_object = (__int64)GiftMaster__GetGiftListById((GiftMaster_o *)Master_object, v49->fields.giftId, 0LL);
    if ( !Master_object )
      goto LABEL_239;
    v110 = *(_QWORD *)(Master_object + 24);
    v111 = (struct GiftEntity_array *)Master_object;
    if ( !v110 )
      goto LABEL_238;
    v112 = v85->fields.mAlphaAnimCnt % (int)v110;
    if ( v112 >= (unsigned int)v110 )
      sub_1B88814(Master_object, giftIconId);
    v113 = *(_DWORD **)(Master_object + 8LL * v112 + 32);
    if ( v113 )
    {
      giftIconId = (unsigned int)v113[11];
      Master_object = (__int64)this->fields.mRewardIcon;
      v114 = v113[7];
      if ( (int)giftIconId < 1 )
      {
        if ( !Master_object )
          goto LABEL_239;
        v116 = v114 <= 1 ? -1 : v113[7];
        ItemIconComponent__SetGift_38144896((ItemIconComponent_o *)Master_object, v113[5], v113[6], v116, 0, 0LL);
      }
      else
      {
        if ( !Master_object )
          goto LABEL_239;
        v115 = v114 <= 1 ? -1 : v113[7];
        ItemIconComponent__SetItemImage_38147292((ItemIconComponent_o *)Master_object, giftIconId, v115, 0LL);
      }
      Master_object = (__int64)this->fields.mRewardIcon;
      if ( Master_object )
      {
        Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
        if ( Master_object )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
LABEL_238:
          this->fields.mRewardIconInfs = v111;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mRewardIconInfs, (int32_t)v111, v108, v109);
          goto LABEL_208;
        }
      }
    }
LABEL_239:
    sub_1B8880C(Master_object, giftIconId);
  }
  Master_object = (__int64)this->fields.mRewardObj;
  if ( !Master_object )
    goto LABEL_239;
  v107 = 0;
LABEL_207:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v107, 0LL);
LABEL_208:
  Master_object = (__int64)this->fields.mRewardObj;
  if ( !Master_object )
    goto LABEL_239;
  Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Master_object,
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Master_object )
    goto LABEL_239;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v13 + 24), 0LL);
  Master_object = (__int64)this->fields.mRewardIcon;
  if ( !Master_object )
    goto LABEL_239;
  ItemIconComponent__SetColor((ItemIconComponent_o *)Master_object, *(UnityEngine_Color_o *)(v13 + 24), 0LL);
  Master_object = (__int64)this->fields.mRewardGetSP;
  if ( !Master_object )
    goto LABEL_239;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_239;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v58 & !v123 & 1, 0LL);
  Master_object = (__int64)this->fields.mRewardGetSP;
  if ( !Master_object )
    goto LABEL_239;
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
      sub_1B8880C(0LL, method);
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

  if ( (byte_4A5863C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    byte_4A5863C = 1;
  }
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !mInfoTextList
    || (mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       mInfoTextList,
                                                                       strIndex,
                                                                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__)) == 0LL )
  {
    sub_1B8880C(mInfoTextList, qinf);
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
    sub_1B8880C(this, 0LL);
  ServantStatusQuestBoardDraw__SetInfoTextAlpha(
    this,
    questBoardManager->fields.mAlphaAnimNow,
    (const MethodInfo *)questBoardManager);
  ServantStatusQuestBoardDraw__SetRewardIconAlpha(this, questBoardManager->fields.mAlphaAnimNow, v5);
}


void __fastcall ServantStatusQuestBoardDraw___SetAdvanceNoticeText_g__CalculateLabel_53_0(
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
  if ( (byte_4A58647 & 1) == 0 )
  {
    label = (UILabel_o *)sub_1B885B0(&ServantStatusQuestBoardDraw_TypeInfo);
    byte_4A58647 = 1;
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
  UILabel__SetCondensedScale(v8, v10->static_fields->ADVANCE_NOTICE_BASE_WIDTH - indent, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0LL);
  label = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0LL);
  if ( !label
    || (LODWORD(v12) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)label, 0LL),
        !transform) )
  {
LABEL_11:
    sub_1B8880C(label, message);
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
        sub_1B88814(this, boardMessageData);
      this = (ServantStatusQuestBoardDraw_o *)boardMessageData->m_Items[v5];
      if ( !this )
        break;
      if ( HIDWORD(this->fields.m_CancellationTokenSource) == 4 && LODWORD(this->fields.mcBaseP) == eventId )
        return (BoardMessageEntity_o *)this;
      if ( max_length == ++v5 )
        return 0LL;
    }
LABEL_12:
    sub_1B8880C(this, boardMessageData);
  }
  return 0LL;
}


void __fastcall ServantStatusQuestBoardDraw___c__DisplayClass47_0___ctor(
        ServantStatusQuestBoardDraw___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusQuestBoardDraw___c__DisplayClass47_0___SetItem_b__0(
        ServantStatusQuestBoardDraw___c__DisplayClass47_0_o *this,
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

  if ( (byte_4A58648 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantStatusQuestBoardDraw_TypeInfo);
    byte_4A58648 = 1;
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
    sub_1B8880C(v4, v5);
  }
}


void __fastcall ServantStatusQuestBoardDraw___c__DisplayClass47_0___SetItem_b__1(
        ServantStatusQuestBoardDraw___c__DisplayClass47_0_o *this,
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

  if ( (byte_4A58649 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantStatusQuestBoardDraw_TypeInfo);
    byte_4A58649 = 1;
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
    sub_1B8880C(v4, v5);
  }
}