void __fastcall TitleInfoEventRaceRankComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct TitleInfoEventRaceRankComponent_StaticFields *static_fields; // x9
  TitleInfoEventRaceRankComponent_c *v3; // x8

  if ( (byte_40FDFE1 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventRaceRankComponent_TypeInfo, v1);
    byte_40FDFE1 = 1;
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

  if ( (byte_40FDFDF & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventRaceRankComponent_TypeInfo, callback);
    sub_B16FFC(&Method_UITweener_Begin_TweenPosition___, v5);
    sub_B16FFC(&StringLiteral_6762, v6);
    byte_40FDFDF = 1;
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
         (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v9 )
    sub_B170D4();
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
  sub_B16F98((BattleServantConfConponent_o *)&v10->fields.eventReceiver, v14, v15, v16, v17, v18, v19, v20);
  v21 = (System_Int32_array **)StringLiteral_6762;
  v10->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6762;
  sub_B16F98((BattleServantConfConponent_o *)&v10->fields.callWhenFinished, v21, v22, v23, v24, v25, v26, v27);
  this[1].klass = (TitleInfoEventRaceRankComponent_c *)callback;
  sub_B16F98((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)callback, v28, v29, v30, v31, v32, v33);
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
  sub_B16F98(v8, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_40FDFE0 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventRaceRankComponent_TypeInfo, method);
    sub_B16FFC(&Method_UITweener_Begin_TweenPosition___, v3);
    sub_B16FFC(&StringLiteral_6764, v4);
    byte_40FDFE0 = 1;
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
         (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v7 )
    sub_B170D4();
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
  sub_B16F98((BattleServantConfConponent_o *)&v9->fields.eventReceiver, v15, v16, v17, v18, v19, v20, v21);
  v22 = (System_Int32_array **)StringLiteral_6764;
  v9->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6764;
  sub_B16F98((BattleServantConfConponent_o *)&v9->fields.callWhenFinished, v22, v23, v24, v25, v26, v27, v28);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v33; // x0
  EventRaceResultMaster_o *v34; // x21
  int64_t Time; // x0
  int64_t v36; // x20
  int64_t RaceStartedAt; // x0
  int64_t v38; // x21
  TitleInfoEventRaceRankComponent_c *v39; // x0
  _BOOL4 v40; // w28
  WebViewManager_o *v41; // x0
  QuestGroupMaster_o *v42; // x0
  QuestGroupMaster_o *v43; // x21
  System_Int32_array *QuestIdListByEventId; // x24
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  System_Collections_Generic_List_int__o *v49; // x20
  __int64 GroupId; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x8
  unsigned __int64 v54; // x23
  int32_t *v55; // x25
  signed __int64 size; // x8
  unsigned __int64 v57; // x23
  int v58; // w25
  int32_t v59; // w21
  WebViewManager_o *v60; // x0
  EventRaceMaster_o *v61; // x0
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *GroupIdData; // x20
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  System_Collections_Generic_List_bool__o *v67; // x21
  signed __int64 v68; // x8
  unsigned __int64 v69; // x26
  __int64 v70; // x27
  int32_t v71; // w24
  bool IsEventRaceGoalScriptPlayed; // w0
  struct UISprite_array *carBackSpr; // x8
  __int64 v74; // x28
  int v75; // w24
  __int64 v76; // x27
  int max_length; // w9
  UnityEngine_Component_o *v78; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_array *v80; // x8
  UnityEngine_Behaviour_o *v81; // x0
  struct UISprite_array *v82; // x8
  int v83; // w9
  UISprite_o *v84; // x22
  char *v85; // x8
  __int128 v86; // q0
  System_String_o *v87; // x0
  System_String_o *v88; // x23
  char v89; // w22
  struct UISprite_array *v90; // x8
  UnityEngine_Component_o *v91; // x0
  UnityEngine_GameObject_o *v92; // x0
  System_String_o *v93; // x0
  System_String_o *v94; // x23
  struct UISprite_array *v95; // x8
  UISprite_o *v96; // x0
  struct UISprite_array *goalIcon; // x8
  __int64 v98; // x27
  unsigned __int64 v99; // x9
  unsigned __int64 v100; // x28
  UISprite_o *v101; // x22
  System_String_o *v102; // x0
  System_String_o *v103; // x23
  struct UISprite_array *v104; // x8
  UISprite_o *v105; // x0
  struct UISprite_array *carIcon; // x8
  unsigned __int64 v107; // x26
  unsigned __int64 v108; // x9
  UISprite_o *v109; // x22
  System_String_o *v110; // x23
  System_String_o *v111; // x0
  System_String_o *v112; // x23
  __int64 v113; // x8
  __int64 v114; // x26
  __int64 v115; // x27
  int v116; // w9
  UISprite_o *v117; // x22
  System_String_o *v118; // x0
  System_String_o *v119; // x23
  __int64 v120; // x8
  UnityEngine_Behaviour_o *v121; // x22
  _BOOL4 v122; // w8
  bool v123; // w1
  UnityEngine_GameObject_o *v124; // x0
  UnityEngine_GameObject_o *v125; // x0
  _BOOL4 v126; // [xsp+4h] [xbp-7Ch]
  int v128; // [xsp+Ch] [xbp-74h] BYREF
  __int128 v129; // [xsp+10h] [xbp-70h] BYREF
  __int64 v130; // [xsp+20h] [xbp-60h]
  int32_t v131; // [xsp+2Ch] [xbp-54h] BYREF

  v131 = eventId;
  if ( (byte_40FDFDE & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&CondType_TypeInfo, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaceMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaceResultMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, v10);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_bool__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_bool___ctor__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Count__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_bool__get_Item__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_B16FFC(&System_Collections_Generic_List_bool__TypeInfo, v22);
    sub_B16FFC(&NetworkManager_TypeInfo, v23);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_B16FFC(&TitleInfoEventRaceRankComponent_TypeInfo, v25);
    sub_B16FFC(&StringLiteral_21578, v26);
    sub_B16FFC(&StringLiteral_15842, v27);
    sub_B16FFC(&StringLiteral_21579, v28);
    sub_B16FFC(&StringLiteral_21577, v29);
    sub_B16FFC(&StringLiteral_961, v30);
    byte_40FDFDE = 1;
  }
  v129 = 0uLL;
  v130 = 0LL;
  v128 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_136;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_136;
  DataMasterBase_WarMaster__WarEntity__int___GetEntity(
    MasterData_WarQuestSelectionMaster,
    eventId,
    (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  v33 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v33 )
    goto LABEL_136;
  v34 = (EventRaceResultMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v33,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !v34 )
    goto LABEL_136;
  v36 = Time;
  RaceStartedAt = EventRaceResultMaster__getRaceStartedAt(v34, eventId, termId, 0LL);
  if ( RaceStartedAt )
  {
    v38 = RaceStartedAt;
    v39 = TitleInfoEventRaceRankComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaceRankComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaceRankComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaceRankComponent_TypeInfo);
      v39 = TitleInfoEventRaceRankComponent_TypeInfo;
    }
    v40 = v36 - v38 > v39->static_fields->DISP_RACE_SEC_TIME;
  }
  else
  {
    v40 = 0;
  }
  v41 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v41 )
    goto LABEL_136;
  v42 = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)v41,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !v42 )
    goto LABEL_136;
  v43 = v42;
  QuestIdListByEventId = QuestGroupMaster__GetQuestIdListByEventId(v42, eventId, 0LL);
  v49 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v45,
                                                    v46,
                                                    v47,
                                                    v48);
  System_Collections_Generic_List_int____ctor(
    v49,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !QuestIdListByEventId )
    goto LABEL_136;
  v53 = *(_QWORD *)&QuestIdListByEventId->max_length;
  if ( (int)v53 >= 1 )
  {
    v54 = 0LL;
    v55 = &QuestIdListByEventId->m_Items[1];
    do
    {
      if ( v54 >= (unsigned int)v53 )
      {
LABEL_138:
        sub_B17100(GroupId, v51, v52);
        sub_B170A0();
      }
      GroupId = QuestGroupMaster__GetGroupId(v43, v55[v54], 5, 0LL);
      if ( (_DWORD)GroupId == termId )
      {
        if ( v54 >= QuestIdListByEventId->max_length )
          goto LABEL_138;
        if ( !v49 )
          goto LABEL_136;
        System_Collections_Generic_List_int___Add(
          v49,
          v55[v54],
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v53) = QuestIdListByEventId->max_length;
    }
    while ( (__int64)++v54 < (int)v53 );
  }
  if ( !v49 )
    goto LABEL_136;
  LODWORD(size) = v49->fields._size;
  if ( (int)size < 1 )
  {
LABEL_37:
    v58 = 0;
  }
  else
  {
    v57 = 0LL;
    v58 = 1;
    while ( 1 )
    {
      if ( v57 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v59 = v49->fields._items->m_Items[v57 + 1];
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(1, v59, 0LL, 0, 0LL) )
        break;
      size = v49->fields._size;
      if ( (__int64)++v57 >= size )
        goto LABEL_37;
    }
  }
  v60 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v60
    || (v61 = (EventRaceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v60,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0LL
    || (v126 = v40,
        GroupIdData = EventRaceMaster__getGroupIdData(v61, eventId, termId, 0LL),
        v67 = (System_Collections_Generic_List_bool__o *)sub_B170CC(
                                                           System_Collections_Generic_List_bool__TypeInfo,
                                                           v63,
                                                           v64,
                                                           v65,
                                                           v66),
        System_Collections_Generic_List_bool____ctor(
          v67,
          (const MethodInfo_2EAED78 *)Method_System_Collections_Generic_List_bool___ctor__),
        !GroupIdData) )
  {
LABEL_136:
    sub_B170D4();
  }
  LODWORD(v68) = GroupIdData->fields._size;
  if ( (int)v68 >= 1 )
  {
    v69 = 0LL;
    v70 = 32LL;
    do
    {
      if ( v69 >= (unsigned int)v68 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v71 = *(_DWORD *)((char *)&GroupIdData->fields._items->obj.klass + v70);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsEventRaceGoalScriptPlayed = CondType__IsEventRaceGoalScriptPlayed(eventId, termId, v71, 0LL);
      if ( !v67 )
        goto LABEL_136;
      System_Collections_Generic_List_bool___Add(
        v67,
        IsEventRaceGoalScriptPlayed,
        (const MethodInfo_2EAFADC *)Method_System_Collections_Generic_List_bool__Add__);
      v68 = GroupIdData->fields._size;
      ++v69;
      v70 += 24LL;
    }
    while ( (__int64)v69 < v68 );
  }
  carBackSpr = this->fields.carBackSpr;
  if ( !carBackSpr )
    goto LABEL_136;
  v74 = 0LL;
  v75 = v126 & v58;
  v76 = 0LL;
  while ( 1 )
  {
    max_length = carBackSpr->max_length;
    if ( (int)v76 >= max_length )
      break;
    if ( (unsigned int)v76 >= max_length )
      goto LABEL_138;
    v78 = (UnityEngine_Component_o *)carBackSpr->m_Items[v76];
    if ( !v78 )
      goto LABEL_136;
    gameObject = UnityEngine_Component__get_gameObject(v78, 0LL);
    GameObjectExtensions__SetLocalPosition(gameObject, *(UnityEngine_Vector3_o *)&this->fields.startPos.fields.z, 0LL);
    v80 = this->fields.carBackSpr;
    if ( !v80 )
      goto LABEL_136;
    if ( (unsigned int)v76 >= v80->max_length )
      goto LABEL_138;
    v81 = (UnityEngine_Behaviour_o *)v80->m_Items[v76];
    if ( !v81 )
      goto LABEL_136;
    if ( (v75 & 1) == 0 )
    {
      UnityEngine_Behaviour__set_enabled(v81, 0, 0LL);
      goto LABEL_89;
    }
    UnityEngine_Behaviour__set_enabled(v81, 1, 0LL);
    v82 = this->fields.carBackSpr;
    if ( !v82 )
      goto LABEL_136;
    if ( (unsigned int)v76 >= v82->max_length )
      goto LABEL_138;
    v83 = GroupIdData->fields._size;
    v84 = v82->m_Items[v76];
    if ( v83 <= (int)v76 )
    {
      v93 = System_Int32__ToString((int32_t)&v131, 0LL);
      v94 = System_String__Concat_43746016(
              (System_String_o *)StringLiteral_21577,
              v93,
              (System_String_o *)StringLiteral_961,
              0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      GroupId = AtlasManager__SetEventUI(v84, v94, 0LL);
      if ( (GroupId & 1) != 0 )
        goto LABEL_89;
    }
    else
    {
      if ( v83 <= (unsigned int)v76 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v85 = (char *)GroupIdData->fields._items + v74 * 24;
      v86 = *((_OWORD *)v85 + 2);
      v130 = *((_QWORD *)v85 + 6);
      v129 = v86;
      v87 = System_Int32__ToString((int32_t)&v129, 0LL);
      v88 = System_String__Concat_43743732((System_String_o *)StringLiteral_21577, v87, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      GroupId = AtlasManager__SetEventUI(v84, v88, 0LL);
      v89 = GroupId;
      if ( GroupIdData->fields._size <= (unsigned int)v76 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( GroupIdData->fields._items->m_Items[v74].fields.isGoal )
      {
        if ( !v67 )
          goto LABEL_136;
        if ( v67->fields._size <= (unsigned int)v76 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( v67->fields._items->m_Items[v76 + 4] )
        {
          v90 = this->fields.carBackSpr;
          if ( !v90 )
            goto LABEL_136;
          if ( (unsigned int)v76 >= v90->max_length )
            goto LABEL_138;
          v91 = (UnityEngine_Component_o *)v90->m_Items[v76];
          if ( !v91 )
            goto LABEL_136;
          v92 = UnityEngine_Component__get_gameObject(v91, 0LL);
          GameObjectExtensions__SetLocalPosition(v92, *(UnityEngine_Vector3_o *)&this->fields.goalPos.fields.z, 0LL);
        }
      }
      if ( (v89 & 1) != 0 )
        goto LABEL_89;
    }
    v95 = this->fields.carBackSpr;
    if ( !v95 )
      goto LABEL_136;
    if ( (unsigned int)v76 >= v95->max_length )
      goto LABEL_138;
    v96 = v95->m_Items[v76];
    if ( !v96 )
      goto LABEL_136;
    UISprite__set_atlas(v96, 0LL, 0LL);
LABEL_89:
    carBackSpr = this->fields.carBackSpr;
    ++v76;
    ++v74;
    if ( !carBackSpr )
      goto LABEL_136;
  }
  goalIcon = this->fields.goalIcon;
  if ( !goalIcon )
    goto LABEL_136;
  v98 = 4LL;
  while ( 1 )
  {
    v99 = goalIcon->max_length;
    v100 = v98 - 4;
    if ( v98 - 4 >= (int)v99 )
      break;
    if ( v100 >= v99 )
      goto LABEL_138;
    v101 = (UISprite_o *)*((_QWORD *)&goalIcon->obj.klass + v98);
    v102 = System_Int32__ToString((int32_t)&v131, 0LL);
    v103 = System_String__Concat_43746016(
             (System_String_o *)StringLiteral_21577,
             v102,
             (System_String_o *)StringLiteral_961,
             0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    GroupId = AtlasManager__SetEventUI(v101, v103, 0LL);
    if ( (GroupId & 1) == 0 )
    {
      v104 = this->fields.goalIcon;
      if ( !v104 )
        goto LABEL_136;
      if ( v100 >= v104->max_length )
        goto LABEL_138;
      v105 = (UISprite_o *)*((_QWORD *)&v104->obj.klass + v98);
      if ( !v105 )
        goto LABEL_136;
      UISprite__set_atlas(v105, 0LL, 0LL);
    }
    goalIcon = this->fields.goalIcon;
    ++v98;
    if ( !goalIcon )
      goto LABEL_136;
  }
  carIcon = this->fields.carIcon;
  if ( !carIcon )
    goto LABEL_136;
  v107 = 0LL;
  while ( 1 )
  {
    v108 = carIcon->max_length;
    if ( (__int64)v107 >= (int)v108 )
      break;
    v128 = v107 + 1;
    if ( v107 >= v108 )
      goto LABEL_138;
    v109 = carIcon->m_Items[v107];
    v110 = System_Int32__ToString((int32_t)&v131, 0LL);
    v111 = System_Int32__ToString((int32_t)&v128, 0LL);
    v112 = System_String__Concat_43747144(
             (System_String_o *)StringLiteral_21579,
             v110,
             (System_String_o *)StringLiteral_15842,
             v111,
             0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    GroupId = AtlasManager__SetEventUI(v109, v112, 0LL);
    carIcon = this->fields.carIcon;
    ++v107;
    if ( !carIcon )
      goto LABEL_136;
  }
  v113 = *(_QWORD *)&this->fields.startPos.fields.x;
  if ( !v113 )
    goto LABEL_136;
  v114 = 0LL;
  v115 = 40LL;
  while ( 1 )
  {
    v116 = *(_DWORD *)(v113 + 24);
    if ( (int)v114 >= v116 )
      break;
    if ( (unsigned int)v114 >= v116 )
      goto LABEL_138;
    v117 = *(UISprite_o **)(v113 + 8 * v114 + 32);
    v118 = System_Int32__ToString((int32_t)&v131, 0LL);
    v119 = System_String__Concat_43743732((System_String_o *)StringLiteral_21578, v118, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    GroupId = AtlasManager__SetEventUI(v117, v119, 0LL);
    v120 = *(_QWORD *)&this->fields.startPos.fields.x;
    if ( !v120 )
      goto LABEL_136;
    if ( (unsigned int)v114 >= *(_DWORD *)(v120 + 24) )
      goto LABEL_138;
    v121 = *(UnityEngine_Behaviour_o **)(v120 + 8 * v114 + 32);
    if ( GroupIdData->fields._size <= (int)v114 )
    {
      v122 = 0;
    }
    else
    {
      if ( !v67 )
        goto LABEL_136;
      if ( v67->fields._size <= (unsigned int)v114 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v122 = v67->fields._items->m_Items[v114 + 4];
    }
    if ( (v122 & v75) != 0 )
    {
      if ( GroupIdData->fields._size <= (unsigned int)v114 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v123 = *((_BYTE *)&GroupIdData->fields._items->obj.klass + v115) != 0;
      if ( !v121 )
        goto LABEL_136;
    }
    else
    {
      v123 = 0;
      if ( !v121 )
        goto LABEL_136;
    }
    UnityEngine_Behaviour__set_enabled(v121, v123, 0LL);
    v113 = *(_QWORD *)&this->fields.startPos.fields.x;
    ++v114;
    v115 += 24LL;
    if ( !v113 )
      goto LABEL_136;
  }
  v124 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v124, 0.0, 0LL);
  v125 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&this->fields.originPos.fields.z = GameObjectExtensions__GetLocalPosition(v125, 0LL);
}


void __fastcall TitleInfoEventRaceRankComponent__UpdateDisp(
        TitleInfoEventRaceRankComponent_o *this,
        const MethodInfo *method)
{
  ;
}