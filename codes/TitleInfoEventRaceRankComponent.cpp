void __fastcall TitleInfoEventRaceRankComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct TitleInfoEventRaceRankComponent_StaticFields *static_fields; // x8
  struct TitleInfoEventRaceRankComponent_StaticFields *v3; // x8

  if ( (byte_4B1A7DF & 1) == 0 )
  {
    sub_1BCAFF8(&TitleInfoEventRaceRankComponent_TypeInfo, v1);
    byte_4B1A7DF = 1;
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
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4B1A7DD & 1) == 0 )
  {
    sub_1BCAFF8(&TitleInfoEventRaceRankComponent_TypeInfo, callback);
    sub_1BCAFF8(&Method_UITweener_Begin_TweenPosition___, v5);
    sub_1BCAFF8(&StringLiteral_6805/*"FrameInFinish"*/, v6);
    byte_4B1A7DD = 1;
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
          (const MethodInfo_30D2A08 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v10 )
    sub_1BCB254(0LL, v11);
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
  sub_1BCAF9C((CGThumbnailListItem_o *)&v13[5], (int32_t)v16, v17, v18);
  v19 = StringLiteral_6805/*"FrameInFinish"*/;
  v13[5].monitor = (void *)StringLiteral_6805/*"FrameInFinish"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v13[5].monitor, v19, v20, v21);
  this->fields.frameInCallBack = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.frameInCallBack, (int32_t)callback, v22, v23);
}


void __fastcall TitleInfoEventRaceRankComponent__FrameInFinish(
        TitleInfoEventRaceRankComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_frameInCallBack; // x0
  System_Action_o *v5; // x19
  struct System_Action_o *frameInCallBack; // t1

  frameInCallBack = this->fields.frameInCallBack;
  p_frameInCallBack = (CGThumbnailListItem_o *)&this->fields.frameInCallBack;
  v5 = frameInCallBack;
  p_frameInCallBack->klass = 0LL;
  sub_1BCAF9C(p_frameInCallBack, 0, v2, v3);
  if ( frameInCallBack )
    ActionExtensions__Call(v5, 0LL);
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppClass *v19; // [xsp+0h] [xbp-40h]

  if ( (byte_4B1A7DE & 1) == 0 )
  {
    sub_1BCAFF8(&TitleInfoEventRaceRankComponent_TypeInfo, method);
    sub_1BCAFF8(&Method_UITweener_Begin_TweenPosition___, v3);
    sub_1BCAFF8(&StringLiteral_6807/*"FrameOutFinish"*/, v4);
    byte_4B1A7DE = 1;
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
         (const MethodInfo_30D2A08 *)Method_UITweener_Begin_TweenPosition___);
  v19 = *(Il2CppClass **)&this->fields.originPos.fields.x;
  if ( !v8 )
    sub_1BCB254(0LL, v9);
  v10 = v8;
  *(float *)&v8[8].monitor = this->fields.originPos.fields.z;
  v8[8].klass = v19;
  static_fields = (float32x2_t *)TitleInfoEventRaceRankComponent_TypeInfo->static_fields;
  v12 = this->fields.originPos.fields.z + static_fields[1].n64_f32[0];
  *(float32x2_t *)((char *)&v8[8].monitor + 4) = vadd_f32(
                                                   *(float32x2_t *)&this->fields.originPos.fields.x,
                                                   (float32x2_t)static_fields->n64_u64[0]);
  *((float *)&v8[9].klass + 1) = v12;
  LODWORD(v8[2].klass) = 2;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v10[5].klass = (Il2CppClass *)v13;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v10[5], (int32_t)v13, v14, v15);
  v16 = StringLiteral_6807/*"FrameOutFinish"*/;
  v10[5].monitor = (void *)StringLiteral_6807/*"FrameOutFinish"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v10[5].monitor, v16, v17, v18);
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
  __int64 v43; // x2
  __int64 v44; // x8
  unsigned __int64 v45; // x25
  int32_t *v46; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  int v50; // w8
  _BOOL4 v51; // w26
  int32_t i; // w21
  int32_t Item; // w23
  int32_t v54; // w8
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *GroupIdData; // x20
  System_Collections_Generic_List_bool__o *v56; // x21
  int32_t v57; // w23
  int32_t v58; // w24
  int32_t v59; // w25
  struct System_Boolean_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  struct UISprite_array *carIcon; // x8
  int v64; // w28
  __int64 v65; // x26
  int max_length; // w9
  unsigned int v67; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_array *v69; // x8
  struct UISprite_array *v70; // x8
  UISprite_o *v71; // x23
  System_String_o *v72; // x0
  System_String_o *v73; // x24
  bool v74; // w23
  struct UISprite_array *v75; // x8
  UnityEngine_GameObject_o *v76; // x0
  System_String_o *v77; // x0
  System_String_o *v78; // x24
  struct UISprite_array *v79; // x8
  struct UISprite_array *carBackSpr; // x8
  __int64 v81; // x24
  unsigned __int64 v82; // x9
  unsigned __int64 v83; // x26
  UISprite_o *v84; // x22
  System_String_o *v85; // x0
  System_String_o *v86; // x23
  struct UISprite_array *v87; // x8
  struct UISprite_array *rankSpr; // x8
  unsigned __int64 v89; // x24
  unsigned __int64 v90; // x9
  UISprite_o *v91; // x22
  System_String_o *v92; // x23
  System_String_o *v93; // x0
  System_String_o *v94; // x23
  struct UISprite_array *goalIcon; // x8
  int32_t v96; // w22
  il2cpp_array_size_t v97; // w9
  UISprite_o *v98; // x23
  System_String_o *v99; // x0
  System_String_o *v100; // x24
  struct UISprite_array *v101; // x8
  UnityEngine_Behaviour_o *v102; // x23
  int v103; // w8
  UnityEngine_GameObject_o *v104; // x0
  UnityEngine_GameObject_o *v105; // x0
  int v106; // [xsp+Ch] [xbp-A4h]
  EventRaceMaster_GroupRankData_o groupId; // [xsp+10h] [xbp-A0h] BYREF
  int v108; // [xsp+2Ch] [xbp-84h] BYREF
  EventRaceMaster_GroupRankData_o v109; // [xsp+30h] [xbp-80h] BYREF
  int32_t eventIda; // [xsp+4Ch] [xbp-64h] BYREF

  eventIda = eventId;
  if ( (byte_4B1A7DC & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1BCAFF8(&CondType_TypeInfo, v7);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventDetailMaster___, v8);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventRaceMaster___, v9);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventRaceResultMaster___, v10);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestGroupMaster___, v11);
    sub_1BCAFF8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_bool__Add__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_bool___ctor__, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Count__, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__get_Count__, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_bool__get_Item__, v20);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__get_Item__, v21);
    sub_1BCAFF8(&System_Collections_Generic_List_bool__TypeInfo, v22);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v23);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v24);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1BCAFF8(&TitleInfoEventRaceRankComponent_TypeInfo, v26);
    sub_1BCAFF8(&StringLiteral_22721/*"race_status_goal_"*/, v27);
    sub_1BCAFF8(&StringLiteral_15973/*"_"*/, v28);
    sub_1BCAFF8(&StringLiteral_22722/*"race_status_rank_"*/, v29);
    sub_1BCAFF8(&StringLiteral_22720/*"race_status_"*/, v30);
    sub_1BCAFF8(&StringLiteral_1121/*"000"*/, v31);
    byte_4B1A7DC = 1;
  }
  memset(&v109, 0, sizeof(v109));
  v108 = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_120;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_120;
  DataMasterBase_object__object__int___GetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    eventId,
    (const MethodInfo_32C7E00 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_120;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
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
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_120;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_120;
  v40 = (QuestGroupMaster_o *)Instance;
  QuestIdListByEventId = QuestGroupMaster__GetQuestIdListByEventId((QuestGroupMaster_o *)Instance, eventId, 0LL);
  v42 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !QuestIdListByEventId )
    goto LABEL_120;
  v44 = *(_QWORD *)&QuestIdListByEventId->max_length;
  if ( (int)v44 >= 1 )
  {
    v45 = 0LL;
    v46 = &QuestIdListByEventId->m_Items[1];
    do
    {
      if ( v45 >= (unsigned int)v44 )
LABEL_122:
        sub_1BCB25C(Instance, isGoal, v43);
      Instance = QuestGroupMaster__GetGroupId(v40, v46[v45], 5, 0LL);
      if ( (_DWORD)Instance == termId )
      {
        if ( v45 >= QuestIdListByEventId->max_length )
          goto LABEL_122;
        if ( !v42 )
          goto LABEL_120;
        isGoal = (unsigned int)v46[v45];
        items = v42->fields._items;
        v48 = Method_System_Collections_Generic_List_int__Add__;
        ++v42->fields._version;
        if ( !items )
          goto LABEL_120;
        size = v42->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v42,
            isGoal,
            *(const MethodInfo_369CBAC **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
        }
        else
        {
          v42->fields._size = size + 1;
          items->m_Items[size + 1] = isGoal;
        }
      }
      LODWORD(v44) = QuestIdListByEventId->max_length;
    }
    while ( (__int64)++v45 < (int)v44 );
  }
  if ( !v42 )
    goto LABEL_120;
  v50 = v42->fields._size;
  v51 = v50 > 0;
  if ( v50 >= 1 )
  {
    for ( i = 0; i < v54; v51 = i < v54 )
    {
      Item = System_Collections_Generic_List_int___get_Item(
               v42,
               i,
               (const MethodInfo_369C8BC *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(1, Item, 0LL, 0, 0LL, 0LL) )
        break;
      v54 = v42->fields._size;
      ++i;
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0
    || (GroupIdData = EventRaceMaster__getGroupIdData((EventRaceMaster_o *)Instance, eventIda, termId, 0LL),
        v56 = (System_Collections_Generic_List_bool__o *)sub_1BCB244(System_Collections_Generic_List_bool__TypeInfo),
        System_Collections_Generic_List_bool____ctor(
          v56,
          (const MethodInfo_3672F8C *)Method_System_Collections_Generic_List_bool___ctor__),
        !GroupIdData) )
  {
LABEL_120:
    sub_1BCB254(Instance, isGoal);
  }
  if ( GroupIdData->fields._size >= 1 )
  {
    v57 = 0;
    do
    {
      v58 = eventIda;
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___get_Item(
        &groupId,
        GroupIdData,
        v57,
        (const MethodInfo_3759B84 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__);
      v59 = groupId.fields.groupId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = CondType__IsEventRaceGoalScriptPlayed(v58, termId, v59, 0LL);
      if ( !v56 )
        goto LABEL_120;
      v60 = v56->fields._items;
      v61 = Method_System_Collections_Generic_List_bool__Add__;
      ++v56->fields._version;
      if ( !v60 )
        goto LABEL_120;
      v62 = v56->fields._size;
      if ( (unsigned int)v62 >= v60->max_length )
      {
        System_Collections_Generic_List_bool___AddWithResize(
          v56,
          Instance & 1,
          *(const MethodInfo_36737F0 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      }
      else
      {
        v56->fields._size = v62 + 1;
        v60->m_Items[v62 + 4] = Instance & 1;
      }
    }
    while ( ++v57 < GroupIdData->fields._size );
  }
  carIcon = this->fields.carIcon;
  if ( !carIcon )
    goto LABEL_120;
  v64 = v39 && v51;
  v65 = 4LL;
  v106 = v64;
  while ( 1 )
  {
    max_length = carIcon->max_length;
    v67 = v65 - 4;
    if ( (int)v65 - 4 >= max_length )
      break;
    if ( v67 >= max_length )
      goto LABEL_122;
    Instance = *((_QWORD *)&carIcon->obj.klass + v65);
    if ( !Instance )
      goto LABEL_120;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    GameObjectExtensions__SetLocalPosition(gameObject, this->fields.startPos, 0LL);
    v69 = this->fields.carIcon;
    if ( !v69 )
      goto LABEL_120;
    if ( v67 >= v69->max_length )
      goto LABEL_122;
    Instance = *((_QWORD *)&v69->obj.klass + v65);
    if ( !Instance )
      goto LABEL_120;
    if ( (v64 & 1) == 0 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
      goto LABEL_80;
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
    v70 = this->fields.carIcon;
    if ( !v70 )
      goto LABEL_120;
    if ( v67 >= v70->max_length )
      goto LABEL_122;
    v71 = (UISprite_o *)*((_QWORD *)&v70->obj.klass + v65);
    if ( GroupIdData->fields._size <= (signed int)v67 )
    {
      v77 = System_Int32__ToString((int32_t)&eventIda, 0LL);
      v78 = System_String__Concat_62488672(
              (System_String_o *)StringLiteral_22720/*"race_status_"*/,
              v77,
              (System_String_o *)StringLiteral_1121/*"000"*/,
              0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      Instance = AtlasManager__SetEventUI(v71, v78, 0LL);
      if ( (Instance & 1) != 0 )
        goto LABEL_80;
    }
    else
    {
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___get_Item(
        &groupId,
        GroupIdData,
        v67,
        (const MethodInfo_3759B84 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__);
      v109 = groupId;
      v72 = System_Int32__ToString((int32_t)&v109, 0LL);
      v73 = System_String__Concat_62450424((System_String_o *)StringLiteral_22720/*"race_status_"*/, v72, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v74 = AtlasManager__SetEventUI(v71, v73, 0LL);
      Instance = (int64_t)System_Collections_Generic_List_EventRaceMaster_GroupRankData___get_Item(
                            &groupId,
                            GroupIdData,
                            v67,
                            (const MethodInfo_3759B84 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__);
      v64 = v106;
      if ( !groupId.fields.isGoal )
        goto LABEL_75;
      if ( !v56 )
        goto LABEL_120;
      Instance = System_Collections_Generic_List_bool___get_Item(
                   v56,
                   v67,
                   (const MethodInfo_36734F0 *)Method_System_Collections_Generic_List_bool__get_Item__);
      if ( (Instance & 1) != 0 )
      {
        v75 = this->fields.carIcon;
        if ( !v75 )
          goto LABEL_120;
        if ( v67 >= v75->max_length )
          goto LABEL_122;
        Instance = *((_QWORD *)&v75->obj.klass + v65);
        if ( !Instance )
          goto LABEL_120;
        v76 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        GameObjectExtensions__SetLocalPosition(v76, this->fields.goalPos, 0LL);
        if ( v74 )
          goto LABEL_80;
      }
      else
      {
LABEL_75:
        if ( v74 )
          goto LABEL_80;
      }
    }
    v79 = this->fields.carIcon;
    if ( !v79 )
      goto LABEL_120;
    if ( v67 >= v79->max_length )
      goto LABEL_122;
    Instance = *((_QWORD *)&v79->obj.klass + v65);
    if ( !Instance )
      goto LABEL_120;
    UISprite__set_atlas((UISprite_o *)Instance, 0LL, 0LL);
LABEL_80:
    carIcon = this->fields.carIcon;
    ++v65;
    if ( !carIcon )
      goto LABEL_120;
  }
  carBackSpr = this->fields.carBackSpr;
  if ( !carBackSpr )
    goto LABEL_120;
  v81 = 4LL;
  while ( 1 )
  {
    v82 = carBackSpr->max_length;
    v83 = v81 - 4;
    if ( v81 - 4 >= (int)v82 )
      break;
    if ( v83 >= v82 )
      goto LABEL_122;
    v84 = (UISprite_o *)*((_QWORD *)&carBackSpr->obj.klass + v81);
    v85 = System_Int32__ToString((int32_t)&eventIda, 0LL);
    v86 = System_String__Concat_62488672(
            (System_String_o *)StringLiteral_22720/*"race_status_"*/,
            v85,
            (System_String_o *)StringLiteral_1121/*"000"*/,
            0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(v84, v86, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v87 = this->fields.carBackSpr;
      if ( !v87 )
        goto LABEL_120;
      if ( v83 >= v87->max_length )
        goto LABEL_122;
      Instance = *((_QWORD *)&v87->obj.klass + v81);
      if ( !Instance )
        goto LABEL_120;
      UISprite__set_atlas((UISprite_o *)Instance, 0LL, 0LL);
    }
    carBackSpr = this->fields.carBackSpr;
    ++v81;
    if ( !carBackSpr )
      goto LABEL_120;
  }
  rankSpr = this->fields.rankSpr;
  if ( !rankSpr )
    goto LABEL_120;
  v89 = 0LL;
  while ( 1 )
  {
    v90 = rankSpr->max_length;
    if ( (__int64)v89 >= (int)v90 )
      break;
    v108 = v89 + 1;
    if ( v89 >= v90 )
      goto LABEL_122;
    v91 = rankSpr->m_Items[v89];
    v92 = System_Int32__ToString((int32_t)&eventIda, 0LL);
    v93 = System_Int32__ToString((int32_t)&v108, 0LL);
    v94 = System_String__Concat_62490676(
            (System_String_o *)StringLiteral_22722/*"race_status_rank_"*/,
            v92,
            (System_String_o *)StringLiteral_15973/*"_"*/,
            v93,
            0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(v91, v94, 0LL);
    rankSpr = this->fields.rankSpr;
    ++v89;
    if ( !rankSpr )
      goto LABEL_120;
  }
  goalIcon = this->fields.goalIcon;
  if ( !goalIcon )
    goto LABEL_120;
  v96 = 0;
  while ( 1 )
  {
    v97 = goalIcon->max_length;
    if ( v96 >= (int)v97 )
      break;
    if ( v96 >= v97 )
      goto LABEL_122;
    v98 = goalIcon->m_Items[v96];
    v99 = System_Int32__ToString((int32_t)&eventIda, 0LL);
    v100 = System_String__Concat_62450424((System_String_o *)StringLiteral_22721/*"race_status_goal_"*/, v99, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(v98, v100, 0LL);
    v101 = this->fields.goalIcon;
    if ( v101 )
    {
      if ( v96 >= v101->max_length )
        goto LABEL_122;
      v102 = (UnityEngine_Behaviour_o *)v101->m_Items[v96];
      if ( GroupIdData->fields._size <= v96 )
      {
        v103 = 0;
      }
      else
      {
        if ( !v56 )
          goto LABEL_120;
        Instance = System_Collections_Generic_List_bool___get_Item(
                     v56,
                     v96,
                     (const MethodInfo_36734F0 *)Method_System_Collections_Generic_List_bool__get_Item__);
        v103 = Instance & 1;
      }
      if ( (v103 & v64) != 0 )
      {
        Instance = (int64_t)System_Collections_Generic_List_EventRaceMaster_GroupRankData___get_Item(
                              &groupId,
                              GroupIdData,
                              v96,
                              (const MethodInfo_3759B84 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__);
        isGoal = groupId.fields.isGoal;
        if ( !v102 )
          goto LABEL_120;
      }
      else
      {
        isGoal = 0LL;
        if ( !v102 )
          goto LABEL_120;
      }
      UnityEngine_Behaviour__set_enabled(v102, isGoal, 0LL);
      goalIcon = this->fields.goalIcon;
      ++v96;
      if ( goalIcon )
        continue;
    }
    goto LABEL_120;
  }
  v104 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v104, 0.0, 0LL);
  v105 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this->fields.originPos = GameObjectExtensions__GetLocalPosition(v105, 0LL);
}


void __fastcall TitleInfoEventRaceRankComponent__UpdateDisp(
        TitleInfoEventRaceRankComponent_o *this,
        const MethodInfo *method)
{
  ;
}