void __fastcall ServantStatusQuestBoardDraw___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  ServantStatusQuestBoardDraw_c *v32; // x8
  struct ServantStatusQuestBoardDraw_StaticFields *static_fields; // x9
  struct ServantStatusQuestBoardDraw_StaticFields *v34; // x9
  struct ServantStatusQuestBoardDraw_StaticFields *v35; // x0
  System_Int32_array **v36; // x1
  ServantStatusQuestBoardDraw_c *v37; // x8
  struct ServantStatusQuestBoardDraw_StaticFields *v38; // x0
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct ServantStatusQuestBoardDraw_StaticFields *v46; // x0
  System_Int32_array **v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct ServantStatusQuestBoardDraw_StaticFields *v54; // x0
  System_Int32_array **v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct ServantStatusQuestBoardDraw_StaticFields *v62; // x0
  System_Int32_array **v63; // x1
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct ServantStatusQuestBoardDraw_StaticFields *v70; // x0
  System_Int32_array **v71; // x1
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  struct ServantStatusQuestBoardDraw_StaticFields *v78; // x0
  System_Int32_array **v79; // x1
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  struct ServantStatusQuestBoardDraw_StaticFields *v86; // x0
  System_Int32_array **v87; // x1
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7

  if ( (byte_42EBEEA & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusQuestBoardDraw_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_19721/*"img_conductor_03"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_19722/*"img_conductor_04"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_19720/*"img_conductor_02"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17385/*"caldeagate_notice_{0:00}"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_19822/*"img_questboard_1001"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_19719/*"img_conductor_01"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_19723/*"img_conductor_questboard"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_19715/*"img_commonbg"*/, v29, v30, v31);
    byte_42EBEEA = 1;
  }
  ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH = 320;
  ServantStatusQuestBoardDraw_TypeInfo->static_fields->ADVANCE_NOTICE_BASE_WIDTH = 416;
  v32 = ServantStatusQuestBoardDraw_TypeInfo;
  ServantStatusQuestBoardDraw_TypeInfo->static_fields->ADVANCE_NOTICE_BASE_HEIGHT = 90;
  v32->static_fields->ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT = 36;
  v32->static_fields->ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X = -208.0;
  static_fields = v32->static_fields;
  *(_QWORD *)&static_fields->CLEAR_POS_AREA.fields.x = 0xC23C0000431B0000LL;
  static_fields->CLEAR_POS_AREA.fields.z = 0.0;
  v34 = v32->static_fields;
  *(_QWORD *)&v34->CLEAR_POS_QUEST.fields.x = 0xC25C0000C3370000LL;
  v34->CLEAR_POS_QUEST.fields.z = 0.0;
  v32->static_fields->QUEST_BOARD_PHASE_INTERVAL = 21;
  v32->static_fields->QUEST_BOARD_PHASE_LOOF_INTERVAL = 30;
  v32->static_fields->QUEST_BOARD_PHASE_EX_INTERVAL = 17;
  v32->static_fields->QUEST_BOARD_PHASE_EX_LOOF_INTERVAL = 26;
  v35 = v32->static_fields;
  v36 = (System_Int32_array **)StringLiteral_19715/*"img_commonbg"*/;
  v35->DARK_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_19715/*"img_commonbg"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v35->DARK_BOARD_SPRITE_NAME, v36, v2, v3, v4, v5, v6, v7);
  v37 = ServantStatusQuestBoardDraw_TypeInfo;
  ServantStatusQuestBoardDraw_TypeInfo->static_fields->DARK_BOARD_WIDTH = 496;
  v37->static_fields->DARK_BOARD_HIGHT = 122;
  v38 = v37->static_fields;
  v39 = (System_Int32_array **)StringLiteral_19723/*"img_conductor_questboard"*/;
  v38->BASE_BOARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_19723/*"img_conductor_questboard"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v38->BASE_BOARD_SPRITE_NAME, v39, v40, v41, v42, v43, v44, v45);
  v46 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v47 = (System_Int32_array **)StringLiteral_19720/*"img_conductor_02"*/;
  v46->TITLE_SPRITE_NAME_INTERLUDE = (struct System_String_o *)StringLiteral_19720/*"img_conductor_02"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v46->TITLE_SPRITE_NAME_INTERLUDE, v47, v48, v49, v50, v51, v52, v53);
  v54 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v55 = (System_Int32_array **)StringLiteral_19719/*"img_conductor_01"*/;
  v54->TITLE_SPRITE_NAME_INTERLUDE_MAP = (struct System_String_o *)StringLiteral_19719/*"img_conductor_01"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v54->TITLE_SPRITE_NAME_INTERLUDE_MAP, v55, v56, v57, v58, v59, v60, v61);
  v62 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v63 = (System_Int32_array **)StringLiteral_19721/*"img_conductor_03"*/;
  v62->TITLE_SPRITE_NAME_RAINFORCEMENT = (struct System_String_o *)StringLiteral_19721/*"img_conductor_03"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v62->TITLE_SPRITE_NAME_RAINFORCEMENT, v63, v64, v65, v66, v67, v68, v69);
  v70 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v71 = (System_Int32_array **)StringLiteral_17385/*"caldeagate_notice_{0:00}"*/;
  v70->QUEST_BOARD_INFO_FRAME_NAME = (struct System_String_o *)StringLiteral_17385/*"caldeagate_notice_{0:00}"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v70->QUEST_BOARD_INFO_FRAME_NAME, v71, v72, v73, v74, v75, v76, v77);
  v78 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v79 = (System_Int32_array **)StringLiteral_19822/*"img_questboard_1001"*/;
  v78->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME = (struct System_String_o *)StringLiteral_19822/*"img_questboard_1001"*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v78->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  v86 = ServantStatusQuestBoardDraw_TypeInfo->static_fields;
  v87 = (System_Int32_array **)StringLiteral_19722/*"img_conductor_04"*/;
  v86->TITLE_SPRITE_NAME_LIMIT_UNSEAL = (struct System_String_o *)StringLiteral_19722/*"img_conductor_04"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v86->TITLE_SPRITE_NAME_LIMIT_UNSEAL, v87, v88, v89, v90, v91, v92, v93);
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
  ServantStatusQuestBoardDraw_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x21
  int size; // w8
  int v14; // w20
  MapControl_QuestInfo_o *v15; // x1
  int64_t Time; // x3
  const MethodInfo *v17; // x4
  ServantStatusQuestBoardDraw_o *v18; // x0
  int32_t v19; // w2

  v5 = this;
  if ( (byte_42EBEE2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__,
      (_DWORD)qinf,
      (_DWORD)questBoardManagerer,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, v6, v7, v8);
    this = (ServantStatusQuestBoardDraw_o *)sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    byte_42EBEE2 = 1;
  }
  if ( (byte_42EBEE3 & 1) == 0 )
  {
    this = (ServantStatusQuestBoardDraw_o *)sub_B5D5C4(
                                              &Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__,
                                              (_DWORD)qinf,
                                              (_DWORD)questBoardManagerer,
                                              method);
    byte_42EBEE3 = 1;
  }
  mInfoTextList = v5->fields.mInfoTextList;
  if ( mInfoTextList )
  {
    size = mInfoTextList->fields._size;
    if ( size >= 2 )
    {
      if ( questBoardManagerer )
      {
        v14 = questBoardManagerer->fields.mAlphaAnimCnt % size;
        if ( size <= (unsigned int)v14 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        this = (ServantStatusQuestBoardDraw_o *)mInfoTextList->fields._items->m_Items[v14];
        if ( this )
        {
          if ( QuestBoardInformaionText__ChangeText((QuestBoardInformaionText_o *)this, &v5->fields.mOptionInfoLb, 0LL) )
          {
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            Time = NetworkManager__getTime(0LL);
            v18 = v5;
            v19 = v14;
LABEL_26:
            ServantStatusQuestBoardDraw__UpdateInfoText(v18, v15, v19, Time, v17);
            return;
          }
          return;
        }
      }
LABEL_28:
      sub_B5D69C(this, qinf);
    }
  }
  if ( (byte_42EBEE4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__,
      (_DWORD)qinf,
      (_DWORD)questBoardManagerer,
      method);
    byte_42EBEE4 = 1;
    mInfoTextList = v5->fields.mInfoTextList;
  }
  if ( !mInfoTextList || !mInfoTextList->fields._size )
    return;
  this = (ServantStatusQuestBoardDraw_o *)mInfoTextList->fields._items->m_Items[0];
  if ( !this )
    goto LABEL_28;
  if ( QuestBoardInformaionText__ChangeText((QuestBoardInformaionText_o *)this, &v5->fields.mOptionInfoLb, 0LL) )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
    v18 = v5;
    v19 = 0;
    goto LABEL_26;
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
  GiftEntity_o *v6; // x9
  int num; // w8
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x0

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
  {
    v10 = sub_B5D6C8(this);
    sub_B5D668(v10, 0LL);
  }
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
      ItemIconComponent__SetItemImage_28499576((ItemIconComponent_o *)this, (int32_t)questBoardManager, v8, 0LL);
      return;
    }
LABEL_18:
    sub_B5D69C(this, questBoardManager);
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
        const MethodInfo *method)
{
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int32_t target; // w26
  const MethodInfo *v32; // x3
  QuestBoardInformaionText_o *v33; // x27
  int32_t consumeType; // w8
  struct System_Int32_array *targetIds; // x8
  System_String_o *v36; // x20
  Il2CppObject *EventName; // x0
  System_String_o *v38; // x20
  int64_t EndTime; // x19
  QuestBoardInformaionText_o *v40; // x0
  QuestPhaseEntity_o *entity; // [xsp+28h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v43; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EBEE7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_QuestPhaseMaster___,
      (_DWORD)questEntity,
      (_DWORD)eventEnt,
      eventCampaignEnt);
    sub_B5D5C4(&DataManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&QuestBoardInformaionText_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_23850/*"{0}"*/, v25, v26, v27);
    this = (ServantStatusQuestBoardDraw_o *)sub_B5D5C4(&StringLiteral_13561/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, v28, v29, v30);
    byte_42EBEE7 = 1;
  }
  entity = 0LL;
  if ( !eventEnt || !eventCampaignEnt )
    goto LABEL_35;
  target = eventCampaignEnt->fields.target;
  this = (ServantStatusQuestBoardDraw_o *)CombineAdjustTarget__isTerminalExposable(target, 0LL);
  v33 = 0LL;
  if ( ((unsigned __int8)this & 1) == 0 )
    return v33;
  if ( target == 25 && !isQuestNoneCleared )
    return 0LL;
  switch ( target )
  {
    case 25:
      goto LABEL_12;
    case 24:
      targetIds = eventCampaignEnt->fields.targetIds;
      if ( targetIds && *(_QWORD *)&targetIds->max_length )
      {
        if ( !ServantStatusQuestBoardDraw__IsValidSupportSelection(this, questEntity, phase, v32) )
          return 0LL;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (ServantStatusQuestBoardDraw_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
        if ( !questEntity || !this )
          goto LABEL_35;
        this = (ServantStatusQuestBoardDraw_o *)QuestPhaseMaster__TryGetEntity(
                                                  (QuestPhaseMaster_o *)this,
                                                  &entity,
                                                  questEntity->fields.id,
                                                  phase,
                                                  0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_35;
          if ( entity->fields.isNpcOnly )
            return 0LL;
        }
      }
      break;
    case 12:
LABEL_12:
      if ( (eventCampaignEnt->fields.calcType & 0xFFFFFFFE) != 2 )
        return 0LL;
      if ( questEntity )
      {
        consumeType = questEntity->fields.consumeType;
        if ( consumeType == 4 || consumeType == 1 )
        {
          *costCalcVal = eventCampaignEnt->fields.value;
          if ( eventCampaignEnt->fields.calcType != 3 )
            *fixedVal = eventCampaignEnt->fields.value;
          break;
        }
        return 0LL;
      }
LABEL_35:
      sub_B5D69C(this, questEntity);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_13561/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0LL);
  EventName = (Il2CppObject *)EventEntity__getEventName(eventEnt, 0LL);
  v38 = System_String__Format_44573324(v36, EventName, (Il2CppObject *)StringLiteral_23850/*"{0}"*/, 0LL);
  EndTime = EventEntity__GetEndTime(eventEnt, 0, 0LL);
  v40 = (QuestBoardInformaionText_o *)sub_B5D694(QuestBoardInformaionText_TypeInfo);
  v44.fields.r = 0.0;
  v44.fields.g = 0.0;
  v44.fields.b = 0.0;
  v44.fields.a = 0.0;
  v43.fields.x = 0.0;
  v43.fields.y = 0.0;
  v43.fields.z = 0.0;
  v33 = v40;
  QuestBoardInformaionText___ctor(v40, v38, EndTime, 1, 0, v44, -1, 0, v43, 0, 0LL, 0LL, 0LL);
  return v33;
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
        const MethodInfo *method)
{
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v50; // x19
  const MethodInfo *v51; // x7
  System_Collections_Generic_IEnumerable_T__o *CampaignTextListByEventQuestMaster; // x0
  __int64 v53; // x1
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v55; // x20
  int64_t endedAt; // x20
  System_String_o *EventName; // x21
  System_String_o *v58; // x0
  System_String_o *v59; // x21
  QuestBoardInformaionText_o *v60; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v61; // x22
  WarEntity_o *entity; // [xsp+28h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v64; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EBEE5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMaster___, quest_id, phase, isQuestNoneCleared);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v14, v15, v16);
    sub_B5D5C4(&DataManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&QuestBoardInformaionText_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_23850/*"{0}"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_81/*" "*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_13566/*"TIME_REST_STRING"*/, v47, v48, v49);
    byte_42EBEE5 = 1;
  }
  entity = 0LL;
  v50 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v50,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)ServantStatusQuestBoardDraw__GetCampaignTextListByEventQuestMaster(
                                                                                        this,
                                                                                        this->fields.questId,
                                                                                        phase,
                                                                                        isQuestNoneCleared,
                                                                                        questBoardManager,
                                                                                        costCalcVal,
                                                                                        fixedVal,
                                                                                        v51);
  if ( !v50 )
    goto LABEL_24;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v50,
    CampaignTextListByEventQuestMaster,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  if ( !questBoardManager || !CampaignTextListByEventQuestMaster )
    goto LABEL_24;
  EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                             (QuestReleaseOverwriteMaster_o *)CampaignTextListByEventQuestMaster,
                             this->fields.questId,
                             questBoardManager->fields.mListCreatedTime,
                             0LL);
  if ( !EntityByQuestIdAndTime )
    return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v50;
  v55 = EntityByQuestIdAndTime;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !CampaignTextListByEventQuestMaster )
    goto LABEL_24;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)CampaignTextListByEventQuestMaster,
          &entity,
          v55->fields.eventId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v50;
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)entity;
  if ( !entity )
