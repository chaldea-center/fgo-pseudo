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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct ServantStatusQuestBoardDraw_StaticFields *static_fields; // x0
  int64_t v16; // x1
  struct ServantStatusQuestBoardDraw_StaticFields *v17; // x0
  int64_t v18; // x1
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
  int64_t v57; // x1
  struct ServantStatusQuestBoardDraw_StaticFields *v58; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7

  if ( (byte_4C1F905 & 1) == 0 )
  {
    sub_1C3B764(&ServantStatusQuestBoardDraw_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_20705/*"large"*/, v8);
    sub_1C3B764(&StringLiteral_20706/*"last"*/, v9);
    sub_1C3B764(&StringLiteral_20704/*"language"*/, v10);
    sub_1C3B764(&StringLiteral_20822/*"lo-LA"*/, v11);
    sub_1C3B764(&StringLiteral_20703/*"langVersion"*/, v12);
    sub_1C3B764(&StringLiteral_20707/*"lastAccessTime"*/, v13);
    sub_1C3B764(&StringLiteral_20699/*"l9"*/, v14);
    byte_4C1F905 = 1;
  }
  static_fields = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->TITLE_LABEL_BASE_WIDTH = xmmword_C0E1E0;
  static_fields->ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X = -208.0;
  v16 = StringLiteral_20699/*"l9"*/;
  static_fields->DARK_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_20699/*"l9"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->DARK_BOARD_SPRITE_NAME, v16, v2, v3, v4, v5, v6, v7);
  v17 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  *(_QWORD *)&v17->DARK_BOARD_WIDTH = 0x7A000001F0LL;
  v18 = StringLiteral_20707/*"lastAccessTime"*/;
  v17->BASE_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_20707/*"lastAccessTime"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v17->BASE_BOARD_SPRITE_NAME, v18, v19, v20, v21, v22, v23, v24);
  v25 = StringLiteral_20704/*"language"*/;
  v26 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v26->TITLE_SPRITE_NAME_INTERLUDE = (struct System_String_o *)StringLiteral_20704/*"language"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v26->TITLE_SPRITE_NAME_INTERLUDE, v25, v27, v28, v29, v30, v31, v32);
  v33 = StringLiteral_20703/*"langVersion"*/;
  v34 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v34->TITLE_SPRITE_NAME_INTERLUDE_MAP = (struct System_String_o *)StringLiteral_20703/*"langVersion"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v34->TITLE_SPRITE_NAME_INTERLUDE_MAP, v33, v35, v36, v37, v38, v39, v40);
  v41 = StringLiteral_20705/*"large"*/;
  v42 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v42->TITLE_SPRITE_NAME_RAINFORCEMENT = (struct System_String_o *)StringLiteral_20705/*"large"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v42->TITLE_SPRITE_NAME_RAINFORCEMENT, v41, v43, v44, v45, v46, v47, v48);
  v49 = StringLiteral_20822/*"lo-LA"*/;
  v50 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v50->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME = (struct System_String_o *)StringLiteral_20822/*"lo-LA"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v50->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME,
    v49,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  v57 = StringLiteral_20706/*"last"*/;
  v58 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v58->TITLE_SPRITE_NAME_LIMIT_UNSEAL = (struct System_String_o *)StringLiteral_20706/*"last"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v58->TITLE_SPRITE_NAME_LIMIT_UNSEAL, v57, v59, v60, v61, v62, v63, v64);
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

  if ( (byte_4C1F8FD & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, qinf);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__, v6);
    sub_1C3B764(&NetworkManager_TypeInfo, v7);
    byte_4C1F8FD = 1;
  }
  if ( (byte_4C1F8FE & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, qinf);
    byte_4C1F8FE = 1;
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
                                                                       (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
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
      sub_1C3B9C0(mInfoTextList, qinf);
    }
  }
  if ( (byte_4C1F8FF & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, qinf);
    byte_4C1F8FF = 1;
    mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  }
  if ( !mInfoTextList || !mInfoTextList->fields._size )
    return;
  mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 mInfoTextList,
                                                                 0,
                                                                 (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
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
    sub_1C3B9C8(this, questBoardManager);
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
      ItemIconComponent__SetItemImage_39568612((ItemIconComponent_o *)this, (int32_t)questBoardManager, v8, 0LL);
      return;
    }
LABEL_18:
    sub_1C3B9C0(this, questBoardManager);
  }
  if ( !this )
    goto LABEL_18;
  if ( num <= 1 )
    v9 = -1;
  else
    v9 = v6->fields.num;
  ItemIconComponent__SetGift_39566180((ItemIconComponent_o *)this, v6->fields.type, v6->fields.objectId, v9, 0, 0LL);
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

  if ( (byte_4C1F902 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_QuestPhaseMaster___, questEntity);
    sub_1C3B764(&DataManager_TypeInfo, v17);
    sub_1C3B764(&LocalizationManager_TypeInfo, v18);
    sub_1C3B764(&QuestBoardInformationText_TypeInfo, v19);
    sub_1C3B764(&StringLiteral_25497, v20);
    this = (ServantStatusQuestBoardDraw_o *)sub_1C3B764(&StringLiteral_13632/*"The data connection was made from an address that is different than the address to which the FTP connection was made."*/, v21);
    byte_4C1F902 = 1;
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
  this = (ServantStatusQuestBoardDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !questEntity || !this )
LABEL_40:
    sub_1C3B9C0(this, questEntity);
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
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_13632/*"The data connection was made from an address that is different than the address to which the FTP connection was made."*/, 0LL);
  EventName = (Il2CppObject *)EventEntity__getEventName(eventEnt, 0LL);
  v29 = System_String__Format_63382984(v27, EventName, (Il2CppObject *)StringLiteral_25497, 0LL);
  EndTime = EventEntity__GetEndTime(eventEnt, 0, 0LL);
  v24 = (QuestBoardInformationText_o *)sub_1C3B9B0(QuestBoardInformationText_TypeInfo);
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
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  const MethodInfo *v52; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4C1F900 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&quest_id);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v16);
    sub_1C3B764(&DataManager_TypeInfo, v17);
    sub_1C3B764(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v18);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__, v19);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__, v20);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__, v21);
    sub_1C3B764(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo, v22);
    sub_1C3B764(&LocalizationManager_TypeInfo, v23);
    sub_1C3B764(&QuestBoardInformationText_TypeInfo, v24);
    sub_1C3B764(&StringLiteral_25497, v25);
    sub_1C3B764(&StringLiteral_117/*"   "*/, v26);
    sub_1C3B764(&StringLiteral_13642/*"The derived particle's range is not a valid restriction of the base particle's range according to All:All,Sequence:Sequence -- Recurse Rule 1 or Choice:Choice -- RecurseLax."*/, v27);
    byte_4C1F900 = 1;
  }
  entity = 0LL;
  v28 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)ServantStatusQuestBoardDraw__GetCampaignTextListByEventQuestMaster(
                                                                                        this,
                                                                                        this->fields.questId,
                                                                                        phase,
                                                                                        isQuestNoneCleared,
                                                                                        questBoardManager,
                                                                                        costCalcVal,
                                                                                        fixedVal,
                                                                                        isNotItemConsume,
                                                                                        v52);
  if ( !v28 )
    goto LABEL_25;
  System_Collections_Generic_List_object___AddRange(
    v28,
    CampaignTextListByEventQuestMaster,
    (const MethodInfo_368BE78 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
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
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !CampaignTextListByEventQuestMaster )
    goto LABEL_25;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)CampaignTextListByEventQuestMaster,
          &entity,
          v32->fields.eventId,
          (const MethodInfo_329AE94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
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
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_13642/*"The derived particle's range is not a valid restriction of the base particle's range according to All:All,Sequence:Sequence -- Recurse Rule 1 or Choice:Choice -- RecurseLax."*/, 0LL);
  v39 = System_String__Concat_63381876(
          EventName,
          (System_String_o *)StringLiteral_117/*"   "*/,
          v38,
          (System_String_o *)StringLiteral_25497,
          0LL);
  v40 = (QuestBoardInformationText_o *)sub_1C3B9B0(QuestBoardInformationText_TypeInfo);
  QuestBoardInformationText___ctor(v40, v39, v36, 0, 1, 0LL, 0LL);
  items = v28->fields._items;
  v48 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
  ++v28->fields._version;
  if ( !items )
