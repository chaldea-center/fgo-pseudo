void __fastcall EventSvtControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1A24B & 1) == 0 )
  {
    sub_1BCA7E0(&EventSvtControl_TypeInfo, v1, v2);
    byte_4B1A24B = 1;
  }
  LODWORD(EventSvtControl_TypeInfo->static_fields->BASE_MOVE_TIME) = (struct EventSvtControl_StaticFields)1053609165;
}


void __fastcall EventSvtControl___ctor(EventSvtControl_o *this, const MethodInfo *method)
{
  this->fields.volume = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventSvtControl__CallPerformanceEndAction(EventSvtControl_o *this, const MethodInfo *method)
{
  struct System_Action_o *performanceEndAction; // x8

  performanceEndAction = this->fields.performanceEndAction;
  if ( performanceEndAction )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))performanceEndAction->fields.m_target)(
      performanceEndAction->fields.original_method_info,
      *(_QWORD *)&performanceEndAction->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventSvtControl__EndPerformance(
        EventSvtControl_o *this,
        System_Action_o *endAction,
        float speed,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *objectRef; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  Il2CppObject *m_target; // x2
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v22; // x1
  System_Action_o *v23; // x21
  struct System_Action_o *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Action_c *v31; // x1
  struct System_Action_o **p_performanceEndAction; // x20
  __int64 v33; // x1
  UnityEngine_GameObject_o *transform; // x0
  float v35; // s0
  float v36; // s1
  float v37; // s2
  float v38; // s10
  float v39; // s8
  float v40; // s9
  __int64 v41; // x1
  Il2CppObject *ComponentInChildren_object; // x21
  struct System_Action_o *v43; // x8
  UnityEngine_GameObject_o *v44; // x20
  EventSvtControl_c *v45; // x0
  float v46; // s10
  UnityEngine_GameObject_o *v47; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x1
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  EventSvtControl_o *v62; // x0
  const MethodInfo *v63; // x1
  UnityEngine_Vector3_o v64; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4B1A249 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, endAction, method);
    sub_1BCA7E0(&Method_EventSvtControl_ReleasePerformance__, v6, v7);
    sub_1BCA7E0(&EventSvtControl_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_4035/*"CallPerformanceEndAction"*/, v14, v15);
    byte_4B1A249 = 1;
  }
  objectRef = (UnityEngine_Object_o *)this->fields.objectRef;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, endAction);
  if ( UnityEngine_Object__op_Equality(objectRef, 0LL, 0LL) )
  {
    if ( endAction )
    {
      m_target = endAction->fields.m_target;
      original_method_info = endAction->fields.original_method_info;
      v22 = *(_QWORD *)&endAction->fields.extra_arg;
LABEL_21:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64))m_target)(original_method_info, v22);
      return;
    }
    return;
  }
  v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v18, v19);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_EventSvtControl_ReleasePerformance__, 0LL);
  v24 = (struct System_Action_o *)System_Delegate__Combine(
                                    (System_Delegate_o *)endAction,
                                    (System_Delegate_o *)v23,
                                    0LL);
  if ( v24 )
  {
    v31 = System_Action_TypeInfo;
    if ( v24->klass != System_Action_TypeInfo || (this->fields.performanceEndAction = v24, v24->klass != v31) )
    {
      sub_1BCACFC(v24);
      EventSvtControl__CallPerformanceEndAction(v62, v63);
      return;
    }
    p_performanceEndAction = &this->fields.performanceEndAction;
  }
  else
  {
    p_performanceEndAction = &this->fields.performanceEndAction;
    this->fields.performanceEndAction = 0LL;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)p_performanceEndAction, (int64_t)v24, v25, v26, v27, v28, v29, v30);
  transform = this->fields.objectRef;
  if ( !transform
    || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v35 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL),
        (transform = this->fields.objectRef) == 0LL) )
  {
LABEL_28:
    sub_1BCAA3C(transform, v33);
  }
  v38 = v35;
  v39 = v36;
  v40 = v37;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 transform,
                                 (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                            (UnityEngine_Object_o *)ComponentInChildren_object,
                                            0LL,
                                            0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( ComponentInChildren_object )
    {
      v44 = this->fields.objectRef;
      v45 = EventSvtControl_TypeInfo;
      v46 = v38 - (float)SLODWORD(ComponentInChildren_object[10].monitor);
      if ( !EventSvtControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSvtControl_TypeInfo, v33);
        v45 = EventSvtControl_TypeInfo;
      }
      v64.fields.x = v46;
      v64.fields.y = v39;
      v64.fields.z = v40;
      transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v44, v45->static_fields->BASE_MOVE_TIME, v64, 0LL);
      if ( transform )
      {
        v47 = transform;
        LODWORD(transform[1].monitor) = 3;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v47[3].monitor = gameObject;
        sub_1BCA784((PartyOrganizationUtility_o *)&v47[3].monitor, (int64_t)gameObject, v49, v50, v51, v52, v53, v54);
        v55 = StringLiteral_4035/*"CallPerformanceEndAction"*/;
        *(_QWORD *)&v47[3].fields.m_CachedPtr = StringLiteral_4035/*"CallPerformanceEndAction"*/;
        sub_1BCA784((PartyOrganizationUtility_o *)&v47[3].fields, v55, v56, v57, v58, v59, v60, v61);
        return;
      }
    }
    goto LABEL_28;
  }
  v43 = *p_performanceEndAction;
  if ( *p_performanceEndAction )
  {
    m_target = v43->fields.m_target;
    original_method_info = v43->fields.original_method_info;
    v22 = *(_QWORD *)&v43->fields.extra_arg;
    goto LABEL_21;
  }
}


void __fastcall EventSvtControl__EndPlay(EventSvtControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  EventSvtControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  struct ServantVoiceData_array *randomVoiceList; // x8
  int v8; // w9
  ServantVoiceData_o *v9; // x8
  ServantVoicePerformance_o *additionalPerformances; // x20
  System_Action_o *v11; // x21
  const MethodInfo *v12; // x5

  v4 = this;
  if ( (byte_4B1A23A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (EventSvtControl_o *)sub_1BCA7E0(&Method_EventSvtControl_EndPlayProc__, v5, v6);
    byte_4B1A23A = 1;
  }
  if ( !v4->fields.isDead )
  {
    if ( v4->fields.isSkipPerformance )
    {
      EventSvtControl__EndPlayProc(v4, method);
    }
    else
    {
      randomVoiceList = v4->fields.randomVoiceList;
      if ( !randomVoiceList )
        goto LABEL_10;
      v8 = v4->fields.playCnt - 1;
      if ( v8 >= randomVoiceList->max_length )
        sub_1BCAA44(this, method);
      v9 = randomVoiceList->m_Items[v8];
      if ( !v9 )
LABEL_10:
        sub_1BCAA3C(this, method);
      additionalPerformances = v9->fields.additionalPerformances;
      v11 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
      System_Action___ctor(v11, (Il2CppObject *)v4, Method_EventSvtControl_EndPlayProc__, 0LL);
      EventSvtControl__PlayPerformance(v4, additionalPerformances, 2, 1, v11, v12);
    }
  }
}


void __fastcall EventSvtControl__EndPlayProc(EventSvtControl_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  EventSvtControl_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 playCnt; // x8
  struct ServantVoiceData_array *randomVoiceList; // x9
  ServantVoiceData_o *v13; // x8
  PartyOrganizationUtility_o *p_player; // x0
  PartyOrganizationUtility_o *p_callbakEndPlay; // x0
  System_Action_o *callbakEndPlay; // x20
  PartyOrganizationUtility_o *p_callbackStopVoice; // x0
  struct System_Action_o *callbackStopVoice; // x20

  v8 = this;
  if ( (byte_4B1A23B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23961/*"svtVoicePlay"*/, method, v2);
    this = (EventSvtControl_o *)sub_1BCA7E0(&StringLiteral_5563/*"END_PLAY"*/, v9, v10);
    byte_4B1A23B = 1;
  }
  playCnt = v8->fields.playCnt;
  if ( (int)playCnt < v8->fields.maxPlayCnt )
  {
    randomVoiceList = v8->fields.randomVoiceList;
    if ( randomVoiceList )
    {
      if ( (unsigned int)playCnt >= randomVoiceList->max_length )
        sub_1BCAA44(this, method);
      v13 = randomVoiceList->m_Items[playCnt];
      if ( v13 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v8,
          (System_String_o *)StringLiteral_23961/*"svtVoicePlay"*/,
          v13->fields.delay,
          0LL);
        return;
      }
    }
LABEL_16:
    sub_1BCAA3C(this, method);
  }
  p_player = (PartyOrganizationUtility_o *)&v8->fields.player;
  if ( v8->fields.player )
  {
    p_player->klass = 0LL;
    sub_1BCA784(p_player, 0LL, v2, v3, v4, v5, v6, v7);
  }
  p_callbakEndPlay = (PartyOrganizationUtility_o *)&v8->fields.callbakEndPlay;
  callbakEndPlay = v8->fields.callbakEndPlay;
  v8->fields.playCnt = 0;
  *(_WORD *)&v8->fields.isUnSkippable = 0;
  v8->fields.isPlayBoxGachaVoice = 0;
  if ( callbakEndPlay )
  {
    p_callbakEndPlay->klass = 0LL;
    sub_1BCA784(p_callbakEndPlay, 0LL, v2, v3, v4, v5, v6, v7);
    ActionExtensions__Call(callbakEndPlay, 0LL);
  }
  else
  {
    p_callbackStopVoice = (PartyOrganizationUtility_o *)&v8->fields.callbackStopVoice;
    callbackStopVoice = v8->fields.callbackStopVoice;
    if ( callbackStopVoice )
    {
      p_callbackStopVoice->klass = 0LL;
      sub_1BCA784(p_callbackStopVoice, 0LL, v2, v3, v4, v5, v6, v7);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackStopVoice->fields.m_target)(
        callbackStopVoice->fields.original_method_info,
        *(_QWORD *)&callbackStopVoice->fields.extra_arg);
    }
    else
    {
      this = (EventSvtControl_o *)v8->fields.fsm;
      if ( !this )
        goto LABEL_16;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5563/*"END_PLAY"*/, 0LL);
    }
  }
}


bool __fastcall EventSvtControl__GetIsUnSkippableByVoiceId(
        EventSvtControl_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListBoxGacha; // x0
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v16; // w23
  __int64 v17; // x24
  int v18; // w21
  bool v19; // w19
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B1A245 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, voiceId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v9, v10);
    byte_4B1A245 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  voiceListBoxGacha = this->fields.voiceListBoxGacha;
  if ( !voiceListBoxGacha )
    sub_1BCAA3C(0LL, voiceId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)voiceListBoxGacha,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v22 = v21;
  do
  {
LABEL_5:
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v12 )
    {
      v19 = 0;
      v18 = 8;
      goto LABEL_15;
    }
    current = v22.fields._current;
    if ( !v22.fields._current )
      sub_1BCAA3C(v12, v13);
    monitor = (int)v22.fields._current[1].monitor;
  }
  while ( monitor < 1 );
  v16 = 0;
  while ( 1 )
  {
    if ( v16 >= monitor )
      sub_1BCAA44(v12, v13);
    v17 = *((_QWORD *)&current[2].klass + (int)v16);
    if ( !v17 )
      sub_1BCAA3C(v12, v13);
    v12 = System_String__op_Equality(*(System_String_o **)(v17 + 16), voiceId, 0LL);
    if ( v12 )
      break;
    monitor = (int)current[1].monitor;
    if ( (int)++v16 >= monitor )
      goto LABEL_5;
  }
  v18 = 7;
  v19 = *(_BYTE *)(v17 + 68) != 0;
LABEL_15:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  return v19 && v18 == 7;
}


void __fastcall EventSvtControl__OnDestroy(EventSvtControl_o *this, const MethodInfo *method)
{
  this->fields.isDead = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventSvtControl__PlayEventCraftVoice(
        EventSvtControl_o *this,
        int32_t svtId,
        System_String_array *targetVoiceIds,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *v6; // x21
  int32_t v7; // w22
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
  VoicePlayCondMaster_o *Master_object; // x0
  System_String_o *v38; // x1
  int64_t v39; // x2
  __int64 v40; // x3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int max_length; // w8
  Il2CppObject *Item; // x21
  VoicePlayCondMaster_o *v47; // x23
  int64_t v48; // x2
  __int64 v49; // x3
  unsigned __int64 v50; // x29
  __int64 v51; // x28
  System_String_o **m_Items; // x20
  __int64 v53; // x26
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x1
  System_String_o **v61; // x25
  System_String_o **v62; // x23
  System_String_array *v63; // x20
  int32_t v64; // w21
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListCraft; // x22
  __int64 v66; // x19
  System_Func_object__bool__o *v67; // x28
  System_Collections_Generic_List_T__o *v68; // x0
  System_Func_T__bool__o *v69; // x1
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  struct System_Object_array *items; // x8
  _QWORD *v75; // x9
  __int64 size; // x10
  Il2CppClass **v77; // x0
  int32_t v78; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  _BOOL8 v86; // x0
  __int64 v87; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v90; // w23
  __int64 v91; // x8
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  __int64 v98; // x0
  const MethodInfo *v99; // x1
  System_Action_o *v100; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_object__o *v101; // [xsp+18h] [xbp-A8h]
  VoicePlayCondMaster_o *v102; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v103; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v104; // [xsp+40h] [xbp-80h] BYREF

  v6 = targetVoiceIds;
  v7 = svtId;
  if ( (byte_4B1A243 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_ServantVoiceData_____, *(_QWORD *)&svtId, targetVoiceIds);
    sub_1BCA7E0(&Method_DataManager_GetMaster_VoicePlayCondMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v17, v18);
    sub_1BCA7E0(&System_Func_ServantVoiceData____bool__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v29, v30);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_EventSvtControl___c__DisplayClass61_0__PlayEventCraftVoice_b__0__, v33, v34);
    sub_1BCA7E0(&EventSvtControl___c__DisplayClass61_0_TypeInfo, v35, v36);
    byte_4B1A243 = 1;
  }
  memset(&v104, 0, sizeof(v104));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !v6 || !*(_QWORD *)&v6->max_length )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId);
  Master_object = (VoicePlayCondMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  max_length = v6->max_length;
  if ( max_length < 2 )
  {
    if ( max_length )
    {
      Item = (Il2CppObject *)v6->m_Items[0];
      goto LABEL_27;
    }
LABEL_45:
    sub_1BCAA44(Master_object, v38);
  }
  v100 = callback;
  v47 = Master_object;
  v101 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_string__TypeInfo,
                                                        v38,
                                                        v39,
                                                        v40);
  System_Collections_Generic_List_object____ctor(
    v101,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)*(_QWORD *)&v6->max_length >= 1 )
  {
    v50 = 0LL;
    v51 = (unsigned int)*(_QWORD *)&v6->max_length;
    m_Items = v6->m_Items;
    v102 = v47;
    do
    {
      v53 = sub_1BCAA2C(EventSvtControl___c__DisplayClass61_0_TypeInfo, v38, v48, v49);
      System_Object___ctor((Il2CppObject *)v53, 0LL);
      if ( v50 >= v6->max_length )
        goto LABEL_45;
      if ( !v53 )
        goto LABEL_44;
      v60 = (int64_t)m_Items[v50];
      *(_QWORD *)(v53 + 16) = v60;
      v61 = (System_String_o **)(v53 + 16);
      sub_1BCA784((PartyOrganizationUtility_o *)(v53 + 16), v60, v54, v55, v56, v57, v58, v59);
      if ( !v47 )
        goto LABEL_44;
      Master_object = (VoicePlayCondMaster_o *)VoicePlayCondMaster__isVoicePlay(
                                                 v47,
                                                 v7,
                                                 *v61,
                                                 0LL,
                                                 -1LL,
                                                 -1,
                                                 0LL,
                                                 0LL,
                                                 0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v62 = m_Items;
        v63 = v6;
        v64 = v7;
        voiceListCraft = this->fields.voiceListCraft;
        v66 = v51;
        v67 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_ServantVoiceData____bool__TypeInfo, v38, v48, v49);
        System_Func_object__bool____ctor(
          v67,
          (Il2CppObject *)v53,
          Method_EventSvtControl___c__DisplayClass61_0__PlayEventCraftVoice_b__0__,
          0LL);
        v68 = (System_Collections_Generic_List_T__o *)voiceListCraft;
        v7 = v64;
        v6 = v63;
        m_Items = v62;
        v47 = v102;
        v69 = (System_Func_T__bool__o *)v67;
        v51 = v66;
        Master_object = (VoicePlayCondMaster_o *)BasicHelper__Any_object_(
                                                   v68,
                                                   v69,
                                                   (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_ServantVoiceData_____);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !v101 )
            goto LABEL_44;
          v38 = *v61;
          items = v101->fields._items;
          v75 = Method_System_Collections_Generic_List_string__Add__;
          ++v101->fields._version;
          if ( !items )
            goto LABEL_44;
          size = v101->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v101,
              (Il2CppObject *)v38,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
          }
          else
          {
            v77 = &items->obj.klass + size;
            v101->fields._size = size + 1;
            v77[4] = (Il2CppClass *)v38;
            sub_1BCA784((PartyOrganizationUtility_o *)(v77 + 4), (int64_t)v38, v48, v49, v70, v71, v72, v73);
          }
        }
      }
    }
    while ( v51 != ++v50 );
  }
  if ( !v101 )
    goto LABEL_44;
  v78 = UnityEngine_Random__Range_70113984(0, v101->fields._size, 0LL);
  callback = v100;
  Item = System_Collections_Generic_List_object___get_Item(
           v101,
           v78,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_27:
  this->fields.callbakEndPlay = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbakEndPlay,
    (int64_t)callback,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.randomVoiceList, 0LL, v80, v81, v82, v83, v84, v85);
  Master_object = (VoicePlayCondMaster_o *)this->fields.voiceListCraft;
  if ( !Master_object )
