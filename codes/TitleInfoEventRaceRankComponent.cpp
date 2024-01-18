void __fastcall TitleInfoEventRaceRankComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct TitleInfoEventRaceRankComponent_StaticFields *static_fields; // x9
  TitleInfoEventRaceRankComponent_c *v3; // x8

  if ( (byte_418BA1C & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoEventRaceRankComponent_TypeInfo, v1);
    byte_418BA1C = 1;
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
  __int64 v10; // x1
  TweenWidth_o *v11; // x21
  float32x2_t *static_fields; // x8
  float v13; // s1
  int endTime; // w9
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
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_418BA1A & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoEventRaceRankComponent_TypeInfo, callback);
    sub_B2C35C(&Method_UITweener_Begin_TweenPosition___, v5);
    sub_B2C35C(&StringLiteral_6790/*"FrameInFinish"*/, v6);
    byte_418BA1A = 1;
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
         (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v9 )
    sub_B2C434(0LL, v10);
  v11 = v9;
  static_fields = (float32x2_t *)TitleInfoEventRaceRankComponent_TypeInfo->static_fields;
  v13 = *(float *)&this->fields.endTime + static_fields[1].n64_f32[0];
  *(float32x2_t *)&v9->fields.from = vadd_f32(
                                       *(float32x2_t *)&this->fields.originPos.fields.z,
                                       (float32x2_t)static_fields->n64_u64[0]);
  *(float *)&v9->fields.updateTable = v13;
  endTime = this->fields.endTime;
  *(_QWORD *)(&v9->fields.updateTable + 4) = *(_QWORD *)&this->fields.originPos.fields.z;
  HIDWORD(v9->fields.mWidget) = endTime;
  v9->fields.style = 2;
  v15 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v11->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v15;
  sub_B2C2F8((BattleServantConfConponent_o *)&v11->fields.eventReceiver, v15, v16, v17, v18, v19, v20, v21);
  v22 = (System_Int32_array **)StringLiteral_6790/*"FrameInFinish"*/;
  v11->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6790/*"FrameInFinish"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v11->fields.callWhenFinished, v22, v23, v24, v25, v26, v27, v28);
  this[1].klass = (TitleInfoEventRaceRankComponent_c *)callback;
  sub_B2C2F8((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)callback, v29, v30, v31, v32, v33, v34);
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
  sub_B2C2F8(v8, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v8; // x1
  int endTime; // w9
  TweenWidth_o *v10; // x20
  float32x2_t v11; // d0
  float v12; // s1
  struct TitleInfoEventRaceRankComponent_StaticFields *static_fields; // x8
  float32x2_t v14; // d2
  float z; // s3
  System_Int32_array **v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_418BA1B & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoEventRaceRankComponent_TypeInfo, method);
    sub_B2C35C(&Method_UITweener_Begin_TweenPosition___, v3);
    sub_B2C35C(&StringLiteral_6792/*"FrameOutFinish"*/, v4);
    byte_418BA1B = 1;
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
         (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v7 )
    sub_B2C434(0LL, v8);
  endTime = this->fields.endTime;
  v10 = v7;
  *(_QWORD *)&v7->fields.from = *(_QWORD *)&this->fields.originPos.fields.z;
  *(_DWORD *)&v7->fields.updateTable = endTime;
  v11.n64_u64[0] = *(unsigned __int64 *)&this->fields.originPos.fields.z;
  v12 = *(float *)&this->fields.endTime;
  static_fields = TitleInfoEventRaceRankComponent_TypeInfo->static_fields;
  v14.n64_u64[0] = *(unsigned __int64 *)&static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.x;
  z = static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.z;
  v7->fields.style = 2;
  *(float32x2_t *)(&v7->fields.updateTable + 4) = vadd_f32(v11, v14);
  *((float *)&v7->fields.mWidget + 1) = v12 + z;
  v16 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v10->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v16;
  sub_B2C2F8((BattleServantConfConponent_o *)&v10->fields.eventReceiver, v16, v17, v18, v19, v20, v21, v22);
  v23 = (System_Int32_array **)StringLiteral_6792/*"FrameOutFinish"*/;
  v10->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6792/*"FrameOutFinish"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v10->fields.callWhenFinished, v23, v24, v25, v26, v27, v28, v29);
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
  _BOOL8 v32; // x1
  EventRaceResultMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t v34; // x20
  int64_t RaceStartedAt; // x0
  int64_t v36; // x21
  TitleInfoEventRaceRankComponent_c *v37; // x0
  _BOOL4 v38; // w28
  QuestGroupMaster_o *v39; // x21
  System_Int32_array *QuestIdListByEventId; // x24
  System_Collections_Generic_List_int__o *v41; // x20
  __int64 v42; // x8
  unsigned __int64 v43; // x23
  int32_t *v44; // x25
  signed __int64 size; // x8
  unsigned __int64 v46; // x23
  int v47; // w25
  int32_t v48; // w21
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *GroupIdData; // x20
  System_Collections_Generic_List_bool__o *v50; // x21
  signed __int64 v51; // x8
  unsigned __int64 v52; // x26
  __int64 v53; // x27
  int32_t v54; // w24
  struct UISprite_array *carBackSpr; // x8
  __int64 v56; // x28
  int v57; // w24
  __int64 v58; // x27
  int max_length; // w9
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_array *v61; // x8
  struct UISprite_array *v62; // x8
  int v63; // w9
  UISprite_o *v64; // x22
  char *v65; // x8
  __int128 v66; // q0
  System_String_o *v67; // x0
  System_String_o *v68; // x23
  char v69; // w22
  struct UISprite_array *v70; // x8
  UnityEngine_GameObject_o *v71; // x0
  System_String_o *v72; // x0
  System_String_o *v73; // x23
  struct UISprite_array *v74; // x8
  struct UISprite_array *goalIcon; // x8
  __int64 v76; // x27
  unsigned __int64 v77; // x9
  unsigned __int64 v78; // x28
  UISprite_o *v79; // x22
  System_String_o *v80; // x0
  System_String_o *v81; // x23
  struct UISprite_array *v82; // x8
  struct UISprite_array *carIcon; // x8
  unsigned __int64 v84; // x26
  unsigned __int64 v85; // x9
  UISprite_o *v86; // x22
  System_String_o *v87; // x23
  System_String_o *v88; // x0
  System_String_o *v89; // x23
  __int64 v90; // x8
  __int64 v91; // x26
  __int64 v92; // x27
  int v93; // w9
  UISprite_o *v94; // x22
  System_String_o *v95; // x0
  System_String_o *v96; // x23
  __int64 v97; // x8
  UnityEngine_Behaviour_o *v98; // x22
  _BOOL4 v99; // w8
  UnityEngine_GameObject_o *v100; // x0
  UnityEngine_GameObject_o *v101; // x0
  __int64 v102; // x0
  _BOOL4 v103; // [xsp+4h] [xbp-7Ch]
  int v105; // [xsp+Ch] [xbp-74h] BYREF
  __int128 v106; // [xsp+10h] [xbp-70h] BYREF
  __int64 v107; // [xsp+20h] [xbp-60h]
  int32_t v108; // [xsp+2Ch] [xbp-54h] BYREF

  v108 = eventId;
  if ( (byte_418BA19 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&CondType_TypeInfo, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaceMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaceResultMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, v10);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_bool__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_bool___ctor___67301528, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Count__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_bool__get_Item__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_B2C35C(&System_Collections_Generic_List_bool__TypeInfo, v22);
    sub_B2C35C(&NetworkManager_TypeInfo, v23);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_B2C35C(&TitleInfoEventRaceRankComponent_TypeInfo, v25);
    sub_B2C35C(&StringLiteral_21670/*"race_status_goal_"*/, v26);
    sub_B2C35C(&StringLiteral_15905/*"_"*/, v27);
    sub_B2C35C(&StringLiteral_21671/*"race_status_rank_"*/, v28);
    sub_B2C35C(&StringLiteral_21669/*"race_status_"*/, v29);
    sub_B2C35C(&StringLiteral_963/*"000"*/, v30);
    byte_418BA19 = 1;
  }
  v106 = 0uLL;
  v107 = 0LL;
  v105 = 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_136;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_136;
  DataMasterBase_WarMaster__WarEntity__int___GetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
    eventId,
    (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_136;
  MasterData_WarQuestSelectionMaster = (EventRaceResultMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_136;
  v34 = Instance;
  RaceStartedAt = EventRaceResultMaster__getRaceStartedAt(MasterData_WarQuestSelectionMaster, eventId, termId, 0LL);
  if ( RaceStartedAt )
  {
    v36 = RaceStartedAt;
    v37 = TitleInfoEventRaceRankComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaceRankComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaceRankComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaceRankComponent_TypeInfo);
      v37 = TitleInfoEventRaceRankComponent_TypeInfo;
    }
    v38 = v34 - v36 > v37->static_fields->DISP_RACE_SEC_TIME;
  }
  else
  {
    v38 = 0;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_136;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_136;
  v39 = (QuestGroupMaster_o *)Instance;
  QuestIdListByEventId = QuestGroupMaster__GetQuestIdListByEventId((QuestGroupMaster_o *)Instance, eventId, 0LL);
  v41 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v41,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !QuestIdListByEventId )
    goto LABEL_136;
  v42 = *(_QWORD *)&QuestIdListByEventId->max_length;
  if ( (int)v42 >= 1 )
  {
    v43 = 0LL;
    v44 = &QuestIdListByEventId->m_Items[1];
    do
    {
      if ( v43 >= (unsigned int)v42 )
      {
LABEL_138:
        v102 = sub_B2C460(Instance);
        sub_B2C400(v102, 0LL);
      }
      Instance = QuestGroupMaster__GetGroupId(v39, v44[v43], 5, 0LL);
      if ( (_DWORD)Instance == termId )
      {
        if ( v43 >= QuestIdListByEventId->max_length )
          goto LABEL_138;
        if ( !v41 )
          goto LABEL_136;
        System_Collections_Generic_List_int___Add(
          v41,
          v44[v43],
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v42) = QuestIdListByEventId->max_length;
    }
    while ( (__int64)++v43 < (int)v42 );
  }
  if ( !v41 )
    goto LABEL_136;
  LODWORD(size) = v41->fields._size;
  if ( (int)size < 1 )
  {
LABEL_37:
    v47 = 0;
  }
  else
  {
    v46 = 0LL;
    v47 = 1;
    while ( 1 )
    {
      if ( v46 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v48 = v41->fields._items->m_Items[v46 + 1];
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(1, v48, 0LL, 0, 0LL) )
        break;
      size = v41->fields._size;
      if ( (__int64)++v46 >= size )
        goto LABEL_37;
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0
    || (v103 = v38,
        GroupIdData = EventRaceMaster__getGroupIdData((EventRaceMaster_o *)Instance, eventId, termId, 0LL),
        v50 = (System_Collections_Generic_List_bool__o *)sub_B2C42C(System_Collections_Generic_List_bool__TypeInfo),
        System_Collections_Generic_List_bool____ctor(
          v50,
          (const MethodInfo_2F2DCD0 *)Method_System_Collections_Generic_List_bool___ctor___67301528),
        !GroupIdData) )
  {
LABEL_136:
    sub_B2C434(Instance, v32);
  }
  LODWORD(v51) = GroupIdData->fields._size;
  if ( (int)v51 >= 1 )
  {
    v52 = 0LL;
    v53 = 32LL;
    do
    {
      if ( v52 >= (unsigned int)v51 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v54 = *(_DWORD *)((char *)&GroupIdData->fields._items->obj.klass + v53);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = CondType__IsEventRaceGoalScriptPlayed(eventId, termId, v54, 0LL);
      if ( !v50 )
        goto LABEL_136;
      System_Collections_Generic_List_bool___Add(
        v50,
        Instance & 1,
        (const MethodInfo_2F2EA34 *)Method_System_Collections_Generic_List_bool__Add__);
      v51 = GroupIdData->fields._size;
      ++v52;
      v53 += 24LL;
    }
    while ( (__int64)v52 < v51 );
  }
  carBackSpr = this->fields.carBackSpr;
  if ( !carBackSpr )
    goto LABEL_136;
  v56 = 0LL;
  v57 = v103 & v47;
  v58 = 0LL;
  while ( 1 )
  {
    max_length = carBackSpr->max_length;
    if ( (int)v58 >= max_length )
      break;
    if ( (unsigned int)v58 >= max_length )
      goto LABEL_138;
    Instance = (int64_t)carBackSpr->m_Items[v58];
    if ( !Instance )
      goto LABEL_136;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    GameObjectExtensions__SetLocalPosition(gameObject, *(UnityEngine_Vector3_o *)&this->fields.startPos.fields.z, 0LL);
    v61 = this->fields.carBackSpr;
    if ( !v61 )
      goto LABEL_136;
    if ( (unsigned int)v58 >= v61->max_length )
      goto LABEL_138;
    Instance = (int64_t)v61->m_Items[v58];
    if ( !Instance )
      goto LABEL_136;
    if ( (v57 & 1) == 0 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
      goto LABEL_89;
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
    v62 = this->fields.carBackSpr;
    if ( !v62 )
      goto LABEL_136;
    if ( (unsigned int)v58 >= v62->max_length )
      goto LABEL_138;
    v63 = GroupIdData->fields._size;
    v64 = v62->m_Items[v58];
    if ( v63 <= (int)v58 )
    {
      v72 = System_Int32__ToString((int32_t)&v108, 0LL);
      v73 = System_String__Concat_44307816(
              (System_String_o *)StringLiteral_21669/*"race_status_"*/,
              v72,
              (System_String_o *)StringLiteral_963/*"000"*/,
              0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      Instance = AtlasManager__SetEventUI(v64, v73, 0LL);
      if ( (Instance & 1) != 0 )
        goto LABEL_89;
    }
    else
    {
      if ( v63 <= (unsigned int)v58 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v65 = (char *)GroupIdData->fields._items + v56 * 24;
      v66 = *((_OWORD *)v65 + 2);
      v107 = *((_QWORD *)v65 + 6);
      v106 = v66;
      v67 = System_Int32__ToString((int32_t)&v106, 0LL);
      v68 = System_String__Concat_44305532((System_String_o *)StringLiteral_21669/*"race_status_"*/, v67, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      Instance = AtlasManager__SetEventUI(v64, v68, 0LL);
      v69 = Instance;
      if ( GroupIdData->fields._size <= (unsigned int)v58 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( GroupIdData->fields._items->m_Items[v56].fields.isGoal )
      {
        if ( !v50 )
          goto LABEL_136;
        if ( v50->fields._size <= (unsigned int)v58 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( v50->fields._items->m_Items[v58 + 4] )
        {
          v70 = this->fields.carBackSpr;
          if ( !v70 )
            goto LABEL_136;
          if ( (unsigned int)v58 >= v70->max_length )
            goto LABEL_138;
          Instance = (int64_t)v70->m_Items[v58];
          if ( !Instance )
            goto LABEL_136;
          v71 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          GameObjectExtensions__SetLocalPosition(v71, *(UnityEngine_Vector3_o *)&this->fields.goalPos.fields.z, 0LL);
        }
      }
      if ( (v69 & 1) != 0 )
        goto LABEL_89;
    }
    v74 = this->fields.carBackSpr;
    if ( !v74 )
      goto LABEL_136;
    if ( (unsigned int)v58 >= v74->max_length )
      goto LABEL_138;
    Instance = (int64_t)v74->m_Items[v58];
    if ( !Instance )
      goto LABEL_136;
    UISprite__set_atlas((UISprite_o *)Instance, 0LL, 0LL);
LABEL_89:
    carBackSpr = this->fields.carBackSpr;
    ++v58;
    ++v56;
    if ( !carBackSpr )
      goto LABEL_136;
  }
  goalIcon = this->fields.goalIcon;
  if ( !goalIcon )
    goto LABEL_136;
  v76 = 4LL;
  while ( 1 )
  {
    v77 = goalIcon->max_length;
    v78 = v76 - 4;
    if ( v76 - 4 >= (int)v77 )
      break;
    if ( v78 >= v77 )
      goto LABEL_138;
    v79 = (UISprite_o *)*((_QWORD *)&goalIcon->obj.klass + v76);
    v80 = System_Int32__ToString((int32_t)&v108, 0LL);
    v81 = System_String__Concat_44307816(
            (System_String_o *)StringLiteral_21669/*"race_status_"*/,
            v80,
            (System_String_o *)StringLiteral_963/*"000"*/,
            0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetEventUI(v79, v81, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v82 = this->fields.goalIcon;
      if ( !v82 )
        goto LABEL_136;
      if ( v78 >= v82->max_length )
        goto LABEL_138;
      Instance = *((_QWORD *)&v82->obj.klass + v76);
      if ( !Instance )
        goto LABEL_136;
      UISprite__set_atlas((UISprite_o *)Instance, 0LL, 0LL);
    }
    goalIcon = this->fields.goalIcon;
    ++v76;
    if ( !goalIcon )
      goto LABEL_136;
  }
  carIcon = this->fields.carIcon;
  if ( !carIcon )
    goto LABEL_136;
  v84 = 0LL;
  while ( 1 )
  {
    v85 = carIcon->max_length;
    if ( (__int64)v84 >= (int)v85 )
      break;
    v105 = v84 + 1;
    if ( v84 >= v85 )
      goto LABEL_138;
    v86 = carIcon->m_Items[v84];
    v87 = System_Int32__ToString((int32_t)&v108, 0LL);
    v88 = System_Int32__ToString((int32_t)&v105, 0LL);
    v89 = System_String__Concat_44308944(
            (System_String_o *)StringLiteral_21671/*"race_status_rank_"*/,
            v87,
            (System_String_o *)StringLiteral_15905/*"_"*/,
            v88,
            0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetEventUI(v86, v89, 0LL);
    carIcon = this->fields.carIcon;
    ++v84;
    if ( !carIcon )
      goto LABEL_136;
  }
  v90 = *(_QWORD *)&this->fields.startPos.fields.x;
  if ( !v90 )
    goto LABEL_136;
  v91 = 0LL;
  v92 = 40LL;
  while ( 1 )
  {
    v93 = *(_DWORD *)(v90 + 24);
    if ( (int)v91 >= v93 )
      break;
    if ( (unsigned int)v91 >= v93 )
      goto LABEL_138;
    v94 = *(UISprite_o **)(v90 + 8 * v91 + 32);
    v95 = System_Int32__ToString((int32_t)&v108, 0LL);
    v96 = System_String__Concat_44305532((System_String_o *)StringLiteral_21670/*"race_status_goal_"*/, v95, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetEventUI(v94, v96, 0LL);
    v97 = *(_QWORD *)&this->fields.startPos.fields.x;
    if ( !v97 )
      goto LABEL_136;
    if ( (unsigned int)v91 >= *(_DWORD *)(v97 + 24) )
      goto LABEL_138;
    v98 = *(UnityEngine_Behaviour_o **)(v97 + 8 * v91 + 32);
    if ( GroupIdData->fields._size <= (int)v91 )
    {
      v99 = 0;
    }
    else
    {
      if ( !v50 )
        goto LABEL_136;
      if ( v50->fields._size <= (unsigned int)v91 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v99 = v50->fields._items->m_Items[v91 + 4];
    }
    if ( (v99 & v57) != 0 )
    {
      if ( GroupIdData->fields._size <= (unsigned int)v91 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v32 = *((_BYTE *)&GroupIdData->fields._items->obj.klass + v92) != 0;
      if ( !v98 )
        goto LABEL_136;
    }
    else
    {
      v32 = 0LL;
      if ( !v98 )
        goto LABEL_136;
    }
    UnityEngine_Behaviour__set_enabled(v98, v32, 0LL);
    v90 = *(_QWORD *)&this->fields.startPos.fields.x;
    ++v91;
    v92 += 24LL;
    if ( !v90 )
      goto LABEL_136;
  }
  v100 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v100, 0.0, 0LL);
  v101 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&this->fields.originPos.fields.z = GameObjectExtensions__GetLocalPosition(v101, 0LL);
}


void __fastcall TitleInfoEventRaceRankComponent__UpdateDisp(
        TitleInfoEventRaceRankComponent_o *this,
        const MethodInfo *method)
{
  ;
}