LABEL_25:
    sub_1C3B9C0(CampaignTextListByEventQuestMaster, v30);
  size = v28->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v28,
      (Il2CppObject *)v40,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
  }
  else
  {
    v50 = &items->obj.klass + size;
    v28->fields._size = size + 1;
    v50[4] = (Il2CppClass *)v40;
    sub_1C3B708((PartyOrganizationUtility_o *)(v50 + 4), (int64_t)v40, v41, v42, v43, v44, v45, v46);
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
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  int64_t v43; // x1
  Il2CppClass **v44; // x0
  const MethodInfo *v46; // [xsp+8h] [xbp-78h]
  bool v47; // [xsp+14h] [xbp-6Ch]
  bool *v48; // [xsp+18h] [xbp-68h]

  if ( (byte_4C1F901 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventCampaignMaster___, *(_QWORD *)&questId);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventQuestMaster___, v16);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestMaster___, v17);
    sub_1C3B764(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v18);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__, v19);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__, v20);
    sub_1C3B764(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo, v21);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4C1F901 = 1;
  }
  v23 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  v47 = isQuestNoneCleared;
  v26 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = DataManager__GetMasterData_object_(
               v26,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               questId,
               (const MethodInfo_329AE48 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !questBoardManager )
    goto LABEL_22;
  mListCreatedTime = questBoardManager->fields.mListCreatedTime;
  v29 = (QuestEntity_o *)Instance;
  Instance = DataManager__GetMasterData_object_(
               v26,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventQuestMaster___);
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
        sub_1C3B9C8(Instance, v25);
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
                     v47,
                     costCalcVal,
                     fixedVal,
                     v48,
                     v46);
        if ( Instance )
        {
          if ( !v23 )
            break;
          items = v23->fields._items;
          v41 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
          ++v23->fields._version;
          if ( !items )
            break;
          size = v23->fields._size;
          v43 = (int64_t)Instance;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v23,
              (Il2CppObject *)Instance,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
          }
          else
          {
            v44 = &items->obj.klass + size;
            v23->fields._size = size + 1;
            v44[4] = (Il2CppClass *)v43;
            sub_1C3B708((PartyOrganizationUtility_o *)(v44 + 4), v43, v34, v35, v36, v37, v38, v39);
          }
        }
      }
      v30 = *((_DWORD *)v31 + 6);
      if ( (int)++v32 >= v30 )
        return (System_Collections_Generic_List_QuestBoardInformationText__o *)v23;
    }