LABEL_24:
    sub_B5D69C(CampaignTextListByEventQuestMaster, v53);
  if ( LODWORD(entity->fields.age) == 25 )
  {
    endedAt = v55->fields.endedAt;
    if ( endedAt <= 0 )
      endedAt = *(_QWORD *)&entity->fields.eventId;
    EventName = EventEntity__getEventName((EventEntity_o *)entity, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v58 = LocalizationManager__Get((System_String_o *)StringLiteral_13566/*"TIME_REST_STRING"*/, 0LL);
    v59 = System_String__Concat_44581200(
            EventName,
            (System_String_o *)StringLiteral_81/*" "*/,
            v58,
            (System_String_o *)StringLiteral_23850/*"{0}"*/,
            0LL);
    v60 = (QuestBoardInformaionText_o *)sub_B5D694(QuestBoardInformaionText_TypeInfo);
    v65.fields.r = 0.0;
    v65.fields.g = 0.0;
    v65.fields.b = 0.0;
    v65.fields.a = 0.0;
    v64.fields.x = 0.0;
    v64.fields.y = 0.0;
    v64.fields.z = 0.0;
    v61 = (EventMissionProgressRequest_Argument_ProgressData_o *)v60;
    QuestBoardInformaionText___ctor(v60, v59, endedAt, 0, 0, v65, -1, 0, v64, 1, 0LL, 0LL, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v50,
      v61,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
  }
  return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v50;
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
        const MethodInfo *method)
{
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x23
  void *Instance; // x0
  __int64 v37; // x1
  DataManager_o *v38; // x24
  EventCampaignMaster_o *MasterData_WarQuestSelectionMaster; // x25
  int64_t mListCreatedTime; // x28
  QuestEntity_o *v41; // x27
  int v42; // w8
  void *v43; // x26
  unsigned int v44; // w19
  EventEntity_o *v45; // x28
  __int64 v47; // x0
  const MethodInfo *v48; // [xsp+0h] [xbp-70h]
  bool v49; // [xsp+14h] [xbp-5Ch]

  if ( (byte_42EBEE6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventCampaignMaster___, questId, phase, isQuestNoneCleared);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventQuestMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33, v34);
    byte_42EBEE6 = 1;
  }
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v35,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v49 = isQuestNoneCleared;
  v38 = (DataManager_o *)Instance;
  MasterData_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               v38,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               questId,
               (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !questBoardManager )
    goto LABEL_19;
  mListCreatedTime = questBoardManager->fields.mListCreatedTime;
  v41 = (QuestEntity_o *)Instance;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               v38,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventQuestMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = EventQuestMaster__GetEnabledEventCampaignForQuest(
               (EventQuestMaster_o *)Instance,
               questId,
               phase,
               mListCreatedTime,
               7,
               0LL);
  if ( !Instance )
    goto LABEL_19;
  v42 = *((_DWORD *)Instance + 6);
  v43 = Instance;
  if ( v42 >= 1 )
  {
    v44 = 0;
    while ( 1 )
    {
      if ( v44 >= v42 )
      {
        v47 = sub_B5D6C8(Instance);
        sub_B5D668(v47, 0LL);
      }
      v45 = (EventEntity_o *)*((_QWORD *)v43 + (int)v44 + 4);
      if ( !v45 || !MasterData_WarQuestSelectionMaster )
        break;
      Instance = EventCampaignMaster__getData(MasterData_WarQuestSelectionMaster, v45->fields.id, 0LL);
      if ( Instance )
      {
        Instance = ServantStatusQuestBoardDraw__CreateQuestBoardInformationText(
                     this,
                     v41,
                     v45,
                     (EventCampaignEntity_o *)Instance,
                     phase,
                     v49,
                     costCalcVal,
                     fixedVal,
                     v48);
        if ( Instance )
        {
          if ( !v35 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v35,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
        }
      }
      v42 = *((_DWORD *)v43 + 6);
      if ( (int)++v44 >= v42 )
        return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v35;
    }
LABEL_19:
    sub_B5D69C(Instance, v37);
  }
  return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v35;
}


bool __fastcall ServantStatusQuestBoardDraw__IsClose(MapControl_QuestInfo_o *qinf, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  MapControl_WarInfo_o *IsQuestReleaseAll; // x0
  __int64 v48; // x1
  struct MapControl_SpotInfo_o *SpotInfo_k__BackingField; // x8
  QuestReleaseOverwriteMaster_o *Master_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v52; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v53; // x20
  __int64 v54; // x1
  QuestReleaseEntity_o *v55; // x0
  MapControl_WarInfo_o *v56; // x20
  __int64 v57; // x8
  __int64 v58; // x23
  __int64 v59; // x8
  int32_t v60; // w19
  int32_t v61; // w22
  int64_t v62; // x21
  __int64 v63; // x0
  System_Collections_Generic_List_Enumerator_T__o v64; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *entityList; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_42EBEDC & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestReleaseMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__, v14, v15, v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__,
      v17,
      v18,
      v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__,
      v20,
      v21,
      v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v35, v36, v37);
    sub_B5D5C4(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v44, v45, v46);
    byte_42EBEDC = 1;
  }
  entityList = 0LL;
  memset(&v65, 0, sizeof(v65));
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  IsQuestReleaseAll = (MapControl_WarInfo_o *)TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL);
  if ( ((unsigned __int8)IsQuestReleaseAll & 1) != 0 )
    return 0;
  if ( !qinf )
    goto LABEL_53;
  if ( MapControl_QuestInfo__IsClear(qinf, 0LL) )
    return 0;
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
        return 1;
      SpotInfo_k__BackingField = qinf->fields._SpotInfo_k__BackingField;
      if ( !SpotInfo_k__BackingField )
        goto LABEL_53;
      if ( SpotInfo_k__BackingField->fields.dispType != 1 )
        return 1;
    }
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestReleaseOverwriteMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  v52 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v52,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  entityList = (System_Collections_Generic_List_QuestReleaseOverwriteEntity__o *)v52;
  if ( !Master_WarQuestSelectionMaster )
LABEL_53:
    sub_B5D69C(IsQuestReleaseAll, v48);
  if ( !QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
          Master_WarQuestSelectionMaster,
          &entityList,
          qinf->fields.questId,
          0LL,
          0LL) )
    goto LABEL_57;
  v53 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v53,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  IsQuestReleaseAll = (MapControl_WarInfo_o *)entityList;
  if ( !entityList )
    goto LABEL_53;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v64,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entityList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
  v65 = v64;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v65,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
  {
    if ( !v65.fields.current )
      sub_B5D69C(0LL, v54);
    v55 = QuestReleaseOverwriteEntity__ConvertToQuestReleaseEntity(
            (QuestReleaseOverwriteEntity_o *)v65.fields.current,
            0LL);
    if ( !v53 )
      sub_B5D69C(v55, v55);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v53,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v55,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v65,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
  if ( !v53 )
    goto LABEL_53;
  IsQuestReleaseAll = (MapControl_WarInfo_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v53,
                                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
  v56 = IsQuestReleaseAll;
  if ( !IsQuestReleaseAll )
  {
LABEL_57:
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    IsQuestReleaseAll = (MapControl_WarInfo_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestReleaseMaster___);
    if ( !IsQuestReleaseAll )
      goto LABEL_53;
    IsQuestReleaseAll = (MapControl_WarInfo_o *)QuestReleaseMaster__getListByQuestID(
                                                  (QuestReleaseMaster_o *)IsQuestReleaseAll,
                                                  qinf->fields.questId,
                                                  0LL);
    v56 = IsQuestReleaseAll;
  }
  if ( !v56 )
    goto LABEL_53;
  v57 = *(_QWORD *)&v56->fields.status;
  if ( !v57 )
    return qinf->fields.dispType != 1;
  if ( (int)v57 >= 1 )
  {
    v58 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v58 >= (unsigned int)v57 )
      {
        v63 = sub_B5D6C8(IsQuestReleaseAll);
        sub_B5D668(v63, 0LL);
      }
      v59 = *((_QWORD *)&v56->fields.mapInfoList + v58);
      if ( !v59 )
        break;
      v61 = *(_DWORD *)(v59 + 20);
      v60 = *(_DWORD *)(v59 + 24);
      v62 = *(_QWORD *)(v59 + 32);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestReleaseAll = (MapControl_WarInfo_o *)CondType__IsOpen(v61, v60, v62, 0, 0LL);
      if ( ((unsigned __int8)IsQuestReleaseAll & 1) == 0 )
        return 1;
      LODWORD(v57) = v56->fields.status;
      if ( (int)++v58 >= (int)v57 )
        return 0;
    }
    goto LABEL_53;
  }
  return 0;
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
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x8

  if ( (byte_42EBEE4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, (_DWORD)method, v2, v3);
    byte_42EBEE4 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  return !mInfoTextList || mInfoTextList->fields._size == 0;
}