LABEL_44:
    sub_1BCAA3C(Master_object, v38);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v103,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v104 = v103;
LABEL_29:
  while ( 1 )
  {
    v86 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v104,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v86 )
      break;
    current = v104.fields._current;
    if ( !v104.fields._current )
      sub_1BCAA3C(v86, v87);
    monitor = (int)v104.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v90 = 0;
      while ( 1 )
      {
        if ( v90 >= monitor )
          sub_1BCAA44(v86, v87);
        v91 = *((_QWORD *)&current[2].klass + (int)v90);
        if ( !v91 )
          sub_1BCAA3C(v86, v87);
        v86 = System_String__op_Equality(*(System_String_o **)(v91 + 16), (System_String_o *)Item, 0LL);
        if ( v86 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v90 >= monitor )
          goto LABEL_29;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.randomVoiceList,
        (int64_t)current,
        v92,
        v93,
        v94,
        v95,
        v96,
        v97);
      if ( !*p_randomVoiceList )
        sub_1BCAA3C(v98, v99);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v99);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v104,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventSvtControl__PlayEventRecipeVoice(
        EventSvtControl_o *this,
        int32_t svtId,
        System_String_array *targetVoiceIds,
        System_Action_o *callback,
        const MethodInfo *method)
{
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
  DataManager_o *Instance; // x0
  __int64 v30; // x1
  int64_t v31; // x2
  __int64 v32; // x3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  signed int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v39; // x24
  System_Collections_Generic_List_object__o *v40; // x23
  __int64 v41; // x26
  __int64 v42; // x27
  System_String_o *v43; // x25
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  int32_t v54; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  _BOOL8 v62; // x0
  __int64 v63; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v66; // w24
  __int64 v67; // x8
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  __int64 v74; // x0
  const MethodInfo *v75; // x1
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B1A241 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId, targetVoiceIds);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    byte_4B1A241 = 1;
  }
  memset(&v77, 0, sizeof(v77));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !*(_QWORD *)&targetVoiceIds->max_length )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_42:
    sub_1BCAA3C(Instance, v30);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
LABEL_22:
      sub_1BCAA44(Instance, v30);
    Item = targetVoiceIds->m_Items[0];
    goto LABEL_25;
  }
  v39 = (VoicePlayCondMaster_o *)Instance;
  v40 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v30,
                                                       v31,
                                                       v32);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)*(_QWORD *)&targetVoiceIds->max_length >= 1 )
  {
    v41 = 0LL;
    v42 = (unsigned int)*(_QWORD *)&targetVoiceIds->max_length - 1LL;
    while ( v39 )
    {
      v43 = targetVoiceIds->m_Items[v41];
      Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v39, svtId, v43, 0LL, -1LL, -1, 0LL, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v40 )
          goto LABEL_42;
        items = v40->fields._items;
        v51 = Method_System_Collections_Generic_List_string__Add__;
        ++v40->fields._version;
        if ( !items )
          goto LABEL_42;
        size = v40->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v40,
            (Il2CppObject *)v43,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
        }
        else
        {
          v53 = &items->obj.klass + size;
          v40->fields._size = size + 1;
          v53[4] = (Il2CppClass *)v43;
          sub_1BCA784((PartyOrganizationUtility_o *)(v53 + 4), (int64_t)v43, v44, v45, v46, v47, v48, v49);
        }
      }
      if ( v42 == v41 )
        goto LABEL_23;
      if ( ++v41 >= (unsigned __int64)targetVoiceIds->max_length )
        goto LABEL_22;
    }
    goto LABEL_42;
  }
LABEL_23:
  if ( !v40 )
    goto LABEL_42;
  v54 = UnityEngine_Random__Range_70113984(0, v40->fields._size, 0LL);
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v40,
                              v54,
                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_25:
  this->fields.callbakEndPlay = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbakEndPlay,
    (int64_t)callback,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.randomVoiceList, 0LL, v56, v57, v58, v59, v60, v61);
  Instance = (DataManager_o *)this->fields.voiceListRecipe;
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v76,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v77 = v76;
LABEL_27:
  while ( 1 )
  {
    v62 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v77,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v62 )
      break;
    current = v77.fields._current;
    if ( !v77.fields._current )
      sub_1BCAA3C(v62, v63);
    monitor = (int)v77.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v66 = 0;
      while ( 1 )
      {
        if ( v66 >= monitor )
          sub_1BCAA44(v62, v63);
        v67 = *((_QWORD *)&current[2].klass + (int)v66);
        if ( !v67 )
          sub_1BCAA3C(v62, v63);
        v62 = System_String__op_Equality(*(System_String_o **)(v67 + 16), Item, 0LL);
        if ( v62 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v66 >= monitor )
          goto LABEL_27;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.randomVoiceList,
        (int64_t)current,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
      if ( !*p_randomVoiceList )
        sub_1BCAA3C(v74, v75);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v75);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v77,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventSvtControl__PlayEventTradeVoice(
        EventSvtControl_o *this,
        int32_t svtId,
        System_String_array *targetVoiceIds,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *v6; // x21
  int32_t v7; // w22
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
  VoicePlayCondMaster_o *Master_object; // x0
  System_String_o *v38; // x1
  int64_t v39; // x2
  __int64 v40; // x3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int max_length; // w8
  Il2CppObject *Item; // x21
  VoicePlayCondMaster_o *v47; // x23
  int64_t v48; // x2
  __int64 v49; // x3
  unsigned __int64 v50; // x29
  __int64 v51; // x28
  System_String_o **m_Items; // x20
  __int64 v53; // x26
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x1
  System_String_o **v61; // x25
  System_String_o **v62; // x23
  System_String_array *v63; // x20
  int32_t v64; // w21
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListTrade; // x22
  __int64 v66; // x19
  System_Func_object__bool__o *v67; // x28
  System_Collections_Generic_List_T__o *v68; // x0
  System_Func_T__bool__o *v69; // x1
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  struct System_Object_array *items; // x8
  _QWORD *v75; // x9
  __int64 size; // x10
  Il2CppClass **v77; // x0
  int32_t v78; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  _BOOL8 v86; // x0
  __int64 v87; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v90; // w23
  __int64 v91; // x8
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  __int64 v98; // x0
  const MethodInfo *v99; // x1
  System_Action_o *v100; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_object__o *v101; // [xsp+18h] [xbp-A8h]
  VoicePlayCondMaster_o *v102; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v103; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v104; // [xsp+40h] [xbp-80h] BYREF

  v6 = targetVoiceIds;
  v7 = svtId;
  if ( (byte_4B1A242 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_ServantVoiceData_____, *(_QWORD *)&svtId, targetVoiceIds);
    sub_1BCA7E0(&Method_DataManager_GetMaster_VoicePlayCondMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v17, v18);
    sub_1BCA7E0(&System_Func_ServantVoiceData____bool__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v29, v30);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_EventSvtControl___c__DisplayClass60_0__PlayEventTradeVoice_b__0__, v33, v34);
    sub_1BCA7E0(&EventSvtControl___c__DisplayClass60_0_TypeInfo, v35, v36);
    byte_4B1A242 = 1;
  }
  memset(&v104, 0, sizeof(v104));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !v6 || !*(_QWORD *)&v6->max_length )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId);
  Master_object = (VoicePlayCondMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  max_length = v6->max_length;
  if ( max_length < 2 )
  {
    if ( max_length )
    {
      Item = (Il2CppObject *)v6->m_Items[0];
      goto LABEL_27;
    }
LABEL_45:
    sub_1BCAA44(Master_object, v38);
  }
  v100 = callback;
  v47 = Master_object;
  v101 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_string__TypeInfo,
                                                        v38,
                                                        v39,
                                                        v40);
  System_Collections_Generic_List_object____ctor(
    v101,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)*(_QWORD *)&v6->max_length >= 1 )
  {
    v50 = 0LL;
    v51 = (unsigned int)*(_QWORD *)&v6->max_length;
    m_Items = v6->m_Items;
    v102 = v47;
    do
    {
      v53 = sub_1BCAA2C(EventSvtControl___c__DisplayClass60_0_TypeInfo, v38, v48, v49);
      System_Object___ctor((Il2CppObject *)v53, 0LL);
      if ( v50 >= v6->max_length )
        goto LABEL_45;
      if ( !v53 )
        goto LABEL_44;
      v60 = (int64_t)m_Items[v50];
      *(_QWORD *)(v53 + 16) = v60;
      v61 = (System_String_o **)(v53 + 16);
      sub_1BCA784((PartyOrganizationUtility_o *)(v53 + 16), v60, v54, v55, v56, v57, v58, v59);
      if ( !v47 )
        goto LABEL_44;
      Master_object = (VoicePlayCondMaster_o *)VoicePlayCondMaster__isVoicePlay(
                                                 v47,
                                                 v7,
                                                 *v61,
                                                 0LL,
                                                 -1LL,
                                                 -1,
                                                 0LL,
                                                 0LL,
                                                 0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v62 = m_Items;
        v63 = v6;
        v64 = v7;
        voiceListTrade = this->fields.voiceListTrade;
        v66 = v51;
        v67 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_ServantVoiceData____bool__TypeInfo, v38, v48, v49);
        System_Func_object__bool____ctor(
          v67,
          (Il2CppObject *)v53,
          Method_EventSvtControl___c__DisplayClass60_0__PlayEventTradeVoice_b__0__,
          0LL);
        v68 = (System_Collections_Generic_List_T__o *)voiceListTrade;
        v7 = v64;
        v6 = v63;
        m_Items = v62;
        v47 = v102;
        v69 = (System_Func_T__bool__o *)v67;
        v51 = v66;
        Master_object = (VoicePlayCondMaster_o *)BasicHelper__Any_object_(
                                                   v68,
                                                   v69,
                                                   (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_ServantVoiceData_____);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !v101 )
            goto LABEL_44;
          v38 = *v61;
          items = v101->fields._items;
          v75 = Method_System_Collections_Generic_List_string__Add__;
          ++v101->fields._version;
          if ( !items )
            goto LABEL_44;
          size = v101->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v101,
              (Il2CppObject *)v38,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
          }
          else
          {
            v77 = &items->obj.klass + size;
            v101->fields._size = size + 1;
            v77[4] = (Il2CppClass *)v38;
            sub_1BCA784((PartyOrganizationUtility_o *)(v77 + 4), (int64_t)v38, v48, v49, v70, v71, v72, v73);
          }
        }
      }
    }
    while ( v51 != ++v50 );
  }
  if ( !v101 )
    goto LABEL_44;
  v78 = UnityEngine_Random__Range_70113984(0, v101->fields._size, 0LL);
  callback = v100;
  Item = System_Collections_Generic_List_object___get_Item(
           v101,
           v78,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_27:
  this->fields.callbakEndPlay = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbakEndPlay,
    (int64_t)callback,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.randomVoiceList, 0LL, v80, v81, v82, v83, v84, v85);
  Master_object = (VoicePlayCondMaster_o *)this->fields.voiceListTrade;
  if ( !Master_object )
LABEL_44:
    sub_1BCAA3C(Master_object, v38);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v103,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v104 = v103;
LABEL_29:
  while ( 1 )
  {
    v86 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v104,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v86 )
      break;
    current = v104.fields._current;
    if ( !v104.fields._current )
      sub_1BCAA3C(v86, v87);
    monitor = (int)v104.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v90 = 0;
      while ( 1 )
      {
        if ( v90 >= monitor )
          sub_1BCAA44(v86, v87);
        v91 = *((_QWORD *)&current[2].klass + (int)v90);
        if ( !v91 )
          sub_1BCAA3C(v86, v87);
        v86 = System_String__op_Equality(*(System_String_o **)(v91 + 16), (System_String_o *)Item, 0LL);
        if ( v86 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v90 >= monitor )
          goto LABEL_29;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.randomVoiceList,
        (int64_t)current,
        v92,
        v93,
        v94,
        v95,
        v96,
        v97);
      if ( !*p_randomVoiceList )
        sub_1BCAA3C(v98, v99);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v99);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v104,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventSvtControl__PlayPerformance(
        EventSvtControl_o *this,
        ServantVoicePerformance_o *performances,
        int32_t timing,
        bool isWaitPerformance,
        System_Action_o *playEndAction,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  struct UnityEngine_GameObject_o **p_objectRef; // x24
  UnityEngine_Object_o *objectRef; // x25
  __int64 v16; // x1
  UnityEngine_GameObject_o *performanceRoot; // x0
  System_String_o *assetName; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Effect; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x1
  UnityEngine_Object_o *v28; // x25
  UnityEngine_Object_o *animationRef; // x25
  Il2CppObject *ComponentInChildren_object; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x1
  UnityEngine_Object_o *v38; // x24
  struct ServantVoicePerformance_ServantVoicePerformanceDetail_o **p_afterPerformance; // x8
  struct ServantVoicePerformance_ServantVoicePerformanceDetail_o *v40; // x22
  const MethodInfo *v41; // x4
  System_Collections_IEnumerator_o *v42; // x1

  if ( (byte_4B1A247 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___, performances, *(_QWORD *)&timing);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B1A247 = 1;
  }
  if ( !this->fields.isPlayBoxGachaVoice
    || !performances
    || System_String__IsNullOrEmpty(performances->fields.assetName, 0LL) )
  {
    goto LABEL_6;
  }
  p_objectRef = &this->fields.objectRef;
  objectRef = (UnityEngine_Object_o *)this->fields.objectRef;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( UnityEngine_Object__op_Equality(objectRef, 0LL, 0LL) )
  {
    performanceRoot = this->fields.performanceRoot;
    if ( !performanceRoot )
      goto LABEL_32;
    assetName = performances->fields.assetName;
    transform = UnityEngine_GameObject__get_transform(performanceRoot, 0LL);
    Effect = BoxGachaResultEffectComponent__getEffect(assetName, transform, 0LL);
    *p_objectRef = Effect;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.objectRef, (int64_t)Effect, v21, v22, v23, v24, v25, v26);
    v28 = (UnityEngine_Object_o *)*p_objectRef;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
    if ( !UnityEngine_Object__op_Implicit(v28, 0LL) )
      goto LABEL_6;
  }
  animationRef = (UnityEngine_Object_o *)this->fields.animationRef;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  if ( !UnityEngine_Object__op_Equality(animationRef, 0LL, 0LL) )
    goto LABEL_23;
  performanceRoot = *p_objectRef;
  if ( !*p_objectRef )
LABEL_32:
    sub_1BCAA3C(performanceRoot, v16);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 performanceRoot,
                                 (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
  this->fields.animationRef = (struct UnityEngine_Animation_o *)ComponentInChildren_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.animationRef,
    (int64_t)ComponentInChildren_object,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v38 = (UnityEngine_Object_o *)this->fields.animationRef;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
  if ( !UnityEngine_Object__op_Implicit(v38, 0LL) )
    goto LABEL_6;
LABEL_23:
  if ( timing == 2 )
  {
    p_afterPerformance = &performances->fields.afterPerformance;
  }
  else if ( timing == 1 )
  {
    p_afterPerformance = &performances->fields.startPerformance;
  }
  else
  {
    if ( timing )
      goto LABEL_6;
    p_afterPerformance = &performances->fields.beforePerformance;
  }
  v40 = *p_afterPerformance;
  if ( *p_afterPerformance && !System_String__IsNullOrEmpty(v40->fields.name, 0LL) )
  {
    v42 = EventSvtControl__PlayPerformanceProc(
            this,
            v40->fields.name,
            v40->fields.delay,
            isWaitPerformance,
            playEndAction,
            v41);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v42, 0LL);
    return;
  }
