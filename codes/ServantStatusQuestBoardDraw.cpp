void __fastcall ServantStatusQuestBoardDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  struct ServantStatusQuestBoardDraw_StaticFields *static_fields; // x0
  int64_t v23; // x1
  struct ServantStatusQuestBoardDraw_StaticFields *v24; // x0
  int64_t v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x1
  struct ServantStatusQuestBoardDraw_StaticFields *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x1
  struct ServantStatusQuestBoardDraw_StaticFields *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x1
  struct ServantStatusQuestBoardDraw_StaticFields *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x1
  struct ServantStatusQuestBoardDraw_StaticFields *v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t v64; // x1
  struct ServantStatusQuestBoardDraw_StaticFields *v65; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7

  if ( (byte_4B13D07 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusQuestBoardDraw_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_20514/*"img_conductor_03"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_20515/*"img_conductor_04"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_20513/*"img_conductor_02"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_20627/*"img_questboard_1001"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_20512/*"img_conductor_01"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_20516/*"img_conductor_questboard"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_20508/*"img_commonbg"*/, v20, v21);
    byte_4B13D07 = 1;
  }
  static_fields = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->TITLE_LABEL_BASE_WIDTH = xmmword_BD34A0;
  static_fields->ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X = -208.0;
  v23 = StringLiteral_20508/*"img_commonbg"*/;
  static_fields->DARK_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_20508/*"img_commonbg"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->DARK_BOARD_SPRITE_NAME, v23, v2, v3, v4, v5, v6, v7);
  v24 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  *(_QWORD *)&v24->DARK_BOARD_WIDTH = 0x7A000001F0LL;
  v25 = StringLiteral_20516/*"img_conductor_questboard"*/;
  v24->BASE_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_20516/*"img_conductor_questboard"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v24->BASE_BOARD_SPRITE_NAME, v25, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_20513/*"img_conductor_02"*/;
  v33 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v33->TITLE_SPRITE_NAME_INTERLUDE = (struct System_String_o *)StringLiteral_20513/*"img_conductor_02"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v33->TITLE_SPRITE_NAME_INTERLUDE, v32, v34, v35, v36, v37, v38, v39);
  v40 = StringLiteral_20512/*"img_conductor_01"*/;
  v41 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v41->TITLE_SPRITE_NAME_INTERLUDE_MAP = (struct System_String_o *)StringLiteral_20512/*"img_conductor_01"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v41->TITLE_SPRITE_NAME_INTERLUDE_MAP, v40, v42, v43, v44, v45, v46, v47);
  v48 = StringLiteral_20514/*"img_conductor_03"*/;
  v49 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v49->TITLE_SPRITE_NAME_RAINFORCEMENT = (struct System_String_o *)StringLiteral_20514/*"img_conductor_03"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v49->TITLE_SPRITE_NAME_RAINFORCEMENT, v48, v50, v51, v52, v53, v54, v55);
  v56 = StringLiteral_20627/*"img_questboard_1001"*/;
  v57 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v57->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME = (struct System_String_o *)StringLiteral_20627/*"img_questboard_1001"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v57->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME,
    v56,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  v64 = StringLiteral_20515/*"img_conductor_04"*/;
  v65 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v65->TITLE_SPRITE_NAME_LIMIT_UNSEAL = (struct System_String_o *)StringLiteral_20515/*"img_conductor_04"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v65->TITLE_SPRITE_NAME_LIMIT_UNSEAL, v64, v66, v67, v68, v69, v70, v71);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *mInfoTextList; // x0
  int size; // w8
  int v12; // w20
  __int64 v13; // x1
  MapControl_QuestInfo_o *v14; // x1
  int64_t Time; // x3
  const MethodInfo *v16; // x4
  ServantStatusQuestBoardDraw_o *v17; // x0
  int32_t v18; // w2
  __int64 v19; // x1

  if ( (byte_4B13CFF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__,
      qinf,
      questBoardManagerer);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    byte_4B13CFF = 1;
  }
  if ( (byte_4B13D00 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__,
      qinf,
      questBoardManagerer);
    byte_4B13D00 = 1;
  }
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( mInfoTextList )
  {
    size = mInfoTextList->fields._size;
    if ( size >= 2 )
    {
      if ( questBoardManagerer )
      {
        v12 = questBoardManagerer->fields.mAlphaAnimCnt % size;
        mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       mInfoTextList,
                                                                       v12,
                                                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
        if ( mInfoTextList )
        {
          if ( QuestBoardInformationText__ChangeText(
                 (QuestBoardInformationText_o *)mInfoTextList,
                 &this->fields.mOptionInfoLb,
                 0LL) )
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
            Time = NetworkManager__getTime(0LL);
            v17 = this;
            v18 = v12;
LABEL_22:
            ServantStatusQuestBoardDraw__UpdateInfoText(v17, v14, v18, Time, v16);
            return;
          }
          return;
        }
      }
LABEL_24:
      sub_1BCAA3C(mInfoTextList, qinf);
    }
  }
  if ( (byte_4B13D01 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__,
      qinf,
      questBoardManagerer);
    byte_4B13D01 = 1;
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  }
  if ( !mInfoTextList || !mInfoTextList->fields._size )
    return;
  mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 mInfoTextList,
                                                                 0,
                                                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
  if ( !mInfoTextList )
    goto LABEL_24;
  if ( QuestBoardInformationText__ChangeText(
         (QuestBoardInformationText_o *)mInfoTextList,
         &this->fields.mOptionInfoLb,
         0LL) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19);
    Time = NetworkManager__getTime(0LL);
    v17 = this;
    v18 = 0;
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
    sub_1BCAA44(this, questBoardManager);
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
      ItemIconComponent__SetItemImage_38857576((ItemIconComponent_o *)this, (int32_t)questBoardManager, v8, 0LL);
      return;
    }
LABEL_18:
    sub_1BCAA3C(this, questBoardManager);
  }
  if ( !this )
    goto LABEL_18;
  if ( num <= 1 )
    v9 = -1;
  else
    v9 = v6->fields.num;
  ItemIconComponent__SetGift_38855180((ItemIconComponent_o *)this, v6->fields.type, v6->fields.objectId, v9, 0, 0LL);
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
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  int target; // w25
  const MethodInfo *v28; // x3
  QuestBoardInformationText_o *v29; // x27
  struct System_Int32_array *targetIds; // x8
  __int64 v31; // x1
  int32_t consumeType; // w8
  System_String_o *v33; // x20
  Il2CppObject *EventName; // x0
  System_String_o *v35; // x20
  int64_t EndTime; // x19
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B13D04 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestPhaseMaster___, questEntity, eventEnt);
    sub_1BCA7E0(&DataManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&QuestBoardInformationText_TypeInfo, v21, v22);
    sub_1BCA7E0(&StringLiteral_25238/*"{0}"*/, v23, v24);
    this = (ServantStatusQuestBoardDraw_o *)sub_1BCA7E0(&StringLiteral_13501/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, v25, v26);
    byte_4B13D04 = 1;
  }
  entity = 0LL;
  if ( !eventEnt || !eventCampaignEnt )
    goto LABEL_40;
  target = eventCampaignEnt->fields.target;
  this = (ServantStatusQuestBoardDraw_o *)CombineAdjustTarget__isTerminalExposable(target, 0LL);
  v29 = 0LL;
  if ( ((unsigned __int8)this & 1) == 0 )
    return v29;
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
    v29 = 0LL;
    if ( target == 25 || target == 35 )
      return v29;
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
  if ( !ServantStatusQuestBoardDraw__IsValidSupportSelection(this, questEntity, phase, v28) )
    return 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v31);
  this = (ServantStatusQuestBoardDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !questEntity || !this )
LABEL_40:
    sub_1BCAA3C(this, questEntity);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, questEntity);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_13501/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0LL);
  EventName = (Il2CppObject *)EventEntity__getEventName(eventEnt, 0LL);
  v35 = System_String__Format_62415592(v33, EventName, (Il2CppObject *)StringLiteral_25238/*"{0}"*/, 0LL);
  EndTime = EventEntity__GetEndTime(eventEnt, 0, 0LL);
  v29 = (QuestBoardInformationText_o *)sub_1BCAA2C(QuestBoardInformationText_TypeInfo, v37, v38, v39);
  QuestBoardInformationText___ctor(v29, v35, EndTime, 1, 0, 0LL, 0LL);
  return v29;
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
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  System_Collections_Generic_List_object__o *v40; // x19
  System_Collections_Generic_IEnumerable_T__o *CampaignTextListByEventQuestMaster; // x0
  __int64 v42; // x1
  __int64 v43; // x1
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  __int64 v45; // x1
  QuestReleaseOverwriteEntity_o *v46; // x20
  Il2CppObject *p_endedAt; // x20
  __int64 endedAt; // t1
  int64_t *v49; // x8
  int64_t v50; // x20
  __int64 v51; // x1
  System_String_o *EventName; // x21
  System_String_o *v53; // x0
  System_String_o *v54; // x22
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  QuestBoardInformationText_o *v58; // x21
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  struct System_Object_array *items; // x8
  _QWORD *v66; // x9
  __int64 size; // x10
  Il2CppClass **v68; // x0
  const MethodInfo *v70; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4B13D02 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&quest_id, *(_QWORD *)&phase);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v16, v17);
    sub_1BCA7E0(&DataManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__, v26, v27);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo, v28, v29);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v30, v31);
    sub_1BCA7E0(&QuestBoardInformationText_TypeInfo, v32, v33);
    sub_1BCA7E0(&StringLiteral_25238/*"{0}"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_13511/*"TIME_REST_STRING"*/, v38, v39);
    byte_4B13D02 = 1;
  }
  entity = 0LL;
  v40 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestBoardInformationText__TypeInfo,
                                                       *(_QWORD *)&quest_id,
                                                       *(_QWORD *)&phase,
                                                       isQuestNoneCleared);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)ServantStatusQuestBoardDraw__GetCampaignTextListByEventQuestMaster(
                                                                                        this,
                                                                                        this->fields.questId,
                                                                                        phase,
                                                                                        isQuestNoneCleared,
                                                                                        questBoardManager,
                                                                                        costCalcVal,
                                                                                        fixedVal,
                                                                                        isNotItemConsume,
                                                                                        v70);
  if ( !v40 )
    goto LABEL_25;
  System_Collections_Generic_List_object___AddRange(
    v40,
    CampaignTextListByEventQuestMaster,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v43);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  if ( !questBoardManager || !CampaignTextListByEventQuestMaster )
    goto LABEL_25;
  EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                             (QuestReleaseOverwriteMaster_o *)CampaignTextListByEventQuestMaster,
                             this->fields.questId,
                             questBoardManager->fields.mListCreatedTime,
                             0LL);
  if ( !EntityByQuestIdAndTime )
    return (System_Collections_Generic_List_QuestBoardInformationText__o *)v40;
  v46 = EntityByQuestIdAndTime;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v45);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !CampaignTextListByEventQuestMaster )
    goto LABEL_25;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)CampaignTextListByEventQuestMaster,
          &entity,
          v46->fields.eventId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return (System_Collections_Generic_List_QuestBoardInformationText__o *)v40;
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)entity;
  if ( !entity )
    goto LABEL_25;
  if ( LODWORD(entity[1].monitor) != 25 )
    return (System_Collections_Generic_List_QuestBoardInformationText__o *)v40;
  endedAt = v46->fields.endedAt;
  p_endedAt = (Il2CppObject *)&v46->fields.endedAt;
  v49 = (int64_t *)(endedAt <= 0 ? &entity[6] : p_endedAt);
  v50 = *v49;
  EventName = EventEntity__getEventName((EventEntity_o *)entity, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51);
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_13511/*"TIME_REST_STRING"*/, 0LL);
  v54 = System_String__Concat_62414484(
          EventName,
          (System_String_o *)StringLiteral_116/*" "*/,
          v53,
          (System_String_o *)StringLiteral_25238/*"{0}"*/,
          0LL);
  v58 = (QuestBoardInformationText_o *)sub_1BCAA2C(QuestBoardInformationText_TypeInfo, v55, v56, v57);
  QuestBoardInformationText___ctor(v58, v54, v50, 0, 1, 0LL, 0LL);
  items = v40->fields._items;
  v66 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
  ++v40->fields._version;
  if ( !items )