LABEL_22:
    sub_1C3B9C0(Instance, v25);
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
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x1
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  MapControl_WarInfo_o *v38; // x20
  __int64 v39; // x8
  __int64 v40; // x23
  __int64 v41; // x8
  int32_t v42; // w19
  int32_t v43; // w22
  int64_t v44; // x21
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4C1F8F7 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestReleaseMaster___, v3);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v4);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v13);
    sub_1C3B764(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v14);
    sub_1C3B764(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v15);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v16);
    byte_4C1F8F7 = 1;
  }
  entityList = 0LL;
  memset(&v46, 0, sizeof(v46));
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
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
    v24 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v24,
      (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    IsQuestReleaseAll = (MapControl_WarInfo_o *)entityList;
    if ( !entityList )
      goto LABEL_53;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v45,
      (System_Collections_Generic_List_object__o *)entityList,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    v46 = v45;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v46,
              (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
    {
      if ( !v46.fields._current )
        sub_1C3B9C0(0LL, v25);
      v26 = (Il2CppObject *)QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
                              (QuestReleaseOverwriteEntity_o *)v46.fields._current,
                              0LL);
      v33 = (int64_t)v26;
      if ( !v24 )
        sub_1C3B9C0(v26, v26);
      items = v24->fields._items;
      v35 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
      ++v24->fields._version;
      if ( !items )
        sub_1C3B9C0(v26, v26);
      size = v24->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v24,
          v26,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        v24->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v33;
        sub_1C3B708((PartyOrganizationUtility_o *)(v37 + 4), v33, v27, v28, v29, v30, v31, v32);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v46,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    if ( !v24 )
      goto LABEL_53;
    IsQuestReleaseAll = (MapControl_WarInfo_o *)System_Collections_Generic_List_object___ToArray(
                                                  v24,
                                                  (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    v38 = IsQuestReleaseAll;
    if ( IsQuestReleaseAll )
      goto LABEL_37;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsQuestReleaseAll = (MapControl_WarInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !IsQuestReleaseAll )
LABEL_53:
    sub_1C3B9C0(IsQuestReleaseAll, v18);
  IsQuestReleaseAll = (MapControl_WarInfo_o *)QuestReleaseMaster__getListByQuestID(
                                                (QuestReleaseMaster_o *)IsQuestReleaseAll,
                                                qinf->fields.questId,
                                                0LL);
  v38 = IsQuestReleaseAll;
LABEL_37:
  if ( !v38 )
    goto LABEL_53;
  v39 = *(_QWORD *)&v38->fields.status;
  if ( !v39 )
  {
    v19 = qinf->fields.dispType != 1;
    return v19 & 1;
  }
  if ( (int)v39 < 1 )
    goto LABEL_8;
  v40 = 0LL;
  do
  {
    if ( (unsigned int)v40 >= (unsigned int)v39 )
      sub_1C3B9C8(IsQuestReleaseAll, v18);
    v41 = *((_QWORD *)&v38->fields.mapInfoList + v40);
    if ( !v41 )
      goto LABEL_53;
    v43 = *(_DWORD *)(v41 + 20);
    v42 = *(_DWORD *)(v41 + 24);
    v44 = *(_QWORD *)(v41 + 32);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestReleaseAll = (MapControl_WarInfo_o *)CondType__IsOpen(v43, v42, v44, 0, 0LL, 0LL);
    if ( ((unsigned __int8)IsQuestReleaseAll & 1) == 0 )
      break;
    LODWORD(v39) = v38->fields.status;
    ++v40;
  }
  while ( (int)v40 < (int)v39 );
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

  if ( (byte_4C1F8FF & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, method);
    byte_4C1F8FF = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  return !mInfoTextList || mInfoTextList->fields._size == 0;
}


bool __fastcall ServantStatusQuestBoardDraw__IsMultiInfoText(
        ServantStatusQuestBoardDraw_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8

  if ( (byte_4C1F8FE & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, method);
    byte_4C1F8FE = 1;
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

  if ( (byte_4C1F903 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_QuestRestrictionInfoMaster___, questEntity);
    sub_1C3B764(&DataManager_TypeInfo, v6);
    byte_4C1F903 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
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
        return v10 & ~QuestEntity__HasFlag_40925964(questEntity, 2LL, phase, 0LL) & 1;
      }
LABEL_17:
      sub_1C3B9C0(Master_object, v8);
    }
  }
  else if ( !QuestEntity__HasFlag_40925964(questEntity, 0x80000LL, phase, 0LL) )
  {
    HasFlag = QuestEntity__HasFlag_40925964(questEntity, 0x100000LL, phase, 0LL);
    goto LABEL_15;
  }
  v10 = 0;
  return v10 & ~QuestEntity__HasFlag_40925964(questEntity, 2LL, phase, 0LL) & 1;
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

  if ( (byte_4C1F904 & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, method);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v3);
    sub_1C3B764(&Method_ServantStatusQuestBoardDraw_OnClick__, v4);
    sub_1C3B764(&StringLiteral_10061/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/, v5);
    byte_4C1F904 = 1;
  }
  inputMessageObject = (UnityEngine_Object_o *)this->fields.inputMessageObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(inputMessageObject, 0LL, 0LL) || (questId = this->fields.questId) == 0 )
  {
    v14 = Method_ServantStatusQuestBoardDraw_OnClick__;
    if ( (*((_BYTE *)Method_ServantStatusQuestBoardDraw_OnClick__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1C3B77C(Method_ServantStatusQuestBoardDraw_OnClick__);
    v15 = (System_Reflection_MethodBase_o *)sub_1C3B748(v14, v14[4]);
    OverwriteAssetSoundName__PlaySystemSe(v15, 2, 0, 0LL);
  }
  else
  {
    v11 = this->fields.inputMessageObject;
    v16 = questId;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v7, v8, v9);
    if ( !v11 )
      sub_1C3B9C0(v12, v13);
    UnityEngine_GameObject__SendMessage_71104120(v11, (System_String_o *)StringLiteral_10061/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/, v12, 0LL);
  }
}


void __fastcall ServantStatusQuestBoardDraw__ResetInfoTextList(
        ServantStatusQuestBoardDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_QuestBoardInformationText__o *v5; // x8
  PartyOrganizationUtility_o *p_mInfoTextList; // x19
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // t1
  int32_t size; // w2
  int v9; // w9
  System_Collections_Generic_List_object__o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4C1F8FA & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__Clear__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__, v3);
    sub_1C3B764(&System_Collections_Generic_List_QuestBoardInformationText__TypeInfo, v4);
    byte_4C1F8FA = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  p_mInfoTextList = (PartyOrganizationUtility_o *)&this->fields.mInfoTextList;
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
    v10 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_QuestBoardInformationText__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_QuestBoardInformationText___ctor__);
    p_mInfoTextList->klass = (PartyOrganizationUtility_c *)v10;
    sub_1C3B708(p_mInfoTextList, (int64_t)v10, v11, v12, v13, v14, v15, v16);
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
  Il2CppClass *klass; // x1
  System_String_o *monitor; // x20
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  bool v35; // w25
  int32_t monitor_high; // w22
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
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x27
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t v64; // x27
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int64_t v74; // x27
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int64_t v84; // x27
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v86; // x23
  _BOOL4 v87; // w26
  UILabel_o *mTitleNameLb; // x24
  int32_t v89; // w21
  UILabel_o *mCondChangeMessage; // x19
  struct ServantStatusQuestBoardDraw_StaticFields *static_fields; // x8
  __int64 v92; // x9
  int32_t v93; // w24
  int32_t leftIndent; // w25
  float v95; // s8
  float ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X; // s9
  float v97; // s1
  float v98; // s0
  int v99; // s2
  float v100; // s9
  float v101; // s0
  float v102; // s1
  float v103; // s0
  int v104; // s2
  float v105; // s1
  int v106; // s2
  UIWidget_o *mOverwriteAdvanceNoticeLb; // x22
  const MethodInfo *v108; // x4
  const MethodInfo *v109; // x4
  System_String_o *overlayClosedMessage; // x20
  UILabel_o *v111; // x21
  float v112; // s8
  UnityEngine_Object_o *mOverwriteAdvanceNoticeArrowObj; // x20
  __int64 v114; // x0
  char v115; // [xsp+8h] [xbp-98h]
  int32_t Minute; // [xsp+Ch] [xbp-94h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-90h] BYREF
  int32_t Day; // [xsp+14h] [xbp-8Ch] BYREF
  int64_t value; // [xsp+18h] [xbp-88h] BYREF
  uint64_t dateData; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-78h] BYREF
  System_DateTime_o v122; // 0:x0.8
  System_DateTime_o v123; // 0:x0.8
  System_DateTime_o v124; // 0:x0.8
  System_DateTime_o v125; // 0:x0.8
  UnityEngine_Vector3_o v126; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C1F8FC & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_ClosedMessageMaster___, *(_QWORD *)&questReleaseClosedID);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v13);
    sub_1C3B764(&Method_DataManager_GetMaster_WarMaster___, v14);
    sub_1C3B764(&DataManager_TypeInfo, v15);
    sub_1C3B764(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v16);
    sub_1C3B764(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v17);
    sub_1C3B764(&System_DateTime_TypeInfo, v18);
    sub_1C3B764(&int_TypeInfo, v19);
    sub_1C3B764(&long_TypeInfo, v20);
    sub_1C3B764(&LocalizationManager_TypeInfo, v21);
    sub_1C3B764(&NetworkManager_TypeInfo, v22);
    sub_1C3B764(&object___TypeInfo, v23);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v24);
    sub_1C3B764(&ServantStatusQuestBoardDraw_TypeInfo, v25);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v26);
    sub_1C3B764(&StringLiteral_15108/*"WARBOARD_SWAP_CONFIRMATION_SVT_MESSAGE_HAS_COST"*/, v27);
    sub_1C3B764(&StringLiteral_1/*""*/, v28);
    byte_4C1F8FC = 1;
  }
  dateData = 0LL;
  entity = 0LL;
  if ( questReleaseClosedID < 1 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ClosedMessageMaster___);
  if ( !Master_object )
    goto LABEL_125;
  monitor = (System_String_o *)StringLiteral_1/*""*/;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         questReleaseClosedID,
         (const MethodInfo_329AE94 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__) )
  {
    Master_object = (__int64)entity;
    if ( !entity )
      goto LABEL_125;
    monitor = (System_String_o *)entity[1].monitor;
    Master_object = ClosedMessageEntity__IsChangeDispClosedMessage((ClosedMessageEntity_o *)entity, 0LL);
    if ( !entity )
      goto LABEL_125;
    v35 = Master_object;
    Master_object = ClosedMessageEntity__IsChangeDispPositionLeft((ClosedMessageEntity_o *)entity, 0LL);
    if ( !entity )
      goto LABEL_125;
    monitor_high = HIDWORD(entity[2].monitor);
  }
  else
  {
    monitor_high = 0;
    Master_object = 0LL;
    v35 = 0;
  }
  if ( !questReleaseEntity )
    goto LABEL_125;
  v115 = Master_object;
  switch ( questReleaseEntity->fields.type )
  {
    case 1:
      targetId = questReleaseEntity->fields.targetId;
      v40 = (System_String_o *)StringLiteral_1/*""*/;
      Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Master_object )
        goto LABEL_125;
      WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Master_object, targetId, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !Master_object )
        goto LABEL_125;
      v42 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              WarID_ByQuestID,
              (const MethodInfo_329AE48 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
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
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
      if ( !Master_object )
        goto LABEL_125;
      EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                                 (QuestReleaseOverwriteMaster_o *)Master_object,
                                 this->fields.questId,
                                 checkTime,
                                 0LL);
      v86 = EntityByQuestIdAndTime;
      if ( !EntityByQuestIdAndTime )
      {
        v87 = 0;
        if ( v35 )
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
              if ( !v87 )
                return;
              Master_object = (__int64)this->fields.mCondObject;
              if ( Master_object )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
                if ( v86 )
                {
                  Master_object = (__int64)this->fields.mCondChangeMessage;
                  if ( Master_object )
                  {
                    UILabel__set_text((UILabel_o *)Master_object, v86->fields.overlayClosedMessage, 0LL);
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
      v87 = !System_String__IsNullOrEmpty(EntityByQuestIdAndTime->fields.overlayClosedMessage, 0LL);
      if ( !v35 )
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
          v89 = monitor_high;
        }
        else
        {
          v89 = monitor_high;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15108/*"WARBOARD_SWAP_CONFIRMATION_SVT_MESSAGE_HAS_COST"*/, 0LL);
          klass = (Il2CppClass *)Master_object;
        }
        if ( !mTitleNameLb )
LABEL_125:
          sub_1C3B9C0(Master_object, klass);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15108/*"WARBOARD_SWAP_CONFIRMATION_SVT_MESSAGE_HAS_COST"*/, 0LL);
        if ( !mTitleNameLb )
          goto LABEL_125;
        klass = (Il2CppClass *)Master_object;
        v89 = monitor_high;
      }
      UILabel__set_text(mTitleNameLb, (System_String_o *)klass, 0LL);
      Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
        Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      }
      static_fields = *(struct ServantStatusQuestBoardDraw_StaticFields **)(Master_object + 184);
      v92 = 12LL;
      if ( !v87 )
        v92 = 8LL;
      v93 = *(int32_t *)((char *)&static_fields->TITLE_LABEL_BASE_WIDTH + v92);
      if ( v87 )
      {
        if ( !v86 )
          goto LABEL_125;
        leftIndent = v86->fields.leftIndent;
      }
      else
      {
        leftIndent = 0;
      }
      v95 = (float)v89;
      if ( (v115 & 1) != 0 )
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
        v97 = 24.0;
        if ( !v87 )
          v97 = 0.0;
        v99 = 0;
        v98 = ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X + v95;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)Master_object,
          *(UnityEngine_Vector3_o *)(&v97 - 1),
          0LL);
        Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
        if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
          Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
        }
        if ( !this->fields.mOverwriteAdvanceNoticeLb )
          goto LABEL_125;
        v100 = *(float *)(*(_QWORD *)(Master_object + 184) + 16LL);
        UIWidget__set_pivot((UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb, 3, 0LL);
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !Master_object )
          goto LABEL_125;
        Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
        if ( !Master_object )
          goto LABEL_125;
        v101 = v100 + (float)leftIndent;
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
        v102 = 24.0;
        if ( !v87 )
          v102 = 0.0;
        v104 = 0;
        v103 = v95 * 0.5;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)Master_object,
          *(UnityEngine_Vector3_o *)(&v102 - 1),
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
        v101 = (float)leftIndent * 0.5;
      }
      v105 = -26.0;
      v106 = 0;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)Master_object,
        *(UnityEngine_Vector3_o *)&v101,
        0LL);
      Master_object = (__int64)this->fields.mAdvanceNoticeLb;
      if ( !Master_object )
        goto LABEL_125;
      UIWidget__set_height((UIWidget_o *)Master_object, v93, 0LL);
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
        v93,
        v89,
        v108);
      if ( v87 )
      {
        Master_object = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
        if ( !Master_object )
          goto LABEL_125;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
        if ( !v86 )
          goto LABEL_125;
        overlayClosedMessage = v86->fields.overlayClosedMessage;
        v111 = this->fields.mOverwriteAdvanceNoticeLb;
        if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
        v112 = v95 * 0.5;
        ServantStatusQuestBoardDraw___SetAdvanceNoticeText_g__CalculateLabel_54_0(
          v111,
          overlayClosedMessage,
          v93,
          leftIndent,
          v109);
      }
      else
      {
        v112 = 0.0;
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
            v126.fields.y = 0.0;
            v126.fields.z = 0.0;
            v126.fields.x = v112;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Master_object, v126, 0LL);
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
      PrioredName = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &value, v32, v33, v34);
      goto LABEL_16;
    case 0xC:
      if ( !questEntity )
        goto LABEL_125;
      OpenedAt = QuestEntity__getOpenedAt(questEntity, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      dateData = NetworkManager__getServerDateTime_39987360(OpenedAt, 0LL).fields._dateData;
      v44 = (System_Object_array *)sub_1C3B80C(object___TypeInfo, 4LL);
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v122.fields._dateData = (uint64_t)&dateData;
      LODWORD(value) = System_DateTime__get_Month(v122, 0LL);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &value, v45, v46, v47);
      if ( !v44 )
        goto LABEL_125;
      v54 = Master_object;
      if ( Master_object )
      {
        Master_object = sub_1C3B8A0(Master_object, v44->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_127;
      }
      if ( !v44->max_length )
        goto LABEL_126;
      v44->m_Items[0] = (Il2CppObject *)v54;
      sub_1C3B708((PartyOrganizationUtility_o *)v44->m_Items, v54, v48, v49, v50, v51, v52, v53);
      v123.fields._dateData = (uint64_t)&dateData;
      Day = System_DateTime__get_Day(v123, 0LL);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Day, v55, v56, v57);
      v64 = Master_object;
      if ( Master_object )
      {
        Master_object = sub_1C3B8A0(Master_object, v44->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_127;
      }
      if ( v44->max_length <= 1 )
        goto LABEL_126;
      v44->m_Items[1] = (Il2CppObject *)v64;
      sub_1C3B708((PartyOrganizationUtility_o *)&v44->m_Items[1], v64, v58, v59, v60, v61, v62, v63);
      v124.fields._dateData = (uint64_t)&dateData;
      Hour = System_DateTime__get_Hour(v124, 0LL);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Hour, v65, v66, v67);
      v74 = Master_object;
      if ( Master_object )
      {
        Master_object = sub_1C3B8A0(Master_object, v44->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_127;
      }
      if ( v44->max_length <= 2 )
        goto LABEL_126;
      v44->m_Items[2] = (Il2CppObject *)v74;
      sub_1C3B708((PartyOrganizationUtility_o *)&v44->m_Items[2], v74, v68, v69, v70, v71, v72, v73);
      v125.fields._dateData = (uint64_t)&dateData;
      Minute = System_DateTime__get_Minute(v125, 0LL);
      Master_object = j_il2cpp_value_box_0(int_TypeInfo, &Minute, v75, v76, v77);
      v84 = Master_object;
      if ( Master_object )
      {
        Master_object = sub_1C3B8A0(Master_object, v44->obj.klass->_1.element_class);
        if ( !Master_object )
        {
LABEL_127:
          v114 = sub_1C3B9E4();
          sub_1C3B88C(v114, 0LL);
        }
      }
      if ( v44->max_length <= 3 )
LABEL_126:
        sub_1C3B9C8(Master_object, klass);
      v44->m_Items[3] = (Il2CppObject *)v84;
      sub_1C3B708((PartyOrganizationUtility_o *)&v44->m_Items[3], v84, v78, v79, v80, v81, v82, v83);
      v38 = System_String__Format_63383120(monitor, v44, 0LL);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct UnityEngine_GameObject_o **p_inputMessageObject; // x19
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4C1F8F8 & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, method);
    sub_1C3B764(&ServantStatusQuestBoardDraw_TypeInfo, v3);
    sub_1C3B764(&StringLiteral_12124/*"SUMMON_GROUP_STONEPAY_WARNING_MSG"*/, v4);
    sub_1C3B764(&StringLiteral_1/*""*/, v5);
    byte_4C1F8F8 = 1;
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
  mLineSp = (UIWidget_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12124/*"SUMMON_GROUP_STONEPAY_WARNING_MSG"*/, 0LL);
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
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mRewardIconInfs, 0LL, v10, v11, v12, v13, v14, v15);
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
    sub_1C3B9C0(mLineSp, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0LL);
  this->fields.inputMessageObject = 0LL;
  p_inputMessageObject = &this->fields.inputMessageObject;
  sub_1C3B708((PartyOrganizationUtility_o *)p_inputMessageObject, 0LL, v17, v18, v19, v20, v21, v22);
  *((_DWORD *)p_inputMessageObject + 2) = 0;
  p_inputMessageObject[2] = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)(p_inputMessageObject + 2), 0LL, v23, v24, v25, v26, v27, v28);
}