LABEL_6:
  if ( playEndAction )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))playEndAction->fields.m_target)(
      playEndAction->fields.original_method_info,
      *(_QWORD *)&playEndAction->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall EventSvtControl__PlayPerformanceProc(
        EventSvtControl_o *this,
        System_String_o *animName,
        float delay,
        bool isWaitPerformance,
        System_Action_o *playEndAction,
        const MethodInfo *method)
{
  bool v11; // w23
  __int64 v12; // x22
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4B1A248 & 1) == 0 )
  {
    sub_1BCA7E0(&EventSvtControl__PlayPerformanceProc_d__71_TypeInfo, animName, isWaitPerformance);
    byte_4B1A248 = 1;
  }
  v11 = isWaitPerformance;
  v12 = sub_1BCAA2C(EventSvtControl__PlayPerformanceProc_d__71_TypeInfo, animName, isWaitPerformance, playEndAction);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  *(_DWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 32), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v12 + 40) = animName;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 40), (int64_t)animName, v19, v20, v21, v22, v23, v24);
  *(float *)(v12 + 48) = delay;
  *(_BYTE *)(v12 + 64) = v11;
  *(_QWORD *)(v12 + 72) = playEndAction;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 72), (int64_t)playEndAction, v25, v26, v27, v28, v29, v30);
  return (System_Collections_IEnumerator_o *)v12;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventSvtControl__PlayTreasureBoxVoice(
        EventSvtControl_o *this,
        int32_t svtId,
        System_String_array *targetVoiceIds,
        System_Action_o *callback,
        const MethodInfo *method)
{
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
  DataManager_o *Instance; // x0
  __int64 v30; // x1
  int64_t v31; // x2
  __int64 v32; // x3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  signed int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v39; // x24
  System_Collections_Generic_List_object__o *v40; // x23
  __int64 v41; // x26
  __int64 v42; // x27
  System_String_o *v43; // x25
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  int32_t v54; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  _BOOL8 v62; // x0
  __int64 v63; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v66; // w24
  __int64 v67; // x8
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  __int64 v74; // x0
  const MethodInfo *v75; // x1
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B1A240 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId, targetVoiceIds);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    byte_4B1A240 = 1;
  }
  memset(&v77, 0, sizeof(v77));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !*(_QWORD *)&targetVoiceIds->max_length )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_42:
    sub_1BCAA3C(Instance, v30);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
LABEL_22:
      sub_1BCAA44(Instance, v30);
    Item = targetVoiceIds->m_Items[0];
    goto LABEL_25;
  }
  v39 = (VoicePlayCondMaster_o *)Instance;
  v40 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v30,
                                                       v31,
                                                       v32);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)*(_QWORD *)&targetVoiceIds->max_length >= 1 )
  {
    v41 = 0LL;
    v42 = (unsigned int)*(_QWORD *)&targetVoiceIds->max_length - 1LL;
    while ( v39 )
    {
      v43 = targetVoiceIds->m_Items[v41];
      Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v39, svtId, v43, 0LL, -1LL, -1, 0LL, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v40 )
          goto LABEL_42;
        items = v40->fields._items;
        v51 = Method_System_Collections_Generic_List_string__Add__;
        ++v40->fields._version;
        if ( !items )
          goto LABEL_42;
        size = v40->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v40,
            (Il2CppObject *)v43,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
        }
        else
        {
          v53 = &items->obj.klass + size;
          v40->fields._size = size + 1;
          v53[4] = (Il2CppClass *)v43;
          sub_1BCA784((PartyOrganizationUtility_o *)(v53 + 4), (int64_t)v43, v44, v45, v46, v47, v48, v49);
        }
      }
      if ( v42 == v41 )
        goto LABEL_23;
      if ( ++v41 >= (unsigned __int64)targetVoiceIds->max_length )
        goto LABEL_22;
    }
    goto LABEL_42;
  }
LABEL_23:
  if ( !v40 )
    goto LABEL_42;
  v54 = UnityEngine_Random__Range_70113984(0, v40->fields._size, 0LL);
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v40,
                              v54,
                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_25:
  this->fields.callbakEndPlay = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbakEndPlay,
    (int64_t)callback,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.randomVoiceList, 0LL, v56, v57, v58, v59, v60, v61);
  Instance = (DataManager_o *)this->fields.voiceListTreasureBox;
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v76,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v77 = v76;
LABEL_27:
  while ( 1 )
  {
    v62 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v77,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v62 )
      break;
    current = v77.fields._current;
    if ( !v77.fields._current )
      sub_1BCAA3C(v62, v63);
    monitor = (int)v77.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v66 = 0;
      while ( 1 )
      {
        if ( v66 >= monitor )
          sub_1BCAA44(v62, v63);
        v67 = *((_QWORD *)&current[2].klass + (int)v66);
        if ( !v67 )
          sub_1BCAA3C(v62, v63);
        v62 = System_String__op_Equality(*(System_String_o **)(v67 + 16), Item, 0LL);
        if ( v62 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v66 >= monitor )
          goto LABEL_27;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.randomVoiceList,
        (int64_t)current,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
      if ( !*p_randomVoiceList )
        sub_1BCAA3C(v74, v75);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v75);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v77,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


void __fastcall EventSvtControl__ReleasePerformance(EventSvtControl_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  UnityEngine_Object_o *objectRef; // x19

  if ( (byte_4B1A24A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A24A = 1;
  }
  this->fields.animationRef = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.animationRef, 0LL, v2, v3, v4, v5, v6, v7);
  objectRef = (UnityEngine_Object_o *)this->fields.objectRef;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  UnityEngine_Object__Destroy_70154244(objectRef, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventSvtControl__SetBoxGachaTalkInfo(
        EventSvtControl_o *this,
        int32_t svtId,
        BoxGachaTalkEntity_o *talkEntity,
        BoxGachaTalkInfo_o **info,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  BoxGachaTalkInfo_o *v32; // x21
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  DataManager_o *Instance; // x0
  __int64 v40; // x1
  Il2CppObject *MasterData_object; // x23
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Collections_Generic_List_int__o *v45; // x21
  struct System_String_array *befVoiceIds; // x9
  unsigned __int64 v47; // x24
  System_String_o *v48; // x25
  _BOOL8 isVoicePlay; // x0
  __int64 v50; // x1
  Il2CppObject *current; // x20
  int monitor; // w8
  int i; // w27
  __int64 v54; // x28
  struct System_Int32_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  unsigned __int64 v58; // x25
  int32_t v59; // w22
  System_String_o *v60; // x23
  __int64 Item; // x0
  __int64 v62; // x1
  Il2CppObject *v63; // x20
  void *v64; // x8
  int v65; // w27
  __int64 v66; // x24
  struct System_Collections_Generic_List_string__o *beforeVoiceIdList; // x8
  __int64 v69; // [xsp+10h] [xbp-C0h]
  struct System_String_array *aftVoiceIds; // [xsp+18h] [xbp-B8h]
  struct System_String_array *v71; // [xsp+20h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v74; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4B1A23F & 1) == 0 )
  {
    sub_1BCA7E0(&BoxGachaTalkInfo_TypeInfo, *(_QWORD *)&svtId, talkEntity);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v26, v27);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31);
    byte_4B1A23F = 1;
  }
  memset(&v74, 0, sizeof(v74));
  v32 = (BoxGachaTalkInfo_o *)sub_1BCAA2C(BoxGachaTalkInfo_TypeInfo, *(_QWORD *)&svtId, talkEntity, info);
  BoxGachaTalkInfo___ctor(v32, 0LL);
  *info = v32;
  sub_1BCA784((PartyOrganizationUtility_o *)info, (int64_t)v32, v33, v34, v35, v36, v37, v38);
  if ( !this->fields.voiceListBoxGacha )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v45 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v42,
                                                    v43,
                                                    v44);
  System_Collections_Generic_List_int____ctor(
    v45,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !talkEntity )
    goto LABEL_70;
  befVoiceIds = talkEntity->fields.befVoiceIds;
  if ( !befVoiceIds )
    goto LABEL_70;
  v69 = *(_QWORD *)&befVoiceIds->max_length;
  aftVoiceIds = talkEntity->fields.aftVoiceIds;
  if ( (int)v69 >= 1 )
  {
    if ( (unsigned int)*(_QWORD *)&befVoiceIds->max_length )
    {
      v47 = 0LL;
      v71 = befVoiceIds;
      while ( 1 )
      {
        Instance = (DataManager_o *)this->fields.voiceListBoxGacha;
        if ( !Instance )
          break;
        v48 = befVoiceIds->m_Items[v47];
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v73,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v74 = v73;
        while ( 1 )
        {
          isVoicePlay = System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v74,
                          (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !isVoicePlay )
            break;
          current = v74.fields._current;
          if ( !v74.fields._current )
            sub_1BCAA3C(isVoicePlay, v50);
          monitor = (int)v74.fields._current[1].monitor;
          if ( monitor >= 1 )
          {
            for ( i = 0; i < monitor; ++i )
            {
              if ( i >= (unsigned int)monitor )
                sub_1BCAA44(isVoicePlay, v50);
              v54 = *((_QWORD *)&current[2].klass + i);
              if ( !v54 )
                sub_1BCAA3C(isVoicePlay, v50);
              isVoicePlay = System_String__op_Equality(*(System_String_o **)(v54 + 16), v48, 0LL);
              if ( isVoicePlay )
              {
                if ( !MasterData_object )
                  sub_1BCAA3C(isVoicePlay, v50);
                isVoicePlay = VoicePlayCondMaster__isVoicePlay(
                                (VoicePlayCondMaster_o *)MasterData_object,
                                svtId,
                                v48,
                                0LL,
                                -1LL,
                                -1,
                                0LL,
                                0LL,
                                0LL);
                if ( isVoicePlay )
                {
                  if ( !*info )
                    sub_1BCAA3C(0LL, v50);
                  BoxGachaTalkInfo__SetBeforeGachaTalkInfo(
                    *info,
                    *(System_String_o **)(v54 + 16),
                    *(System_String_o **)(v54 + 48),
                    0LL);
                  if ( !v45 )
                    sub_1BCAA3C(isVoicePlay, v50);
                  items = v45->fields._items;
                  v56 = Method_System_Collections_Generic_List_int__Add__;
                  ++v45->fields._version;
                  if ( !items )
                    sub_1BCAA3C(isVoicePlay, v50);
                  size = v45->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      v45,
                      v47,
                      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v45->fields._size = size + 1;
                    items->m_Items[size + 1] = v47;
                  }
                }
              }
              monitor = (int)current[1].monitor;
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v74,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        befVoiceIds = v71;
        if ( ++v47 == (unsigned int)v69 )
          goto LABEL_39;
        if ( v47 >= v71->max_length )
          goto LABEL_71;
      }
LABEL_70:
      sub_1BCAA3C(Instance, v40);
    }
LABEL_71:
    sub_1BCAA44(Instance, v40);
  }
LABEL_39:
  if ( !v45 || !v45->fields._size )
    return 0;
  if ( (int)v69 >= 1 )
  {
    if ( !aftVoiceIds )
      goto LABEL_70;
    v58 = 0LL;
    v59 = 0;
    while ( v58 < aftVoiceIds->max_length )
    {
      Instance = (DataManager_o *)this->fields.voiceListBoxGacha;
      if ( !Instance )
        goto LABEL_70;
      v60 = aftVoiceIds->m_Items[v58];
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v73,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
      v74 = v73;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v74,
                 (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
        if ( (Item & 1) == 0 )
          break;
        v63 = v74.fields._current;
        if ( !v74.fields._current )
          sub_1BCAA3C(Item, v62);
        v64 = v74.fields._current[1].monitor;
        if ( (int)v64 >= 1 )
        {
          v65 = 0;
          do
          {
            if ( v65 >= (unsigned int)v64 )
              sub_1BCAA44(Item, v62);
            v66 = *((_QWORD *)&v63[2].klass + v65);
            if ( !v66 )
              sub_1BCAA3C(Item, v62);
            Item = System_String__op_Equality(*(System_String_o **)(v66 + 16), v60, 0LL);
            if ( (Item & 1) != 0 )
            {
              Item = System_Collections_Generic_List_int___get_Item(
                       v45,
                       v59,
                       (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( v58 == (unsigned int)Item )
              {
                if ( !*info )
                  sub_1BCAA3C(0LL, v62);
                BoxGachaTalkInfo__SetAfterGachaTalkInfo(
                  *info,
                  *(System_String_o **)(v66 + 16),
                  *(System_String_o **)(v66 + 48),
                  0LL);
                ++v59;
              }
            }
            LODWORD(v64) = v63[1].monitor;
            ++v65;
          }
          while ( v65 < (int)v64 );
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v74,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
      if ( ++v58 == (unsigned int)v69 )
        goto LABEL_66;
    }
    goto LABEL_71;
  }
LABEL_66:
  if ( !*info )
    goto LABEL_70;
  beforeVoiceIdList = (*info)->fields.beforeVoiceIdList;
  if ( !beforeVoiceIdList )
    goto LABEL_70;
  return beforeVoiceIdList->fields._size > 0;
}


void __fastcall EventSvtControl__SetCraftSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listCraft,
        System_String_o *assetName,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_String_o **p_asstName; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  PartyOrganizationUtility_o *v17; // x0
  System_Collections_Generic_List_ServantVoiceData____o *v18; // x1

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.asstName,
    (int64_t)assetName,
    (int64_t)assetName,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v17 = (PartyOrganizationUtility_o *)(p_asstName + 17);
  if ( listCraft )
  {
    v17->klass = (PartyOrganizationUtility_c *)listCraft;
    v18 = listCraft;
  }
  else
  {
    v18 = 0LL;
    v17->klass = 0LL;
  }
  sub_1BCA784(v17, (int64_t)v18, v11, v12, v13, v14, v15, v16);
  this->fields.beforeVoiceIdx = -1;
}


void __fastcall EventSvtControl__SetDiggingSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listDigging,
        System_String_o *assetName,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_String_o **p_asstName; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  PartyOrganizationUtility_o *v17; // x0
  System_Collections_Generic_List_ServantVoiceData____o *v18; // x1

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.asstName,
    (int64_t)assetName,
    (int64_t)assetName,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v17 = (PartyOrganizationUtility_o *)(p_asstName + 14);
  if ( listDigging )
  {
    v17->klass = (PartyOrganizationUtility_c *)listDigging;
    v18 = listDigging;
  }
  else
  {
    v18 = 0LL;
    v17->klass = 0LL;
  }
  sub_1BCA784(v17, (int64_t)v18, v11, v12, v13, v14, v15, v16);
  this->fields.beforeVoiceIdx = -1;
}


void __fastcall EventSvtControl__SetOverwriteSpecialSvtVoiceId(
        EventSvtControl_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.specialSvtVoice = voiceId;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.specialSvtVoice,
    (int64_t)voiceId,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventSvtControl__SetOverwriteSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listOverwrite,
        System_String_o *assetName,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  EventSvtControl_o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  v9 = this;
  this->fields.playCnt = 0;
  this->fields.asstName = assetName;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.asstName,
    (int64_t)assetName,
    (int64_t)assetName,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v9->fields.voiceListOverwrite = listOverwrite;
  v9 = (EventSvtControl_o *)((char *)v9 + 200);
  sub_1BCA784((PartyOrganizationUtility_o *)v9, (int64_t)listOverwrite, v10, v11, v12, v13, v14, v15);
  LODWORD(v9[-1].fields.voiceListDigging) = -1;
}


void __fastcall EventSvtControl__SetRecipeSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listRecipe,
        System_String_o *assetName,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_String_o **p_asstName; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  PartyOrganizationUtility_o *v17; // x0
  System_Collections_Generic_List_ServantVoiceData____o *v18; // x1

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.asstName,
    (int64_t)assetName,
    (int64_t)assetName,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v17 = (PartyOrganizationUtility_o *)(p_asstName + 15);
  if ( listRecipe )
  {
    v17->klass = (PartyOrganizationUtility_c *)listRecipe;
    v18 = listRecipe;
  }
  else
  {
    v18 = 0LL;
    v17->klass = 0LL;
  }
  sub_1BCA784(v17, (int64_t)v18, v11, v12, v13, v14, v15, v16);
  this->fields.beforeVoiceIdx = -1;
}


void __fastcall EventSvtControl__SetSvtFigureCollect(
        EventSvtControl_o *this,
        System_Collections_Generic_List_StandFigureCollect__o *collects,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.standFigureCollectList = collects;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.standFigureCollectList,
    (int64_t)collects,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventSvtControl__SetTradeSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listTrade,
        System_String_o *assetName,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_String_o **p_asstName; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  PartyOrganizationUtility_o *v17; // x0
  System_Collections_Generic_List_ServantVoiceData____o *v18; // x1

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.asstName,
    (int64_t)assetName,
    (int64_t)assetName,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v17 = (PartyOrganizationUtility_o *)(p_asstName + 16);
  if ( listTrade )
  {
    v17->klass = (PartyOrganizationUtility_c *)listTrade;
    v18 = listTrade;
  }
  else
  {
    v18 = 0LL;
    v17->klass = 0LL;
  }
  sub_1BCA784(v17, (int64_t)v18, v11, v12, v13, v14, v15, v16);
  this->fields.beforeVoiceIdx = -1;
}


void __fastcall EventSvtControl__SetTreasureBoxSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listTreasureBox,
        System_String_o *assetName,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_String_o **p_asstName; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  PartyOrganizationUtility_o *v17; // x0
  System_Collections_Generic_List_ServantVoiceData____o *v18; // x1

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.asstName,
    (int64_t)assetName,
    (int64_t)assetName,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v17 = (PartyOrganizationUtility_o *)(p_asstName + 13);
  if ( listTreasureBox )
  {
    v17->klass = (PartyOrganizationUtility_c *)listTreasureBox;
    v18 = listTreasureBox;
  }
  else
  {
    v18 = 0LL;
    v17->klass = 0LL;
  }
  sub_1BCA784(v17, (int64_t)v18, v11, v12, v13, v14, v15, v16);
  this->fields.beforeVoiceIdx = -1;
}


void __fastcall EventSvtControl__SvtVoicePlayProc(EventSvtControl_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  EventSvtControl_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 playCnt; // x9
  ServantVoiceData_o *v19; // x8
  int64_t id; // x1
  struct ServantVoiceData_array *v21; // x8
  __int64 v22; // x9
  int32_t asstName; // w20
  __int64 v24; // x2
  __int64 v25; // x3
  float FadeTime; // s0
  float v27; // s8
  struct ServantVoiceData_array *v28; // x8
  __int64 v29; // x9
  ServantVoiceData_o *v30; // x8
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  int32_t face; // w20
  struct ServantVoiceData_array *v33; // x8
  __int64 v34; // x9
  ServantVoiceData_o *v35; // x8
  System_String_o *v36; // x20
  System_String_o *vcName; // x21
  float volume; // s8
  System_Action_o *v39; // x22
  __int64 v40; // x1
  SePlayer_o *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  const MethodInfo *v48; // x5
  struct ServantVoiceData_array *v49; // x8
  __int64 v50; // x9
  ServantVoiceData_o *v51; // x8
  struct ServantVoiceData_array *v52; // x8
  __int64 v53; // x9
  ServantVoiceData_o *v54; // x8
  struct System_Int32_array *multiFace; // x23
  unsigned __int64 v56; // x21
  int32_t v57; // w22

  v8 = this;
  if ( (byte_4B1A239 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v9, v10);
    sub_1BCA7E0(&Method_EventSvtControl_EndPlay__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v13, v14);
    this = (EventSvtControl_o *)sub_1BCA7E0(&SoundManager_TypeInfo, v15, v16);
    byte_4B1A239 = 1;
  }
  randomVoiceList = v8->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_43;
  playCnt = v8->fields.playCnt;
  if ( (unsigned int)playCnt >= randomVoiceList->max_length )
    goto LABEL_44;
  v19 = randomVoiceList->m_Items[playCnt];
  if ( !v19 )
    goto LABEL_43;
  id = (int64_t)v19->fields.id;
  v8->fields.vcName = (struct System_String_o *)id;
  sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.vcName, id, v2, v3, v4, v5, v6, v7);
  v21 = v8->fields.randomVoiceList;
  if ( !v21 )
    goto LABEL_43;
  v22 = v8->fields.playCnt;
  if ( (unsigned int)v22 >= v21->max_length )
    goto LABEL_44;
  this = (EventSvtControl_o *)v21->m_Items[v22];
  if ( !this )
    goto LABEL_43;
  v8->fields.isUnSkippable = BYTE4(this->fields.vcName);
  asstName = (int32_t)this->fields.asstName;
  FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
  this = (EventSvtControl_o *)v8->fields.standFigureCollectList;
  v27 = FadeTime;
  if ( !this
    || (this = (EventSvtControl_o *)System_Linq_Enumerable__Count_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                      (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___),
        (int)this < 2) )
  {
    v28 = v8->fields.randomVoiceList;
    if ( !v28 )
      goto LABEL_43;
    v29 = v8->fields.playCnt;
    if ( (unsigned int)v29 >= v28->max_length )
      goto LABEL_44;
    v30 = v28->m_Items[v29];
    if ( !v30 )
      goto LABEL_43;
    standFigureCollectList = (System_Collections_Generic_List_object__o *)v8->fields.standFigureCollectList;
    if ( standFigureCollectList )
    {
      face = v30->fields.face;
      this = (EventSvtControl_o *)System_Collections_Generic_List_object___get_Item(
                                    standFigureCollectList,
                                    0,
                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( !this )
        goto LABEL_43;
      v33 = v8->fields.randomVoiceList;
      if ( !v33 )
        goto LABEL_43;
      v34 = v8->fields.playCnt;
      if ( (unsigned int)v34 >= v33->max_length )
        goto LABEL_44;
      v35 = v33->m_Items[v34];
      if ( !v35 )
        goto LABEL_43;
      this = (EventSvtControl_o *)this->fields.m_CancellationTokenSource;
      if ( !this )
        goto LABEL_43;
      UIStandFigureR__SetFace_41776260((UIStandFigureR_o *)this, face, v35->fields.form, 0LL, v27, 0LL);
    }
    goto LABEL_21;
  }
  v52 = v8->fields.randomVoiceList;
  if ( !v52 )
    goto LABEL_43;
  v53 = v8->fields.playCnt;
  if ( (unsigned int)v53 >= v52->max_length )
    goto LABEL_44;
  v54 = v52->m_Items[v53];
  if ( !v54 )
    goto LABEL_43;
  multiFace = v54->fields.multiFace;
  if ( multiFace )
  {
    this = (EventSvtControl_o *)System_Linq_Enumerable__Count_object_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.standFigureCollectList,
                                  (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    if ( (_DWORD)this == multiFace->max_length )
    {
      if ( (int)this >= 1 )
      {
        v56 = 0LL;
        while ( v56 < (unsigned int)this )
        {
          this = (EventSvtControl_o *)v8->fields.standFigureCollectList;
          if ( !this )
            goto LABEL_43;
          v57 = multiFace->m_Items[v56 + 1];
          this = (EventSvtControl_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v56,
                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
          if ( !this )
            goto LABEL_43;
          this = (EventSvtControl_o *)this->fields.m_CancellationTokenSource;
          if ( !this )
            goto LABEL_43;
          UIStandFigureR__SetFace_41776260((UIStandFigureR_o *)this, v57, asstName, 0LL, v27, 0LL);
          this = *(EventSvtControl_o **)&multiFace->max_length;
          if ( (__int64)++v56 >= (int)this )
            goto LABEL_21;
        }
        goto LABEL_44;
      }
LABEL_21:
      v36 = v8->fields.asstName;
      vcName = v8->fields.vcName;
      volume = v8->fields.volume;
      v39 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v24, v25);
      System_Action___ctor(v39, (Il2CppObject *)v8, Method_EventSvtControl_EndPlay__, 0LL);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v40);
      v41 = SoundManager__playVoice_39419392(v36, vcName, volume, v39, 0LL);
      v8->fields.player = v41;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.player, (int64_t)v41, v42, v43, v44, v45, v46, v47);
      if ( v8->fields.isSkipPerformance )
        goto LABEL_28;
      v49 = v8->fields.randomVoiceList;
      if ( !v49 )
LABEL_43:
        sub_1BCAA3C(this, method);
      v50 = v8->fields.playCnt;
      if ( (unsigned int)v50 < v49->max_length )
      {
        v51 = v49->m_Items[v50];
        if ( v51 )
        {
          EventSvtControl__PlayPerformance(v8, v51->fields.additionalPerformances, 1, 0, 0LL, v48);
LABEL_28:
          ++v8->fields.playCnt;
          return;
        }
        goto LABEL_43;
      }
LABEL_44:
      sub_1BCAA44(this, method);
    }
  }
}