bool __fastcall ServantStatusQuestBoardDraw__IsMultiInfoText(
        ServantStatusQuestBoardDraw_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x8

  if ( (byte_42EBEE3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, (_DWORD)method, v2, v3);
    byte_42EBEE3 = 1;
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  QuestRestrictionInfoMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x1
  bool HasFlag; // w0
  bool v12; // w21
  QuestRestrictionInfoEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EBEE8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestRestrictionInfoMaster___, (_DWORD)questEntity, phase, method);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    byte_42EBEE8 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestRestrictionInfoMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestRestrictionInfoMaster___);
  if ( !questEntity || !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  if ( QuestRestrictionInfoMaster__TryGetEntity(
         Master_WarQuestSelectionMaster,
         &entity,
         questEntity->fields.id,
         phase,
         0LL) )
  {
    Master_WarQuestSelectionMaster = (QuestRestrictionInfoMaster_o *)entity;
    if ( !entity )
      goto LABEL_18;
    if ( !QuestRestrictionInfoEntity__HasFlag(entity, 0x80000LL, 0LL) )
    {
      Master_WarQuestSelectionMaster = (QuestRestrictionInfoMaster_o *)entity;
      if ( entity )
      {
        HasFlag = QuestRestrictionInfoEntity__HasFlag(entity, 0x100000LL, 0LL);
LABEL_16:
        v12 = !HasFlag;
        return v12 & ~QuestEntity__HasFlag_25406292(questEntity, 2LL, phase, 0LL) & 1;
      }
LABEL_18:
      sub_B5D69C(Master_WarQuestSelectionMaster, v10);
    }
  }
  else if ( !QuestEntity__HasFlag_25406292(questEntity, 0x80000LL, phase, 0LL) )
  {
    HasFlag = QuestEntity__HasFlag_25406292(questEntity, 0x100000LL, phase, 0LL);
    goto LABEL_16;
  }
  v12 = 0;
  return v12 & ~QuestEntity__HasFlag_25406292(questEntity, 2LL, phase, 0LL) & 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Object_o *inputMessageObject; // x20
  int32_t questId; // w8
  UnityEngine_GameObject_o *v16; // x19
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  int32_t v19; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EBEE9 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_10080/*"OnClickServantQuest"*/, v11, v12, v13);
    byte_42EBEE9 = 1;
  }
  inputMessageObject = (UnityEngine_Object_o *)this->fields.inputMessageObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(inputMessageObject, 0LL, 0LL) || (questId = this->fields.questId) == 0 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
  }
  else
  {
    v16 = this->fields.inputMessageObject;
    v19 = questId;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
    if ( !v16 )
      sub_B5D69C(v17, v18);
    UnityEngine_GameObject__SendMessage_41595104(v16, (System_String_o *)StringLiteral_10080/*"OnClickServantQuest"*/, v17, 0LL);
  }
}


void __fastcall ServantStatusQuestBoardDraw__ResetInfoTextList(
        ServantStatusQuestBoardDraw_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_List_XWeaponTrail_Element__o *v11; // x0
  BattleServantConfConponent_o *p_mInfoTextList; // x19
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // t1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42EBEDF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo, v8, v9, v10);
    byte_42EBEDF = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  p_mInfoTextList = (BattleServantConfConponent_o *)&this->fields.mInfoTextList;
  v11 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)mInfoTextList;
  if ( mInfoTextList )
  {
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      v11,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Clear__);
  }
  else
  {
    v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v14,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
    p_mInfoTextList->klass = (BattleServantConfConponent_c *)v14;
    sub_B5D560(p_mInfoTextList, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  __int64 Master_WarQuestSelectionMaster; // x0
  __int64 v62; // x1
  System_String_o *age; // x20
  bool v64; // w25
  int32_t name_high; // w21
  Il2CppObject *v66; // x0
  System_String_o *v67; // x0
  int32_t v68; // w27
  int32_t targetId; // w26
  System_String_o *v70; // x21
  int32_t WarID_ByQuestID; // w26
  WarEntity_o *v72; // x0
  Il2CppObject *PrioredName; // x0
  int64_t OpenedAt; // x26
  System_Object_array *v75; // x26
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x27
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Int32_array **v89; // x27
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **v96; // x27
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_Int32_array **v103; // x27
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v105; // x22
  _BOOL4 v106; // w26
  UILabel_o *mTitleNameLb; // x24
  int32_t leftIndent; // w24
  int32_t *p_ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT; // x8
  UILabel_o *mCondChangeMessage; // x19
  int32_t v111; // w25
  float v112; // s8
  UILabel_o **p_mAdvanceNoticeLb; // x28
  float v114; // s1
  float v115; // s0
  int v116; // s2
  float v117; // s8
  float v118; // s0
  float v119; // s1
  float v120; // s0
  int v121; // s2
  float v122; // s1
  int v123; // s2
  UIWidget_o *mOverwriteAdvanceNoticeLb; // x23
  const MethodInfo *v125; // x4
  const MethodInfo *v126; // x4
  System_String_o *overlayClosedMessage; // x20
  UILabel_o *v128; // x22
  float v129; // s8
  UnityEngine_Object_o *mOverwriteAdvanceNoticeArrowObj; // x20
  __int64 v131; // x0
  __int64 v132; // x0
  char v133; // [xsp+8h] [xbp-88h]
  int32_t Minute; // [xsp+Ch] [xbp-84h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-80h] BYREF
  int32_t Day; // [xsp+14h] [xbp-7Ch] BYREF
  int64_t value; // [xsp+18h] [xbp-78h] BYREF
  uint64_t dateData; // [xsp+20h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF
  System_DateTime_o v140; // 0:x0.8
  System_DateTime_o v141; // 0:x0.8
  System_DateTime_o v142; // 0:x0.8
  System_DateTime_o v143; // 0:x0.8
  UnityEngine_Vector3_o v144; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EBEE1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_ClosedMessageMaster___,
      questReleaseClosedID,
      (_DWORD)warEntity,
      questEntity);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarMaster___, v16, v17, v18);
    sub_B5D5C4(&DataManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v22, v23, v24);
    sub_B5D5C4(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v25, v26, v27);
    sub_B5D5C4(&int_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&long_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&NetworkManager_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&object___TypeInfo, v40, v41, v42);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&ServantStatusQuestBoardDraw_TypeInfo, v46, v47, v48);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v49, v50, v51);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_14881/*"UNKNOWN_QUEST_NAME"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_1/*""*/, v58, v59, v60);
    byte_42EBEE1 = 1;
  }
  dateData = 0LL;
  entity = 0LL;
  if ( questReleaseClosedID < 1 )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClosedMessageMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_130;
  age = (System_String_o *)StringLiteral_1/*""*/;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
         &entity,
         questReleaseClosedID,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__) )
  {
    Master_WarQuestSelectionMaster = (__int64)entity;
    if ( !entity )
      goto LABEL_130;
    age = entity->fields.age;
    Master_WarQuestSelectionMaster = ClosedMessageEntity__IsChangeDispClosedMessage(
                                       (ClosedMessageEntity_o *)entity,
                                       0LL);
    if ( !entity )
      goto LABEL_130;
    v64 = Master_WarQuestSelectionMaster;
    Master_WarQuestSelectionMaster = ClosedMessageEntity__IsChangeDispPositionLeft((ClosedMessageEntity_o *)entity, 0LL);
    if ( !entity )
      goto LABEL_130;
    name_high = HIDWORD(entity->fields.name);
    if ( !questReleaseEntity )
      goto LABEL_130;
  }
  else
  {
    name_high = 0;
    Master_WarQuestSelectionMaster = 0LL;
    v64 = 0;
    if ( !questReleaseEntity )
      goto LABEL_130;
  }
  v133 = Master_WarQuestSelectionMaster;
  switch ( questReleaseEntity->fields.type )
  {
    case 1:
      v68 = name_high;
      targetId = questReleaseEntity->fields.targetId;
      v70 = (System_String_o *)StringLiteral_1/*""*/;
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      Master_WarQuestSelectionMaster = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_130;
      WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Master_WarQuestSelectionMaster, targetId, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_130;
      v72 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
              WarID_ByQuestID,
              (const MethodInfo_23FAE10 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( v72 )
      {
        PrioredName = (Il2CppObject *)WarEntity__GetPrioredName(v72, 0LL);
        age = System_String__Format(age, PrioredName, 0LL);
      }
      else
      {
        age = v70;
      }
      name_high = v68;
      goto LABEL_46;
    case 6:
    case 7:
    case 9:
      value = questReleaseEntity->fields.value;
      v66 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &value);
      v67 = System_String__Format(age, v66, 0LL);
      goto LABEL_45;
    case 0xC:
      if ( !questEntity )
        goto LABEL_130;
      OpenedAt = QuestEntity__getOpenedAt(questEntity, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      dateData = NetworkManager__getServerDateTime_26077756(OpenedAt, 0LL).fields.dateData;
      v75 = (System_Object_array *)sub_B5D5DC(object___TypeInfo, 4LL);
      v140.fields.dateData = (uint64_t)&dateData;
      LODWORD(value) = System_DateTime__get_Month(v140, 0LL);
      Master_WarQuestSelectionMaster = j_il2cpp_value_box_0(int_TypeInfo, &value);
      if ( !v75 )
        goto LABEL_130;
      v82 = (System_Int32_array **)Master_WarQuestSelectionMaster;
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = sub_B5D684(Master_WarQuestSelectionMaster, v75->obj.klass->_1.element_class);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_132;
      }
      if ( !v75->max_length )
        goto LABEL_131;
      v75->m_Items[0] = (Il2CppObject *)v82;
      sub_B5D560((BattleServantConfConponent_o *)v75->m_Items, v82, v76, v77, v78, v79, v80, v81);
      v141.fields.dateData = (uint64_t)&dateData;
      Day = System_DateTime__get_Day(v141, 0LL);
      Master_WarQuestSelectionMaster = j_il2cpp_value_box_0(int_TypeInfo, &Day);
      v89 = (System_Int32_array **)Master_WarQuestSelectionMaster;
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = sub_B5D684(Master_WarQuestSelectionMaster, v75->obj.klass->_1.element_class);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_132;
      }
      if ( v75->max_length <= 1 )
        goto LABEL_131;
      v75->m_Items[1] = (Il2CppObject *)v89;
      sub_B5D560((BattleServantConfConponent_o *)&v75->m_Items[1], v89, v83, v84, v85, v86, v87, v88);
      v142.fields.dateData = (uint64_t)&dateData;
      Hour = System_DateTime__get_Hour(v142, 0LL);
      Master_WarQuestSelectionMaster = j_il2cpp_value_box_0(int_TypeInfo, &Hour);
      v96 = (System_Int32_array **)Master_WarQuestSelectionMaster;
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = sub_B5D684(Master_WarQuestSelectionMaster, v75->obj.klass->_1.element_class);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_132;
      }
      if ( v75->max_length <= 2 )
        goto LABEL_131;
      v75->m_Items[2] = (Il2CppObject *)v96;
      sub_B5D560((BattleServantConfConponent_o *)&v75->m_Items[2], v96, v90, v91, v92, v93, v94, v95);
      v143.fields.dateData = (uint64_t)&dateData;
      Minute = System_DateTime__get_Minute(v143, 0LL);
      Master_WarQuestSelectionMaster = j_il2cpp_value_box_0(int_TypeInfo, &Minute);
      v103 = (System_Int32_array **)Master_WarQuestSelectionMaster;
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = sub_B5D684(Master_WarQuestSelectionMaster, v75->obj.klass->_1.element_class);
        if ( !Master_WarQuestSelectionMaster )
        {
LABEL_132:
          v132 = sub_B5D6BC(Master_WarQuestSelectionMaster);
          sub_B5D668(v132, 0LL);
        }
      }
      if ( v75->max_length <= 3 )
      {
LABEL_131:
        v131 = sub_B5D6C8(Master_WarQuestSelectionMaster);
        sub_B5D668(v131, 0LL);
      }
      v75->m_Items[3] = (Il2CppObject *)v103;
      sub_B5D560((BattleServantConfConponent_o *)&v75->m_Items[3], v103, v97, v98, v99, v100, v101, v102);
      v67 = System_String__Format_44656512(age, v75, 0LL);
