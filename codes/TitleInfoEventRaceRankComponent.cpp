void TitleInfoEventRaceRankComponent___cctor(const MethodInfo *method)
{
  struct TitleInfoEventRaceRankComponent_StaticFields *static_fields; // x8
  TitleInfoEventRaceRankComponent_c *v2; // x9
  struct TitleInfoEventRaceRankComponent_StaticFields *v3; // x8

  if ( (byte_5936F36 & 1) == 0 )
  {
    sub_21FFC50(&TitleInfoEventRaceRankComponent_TypeInfo);
    byte_5936F36 = 1;
  }
  static_fields = TitleInfoEventRaceRankComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.x = 0x42A0000000000000LL;
  v2 = TitleInfoEventRaceRankComponent_TypeInfo;
  static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.z = 0.0;
  v3 = v2->static_fields;
  v3->ANIM_DURATION_FRAME_IN = 0.3;
  v3->DISP_RACE_SEC_TIME = 600;
}


void TitleInfoEventRaceRankComponent___ctor(TitleInfoEventRaceRankComponent_o *this, const MethodInfo *method)
{
  TitleInfoEventInfoComponent___ctor((TitleInfoEventInfoComponent_o *)this, 0);
}


void TitleInfoEventRaceRankComponent__Destroy(TitleInfoEventRaceRankComponent_o *this, const MethodInfo *method)
{
  ;
}