LABEL_25:
    sub_1BCAA3C(CampaignTextListByEventQuestMaster, v42);
  size = v40->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v40,
      (Il2CppObject *)v58,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
  }
  else
  {
    v68 = &items->obj.klass + size;
    v40->fields._size = size + 1;
    v68[4] = (Il2CppClass *)v58;
    sub_1BCA784((PartyOrganizationUtility_o *)(v68 + 4), (int64_t)v58, v59, v60, v61, v62, v63, v64);
  }
  return (System_Collections_Generic_List_QuestBoardInformationText__o *)v40;
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
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_object__o *v30; // x24
  void *Instance; // x0
  __int64 v32; // x1
  DataManager_o *v33; // x26
  Il2CppObject *MasterData_object; // x25
  int64_t mListCreatedTime; // x29
  QuestEntity_o *v36; // x27
  int v37; // w8
  void *v38; // x28
  unsigned int v39; // w19
  EventEntity_o *v40; // x29
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  int64_t v50; // x1
  Il2CppClass **v51; // x0
  const MethodInfo *v53; // [xsp+8h] [xbp-78h]
  bool v54; // [xsp+14h] [xbp-6Ch]
  bool *v55; // [xsp+18h] [xbp-68h]

  if ( (byte_4B13D03 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCampaignMaster___, *(_QWORD *)&questId, *(_QWORD *)&phase);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventQuestMaster___, v16, v17);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v18, v19);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29);
    byte_4B13D03 = 1;
  }
  v30 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestBoardInformationText__TypeInfo,
                                                       *(_QWORD *)&questId,
                                                       *(_QWORD *)&phase,
                                                       isQuestNoneCleared);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  v54 = isQuestNoneCleared;
  v33 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = DataManager__GetMasterData_object_(
               v33,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               questId,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !questBoardManager )
    goto LABEL_22;
  mListCreatedTime = questBoardManager->fields.mListCreatedTime;
  v36 = (QuestEntity_o *)Instance;
  Instance = DataManager__GetMasterData_object_(
               v33,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventQuestMaster___);
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
  v37 = *((_DWORD *)Instance + 6);
  v38 = Instance;
  if ( v37 >= 1 )
  {
    v39 = 0;
    while ( 1 )
    {
      if ( v39 >= v37 )
        sub_1BCAA44(Instance, v32);
      v40 = (EventEntity_o *)*((_QWORD *)v38 + (int)v39 + 4);
      if ( !v40 || !MasterData_object )
        break;
      Instance = EventCampaignMaster__getData((EventCampaignMaster_o *)MasterData_object, v40->fields.id, 0LL);
      if ( Instance )
      {
        Instance = ServantStatusQuestBoardDraw__CreateQuestBoardInformationText(
                     this,
                     v36,
                     v40,
                     (EventCampaignEntity_o *)Instance,
                     phase,
                     v54,
                     costCalcVal,
                     fixedVal,
                     v55,
                     v53);
        if ( Instance )
        {
          if ( !v30 )
            break;
          items = v30->fields._items;
          v48 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
          ++v30->fields._version;
          if ( !items )
            break;
          size = v30->fields._size;
          v50 = (int64_t)Instance;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v30,
              (Il2CppObject *)Instance,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
          }
          else
          {
            v51 = &items->obj.klass + size;
            v30->fields._size = size + 1;
            v51[4] = (Il2CppClass *)v50;
            sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 4), v50, v41, v42, v43, v44, v45, v46);
          }
        }
      }
      v37 = *((_DWORD *)v38 + 6);
      if ( (int)++v39 >= v37 )
        return (System_Collections_Generic_List_QuestBoardInformationText__o *)v30;
    }
LABEL_22:
    sub_1BCAA3C(Instance, v32);
  }
  return (System_Collections_Generic_List_QuestBoardInformationText__o *)v30;
}


