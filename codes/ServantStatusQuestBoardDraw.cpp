void __fastcall ServantStatusQuestBoardDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
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
  int32_t v29; // w1
  struct ServantStatusQuestBoardDraw_StaticFields *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w1
  struct ServantStatusQuestBoardDraw_StaticFields *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3

  if ( (byte_48E045D & 1) == 0 )
  {
    sub_1B00CCC(&ServantStatusQuestBoardDraw_TypeInfo, v1);
    sub_1B00CCC(&StringLiteral_20024/*"img_conductor_03"*/, v4);
    sub_1B00CCC(&StringLiteral_20025/*"img_conductor_04"*/, v5);
    sub_1B00CCC(&StringLiteral_20023/*"img_conductor_02"*/, v6);
    sub_1B00CCC(&StringLiteral_20131/*"img_questboard_1001"*/, v7);
    sub_1B00CCC(&StringLiteral_20022/*"img_conductor_01"*/, v8);
    sub_1B00CCC(&StringLiteral_20026/*"img_conductor_questboard"*/, v9);
    sub_1B00CCC(&StringLiteral_20018/*"img_commonbg"*/, v10);
    byte_48E045D = 1;
  }
  static_fields = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->TITLE_LABEL_BASE_WIDTH = xmmword_B716B0;
  static_fields->ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X = -208.0;
  v12 = StringLiteral_20018/*"img_commonbg"*/;
  static_fields->DARK_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_20018/*"img_commonbg"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->DARK_BOARD_SPRITE_NAME, v12, v2, v3);
  v13 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  *(_QWORD *)&v13->DARK_BOARD_WIDTH = 0x7A000001F0LL;
  v14 = StringLiteral_20026/*"img_conductor_questboard"*/;
  v13->BASE_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_20026/*"img_conductor_questboard"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v13->BASE_BOARD_SPRITE_NAME, v14, v15, v16);
  v17 = StringLiteral_20023/*"img_conductor_02"*/;
  v18 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v18->TITLE_SPRITE_NAME_INTERLUDE = (struct System_String_o *)StringLiteral_20023/*"img_conductor_02"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v18->TITLE_SPRITE_NAME_INTERLUDE, v17, v19, v20);
  v21 = StringLiteral_20022/*"img_conductor_01"*/;
  v22 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v22->TITLE_SPRITE_NAME_INTERLUDE_MAP = (struct System_String_o *)StringLiteral_20022/*"img_conductor_01"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v22->TITLE_SPRITE_NAME_INTERLUDE_MAP, v21, v23, v24);
  v25 = StringLiteral_20024/*"img_conductor_03"*/;
  v26 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v26->TITLE_SPRITE_NAME_RAINFORCEMENT = (struct System_String_o *)StringLiteral_20024/*"img_conductor_03"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v26->TITLE_SPRITE_NAME_RAINFORCEMENT, v25, v27, v28);
  v29 = StringLiteral_20131/*"img_questboard_1001"*/;
  v30 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v30->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME = (struct System_String_o *)StringLiteral_20131/*"img_questboard_1001"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v30->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME, v29, v31, v32);
  v33 = StringLiteral_20025/*"img_conductor_04"*/;
  v34 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v34->TITLE_SPRITE_NAME_LIMIT_UNSEAL = (struct System_String_o *)StringLiteral_20025/*"img_conductor_04"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v34->TITLE_SPRITE_NAME_LIMIT_UNSEAL, v33, v35, v36);
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

  if ( (byte_48E0455 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, qinf);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, v6);
    sub_1B00CCC(&NetworkManager_TypeInfo, v7);
    byte_48E0455 = 1;
  }
  if ( (byte_48E0456 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, qinf);
    byte_48E0456 = 1;
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
                                                                       (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__);
        if ( mInfoTextList )
        {
          if ( QuestBoardInformaionText__ChangeText(
                 (QuestBoardInformaionText_o *)mInfoTextList,
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
      sub_1B00F28(mInfoTextList, qinf);
    }
  }
  if ( (byte_48E0457 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, qinf);
    byte_48E0457 = 1;
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  }
  if ( !mInfoTextList || !mInfoTextList->fields._size )
    return;
  mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 mInfoTextList,
                                                                 0,
                                                                 (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__);
  if ( !mInfoTextList )
    goto LABEL_24;
  if ( QuestBoardInformaionText__ChangeText(
         (QuestBoardInformaionText_o *)mInfoTextList,
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
    sub_1B00F30(this, questBoardManager);
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
      ItemIconComponent__SetItemImage_36937060((ItemIconComponent_o *)this, (int32_t)questBoardManager, v8, 0LL);
      return;
    }
LABEL_18:
    sub_1B00F28(this, questBoardManager);
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
  QuestBoardInformaionText_o *v24; // x27
  struct System_Int32_array *targetIds; // x8
  int32_t consumeType; // w8
  System_String_o *v27; // x20
  Il2CppObject *EventName; // x0
  System_String_o *v29; // x20
  int64_t EndTime; // x19
  QuestBoardInformaionText_o *v31; // x0
  QuestPhaseEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v34; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_48E045A & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_QuestPhaseMaster___, questEntity);
    sub_1B00CCC(&DataManager_TypeInfo, v17);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v18);
    sub_1B00CCC(&QuestBoardInformaionText_TypeInfo, v19);
    sub_1B00CCC(&StringLiteral_24618/*"{0}"*/, v20);
    this = (ServantStatusQuestBoardDraw_o *)sub_1B00CCC(&StringLiteral_13121/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, v21);
    byte_48E045A = 1;
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
  this = (ServantStatusQuestBoardDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !questEntity || !this )
