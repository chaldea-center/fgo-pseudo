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

  if ( (byte_49F9C3C & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusQuestBoardDraw_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_20218/*"img_conductor_03"*/, v4);
    sub_1B640C8(&StringLiteral_20219/*"img_conductor_04"*/, v5);
    sub_1B640C8(&StringLiteral_20217/*"img_conductor_02"*/, v6);
    sub_1B640C8(&StringLiteral_20328/*"img_questboard_1001"*/, v7);
    sub_1B640C8(&StringLiteral_20216/*"img_conductor_01"*/, v8);
    sub_1B640C8(&StringLiteral_20220/*"img_conductor_questboard"*/, v9);
    sub_1B640C8(&StringLiteral_20212/*"img_commonbg"*/, v10);
    byte_49F9C3C = 1;
  }
  static_fields = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->TITLE_LABEL_BASE_WIDTH = xmmword_BA3AE0;
  static_fields->ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X = -208.0;
  v12 = StringLiteral_20212/*"img_commonbg"*/;
  static_fields->DARK_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_20212/*"img_commonbg"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->DARK_BOARD_SPRITE_NAME, v12, v2, v3);
  v13 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  *(_QWORD *)&v13->DARK_BOARD_WIDTH = 0x7A000001F0LL;
  v14 = StringLiteral_20220/*"img_conductor_questboard"*/;
  v13->BASE_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_20220/*"img_conductor_questboard"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v13->BASE_BOARD_SPRITE_NAME, v14, v15, v16);
  v17 = StringLiteral_20217/*"img_conductor_02"*/;
  v18 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v18->TITLE_SPRITE_NAME_INTERLUDE = (struct System_String_o *)StringLiteral_20217/*"img_conductor_02"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->TITLE_SPRITE_NAME_INTERLUDE, v17, v19, v20);
  v21 = StringLiteral_20216/*"img_conductor_01"*/;
  v22 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v22->TITLE_SPRITE_NAME_INTERLUDE_MAP = (struct System_String_o *)StringLiteral_20216/*"img_conductor_01"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v22->TITLE_SPRITE_NAME_INTERLUDE_MAP, v21, v23, v24);
  v25 = StringLiteral_20218/*"img_conductor_03"*/;
  v26 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v26->TITLE_SPRITE_NAME_RAINFORCEMENT = (struct System_String_o *)StringLiteral_20218/*"img_conductor_03"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v26->TITLE_SPRITE_NAME_RAINFORCEMENT, v25, v27, v28);
  v29 = StringLiteral_20328/*"img_questboard_1001"*/;
  v30 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v30->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME = (struct System_String_o *)StringLiteral_20328/*"img_questboard_1001"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME, v29, v31, v32);
  v33 = StringLiteral_20219/*"img_conductor_04"*/;
  v34 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v34->TITLE_SPRITE_NAME_LIMIT_UNSEAL = (struct System_String_o *)StringLiteral_20219/*"img_conductor_04"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v34->TITLE_SPRITE_NAME_LIMIT_UNSEAL, v33, v35, v36);
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

  if ( (byte_49F9C34 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, qinf);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, v6);
    sub_1B640C8(&NetworkManager_TypeInfo, v7);
    byte_49F9C34 = 1;
  }
  if ( (byte_49F9C35 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, qinf);
    byte_49F9C35 = 1;
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
                                                                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__);
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
      sub_1B64324(mInfoTextList);
    }
  }
  if ( (byte_49F9C36 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, qinf);
    byte_49F9C36 = 1;
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  }
  if ( !mInfoTextList || !mInfoTextList->fields._size )
    return;
  mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 mInfoTextList,
                                                                 0,
                                                                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__);
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
  int32_t *v6; // x8
  int32_t v7; // w1
  int v8; // w9
  int32_t v9; // w2
  int32_t v10; // w3

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
    sub_1B6432C(this, questBoardManager);
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
        v9 = v6[7];
      ItemIconComponent__SetItemImage_37831688((ItemIconComponent_o *)this, v7, v9, 0LL);
      return;
    }
LABEL_18:
    sub_1B64324(this);
  }
  if ( !this )
    goto LABEL_18;
  if ( v8 <= 1 )
    v10 = -1;
  else
    v10 = v6[7];
  ItemIconComponent__SetGift_37829292((ItemIconComponent_o *)this, v6[5], v6[6], v10, 0, 0LL);
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
  __int64 v31; // x1
  __int64 v32; // x2
  QuestBoardInformaionText_o *v33; // x0
  QuestPhaseEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v36; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F9C39 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_QuestPhaseMaster___, questEntity);
    sub_1B640C8(&DataManager_TypeInfo, v17);
    sub_1B640C8(&LocalizationManager_TypeInfo, v18);
    sub_1B640C8(&QuestBoardInformaionText_TypeInfo, v19);
    sub_1B640C8(&StringLiteral_24883/*"{0}"*/, v20);
    this = (ServantStatusQuestBoardDraw_o *)sub_1B640C8(&StringLiteral_13274/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, v21);
    byte_49F9C39 = 1;
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
  this = (ServantStatusQuestBoardDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !questEntity || !this )
LABEL_40:
    sub_1B64324(this);
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
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_13274/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0LL);
  EventName = (Il2CppObject *)EventEntity__getEventName(eventEnt, 0LL);
  v29 = System_String__Format_61389768(v27, EventName, (Il2CppObject *)StringLiteral_24883/*"{0}"*/, 0LL);
  EndTime = EventEntity__GetEndTime(eventEnt, 0, 0LL);
  v33 = (QuestBoardInformaionText_o *)sub_1B64314(QuestBoardInformaionText_TypeInfo, v31, v32);
  v37.fields.r = 0.0;
  v37.fields.g = 0.0;
  v37.fields.b = 0.0;
  v37.fields.a = 0.0;
  v36.fields.x = 0.0;
  v36.fields.y = 0.0;
  v36.fields.z = 0.0;
  v24 = v33;
  QuestBoardInformaionText___ctor(v33, v29, EndTime, 1, 0, v37, -1, 0, v36, 0, 0LL, 0LL, 0LL);
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
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v31; // x20
  Il2CppObject *p_endedAt; // x20
  __int64 endedAt; // t1
  int64_t *v34; // x8
  int64_t v35; // x20
  System_String_o *EventName; // x21
  System_String_o *v37; // x0
  System_String_o *v38; // x22
  __int64 v39; // x1
  __int64 v40; // x2
  QuestBoardInformaionText_o *v41; // x0
  Il2CppObject *v42; // x21
  int32_t v43; // w2
  int32_t v44; // w3
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  EventCampaignEntity_o *eventCampaignEnt; // [xsp+0h] [xbp-80h]
  Il2CppObject *entity; // [xsp+28h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v52; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F9C37 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&quest_id);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v16);
    sub_1B640C8(&DataManager_TypeInfo, v17);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__, v21);
    sub_1B640C8(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo, v22);
    sub_1B640C8(&LocalizationManager_TypeInfo, v23);
    sub_1B640C8(&QuestBoardInformaionText_TypeInfo, v24);
    sub_1B640C8(&StringLiteral_24883/*"{0}"*/, v25);
    sub_1B640C8(&StringLiteral_117/*" "*/, v26);
    sub_1B640C8(&StringLiteral_13279/*"TIME_REST_STRING"*/, v27);
    byte_49F9C37 = 1;
  }
  entity = 0LL;
  v28 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo,
                                                       *(_QWORD *)&quest_id,
                                                       *(_QWORD *)&phase);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
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
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  if ( !questBoardManager || !CampaignTextListByEventQuestMaster )
    goto LABEL_25;
  EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                             (QuestReleaseOverwriteMaster_o *)CampaignTextListByEventQuestMaster,
                             this->fields.questId,
                             questBoardManager->fields.mListCreatedTime,
                             0LL);
  if ( !EntityByQuestIdAndTime )
    return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v28;
  v31 = EntityByQuestIdAndTime;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !CampaignTextListByEventQuestMaster )
    goto LABEL_25;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)CampaignTextListByEventQuestMaster,
          &entity,
          v31->fields.eventId,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v28;
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)entity;
  if ( !entity )
    goto LABEL_25;
  if ( LODWORD(entity[1].monitor) != 25 )
    return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v28;
  endedAt = v31->fields.endedAt;
  p_endedAt = (Il2CppObject *)&v31->fields.endedAt;
  v34 = (int64_t *)(endedAt <= 0 ? &entity[6] : p_endedAt);
  v35 = *v34;
  EventName = EventEntity__getEventName((EventEntity_o *)entity, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_13279/*"TIME_REST_STRING"*/, 0LL);
  v38 = System_String__Concat_61388660(
          EventName,
          (System_String_o *)StringLiteral_117/*" "*/,
          v37,
          (System_String_o *)StringLiteral_24883/*"{0}"*/,
          0LL);
  v41 = (QuestBoardInformaionText_o *)sub_1B64314(QuestBoardInformaionText_TypeInfo, v39, v40);
  v53.fields.r = 0.0;
  v53.fields.g = 0.0;
  v53.fields.b = 0.0;
  v53.fields.a = 0.0;
  v52.fields.x = 0.0;
  v52.fields.y = 0.0;
  v52.fields.z = 0.0;
  v42 = (Il2CppObject *)v41;
  QuestBoardInformaionText___ctor(v41, v38, v35, 0, 0, v53, -1, 0, v52, 1, 0LL, 0LL, 0LL);
  items = v28->fields._items;
  v46 = Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__;
  ++v28->fields._version;
  if ( !items )