LABEL_45:
      age = v67;
LABEL_46:
      if ( warEntity != 0LL && !v64 )
        v64 = WarEntity__IsChangeDispClosedMessage(warEntity, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_130;
      EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                                 (QuestReleaseOverwriteMaster_o *)Master_WarQuestSelectionMaster,
                                 this->fields.questId,
                                 checkTime,
                                 0LL);
      v105 = EntityByQuestIdAndTime;
      if ( EntityByQuestIdAndTime )
      {
        v106 = !System_String__IsNullOrEmpty(EntityByQuestIdAndTime->fields.overlayClosedMessage, 0LL);
        if ( v64 )
        {
LABEL_54:
          Master_WarQuestSelectionMaster = (__int64)this->fields.mAdvanceNoticeObj;
          if ( Master_WarQuestSelectionMaster )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
            mTitleNameLb = this->fields.mTitleNameLb;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (__int64)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_14881/*"UNKNOWN_QUEST_NAME"*/,
                                                        0LL);
            if ( mTitleNameLb )
            {
              UILabel__set_text(mTitleNameLb, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
              Master_WarQuestSelectionMaster = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
              if ( v106 )
              {
                if ( (WORD1(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
                }
                if ( !v105 )
                  goto LABEL_130;
                Master_WarQuestSelectionMaster = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
                leftIndent = v105->fields.leftIndent;
                p_ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT = &ServantStatusQuestBoardDraw_TypeInfo->static_fields->ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT;
              }
              else
              {
                if ( (WORD1(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
                  Master_WarQuestSelectionMaster = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
                }
                leftIndent = 0;
                p_ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT = (int32_t *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184)
                                                                   + 8LL);
              }
              v111 = *p_ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT;
              if ( (v133 & 1) != 0 )
              {
                if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
                  && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
                {
                  j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
                  Master_WarQuestSelectionMaster = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
                }
                v112 = *(float *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL);
                p_mAdvanceNoticeLb = &this->fields.mAdvanceNoticeLb;
                Master_WarQuestSelectionMaster = (__int64)this->fields.mAdvanceNoticeLb;
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_130;
                UIWidget__set_pivot((UIWidget_o *)Master_WarQuestSelectionMaster, 3, 0LL);
                Master_WarQuestSelectionMaster = (__int64)*p_mAdvanceNoticeLb;
                if ( !*p_mAdvanceNoticeLb )
                  goto LABEL_130;
                Master_WarQuestSelectionMaster = (__int64)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                            0LL);
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_130;
                v114 = 0.0;
                if ( v106 )
                  v114 = 24.0;
                v116 = 0;
                v115 = v112 + (float)name_high;
                UnityEngine_Transform__set_localPosition(
                  (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster,
                  *(UnityEngine_Vector3_o *)(&v114 - 1),
                  0LL);
                Master_WarQuestSelectionMaster = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
                if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
                  Master_WarQuestSelectionMaster = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
                }
                if ( !this->fields.mOverwriteAdvanceNoticeLb )
                  goto LABEL_130;
                v117 = *(float *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL);
                UIWidget__set_pivot((UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb, 3, 0LL);
                Master_WarQuestSelectionMaster = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_130;
                Master_WarQuestSelectionMaster = (__int64)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                            0LL);
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_130;
                v118 = v117 + (float)leftIndent;
              }
              else
              {
                p_mAdvanceNoticeLb = &this->fields.mAdvanceNoticeLb;
                Master_WarQuestSelectionMaster = (__int64)this->fields.mAdvanceNoticeLb;
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_130;
                UIWidget__set_pivot((UIWidget_o *)Master_WarQuestSelectionMaster, 4, 0LL);
                Master_WarQuestSelectionMaster = (__int64)*p_mAdvanceNoticeLb;
                if ( !*p_mAdvanceNoticeLb )
                  goto LABEL_130;
                Master_WarQuestSelectionMaster = (__int64)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                            0LL);
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_130;
                v119 = 0.0;
                if ( v106 )
                  v119 = 24.0;
                v121 = 0;
                v120 = (float)name_high * 0.5;
                UnityEngine_Transform__set_localPosition(
                  (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster,
                  *(UnityEngine_Vector3_o *)(&v119 - 1),
                  0LL);
                Master_WarQuestSelectionMaster = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_130;
                UIWidget__set_pivot((UIWidget_o *)Master_WarQuestSelectionMaster, 4, 0LL);
                Master_WarQuestSelectionMaster = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_130;
                Master_WarQuestSelectionMaster = (__int64)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                            0LL);
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_130;
                v118 = (float)leftIndent * 0.5;
              }
              v122 = -26.0;
              v123 = 0;
              UnityEngine_Transform__set_localPosition(
                (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster,
                *(UnityEngine_Vector3_o *)&v118,
                0LL);
              Master_WarQuestSelectionMaster = (__int64)*p_mAdvanceNoticeLb;
              if ( *p_mAdvanceNoticeLb )
              {
                UIWidget__set_height((UIWidget_o *)Master_WarQuestSelectionMaster, v111, 0LL);
                Master_WarQuestSelectionMaster = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
                mOverwriteAdvanceNoticeLb = (UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb;
                if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
                }
                if ( mOverwriteAdvanceNoticeLb )
                {
                  UIWidget__set_height(
                    mOverwriteAdvanceNoticeLb,
                    ServantStatusQuestBoardDraw_TypeInfo->static_fields->ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT,
                    0LL);
                  ServantStatusQuestBoardDraw___SetAdvanceNoticeText_g__CalculateLabel_61_0(
                    *p_mAdvanceNoticeLb,
                    age,
                    v111,
                    name_high,
                    v125);
                  if ( v106 )
                  {
                    Master_WarQuestSelectionMaster = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
                    if ( !Master_WarQuestSelectionMaster )
                      goto LABEL_130;
                    UnityEngine_GameObject__SetActive(
                      (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                      1,
                      0LL);
                    if ( !v105 )
                      goto LABEL_130;
                    overlayClosedMessage = v105->fields.overlayClosedMessage;
                    v128 = this->fields.mOverwriteAdvanceNoticeLb;
                    if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
                    }
                    v129 = (float)name_high * 0.5;
                    ServantStatusQuestBoardDraw___SetAdvanceNoticeText_g__CalculateLabel_61_0(
                      v128,
                      overlayClosedMessage,
                      v111,
                      leftIndent,
                      v126);
                  }
                  else
                  {
                    v129 = 0.0;
                  }
                  mOverwriteAdvanceNoticeArrowObj = (UnityEngine_Object_o *)this->fields.mOverwriteAdvanceNoticeArrowObj;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( UnityEngine_Object__op_Inequality(mOverwriteAdvanceNoticeArrowObj, 0LL, 0LL) )
                  {
                    Master_WarQuestSelectionMaster = (__int64)this->fields.mOverwriteAdvanceNoticeArrowObj;
                    if ( !Master_WarQuestSelectionMaster )
                      goto LABEL_130;
                    Master_WarQuestSelectionMaster = (__int64)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                                                0LL);
                    if ( !Master_WarQuestSelectionMaster )
                      goto LABEL_130;
                    v144.fields.y = 0.0;
                    v144.fields.z = 0.0;
                    v144.fields.x = v129;
                    UnityEngine_Transform__set_localPosition(
                      (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster,
                      v144,
                      0LL);
                  }
                  return;
                }
              }
            }
          }
LABEL_130:
          sub_B5D69C(Master_WarQuestSelectionMaster, v62);
        }
      }
      else
      {
        v106 = 0;
        if ( v64 )
          goto LABEL_54;
      }
      Master_WarQuestSelectionMaster = (__int64)this->fields.mTitleNameLb;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_130;
      UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, age, 0LL);
      Master_WarQuestSelectionMaster = (__int64)this->fields.mAdvanceNoticeLb;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_130;
      UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      Master_WarQuestSelectionMaster = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_130;
      UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( v106 )
      {
        Master_WarQuestSelectionMaster = (__int64)this->fields.mCondObject;
        if ( Master_WarQuestSelectionMaster )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
          if ( v105 )
          {
            Master_WarQuestSelectionMaster = (__int64)this->fields.mCondChangeMessage;
            if ( Master_WarQuestSelectionMaster )
            {
              UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, v105->fields.overlayClosedMessage, 0LL);
              mCondChangeMessage = this->fields.mCondChangeMessage;
              Master_WarQuestSelectionMaster = (__int64)ServantStatusQuestBoardDraw_TypeInfo;
              if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
              }
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
        goto LABEL_130;
      }
      return;
    default:
      goto LABEL_46;
  }
}


void __fastcall ServantStatusQuestBoardDraw__SetDark(ServantStatusQuestBoardDraw_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x1
  UISprite_o *mcBaseP; // x20
  UIWidget_o *mLineSp; // x0
  UILabel_o *mNoneLb; // x20
  const MethodInfo *v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct MapControl_QuestInfo_o **p_qinf; // x19
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_42EBEDD & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ServantStatusQuestBoardDraw_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_12125/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_1/*""*/, v11, v12, v13);
    byte_42EBEDD = 1;
  }
  UnityEngine_Color__get_black(0LL);
  mcBaseP = this->fields.mcBaseP;
  mLineSp = (UIWidget_o *)ServantStatusQuestBoardDraw_TypeInfo;
  if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  }
  if ( !mcBaseP )
    goto LABEL_29;
  UISprite__set_spriteName(mcBaseP, ServantStatusQuestBoardDraw_TypeInfo->static_fields->DARK_BOARD_SPRITE_NAME, 0LL);
  mLineSp = (UIWidget_o *)this->fields.mcBaseP;
  if ( !mLineSp )
    goto LABEL_29;
  UIWidget__set_width(mLineSp, ServantStatusQuestBoardDraw_TypeInfo->static_fields->DARK_BOARD_WIDTH, 0LL);
  mLineSp = (UIWidget_o *)this->fields.mcBaseP;
  if ( !mLineSp )
    goto LABEL_29;
  UIWidget__set_height(mLineSp, ServantStatusQuestBoardDraw_TypeInfo->static_fields->DARK_BOARD_HIGHT, 0LL);
  mLineSp = (UIWidget_o *)this->fields.mLineSp;
  if ( !mLineSp )
    goto LABEL_29;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLineSp, 0, 0LL);
  mLineSp = (UIWidget_o *)this->fields.mTitle2Sp;
  if ( !mLineSp )
    goto LABEL_29;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLineSp, 0, 0LL);
  mLineSp = (UIWidget_o *)this->fields.mTitleSp;
  if ( !mLineSp )
    goto LABEL_29;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLineSp, 0, 0LL);
  mLineSp = (UIWidget_o *)this->fields.mClearObj;
  if ( !mLineSp )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0LL);
  mLineSp = (UIWidget_o *)this->fields.mLinkObj;
  if ( !mLineSp )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0LL);
  mNoneLb = this->fields.mNoneLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  mLineSp = (UIWidget_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12125/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_DARK"*/, 0LL);
  if ( !mNoneLb )
    goto LABEL_29;
  UILabel__set_text(mNoneLb, (System_String_o *)mLineSp, 0LL);
  mLineSp = (UIWidget_o *)this->fields.mTitleNameLb;
  if ( !mLineSp )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)mLineSp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  mLineSp = (UIWidget_o *)this->fields.mTitleShortcutSp;
  if ( !mLineSp )
    goto LABEL_29;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLineSp, 0, 0LL);
  mLineSp = (UIWidget_o *)this->fields.mTitleShortcutLb;
  if ( !mLineSp )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)mLineSp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  ServantStatusQuestBoardDraw__ResetInfoTextList(this, v18);
  mLineSp = (UIWidget_o *)this->fields.mOptionInfoLb;
  if ( !mLineSp )
    goto LABEL_29;
  mLineSp = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mLineSp, 0LL);
  if ( !mLineSp )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0LL);
  this->fields.mRewardIconInfs = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.mRewardIconInfs, 0LL, v19, v20, v21, v22, v23, v24);
  mLineSp = (UIWidget_o *)this->fields.mRewardIcon;
  if ( !mLineSp
    || (mLineSp = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mLineSp, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0LL),
        (mLineSp = (UIWidget_o *)this->fields.mRewardObj) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0LL),
        (mLineSp = (UIWidget_o *)this->fields.mRewardGetSP) == 0LL)
    || (mLineSp = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mLineSp, 0LL)) == 0LL )
  {
LABEL_29:
    sub_B5D69C(mLineSp, v14);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLineSp, 0, 0LL);
  this->fields.inputMessageObject = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.inputMessageObject, 0LL, v25, v26, v27, v28, v29, v30);
  this->fields.qinf = 0LL;
  p_qinf = &this->fields.qinf;
  *((_DWORD *)p_qinf - 2) = 0;
  sub_B5D560((BattleServantConfConponent_o *)p_qinf, 0LL, v32, v33, v34, v35, v36, v37);
}