LABEL_40:
    sub_1B00F28(this, questEntity);
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
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_13121/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0LL);
  EventName = (Il2CppObject *)EventEntity__getEventName(eventEnt, 0LL);
  v29 = System_String__Format_60340120(v27, EventName, (Il2CppObject *)StringLiteral_24618/*"{0}"*/, 0LL);
  EndTime = EventEntity__GetEndTime(eventEnt, 0, 0LL);
  v31 = (QuestBoardInformaionText_o *)sub_1B00F18(QuestBoardInformaionText_TypeInfo);
  v35.fields.r = 0.0;
  v35.fields.g = 0.0;
  v35.fields.b = 0.0;
  v35.fields.a = 0.0;
  v34.fields.x = 0.0;
  v34.fields.y = 0.0;
  v34.fields.z = 0.0;
  v24 = v31;
  QuestBoardInformaionText___ctor(v31, v29, EndTime, 1, 0, v35, -1, 0, v34, 0, 0LL, 0LL, 0LL);
  return v24;
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
  QuestBoardInformaionText_o *v40; // x0
  Il2CppObject *v41; // x21
  int32_t v42; // w2
  int32_t v43; // w3
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  EventCampaignEntity_o *eventCampaignEnt; // [xsp+0h] [xbp-80h]
  Il2CppObject *entity; // [xsp+28h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v51; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_48E0458 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&quest_id);
    sub_1B00CCC(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v16);
    sub_1B00CCC(&DataManager_TypeInfo, v17);
    sub_1B00CCC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v18);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__, v19);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v20);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__, v21);
    sub_1B00CCC(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo, v22);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v23);
    sub_1B00CCC(&QuestBoardInformaionText_TypeInfo, v24);
    sub_1B00CCC(&StringLiteral_24618/*"{0}"*/, v25);
    sub_1B00CCC(&StringLiteral_115/*" "*/, v26);
    sub_1B00CCC(&StringLiteral_13126/*"TIME_REST_STRING"*/, v27);
    byte_48E0458 = 1;
  }
  entity = 0LL;
  v28 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)ServantStatusQuestBoardDraw__GetCampaignTextListByEventQuestMaster(
                                                                                        this,
                                                                                        this->fields.questId,
                                                                                        phase,
                                                                                        isQuestNoneCleared,
                                                                                        questBoardManager,
                                                                                        costCalcVal,
                                                                                        fixedVal,
                                                                                        isNotItemConsume,
                                                                                        (const MethodInfo *)eventCampaignEnt);
  if ( !v28 )
    goto LABEL_25;
  System_Collections_Generic_List_object___AddRange(
    v28,
    CampaignTextListByEventQuestMaster,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  if ( !questBoardManager || !CampaignTextListByEventQuestMaster )
    goto LABEL_25;
  EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                             (QuestReleaseOverwriteMaster_o *)CampaignTextListByEventQuestMaster,
                             this->fields.questId,
                             questBoardManager->fields.mListCreatedTime,
                             0LL);
  if ( !EntityByQuestIdAndTime )
    return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v28;
  v32 = EntityByQuestIdAndTime;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !CampaignTextListByEventQuestMaster )
    goto LABEL_25;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)CampaignTextListByEventQuestMaster,
          &entity,
          v32->fields.eventId,
          (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v28;
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)entity;
  if ( !entity )
    goto LABEL_25;
  if ( LODWORD(entity[1].monitor) != 25 )
    return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v28;
  endedAt = v32->fields.endedAt;
  p_endedAt = (Il2CppObject *)&v32->fields.endedAt;
  v35 = (int64_t *)(endedAt <= 0 ? &entity[6] : p_endedAt);
  v36 = *v35;
  EventName = EventEntity__getEventName((EventEntity_o *)entity, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_13126/*"TIME_REST_STRING"*/, 0LL);
  v39 = System_String__Concat_60339012(
          EventName,
          (System_String_o *)StringLiteral_115/*" "*/,
          v38,
          (System_String_o *)StringLiteral_24618/*"{0}"*/,
          0LL);
  v40 = (QuestBoardInformaionText_o *)sub_1B00F18(QuestBoardInformaionText_TypeInfo);
  v52.fields.r = 0.0;
  v52.fields.g = 0.0;
  v52.fields.b = 0.0;
  v52.fields.a = 0.0;
  v51.fields.x = 0.0;
  v51.fields.y = 0.0;
  v51.fields.z = 0.0;
  v41 = (Il2CppObject *)v40;
  QuestBoardInformaionText___ctor(v40, v39, v36, 0, 0, v52, -1, 0, v51, 1, 0LL, 0LL, 0LL);
  items = v28->fields._items;
  v45 = Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__;
  ++v28->fields._version;
  if ( !items )
LABEL_25:
    sub_1B00F28(CampaignTextListByEventQuestMaster, v30);
  size = v28->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v28,
      v41,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
  }
  else
  {
    v47 = &items->obj.klass + size;
    v28->fields._size = size + 1;
    v47[4] = (Il2CppClass *)v41;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v47 + 4), (int32_t)v41, v42, v43);
  }
  return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v28;
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
  int32_t v35; // w3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass *v39; // x1
  Il2CppClass **v40; // x0
  const MethodInfo *v42; // [xsp+8h] [xbp-78h]
  bool v43; // [xsp+14h] [xbp-6Ch]
  bool *v44; // [xsp+18h] [xbp-68h]

  if ( (byte_48E0459 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventCampaignMaster___, *(_QWORD *)&questId);
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventQuestMaster___, v16);
    sub_1B00CCC(&Method_DataManager_GetMasterData_QuestMaster___, v17);
    sub_1B00CCC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v18);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v19);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__, v20);
    sub_1B00CCC(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo, v21);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_48E0459 = 1;
  }
  v23 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  v43 = isQuestNoneCleared;
  v26 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = DataManager__GetMasterData_object_(
               v26,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               questId,
               (const MethodInfo_2FE6A4C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !questBoardManager )
    goto LABEL_22;
  mListCreatedTime = questBoardManager->fields.mListCreatedTime;
  v29 = (QuestEntity_o *)Instance;
  Instance = DataManager__GetMasterData_object_(
               v26,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventQuestMaster___);
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
        sub_1B00F30(Instance, v25);
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
          v37 = Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__;
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
              *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
          }
          else
          {
            v40 = &items->obj.klass + size;
            v23->fields._size = size + 1;
            v40[4] = v39;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)v39, v34, v35);
          }
        }
      }
      v30 = *((_DWORD *)v31 + 6);
      if ( (int)++v32 >= v30 )
        return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v23;
    }