LABEL_25:
    sub_1B64324(CampaignTextListByEventQuestMaster);
  size = v28->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v28,
      v42,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v48 = &items->obj.klass + size;
    v28->fields._size = size + 1;
    v48[4] = (Il2CppClass *)v42;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v48 + 4), (int32_t)v42, v43, v44);
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
  DataManager_o *v25; // x26
  Il2CppObject *MasterData_object; // x25
  int64_t mListCreatedTime; // x29
  QuestEntity_o *v28; // x27
  __int64 v29; // x1
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

  if ( (byte_49F9C38 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventCampaignMaster___, *(_QWORD *)&questId);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventQuestMaster___, v16);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, v17);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__, v20);
    sub_1B640C8(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo, v21);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_49F9C38 = 1;
  }
  v23 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo,
                                                       *(_QWORD *)&questId,
                                                       *(_QWORD *)&phase);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  v43 = isQuestNoneCleared;
  v25 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = DataManager__GetMasterData_object_(
               v25,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               questId,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !questBoardManager )
    goto LABEL_22;
  mListCreatedTime = questBoardManager->fields.mListCreatedTime;
  v28 = (QuestEntity_o *)Instance;
  Instance = DataManager__GetMasterData_object_(
               v25,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventQuestMaster___);
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
        sub_1B6432C(Instance, v29);
      v33 = (EventEntity_o *)*((_QWORD *)v31 + (int)v32 + 4);
      if ( !v33 || !MasterData_object )
        break;
      Instance = EventCampaignMaster__getData((EventCampaignMaster_o *)MasterData_object, v33->fields.id, 0LL);
      if ( Instance )
      {
        Instance = ServantStatusQuestBoardDraw__CreateQuestBoardInformationText(
                     this,
                     v28,
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
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
          }
          else
          {
            v40 = &items->obj.klass + size;
            v23->fields._size = size + 1;
            v40[4] = v39;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)v39, v34, v35);
          }
        }
      }
      v30 = *((_DWORD *)v31 + 6);
      if ( (int)++v32 >= v30 )
        return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v23;
    }