void __fastcall ServantStatusQuestBoardDraw__SetInfoTextAlpha(
        ServantStatusQuestBoardDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x8
  BoardOptionTextWithIconComponent_o *mOptionInfoLb; // x0

  if ( (byte_42EBEE3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, (_DWORD)method, v3, v4);
    byte_42EBEE3 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList && mInfoTextList->fields._size >= 2 )
  {
    mOptionInfoLb = this->fields.mOptionInfoLb;
    if ( !mOptionInfoLb )
      sub_B5D69C(0LL, method);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  int v88; // w1
  int v89; // w2
  __int64 v90; // x3
  int v91; // w1
  int v92; // w2
  __int64 v93; // x3
  int v94; // w1
  int v95; // w2
  __int64 v96; // x3
  int v97; // w1
  int v98; // w2
  __int64 v99; // x3
  int v100; // w1
  int v101; // w2
  __int64 v102; // x3
  int v103; // w1
  int v104; // w2
  __int64 v105; // x3
  int v106; // w1
  int v107; // w2
  __int64 v108; // x3
  int v109; // w1
  int v110; // w2
  __int64 v111; // x3
  int v112; // w1
  int v113; // w2
  __int64 v114; // x3
  int v115; // w1
  int v116; // w2
  __int64 v117; // x3
  int v118; // w1
  int v119; // w2
  __int64 v120; // x3
  int v121; // w1
  int v122; // w2
  __int64 v123; // x3
  int v124; // w1
  int v125; // w2
  __int64 v126; // x3
  int v127; // w1
  int v128; // w2
  __int64 v129; // x3
  __int64 v130; // x20
  int64_t Master_WarQuestSelectionMaster; // x0
  __int64 giftIconId; // x1
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  int current; // w26
  char v140; // w19
  int64_t mListCreatedTime; // x25
  QuestEntity_o *Mine; // x28
  const MethodInfo *v143; // x1
  int v144; // w23
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  int v151; // w19
  const MethodInfo *v152; // x1
  int v153; // w27
  int32_t id; // w8
  int32_t warId; // w21
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v157; // x21
  bool v158; // w8
  ServantLimitImageMaster_o *v159; // x27
  _BOOL4 IsLimitCountSealQuest; // w25
  int closedMessageId; // w21
  WarQuestSelectionMaster_o *v162; // x28
  int64_t v163; // x2
  UserQuestMaster_o *v164; // x0
  int32_t questId; // w3
  char HasStatus; // w26
  _BOOL4 IsCommonReleaseMultiClear; // w0
  char v168; // w28
  int v169; // s0
  int v170; // s1
  int v171; // s2
  int v172; // s3
  System_String_array **v173; // x2
  System_String_array **v174; // x3
  System_Boolean_array **v175; // x4
  System_Int32_array **v176; // x5
  System_Int32_array *v177; // x6
  System_Int32_array *v178; // x7
  struct UISprite_o *mcBaseP; // x8
  struct UIAtlas_o *mAtlas; // x1
  UISprite_o *v181; // x27
  System_Action_o *v182; // x27
  UISprite_o *mTitleSp; // x27
  System_String_o **v184; // x8
  System_Action_o *v185; // x25
  const MethodInfo *v186; // x6
  char v187; // w27
  struct UILabel_o **p_mTitleNameLb; // x19
  struct UILabel_o *mTitleNameLb; // x21
  System_String_o **v190; // x8
  LocalizationManager_c *v191; // x0
  System_String_o **v192; // x9
  System_String_o *v193; // x25
  System_String_o *v194; // x0
  System_String_o *v195; // x1
  int32_t v196; // w21
  bool v197; // cc
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Transform_o *v199; // x0
  float v200; // s0
  float v201; // s1
  float v202; // s2
  System_String_array **v203; // x2
  System_String_array **v204; // x3
  System_Boolean_array **v205; // x4
  System_Int32_array **v206; // x5
  System_Int32_array *v207; // x6
  System_Int32_array *v208; // x7
  struct UnityEngine_GameObject_o *v209; // x1
  char v210; // w19
  QuestEntity_o *v211; // x28
  int32_t ServantId; // w21
  BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x26
  ServantEntity_o *v214; // x25
  UILabel_o *mTitleShortcutLb; // x21
  ServantStatusQuestBoardManager_o *v216; // x25
  const MethodInfo *v217; // x1
  bool v218; // w21
  __int64 endTime; // x21
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x25
  System_String_o *v221; // x28
  QuestBoardInformaionText_o *v222; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v223; // x27
  char v224; // w27
  int32_t questPhase; // w19
  int32_t PhaseMax; // w0
  int32_t v227; // w0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v228; // x21
  int32_t v229; // w1
  const MethodInfo *v230; // x7
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v231; // x19
  int size; // w8
  int v233; // w21
  System_String_array **v234; // x2
  System_String_array **v235; // x3
  System_Boolean_array **v236; // x4
  System_Int32_array **v237; // x5
  System_Int32_array *v238; // x6
  System_Int32_array *v239; // x7
  char v240; // w19
  System_String_array **v241; // x2
  System_String_array **v242; // x3
  System_Boolean_array **v243; // x4
  System_Int32_array **v244; // x5
  System_Int32_array *v245; // x6
  System_Int32_array *v246; // x7
  __int64 v247; // x8
  struct GiftEntity_array *v248; // x22
  int v249; // w9
  _DWORD *v250; // x9
  int v251; // w8
  int32_t v252; // w2
  System_String_o *v253; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v254; // x25
  Il2CppObject *BattleName; // x0
  int32_t v256; // w3
  __int64 v257; // x0
  WarEntity_o *v258; // [xsp+18h] [xbp-E8h]
  int64_t v259; // [xsp+20h] [xbp-E0h]
  int32_t limitCounta; // [xsp+28h] [xbp-D8h]
  int v261; // [xsp+2Ch] [xbp-D4h]
  _BOOL4 IsClear; // [xsp+30h] [xbp-D0h]
  char v263; // [xsp+34h] [xbp-CCh]
  UnityEngine_GameObject_o *v264; // [xsp+38h] [xbp-C8h]
  ServantStatusQuestBoardManager_o *v265; // [xsp+48h] [xbp-B8h]
  QuestEntity_o *questEntity; // [xsp+50h] [xbp-B0h]
  int32_t QuestType; // [xsp+5Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_int__o v268; // [xsp+60h] [xbp-A0h] BYREF
  int32_t fixedVal[2]; // [xsp+78h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v270; // [xsp+80h] [xbp-80h] BYREF
  UserQuestEntity_o *entity; // [xsp+98h] [xbp-68h] BYREF
  QuestReleaseEntity_o *questReleaseNG; // [xsp+A0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v273; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v274; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EBEDE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)qinf, (_DWORD)beforeQuestInfo, inputMessageObject);
    sub_B5D5C4(&AtlasManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&CondType_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, v19, v20, v21);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v22, v23, v24);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestGroupMaster___, v25, v26, v27);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v28, v29, v30);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v31, v32, v33);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserQuestMaster___, v34, v35, v36);
    sub_B5D5C4(&DataManager_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v40, v41, v42);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v43, v44, v45);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v46, v47, v48);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v49, v50, v51);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v52, v53, v54);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__, v55, v56, v57);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v58, v59, v60);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v61, v62, v63);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, v64, v65, v66);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, v67, v68, v69);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v70, v71, v72);
    sub_B5D5C4(&NetworkManager_TypeInfo, v73, v74, v75);
    sub_B5D5C4(&QuestBoardInformaionText_TypeInfo, v76, v77, v78);
    sub_B5D5C4(&ServantStatusQuestBoardDraw_TypeInfo, v79, v80, v81);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v82, v83, v84);
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v85, v86, v87);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v88, v89, v90);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v91, v92, v93);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v94, v95, v96);
    sub_B5D5C4(&Method_ServantStatusQuestBoardDraw___c__DisplayClass55_0__SetItem_b__0__, v97, v98, v99);
    sub_B5D5C4(&Method_ServantStatusQuestBoardDraw___c__DisplayClass55_0__SetItem_b__1__, v100, v101, v102);
    sub_B5D5C4(&ServantStatusQuestBoardDraw___c__DisplayClass55_0_TypeInfo, v103, v104, v105);
    sub_B5D5C4(&StringLiteral_13564/*"TIME_REST_QUEST_BOARD_QUEST"*/, v106, v107, v108);
    sub_B5D5C4(&StringLiteral_23850/*"{0}"*/, v109, v110, v111);
    sub_B5D5C4(&StringLiteral_12192/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE2"*/, v112, v113, v114);
    sub_B5D5C4(&StringLiteral_12194/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT2"*/, v115, v116, v117);
    sub_B5D5C4(&StringLiteral_12193/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/, v118, v119, v120);
    sub_B5D5C4(&StringLiteral_1/*""*/, v121, v122, v123);
    sub_B5D5C4(&StringLiteral_12191/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE"*/, v124, v125, v126);
    sub_B5D5C4(&StringLiteral_12148/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/, v127, v128, v129);
    byte_42EBEDE = 1;
  }
  entity = 0LL;
  questReleaseNG = 0LL;
  memset(&v270, 0, sizeof(v270));
  *(_QWORD *)fixedVal = 0LL;
  v130 = sub_B5D694(ServantStatusQuestBoardDraw___c__DisplayClass55_0_TypeInfo);
  ServantStatusQuestBoardDraw___c__DisplayClass55_0___ctor(
    (ServantStatusQuestBoardDraw___c__DisplayClass55_0_o *)v130,
    0LL);
  if ( !v130 )
    goto LABEL_264;
  *(_QWORD *)(v130 + 16) = this;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v130 + 16),
    (System_Int32_array **)this,
    v133,
    v134,
    v135,
    v136,
    v137,
    v138);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !qinf )
    goto LABEL_264;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  v264 = inputMessageObject;
  limitCounta = limitCount;
  Master_WarQuestSelectionMaster = (int64_t)QuestGroupMaster__GetInterludeQuestIdList(
                                              (QuestGroupMaster_o *)Master_WarQuestSelectionMaster,
                                              qinf->fields.questId,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v268,
    (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v270 = v268;
  v265 = questBoardManager;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v270,
            (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v270.fields.current;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsQuestClear_25877652(current, -1, 0, 0LL) )
    {
      v140 = 1;
      goto LABEL_18;
    }
  }
  v140 = 0;
  current = 0;
LABEL_18:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v270,
    (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( !questBoardManager )
    goto LABEL_264;
  mListCreatedTime = questBoardManager->fields.mListCreatedTime;
  Mine = MapControl_QuestInfo__GetMine(qinf, 0LL);
  QuestType = MapControl_QuestInfo__GetQuestType(qinf, 0LL);
  v144 = (v140 & 1) != 0 || MapControl_QuestInfo__IsClear(qinf, 0LL);
  if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  }
  Master_WarQuestSelectionMaster = ServantStatusQuestBoardDraw__IsClose(qinf, v143);
  v151 = Master_WarQuestSelectionMaster;
  if ( beforeQuestInfo )
  {
    IsClear = MapControl_QuestInfo__IsClear(beforeQuestInfo, 0LL);
    if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    }
    Master_WarQuestSelectionMaster = ServantStatusQuestBoardDraw__IsClose(beforeQuestInfo, v152);
    v153 = Master_WarQuestSelectionMaster & 1;
    if ( !Mine )
      goto LABEL_264;
  }
  else
  {
    v153 = 0;
    IsClear = 1;
    if ( !Mine )
      goto LABEL_264;
  }
  id = Mine->fields.id;
  this->fields.qinf = qinf;
  this->fields.questId = id;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.qinf,
    (System_Int32_array **)qinf,
    v145,
    v146,
    v147,
    v148,
    v149,
    v150);
  warId = qinf->fields.warId;
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  Master_WarQuestSelectionMaster = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Master_WarQuestSelectionMaster, warId, 0LL);
  v157 = WarEntityByWarID;
  if ( WarEntityByWarID )
    v158 = !WarEntity__IsFolder(WarEntityByWarID, 0LL);
  else
    v158 = 0;
  v261 = v153;
  v259 = mListCreatedTime;
  *(_BYTE *)(v130 + 40) = v158;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  v159 = (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster;
  IsLimitCountSealQuest = ServantLimitImageMaster__IsLimitCountSealQuest(
                            (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster,
                            this->fields.questId,
                            0LL);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  Master_WarQuestSelectionMaster = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  v258 = v157;
  clsQuestCheck__mfQuestReleaseCheckGetEntityByQuestID(
    (clsQuestCheck_o *)Master_WarQuestSelectionMaster,
    Mine->fields.id,
    &questReleaseNG,
    qinf,
    0LL);
  if ( questReleaseNG )
    closedMessageId = questReleaseNG->fields.closedMessageId;
  else
    closedMessageId = 0;
  questEntity = Mine;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v162 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( current < 1 )
  {
    if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = NetworkManager__get_UserId(0LL);
    if ( !v162 )
      goto LABEL_264;
    questId = this->fields.questId;
    v163 = Master_WarQuestSelectionMaster;
    v164 = (UserQuestMaster_o *)v162;
  }
  else
  {
    if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = NetworkManager__get_UserId(0LL);
    if ( !v162 )
      goto LABEL_264;
    v163 = Master_WarQuestSelectionMaster;
    v164 = (UserQuestMaster_o *)v162;
    questId = current;
  }
  UserQuestMaster__TryGetEntity(v164, &entity, v163, questId, 0LL);
  if ( entity )
    HasStatus = UserQuestEntity__HasStatus(entity, 4, 0LL);
  else
    HasStatus = 0;
  if ( (IsLimitCountSealQuest & ~v144 & 1) != 0 )
  {
    IsCommonReleaseMultiClear = ServantLimitImageMaster__IsCommonReleaseMultiClear(v159, this->fields.questId, 0LL);
    v144 = IsCommonReleaseMultiClear;
    HasStatus &= !IsCommonReleaseMultiClear;
    if ( IsCommonReleaseMultiClear )
      closedMessageId = 0;
    v151 &= !IsCommonReleaseMultiClear;
  }
  v263 = HasStatus;
  v168 = v151 | v144;
  if ( ((v151 | v144) & 1) != 0 )
    *(UnityEngine_Color_o *)&v169 = UnityEngine_Color__get_gray(0LL);
  else
    *(UnityEngine_Color_o *)&v169 = UnityEngine_Color__get_white(0LL);
  *(_DWORD *)(v130 + 24) = v169;
  *(_DWORD *)(v130 + 28) = v170;
  *(_DWORD *)(v130 + 32) = v171;
  *(_DWORD *)(v130 + 36) = v172;
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleObj;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mOptionInfoLb;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  Master_WarQuestSelectionMaster = (int64_t)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardObj;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mAdvanceNoticeObj;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mOverwriteAdvanceNoticeObj;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mCondObject;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
  mcBaseP = this->fields.mcBaseP;
  if ( !mcBaseP )
    goto LABEL_264;
  mAtlas = mcBaseP->fields.mAtlas;
  this->fields.basePanelAtlas = mAtlas;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.basePanelAtlas,
    (System_Int32_array **)mAtlas,
    v173,
    v174,
    v175,
    v176,
    v177,
    v178);
  v181 = this->fields.mcBaseP;
  Master_WarQuestSelectionMaster = (int64_t)ServantStatusQuestBoardDraw_TypeInfo;
  if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
  }
  if ( !v181 )
    goto LABEL_264;
  UISprite__set_spriteName(v181, ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME, 0LL);
  if ( IsLimitCountSealQuest )
  {
    v182 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v182,
      (Il2CppObject *)v130,
      Method_ServantStatusQuestBoardDraw___c__DisplayClass55_0__SetItem_b__0__,
      0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__LoadEventUI(v182, 1, 0LL);
  }
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mcBaseP;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Master_WarQuestSelectionMaster + 840LL))(
    Master_WarQuestSelectionMaster,
    *(_QWORD *)(*(_QWORD *)Master_WarQuestSelectionMaster + 848LL));
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mcBaseP;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v130 + 24), 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mLineSp;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mLineSp;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v130 + 24), 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitle2Sp;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  if ( (v144 & 1) != 0 )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_WarQuestSelectionMaster, 0, 0LL);
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleSp;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_WarQuestSelectionMaster, 0, 0LL);
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mLinkObj;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_WarQuestSelectionMaster, 1, 0LL);
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitle2Sp;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v130 + 24), 0LL);
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleSp;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_WarQuestSelectionMaster, 1, 0LL);
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleSp;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    UISprite__set_atlas((UISprite_o *)Master_WarQuestSelectionMaster, this->fields.basePanelAtlas, 0LL);
    mTitleSp = this->fields.mTitleSp;
    if ( QuestType == 3 )
    {
      Master_WarQuestSelectionMaster = (int64_t)ServantStatusQuestBoardDraw_TypeInfo;
      if ( *(_BYTE *)(v130 + 40) )
      {
        if ( (WORD1(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
          Master_WarQuestSelectionMaster = (int64_t)ServantStatusQuestBoardDraw_TypeInfo;
        }
        v184 = (System_String_o **)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 96LL);
        if ( !mTitleSp )
          goto LABEL_264;
      }
      else
      {
        if ( (WORD1(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
          Master_WarQuestSelectionMaster = (int64_t)ServantStatusQuestBoardDraw_TypeInfo;
        }
        v184 = (System_String_o **)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 88LL);
        if ( !mTitleSp )
          goto LABEL_264;
      }
      UISprite__set_spriteName(mTitleSp, *v184, 0LL);
      if ( IsLimitCountSealQuest )
      {
        v185 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          v185,
          (Il2CppObject *)v130,
          Method_ServantStatusQuestBoardDraw___c__DisplayClass55_0__SetItem_b__1__,
          0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__LoadEventUI(v185, 1, 0LL);
      }
    }
    else
    {
      Master_WarQuestSelectionMaster = (int64_t)ServantStatusQuestBoardDraw_TypeInfo;
      if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
      }
      if ( !mTitleSp )
        goto LABEL_264;
      UISprite__set_spriteName(
        mTitleSp,
        ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_SPRITE_NAME_RAINFORCEMENT,
        0LL);
    }
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleSp;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Master_WarQuestSelectionMaster + 840LL))(
      Master_WarQuestSelectionMaster,
      *(_QWORD *)(*(_QWORD *)Master_WarQuestSelectionMaster + 848LL));
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleSp;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v130 + 24), 0LL);
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mLinkObj;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mLinkObj;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    Master_WarQuestSelectionMaster = (int64_t)UnityEngine_GameObject__get_gameObject(
                                                (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                                0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    Master_WarQuestSelectionMaster = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v130 + 24), 0LL);
  }
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mClearObj;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, v144 & 1, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mNoneLb;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !(v144 & 1 | IsClear) )
  {
    v187 = v151;
    p_mTitleNameLb = &this->fields.mTitleNameLb;
    mTitleNameLb = this->fields.mTitleNameLb;
    if ( QuestType == 3 )
    {
      v190 = (System_String_o **)&StringLiteral_12192/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE2"*/;
      v191 = LocalizationManager_TypeInfo;
      v192 = (System_String_o **)&StringLiteral_12191/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_INTERLUDE"*/;
    }
    else
    {
      v190 = (System_String_o **)&StringLiteral_12194/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT2"*/;
      v191 = LocalizationManager_TypeInfo;
      v192 = (System_String_o **)&StringLiteral_12193/*"SERVANT_STATUS_UNKNOWN_NAME_QUEST_RAINFORCEMENT"*/;
    }
    if ( !v261 )
      v190 = v192;
    v193 = *v190;
    if ( (BYTE3(v191->vtable._0_Equals.methodPtr) & 4) != 0 && !v191->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v191);
    v194 = v193;
    goto LABEL_145;
  }
  if ( closedMessageId < 1 )
  {
    if ( !questReleaseNG || questReleaseNG->fields.type != 8 )
    {
      Master_WarQuestSelectionMaster = (int64_t)QuestEntity__getQuestName(questEntity, 0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_264;
      v253 = (System_String_o *)Master_WarQuestSelectionMaster;
      if ( System_String__Contains(
             (System_String_o *)Master_WarQuestSelectionMaster,
             (System_String_o *)StringLiteral_23850/*"{0}"*/,
             0LL) )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v254 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
        Master_WarQuestSelectionMaster = QuestEntity__getServantId(questEntity, 0LL);
        if ( !v254 )
          goto LABEL_264;
        Master_WarQuestSelectionMaster = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    v254,
                                                    Master_WarQuestSelectionMaster,
                                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_264;
        v187 = v151;
        BattleName = (Il2CppObject *)ServantEntity__getBattleName(
                                       (ServantEntity_o *)Master_WarQuestSelectionMaster,
                                       0,
                                       -1,
                                       0LL);
        v253 = System_String__Format(v253, BattleName, 0LL);
      }
      else
      {
        v187 = v151;
      }
      p_mTitleNameLb = &this->fields.mTitleNameLb;
      Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleNameLb;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_264;
      v195 = v253;
      goto LABEL_147;
    }
    v187 = v151;
    p_mTitleNameLb = &this->fields.mTitleNameLb;
    mTitleNameLb = this->fields.mTitleNameLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v194 = (System_String_o *)StringLiteral_12148/*"SERVANT_STATUS_QUEST_NOT_RELEASED_BECAUSE_DONT_HAVE_SERVANT"*/;
LABEL_145:
    Master_WarQuestSelectionMaster = (int64_t)LocalizationManager__Get(v194, 0LL);
    if ( !mTitleNameLb )
      goto LABEL_264;
    v195 = (System_String_o *)Master_WarQuestSelectionMaster;
    Master_WarQuestSelectionMaster = (int64_t)mTitleNameLb;
LABEL_147:
    UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, v195, 0LL);
    goto LABEL_148;
  }
  v187 = v151;
  ServantStatusQuestBoardDraw__SetAdvanceNoticeText(
    this,
    closedMessageId,
    v258,
    questEntity,
    questReleaseNG,
    v259,
    v186);
  p_mTitleNameLb = &this->fields.mTitleNameLb;