LABEL_22:
    sub_1B00F28(Instance, v25);
  }
  return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v23;
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
  int32_t v28; // w3
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

  if ( (byte_48E044F & 1) == 0 )
  {
    sub_1B00CCC(&CondType_TypeInfo, method);
    sub_1B00CCC(&Method_DataManager_GetMaster_QuestReleaseMaster___, v3);
    sub_1B00CCC(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v4);
    sub_1B00CCC(&DataManager_TypeInfo, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v13);
    sub_1B00CCC(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v14);
    sub_1B00CCC(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v15);
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, v16);
    byte_48E044F = 1;
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  v23 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
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
    v24 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v24,
      (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    IsQuestReleaseAll = (MapControl_WarInfo_o *)entityList;
    if ( !entityList )
      goto LABEL_53;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v41,
      (System_Collections_Generic_List_object__o *)entityList,
      (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    v42 = v41;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v42,
              (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
    {
      if ( !v42.fields._current )
        sub_1B00F28(0LL, v25);
      v26 = (Il2CppObject *)QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
                              (QuestReleaseOverwriteEntity_o *)v42.fields._current,
                              0LL);
      v29 = v26;
      if ( !v24 )
        sub_1B00F28(v26, v26);
      items = v24->fields._items;
      v31 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
      ++v24->fields._version;
      if ( !items )
        sub_1B00F28(v26, v26);
      size = v24->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v24,
          v26,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v24->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v29;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v29, v27, v28);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v42,
      (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    if ( !v24 )
      goto LABEL_53;
    IsQuestReleaseAll = (MapControl_WarInfo_o *)System_Collections_Generic_List_object___ToArray(
                                                  v24,
                                                  (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    v34 = IsQuestReleaseAll;
    if ( IsQuestReleaseAll )
      goto LABEL_37;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsQuestReleaseAll = (MapControl_WarInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !IsQuestReleaseAll )
LABEL_53:
    sub_1B00F28(IsQuestReleaseAll, v18);
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
      sub_1B00F30(IsQuestReleaseAll, v18);
    v37 = *((_QWORD *)&v34->fields.mapInfoList + v36);
    if ( !v37 )
      goto LABEL_53;
    v39 = *(_DWORD *)(v37 + 20);
    v38 = *(_DWORD *)(v37 + 24);
    v40 = *(_QWORD *)(v37 + 32);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestReleaseAll = (MapControl_WarInfo_o *)CondType__IsOpen(v39, v38, v40, 0, 0LL);
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
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x8

  if ( (byte_48E0457 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, method);
    byte_48E0457 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  return !mInfoTextList || mInfoTextList->fields._size == 0;
}


bool __fastcall ServantStatusQuestBoardDraw__IsMultiInfoText(
        ServantStatusQuestBoardDraw_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x8

  if ( (byte_48E0456 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, method);
    byte_48E0456 = 1;
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

  if ( (byte_48E045B & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_QuestRestrictionInfoMaster___, questEntity);
    sub_1B00CCC(&DataManager_TypeInfo, v6);
    byte_48E045B = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
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
        return v10 & ~QuestEntity__HasFlag_38221784(questEntity, 2LL, phase, 0LL) & 1;
      }
LABEL_17:
      sub_1B00F28(Master_object, v8);
    }
  }
  else if ( !QuestEntity__HasFlag_38221784(questEntity, 0x80000LL, phase, 0LL) )
  {
    HasFlag = QuestEntity__HasFlag_38221784(questEntity, 0x100000LL, phase, 0LL);
    goto LABEL_15;
  }
  v10 = 0;
  return v10 & ~QuestEntity__HasFlag_38221784(questEntity, 2LL, phase, 0LL) & 1;
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

  if ( (byte_48E045C & 1) == 0 )
  {
    sub_1B00CCC(&int_TypeInfo, method);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v3);
    sub_1B00CCC(&Method_ServantStatusQuestBoardDraw_OnClick__, v4);
    sub_1B00CCC(&StringLiteral_9760/*"OnClickServantQuest"*/, v5);
    byte_48E045C = 1;
  }
  inputMessageObject = (UnityEngine_Object_o *)this->fields.inputMessageObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(inputMessageObject, 0LL, 0LL) || (questId = this->fields.questId) == 0 )
  {
    v14 = Method_ServantStatusQuestBoardDraw_OnClick__;
    if ( (*((_BYTE *)Method_ServantStatusQuestBoardDraw_OnClick__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1B00CE4(Method_ServantStatusQuestBoardDraw_OnClick__);
    v15 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v14, v14[4]);
    OverwriteAssetSoundName__PlaySystemSe(v15, 2, 0LL);
  }
  else
  {
    v11 = this->fields.inputMessageObject;
    v16 = questId;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v7, v8, v9);
    if ( !v11 )
      sub_1B00F28(v12, v13);
    UnityEngine_GameObject__SendMessage_68059028(v11, (System_String_o *)StringLiteral_9760/*"OnClickServantQuest"*/, v12, 0LL);
  }
}


void __fastcall ServantStatusQuestBoardDraw__ResetInfoTextList(
        ServantStatusQuestBoardDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v5; // x8
  ServantStatusBattleListViewItem_o *p_mInfoTextList; // x19
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // t1
  int32_t size; // w2
  int v9; // w9
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_48E0452 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Clear__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__, v3);
    sub_1B00CCC(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo, v4);
    byte_48E0452 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  p_mInfoTextList = (ServantStatusBattleListViewItem_o *)&this->fields.mInfoTextList;
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
    v10 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
    p_mInfoTextList->klass = (ServantStatusBattleListViewItem_c *)v10;
    sub_1B00C70(p_mInfoTextList, (int32_t)v10, v11, v12);
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
  __int64 Master_object; // x0
  __int64 v30; // x1
  System_String_o *monitor; // x20
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  bool v35; // w25
  int klass_high; // w24
  Il2CppObject *PrioredName; // x0
  System_String_o *v38; // x0
  int32_t targetId; // w26
  System_String_o *v40; // x21
  int32_t WarID_ByQuestID; // w26
  Il2CppObject *v42; // x0
  int64_t OpenedAt; // x26
  System_Object_array *v44; // x26
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  int32_t v48; // w2
  int32_t v49; // w3
  Il2CppObject *v50; // x27
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  int32_t v54; // w2
  int32_t v55; // w3
  Il2CppObject *v56; // x27
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  int32_t v60; // w2
  int32_t v61; // w3
  Il2CppObject *v62; // x27
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  int32_t v66; // w2
  int32_t v67; // w3
  Il2CppObject *v68; // x27
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v70; // x22
  _BOOL4 v71; // w26
  UILabel_o *mTitleNameLb; // x23
  int32_t v73; // w21
  struct ServantStatusQuestBoardDraw_StaticFields *static_fields; // x8
  __int64 v75; // x9
  int32_t v76; // w23
  int32_t leftIndent; // w25
  UILabel_o *mCondChangeMessage; // x19
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
  UIWidget_o *mOverwriteAdvanceNoticeLb; // x24
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

  if ( (byte_48E0454 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_ClosedMessageMaster___, *(_QWORD *)&questReleaseClosedID);
    sub_1B00CCC(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v13);
    sub_1B00CCC(&Method_DataManager_GetMaster_WarMaster___, v14);
    sub_1B00CCC(&DataManager_TypeInfo, v15);
    sub_1B00CCC(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v16);
    sub_1B00CCC(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v17);
    sub_1B00CCC(&System_DateTime_TypeInfo, v18);
    sub_1B00CCC(&int_TypeInfo, v19);
    sub_1B00CCC(&long_TypeInfo, v20);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v21);
    sub_1B00CCC(&NetworkManager_TypeInfo, v22);
    sub_1B00CCC(&object___TypeInfo, v23);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v24);
    sub_1B00CCC(&ServantStatusQuestBoardDraw_TypeInfo, v25);
    sub_1B00CCC(&Method_SingletonTemplate_QuestTree__get_Instance__, v26);
    sub_1B00CCC(&StringLiteral_14584/*"UNKNOWN_QUEST_NAME"*/, v27);
    sub_1B00CCC(&StringLiteral_1/*""*/, v28);
    byte_48E0454 = 1;
  }
  dateData = 0LL;
  entity = 0LL;
  if ( questReleaseClosedID < 1 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ClosedMessageMaster___);
  if ( !Master_object )
    goto LABEL_116;
  monitor = (System_String_o *)StringLiteral_1/*""*/;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         questReleaseClosedID,
         (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__) )
  {
    Master_object = (__int64)entity;
    if ( !entity )
      goto LABEL_116;
    monitor = (System_String_o *)entity[1].monitor;
    Master_object = ClosedMessageEntity__IsChangeDispClosedMessage((ClosedMessageEntity_o *)entity, 0LL);
    if ( !entity )
      goto LABEL_116;
    v35 = Master_object;
    Master_object = ClosedMessageEntity__IsChangeDispPositionLeft((ClosedMessageEntity_o *)entity, 0LL);
    if ( !entity )
      goto LABEL_116;
    klass_high = HIDWORD(entity[2].klass);
  }
  else
  {
    klass_high = 0;
    Master_object = 0LL;
    v35 = 0;
  }
  if ( !questReleaseEntity )
    goto LABEL_116;
  v99 = Master_object;
  switch ( questReleaseEntity->fields.type )
  {
    case 1:
      targetId = questReleaseEntity->fields.targetId;
      v40 = (System_String_o *)StringLiteral_1/*""*/;
      Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Master_object )
        goto LABEL_116;
      WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Master_object, targetId, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_WarMaster___);
      if ( !Master_object )
        goto LABEL_116;
      v42 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              WarID_ByQuestID,
              (const MethodInfo_2FE6A4C *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( v42 )
      {
        PrioredName = (Il2CppObject *)WarEntity__GetPrioredName((WarEntity_o *)v42, 0LL);
LABEL_16:
        v38 = System_String__Format(monitor, PrioredName, 0LL);
LABEL_42:
        monitor = v38;
      }
      else
      {
        monitor = v40;
      }
LABEL_43:
      if ( warEntity != 0LL && !v35 )
        v35 = WarEntity__IsChangeDispClosedMessage(warEntity, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
      if ( !Master_object )
        goto LABEL_116;
      EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                                 (QuestReleaseOverwriteMaster_o *)Master_object,
                                 this->fields.questId,
                                 checkTime,
                                 0LL);
      v70 = EntityByQuestIdAndTime;
      if ( !EntityByQuestIdAndTime )
      {
        v71 = 0;
        if ( v35 )
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
      v71 = !System_String__IsNullOrEmpty(EntityByQuestIdAndTime->fields.overlayClosedMessage, 0LL);
      if ( !v35 )
        goto LABEL_62;
LABEL_50:
      Master_object = (__int64)this->fields.mAdvanceNoticeObj;
      if ( !Master_object )
        goto LABEL_116;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
      mTitleNameLb = this->fields.mTitleNameLb;
      v73 = klass_high;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14584/*"UNKNOWN_QUEST_NAME"*/, 0LL);
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
      v75 = 12LL;
      if ( !v71 )
        v75 = 8LL;
      v76 = *(int32_t *)((char *)&static_fields->TITLE_LABEL_BASE_WIDTH + v75);
      if ( v71 )
      {
        if ( !v70 )
          goto LABEL_116;
        leftIndent = v70->fields.leftIndent;
      }
      else
      {
        leftIndent = 0;
      }
      v79 = (float)klass_high;
      if ( (v99 & 1) != 0 )
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
          goto LABEL_116;
        v84 = *(float *)(*(_QWORD *)(Master_object + 184) + 16LL);
        UIWidget__set_pivot((UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb, 3, 0LL);
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_116;
        Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
        if ( !Master_object )
          goto LABEL_116;
        v85 = v84 + (float)leftIndent;
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
          goto LABEL_116;
        UIWidget__set_pivot((UIWidget_o *)Master_object, 4, 0LL);
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_116;
        Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
        if ( !Master_object )
          goto LABEL_116;
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
        goto LABEL_116;
      UIWidget__set_height((UIWidget_o *)Master_object, v76, 0LL);
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
        v76,
        v73,
        v92);
      if ( v71 )
      {
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
        if ( !Master_object )
          goto LABEL_116;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
        if ( !v70 )
          goto LABEL_116;
        overlayClosedMessage = v70->fields.overlayClosedMessage;
        v95 = this->fields.mOverwriteAdvanceNoticeLb;
        if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
        v96 = v79 * 0.5;
        ServantStatusQuestBoardDraw___SetAdvanceNoticeText_g__CalculateLabel_53_0(
          v95,
          overlayClosedMessage,
          v76,
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
LABEL_116:
        sub_1B00F28(Master_object, v30);
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
        goto LABEL_116;
      OpenedAt = QuestEntity__getOpenedAt(questEntity, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      dateData = NetworkManager__getServerDateTime_37177692(OpenedAt, 0LL).fields._dateData;
      v44 = (System_Object_array *)sub_1B00D74(object___TypeInfo, 4LL);
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v106.fields._dateData = (uint64_t)&dateData;
      LODWORD(value) = System_DateTime__get_Month(v106, 0LL);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &value, v45, v46, v47);
      if ( !v44 )
        goto LABEL_116;
      v50 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1B00E08(Master_object, v44->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_118;
      }
      if ( !v44->max_length )
        goto LABEL_117;
      v44->m_Items[0] = v50;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)v44->m_Items, (int32_t)v50, v48, v49);
      v107.fields._dateData = (uint64_t)&dateData;
      Day = System_DateTime__get_Day(v107, 0LL);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Day, v51, v52, v53);
      v56 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1B00E08(Master_object, v44->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_118;
      }
      if ( v44->max_length <= 1 )
        goto LABEL_117;
      v44->m_Items[1] = v56;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v44->m_Items[1], (int32_t)v56, v54, v55);
      v108.fields._dateData = (uint64_t)&dateData;
      Hour = System_DateTime__get_Hour(v108, 0LL);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Hour, v57, v58, v59);
      v62 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1B00E08(Master_object, v44->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_118;
      }
      if ( v44->max_length <= 2 )
        goto LABEL_117;
      v44->m_Items[2] = v62;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v44->m_Items[2], (int32_t)v62, v60, v61);
      v109.fields._dateData = (uint64_t)&dateData;
      Minute = System_DateTime__get_Minute(v109, 0LL);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Minute, v63, v64, v65);
      v68 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1B00E08(Master_object, v44->obj.klass->_1.element_class);
        if ( !Master_object )
        {
LABEL_118:
          v98 = sub_1B00F4C();
          sub_1B00DF4(v98, 0LL);
        }
      }
      if ( v44->max_length <= 3 )