bool __fastcall EventSvtControl__TryGetPlayableVoiceInfoList(
        EventSvtControl_o *this,
        System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o **voiceInfoList,
        System_Collections_Generic_List_ServantVoiceData____o *servantVoiceGroupData,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  Il2CppObject *Master_object; // x23
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  System_Collections_Generic_List_T__o *v64; // x24
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  System_Collections_Generic_List_T__o *v68; // x22
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  Il2CppObject *v75; // x0
  System_Collections_Generic_List_int__o *v76; // x1
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  System_Collections_Generic_HashSet_T__o *v80; // x24
  _BOOL8 v81; // x0
  __int64 v82; // x1
  Il2CppObject *current; // x25
  Il2CppClass *klass; // x8
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x3
  EventSvtControl___c_c *v88; // x0
  System_String_o *v89; // x26
  System_Func_object__object__o *_9__64_0; // x27
  Il2CppObject *v91; // x28
  struct EventSvtControl___c_StaticFields *static_fields; // x0
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  System_Collections_Generic_IEnumerable_string__o *v99; // x1
  Il2CppObject *v100; // x0
  __int64 v101; // x1
  Il2CppObject *v102; // x26
  Il2CppObject *Weight; // x2
  const MethodInfo_34D8EF4 *v104; // x4
  __int64 v105; // x1
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  Il2CppObject *v111; // x0
  __int64 v112; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v113; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x26
  Il2CppObject *v115; // x0
  __int64 v116; // x1
  __int64 Item; // x0
  __int64 v118; // x1
  int32_t v119; // w25
  int32_t monitor; // w26
  _BOOL8 IsVoicePlayFlag; // x0
  System_Collections_Generic_List_T__o *v122; // x0
  struct System_Object_array *v123; // x8
  _QWORD *v124; // x9
  __int64 v125; // x10
  PartyOrganizationUtility_o *v126; // x8
  struct System_Object_array *items; // x8
  _QWORD *v128; // x9
  __int64 size; // x10
  PartyOrganizationUtility_o *v130; // x0
  __int64 v131; // x0
  __int64 v132; // x1
  struct System_Collections_Generic_List_int__o *voicePlayedValueList; // x0
  __int64 monitor_low; // x1
  struct System_Int32_array *v135; // x8
  _QWORD *v136; // x9
  __int64 v137; // x10
  int64_t v138; // x2
  int32_t v139; // w3
  System_String_o *v140; // x4
  BattleSetupInfo_o *v141; // x5
  FollowerInfo_o *v142; // x6
  PartyListViewItem_o *v143; // x7
  int64_t v144; // x2
  int32_t v145; // w3
  System_String_o *v146; // x4
  BattleSetupInfo_o *v147; // x5
  FollowerInfo_o *v148; // x6
  PartyListViewItem_o *v149; // x7
  System_Collections_Generic_List_T__o *v151; // [xsp+20h] [xbp-D0h]
  System_Collections_Generic_List_int__o *OriginalSvtId; // [xsp+28h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_object__o v154; // [xsp+38h] [xbp-B8h] BYREF
  Il2CppObject *entity; // [xsp+50h] [xbp-A0h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o v156; // [xsp+58h] [xbp-98h] BYREF
  VoicePlayCondEntity_o *condEntity; // [xsp+68h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v158; // [xsp+70h] [xbp-80h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o v159; // 0:x0.16
  System_Collections_Generic_KeyValuePair_object__int__o v160; // 0:x1.16
  System_Collections_Generic_KeyValuePair_object__int__o v161; // 0:x1.16

  if ( (byte_4B1A246 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, voiceInfoList, servantVoiceGroupData);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantVoiceRelationMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_VoiceMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMaster_VoicePlayCondMaster___, v10, v11);
    sub_1BCA7E0(&DataManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string__TryGetEntity__, v14, v15);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_ServantVoiceData__string___, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v22, v23);
    sub_1BCA7E0(&System_Func_ServantVoiceData__string__TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_string__Add__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_string__Contains__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_string___ctor__, v30, v31);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_string__TypeInfo, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v36, v37);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___Add__, v38, v39);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v40, v41);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int____ctor__, v42, v43);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Count__, v44, v45);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v46, v47);
    sub_1BCA7E0(&System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___TypeInfo, v48, v49);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v50, v51);
    sub_1BCA7E0(&Method_EventSvtControl___c__TryGetPlayableVoiceInfoList_b__64_0__, v52, v53);
    sub_1BCA7E0(&EventSvtControl___c_TypeInfo, v54, v55);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v56, v57);
    sub_1BCA7E0(&StringLiteral_19738/*"forcePlayFirst"*/, v58, v59);
    byte_4B1A246 = 1;
  }
  memset(&v158, 0, sizeof(v158));
  condEntity = 0LL;
  v156.fields.key = 0LL;
  *(_QWORD *)&v156.fields.value = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, voiceInfoList);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v64 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___TypeInfo,
                                                  v61,
                                                  v62,
                                                  v63);
  System_Collections_Generic_List_KeyValuePair_object__int_____ctor(
    v64,
    (const MethodInfo_34F6C44 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int____ctor__);
  v68 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___TypeInfo,
                                                  v65,
                                                  v66,
                                                  v67);
  System_Collections_Generic_List_KeyValuePair_object__int_____ctor(
    v68,
    (const MethodInfo_34F6C44 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int____ctor__);
  *voiceInfoList = (System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *)v68;
  sub_1BCA784((PartyOrganizationUtility_o *)voiceInfoList, (int64_t)v68, v69, v70, v71, v72, v73, v74);
  v75 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantVoiceRelationMaster___);
  if ( !v75 )
    goto LABEL_65;
  v151 = v64;
  OriginalSvtId = ServantVoiceRelationMaster__GetOriginalSvtId(
                    (ServantVoiceRelationMaster_o *)v75,
                    this->fields.svtId,
                    0LL);
  v80 = (System_Collections_Generic_HashSet_T__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_HashSet_string__TypeInfo,
                                                     v77,
                                                     v78,
                                                     v79);
  System_Collections_Generic_HashSet_object____ctor(
    v80,
    (const MethodInfo_345AFC8 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  if ( !servantVoiceGroupData )
    goto LABEL_65;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v154,
    (System_Collections_Generic_List_object__o *)servantVoiceGroupData,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v158 = v154;
  while ( 1 )
  {
    v81 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v158,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v81 )
      break;
    current = v158.fields._current;
    if ( !v158.fields._current )
      sub_1BCAA3C(v81, v82);
    if ( !LODWORD(v158.fields._current[1].monitor) )
      sub_1BCAA44(v81, v82);
    klass = v158.fields._current[2].klass;
    if ( !klass )
      sub_1BCAA3C(v81, v82);
    if ( !Master_object )
      sub_1BCAA3C(v81, v82);
    if ( VoicePlayCondMaster__isVoicePlay_41041364(
           (VoicePlayCondMaster_o *)Master_object,
           this->fields.svtId,
           (System_String_o *)klass->_1.name,
           &condEntity,
           0LL,
           -1LL,
           -1,
           0LL,
           0LL,
           0LL,
           0LL) )
    {
      v88 = EventSvtControl___c_TypeInfo;
      if ( !EventSvtControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSvtControl___c_TypeInfo, v85);
        v88 = EventSvtControl___c_TypeInfo;
      }
      v89 = (System_String_o *)StringLiteral_863/*","*/;
      _9__64_0 = (System_Func_object__object__o *)v88->static_fields->__9__64_0;
      if ( !_9__64_0 )
      {
        if ( !v88->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v88, v85);
          v88 = EventSvtControl___c_TypeInfo;
        }
        v91 = (Il2CppObject *)v88->static_fields->__9;
        _9__64_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                      System_Func_ServantVoiceData__string__TypeInfo,
                                                      v85,
                                                      v86,
                                                      v87);
        System_Func_object__object____ctor(
          _9__64_0,
          v91,
          Method_EventSvtControl___c__TryGetPlayableVoiceInfoList_b__64_0__,
          0LL);
        static_fields = EventSvtControl___c_TypeInfo->static_fields;
        static_fields->__9__64_0 = (struct System_Func_ServantVoiceData__string__o *)_9__64_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__64_0,
          (int64_t)_9__64_0,
          v93,
          v94,
          v95,
          v96,
          v97,
          v98);
      }
      v99 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_object__object_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)current,
                                                                  (System_Func_TSource__TResult__o *)_9__64_0,
                                                                  (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_ServantVoiceData__string___);
      v100 = (Il2CppObject *)System_String__Join_62416876(v89, v99, 0LL);
      if ( !v80 )
        sub_1BCAA3C(v100, v101);
      v102 = v100;
      if ( !System_Collections_Generic_HashSet_object___Contains(
              v80,
              v100,
              (const MethodInfo_345B6BC *)Method_System_Collections_Generic_HashSet_string__Contains__) )
      {
        System_Collections_Generic_HashSet_object___Add(
          v80,
          v102,
          (const MethodInfo_345C1AC *)Method_System_Collections_Generic_HashSet_string__Add__);
        Weight = (Il2CppObject *)(unsigned int)VoicePlayCondMaster__GetWeight(
                                                 (VoicePlayCondMaster_o *)Master_object,
                                                 condEntity,
                                                 10,
                                                 0LL);
        v159.fields.key = (Il2CppObject *)&v156;
        *(_QWORD *)&v159.fields.value = current;
        System_Collections_Generic_KeyValuePair_object__int____ctor(
          v159,
          Weight,
          Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__,
          v104);
        if ( !condEntity
          || VoicePlayCondEntity__GetScriptIntParam(condEntity, (System_String_o *)StringLiteral_19738/*"forcePlayFirst"*/, -1, 0LL) != 1 )
        {
          goto LABEL_36;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v105);
        v111 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_VoiceMaster___);
        if ( !condEntity )
          sub_1BCAA3C(v111, v112);
        v113 = (DataMasterBase_TMaster__TEntity__PKType__o *)v111;
        voiceId = condEntity->fields.voiceId;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v112);
        v115 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(voiceId, 0LL);
        if ( !v113 )
          sub_1BCAA3C(v115, v116);
        if ( !DataMasterBase_object__object__object___TryGetEntity(
                v113,
                &entity,
                v115,
                (const MethodInfo_31B31E8 *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string__TryGetEntity__) )
          goto LABEL_36;
        if ( !OriginalSvtId )
          sub_1BCAA3C(0LL, v105);
        Item = System_Collections_Generic_List_int___get_Item(
                 OriginalSvtId,
                 0,
                 (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !entity )
          sub_1BCAA3C(Item, v118);
        v119 = Item;
        monitor = (int32_t)entity[3].monitor;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v118);
        IsVoicePlayFlag = CondType__IsVoicePlayFlag(v119, monitor, 0LL);
        if ( !IsVoicePlayFlag )
        {
          if ( !v151 )
            sub_1BCAA3C(IsVoicePlayFlag, v105);
          v161 = v156;
          items = v151->fields._items;
          v128 = Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___Add__;
          ++v151->fields._version;
          if ( !items )
            sub_1BCAA3C(IsVoicePlayFlag, v161.fields.key);
          size = v151->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_KeyValuePair_object__int____AddWithResize(
              v151,
              v161,
              *(const MethodInfo_34F74C4 **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
          }
          else
          {
            v130 = (PartyOrganizationUtility_o *)(&items->obj + size);
            v151->fields._size = size + 1;
            *(_QWORD *)&v130->fields._SelectedNormalFollowerClassId_k__BackingField = v161.fields.key;
            v130 = (PartyOrganizationUtility_o *)((char *)v130 + 32);
            v130->monitor = *(void **)&v161.fields.value;
            sub_1BCA784(v130, 0LL, *(int64_t *)&v161.fields.value, v106, v107, v108, v109, v110);
          }
          if ( !entity )
            sub_1BCAA3C(v131, v132);
          voicePlayedValueList = this->fields.voicePlayedValueList;
          if ( !voicePlayedValueList )
            sub_1BCAA3C(0LL, v132);
          monitor_low = LODWORD(entity[3].monitor);
          v135 = voicePlayedValueList->fields._items;
          v136 = Method_System_Collections_Generic_List_int__Add__;
          ++voicePlayedValueList->fields._version;
          if ( !v135 )
            sub_1BCAA3C(voicePlayedValueList, monitor_low);
          v137 = voicePlayedValueList->fields._size;
          if ( (unsigned int)v137 >= v135->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              voicePlayedValueList,
              monitor_low,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
          }
          else
          {
            voicePlayedValueList->fields._size = v137 + 1;
            v135->m_Items[v137 + 1] = monitor_low;
          }
        }
        else
        {
LABEL_36:
          v122 = (System_Collections_Generic_List_T__o *)*voiceInfoList;
          if ( !*voiceInfoList )
            sub_1BCAA3C(0LL, v105);
          v160 = v156;
          v123 = v122->fields._items;
          v124 = Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___Add__;
          ++v122->fields._version;
          if ( !v123 )
            sub_1BCAA3C(v122, v160.fields.key);
          v125 = v122->fields._size;
          if ( (unsigned int)v125 >= v123->max_length )
          {
            System_Collections_Generic_List_KeyValuePair_object__int____AddWithResize(
              v122,
              v160,
              *(const MethodInfo_34F74C4 **)(*(_QWORD *)(v124[4] + 192LL) + 112LL));
          }
          else
          {
            v126 = (PartyOrganizationUtility_o *)(&v123->obj + v125);
            v122->fields._size = v125 + 1;
            *(_QWORD *)&v126->fields._SelectedNormalFollowerClassId_k__BackingField = v160.fields.key;
            v126 = (PartyOrganizationUtility_o *)((char *)v126 + 32);
            v126->monitor = *(void **)&v160.fields.value;
            sub_1BCA784(v126, 0LL, *(int64_t *)&v160.fields.value, v106, v107, v108, v109, v110);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v158,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  if ( !v151 )
    goto LABEL_65;
  v76 = OriginalSvtId;
  if ( v151->fields._size >= 1 )
  {
    this->fields.forcePlayVoiceSvtIdList = OriginalSvtId;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.forcePlayVoiceSvtIdList,
      (int64_t)OriginalSvtId,
      v138,
      v139,
      v140,
      v141,
      v142,
      v143);
    *voiceInfoList = (System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *)v151;
    sub_1BCA784((PartyOrganizationUtility_o *)voiceInfoList, (int64_t)v151, v144, v145, v146, v147, v148, v149);
    return 1;
  }
  if ( !*voiceInfoList )
LABEL_65:
    sub_1BCAA3C(v75, v76);
  return (*voiceInfoList)->fields._size > 0;
}


void __fastcall EventSvtControl__boxGachaPlayVoice(
        EventSvtControl_o *this,
        EventSvtControl_PlayBoxGachVoiceArg_o *arg,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  int64_t v24; // x20
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListBoxGacha; // x0
  __int64 v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int128 v33; // q1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  const MethodInfo *v40; // x1
  struct System_Action_o *v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct ServantVoiceData_array **p_randomVoiceList; // x21
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x22
  __int64 v59; // x0
  __int64 v60; // x1
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  __int64 v67; // x23
  Il2CppObject *current; // x1
  int64_t *v69; // x24
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  _BOOL8 v76; // x0
  __int64 v77; // x1
  __int64 v78; // x28
  int v79; // w8
  unsigned int v80; // w25
  __int64 v81; // x29
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  int64_t v88; // x1
  __int64 v89; // x0
  const MethodInfo *v90; // x1
  __int64 v91; // x0
  __int64 v92; // x1
  __int64 v93; // x8
  Il2CppObject *Instance; // x0
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x3
  System_String_o *v98; // x20
  System_Action_o *v99; // x23
  CommonUI_o *v100; // x19
  System_String_o *v101; // x21
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  System_Collections_Generic_List_Enumerator_object__o v108; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v109; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4B1A23E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, arg, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15);
    sub_1BCA7E0(&EventSvtControl___c__DisplayClass56_0_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_EventSvtControl___c__DisplayClass56_1__boxGachaPlayVoice_b__0__, v18, v19);
    sub_1BCA7E0(&EventSvtControl___c__DisplayClass56_1_TypeInfo, v20, v21);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v22, v23);
    byte_4B1A23E = 1;
  }
  memset(&v109, 0, sizeof(v109));
  v24 = sub_1BCAA2C(EventSvtControl___c__DisplayClass56_0_TypeInfo, arg, method, v3);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
    goto LABEL_35;
  *(_QWORD *)(v24 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 16), (int64_t)this, v27, v28, v29, v30, v31, v32);
  v33 = *(_OWORD *)&arg->fields.targetVoiceId;
  *(_OWORD *)(v24 + 40) = *(_OWORD *)&arg->fields.callBackStartPlay;
  *(_OWORD *)(v24 + 24) = v33;
  sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 24), 0LL, v34, v35, v36, v37, v38, v39);
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, v40);
  System_String__IsNullOrEmpty(*(System_String_o **)(v24 + 24), 0LL);
  v41 = *(struct System_Action_o **)(v24 + 48);
  this->fields.callbakEndPlay = v41;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbakEndPlay, (int64_t)v41, v42, v43, v44, v45, v46, v47);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.randomVoiceList, 0LL, v49, v50, v51, v52, v53, v54);
  voiceListBoxGacha = this->fields.voiceListBoxGacha;
  if ( !voiceListBoxGacha )