LABEL_22:
    sub_1B64324(Instance);
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
  char v18; // w8
  struct MapControl_SpotInfo_o *SpotInfo_k__BackingField; // x8
  Il2CppObject *Master_object; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_object__o *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_object__o *v27; // x20
  Il2CppObject *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  Il2CppObject *v31; // x1
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  __int64 v36; // x1
  MapControl_WarInfo_o *v37; // x20
  __int64 v38; // x8
  __int64 v39; // x23
  __int64 v40; // x8
  int32_t v41; // w19
  int32_t v42; // w22
  int64_t v43; // x21
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_49F9C2E & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestReleaseMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v14);
    sub_1B640C8(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v15);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v16);
    byte_49F9C2E = 1;
  }
  entityList = 0LL;
  memset(&v45, 0, sizeof(v45));
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
    v18 = 0;
    return v18 & 1;
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
        v18 = 1;
        return v18 & 1;
      }
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  v24 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo,
                                                       v22,
                                                       v23);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v24;
  if ( !Master_object )
    goto LABEL_53;
  if ( QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
         (QuestReleaseOverwriteMaster_o *)Master_object,
         &entityList,
         qinf->fields.questId,
         0LL,
         0LL) )
  {
    v27 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                         v25,
                                                         v26);
    System_Collections_Generic_List_object____ctor(
      v27,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    IsQuestReleaseAll = (MapControl_WarInfo_o *)entityList;
    if ( !entityList )
      goto LABEL_53;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v44,
      (System_Collections_Generic_List_object__o *)entityList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    v45 = v44;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v45,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
    {
      if ( !v45.fields._current )
        sub_1B64324(0LL);
      v28 = (Il2CppObject *)QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
                              (QuestReleaseOverwriteEntity_o *)v45.fields._current,
                              0LL);
      v31 = v28;
      if ( !v27 )
        sub_1B64324(v28);
      items = v27->fields._items;
      v33 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
      ++v27->fields._version;
      if ( !items )
        sub_1B64324(v28);
      size = v27->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v27,
          v28,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        v27->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v31;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v31, v29, v30);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v45,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    if ( !v27 )
      goto LABEL_53;
    IsQuestReleaseAll = (MapControl_WarInfo_o *)System_Collections_Generic_List_object___ToArray(
                                                  v27,
                                                  (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    v37 = IsQuestReleaseAll;
    if ( IsQuestReleaseAll )
      goto LABEL_37;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsQuestReleaseAll = (MapControl_WarInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !IsQuestReleaseAll )
LABEL_53:
    sub_1B64324(IsQuestReleaseAll);
  IsQuestReleaseAll = (MapControl_WarInfo_o *)QuestReleaseMaster__getListByQuestID(
                                                (QuestReleaseMaster_o *)IsQuestReleaseAll,
                                                qinf->fields.questId,
                                                0LL);
  v37 = IsQuestReleaseAll;
LABEL_37:
  if ( !v37 )
    goto LABEL_53;
  v38 = *(_QWORD *)&v37->fields.status;
  if ( !v38 )
  {
    v18 = qinf->fields.dispType != 1;
    return v18 & 1;
  }
  if ( (int)v38 < 1 )
    goto LABEL_8;
  v39 = 0LL;
  do
  {
    if ( (unsigned int)v39 >= (unsigned int)v38 )
      sub_1B6432C(IsQuestReleaseAll, v36);
    v40 = *((_QWORD *)&v37->fields.mapInfoList + v39);
    if ( !v40 )
      goto LABEL_53;
    v42 = *(_DWORD *)(v40 + 20);
    v41 = *(_DWORD *)(v40 + 24);
    v43 = *(_QWORD *)(v40 + 32);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestReleaseAll = (MapControl_WarInfo_o *)CondType__IsOpen(v42, v41, v43, 0, 0LL);
    if ( ((unsigned __int8)IsQuestReleaseAll & 1) == 0 )
      break;
    LODWORD(v38) = v37->fields.status;
    ++v39;
  }
  while ( (int)v39 < (int)v38 );
  v18 = (unsigned __int8)IsQuestReleaseAll ^ 1;
  return v18 & 1;
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

  if ( (byte_49F9C36 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, method);
    byte_49F9C36 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  return !mInfoTextList || mInfoTextList->fields._size == 0;
}


bool __fastcall ServantStatusQuestBoardDraw__IsMultiInfoText(
        ServantStatusQuestBoardDraw_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x8

  if ( (byte_49F9C35 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, method);
    byte_49F9C35 = 1;
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
  bool HasFlag; // w0
  bool v9; // w21
  QuestRestrictionInfoEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49F9C3A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_QuestRestrictionInfoMaster___, questEntity);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    byte_49F9C3A = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
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
        return v9 & ~QuestEntity__HasFlag_39149148(questEntity, 2LL, phase, 0LL) & 1;
      }
LABEL_17:
      sub_1B64324(Master_object);
    }
  }
  else if ( !QuestEntity__HasFlag_39149148(questEntity, 0x80000LL, phase, 0LL) )
  {
    HasFlag = QuestEntity__HasFlag_39149148(questEntity, 0x100000LL, phase, 0LL);
    goto LABEL_15;
  }
  v9 = 0;
  return v9 & ~QuestEntity__HasFlag_39149148(questEntity, 2LL, phase, 0LL) & 1;
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
  int32_t questId; // w8
  UnityEngine_GameObject_o *v8; // x19
  Il2CppObject *v9; // x0
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49F9C3B & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&Method_ServantStatusQuestBoardDraw_OnClick__, v4);
    sub_1B640C8(&StringLiteral_9823/*"OnClickServantQuest"*/, v5);
    byte_49F9C3B = 1;
  }
  inputMessageObject = (UnityEngine_Object_o *)this->fields.inputMessageObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(inputMessageObject, 0LL, 0LL) || (questId = this->fields.questId) == 0 )
  {
    v10 = Method_ServantStatusQuestBoardDraw_OnClick__;
    if ( (*((_BYTE *)Method_ServantStatusQuestBoardDraw_OnClick__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1B640E0(Method_ServantStatusQuestBoardDraw_OnClick__);
    v11 = (System_Reflection_MethodBase_o *)sub_1B640AC(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0LL);
  }
  else
  {
    v8 = this->fields.inputMessageObject;
    v12 = questId;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
    if ( !v8 )
      sub_1B64324(v9);
    UnityEngine_GameObject__SendMessage_69109108(v8, (System_String_o *)StringLiteral_9823/*"OnClickServantQuest"*/, v9, 0LL);
  }
}


void __fastcall ServantStatusQuestBoardDraw__ResetInfoTextList(
        ServantStatusQuestBoardDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v6; // x8
  ServantStatusBattleListViewItem_o *p_mInfoTextList; // x19
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // t1
  int32_t size; // w2
  int v10; // w9
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49F9C31 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Clear__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo, v5);
    byte_49F9C31 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  p_mInfoTextList = (ServantStatusBattleListViewItem_o *)&this->fields.mInfoTextList;
  v6 = mInfoTextList;
  if ( mInfoTextList )
  {
    size = v6->fields._size;
    v10 = v6->fields._version + 1;
    v6->fields._size = 0;
    v6->fields._version = v10;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0LL);
  }
  else
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo,
                                                         method,
                                                         v2);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
    p_mInfoTextList->klass = (ServantStatusBattleListViewItem_c *)v11;
    sub_1B6406C(p_mInfoTextList, (int32_t)v11, v12, v13);
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
  System_String_o *monitor; // x20
  bool v31; // w25
  int klass_high; // w24
  Il2CppObject *PrioredName; // x0
  System_String_o *v34; // x0
  int32_t targetId; // w26
  System_String_o *v36; // x21
  int32_t WarID_ByQuestID; // w26
  Il2CppObject *v38; // x0
  int64_t OpenedAt; // x26
  System_Object_array *v40; // x26
  __int64 v41; // x1
  int32_t v42; // w2
  int32_t v43; // w3
  Il2CppObject *v44; // x27
  int32_t v45; // w2
  int32_t v46; // w3
  Il2CppObject *v47; // x27
  int32_t v48; // w2
  int32_t v49; // w3
  Il2CppObject *v50; // x27
  int32_t v51; // w2
  int32_t v52; // w3
  Il2CppObject *v53; // x27
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v55; // x22
  _BOOL4 v56; // w26
  UILabel_o *mTitleNameLb; // x23
  int32_t v58; // w21
  struct ServantStatusQuestBoardDraw_StaticFields *static_fields; // x8
  __int64 v60; // x9
  int32_t v61; // w23
  int32_t leftIndent; // w25
  UILabel_o *mCondChangeMessage; // x19
  float v64; // s8
  float ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X; // s9
  float v66; // s1
  float v67; // s0
  int v68; // s2
  float v69; // s9
  float v70; // s0
  float v71; // s1
  float v72; // s0
  int v73; // s2
  float v74; // s1
  int v75; // s2
  UIWidget_o *mOverwriteAdvanceNoticeLb; // x24
  const MethodInfo *v77; // x4
  const MethodInfo *v78; // x4
  System_String_o *overlayClosedMessage; // x20
  UILabel_o *v80; // x21
  float v81; // s8
  UnityEngine_Object_o *mOverwriteAdvanceNoticeArrowObj; // x20
  __int64 v83; // x0
  char v84; // [xsp+8h] [xbp-98h]
  int32_t Minute; // [xsp+Ch] [xbp-94h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-90h] BYREF
  int32_t Day; // [xsp+14h] [xbp-8Ch] BYREF
  int64_t value; // [xsp+18h] [xbp-88h] BYREF
  uint64_t dateData; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-78h] BYREF
  System_DateTime_o v91; // 0:x0.8
  System_DateTime_o v92; // 0:x0.8
  System_DateTime_o v93; // 0:x0.8
  System_DateTime_o v94; // 0:x0.8
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F9C33 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ClosedMessageMaster___, *(_QWORD *)&questReleaseClosedID);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v13);
    sub_1B640C8(&Method_DataManager_GetMaster_WarMaster___, v14);
    sub_1B640C8(&DataManager_TypeInfo, v15);
    sub_1B640C8(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v16);
    sub_1B640C8(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v17);
    sub_1B640C8(&System_DateTime_TypeInfo, v18);
    sub_1B640C8(&int_TypeInfo, v19);
    sub_1B640C8(&long_TypeInfo, v20);
    sub_1B640C8(&LocalizationManager_TypeInfo, v21);
    sub_1B640C8(&NetworkManager_TypeInfo, v22);
    sub_1B640C8(&object___TypeInfo, v23);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v24);
    sub_1B640C8(&ServantStatusQuestBoardDraw_TypeInfo, v25);
    sub_1B640C8(&Method_SingletonTemplate_QuestTree__get_Instance__, v26);
    sub_1B640C8(&StringLiteral_14738/*"UNKNOWN_QUEST_NAME"*/, v27);
    sub_1B640C8(&StringLiteral_1/*""*/, v28);
    byte_49F9C33 = 1;
  }
  dateData = 0LL;
  entity = 0LL;
  if ( questReleaseClosedID < 1 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ClosedMessageMaster___);
  if ( !Master_object )
    goto LABEL_116;
  monitor = (System_String_o *)StringLiteral_1/*""*/;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         questReleaseClosedID,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__) )
  {
    Master_object = (__int64)entity;
    if ( !entity )
      goto LABEL_116;
    monitor = (System_String_o *)entity[1].monitor;
    Master_object = ClosedMessageEntity__IsChangeDispClosedMessage((ClosedMessageEntity_o *)entity, 0LL);
    if ( !entity )
      goto LABEL_116;
    v31 = Master_object;
    Master_object = ClosedMessageEntity__IsChangeDispPositionLeft((ClosedMessageEntity_o *)entity, 0LL);
    if ( !entity )
      goto LABEL_116;
    klass_high = HIDWORD(entity[2].klass);
  }
  else
  {
    klass_high = 0;
    Master_object = 0LL;
    v31 = 0;
  }
  if ( !questReleaseEntity )
    goto LABEL_116;
  v84 = Master_object;
  switch ( questReleaseEntity->fields.type )
  {
    case 1:
      targetId = questReleaseEntity->fields.targetId;
      v36 = (System_String_o *)StringLiteral_1/*""*/;
      Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Master_object )
        goto LABEL_116;
      WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Master_object, targetId, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !Master_object )
        goto LABEL_116;
      v38 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              WarID_ByQuestID,
              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( v38 )
      {
        PrioredName = (Il2CppObject *)WarEntity__GetPrioredName((WarEntity_o *)v38, 0LL);
LABEL_16:
        v34 = System_String__Format(monitor, PrioredName, 0LL);
LABEL_42:
        monitor = v34;
      }
      else
      {
        monitor = v36;
      }