LABEL_117:
        sub_1B00F30(Master_object, v30);
      v44->m_Items[3] = v68;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v44->m_Items[3], (int32_t)v68, v66, v67);
      v38 = System_String__Format_60340256(monitor, v44, 0LL);
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
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  struct MapControl_QuestInfo_o **p_qinf; // x19
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_48E0450 & 1) == 0 )
  {
    sub_1B00CCC(&LocalizationManager_TypeInfo, method);
    sub_1B00CCC(&ServantStatusQuestBoardDraw_TypeInfo, v3);
    sub_1B00CCC(&StringLiteral_11682/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/, v4);
    sub_1B00CCC(&StringLiteral_1/*""*/, v5);
    byte_48E0450 = 1;
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
  mLineSp = (UIWidget_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11682/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/, 0LL);
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.mRewardIconInfs, 0, v10, v11);
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
    sub_1B00F28(mLineSp, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0LL);
  this->fields.inputMessageObject = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.inputMessageObject, 0, v12, v13);
  this->fields.qinf = 0LL;
  p_qinf = &this->fields.qinf;
  *((_DWORD *)p_qinf - 2) = 0;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)p_qinf, 0, v15, v16);
}


void __fastcall ServantStatusQuestBoardDraw__SetInfoTextAlpha(
        ServantStatusQuestBoardDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x8
  BoardOptionTextWithIconComponent_o *mOptionInfoLb; // x0

  if ( (byte_48E0456 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, method);
    byte_48E0456 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList && mInfoTextList->fields._size >= 2 )
  {
    mOptionInfoLb = this->fields.mOptionInfoLb;
    if ( !mOptionInfoLb )
      sub_1B00F28(0LL, method);
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
  __int64 v50; // x20
  int64_t Master_object; // x0
  __int64 giftIconId; // x1
  int32_t v53; // w2
  int32_t v54; // w3
  bool v55; // w23
  int current; // w29
  int64_t mListCreatedTime; // x27
  QuestEntity_o *Mine; // x25
  const MethodInfo *v59; // x1
  int v60; // w24
  int32_t v61; // w2
  int32_t v62; // w3
  int v63; // w23
  const MethodInfo *v64; // x1
  int32_t id; // w8
  int32_t warId; // w21
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v68; // x21
  bool v69; // w8
  ServantLimitImageMaster_o *v70; // x28
  _BOOL4 IsLimitCountSealQuest; // w27
  int32_t closedMessageId; // w8
  Il2CppObject *v73; // x26
  bool HasStatus; // w26
  char v75; // w28
  char v76; // w23
  float v77; // s1
  float v78; // s0
  int32_t v79; // w2
  int32_t v80; // w3
  struct UISprite_o *mcBaseP; // x8
  struct UIAtlas_o *mAtlas; // x1
  UISprite_o *v83; // x26
  System_Action_o *v84; // x26
  _BOOL4 v85; // w25
  QuestEntity_o *v86; // x25
  WarEntity_o *v87; // x29
  char v88; // w21
  char v89; // w23
  UISprite_o *mTitleSp; // x28
  int v91; // w24
  __int64 v92; // x9
  System_Action_o *v93; // x26
  const MethodInfo *v94; // x6
  char v95; // w29
  char v96; // w23
  UILabel_o *v97; // x21
  System_String_o **v98; // x8
  LocalizationManager_c *v99; // x0
  System_String_o **v100; // x9
  System_String_o *v101; // x25
  struct UILabel_o *mTitleNameLb; // x21
  System_String_o *v103; // x1
  System_String_o *v104; // x21
  Il2CppObject *v105; // x25
  Il2CppObject *BattleName; // x0
  int32_t v107; // w21
  int32_t TITLE_LABEL_BASE_WIDTH; // w24
  bool v109; // cc
  UnityEngine_Transform_o *v110; // x21
  struct UILabel_o *v111; // x8
  float y; // s1
  float x; // s0
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  int32_t v116; // w2
  int32_t v117; // w3
  int32_t ServantId; // w21
  ServantEntity_o *v119; // x25
  UILabel_o *mTitleShortcutLb; // x21
  const MethodInfo *v121; // x1
  ServantStatusQuestBoardManager_o *v122; // x24
  __int64 endTime; // x25
  System_Collections_Generic_List_object__o *mInfoTextList; // x21
  System_String_o *v125; // x27
  QuestBoardInformaionText_o *v126; // x0
  Il2CppObject *v127; // x26
  int32_t v128; // w2
  int32_t v129; // w3
  struct System_Object_array *items; // x8
  _QWORD *v131; // x9
  __int64 size; // x10
  Il2CppClass **v133; // x0
  int32_t questPhase; // w24
  int32_t PhaseMax; // w0
  int32_t v136; // w1
  int32_t v137; // w2
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v138; // x21
  int v139; // w8
  int32_t v140; // w9
  bool v141; // w21
  int32_t v142; // w8
  int32_t v143; // w2
  int32_t v144; // w3
  bool v145; // w1
  int32_t v146; // w2
  int32_t v147; // w3
  __int64 v148; // x8
  struct GiftEntity_array *v149; // x22
  int v150; // w9
  _DWORD *v151; // x8
  int v152; // w9
  int32_t v153; // w2
  int32_t v154; // w3
  EventCampaignEntity_o *eventCampaignEnt; // [xsp+0h] [xbp-130h]
  int64_t checkTime; // [xsp+28h] [xbp-108h]
  int32_t limitCounta; // [xsp+34h] [xbp-FCh]
  int v158; // [xsp+38h] [xbp-F8h]
  int questReleaseClosedID; // [xsp+3Ch] [xbp-F4h]
  BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // [xsp+40h] [xbp-F0h]
  bool v161; // [xsp+4Ch] [xbp-E4h]
  struct UnityEngine_GameObject_o *v162; // [xsp+50h] [xbp-E0h]
  int32_t QuestType; // [xsp+5Ch] [xbp-D4h]
  ServantStatusQuestBoardManager_o *questBoardManagera; // [xsp+60h] [xbp-D0h]
  _BOOL4 IsClear; // [xsp+6Ch] [xbp-C4h]
  QuestEntity_o *v166; // [xsp+70h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_int__o v167; // [xsp+78h] [xbp-B8h] BYREF
  bool isNotItemConsume; // [xsp+94h] [xbp-9Ch] BYREF
  int32_t fixedVal[2]; // [xsp+98h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v170; // [xsp+A0h] [xbp-90h] BYREF
  UserQuestEntity_o *entity; // [xsp+C0h] [xbp-70h] BYREF
  QuestReleaseEntity_o *questReleaseNG; // [xsp+C8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v173; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v174; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_48E0451 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, qinf);
    sub_1B00CCC(&AtlasManager_TypeInfo, v13);
    sub_1B00CCC(&CondType_TypeInfo, v14);
    sub_1B00CCC(&Method_DataManager_GetMasterData_GiftMaster___, v15);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_1B00CCC(&Method_DataManager_GetMaster_QuestGroupMaster___, v17);
    sub_1B00CCC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v18);
    sub_1B00CCC(&Method_DataManager_GetMaster_ServantMaster___, v19);
    sub_1B00CCC(&Method_DataManager_GetMaster_UserQuestMaster___, v20);
    sub_1B00CCC(&DataManager_TypeInfo, v21);
    sub_1B00CCC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v22);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v23);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v24);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v25);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v26);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__, v27);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v28);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v29);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, v30);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, v31);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v32);
    sub_1B00CCC(&NetworkManager_TypeInfo, v33);
    sub_1B00CCC(&QuestBoardInformaionText_TypeInfo, v34);
    sub_1B00CCC(&ServantStatusQuestBoardDraw_TypeInfo, v35);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36);
    sub_1B00CCC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v37);
    sub_1B00CCC(&Method_SingletonTemplate_QuestTree__get_Instance__, v38);
    sub_1B00CCC(&Method_ServantStatusQuestBoardDraw___c__DisplayClass47_0__SetItem_b__0__, v39);
    sub_1B00CCC(&Method_ServantStatusQuestBoardDraw___c__DisplayClass47_0__SetItem_b__1__, v40);
    sub_1B00CCC(&ServantStatusQuestBoardDraw___c__DisplayClass47_0_TypeInfo, v41);
    sub_1B00CCC(&StringLiteral_13124/*"TIME_REST_QUEST_BOARD_QUEST"*/, v42);
    sub_1B00CCC(&StringLiteral_24618/*"{0}"*/, v43);
    sub_1B00CCC(&StringLiteral_11749/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE2"*/, v44);
    sub_1B00CCC(&StringLiteral_11751/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT2"*/, v45);
    sub_1B00CCC(&StringLiteral_11750/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/, v46);
    sub_1B00CCC(&StringLiteral_1/*""*/, v47);
    sub_1B00CCC(&StringLiteral_11748/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE"*/, v48);
    sub_1B00CCC(&StringLiteral_11705/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/, v49);
    byte_48E0451 = 1;
  }
  entity = 0LL;
  questReleaseNG = 0LL;
  memset(&v170, 0, sizeof(v170));
  *(_QWORD *)fixedVal = 0LL;
  isNotItemConsume = 0;
  v50 = sub_1B00F18(ServantStatusQuestBoardDraw___c__DisplayClass47_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v50, 0LL);
  if ( !v50 )
    goto LABEL_239;
  *(_QWORD *)(v50 + 16) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v50 + 16), (int32_t)this, v53, v54);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !qinf )
    goto LABEL_239;
  if ( !Master_object )
    goto LABEL_239;
  v162 = inputMessageObject;
  limitCounta = limitCount;
  questBoardManagera = questBoardManager;
  Master_object = (int64_t)QuestGroupMaster__GetInterludeQuestIdList(
                             (QuestGroupMaster_o *)Master_object,
                             qinf->fields.questId,
                             0LL);
  if ( !Master_object )
    goto LABEL_239;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v167,
    (System_Collections_Generic_List_int__o *)Master_object,
    (const MethodInfo_33A5480 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v170 = v167;
  while ( 1 )
  {
    v55 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v170,
            (const MethodInfo_313A14C *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v55 )
      break;
    current = v170.fields._current;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsQuestClear_36399468(current, -1, 0, 0LL) )
      goto LABEL_16;
  }
  current = 0;
