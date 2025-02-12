void __fastcall TitleInfoEventRaceRankComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct TitleInfoEventRaceRankComponent_StaticFields *static_fields; // x8
  struct TitleInfoEventRaceRankComponent_StaticFields *v3; // x8

  if ( (byte_4BC5D84 & 1) == 0 )
  {
    sub_1C1ABD4(&TitleInfoEventRaceRankComponent_TypeInfo, v1);
    byte_4BC5D84 = 1;
  }
  static_fields = TitleInfoEventRaceRankComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.x = 0x42A0000000000000LL;
  static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.z = 0.0;
  v3 = TitleInfoEventRaceRankComponent_TypeInfo->static_fields;
  v3->ANIM_DURATION_FRAME_IN = 0.3;
  v3->DISP_RACE_SEC_TIME = 600LL;
}


void __fastcall TitleInfoEventRaceRankComponent___ctor(
        TitleInfoEventRaceRankComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventRaceRankComponent__Destroy(
        TitleInfoEventRaceRankComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoEventRaceRankComponent__FrameIn(
        TitleInfoEventRaceRankComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventRaceRankComponent_c *v8; // x8
  UnityEngine_GameObject_o *v9; // x21
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  float32x2_t *static_fields; // x8
  Il2CppObject *v13; // x21
  float v14; // s0
  void *v15; // x9
  UnityEngine_GameObject_o *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  if ( (byte_4BC5D82 & 1) == 0 )
  {
    sub_1C1ABD4(&TitleInfoEventRaceRankComponent_TypeInfo, callback);
    sub_1C1ABD4(&Method_UITweener_Begin_TweenPosition___, v5);
    sub_1C1ABD4(&StringLiteral_6991/*"FrameInFinish"*/, v6);
    byte_4BC5D82 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8 = TitleInfoEventRaceRankComponent_TypeInfo;
  v9 = gameObject;
  if ( !TitleInfoEventRaceRankComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaceRankComponent_TypeInfo);
    v8 = TitleInfoEventRaceRankComponent_TypeInfo;
  }
  v10 = UITweener__Begin_object_(
          v9,
          v8->static_fields->ANIM_DURATION_FRAME_IN,
          (const MethodInfo_3053E84 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v10 )
    sub_1C1AE30(0LL, v11);
  static_fields = (float32x2_t *)TitleInfoEventRaceRankComponent_TypeInfo->static_fields;
  v13 = v10;
  v14 = this->fields.originPos.fields.z + static_fields[1].n64_f32[0];
  v10[8].klass = (Il2CppClass *)vadd_f32(
                                  *(float32x2_t *)&this->fields.originPos.fields.x,
                                  (float32x2_t)static_fields->n64_u64[0]).n64_u64[0];
  *(float *)&v10[8].monitor = v14;
  v15 = *(void **)&this->fields.originPos.fields.x;
  HIDWORD(v10[9].klass) = LODWORD(this->fields.originPos.fields.z);
  *(void **)((char *)&v10[8].monitor + 4) = v15;
  LODWORD(v10[2].klass) = 2;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v13[5].klass = (Il2CppClass *)v16;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v13[5], (int64_t)v16, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_6991/*"FrameInFinish"*/;
  v13[5].monitor = (void *)StringLiteral_6991/*"FrameInFinish"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v13[5].monitor, v23, v24, v25, v26, v27, v28, v29);
  this->fields.frameInCallBack = callback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.frameInCallBack,
    (int64_t)callback,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
}


void __fastcall TitleInfoEventRaceRankComponent__FrameInFinish(
        TitleInfoEventRaceRankComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_frameInCallBack; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *frameInCallBack; // t1

  frameInCallBack = this->fields.frameInCallBack;
  p_frameInCallBack = (PartyOrganizationUtility_o *)&this->fields.frameInCallBack;
  v9 = frameInCallBack;
  p_frameInCallBack->klass = 0LL;
  sub_1C1AB78(p_frameInCallBack, 0LL, v2, v3, v4, v5, v6, v7);
  if ( frameInCallBack )
    ActionExtensions__Call(v9, 0LL);
}


void __fastcall TitleInfoEventRaceRankComponent__FrameOut(
        TitleInfoEventRaceRankComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventRaceRankComponent_c *v6; // x8
  UnityEngine_GameObject_o *v7; // x20
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x20
  float32x2_t *static_fields; // x8
  float v12; // s1
  UnityEngine_GameObject_o *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  Il2CppClass *v27; // [xsp+0h] [xbp-40h]

  if ( (byte_4BC5D83 & 1) == 0 )
  {
    sub_1C1ABD4(&TitleInfoEventRaceRankComponent_TypeInfo, method);
    sub_1C1ABD4(&Method_UITweener_Begin_TweenPosition___, v3);
    sub_1C1ABD4(&StringLiteral_6993/*"FrameOutFinish"*/, v4);
    byte_4BC5D83 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v6 = TitleInfoEventRaceRankComponent_TypeInfo;
  v7 = gameObject;
  if ( !TitleInfoEventRaceRankComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaceRankComponent_TypeInfo);
    v6 = TitleInfoEventRaceRankComponent_TypeInfo;
  }
  v8 = UITweener__Begin_object_(
         v7,
         v6->static_fields->ANIM_DURATION_FRAME_IN,
         (const MethodInfo_3053E84 *)Method_UITweener_Begin_TweenPosition___);
  v27 = *(Il2CppClass **)&this->fields.originPos.fields.x;
  if ( !v8 )
    sub_1C1AE30(0LL, v9);
  v10 = v8;
  *(float *)&v8[8].monitor = this->fields.originPos.fields.z;
  v8[8].klass = v27;
  static_fields = (float32x2_t *)TitleInfoEventRaceRankComponent_TypeInfo->static_fields;
  v12 = this->fields.originPos.fields.z + static_fields[1].n64_f32[0];
  *(float32x2_t *)((char *)&v8[8].monitor + 4) = vadd_f32(
                                                   *(float32x2_t *)&this->fields.originPos.fields.x,
                                                   (float32x2_t)static_fields->n64_u64[0]);
  *((float *)&v8[9].klass + 1) = v12;
  LODWORD(v8[2].klass) = 2;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v10[5].klass = (Il2CppClass *)v13;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v10[5], (int64_t)v13, v14, v15, v16, v17, v18, v19);
  v20 = StringLiteral_6993/*"FrameOutFinish"*/;
  v10[5].monitor = (void *)StringLiteral_6993/*"FrameOutFinish"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v10[5].monitor, v20, v21, v22, v23, v24, v25, v26);
}


void __fastcall TitleInfoEventRaceRankComponent__FrameOutFinish(
        TitleInfoEventRaceRankComponent_o *this,
        const MethodInfo *method)
{
  ;
}


bool __fastcall TitleInfoEventRaceRankComponent__IsDispPossible(
        TitleInfoEventRaceRankComponent_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool __fastcall TitleInfoEventRaceRankComponent__IsEventRaidBoss(
        TitleInfoEventRaceRankComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall TitleInfoEventRaceRankComponent__OnDestroy(
        TitleInfoEventRaceRankComponent_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaceRankComponent__Setup(
        TitleInfoEventRaceRankComponent_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
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
  int64_t Instance; // x0
  __int64 isGoal; // x1
  Il2CppObject *MasterData_object; // x23
  int64_t v35; // x21
  int64_t RaceStartedAt; // x0
  int64_t v37; // x23
  TitleInfoEventRaceRankComponent_c *v38; // x0
  _BOOL4 v39; // w29
  QuestGroupMaster_o *v40; // x21
  System_Int32_array *QuestIdListByEventId; // x23
  System_Collections_Generic_List_int__o *v42; // x20
  __int64 v43; // x8
  unsigned __int64 v44; // x25
  int32_t *v45; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  int v49; // w8
  _BOOL4 v50; // w26
  int32_t i; // w21
  int32_t Item; // w23
  int32_t v53; // w8
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *GroupIdData; // x20
  System_Collections_Generic_List_bool__o *v55; // x21
  int32_t v56; // w23
  int32_t v57; // w24
  int32_t v58; // w25
  struct System_Boolean_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  struct UISprite_array *carIcon; // x8
  int v63; // w28
  __int64 v64; // x26
  int max_length; // w9
  unsigned int v66; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_array *v68; // x8
  struct UISprite_array *v69; // x8
  UISprite_o *v70; // x23
  System_String_o *v71; // x0
  System_String_o *v72; // x24
  bool v73; // w23
  struct UISprite_array *v74; // x8
  UnityEngine_GameObject_o *v75; // x0
  System_String_o *v76; // x0
  System_String_o *v77; // x24
  struct UISprite_array *v78; // x8
  struct UISprite_array *carBackSpr; // x8
  __int64 v80; // x24
  unsigned __int64 v81; // x9
  unsigned __int64 v82; // x26
  UISprite_o *v83; // x22
  System_String_o *v84; // x0
  System_String_o *v85; // x23
  struct UISprite_array *v86; // x8
  struct UISprite_array *rankSpr; // x8
  unsigned __int64 v88; // x24
  unsigned __int64 v89; // x9
  UISprite_o *v90; // x22
  System_String_o *v91; // x23
  System_String_o *v92; // x0
  System_String_o *v93; // x23
  struct UISprite_array *goalIcon; // x8
  int32_t v95; // w22
  il2cpp_array_size_t v96; // w9
  UISprite_o *v97; // x23
  System_String_o *v98; // x0
  System_String_o *v99; // x24
  struct UISprite_array *v100; // x8
  UnityEngine_Behaviour_o *v101; // x23
  int v102; // w8
  UnityEngine_GameObject_o *v103; // x0
  UnityEngine_GameObject_o *v104; // x0
  int v105; // [xsp+Ch] [xbp-A4h]
  EventRaceMaster_GroupRankData_o groupId; // [xsp+10h] [xbp-A0h] BYREF
  int v107; // [xsp+2Ch] [xbp-84h] BYREF
  EventRaceMaster_GroupRankData_o v108; // [xsp+30h] [xbp-80h] BYREF
  int32_t eventIda; // [xsp+4Ch] [xbp-64h] BYREF

  eventIda = eventId;
  if ( (byte_4BC5D81 & 1) == 0 )
  {
    sub_1C1ABD4(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1C1ABD4(&CondType_TypeInfo, v7);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventDetailMaster___, v8);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventRaceMaster___, v9);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventRaceResultMaster___, v10);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v11);
    sub_1C1ABD4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_bool__Add__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_bool___ctor__, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Count__, v17);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__get_Count__, v18);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__, v19);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_bool__get_Item__, v20);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__get_Item__, v21);
    sub_1C1ABD4(&System_Collections_Generic_List_bool__TypeInfo, v22);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v23);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v24);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1C1ABD4(&TitleInfoEventRaceRankComponent_TypeInfo, v26);
    sub_1C1ABD4(&StringLiteral_23145/*"race_status_goal_"*/, v27);
    sub_1C1ABD4(&StringLiteral_16388/*"_"*/, v28);
    sub_1C1ABD4(&StringLiteral_23146/*"race_status_rank_"*/, v29);
    sub_1C1ABD4(&StringLiteral_23144/*"race_status_"*/, v30);
    sub_1C1ABD4(&StringLiteral_1221/*"000"*/, v31);
    byte_4BC5D81 = 1;
  }
  memset(&v108, 0, sizeof(v108));
  v107 = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_120;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_120;
  DataMasterBase_object__object__int___GetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    eventId,
    (const MethodInfo_3248678 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_120;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !MasterData_object )
    goto LABEL_120;
  v35 = Instance;
  RaceStartedAt = EventRaceResultMaster__getRaceStartedAt(
                    (EventRaceResultMaster_o *)MasterData_object,
                    eventId,
                    termId,
                    0LL);
  if ( RaceStartedAt )
  {
    v37 = RaceStartedAt;
    v38 = TitleInfoEventRaceRankComponent_TypeInfo;
    if ( !TitleInfoEventRaceRankComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaceRankComponent_TypeInfo);
      v38 = TitleInfoEventRaceRankComponent_TypeInfo;
    }
    v39 = v35 - v37 > v38->static_fields->DISP_RACE_SEC_TIME;
  }
  else
  {
    v39 = 0;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_120;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_120;
  v40 = (QuestGroupMaster_o *)Instance;
  QuestIdListByEventId = QuestGroupMaster__GetQuestIdListByEventId((QuestGroupMaster_o *)Instance, eventId, 0LL);
  v42 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !QuestIdListByEventId )
    goto LABEL_120;
  v43 = *(_QWORD *)&QuestIdListByEventId->max_length;
  if ( (int)v43 >= 1 )
  {
    v44 = 0LL;
    v45 = &QuestIdListByEventId->m_Items[1];
    do
    {
      if ( v44 >= (unsigned int)v43 )
LABEL_122:
        sub_1C1AE38(Instance, isGoal);
      Instance = QuestGroupMaster__GetGroupId(v40, v45[v44], 5, 0LL);
      if ( (_DWORD)Instance == termId )
      {
        if ( v44 >= QuestIdListByEventId->max_length )
          goto LABEL_122;
        if ( !v42 )
          goto LABEL_120;
        isGoal = (unsigned int)v45[v44];
        items = v42->fields._items;
        v47 = Method_System_Collections_Generic_List_int__Add__;
        ++v42->fields._version;
        if ( !items )
          goto LABEL_120;
        size = v42->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v42,
            isGoal,
            *(const MethodInfo_361F86C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
        }
        else
        {
          v42->fields._size = size + 1;
          items->m_Items[size + 1] = isGoal;
        }
      }
      LODWORD(v43) = QuestIdListByEventId->max_length;
    }
    while ( (__int64)++v44 < (int)v43 );
  }
  if ( !v42 )
    goto LABEL_120;
  v49 = v42->fields._size;
  v50 = v49 > 0;
  if ( v49 >= 1 )
  {
    for ( i = 0; i < v53; v50 = i < v53 )
    {
      Item = System_Collections_Generic_List_int___get_Item(
               v42,
               i,
               (const MethodInfo_361F57C *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(1, Item, 0LL, 0, 0LL, 0LL) )
        break;
      v53 = v42->fields._size;
      ++i;
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0
    || (GroupIdData = EventRaceMaster__getGroupIdData((EventRaceMaster_o *)Instance, eventIda, termId, 0LL),
        v55 = (System_Collections_Generic_List_bool__o *)sub_1C1AE20(System_Collections_Generic_List_bool__TypeInfo),
        System_Collections_Generic_List_bool____ctor(
          v55,
          (const MethodInfo_35F2FF8 *)Method_System_Collections_Generic_List_bool___ctor__),
        !GroupIdData) )
  {
LABEL_120:
    sub_1C1AE30(Instance, isGoal);
  }
  if ( GroupIdData->fields._size >= 1 )
  {
    v56 = 0;
    do
    {
      v57 = eventIda;
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___get_Item(
        &groupId,
        GroupIdData,
        v56,
        (const MethodInfo_36DC0AC *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__);
      v58 = groupId.fields.groupId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = CondType__IsEventRaceGoalScriptPlayed(v57, termId, v58, 0LL);
      if ( !v55 )
        goto LABEL_120;
      v59 = v55->fields._items;
      v60 = Method_System_Collections_Generic_List_bool__Add__;
      ++v55->fields._version;
      if ( !v59 )
        goto LABEL_120;
      v61 = v55->fields._size;
      if ( (unsigned int)v61 >= v59->max_length )
      {
        System_Collections_Generic_List_bool___AddWithResize(
          v55,
          Instance & 1,
          *(const MethodInfo_35F385C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
      }
      else
      {
        v55->fields._size = v61 + 1;
        v59->m_Items[v61 + 4] = Instance & 1;
      }
    }
    while ( ++v56 < GroupIdData->fields._size );
  }
  carIcon = this->fields.carIcon;
  if ( !carIcon )
    goto LABEL_120;
  v63 = v39 && v50;
  v64 = 4LL;
  v105 = v63;
  while ( 1 )
  {
    max_length = carIcon->max_length;
    v66 = v64 - 4;
    if ( (int)v64 - 4 >= max_length )
      break;
    if ( v66 >= max_length )
      goto LABEL_122;
    Instance = *((_QWORD *)&carIcon->obj.klass + v64);
    if ( !Instance )
      goto LABEL_120;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    GameObjectExtensions__SetLocalPosition(gameObject, this->fields.startPos, 0LL);
    v68 = this->fields.carIcon;
    if ( !v68 )
      goto LABEL_120;
    if ( v66 >= v68->max_length )
      goto LABEL_122;
    Instance = *((_QWORD *)&v68->obj.klass + v64);
    if ( !Instance )
      goto LABEL_120;
    if ( (v63 & 1) == 0 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
      goto LABEL_80;
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
    v69 = this->fields.carIcon;
    if ( !v69 )
      goto LABEL_120;
    if ( v66 >= v69->max_length )
      goto LABEL_122;
    v70 = (UISprite_o *)*((_QWORD *)&v69->obj.klass + v64);
    if ( GroupIdData->fields._size <= (signed int)v66 )
    {
      v76 = System_Int32__ToString((int32_t)&eventIda, 0LL);
      v77 = System_String__Concat_63051628(
              (System_String_o *)StringLiteral_23144/*"race_status_"*/,
              v76,
              (System_String_o *)StringLiteral_1221/*"000"*/,
              0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      Instance = AtlasManager__SetEventUI(v70, v77, 0LL);
      if ( (Instance & 1) != 0 )
        goto LABEL_80;
    }
    else
    {
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___get_Item(
        &groupId,
        GroupIdData,
        v66,
        (const MethodInfo_36DC0AC *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__);
      v108 = groupId;
      v71 = System_Int32__ToString((int32_t)&v108, 0LL);
      v72 = System_String__Concat_63040368((System_String_o *)StringLiteral_23144/*"race_status_"*/, v71, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v73 = AtlasManager__SetEventUI(v70, v72, 0LL);
      Instance = (int64_t)System_Collections_Generic_List_EventRaceMaster_GroupRankData___get_Item(
                            &groupId,
                            GroupIdData,
                            v66,
                            (const MethodInfo_36DC0AC *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__);
      v63 = v105;
      if ( !groupId.fields.isGoal )
        goto LABEL_75;
      if ( !v55 )
        goto LABEL_120;
      Instance = System_Collections_Generic_List_bool___get_Item(
                   v55,
                   v66,
                   (const MethodInfo_35F355C *)Method_System_Collections_Generic_List_bool__get_Item__);
      if ( (Instance & 1) != 0 )
      {
        v74 = this->fields.carIcon;
        if ( !v74 )
          goto LABEL_120;
        if ( v66 >= v74->max_length )
          goto LABEL_122;
        Instance = *((_QWORD *)&v74->obj.klass + v64);
        if ( !Instance )
          goto LABEL_120;
        v75 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        GameObjectExtensions__SetLocalPosition(v75, this->fields.goalPos, 0LL);
        if ( v73 )
          goto LABEL_80;
      }
      else
      {
LABEL_75:
        if ( v73 )
          goto LABEL_80;
      }
    }
    v78 = this->fields.carIcon;
    if ( !v78 )
      goto LABEL_120;
    if ( v66 >= v78->max_length )
      goto LABEL_122;
    Instance = *((_QWORD *)&v78->obj.klass + v64);
    if ( !Instance )
      goto LABEL_120;
    UISprite__set_atlas((UISprite_o *)Instance, 0LL, 0LL);
LABEL_80:
    carIcon = this->fields.carIcon;
    ++v64;
    if ( !carIcon )
      goto LABEL_120;
  }
  carBackSpr = this->fields.carBackSpr;
  if ( !carBackSpr )
    goto LABEL_120;
  v80 = 4LL;
  while ( 1 )
  {
    v81 = carBackSpr->max_length;
    v82 = v80 - 4;
    if ( v80 - 4 >= (int)v81 )
      break;
    if ( v82 >= v81 )
      goto LABEL_122;
    v83 = (UISprite_o *)*((_QWORD *)&carBackSpr->obj.klass + v80);
    v84 = System_Int32__ToString((int32_t)&eventIda, 0LL);
    v85 = System_String__Concat_63051628(
            (System_String_o *)StringLiteral_23144/*"race_status_"*/,
            v84,
            (System_String_o *)StringLiteral_1221/*"000"*/,
            0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(v83, v85, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v86 = this->fields.carBackSpr;
      if ( !v86 )
        goto LABEL_120;
      if ( v82 >= v86->max_length )
        goto LABEL_122;
      Instance = *((_QWORD *)&v86->obj.klass + v80);
      if ( !Instance )
        goto LABEL_120;
      UISprite__set_atlas((UISprite_o *)Instance, 0LL, 0LL);
    }
    carBackSpr = this->fields.carBackSpr;
    ++v80;
    if ( !carBackSpr )
      goto LABEL_120;
  }
  rankSpr = this->fields.rankSpr;
  if ( !rankSpr )
    goto LABEL_120;
  v88 = 0LL;
  while ( 1 )
  {
    v89 = rankSpr->max_length;
    if ( (__int64)v88 >= (int)v89 )
      break;
    v107 = v88 + 1;
    if ( v88 >= v89 )
      goto LABEL_122;
    v90 = rankSpr->m_Items[v88];
    v91 = System_Int32__ToString((int32_t)&eventIda, 0LL);
    v92 = System_Int32__ToString((int32_t)&v107, 0LL);
    v93 = System_String__Concat_63053632(
            (System_String_o *)StringLiteral_23146/*"race_status_rank_"*/,
            v91,
            (System_String_o *)StringLiteral_16388/*"_"*/,
            v92,
            0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(v90, v93, 0LL);
    rankSpr = this->fields.rankSpr;
    ++v88;
    if ( !rankSpr )
      goto LABEL_120;
  }
  goalIcon = this->fields.goalIcon;
  if ( !goalIcon )
    goto LABEL_120;
  v95 = 0;
  while ( 1 )
  {
    v96 = goalIcon->max_length;
    if ( v95 >= (int)v96 )
      break;
    if ( v95 >= v96 )
      goto LABEL_122;
    v97 = goalIcon->m_Items[v95];
    v98 = System_Int32__ToString((int32_t)&eventIda, 0LL);
    v99 = System_String__Concat_63040368((System_String_o *)StringLiteral_23145/*"race_status_goal_"*/, v98, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(v97, v99, 0LL);
    v100 = this->fields.goalIcon;
    if ( v100 )
    {
      if ( v95 >= v100->max_length )
        goto LABEL_122;
      v101 = (UnityEngine_Behaviour_o *)v100->m_Items[v95];
      if ( GroupIdData->fields._size <= v95 )
      {
        v102 = 0;
      }
      else
      {
        if ( !v55 )
          goto LABEL_120;
        Instance = System_Collections_Generic_List_bool___get_Item(
                     v55,
                     v95,
                     (const MethodInfo_35F355C *)Method_System_Collections_Generic_List_bool__get_Item__);
        v102 = Instance & 1;
      }
      if ( (v102 & v63) != 0 )
      {
        Instance = (int64_t)System_Collections_Generic_List_EventRaceMaster_GroupRankData___get_Item(
                              &groupId,
                              GroupIdData,
                              v95,
                              (const MethodInfo_36DC0AC *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__);
        isGoal = groupId.fields.isGoal;
        if ( !v101 )
          goto LABEL_120;
      }
      else
      {
        isGoal = 0LL;
        if ( !v101 )
          goto LABEL_120;
      }
      UnityEngine_Behaviour__set_enabled(v101, isGoal, 0LL);
      goalIcon = this->fields.goalIcon;
      ++v95;
      if ( goalIcon )
        continue;
    }
    goto LABEL_120;
  }
  v103 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v103, 0.0, 0LL);
  v104 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this->fields.originPos = GameObjectExtensions__GetLocalPosition(v104, 0LL);
}


void __fastcall TitleInfoEventRaceRankComponent__UpdateDisp(
        TitleInfoEventRaceRankComponent_o *this,
        const MethodInfo *method)
{
  ;
}