LABEL_43:
      if ( warEntity != 0LL && !v31 )
        v31 = WarEntity__IsChangeDispClosedMessage(warEntity, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
      if ( !Master_object )
        goto LABEL_116;
      EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                                 (QuestReleaseOverwriteMaster_o *)Master_object,
                                 this->fields.questId,
                                 checkTime,
                                 0LL);
      v55 = EntityByQuestIdAndTime;
      if ( !EntityByQuestIdAndTime )
      {
        v56 = 0;
        if ( v31 )
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
              if ( !v56 )
                return;
              Master_object = (__int64)this->fields.mCondObject;
              if ( Master_object )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
                if ( v55 )
                {
                  Master_object = (__int64)this->fields.mCondChangeMessage;
                  if ( Master_object )
                  {
                    UILabel__set_text((UILabel_o *)Master_object, v55->fields.overlayClosedMessage, 0LL);
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
      v56 = !System_String__IsNullOrEmpty(EntityByQuestIdAndTime->fields.overlayClosedMessage, 0LL);
      if ( !v31 )
        goto LABEL_62;
LABEL_50:
      Master_object = (__int64)this->fields.mAdvanceNoticeObj;
      if ( !Master_object )
        goto LABEL_116;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
      mTitleNameLb = this->fields.mTitleNameLb;
      v58 = klass_high;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14738/*"UNKNOWN_QUEST_NAME"*/, 0LL);
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
      v60 = 12LL;
      if ( !v56 )
        v60 = 8LL;
      v61 = *(int32_t *)((char *)&static_fields->TITLE_LABEL_BASE_WIDTH + v60);
      if ( v56 )
      {
        if ( !v55 )
          goto LABEL_116;
        leftIndent = v55->fields.leftIndent;
      }
      else
      {
        leftIndent = 0;
      }
      v64 = (float)klass_high;
      if ( (v84 & 1) != 0 )
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
        v66 = 24.0;
        if ( !v56 )
          v66 = 0.0;
        v68 = 0;
        v67 = ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X + v64;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)Master_object,
          *(UnityEngine_Vector3_o *)(&v66 - 1),
          0LL);
        Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
        if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
          Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
        }
        if ( !this->fields.mOverwriteAdvanceNoticeLb )
          goto LABEL_116;
        v69 = *(float *)(*(_QWORD *)(Master_object + 184) + 16LL);
        UIWidget__set_pivot((UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb, 3, 0LL);
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_116;
        Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
        if ( !Master_object )
          goto LABEL_116;
        v70 = v69 + (float)leftIndent;
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
        v71 = 24.0;
        if ( !v56 )
          v71 = 0.0;
        v73 = 0;
        v72 = v64 * 0.5;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)Master_object,
          *(UnityEngine_Vector3_o *)(&v71 - 1),
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
        v70 = (float)leftIndent * 0.5;
      }
      v74 = -26.0;
      v75 = 0;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)Master_object,
        *(UnityEngine_Vector3_o *)&v70,
        0LL);
      Master_object = (__int64)this->fields.mAdvanceNoticeLb;
      if ( !Master_object )
        goto LABEL_116;
      UIWidget__set_height((UIWidget_o *)Master_object, v61, 0LL);
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
        v61,
        v58,
        v77);
      if ( v56 )
      {
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
        if ( !Master_object )
          goto LABEL_116;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
        if ( !v55 )
          goto LABEL_116;
        overlayClosedMessage = v55->fields.overlayClosedMessage;
        v80 = this->fields.mOverwriteAdvanceNoticeLb;
        if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
        v81 = v64 * 0.5;
        ServantStatusQuestBoardDraw___SetAdvanceNoticeText_g__CalculateLabel_53_0(
          v80,
          overlayClosedMessage,
          v61,
          leftIndent,
          v78);
      }
      else
      {
        v81 = 0.0;
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
            v95.fields.y = 0.0;
            v95.fields.z = 0.0;
            v95.fields.x = v81;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Master_object, v95, 0LL);
            return;
          }
        }
LABEL_116:
        sub_1B64324(Master_object);
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
        goto LABEL_116;
      OpenedAt = QuestEntity__getOpenedAt(questEntity, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      dateData = NetworkManager__getServerDateTime_38078100(OpenedAt, 0LL).fields._dateData;
      v40 = (System_Object_array *)sub_1B64170(object___TypeInfo, 4LL);
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v91.fields._dateData = (uint64_t)&dateData;
      LODWORD(value) = System_DateTime__get_Month(v91, 0LL);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &value);
      if ( !v40 )
        goto LABEL_116;
      v44 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1B64204(Master_object, v40->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_118;
      }
      if ( !v40->max_length )
        goto LABEL_117;
      v40->m_Items[0] = v44;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)v40->m_Items, (int32_t)v44, v42, v43);
      v92.fields._dateData = (uint64_t)&dateData;
      Day = System_DateTime__get_Day(v92, 0LL);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Day);
      v47 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1B64204(Master_object, v40->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_118;
      }
      if ( v40->max_length <= 1 )
        goto LABEL_117;
      v40->m_Items[1] = v47;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v40->m_Items[1], (int32_t)v47, v45, v46);
      v93.fields._dateData = (uint64_t)&dateData;
      Hour = System_DateTime__get_Hour(v93, 0LL);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Hour);
      v50 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1B64204(Master_object, v40->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_118;
      }
      if ( v40->max_length <= 2 )
        goto LABEL_117;
      v40->m_Items[2] = v50;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v40->m_Items[2], (int32_t)v50, v48, v49);
      v94.fields._dateData = (uint64_t)&dateData;
      Minute = System_DateTime__get_Minute(v94, 0LL);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Minute);
      v53 = (Il2CppObject *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1B64204(Master_object, v40->obj.klass->_1.element_class);
        if ( !Master_object )
        {
LABEL_118:
          v83 = sub_1B64348();
          sub_1B641F0(v83, 0LL);
        }
      }
      if ( v40->max_length <= 3 )
LABEL_117:
        sub_1B6432C(Master_object, v41);
      v40->m_Items[3] = v53;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v40->m_Items[3], (int32_t)v53, v51, v52);
      v34 = System_String__Format_61389904(monitor, v40, 0LL);
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

  if ( (byte_49F9C2F & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&ServantStatusQuestBoardDraw_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_11818/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/, v4);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49F9C2F = 1;
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
  mLineSp = (UIWidget_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11818/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/, 0LL);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mRewardIconInfs, 0, v10, v11);
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
    sub_1B64324(mLineSp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0LL);
  this->fields.inputMessageObject = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.inputMessageObject, 0, v12, v13);
  this->fields.qinf = 0LL;
  p_qinf = &this->fields.qinf;
  *((_DWORD *)p_qinf - 2) = 0;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_qinf, 0, v15, v16);
}