LABEL_16:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v170,
    (const MethodInfo_313A148 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( !questBoardManager )
    goto LABEL_239;
  mListCreatedTime = questBoardManager->fields.mListCreatedTime;
  Mine = MapControl_QuestInfo__GetMine(qinf, 0LL);
  QuestType = MapControl_QuestInfo__GetQuestType(qinf, 0LL);
  v60 = v55 || MapControl_QuestInfo__IsClear(qinf, 0LL);
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  Master_object = ServantStatusQuestBoardDraw__IsClose(qinf, v59);
  v63 = Master_object;
  if ( beforeQuestInfo )
  {
    IsClear = MapControl_QuestInfo__IsClear(beforeQuestInfo, 0LL);
    if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    Master_object = ServantStatusQuestBoardDraw__IsClose(beforeQuestInfo, v64);
    v158 = Master_object & 1;
    if ( !Mine )
      goto LABEL_239;
  }
  else
  {
    v158 = 0;
    IsClear = 1;
    if ( !Mine )
      goto LABEL_239;
  }
  id = Mine->fields.id;
  this->fields.qinf = qinf;
  this->fields.questId = id;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.qinf, (int32_t)qinf, v61, v62);
  warId = qinf->fields.warId;
  Master_object = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Master_object )
    goto LABEL_239;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Master_object, warId, 0LL);
  v68 = WarEntityByWarID;
  if ( WarEntityByWarID )
    v69 = !WarEntity__IsFolder(WarEntityByWarID, 0LL);
  else
    v69 = 0;
  *(_BYTE *)(v50 + 40) = v69;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  checkTime = mListCreatedTime;
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_object )
    goto LABEL_239;
  v70 = (ServantLimitImageMaster_o *)Master_object;
  IsLimitCountSealQuest = ServantLimitImageMaster__IsLimitCountSealQuest(
                            (ServantLimitImageMaster_o *)Master_object,
                            this->fields.questId,
                            0LL);
  Master_object = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
  v73 = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = NetworkManager__get_UserId(0LL);
  if ( current < 1 )
  {
    if ( !v73 )
      goto LABEL_239;
    current = this->fields.questId;
  }
  else if ( !v73 )
  {
    goto LABEL_239;
  }
  UserQuestMaster__TryGetEntity((UserQuestMaster_o *)v73, &entity, Master_object, current, 0LL);
  if ( entity )
    HasStatus = UserQuestEntity__HasStatus(entity, 4, 0LL);
  else
    HasStatus = 0;
  if ( (IsLimitCountSealQuest & ~v60 & 1) != 0 )
  {
    if ( ServantLimitImageMaster__IsCommonReleaseMultiClear(v70, this->fields.questId, 0LL) )
    {
      v75 = 0;
      HasStatus = 0;
      v76 = 1;
      questReleaseClosedID = 0;
LABEL_56:
      v77 = 1.0;
      v78 = 0.5;
      v162 = 0LL;
      goto LABEL_58;
    }
    v60 = 0;
  }
  if ( ((v63 | v60) & 1) != 0 )
  {
    v75 = v63;
    v76 = v60;
    goto LABEL_56;
  }
  v76 = 0;
  v75 = 0;
  v78 = 1.0;
  v77 = 1.0;
