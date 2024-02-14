void __fastcall TitleInfoEventRaceRankComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct TitleInfoEventRaceRankComponent_StaticFields *static_fields; // x9
  TitleInfoEventRaceRankComponent_c *v3; // x8

  if ( (byte_4218824 & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventRaceRankComponent_TypeInfo, v1);
    byte_4218824 = 1;
  }
  static_fields = TitleInfoEventRaceRankComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.x = 0x42A0000000000000LL;
  static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.z = 0.0;
  v3 = TitleInfoEventRaceRankComponent_TypeInfo;
  TitleInfoEventRaceRankComponent_TypeInfo->static_fields->ANIM_DURATION_FRAME_IN = 0.3;
  v3->static_fields->DISP_RACE_SEC_TIME = 600LL;
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
  UnityEngine_GameObject_o *gameObject; // x21
  TitleInfoEventRaceRankComponent_c *v8; // x8
  TweenWidth_o *v9; // x0
  TweenWidth_o *v10; // x21
  float32x2_t *static_fields; // x8
  float v12; // s1
  int endTime; // w9
  System_Int32_array **v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_4218822 & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventRaceRankComponent_TypeInfo, callback);
    sub_B0D8A4(&Method_UITweener_Begin_TweenPosition___, v5);
    sub_B0D8A4(&StringLiteral_6809/*"FrameInFinish"*/, v6);
    byte_4218822 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8 = TitleInfoEventRaceRankComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaceRankComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaceRankComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaceRankComponent_TypeInfo);
    v8 = TitleInfoEventRaceRankComponent_TypeInfo;
  }
  v9 = UITweener__Begin_TweenWidth_(
         gameObject,
         v8->static_fields->ANIM_DURATION_FRAME_IN,
         (const MethodInfo_205679C *)Method_UITweener_Begin_TweenPosition___);
  if ( !v9 )
    sub_B0D97C(0LL);
  v10 = v9;
  static_fields = (float32x2_t *)TitleInfoEventRaceRankComponent_TypeInfo->static_fields;
  v12 = *(float *)&this->fields.endTime + static_fields[1].n64_f32[0];
  *(float32x2_t *)&v9->fields.from = vadd_f32(
                                       *(float32x2_t *)&this->fields.originPos.fields.z,
                                       (float32x2_t)static_fields->n64_u64[0]);
  *(float *)&v9->fields.updateTable = v12;
  endTime = this->fields.endTime;
  *(_QWORD *)(&v9->fields.updateTable + 4) = *(_QWORD *)&this->fields.originPos.fields.z;
  HIDWORD(v9->fields.mWidget) = endTime;
  v9->fields.style = 2;
  v14 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v10->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v14;
  sub_B0D840((BattleServantConfConponent_o *)&v10->fields.eventReceiver, v14, v15, v16, v17, v18, v19, v20);
  v21 = (System_Int32_array **)StringLiteral_6809/*"FrameInFinish"*/;
  v10->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6809/*"FrameInFinish"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v10->fields.callWhenFinished, v21, v22, v23, v24, v25, v26, v27);
  this[1].klass = (TitleInfoEventRaceRankComponent_c *)callback;
  sub_B0D840((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)callback, v28, v29, v30, v31, v32, v33);
}


void __fastcall TitleInfoEventRaceRankComponent__FrameInFinish(
        TitleInfoEventRaceRankComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *v8; // x0
  System_Action_o *v9; // x19
  TitleInfoEventRaceRankComponent_c *klass; // t1

  klass = this[1].klass;
  v8 = (BattleServantConfConponent_o *)&this[1];
  v9 = (System_Action_o *)klass;
  v8->klass = 0LL;
  sub_B0D840(v8, 0LL, v2, v3, v4, v5, v6, v7);
  if ( klass )
    ActionExtensions__Call(v9, 0LL);
}


void __fastcall TitleInfoEventRaceRankComponent__FrameOut(
        TitleInfoEventRaceRankComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  TitleInfoEventRaceRankComponent_c *v6; // x8
  TweenWidth_o *v7; // x0
  int endTime; // w9
  TweenWidth_o *v9; // x20
  float32x2_t v10; // d0
  float v11; // s1
  struct TitleInfoEventRaceRankComponent_StaticFields *static_fields; // x8
  float32x2_t v13; // d2
  float z; // s3
  System_Int32_array **v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_4218823 & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventRaceRankComponent_TypeInfo, method);
    sub_B0D8A4(&Method_UITweener_Begin_TweenPosition___, v3);
    sub_B0D8A4(&StringLiteral_6811/*"FrameOutFinish"*/, v4);
    byte_4218823 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v6 = TitleInfoEventRaceRankComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaceRankComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaceRankComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaceRankComponent_TypeInfo);
    v6 = TitleInfoEventRaceRankComponent_TypeInfo;
  }
  v7 = UITweener__Begin_TweenWidth_(
         gameObject,
         v6->static_fields->ANIM_DURATION_FRAME_IN,
         (const MethodInfo_205679C *)Method_UITweener_Begin_TweenPosition___);
  if ( !v7 )
    sub_B0D97C(0LL);
  endTime = this->fields.endTime;
  v9 = v7;
  *(_QWORD *)&v7->fields.from = *(_QWORD *)&this->fields.originPos.fields.z;
  *(_DWORD *)&v7->fields.updateTable = endTime;
  v10.n64_u64[0] = *(unsigned __int64 *)&this->fields.originPos.fields.z;
  v11 = *(float *)&this->fields.endTime;
  static_fields = TitleInfoEventRaceRankComponent_TypeInfo->static_fields;
  v13.n64_u64[0] = *(unsigned __int64 *)&static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.x;
  z = static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.z;
  v7->fields.style = 2;
  *(float32x2_t *)(&v7->fields.updateTable + 4) = vadd_f32(v10, v13);
  *((float *)&v7->fields.mWidget + 1) = v11 + z;
  v15 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v9->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v15;
  sub_B0D840((BattleServantConfConponent_o *)&v9->fields.eventReceiver, v15, v16, v17, v18, v19, v20, v21);
  v22 = (System_Int32_array **)StringLiteral_6811/*"FrameOutFinish"*/;
  v9->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6811/*"FrameOutFinish"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v9->fields.callWhenFinished, v22, v23, v24, v25, v26, v27, v28);
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
  int64_t Instance; // x0
  EventRaceResultMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t v33; // x20
  int64_t RaceStartedAt; // x0
  int64_t v35; // x21
  TitleInfoEventRaceRankComponent_c *v36; // x0
  _BOOL4 v37; // w28
  QuestGroupMaster_o *v38; // x21
  System_Int32_array *QuestIdListByEventId; // x24
  __int64 v40; // x1
  __int64 v41; // x2
  System_Collections_Generic_List_int__o *v42; // x20
  __int64 v43; // x8
  unsigned __int64 v44; // x23
  int32_t *v45; // x25
  signed __int64 size; // x8
  unsigned __int64 v47; // x23
  int v48; // w25
  int32_t v49; // w21
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *GroupIdData; // x20
  __int64 v51; // x1
  __int64 v52; // x2
  System_Collections_Generic_List_bool__o *v53; // x21
  signed __int64 v54; // x8
  unsigned __int64 v55; // x26
  __int64 v56; // x27
  int32_t v57; // w24
  struct UISprite_array *carBackSpr; // x8
  __int64 v59; // x28
  int v60; // w24
  __int64 v61; // x27
  int max_length; // w9
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_array *v64; // x8
  struct UISprite_array *v65; // x8
  int v66; // w9
  UISprite_o *v67; // x22
  char *v68; // x8
  __int128 v69; // q0
  System_String_o *v70; // x0
  System_String_o *v71; // x23
  char v72; // w22
  struct UISprite_array *v73; // x8
  UnityEngine_GameObject_o *v74; // x0
  System_String_o *v75; // x0
  System_String_o *v76; // x23
  struct UISprite_array *v77; // x8
  struct UISprite_array *goalIcon; // x8
  __int64 v79; // x27
  unsigned __int64 v80; // x9
  unsigned __int64 v81; // x28
  UISprite_o *v82; // x22
  System_String_o *v83; // x0
  System_String_o *v84; // x23
  struct UISprite_array *v85; // x8
  struct UISprite_array *carIcon; // x8
  unsigned __int64 v87; // x26
  unsigned __int64 v88; // x9
  UISprite_o *v89; // x22
  System_String_o *v90; // x23
  System_String_o *v91; // x0
  System_String_o *v92; // x23
  __int64 v93; // x8
  __int64 v94; // x26
  __int64 v95; // x27
  int v96; // w9
  UISprite_o *v97; // x22
  System_String_o *v98; // x0
  System_String_o *v99; // x23
  __int64 v100; // x8
  UnityEngine_Behaviour_o *v101; // x22
  _BOOL4 v102; // w8
  bool v103; // w1
  UnityEngine_GameObject_o *v104; // x0
  UnityEngine_GameObject_o *v105; // x0
  __int64 v106; // x0
  _BOOL4 v107; // [xsp+4h] [xbp-7Ch]
  int v109; // [xsp+Ch] [xbp-74h] BYREF
  __int128 v110; // [xsp+10h] [xbp-70h] BYREF
  __int64 v111; // [xsp+20h] [xbp-60h]
  int32_t v112; // [xsp+2Ch] [xbp-54h] BYREF

  v112 = eventId;
  if ( (byte_4218821 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&CondType_TypeInfo, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRaceMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRaceResultMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v10);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_bool__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_bool___ctor__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Count__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_bool__get_Item__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_B0D8A4(&System_Collections_Generic_List_bool__TypeInfo, v22);
    sub_B0D8A4(&NetworkManager_TypeInfo, v23);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_B0D8A4(&TitleInfoEventRaceRankComponent_TypeInfo, v25);
    sub_B0D8A4(&StringLiteral_21740/*"race_status_goal_"*/, v26);
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, v27);
    sub_B0D8A4(&StringLiteral_21741/*"race_status_rank_"*/, v28);
    sub_B0D8A4(&StringLiteral_21739/*"race_status_"*/, v29);
    sub_B0D8A4(&StringLiteral_970/*"000"*/, v30);
    byte_4218821 = 1;
  }
  v110 = 0uLL;
  v111 = 0LL;
  v109 = 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_136;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_136;
  DataMasterBase_WarMaster__WarEntity__int___GetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
    eventId,
    (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_136;
  MasterData_WarQuestSelectionMaster = (EventRaceResultMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_136;
  v33 = Instance;
  RaceStartedAt = EventRaceResultMaster__getRaceStartedAt(MasterData_WarQuestSelectionMaster, eventId, termId, 0LL);
  if ( RaceStartedAt )
  {
    v35 = RaceStartedAt;
    v36 = TitleInfoEventRaceRankComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaceRankComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaceRankComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaceRankComponent_TypeInfo);
      v36 = TitleInfoEventRaceRankComponent_TypeInfo;
    }
    v37 = v33 - v35 > v36->static_fields->DISP_RACE_SEC_TIME;
  }
  else
  {
    v37 = 0;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_136;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_136;
  v38 = (QuestGroupMaster_o *)Instance;
  QuestIdListByEventId = QuestGroupMaster__GetQuestIdListByEventId((QuestGroupMaster_o *)Instance, eventId, 0LL);
  v42 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v40, v41);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !QuestIdListByEventId )
    goto LABEL_136;
  v43 = *(_QWORD *)&QuestIdListByEventId->max_length;
  if ( (int)v43 >= 1 )
  {
    v44 = 0LL;
    v45 = &QuestIdListByEventId->m_Items[1];
    do
    {
      if ( v44 >= (unsigned int)v43 )
      {
LABEL_138:
        v106 = sub_B0D9A8(Instance);
        sub_B0D948(v106, 0LL);
      }
      Instance = QuestGroupMaster__GetGroupId(v38, v45[v44], 5, 0LL);
      if ( (_DWORD)Instance == termId )
      {
        if ( v44 >= QuestIdListByEventId->max_length )
          goto LABEL_138;
        if ( !v42 )
          goto LABEL_136;
        System_Collections_Generic_List_int___Add(
          v42,
          v45[v44],
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v43) = QuestIdListByEventId->max_length;
    }
    while ( (__int64)++v44 < (int)v43 );
  }
  if ( !v42 )
    goto LABEL_136;
  LODWORD(size) = v42->fields._size;
  if ( (int)size < 1 )
  {
LABEL_37:
    v48 = 0;
  }
  else
  {
    v47 = 0LL;
    v48 = 1;
    while ( 1 )
    {
      if ( v47 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v49 = v42->fields._items->m_Items[v47 + 1];
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(1, v49, 0LL, 0, 0LL) )
        break;
      size = v42->fields._size;
      if ( (__int64)++v47 >= size )
        goto LABEL_37;
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0
    || (v107 = v37,
        GroupIdData = EventRaceMaster__getGroupIdData((EventRaceMaster_o *)Instance, eventId, termId, 0LL),
        v53 = (System_Collections_Generic_List_bool__o *)sub_B0D974(
                                                           System_Collections_Generic_List_bool__TypeInfo,
                                                           v51,
                                                           v52),
        System_Collections_Generic_List_bool____ctor(
          v53,
          (const MethodInfo_2F3865C *)Method_System_Collections_Generic_List_bool___ctor__),
        !GroupIdData) )
  {
LABEL_136:
    sub_B0D97C(Instance);
  }
  LODWORD(v54) = GroupIdData->fields._size;
  if ( (int)v54 >= 1 )
  {
    v55 = 0LL;
    v56 = 32LL;
    do
    {
      if ( v55 >= (unsigned int)v54 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v57 = *(_DWORD *)((char *)&GroupIdData->fields._items->obj.klass + v56);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = CondType__IsEventRaceGoalScriptPlayed(eventId, termId, v57, 0LL);
      if ( !v53 )
        goto LABEL_136;
      System_Collections_Generic_List_bool___Add(
        v53,
        Instance & 1,
        (const MethodInfo_2F393C0 *)Method_System_Collections_Generic_List_bool__Add__);
      v54 = GroupIdData->fields._size;
      ++v55;
      v56 += 24LL;
    }
    while ( (__int64)v55 < v54 );
  }
  carBackSpr = this->fields.carBackSpr;
  if ( !carBackSpr )
    goto LABEL_136;
  v59 = 0LL;
  v60 = v107 & v48;
  v61 = 0LL;
  while ( 1 )
  {
    max_length = carBackSpr->max_length;
    if ( (int)v61 >= max_length )
      break;
    if ( (unsigned int)v61 >= max_length )
      goto LABEL_138;
    Instance = (int64_t)carBackSpr->m_Items[v61];
    if ( !Instance )
      goto LABEL_136;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    GameObjectExtensions__SetLocalPosition(gameObject, *(UnityEngine_Vector3_o *)&this->fields.startPos.fields.z, 0LL);
    v64 = this->fields.carBackSpr;
    if ( !v64 )
      goto LABEL_136;
    if ( (unsigned int)v61 >= v64->max_length )
      goto LABEL_138;
    Instance = (int64_t)v64->m_Items[v61];
    if ( !Instance )
      goto LABEL_136;
    if ( (v60 & 1) == 0 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
      goto LABEL_89;
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
    v65 = this->fields.carBackSpr;
    if ( !v65 )
      goto LABEL_136;
    if ( (unsigned int)v61 >= v65->max_length )
      goto LABEL_138;
    v66 = GroupIdData->fields._size;
    v67 = v65->m_Items[v61];
    if ( v66 <= (int)v61 )
    {
      v75 = System_Int32__ToString((int32_t)&v112, 0LL);
      v76 = System_String__Concat_43852188(
              (System_String_o *)StringLiteral_21739/*"race_status_"*/,
              v75,
              (System_String_o *)StringLiteral_970/*"000"*/,
              0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      Instance = AtlasManager__SetEventUI(v67, v76, 0LL);
      if ( (Instance & 1) != 0 )
        goto LABEL_89;
    }
    else
    {
      if ( v66 <= (unsigned int)v61 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v68 = (char *)GroupIdData->fields._items + v59 * 24;
      v69 = *((_OWORD *)v68 + 2);
      v111 = *((_QWORD *)v68 + 6);
      v110 = v69;
      v70 = System_Int32__ToString((int32_t)&v110, 0LL);
      v71 = System_String__Concat_43849904((System_String_o *)StringLiteral_21739/*"race_status_"*/, v70, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      Instance = AtlasManager__SetEventUI(v67, v71, 0LL);
      v72 = Instance;
      if ( GroupIdData->fields._size <= (unsigned int)v61 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( GroupIdData->fields._items->m_Items[v59].fields.isGoal )
      {
        if ( !v53 )
          goto LABEL_136;
        if ( v53->fields._size <= (unsigned int)v61 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( v53->fields._items->m_Items[v61 + 4] )
        {
          v73 = this->fields.carBackSpr;
          if ( !v73 )
            goto LABEL_136;
          if ( (unsigned int)v61 >= v73->max_length )
            goto LABEL_138;
          Instance = (int64_t)v73->m_Items[v61];
          if ( !Instance )
            goto LABEL_136;
          v74 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          GameObjectExtensions__SetLocalPosition(v74, *(UnityEngine_Vector3_o *)&this->fields.goalPos.fields.z, 0LL);
        }
      }
      if ( (v72 & 1) != 0 )
        goto LABEL_89;
    }
    v77 = this->fields.carBackSpr;
    if ( !v77 )
      goto LABEL_136;
    if ( (unsigned int)v61 >= v77->max_length )
      goto LABEL_138;
    Instance = (int64_t)v77->m_Items[v61];
    if ( !Instance )
      goto LABEL_136;
    UISprite__set_atlas((UISprite_o *)Instance, 0LL, 0LL);
LABEL_89:
    carBackSpr = this->fields.carBackSpr;
    ++v61;
    ++v59;
    if ( !carBackSpr )
      goto LABEL_136;
  }
  goalIcon = this->fields.goalIcon;
  if ( !goalIcon )
    goto LABEL_136;
  v79 = 4LL;
  while ( 1 )
  {
    v80 = goalIcon->max_length;
    v81 = v79 - 4;
    if ( v79 - 4 >= (int)v80 )
      break;
    if ( v81 >= v80 )
      goto LABEL_138;
    v82 = (UISprite_o *)*((_QWORD *)&goalIcon->obj.klass + v79);
    v83 = System_Int32__ToString((int32_t)&v112, 0LL);
    v84 = System_String__Concat_43852188(
            (System_String_o *)StringLiteral_21739/*"race_status_"*/,
            v83,
            (System_String_o *)StringLiteral_970/*"000"*/,
            0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetEventUI(v82, v84, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v85 = this->fields.goalIcon;
      if ( !v85 )
        goto LABEL_136;
      if ( v81 >= v85->max_length )
        goto LABEL_138;
      Instance = *((_QWORD *)&v85->obj.klass + v79);
      if ( !Instance )
        goto LABEL_136;
      UISprite__set_atlas((UISprite_o *)Instance, 0LL, 0LL);
    }
    goalIcon = this->fields.goalIcon;
    ++v79;
    if ( !goalIcon )
      goto LABEL_136;
  }
  carIcon = this->fields.carIcon;
  if ( !carIcon )
    goto LABEL_136;
  v87 = 0LL;
  while ( 1 )
  {
    v88 = carIcon->max_length;
    if ( (__int64)v87 >= (int)v88 )
      break;
    v109 = v87 + 1;
    if ( v87 >= v88 )
      goto LABEL_138;
    v89 = carIcon->m_Items[v87];
    v90 = System_Int32__ToString((int32_t)&v112, 0LL);
    v91 = System_Int32__ToString((int32_t)&v109, 0LL);
    v92 = System_String__Concat_43853316(
            (System_String_o *)StringLiteral_21741/*"race_status_rank_"*/,
            v90,
            (System_String_o *)StringLiteral_15952/*"_"*/,
            v91,
            0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetEventUI(v89, v92, 0LL);
    carIcon = this->fields.carIcon;
    ++v87;
    if ( !carIcon )
      goto LABEL_136;
  }
  v93 = *(_QWORD *)&this->fields.startPos.fields.x;
  if ( !v93 )
    goto LABEL_136;
  v94 = 0LL;
  v95 = 40LL;
  while ( 1 )
  {
    v96 = *(_DWORD *)(v93 + 24);
    if ( (int)v94 >= v96 )
      break;
    if ( (unsigned int)v94 >= v96 )
      goto LABEL_138;
    v97 = *(UISprite_o **)(v93 + 8 * v94 + 32);
    v98 = System_Int32__ToString((int32_t)&v112, 0LL);
    v99 = System_String__Concat_43849904((System_String_o *)StringLiteral_21740/*"race_status_goal_"*/, v98, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetEventUI(v97, v99, 0LL);
    v100 = *(_QWORD *)&this->fields.startPos.fields.x;
    if ( !v100 )
      goto LABEL_136;
    if ( (unsigned int)v94 >= *(_DWORD *)(v100 + 24) )
      goto LABEL_138;
    v101 = *(UnityEngine_Behaviour_o **)(v100 + 8 * v94 + 32);
    if ( GroupIdData->fields._size <= (int)v94 )
    {
      v102 = 0;
    }
    else
    {
      if ( !v53 )
        goto LABEL_136;
      if ( v53->fields._size <= (unsigned int)v94 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v102 = v53->fields._items->m_Items[v94 + 4];
    }
    if ( (v102 & v60) != 0 )
    {
      if ( GroupIdData->fields._size <= (unsigned int)v94 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v103 = *((_BYTE *)&GroupIdData->fields._items->obj.klass + v95) != 0;
      if ( !v101 )
        goto LABEL_136;
    }
    else
    {
      v103 = 0;
      if ( !v101 )
        goto LABEL_136;
    }
    UnityEngine_Behaviour__set_enabled(v101, v103, 0LL);
    v93 = *(_QWORD *)&this->fields.startPos.fields.x;
    ++v94;
    v95 += 24LL;
    if ( !v93 )
      goto LABEL_136;
  }
  v104 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v104, 0.0, 0LL);
  v105 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&this->fields.originPos.fields.z = GameObjectExtensions__GetLocalPosition(v105, 0LL);
}


void __fastcall TitleInfoEventRaceRankComponent__UpdateDisp(
        TitleInfoEventRaceRankComponent_o *this,
        const MethodInfo *method)
{
  ;
}