void __fastcall ServantStatusQuestBoardDraw__SetInfoTextAlpha(
        ServantStatusQuestBoardDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x8
  BoardOptionTextWithIconComponent_o *mOptionInfoLb; // x0

  if ( (byte_49F9C35 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, method);
    byte_49F9C35 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList && mInfoTextList->fields._size >= 2 )
  {
    mOptionInfoLb = this->fields.mOptionInfoLb;
    if ( !mOptionInfoLb )
      sub_1B64324(0LL);
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
  int32_t v52; // w2
  int32_t v53; // w3
  bool v54; // w23
  int current; // w29
  int64_t mListCreatedTime; // x27
  QuestEntity_o *Mine; // x25
  const MethodInfo *v58; // x1
  int v59; // w24
  int32_t v60; // w2
  int32_t v61; // w3
  int v62; // w23
  const MethodInfo *v63; // x1
  int32_t id; // w8
  int32_t warId; // w21
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v67; // x21
  bool v68; // w8
  ServantLimitImageMaster_o *v69; // x28
  _BOOL4 IsLimitCountSealQuest; // w27
  int32_t closedMessageId; // w8
  Il2CppObject *v72; // x26
  bool HasStatus; // w26
  char v74; // w28
  char v75; // w23
  float v76; // s1
  float v77; // s0
  int32_t v78; // w2
  int32_t v79; // w3
  struct UISprite_o *mcBaseP; // x8
  struct UIAtlas_o *mAtlas; // x1
  UISprite_o *v82; // x26
  __int64 v83; // x1
  __int64 v84; // x2
  System_Action_o *v85; // x26
  _BOOL4 v86; // w25
  QuestEntity_o *v87; // x25
  WarEntity_o *v88; // x29
  char v89; // w21
  char v90; // w23
  UISprite_o *mTitleSp; // x28
  int v92; // w24
  __int64 v93; // x9
  __int64 v94; // x1
  __int64 v95; // x2
  System_Action_o *v96; // x26
  const MethodInfo *v97; // x6
  char v98; // w29
  char v99; // w23
  UILabel_o *v100; // x21
  System_String_o **v101; // x8
  LocalizationManager_c *v102; // x0
  System_String_o **v103; // x9
  System_String_o *v104; // x25
  struct UILabel_o *mTitleNameLb; // x21
  System_String_o *v106; // x1
  System_String_o *v107; // x21
  Il2CppObject *v108; // x25
  Il2CppObject *BattleName; // x0
  int32_t v110; // w21
  int32_t TITLE_LABEL_BASE_WIDTH; // w24
  __int64 v112; // x1
  bool v113; // cc
  UnityEngine_Transform_o *v114; // x21
  struct UILabel_o *v115; // x8
  float y; // s1
  float x; // s0
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  int32_t v120; // w2
  int32_t v121; // w3
  int32_t ServantId; // w21
  ServantEntity_o *v123; // x25
  UILabel_o *mTitleShortcutLb; // x21
  const MethodInfo *v125; // x1
  ServantStatusQuestBoardManager_o *v126; // x24
  __int64 endTime; // x25
  System_Collections_Generic_List_object__o *mInfoTextList; // x21
  System_String_o *v129; // x27
  __int64 v130; // x1
  __int64 v131; // x2
  QuestBoardInformaionText_o *v132; // x0
  Il2CppObject *v133; // x26
  int32_t v134; // w2
  int32_t v135; // w3
  struct System_Object_array *items; // x8
  _QWORD *v137; // x9
  __int64 size; // x10
  Il2CppClass **v139; // x0
  int32_t questPhase; // w24
  int32_t PhaseMax; // w0
  int32_t v142; // w1
  int32_t v143; // w2
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v144; // x21
  int v145; // w8
  int32_t v146; // w9
  bool v147; // w21
  int32_t v148; // w8
  int32_t v149; // w2
  int32_t v150; // w3
  int32_t giftIconId; // w1
  bool v152; // w1
  __int64 v153; // x1
  int32_t v154; // w2
  int32_t v155; // w3
  __int64 v156; // x8
  struct GiftEntity_array *v157; // x22
  int v158; // w9
  int32_t *v159; // x8
  int32_t v160; // w1
  int v161; // w9
  int32_t v162; // w2
  int32_t v163; // w3
  EventCampaignEntity_o *eventCampaignEnt; // [xsp+0h] [xbp-130h]
  int64_t checkTime; // [xsp+28h] [xbp-108h]
  int32_t limitCounta; // [xsp+34h] [xbp-FCh]
  int v167; // [xsp+38h] [xbp-F8h]
  int questReleaseClosedID; // [xsp+3Ch] [xbp-F4h]
  BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // [xsp+40h] [xbp-F0h]
  bool v170; // [xsp+4Ch] [xbp-E4h]
  struct UnityEngine_GameObject_o *v171; // [xsp+50h] [xbp-E0h]
  int32_t QuestType; // [xsp+5Ch] [xbp-D4h]
  ServantStatusQuestBoardManager_o *questBoardManagera; // [xsp+60h] [xbp-D0h]
  _BOOL4 IsClear; // [xsp+6Ch] [xbp-C4h]
  QuestEntity_o *v175; // [xsp+70h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_int__o v176; // [xsp+78h] [xbp-B8h] BYREF
  bool isNotItemConsume; // [xsp+94h] [xbp-9Ch] BYREF
  int32_t fixedVal[2]; // [xsp+98h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v179; // [xsp+A0h] [xbp-90h] BYREF
  UserQuestEntity_o *entity; // [xsp+C0h] [xbp-70h] BYREF
  QuestReleaseEntity_o *questReleaseNG; // [xsp+C8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v182; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v183; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F9C30 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, qinf);
    sub_1B640C8(&AtlasManager_TypeInfo, v13);
    sub_1B640C8(&CondType_TypeInfo, v14);
    sub_1B640C8(&Method_DataManager_GetMasterData_GiftMaster___, v15);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestGroupMaster___, v17);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v18);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v19);
    sub_1B640C8(&Method_DataManager_GetMaster_UserQuestMaster___, v20);
    sub_1B640C8(&DataManager_TypeInfo, v21);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v24);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v25);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v26);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__, v27);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v28);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v29);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, v30);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, v31);
    sub_1B640C8(&LocalizationManager_TypeInfo, v32);
    sub_1B640C8(&NetworkManager_TypeInfo, v33);
    sub_1B640C8(&QuestBoardInformaionText_TypeInfo, v34);
    sub_1B640C8(&ServantStatusQuestBoardDraw_TypeInfo, v35);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36);
    sub_1B640C8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v37);
    sub_1B640C8(&Method_SingletonTemplate_QuestTree__get_Instance__, v38);
    sub_1B640C8(&Method_ServantStatusQuestBoardDraw___c__DisplayClass47_0__SetItem_b__0__, v39);
    sub_1B640C8(&Method_ServantStatusQuestBoardDraw___c__DisplayClass47_0__SetItem_b__1__, v40);
    sub_1B640C8(&ServantStatusQuestBoardDraw___c__DisplayClass47_0_TypeInfo, v41);
    sub_1B640C8(&StringLiteral_13277/*"TIME_REST_QUEST_BOARD_QUEST"*/, v42);
    sub_1B640C8(&StringLiteral_24883/*"{0}"*/, v43);
    sub_1B640C8(&StringLiteral_11885/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE2"*/, v44);
    sub_1B640C8(&StringLiteral_11887/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT2"*/, v45);
    sub_1B640C8(&StringLiteral_11886/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/, v46);
    sub_1B640C8(&StringLiteral_1/*""*/, v47);
    sub_1B640C8(&StringLiteral_11884/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE"*/, v48);
    sub_1B640C8(&StringLiteral_11841/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/, v49);
    byte_49F9C30 = 1;
  }
  entity = 0LL;
  questReleaseNG = 0LL;
  memset(&v179, 0, sizeof(v179));
  *(_QWORD *)fixedVal = 0LL;
  isNotItemConsume = 0;
  v50 = sub_1B64314(ServantStatusQuestBoardDraw___c__DisplayClass47_0_TypeInfo, qinf, beforeQuestInfo);
  System_Object___ctor((Il2CppObject *)v50, 0LL);
  if ( !v50 )
    goto LABEL_239;
  *(_QWORD *)(v50 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v50 + 16), (int32_t)this, v52, v53);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !qinf )
    goto LABEL_239;
  if ( !Master_object )
    goto LABEL_239;
  v171 = inputMessageObject;
  limitCounta = limitCount;
  questBoardManagera = questBoardManager;
  Master_object = (int64_t)QuestGroupMaster__GetInterludeQuestIdList(
                             (QuestGroupMaster_o *)Master_object,
                             qinf->fields.questId,
                             0LL);
  if ( !Master_object )
    goto LABEL_239;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v176,
    (System_Collections_Generic_List_int__o *)Master_object,
    (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v179 = v176;
  while ( 1 )
  {
    v54 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v179,
            (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v54 )
      break;
    current = v179.fields._current;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsQuestClear_37285996(current, -1, 0, 0LL) )
      goto LABEL_16;
  }
  current = 0;