void TitleInfoEventRaceRankComponent__FrameIn(
        TitleInfoEventRaceRankComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  TitleInfoEventRaceRankComponent_c *v8; // x8
  UnityEngine_GameObject_o *v9; // x21
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  float z; // s2
  Il2CppObject *v13; // x21
  float32x2_t *static_fields; // x8
  float v15; // s3
  float v16; // w9
  UnityEngine_GameObject_o *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7

  if ( (byte_5936F34 & 1) == 0 )
  {
    sub_21FFC50(&TitleInfoEventRaceRankComponent_TypeInfo);
    sub_21FFC50(&Method_UITweener_Begin_TweenPosition___);
    sub_21FFC50(&StringLiteral_7134/*"FrameInFinish"*/);
    byte_5936F34 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v8 = TitleInfoEventRaceRankComponent_TypeInfo;
  v9 = gameObject;
  if ( !*(&TitleInfoEventRaceRankComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaceRankComponent_TypeInfo, v6, v7);
    v8 = TitleInfoEventRaceRankComponent_TypeInfo;
  }
  v10 = UITweener__Begin_object_(
          v9,
          v8->static_fields->ANIM_DURATION_FRAME_IN,
          (const MethodInfo_39D1264 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v10 )
    sub_21FFECC(0, v11);
  z = this->fields.originPos.fields.z;
  v13 = v10;
  static_fields = (float32x2_t *)TitleInfoEventRaceRankComponent_TypeInfo->static_fields;
  v15 = static_fields[1].n64_f32[0];
  v10[8].klass = (Il2CppClass *)vadd_f32(
                                  *(float32x2_t *)&this->fields.originPos.fields.x,
                                  (float32x2_t)static_fields->n64_u64[0]).n64_u64[0];
  *(float *)&v10[8].monitor = z + v15;
  v16 = this->fields.originPos.fields.z;
  *(void **)((char *)&v10[8].monitor + 4) = *(void **)&this->fields.originPos.fields.x;
  *((float *)&v10[9].klass + 1) = v16;
  LODWORD(v10[2].klass) = 2;
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v13[5].klass = (Il2CppClass *)v17;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13[5], (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_7134/*"FrameInFinish"*/;
  v13[5].monitor = (void *)StringLiteral_7134/*"FrameInFinish"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13[5].monitor, v24, v25, v26, v27, v28, v29, v30);
  this->fields.frameInCallBack = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.frameInCallBack,
    (int32_t)callback,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
}


void TitleInfoEventRaceRankComponent__FrameInFinish(TitleInfoEventRaceRankComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_frameInCallBack; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *frameInCallBack; // t1

  frameInCallBack = this->fields.frameInCallBack;
  p_frameInCallBack = (MissionNaviTransitionBoardItem_o *)&this->fields.frameInCallBack;
  v9 = frameInCallBack;
  p_frameInCallBack->klass = 0;
  sub_21FFBF4(p_frameInCallBack, 0, v2, v3, v4, v5, v6, v7);
  if ( frameInCallBack )
    ActionExtensions__Call(v9, 0);
}


void TitleInfoEventRaceRankComponent__FrameOut(TitleInfoEventRaceRankComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  TitleInfoEventRaceRankComponent_c *v6; // x8
  UnityEngine_GameObject_o *v7; // x20
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  Il2CppClass *v10; // x9
  Il2CppObject *v11; // x20
  TitleInfoEventRaceRankComponent_c *v12; // x10
  struct TitleInfoEventRaceRankComponent_StaticFields *static_fields; // x8
  float32x2_t v14; // d0
  float z; // s2
  float32x2_t v16; // d1
  float v17; // s3
  UnityEngine_GameObject_o *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int32_t v25; // w1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_5936F35 & 1) == 0 )
  {
    sub_21FFC50(&TitleInfoEventRaceRankComponent_TypeInfo);
    sub_21FFC50(&Method_UITweener_Begin_TweenPosition___);
    sub_21FFC50(&StringLiteral_7136/*"FrameOutFinish"*/);
    byte_5936F35 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6 = TitleInfoEventRaceRankComponent_TypeInfo;
  v7 = gameObject;
  if ( !*(&TitleInfoEventRaceRankComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaceRankComponent_TypeInfo, v4, v5);
    v6 = TitleInfoEventRaceRankComponent_TypeInfo;
  }
  v8 = UITweener__Begin_object_(
         v7,
         v6->static_fields->ANIM_DURATION_FRAME_IN,
         (const MethodInfo_39D1264 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v8 )
    sub_21FFECC(0, v9);
  v10 = *(Il2CppClass **)&this->fields.originPos.fields.x;
  v11 = v8;
  v12 = TitleInfoEventRaceRankComponent_TypeInfo;
  *(float *)&v8[8].monitor = this->fields.originPos.fields.z;
  v8[8].klass = v10;
  static_fields = v12->static_fields;
  v14.n64_u64[0] = *(unsigned __int64 *)&this->fields.originPos.fields.x;
  z = this->fields.originPos.fields.z;
  v16.n64_u64[0] = *(unsigned __int64 *)&static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.x;
  v17 = static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.z;
  LODWORD(v8[2].klass) = 2;
  *(float32x2_t *)((char *)&v8[8].monitor + 4) = vadd_f32(v14, v16);
  *((float *)&v8[9].klass + 1) = z + v17;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v11[5].klass = (Il2CppClass *)v18;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11[5], (int32_t)v18, v19, v20, v21, v22, v23, v24);
  v25 = StringLiteral_7136/*"FrameOutFinish"*/;
  v11[5].monitor = (void *)StringLiteral_7136/*"FrameOutFinish"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11[5].monitor, v25, v26, v27, v28, v29, v30, v31);
}


void TitleInfoEventRaceRankComponent__FrameOutFinish(TitleInfoEventRaceRankComponent_o *this, const MethodInfo *method)
{
  ;
}


bool TitleInfoEventRaceRankComponent__IsDispPossible(TitleInfoEventRaceRankComponent_o *this, const MethodInfo *method)
{
  return 1;
}


bool TitleInfoEventRaceRankComponent__IsEventRaidBoss(
        TitleInfoEventRaceRankComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


void TitleInfoEventRaceRankComponent__OnDestroy(TitleInfoEventRaceRankComponent_o *this, const MethodInfo *method)
{
  ;
}


void TitleInfoEventRaceRankComponent__Setup(
        TitleInfoEventRaceRankComponent_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 isGoal; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *MasterData_object; // x23
  int64_t v12; // x21
  int64_t RaceStartedAt; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  int64_t v16; // x23
  TitleInfoEventRaceRankComponent_c *v17; // x0
  QuestGroupMaster_o *v18; // x21
  System_Int32_array *QuestIdListByEventId; // x23
  System_Collections_Generic_List_int__o *v20; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v22; // x25
  int32_t *m_Items; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  int v27; // w8
  _BOOL4 v28; // w27
  int32_t i; // w21
  __int64 v30; // x1
  __int64 v31; // x2
  int32_t Item; // w23
  int32_t v33; // w8
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *GroupIdData; // x20
  System_Collections_Generic_List_bool__o *v35; // x21
  int32_t v36; // w23
  int32_t v37; // w24
  __int64 v38; // x1
  __int64 v39; // x2
  int32_t v40; // w25
  struct System_Boolean_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  struct UISprite_array *carIcon; // x8
  int32_t v45; // w22
  int32_t v46; // w9
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_array *v48; // x8
  struct UISprite_array *v49; // x8
  System_String_o *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  System_String_o *v53; // x24
  bool v54; // w24
  struct UISprite_array *v55; // x8
  UnityEngine_GameObject_o *v56; // x0
  UISprite_o *v57; // x23
  System_String_o *v58; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  System_String_o *v61; // x24
  struct UISprite_array *v62; // x8
  struct UISprite_array *carBackSpr; // x8
  __int64 v64; // x24
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v66; // x26
  UISprite_o *v67; // x22
  System_String_o *v68; // x0
  __int64 v69; // x1
  __int64 v70; // x2
  System_String_o *v71; // x23
  struct UISprite_array *v72; // x8
  struct UISprite_array *rankSpr; // x8
  __int64 v74; // x24
  UISprite_o *v75; // x22
  System_String_o *v76; // x23
  System_String_o *v77; // x0
  __int64 v78; // x1
  __int64 v79; // x2
  System_String_o *v80; // x23
  struct UISprite_array *goalIcon; // x8
  int32_t v82; // w22
  int32_t v83; // w9
  UISprite_o *v84; // x23
  System_String_o *v85; // x0
  __int64 v86; // x1
  __int64 v87; // x2
  System_String_o *v88; // x24
  struct UISprite_array *v89; // x8
  UnityEngine_Behaviour_o *v90; // x23
  UnityEngine_GameObject_o *v91; // x0
  UnityEngine_GameObject_o *v92; // x0
  _BOOL4 v93; // [xsp+Ch] [xbp-C4h]
  UISprite_o *sprite; // [xsp+10h] [xbp-C0h]
  EventRaceMaster_GroupRankData_o v95; // [xsp+18h] [xbp-B8h] BYREF
  EventRaceMaster_GroupRankData_o groupId; // [xsp+30h] [xbp-A0h] BYREF
  int v97; // [xsp+4Ch] [xbp-84h] BYREF
  EventRaceMaster_GroupRankData_o v98; // [xsp+50h] [xbp-80h] BYREF
  int32_t eventIda; // [xsp+6Ch] [xbp-64h] BYREF

  eventIda = eventId;
  if ( (byte_5936F33 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_21FFC50(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_bool__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_bool___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_bool__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_bool__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&TitleInfoEventRaceRankComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_24073/*"race_status_goal_"*/);
    sub_21FFC50(&StringLiteral_16714/*"_"*/);
    sub_21FFC50(&StringLiteral_24074/*"race_status_rank_"*/);
    sub_21FFC50(&StringLiteral_24072/*"race_status_"*/);
    sub_21FFC50(&StringLiteral_1206/*"000"*/);
    byte_5936F33 = 1;
  }
  memset(&v98, 0, sizeof(v98));
  v97 = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_121;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_121;
  DataMasterBase_object__object__int___GetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    eventId,
    (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_121;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v10);
  Instance = NetworkManager__getTime(0);
  if ( !MasterData_object )
    goto LABEL_121;
  v12 = Instance;
  RaceStartedAt = EventRaceResultMaster__getRaceStartedAt(
                    (EventRaceResultMaster_o *)MasterData_object,
                    eventId,
                    termId,
                    0);
  if ( RaceStartedAt )
  {
    v16 = RaceStartedAt;
    v17 = TitleInfoEventRaceRankComponent_TypeInfo;
    if ( !*(&TitleInfoEventRaceRankComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaceRankComponent_TypeInfo, v14, v15);
      v17 = TitleInfoEventRaceRankComponent_TypeInfo;
    }
    v93 = v12 - v16 > v17->static_fields->DISP_RACE_SEC_TIME;
  }
  else
  {
    v93 = 0;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_121;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_121;
  v18 = (QuestGroupMaster_o *)Instance;
  QuestIdListByEventId = QuestGroupMaster__GetQuestIdListByEventId((QuestGroupMaster_o *)Instance, eventId, 0);
  v20 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !QuestIdListByEventId )
    goto LABEL_121;
  max_length = QuestIdListByEventId->max_length;
  if ( (int)max_length >= 1 )
  {
    v22 = 0;
    m_Items = QuestIdListByEventId->m_Items;
    do
    {
      if ( v22 >= (unsigned int)max_length )
LABEL_123:
        sub_21FFED4(Instance);
      Instance = QuestGroupMaster__GetGroupId(v18, m_Items[v22], 5, 0);
      if ( (_DWORD)Instance == termId )
      {
        if ( v22 >= LODWORD(QuestIdListByEventId->max_length) )
          goto LABEL_123;
        if ( !v20 )
          goto LABEL_121;
        items = v20->fields._items;
        isGoal = (unsigned int)m_Items[v22];
        v25 = Method_System_Collections_Generic_List_int__Add__;
        ++v20->fields._version;
        if ( !items )
          goto LABEL_121;
        size = v20->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v20,
            isGoal,
            *(const MethodInfo_4433138 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v20->fields._size = size + 1;
          items->m_Items[size] = isGoal;
        }
      }
      LODWORD(max_length) = QuestIdListByEventId->max_length;
    }
    while ( (__int64)++v22 < (int)max_length );
  }
  if ( !v20 )
    goto LABEL_121;
  v27 = v20->fields._size;
  v28 = v27 > 0;
  if ( v27 >= 1 )
  {
    for ( i = 0; i < v33; v28 = i < v33 )
    {
      Item = System_Collections_Generic_List_int___get_Item(
               v20,
               i,
               (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v30, v31);
      if ( CondType__IsOpen(1, Item, 0, 0, 0, 0) )
        break;
      v33 = v20->fields._size;
      ++i;
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0
    || (GroupIdData = EventRaceMaster__getGroupIdData((EventRaceMaster_o *)Instance, eventIda, termId, 0),
        v35 = (System_Collections_Generic_List_bool__o *)sub_21FFEBC(System_Collections_Generic_List_bool__TypeInfo),
        System_Collections_Generic_List_bool____ctor(
          v35,
          (const MethodInfo_43DCDD0 *)Method_System_Collections_Generic_List_bool___ctor__),
        !GroupIdData) )
  {
LABEL_121:
    sub_21FFECC(Instance, isGoal);
  }
  if ( GroupIdData->fields._size >= 1 )
  {
    v36 = 0;
    do
    {
      v37 = eventIda;
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___get_Item(
        &groupId,
        GroupIdData,
        v36,
        (const MethodInfo_44E564C *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__);
      v40 = groupId.fields.groupId;
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v38, v39);
      Instance = CondType__IsEventRaceGoalScriptPlayed(v37, termId, v40, 0);
      if ( !v35 )
        goto LABEL_121;
      v41 = v35->fields._items;
      v42 = Method_System_Collections_Generic_List_bool__Add__;
      ++v35->fields._version;
      if ( !v41 )
        goto LABEL_121;
      v43 = v35->fields._size;
      if ( (unsigned int)v43 >= LODWORD(v41->max_length) )
      {
        System_Collections_Generic_List_bool___AddWithResize(
          v35,
          Instance & 1,
          *(const MethodInfo_43DD66C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v35->fields._size = v43 + 1;
        v41->m_Items[v43] = Instance & 1;
      }
    }
    while ( ++v36 < GroupIdData->fields._size );
  }
  carIcon = this->fields.carIcon;
  if ( !carIcon )
    goto LABEL_121;
  v45 = 0;
  while ( 1 )
  {
    v46 = carIcon->max_length;
    if ( v45 >= v46 )
      break;
    if ( v45 >= (unsigned int)v46 )
      goto LABEL_123;
    Instance = (int64_t)carIcon->m_Items[v45];
    if ( !Instance )
      goto LABEL_121;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    GameObjectExtensions__SetLocalPosition(gameObject, this->fields.startPos, 0);
    v48 = this->fields.carIcon;
    if ( !v93 || !v28 )
    {
      if ( !v48 )
        goto LABEL_121;
      if ( (unsigned int)v45 >= LODWORD(v48->max_length) )
        goto LABEL_123;
      Instance = (int64_t)v48->m_Items[v45];
      if ( !Instance )
        goto LABEL_121;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0);
      goto LABEL_84;
    }
    if ( !v48 )
      goto LABEL_121;
    if ( (unsigned int)v45 >= LODWORD(v48->max_length) )
      goto LABEL_123;
    Instance = (int64_t)v48->m_Items[v45];
    if ( !Instance )
      goto LABEL_121;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0);
    v49 = this->fields.carIcon;
    if ( GroupIdData->fields._size <= v45 )
    {
      if ( !v49 )
        goto LABEL_121;
      if ( (unsigned int)v45 >= LODWORD(v49->max_length) )
        goto LABEL_123;
      v57 = v49->m_Items[v45];
      v58 = System_Int32__ToString((int32_t)&eventIda, 0);
      v61 = System_String__Concat_75481624(
              (System_String_o *)StringLiteral_24072/*"race_status_"*/,
              v58,
              (System_String_o *)StringLiteral_1206/*"000"*/,
              0);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v59, v60);
      Instance = AtlasManager__SetEventUI(v57, v61, 0);
      if ( (Instance & 1) != 0 )
        goto LABEL_84;
    }
    else
    {
      if ( !v49 )
        goto LABEL_121;
      if ( (unsigned int)v45 >= LODWORD(v49->max_length) )
        goto LABEL_123;
      sprite = v49->m_Items[v45];
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___get_Item(
        &groupId,
        GroupIdData,
        v45,
        (const MethodInfo_44E564C *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__);
      v98 = groupId;
      v50 = System_Int32__ToString((int32_t)&v98, 0);
      v53 = System_String__Concat_75438412((System_String_o *)StringLiteral_24072/*"race_status_"*/, v50, 0);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v51, v52);
      v54 = AtlasManager__SetEventUI(sprite, v53, 0);
      Instance = (int64_t)System_Collections_Generic_List_EventRaceMaster_GroupRankData___get_Item(
                            &v95,
                            GroupIdData,
                            v45,
                            (const MethodInfo_44E564C *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__);
      if ( v95.fields.isGoal )
      {
        if ( !v35 )
          goto LABEL_121;
        Instance = System_Collections_Generic_List_bool___get_Item(
                     v35,
                     v45,
                     (const MethodInfo_43DD368 *)Method_System_Collections_Generic_List_bool__get_Item__);
        if ( (Instance & 1) != 0 )
        {
          v55 = this->fields.carIcon;
          if ( !v55 )
            goto LABEL_121;
          if ( (unsigned int)v45 >= LODWORD(v55->max_length) )
            goto LABEL_123;
          Instance = (int64_t)v55->m_Items[v45];
          if ( !Instance )
            goto LABEL_121;
          v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
          GameObjectExtensions__SetLocalPosition(v56, this->fields.goalPos, 0);
        }
      }
      if ( v54 )
        goto LABEL_84;
    }
    v62 = this->fields.carIcon;
    if ( !v62 )
      goto LABEL_121;
    if ( (unsigned int)v45 >= LODWORD(v62->max_length) )
      goto LABEL_123;
    Instance = (int64_t)v62->m_Items[v45];
    if ( !Instance )
      goto LABEL_121;
    UISprite__set_atlas((UISprite_o *)Instance, 0, 0);
LABEL_84:
    carIcon = this->fields.carIcon;
    ++v45;
    if ( !carIcon )
      goto LABEL_121;
  }
  carBackSpr = this->fields.carBackSpr;
  if ( !carBackSpr )
    goto LABEL_121;
  v64 = 4;
  while ( 1 )
  {
    max_length_low = LODWORD(carBackSpr->max_length);
    v66 = v64 - 4;
    if ( v64 - 4 >= (int)max_length_low )
      break;
    if ( v66 >= max_length_low )
      goto LABEL_123;
    v67 = (UISprite_o *)*((_QWORD *)&carBackSpr->obj.klass + v64);
    v68 = System_Int32__ToString((int32_t)&eventIda, 0);
    v71 = System_String__Concat_75481624(
            (System_String_o *)StringLiteral_24072/*"race_status_"*/,
            v68,
            (System_String_o *)StringLiteral_1206/*"000"*/,
            0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v69, v70);
    Instance = AtlasManager__SetEventUI(v67, v71, 0);
    if ( (Instance & 1) == 0 )
    {
      v72 = this->fields.carBackSpr;
      if ( !v72 )
        goto LABEL_121;
      if ( v66 >= LODWORD(v72->max_length) )
        goto LABEL_123;
      Instance = *((_QWORD *)&v72->obj.klass + v64);
      if ( !Instance )
        goto LABEL_121;
      UISprite__set_atlas((UISprite_o *)Instance, 0, 0);
    }
    carBackSpr = this->fields.carBackSpr;
    ++v64;
    if ( !carBackSpr )
      goto LABEL_121;
  }
  rankSpr = this->fields.rankSpr;
  if ( !rankSpr )
    goto LABEL_121;
  v74 = 0;
  while ( v74 < SLODWORD(rankSpr->max_length) )
  {
    v97 = v74 + 1;
    v75 = rankSpr->m_Items[v74];
    v76 = System_Int32__ToString((int32_t)&eventIda, 0);
    v77 = System_Int32__ToString((int32_t)&v97, 0);
    v80 = System_String__Concat_75483552(
            (System_String_o *)StringLiteral_24074/*"race_status_rank_"*/,
            v76,
            (System_String_o *)StringLiteral_16714/*"_"*/,
            v77,
            0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v78, v79);
    Instance = AtlasManager__SetEventUI(v75, v80, 0);
    rankSpr = this->fields.rankSpr;
    ++v74;
    if ( !rankSpr )
      goto LABEL_121;
  }
  goalIcon = this->fields.goalIcon;
  if ( !goalIcon )
    goto LABEL_121;
  v82 = 0;
  while ( 1 )
  {
    v83 = goalIcon->max_length;
    if ( v82 >= v83 )
      break;
    if ( v82 >= (unsigned int)v83 )
      goto LABEL_123;
    v84 = goalIcon->m_Items[v82];
    v85 = System_Int32__ToString((int32_t)&eventIda, 0);
    v88 = System_String__Concat_75438412((System_String_o *)StringLiteral_24073/*"race_status_goal_"*/, v85, 0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v86, v87);
    Instance = AtlasManager__SetEventUI(v84, v88, 0);
    v89 = this->fields.goalIcon;
    if ( v89 )
    {
      if ( (unsigned int)v82 >= LODWORD(v89->max_length) )
        goto LABEL_123;
      v90 = (UnityEngine_Behaviour_o *)v89->m_Items[v82];
      if ( GroupIdData->fields._size <= v82 )
        goto LABEL_118;
      if ( !v35 )
        goto LABEL_121;
      Instance = System_Collections_Generic_List_bool___get_Item(
                   v35,
                   v82,
                   (const MethodInfo_43DD368 *)Method_System_Collections_Generic_List_bool__get_Item__);
      if ( ((v28 && v93) & (unsigned int)Instance) == 1 )
      {
        Instance = (int64_t)System_Collections_Generic_List_EventRaceMaster_GroupRankData___get_Item(
                              &groupId,
                              GroupIdData,
                              v82,
                              (const MethodInfo_44E564C *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__);
        isGoal = groupId.fields.isGoal;
      }
      else
      {
LABEL_118:
        isGoal = 0;
      }
      if ( v90 )
      {
        UnityEngine_Behaviour__set_enabled(v90, isGoal, 0);
        goalIcon = this->fields.goalIcon;
        ++v82;
        if ( goalIcon )
          continue;
      }
    }
    goto LABEL_121;
  }
  v91 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(v91, 0.0, 0);
  v92 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this->fields.originPos = GameObjectExtensions__GetLocalPosition(v92, 0);
}


void TitleInfoEventRaceRankComponent__UpdateDisp(TitleInfoEventRaceRankComponent_o *this, const MethodInfo *method)
{
  ;
}