LABEL_58:
  *(float *)(v50 + 24) = v78;
  *(float *)(v50 + 28) = v78;
  *(float *)(v50 + 32) = v78;
  *(float *)(v50 + 36) = v77;
  Master_object = (int64_t)this->fields.mTitleObj;
  v161 = HasStatus;
  if ( !Master_object )
    goto LABEL_239;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  Master_object = (int64_t)this->fields.mOptionInfoLb;
  if ( !Master_object )
    goto LABEL_239;
  Master_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_239;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  Master_object = (int64_t)this->fields.mRewardObj;
  if ( !Master_object )
    goto LABEL_239;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  Master_object = (int64_t)this->fields.mAdvanceNoticeObj;
  if ( !Master_object )
    goto LABEL_239;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  Master_object = (int64_t)this->fields.mOverwriteAdvanceNoticeObj;
  if ( !Master_object )
    goto LABEL_239;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  Master_object = (int64_t)this->fields.mCondObject;
  if ( !Master_object )
    goto LABEL_239;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  mcBaseP = this->fields.mcBaseP;
  if ( !mcBaseP )
    goto LABEL_239;
  mAtlas = mcBaseP->fields.mAtlas;
  this->fields.basePanelAtlas = mAtlas;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.basePanelAtlas, (int32_t)mAtlas, v79, v80);
  Master_object = (int64_t)ServantStatusQuestBoardDraw_TypeInfo;
  v83 = this->fields.mcBaseP;
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  if ( !v83 )
    goto LABEL_239;
  UISprite__set_spriteName(v83, ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME, 0LL);
  if ( IsLimitCountSealQuest )
  {
    v84 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(
      v84,
      (Il2CppObject *)v50,
      Method_ServantStatusQuestBoardDraw___c__DisplayClass47_0__SetItem_b__0__,
      0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadEventUI(v84, 1, 0LL);
  }
  Master_object = (int64_t)this->fields.mcBaseP;
  if ( !Master_object )
    goto LABEL_239;
  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Master_object + 840LL))(
    Master_object,
    *(_QWORD *)(*(_QWORD *)Master_object + 848LL));
  Master_object = (int64_t)this->fields.mcBaseP;
  if ( !Master_object )
    goto LABEL_239;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v50 + 24), 0LL);
  Master_object = (int64_t)this->fields.mLineSp;
  if ( !Master_object )
    goto LABEL_239;
  v166 = Mine;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0LL);
  Master_object = (int64_t)this->fields.mLineSp;
  if ( !Master_object )
    goto LABEL_239;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v50 + 24), 0LL);
  Master_object = (int64_t)this->fields.mTitle2Sp;
  v85 = (v76 & 1) == 0 && IsClear;
  if ( !Master_object )
    goto LABEL_239;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( (v76 & 1) != 0 )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 0, 0LL);
    Master_object = (int64_t)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_239;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 0, 0LL);
    Master_object = (int64_t)this->fields.mLinkObj;
    v86 = v166;
    if ( !Master_object )
      goto LABEL_239;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0LL);
    Master_object = (int64_t)this->fields.mTitle2Sp;
    if ( !Master_object )
      goto LABEL_239;
    v87 = v68;
    UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v50 + 24), 0LL);
    Master_object = (int64_t)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_239;
    v88 = v76;
    v89 = v75;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0LL);
    Master_object = (int64_t)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_239;
    UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0LL);
    mTitleSp = this->fields.mTitleSp;
    if ( QuestType == 3 )
    {
      Master_object = (int64_t)ServantStatusQuestBoardDraw_TypeInfo;
      v91 = *(unsigned __int8 *)(v50 + 40);
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      if ( !mTitleSp )
        goto LABEL_239;
      v92 = 56LL;
      if ( !v91 )
        v92 = 48LL;
      UISprite__set_spriteName(
        mTitleSp,
        *(System_String_o **)((char *)&ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH + v92),
        0LL);
      if ( IsLimitCountSealQuest )
      {
        v93 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
        System_Action___ctor(
          v93,
          (Il2CppObject *)v50,
          Method_ServantStatusQuestBoardDraw___c__DisplayClass47_0__SetItem_b__1__,
          0LL);
        v75 = v89;
        v76 = v88;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__LoadEventUI(v93, 1, 0LL);
      }
      else
      {
        v75 = v89;
        v76 = v88;
      }
    }
    else
    {
      Master_object = (int64_t)ServantStatusQuestBoardDraw_TypeInfo;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      if ( !mTitleSp )
        goto LABEL_239;
      UISprite__set_spriteName(
        mTitleSp,
        ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_SPRITE_NAME_RAINFORCEMENT,
        0LL);
      v85 = IsClear;
      v75 = v89;
      v76 = v88;
    }
    Master_object = (int64_t)this->fields.mTitleSp;
    v68 = v87;
    if ( !Master_object )
      goto LABEL_239;
    (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Master_object + 840LL))(
      Master_object,
      *(_QWORD *)(*(_QWORD *)Master_object + 848LL));
    Master_object = (int64_t)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_239;
    UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v50 + 24), 0LL);
    Master_object = (int64_t)this->fields.mLinkObj;
    if ( !Master_object )
      goto LABEL_239;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
    Master_object = (int64_t)this->fields.mLinkObj;
    if ( !Master_object )
      goto LABEL_239;
    Master_object = (int64_t)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Master_object, 0LL);
    if ( !Master_object )
      goto LABEL_239;
    Master_object = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)Master_object,
                               (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !Master_object )
      goto LABEL_239;
    UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v50 + 24), 0LL);
    IsClear = v85;
    v86 = v166;
  }
  Master_object = (int64_t)this->fields.mClearObj;
  if ( !Master_object )
    goto LABEL_239;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v76 & 1, 0LL);
  Master_object = (int64_t)this->fields.mNoneLb;
  if ( !Master_object )
    goto LABEL_239;
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( v76 & 1 | IsClear )
  {
    if ( questReleaseClosedID < 1 )
    {
      if ( questReleaseNG && questReleaseNG->fields.type == 8 )
      {
        mTitleNameLb = this->fields.mTitleNameLb;
        v95 = v76;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v96 = v75;
        Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11705/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/, 0LL);
        if ( !mTitleNameLb )
          goto LABEL_239;
        v103 = (System_String_o *)Master_object;
        Master_object = (int64_t)mTitleNameLb;
      }
      else
      {
        Master_object = (int64_t)QuestEntity__getQuestName(v86, 0LL);
        if ( !Master_object )
          goto LABEL_239;
        v104 = (System_String_o *)Master_object;
        if ( System_String__Contains((System_String_o *)Master_object, (System_String_o *)StringLiteral_24618/*"{0}"*/, 0LL) )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v105 = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ServantMaster___);
          Master_object = QuestEntity__getServantId(v166, 0LL);
          if ( !v105 )
            goto LABEL_239;
          v95 = v76;
          Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)v105,
                                     Master_object,
                                     (const MethodInfo_2FE6A4C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Master_object )
            goto LABEL_239;
          v96 = v75;
          BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Master_object, 0, -1, 0LL);
          v86 = v166;
          v104 = System_String__Format(v104, BattleName, 0LL);
        }
        else
        {
          v95 = v76;
          v96 = v75;
        }
        Master_object = (int64_t)this->fields.mTitleNameLb;
        if ( !Master_object )
          goto LABEL_239;
        v103 = v104;
      }
      UILabel__set_text((UILabel_o *)Master_object, v103, 0LL);
    }
    else
    {
      v95 = v76;
      v96 = v75;
      ServantStatusQuestBoardDraw__SetAdvanceNoticeText(
        this,
        questReleaseClosedID,
        v68,
        v86,
        questReleaseNG,
        checkTime,
        v94);
    }
  }
  else
  {
    v97 = this->fields.mTitleNameLb;
    v95 = v76;
    if ( QuestType == 3 )
    {
      v98 = (System_String_o **)&StringLiteral_11748/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE"*/;
      v99 = LocalizationManager_TypeInfo;
      v100 = (System_String_o **)&StringLiteral_11749/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE2"*/;
    }
    else
    {
      v98 = (System_String_o **)&StringLiteral_11750/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/;
      v99 = LocalizationManager_TypeInfo;
      v100 = (System_String_o **)&StringLiteral_11751/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT2"*/;
    }
    if ( v158 )
      v98 = v100;
    v101 = *v98;
    if ( !v99->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v99);
    v96 = v75;
    Master_object = (int64_t)LocalizationManager__Get(v101, 0LL);
    if ( !v97 )
      goto LABEL_239;
    UILabel__set_text(v97, (System_String_o *)Master_object, 0LL);
    v86 = v166;
  }
  Master_object = (int64_t)this->fields.mTitleNameLb;
  if ( !Master_object )
    goto LABEL_239;
  v107 = *(_DWORD *)(Master_object + 168);
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    Master_object = (int64_t)this->fields.mTitleNameLb;
    if ( !Master_object )
      goto LABEL_239;
  }
  TITLE_LABEL_BASE_WIDTH = ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH;
  Master_object = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
  v109 = v107 <= TITLE_LABEL_BASE_WIDTH;
  v110 = (UnityEngine_Transform_o *)Master_object;
  if ( v109 )
  {
    if ( !byte_48DD9F6 )
    {
      Master_object = sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, giftIconId);
      byte_48DD9F6 = 1;
    }
    if ( !v110 )
      goto LABEL_239;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    y = static_fields->oneVector.fields.y;
    z = static_fields->oneVector.fields.z;
    x = static_fields->oneVector.fields.x;
  }
  else
  {
    Master_object = (int64_t)ServantStatusQuestBoardDraw_TypeInfo;
    if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    v111 = this->fields.mTitleNameLb;
    if ( !v111 || !v110 )
      goto LABEL_239;
    y = 1.0;
    x = (float)ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH / (float)v111->fields.mWidth;
    z = 1.0;
  }
  UnityEngine_Transform__set_localScale(v110, *(UnityEngine_Vector3_o *)&x, 0LL);
  Master_object = (int64_t)this->fields.mTitleNameLb;
  if ( !Master_object )
    goto LABEL_239;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v50 + 24), 0LL);
  this->fields.inputMessageObject = v162;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.inputMessageObject, (int32_t)v162, v116, v117);
  if ( QuestType == 3 )
  {
    ServantId = QuestEntity__getServantId(v86, 0LL);
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_239;
    Master_object = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Master_object )
      goto LABEL_239;
    Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                               ServantId,
                               (const MethodInfo_2FE6A4C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !this->fields.mTitleShortcutSp )
      goto LABEL_239;
    v119 = (ServantEntity_o *)Master_object;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mTitleShortcutSp, 0, 0LL);
    mTitleShortcutLb = this->fields.mTitleShortcutLb;
    if ( v119 )
    {
      Master_object = (int64_t)ServantEntity__getName(v119, limitCounta, -1, 0LL);
      if ( !mTitleShortcutLb )
        goto LABEL_239;
      UILabel__set_text(mTitleShortcutLb, (System_String_o *)Master_object, 0LL);
      Master_object = (int64_t)this->fields.mTitleShortcutLb;
      v86 = v166;
      if ( !Master_object )
        goto LABEL_239;
      UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v50 + 24), 0LL);
    }
    else
    {
      if ( !mTitleShortcutLb )
        goto LABEL_239;
      UILabel__set_text(this->fields.mTitleShortcutLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      v86 = v166;
    }
  }
  else
  {
    Master_object = (int64_t)this->fields.mTitleShortcutSp;
    if ( !Master_object )
      goto LABEL_239;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0LL);
    Master_object = (int64_t)this->fields.mTitleShortcutSp;
    if ( !Master_object )
      goto LABEL_239;
    UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v50 + 24), 0LL);
    Master_object = (int64_t)this->fields.mTitleShortcutLb;
    if ( !Master_object )
      goto LABEL_239;
    UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  ServantStatusQuestBoardDraw__ResetInfoTextList(this, v121);
  if ( (v95 & 1) != 0 )
  {
    v122 = questBoardManagera;
LABEL_189:
    v141 = 0;
    goto LABEL_190;
  }
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  isNotItemConsume = 0;
  endTime = qinf->fields.endTime;
  if ( endTime >= 1 && !QuestEntity__HasFlag(v166, 32LL, 0LL) )
  {
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v125 = LocalizationManager__Get((System_String_o *)StringLiteral_13124/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
    v126 = (QuestBoardInformaionText_o *)sub_1B00F18(QuestBoardInformaionText_TypeInfo);
    v174.fields.r = 0.0;
    v174.fields.g = 0.0;
    v174.fields.b = 0.0;
    v174.fields.a = 0.0;
    v173.fields.x = 0.0;
    v173.fields.y = 0.0;
    v173.fields.z = 0.0;
    v127 = (Il2CppObject *)v126;
    QuestBoardInformaionText___ctor(v126, v125, endTime, 0, 0, v174, -1, 0, v173, 1, 0LL, 0LL, 0LL);
    if ( !mInfoTextList )
      goto LABEL_239;
    items = mInfoTextList->fields._items;
    v131 = Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__;
    ++mInfoTextList->fields._version;
    if ( !items )
      goto LABEL_239;
    size = mInfoTextList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        mInfoTextList,
        v127,
        *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
    }
    else
    {
      v133 = &items->obj.klass + size;
      mInfoTextList->fields._size = size + 1;
      v133[4] = (Il2CppClass *)v127;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v133 + 4), (int32_t)v127, v128, v129);
    }
  }
  questPhase = qinf->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(qinf, 0LL);
  if ( questPhase + 1 < PhaseMax )
    v137 = questPhase + 1;
  else
    v137 = PhaseMax;
  v122 = questBoardManagera;
  v138 = this->fields.mInfoTextList;
  Master_object = (int64_t)ServantStatusQuestBoardDraw__GetCampaignText(
                             this,
                             v136,
                             v137,
                             0,
                             questBoardManagera,
                             &fixedVal[1],
                             fixedVal,
                             &isNotItemConsume,
                             (const MethodInfo *)eventCampaignEnt);
  if ( !v138 )
    goto LABEL_239;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v138,
    (System_Collections_Generic_IEnumerable_T__o *)Master_object,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
  Master_object = (int64_t)this->fields.mInfoTextList;
  v86 = v166;
  if ( !Master_object )
    goto LABEL_239;
  v139 = *(_DWORD *)(Master_object + 24);
  if ( v139 < 1 )
    goto LABEL_189;
  Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)Master_object,
                             questBoardManagera->fields.mAlphaAnimCnt % v139,
                             (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__);
  if ( !Master_object )
    goto LABEL_239;
  QuestBoardInformaionText__SetTime(
    (QuestBoardInformaionText_o *)Master_object,
    p_mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    0LL);
  Master_object = (int64_t)this->fields.mOptionInfoLb;
  if ( !Master_object )
    goto LABEL_239;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Master_object, 1.0, 0LL);
  v140 = fixedVal[1];
  v141 = 1;
  qinf->fields.isNotItemConsume = isNotItemConsume;
  v142 = fixedVal[0];
  qinf->fields.costCalcVal = v140;
  qinf->fields._fixedCostVal_k__BackingField = v142;
