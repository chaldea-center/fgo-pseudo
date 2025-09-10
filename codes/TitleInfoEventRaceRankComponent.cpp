void TitleInfoEventRaceRankComponent___cctor(const MethodInfo *method)
{
  struct TitleInfoEventRaceRankComponent_StaticFields *static_fields; // x8
  struct TitleInfoEventRaceRankComponent_StaticFields *v2; // x8

  if ( (byte_4C253B2 & 1) == 0 )
  {
    sub_1C2D490(&TitleInfoEventRaceRankComponent_TypeInfo);
    byte_4C253B2 = 1;
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
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4C253B0 & 1) == 0 )
  {
    sub_1C2D490(&TitleInfoEventRaceRankComponent_TypeInfo);
    sub_1C2D490(&Method_UITweener_Begin_TweenPosition___);
    sub_1C2D490(&StringLiteral_6852/*"FrameInFinish"*/);
    byte_4C253B0 = 1;
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
         (const MethodInfo_318A268 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v8 )
    sub_1C2D6EC(0, v9);
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
  sub_1C2D434((CGThumbnailListItem_o *)&v11[5], (int32_t)v14, v15, v16);
  v17 = StringLiteral_6852/*"FrameInFinish"*/;
  v11[5].monitor = (void *)StringLiteral_6852/*"FrameInFinish"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v11[5].monitor, v17, v18, v19);
  this->fields.frameInCallBack = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.frameInCallBack, (int32_t)callback, v20, v21);
}


void TitleInfoEventRaceRankComponent__FrameInFinish(TitleInfoEventRaceRankComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_frameInCallBack; // x0
  System_Action_o *v5; // x19
  struct System_Action_o *frameInCallBack; // t1

  frameInCallBack = this->fields.frameInCallBack;
  p_frameInCallBack = (CGThumbnailListItem_o *)&this->fields.frameInCallBack;
  v5 = frameInCallBack;
  p_frameInCallBack->klass = 0;
  sub_1C2D434(p_frameInCallBack, 0, v2, v3);
  if ( frameInCallBack )
    ActionExtensions__Call(v5, 0);
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
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppClass *v17; // [xsp+0h] [xbp-40h]

  if ( (byte_4C253B1 & 1) == 0 )
  {
    sub_1C2D490(&TitleInfoEventRaceRankComponent_TypeInfo);
    sub_1C2D490(&Method_UITweener_Begin_TweenPosition___);
    sub_1C2D490(&StringLiteral_6854/*"FrameOutFinish"*/);
    byte_4C253B1 = 1;
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
         (const MethodInfo_318A268 *)Method_UITweener_Begin_TweenPosition___);
  v17 = *(Il2CppClass **)&this->fields.originPos.fields.x;
  if ( !v6 )
    sub_1C2D6EC(0, v7);
  v8 = v6;
  *(float *)&v6[8].monitor = this->fields.originPos.fields.z;
  v6[8].klass = v17;
  static_fields = (float32x2_t *)TitleInfoEventRaceRankComponent_TypeInfo->static_fields;
  v10 = this->fields.originPos.fields.z + static_fields[1].n64_f32[0];
  *(float32x2_t *)((char *)&v6[8].monitor + 4) = vadd_f32(
                                                   *(float32x2_t *)&this->fields.originPos.fields.x,
                                                   (float32x2_t)static_fields->n64_u64[0]);
  *((float *)&v6[9].klass + 1) = v10;
  LODWORD(v6[2].klass) = 2;
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v8[5].klass = (Il2CppClass *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)&v8[5], (int32_t)v11, v12, v13);
  v14 = StringLiteral_6854/*"FrameOutFinish"*/;
  v8[5].monitor = (void *)StringLiteral_6854/*"FrameOutFinish"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v8[5].monitor, v14, v15, v16);
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
  __int64 v18; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v20; // x25
  int32_t *m_Items; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  int v25; // w8
  _BOOL4 v26; // w26
  int32_t i; // w21
  int32_t Item; // w23
  int32_t v29; // w8
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *GroupIdData; // x20
  System_Collections_Generic_List_bool__o *v31; // x21
  int32_t v32; // w23
  int32_t v33; // w24
  int32_t v34; // w25
  struct System_Boolean_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  struct UISprite_array *carIcon; // x8
  int v39; // w28
  __int64 v40; // x26
  int v41; // w9
  unsigned int v42; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_array *v44; // x8
  struct UISprite_array *v45; // x8
  UISprite_o *v46; // x23
  System_String_o *v47; // x0
  System_String_o *v48; // x24
  bool v49; // w23
  struct UISprite_array *v50; // x8
  UnityEngine_GameObject_o *v51; // x0
  System_String_o *v52; // x0
  System_String_o *v53; // x24
  struct UISprite_array *v54; // x8
  struct UISprite_array *carBackSpr; // x8
  __int64 v56; // x24
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v58; // x26
  UISprite_o *v59; // x22
  System_String_o *v60; // x0
  System_String_o *v61; // x23
  struct UISprite_array *v62; // x8
  struct UISprite_array *rankSpr; // x8
  unsigned __int64 v64; // x24
  unsigned __int64 v65; // x9
  UISprite_o *v66; // x22
  System_String_o *v67; // x23
  System_String_o *v68; // x0
  System_String_o *v69; // x23
  struct UISprite_array *goalIcon; // x8
  int32_t v71; // w22
  int32_t v72; // w9
  UISprite_o *v73; // x23
  System_String_o *v74; // x0
  System_String_o *v75; // x24
  struct UISprite_array *v76; // x8
  UnityEngine_Behaviour_o *v77; // x23
  int v78; // w8
  UnityEngine_GameObject_o *v79; // x0
  UnityEngine_GameObject_o *v80; // x0
  int v81; // [xsp+Ch] [xbp-A4h]
  EventRaceMaster_GroupRankData_o groupId; // [xsp+10h] [xbp-A0h] BYREF
  int v83; // [xsp+2Ch] [xbp-84h] BYREF
  EventRaceMaster_GroupRankData_o v84; // [xsp+30h] [xbp-80h] BYREF
  int32_t eventIda; // [xsp+4Ch] [xbp-64h] BYREF

  eventIda = eventId;
  if ( (byte_4C253AF & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_bool__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_bool___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_bool__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_bool__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TitleInfoEventRaceRankComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_22907/*"race_status_goal_"*/);
    sub_1C2D490(&StringLiteral_16105/*"_"*/);
    sub_1C2D490(&StringLiteral_22908/*"race_status_rank_"*/);
    sub_1C2D490(&StringLiteral_22906/*"race_status_"*/);
    sub_1C2D490(&StringLiteral_1130/*"000"*/);
    byte_4C253AF = 1;
  }
  memset(&v84, 0, sizeof(v84));
  v83 = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_120;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_120;
  DataMasterBase_object__object__int___GetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    eventId,
    (const MethodInfo_3387D98 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_120;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
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
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_120;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_120;
  v15 = (QuestGroupMaster_o *)Instance;
  QuestIdListByEventId = QuestGroupMaster__GetQuestIdListByEventId((QuestGroupMaster_o *)Instance, eventId, 0);
  v17 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !QuestIdListByEventId )
    goto LABEL_120;
  max_length = QuestIdListByEventId->max_length;
  if ( (int)max_length >= 1 )
  {
    v20 = 0;
    m_Items = QuestIdListByEventId->m_Items;
    do
    {
      if ( v20 >= (unsigned int)max_length )
LABEL_122:
        sub_1C2D6F4(Instance, isGoal, v18);
      Instance = QuestGroupMaster__GetGroupId(v15, m_Items[v20], 5, 0);
      if ( (_DWORD)Instance == termId )
      {
        if ( v20 >= LODWORD(QuestIdListByEventId->max_length) )
          goto LABEL_122;
        if ( !v17 )
          goto LABEL_120;
        isGoal = (unsigned int)m_Items[v20];
        items = v17->fields._items;
        v23 = Method_System_Collections_Generic_List_int__Add__;
        ++v17->fields._version;
        if ( !items )
          goto LABEL_120;
        size = v17->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v17,
            isGoal,
            *(const MethodInfo_376CB60 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v17->fields._size = size + 1;
          items->m_Items[size] = isGoal;
        }
      }
      LODWORD(max_length) = QuestIdListByEventId->max_length;
    }
    while ( (__int64)++v20 < (int)max_length );
  }
  if ( !v17 )
    goto LABEL_120;
  v25 = v17->fields._size;
  v26 = v25 > 0;
  if ( v25 >= 1 )
  {
    for ( i = 0; i < v29; v26 = i < v29 )
    {
      Item = System_Collections_Generic_List_int___get_Item(
               v17,
               i,
               (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(1, Item, 0, 0, 0, 0) )
        break;
      v29 = v17->fields._size;
      ++i;
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0
    || (GroupIdData = EventRaceMaster__getGroupIdData((EventRaceMaster_o *)Instance, eventIda, termId, 0),
        v31 = (System_Collections_Generic_List_bool__o *)sub_1C2D6DC(System_Collections_Generic_List_bool__TypeInfo),
        System_Collections_Generic_List_bool____ctor(
          v31,
          (const MethodInfo_3742F40 *)Method_System_Collections_Generic_List_bool___ctor__),
        !GroupIdData) )
  {
LABEL_120:
    sub_1C2D6EC(Instance, isGoal);
  }
  if ( GroupIdData->fields._size >= 1 )
  {
    v32 = 0;
    do
    {
      v33 = eventIda;
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___get_Item(
        &groupId,
        GroupIdData,
        v32,
        (const MethodInfo_382F9C0 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__);
      v34 = groupId.fields.groupId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = CondType__IsEventRaceGoalScriptPlayed(v33, termId, v34, 0);
      if ( !v31 )
        goto LABEL_120;
      v35 = v31->fields._items;
      v36 = Method_System_Collections_Generic_List_bool__Add__;
      ++v31->fields._version;
      if ( !v35 )
        goto LABEL_120;
      v37 = v31->fields._size;
      if ( (unsigned int)v37 >= LODWORD(v35->max_length) )
      {
        System_Collections_Generic_List_bool___AddWithResize(
          v31,
          Instance & 1,
          *(const MethodInfo_37437A4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
      else
      {
        v31->fields._size = v37 + 1;
        v35->m_Items[v37] = Instance & 1;
      }
    }
    while ( ++v32 < GroupIdData->fields._size );
  }
  carIcon = this->fields.carIcon;
  if ( !carIcon )
    goto LABEL_120;
  v39 = v14 && v26;
  v40 = 4;
  v81 = v39;
  while ( 1 )
  {
    v41 = carIcon->max_length;
    v42 = v40 - 4;
    if ( (int)v40 - 4 >= v41 )
      break;
    if ( v42 >= v41 )
      goto LABEL_122;
    Instance = *((_QWORD *)&carIcon->obj.klass + v40);
    if ( !Instance )
      goto LABEL_120;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    GameObjectExtensions__SetLocalPosition(gameObject, this->fields.startPos, 0);
    v44 = this->fields.carIcon;
    if ( !v44 )
      goto LABEL_120;
    if ( v42 >= LODWORD(v44->max_length) )
      goto LABEL_122;
    Instance = *((_QWORD *)&v44->obj.klass + v40);
    if ( !Instance )
      goto LABEL_120;
    if ( (v39 & 1) == 0 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0);
      goto LABEL_80;
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0);
    v45 = this->fields.carIcon;
    if ( !v45 )
      goto LABEL_120;
    if ( v42 >= LODWORD(v45->max_length) )
      goto LABEL_122;
    v46 = (UISprite_o *)*((_QWORD *)&v45->obj.klass + v40);
    if ( GroupIdData->fields._size <= (signed int)v42 )
    {
      v52 = System_Int32__ToString((int32_t)&eventIda, 0);
      v53 = System_String__Concat_63496112(
              (System_String_o *)StringLiteral_22906/*"race_status_"*/,
              v52,
              (System_String_o *)StringLiteral_1130/*"000"*/,
              0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      Instance = AtlasManager__SetEventUI(v46, v53, 0);
      if ( (Instance & 1) != 0 )
        goto LABEL_80;
    }
    else
    {
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___get_Item(
        &groupId,
        GroupIdData,
        v42,
        (const MethodInfo_382F9C0 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__);
      v84 = groupId;
      v47 = System_Int32__ToString((int32_t)&v84, 0);
      v48 = System_String__Concat_63457864((System_String_o *)StringLiteral_22906/*"race_status_"*/, v47, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v49 = AtlasManager__SetEventUI(v46, v48, 0);
      Instance = (int64_t)System_Collections_Generic_List_EventRaceMaster_GroupRankData___get_Item(
                            &groupId,
                            GroupIdData,
                            v42,
                            (const MethodInfo_382F9C0 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__);
      v39 = v81;
      if ( !groupId.fields.isGoal )
        goto LABEL_75;
      if ( !v31 )
        goto LABEL_120;
      Instance = System_Collections_Generic_List_bool___get_Item(
                   v31,
                   v42,
                   (const MethodInfo_37434A4 *)Method_System_Collections_Generic_List_bool__get_Item__);
      if ( (Instance & 1) != 0 )
      {
        v50 = this->fields.carIcon;
        if ( !v50 )
          goto LABEL_120;
        if ( v42 >= LODWORD(v50->max_length) )
          goto LABEL_122;
        Instance = *((_QWORD *)&v50->obj.klass + v40);
        if ( !Instance )
          goto LABEL_120;
        v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        GameObjectExtensions__SetLocalPosition(v51, this->fields.goalPos, 0);
        if ( v49 )
          goto LABEL_80;
      }
      else
      {
LABEL_75:
        if ( v49 )
          goto LABEL_80;
      }
    }
    v54 = this->fields.carIcon;
    if ( !v54 )
      goto LABEL_120;
    if ( v42 >= LODWORD(v54->max_length) )
      goto LABEL_122;
    Instance = *((_QWORD *)&v54->obj.klass + v40);
    if ( !Instance )
      goto LABEL_120;
    UISprite__set_atlas((UISprite_o *)Instance, 0, 0);
LABEL_80:
    carIcon = this->fields.carIcon;
    ++v40;
    if ( !carIcon )
      goto LABEL_120;
  }
  carBackSpr = this->fields.carBackSpr;
  if ( !carBackSpr )
    goto LABEL_120;
  v56 = 4;
  while ( 1 )
  {
    max_length_low = LODWORD(carBackSpr->max_length);
    v58 = v56 - 4;
    if ( v56 - 4 >= (int)max_length_low )
      break;
    if ( v58 >= max_length_low )
      goto LABEL_122;
    v59 = (UISprite_o *)*((_QWORD *)&carBackSpr->obj.klass + v56);
    v60 = System_Int32__ToString((int32_t)&eventIda, 0);
    v61 = System_String__Concat_63496112(
            (System_String_o *)StringLiteral_22906/*"race_status_"*/,
            v60,
            (System_String_o *)StringLiteral_1130/*"000"*/,
            0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(v59, v61, 0);
    if ( (Instance & 1) == 0 )
    {
      v62 = this->fields.carBackSpr;
      if ( !v62 )
        goto LABEL_120;
      if ( v58 >= LODWORD(v62->max_length) )
        goto LABEL_122;
      Instance = *((_QWORD *)&v62->obj.klass + v56);
      if ( !Instance )
        goto LABEL_120;
      UISprite__set_atlas((UISprite_o *)Instance, 0, 0);
    }
    carBackSpr = this->fields.carBackSpr;
    ++v56;
    if ( !carBackSpr )
      goto LABEL_120;
  }
  rankSpr = this->fields.rankSpr;
  if ( !rankSpr )
    goto LABEL_120;
  v64 = 0;
  while ( 1 )
  {
    v65 = LODWORD(rankSpr->max_length);
    if ( (__int64)v64 >= (int)v65 )
      break;
    v83 = v64 + 1;
    if ( v64 >= v65 )
      goto LABEL_122;
    v66 = rankSpr->m_Items[v64];
    v67 = System_Int32__ToString((int32_t)&eventIda, 0);
    v68 = System_Int32__ToString((int32_t)&v83, 0);
    v69 = System_String__Concat_63498116(
            (System_String_o *)StringLiteral_22908/*"race_status_rank_"*/,
            v67,
            (System_String_o *)StringLiteral_16105/*"_"*/,
            v68,
            0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(v66, v69, 0);
    rankSpr = this->fields.rankSpr;
    ++v64;
    if ( !rankSpr )
      goto LABEL_120;
  }
  goalIcon = this->fields.goalIcon;
  if ( !goalIcon )
    goto LABEL_120;
  v71 = 0;
  while ( 1 )
  {
    v72 = goalIcon->max_length;
    if ( v71 >= v72 )
      break;
    if ( v71 >= (unsigned int)v72 )
      goto LABEL_122;
    v73 = goalIcon->m_Items[v71];
    v74 = System_Int32__ToString((int32_t)&eventIda, 0);
    v75 = System_String__Concat_63457864((System_String_o *)StringLiteral_22907/*"race_status_goal_"*/, v74, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(v73, v75, 0);
    v76 = this->fields.goalIcon;
    if ( v76 )
    {
      if ( (unsigned int)v71 >= LODWORD(v76->max_length) )
        goto LABEL_122;
      v77 = (UnityEngine_Behaviour_o *)v76->m_Items[v71];
      if ( GroupIdData->fields._size <= v71 )
      {
        v78 = 0;
      }
      else
      {
        if ( !v31 )
          goto LABEL_120;
        Instance = System_Collections_Generic_List_bool___get_Item(
                     v31,
                     v71,
                     (const MethodInfo_37434A4 *)Method_System_Collections_Generic_List_bool__get_Item__);
        v78 = Instance & 1;
      }
      if ( (v78 & v39) != 0 )
      {
        Instance = (int64_t)System_Collections_Generic_List_EventRaceMaster_GroupRankData___get_Item(
                              &groupId,
                              GroupIdData,
                              v71,
                              (const MethodInfo_382F9C0 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__);
        isGoal = groupId.fields.isGoal;
        if ( !v77 )
          goto LABEL_120;
      }
      else
      {
        isGoal = 0;
        if ( !v77 )
          goto LABEL_120;
      }
      UnityEngine_Behaviour__set_enabled(v77, isGoal, 0);
      goalIcon = this->fields.goalIcon;
      ++v71;
      if ( goalIcon )
        continue;
    }
    goto LABEL_120;
  }
  v79 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(v79, 0.0, 0);
  v80 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this->fields.originPos = GameObjectExtensions__GetLocalPosition(v80, 0);
}


void TitleInfoEventRaceRankComponent__UpdateDisp(TitleInfoEventRaceRankComponent_o *this, const MethodInfo *method)
{
  ;
}