LABEL_35:
    sub_1BCAA3C(voiceListBoxGacha, v26);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v108,
    (System_Collections_Generic_List_object__o *)voiceListBoxGacha,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v109 = v108;
LABEL_8:
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v109,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__) )
  {
    v58 = sub_1BCAA2C(EventSvtControl___c__DisplayClass56_1_TypeInfo, v55, v56, v57);
    System_Object___ctor((Il2CppObject *)v58, 0LL);
    if ( !v58 )
      sub_1BCAA3C(v59, v60);
    *(_QWORD *)(v58 + 24) = v24;
    v67 = v58 + 24;
    sub_1BCA784((PartyOrganizationUtility_o *)(v58 + 24), v24, v61, v62, v63, v64, v65, v66);
    current = v109.fields._current;
    *(_QWORD *)(v58 + 16) = v109.fields._current;
    v69 = (int64_t *)(v58 + 16);
    sub_1BCA784((PartyOrganizationUtility_o *)(v58 + 16), (int64_t)current, v70, v71, v72, v73, v74, v75);
    v78 = *(_QWORD *)(v58 + 16);
    if ( !v78 )
      sub_1BCAA3C(v76, v77);
    v79 = *(_DWORD *)(v78 + 24);
    if ( v79 >= 1 )
    {
      v80 = 0;
      while ( 1 )
      {
        if ( v80 >= v79 )
          sub_1BCAA44(v76, v77);
        v81 = *(_QWORD *)(v78 + 8LL * (int)v80 + 32);
        if ( !v81 )
          sub_1BCAA3C(v76, v77);
        if ( !*(_QWORD *)v67 )
          sub_1BCAA3C(v76, v77);
        v76 = System_String__op_Equality(
                *(System_String_o **)(v81 + 16),
                *(System_String_o **)(*(_QWORD *)v67 + 24LL),
                0LL);
        if ( v76 )
          break;
        v79 = *(_DWORD *)(v78 + 24);
        if ( (int)++v80 >= v79 )
          goto LABEL_8;
      }
      this->fields.isPlayBoxGachaVoice = 1;
      if ( System_String__IsNullOrEmpty(*(System_String_o **)(v81 + 72), 0LL) )
      {
        v88 = *v69;
        *p_randomVoiceList = (struct ServantVoiceData_array *)*v69;
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.randomVoiceList, v88, v82, v83, v84, v85, v86, v87);
        if ( !*p_randomVoiceList )
          sub_1BCAA3C(v89, v90);
        this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
        if ( !*(_QWORD *)v67 )
          sub_1BCAA3C(v89, v90);
        this->fields.isSkipPerformance = *(_BYTE *)(*(_QWORD *)v67 + 32LL);
        EventSvtControl__svtVoicePlay(this, v90);
        if ( !*(_QWORD *)v67 )
          sub_1BCAA3C(v91, v92);
        v93 = *(_QWORD *)(*(_QWORD *)v67 + 40LL);
        if ( v93 )
          (*(void (__fastcall **)(_QWORD, _QWORD))(v93 + 24))(*(_QWORD *)(v93 + 64), *(_QWORD *)(v93 + 40));
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v98 = *(System_String_o **)(v81 + 72);
        v99 = *(System_Action_o **)(v58 + 32);
        v100 = (CommonUI_o *)Instance;
        v101 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !v99 )
        {
          v99 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v95, v96, v97);
          System_Action___ctor(
            v99,
            (Il2CppObject *)v58,
            Method_EventSvtControl___c__DisplayClass56_1__boxGachaPlayVoice_b__0__,
            0LL);
          *(_QWORD *)(v58 + 32) = v99;
          sub_1BCA784((PartyOrganizationUtility_o *)(v58 + 32), (int64_t)v99, v102, v103, v104, v105, v106, v107);
        }
        if ( !v100 )
          sub_1BCAA3C(Instance, v95);
        CommonUI__OpenNotificationDialog(v100, v101, v98, v99, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0.0, 0LL);
      }
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v109,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