LABEL_148:
  Master_WarQuestSelectionMaster = (int64_t)*p_mTitleNameLb;
  if ( !*p_mTitleNameLb )
    goto LABEL_264;
  v196 = *(_DWORD *)(Master_WarQuestSelectionMaster + 160);
  if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    Master_WarQuestSelectionMaster = (int64_t)*p_mTitleNameLb;
    if ( !*p_mTitleNameLb )
      goto LABEL_264;
  }
  v197 = v196 <= ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
  if ( v197 )
  {
    *(UnityEngine_Vector3_o *)&v200 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_264;
    v199 = transform;
  }
  else
  {
    Master_WarQuestSelectionMaster = (int64_t)ServantStatusQuestBoardDraw_TypeInfo;
    if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    }
    if ( !*p_mTitleNameLb || !transform )
      goto LABEL_264;
    v199 = transform;
    v200 = (float)ServantStatusQuestBoardDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH
         / (float)(*p_mTitleNameLb)->fields.mWidth;
    v201 = 1.0;
    v202 = 1.0;
  }
  UnityEngine_Transform__set_localScale(v199, *(UnityEngine_Vector3_o *)&v200, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)*p_mTitleNameLb;
  if ( !*p_mTitleNameLb )
    goto LABEL_264;
  UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v130 + 24), 0LL);
  if ( (v168 & 1) != 0 )
    v209 = 0LL;
  else
    v209 = v264;
  this->fields.inputMessageObject = v209;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.inputMessageObject,
    (System_Int32_array **)v209,
    v203,
    v204,
    v205,
    v206,
    v207,
    v208);
  v210 = v187;
  if ( QuestType != 3 )
  {
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleShortcutSp;
    v211 = questEntity;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    p_mOptionInfoLb = &this->fields.mOptionInfoLb;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_WarQuestSelectionMaster, 1, 0LL);
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleShortcutSp;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v130 + 24), 0LL);
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleShortcutLb;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    goto LABEL_185;
  }
  v211 = questEntity;
  ServantId = QuestEntity__getServantId(questEntity, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)Master_WarQuestSelectionMaster,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  Master_WarQuestSelectionMaster = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                              ServantId,
                                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.mTitleShortcutSp )
    goto LABEL_264;
  v214 = (ServantEntity_o *)Master_WarQuestSelectionMaster;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mTitleShortcutSp, 0, 0LL);
  mTitleShortcutLb = this->fields.mTitleShortcutLb;
  if ( !v214 )
  {
    if ( !mTitleShortcutLb )
      goto LABEL_264;
    Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleShortcutLb;
LABEL_185:
    UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v216 = v265;
    goto LABEL_186;
  }
  Master_WarQuestSelectionMaster = (int64_t)ServantEntity__getName(v214, limitCounta, -1, 0LL);
  if ( !mTitleShortcutLb )
    goto LABEL_264;
  UILabel__set_text(mTitleShortcutLb, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mTitleShortcutLb;
  v216 = v265;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v130 + 24), 0LL);
