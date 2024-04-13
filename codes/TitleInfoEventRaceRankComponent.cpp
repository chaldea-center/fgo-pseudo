void __fastcall TitleInfoEventRaceRankComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  struct TitleInfoEventRaceRankComponent_StaticFields *static_fields; // x9
  TitleInfoEventRaceRankComponent_c *v5; // x8

  if ( (byte_42ECC09 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventRaceRankComponent_TypeInfo, v1, v2, v3);
    byte_42ECC09 = 1;
  }
  static_fields = TitleInfoEventRaceRankComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.x = 0x42A0000000000000LL;
  static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.z = 0.0;
  v5 = TitleInfoEventRaceRankComponent_TypeInfo;
  TitleInfoEventRaceRankComponent_TypeInfo->static_fields->ANIM_DURATION_FRAME_IN = 0.3;
  v5->static_fields->DISP_RACE_SEC_TIME = 600LL;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_GameObject_o *gameObject; // x21
  TitleInfoEventRaceRankComponent_c *v13; // x8
  TweenWidth_o *v14; // x0
  __int64 v15; // x1
  TweenWidth_o *v16; // x21
  float32x2_t *static_fields; // x8
  float v18; // s1
  int endTime; // w9
  System_Int32_array **v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_42ECC07 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventRaceRankComponent_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UITweener_Begin_TweenPosition___, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_6872/*"FrameInFinish"*/, v9, v10, v11);
    byte_42ECC07 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v13 = TitleInfoEventRaceRankComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaceRankComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaceRankComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaceRankComponent_TypeInfo);
    v13 = TitleInfoEventRaceRankComponent_TypeInfo;
  }
  v14 = UITweener__Begin_TweenWidth_(
          gameObject,
          v13->static_fields->ANIM_DURATION_FRAME_IN,
          (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v14 )
    sub_B5D69C(0LL, v15);
  v16 = v14;
  static_fields = (float32x2_t *)TitleInfoEventRaceRankComponent_TypeInfo->static_fields;
  v18 = *(float *)&this->fields.endTime + static_fields[1].n64_f32[0];
  *(float32x2_t *)&v14->fields.from = vadd_f32(
                                        *(float32x2_t *)&this->fields.originPos.fields.z,
                                        (float32x2_t)static_fields->n64_u64[0]);
  *(float *)&v14->fields.updateTable = v18;
  endTime = this->fields.endTime;
  *(_QWORD *)(&v14->fields.updateTable + 4) = *(_QWORD *)&this->fields.originPos.fields.z;
  HIDWORD(v14->fields.mWidget) = endTime;
  v14->fields.style = 2;
  v20 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v16->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v20;
  sub_B5D560((BattleServantConfConponent_o *)&v16->fields.eventReceiver, v20, v21, v22, v23, v24, v25, v26);
  v27 = (System_Int32_array **)StringLiteral_6872/*"FrameInFinish"*/;
  v16->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6872/*"FrameInFinish"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v16->fields.callWhenFinished, v27, v28, v29, v30, v31, v32, v33);
  this[1].klass = (TitleInfoEventRaceRankComponent_c *)callback;
  sub_B5D560((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)callback, v34, v35, v36, v37, v38, v39);
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
  sub_B5D560(v8, 0LL, v2, v3, v4, v5, v6, v7);
  if ( klass )
    ActionExtensions__Call(v9, 0LL);
}


void __fastcall TitleInfoEventRaceRankComponent__FrameOut(
        TitleInfoEventRaceRankComponent_o *this,
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
  UnityEngine_GameObject_o *gameObject; // x20
  TitleInfoEventRaceRankComponent_c *v12; // x8
  TweenWidth_o *v13; // x0
  __int64 v14; // x1
  int endTime; // w9
  TweenWidth_o *v16; // x20
  float32x2_t v17; // d0
  float v18; // s1
  struct TitleInfoEventRaceRankComponent_StaticFields *static_fields; // x8
  float32x2_t v20; // d2
  float z; // s3
  System_Int32_array **v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_42ECC08 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventRaceRankComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UITweener_Begin_TweenPosition___, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_6874/*"FrameOutFinish"*/, v8, v9, v10);
    byte_42ECC08 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v12 = TitleInfoEventRaceRankComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaceRankComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaceRankComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaceRankComponent_TypeInfo);
    v12 = TitleInfoEventRaceRankComponent_TypeInfo;
  }
  v13 = UITweener__Begin_TweenWidth_(
          gameObject,
          v12->static_fields->ANIM_DURATION_FRAME_IN,
          (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v13 )
    sub_B5D69C(0LL, v14);
  endTime = this->fields.endTime;
  v16 = v13;
  *(_QWORD *)&v13->fields.from = *(_QWORD *)&this->fields.originPos.fields.z;
  *(_DWORD *)&v13->fields.updateTable = endTime;
  v17.n64_u64[0] = *(unsigned __int64 *)&this->fields.originPos.fields.z;
  v18 = *(float *)&this->fields.endTime;
  static_fields = TitleInfoEventRaceRankComponent_TypeInfo->static_fields;
  v20.n64_u64[0] = *(unsigned __int64 *)&static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.x;
  z = static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.z;
  v13->fields.style = 2;
  *(float32x2_t *)(&v13->fields.updateTable + 4) = vadd_f32(v17, v20);
  *((float *)&v13->fields.mWidget + 1) = v18 + z;
  v22 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v16->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v22;
  sub_B5D560((BattleServantConfConponent_o *)&v16->fields.eventReceiver, v22, v23, v24, v25, v26, v27, v28);
  v29 = (System_Int32_array **)StringLiteral_6874/*"FrameOutFinish"*/;
  v16->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6874/*"FrameOutFinish"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v16->fields.callWhenFinished, v29, v30, v31, v32, v33, v34, v35);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int64_t Instance; // x0
  _BOOL8 v82; // x1
  EventRaceResultMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t v84; // x20
  int64_t RaceStartedAt; // x0
  int64_t v86; // x21
  TitleInfoEventRaceRankComponent_c *v87; // x0
  _BOOL4 v88; // w28
  QuestGroupMaster_o *v89; // x21
  System_Int32_array *QuestIdListByEventId; // x24
  System_Collections_Generic_List_int__o *v91; // x20
  __int64 v92; // x8
  unsigned __int64 v93; // x23
  int32_t *v94; // x25
  signed __int64 size; // x8
  unsigned __int64 v96; // x23
  int v97; // w25
  int32_t v98; // w21
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *GroupIdData; // x20
  System_Collections_Generic_List_bool__o *v100; // x21
  signed __int64 v101; // x8
  unsigned __int64 v102; // x26
  __int64 v103; // x27
  int32_t v104; // w24
  struct UISprite_array *carBackSpr; // x8
  __int64 v106; // x28
  int v107; // w24
  __int64 v108; // x27
  int max_length; // w9
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_array *v111; // x8
  struct UISprite_array *v112; // x8
  int v113; // w9
  UISprite_o *v114; // x22
  char *v115; // x8
  __int128 v116; // q0
  System_String_o *v117; // x0
  System_String_o *v118; // x23
  char v119; // w22
  struct UISprite_array *v120; // x8
  UnityEngine_GameObject_o *v121; // x0
  System_String_o *v122; // x0
  System_String_o *v123; // x23
  struct UISprite_array *v124; // x8
  struct UISprite_array *goalIcon; // x8
  __int64 v126; // x27
  unsigned __int64 v127; // x9
  unsigned __int64 v128; // x28
  UISprite_o *v129; // x22
  System_String_o *v130; // x0
  System_String_o *v131; // x23
  struct UISprite_array *v132; // x8
  struct UISprite_array *carIcon; // x8
  unsigned __int64 v134; // x26
  unsigned __int64 v135; // x9
  UISprite_o *v136; // x22
  System_String_o *v137; // x23
  System_String_o *v138; // x0
  System_String_o *v139; // x23
  __int64 v140; // x8
  __int64 v141; // x26
  __int64 v142; // x27
  int v143; // w9
  UISprite_o *v144; // x22
  System_String_o *v145; // x0
  System_String_o *v146; // x23
  __int64 v147; // x8
  UnityEngine_Behaviour_o *v148; // x22
  _BOOL4 v149; // w8
  UnityEngine_GameObject_o *v150; // x0
  UnityEngine_GameObject_o *v151; // x0
  __int64 v152; // x0
  _BOOL4 v153; // [xsp+4h] [xbp-7Ch]
  int v155; // [xsp+Ch] [xbp-74h] BYREF
  __int128 v156; // [xsp+10h] [xbp-70h] BYREF
  __int64 v157; // [xsp+20h] [xbp-60h]
  int32_t v158; // [xsp+2Ch] [xbp-54h] BYREF

  v158 = eventId;
  if ( (byte_42ECC06 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, eventId, termId, method);
    sub_B5D5C4(&CondType_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaceMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaceResultMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_bool__Add__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_bool___ctor__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Count__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_bool__get_Item__, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v48, v49, v50);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v51, v52, v53);
    sub_B5D5C4(&System_Collections_Generic_List_bool__TypeInfo, v54, v55, v56);
    sub_B5D5C4(&NetworkManager_TypeInfo, v57, v58, v59);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v60, v61, v62);
    sub_B5D5C4(&TitleInfoEventRaceRankComponent_TypeInfo, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_21963/*"race_status_goal_"*/, v66, v67, v68);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v69, v70, v71);
    sub_B5D5C4(&StringLiteral_21964/*"race_status_rank_"*/, v72, v73, v74);
    sub_B5D5C4(&StringLiteral_21962/*"race_status_"*/, v75, v76, v77);
    sub_B5D5C4(&StringLiteral_983/*"000"*/, v78, v79, v80);
    byte_42ECC06 = 1;
  }
  v156 = 0uLL;
  v157 = 0LL;
  v155 = 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_136;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_136;
  DataMasterBase_WarMaster__WarEntity__int___GetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
    eventId,
    (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_136;
  MasterData_WarQuestSelectionMaster = (EventRaceResultMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_136;
  v84 = Instance;
  RaceStartedAt = EventRaceResultMaster__getRaceStartedAt(MasterData_WarQuestSelectionMaster, eventId, termId, 0LL);
  if ( RaceStartedAt )
  {
    v86 = RaceStartedAt;
    v87 = TitleInfoEventRaceRankComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaceRankComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaceRankComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaceRankComponent_TypeInfo);
      v87 = TitleInfoEventRaceRankComponent_TypeInfo;
    }
    v88 = v84 - v86 > v87->static_fields->DISP_RACE_SEC_TIME;
  }
  else
  {
    v88 = 0;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_136;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_136;
  v89 = (QuestGroupMaster_o *)Instance;
  QuestIdListByEventId = QuestGroupMaster__GetQuestIdListByEventId((QuestGroupMaster_o *)Instance, eventId, 0LL);
  v91 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v91,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !QuestIdListByEventId )
    goto LABEL_136;
  v92 = *(_QWORD *)&QuestIdListByEventId->max_length;
  if ( (int)v92 >= 1 )
  {
    v93 = 0LL;
    v94 = &QuestIdListByEventId->m_Items[1];
    do
    {
      if ( v93 >= (unsigned int)v92 )
      {
LABEL_138:
        v152 = sub_B5D6C8(Instance);
        sub_B5D668(v152, 0LL);
      }
      Instance = QuestGroupMaster__GetGroupId(v89, v94[v93], 5, 0LL);
      if ( (_DWORD)Instance == termId )
      {
        if ( v93 >= QuestIdListByEventId->max_length )
          goto LABEL_138;
        if ( !v91 )
          goto LABEL_136;
        System_Collections_Generic_List_int___Add(
          v91,
          v94[v93],
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v92) = QuestIdListByEventId->max_length;
    }
    while ( (__int64)++v93 < (int)v92 );
  }
  if ( !v91 )
    goto LABEL_136;
  LODWORD(size) = v91->fields._size;
  if ( (int)size < 1 )
  {
LABEL_37:
    v97 = 0;
  }
  else
  {
    v96 = 0LL;
    v97 = 1;
    while ( 1 )
    {
      if ( v96 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v98 = v91->fields._items->m_Items[v96 + 1];
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(1, v98, 0LL, 0, 0LL) )
        break;
      size = v91->fields._size;
      if ( (__int64)++v96 >= size )
        goto LABEL_37;
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0
    || (v153 = v88,
        GroupIdData = EventRaceMaster__getGroupIdData((EventRaceMaster_o *)Instance, eventId, termId, 0LL),
        v100 = (System_Collections_Generic_List_bool__o *)sub_B5D694(System_Collections_Generic_List_bool__TypeInfo),
        System_Collections_Generic_List_bool____ctor(
          v100,
          (const MethodInfo_30146F0 *)Method_System_Collections_Generic_List_bool___ctor__),
        !GroupIdData) )
  {
LABEL_136:
    sub_B5D69C(Instance, v82);
  }
  LODWORD(v101) = GroupIdData->fields._size;
  if ( (int)v101 >= 1 )
  {
    v102 = 0LL;
    v103 = 32LL;
    do
    {
      if ( v102 >= (unsigned int)v101 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v104 = *(_DWORD *)((char *)&GroupIdData->fields._items->obj.klass + v103);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = CondType__IsEventRaceGoalScriptPlayed(eventId, termId, v104, 0LL);
      if ( !v100 )
        goto LABEL_136;
      System_Collections_Generic_List_bool___Add(
        v100,
        Instance & 1,
        (const MethodInfo_3015454 *)Method_System_Collections_Generic_List_bool__Add__);
      v101 = GroupIdData->fields._size;
      ++v102;
      v103 += 24LL;
    }
    while ( (__int64)v102 < v101 );
  }
  carBackSpr = this->fields.carBackSpr;
  if ( !carBackSpr )
    goto LABEL_136;
  v106 = 0LL;
  v107 = v153 & v97;
  v108 = 0LL;
  while ( 1 )
  {
    max_length = carBackSpr->max_length;
    if ( (int)v108 >= max_length )
      break;
    if ( (unsigned int)v108 >= max_length )
      goto LABEL_138;
    Instance = (int64_t)carBackSpr->m_Items[v108];
    if ( !Instance )
      goto LABEL_136;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    GameObjectExtensions__SetLocalPosition(gameObject, *(UnityEngine_Vector3_o *)&this->fields.startPos.fields.z, 0LL);
    v111 = this->fields.carBackSpr;
    if ( !v111 )
      goto LABEL_136;
    if ( (unsigned int)v108 >= v111->max_length )
      goto LABEL_138;
    Instance = (int64_t)v111->m_Items[v108];
    if ( !Instance )
      goto LABEL_136;
    if ( (v107 & 1) == 0 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
      goto LABEL_89;
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
    v112 = this->fields.carBackSpr;
    if ( !v112 )
      goto LABEL_136;
    if ( (unsigned int)v108 >= v112->max_length )
      goto LABEL_138;
    v113 = GroupIdData->fields._size;
    v114 = v112->m_Items[v108];
    if ( v113 <= (int)v108 )
    {
      v122 = System_Int32__ToString((int32_t)&v158, 0LL);
      v123 = System_String__Concat_44580072(
               (System_String_o *)StringLiteral_21962/*"race_status_"*/,
               v122,
               (System_String_o *)StringLiteral_983/*"000"*/,
               0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      Instance = AtlasManager__SetEventUI(v114, v123, 0LL);
      if ( (Instance & 1) != 0 )
        goto LABEL_89;
    }
    else
    {
      if ( v113 <= (unsigned int)v108 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v115 = (char *)GroupIdData->fields._items + v106 * 24;
      v116 = *((_OWORD *)v115 + 2);
      v157 = *((_QWORD *)v115 + 6);
      v156 = v116;
      v117 = System_Int32__ToString((int32_t)&v156, 0LL);
      v118 = System_String__Concat_44577788((System_String_o *)StringLiteral_21962/*"race_status_"*/, v117, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      Instance = AtlasManager__SetEventUI(v114, v118, 0LL);
      v119 = Instance;
      if ( GroupIdData->fields._size <= (unsigned int)v108 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( GroupIdData->fields._items->m_Items[v106].fields.isGoal )
      {
        if ( !v100 )
          goto LABEL_136;
        if ( v100->fields._size <= (unsigned int)v108 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( v100->fields._items->m_Items[v108 + 4] )
        {
          v120 = this->fields.carBackSpr;
          if ( !v120 )
            goto LABEL_136;
          if ( (unsigned int)v108 >= v120->max_length )
            goto LABEL_138;
          Instance = (int64_t)v120->m_Items[v108];
          if ( !Instance )
            goto LABEL_136;
          v121 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          GameObjectExtensions__SetLocalPosition(v121, *(UnityEngine_Vector3_o *)&this->fields.goalPos.fields.z, 0LL);
        }
      }
      if ( (v119 & 1) != 0 )
        goto LABEL_89;
    }
    v124 = this->fields.carBackSpr;
    if ( !v124 )
      goto LABEL_136;
    if ( (unsigned int)v108 >= v124->max_length )
      goto LABEL_138;
    Instance = (int64_t)v124->m_Items[v108];
    if ( !Instance )
      goto LABEL_136;
    UISprite__set_atlas((UISprite_o *)Instance, 0LL, 0LL);
LABEL_89:
    carBackSpr = this->fields.carBackSpr;
    ++v108;
    ++v106;
    if ( !carBackSpr )
      goto LABEL_136;
  }
  goalIcon = this->fields.goalIcon;
  if ( !goalIcon )
    goto LABEL_136;
  v126 = 4LL;
  while ( 1 )
  {
    v127 = goalIcon->max_length;
    v128 = v126 - 4;
    if ( v126 - 4 >= (int)v127 )
      break;
    if ( v128 >= v127 )
      goto LABEL_138;
    v129 = (UISprite_o *)*((_QWORD *)&goalIcon->obj.klass + v126);
    v130 = System_Int32__ToString((int32_t)&v158, 0LL);
    v131 = System_String__Concat_44580072(
             (System_String_o *)StringLiteral_21962/*"race_status_"*/,
             v130,
             (System_String_o *)StringLiteral_983/*"000"*/,
             0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetEventUI(v129, v131, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v132 = this->fields.goalIcon;
      if ( !v132 )
        goto LABEL_136;
      if ( v128 >= v132->max_length )
        goto LABEL_138;
      Instance = *((_QWORD *)&v132->obj.klass + v126);
      if ( !Instance )
        goto LABEL_136;
      UISprite__set_atlas((UISprite_o *)Instance, 0LL, 0LL);
    }
    goalIcon = this->fields.goalIcon;
    ++v126;
    if ( !goalIcon )
      goto LABEL_136;
  }
  carIcon = this->fields.carIcon;
  if ( !carIcon )
    goto LABEL_136;
  v134 = 0LL;
  while ( 1 )
  {
    v135 = carIcon->max_length;
    if ( (__int64)v134 >= (int)v135 )
      break;
    v155 = v134 + 1;
    if ( v134 >= v135 )
      goto LABEL_138;
    v136 = carIcon->m_Items[v134];
    v137 = System_Int32__ToString((int32_t)&v158, 0LL);
    v138 = System_Int32__ToString((int32_t)&v155, 0LL);
    v139 = System_String__Concat_44581200(
             (System_String_o *)StringLiteral_21964/*"race_status_rank_"*/,
             v137,
             (System_String_o *)StringLiteral_16096/*"_"*/,
             v138,
             0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetEventUI(v136, v139, 0LL);
    carIcon = this->fields.carIcon;
    ++v134;
    if ( !carIcon )
      goto LABEL_136;
  }
  v140 = *(_QWORD *)&this->fields.startPos.fields.x;
  if ( !v140 )
    goto LABEL_136;
  v141 = 0LL;
  v142 = 40LL;
  while ( 1 )
  {
    v143 = *(_DWORD *)(v140 + 24);
    if ( (int)v141 >= v143 )
      break;
    if ( (unsigned int)v141 >= v143 )
      goto LABEL_138;
    v144 = *(UISprite_o **)(v140 + 8 * v141 + 32);
    v145 = System_Int32__ToString((int32_t)&v158, 0LL);
    v146 = System_String__Concat_44577788((System_String_o *)StringLiteral_21963/*"race_status_goal_"*/, v145, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetEventUI(v144, v146, 0LL);
    v147 = *(_QWORD *)&this->fields.startPos.fields.x;
    if ( !v147 )
      goto LABEL_136;
    if ( (unsigned int)v141 >= *(_DWORD *)(v147 + 24) )
      goto LABEL_138;
    v148 = *(UnityEngine_Behaviour_o **)(v147 + 8 * v141 + 32);
    if ( GroupIdData->fields._size <= (int)v141 )
    {
      v149 = 0;
    }
    else
    {
      if ( !v100 )
        goto LABEL_136;
      if ( v100->fields._size <= (unsigned int)v141 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v149 = v100->fields._items->m_Items[v141 + 4];
    }
    if ( (v149 & v107) != 0 )
    {
      if ( GroupIdData->fields._size <= (unsigned int)v141 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v82 = *((_BYTE *)&GroupIdData->fields._items->obj.klass + v142) != 0;
      if ( !v148 )
        goto LABEL_136;
    }
    else
    {
      v82 = 0LL;
      if ( !v148 )
        goto LABEL_136;
    }
    UnityEngine_Behaviour__set_enabled(v148, v82, 0LL);
    v140 = *(_QWORD *)&this->fields.startPos.fields.x;
    ++v141;
    v142 += 24LL;
    if ( !v140 )
      goto LABEL_136;
  }
  v150 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v150, 0.0, 0LL);
  v151 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&this->fields.originPos.fields.z = GameObjectExtensions__GetLocalPosition(v151, 0LL);
}


void __fastcall TitleInfoEventRaceRankComponent__UpdateDisp(
        TitleInfoEventRaceRankComponent_o *this,
        const MethodInfo *method)
{
  ;
}