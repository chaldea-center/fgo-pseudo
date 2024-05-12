void __fastcall TitleInfoEventRaceRankComponent___cctor(const MethodInfo *method)
{
  struct TitleInfoEventRaceRankComponent_StaticFields *static_fields; // x9
  TitleInfoEventRaceRankComponent_c *v2; // x8

  if ( (byte_438F751 & 1) == 0 )
  {
    sub_B775C4(&TitleInfoEventRaceRankComponent_TypeInfo);
    byte_438F751 = 1;
  }
  static_fields = TitleInfoEventRaceRankComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.x = 0x42A0000000000000LL;
  static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.z = 0.0;
  v2 = TitleInfoEventRaceRankComponent_TypeInfo;
  TitleInfoEventRaceRankComponent_TypeInfo->static_fields->ANIM_DURATION_FRAME_IN = 0.3;
  v2->static_fields->DISP_RACE_SEC_TIME = 600LL;
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
  UnityEngine_GameObject_o *gameObject; // x21
  TitleInfoEventRaceRankComponent_c *v6; // x8
  TweenWidth_o *v7; // x0
  __int64 v8; // x1
  TweenWidth_o *v9; // x21
  float32x2_t *static_fields; // x8
  float v11; // s1
  int endTime; // w9
  System_Int32_array **v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_438F74F & 1) == 0 )
  {
    sub_B775C4(&TitleInfoEventRaceRankComponent_TypeInfo);
    sub_B775C4(&Method_UITweener_Begin_TweenPosition___);
    sub_B775C4(&StringLiteral_6941/*"FrameInFinish"*/);
    byte_438F74F = 1;
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
         (const MethodInfo_1E05754 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v7 )
    sub_B7769C(0LL, v8);
  v9 = v7;
  static_fields = (float32x2_t *)TitleInfoEventRaceRankComponent_TypeInfo->static_fields;
  v11 = *(float *)&this->fields.endTime + static_fields[1].n64_f32[0];
  *(float32x2_t *)&v7->fields.from = vadd_f32(
                                       *(float32x2_t *)&this->fields.originPos.fields.z,
                                       (float32x2_t)static_fields->n64_u64[0]);
  *(float *)&v7->fields.updateTable = v11;
  endTime = this->fields.endTime;
  *(_QWORD *)(&v7->fields.updateTable + 4) = *(_QWORD *)&this->fields.originPos.fields.z;
  HIDWORD(v7->fields.mWidget) = endTime;
  v7->fields.style = 2;
  v13 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v9->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v13;
  sub_B77560((BattleServantConfConponent_o *)&v9->fields.eventReceiver, v13, v14, v15, v16, v17, v18, v19);
  v20 = (System_Int32_array **)StringLiteral_6941/*"FrameInFinish"*/;
  v9->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6941/*"FrameInFinish"*/;
  sub_B77560((BattleServantConfConponent_o *)&v9->fields.callWhenFinished, v20, v21, v22, v23, v24, v25, v26);
  this[1].klass = (TitleInfoEventRaceRankComponent_c *)callback;
  sub_B77560((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)callback, v27, v28, v29, v30, v31, v32);
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
  sub_B77560(v8, 0LL, v2, v3, v4, v5, v6, v7);
  if ( klass )
    ActionExtensions__Call(v9, 0LL);
}