bool __fastcall EventSvtControl__isUnskippable(EventSvtControl_o *this, const MethodInfo *method)
{
  return this->fields.player && this->fields.maxPlayCnt && this->fields.isUnSkippable;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventSvtControl__playMissionVoice(
        EventSvtControl_o *this,
        System_String_array *voiceIds,
        int32_t svtId,
        System_Action_o *callbackEnds,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  PartyOrganizationUtility_o *p_randomVoiceList; // x21
  DataManager_o *Instance; // x0
  const MethodInfo *v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  System_String_o **p_specialSvtVoice; // x23
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v52; // x1
  Il2CppObject *v53; // x24
  int v54; // w8
  unsigned int v55; // w27
  __int64 v56; // x28
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  System_String_o *v63; // x0
  System_String_array *v64; // x0
  __int64 v65; // x1
  System_String_o *v66; // x1
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  void *v73; // x1
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  int64_t v80; // x2
  __int64 v81; // x3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  VoicePlayCondMaster_o *v86; // x26
  System_Collections_Generic_List_object__o *v87; // x23
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x3
  System_Collections_Generic_List_object__o *v91; // x24
  __int64 size; // x20
  unsigned __int64 v93; // x28
  System_String_o *v94; // x27
  struct System_Object_array *items; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  Il2CppClass **v98; // x0
  int v99; // w29
  System_Random_o *v100; // x25
  il2cpp_array_size_t v101; // w25
  _BOOL8 v102; // x0
  __int64 v103; // x1
  Il2CppObject *current; // x26
  int monitor; // w8
  unsigned int v106; // w19
  __int64 v107; // x8
  System_String_o *v108; // x27
  Il2CppObject *Item; // x1
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  struct ServantVoiceData_array *randomVoiceList; // x8
  EventSvtControl_o *v118; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v119; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v120; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4B1A237 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, voiceIds, *(_QWORD *)&svtId);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__AddRange__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Remove__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor___76798464, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v33, v34);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v35, v36);
    sub_1BCA7E0(&System_Random_TypeInfo, v37, v38);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39, v40);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v43, v44);
    byte_4B1A237 = 1;
  }
  memset(&v120, 0, sizeof(v120));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, (const MethodInfo *)voiceIds);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = (PartyOrganizationUtility_o *)&this->fields.randomVoiceList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.randomVoiceList,
    0LL,
    *(int64_t *)&svtId,
    (int32_t)callbackEnds,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  if ( !voiceIds )
    goto LABEL_79;
  v118 = this;
  if ( (int)voiceIds->max_length >= 2 )
  {
    v86 = (VoicePlayCondMaster_o *)Instance;
    v87 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_string__TypeInfo,
                                                         v47,
                                                         v48,
                                                         v49);
    System_Collections_Generic_List_object____ctor(
      v87,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
    v91 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_string__TypeInfo,
                                                         v88,
                                                         v89,
                                                         v90);
    System_Collections_Generic_List_object____ctor_56235160(
      v91,
      voiceIds->max_length,
      (const MethodInfo_35A1498 *)Method_System_Collections_Generic_List_string___ctor___76798464);
    if ( !v91 )
      goto LABEL_79;
    System_Collections_Generic_List_object___AddRange(
      v91,
      (System_Collections_Generic_IEnumerable_T__o *)voiceIds,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_string__AddRange__);
    size = (unsigned int)v91->fields._size;
    if ( (int)size >= 1 )
    {
      v93 = 0LL;
      do
      {
        if ( v93 >= voiceIds->max_length )
LABEL_71:
          sub_1BCAA44(Instance, v47);
        if ( !v86 )
          goto LABEL_79;
        v94 = voiceIds->m_Items[v93];
        Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v86, svtId, v94, 0LL, -1LL, -1, 0LL, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v87 )
            goto LABEL_79;
          items = v87->fields._items;
          v96 = Method_System_Collections_Generic_List_string__Add__;
          ++v87->fields._version;
          if ( !items )
            goto LABEL_79;
          v97 = v87->fields._size;
          if ( (unsigned int)v97 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v87,
              (Il2CppObject *)v94,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
          }
          else
          {
            v98 = &items->obj.klass + v97;
            v87->fields._size = v97 + 1;
            v98[4] = (Il2CppClass *)v94;
            sub_1BCA784((PartyOrganizationUtility_o *)(v98 + 4), (int64_t)v94, v80, v81, v82, v83, v84, v85);
          }
        }
      }
      while ( size != ++v93 );
    }
    if ( !v87 )
      goto LABEL_79;
    v99 = v87->fields._size - 1;
    if ( v99 >= 0 )
    {
      do
      {
        v100 = (System_Random_o *)sub_1BCAA2C(System_Random_TypeInfo, v47, v80, v81);
        System_Random___ctor(v100, 0LL);
        if ( !v100 )
          goto LABEL_79;
        Instance = (DataManager_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v100->klass->vtable._7_Next.method)(
                                      v100,
                                      (unsigned int)v87->fields._size,
                                      v100->klass->vtable._8_NextDouble.methodPtr);
        if ( !v118->fields.voiceListMission )
          goto LABEL_79;
        v101 = (unsigned int)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v119,
          (System_Collections_Generic_List_object__o *)v118->fields.voiceListMission,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v120 = v119;
        do
        {
          v102 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v120,
                   (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !v102 )
            break;
          current = v120.fields._current;
          if ( !v120.fields._current )
            sub_1BCAA3C(v102, v103);
          monitor = (int)v120.fields._current[1].monitor;
          if ( monitor >= 1 )
          {
            v106 = 0;
            while ( 1 )
            {
              if ( v106 >= monitor )
                sub_1BCAA44(v102, v103);
              v107 = *((_QWORD *)&current[2].klass + (int)v106);
              if ( !v107 )
                sub_1BCAA3C(v102, v103);
              v108 = *(System_String_o **)(v107 + 16);
              Item = System_Collections_Generic_List_object___get_Item(
                       v87,
                       v101,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
              v102 = System_String__op_Equality(v108, (System_String_o *)Item, 0LL);
              if ( v102 )
                break;
              monitor = (int)current[1].monitor;
              if ( (int)++v106 >= monitor )
                goto LABEL_57;
            }
            p_randomVoiceList->klass = (PartyOrganizationUtility_c *)current;
            sub_1BCA784(p_randomVoiceList, (int64_t)current, v110, v111, v112, v113, v114, v115);
          }
LABEL_57:
          ;
        }
        while ( !p_randomVoiceList->klass );
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v120,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        if ( p_randomVoiceList->klass )
          goto LABEL_74;
        if ( v101 >= voiceIds->max_length )
          goto LABEL_71;
        System_Collections_Generic_List_object___Remove(
          v91,
          (Il2CppObject *)voiceIds->m_Items[v101],
          (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_string__Remove__);
      }
      while ( --v99 >= 0 );
    }
  }
  else
  {
    Instance = (DataManager_o *)this->fields.voiceListMission;
    if ( !Instance )
      goto LABEL_79;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v119,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    v120 = v119;
    p_specialSvtVoice = &this->fields.specialSvtVoice;
    do
    {
      IsNullOrEmpty = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v120,
                        (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
      if ( !IsNullOrEmpty )
        break;
      v53 = v120.fields._current;
      if ( !v120.fields._current )
        sub_1BCAA3C(IsNullOrEmpty, v52);
      v54 = (int)v120.fields._current[1].monitor;
      if ( v54 >= 1 )
      {
        v55 = 0;
        while ( 1 )
        {
          if ( v55 >= v54 )
            sub_1BCAA44(IsNullOrEmpty, v52);
          v56 = *((_QWORD *)&v53[2].klass + (int)v55);
          if ( !v56 )
            sub_1BCAA3C(IsNullOrEmpty, v52);
          if ( !voiceIds->max_length )
            sub_1BCAA44(IsNullOrEmpty, v52);
          if ( System_String__op_Equality(*(System_String_o **)(v56 + 16), voiceIds->m_Items[0], 0LL)
            && System_String__IsNullOrEmpty(*p_specialSvtVoice, 0LL) )
          {
            p_randomVoiceList->klass = (PartyOrganizationUtility_c *)v53;
            sub_1BCA784(p_randomVoiceList, (int64_t)v53, v57, v58, v59, v60, v61, v62);
            goto LABEL_28;
          }
          IsNullOrEmpty = System_String__IsNullOrEmpty(*p_specialSvtVoice, 0LL);
          if ( !IsNullOrEmpty )
          {
            v63 = *(System_String_o **)(v56 + 16);
            if ( !v63 )
              sub_1BCAA3C(0LL, v52);
            v64 = System_String__Split(v63, 0x5Fu, 0, 0LL);
            if ( !v64 )
              sub_1BCAA3C(0LL, v65);
            if ( !v64->max_length )
              sub_1BCAA44(v64, v65);
            v66 = System_String__Concat_62412480(
                    v64->m_Items[0],
                    (System_String_o *)StringLiteral_16290/*"_"*/,
                    *p_specialSvtVoice,
                    0LL);
            IsNullOrEmpty = System_String__op_Equality(*(System_String_o **)(v56 + 16), v66, 0LL);
            if ( IsNullOrEmpty )
              break;
          }
          v54 = (int)v53[1].monitor;
          if ( (int)++v55 >= v54 )
            goto LABEL_28;
        }
        p_randomVoiceList->klass = (PartyOrganizationUtility_c *)v53;
        sub_1BCA784(p_randomVoiceList, (int64_t)v53, v67, v68, v69, v70, v71, v72);
        v73 = StringLiteral_1/*""*/;
        *p_specialSvtVoice = (System_String_o *)StringLiteral_1/*""*/;
        sub_1BCA784((PartyOrganizationUtility_o *)p_specialSvtVoice, (int64_t)v73, v74, v75, v76, v77, v78, v79);
      }
LABEL_28:
      ;
    }
    while ( !p_randomVoiceList->klass );
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v120,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  }
  if ( p_randomVoiceList->klass )
  {
LABEL_74:
    v118->fields.callbakEndPlay = callbackEnds;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v118->fields.callbakEndPlay,
      (int64_t)callbackEnds,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85);
    randomVoiceList = v118->fields.randomVoiceList;
    if ( randomVoiceList )
    {
      v118->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
      EventSvtControl__svtVoicePlay(v118, v47);
      return;
    }
LABEL_79:
    sub_1BCAA3C(Instance, v47);
  }
  if ( callbackEnds )
    ActionExtensions__Call(callbackEnds, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventSvtControl__playPurchaseVoice(
        EventSvtControl_o *this,
        int32_t svtId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListShop; // x8
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Collections_Generic_List_object__o *v39; // x20
  Il2CppObject *Instance; // x0
  const MethodInfo *v41; // x1
  VoicePlayCondMaster_o *v42; // x22
  _BOOL8 v43; // x0
  __int64 v44; // x1
  Il2CppObject *current; // x23
  Il2CppClass *klass; // x8
  _BOOL8 isVoicePlay; // x0
  __int64 v48; // x1
  _BOOL8 v49; // x0
  __int64 v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct System_Object_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  Il2CppClass **v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  System_Random_o *v64; // x21
  int v65; // w21
  struct ServantVoiceData_array *Item; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 v74; // x0
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  System_Exception_o *v78; // x19
  __int64 v79; // x1
  System_String_o *v80; // x0
  __int64 v81; // x1
  __int64 v82; // x0
  System_Collections_Generic_List_Enumerator_object__o v83; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v84; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B1A236 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId, callback);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____Contains__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v27, v28);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v29, v30);
    sub_1BCA7E0(&System_Random_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34);
    byte_4B1A236 = 1;
  }
  memset(&v84, 0, sizeof(v84));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  voiceListShop = this->fields.voiceListShop;
  if ( voiceListShop )
  {
    if ( voiceListShop->fields._size <= 0 )
    {
      v74 = sub_1BCA7F4(&System_Exception_TypeInfo, *(_QWORD *)&svtId);
      v78 = (System_Exception_o *)sub_1BCAA2C(v74, v75, v76, v77);
      v80 = (System_String_o *)sub_1BCA7F4(&StringLiteral_25544/*"イベントショップ購入時のSvtVoiceマスタが適切に設定されていません。"*/, v79);
      System_Exception___ctor_63442328(v78, v80, 0LL);
      v82 = sub_1BCA7F4(&Method_EventSvtControl_playPurchaseVoice__, v81);
      sub_1BCA908(v78, v82);
    }
    this->fields.callbackStopVoice = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.callbackStopVoice,
      (int64_t)callback,
      (int64_t)callback,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    v39 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                         v36,
                                                         v37,
                                                         v38);
    System_Collections_Generic_List_object____ctor(
      v39,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !this->fields.voiceListShop )
      goto LABEL_35;
    v42 = (VoicePlayCondMaster_o *)Instance;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v83,
      (System_Collections_Generic_List_object__o *)this->fields.voiceListShop,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    v84 = v83;
    while ( 1 )
    {
      v43 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v84,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
      if ( !v43 )
        break;
      current = v84.fields._current;
      if ( !v84.fields._current )
        sub_1BCAA3C(v43, v44);
      if ( !LODWORD(v84.fields._current[1].monitor) )
        sub_1BCAA44(v43, v44);
      klass = v84.fields._current[2].klass;
      if ( !klass )
        sub_1BCAA3C(v43, v44);
      if ( !v42 )
        sub_1BCAA3C(v43, v44);
      isVoicePlay = VoicePlayCondMaster__isVoicePlay(
                      v42,
                      svtId,
                      (System_String_o *)klass->_1.name,
                      0LL,
                      -1LL,
                      -1,
                      0LL,
                      0LL,
                      0LL);
      if ( isVoicePlay )
      {
        if ( !v39 )
          sub_1BCAA3C(isVoicePlay, v48);
        v49 = System_Collections_Generic_List_object___Contains(
                v39,
                current,
                (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
        if ( !v49 )
        {
          items = v39->fields._items;
          v58 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
          ++v39->fields._version;
          if ( !items )
            sub_1BCAA3C(v49, v50);
          size = v39->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v39,
              current,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
          }
          else
          {
            v60 = &items->obj.klass + size;
            v39->fields._size = size + 1;
            v60[4] = (Il2CppClass *)current;
            sub_1BCA784((PartyOrganizationUtility_o *)(v60 + 4), (int64_t)current, v51, v52, v53, v54, v55, v56);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v84,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    v64 = (System_Random_o *)sub_1BCAA2C(System_Random_TypeInfo, v61, v62, v63);
    System_Random___ctor(v64, 0LL);
    if ( !v39 || !v64 )
      goto LABEL_35;
    v65 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v64->klass->vtable._7_Next.method)(
            v64,
            (unsigned int)v39->fields._size,
            v64->klass->vtable._8_NextDouble.methodPtr);
    if ( this->fields.beforeVoiceIdx == v65 )
      v65 = (v65 + 1) % v39->fields._size;
    Item = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                              v39,
                                              v65,
                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    this->fields.randomVoiceList = Item;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.randomVoiceList,
      (int64_t)Item,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
    randomVoiceList = this->fields.randomVoiceList;
    this->fields.beforeVoiceIdx = v65;
    if ( !randomVoiceList )
LABEL_35:
      sub_1BCAA3C(Instance, v41);
    this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
    EventSvtControl__setVoiceForm(this, v41);
  }
}


void __fastcall EventSvtControl__playVoice(
        EventSvtControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  System_Collections_Generic_List_int__o *v42; // x21
  System_Collections_Generic_List_int__o **p_forcePlayVoiceSvtIdList; // x20
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  System_Collections_Generic_List_int__o *v53; // x23
  struct System_Collections_Generic_List_int__o **p_voicePlayedValueList; // x21
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  const MethodInfo *v61; // x1
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  const MethodInfo *v68; // x3
  __int64 PlayableVoiceInfoList; // x0
  const MethodInfo *v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  System_Collections_Generic_List_T__o *v73; // x23
  int32_t v74; // w22
  int32_t beforeVoiceIdx; // w9
  int v76; // w1
  const MethodInfo_34D8EF4 *v77; // x4
  EventSvtControl___c_c *v78; // x0
  System_Func_T__TResult__o *_9__45_0; // x22
  Il2CppObject *v80; // x24
  struct EventSvtControl___c_StaticFields *static_fields; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v88; // x0
  System_Int32_array *v89; // x0
  struct ServantVoiceData_array *key; // x0
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  struct ServantVoiceData_array *randomVoiceList; // x8
  struct System_Collections_Generic_List_int__o *forcePlayVoiceSvtIdList; // x8
  __int64 size; // x23
  System_Int32_array_array *v100; // x19
  unsigned __int64 v101; // x24
  PartyOrganizationUtility_o *m_Items; // x25
  PartyOrganizationUtility_c *v103; // x26
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  __int64 v110; // x1
  System_Collections_Generic_KeyValuePair_object__int__o v111; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *voiceInfoList; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o v113; // 0:x0.16
  System_Collections_Generic_KeyValuePair_object__int__o Item; // 0:x2.16

  if ( (byte_4B1A235 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_KeyValuePair_ServantVoiceData____int____, callback, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_KeyValuePair_ServantVoiceData____int___int___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v8, v9);
    sub_1BCA7E0(&System_Func_KeyValuePair_ServantVoiceData____int___int__TypeInfo, v10, v11);
    sub_1BCA7E0(&int_____TypeInfo, v12, v13);
    sub_1BCA7E0(&int___TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int__get_Key__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Count__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Item__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___set_Item__, v30, v31);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v32, v33);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_TopMyRoomRequest___, v34, v35);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v36, v37);
    sub_1BCA7E0(&Method_EventSvtControl___c__playVoice_b__45_0__, v38, v39);
    sub_1BCA7E0(&EventSvtControl___c_TypeInfo, v40, v41);
    byte_4B1A235 = 1;
  }
  *(_QWORD *)&v111.fields.value = 0LL;
  voiceInfoList = 0LL;
  v111.fields.key = 0LL;
  v42 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    callback,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.forcePlayVoiceSvtIdList = v42;
  p_forcePlayVoiceSvtIdList = &this->fields.forcePlayVoiceSvtIdList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.forcePlayVoiceSvtIdList,
    (int64_t)v42,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v53 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v50,
                                                    v51,
                                                    v52);
  System_Collections_Generic_List_int____ctor(
    v53,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.voicePlayedValueList = v53;
  p_voicePlayedValueList = &this->fields.voicePlayedValueList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.voicePlayedValueList,
    (int64_t)v53,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, v61);
  if ( this->fields.voiceListRand )
  {
    this->fields.callbackStopVoice = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.callbackStopVoice,
      (int64_t)callback,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67);
    PlayableVoiceInfoList = EventSvtControl__TryGetPlayableVoiceInfoList(
                              this,
                              &voiceInfoList,
                              this->fields.voiceListRand,
                              v68);
    if ( (PlayableVoiceInfoList & 1) != 0 )
    {
      v73 = (System_Collections_Generic_List_T__o *)voiceInfoList;
      if ( !voiceInfoList )
        goto LABEL_43;
      if ( voiceInfoList->fields._size == 1 )
      {
        v74 = 0;
      }
      else
      {
        beforeVoiceIdx = this->fields.beforeVoiceIdx;
        if ( (beforeVoiceIdx & 0x80000000) == 0 )
        {
          if ( beforeVoiceIdx <= voiceInfoList->fields._size - 1 )
            v76 = this->fields.beforeVoiceIdx;
          else
            v76 = voiceInfoList->fields._size - 1;
          this->fields.beforeVoiceIdx = v76;
          *(_QWORD *)&v113.fields.value = System_Collections_Generic_List_KeyValuePair_object__int____get_Item(
                                            v73,
                                            v76,
                                            (const MethodInfo_34F71A8 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Item__).fields.key;
          v113.fields.key = (Il2CppObject *)&v111;
          System_Collections_Generic_KeyValuePair_object__int____ctor(
            v113,
            0LL,
            Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__,
            v77);
          PlayableVoiceInfoList = (__int64)voiceInfoList;
          if ( !voiceInfoList )
            goto LABEL_43;
          System_Collections_Generic_List_KeyValuePair_object__int____set_Item(
            (System_Collections_Generic_List_T__o *)voiceInfoList,
            this->fields.beforeVoiceIdx,
            v111,
            (const MethodInfo_34F7200 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___set_Item__);
          v73 = (System_Collections_Generic_List_T__o *)voiceInfoList;
        }
        v78 = EventSvtControl___c_TypeInfo;
        if ( !EventSvtControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSvtControl___c_TypeInfo, v70);
          v78 = EventSvtControl___c_TypeInfo;
        }
        _9__45_0 = (System_Func_T__TResult__o *)v78->static_fields->__9__45_0;
        if ( !_9__45_0 )
        {
          if ( !v78->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v78, v70);
            v78 = EventSvtControl___c_TypeInfo;
          }
          v80 = (Il2CppObject *)v78->static_fields->__9;
          _9__45_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                                    System_Func_KeyValuePair_ServantVoiceData____int___int__TypeInfo,
                                                    v70,
                                                    v71,
                                                    v72);
          System_Func_KeyValuePair_object__int___int____ctor(
            _9__45_0,
            v80,
            Method_EventSvtControl___c__playVoice_b__45_0__,
            0LL);
          static_fields = EventSvtControl___c_TypeInfo->static_fields;
          static_fields->__9__45_0 = (struct System_Func_KeyValuePair_ServantVoiceData____int___int__o *)_9__45_0;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&static_fields->__9__45_0,
            (int64_t)_9__45_0,
            v82,
            v83,
            v84,
            v85,
            v86,
            v87);
        }
        v88 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_object__int___int_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)v73,
                                                                     (System_Func_TSource__TResult__o *)_9__45_0,
                                                                     (const MethodInfo_2F3D220 *)Method_System_Linq_Enumerable_Select_KeyValuePair_ServantVoiceData____int___int___);
        v89 = System_Linq_Enumerable__ToArray_int_(
                v88,
                (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
        PlayableVoiceInfoList = RandomUtility__GetRandomRangeIndex(v89, 0, 0LL);
        v73 = (System_Collections_Generic_List_T__o *)voiceInfoList;
        if ( !voiceInfoList )
LABEL_43:
          sub_1BCAA3C(PlayableVoiceInfoList, v70);
        v74 = PlayableVoiceInfoList;
      }
      Item = System_Collections_Generic_List_KeyValuePair_object__int____get_Item(
               v73,
               0,
               (const MethodInfo_34F71A8 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Item__);
      key = (struct ServantVoiceData_array *)BasicHelper__IndexValue_KeyValuePair_object__int__(
                                               v73,
                                               v74,
                                               Item,
                                               (const MethodInfo_2F01600 *)Method_BasicHelper_IndexValue_KeyValuePair_ServantVoiceData____int____).fields.key;
      this->fields.randomVoiceList = key;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.randomVoiceList,
        (int64_t)key,
        v91,
        v92,
        v93,
        v94,
        v95,
        v96);
      randomVoiceList = this->fields.randomVoiceList;
      this->fields.beforeVoiceIdx = v74;
      if ( randomVoiceList )
      {
        this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
        EventSvtControl__setVoiceForm(this, v70);
        forcePlayVoiceSvtIdList = this->fields.forcePlayVoiceSvtIdList;
        if ( forcePlayVoiceSvtIdList )
        {
          size = (unsigned int)forcePlayVoiceSvtIdList->fields._size;
          if ( (int)size < 1 )
            return;
          if ( *p_voicePlayedValueList )
          {
            if ( (*p_voicePlayedValueList)->fields._size <= v74 )
              return;
            v100 = (System_Int32_array_array *)sub_1BCA888(int_____TypeInfo, (unsigned int)size);
            v101 = 0LL;
            m_Items = (PartyOrganizationUtility_o *)v100->m_Items;
            do
            {
              PlayableVoiceInfoList = sub_1BCA888(int___TypeInfo, 2LL);
              if ( !*p_forcePlayVoiceSvtIdList )
                goto LABEL_43;
              v103 = (PartyOrganizationUtility_c *)PlayableVoiceInfoList;
              PlayableVoiceInfoList = System_Collections_Generic_List_int___get_Item(
                                        *p_forcePlayVoiceSvtIdList,
                                        v101,
                                        (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( !v103 )
                goto LABEL_43;
              if ( !LODWORD(v103->_1.namespaze) )
                goto LABEL_44;
              LODWORD(v103->_1.byval_arg.data) = PlayableVoiceInfoList;
              PlayableVoiceInfoList = (__int64)*p_voicePlayedValueList;
              if ( !*p_voicePlayedValueList )
                goto LABEL_43;
              PlayableVoiceInfoList = System_Collections_Generic_List_int___get_Item(
                                        (System_Collections_Generic_List_int__o *)PlayableVoiceInfoList,
                                        v74,
                                        (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( LODWORD(v103->_1.namespaze) <= 1 )
                goto LABEL_44;
              HIDWORD(v103->_1.byval_arg.data) = PlayableVoiceInfoList;
              if ( !v100 )
                goto LABEL_43;
              if ( v101 >= v100->max_length )
LABEL_44:
                sub_1BCAA44(PlayableVoiceInfoList, v70);
              m_Items->klass = v103;
              sub_1BCA784(m_Items, (int64_t)v103, v104, v105, v106, v107, v108, v109);
              ++v101;
              m_Items = (PartyOrganizationUtility_o *)((char *)m_Items + 8);
            }
            while ( size != v101 );
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v110);
            PlayableVoiceInfoList = (__int64)NetworkManager__getRequest_object_(
                                               0LL,
                                               (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TopMyRoomRequest___);
            if ( PlayableVoiceInfoList )
            {
              TopMyRoomRequest__beginRequest((TopMyRoomRequest_o *)PlayableVoiceInfoList, v100, 0LL);
              return;
            }
          }
        }
      }
      goto LABEL_43;
    }
  }
}


void __fastcall EventSvtControl__setBoxGachaSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listBoxGacha,
        System_String_o *assetName,
        UnityEngine_GameObject_o *performanceRoot,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  PartyOrganizationUtility_o *p_voiceListBoxGacha; // x0
  System_Collections_Generic_List_ServantVoiceData____o *v24; // x1

  this->fields.playCnt = 0;
  this->fields.asstName = assetName;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.asstName,
    (int64_t)assetName,
    (int64_t)assetName,
    (int32_t)performanceRoot,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.performanceRoot = performanceRoot;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.performanceRoot,
    (int64_t)performanceRoot,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  p_voiceListBoxGacha = (PartyOrganizationUtility_o *)&this->fields.voiceListBoxGacha;
  if ( listBoxGacha )
  {
    p_voiceListBoxGacha->klass = (PartyOrganizationUtility_c *)listBoxGacha;
    v24 = listBoxGacha;
  }
  else
  {
    v24 = 0LL;
    p_voiceListBoxGacha->klass = 0LL;
  }
  sub_1BCA784(p_voiceListBoxGacha, (int64_t)v24, v17, v18, v19, v20, v21, v22);
  this->fields.beforeVoiceIdx = -1;
}


void __fastcall EventSvtControl__setIndividualShopSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listIndividualShop,
        System_String_o *assetName,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_String_o **p_asstName; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  PartyOrganizationUtility_o *v17; // x0
  System_Collections_Generic_List_ServantVoiceData____o *v18; // x1

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.asstName,
    (int64_t)assetName,
    (int64_t)assetName,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v17 = (PartyOrganizationUtility_o *)(p_asstName + 11);
  if ( listIndividualShop )
  {
    v17->klass = (PartyOrganizationUtility_c *)listIndividualShop;
    v18 = listIndividualShop;
  }
  else
  {
    v18 = 0LL;
    v17->klass = 0LL;
  }
  sub_1BCA784(v17, (int64_t)v18, v11, v12, v13, v14, v15, v16);
  this->fields.beforeVoiceIdx = -1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventSvtControl__setSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listRand,
        System_Collections_Generic_List_ServantVoiceData____o *listMission,
        System_Collections_Generic_List_ServantVoiceData____o *listShop,
        System_String_o *assetName,
        int32_t svtId,
        const MethodInfo *method)
{
  PartyListViewItem_o *v7; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceListRand; // x0
  System_Collections_Generic_List_ServantVoiceData____o *v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  PartyOrganizationUtility_o *p_voiceListMission; // x0
  System_Collections_Generic_List_ServantVoiceData____o *v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  PartyOrganizationUtility_o *p_voiceListShop; // x0
  System_Collections_Generic_List_ServantVoiceData____o *v37; // x1
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceListOverwrite; // x19
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7

  if ( (byte_4B1A233 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, listRand, listMission);
    byte_4B1A233 = 1;
  }
  this->fields.asstName = assetName;
  this->fields.isDead = 0;
  this->fields.playCnt = 0;
  this->fields.svtId = svtId;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.asstName,
    (int64_t)assetName,
    (int64_t)listMission,
    (int32_t)listShop,
    assetName,
    *(BattleSetupInfo_o **)&svtId,
    (FollowerInfo_o *)method,
    v7);
  if ( listRand && listRand->fields._size >= 1 )
  {
    this->fields.voiceListRand = listRand;
    p_voiceListRand = &this->fields.voiceListRand;
    v21 = listRand;
  }
  else
  {
    this->fields.voiceListRand = 0LL;
    p_voiceListRand = &this->fields.voiceListRand;
    v21 = 0LL;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)p_voiceListRand, (int64_t)v21, v14, v15, v16, v17, v18, v19);
  p_voiceListMission = (PartyOrganizationUtility_o *)&this->fields.voiceListMission;
  if ( listMission )
  {
    p_voiceListMission->klass = (PartyOrganizationUtility_c *)listMission;
    v29 = listMission;
  }
  else
  {
    v29 = 0LL;
    p_voiceListMission->klass = 0LL;
  }
  sub_1BCA784(p_voiceListMission, (int64_t)v29, v22, v23, v24, v25, v26, v27);
  p_voiceListShop = (PartyOrganizationUtility_o *)&this->fields.voiceListShop;
  if ( listShop )
  {
    p_voiceListShop->klass = (PartyOrganizationUtility_c *)listShop;
    v37 = listShop;
  }
  else
  {
    v37 = 0LL;
    p_voiceListShop->klass = 0LL;
  }
  sub_1BCA784(p_voiceListShop, (int64_t)v37, v30, v31, v32, v33, v34, v35);
  this->fields.voiceListOverwrite = 0LL;
  p_voiceListOverwrite = &this->fields.voiceListOverwrite;
  sub_1BCA784((PartyOrganizationUtility_o *)p_voiceListOverwrite, 0LL, v39, v40, v41, v42, v43, v44);
  *((_DWORD *)p_voiceListOverwrite - 26) = -1;
}