LABEL_16:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v179,
    (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( !questBoardManager )
    goto LABEL_239;
  mListCreatedTime = questBoardManager->fields.mListCreatedTime;
  Mine = MapControl_QuestInfo__GetMine(qinf, 0LL);
  QuestType = MapControl_QuestInfo__GetQuestType(qinf, 0LL);
  v59 = v54 || MapControl_QuestInfo__IsClear(qinf, 0LL);
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  Master_object = ServantStatusQuestBoardDraw__IsClose(qinf, v58);
  v62 = Master_object;
  if ( beforeQuestInfo )
  {
    IsClear = MapControl_QuestInfo__IsClear(beforeQuestInfo, 0LL);
    if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    Master_object = ServantStatusQuestBoardDraw__IsClose(beforeQuestInfo, v63);
    v167 = Master_object & 1;
    if ( !Mine )
      goto LABEL_239;
  }
  else
  {
    v167 = 0;
    IsClear = 1;
    if ( !Mine )
      goto LABEL_239;
  }
  id = Mine->fields.id;
  this->fields.qinf = qinf;
  this->fields.questId = id;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.qinf, (int32_t)qinf, v60, v61);
  warId = qinf->fields.warId;
  Master_object = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Master_object )
    goto LABEL_239;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Master_object, warId, 0LL);
  v67 = WarEntityByWarID;
  if ( WarEntityByWarID )
    v68 = !WarEntity__IsFolder(WarEntityByWarID, 0LL);
  else
    v68 = 0;
  *(_BYTE *)(v50 + 40) = v68;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  checkTime = mListCreatedTime;
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_object )
    goto LABEL_239;
  v69 = (ServantLimitImageMaster_o *)Master_object;
  IsLimitCountSealQuest = ServantLimitImageMaster__IsLimitCountSealQuest(
                            (ServantLimitImageMaster_o *)Master_object,
                            this->fields.questId,
                            0LL);
  Master_object = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
  v72 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = NetworkManager__get_UserId(0LL);
  if ( current < 1 )
  {
    if ( !v72 )
      goto LABEL_239;
    current = this->fields.questId;
  }
  else if ( !v72 )
  {
    goto LABEL_239;
  }
  UserQuestMaster__TryGetEntity((UserQuestMaster_o *)v72, &entity, Master_object, current, 0LL);
  if ( entity )
    HasStatus = UserQuestEntity__HasStatus(entity, 4, 0LL);
  else
    HasStatus = 0;
  if ( (IsLimitCountSealQuest & ~v59 & 1) != 0 )
  {
    if ( ServantLimitImageMaster__IsCommonReleaseMultiClear(v69, this->fields.questId, 0LL) )
    {
      v74 = 0;
      HasStatus = 0;
      v75 = 1;
      questReleaseClosedID = 0;
LABEL_56:
      v76 = 1.0;
      v77 = 0.5;
      v171 = 0LL;
      goto LABEL_58;
    }
    v59 = 0;
  }
  if ( ((v62 | v59) & 1) != 0 )
  {
    v74 = v62;
    v75 = v59;
    goto LABEL_56;
  }
  v75 = 0;
  v74 = 0;
  v77 = 1.0;
  v76 = 1.0;