bool __fastcall ServantStatusQuestBoardDraw__IsClose(MapControl_QuestInfo_o *qinf, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  MapControl_WarInfo_o *IsQuestReleaseAll; // x0
  __int64 v33; // x1
  char v34; // w8
  struct MapControl_SpotInfo_o *SpotInfo_k__BackingField; // x8
  Il2CppObject *Master_object; // x20
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_Collections_Generic_List_object__o *v41; // x21
  __int64 v42; // x2
  __int64 v43; // x3
  System_Collections_Generic_List_object__o *v44; // x20
  __int64 v45; // x1
  Il2CppObject *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x1
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x0
  MapControl_WarInfo_o *v58; // x20
  __int64 v59; // x8
  __int64 v60; // x23
  __int64 v61; // x8
  int32_t v62; // w19
  int32_t v63; // w22
  int64_t v64; // x21
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4B13CF9 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestReleaseMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v26, v27);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v28, v29);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v30, v31);
    byte_4B13CF9 = 1;
  }
  entityList = 0LL;
  memset(&v66, 0, sizeof(v66));
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  IsQuestReleaseAll = (MapControl_WarInfo_o *)TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL);
  if ( ((unsigned __int8)IsQuestReleaseAll & 1) != 0 )
    goto LABEL_8;
  if ( !qinf )
    goto LABEL_53;
  if ( MapControl_QuestInfo__IsClear(qinf, 0LL) )
  {
LABEL_8:
    v34 = 0;
    return v34 & 1;
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
        v34 = 1;
        return v34 & 1;
      }
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v33);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  v41 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo,
                                                       v38,
                                                       v39,
                                                       v40);
  System_Collections_Generic_List_object____ctor(
    v41,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v41;
  if ( !Master_object )
    goto LABEL_53;
  if ( QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
         (QuestReleaseOverwriteMaster_o *)Master_object,
         &entityList,
         qinf->fields.questId,
         0LL,
         0LL) )
  {
    v44 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                         v33,
                                                         v42,
                                                         v43);
    System_Collections_Generic_List_object____ctor(
      v44,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    IsQuestReleaseAll = (MapControl_WarInfo_o *)entityList;
    if ( !entityList )
      goto LABEL_53;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v65,
      (System_Collections_Generic_List_object__o *)entityList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    v66 = v65;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v66,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
    {
      if ( !v66.fields._current )
        sub_1BCAA3C(0LL, v45);
      v46 = (Il2CppObject *)QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
                              (QuestReleaseOverwriteEntity_o *)v66.fields._current,
                              0LL);
      v53 = (int64_t)v46;
      if ( !v44 )
        sub_1BCAA3C(v46, v46);
      items = v44->fields._items;
      v55 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
      ++v44->fields._version;
      if ( !items )
        sub_1BCAA3C(v46, v46);
      size = v44->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v44,
          v46,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
      }
      else
      {
        v57 = &items->obj.klass + size;
        v44->fields._size = size + 1;
        v57[4] = (Il2CppClass *)v53;
        sub_1BCA784((PartyOrganizationUtility_o *)(v57 + 4), v53, v47, v48, v49, v50, v51, v52);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v66,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    if ( !v44 )
      goto LABEL_53;
    IsQuestReleaseAll = (MapControl_WarInfo_o *)System_Collections_Generic_List_object___ToArray(
                                                  v44,
                                                  (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    v58 = IsQuestReleaseAll;
    if ( IsQuestReleaseAll )
      goto LABEL_37;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v33);
  IsQuestReleaseAll = (MapControl_WarInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !IsQuestReleaseAll )
LABEL_53:
    sub_1BCAA3C(IsQuestReleaseAll, v33);
  IsQuestReleaseAll = (MapControl_WarInfo_o *)QuestReleaseMaster__getListByQuestID(
                                                (QuestReleaseMaster_o *)IsQuestReleaseAll,
                                                qinf->fields.questId,
                                                0LL);
  v58 = IsQuestReleaseAll;
LABEL_37:
  if ( !v58 )
    goto LABEL_53;
  v59 = *(_QWORD *)&v58->fields.status;
  if ( !v59 )
  {
    v34 = qinf->fields.dispType != 1;
    return v34 & 1;
  }
  if ( (int)v59 < 1 )
    goto LABEL_8;
  v60 = 0LL;
  do
  {
    if ( (unsigned int)v60 >= (unsigned int)v59 )
      sub_1BCAA44(IsQuestReleaseAll, v33);
    v61 = *((_QWORD *)&v58->fields.mapInfoList + v60);
    if ( !v61 )
      goto LABEL_53;
    v63 = *(_DWORD *)(v61 + 20);
    v62 = *(_DWORD *)(v61 + 24);
    v64 = *(_QWORD *)(v61 + 32);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v33);
    IsQuestReleaseAll = (MapControl_WarInfo_o *)CondType__IsOpen(v63, v62, v64, 0, 0LL, 0LL);
    if ( ((unsigned __int8)IsQuestReleaseAll & 1) == 0 )
      break;
    LODWORD(v59) = v58->fields.status;
    ++v60;
  }
  while ( (int)v60 < (int)v59 );
  v34 = (unsigned __int8)IsQuestReleaseAll ^ 1;
  return v34 & 1;
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
  __int64 v2; // x2
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8

  if ( (byte_4B13D01 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, method, v2);
    byte_4B13D01 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  return !mInfoTextList || mInfoTextList->fields._size == 0;
}


bool __fastcall ServantStatusQuestBoardDraw__IsMultiInfoText(
        ServantStatusQuestBoardDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8

  if ( (byte_4B13D00 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, method, v2);
    byte_4B13D00 = 1;
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantStatusQuestBoardDraw__IsValidSupportSelection(
        ServantStatusQuestBoardDraw_o *this,
        QuestEntity_o *questEntity,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  QuestRestrictionInfoMaster_o *Master_object; // x0
  __int64 v9; // x1
  bool HasFlag; // w0
  bool v11; // w21
  QuestRestrictionInfoEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B13D05 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestRestrictionInfoMaster___, questEntity, *(_QWORD *)&phase);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    byte_4B13D05 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, questEntity);
  Master_object = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
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
        v11 = !HasFlag;
        return v11 & ~QuestEntity__HasFlag_40199512(questEntity, 2LL, phase, 0LL) & 1;
      }
LABEL_17:
      sub_1BCAA3C(Master_object, v9);
    }
  }
  else if ( !QuestEntity__HasFlag_40199512(questEntity, 0x80000LL, phase, 0LL) )
  {
    HasFlag = QuestEntity__HasFlag_40199512(questEntity, 0x100000LL, phase, 0LL);
    goto LABEL_15;
  }
  v11 = 0;
  return v11 & ~QuestEntity__HasFlag_40199512(questEntity, 2LL, phase, 0LL) & 1;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *inputMessageObject; // x20
  int32_t questId; // w8
  UnityEngine_GameObject_o *v12; // x19
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B13D06 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ServantStatusQuestBoardDraw_OnClick__, v6, v7);
    sub_1BCA7E0(&StringLiteral_10001/*"OnClickServantQuest"*/, v8, v9);
    byte_4B13D06 = 1;
  }
  inputMessageObject = (UnityEngine_Object_o *)this->fields.inputMessageObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(inputMessageObject, 0LL, 0LL) || (questId = this->fields.questId) == 0 )
  {
    v15 = Method_ServantStatusQuestBoardDraw_OnClick__;
    if ( (*((_BYTE *)Method_ServantStatusQuestBoardDraw_OnClick__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusQuestBoardDraw_OnClick__);
    v16 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v15, v15[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 2, 0LL);
  }
  else
  {
    v12 = this->fields.inputMessageObject;
    v17 = questId;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
    if ( !v12 )
      sub_1BCAA3C(v13, v14);
    UnityEngine_GameObject__SendMessage_70135616(v12, (System_String_o *)StringLiteral_10001/*"OnClickServantQuest"*/, v13, 0LL);
  }
}


void __fastcall ServantStatusQuestBoardDraw__ResetInfoTextList(
        ServantStatusQuestBoardDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Collections_Generic_List_QuestBoardInformationText__o *v9; // x8
  PartyOrganizationUtility_o *p_mInfoTextList; // x19
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // t1
  int32_t size; // w2
  int v13; // w9
  System_Collections_Generic_List_object__o *v14; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B13CFC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestBoardInformationText__Clear__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo, v7, v8);
    byte_4B13CFC = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  p_mInfoTextList = (PartyOrganizationUtility_o *)&this->fields.mInfoTextList;
  v9 = mInfoTextList;
  if ( mInfoTextList )
  {
    size = v9->fields._size;
    v13 = v9->fields._version + 1;
    v9->fields._size = 0;
    v9->fields._version = v13;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v9->fields._items, 0, size, 0LL);
  }
  else
  {
    v14 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_QuestBoardInformationText__TypeInfo,
                                                         method,
                                                         v2,
                                                         v3);
    System_Collections_Generic_List_object____ctor(
      v14,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    p_mInfoTextList->klass = (PartyOrganizationUtility_c *)v14;
    sub_1BCA784(p_mInfoTextList, (int64_t)v14, v15, v16, v17, v18, v19, v20);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 Master_object; // x0
  Il2CppClass *klass; // x1
  System_String_o *monitor; // x20
  bool v48; // w25
  int32_t monitor_high; // w22
  Il2CppObject *PrioredName; // x0
  System_String_o *v51; // x0
  int32_t targetId; // w26
  System_String_o *v53; // x21
  __int64 v54; // x1
  int32_t WarID_ByQuestID; // w26
  Il2CppObject *v56; // x0
  __int64 v57; // x1
  int64_t OpenedAt; // x26
  __int64 v59; // x1
  System_Object_array *v60; // x26
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x27
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int64_t v74; // x27
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  int64_t v81; // x27
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  int64_t v88; // x27
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v90; // x23
  _BOOL4 v91; // w26
  __int64 v92; // x1
  UILabel_o *mTitleNameLb; // x24
  int32_t v94; // w21
  UILabel_o *mCondChangeMessage; // x19
  struct ServantStatusQuestBoardDraw_StaticFields *static_fields; // x8
  __int64 v97; // x9
  int32_t v98; // w24
  int32_t leftIndent; // w25
  float v100; // s8
  float ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X; // s9
  float v102; // s1
  float v103; // s0
  int v104; // s2
  float v105; // s9
  float v106; // s0
  float v107; // s1
  float v108; // s0
  int v109; // s2
  float v110; // s1
  int v111; // s2
  UIWidget_o *mOverwriteAdvanceNoticeLb; // x22
  const MethodInfo *v113; // x4
  const MethodInfo *v114; // x4
  System_String_o *overlayClosedMessage; // x20
  UILabel_o *v116; // x21
  float v117; // s8
  UnityEngine_Object_o *mOverwriteAdvanceNoticeArrowObj; // x20
  __int64 v119; // x0
  char v120; // [xsp+8h] [xbp-98h]
  int32_t Minute; // [xsp+Ch] [xbp-94h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-90h] BYREF
  int32_t Day; // [xsp+14h] [xbp-8Ch] BYREF
  int64_t value; // [xsp+18h] [xbp-88h] BYREF
  uint64_t dateData; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-78h] BYREF
  System_DateTime_o v127; // 0:x0.8
  System_DateTime_o v128; // 0:x0.8
  System_DateTime_o v129; // 0:x0.8
  System_DateTime_o v130; // 0:x0.8
  UnityEngine_Vector3_o v131; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B13CFE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClosedMessageMaster___, *(_QWORD *)&questReleaseClosedID, warEntity);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarMaster___, v15, v16);
    sub_1BCA7E0(&DataManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v21, v22);
    sub_1BCA7E0(&System_DateTime_TypeInfo, v23, v24);
    sub_1BCA7E0(&int_TypeInfo, v25, v26);
    sub_1BCA7E0(&long_TypeInfo, v27, v28);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v31, v32);
    sub_1BCA7E0(&object___TypeInfo, v33, v34);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v35, v36);
    sub_1BCA7E0(&ServantStatusQuestBoardDraw_TypeInfo, v37, v38);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v39, v40);
    sub_1BCA7E0(&StringLiteral_14974/*"UNKNOWN_QUEST_NAME"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v43, v44);
    byte_4B13CFE = 1;
  }
  dateData = 0LL;
  entity = 0LL;
  if ( questReleaseClosedID < 1 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questReleaseClosedID);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClosedMessageMaster___);
  if ( !Master_object )
    goto LABEL_125;
  monitor = (System_String_o *)StringLiteral_1/*""*/;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         questReleaseClosedID,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__) )
  {
    Master_object = (__int64)entity;
    if ( !entity )
      goto LABEL_125;
    monitor = (System_String_o *)entity[1].monitor;
    Master_object = ClosedMessageEntity__IsChangeDispClosedMessage((ClosedMessageEntity_o *)entity, 0LL);
    if ( !entity )
      goto LABEL_125;
    v48 = Master_object;
    Master_object = ClosedMessageEntity__IsChangeDispPositionLeft((ClosedMessageEntity_o *)entity, 0LL);
    if ( !entity )
      goto LABEL_125;
    monitor_high = HIDWORD(entity[2].monitor);
  }
  else
  {
    monitor_high = 0;
    Master_object = 0LL;
    v48 = 0;
  }
  if ( !questReleaseEntity )
    goto LABEL_125;
  v120 = Master_object;
  switch ( questReleaseEntity->fields.type )
  {
    case 1:
      targetId = questReleaseEntity->fields.targetId;
      v53 = (System_String_o *)StringLiteral_1/*""*/;
      Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Master_object )
        goto LABEL_125;
      WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Master_object, targetId, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v54);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarMaster___);
      if ( !Master_object )
        goto LABEL_125;
      v56 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              WarID_ByQuestID,
              (const MethodInfo_31B2E40 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( v56 )
      {
        PrioredName = (Il2CppObject *)WarEntity__GetPrioredName((WarEntity_o *)v56, 0LL);
LABEL_16:
        v51 = System_String__Format(monitor, PrioredName, 0LL);
LABEL_42:
        monitor = v51;
      }
      else
      {
        monitor = v53;
      }
LABEL_43:
      if ( warEntity != 0LL && !v48 )
        v48 = WarEntity__IsChangeDispClosedMessage(warEntity, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, klass);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
      if ( !Master_object )
        goto LABEL_125;
      EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                                 (QuestReleaseOverwriteMaster_o *)Master_object,
                                 this->fields.questId,
                                 checkTime,
                                 0LL);
      v90 = EntityByQuestIdAndTime;
      if ( !EntityByQuestIdAndTime )
      {
        v91 = 0;
        if ( v48 )
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
              if ( !v91 )
                return;
              Master_object = (__int64)this->fields.mCondObject;
              if ( Master_object )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
                if ( v90 )
                {
                  Master_object = (__int64)this->fields.mCondChangeMessage;
                  if ( Master_object )
                  {
                    UILabel__set_text((UILabel_o *)Master_object, v90->fields.overlayClosedMessage, 0LL);
                    mCondChangeMessage = this->fields.mCondChangeMessage;
                    Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
                    if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, klass);
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
        goto LABEL_125;
      }
      v91 = !System_String__IsNullOrEmpty(EntityByQuestIdAndTime->fields.overlayClosedMessage, 0LL);
      if ( !v48 )
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
          v94 = monitor_high;
        }
        else
        {
          v94 = monitor_high;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, klass);
          Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14974/*"UNKNOWN_QUEST_NAME"*/, 0LL);
          klass = (Il2CppClass *)Master_object;
        }
        if ( !mTitleNameLb )
