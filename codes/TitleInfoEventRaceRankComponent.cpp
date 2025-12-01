void TitleInfoEventRaceRankComponent___cctor(const MethodInfo *method)
{
  struct TitleInfoEventRaceRankComponent_StaticFields *static_fields; // x8
  struct TitleInfoEventRaceRankComponent_StaticFields *v2; // x8

  if ( (byte_4CC5344 & 1) == 0 )
  {
    sub_1C713B0(&TitleInfoEventRaceRankComponent_TypeInfo);
    byte_4CC5344 = 1;
  }
  static_fields = TitleInfoEventRaceRankComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.x = 0x42A0000000000000LL;
  static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.z = 0.0;
  v2 = TitleInfoEventRaceRankComponent_TypeInfo->static_fields;
  v2->ANIM_DURATION_FRAME_IN = 0.3;
  v2->DISP_RACE_SEC_TIME = 600;
}


void TitleInfoEventRaceRankComponent___ctor(TitleInfoEventRaceRankComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
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
  TitleInfoEventRaceRankComponent_c *v6; // x8
  UnityEngine_GameObject_o *v7; // x21
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  float32x2_t *static_fields; // x8
  Il2CppObject *v11; // x21
  float v12; // s0
  void *v13; // x9
  UnityEngine_GameObject_o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7

  if ( (byte_4CC5342 & 1) == 0 )
  {
    sub_1C713B0(&TitleInfoEventRaceRankComponent_TypeInfo);
    sub_1C713B0(&Method_UITweener_Begin_TweenPosition___);
    sub_1C713B0(&StringLiteral_6853/*"FrameInFinish"*/);
    byte_4CC5342 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
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
         (const MethodInfo_32209B8 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v8 )
    sub_1C71608(0, v9);
  static_fields = (float32x2_t *)TitleInfoEventRaceRankComponent_TypeInfo->static_fields;
  v11 = v8;
  v12 = this->fields.originPos.fields.z + static_fields[1].n64_f32[0];
  v8[8].klass = (Il2CppClass *)vadd_f32(
                                 *(float32x2_t *)&this->fields.originPos.fields.x,
                                 (float32x2_t)static_fields->n64_u64[0]).n64_u64[0];
  *(float *)&v8[8].monitor = v12;
  v13 = *(void **)&this->fields.originPos.fields.x;
  HIDWORD(v8[9].klass) = LODWORD(this->fields.originPos.fields.z);
  *(void **)((char *)&v8[8].monitor + 4) = v13;
  LODWORD(v8[2].klass) = 2;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v11[5].klass = (Il2CppClass *)v14;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v11[5], (int32_t)v14, v15, v16, v17, v18, v19, v20);
  v21 = StringLiteral_6853/*"FrameInFinish"*/;
  v11[5].monitor = (void *)StringLiteral_6853/*"FrameInFinish"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v11[5].monitor, v21, v22, v23, v24, v25, v26, v27);
  this->fields.frameInCallBack = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.frameInCallBack,
    (int32_t)callback,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
}


void TitleInfoEventRaceRankComponent__FrameInFinish(TitleInfoEventRaceRankComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_frameInCallBack; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *frameInCallBack; // t1

  frameInCallBack = this->fields.frameInCallBack;
  p_frameInCallBack = (GrandQuestFolderBoardItem_o *)&this->fields.frameInCallBack;
  v9 = frameInCallBack;
  p_frameInCallBack->klass = 0;
  sub_1C71354(p_frameInCallBack, 0, v2, v3, v4, v5, v6, v7);
  if ( frameInCallBack )
    ActionExtensions__Call(v9, 0);
}


void TitleInfoEventRaceRankComponent__FrameOut(TitleInfoEventRaceRankComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventRaceRankComponent_c *v4; // x8
  UnityEngine_GameObject_o *v5; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  Il2CppObject *v8; // x20
  float32x2_t *static_fields; // x8
  float v10; // s1
  UnityEngine_GameObject_o *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  Il2CppClass *v25; // [xsp+0h] [xbp-40h]

  if ( (byte_4CC5343 & 1) == 0 )
  {
    sub_1C713B0(&TitleInfoEventRaceRankComponent_TypeInfo);
    sub_1C713B0(&Method_UITweener_Begin_TweenPosition___);
    sub_1C713B0(&StringLiteral_6855/*"FrameOutFinish"*/);
    byte_4CC5343 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v4 = TitleInfoEventRaceRankComponent_TypeInfo;
  v5 = gameObject;
  if ( !TitleInfoEventRaceRankComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaceRankComponent_TypeInfo);
    v4 = TitleInfoEventRaceRankComponent_TypeInfo;
  }
  v6 = UITweener__Begin_object_(
         v5,
         v4->static_fields->ANIM_DURATION_FRAME_IN,
         (const MethodInfo_32209B8 *)Method_UITweener_Begin_TweenPosition___);
  v25 = *(Il2CppClass **)&this->fields.originPos.fields.x;
  if ( !v6 )
    sub_1C71608(0, v7);
  v8 = v6;
  *(float *)&v6[8].monitor = this->fields.originPos.fields.z;
  v6[8].klass = v25;
  static_fields = (float32x2_t *)TitleInfoEventRaceRankComponent_TypeInfo->static_fields;
  v10 = this->fields.originPos.fields.z + static_fields[1].n64_f32[0];
  *(float32x2_t *)((char *)&v6[8].monitor + 4) = vadd_f32(
                                                   *(float32x2_t *)&this->fields.originPos.fields.x,
                                                   (float32x2_t)static_fields->n64_u64[0]);
  *((float *)&v6[9].klass + 1) = v10;
  LODWORD(v6[2].klass) = 2;
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v8[5].klass = (Il2CppClass *)v11;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v8[5], (int32_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = StringLiteral_6855/*"FrameOutFinish"*/;
  v8[5].monitor = (void *)StringLiteral_6855/*"FrameOutFinish"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v8[5].monitor, v18, v19, v20, v21, v22, v23, v24);
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
  Il2CppObject *MasterData_object; // x23
  int64_t v10; // x21
  int64_t RaceStartedAt; // x0
  int64_t v12; // x23
  TitleInfoEventRaceRankComponent_c *v13; // x0
  _BOOL4 v14; // w29
  QuestGroupMaster_o *v15; // x21
  System_Int32_array *QuestIdListByEventId; // x23
  System_Collections_Generic_List_int__o *v17; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v19; // x25
  int32_t *m_Items; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  int v24; // w8
  _BOOL4 v25; // w26
  int32_t i; // w21
  int32_t Item; // w23
  int32_t v28; // w8
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *GroupIdData; // x20
  System_Collections_Generic_List_bool__o *v30; // x21
  int32_t v31; // w23
  int32_t v32; // w24
  int32_t v33; // w25
  struct System_Boolean_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  struct UISprite_array *carIcon; // x8
  int v38; // w28
  __int64 v39; // x26
  int v40; // w9
  unsigned int v41; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_array *v43; // x8
  struct UISprite_array *v44; // x8
  UISprite_o *v45; // x23
  System_String_o *v46; // x0
  System_String_o *v47; // x24
  bool v48; // w23
  struct UISprite_array *v49; // x8
  UnityEngine_GameObject_o *v50; // x0
  System_String_o *v51; // x0
  System_String_o *v52; // x24
  struct UISprite_array *v53; // x8
  struct UISprite_array *carBackSpr; // x8
  __int64 v55; // x24
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v57; // x26
  UISprite_o *v58; // x22
  System_String_o *v59; // x0
  System_String_o *v60; // x23
  struct UISprite_array *v61; // x8
  struct UISprite_array *rankSpr; // x8
  unsigned __int64 v63; // x24
  unsigned __int64 v64; // x9
  UISprite_o *v65; // x22
  System_String_o *v66; // x23
  System_String_o *v67; // x0
  System_String_o *v68; // x23
  struct UISprite_array *goalIcon; // x8
  int32_t v70; // w22
  int32_t v71; // w9
  UISprite_o *v72; // x23
  System_String_o *v73; // x0
  System_String_o *v74; // x24
  struct UISprite_array *v75; // x8
  UnityEngine_Behaviour_o *v76; // x23
  int v77; // w8
  UnityEngine_GameObject_o *v78; // x0
  UnityEngine_GameObject_o *v79; // x0
  int v80; // [xsp+Ch] [xbp-A4h]
  EventRaceMaster_GroupRankData_o groupId; // [xsp+10h] [xbp-A0h] BYREF
  int v82; // [xsp+2Ch] [xbp-84h] BYREF
  EventRaceMaster_GroupRankData_o v83; // [xsp+30h] [xbp-80h] BYREF
  int32_t eventIda; // [xsp+4Ch] [xbp-64h] BYREF

  eventIda = eventId;
  if ( (byte_4CC5341 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&CondType_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C713B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_bool__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_bool___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_bool__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_bool__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&TitleInfoEventRaceRankComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_23039/*"race_status_goal_"*/);
    sub_1C713B0(&StringLiteral_16109/*"_"*/);
    sub_1C713B0(&StringLiteral_23040/*"race_status_rank_"*/);
    sub_1C713B0(&StringLiteral_23038/*"race_status_"*/);
    sub_1C713B0(&StringLiteral_1123/*"000"*/);
    byte_4CC5341 = 1;
  }
  memset(&v83, 0, sizeof(v83));
  v82 = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_120;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_120;
  DataMasterBase_object__object__int___GetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    eventId,
    (const MethodInfo_3408E80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_120;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0);
  if ( !MasterData_object )
    goto LABEL_120;
  v10 = Instance;
  RaceStartedAt = EventRaceResultMaster__getRaceStartedAt(
                    (EventRaceResultMaster_o *)MasterData_object,
                    eventId,
                    termId,
                    0);
  if ( RaceStartedAt )
  {
    v12 = RaceStartedAt;
    v13 = TitleInfoEventRaceRankComponent_TypeInfo;
    if ( !TitleInfoEventRaceRankComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaceRankComponent_TypeInfo);
      v13 = TitleInfoEventRaceRankComponent_TypeInfo;
    }
    v14 = v10 - v12 > v13->static_fields->DISP_RACE_SEC_TIME;
  }
  else
  {
    v14 = 0;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_120;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_120;
  v15 = (QuestGroupMaster_o *)Instance;
  QuestIdListByEventId = QuestGroupMaster__GetQuestIdListByEventId((QuestGroupMaster_o *)Instance, eventId, 0);
  v17 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !QuestIdListByEventId )
    goto LABEL_120;
  max_length = QuestIdListByEventId->max_length;
  if ( (int)max_length >= 1 )
  {
    v19 = 0;
    m_Items = QuestIdListByEventId->m_Items;
    do
    {
      if ( v19 >= (unsigned int)max_length )
LABEL_122:
        sub_1C71610(Instance);
      Instance = QuestGroupMaster__GetGroupId(v15, m_Items[v19], 5, 0);
      if ( (_DWORD)Instance == termId )
      {
        if ( v19 >= LODWORD(QuestIdListByEventId->max_length) )
          goto LABEL_122;
        if ( !v17 )
          goto LABEL_120;
        isGoal = (unsigned int)m_Items[v19];
        items = v17->fields._items;
        v22 = Method_System_Collections_Generic_List_int__Add__;
        ++v17->fields._version;
        if ( !items )
          goto LABEL_120;
        size = v17->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v17,
            isGoal,
            *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v17->fields._size = size + 1;
          items->m_Items[size] = isGoal;
        }
      }
      LODWORD(max_length) = QuestIdListByEventId->max_length;
    }
    while ( (__int64)++v19 < (int)max_length );
  }
  if ( !v17 )
    goto LABEL_120;
  v24 = v17->fields._size;
  v25 = v24 > 0;
  if ( v24 >= 1 )
  {
    for ( i = 0; i < v28; v25 = i < v28 )
    {
      Item = System_Collections_Generic_List_int___get_Item(
               v17,
               i,
               (const MethodInfo_37F3404 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(1, Item, 0, 0, 0, 0) )
        break;
      v28 = v17->fields._size;
      ++i;
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0
    || (GroupIdData = EventRaceMaster__getGroupIdData((EventRaceMaster_o *)Instance, eventIda, termId, 0),
        v30 = (System_Collections_Generic_List_bool__o *)sub_1C715FC(System_Collections_Generic_List_bool__TypeInfo),
        System_Collections_Generic_List_bool____ctor(
          v30,
          (const MethodInfo_37C9AD4 *)Method_System_Collections_Generic_List_bool___ctor__),
        !GroupIdData) )
  {
LABEL_120:
    sub_1C71608(Instance, isGoal);
  }
  if ( GroupIdData->fields._size >= 1 )
  {
    v31 = 0;
    do
    {
      v32 = eventIda;
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___get_Item(
        &groupId,
        GroupIdData,
        v31,
        (const MethodInfo_38B6554 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__);
      v33 = groupId.fields.groupId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = CondType__IsEventRaceGoalScriptPlayed(v32, termId, v33, 0);
      if ( !v30 )
        goto LABEL_120;
      v34 = v30->fields._items;
      v35 = Method_System_Collections_Generic_List_bool__Add__;
      ++v30->fields._version;
      if ( !v34 )
        goto LABEL_120;
      v36 = v30->fields._size;
      if ( (unsigned int)v36 >= LODWORD(v34->max_length) )
      {
        System_Collections_Generic_List_bool___AddWithResize(
          v30,
          Instance & 1,
          *(const MethodInfo_37CA338 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v30->fields._size = v36 + 1;
        v34->m_Items[v36] = Instance & 1;
      }
    }
    while ( ++v31 < GroupIdData->fields._size );
  }
  carIcon = this->fields.carIcon;
  if ( !carIcon )
    goto LABEL_120;
  v38 = v14 && v25;
  v39 = 4;
  v80 = v38;
  while ( 1 )
  {
    v40 = carIcon->max_length;
    v41 = v39 - 4;
    if ( (int)v39 - 4 >= v40 )
      break;
    if ( v41 >= v40 )
      goto LABEL_122;
    Instance = *((_QWORD *)&carIcon->obj.klass + v39);
    if ( !Instance )
      goto LABEL_120;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    GameObjectExtensions__SetLocalPosition(gameObject, this->fields.startPos, 0);
    v43 = this->fields.carIcon;
    if ( !v43 )
      goto LABEL_120;
    if ( v41 >= LODWORD(v43->max_length) )
      goto LABEL_122;
    Instance = *((_QWORD *)&v43->obj.klass + v39);
    if ( !Instance )
      goto LABEL_120;
    if ( (v38 & 1) == 0 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0);
      goto LABEL_80;
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0);
    v44 = this->fields.carIcon;
    if ( !v44 )
      goto LABEL_120;
    if ( v41 >= LODWORD(v44->max_length) )
      goto LABEL_122;
    v45 = (UISprite_o *)*((_QWORD *)&v44->obj.klass + v39);
    if ( GroupIdData->fields._size <= (signed int)v41 )
    {
      v51 = System_Int32__ToString((int32_t)&eventIda, 0);
      v52 = System_String__Concat_64069988(
              (System_String_o *)StringLiteral_23038/*"race_status_"*/,
              v51,
              (System_String_o *)StringLiteral_1123/*"000"*/,
              0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      Instance = AtlasManager__SetEventUI(v45, v52, 0);
      if ( (Instance & 1) != 0 )
        goto LABEL_80;
    }
    else
    {
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___get_Item(
        &groupId,
        GroupIdData,
        v41,
        (const MethodInfo_38B6554 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__);
      v83 = groupId;
      v46 = System_Int32__ToString((int32_t)&v83, 0);
      v47 = System_String__Concat_64031724((System_String_o *)StringLiteral_23038/*"race_status_"*/, v46, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v48 = AtlasManager__SetEventUI(v45, v47, 0);
      Instance = (int64_t)System_Collections_Generic_List_EventRaceMaster_GroupRankData___get_Item(
                            &groupId,
                            GroupIdData,
                            v41,
                            (const MethodInfo_38B6554 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__);
      v38 = v80;
      if ( !groupId.fields.isGoal )
        goto LABEL_75;
      if ( !v30 )
        goto LABEL_120;
      Instance = System_Collections_Generic_List_bool___get_Item(
                   v30,
                   v41,
                   (const MethodInfo_37CA038 *)Method_System_Collections_Generic_List_bool__get_Item__);
      if ( (Instance & 1) != 0 )
      {
        v49 = this->fields.carIcon;
        if ( !v49 )
          goto LABEL_120;
        if ( v41 >= LODWORD(v49->max_length) )
          goto LABEL_122;
        Instance = *((_QWORD *)&v49->obj.klass + v39);
        if ( !Instance )
          goto LABEL_120;
        v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        GameObjectExtensions__SetLocalPosition(v50, this->fields.goalPos, 0);
        if ( v48 )
          goto LABEL_80;
      }
      else
      {
LABEL_75:
        if ( v48 )
          goto LABEL_80;
      }
    }
    v53 = this->fields.carIcon;
    if ( !v53 )
      goto LABEL_120;
    if ( v41 >= LODWORD(v53->max_length) )
      goto LABEL_122;
    Instance = *((_QWORD *)&v53->obj.klass + v39);
    if ( !Instance )
      goto LABEL_120;
    UISprite__set_atlas((UISprite_o *)Instance, 0, 0);
LABEL_80:
    carIcon = this->fields.carIcon;
    ++v39;
    if ( !carIcon )
      goto LABEL_120;
  }
  carBackSpr = this->fields.carBackSpr;
  if ( !carBackSpr )
    goto LABEL_120;
  v55 = 4;
  while ( 1 )
  {
    max_length_low = LODWORD(carBackSpr->max_length);
    v57 = v55 - 4;
    if ( v55 - 4 >= (int)max_length_low )
      break;
    if ( v57 >= max_length_low )
      goto LABEL_122;
    v58 = (UISprite_o *)*((_QWORD *)&carBackSpr->obj.klass + v55);
    v59 = System_Int32__ToString((int32_t)&eventIda, 0);
    v60 = System_String__Concat_64069988(
            (System_String_o *)StringLiteral_23038/*"race_status_"*/,
            v59,
            (System_String_o *)StringLiteral_1123/*"000"*/,
            0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(v58, v60, 0);
    if ( (Instance & 1) == 0 )
    {
      v61 = this->fields.carBackSpr;
      if ( !v61 )
        goto LABEL_120;
      if ( v57 >= LODWORD(v61->max_length) )
        goto LABEL_122;
      Instance = *((_QWORD *)&v61->obj.klass + v55);
      if ( !Instance )
        goto LABEL_120;
      UISprite__set_atlas((UISprite_o *)Instance, 0, 0);
    }
    carBackSpr = this->fields.carBackSpr;
    ++v55;
    if ( !carBackSpr )
      goto LABEL_120;
  }
  rankSpr = this->fields.rankSpr;
  if ( !rankSpr )
    goto LABEL_120;
  v63 = 0;
  while ( 1 )
  {
    v64 = LODWORD(rankSpr->max_length);
    if ( (__int64)v63 >= (int)v64 )
      break;
    v82 = v63 + 1;
    if ( v63 >= v64 )
      goto LABEL_122;
    v65 = rankSpr->m_Items[v63];
    v66 = System_Int32__ToString((int32_t)&eventIda, 0);
    v67 = System_Int32__ToString((int32_t)&v82, 0);
    v68 = System_String__Concat_64071992(
            (System_String_o *)StringLiteral_23040/*"race_status_rank_"*/,
            v66,
            (System_String_o *)StringLiteral_16109/*"_"*/,
            v67,
            0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(v65, v68, 0);
    rankSpr = this->fields.rankSpr;
    ++v63;
    if ( !rankSpr )
      goto LABEL_120;
  }
  goalIcon = this->fields.goalIcon;
  if ( !goalIcon )
    goto LABEL_120;
  v70 = 0;
  while ( 1 )
  {
    v71 = goalIcon->max_length;
    if ( v70 >= v71 )
      break;
    if ( v70 >= (unsigned int)v71 )
      goto LABEL_122;
    v72 = goalIcon->m_Items[v70];
    v73 = System_Int32__ToString((int32_t)&eventIda, 0);
    v74 = System_String__Concat_64031724((System_String_o *)StringLiteral_23039/*"race_status_goal_"*/, v73, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(v72, v74, 0);
    v75 = this->fields.goalIcon;
    if ( v75 )
    {
      if ( (unsigned int)v70 >= LODWORD(v75->max_length) )
        goto LABEL_122;
      v76 = (UnityEngine_Behaviour_o *)v75->m_Items[v70];
      if ( GroupIdData->fields._size <= v70 )
      {
        v77 = 0;
      }
      else
      {
        if ( !v30 )
          goto LABEL_120;
        Instance = System_Collections_Generic_List_bool___get_Item(
                     v30,
                     v70,
                     (const MethodInfo_37CA038 *)Method_System_Collections_Generic_List_bool__get_Item__);
        v77 = Instance & 1;
      }
      if ( (v77 & v38) != 0 )
      {
        Instance = (int64_t)System_Collections_Generic_List_EventRaceMaster_GroupRankData___get_Item(
                              &groupId,
                              GroupIdData,
                              v70,
                              (const MethodInfo_38B6554 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__);
        isGoal = groupId.fields.isGoal;
        if ( !v76 )
          goto LABEL_120;
      }
      else
      {
        isGoal = 0;
        if ( !v76 )
          goto LABEL_120;
      }
      UnityEngine_Behaviour__set_enabled(v76, isGoal, 0);
      goalIcon = this->fields.goalIcon;
      ++v70;
      if ( goalIcon )
        continue;
    }
    goto LABEL_120;
  }
  v78 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(v78, 0.0, 0);
  v79 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this->fields.originPos = GameObjectExtensions__GetLocalPosition(v79, 0);
}


void TitleInfoEventRaceRankComponent__UpdateDisp(TitleInfoEventRaceRankComponent_o *this, const MethodInfo *method)
{
  ;
}