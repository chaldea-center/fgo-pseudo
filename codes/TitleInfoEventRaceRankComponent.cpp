void __fastcall TitleInfoEventRaceRankComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct TitleInfoEventRaceRankComponent_StaticFields *static_fields; // x8
  struct TitleInfoEventRaceRankComponent_StaticFields *v4; // x8

  if ( (byte_4B14516 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventRaceRankComponent_TypeInfo, v1, v2);
    byte_4B14516 = 1;
  }
  static_fields = TitleInfoEventRaceRankComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.x = 0x42A0000000000000LL;
  static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.z = 0.0;
  v4 = TitleInfoEventRaceRankComponent_TypeInfo->static_fields;
  v4->ANIM_DURATION_FRAME_IN = 0.3;
  v4->DISP_RACE_SEC_TIME = 600LL;
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  TitleInfoEventRaceRankComponent_c *v11; // x8
  UnityEngine_GameObject_o *v12; // x21
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  float32x2_t *static_fields; // x8
  Il2CppObject *v16; // x21
  float v17; // s0
  void *v18; // x9
  UnityEngine_GameObject_o *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4B14514 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventRaceRankComponent_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenPosition___, v5, v6);
    sub_1BCA7E0(&StringLiteral_6950/*"FrameInFinish"*/, v7, v8);
    byte_4B14514 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v11 = TitleInfoEventRaceRankComponent_TypeInfo;
  v12 = gameObject;
  if ( !TitleInfoEventRaceRankComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaceRankComponent_TypeInfo, v10);
    v11 = TitleInfoEventRaceRankComponent_TypeInfo;
  }
  v13 = UITweener__Begin_object_(
          v12,
          v11->static_fields->ANIM_DURATION_FRAME_IN,
          (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v13 )
    sub_1BCAA3C(0LL, v14);
  static_fields = (float32x2_t *)TitleInfoEventRaceRankComponent_TypeInfo->static_fields;
  v16 = v13;
  v17 = this->fields.originPos.fields.z + static_fields[1].n64_f32[0];
  v13[8].klass = (Il2CppClass *)vadd_f32(
                                  *(float32x2_t *)&this->fields.originPos.fields.x,
                                  (float32x2_t)static_fields->n64_u64[0]).n64_u64[0];
  *(float *)&v13[8].monitor = v17;
  v18 = *(void **)&this->fields.originPos.fields.x;
  HIDWORD(v13[9].klass) = LODWORD(this->fields.originPos.fields.z);
  *(void **)((char *)&v13[8].monitor + 4) = v18;
  LODWORD(v13[2].klass) = 2;
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v16[5].klass = (Il2CppClass *)v19;
  sub_1BCA784((PartyOrganizationUtility_o *)&v16[5], (int64_t)v19, v20, v21, v22, v23, v24, v25);
  v26 = StringLiteral_6950/*"FrameInFinish"*/;
  v16[5].monitor = (void *)StringLiteral_6950/*"FrameInFinish"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v16[5].monitor, v26, v27, v28, v29, v30, v31, v32);
  this->fields.frameInCallBack = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.frameInCallBack,
    (int64_t)callback,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
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
  sub_1BCA784(p_frameInCallBack, 0LL, v2, v3, v4, v5, v6, v7);
  if ( frameInCallBack )
    ActionExtensions__Call(v9, 0LL);
}


void __fastcall TitleInfoEventRaceRankComponent__FrameOut(
        TitleInfoEventRaceRankComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  TitleInfoEventRaceRankComponent_c *v10; // x8
  UnityEngine_GameObject_o *v11; // x20
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x20
  float32x2_t *static_fields; // x8
  float v16; // s1
  UnityEngine_GameObject_o *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  Il2CppClass *v31; // [xsp+0h] [xbp-40h]

  if ( (byte_4B14515 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventRaceRankComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenPosition___, v4, v5);
    sub_1BCA7E0(&StringLiteral_6952/*"FrameOutFinish"*/, v6, v7);
    byte_4B14515 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v10 = TitleInfoEventRaceRankComponent_TypeInfo;
  v11 = gameObject;
  if ( !TitleInfoEventRaceRankComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaceRankComponent_TypeInfo, v9);
    v10 = TitleInfoEventRaceRankComponent_TypeInfo;
  }
  v12 = UITweener__Begin_object_(
          v11,
          v10->static_fields->ANIM_DURATION_FRAME_IN,
          (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenPosition___);
  v31 = *(Il2CppClass **)&this->fields.originPos.fields.x;
  if ( !v12 )
    sub_1BCAA3C(0LL, v13);
  v14 = v12;
  *(float *)&v12[8].monitor = this->fields.originPos.fields.z;
  v12[8].klass = v31;
  static_fields = (float32x2_t *)TitleInfoEventRaceRankComponent_TypeInfo->static_fields;
  v16 = this->fields.originPos.fields.z + static_fields[1].n64_f32[0];
  *(float32x2_t *)((char *)&v12[8].monitor + 4) = vadd_f32(
                                                    *(float32x2_t *)&this->fields.originPos.fields.x,
                                                    (float32x2_t)static_fields->n64_u64[0]);
  *((float *)&v12[9].klass + 1) = v16;
  LODWORD(v12[2].klass) = 2;
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14[5].klass = (Il2CppClass *)v17;
  sub_1BCA784((PartyOrganizationUtility_o *)&v14[5], (int64_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_6952/*"FrameOutFinish"*/;
  v14[5].monitor = (void *)StringLiteral_6952/*"FrameOutFinish"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v14[5].monitor, v24, v25, v26, v27, v28, v29, v30);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  int64_t Instance; // x0
  __int64 isGoal; // x1
  __int64 v59; // x1
  Il2CppObject *MasterData_object; // x23
  int64_t v61; // x21
  int64_t RaceStartedAt; // x0
  __int64 v63; // x1
  int64_t v64; // x23
  TitleInfoEventRaceRankComponent_c *v65; // x0
  _BOOL4 v66; // w29
  QuestGroupMaster_o *v67; // x21
  System_Int32_array *QuestIdListByEventId; // x23
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  System_Collections_Generic_List_int__o *v72; // x20
  __int64 v73; // x8
  unsigned __int64 v74; // x25
  int32_t *v75; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v77; // x9
  __int64 size; // x10
  int v79; // w8
  _BOOL4 v80; // w26
  int32_t i; // w21
  __int64 v82; // x1
  int32_t Item; // w23
  int32_t v84; // w8
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *GroupIdData; // x20
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  System_Collections_Generic_List_bool__o *v89; // x21
  int32_t v90; // w23
  int32_t v91; // w24
  __int64 v92; // x1
  int32_t v93; // w25
  struct System_Boolean_array *v94; // x8
  _QWORD *v95; // x9
  __int64 v96; // x10
  struct UISprite_array *carIcon; // x8
  int v98; // w28
  __int64 v99; // x26
  int max_length; // w9
  unsigned int v101; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_array *v103; // x8
  struct UISprite_array *v104; // x8
  UISprite_o *v105; // x23
  System_String_o *v106; // x0
  __int64 v107; // x1
  System_String_o *v108; // x24
  bool v109; // w23
  struct UISprite_array *v110; // x8
  UnityEngine_GameObject_o *v111; // x0
  System_String_o *v112; // x0
  __int64 v113; // x1
  System_String_o *v114; // x24
  struct UISprite_array *v115; // x8
  struct UISprite_array *carBackSpr; // x8
  __int64 v117; // x24
  unsigned __int64 v118; // x9
  unsigned __int64 v119; // x26
  UISprite_o *v120; // x22
  System_String_o *v121; // x0
  __int64 v122; // x1
  System_String_o *v123; // x23
  struct UISprite_array *v124; // x8
  struct UISprite_array *rankSpr; // x8
  unsigned __int64 v126; // x24
  unsigned __int64 v127; // x9
  UISprite_o *v128; // x22
  System_String_o *v129; // x23
  System_String_o *v130; // x0
  __int64 v131; // x1
  System_String_o *v132; // x23
  struct UISprite_array *goalIcon; // x8
  int32_t v134; // w22
  il2cpp_array_size_t v135; // w9
  UISprite_o *v136; // x23
  System_String_o *v137; // x0
  __int64 v138; // x1
  System_String_o *v139; // x24
  struct UISprite_array *v140; // x8
  UnityEngine_Behaviour_o *v141; // x23
  int v142; // w8
  UnityEngine_GameObject_o *v143; // x0
  UnityEngine_GameObject_o *v144; // x0
  int v145; // [xsp+Ch] [xbp-A4h]
  EventRaceMaster_GroupRankData_o groupId; // [xsp+10h] [xbp-A0h] BYREF
  int v147; // [xsp+2Ch] [xbp-84h] BYREF
  EventRaceMaster_GroupRankData_o v148; // [xsp+30h] [xbp-80h] BYREF
  int32_t eventIda; // [xsp+4Ch] [xbp-64h] BYREF

  eventIda = eventId;
  if ( (byte_4B14513 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&termId);
    sub_1BCA7E0(&CondType_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaceMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaceResultMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestGroupMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_bool__Add__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_bool___ctor__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Count__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_bool__get_Item__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v35, v36);
    sub_1BCA7E0(&System_Collections_Generic_List_bool__TypeInfo, v37, v38);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v39, v40);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v41, v42);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43, v44);
    sub_1BCA7E0(&TitleInfoEventRaceRankComponent_TypeInfo, v45, v46);
    sub_1BCA7E0(&StringLiteral_22995/*"race_status_goal_"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_22996/*"race_status_rank_"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_22994/*"race_status_"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_1218/*"000"*/, v55, v56);
    byte_4B14513 = 1;
  }
  memset(&v148, 0, sizeof(v148));
  v147 = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_120;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_120;
  DataMasterBase_object__object__int___GetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    eventId,
    (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_120;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v59);
  Instance = NetworkManager__getTime(0LL);
  if ( !MasterData_object )
    goto LABEL_120;
  v61 = Instance;
  RaceStartedAt = EventRaceResultMaster__getRaceStartedAt(
                    (EventRaceResultMaster_o *)MasterData_object,
                    eventId,
                    termId,
                    0LL);
  if ( RaceStartedAt )
  {
    v64 = RaceStartedAt;
    v65 = TitleInfoEventRaceRankComponent_TypeInfo;
    if ( !TitleInfoEventRaceRankComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaceRankComponent_TypeInfo, v63);
      v65 = TitleInfoEventRaceRankComponent_TypeInfo;
    }
    v66 = v61 - v64 > v65->static_fields->DISP_RACE_SEC_TIME;
  }
  else
  {
    v66 = 0;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_120;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_120;
  v67 = (QuestGroupMaster_o *)Instance;
  QuestIdListByEventId = QuestGroupMaster__GetQuestIdListByEventId((QuestGroupMaster_o *)Instance, eventId, 0LL);
  v72 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v69,
                                                    v70,
                                                    v71);
  System_Collections_Generic_List_int____ctor(
    v72,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !QuestIdListByEventId )
    goto LABEL_120;
  v73 = *(_QWORD *)&QuestIdListByEventId->max_length;
  if ( (int)v73 >= 1 )
  {
    v74 = 0LL;
    v75 = &QuestIdListByEventId->m_Items[1];
    do
    {
      if ( v74 >= (unsigned int)v73 )
LABEL_122:
        sub_1BCAA44(Instance, isGoal);
      Instance = QuestGroupMaster__GetGroupId(v67, v75[v74], 5, 0LL);
      if ( (_DWORD)Instance == termId )
      {
        if ( v74 >= QuestIdListByEventId->max_length )
          goto LABEL_122;
        if ( !v72 )
          goto LABEL_120;
        isGoal = (unsigned int)v75[v74];
        items = v72->fields._items;
        v77 = Method_System_Collections_Generic_List_int__Add__;
        ++v72->fields._version;
        if ( !items )
          goto LABEL_120;
        size = v72->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v72,
            isGoal,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
        }
        else
        {
          v72->fields._size = size + 1;
          items->m_Items[size + 1] = isGoal;
        }
      }
      LODWORD(v73) = QuestIdListByEventId->max_length;
    }
    while ( (__int64)++v74 < (int)v73 );
  }
  if ( !v72 )
    goto LABEL_120;
  v79 = v72->fields._size;
  v80 = v79 > 0;
  if ( v79 >= 1 )
  {
    for ( i = 0; i < v84; v80 = i < v84 )
    {
      Item = System_Collections_Generic_List_int___get_Item(
               v72,
               i,
               (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v82);
      if ( CondType__IsOpen(1, Item, 0LL, 0, 0LL, 0LL) )
        break;
      v84 = v72->fields._size;
      ++i;
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0
    || (GroupIdData = EventRaceMaster__getGroupIdData((EventRaceMaster_o *)Instance, eventIda, termId, 0LL),
        v89 = (System_Collections_Generic_List_bool__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_bool__TypeInfo,
                                                           v86,
                                                           v87,
                                                           v88),
        System_Collections_Generic_List_bool____ctor(
          v89,
          (const MethodInfo_35583C4 *)Method_System_Collections_Generic_List_bool___ctor__),
        !GroupIdData) )
  {
LABEL_120:
    sub_1BCAA3C(Instance, isGoal);
  }
  if ( GroupIdData->fields._size >= 1 )
  {
    v90 = 0;
    do
    {
      v91 = eventIda;
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___get_Item(
        &groupId,
        GroupIdData,
        v90,
        (const MethodInfo_3618A1C *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__);
      v93 = groupId.fields.groupId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v92);
      Instance = CondType__IsEventRaceGoalScriptPlayed(v91, termId, v93, 0LL);
      if ( !v89 )
        goto LABEL_120;
      v94 = v89->fields._items;
      v95 = Method_System_Collections_Generic_List_bool__Add__;
      ++v89->fields._version;
      if ( !v94 )
        goto LABEL_120;
      v96 = v89->fields._size;
      if ( (unsigned int)v96 >= v94->max_length )
      {
        System_Collections_Generic_List_bool___AddWithResize(
          v89,
          Instance & 1,
          *(const MethodInfo_3558C28 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
      }
      else
      {
        v89->fields._size = v96 + 1;
        v94->m_Items[v96 + 4] = Instance & 1;
      }
    }
    while ( ++v90 < GroupIdData->fields._size );
  }
  carIcon = this->fields.carIcon;
  if ( !carIcon )
    goto LABEL_120;
  v98 = v66 && v80;
  v99 = 4LL;
  v145 = v98;
  while ( 1 )
  {
    max_length = carIcon->max_length;
    v101 = v99 - 4;
    if ( (int)v99 - 4 >= max_length )
      break;
    if ( v101 >= max_length )
      goto LABEL_122;
    Instance = *((_QWORD *)&carIcon->obj.klass + v99);
    if ( !Instance )
      goto LABEL_120;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    GameObjectExtensions__SetLocalPosition(gameObject, this->fields.startPos, 0LL);
    v103 = this->fields.carIcon;
    if ( !v103 )
      goto LABEL_120;
    if ( v101 >= v103->max_length )
      goto LABEL_122;
    Instance = *((_QWORD *)&v103->obj.klass + v99);
    if ( !Instance )
      goto LABEL_120;
    if ( (v98 & 1) == 0 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
      goto LABEL_80;
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
    v104 = this->fields.carIcon;
    if ( !v104 )
      goto LABEL_120;
    if ( v101 >= v104->max_length )
      goto LABEL_122;
    v105 = (UISprite_o *)*((_QWORD *)&v104->obj.klass + v99);
    if ( GroupIdData->fields._size <= (signed int)v101 )
    {
      v112 = System_Int32__ToString((int32_t)&eventIda, 0LL);
      v114 = System_String__Concat_62412480(
               (System_String_o *)StringLiteral_22994/*"race_status_"*/,
               v112,
               (System_String_o *)StringLiteral_1218/*"000"*/,
               0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v113);
      Instance = AtlasManager__SetEventUI(v105, v114, 0LL);
      if ( (Instance & 1) != 0 )
        goto LABEL_80;
    }
    else
    {
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___get_Item(
        &groupId,
        GroupIdData,
        v101,
        (const MethodInfo_3618A1C *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__);
      v148 = groupId;
      v106 = System_Int32__ToString((int32_t)&v148, 0LL);
      v108 = System_String__Concat_62401220((System_String_o *)StringLiteral_22994/*"race_status_"*/, v106, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v107);
      v109 = AtlasManager__SetEventUI(v105, v108, 0LL);
      Instance = (int64_t)System_Collections_Generic_List_EventRaceMaster_GroupRankData___get_Item(
                            &groupId,
                            GroupIdData,
                            v101,
                            (const MethodInfo_3618A1C *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__);
      v98 = v145;
      if ( !groupId.fields.isGoal )
        goto LABEL_75;
      if ( !v89 )
        goto LABEL_120;
      Instance = System_Collections_Generic_List_bool___get_Item(
                   v89,
                   v101,
                   (const MethodInfo_3558928 *)Method_System_Collections_Generic_List_bool__get_Item__);
      if ( (Instance & 1) != 0 )
      {
        v110 = this->fields.carIcon;
        if ( !v110 )
          goto LABEL_120;
        if ( v101 >= v110->max_length )
          goto LABEL_122;
        Instance = *((_QWORD *)&v110->obj.klass + v99);
        if ( !Instance )
          goto LABEL_120;
        v111 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        GameObjectExtensions__SetLocalPosition(v111, this->fields.goalPos, 0LL);
        if ( v109 )
          goto LABEL_80;
      }
      else
      {
LABEL_75:
        if ( v109 )
          goto LABEL_80;
      }
    }
    v115 = this->fields.carIcon;
    if ( !v115 )
      goto LABEL_120;
    if ( v101 >= v115->max_length )
      goto LABEL_122;
    Instance = *((_QWORD *)&v115->obj.klass + v99);
    if ( !Instance )
      goto LABEL_120;
    UISprite__set_atlas((UISprite_o *)Instance, 0LL, 0LL);
LABEL_80:
    carIcon = this->fields.carIcon;
    ++v99;
    if ( !carIcon )
      goto LABEL_120;
  }
  carBackSpr = this->fields.carBackSpr;
  if ( !carBackSpr )
    goto LABEL_120;
  v117 = 4LL;
  while ( 1 )
  {
    v118 = carBackSpr->max_length;
    v119 = v117 - 4;
    if ( v117 - 4 >= (int)v118 )
      break;
    if ( v119 >= v118 )
      goto LABEL_122;
    v120 = (UISprite_o *)*((_QWORD *)&carBackSpr->obj.klass + v117);
    v121 = System_Int32__ToString((int32_t)&eventIda, 0LL);
    v123 = System_String__Concat_62412480(
             (System_String_o *)StringLiteral_22994/*"race_status_"*/,
             v121,
             (System_String_o *)StringLiteral_1218/*"000"*/,
             0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v122);
    Instance = AtlasManager__SetEventUI(v120, v123, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v124 = this->fields.carBackSpr;
      if ( !v124 )
        goto LABEL_120;
      if ( v119 >= v124->max_length )
        goto LABEL_122;
      Instance = *((_QWORD *)&v124->obj.klass + v117);
      if ( !Instance )
        goto LABEL_120;
      UISprite__set_atlas((UISprite_o *)Instance, 0LL, 0LL);
    }
    carBackSpr = this->fields.carBackSpr;
    ++v117;
    if ( !carBackSpr )
      goto LABEL_120;
  }
  rankSpr = this->fields.rankSpr;
  if ( !rankSpr )
    goto LABEL_120;
  v126 = 0LL;
  while ( 1 )
  {
    v127 = rankSpr->max_length;
    if ( (__int64)v126 >= (int)v127 )
      break;
    v147 = v126 + 1;
    if ( v126 >= v127 )
      goto LABEL_122;
    v128 = rankSpr->m_Items[v126];
    v129 = System_Int32__ToString((int32_t)&eventIda, 0LL);
    v130 = System_Int32__ToString((int32_t)&v147, 0LL);
    v132 = System_String__Concat_62414484(
             (System_String_o *)StringLiteral_22996/*"race_status_rank_"*/,
             v129,
             (System_String_o *)StringLiteral_16290/*"_"*/,
             v130,
             0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v131);
    Instance = AtlasManager__SetEventUI(v128, v132, 0LL);
    rankSpr = this->fields.rankSpr;
    ++v126;
    if ( !rankSpr )
      goto LABEL_120;
  }
  goalIcon = this->fields.goalIcon;
  if ( !goalIcon )
    goto LABEL_120;
  v134 = 0;
  while ( 1 )
  {
    v135 = goalIcon->max_length;
    if ( v134 >= (int)v135 )
      break;
    if ( v134 >= v135 )
      goto LABEL_122;
    v136 = goalIcon->m_Items[v134];
    v137 = System_Int32__ToString((int32_t)&eventIda, 0LL);
    v139 = System_String__Concat_62401220((System_String_o *)StringLiteral_22995/*"race_status_goal_"*/, v137, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v138);
    Instance = AtlasManager__SetEventUI(v136, v139, 0LL);
    v140 = this->fields.goalIcon;
    if ( v140 )
    {
      if ( v134 >= v140->max_length )
        goto LABEL_122;
      v141 = (UnityEngine_Behaviour_o *)v140->m_Items[v134];
      if ( GroupIdData->fields._size <= v134 )
      {
        v142 = 0;
      }
      else
      {
        if ( !v89 )
          goto LABEL_120;
        Instance = System_Collections_Generic_List_bool___get_Item(
                     v89,
                     v134,
                     (const MethodInfo_3558928 *)Method_System_Collections_Generic_List_bool__get_Item__);
        v142 = Instance & 1;
      }
      if ( (v142 & v98) != 0 )
      {
        Instance = (int64_t)System_Collections_Generic_List_EventRaceMaster_GroupRankData___get_Item(
                              &groupId,
                              GroupIdData,
                              v134,
                              (const MethodInfo_3618A1C *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__);
        isGoal = groupId.fields.isGoal;
        if ( !v141 )
          goto LABEL_120;
      }
      else
      {
        isGoal = 0LL;
        if ( !v141 )
          goto LABEL_120;
      }
      UnityEngine_Behaviour__set_enabled(v141, isGoal, 0LL);
      goalIcon = this->fields.goalIcon;
      ++v134;
      if ( goalIcon )
        continue;
    }
    goto LABEL_120;
  }
  v143 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v143, 0.0, 0LL);
  v144 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this->fields.originPos = GameObjectExtensions__GetLocalPosition(v144, 0LL);
}


void __fastcall TitleInfoEventRaceRankComponent__UpdateDisp(
        TitleInfoEventRaceRankComponent_o *this,
        const MethodInfo *method)
{
  ;
}