LABEL_125:
          sub_1BCAA3C(Master_object, klass);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v92);
        Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14974/*"UNKNOWN_QUEST_NAME"*/, 0LL);
        if ( !mTitleNameLb )
          goto LABEL_125;
        klass = (Il2CppClass *)Master_object;
        v94 = monitor_high;
      }
      UILabel__set_text(mTitleNameLb, (System_String_o *)klass, 0LL);
      Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, klass);
        Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      }
      static_fields = *(struct ServantStatusQuestBoardDraw_StaticFields **)(Master_object + 184);
      v97 = 12LL;
      if ( !v91 )
        v97 = 8LL;
      v98 = *(int32_t *)((char *)&static_fields->TITLE_LABEL_BASE_WIDTH + v97);
      if ( v91 )
      {
        if ( !v90 )
          goto LABEL_125;
        leftIndent = v90->fields.leftIndent;
      }
      else
      {
        leftIndent = 0;
      }
      v100 = (float)v94;
      if ( (v120 & 1) != 0 )
      {
        if ( !*(_DWORD *)(Master_object + 224) )
        {
          j_il2cpp_runtime_class_init_0(Master_object, klass);
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
        v102 = 24.0;
        if ( !v91 )
          v102 = 0.0;
        v104 = 0;
        v103 = ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X + v100;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)Master_object,
          *(UnityEngine_Vector3_o *)(&v102 - 1),
          0LL);
        Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
        if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, klass);
          Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
        }
        if ( !this->fields.mOverwriteAdvanceNoticeLb )
          goto LABEL_125;
        v105 = *(float *)(*(_QWORD *)(Master_object + 184) + 16LL);
        UIWidget__set_pivot((UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb, 3, 0LL);
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_125;
        Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
        if ( !Master_object )
          goto LABEL_125;
        v106 = v105 + (float)leftIndent;
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
        v107 = 24.0;
        if ( !v91 )
          v107 = 0.0;
        v109 = 0;
        v108 = v100 * 0.5;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)Master_object,
          *(UnityEngine_Vector3_o *)(&v107 - 1),
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
        v106 = (float)leftIndent * 0.5;
      }
      v110 = -26.0;
      v111 = 0;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)Master_object,
        *(UnityEngine_Vector3_o *)&v106,
        0LL);
      Master_object = (__int64)this->fields.mAdvanceNoticeLb;
      if ( !Master_object )
        goto LABEL_125;
      UIWidget__set_height((UIWidget_o *)Master_object, v98, 0LL);
      Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      mOverwriteAdvanceNoticeLb = (UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, klass);
      if ( !mOverwriteAdvanceNoticeLb )
        goto LABEL_125;
      UIWidget__set_height(
        mOverwriteAdvanceNoticeLb,
        ServantStatusQuestBoardDraw_TypeInfo->static_fields->ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT,
        0LL);
      ServantStatusQuestBoardDraw___SetAdvanceNoticeText_g__CalculateLabel_54_0(
        this->fields.mAdvanceNoticeLb,
        monitor,
        v98,
        v94,
        v113);
      if ( v91 )
      {
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
        if ( !Master_object )
          goto LABEL_125;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
        if ( !v90 )
          goto LABEL_125;
        overlayClosedMessage = v90->fields.overlayClosedMessage;
        v116 = this->fields.mOverwriteAdvanceNoticeLb;
        if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, klass);
        v117 = v100 * 0.5;
        ServantStatusQuestBoardDraw___SetAdvanceNoticeText_g__CalculateLabel_54_0(
          v116,
          overlayClosedMessage,
          v98,
          leftIndent,
          v114);
      }
      else
      {
        v117 = 0.0;
      }
      mOverwriteAdvanceNoticeArrowObj = (UnityEngine_Object_o *)this->fields.mOverwriteAdvanceNoticeArrowObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, klass);
      if ( UnityEngine_Object__op_Inequality(mOverwriteAdvanceNoticeArrowObj, 0LL, 0LL) )
      {
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeArrowObj;
        if ( Master_object )
        {
          Master_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Master_object, 0LL);
          if ( Master_object )
          {
            v131.fields.y = 0.0;
            v131.fields.z = 0.0;
            v131.fields.x = v117;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Master_object, v131, 0LL);
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
      PrioredName = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &value);
      goto LABEL_16;
    case 0xC:
      if ( !questEntity )
        goto LABEL_125;
      OpenedAt = QuestEntity__getOpenedAt(questEntity, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v57);
      dateData = NetworkManager__getServerDateTime_39270492(OpenedAt, 0LL).fields._dateData;
      v60 = (System_Object_array *)sub_1BCA888(object___TypeInfo, 4LL);
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v59);
      v127.fields._dateData = (uint64_t)&dateData;
      LODWORD(value) = System_DateTime__get_Month(v127, 0LL);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &value);
      if ( !v60 )
        goto LABEL_125;
      v67 = Master_object;
      if ( Master_object )
      {
        Master_object = sub_1BCA91C(Master_object, v60->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_127;
      }
      if ( !v60->max_length )
        goto LABEL_126;
      v60->m_Items[0] = (Il2CppObject *)v67;
      sub_1BCA784((PartyOrganizationUtility_o *)v60->m_Items, v67, v61, v62, v63, v64, v65, v66);
      v128.fields._dateData = (uint64_t)&dateData;
      Day = System_DateTime__get_Day(v128, 0LL);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Day);
      v74 = Master_object;
      if ( Master_object )
      {
        Master_object = sub_1BCA91C(Master_object, v60->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_127;
      }
      if ( v60->max_length <= 1 )
        goto LABEL_126;
      v60->m_Items[1] = (Il2CppObject *)v74;
      sub_1BCA784((PartyOrganizationUtility_o *)&v60->m_Items[1], v74, v68, v69, v70, v71, v72, v73);
      v129.fields._dateData = (uint64_t)&dateData;
      Hour = System_DateTime__get_Hour(v129, 0LL);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Hour);
      v81 = Master_object;
      if ( Master_object )
      {
        Master_object = sub_1BCA91C(Master_object, v60->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_127;
      }
      if ( v60->max_length <= 2 )
        goto LABEL_126;
      v60->m_Items[2] = (Il2CppObject *)v81;
      sub_1BCA784((PartyOrganizationUtility_o *)&v60->m_Items[2], v81, v75, v76, v77, v78, v79, v80);
      v130.fields._dateData = (uint64_t)&dateData;
      Minute = System_DateTime__get_Minute(v130, 0LL);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Minute);
      v88 = Master_object;
      if ( Master_object )
      {
        Master_object = sub_1BCA91C(Master_object, v60->obj.klass->_1.element_class);
        if ( !Master_object )
        {
LABEL_127:
          v119 = sub_1BCAA60();
          sub_1BCA908(v119, 0LL);
        }
      }
      if ( v60->max_length <= 3 )
LABEL_126:
        sub_1BCAA44(Master_object, klass);
      v60->m_Items[3] = (Il2CppObject *)v88;
      sub_1BCA784((PartyOrganizationUtility_o *)&v60->m_Items[3], v88, v82, v83, v84, v85, v86, v87);
      v51 = System_String__Format_62415728(monitor, v60, 0LL);
      goto LABEL_42;
    default:
      goto LABEL_43;
  }
}


void __fastcall ServantStatusQuestBoardDraw__SetDark(ServantStatusQuestBoardDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UIWidget_o *mLineSp; // x0
  UISprite_o *mcBaseP; // x20
  __int64 v12; // x1
  UILabel_o *mNoneLb; // x20
  const MethodInfo *v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct UnityEngine_GameObject_o **p_inputMessageObject; // x19
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  if ( (byte_4B13CFA & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&ServantStatusQuestBoardDraw_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_12011/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    byte_4B13CFA = 1;
  }
  mLineSp = (UIWidget_o *)ServantStatusQuestBoardDraw_TypeInfo;
  mcBaseP = this->fields.mcBaseP;
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, method);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
  mLineSp = (UIWidget_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12011/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/, 0LL);
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
  ServantStatusQuestBoardDraw__ResetInfoTextList(this, v14);
  mLineSp = (UIWidget_o *)this->fields.mOptionInfoLb;
  if ( !mLineSp )
    goto LABEL_27;
  mLineSp = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mLineSp, 0LL);
  if ( !mLineSp )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0LL);
  this->fields.mRewardIconInfs = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mRewardIconInfs, 0LL, v15, v16, v17, v18, v19, v20);
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
    sub_1BCAA3C(mLineSp, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0LL);
  this->fields.inputMessageObject = 0LL;
  p_inputMessageObject = &this->fields.inputMessageObject;
  sub_1BCA784((PartyOrganizationUtility_o *)p_inputMessageObject, 0LL, v22, v23, v24, v25, v26, v27);
  *((_DWORD *)p_inputMessageObject + 2) = 0;
  p_inputMessageObject[2] = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)(p_inputMessageObject + 2), 0LL, v28, v29, v30, v31, v32, v33);
}