void __fastcall EventSvtControl__setVoiceForm(EventSvtControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
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
  System_Collections_Generic_List_int__o *v23; // x20
  System_Collections_Generic_List_object__o *monitor; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  struct ServantVoiceData_array *randomVoiceList; // x24
  unsigned __int64 v29; // x25
  __int64 v30; // x22
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x1
  __int64 v38; // x21
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Predicate_int__o *v42; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  __int64 v46; // x2
  __int64 v47; // x3
  UIStandFigureR_o *v48; // x21
  System_Action_o *v49; // x22
  Il2CppObject *v50; // [xsp+8h] [xbp-68h]

  if ( (byte_4B1A234 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventSvtControl_svtVoicePlay__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Exists__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Predicate_int__TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_EventSvtControl___c__DisplayClass44_0__setVoiceForm_b__0__, v19, v20);
    sub_1BCA7E0(&EventSvtControl___c__DisplayClass44_0_TypeInfo, v21, v22);
    byte_4B1A234 = 1;
  }
  v23 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  v50 = (Il2CppObject *)this;
  if ( !randomVoiceList )
    goto LABEL_20;
  if ( (int)randomVoiceList->max_length >= 1 )
  {
    v29 = 0LL;
    while ( 1 )
    {
      v30 = sub_1BCAA2C(EventSvtControl___c__DisplayClass44_0_TypeInfo, v25, v26, v27);
      System_Object___ctor((Il2CppObject *)v30, 0LL);
      if ( v29 >= randomVoiceList->max_length )
        sub_1BCAA44(monitor, v25);
      if ( !v30 )
        break;
      v37 = (int64_t)randomVoiceList->m_Items[v29];
      *(_QWORD *)(v30 + 16) = v37;
      v38 = v30 + 16;
      sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 16), v37, v31, v32, v33, v34, v35, v36);
      v42 = (System_Predicate_int__o *)sub_1BCAA2C(System_Predicate_int__TypeInfo, v39, v40, v41);
      System_Predicate_int____ctor(
        v42,
        (Il2CppObject *)v30,
        Method_EventSvtControl___c__DisplayClass44_0__setVoiceForm_b__0__,
        0LL);
      if ( !v23 )
        break;
      monitor = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___Exists(
                                                               v23,
                                                               (System_Predicate_T__o *)v42,
                                                               (const MethodInfo_3585244 *)Method_System_Collections_Generic_List_int__Exists__);
      if ( ((unsigned __int8)monitor & 1) == 0 )
      {
        if ( !*(_QWORD *)v38 )
          break;
        v25 = *(unsigned int *)(*(_QWORD *)v38 + 56LL);
        items = v23->fields._items;
        v44 = Method_System_Collections_Generic_List_int__Add__;
        ++v23->fields._version;
        if ( !items )
          break;
        size = v23->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v23,
            v25,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v23->fields._size = size + 1;
          items->m_Items[size + 1] = v25;
        }
      }
      if ( (__int64)++v29 >= (int)randomVoiceList->max_length )
        goto LABEL_16;
    }
LABEL_20:
    sub_1BCAA3C(monitor, v25);
  }
LABEL_16:
  monitor = (System_Collections_Generic_List_object__o *)v50[5].monitor;
  if ( !monitor )
    goto LABEL_20;
  monitor = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                           monitor,
                                                           0,
                                                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
  if ( !monitor )
    goto LABEL_20;
  v48 = *(UIStandFigureR_o **)&monitor->fields._size;
  v49 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v46, v47);
  System_Action___ctor(v49, v50, Method_EventSvtControl_svtVoicePlay__, 0LL);
  if ( !v48 )
    goto LABEL_20;
  UIStandFigureR__PreloadFormAssets(v48, v23, v49, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventSvtControl__shopIndividualPlayVoice(
        EventSvtControl_o *this,
        int32_t svtId,
        System_String_array *targetVoiceIds,
        System_Action_o *callback,
        const MethodInfo *method)
{
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
  DataManager_o *Instance; // x0
  __int64 v30; // x1
  int64_t v31; // x2
  __int64 v32; // x3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  signed int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v39; // x23
  System_Collections_Generic_List_object__o *v40; // x24
  __int64 v41; // x26
  __int64 v42; // x27
  System_String_o *v43; // x25
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  int32_t v54; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  _BOOL8 v62; // x0
  __int64 v63; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v66; // w25
  __int64 v67; // x8
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  __int64 v74; // x0
  const MethodInfo *v75; // x1
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B1A23D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId, targetVoiceIds);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    byte_4B1A23D = 1;
  }
  memset(&v77, 0, sizeof(v77));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  if ( !targetVoiceIds )
    goto LABEL_40;
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
LABEL_21:
      sub_1BCAA44(Instance, v30);
    Item = targetVoiceIds->m_Items[0];
    goto LABEL_24;
  }
  v39 = (VoicePlayCondMaster_o *)Instance;
  v40 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v30,
                                                       v31,
                                                       v32);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)*(_QWORD *)&targetVoiceIds->max_length >= 1 )
  {
    v41 = 0LL;
    v42 = (unsigned int)*(_QWORD *)&targetVoiceIds->max_length - 1LL;
    while ( v39 )
    {
      v43 = targetVoiceIds->m_Items[v41];
      Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v39, svtId, v43, 0LL, -1LL, -1, 0LL, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v40 )
          break;
        items = v40->fields._items;
        v51 = Method_System_Collections_Generic_List_string__Add__;
        ++v40->fields._version;
        if ( !items )
          break;
        size = v40->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v40,
            (Il2CppObject *)v43,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
        }
        else
        {
          v53 = &items->obj.klass + size;
          v40->fields._size = size + 1;
          v53[4] = (Il2CppClass *)v43;
          sub_1BCA784((PartyOrganizationUtility_o *)(v53 + 4), (int64_t)v43, v44, v45, v46, v47, v48, v49);
        }
      }
      if ( v42 == v41 )
        goto LABEL_22;
      if ( ++v41 >= (unsigned __int64)targetVoiceIds->max_length )
        goto LABEL_21;
    }
LABEL_40:
    sub_1BCAA3C(Instance, v30);
  }
LABEL_22:
  if ( !v40 )
    goto LABEL_40;
  v54 = UnityEngine_Random__Range_70113984(0, v40->fields._size, 0LL);
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v40,
                              v54,
                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_24:
  this->fields.callbakEndPlay = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbakEndPlay,
    (int64_t)callback,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.randomVoiceList, 0LL, v56, v57, v58, v59, v60, v61);
  Instance = (DataManager_o *)this->fields.voiceIndividualShopList;
  if ( !Instance )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v76,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v77 = v76;
LABEL_26:
  while ( 1 )
  {
    v62 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v77,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v62 )
      break;
    current = v77.fields._current;
    if ( !v77.fields._current )
      sub_1BCAA3C(v62, v63);
    monitor = (int)v77.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v66 = 0;
      while ( 1 )
      {
        if ( v66 >= monitor )
          sub_1BCAA44(v62, v63);
        v67 = *((_QWORD *)&current[2].klass + (int)v66);
        if ( !v67 )
          sub_1BCAA3C(v62, v63);
        v62 = System_String__op_Equality(*(System_String_o **)(v67 + 16), Item, 0LL);
        if ( v62 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v66 >= monitor )
          goto LABEL_26;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.randomVoiceList,
        (int64_t)current,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
      if ( !*p_randomVoiceList )
        sub_1BCAA3C(v74, v75);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v75);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v77,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


void __fastcall EventSvtControl__stopVoice(EventSvtControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  SePlayer_o **p_player; // x20
  System_String_o *asstName; // x21
  System_String_o *vcName; // x22
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B1A23C & 1) == 0 )
  {
    sub_1BCA7E0(&SoundManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_23961/*"svtVoicePlay"*/, v4, v5);
    byte_4B1A23C = 1;
  }
  p_player = &this->fields.player;
  if ( this->fields.player )
  {
    asstName = this->fields.asstName;
    vcName = this->fields.vcName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
    SoundManager__stopVoice(asstName, vcName, 0.0, 0LL);
    if ( !*p_player )
      sub_1BCAA3C(0LL, v9);
    SePlayer__Destroy(*p_player, 0LL);
    this->fields.player = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.player, 0LL, v10, v11, v12, v13, v14, v15);
    this->fields.callbakEndPlay = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbakEndPlay, 0LL, v16, v17, v18, v19, v20, v21);
    *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_70138824(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_23961/*"svtVoicePlay"*/,
    0LL);
}