LABEL_186:
  ServantStatusQuestBoardDraw__ResetInfoTextList(this, v217);
  if ( (v144 & 1) != 0 )
  {
    v218 = 0;
  }
  else
  {
    fixedVal[0] = -1;
    fixedVal[1] = 0;
    endTime = qinf->fields.endTime;
    if ( endTime >= 1 && !QuestEntity__HasFlag(v211, 32LL, 0LL) )
    {
      mInfoTextList = this->fields.mInfoTextList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v221 = LocalizationManager__Get((System_String_o *)StringLiteral_13564/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
      v222 = (QuestBoardInformaionText_o *)sub_B5D694(QuestBoardInformaionText_TypeInfo);
      v274.fields.r = 0.0;
      v274.fields.g = 0.0;
      v274.fields.b = 0.0;
      v274.fields.a = 0.0;
      v273.fields.x = 0.0;
      v273.fields.y = 0.0;
      v273.fields.z = 0.0;
      v223 = (EventMissionProgressRequest_Argument_ProgressData_o *)v222;
      QuestBoardInformaionText___ctor(v222, v221, endTime, 0, 0, v274, -1, 0, v273, 1, 0LL, 0LL, 0LL);
      if ( !mInfoTextList )
        goto LABEL_264;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mInfoTextList,
        v223,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
      v216 = v265;
      v211 = questEntity;
    }
    v224 = v210;
    questPhase = qinf->fields.questPhase;
    PhaseMax = MapControl_QuestInfo__GetPhaseMax(qinf, 0LL);
    v227 = UnityEngine_Mathf__Min_41629336(questPhase + 1, PhaseMax, 0LL);
    v228 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.mInfoTextList;
    Master_WarQuestSelectionMaster = (int64_t)ServantStatusQuestBoardDraw__GetCampaignText(
                                                this,
                                                v229,
                                                v227,
                                                0,
                                                v216,
                                                &fixedVal[1],
                                                fixedVal,
                                                v230);
    if ( !v228 )
      goto LABEL_264;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      v228,
      (System_Collections_Generic_IEnumerable_T__o *)Master_WarQuestSelectionMaster,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
    v231 = this->fields.mInfoTextList;
    if ( !v231 )
      goto LABEL_264;
    size = v231->fields._size;
    if ( size < 1 )
    {
      v218 = 0;
      v210 = v224;
    }
    else
    {
      v233 = v216->fields.mAlphaAnimCnt % size;
      if ( size <= (unsigned int)v233 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      Master_WarQuestSelectionMaster = (int64_t)v231->fields._items->m_Items[v233];
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_264;
      QuestBoardInformaionText__SetTime(
        (QuestBoardInformaionText_o *)Master_WarQuestSelectionMaster,
        p_mOptionInfoLb,
        &this->fields.mOptionInfoFrameSp,
        0LL);
      Master_WarQuestSelectionMaster = (int64_t)this->fields.mOptionInfoLb;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_264;
      v210 = v224;
      BoardOptionTextWithIconComponent__set_Alpha(
        (BoardOptionTextWithIconComponent_o *)Master_WarQuestSelectionMaster,
        1.0,
        0LL);
      v218 = 1;
      qinf->fields.costCalcVal = fixedVal[1];
      qinf->fields._fixedCostVal_k__BackingField = fixedVal[0];
    }
  }
  Master_WarQuestSelectionMaster = (int64_t)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_264;
  Master_WarQuestSelectionMaster = (int64_t)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  Master_WarQuestSelectionMaster = (int64_t)UnityEngine_Transform__get_parent(
                                              (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  Master_WarQuestSelectionMaster = (int64_t)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, v218, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_264;
  Master_WarQuestSelectionMaster = (int64_t)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, v218, 0LL);
  this->fields.mRewardIconInfs = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.mRewardIconInfs, 0LL, v234, v235, v236, v237, v238, v239);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardIcon;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  Master_WarQuestSelectionMaster = (int64_t)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
  if ( (v210 & 1) == 0 || !QuestEntity__HasFlag(v211, 4096LL, 0LL) )
  {
    giftIconId = (unsigned int)v211->fields.giftIconId;
    if ( (int)giftIconId >= 1 )
    {
      Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardIcon;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_264;
      goto LABEL_218;
    }
    if ( v211->fields.giftId < 1 )
    {
      Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardObj;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_264;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
      v240 = v263;
      goto LABEL_221;
    }
    Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)Master_WarQuestSelectionMaster,
                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    Master_WarQuestSelectionMaster = (int64_t)GiftMaster__GetGiftListById(
                                                (GiftMaster_o *)Master_WarQuestSelectionMaster,
                                                v211->fields.giftId,
                                                0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_264;
    v247 = *(_QWORD *)(Master_WarQuestSelectionMaster + 24);
    v240 = v263;
    v248 = (struct GiftEntity_array *)Master_WarQuestSelectionMaster;
    if ( !v247 )
    {
LABEL_262:
      this->fields.mRewardIconInfs = v248;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.mRewardIconInfs,
        (System_Int32_array **)v248,
        v241,
        v242,
        v243,
        v244,
        v245,
        v246);
      goto LABEL_221;
    }
    v249 = v216->fields.mAlphaAnimCnt % (int)v247;
    if ( v249 >= (unsigned int)v247 )
    {
      v257 = sub_B5D6C8(Master_WarQuestSelectionMaster);
      sub_B5D668(v257, 0LL);
    }
    v250 = *(_DWORD **)(Master_WarQuestSelectionMaster + 8LL * v249 + 32);
    if ( v250 )
    {
      giftIconId = (unsigned int)v250[11];
      Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardIcon;
      v251 = v250[7];
      if ( (int)giftIconId < 1 )
      {
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_264;
        v256 = v251 <= 1 ? -1 : v250[7];
        ItemIconComponent__SetGift(
          (ItemIconComponent_o *)Master_WarQuestSelectionMaster,
          v250[5],
          v250[6],
          v256,
          0,
          0LL);
      }
      else
      {
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_264;
        v252 = v251 <= 1 ? -1 : v250[7];
        ItemIconComponent__SetItemImage_28499576(
          (ItemIconComponent_o *)Master_WarQuestSelectionMaster,
          giftIconId,
          v252,
          0LL);
      }
      Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardIcon;
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = (int64_t)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                    0LL);
        if ( Master_WarQuestSelectionMaster )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
          goto LABEL_262;
        }
      }
    }