void __fastcall ServantStatusQuestBoardDraw__SetInfoTextAlpha(
        ServantStatusQuestBoardDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformationText__o *mInfoTextList; // x8
  BoardOptionTextWithIconComponent_o *mOptionInfoLb; // x0

  if ( (byte_4C1F8FE & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, method);
    byte_4C1F8FE = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList && mInfoTextList->fields._size >= 2 )
  {
    mOptionInfoLb = this->fields.mOptionInfoLb;
    if ( !mOptionInfoLb )
      sub_1C3B9C0(0LL, method);
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
  __int64 v53; // x20
  __int64 Master_object; // x0
  __int64 giftIconId; // x1
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  bool v62; // w24
  int current; // w23
  QuestEntity_o *Mine; // x26
  const MethodInfo *v65; // x1
  bool v66; // w25
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  const MethodInfo *v73; // x1
  _BOOL4 IsClear; // w27
  int v75; // w8
  int32_t id; // w8
  int32_t warId; // w21
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v79; // x24
  bool v80; // w8
  Il2CppObject *v81; // x29
  int32_t questPhase; // w21
  int32_t PhaseMax; // w8
  Il2CppObject *v84; // x0
  Il2CppObject *v85; // x21
  _BOOL4 v86; // w23
  _BOOL4 v87; // w25
  float v88; // s1
  float v89; // s0
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x23
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  struct UISprite_o *mcBaseP; // x8
  struct UIAtlas_o *mAtlas; // x1
  UISprite_o *v99; // x29
  System_Action_o *v100; // x29
  _BOOL4 v101; // w28
  UISprite_o *mTitleSp; // x29
  int v103; // w27
  __int64 v104; // x9
  System_Action_o *v105; // x29
  const MethodInfo *v106; // x6
  QuestBehaviorMaster_o *v107; // x29
  struct UILabel_o *mTitleNameLb; // x21
  System_String_o **v109; // x8
  LocalizationManager_c *v110; // x0
  System_String_o **v111; // x9
  System_String_o *v112; // x24
  System_String_o *v113; // x0
  System_String_o *v114; // x1
  int32_t v115; // w21
  int32_t TITLE_LABEL_BASE_WIDTH; // w24
  bool v117; // cc
  UnityEngine_Transform_o *v118; // x21
  struct UILabel_o *v119; // x8
  float y; // s1
  float x; // s0
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  int32_t ServantId; // w21
  __int64 v131; // x24
  UILabel_o *mTitleShortcutLb; // x21
  Il2CppObject *v133; // x0
  __int64 v134; // x27
  __int64 v135; // x28
  ServantLimitImageMaster_o *v136; // x24
  const MethodInfo *v137; // x1
  System_String_o *v138; // x1
  __int64 endTime; // x24
  System_Collections_Generic_List_object__o *mInfoTextList; // x21
  System_String_o *v141; // x28
  QuestBoardInformationText_o *v142; // x27
  int64_t v143; // x2
  int32_t v144; // w3
  System_String_o *v145; // x4
  BattleSetupInfo_o *v146; // x5
  FollowerInfo_o *v147; // x6
  PartyListViewItem_o *v148; // x7
  struct System_Object_array *items; // x8
  _QWORD *v150; // x9
  __int64 size; // x10
  Il2CppClass **v152; // x0
  System_String_o *v153; // x21
  Il2CppObject *v154; // x24
  Il2CppObject *BattleName; // x0
  int32_t v156; // w24
  int32_t v157; // w0
  int32_t v158; // w1
  struct System_Collections_Generic_List_QuestBoardInformationText__o *v159; // x21
  int32_t v160; // w2
  int v161; // w8
  int32_t v162; // w9
  bool v163; // w21
  int32_t v164; // w8
  int64_t v165; // x2
  int32_t v166; // w3
  System_String_o *v167; // x4
  BattleSetupInfo_o *v168; // x5
  FollowerInfo_o *v169; // x6
  PartyListViewItem_o *v170; // x7
  QuestBehaviorMaster_o *v171; // x21
  int64_t v172; // x2
  int32_t v173; // w3
  System_String_o *v174; // x4
  BattleSetupInfo_o *v175; // x5
  FollowerInfo_o *v176; // x6
  PartyListViewItem_o *v177; // x7
  __int64 v178; // x8
  struct GiftEntity_array *v179; // x22
  int v180; // w9
  _DWORD *v181; // x8
  int v182; // w9
  int32_t v183; // w2
  int32_t v184; // w3
  int v185; // w8
  UnityEngine_Component_o *mServantLimitRewardObtainedSP; // x21
  char v187; // w21
  const MethodInfo *v188; // [xsp+0h] [xbp-110h]
  int32_t limitCounta; // [xsp+1Ch] [xbp-F4h]
  int64_t checkTime; // [xsp+20h] [xbp-F0h]
  int v191; // [xsp+28h] [xbp-E8h]
  int questReleaseClosedID; // [xsp+2Ch] [xbp-E4h]
  int32_t phase; // [xsp+30h] [xbp-E0h]
  bool HasStatus; // [xsp+34h] [xbp-DCh]
  struct UnityEngine_GameObject_o *v195; // [xsp+38h] [xbp-D8h]
  char v196; // [xsp+44h] [xbp-CCh]
  ServantStatusQuestBoardManager_o *questBoardManagera; // [xsp+48h] [xbp-C8h]
  int32_t QuestType; // [xsp+50h] [xbp-C0h]
  _BOOL4 IsLimitCountSealQuest; // [xsp+54h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_int__o v200; // [xsp+58h] [xbp-B8h] BYREF
  bool isNotItemConsume; // [xsp+74h] [xbp-9Ch] BYREF
  int32_t fixedVal[2]; // [xsp+78h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v203; // [xsp+80h] [xbp-90h] BYREF
  UserQuestEntity_o *entity; // [xsp+A0h] [xbp-70h] BYREF
  QuestReleaseEntity_o *questReleaseNG; // [xsp+A8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v206; // 0:x0.16

  if ( (byte_4C1F8F9 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, qinf);
    sub_1C3B764(&AtlasManager_TypeInfo, v13);
    sub_1C3B764(&CondType_TypeInfo, v14);
    sub_1C3B764(&Method_DataManager_GetMasterData_GiftMaster___, v15);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestBehaviorMaster___, v17);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestGroupMaster___, v18);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v19);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantMaster___, v20);
    sub_1C3B764(&Method_DataManager_GetMaster_UserQuestMaster___, v21);
    sub_1C3B764(&DataManager_TypeInfo, v22);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v23);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v24);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v25);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v26);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v27);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__, v28);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__Add__, v29);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__GetEnumerator__, v30);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Count__, v31);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__, v32);
    sub_1C3B764(&LocalizationManager_TypeInfo, v33);
    sub_1C3B764(&NetworkManager_TypeInfo, v34);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35);
    sub_1C3B764(&QuestBoardInformationText_TypeInfo, v36);
    sub_1C3B764(&ServantStatusQuestBoardDraw_TypeInfo, v37);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v38);
    sub_1C3B764(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v39);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v40);
    sub_1C3B764(&Method_ServantStatusQuestBoardDraw___c__DisplayClass48_0__SetItem_b__0__, v41);
    sub_1C3B764(&Method_ServantStatusQuestBoardDraw___c__DisplayClass48_0__SetItem_b__1__, v42);
    sub_1C3B764(&ServantStatusQuestBoardDraw___c__DisplayClass48_0_TypeInfo, v43);
    sub_1C3B764(&StringLiteral_13635/*"The default value constraint cannot be present on the '{0}' attribute reference if the fixed value constraint is present on the declaration."*/, v44);
    sub_1C3B764(&StringLiteral_25497, v45);
    sub_1C3B764(&StringLiteral_12191/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_CANCEL"*/, v46);
    sub_1C3B764(&StringLiteral_20572/*"ivory"*/, v47);
    sub_1C3B764(&StringLiteral_12193/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_CANCEL"*/, v48);
    sub_1C3B764(&StringLiteral_12192/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_BASE_DECK"*/, v49);
    sub_1C3B764(&StringLiteral_1/*""*/, v50);
    sub_1C3B764(&StringLiteral_12190/*"SUPPORT_SELECT_CANCEL_DIALOG_TITLE"*/, v51);
    sub_1C3B764(&StringLiteral_12147/*"SUMMON_RESULT_COIN_FORMAT"*/, v52);
    byte_4C1F8F9 = 1;
  }
  entity = 0LL;
  questReleaseNG = 0LL;
  memset(&v203, 0, sizeof(v203));
  *(_QWORD *)fixedVal = 0LL;
  isNotItemConsume = 0;
  v53 = sub_1C3B9B0(ServantStatusQuestBoardDraw___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v53, 0LL);
  if ( !v53 )
    goto LABEL_272;
  *(_QWORD *)(v53 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v53 + 16), (int64_t)this, v56, v57, v58, v59, v60, v61);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !qinf )
    goto LABEL_272;
  if ( !Master_object )
    goto LABEL_272;
  v195 = inputMessageObject;
  limitCounta = limitCount;
  questBoardManagera = questBoardManager;
  Master_object = (__int64)QuestGroupMaster__GetInterludeQuestIdList(
                             (QuestGroupMaster_o *)Master_object,
                             qinf->fields.questId,
                             0LL);
  if ( !Master_object )
    goto LABEL_272;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v200,
    (System_Collections_Generic_List_int__o *)Master_object,
    (const MethodInfo_366F71C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v203 = v200;
  while ( 1 )
  {
    v62 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v203,
            (const MethodInfo_341C2F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v62 )
      break;
    current = v203.fields._current;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsQuestClear_39011304(current, -1, 0, 0LL) )
      goto LABEL_16;
  }
  current = 0;