void __fastcall ServantStatusQuestBoardDraw__SetInfoTextAlpha(
        ServantStatusQuestBoardDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  __int64 v3; // x2
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8
  BoardOptionTextWithIconComponent_o *mOptionInfoLb; // x0

  if ( (byte_4B13D00 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, method, v3);
    byte_4B13D00 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList && mInfoTextList->fields._size >= 2 )
  {
    mOptionInfoLb = this->fields.mOptionInfoLb;
    if ( !mOptionInfoLb )
      sub_1BCAA3C(0LL, method);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x20
  int64_t Master_object; // x0
  __int64 giftIconId; // x1
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  __int64 v102; // x1
  __int64 v103; // x1
  bool v104; // w24
  int current; // w23
  QuestEntity_o *Mine; // x26
  const MethodInfo *v107; // x1
  bool v108; // w25
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  const MethodInfo *v115; // x1
  _BOOL4 IsClear; // w28
  int v117; // w8
  int32_t id; // w8
  int32_t warId; // w21
  WarEntity_o *WarEntityByWarID; // x0
  __int64 v121; // x1
  WarEntity_o *v122; // x24
  bool v123; // w8
  __int64 v124; // x1
  int closedMessageId; // w21
  __int64 v126; // x1
  Il2CppObject *v127; // x29
  int32_t questPhase; // w23
  __int64 v129; // x1
  int32_t PhaseMax; // w8
  Il2CppObject *v131; // x0
  _BOOL4 v132; // w23
  _BOOL4 v133; // w25
  float v134; // s1
  float v135; // s0
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x23
  int64_t v137; // x2
  int32_t v138; // w3
  System_String_o *v139; // x4
  BattleSetupInfo_o *v140; // x5
  FollowerInfo_o *v141; // x6
  PartyListViewItem_o *v142; // x7
  struct UISprite_o *mcBaseP; // x8
  struct UIAtlas_o *mAtlas; // x1
  UISprite_o *v145; // x29
  __int64 v146; // x2
  __int64 v147; // x3
  System_Action_o *v148; // x29
  __int64 v149; // x1
  _BOOL4 v150; // w27
  UISprite_o *mTitleSp; // x29
  int v152; // w28
  __int64 v153; // x9
  __int64 v154; // x2
  __int64 v155; // x3
  System_Action_o *v156; // x29
  __int64 v157; // x1
  __int64 v158; // x1
  const MethodInfo *v159; // x6
  __int64 **v160; // x24
  ServantStatusQuestBoardManager_o *v161; // x28
  UILabel_o *mTitleNameLb; // x21
  System_String_o **v163; // x8
  LocalizationManager_c *v164; // x0
  System_String_o **v165; // x9
  System_String_o *v166; // x24
  ServantStatusQuestBoardDraw_c **v167; // x24
  int32_t v168; // w21
  ServantStatusQuestBoardDraw_c **v169; // x29
  int32_t TITLE_LABEL_BASE_WIDTH; // w24
  __int64 v171; // x2
  bool v172; // cc
  UnityEngine_Transform_o *v173; // x21
  struct UILabel_o *v174; // x8
  float y; // s1
  float x; // s0
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  int64_t v179; // x2
  int32_t v180; // w3
  System_String_o *v181; // x4
  BattleSetupInfo_o *v182; // x5
  FollowerInfo_o *v183; // x6
  PartyListViewItem_o *v184; // x7
  int32_t ServantId; // w21
  int64_t v186; // x24
  UILabel_o *mTitleShortcutLb; // x21
  Il2CppObject *v188; // x0
  __int64 v189; // x1
  __int64 v190; // x27
  __int64 v191; // x28
  ServantLimitImageMaster_o *v192; // x24
  const MethodInfo *v193; // x1
  struct UILabel_o *v194; // x21
  System_String_o *v195; // x1
  __int64 endTime; // x24
  __int64 v197; // x1
  System_Collections_Generic_List_object__o *mInfoTextList; // x21
  System_String_o *v199; // x28
  __int64 v200; // x1
  __int64 v201; // x2
  __int64 v202; // x3
  QuestBoardInformationText_o *v203; // x27
  int64_t v204; // x2
  int32_t v205; // w3
  System_String_o *v206; // x4
  BattleSetupInfo_o *v207; // x5
  FollowerInfo_o *v208; // x6
  PartyListViewItem_o *v209; // x7
  struct System_Object_array *items; // x8
  _QWORD *v211; // x9
  __int64 size; // x10
  Il2CppClass **v213; // x0
  System_String_o *v214; // x21
  Il2CppObject *v215; // x24
  Il2CppObject *BattleName; // x0
  int32_t v217; // w24
  int32_t v218; // w0
  int32_t v219; // w1
  struct System_Collections_Generic_List_QuestBoardInformationText__o *v220; // x21
  int32_t v221; // w2
  int v222; // w8
  int32_t v223; // w9
  bool v224; // w21
  int32_t v225; // w8
  int64_t v226; // x2
  int32_t v227; // w3
  System_String_o *v228; // x4
  BattleSetupInfo_o *v229; // x5
  FollowerInfo_o *v230; // x6
  PartyListViewItem_o *v231; // x7
  bool v232; // w1
  int v233; // w8
  UnityEngine_Component_o *mServantLimitRewardObtainedSP; // x21
  char v235; // w21
  int64_t v236; // x2
  int32_t v237; // w3
  System_String_o *v238; // x4
  BattleSetupInfo_o *v239; // x5
  FollowerInfo_o *v240; // x6
  PartyListViewItem_o *v241; // x7
  __int64 v242; // x8
  struct GiftEntity_array *v243; // x22
  int v244; // w9
  _DWORD *v245; // x8
  int v246; // w9
  int32_t v247; // w2
  int32_t v248; // w3
  const MethodInfo *v249; // [xsp+0h] [xbp-110h]
  int32_t limitCounta; // [xsp+14h] [xbp-FCh]
  int64_t checkTime; // [xsp+18h] [xbp-F8h]
  int v252; // [xsp+20h] [xbp-F0h]
  int32_t phase; // [xsp+24h] [xbp-ECh]
  QuestBehaviorMaster_o *v254; // [xsp+28h] [xbp-E8h]
  bool HasStatus; // [xsp+34h] [xbp-DCh]
  ServantStatusQuestBoardManager_o *v256; // [xsp+38h] [xbp-D8h]
  struct UnityEngine_GameObject_o *v257; // [xsp+40h] [xbp-D0h]
  char v258; // [xsp+4Ch] [xbp-C4h]
  int32_t QuestType; // [xsp+50h] [xbp-C0h]
  _BOOL4 IsLimitCountSealQuest; // [xsp+54h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_int__o v261; // [xsp+58h] [xbp-B8h] BYREF
  bool isNotItemConsume; // [xsp+74h] [xbp-9Ch] BYREF
  int32_t fixedVal[2]; // [xsp+78h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v264; // [xsp+80h] [xbp-90h] BYREF
  UserQuestEntity_o *entity; // [xsp+A0h] [xbp-70h] BYREF
  QuestReleaseEntity_o *questReleaseNG; // [xsp+A8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v267; // 0:x0.16

  if ( (byte_4B13CFB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, qinf, beforeQuestInfo);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&CondType_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GiftMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestBehaviorMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestGroupMaster___, v23, v24);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v25, v26);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v27, v28);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserQuestMaster___, v29, v30);
    sub_1BCA7E0(&DataManager_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v35, v36);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v37, v38);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v39, v40);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v41, v42);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__, v43, v44);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__, v45, v46);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v47, v48);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, v49, v50);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__, v51, v52);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v53, v54);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v55, v56);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v57, v58);
    sub_1BCA7E0(&QuestBoardInformationText_TypeInfo, v59, v60);
    sub_1BCA7E0(&ServantStatusQuestBoardDraw_TypeInfo, v61, v62);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v63, v64);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v65, v66);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v67, v68);
    sub_1BCA7E0(&Method_ServantStatusQuestBoardDraw___c__DisplayClass48_0__SetItem_b__0__, v69, v70);
    sub_1BCA7E0(&Method_ServantStatusQuestBoardDraw___c__DisplayClass48_0__SetItem_b__1__, v71, v72);
    sub_1BCA7E0(&ServantStatusQuestBoardDraw___c__DisplayClass48_0_TypeInfo, v73, v74);
    sub_1BCA7E0(&StringLiteral_13504/*"TIME_REST_QUEST_BOARD_QUEST"*/, v75, v76);
    sub_1BCA7E0(&StringLiteral_25238/*"{0}"*/, v77, v78);
    sub_1BCA7E0(&StringLiteral_12078/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE2"*/, v79, v80);
    sub_1BCA7E0(&StringLiteral_20385/*"icon_reward_limits_release"*/, v81, v82);
    sub_1BCA7E0(&StringLiteral_12080/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT2"*/, v83, v84);
    sub_1BCA7E0(&StringLiteral_12079/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/, v85, v86);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v87, v88);
    sub_1BCA7E0(&StringLiteral_12077/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE"*/, v89, v90);
    sub_1BCA7E0(&StringLiteral_12034/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/, v91, v92);
    byte_4B13CFB = 1;
  }
  entity = 0LL;
  questReleaseNG = 0LL;
  memset(&v264, 0, sizeof(v264));
  *(_QWORD *)fixedVal = 0LL;
  isNotItemConsume = 0;
  v93 = sub_1BCAA2C(
          ServantStatusQuestBoardDraw___c__DisplayClass48_0_TypeInfo,
          qinf,
          beforeQuestInfo,
          inputMessageObject);
  System_Object___ctor((Il2CppObject *)v93, 0LL);
  if ( !v93 )
    goto LABEL_269;
  *(_QWORD *)(v93 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v93 + 16), (int64_t)this, v96, v97, v98, v99, v100, v101);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v102);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !qinf )
    goto LABEL_269;
  if ( !Master_object )
    goto LABEL_269;
  v257 = inputMessageObject;
  limitCounta = limitCount;
  Master_object = (int64_t)QuestGroupMaster__GetInterludeQuestIdList(
                             (QuestGroupMaster_o *)Master_object,
                             qinf->fields.questId,
                             0LL);
  if ( !Master_object )
    goto LABEL_269;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v261,
    (System_Collections_Generic_List_int__o *)Master_object,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v256 = questBoardManager;
  v264 = v261;
  while ( 1 )
  {
    v104 = System_Collections_Generic_List_Enumerator_int___MoveNext(
             &v264,
             (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v104 )
      break;
    current = v264.fields._current;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v103);
    if ( CondType__IsQuestClear_38310172(current, -1, 0, 0LL) )
      goto LABEL_16;
  }
  current = 0;
LABEL_16:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v264,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( !questBoardManager )
    goto LABEL_269;
  checkTime = questBoardManager->fields.mListCreatedTime;
  Mine = MapControl_QuestInfo__GetMine(qinf, 0LL);
  QuestType = MapControl_QuestInfo__GetQuestType(qinf, 0LL);
  v108 = v104 || MapControl_QuestInfo__IsClear(qinf, 0LL);
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, v107);
  Master_object = ServantStatusQuestBoardDraw__IsClose(qinf, v107);
  v258 = Master_object;
  if ( beforeQuestInfo )
  {
    IsClear = MapControl_QuestInfo__IsClear(beforeQuestInfo, 0LL);
    if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, v115);
    Master_object = ServantStatusQuestBoardDraw__IsClose(beforeQuestInfo, v115);
    v117 = Master_object & 1;
    if ( !Mine )
      goto LABEL_269;
  }
  else
  {
    v117 = 0;
    IsClear = 1;
    if ( !Mine )
      goto LABEL_269;
  }
  v252 = v117;
  id = Mine->fields.id;
  this->fields.qinf = qinf;
  this->fields.questId = id;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.qinf, (int64_t)qinf, v109, v110, v111, v112, v113, v114);
  warId = qinf->fields.warId;
  Master_object = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Master_object )
    goto LABEL_269;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Master_object, warId, 0LL);
  v122 = WarEntityByWarID;
  if ( WarEntityByWarID )
    v123 = !WarEntity__IsFolder(WarEntityByWarID, 0LL);
  else
    v123 = 0;
  *(_BYTE *)(v93 + 40) = v123;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v121);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_object )
    goto LABEL_269;
  IsLimitCountSealQuest = ServantLimitImageMaster__IsLimitCountSealQuest(
                            (ServantLimitImageMaster_o *)Master_object,
                            this->fields.questId,
                            0LL);
  Master_object = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Master_object )
    goto LABEL_269;
  clsQuestCheck__mfQuestReleaseCheckGetEntityByQuestID(
    (clsQuestCheck_o *)Master_object,
    Mine->fields.id,
    &questReleaseNG,
    qinf,
    0LL);
  if ( questReleaseNG )
    closedMessageId = questReleaseNG->fields.closedMessageId;
  else
    closedMessageId = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v124);
  v127 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v126);
  Master_object = NetworkManager__get_UserId(0LL);
  if ( current < 1 )
  {
    if ( !v127 )
      goto LABEL_269;
    current = this->fields.questId;
  }
  else if ( !v127 )
  {
    goto LABEL_269;
  }
  UserQuestMaster__TryGetEntity((UserQuestMaster_o *)v127, &entity, Master_object, current, 0LL);
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
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v129);
  v131 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  v132 = !v108 && IsClear;
  v254 = (QuestBehaviorMaster_o *)v131;
  if ( v108 )
  {
    v133 = 1;
LABEL_66:
    v134 = 1.0;
    v135 = 0.5;
    v257 = 0LL;
    goto LABEL_67;
  }
  if ( v131 )
  {
    if ( QuestBehaviorMaster__IsOpenQuestBehaviorCond(
           (QuestBehaviorMaster_o *)v131,
           this->fields.questId,
           phase,
           9,
           0LL) )
    {
      v258 = 0;
      closedMessageId = 0;
      HasStatus = 0;
      v133 = 1;
      IsClear = v132;
      goto LABEL_66;
    }
    IsClear = v132;
  }
  v133 = 0;
  if ( (v258 & 1) != 0 )
  {
    v258 = 1;
    goto LABEL_66;
  }
  v135 = 1.0;
  v258 = 0;
  v134 = 1.0;