LABEL_264:
    sub_B5D69C(Master_WarQuestSelectionMaster, giftIconId);
  }
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardIcon;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  LODWORD(giftIconId) = 99;
LABEL_218:
  ItemIconComponent__SetItemImage((ItemIconComponent_o *)Master_WarQuestSelectionMaster, giftIconId, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardIcon;
  v240 = v263;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  Master_WarQuestSelectionMaster = (int64_t)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
LABEL_221:
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardObj;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  Master_WarQuestSelectionMaster = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v130 + 24), 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardIcon;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  ItemIconComponent__SetColor(
    (ItemIconComponent_o *)Master_WarQuestSelectionMaster,
    *(UnityEngine_Color_o *)(v130 + 24),
    0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardGetSP;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  Master_WarQuestSelectionMaster = (int64_t)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
    v144 & (v240 ^ 1) & 1,
    0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.mRewardGetSP;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_264;
  UIWidget__set_color((UIWidget_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(v130 + 24), 0LL);
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
      sub_B5D69C(0LL, method);
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
  ServantStatusQuestBoardDraw_o *v7; // x20
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x22

  v7 = this;
  if ( (byte_42EBEE0 & 1) == 0 )
  {
    this = (ServantStatusQuestBoardDraw_o *)sub_B5D5C4(
                                              &Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__,
                                              (_DWORD)qinf,
                                              strIndex,
                                              checkTime);
    byte_42EBEE0 = 1;
  }
  mInfoTextList = v7->fields.mInfoTextList;
  if ( !mInfoTextList )
    goto LABEL_8;
  if ( mInfoTextList->fields._size <= (unsigned int)strIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  this = (ServantStatusQuestBoardDraw_o *)mInfoTextList->fields._items->m_Items[strIndex];
  if ( !this )
LABEL_8:
    sub_B5D69C(this, qinf);
  QuestBoardInformaionText__Update(
    (QuestBoardInformaionText_o *)this,
    &v7->fields.mOptionInfoLb,
    &v7->fields.mOptionInfoFrameSp,
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
    sub_B5D69C(this, 0LL);
  ServantStatusQuestBoardDraw__SetInfoTextAlpha(
    this,
    questBoardManager->fields.mAlphaAnimNow,
    (const MethodInfo *)questBoardManager);
  ServantStatusQuestBoardDraw__SetRewardIconAlpha(this, questBoardManager->fields.mAlphaAnimNow, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusQuestBoardDraw___SetAdvanceNoticeText_g__CalculateLabel_61_0(
        UILabel_o *label,
        System_String_o *message,
        int32_t baseHeight,
        int32_t indent,
        const MethodInfo *method)
{
  UILabel_o *v8; // x19
  int mHeight; // w22
  ServantStatusQuestBoardDraw_c *v10; // x0
  float v11; // s8
  UnityEngine_Transform_o *transform; // x20
  float v13; // s0
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  v8 = label;
  if ( (byte_42EBEEB & 1) == 0 )
  {
    label = (UILabel_o *)sub_B5D5C4(
                           &ServantStatusQuestBoardDraw_TypeInfo,
                           (_DWORD)message,
                           baseHeight,
                           *(_QWORD *)&indent);
    byte_42EBEEB = 1;
  }
  if ( !v8 )
    goto LABEL_10;
  UILabel__set_text(v8, message, 0LL);
  UILabel__AssumeNaturalSize(v8, 0LL);
  mHeight = v8->fields.mHeight;
  UIWidget__set_height((UIWidget_o *)v8, baseHeight, 0LL);
  v10 = ServantStatusQuestBoardDraw_TypeInfo;
  if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
    v10 = ServantStatusQuestBoardDraw_TypeInfo;
  }
  UILabel__SetCondensedScale(v8, v10->static_fields->ADVANCE_NOTICE_BASE_WIDTH - indent, 0LL);
  v11 = UnityEngine_Mathf__Clamp(1.0 - (float)((float)baseHeight / (float)mHeight), 0.0, 1.0, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0LL);
  label = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0LL);
  if ( !label
    || (LODWORD(v13) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)label, 0LL),
        !transform) )
  {
LABEL_10:
    sub_B5D69C(label, message);
  }
  v14.fields.y = 1.0;
  v14.fields.x = v11 + v13;
  v14.fields.z = 1.0;
  UnityEngine_Transform__set_localScale(transform, v14, 0LL);
}


BoardMessageEntity_o *__fastcall ServantStatusQuestBoardDraw__findOverrideQuestMessage(
        ServantStatusQuestBoardDraw_o *this,
        BoardMessageEntity_array *boardMessageData,
        int32_t eventId,
        const MethodInfo *method)
{
  signed int max_length; // w8
  unsigned int v5; // w9
  __int64 v6; // x0

  if ( !boardMessageData )
    goto LABEL_12;
  max_length = boardMessageData->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
      {
        v6 = sub_B5D6C8(this);
        sub_B5D668(v6, 0LL);
      }
      this = (ServantStatusQuestBoardDraw_o *)boardMessageData->m_Items[v5];
      if ( !this )
        break;
      if ( HIDWORD(this->fields.mcBaseP) == 4 && LODWORD(this->fields.mClearObj) == eventId )
        return (BoardMessageEntity_o *)this;
      if ( (int)++v5 >= max_length )
        return 0LL;
    }
LABEL_12:
    sub_B5D69C(this, boardMessageData);
  }
  return 0LL;
}


void __fastcall ServantStatusQuestBoardDraw___c__DisplayClass55_0___ctor(
        ServantStatusQuestBoardDraw___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusQuestBoardDraw___c__DisplayClass55_0___SetItem_b__0(
        ServantStatusQuestBoardDraw___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *_4__this; // x20
  UISprite_o *v12; // x0
  __int64 v13; // x1
  struct ServantStatusQuestBoardDraw_o *v14; // x8
  UnityEngine_Object_o *mcBaseP; // x20
  struct ServantStatusQuestBoardDraw_o *v16; // x8
  UISprite_o *v17; // x20
  ServantStatusQuestBoardDraw_c *v18; // x0
  System_String_o *BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME; // x21
  struct ServantStatusQuestBoardDraw_o *v20; // x9
  char v21; // w8
  struct ServantStatusQuestBoardDraw_o *v22; // x8
  UISprite_o *v23; // x20
  struct ServantStatusQuestBoardDraw_o *v24; // x8
  struct ServantStatusQuestBoardDraw_o *v25; // x8

  if ( (byte_42E5DA9 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&ServantStatusQuestBoardDraw_TypeInfo, v8, v9, v10);
    byte_42E5DA9 = 1;
  }
  _4__this = (UnityEngine_Object_o *)this->fields.__4__this;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = (UISprite_o *)UnityEngine_Object__op_Equality(_4__this, 0LL, 0LL);
  if ( ((unsigned __int8)v12 & 1) == 0 )
  {
    v14 = this->fields.__4__this;
    if ( v14 )
    {
      mcBaseP = (UnityEngine_Object_o *)v14->fields.mcBaseP;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v12 = (UISprite_o *)UnityEngine_Object__op_Equality(mcBaseP, 0LL, 0LL);
      if ( ((unsigned __int8)v12 & 1) != 0 )
        return;
      v16 = this->fields.__4__this;
      if ( v16 )
      {
        v17 = v16->fields.mcBaseP;
        v18 = ServantStatusQuestBoardDraw_TypeInfo;
        if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
          v18 = ServantStatusQuestBoardDraw_TypeInfo;
        }
        BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME = v18->static_fields->BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        v12 = (UISprite_o *)AtlasManager__SetEventUI(v17, BASE_BOARD_LIMIT_UNSEAL_SPRITE_NAME, 0LL);
        v20 = this->fields.__4__this;
        if ( v20 )
        {
          v21 = (char)v12;
          v12 = v20->fields.mcBaseP;
          if ( (v21 & 1) != 0 )
          {
            if ( !v12 )
              goto LABEL_35;
          }
          else
          {
            if ( !v12 )
              goto LABEL_35;
            UISprite__set_atlas(v12, v20->fields.basePanelAtlas, 0LL);
            v22 = this->fields.__4__this;
            if ( !v22 )
              goto LABEL_35;
            v12 = (UISprite_o *)ServantStatusQuestBoardDraw_TypeInfo;
            v23 = v22->fields.mcBaseP;
            if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
            }
            if ( !v23 )
              goto LABEL_35;
            UISprite__set_spriteName(
              v23,
              ServantStatusQuestBoardDraw_TypeInfo->static_fields->BASE_BOARD_SPRITE_NAME,
              0LL);
            v24 = this->fields.__4__this;
            if ( !v24 )
              goto LABEL_35;
            v12 = v24->fields.mcBaseP;
            if ( !v12 )
              goto LABEL_35;
          }
          v12 = (UISprite_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v12->klass->vtable._33_MakePixelPerfect.method)(
                                v12,
                                v12->klass->vtable._34_get_minWidth.methodPtr);
          v25 = this->fields.__4__this;
          if ( v25 )
          {
            v12 = v25->fields.mcBaseP;
            if ( v12 )
            {
              UIWidget__set_color((UIWidget_o *)v12, this->fields.baseCol, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_35:
    sub_B5D69C(v12, v13);
  }
}


void __fastcall ServantStatusQuestBoardDraw___c__DisplayClass55_0___SetItem_b__1(
        ServantStatusQuestBoardDraw___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *_4__this; // x20
  UISprite_o *v12; // x0
  __int64 v13; // x1
  struct ServantStatusQuestBoardDraw_o *v14; // x8
  UnityEngine_Object_o *mTitleSp; // x20
  struct ServantStatusQuestBoardDraw_o *v16; // x8
  UISprite_o *v17; // x20
  ServantStatusQuestBoardDraw_c *v18; // x0
  System_String_o *TITLE_SPRITE_NAME_LIMIT_UNSEAL; // x21
  struct ServantStatusQuestBoardDraw_o *v20; // x9
  char v21; // w8
  struct ServantStatusQuestBoardDraw_o *v22; // x8
  UISprite_o *v23; // x20
  System_String_o **p_monitor; // x8
  struct ServantStatusQuestBoardDraw_o *v25; // x8
  struct ServantStatusQuestBoardDraw_o *v26; // x8

  if ( (byte_42E5DAA & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&ServantStatusQuestBoardDraw_TypeInfo, v8, v9, v10);
    byte_42E5DAA = 1;
  }
  _4__this = (UnityEngine_Object_o *)this->fields.__4__this;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = (UISprite_o *)UnityEngine_Object__op_Equality(_4__this, 0LL, 0LL);
  if ( ((unsigned __int8)v12 & 1) == 0 )
  {
    v14 = this->fields.__4__this;
    if ( v14 )
    {
      mTitleSp = (UnityEngine_Object_o *)v14->fields.mTitleSp;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v12 = (UISprite_o *)UnityEngine_Object__op_Equality(mTitleSp, 0LL, 0LL);
      if ( ((unsigned __int8)v12 & 1) != 0 )
        return;
      v16 = this->fields.__4__this;
      if ( v16 )
      {
        v17 = v16->fields.mTitleSp;
        v18 = ServantStatusQuestBoardDraw_TypeInfo;
        if ( (BYTE3(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
          v18 = ServantStatusQuestBoardDraw_TypeInfo;
        }
        TITLE_SPRITE_NAME_LIMIT_UNSEAL = v18->static_fields->TITLE_SPRITE_NAME_LIMIT_UNSEAL;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        v12 = (UISprite_o *)AtlasManager__SetEventUI(v17, TITLE_SPRITE_NAME_LIMIT_UNSEAL, 0LL);
        v20 = this->fields.__4__this;
        if ( v20 )
        {
          v21 = (char)v12;
          v12 = v20->fields.mTitleSp;
          if ( (v21 & 1) != 0 )
          {
            if ( !v12 )
              goto LABEL_41;
          }
          else
          {
            if ( !v12 )
              goto LABEL_41;
            UISprite__set_atlas(v12, v20->fields.basePanelAtlas, 0LL);
            v22 = this->fields.__4__this;
            if ( !v22 )
              goto LABEL_41;
            v12 = (UISprite_o *)ServantStatusQuestBoardDraw_TypeInfo;
            v23 = v22->fields.mTitleSp;
            if ( this->fields.isMap )
            {
              if ( (WORD1(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
                v12 = (UISprite_o *)ServantStatusQuestBoardDraw_TypeInfo;
              }
              p_monitor = (System_String_o **)&v12->fields.onPostFill[1].monitor;
              if ( !v23 )
                goto LABEL_41;
            }
            else
            {
              if ( (WORD1(ServantStatusQuestBoardDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !ServantStatusQuestBoardDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardDraw_TypeInfo);
                v12 = (UISprite_o *)ServantStatusQuestBoardDraw_TypeInfo;
              }
              p_monitor = (System_String_o **)&v12->fields.onPostFill[1];
              if ( !v23 )
                goto LABEL_41;
            }
            UISprite__set_spriteName(v23, *p_monitor, 0LL);
            v25 = this->fields.__4__this;
            if ( !v25 )
              goto LABEL_41;
            v12 = v25->fields.mTitleSp;
            if ( !v12 )
              goto LABEL_41;
          }
          v12 = (UISprite_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v12->klass->vtable._33_MakePixelPerfect.method)(
                                v12,
                                v12->klass->vtable._34_get_minWidth.methodPtr);
          v26 = this->fields.__4__this;
          if ( v26 )
          {
            v12 = v26->fields.mTitleSp;
            if ( v12 )
            {
              UIWidget__set_color((UIWidget_o *)v12, this->fields.baseCol, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_41:
    sub_B5D69C(v12, v13);
  }
}