LABEL_16:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v203,
    (const MethodInfo_341C2F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( !questBoardManagera )
    goto LABEL_272;
  checkTime = questBoardManagera->fields.mListCreatedTime;
  Mine = MapControl_QuestInfo__GetMine(qinf, 0LL);
  QuestType = MapControl_QuestInfo__GetQuestType(qinf, 0LL);
  v66 = v62 || MapControl_QuestInfo__IsClear(qinf, 0LL);
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  Master_object = ServantStatusQuestBoardDraw__IsClose(qinf, v65);
  v196 = Master_object;
  if ( beforeQuestInfo )
  {
    IsClear = MapControl_QuestInfo__IsClear(beforeQuestInfo, 0LL);
    if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    Master_object = ServantStatusQuestBoardDraw__IsClose(beforeQuestInfo, v73);
    v75 = Master_object & 1;
    if ( !Mine )
      goto LABEL_272;
  }
  else
  {
    v75 = 0;
    IsClear = 1;
    if ( !Mine )
      goto LABEL_272;
  }
  v191 = v75;
  id = Mine->fields.id;
  this->fields.qinf = qinf;
  this->fields.questId = id;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.qinf, (int64_t)qinf, v67, v68, v69, v70, v71, v72);
  warId = qinf->fields.warId;
  Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Master_object )
    goto LABEL_272;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Master_object, warId, 0LL);
  v79 = WarEntityByWarID;
  if ( WarEntityByWarID )
    v80 = !WarEntity__IsFolder(WarEntityByWarID, 0LL);
  else
    v80 = 0;
  *(_BYTE *)(v53 + 40) = v80;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_object )
    goto LABEL_272;
  IsLimitCountSealQuest = ServantLimitImageMaster__IsLimitCountSealQuest(
                            (ServantLimitImageMaster_o *)Master_object,
                            this->fields.questId,
                            0LL);
  Master_object = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
  v81 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, giftIconId);
    byte_4C1C955 = 1;
  }
  Master_object = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (__int64)NetworkManager_TypeInfo;
  }
  if ( current < 1 )
  {
    if ( !v81 )
      goto LABEL_272;
    current = this->fields.questId;
  }
  else if ( !v81 )
  {
    goto LABEL_272;
  }
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)v81,
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
  v84 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  v85 = v84;
  v86 = !v66 && IsClear;
  if ( v66 )
  {
    v87 = 1;
LABEL_70:
    v88 = 1.0;
    v89 = 0.5;
    v195 = 0LL;
    goto LABEL_71;
  }
  if ( v84 )
  {
    if ( QuestBehaviorMaster__IsOpenQuestBehaviorCond((QuestBehaviorMaster_o *)v84, this->fields.questId, phase, 9, 0LL) )
    {
      v196 = 0;
      questReleaseClosedID = 0;
      HasStatus = 0;
      v87 = 1;
      IsClear = v86;
      goto LABEL_70;
    }
    IsClear = v86;
  }
  v87 = 0;
  if ( (v196 & 1) != 0 )
  {
    v196 = 1;
    goto LABEL_70;
  }
  v89 = 1.0;
  v196 = 0;
  v88 = 1.0;