LABEL_67:
  *(float *)(v93 + 24) = v135;
  *(float *)(v93 + 28) = v135;
  *(float *)(v93 + 32) = v135;
  *(float *)(v93 + 36) = v134;
  Master_object = (int64_t)this->fields.mTitleObj;
  if ( !Master_object )
    goto LABEL_269;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  Master_object = (int64_t)this->fields.mOptionInfoLb;
  if ( !Master_object )
    goto LABEL_269;
  Master_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_269;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  Master_object = (int64_t)this->fields.mRewardObj;
  if ( !Master_object )
    goto LABEL_269;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  Master_object = (int64_t)this->fields.mAdvanceNoticeObj;
  if ( !Master_object )
    goto LABEL_269;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  Master_object = (int64_t)this->fields.mOverwriteAdvanceNoticeObj;
  if ( !Master_object )
    goto LABEL_269;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  Master_object = (int64_t)this->fields.mCondObject;
  if ( !Master_object )
    goto LABEL_269;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  Master_object = (int64_t)this->fields.mServantLimitRewardObtainedSP;
  if ( !Master_object )
    goto LABEL_269;
  Master_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_269;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  mcBaseP = this->fields.mcBaseP;
  if ( !mcBaseP )
    goto LABEL_269;
  mAtlas = mcBaseP->fields.mAtlas;
  this->fields.basePanelAtlas = mAtlas;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.basePanelAtlas,
    (int64_t)mAtlas,
    v137,
    v138,
    v139,
    v140,
    v141,
    v142);
  v145 = this->fields.mcBaseP;
  Master_object = (int64_t)ServantStatusQuestBoardDraw_TypeInfo;
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, giftIconId);
  if ( !v145 )
    goto LABEL_269;
  UISprite__set_spriteName(v145, ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME, 0LL);
  if ( IsLimitCountSealQuest )
  {
    v148 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, giftIconId, v146, v147);
    System_Action___ctor(
      v148,
      (Il2CppObject *)v93,
      Method_ServantStatusQuestBoardDraw___c__DisplayClass48_0__SetItem_b__0__,
      0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v149);
    AtlasManager__LoadEventUI(v148, 1, 0LL);
  }
  Master_object = (int64_t)this->fields.mcBaseP;
  if ( !Master_object )
    goto LABEL_269;
  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Master_object + 840LL))(
    Master_object,
    *(_QWORD *)(*(_QWORD *)Master_object + 848LL));
  Master_object = (int64_t)this->fields.mcBaseP;
  if ( !Master_object )
    goto LABEL_269;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v93 + 24), 0LL);
  Master_object = (int64_t)this->fields.mLineSp;
  if ( !Master_object )
    goto LABEL_269;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0LL);
  Master_object = (int64_t)this->fields.mLineSp;
  if ( !Master_object )
    goto LABEL_269;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v93 + 24), 0LL);
  Master_object = (int64_t)this->fields.mTitle2Sp;
  v150 = !v133 && IsClear;
  if ( !Master_object )
    goto LABEL_269;
  if ( v133 )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 0, 0LL);
    Master_object = (int64_t)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_269;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 0, 0LL);
    Master_object = (int64_t)this->fields.mLinkObj;
    if ( !Master_object )
      goto LABEL_269;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0LL);
    Master_object = (int64_t)this->fields.mTitle2Sp;
    if ( !Master_object )
      goto LABEL_269;
    UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v93 + 24), 0LL);
    Master_object = (int64_t)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_269;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0LL);
    Master_object = (int64_t)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_269;
    UISprite__set_atlas((UISprite_o *)Master_object, this->fields.basePanelAtlas, 0LL);
    mTitleSp = this->fields.mTitleSp;
    if ( QuestType == 3 )
    {
      v152 = *(unsigned __int8 *)(v93 + 40);
      Master_object = (int64_t)ServantStatusQuestBoardDraw_TypeInfo;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, giftIconId);
      if ( !mTitleSp )
        goto LABEL_269;
      v153 = 56LL;
      if ( !v152 )
        v153 = 48LL;
      UISprite__set_spriteName(
        mTitleSp,
        *(System_String_o **)((char *)&ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH + v153),
        0LL);
      if ( IsLimitCountSealQuest )
      {
        v156 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, giftIconId, v154, v155);
        System_Action___ctor(
          v156,
          (Il2CppObject *)v93,
          Method_ServantStatusQuestBoardDraw___c__DisplayClass48_0__SetItem_b__1__,
          0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v157);
        AtlasManager__LoadEventUI(v156, 1, 0LL);
      }
    }
    else
    {
      Master_object = (int64_t)ServantStatusQuestBoardDraw_TypeInfo;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, giftIconId);
      if ( !mTitleSp )
        goto LABEL_269;
      UISprite__set_spriteName(
        mTitleSp,
        ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_SPRITE_NAME_RAINFORCEMENT,
        0LL);
      v150 = IsClear;
    }
    Master_object = (int64_t)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_269;
    (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Master_object + 840LL))(
      Master_object,
      *(_QWORD *)(*(_QWORD *)Master_object + 848LL));
    Master_object = (int64_t)this->fields.mTitleSp;
    if ( !Master_object )
      goto LABEL_269;
    UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v93 + 24), 0LL);
    Master_object = (int64_t)this->fields.mLinkObj;
    if ( !Master_object )
      goto LABEL_269;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
    Master_object = (int64_t)this->fields.mLinkObj;
    if ( !Master_object )
      goto LABEL_269;
    Master_object = (int64_t)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Master_object, 0LL);
    if ( !Master_object )
      goto LABEL_269;
    Master_object = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)Master_object,
                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !Master_object )
      goto LABEL_269;
    UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v93 + 24), 0LL);
    IsClear = v150;
  }
  Master_object = (int64_t)this->fields.mClearObj;
  if ( !Master_object )
    goto LABEL_269;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v133, 0LL);
  Master_object = (int64_t)this->fields.mNoneLb;
  if ( !Master_object )
    goto LABEL_269;
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !v133 && !IsClear )
  {
    mTitleNameLb = this->fields.mTitleNameLb;
    if ( QuestType == 3 )
    {
      v163 = (System_String_o **)&StringLiteral_12077/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE"*/;
      v164 = LocalizationManager_TypeInfo;
      v165 = (System_String_o **)&StringLiteral_12078/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE2"*/;
    }
    else
    {
      v163 = (System_String_o **)&StringLiteral_12079/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/;
      v164 = LocalizationManager_TypeInfo;
      v165 = (System_String_o **)&StringLiteral_12080/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT2"*/;
    }
    v161 = v256;
    if ( v252 )
      v163 = v165;
    v166 = *v163;
    if ( !v164->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v164, v158);
    Master_object = (int64_t)LocalizationManager__Get(v166, 0LL);
    if ( !mTitleNameLb )
      goto LABEL_269;
    UILabel__set_text(mTitleNameLb, (System_String_o *)Master_object, 0LL);
    v160 = &off_475C000;
    goto LABEL_134;
  }
  if ( closedMessageId >= 1 )
  {
    ServantStatusQuestBoardDraw__SetAdvanceNoticeText(
      this,
      closedMessageId,
      v122,
      Mine,
      questReleaseNG,
      checkTime,
      v159);
    v160 = &off_475C000;
    v161 = v256;
LABEL_134:
    v167 = (ServantStatusQuestBoardDraw_c **)v160[314];
    goto LABEL_135;
  }
  v161 = v256;
  if ( questReleaseNG && questReleaseNG->fields.type == 8 )
  {
    v194 = this->fields.mTitleNameLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v158);
    Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12034/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/, 0LL);
    v167 = &ServantStatusQuestBoardDraw_TypeInfo;
    if ( !v194 )
      goto LABEL_269;
    v195 = (System_String_o *)Master_object;
    Master_object = (int64_t)v194;
  }
  else
  {
    Master_object = (int64_t)QuestEntity__getQuestName(Mine, 0LL);
    if ( !Master_object )
      goto LABEL_269;
    v214 = (System_String_o *)Master_object;
    v167 = &ServantStatusQuestBoardDraw_TypeInfo;
    if ( System_String__Contains((System_String_o *)Master_object, (System_String_o *)StringLiteral_25238/*"{0}"*/, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, giftIconId);
      v215 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
      Master_object = QuestEntity__getServantId(Mine, 0LL);
      if ( !v215 )
        goto LABEL_269;
      Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)v215,
                                 Master_object,
                                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_269;
      BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Master_object, 0, -1, 0LL);
      v167 = &ServantStatusQuestBoardDraw_TypeInfo;
      v214 = System_String__Format(v214, BattleName, 0LL);
    }
    Master_object = (int64_t)this->fields.mTitleNameLb;
    if ( !Master_object )
      goto LABEL_269;
    v195 = v214;
  }
  UILabel__set_text((UILabel_o *)Master_object, v195, 0LL);
LABEL_135:
  Master_object = (int64_t)this->fields.mTitleNameLb;
  if ( !Master_object )
    goto LABEL_269;
  v168 = *(_DWORD *)(Master_object + 168);
  if ( !(*v167)->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(*v167, giftIconId);
    Master_object = (int64_t)this->fields.mTitleNameLb;
    if ( !Master_object )
      goto LABEL_269;
  }
  v169 = v167;
  TITLE_LABEL_BASE_WIDTH = (*v167)->static_fields->TITLE_LABEL_BASE_WIDTH;
  Master_object = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
  v172 = v168 <= TITLE_LABEL_BASE_WIDTH;
  v173 = (UnityEngine_Transform_o *)Master_object;
  if ( v172 )
  {
    if ( !byte_4B109C6 )
    {
      Master_object = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, giftIconId, v171);
      byte_4B109C6 = 1;
    }
    if ( !v173 )
      goto LABEL_269;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    y = static_fields->oneVector.fields.y;
    z = static_fields->oneVector.fields.z;
    x = static_fields->oneVector.fields.x;
  }
  else
  {
    Master_object = (int64_t)*v169;
    if ( !(*v169)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Master_object, giftIconId);
    v174 = this->fields.mTitleNameLb;
    if ( !v174 || !v173 )
      goto LABEL_269;
    y = 1.0;
    x = (float)(*v169)->static_fields->TITLE_LABEL_BASE_WIDTH / (float)v174->fields.mWidth;
    z = 1.0;
  }
  UnityEngine_Transform__set_localScale(v173, *(UnityEngine_Vector3_o *)&x, 0LL);
  Master_object = (int64_t)this->fields.mTitleNameLb;
  if ( !Master_object )
    goto LABEL_269;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v93 + 24), 0LL);
  this->fields.inputMessageObject = v257;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.inputMessageObject,
    (int64_t)v257,
    v179,
    v180,
    v181,
    v182,
    v183,
    v184);
  if ( QuestType != 3 )
  {
    Master_object = (int64_t)this->fields.mTitleShortcutSp;
    if ( !Master_object )
      goto LABEL_269;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0LL);
    Master_object = (int64_t)this->fields.mTitleShortcutSp;
    if ( !Master_object )
      goto LABEL_269;
    UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v93 + 24), 0LL);
    Master_object = (int64_t)this->fields.mTitleShortcutLb;
    if ( !Master_object )
      goto LABEL_269;
    goto LABEL_174;
  }
  ServantId = QuestEntity__getServantId(Mine, 0LL);
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_269;
  Master_object = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Master_object )
    goto LABEL_269;
  Master_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             ServantId,
                             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.mTitleShortcutSp )
    goto LABEL_269;
  v186 = Master_object;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mTitleShortcutSp, 0, 0LL);
  mTitleShortcutLb = this->fields.mTitleShortcutLb;
  if ( !v186 )
  {
    if ( !mTitleShortcutLb )
      goto LABEL_269;
    Master_object = (int64_t)this->fields.mTitleShortcutLb;
LABEL_174:
    UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    goto LABEL_175;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, giftIconId);
  v188 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v191 = *(_QWORD *)(v186 + 16);
  v190 = *(_QWORD *)(v186 + 24);
  v192 = (ServantLimitImageMaster_o *)v188;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v189);
  *(_QWORD *)&v267.fields.currentCryptoKey = v191;
  *(_QWORD *)&v267.fields.fakeValue = v190;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v267, 0LL);
  if ( !v192 )
    goto LABEL_269;
  Master_object = (int64_t)ServantLimitImageMaster__GetLimitCountSealedServantName(
                             v192,
                             Master_object,
                             limitCounta,
                             0LL);
  v161 = v256;
  if ( !mTitleShortcutLb )
    goto LABEL_269;
  UILabel__set_text(mTitleShortcutLb, (System_String_o *)Master_object, 0LL);
  Master_object = (int64_t)this->fields.mTitleShortcutLb;
  if ( !Master_object )
    goto LABEL_269;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v93 + 24), 0LL);