LABEL_58:
  *(float *)(v50 + 24) = v77;
  *(float *)(v50 + 28) = v77;
  *(float *)(v50 + 32) = v77;
  *(float *)(v50 + 36) = v76;
  Master_object = (int64_t)this->fields.mTitleObj;
  v170 = HasStatus;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.basePanelAtlas, (int32_t)mAtlas, v78, v79);
  Master_object = (int64_t)ServantStatusQuestBoardDraw_TypeInfo;
  v82 = this->fields.mcBaseP;
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  if ( !v82 )
    goto LABEL_239;
  UISprite__set_spriteName(v82, ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME, 0LL);
  if ( IsLimitCountSealQuest )
  {
    v85 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v83, v84);
    System_Action___ctor(
      v85,
      (Il2CppObject *)v50,
      Method_ServantStatusQuestBoardDraw___c__DisplayClass47_0__SetItem_b__0__,
      0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadEventUI(v85, 1, 0LL);
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
  v175 = Mine;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0LL);
  Master_object = (int64_t)this->fields.mLineSp;
  if ( !Master_object )
    goto LABEL_239;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v50 + 24), 0LL);
  Master_object = (int64_t)this->fields.mTitle2Sp;
  v86 = (v75 & 1) == 0 && IsClear;
  if ( !Master_object )
    goto LABEL_239;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( (v75 & 1) != 0 )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 0, 0LL);
    Master_object = (int64_t)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_239;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 0, 0LL);
    Master_object = (int64_t)this->fields.mLinkObj;
    v87 = v175;
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
    v88 = v67;
    UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v50 + 24), 0LL);
    Master_object = (int64_t)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_239;
    v89 = v75;
    v90 = v74;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0LL);
    Master_object = (int64_t)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_239;
    UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0LL);
    mTitleSp = this->fields.mTitleSp;
    if ( QuestType == 3 )
    {
      Master_object = (int64_t)ServantStatusQuestBoardDraw_TypeInfo;
      v92 = *(unsigned __int8 *)(v50 + 40);
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      if ( !mTitleSp )
        goto LABEL_239;
      v93 = 56LL;
      if ( !v92 )
        v93 = 48LL;
      UISprite__set_spriteName(
        mTitleSp,
        *(System_String_o **)((char *)&ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH + v93),
        0LL);
      if ( IsLimitCountSealQuest )
      {
        v96 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v94, v95);
        System_Action___ctor(
          v96,
          (Il2CppObject *)v50,
          Method_ServantStatusQuestBoardDraw___c__DisplayClass47_0__SetItem_b__1__,
          0LL);
        v74 = v90;
        v75 = v89;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__LoadEventUI(v96, 1, 0LL);
      }
      else
      {
        v74 = v90;
        v75 = v89;
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
      v86 = IsClear;
      v74 = v90;
      v75 = v89;
    }
    Master_object = (int64_t)this->fields.mTitleSp;
    v67 = v88;
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
                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !Master_object )
      goto LABEL_239;
    UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v50 + 24), 0LL);
    IsClear = v86;
    v87 = v175;
  }
  Master_object = (int64_t)this->fields.mClearObj;
  if ( !Master_object )
    goto LABEL_239;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v75 & 1, 0LL);
  Master_object = (int64_t)this->fields.mNoneLb;
  if ( !Master_object )
    goto LABEL_239;
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( v75 & 1 | IsClear )
  {
    if ( questReleaseClosedID < 1 )
    {
      if ( questReleaseNG && questReleaseNG->fields.type == 8 )
      {
        mTitleNameLb = this->fields.mTitleNameLb;
        v98 = v75;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v99 = v74;
        Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11841/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/, 0LL);
        if ( !mTitleNameLb )
          goto LABEL_239;
        v106 = (System_String_o *)Master_object;
        Master_object = (int64_t)mTitleNameLb;
      }
      else
      {
        Master_object = (int64_t)QuestEntity__getQuestName(v87, 0LL);
        if ( !Master_object )
          goto LABEL_239;
        v107 = (System_String_o *)Master_object;
        if ( System_String__Contains((System_String_o *)Master_object, (System_String_o *)StringLiteral_24883/*"{0}"*/, 0LL) )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v108 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
          Master_object = QuestEntity__getServantId(v175, 0LL);
          if ( !v108 )
            goto LABEL_239;
          v98 = v75;
          Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)v108,
                                     Master_object,
                                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Master_object )
            goto LABEL_239;
          v99 = v74;
          BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Master_object, 0, -1, 0LL);
          v87 = v175;
          v107 = System_String__Format(v107, BattleName, 0LL);
        }
        else
        {
          v98 = v75;
          v99 = v74;
        }
        Master_object = (int64_t)this->fields.mTitleNameLb;
        if ( !Master_object )
          goto LABEL_239;
        v106 = v107;
      }
      UILabel__set_text((UILabel_o *)Master_object, v106, 0LL);
    }
    else
    {
      v98 = v75;
      v99 = v74;
      ServantStatusQuestBoardDraw__SetAdvanceNoticeText(
        this,
        questReleaseClosedID,
        v67,
        v87,
        questReleaseNG,
        checkTime,
        v97);
    }
  }
  else
  {
    v100 = this->fields.mTitleNameLb;
    v98 = v75;
    if ( QuestType == 3 )
    {
      v101 = (System_String_o **)&StringLiteral_11884/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE"*/;
      v102 = LocalizationManager_TypeInfo;
      v103 = (System_String_o **)&StringLiteral_11885/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE2"*/;
    }
    else
    {
      v101 = (System_String_o **)&StringLiteral_11886/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/;
      v102 = LocalizationManager_TypeInfo;
      v103 = (System_String_o **)&StringLiteral_11887/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT2"*/;
    }
    if ( v167 )
      v101 = v103;
    v104 = *v101;
    if ( !v102->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v102);
    v99 = v74;
    Master_object = (int64_t)LocalizationManager__Get(v104, 0LL);
    if ( !v100 )
      goto LABEL_239;
    UILabel__set_text(v100, (System_String_o *)Master_object, 0LL);
    v87 = v175;
  }
  Master_object = (int64_t)this->fields.mTitleNameLb;
  if ( !Master_object )
    goto LABEL_239;
  v110 = *(_DWORD *)(Master_object + 168);
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    Master_object = (int64_t)this->fields.mTitleNameLb;
    if ( !Master_object )
      goto LABEL_239;
  }
  TITLE_LABEL_BASE_WIDTH = ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH;
  Master_object = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
  v113 = v110 <= TITLE_LABEL_BASE_WIDTH;
  v114 = (UnityEngine_Transform_o *)Master_object;
  if ( v113 )
  {
    if ( !byte_49F7116 )
    {
      Master_object = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v112);
      byte_49F7116 = 1;
    }
    if ( !v114 )
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
    v115 = this->fields.mTitleNameLb;
    if ( !v115 || !v114 )
      goto LABEL_239;
    y = 1.0;
    x = (float)ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH / (float)v115->fields.mWidth;
    z = 1.0;
  }
  UnityEngine_Transform__set_localScale(v114, *(UnityEngine_Vector3_o *)&x, 0LL);
  Master_object = (int64_t)this->fields.mTitleNameLb;
  if ( !Master_object )
    goto LABEL_239;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v50 + 24), 0LL);
  this->fields.inputMessageObject = v171;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.inputMessageObject, (int32_t)v171, v120, v121);
  if ( QuestType == 3 )
  {
    ServantId = QuestEntity__getServantId(v87, 0LL);
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_239;
    Master_object = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Master_object )
      goto LABEL_239;
    Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                               ServantId,
                               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !this->fields.mTitleShortcutSp )
      goto LABEL_239;
    v123 = (ServantEntity_o *)Master_object;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mTitleShortcutSp, 0, 0LL);
    mTitleShortcutLb = this->fields.mTitleShortcutLb;
    if ( v123 )
    {
      Master_object = (int64_t)ServantEntity__getName(v123, limitCounta, -1, 0LL);
      if ( !mTitleShortcutLb )
        goto LABEL_239;
      UILabel__set_text(mTitleShortcutLb, (System_String_o *)Master_object, 0LL);
      Master_object = (int64_t)this->fields.mTitleShortcutLb;
      v87 = v175;
      if ( !Master_object )
        goto LABEL_239;
      UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v50 + 24), 0LL);
    }
    else
    {
      if ( !mTitleShortcutLb )
        goto LABEL_239;
      UILabel__set_text(this->fields.mTitleShortcutLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      v87 = v175;
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
  ServantStatusQuestBoardDraw__ResetInfoTextList(this, v125);
  if ( (v98 & 1) != 0 )
  {
    v126 = questBoardManagera;
LABEL_189:
    v147 = 0;
    goto LABEL_190;
  }
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  isNotItemConsume = 0;
  endTime = qinf->fields.endTime;
  if ( endTime >= 1 && !QuestEntity__HasFlag(v175, 32LL, 0LL) )
  {
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v129 = LocalizationManager__Get((System_String_o *)StringLiteral_13277/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
    v132 = (QuestBoardInformaionText_o *)sub_1B64314(QuestBoardInformaionText_TypeInfo, v130, v131);
    v183.fields.r = 0.0;
    v183.fields.g = 0.0;
    v183.fields.b = 0.0;
    v183.fields.a = 0.0;
    v182.fields.x = 0.0;
    v182.fields.y = 0.0;
    v182.fields.z = 0.0;
    v133 = (Il2CppObject *)v132;
    QuestBoardInformaionText___ctor(v132, v129, endTime, 0, 0, v183, -1, 0, v182, 1, 0LL, 0LL, 0LL);
    if ( !mInfoTextList )
      goto LABEL_239;
    items = mInfoTextList->fields._items;
    v137 = Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__;
    ++mInfoTextList->fields._version;
    if ( !items )
      goto LABEL_239;
    size = mInfoTextList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        mInfoTextList,
        v133,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
    }
    else
    {
      v139 = &items->obj.klass + size;
      mInfoTextList->fields._size = size + 1;
      v139[4] = (Il2CppClass *)v133;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v139 + 4), (int32_t)v133, v134, v135);
    }
  }
  questPhase = qinf->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(qinf, 0LL);
  if ( questPhase + 1 < PhaseMax )
    v143 = questPhase + 1;
  else
    v143 = PhaseMax;
  v126 = questBoardManagera;
  v144 = this->fields.mInfoTextList;
  Master_object = (int64_t)ServantStatusQuestBoardDraw__GetCampaignText(
                             this,
                             v142,
                             v143,
                             0,
                             questBoardManagera,
                             &fixedVal[1],
                             fixedVal,
                             &isNotItemConsume,
                             (const MethodInfo *)eventCampaignEnt);
  if ( !v144 )
    goto LABEL_239;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v144,
    (System_Collections_Generic_IEnumerable_T__o *)Master_object,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
  Master_object = (int64_t)this->fields.mInfoTextList;
  v87 = v175;
  if ( !Master_object )
    goto LABEL_239;
  v145 = *(_DWORD *)(Master_object + 24);
  if ( v145 < 1 )
    goto LABEL_189;
  Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)Master_object,
                             questBoardManagera->fields.mAlphaAnimCnt % v145,
                             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__);
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
  v146 = fixedVal[1];
  v147 = 1;
  qinf->fields.isNotItemConsume = isNotItemConsume;
  v148 = fixedVal[0];
  qinf->fields.costCalcVal = v146;
  qinf->fields._fixedCostVal_k__BackingField = v148;
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v147, 0LL);
  Master_object = (int64_t)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_239;
  Master_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_239;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v147, 0LL);
  this->fields.mRewardIconInfs = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mRewardIconInfs, 0, v149, v150);
  Master_object = (int64_t)this->fields.mRewardIcon;
  if ( !Master_object )
    goto LABEL_239;
  Master_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_239;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  if ( (v99 & 1) != 0 && QuestEntity__HasFlag(v87, 4096LL, 0LL) )
  {
    Master_object = (int64_t)this->fields.mRewardIcon;
    if ( !Master_object )
      goto LABEL_239;
    giftIconId = 99;
LABEL_204:
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)Master_object, giftIconId, 0LL);
    Master_object = (int64_t)this->fields.mRewardIcon;
    if ( !Master_object )
      goto LABEL_239;
    Master_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
    if ( !Master_object )
      goto LABEL_239;
    v152 = 1;
    goto LABEL_207;
  }
  giftIconId = v87->fields.giftIconId;
  if ( giftIconId >= 1 )
  {
    Master_object = (int64_t)this->fields.mRewardIcon;
    if ( !Master_object )
      goto LABEL_239;
    goto LABEL_204;
  }
  if ( v87->fields.giftId >= 1 )
  {
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_239;
    Master_object = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !Master_object )
      goto LABEL_239;
    Master_object = (int64_t)GiftMaster__GetGiftListById((GiftMaster_o *)Master_object, v87->fields.giftId, 0LL);
    if ( !Master_object )
      goto LABEL_239;
    v156 = *(_QWORD *)(Master_object + 24);
    v157 = (struct GiftEntity_array *)Master_object;
    if ( !v156 )
      goto LABEL_238;
    v158 = v126->fields.mAlphaAnimCnt % (int)v156;
    if ( v158 >= (unsigned int)v156 )
      sub_1B6432C(Master_object, v153);
    v159 = *(int32_t **)(Master_object + 8LL * v158 + 32);
    if ( v159 )
    {
      v160 = v159[11];
      Master_object = (int64_t)this->fields.mRewardIcon;
      v161 = v159[7];
      if ( v160 < 1 )
      {
        if ( !Master_object )
          goto LABEL_239;
        v163 = v161 <= 1 ? -1 : v159[7];
        ItemIconComponent__SetGift_37829292((ItemIconComponent_o *)Master_object, v159[5], v159[6], v163, 0, 0LL);
      }
      else
      {
        if ( !Master_object )
          goto LABEL_239;
        v162 = v161 <= 1 ? -1 : v159[7];
        ItemIconComponent__SetItemImage_37831688((ItemIconComponent_o *)Master_object, v160, v162, 0LL);
      }
      Master_object = (int64_t)this->fields.mRewardIcon;
      if ( Master_object )
      {
        Master_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
        if ( Master_object )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
LABEL_238:
          this->fields.mRewardIconInfs = v157;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mRewardIconInfs, (int32_t)v157, v154, v155);
          goto LABEL_208;
        }
      }
    }