LABEL_71:
  *(float *)(v53 + 24) = v89;
  *(float *)(v53 + 28) = v89;
  *(float *)(v53 + 32) = v89;
  *(float *)(v53 + 36) = v88;
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
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.basePanelAtlas, (int64_t)mAtlas, v91, v92, v93, v94, v95, v96);
  v99 = this->fields.mcBaseP;
  Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  if ( !v99 )
    goto LABEL_272;
  UISprite__set_spriteName(v99, ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME, 0LL);
  if ( IsLimitCountSealQuest )
  {
    v100 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      v100,
      (Il2CppObject *)v53,
      Method_ServantStatusQuestBoardDraw___c__DisplayClass48_0__SetItem_b__0__,
      0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadEventUI(v100, 1, 0LL);
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
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v53 + 24), 0LL);
  Master_object = (__int64)this->fields.mLineSp;
  if ( !Master_object )
    goto LABEL_272;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0LL);
  Master_object = (__int64)this->fields.mLineSp;
  if ( !Master_object )
    goto LABEL_272;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v53 + 24), 0LL);
  Master_object = (__int64)this->fields.mTitle2Sp;
  v101 = !v87 && IsClear;
  if ( !Master_object )
    goto LABEL_272;
  if ( v87 )
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
    UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v53 + 24), 0LL);
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
      v103 = *(unsigned __int8 *)(v53 + 40);
      Master_object = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
      if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      if ( !mTitleSp )
        goto LABEL_272;
      v104 = 56LL;
      if ( !v103 )
        v104 = 48LL;
      UISprite__set_spriteName(
        mTitleSp,
        *(System_String_o **)((char *)&ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH + v104),
        0LL);
      if ( IsLimitCountSealQuest )
      {
        v105 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
        System_Action___ctor(
          v105,
          (Il2CppObject *)v53,
          Method_ServantStatusQuestBoardDraw___c__DisplayClass48_0__SetItem_b__1__,
          0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__LoadEventUI(v105, 1, 0LL);
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
      v101 = IsClear;
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
    UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v53 + 24), 0LL);
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
                               (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !Master_object )
      goto LABEL_272;
    UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v53 + 24), 0LL);
    IsClear = v101;
  }
  Master_object = (__int64)this->fields.mClearObj;
  if ( !Master_object )
    goto LABEL_272;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v87, 0LL);
  Master_object = (__int64)this->fields.mNoneLb;
  if ( !Master_object )
    goto LABEL_272;
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !v87 && !IsClear )
  {
    v107 = (QuestBehaviorMaster_o *)v85;
    mTitleNameLb = this->fields.mTitleNameLb;
    if ( QuestType == 3 )
    {
      v109 = (System_String_o **)&StringLiteral_12190/*"SUPPORT_SELECT_CANCEL_DIALOG_TITLE"*/;
      v110 = LocalizationManager_TypeInfo;
      v111 = (System_String_o **)&StringLiteral_12191/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_CANCEL"*/;
    }
    else
    {
      v109 = (System_String_o **)&StringLiteral_12192/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_BASE_DECK"*/;
      v110 = LocalizationManager_TypeInfo;
      v111 = (System_String_o **)&StringLiteral_12193/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_CANCEL"*/;
    }
    if ( v191 )
      v109 = v111;
    v112 = *v109;
    if ( !v110->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v110);
    v113 = v112;
    goto LABEL_137;
  }
  v107 = (QuestBehaviorMaster_o *)v85;
  if ( questReleaseClosedID < 1 )
  {
    if ( !questReleaseNG || questReleaseNG->fields.type != 8 )
    {
      Master_object = (__int64)QuestEntity__getQuestName(Mine, 0LL);
      if ( !Master_object )
        goto LABEL_272;
      v153 = (System_String_o *)Master_object;
      if ( System_String__Contains((System_String_o *)Master_object, (System_String_o *)StringLiteral_25497, 0LL) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v154 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantMaster___);
        Master_object = QuestEntity__getServantId(Mine, 0LL);
        if ( !v154 )
          goto LABEL_272;
        Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)v154,
                                   Master_object,
                                   (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Master_object )
          goto LABEL_272;
        BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Master_object, 0, -1, 0LL);
        v153 = System_String__Format(v153, BattleName, 0LL);
      }
      Master_object = (__int64)this->fields.mTitleNameLb;
      if ( !Master_object )
        goto LABEL_272;
      v114 = v153;
      goto LABEL_139;
    }
    mTitleNameLb = this->fields.mTitleNameLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v113 = (System_String_o *)StringLiteral_12147/*"SUMMON_RESULT_COIN_FORMAT"*/;