LABEL_175:
  ServantStatusQuestBoardDraw__ResetInfoTextList(this, v193);
  if ( v133 )
    goto LABEL_205;
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  isNotItemConsume = 0;
  endTime = qinf->fields.endTime;
  if ( endTime >= 1 && !QuestEntity__HasFlag(Mine, 32LL, 0LL) )
  {
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v197);
    v199 = LocalizationManager__Get((System_String_o *)StringLiteral_13504/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
    v203 = (QuestBoardInformationText_o *)sub_1BCAA2C(QuestBoardInformationText_TypeInfo, v200, v201, v202);
    QuestBoardInformationText___ctor(v203, v199, endTime, 0, 1, 0LL, 0LL);
    if ( !mInfoTextList )
      goto LABEL_269;
    items = mInfoTextList->fields._items;
    v211 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
    ++mInfoTextList->fields._version;
    if ( !items )
      goto LABEL_269;
    size = mInfoTextList->fields._size;
    v161 = v256;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        mInfoTextList,
        (Il2CppObject *)v203,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v211[4] + 192LL) + 112LL));
    }
    else
    {
      v213 = &items->obj.klass + size;
      mInfoTextList->fields._size = size + 1;
      v213[4] = (Il2CppClass *)v203;
      sub_1BCA784((PartyOrganizationUtility_o *)(v213 + 4), (int64_t)v203, v204, v205, v206, v207, v208, v209);
    }
  }
  v217 = qinf->fields.questPhase;
  v218 = MapControl_QuestInfo__GetPhaseMax(qinf, 0LL);
  v220 = this->fields.mInfoTextList;
  if ( v217 + 1 < v218 )
    v221 = v217 + 1;
  else
    v221 = v218;
  Master_object = (int64_t)ServantStatusQuestBoardDraw__GetCampaignText(
                             this,
                             v219,
                             v221,
                             0,
                             v161,
                             &fixedVal[1],
                             fixedVal,
                             &isNotItemConsume,
                             v249);
  if ( !v220 )
    goto LABEL_269;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v220,
    (System_Collections_Generic_IEnumerable_T__o *)Master_object,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  Master_object = (int64_t)this->fields.mInfoTextList;
  if ( !Master_object )
    goto LABEL_269;
  v222 = *(_DWORD *)(Master_object + 24);
  if ( v222 < 1 )
  {
LABEL_205:
    v224 = 0;
  }
  else
  {
    Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)Master_object,
                               v161->fields.mAlphaAnimCnt % v222,
                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
    if ( !Master_object )
      goto LABEL_269;
    QuestBoardInformationText__SetTime(
      (QuestBoardInformationText_o *)Master_object,
      &this->fields.mOptionInfoLb,
      &this->fields.mOptionInfoFrameSp,
      0LL);
    Master_object = (int64_t)this->fields.mOptionInfoLb;
    if ( !Master_object )
      goto LABEL_269;
    BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Master_object, 1.0, 0LL);
    v223 = fixedVal[1];
    v224 = 1;
    qinf->fields.isNotItemConsume = isNotItemConsume;
    v225 = fixedVal[0];
    qinf->fields.costCalcVal = v223;
    qinf->fields._fixedCostVal_k__BackingField = v225;
  }
  Master_object = (int64_t)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_269;
  Master_object = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_269;
  Master_object = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_269;
  Master_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_269;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v224, 0LL);
  Master_object = (int64_t)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_269;
  Master_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_269;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v224, 0LL);
  this->fields.mRewardIconInfs = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mRewardIconInfs, 0LL, v226, v227, v228, v229, v230, v231);
  Master_object = (int64_t)this->fields.mRewardIcon;
  if ( !Master_object )
    goto LABEL_269;
  Master_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_269;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  if ( (v258 & 1) != 0 && QuestEntity__HasFlag(Mine, 4096LL, 0LL) )
  {
    Master_object = (int64_t)this->fields.mRewardIcon;
    if ( !Master_object )
      goto LABEL_269;
    LODWORD(giftIconId) = 99;
LABEL_220:
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)Master_object, giftIconId, 0LL);
    Master_object = (int64_t)this->fields.mRewardIcon;
    if ( !Master_object )
      goto LABEL_269;
    Master_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
    if ( !Master_object )
      goto LABEL_269;
    v232 = 1;
    goto LABEL_223;
  }
  giftIconId = (unsigned int)Mine->fields.giftIconId;
  if ( (int)giftIconId >= 1 )
  {
    Master_object = (int64_t)this->fields.mRewardIcon;
    if ( !Master_object )
      goto LABEL_269;
    goto LABEL_220;
  }
  if ( Mine->fields.giftId >= 1 )
  {
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_269;
    Master_object = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !Master_object )
      goto LABEL_269;
    Master_object = (int64_t)GiftMaster__GetGiftListById((GiftMaster_o *)Master_object, Mine->fields.giftId, 0LL);
    if ( !Master_object )
      goto LABEL_269;
    v242 = *(_QWORD *)(Master_object + 24);
    v243 = (struct GiftEntity_array *)Master_object;
    if ( !v242 )
      goto LABEL_268;
    v244 = v161->fields.mAlphaAnimCnt % (int)v242;
    if ( v244 >= (unsigned int)v242 )
      sub_1BCAA44(Master_object, giftIconId);
    v245 = *(_DWORD **)(Master_object + 8LL * v244 + 32);
    if ( v245 )
    {
      giftIconId = (unsigned int)v245[11];
      Master_object = (int64_t)this->fields.mRewardIcon;
      v246 = v245[7];
      if ( (int)giftIconId < 1 )
      {
        if ( !Master_object )
          goto LABEL_269;
        v248 = v246 <= 1 ? -1 : v245[7];
        ItemIconComponent__SetGift_38855180((ItemIconComponent_o *)Master_object, v245[5], v245[6], v248, 0, 0LL);
      }
      else
      {
        if ( !Master_object )
          goto LABEL_269;
        v247 = v246 <= 1 ? -1 : v245[7];
        ItemIconComponent__SetItemImage_38857576((ItemIconComponent_o *)Master_object, giftIconId, v247, 0LL);
      }
      Master_object = (int64_t)this->fields.mRewardIcon;
      if ( Master_object )
      {
        Master_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
        if ( Master_object )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
LABEL_268:
          this->fields.mRewardIconInfs = v243;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.mRewardIconInfs,
            (int64_t)v243,
            v236,
            v237,
            v238,
            v239,
            v240,
            v241);
          goto LABEL_224;
        }
      }
    }
LABEL_269:
    sub_1BCAA3C(Master_object, giftIconId);
  }
  Master_object = (int64_t)this->fields.mRewardObj;
  if ( !Master_object )
    goto LABEL_269;
  v232 = 0;
LABEL_223:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v232, 0LL);
LABEL_224:
  Master_object = (int64_t)this->fields.mRewardObj;
  if ( !Master_object )
    goto LABEL_269;
  Master_object = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Master_object,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Master_object )
    goto LABEL_269;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v93 + 24), 0LL);
  Master_object = (int64_t)this->fields.mRewardIcon;
  if ( !Master_object )
    goto LABEL_269;
  ItemIconComponent__SetColor((ItemIconComponent_o *)Master_object, *(UnityEngine_Color_o *)(v93 + 24), 0LL);
  Master_object = (int64_t)v254;
  v233 = IsLimitCountSealQuest && v133;
  if ( !v254 || (v233 & 1) != 0 )
  {
    mServantLimitRewardObtainedSP = (UnityEngine_Component_o *)this->fields.mServantLimitRewardObtainedSP;
    if ( !v233 )
    {
LABEL_230:
      if ( !mServantLimitRewardObtainedSP )
        goto LABEL_269;
      Master_object = (int64_t)UnityEngine_Component__get_gameObject(mServantLimitRewardObtainedSP, 0LL);
      if ( !Master_object )
        goto LABEL_269;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
      v235 = 1;
      goto LABEL_241;
    }
  }
  else
  {
    Master_object = QuestBehaviorMaster__IsOpenQuestBehaviorCond(v254, this->fields.questId, phase, 10, 0LL);
    mServantLimitRewardObtainedSP = (UnityEngine_Component_o *)this->fields.mServantLimitRewardObtainedSP;
    if ( (Master_object & 1) == 0 )
      goto LABEL_230;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, giftIconId);
  AtlasManager__SetDownloadCommonSprite(
    (UISprite_o *)mServantLimitRewardObtainedSP,
    (System_String_o *)StringLiteral_20385/*"icon_reward_limits_release"*/,
    0LL);
  Master_object = (int64_t)this->fields.mServantLimitRewardObtainedSP;
  if ( !Master_object )
    goto LABEL_269;
  Master_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_269;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  Master_object = (int64_t)this->fields.mServantLimitRewardObtainedSP;
  if ( !Master_object )
    goto LABEL_269;
  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Master_object + 840LL))(
    Master_object,
    *(_QWORD *)(*(_QWORD *)Master_object + 848LL));
  Master_object = (int64_t)this->fields.mServantLimitRewardObtainedSP;
  if ( !Master_object )
    goto LABEL_269;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v93 + 24), 0LL);
  v235 = 0;