LABEL_190:
  Master_object = (int64_t)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_239;
  Master_object = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_239;
  Master_object = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_239;
  Master_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_239;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v141, 0LL);
  Master_object = (int64_t)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_239;
  Master_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_239;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v141, 0LL);
  this->fields.mRewardIconInfs = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.mRewardIconInfs, 0, v143, v144);
  Master_object = (int64_t)this->fields.mRewardIcon;
  if ( !Master_object )
    goto LABEL_239;
  Master_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_239;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  if ( (v96 & 1) != 0 && QuestEntity__HasFlag(v86, 4096LL, 0LL) )
  {
    Master_object = (int64_t)this->fields.mRewardIcon;
    if ( !Master_object )
      goto LABEL_239;
    LODWORD(giftIconId) = 99;
LABEL_204:
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)Master_object, giftIconId, 0LL);
    Master_object = (int64_t)this->fields.mRewardIcon;
    if ( !Master_object )
      goto LABEL_239;
    Master_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
    if ( !Master_object )
      goto LABEL_239;
    v145 = 1;
    goto LABEL_207;
  }
  giftIconId = (unsigned int)v86->fields.giftIconId;
  if ( (int)giftIconId >= 1 )
  {
    Master_object = (int64_t)this->fields.mRewardIcon;
    if ( !Master_object )
      goto LABEL_239;
    goto LABEL_204;
  }
  if ( v86->fields.giftId >= 1 )
  {
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_239;
    Master_object = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !Master_object )
      goto LABEL_239;
    Master_object = (int64_t)GiftMaster__GetGiftListById((GiftMaster_o *)Master_object, v86->fields.giftId, 0LL);
    if ( !Master_object )
      goto LABEL_239;
    v148 = *(_QWORD *)(Master_object + 24);
    v149 = (struct GiftEntity_array *)Master_object;
    if ( !v148 )
      goto LABEL_238;
    v150 = v122->fields.mAlphaAnimCnt % (int)v148;
    if ( v150 >= (unsigned int)v148 )
      sub_1B00F30(Master_object, giftIconId);
    v151 = *(_DWORD **)(Master_object + 8LL * v150 + 32);
    if ( v151 )
    {
      giftIconId = (unsigned int)v151[11];
      Master_object = (int64_t)this->fields.mRewardIcon;
      v152 = v151[7];
      if ( (int)giftIconId < 1 )
      {
        if ( !Master_object )
          goto LABEL_239;
        v154 = v152 <= 1 ? -1 : v151[7];
        ItemIconComponent__SetGift((ItemIconComponent_o *)Master_object, v151[5], v151[6], v154, 0, 0LL);
      }
      else
      {
        if ( !Master_object )
          goto LABEL_239;
        v153 = v152 <= 1 ? -1 : v151[7];
        ItemIconComponent__SetItemImage_36937060((ItemIconComponent_o *)Master_object, giftIconId, v153, 0LL);
      }
      Master_object = (int64_t)this->fields.mRewardIcon;
      if ( Master_object )
      {
        Master_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
        if ( Master_object )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
LABEL_238:
          this->fields.mRewardIconInfs = v149;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.mRewardIconInfs, (int32_t)v149, v146, v147);
          goto LABEL_208;
        }
      }
    }