void __fastcall TitleInfoEventRaceRankComponent__FrameOut(
        TitleInfoEventRaceRankComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  TitleInfoEventRaceRankComponent_c *v4; // x8
  TweenWidth_o *v5; // x0
  __int64 v6; // x1
  int endTime; // w9
  TweenWidth_o *v8; // x20
  float32x2_t v9; // d0
  float v10; // s1
  struct TitleInfoEventRaceRankComponent_StaticFields *static_fields; // x8
  float32x2_t v12; // d2
  float z; // s3
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

  if ( (byte_438F750 & 1) == 0 )
  {
    sub_B775C4(&TitleInfoEventRaceRankComponent_TypeInfo);
    sub_B775C4(&Method_UITweener_Begin_TweenPosition___);
    sub_B775C4(&StringLiteral_6943/*"FrameOutFinish"*/);
    byte_438F750 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v4 = TitleInfoEventRaceRankComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaceRankComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaceRankComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaceRankComponent_TypeInfo);
    v4 = TitleInfoEventRaceRankComponent_TypeInfo;
  }
  v5 = UITweener__Begin_TweenWidth_(
         gameObject,
         v4->static_fields->ANIM_DURATION_FRAME_IN,
         (const MethodInfo_1E05754 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v5 )
    sub_B7769C(0LL, v6);
  endTime = this->fields.endTime;
  v8 = v5;
  *(_QWORD *)&v5->fields.from = *(_QWORD *)&this->fields.originPos.fields.z;
  *(_DWORD *)&v5->fields.updateTable = endTime;
  v9.n64_u64[0] = *(unsigned __int64 *)&this->fields.originPos.fields.z;
  v10 = *(float *)&this->fields.endTime;
  static_fields = TitleInfoEventRaceRankComponent_TypeInfo->static_fields;
  v12.n64_u64[0] = *(unsigned __int64 *)&static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.x;
  z = static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.z;
  v5->fields.style = 2;
  *(float32x2_t *)(&v5->fields.updateTable + 4) = vadd_f32(v9, v12);
  *((float *)&v5->fields.mWidget + 1) = v10 + z;
  v14 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v14;
  sub_B77560((BattleServantConfConponent_o *)&v8->fields.eventReceiver, v14, v15, v16, v17, v18, v19, v20);
  v21 = (System_Int32_array **)StringLiteral_6943/*"FrameOutFinish"*/;
  v8->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6943/*"FrameOutFinish"*/;
  sub_B77560((BattleServantConfConponent_o *)&v8->fields.callWhenFinished, v21, v22, v23, v24, v25, v26, v27);
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


void __fastcall TitleInfoEventRaceRankComponent__Setup(
        TitleInfoEventRaceRankComponent_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  _BOOL8 v7; // x1
  EventRaceResultMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t v9; // x20
  int64_t RaceStartedAt; // x0
  int64_t v11; // x21
  TitleInfoEventRaceRankComponent_c *v12; // x0
  _BOOL4 v13; // w28
  QuestGroupMaster_o *v14; // x21
  System_Int32_array *QuestIdListByEventId; // x24
  System_Collections_Generic_List_int__o *v16; // x20
  __int64 v17; // x8
  unsigned __int64 v18; // x23
  int32_t *v19; // x25
  signed __int64 size; // x8
  unsigned __int64 v21; // x23
  int v22; // w25
  int32_t v23; // w21
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *GroupIdData; // x20
  System_Collections_Generic_List_bool__o *v25; // x21
  signed __int64 v26; // x8
  unsigned __int64 v27; // x26
  __int64 v28; // x27
  int32_t v29; // w24
  struct UISprite_array *carBackSpr; // x8
  __int64 v31; // x28
  int v32; // w24
  __int64 v33; // x27
  int max_length; // w9
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_array *v36; // x8
  struct UISprite_array *v37; // x8
  int v38; // w9
  UISprite_o *v39; // x22
  char *v40; // x8
  __int128 v41; // q0
  System_String_o *v42; // x0
  System_String_o *v43; // x23
  char v44; // w22
  struct UISprite_array *v45; // x8
  UnityEngine_GameObject_o *v46; // x0
  System_String_o *v47; // x0
  System_String_o *v48; // x23
  struct UISprite_array *v49; // x8
  struct UISprite_array *goalIcon; // x8
  __int64 v51; // x27
  unsigned __int64 v52; // x9
  unsigned __int64 v53; // x28
  UISprite_o *v54; // x22
  System_String_o *v55; // x0
  System_String_o *v56; // x23
  struct UISprite_array *v57; // x8
  struct UISprite_array *carIcon; // x8
  unsigned __int64 v59; // x26
  unsigned __int64 v60; // x9
  UISprite_o *v61; // x22
  System_String_o *v62; // x23
  System_String_o *v63; // x0
  System_String_o *v64; // x23
  __int64 v65; // x8
  __int64 v66; // x26
  __int64 v67; // x27
  int v68; // w9
  UISprite_o *v69; // x22
  System_String_o *v70; // x0
  System_String_o *v71; // x23
  __int64 v72; // x8
  UnityEngine_Behaviour_o *v73; // x22
  _BOOL4 v74; // w8
  UnityEngine_GameObject_o *v75; // x0
  UnityEngine_GameObject_o *v76; // x0
  __int64 v77; // x0
  _BOOL4 v78; // [xsp+4h] [xbp-7Ch]
  int v80; // [xsp+Ch] [xbp-74h] BYREF
  __int128 v81; // [xsp+10h] [xbp-70h] BYREF
  __int64 v82; // [xsp+20h] [xbp-60h]
  int32_t v83; // [xsp+2Ch] [xbp-54h] BYREF

  v83 = eventId;
  if ( (byte_438F74E & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B775C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_bool__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_bool___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_bool__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_bool__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&TitleInfoEventRaceRankComponent_TypeInfo);
    sub_B775C4(&StringLiteral_22129/*"race_status_goal_"*/);
    sub_B775C4(&StringLiteral_16197/*"_"*/);
    sub_B775C4(&StringLiteral_22130/*"race_status_rank_"*/);
    sub_B775C4(&StringLiteral_22128/*"race_status_"*/);
    sub_B775C4(&StringLiteral_990/*"000"*/);
    byte_438F74E = 1;
  }
  v81 = 0uLL;
  v82 = 0LL;
  v80 = 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_136;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_136;
  DataMasterBase_WarMaster__WarEntity__int___GetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
    eventId,
    (const MethodInfo_21FB894 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_136;
  MasterData_WarQuestSelectionMaster = (EventRaceResultMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_136;
  v9 = Instance;
  RaceStartedAt = EventRaceResultMaster__getRaceStartedAt(MasterData_WarQuestSelectionMaster, eventId, termId, 0LL);
  if ( RaceStartedAt )
  {
    v11 = RaceStartedAt;
    v12 = TitleInfoEventRaceRankComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaceRankComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaceRankComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaceRankComponent_TypeInfo);
      v12 = TitleInfoEventRaceRankComponent_TypeInfo;
    }
    v13 = v9 - v11 > v12->static_fields->DISP_RACE_SEC_TIME;
  }
  else
  {
    v13 = 0;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_136;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_136;
  v14 = (QuestGroupMaster_o *)Instance;
  QuestIdListByEventId = QuestGroupMaster__GetQuestIdListByEventId((QuestGroupMaster_o *)Instance, eventId, 0LL);
  v16 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  if ( !QuestIdListByEventId )
    goto LABEL_136;
  v17 = *(_QWORD *)&QuestIdListByEventId->max_length;
  if ( (int)v17 >= 1 )
  {
    v18 = 0LL;
    v19 = &QuestIdListByEventId->m_Items[1];
    do
    {
      if ( v18 >= (unsigned int)v17 )
      {
LABEL_138:
        v77 = sub_B776C8(Instance);
        sub_B77668(v77, 0LL);
      }
      Instance = QuestGroupMaster__GetGroupId(v14, v19[v18], 5, 0LL);
      if ( (_DWORD)Instance == termId )
      {
        if ( v18 >= QuestIdListByEventId->max_length )
          goto LABEL_138;
        if ( !v16 )
          goto LABEL_136;
        System_Collections_Generic_List_int___Add(
          v16,
          v19[v18],
          (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v17) = QuestIdListByEventId->max_length;
    }
    while ( (__int64)++v18 < (int)v17 );
  }
  if ( !v16 )
    goto LABEL_136;
  LODWORD(size) = v16->fields._size;
  if ( (int)size < 1 )
  {
LABEL_37:
    v22 = 0;
  }
  else
  {
    v21 = 0LL;
    v22 = 1;
    while ( 1 )
    {
      if ( v21 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v23 = v16->fields._items->m_Items[v21 + 1];
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(1, v23, 0LL, 0, 0LL) )
        break;
      size = v16->fields._size;
      if ( (__int64)++v21 >= size )
        goto LABEL_37;
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0
    || (v78 = v13,
        GroupIdData = EventRaceMaster__getGroupIdData((EventRaceMaster_o *)Instance, eventId, termId, 0LL),
        v25 = (System_Collections_Generic_List_bool__o *)sub_B77694(System_Collections_Generic_List_bool__TypeInfo),
        System_Collections_Generic_List_bool____ctor(
          v25,
          (const MethodInfo_3082660 *)Method_System_Collections_Generic_List_bool___ctor__),
        !GroupIdData) )
  {
LABEL_136:
    sub_B7769C(Instance, v7);
  }
  LODWORD(v26) = GroupIdData->fields._size;
  if ( (int)v26 >= 1 )
  {
    v27 = 0LL;
    v28 = 32LL;
    do
    {
      if ( v27 >= (unsigned int)v26 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v29 = *(_DWORD *)((char *)&GroupIdData->fields._items->obj.klass + v28);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = CondType__IsEventRaceGoalScriptPlayed(eventId, termId, v29, 0LL);
      if ( !v25 )
        goto LABEL_136;
      System_Collections_Generic_List_bool___Add(
        v25,
        Instance & 1,
        (const MethodInfo_30833C4 *)Method_System_Collections_Generic_List_bool__Add__);
      v26 = GroupIdData->fields._size;
      ++v27;
      v28 += 24LL;
    }
    while ( (__int64)v27 < v26 );
  }
  carBackSpr = this->fields.carBackSpr;
  if ( !carBackSpr )
    goto LABEL_136;
  v31 = 0LL;
  v32 = v78 & v22;
  v33 = 0LL;
  while ( 1 )
  {
    max_length = carBackSpr->max_length;
    if ( (int)v33 >= max_length )
      break;
    if ( (unsigned int)v33 >= max_length )
      goto LABEL_138;
    Instance = (int64_t)carBackSpr->m_Items[v33];
    if ( !Instance )
      goto LABEL_136;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    GameObjectExtensions__SetLocalPosition(gameObject, *(UnityEngine_Vector3_o *)&this->fields.startPos.fields.z, 0LL);
    v36 = this->fields.carBackSpr;
    if ( !v36 )
      goto LABEL_136;
    if ( (unsigned int)v33 >= v36->max_length )
      goto LABEL_138;
    Instance = (int64_t)v36->m_Items[v33];
    if ( !Instance )
      goto LABEL_136;
    if ( (v32 & 1) == 0 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
      goto LABEL_89;
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
    v37 = this->fields.carBackSpr;
    if ( !v37 )
      goto LABEL_136;
    if ( (unsigned int)v33 >= v37->max_length )
      goto LABEL_138;
    v38 = GroupIdData->fields._size;
    v39 = v37->m_Items[v33];
    if ( v38 <= (int)v33 )
    {
      v47 = System_Int32__ToString((int32_t)&v83, 0LL);
      v48 = System_String__Concat_44904220(
              (System_String_o *)StringLiteral_22128/*"race_status_"*/,
              v47,
              (System_String_o *)StringLiteral_990/*"000"*/,
              0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      Instance = AtlasManager__SetEventUI(v39, v48, 0LL);
      if ( (Instance & 1) != 0 )
        goto LABEL_89;
    }
    else
    {
      if ( v38 <= (unsigned int)v33 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v40 = (char *)GroupIdData->fields._items + v31 * 24;
      v41 = *((_OWORD *)v40 + 2);
      v82 = *((_QWORD *)v40 + 6);
      v81 = v41;
      v42 = System_Int32__ToString((int32_t)&v81, 0LL);
      v43 = System_String__Concat_44901936((System_String_o *)StringLiteral_22128/*"race_status_"*/, v42, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      Instance = AtlasManager__SetEventUI(v39, v43, 0LL);
      v44 = Instance;
      if ( GroupIdData->fields._size <= (unsigned int)v33 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      if ( GroupIdData->fields._items->m_Items[v31].fields.isGoal )
      {
        if ( !v25 )
          goto LABEL_136;
        if ( v25->fields._size <= (unsigned int)v33 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        if ( v25->fields._items->m_Items[v33 + 4] )
        {
          v45 = this->fields.carBackSpr;
          if ( !v45 )
            goto LABEL_136;
          if ( (unsigned int)v33 >= v45->max_length )
            goto LABEL_138;
          Instance = (int64_t)v45->m_Items[v33];
          if ( !Instance )
            goto LABEL_136;
          v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          GameObjectExtensions__SetLocalPosition(v46, *(UnityEngine_Vector3_o *)&this->fields.goalPos.fields.z, 0LL);
        }
      }
      if ( (v44 & 1) != 0 )
        goto LABEL_89;
    }
    v49 = this->fields.carBackSpr;
    if ( !v49 )
      goto LABEL_136;
    if ( (unsigned int)v33 >= v49->max_length )
      goto LABEL_138;
    Instance = (int64_t)v49->m_Items[v33];
    if ( !Instance )
      goto LABEL_136;
    UISprite__set_atlas((UISprite_o *)Instance, 0LL, 0LL);
LABEL_89:
    carBackSpr = this->fields.carBackSpr;
    ++v33;
    ++v31;
    if ( !carBackSpr )
      goto LABEL_136;
  }
  goalIcon = this->fields.goalIcon;
  if ( !goalIcon )
    goto LABEL_136;
  v51 = 4LL;
  while ( 1 )
  {
    v52 = goalIcon->max_length;
    v53 = v51 - 4;
    if ( v51 - 4 >= (int)v52 )
      break;
    if ( v53 >= v52 )
      goto LABEL_138;
    v54 = (UISprite_o *)*((_QWORD *)&goalIcon->obj.klass + v51);
    v55 = System_Int32__ToString((int32_t)&v83, 0LL);
    v56 = System_String__Concat_44904220(
            (System_String_o *)StringLiteral_22128/*"race_status_"*/,
            v55,
            (System_String_o *)StringLiteral_990/*"000"*/,
            0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetEventUI(v54, v56, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v57 = this->fields.goalIcon;
      if ( !v57 )
        goto LABEL_136;
      if ( v53 >= v57->max_length )
        goto LABEL_138;
      Instance = *((_QWORD *)&v57->obj.klass + v51);
      if ( !Instance )
        goto LABEL_136;
      UISprite__set_atlas((UISprite_o *)Instance, 0LL, 0LL);
    }
    goalIcon = this->fields.goalIcon;
    ++v51;
    if ( !goalIcon )
      goto LABEL_136;
  }
  carIcon = this->fields.carIcon;
  if ( !carIcon )
    goto LABEL_136;
  v59 = 0LL;
  while ( 1 )
  {
    v60 = carIcon->max_length;
    if ( (__int64)v59 >= (int)v60 )
      break;
    v80 = v59 + 1;
    if ( v59 >= v60 )
      goto LABEL_138;
    v61 = carIcon->m_Items[v59];
    v62 = System_Int32__ToString((int32_t)&v83, 0LL);
    v63 = System_Int32__ToString((int32_t)&v80, 0LL);
    v64 = System_String__Concat_44905348(
            (System_String_o *)StringLiteral_22130/*"race_status_rank_"*/,
            v62,
            (System_String_o *)StringLiteral_16197/*"_"*/,
            v63,
            0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetEventUI(v61, v64, 0LL);
    carIcon = this->fields.carIcon;
    ++v59;
    if ( !carIcon )
      goto LABEL_136;
  }
  v65 = *(_QWORD *)&this->fields.startPos.fields.x;
  if ( !v65 )
    goto LABEL_136;
  v66 = 0LL;
  v67 = 40LL;
  while ( 1 )
  {
    v68 = *(_DWORD *)(v65 + 24);
    if ( (int)v66 >= v68 )
      break;
    if ( (unsigned int)v66 >= v68 )
      goto LABEL_138;
    v69 = *(UISprite_o **)(v65 + 8 * v66 + 32);
    v70 = System_Int32__ToString((int32_t)&v83, 0LL);
    v71 = System_String__Concat_44901936((System_String_o *)StringLiteral_22129/*"race_status_goal_"*/, v70, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetEventUI(v69, v71, 0LL);
    v72 = *(_QWORD *)&this->fields.startPos.fields.x;
    if ( !v72 )
      goto LABEL_136;
    if ( (unsigned int)v66 >= *(_DWORD *)(v72 + 24) )
      goto LABEL_138;
    v73 = *(UnityEngine_Behaviour_o **)(v72 + 8 * v66 + 32);
    if ( GroupIdData->fields._size <= (int)v66 )
    {
      v74 = 0;
    }
    else
    {
      if ( !v25 )
        goto LABEL_136;
      if ( v25->fields._size <= (unsigned int)v66 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v74 = v25->fields._items->m_Items[v66 + 4];
    }
    if ( (v74 & v32) != 0 )
    {
      if ( GroupIdData->fields._size <= (unsigned int)v66 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v7 = *((_BYTE *)&GroupIdData->fields._items->obj.klass + v67) != 0;
      if ( !v73 )
        goto LABEL_136;
    }
    else
    {
      v7 = 0LL;
      if ( !v73 )
        goto LABEL_136;
    }
    UnityEngine_Behaviour__set_enabled(v73, v7, 0LL);
    v65 = *(_QWORD *)&this->fields.startPos.fields.x;
    ++v66;
    v67 += 24LL;
    if ( !v65 )
      goto LABEL_136;
  }
  v75 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v75, 0.0, 0LL);
  v76 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&this->fields.originPos.fields.z = GameObjectExtensions__GetLocalPosition(v76, 0LL);
}


void __fastcall TitleInfoEventRaceRankComponent__UpdateDisp(
        TitleInfoEventRaceRankComponent_o *this,
        const MethodInfo *method)
{
  ;
}