LABEL_241:
  Master_object = (int64_t)this->fields.mRewardGetSP;
  if ( !Master_object )
    goto LABEL_269;
  Master_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_269;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v133 & v235 & !HasStatus, 0LL);
  Master_object = (int64_t)this->fields.mRewardGetSP;
  if ( !Master_object )
    goto LABEL_269;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v93 + 24), 0LL);
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
      sub_1BCAA3C(0LL, method);
    ItemIconComponent__SetAlpha(mRewardIcon, alpha, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusQuestBoardDraw__UpdateInfoText(
        ServantStatusQuestBoardDraw_o *this,
        MapControl_QuestInfo_o *qinf,
        int32_t strIndex,
        int64_t checkTime,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mInfoTextList; // x0

  if ( (byte_4B13CFD & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__,
      qinf,
      *(_QWORD *)&strIndex);
    byte_4B13CFD = 1;
  }
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !mInfoTextList
    || (mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       mInfoTextList,
                                                                       strIndex,
                                                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__)) == 0LL )
  {
    sub_1BCAA3C(mInfoTextList, qinf);
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
    sub_1BCAA3C(this, 0LL);
  ServantStatusQuestBoardDraw__SetInfoTextAlpha(
    this,
    questBoardManager->fields.mAlphaAnimNow,
    (const MethodInfo *)questBoardManager);
  ServantStatusQuestBoardDraw__SetRewardIconAlpha(this, questBoardManager->fields.mAlphaAnimNow, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusQuestBoardDraw___SetAdvanceNoticeText_g__CalculateLabel_54_0(
        UILabel_o *label,
        System_String_o *message,
        int32_t baseHeight,
        int32_t indent,
        const MethodInfo *method)
{
  UILabel_o *v8; // x20
  int mHeight; // w22
  __int64 v10; // x1
  ServantStatusQuestBoardDraw_c *v11; // x0
  UnityEngine_Transform_o *transform; // x21
  float v13; // s0
  float v14; // s1
  float v15; // s2
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  v8 = label;
  if ( (byte_4B13D08 & 1) == 0 )
  {
    label = (UILabel_o *)sub_1BCA7E0(&ServantStatusQuestBoardDraw_TypeInfo, message, *(_QWORD *)&baseHeight);
    byte_4B13D08 = 1;
  }
  if ( !v8 )
    goto LABEL_11;
  UILabel__set_text(v8, message, 0LL);
  UILabel__AssumeNaturalSize(v8, 0LL);
  mHeight = v8->fields.mHeight;
  UIWidget__set_height((UIWidget_o *)v8, baseHeight, 0LL);
  v11 = ServantStatusQuestBoardDraw_TypeInfo;
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, v10);
    v11 = ServantStatusQuestBoardDraw_TypeInfo;
  }
  UILabel__SetCondensedScale(v8, v11->static_fields->ADVANCE_NOTICE_BASE_WIDTH - indent, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0LL);
  label = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0LL);
  if ( !label
    || (LODWORD(v13) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)label, 0LL),
        !transform) )
  {
LABEL_11:
    sub_1BCAA3C(label, message);
  }
  v14 = 1.0 - (float)((float)baseHeight / (float)mHeight);
  v15 = fminf(v14, 1.0);
  if ( v14 < 0.0 )
    v15 = 0.0;
  v16.fields.y = 1.0;
  v16.fields.x = v15 + v13;
  v16.fields.z = 1.0;
  UnityEngine_Transform__set_localScale(transform, v16, 0LL);
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
        sub_1BCAA44(this, boardMessageData);
      this = (ServantStatusQuestBoardDraw_o *)boardMessageData->m_Items[v5];
      if ( !this )
        break;
      if ( HIDWORD(this->fields.m_CancellationTokenSource) == 4 && LODWORD(this->fields.mcBaseP) == eventId )
        return (BoardMessageEntity_o *)this;
      if ( max_length == ++v5 )
        return 0LL;
    }
LABEL_12:
    sub_1BCAA3C(this, boardMessageData);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *_4__this; // x20
  UISprite_o *v9; // x0
  __int64 v10; // x1
  struct ServantStatusQuestBoardDraw_o *v11; // x8
  UnityEngine_Object_o *mcBaseP; // x20
  struct ServantStatusQuestBoardDraw_o *v13; // x8
  UISprite_o *v14; // x20
  ServantStatusQuestBoardDraw_c *v15; // x0
  System_String_o *BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME; // x21
  struct ServantStatusQuestBoardDraw_o *v17; // x9
  char v18; // w8
  struct ServantStatusQuestBoardDraw_o *v19; // x8
  UISprite_o *v20; // x20
  struct ServantStatusQuestBoardDraw_o *v21; // x8
  struct ServantStatusQuestBoardDraw_o *v22; // x8

  if ( (byte_4B13D09 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&ServantStatusQuestBoardDraw_TypeInfo, v6, v7);
    byte_4B13D09 = 1;
  }
  _4__this = (UnityEngine_Object_o *)this->fields.__4__this;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v9 = (UISprite_o *)UnityEngine_Object__op_Equality(_4__this, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) == 0 )
  {
    v11 = this->fields.__4__this;
    if ( v11 )
    {
      mcBaseP = (UnityEngine_Object_o *)v11->fields.mcBaseP;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      v9 = (UISprite_o *)UnityEngine_Object__op_Equality(mcBaseP, 0LL, 0LL);
      if ( ((unsigned __int8)v9 & 1) != 0 )
        return;
      v13 = this->fields.__4__this;
      if ( v13 )
      {
        v14 = v13->fields.mcBaseP;
        v15 = ServantStatusQuestBoardDraw_TypeInfo;
        if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, v10);
          v15 = ServantStatusQuestBoardDraw_TypeInfo;
        }
        BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME = v15->static_fields->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10);
        v9 = (UISprite_o *)AtlasManager__SetEventUI(v14, BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME, 0LL);
        v17 = this->fields.__4__this;
        if ( v17 )
        {
          v18 = (char)v9;
          v9 = v17->fields.mcBaseP;
          if ( (v18 & 1) != 0 )
          {
            if ( !v9 )
              goto LABEL_30;
          }
          else
          {
            if ( !v9 )
              goto LABEL_30;
            UISprite__set_atlas(v9, v17->fields.basePanelAtlas, 0LL);
            v19 = this->fields.__4__this;
            if ( !v19 )
              goto LABEL_30;
            v9 = (UISprite_o *)ServantStatusQuestBoardDraw_TypeInfo;
            v20 = v19->fields.mcBaseP;
            if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, v10);
            if ( !v20 )
              goto LABEL_30;
            UISprite__set_spriteName(
              v20,
              ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME,
              0LL);
            v21 = this->fields.__4__this;
            if ( !v21 )
              goto LABEL_30;
            v9 = v21->fields.mcBaseP;
            if ( !v9 )
              goto LABEL_30;
          }
          v9 = (UISprite_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v9->klass->vtable._33_MakePixelPerfect.method)(
                               v9,
                               v9->klass->vtable._34_get_minWidth.methodPtr);
          v22 = this->fields.__4__this;
          if ( v22 )
          {
            v9 = v22->fields.mcBaseP;
            if ( v9 )
            {
              UIWidget__set_color((UIWidget_o *)v9, this->fields.baseCol, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_30:
    sub_1BCAA3C(v9, v10);
  }
}


void __fastcall ServantStatusQuestBoardDraw___c__DisplayClass48_0___SetItem_b__1(
        ServantStatusQuestBoardDraw___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *_4__this; // x20
  UISprite_o *v9; // x0
  __int64 v10; // x1
  struct ServantStatusQuestBoardDraw_o *v11; // x8
  UnityEngine_Object_o *mTitleSp; // x20
  struct ServantStatusQuestBoardDraw_o *v13; // x8
  UISprite_o *v14; // x20
  ServantStatusQuestBoardDraw_c *v15; // x0
  System_String_o *TITLE_SPRITE_NAME_LIMIT_UNSEAL; // x21
  struct ServantStatusQuestBoardDraw_o *v17; // x9
  char v18; // w8
  struct ServantStatusQuestBoardDraw_o *v19; // x8
  UISprite_o *v20; // x20
  _BOOL4 isMap; // w21
  __int64 v22; // x9
  struct ServantStatusQuestBoardDraw_o *v23; // x8
  struct ServantStatusQuestBoardDraw_o *v24; // x8

  if ( (byte_4B13D0A & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&ServantStatusQuestBoardDraw_TypeInfo, v6, v7);
    byte_4B13D0A = 1;
  }
  _4__this = (UnityEngine_Object_o *)this->fields.__4__this;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v9 = (UISprite_o *)UnityEngine_Object__op_Equality(_4__this, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) == 0 )
  {
    v11 = this->fields.__4__this;
    if ( v11 )
    {
      mTitleSp = (UnityEngine_Object_o *)v11->fields.mTitleSp;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      v9 = (UISprite_o *)UnityEngine_Object__op_Equality(mTitleSp, 0LL, 0LL);
      if ( ((unsigned __int8)v9 & 1) != 0 )
        return;
      v13 = this->fields.__4__this;
      if ( v13 )
      {
        v14 = v13->fields.mTitleSp;
        v15 = ServantStatusQuestBoardDraw_TypeInfo;
        if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, v10);
          v15 = ServantStatusQuestBoardDraw_TypeInfo;
        }
        TITLE_SPRITE_NAME_LIMIT_UNSEAL = v15->static_fields->TITLE_SPRITE_NAME_LIMIT_UNSEAL;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10);
        v9 = (UISprite_o *)AtlasManager__SetEventUI(v14, TITLE_SPRITE_NAME_LIMIT_UNSEAL, 0LL);
        v17 = this->fields.__4__this;
        if ( v17 )
        {
          v18 = (char)v9;
          v9 = v17->fields.mTitleSp;
          if ( (v18 & 1) != 0 )
          {
            if ( !v9 )
              goto LABEL_32;
          }
          else
          {
            if ( !v9 )
              goto LABEL_32;
            UISprite__set_atlas(v9, v17->fields.basePanelAtlas, 0LL);
            v19 = this->fields.__4__this;
            if ( !v19 )
              goto LABEL_32;
            v9 = (UISprite_o *)ServantStatusQuestBoardDraw_TypeInfo;
            v20 = v19->fields.mTitleSp;
            isMap = this->fields.isMap;
            if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo, v10);
            if ( !v20 )
              goto LABEL_32;
            v22 = 56LL;
            if ( !isMap )
              v22 = 48LL;
            UISprite__set_spriteName(
              v20,
              *(System_String_o **)((char *)&ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH
                                  + v22),
              0LL);
            v23 = this->fields.__4__this;
            if ( !v23 )
              goto LABEL_32;
            v9 = v23->fields.mTitleSp;
            if ( !v9 )
              goto LABEL_32;
          }
          v9 = (UISprite_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v9->klass->vtable._33_MakePixelPerfect.method)(
                               v9,
                               v9->klass->vtable._34_get_minWidth.methodPtr);
          v24 = this->fields.__4__this;
          if ( v24 )
          {
            v9 = v24->fields.mTitleSp;
            if ( v9 )
            {
              UIWidget__set_color((UIWidget_o *)v9, this->fields.baseCol, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_32:
    sub_1BCAA3C(v9, v10);
  }
}