LABEL_137:
    Master_object = (__int64)LocalizationManager__Get(v113, 0LL);
    if ( !mTitleNameLb )
      goto LABEL_272;
    v114 = (System_String_o *)Master_object;
    Master_object = (__int64)mTitleNameLb;
LABEL_139:
    UILabel__set_text((UILabel_o *)Master_object, v114, 0LL);
    goto LABEL_140;
  }
  ServantStatusQuestBoardDraw__SetAdvanceNoticeText(
    this,
    questReleaseClosedID,
    v79,
    Mine,
    questReleaseNG,
    checkTime,
    v106);
LABEL_140:
  Master_object = (__int64)this->fields.mTitleNameLb;
  if ( !Master_object )
    goto LABEL_272;
  v115 = *(_DWORD *)(Master_object + 168);
  if ( !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    Master_object = (__int64)this->fields.mTitleNameLb;
    if ( !Master_object )
      goto LABEL_272;
  }
  TITLE_LABEL_BASE_WIDTH = ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH;
  Master_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
  v117 = v115 <= TITLE_LABEL_BASE_WIDTH;
  v118 = (UnityEngine_Transform_o *)Master_object;
  if ( v117 )
  {
    if ( !byte_4C1C516 )
    {
      Master_object = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, giftIconId);
      byte_4C1C516 = 1;
    }
    if ( !v118 )
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
    v119 = this->fields.mTitleNameLb;
    if ( !v119 || !v118 )
      goto LABEL_272;
    y = 1.0;
    x = (float)ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH / (float)v119->fields.mWidth;
    z = 1.0;
  }
  UnityEngine_Transform__set_localScale(v118, *(UnityEngine_Vector3_o *)&x, 0LL);
  Master_object = (__int64)this->fields.mTitleNameLb;
  if ( !Master_object )
    goto LABEL_272;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v53 + 24), 0LL);
  this->fields.inputMessageObject = v195;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.inputMessageObject,
    (int64_t)v195,
    v124,
    v125,
    v126,
    v127,
    v128,
    v129);
  if ( QuestType != 3 )
  {
    Master_object = (__int64)this->fields.mTitleShortcutSp;
    if ( !Master_object )
      goto LABEL_272;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, 1, 0LL);
    Master_object = (__int64)this->fields.mTitleShortcutSp;
    if ( !Master_object )
      goto LABEL_272;
    UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v53 + 24), 0LL);
    Master_object = (__int64)this->fields.mTitleShortcutLb;
    if ( !Master_object )
      goto LABEL_272;
    v138 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_178;
  }
  ServantId = QuestEntity__getServantId(Mine, 0LL);
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_272;
  Master_object = (__int64)DataManager__GetMasterData_object_(
                             (DataManager_o *)Master_object,
                             (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Master_object )
    goto LABEL_272;
  Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             ServantId,
                             (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.mTitleShortcutSp )
    goto LABEL_272;
  v131 = Master_object;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mTitleShortcutSp, 0, 0LL);
  mTitleShortcutLb = this->fields.mTitleShortcutLb;
  if ( !v131 )
  {
    if ( !mTitleShortcutLb )
      goto LABEL_272;
    v138 = (System_String_o *)StringLiteral_1/*""*/;
    Master_object = (__int64)this->fields.mTitleShortcutLb;
LABEL_178:
    UILabel__set_text((UILabel_o *)Master_object, v138, 0LL);
    goto LABEL_179;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v133 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v135 = *(_QWORD *)(v131 + 16);
  v134 = *(_QWORD *)(v131 + 24);
  v136 = (ServantLimitImageMaster_o *)v133;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v206.fields.currentCryptoKey = v135;
  *(_QWORD *)&v206.fields.fakeValue = v134;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v206, 0LL);
  if ( !v136 )
    goto LABEL_272;
  Master_object = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                             v136,
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
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v53 + 24), 0LL);
LABEL_179:
  ServantStatusQuestBoardDraw__ResetInfoTextList(this, v137);
  if ( v87 )
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
    v141 = LocalizationManager__Get((System_String_o *)StringLiteral_13635/*"The default value constraint cannot be present on the '{0}' attribute reference if the fixed value constraint is present on the declaration."*/, 0LL);
    v142 = (QuestBoardInformationText_o *)sub_1C3B9B0(QuestBoardInformationText_TypeInfo);
    QuestBoardInformationText___ctor(v142, v141, endTime, 0, 1, 0LL, 0LL);
    if ( !mInfoTextList )
      goto LABEL_272;
    items = mInfoTextList->fields._items;
    v150 = Method_System_Collections_Generic_List_QuestBoardInformationText__Add__;
    ++mInfoTextList->fields._version;
    if ( !items )
      goto LABEL_272;
    size = mInfoTextList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        mInfoTextList,
        (Il2CppObject *)v142,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v150[4] + 192LL) + 112LL));
    }
    else
    {
      v152 = &items->obj.klass + size;
      mInfoTextList->fields._size = size + 1;
      v152[4] = (Il2CppClass *)v142;
      sub_1C3B708((PartyOrganizationUtility_o *)(v152 + 4), (int64_t)v142, v143, v144, v145, v146, v147, v148);
    }
  }
  v156 = qinf->fields.questPhase;
  v157 = MapControl_QuestInfo__GetPhaseMax(qinf, 0LL);
  v159 = this->fields.mInfoTextList;
  if ( v156 + 1 < v157 )
    v160 = v156 + 1;
  else
    v160 = v157;
  Master_object = (__int64)ServantStatusQuestBoardDraw__GetCampaignText(
                             this,
                             v158,
                             v160,
                             0,
                             questBoardManagera,
                             &fixedVal[1],
                             fixedVal,
                             &isNotItemConsume,
                             v188);
  if ( !v159 )
    goto LABEL_272;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v159,
    (System_Collections_Generic_IEnumerable_T__o *)Master_object,
    (const MethodInfo_368BE78 *)Method_System_Collections_Generic_List_QuestBoardInformationText__AddRange__);
  Master_object = (__int64)this->fields.mInfoTextList;
  if ( !Master_object )
    goto LABEL_272;
  v161 = *(_DWORD *)(Master_object + 24);
  if ( v161 < 1 )
  {
LABEL_208:
    v163 = 0;
  }
  else
  {
    Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)Master_object,
                               questBoardManagera->fields.mAlphaAnimCnt % v161,
                               (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__);
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
    v162 = fixedVal[1];
    v163 = 1;
    qinf->fields.isNotItemConsume = isNotItemConsume;
    v164 = fixedVal[0];
    qinf->fields.costCalcVal = v162;
    qinf->fields._fixedCostVal_k__BackingField = v164;
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v163, 0LL);
  Master_object = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_272;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_272;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v163, 0LL);
  this->fields.mRewardIconInfs = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mRewardIconInfs, 0LL, v165, v166, v167, v168, v169, v170);
  Master_object = (__int64)this->fields.mRewardIcon;
  if ( !Master_object )
    goto LABEL_272;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_272;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  if ( (v196 & 1) == 0 || !QuestEntity__HasFlag(Mine, 4096LL, 0LL) )
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
    Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_272;
    Master_object = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !Master_object )
      goto LABEL_272;
    Master_object = (__int64)GiftMaster__GetGiftListById((GiftMaster_o *)Master_object, Mine->fields.giftId, 0LL);
    if ( !Master_object )
      goto LABEL_272;
    v178 = *(_QWORD *)(Master_object + 24);
    v179 = (struct GiftEntity_array *)Master_object;
    if ( !v178 )
    {
LABEL_249:
      this->fields.mRewardIconInfs = v179;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&this->fields.mRewardIconInfs,
        (int64_t)v179,
        v172,
        v173,
        v174,
        v175,
        v176,
        v177);