LABEL_239:
    sub_1B64324(Master_object);
  }
  Master_object = (int64_t)this->fields.mRewardObj;
  if ( !Master_object )
    goto LABEL_239;
  v152 = 0;
LABEL_207:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v152, 0LL);
LABEL_208:
  Master_object = (int64_t)this->fields.mRewardObj;
  if ( !Master_object )
    goto LABEL_239;
  Master_object = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Master_object,
                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v98 & !v170 & 1, 0LL);
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
      sub_1B64324(0LL);
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

  if ( (byte_49F9C32 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, qinf);
    byte_49F9C32 = 1;
  }
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !mInfoTextList
    || (mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       mInfoTextList,
                                                                       strIndex,
                                                                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__)) == 0LL )
  {
    sub_1B64324(mInfoTextList);
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
    sub_1B64324(this);
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
  if ( (byte_49F9C3D & 1) == 0 )
  {
    label = (UILabel_o *)sub_1B640C8(&ServantStatusQuestBoardDraw_TypeInfo, message);
    byte_49F9C3D = 1;
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
    sub_1B64324(label);
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
        sub_1B6432C(this, boardMessageData);
      this = (ServantStatusQuestBoardDraw_o *)boardMessageData->m_Items[v5];
      if ( !this )
        break;
      if ( HIDWORD(this->fields.m_CancellationTokenSource) == 4 && LODWORD(this->fields.mcBaseP) == eventId )
        return (BoardMessageEntity_o *)this;
      if ( max_length == ++v5 )
        return 0LL;
    }
LABEL_12:
    sub_1B64324(this);
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
  struct ServantStatusQuestBoardDraw_o *v7; // x8
  UnityEngine_Object_o *mcBaseP; // x20
  struct ServantStatusQuestBoardDraw_o *v9; // x8
  UISprite_o *v10; // x20
  ServantStatusQuestBoardDraw_c *v11; // x0
  System_String_o *BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME; // x21
  struct ServantStatusQuestBoardDraw_o *v13; // x9
  char v14; // w8
  struct ServantStatusQuestBoardDraw_o *v15; // x8
  UISprite_o *v16; // x20
  struct ServantStatusQuestBoardDraw_o *v17; // x8
  struct ServantStatusQuestBoardDraw_o *v18; // x8

  if ( (byte_49F9C3E & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&ServantStatusQuestBoardDraw_TypeInfo, v4);
    byte_49F9C3E = 1;
  }
  _4__this = (UnityEngine_Object_o *)this->fields.__4__this;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (UISprite_o *)UnityEngine_Object__op_Equality(_4__this, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    v7 = this->fields.__4__this;
    if ( v7 )
    {
      mcBaseP = (UnityEngine_Object_o *)v7->fields.mcBaseP;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v6 = (UISprite_o *)UnityEngine_Object__op_Equality(mcBaseP, 0LL, 0LL);
      if ( ((unsigned __int8)v6 & 1) != 0 )
        return;
      v9 = this->fields.__4__this;
      if ( v9 )
      {
        v10 = v9->fields.mcBaseP;
        v11 = ServantStatusQuestBoardDraw_TypeInfo;
        if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
          v11 = ServantStatusQuestBoardDraw_TypeInfo;
        }
        BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME = v11->static_fields->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        v6 = (UISprite_o *)AtlasManager__SetEventUI(v10, BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME, 0LL);
        v13 = this->fields.__4__this;
        if ( v13 )
        {
          v14 = (char)v6;
          v6 = v13->fields.mcBaseP;
          if ( (v14 & 1) != 0 )
          {
            if ( !v6 )
              goto LABEL_30;
          }
          else
          {
            if ( !v6 )
              goto LABEL_30;
            UISprite__set_atlas(v6, v13->fields.basePanelAtlas, 0LL);
            v15 = this->fields.__4__this;
            if ( !v15 )
              goto LABEL_30;
            v6 = (UISprite_o *)ServantStatusQuestBoardDraw_TypeInfo;
            v16 = v15->fields.mcBaseP;
            if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
            if ( !v16 )
              goto LABEL_30;
            UISprite__set_spriteName(
              v16,
              ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME,
              0LL);
            v17 = this->fields.__4__this;
            if ( !v17 )
              goto LABEL_30;
            v6 = v17->fields.mcBaseP;
            if ( !v6 )
              goto LABEL_30;
          }
          v6 = (UISprite_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
                               v6,
                               v6->klass->vtable._34_get_minWidth.methodPtr);
          v18 = this->fields.__4__this;
          if ( v18 )
          {
            v6 = v18->fields.mcBaseP;
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
    sub_1B64324(v6);
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
  struct ServantStatusQuestBoardDraw_o *v7; // x8
  UnityEngine_Object_o *mTitleSp; // x20
  struct ServantStatusQuestBoardDraw_o *v9; // x8
  UISprite_o *v10; // x20
  ServantStatusQuestBoardDraw_c *v11; // x0
  System_String_o *TITLE_SPRITE_NAME_LIMIT_UNSEAL; // x21
  struct ServantStatusQuestBoardDraw_o *v13; // x9
  char v14; // w8
  struct ServantStatusQuestBoardDraw_o *v15; // x8
  UISprite_o *v16; // x20
  _BOOL4 isMap; // w21
  __int64 v18; // x9
  struct ServantStatusQuestBoardDraw_o *v19; // x8
  struct ServantStatusQuestBoardDraw_o *v20; // x8

  if ( (byte_49F9C3F & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&ServantStatusQuestBoardDraw_TypeInfo, v4);
    byte_49F9C3F = 1;
  }
  _4__this = (UnityEngine_Object_o *)this->fields.__4__this;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (UISprite_o *)UnityEngine_Object__op_Equality(_4__this, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    v7 = this->fields.__4__this;
    if ( v7 )
    {
      mTitleSp = (UnityEngine_Object_o *)v7->fields.mTitleSp;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v6 = (UISprite_o *)UnityEngine_Object__op_Equality(mTitleSp, 0LL, 0LL);
      if ( ((unsigned __int8)v6 & 1) != 0 )
        return;
      v9 = this->fields.__4__this;
      if ( v9 )
      {
        v10 = v9->fields.mTitleSp;
        v11 = ServantStatusQuestBoardDraw_TypeInfo;
        if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
          v11 = ServantStatusQuestBoardDraw_TypeInfo;
        }
        TITLE_SPRITE_NAME_LIMIT_UNSEAL = v11->static_fields->TITLE_SPRITE_NAME_LIMIT_UNSEAL;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        v6 = (UISprite_o *)AtlasManager__SetEventUI(v10, TITLE_SPRITE_NAME_LIMIT_UNSEAL, 0LL);
        v13 = this->fields.__4__this;
        if ( v13 )
        {
          v14 = (char)v6;
          v6 = v13->fields.mTitleSp;
          if ( (v14 & 1) != 0 )
          {
            if ( !v6 )
              goto LABEL_32;
          }
          else
          {
            if ( !v6 )
              goto LABEL_32;
            UISprite__set_atlas(v6, v13->fields.basePanelAtlas, 0LL);
            v15 = this->fields.__4__this;
            if ( !v15 )
              goto LABEL_32;
            v6 = (UISprite_o *)ServantStatusQuestBoardDraw_TypeInfo;
            v16 = v15->fields.mTitleSp;
            isMap = this->fields.isMap;
            if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
            if ( !v16 )
              goto LABEL_32;
            v18 = 56LL;
            if ( !isMap )
              v18 = 48LL;
            UISprite__set_spriteName(
              v16,
              *(System_String_o **)((char *)&ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH
                                  + v18),
              0LL);
            v19 = this->fields.__4__this;
            if ( !v19 )
              goto LABEL_32;
            v6 = v19->fields.mTitleSp;
            if ( !v6 )
              goto LABEL_32;
          }
          v6 = (UISprite_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
                               v6,
                               v6->klass->vtable._34_get_minWidth.methodPtr);
          v20 = this->fields.__4__this;
          if ( v20 )
          {
            v6 = v20->fields.mTitleSp;
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
    sub_1B64324(v6);
  }
}