void __fastcall EventSvtControl__svtVoicePlay(EventSvtControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  EventSvtControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  ServantVoiceData_o *v10; // x8
  ServantVoicePerformance_o *additionalPerformances; // x20
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x5

  v4 = this;
  if ( (byte_4B1A238 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (EventSvtControl_o *)sub_1BCA7E0(&Method_EventSvtControl_SvtVoicePlayProc__, v5, v6);
    byte_4B1A238 = 1;
  }
  if ( v4->fields.asstName && v4->fields.maxPlayCnt )
  {
    randomVoiceList = v4->fields.randomVoiceList;
    if ( !randomVoiceList )
      goto LABEL_13;
    playCnt = v4->fields.playCnt;
    max_length = randomVoiceList->max_length;
    if ( (int)playCnt < max_length )
    {
      if ( v4->fields.isSkipPerformance )
      {
        EventSvtControl__SvtVoicePlayProc(v4, method);
        return;
      }
      if ( (unsigned int)playCnt >= max_length )
        sub_1BCAA44(this, method);
      v10 = randomVoiceList->m_Items[playCnt];
      if ( v10 )
      {
        additionalPerformances = v10->fields.additionalPerformances;
        v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
        System_Action___ctor(v12, (Il2CppObject *)v4, Method_EventSvtControl_SvtVoicePlayProc__, 0LL);
        EventSvtControl__PlayPerformance(v4, additionalPerformances, 0, 1, v12, v13);
        return;
      }
LABEL_13:
      sub_1BCAA3C(this, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventSvtControl__welcomeVoicePlay(
        EventSvtControl_o *this,
        int32_t eventId,
        int32_t svtId,
        System_Action_o *callback,
        const MethodInfo *method)
{
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
  Il2CppObject *Instance; // x0
  const MethodInfo *v36; // x1
  __int64 v37; // x1
  const MethodInfo *v38; // x2
  __int64 v39; // x3
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListOverwrite; // x8
  System_Collections_Generic_List_object__o *v41; // x21
  VoicePlayCondMaster_o *v42; // x23
  _BOOL8 v43; // x0
  __int64 v44; // x1
  Il2CppObject *current; // x24
  Il2CppClass *klass; // x8
  _BOOL8 isVoicePlay; // x0
  __int64 v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x0
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  System_Random_o *v67; // x20
  int32_t v68; // w0
  struct ServantVoiceData_array *Item; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  struct ServantVoiceData_array *randomVoiceList; // x8
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B1A244 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId, *(_QWORD *)&svtId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v27, v28);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v29, v30);
    sub_1BCA7E0(&System_Random_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34);
    byte_4B1A244 = 1;
  }
  memset(&v78, 0, sizeof(v78));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_34;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               eventId,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_34;
  if ( EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0LL) )
  {
    voiceListOverwrite = this->fields.voiceListOverwrite;
    if ( voiceListOverwrite )
    {
      if ( voiceListOverwrite->fields._size >= 1 )
      {
        v41 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                             v37,
                                                             v38,
                                                             v39);
        System_Collections_Generic_List_object____ctor(
          v41,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_34;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
        if ( !this->fields.voiceListOverwrite )
          goto LABEL_34;
        v42 = (VoicePlayCondMaster_o *)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v77,
          (System_Collections_Generic_List_object__o *)this->fields.voiceListOverwrite,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v78 = v77;
        while ( 1 )
        {
          v43 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v78,
                  (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !v43 )
            break;
          current = v78.fields._current;
          if ( !v78.fields._current )
            sub_1BCAA3C(v43, v44);
          if ( !LODWORD(v78.fields._current[1].monitor) )
            sub_1BCAA44(v43, v44);
          klass = v78.fields._current[2].klass;
          if ( !klass )
            sub_1BCAA3C(v43, v44);
          if ( !v42 )
            sub_1BCAA3C(v43, v44);
          isVoicePlay = VoicePlayCondMaster__isVoicePlay(
                          v42,
                          svtId,
                          (System_String_o *)klass->_1.name,
                          0LL,
                          -1LL,
                          -1,
                          0LL,
                          0LL,
                          0LL);
          if ( isVoicePlay )
          {
            if ( !v41 )
              sub_1BCAA3C(isVoicePlay, v48);
            items = v41->fields._items;
            v56 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v41->fields._version;
            if ( !items )
              sub_1BCAA3C(isVoicePlay, v48);
            size = v41->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v41,
                current,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
            }
            else
            {
              v58 = &items->obj.klass + size;
              v41->fields._size = size + 1;
              v58[4] = (Il2CppClass *)current;
              sub_1BCA784((PartyOrganizationUtility_o *)(v58 + 4), (int64_t)current, v49, v50, v51, v52, v53, v54);
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v78,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        if ( v41 )
        {
          if ( v41->fields._size >= 1 )
          {
            this->fields.callbackStopVoice = callback;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&this->fields.callbackStopVoice,
              (int64_t)callback,
              (int64_t)v38,
              v59,
              v60,
              v61,
              v62,
              v63);
            v67 = (System_Random_o *)sub_1BCAA2C(System_Random_TypeInfo, v64, v65, v66);
            System_Random___ctor(v67, 0LL);
            if ( v67 )
            {
              v68 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v67->klass->vtable._7_Next.method)(
                      v67,
                      (unsigned int)v41->fields._size,
                      v67->klass->vtable._8_NextDouble.methodPtr);
              Item = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                                        v41,
                                                        v68,
                                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
              this->fields.randomVoiceList = Item;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&this->fields.randomVoiceList,
                (int64_t)Item,
                v70,
                v71,
                v72,
                v73,
                v74,
                v75);
              randomVoiceList = this->fields.randomVoiceList;
              if ( randomVoiceList )
              {
                this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
                EventSvtControl__svtVoicePlay(this, v36);
                return;
              }
            }
LABEL_34:
            sub_1BCAA3C(Instance, v36);
          }
        }
      }
    }
  }
  EventSvtControl__playVoice(this, callback, v38);
}


void __fastcall EventSvtControl__PlayPerformanceProc_d__71___ctor(
        EventSvtControl__PlayPerformanceProc_d__71_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall EventSvtControl__PlayPerformanceProc_d__71__MoveNext(
        EventSvtControl__PlayPerformanceProc_d__71_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  EventSvtControl__PlayPerformanceProc_d__71_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t _1__state; // w8
  struct EventSvtControl_o *_4__this; // x22
  Il2CppObject *v15; // x21
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  Il2CppObject *animName; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v39; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  bool result; // w0
  struct EventSvtControl___c__DisplayClass71_0_o *_8__1; // x8
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  Il2CppObject *v52; // x20
  System_Func_bool__o *v53; // x21
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  UnityEngine_WaitUntil_o *v57; // x20
  PartyOrganizationUtility_o *v58; // x19
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  struct System_Action_o *playEndAction; // x8

  v4 = this;
  if ( (byte_4B1A251 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Func_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventSvtControl___c__DisplayClass71_0__PlayPerformanceProc_b__0__, v5, v6);
    sub_1BCA7E0(&EventSvtControl___c__DisplayClass71_0_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, v9, v10);
    this = (EventSvtControl__PlayPerformanceProc_d__71_o *)sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v11, v12);
    byte_4B1A251 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 2 )
  {
    v4->fields.__1__state = -1;
LABEL_18:
    playEndAction = v4->fields.playEndAction;
    if ( playEndAction )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))playEndAction->fields.m_target)(
        playEndAction->fields.original_method_info,
        *(_QWORD *)&playEndAction->fields.extra_arg);
    return 0;
  }
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    goto LABEL_12;
  }
  if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    v15 = (Il2CppObject *)sub_1BCAA2C(EventSvtControl___c__DisplayClass71_0_TypeInfo, method, v2, v3);
    System_Object___ctor(v15, 0LL);
    v4->fields.__8__1 = (struct EventSvtControl___c__DisplayClass71_0_o *)v15;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__8__1, (int64_t)v15, v16, v17, v18, v19, v20, v21);
    this = (EventSvtControl__PlayPerformanceProc_d__71_o *)v4->fields.__8__1;
    if ( !this )
      goto LABEL_21;
    v28 = (int64_t)v4->fields.__4__this;
    *(_QWORD *)&this->fields.__1__state = v28;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, v28, v22, v23, v24, v25, v26, v27);
    this = (EventSvtControl__PlayPerformanceProc_d__71_o *)v4->fields.__8__1;
    if ( !this )
      goto LABEL_21;
    animName = (Il2CppObject *)v4->fields.animName;
    this->fields.__2__current = animName;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.__2__current,
      (int64_t)animName,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    delay = v4->fields.delay;
    if ( delay > 0.0 )
    {
      v39 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v36, v37);
      UnityEngine_WaitForSeconds___ctor(v39, delay, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v39;
      p__2__current = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
      sub_1BCA784(p__2__current, (int64_t)v39, v41, v42, v43, v44, v45, v46);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    }
LABEL_12:
    if ( _4__this )
    {
      this = (EventSvtControl__PlayPerformanceProc_d__71_o *)_4__this->fields.animationRef;
      if ( this )
      {
        UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)this, 0LL);
        _8__1 = v4->fields.__8__1;
        if ( _8__1 )
        {
          this = (EventSvtControl__PlayPerformanceProc_d__71_o *)_4__this->fields.animationRef;
          if ( this )
          {
            UnityEngine_Animation__Play_69899248((UnityEngine_Animation_o *)this, _8__1->fields.animName, 0LL);
            if ( v4->fields.isWaitPerformance )
            {
              v52 = (Il2CppObject *)v4->fields.__8__1;
              v53 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v49, v50, v51);
              System_Func_bool____ctor(
                v53,
                v52,
                Method_EventSvtControl___c__DisplayClass71_0__PlayPerformanceProc_b__0__,
                0LL);
              v57 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v54, v55, v56);
              UnityEngine_WaitUntil___ctor(v57, v53, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v57;
              v58 = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
              sub_1BCA784(v58, (int64_t)v57, v59, v60, v61, v62, v63, v64);
              *(_DWORD *)&v58[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
              return 1;
            }
            goto LABEL_18;
          }
        }
      }
    }
LABEL_21:
    sub_1BCAA3C(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall EventSvtControl__PlayPerformanceProc_d__71__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventSvtControl__PlayPerformanceProc_d__71_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventSvtControl__PlayPerformanceProc_d__71__System_Collections_IEnumerator_Reset(
        EventSvtControl__PlayPerformanceProc_d__71_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_EventSvtControl__PlayPerformanceProc_d__71_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall EventSvtControl__PlayPerformanceProc_d__71__System_Collections_IEnumerator_get_Current(
        EventSvtControl__PlayPerformanceProc_d__71_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventSvtControl__PlayPerformanceProc_d__71__System_IDisposable_Dispose(
        EventSvtControl__PlayPerformanceProc_d__71_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventSvtControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1A24D & 1) == 0 )
  {
    sub_1BCA7E0(&EventSvtControl___c_TypeInfo, v1, v2);
    byte_4B1A24D = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventSvtControl___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventSvtControl___c_TypeInfo->static_fields->__9 = (struct EventSvtControl___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventSvtControl___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall EventSvtControl___c___ctor(EventSvtControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall EventSvtControl___c___TryGetPlayableVoiceInfoList_b__64_0(
        EventSvtControl___c_o *this,
        ServantVoiceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.id;
}


int32_t __fastcall EventSvtControl___c___playVoice_b__45_0(
        EventSvtControl___c_o *this,
        System_Collections_Generic_KeyValuePair_ServantVoiceData____int__o x,
        const MethodInfo *method)
{
  int32_t value; // w19

  value = x.fields.value;
  if ( (byte_4B1A24E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int__get_Value__,
      x.fields.key,
      *(_QWORD *)&x.fields.value);
    byte_4B1A24E = 1;
  }
  return value;
}


void __fastcall EventSvtControl___c__DisplayClass44_0___ctor(
        EventSvtControl___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventSvtControl___c__DisplayClass44_0___setVoiceForm_b__0(
        EventSvtControl___c__DisplayClass44_0_o *this,
        int32_t a,
        const MethodInfo *method)
{
  struct ServantVoiceData_o *voice; // x8
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  v5 = a;
  voice = this->fields.voice;
  if ( !voice )
    sub_1BCAA3C(this, *(_QWORD *)&a);
  return System_Int32__Equals_63206656((int32_t)&v5, voice->fields.form, 0LL);
}


void __fastcall EventSvtControl___c__DisplayClass56_0___ctor(
        EventSvtControl___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventSvtControl___c__DisplayClass56_1___ctor(
        EventSvtControl___c__DisplayClass56_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventSvtControl___c__DisplayClass56_1___boxGachaPlayVoice_b__0(
        EventSvtControl___c__DisplayClass56_1_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct EventSvtControl___c__DisplayClass56_0_o *CS___8__locals1; // x8
  EventSvtControl___c__DisplayClass56_1_o *v9; // x19
  struct System_Action_o *vdArray; // x1
  struct EventSvtControl___c__DisplayClass56_0_o *v11; // x8
  struct System_Action_o *_9__0; // x9
  struct EventSvtControl___c__DisplayClass56_0_o *v13; // x8
  struct System_Action_o *callBackStartPlay; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_10;
  v9 = this;
  this = (EventSvtControl___c__DisplayClass56_1_o *)CS___8__locals1->fields.__4__this;
  if ( !this )
    goto LABEL_10;
  vdArray = (struct System_Action_o *)v9->fields.vdArray;
  this[1].fields.__9__0 = vdArray;
  sub_1BCA784((PartyOrganizationUtility_o *)&this[1].fields.__9__0, (int64_t)vdArray, v2, v3, v4, v5, v6, v7);
  v11 = v9->fields.CS___8__locals1;
  if ( !v11
    || (this = (EventSvtControl___c__DisplayClass56_1_o *)v11->fields.__4__this) == 0LL
    || (_9__0 = this[1].fields.__9__0) == 0LL
    || (LODWORD(this[2].klass) = _9__0->fields.m_target,
        BYTE2(this[5].fields.vdArray) = v11->fields.arg.fields.skipPerformance,
        EventSvtControl__svtVoicePlay((EventSvtControl_o *)this, method),
        (v13 = v9->fields.CS___8__locals1) == 0LL) )
  {
LABEL_10:
    sub_1BCAA3C(this, method);
  }
  callBackStartPlay = v13->fields.arg.fields.callBackStartPlay;
  if ( callBackStartPlay )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callBackStartPlay->fields.m_target)(
      callBackStartPlay->fields.original_method_info,
      *(_QWORD *)&callBackStartPlay->fields.extra_arg);
}


void __fastcall EventSvtControl___c__DisplayClass60_0___ctor(
        EventSvtControl___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventSvtControl___c__DisplayClass60_0___PlayEventTradeVoice_b__0(
        EventSvtControl___c__DisplayClass60_0_o *this,
        ServantVoiceData_array *dataList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Func_ServantVoiceData__bool__o *_9__1; // x22
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B1A24F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_ServantVoiceData___, dataList, method);
    sub_1BCA7E0(&System_Func_ServantVoiceData__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_EventSvtControl___c__DisplayClass60_0__PlayEventTradeVoice_b__1__, v8, v9);
    byte_4B1A24F = 1;
  }
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Func_ServantVoiceData__bool__o *)sub_1BCAA2C(
                                                              System_Func_ServantVoiceData__bool__TypeInfo,
                                                              dataList,
                                                              method,
                                                              v3);
    System_Func_object__bool____ctor(
      (System_Func_object__bool__o *)_9__1,
      (Il2CppObject *)this,
      Method_EventSvtControl___c__DisplayClass60_0__PlayEventTradeVoice_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v11, v12, v13, v14, v15, v16);
  }
  return BasicHelper__Any_object__49274176(
           (System_Object_array *)dataList,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_ServantVoiceData___);
}


bool __fastcall EventSvtControl___c__DisplayClass60_0___PlayEventTradeVoice_b__1(
        EventSvtControl___c__DisplayClass60_0_o *this,
        ServantVoiceData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1BCAA3C(this, 0LL);
  return System_String__op_Equality(data->fields.id, this->fields.id, 0LL);
}


void __fastcall EventSvtControl___c__DisplayClass61_0___ctor(
        EventSvtControl___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventSvtControl___c__DisplayClass61_0___PlayEventCraftVoice_b__0(
        EventSvtControl___c__DisplayClass61_0_o *this,
        ServantVoiceData_array *dataList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Func_ServantVoiceData__bool__o *_9__1; // x22
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B1A250 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_ServantVoiceData___, dataList, method);
    sub_1BCA7E0(&System_Func_ServantVoiceData__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_EventSvtControl___c__DisplayClass61_0__PlayEventCraftVoice_b__1__, v8, v9);
    byte_4B1A250 = 1;
  }
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Func_ServantVoiceData__bool__o *)sub_1BCAA2C(
                                                              System_Func_ServantVoiceData__bool__TypeInfo,
                                                              dataList,
                                                              method,
                                                              v3);
    System_Func_object__bool____ctor(
      (System_Func_object__bool__o *)_9__1,
      (Il2CppObject *)this,
      Method_EventSvtControl___c__DisplayClass61_0__PlayEventCraftVoice_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v11, v12, v13, v14, v15, v16);
  }
  return BasicHelper__Any_object__49274176(
           (System_Object_array *)dataList,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_ServantVoiceData___);
}


bool __fastcall EventSvtControl___c__DisplayClass61_0___PlayEventCraftVoice_b__1(
        EventSvtControl___c__DisplayClass61_0_o *this,
        ServantVoiceData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1BCAA3C(this, 0LL);
  return System_String__op_Equality(data->fields.id, this->fields.id, 0LL);
}


void __fastcall EventSvtControl___c__DisplayClass71_0___ctor(
        EventSvtControl___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventSvtControl___c__DisplayClass71_0___PlayPerformanceProc_b__0(
        EventSvtControl___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  struct EventSvtControl_o *_4__this; // x8
  EventSvtControl___c__DisplayClass71_0_o *v3; // x19
  struct EventSvtControl_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  v3 = this;
  this = (EventSvtControl___c__DisplayClass71_0_o *)_4__this->fields.animationRef;
  if ( !this )
    goto LABEL_10;
  this = (EventSvtControl___c__DisplayClass71_0_o *)UnityEngine_Animation__get_Item(
                                                      (UnityEngine_Animation_o *)this,
                                                      v3->fields.animName,
                                                      0LL);
  if ( !this )
    goto LABEL_10;
  if ( UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0LL) >= 1.0 )
    return 1;
  v4 = v3->fields.__4__this;
  if ( !v4 || (this = (EventSvtControl___c__DisplayClass71_0_o *)v4->fields.animationRef) == 0LL )
LABEL_10:
    sub_1BCAA3C(this, method);
  return !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0LL);
}