LABEL_239:
    sub_1B00F28(Master_object, giftIconId);
  }
  Master_object = (int64_t)this->fields.mRewardObj;
  if ( !Master_object )
    goto LABEL_239;
  v145 = 0;
LABEL_207:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v145, 0LL);
LABEL_208:
  Master_object = (int64_t)this->fields.mRewardObj;
  if ( !Master_object )
    goto LABEL_239;
  Master_object = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Master_object,
                             (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Master_object )
    goto LABEL_239;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v50 + 24), 0LL);
  Master_object = (int64_t)this->fields.mRewardIcon;
  if ( !Master_object )
    goto LABEL_239;
  ItemIconComponent__SetColor((ItemIconComponent_o *)Master_object, *(UnityEngine_Color_o *)(v50 + 24), 0LL);
  Master_object = (int64_t)this->fields.mRewardGetSP;
  if ( !Master_object )
    goto LABEL_239;
  Master_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_239;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v95 & !v161 & 1, 0LL);
  Master_object = (int64_t)this->fields.mRewardGetSP;
  if ( !Master_object )
    goto LABEL_239;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v50 + 24), 0LL);
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
      sub_1B00F28(0LL, method);
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

  if ( (byte_48E0453 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, qinf);
    byte_48E0453 = 1;
  }
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !mInfoTextList
    || (mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       mInfoTextList,
                                                                       strIndex,
                                                                       (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__)) == 0LL )
  {
    sub_1B00F28(mInfoTextList, qinf);
  }
  QuestBoardInformaionText__Update(
    (QuestBoardInformaionText_o *)mInfoTextList,
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
    sub_1B00F28(this, 0LL);
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
  if ( (byte_48E045E & 1) == 0 )
  {
    label = (UILabel_o *)sub_1B00CCC(&ServantStatusQuestBoardDraw_TypeInfo, message);
    byte_48E045E = 1;
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
    sub_1B00F28(label, message);
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
        sub_1B00F30(this, boardMessageData);
      this = (ServantStatusQuestBoardDraw_o *)boardMessageData->m_Items[v5];
      if ( !this )
        break;
      if ( HIDWORD(this->fields.m_CancellationTokenSource) == 4 && LODWORD(this->fields.mcBaseP) == eventId )
        return (BoardMessageEntity_o *)this;
      if ( max_length == ++v5 )
        return 0LL;
    }
LABEL_12:
    sub_1B00F28(this, boardMessageData);
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

  if ( (byte_48E045F & 1) == 0 )
  {
    sub_1B00CCC(&AtlasManager_TypeInfo, method);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v3);
    sub_1B00CCC(&ServantStatusQuestBoardDraw_TypeInfo, v4);
    byte_48E045F = 1;
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
    sub_1B00F28(v6, v7);
  }
}


void __fastcall ServantStatusQuestBoardDraw___c__DisplayClass47_0___SetItem_b__1(
        ServantStatusQuestBoardDraw___c__DisplayClass47_0_o *this,
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

  if ( (byte_48E0460 & 1) == 0 )
  {
    sub_1B00CCC(&AtlasManager_TypeInfo, method);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v3);
    sub_1B00CCC(&ServantStatusQuestBoardDraw_TypeInfo, v4);
    byte_48E0460 = 1;
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
    sub_1B00F28(v6, v7);
  }
}