LABEL_250:
      v171 = v107;
      goto LABEL_251;
    }
    v180 = questBoardManagera->fields.mAlphaAnimCnt % (int)v178;
    if ( v180 >= (unsigned int)v178 )
      sub_1C3B9C8(Master_object, giftIconId);
    v181 = *(_DWORD **)(Master_object + 8LL * v180 + 32);
    if ( v181 )
    {
      giftIconId = (unsigned int)v181[11];
      Master_object = (__int64)this->fields.mRewardIcon;
      v182 = v181[7];
      if ( (int)giftIconId < 1 )
      {
        if ( !Master_object )
          goto LABEL_272;
        v184 = v182 <= 1 ? -1 : v181[7];
        ItemIconComponent__SetGift_39566180((ItemIconComponent_o *)Master_object, v181[5], v181[6], v184, 0, 0LL);
      }
      else
      {
        if ( !Master_object )
          goto LABEL_272;
        v183 = v182 <= 1 ? -1 : v181[7];
        ItemIconComponent__SetItemImage_39568612((ItemIconComponent_o *)Master_object, giftIconId, v183, 0LL);
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
    sub_1C3B9C0(Master_object, giftIconId);
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
  v171 = v107;
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
                             (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Master_object )
    goto LABEL_272;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v53 + 24), 0LL);
  Master_object = (__int64)this->fields.mRewardIcon;
  if ( !Master_object )
    goto LABEL_272;
  ItemIconComponent__SetColor((ItemIconComponent_o *)Master_object, *(UnityEngine_Color_o *)(v53 + 24), 0LL);
  v185 = IsLimitCountSealQuest && v87;
  if ( !v171 || (v185 & 1) != 0 )
  {
    mServantLimitRewardObtainedSP = (UnityEngine_Component_o *)this->fields.mServantLimitRewardObtainedSP;
    if ( !v185 )
    {
LABEL_257:
      if ( !mServantLimitRewardObtainedSP )
        goto LABEL_272;
      Master_object = (__int64)UnityEngine_Component__get_gameObject(mServantLimitRewardObtainedSP, 0LL);
      if ( !Master_object )
        goto LABEL_272;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
      v187 = 1;
      goto LABEL_268;
    }
  }
  else
  {
    Master_object = QuestBehaviorMaster__IsOpenQuestBehaviorCond(v171, this->fields.questId, phase, 10, 0LL);
    mServantLimitRewardObtainedSP = (UnityEngine_Component_o *)this->fields.mServantLimitRewardObtainedSP;
    if ( (Master_object & 1) == 0 )
      goto LABEL_257;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(
    (UISprite_o *)mServantLimitRewardObtainedSP,
    (System_String_o *)StringLiteral_20572/*"ivory"*/,
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
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v53 + 24), 0LL);
  v187 = 0;
LABEL_268:
  Master_object = (__int64)this->fields.mRewardGetSP;
  if ( !Master_object )
    goto LABEL_272;
  Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_272;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v87 & v187 & !HasStatus, 0LL);
  Master_object = (__int64)this->fields.mRewardGetSP;
  if ( !Master_object )
    goto LABEL_272;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)(v53 + 24), 0LL);
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
      sub_1C3B9C0(0LL, method);
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

  if ( (byte_4C1F8FB & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__, qinf);
    byte_4C1F8FB = 1;
  }
  mInfoTextList = (System_Collections_Generic_List_object__o *)this->fields.mInfoTextList;
  if ( !mInfoTextList
    || (mInfoTextList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       mInfoTextList,
                                                                       strIndex,
                                                                       (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_QuestBoardInformationText__get_Item__)) == 0LL )
  {
    sub_1C3B9C0(mInfoTextList, qinf);
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
    sub_1C3B9C0(this, 0LL);
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
  if ( (byte_4C1F906 & 1) == 0 )
  {
    label = (UILabel_o *)sub_1C3B764(&ServantStatusQuestBoardDraw_TypeInfo, message);
    byte_4C1F906 = 1;
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
    sub_1C3B9C0(label, message);
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
        sub_1C3B9C8(this, boardMessageData);
      this = (ServantStatusQuestBoardDraw_o *)boardMessageData->m_Items[v5];
      if ( !this )
        break;
      if ( HIDWORD(this->fields.m_CancellationTokenSource) == 4 && LODWORD(this->fields.mcBaseP) == eventId )
        return (BoardMessageEntity_o *)this;
      if ( max_length == ++v5 )
        return 0LL;
    }
LABEL_12:
    sub_1C3B9C0(this, boardMessageData);
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

  if ( (byte_4C1F907 & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, method);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v3);
    sub_1C3B764(&ServantStatusQuestBoardDraw_TypeInfo, v4);
    byte_4C1F907 = 1;
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
    sub_1C3B9C0(v6, v7);
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

  if ( (byte_4C1F908 & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, method);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v3);
    sub_1C3B764(&ServantStatusQuestBoardDraw_TypeInfo, v4);
    byte_4C1F908 = 1;
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
    sub_1C3B9C0(v6, v7);
  }
}