void __fastcall EventSvtControl___cctor(const MethodInfo *method)
{
  if ( (byte_4BE069E & 1) == 0 )
  {
    sub_1C21E38(&EventSvtControl_TypeInfo);
    byte_4BE069E = 1;
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
  UnityEngine_Object_o *objectRef; // x21
  Il2CppObject *m_target; // x2
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v9; // x1
  System_Action_o *v10; // x21
  struct System_Action_o *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Action_c *v18; // x1
  struct System_Action_o **p_performanceEndAction; // x20
  __int64 v20; // x1
  UnityEngine_GameObject_o *transform; // x0
  float v22; // s0
  float v23; // s1
  float v24; // s2
  float v25; // s10
  float v26; // s8
  float v27; // s9
  Il2CppObject *ComponentInChildren_object; // x21
  struct System_Action_o *v29; // x8
  UnityEngine_GameObject_o *v30; // x20
  EventSvtControl_c *v31; // x0
  float v32; // s10
  UnityEngine_GameObject_o *v33; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  EventSvtControl_o *v48; // x0
  const MethodInfo *v49; // x1
  UnityEngine_Vector3_o v50; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4BE069C & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_EventSvtControl_ReleasePerformance__);
    sub_1C21E38(&EventSvtControl_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_4061/*"CallPerformanceEndAction"*/);
    byte_4BE069C = 1;
  }
  objectRef = (UnityEngine_Object_o *)this->fields.objectRef;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(objectRef, 0LL, 0LL) )
  {
    if ( endAction )
    {
      m_target = endAction->fields.m_target;
      original_method_info = endAction->fields.original_method_info;
      v9 = *(_QWORD *)&endAction->fields.extra_arg;
LABEL_21:
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64))m_target)(original_method_info, v9);
      return;
    }
    return;
  }
  v10 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_EventSvtControl_ReleasePerformance__, 0LL);
  v11 = (struct System_Action_o *)System_Delegate__Combine(
                                    (System_Delegate_o *)endAction,
                                    (System_Delegate_o *)v10,
                                    0LL);
  if ( v11 )
  {
    v18 = System_Action_TypeInfo;
    if ( v11->klass != System_Action_TypeInfo || (this->fields.performanceEndAction = v11, v11->klass != v18) )
    {
      sub_1C22354(v11);
      EventSvtControl__CallPerformanceEndAction(v48, v49);
      return;
    }
    p_performanceEndAction = &this->fields.performanceEndAction;
  }
  else
  {
    p_performanceEndAction = &this->fields.performanceEndAction;
    this->fields.performanceEndAction = 0LL;
  }
  sub_1C21DDC((PartyOrganizationUtility_o *)p_performanceEndAction, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  transform = this->fields.objectRef;
  if ( !transform
    || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v22 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL),
        (transform = this->fields.objectRef) == 0LL) )
  {
LABEL_28:
    sub_1C22094(transform, v20);
  }
  v25 = v22;
  v26 = v23;
  v27 = v24;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 transform,
                                 (const MethodInfo_3000798 *)Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                            (UnityEngine_Object_o *)ComponentInChildren_object,
                                            0LL,
                                            0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( ComponentInChildren_object )
    {
      v30 = this->fields.objectRef;
      v31 = EventSvtControl_TypeInfo;
      v32 = v25 - (float)SLODWORD(ComponentInChildren_object[10].monitor);
      if ( !EventSvtControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSvtControl_TypeInfo);
        v31 = EventSvtControl_TypeInfo;
      }
      v50.fields.x = v32;
      v50.fields.y = v26;
      v50.fields.z = v27;
      transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v30, v31->static_fields->BASE_MOVE_TIME, v50, 0LL);
      if ( transform )
      {
        v33 = transform;
        LODWORD(transform[1].monitor) = 3;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v33[3].monitor = gameObject;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v33[3].monitor, (int64_t)gameObject, v35, v36, v37, v38, v39, v40);
        v41 = StringLiteral_4061/*"CallPerformanceEndAction"*/;
        *(_QWORD *)&v33[3].fields.m_CachedPtr = StringLiteral_4061/*"CallPerformanceEndAction"*/;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v33[3].fields, v41, v42, v43, v44, v45, v46, v47);
        return;
      }
    }
    goto LABEL_28;
  }
  v29 = *p_performanceEndAction;
  if ( *p_performanceEndAction )
  {
    m_target = v29->fields.m_target;
    original_method_info = v29->fields.original_method_info;
    v9 = *(_QWORD *)&v29->fields.extra_arg;
    goto LABEL_21;
  }
}


void __fastcall EventSvtControl__EndPlay(EventSvtControl_o *this, const MethodInfo *method)
{
  EventSvtControl_o *v2; // x19
  struct ServantVoiceData_array *randomVoiceList; // x8
  int v4; // w9
  ServantVoiceData_o *v5; // x8
  ServantVoicePerformance_o *additionalPerformances; // x20
  System_Action_o *v7; // x21
  const MethodInfo *v8; // x5

  v2 = this;
  if ( (byte_4BE068D & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (EventSvtControl_o *)sub_1C21E38(&Method_EventSvtControl_EndPlayProc__);
    byte_4BE068D = 1;
  }
  if ( !v2->fields.isDead )
  {
    if ( v2->fields.isSkipPerformance )
    {
      EventSvtControl__EndPlayProc(v2, method);
    }
    else
    {
      randomVoiceList = v2->fields.randomVoiceList;
      if ( !randomVoiceList )
        goto LABEL_10;
      v4 = v2->fields.playCnt - 1;
      if ( v4 >= randomVoiceList->max_length )
        sub_1C2209C(this, method);
      v5 = randomVoiceList->m_Items[v4];
      if ( !v5 )
LABEL_10:
        sub_1C22094(this, method);
      additionalPerformances = v5->fields.additionalPerformances;
      v7 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)v2, Method_EventSvtControl_EndPlayProc__, 0LL);
      EventSvtControl__PlayPerformance(v2, additionalPerformances, 2, 1, v7, v8);
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
  __int64 playCnt; // x8
  struct ServantVoiceData_array *randomVoiceList; // x9
  ServantVoiceData_o *v11; // x8
  PartyOrganizationUtility_o *p_player; // x0
  PartyOrganizationUtility_o *p_callbakEndPlay; // x0
  System_Action_o *callbakEndPlay; // x20
  PartyOrganizationUtility_o *p_callbackStopVoice; // x0
  struct System_Action_o *callbackStopVoice; // x20

  v8 = this;
  if ( (byte_4BE068E & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_24143/*"svtVoicePlay"*/);
    this = (EventSvtControl_o *)sub_1C21E38(&StringLiteral_5602/*"END_PLAY"*/);
    byte_4BE068E = 1;
  }
  playCnt = v8->fields.playCnt;
  if ( (int)playCnt < v8->fields.maxPlayCnt )
  {
    randomVoiceList = v8->fields.randomVoiceList;
    if ( randomVoiceList )
    {
      if ( (unsigned int)playCnt >= randomVoiceList->max_length )
        sub_1C2209C(this, method);
      v11 = randomVoiceList->m_Items[playCnt];
      if ( v11 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v8,
          (System_String_o *)StringLiteral_24143/*"svtVoicePlay"*/,
          v11->fields.delay,
          0LL);
        return;
      }
    }
LABEL_16:
    sub_1C22094(this, method);
  }
  p_player = (PartyOrganizationUtility_o *)&v8->fields.player;
  if ( v8->fields.player )
  {
    p_player->klass = 0LL;
    sub_1C21DDC(p_player, 0LL, v2, v3, v4, v5, v6, v7);
  }
  p_callbakEndPlay = (PartyOrganizationUtility_o *)&v8->fields.callbakEndPlay;
  callbakEndPlay = v8->fields.callbakEndPlay;
  v8->fields.playCnt = 0;
  *(_WORD *)&v8->fields.isUnSkippable = 0;
  v8->fields.isPlayBoxGachaVoice = 0;
  if ( callbakEndPlay )
  {
    p_callbakEndPlay->klass = 0LL;
    sub_1C21DDC(p_callbakEndPlay, 0LL, v2, v3, v4, v5, v6, v7);
    ActionExtensions__Call(callbakEndPlay, 0LL);
  }
  else
  {
    p_callbackStopVoice = (PartyOrganizationUtility_o *)&v8->fields.callbackStopVoice;
    callbackStopVoice = v8->fields.callbackStopVoice;
    if ( callbackStopVoice )
    {
      p_callbackStopVoice->klass = 0LL;
      sub_1C21DDC(p_callbackStopVoice, 0LL, v2, v3, v4, v5, v6, v7);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackStopVoice->fields.m_target)(
        callbackStopVoice->fields.original_method_info,
        *(_QWORD *)&callbackStopVoice->fields.extra_arg);
    }
    else
    {
      this = (EventSvtControl_o *)v8->fields.fsm;
      if ( !this )
        goto LABEL_16;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5602/*"END_PLAY"*/, 0LL);
    }
  }
}


bool __fastcall EventSvtControl__GetIsUnSkippableByVoiceId(
        EventSvtControl_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListBoxGacha; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v10; // w23
  __int64 v11; // x24
  int v12; // w21
  bool v13; // w19
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BE0698 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    byte_4BE0698 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  voiceListBoxGacha = this->fields.voiceListBoxGacha;
  if ( !voiceListBoxGacha )
    sub_1C22094(0LL, voiceId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)voiceListBoxGacha,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v16 = v15;
  do
  {
LABEL_5:
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v6 )
    {
      v13 = 0;
      v12 = 8;
      goto LABEL_15;
    }
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_1C22094(v6, v7);
    monitor = (int)v16.fields._current[1].monitor;
  }
  while ( monitor < 1 );
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= monitor )
      sub_1C2209C(v6, v7);
    v11 = *((_QWORD *)&current[2].klass + (int)v10);
    if ( !v11 )
      sub_1C22094(v6, v7);
    v6 = System_String__op_Equality(*(System_String_o **)(v11 + 16), voiceId, 0LL);
    if ( v6 )
      break;
    monitor = (int)current[1].monitor;
    if ( (int)++v10 >= monitor )
      goto LABEL_5;
  }
  v12 = 7;
  v13 = *(_BYTE *)(v11 + 68) != 0;
LABEL_15:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  return v13 && v12 == 7;
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
  int32_t v7; // w22
  VoicePlayCondMaster_o *Master_object; // x0
  System_String_o *v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  signed int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v19; // x23
  unsigned __int64 v20; // x29
  __int64 v21; // x28
  System_String_o **m_Items; // x20
  __int64 v23; // x26
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x1
  System_String_o **v31; // x25
  System_String_o **v32; // x23
  System_String_array *v33; // x20
  int32_t v34; // w21
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListCraft; // x22
  __int64 v36; // x19
  System_Func_object__bool__o *v37; // x28
  System_Collections_Generic_List_T__o *v38; // x0
  System_Func_T__bool__o *v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  int32_t v50; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  _BOOL8 v58; // x0
  __int64 v59; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v62; // w23
  __int64 v63; // x8
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  __int64 v70; // x0
  const MethodInfo *v71; // x1
  System_Action_o *v72; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_object__o *v73; // [xsp+18h] [xbp-A8h]
  VoicePlayCondMaster_o *v74; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v75; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+40h] [xbp-80h] BYREF

  v7 = svtId;
  if ( (byte_4BE0696 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_ServantVoiceData_____);
    sub_1C21E38(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C21E38(&System_Func_ServantVoiceData____bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&Method_EventSvtControl___c__DisplayClass61_0__PlayEventCraftVoice_b__0__);
    sub_1C21E38(&EventSvtControl___c__DisplayClass61_0_TypeInfo);
    byte_4BE0696 = 1;
  }
  memset(&v76, 0, sizeof(v76));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !*(_QWORD *)&targetVoiceIds->max_length )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (VoicePlayCondMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( max_length )
    {
      Item = targetVoiceIds->m_Items[0];
      goto LABEL_27;
    }
LABEL_45:
    sub_1C2209C(Master_object, v10);
  }
  v72 = callback;
  v19 = Master_object;
  v73 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v73,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)*(_QWORD *)&targetVoiceIds->max_length >= 1 )
  {
    v20 = 0LL;
    v21 = (unsigned int)*(_QWORD *)&targetVoiceIds->max_length;
    m_Items = targetVoiceIds->m_Items;
    v74 = v19;
    do
    {
      v23 = sub_1C22084(EventSvtControl___c__DisplayClass61_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v23, 0LL);
      if ( v20 >= targetVoiceIds->max_length )
        goto LABEL_45;
      if ( !v23 )
        goto LABEL_44;
      v30 = (int64_t)m_Items[v20];
      *(_QWORD *)(v23 + 16) = v30;
      v31 = (System_String_o **)(v23 + 16);
      sub_1C21DDC((PartyOrganizationUtility_o *)(v23 + 16), v30, v24, v25, v26, v27, v28, v29);
      if ( !v19 )
        goto LABEL_44;
      Master_object = (VoicePlayCondMaster_o *)VoicePlayCondMaster__isVoicePlay(
                                                 v19,
                                                 v7,
                                                 *v31,
                                                 0LL,
                                                 -1LL,
                                                 -1,
                                                 0LL,
                                                 0LL,
                                                 0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v32 = m_Items;
        v33 = targetVoiceIds;
        v34 = v7;
        voiceListCraft = this->fields.voiceListCraft;
        v36 = v21;
        v37 = (System_Func_object__bool__o *)sub_1C22084(System_Func_ServantVoiceData____bool__TypeInfo);
        System_Func_object__bool____ctor(
          v37,
          (Il2CppObject *)v23,
          Method_EventSvtControl___c__DisplayClass61_0__PlayEventCraftVoice_b__0__,
          0LL);
        v38 = (System_Collections_Generic_List_T__o *)voiceListCraft;
        v7 = v34;
        targetVoiceIds = v33;
        m_Items = v32;
        v19 = v74;
        v39 = (System_Func_T__bool__o *)v37;
        v21 = v36;
        Master_object = (VoicePlayCondMaster_o *)BasicHelper__Any_object_(
                                                   v38,
                                                   v39,
                                                   (const MethodInfo_2F9AD70 *)Method_BasicHelper_Any_ServantVoiceData_____);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !v73 )
            goto LABEL_44;
          v10 = *v31;
          items = v73->fields._items;
          v47 = Method_System_Collections_Generic_List_string__Add__;
          ++v73->fields._version;
          if ( !items )
            goto LABEL_44;
          size = v73->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v73,
              (Il2CppObject *)v10,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
          }
          else
          {
            v49 = &items->obj.klass + size;
            v73->fields._size = size + 1;
            v49[4] = (Il2CppClass *)v10;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v49 + 4), (int64_t)v10, v40, v41, v42, v43, v44, v45);
          }
        }
      }
    }
    while ( v21 != ++v20 );
  }
  if ( !v73 )
    goto LABEL_44;
  v50 = UnityEngine_Random__Range_70829352(0, v73->fields._size, 0LL);
  callback = v72;
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v73,
                              v50,
                              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_27:
  this->fields.callbakEndPlay = callback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.callbakEndPlay,
    (int64_t)callback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.randomVoiceList, 0LL, v52, v53, v54, v55, v56, v57);
  Master_object = (VoicePlayCondMaster_o *)this->fields.voiceListCraft;
  if ( !Master_object )
LABEL_44:
    sub_1C22094(Master_object, v10);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v75,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v76 = v75;
LABEL_29:
  while ( 1 )
  {
    v58 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v76,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v58 )
      break;
    current = v76.fields._current;
    if ( !v76.fields._current )
      sub_1C22094(v58, v59);
    monitor = (int)v76.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v62 = 0;
      while ( 1 )
      {
        if ( v62 >= monitor )
          sub_1C2209C(v58, v59);
        v63 = *((_QWORD *)&current[2].klass + (int)v62);
        if ( !v63 )
          sub_1C22094(v58, v59);
        v58 = System_String__op_Equality(*(System_String_o **)(v63 + 16), Item, 0LL);
        if ( v58 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v62 >= monitor )
          goto LABEL_29;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.randomVoiceList,
        (int64_t)current,
        v64,
        v65,
        v66,
        v67,
        v68,
        v69);
      if ( !*p_randomVoiceList )
        sub_1C22094(v70, v71);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v71);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v76,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventSvtControl__PlayEventRecipeVoice(
        EventSvtControl_o *this,
        int32_t svtId,
        System_String_array *targetVoiceIds,
        System_Action_o *callback,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  signed int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v19; // x24
  System_Collections_Generic_List_object__o *v20; // x23
  __int64 v21; // x26
  __int64 v22; // x27
  System_String_o *v23; // x25
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  int32_t v34; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  _BOOL8 v42; // x0
  __int64 v43; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v46; // w24
  __int64 v47; // x8
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 v54; // x0
  const MethodInfo *v55; // x1
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BE0694 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BE0694 = 1;
  }
  memset(&v57, 0, sizeof(v57));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !*(_QWORD *)&targetVoiceIds->max_length )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_42:
    sub_1C22094(Instance, v10);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
LABEL_22:
      sub_1C2209C(Instance, v10);
    Item = targetVoiceIds->m_Items[0];
    goto LABEL_25;
  }
  v19 = (VoicePlayCondMaster_o *)Instance;
  v20 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)*(_QWORD *)&targetVoiceIds->max_length >= 1 )
  {
    v21 = 0LL;
    v22 = (unsigned int)*(_QWORD *)&targetVoiceIds->max_length - 1LL;
    while ( v19 )
    {
      v23 = targetVoiceIds->m_Items[v21];
      Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v19, svtId, v23, 0LL, -1LL, -1, 0LL, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v20 )
          goto LABEL_42;
        items = v20->fields._items;
        v31 = Method_System_Collections_Generic_List_string__Add__;
        ++v20->fields._version;
        if ( !items )
          goto LABEL_42;
        size = v20->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            (Il2CppObject *)v23,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v23;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v23, v24, v25, v26, v27, v28, v29);
        }
      }
      if ( v22 == v21 )
        goto LABEL_23;
      if ( ++v21 >= (unsigned __int64)targetVoiceIds->max_length )
        goto LABEL_22;
    }
    goto LABEL_42;
  }
LABEL_23:
  if ( !v20 )
    goto LABEL_42;
  v34 = UnityEngine_Random__Range_70829352(0, v20->fields._size, 0LL);
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v20,
                              v34,
                              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_25:
  this->fields.callbakEndPlay = callback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.callbakEndPlay,
    (int64_t)callback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.randomVoiceList, 0LL, v36, v37, v38, v39, v40, v41);
  Instance = (DataManager_o *)this->fields.voiceListRecipe;
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v56,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v57 = v56;
LABEL_27:
  while ( 1 )
  {
    v42 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v57,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v42 )
      break;
    current = v57.fields._current;
    if ( !v57.fields._current )
      sub_1C22094(v42, v43);
    monitor = (int)v57.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v46 = 0;
      while ( 1 )
      {
        if ( v46 >= monitor )
          sub_1C2209C(v42, v43);
        v47 = *((_QWORD *)&current[2].klass + (int)v46);
        if ( !v47 )
          sub_1C22094(v42, v43);
        v42 = System_String__op_Equality(*(System_String_o **)(v47 + 16), Item, 0LL);
        if ( v42 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v46 >= monitor )
          goto LABEL_27;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.randomVoiceList,
        (int64_t)current,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
      if ( !*p_randomVoiceList )
        sub_1C22094(v54, v55);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v55);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v57,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventSvtControl__PlayEventTradeVoice(
        EventSvtControl_o *this,
        int32_t svtId,
        System_String_array *targetVoiceIds,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v7; // w22
  VoicePlayCondMaster_o *Master_object; // x0
  System_String_o *v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  signed int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v19; // x23
  unsigned __int64 v20; // x29
  __int64 v21; // x28
  System_String_o **m_Items; // x20
  __int64 v23; // x26
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x1
  System_String_o **v31; // x25
  System_String_o **v32; // x23
  System_String_array *v33; // x20
  int32_t v34; // w21
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListTrade; // x22
  __int64 v36; // x19
  System_Func_object__bool__o *v37; // x28
  System_Collections_Generic_List_T__o *v38; // x0
  System_Func_T__bool__o *v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  int32_t v50; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  _BOOL8 v58; // x0
  __int64 v59; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v62; // w23
  __int64 v63; // x8
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  __int64 v70; // x0
  const MethodInfo *v71; // x1
  System_Action_o *v72; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_object__o *v73; // [xsp+18h] [xbp-A8h]
  VoicePlayCondMaster_o *v74; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v75; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+40h] [xbp-80h] BYREF

  v7 = svtId;
  if ( (byte_4BE0695 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_ServantVoiceData_____);
    sub_1C21E38(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C21E38(&System_Func_ServantVoiceData____bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&Method_EventSvtControl___c__DisplayClass60_0__PlayEventTradeVoice_b__0__);
    sub_1C21E38(&EventSvtControl___c__DisplayClass60_0_TypeInfo);
    byte_4BE0695 = 1;
  }
  memset(&v76, 0, sizeof(v76));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !*(_QWORD *)&targetVoiceIds->max_length )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (VoicePlayCondMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( max_length )
    {
      Item = targetVoiceIds->m_Items[0];
      goto LABEL_27;
    }
LABEL_45:
    sub_1C2209C(Master_object, v10);
  }
  v72 = callback;
  v19 = Master_object;
  v73 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v73,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)*(_QWORD *)&targetVoiceIds->max_length >= 1 )
  {
    v20 = 0LL;
    v21 = (unsigned int)*(_QWORD *)&targetVoiceIds->max_length;
    m_Items = targetVoiceIds->m_Items;
    v74 = v19;
    do
    {
      v23 = sub_1C22084(EventSvtControl___c__DisplayClass60_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v23, 0LL);
      if ( v20 >= targetVoiceIds->max_length )
        goto LABEL_45;
      if ( !v23 )
        goto LABEL_44;
      v30 = (int64_t)m_Items[v20];
      *(_QWORD *)(v23 + 16) = v30;
      v31 = (System_String_o **)(v23 + 16);
      sub_1C21DDC((PartyOrganizationUtility_o *)(v23 + 16), v30, v24, v25, v26, v27, v28, v29);
      if ( !v19 )
        goto LABEL_44;
      Master_object = (VoicePlayCondMaster_o *)VoicePlayCondMaster__isVoicePlay(
                                                 v19,
                                                 v7,
                                                 *v31,
                                                 0LL,
                                                 -1LL,
                                                 -1,
                                                 0LL,
                                                 0LL,
                                                 0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v32 = m_Items;
        v33 = targetVoiceIds;
        v34 = v7;
        voiceListTrade = this->fields.voiceListTrade;
        v36 = v21;
        v37 = (System_Func_object__bool__o *)sub_1C22084(System_Func_ServantVoiceData____bool__TypeInfo);
        System_Func_object__bool____ctor(
          v37,
          (Il2CppObject *)v23,
          Method_EventSvtControl___c__DisplayClass60_0__PlayEventTradeVoice_b__0__,
          0LL);
        v38 = (System_Collections_Generic_List_T__o *)voiceListTrade;
        v7 = v34;
        targetVoiceIds = v33;
        m_Items = v32;
        v19 = v74;
        v39 = (System_Func_T__bool__o *)v37;
        v21 = v36;
        Master_object = (VoicePlayCondMaster_o *)BasicHelper__Any_object_(
                                                   v38,
                                                   v39,
                                                   (const MethodInfo_2F9AD70 *)Method_BasicHelper_Any_ServantVoiceData_____);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !v73 )
            goto LABEL_44;
          v10 = *v31;
          items = v73->fields._items;
          v47 = Method_System_Collections_Generic_List_string__Add__;
          ++v73->fields._version;
          if ( !items )
            goto LABEL_44;
          size = v73->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v73,
              (Il2CppObject *)v10,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
          }
          else
          {
            v49 = &items->obj.klass + size;
            v73->fields._size = size + 1;
            v49[4] = (Il2CppClass *)v10;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v49 + 4), (int64_t)v10, v40, v41, v42, v43, v44, v45);
          }
        }
      }
    }
    while ( v21 != ++v20 );
  }
  if ( !v73 )
    goto LABEL_44;
  v50 = UnityEngine_Random__Range_70829352(0, v73->fields._size, 0LL);
  callback = v72;
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v73,
                              v50,
                              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_27:
  this->fields.callbakEndPlay = callback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.callbakEndPlay,
    (int64_t)callback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.randomVoiceList, 0LL, v52, v53, v54, v55, v56, v57);
  Master_object = (VoicePlayCondMaster_o *)this->fields.voiceListTrade;
  if ( !Master_object )
LABEL_44:
    sub_1C22094(Master_object, v10);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v75,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v76 = v75;
LABEL_29:
  while ( 1 )
  {
    v58 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v76,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v58 )
      break;
    current = v76.fields._current;
    if ( !v76.fields._current )
      sub_1C22094(v58, v59);
    monitor = (int)v76.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v62 = 0;
      while ( 1 )
      {
        if ( v62 >= monitor )
          sub_1C2209C(v58, v59);
        v63 = *((_QWORD *)&current[2].klass + (int)v62);
        if ( !v63 )
          sub_1C22094(v58, v59);
        v58 = System_String__op_Equality(*(System_String_o **)(v63 + 16), Item, 0LL);
        if ( v58 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v62 >= monitor )
          goto LABEL_29;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.randomVoiceList,
        (int64_t)current,
        v64,
        v65,
        v66,
        v67,
        v68,
        v69);
      if ( !*p_randomVoiceList )
        sub_1C22094(v70, v71);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v71);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v76,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


void __fastcall EventSvtControl__PlayPerformance(
        EventSvtControl_o *this,
        ServantVoicePerformance_o *performances,
        int32_t timing,
        bool isWaitPerformance,
        System_Action_o *playEndAction,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_objectRef; // x24
  UnityEngine_Object_o *objectRef; // x25
  __int64 v13; // x1
  UnityEngine_GameObject_o *performanceRoot; // x0
  System_String_o *assetName; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Effect; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UnityEngine_Object_o *v24; // x25
  UnityEngine_Object_o *animationRef; // x25
  Il2CppObject *ComponentInChildren_object; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  UnityEngine_Object_o *v33; // x24
  struct ServantVoicePerformance_ServantVoicePerformanceDetail_o **p_afterPerformance; // x8
  struct ServantVoicePerformance_ServantVoicePerformanceDetail_o *v35; // x22
  const MethodInfo *v36; // x4
  System_Collections_IEnumerator_o *v37; // x1

  if ( (byte_4BE069A & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE069A = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(objectRef, 0LL, 0LL) )
  {
    performanceRoot = this->fields.performanceRoot;
    if ( !performanceRoot )
      goto LABEL_32;
    assetName = performances->fields.assetName;
    transform = UnityEngine_GameObject__get_transform(performanceRoot, 0LL);
    Effect = BoxGachaResultEffectComponent__getEffect(assetName, transform, 0LL);
    *p_objectRef = Effect;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.objectRef, (int64_t)Effect, v18, v19, v20, v21, v22, v23);
    v24 = (UnityEngine_Object_o *)*p_objectRef;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Implicit(v24, 0LL) )
      goto LABEL_6;
  }
  animationRef = (UnityEngine_Object_o *)this->fields.animationRef;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(animationRef, 0LL, 0LL) )
    goto LABEL_23;
  performanceRoot = *p_objectRef;
  if ( !*p_objectRef )
LABEL_32:
    sub_1C22094(performanceRoot, v13);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 performanceRoot,
                                 (const MethodInfo_3000798 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
  this->fields.animationRef = (struct UnityEngine_Animation_o *)ComponentInChildren_object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.animationRef,
    (int64_t)ComponentInChildren_object,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (UnityEngine_Object_o *)this->fields.animationRef;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Implicit(v33, 0LL) )
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
  v35 = *p_afterPerformance;
  if ( *p_afterPerformance && !System_String__IsNullOrEmpty(v35->fields.name, 0LL) )
  {
    v37 = EventSvtControl__PlayPerformanceProc(
            this,
            v35->fields.name,
            v35->fields.delay,
            isWaitPerformance,
            playEndAction,
            v36);
    UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v37, 0LL);
    return;
  }
LABEL_6:
  if ( playEndAction )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))playEndAction->fields.m_target)(
      playEndAction->fields.original_method_info,
      *(_QWORD *)&playEndAction->fields.extra_arg);
}


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

  if ( (byte_4BE069B & 1) == 0 )
  {
    sub_1C21E38(&EventSvtControl__PlayPerformanceProc_d__71_TypeInfo);
    byte_4BE069B = 1;
  }
  v11 = isWaitPerformance;
  v12 = sub_1C22084(EventSvtControl__PlayPerformanceProc_d__71_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  *(_DWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v12 + 32), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v12 + 40) = animName;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v12 + 40), (int64_t)animName, v19, v20, v21, v22, v23, v24);
  *(float *)(v12 + 48) = delay;
  *(_BYTE *)(v12 + 64) = v11;
  *(_QWORD *)(v12 + 72) = playEndAction;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v12 + 72), (int64_t)playEndAction, v25, v26, v27, v28, v29, v30);
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
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  signed int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v19; // x24
  System_Collections_Generic_List_object__o *v20; // x23
  __int64 v21; // x26
  __int64 v22; // x27
  System_String_o *v23; // x25
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  int32_t v34; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  _BOOL8 v42; // x0
  __int64 v43; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v46; // w24
  __int64 v47; // x8
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 v54; // x0
  const MethodInfo *v55; // x1
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BE0693 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BE0693 = 1;
  }
  memset(&v57, 0, sizeof(v57));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !*(_QWORD *)&targetVoiceIds->max_length )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_42:
    sub_1C22094(Instance, v10);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
LABEL_22:
      sub_1C2209C(Instance, v10);
    Item = targetVoiceIds->m_Items[0];
    goto LABEL_25;
  }
  v19 = (VoicePlayCondMaster_o *)Instance;
  v20 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)*(_QWORD *)&targetVoiceIds->max_length >= 1 )
  {
    v21 = 0LL;
    v22 = (unsigned int)*(_QWORD *)&targetVoiceIds->max_length - 1LL;
    while ( v19 )
    {
      v23 = targetVoiceIds->m_Items[v21];
      Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v19, svtId, v23, 0LL, -1LL, -1, 0LL, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v20 )
          goto LABEL_42;
        items = v20->fields._items;
        v31 = Method_System_Collections_Generic_List_string__Add__;
        ++v20->fields._version;
        if ( !items )
          goto LABEL_42;
        size = v20->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            (Il2CppObject *)v23,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v23;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v23, v24, v25, v26, v27, v28, v29);
        }
      }
      if ( v22 == v21 )
        goto LABEL_23;
      if ( ++v21 >= (unsigned __int64)targetVoiceIds->max_length )
        goto LABEL_22;
    }
    goto LABEL_42;
  }
LABEL_23:
  if ( !v20 )
    goto LABEL_42;
  v34 = UnityEngine_Random__Range_70829352(0, v20->fields._size, 0LL);
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v20,
                              v34,
                              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_25:
  this->fields.callbakEndPlay = callback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.callbakEndPlay,
    (int64_t)callback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.randomVoiceList, 0LL, v36, v37, v38, v39, v40, v41);
  Instance = (DataManager_o *)this->fields.voiceListTreasureBox;
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v56,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v57 = v56;
LABEL_27:
  while ( 1 )
  {
    v42 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v57,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v42 )
      break;
    current = v57.fields._current;
    if ( !v57.fields._current )
      sub_1C22094(v42, v43);
    monitor = (int)v57.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v46 = 0;
      while ( 1 )
      {
        if ( v46 >= monitor )
          sub_1C2209C(v42, v43);
        v47 = *((_QWORD *)&current[2].klass + (int)v46);
        if ( !v47 )
          sub_1C22094(v42, v43);
        v42 = System_String__op_Equality(*(System_String_o **)(v47 + 16), Item, 0LL);
        if ( v42 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v46 >= monitor )
          goto LABEL_27;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.randomVoiceList,
        (int64_t)current,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
      if ( !*p_randomVoiceList )
        sub_1C22094(v54, v55);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v55);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v57,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


void __fastcall EventSvtControl__ReleasePerformance(EventSvtControl_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  UnityEngine_Object_o *objectRef; // x19

  if ( (byte_4BE069D & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE069D = 1;
  }
  this->fields.animationRef = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.animationRef, 0LL, v2, v3, v4, v5, v6, v7);
  objectRef = (UnityEngine_Object_o *)this->fields.objectRef;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70869612(objectRef, 0LL);
}


bool __fastcall EventSvtControl__SetBoxGachaTalkInfo(
        EventSvtControl_o *this,
        int32_t svtId,
        BoxGachaTalkEntity_o *talkEntity,
        BoxGachaTalkInfo_o **info,
        const MethodInfo *method)
{
  BoxGachaTalkInfo_o *v8; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_int__o *v18; // x21
  struct System_String_array *befVoiceIds; // x9
  unsigned __int64 v20; // x24
  System_String_o *v21; // x25
  _BOOL8 isVoicePlay; // x0
  __int64 v23; // x1
  Il2CppObject *current; // x20
  int monitor; // w8
  int i; // w27
  __int64 v27; // x28
  struct System_Int32_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  unsigned __int64 v31; // x25
  int32_t v32; // w22
  System_String_o *v33; // x23
  __int64 Item; // x0
  __int64 v35; // x1
  Il2CppObject *v36; // x20
  void *v37; // x8
  int v38; // w27
  __int64 v39; // x24
  struct System_Collections_Generic_List_string__o *beforeVoiceIdList; // x8
  __int64 v42; // [xsp+10h] [xbp-C0h]
  struct System_String_array *aftVoiceIds; // [xsp+18h] [xbp-B8h]
  struct System_String_array *v44; // [xsp+20h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4BE0692 & 1) == 0 )
  {
    sub_1C21E38(&BoxGachaTalkInfo_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BE0692 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  v8 = (BoxGachaTalkInfo_o *)sub_1C22084(BoxGachaTalkInfo_TypeInfo);
  BoxGachaTalkInfo___ctor(v8, 0LL);
  *info = v8;
  sub_1C21DDC((PartyOrganizationUtility_o *)info, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  if ( !this->fields.voiceListBoxGacha )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v18 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !talkEntity )
    goto LABEL_70;
  befVoiceIds = talkEntity->fields.befVoiceIds;
  if ( !befVoiceIds )
    goto LABEL_70;
  v42 = *(_QWORD *)&befVoiceIds->max_length;
  aftVoiceIds = talkEntity->fields.aftVoiceIds;
  if ( (int)v42 >= 1 )
  {
    if ( (unsigned int)*(_QWORD *)&befVoiceIds->max_length )
    {
      v20 = 0LL;
      v44 = befVoiceIds;
      while ( 1 )
      {
        Instance = (DataManager_o *)this->fields.voiceListBoxGacha;
        if ( !Instance )
          break;
        v21 = befVoiceIds->m_Items[v20];
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v46,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v47 = v46;
        while ( 1 )
        {
          isVoicePlay = System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v47,
                          (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !isVoicePlay )
            break;
          current = v47.fields._current;
          if ( !v47.fields._current )
            sub_1C22094(isVoicePlay, v23);
          monitor = (int)v47.fields._current[1].monitor;
          if ( monitor >= 1 )
          {
            for ( i = 0; i < monitor; ++i )
            {
              if ( i >= (unsigned int)monitor )
                sub_1C2209C(isVoicePlay, v23);
              v27 = *((_QWORD *)&current[2].klass + i);
              if ( !v27 )
                sub_1C22094(isVoicePlay, v23);
              isVoicePlay = System_String__op_Equality(*(System_String_o **)(v27 + 16), v21, 0LL);
              if ( isVoicePlay )
              {
                if ( !MasterData_object )
                  sub_1C22094(isVoicePlay, v23);
                isVoicePlay = VoicePlayCondMaster__isVoicePlay(
                                (VoicePlayCondMaster_o *)MasterData_object,
                                svtId,
                                v21,
                                0LL,
                                -1LL,
                                -1,
                                0LL,
                                0LL,
                                0LL);
                if ( isVoicePlay )
                {
                  if ( !*info )
                    sub_1C22094(0LL, v23);
                  BoxGachaTalkInfo__SetBeforeGachaTalkInfo(
                    *info,
                    *(System_String_o **)(v27 + 16),
                    *(System_String_o **)(v27 + 48),
                    0LL);
                  if ( !v18 )
                    sub_1C22094(isVoicePlay, v23);
                  items = v18->fields._items;
                  v29 = Method_System_Collections_Generic_List_int__Add__;
                  ++v18->fields._version;
                  if ( !items )
                    sub_1C22094(isVoicePlay, v23);
                  size = v18->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      v18,
                      v20,
                      *(const MethodInfo_3632090 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v18->fields._size = size + 1;
                    items->m_Items[size + 1] = v20;
                  }
                }
              }
              monitor = (int)current[1].monitor;
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v47,
          (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        befVoiceIds = v44;
        if ( ++v20 == (unsigned int)v42 )
          goto LABEL_39;
        if ( v20 >= v44->max_length )
          goto LABEL_71;
      }
LABEL_70:
      sub_1C22094(Instance, v16);
    }
LABEL_71:
    sub_1C2209C(Instance, v16);
  }
LABEL_39:
  if ( !v18 || !v18->fields._size )
    return 0;
  if ( (int)v42 >= 1 )
  {
    if ( !aftVoiceIds )
      goto LABEL_70;
    v31 = 0LL;
    v32 = 0;
    while ( v31 < aftVoiceIds->max_length )
    {
      Instance = (DataManager_o *)this->fields.voiceListBoxGacha;
      if ( !Instance )
        goto LABEL_70;
      v33 = aftVoiceIds->m_Items[v31];
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v46,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
      v47 = v46;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v47,
                 (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
        if ( (Item & 1) == 0 )
          break;
        v36 = v47.fields._current;
        if ( !v47.fields._current )
          sub_1C22094(Item, v35);
        v37 = v47.fields._current[1].monitor;
        if ( (int)v37 >= 1 )
        {
          v38 = 0;
          do
          {
            if ( v38 >= (unsigned int)v37 )
              sub_1C2209C(Item, v35);
            v39 = *((_QWORD *)&v36[2].klass + v38);
            if ( !v39 )
              sub_1C22094(Item, v35);
            Item = System_String__op_Equality(*(System_String_o **)(v39 + 16), v33, 0LL);
            if ( (Item & 1) != 0 )
            {
              Item = System_Collections_Generic_List_int___get_Item(
                       v18,
                       v32,
                       (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( v31 == (unsigned int)Item )
              {
                if ( !*info )
                  sub_1C22094(0LL, v35);
                BoxGachaTalkInfo__SetAfterGachaTalkInfo(
                  *info,
                  *(System_String_o **)(v39 + 16),
                  *(System_String_o **)(v39 + 48),
                  0LL);
                ++v32;
              }
            }
            LODWORD(v37) = v36[1].monitor;
            ++v38;
          }
          while ( v38 < (int)v37 );
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v47,
        (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
      if ( ++v31 == (unsigned int)v42 )
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
  sub_1C21DDC(
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
  sub_1C21DDC(v17, (int64_t)v18, v11, v12, v13, v14, v15, v16);
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
  sub_1C21DDC(
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
  sub_1C21DDC(v17, (int64_t)v18, v11, v12, v13, v14, v15, v16);
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
  sub_1C21DDC(
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
  sub_1C21DDC(
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
  sub_1C21DDC((PartyOrganizationUtility_o *)v9, (int64_t)listOverwrite, v10, v11, v12, v13, v14, v15);
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
  sub_1C21DDC(
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
  sub_1C21DDC(v17, (int64_t)v18, v11, v12, v13, v14, v15, v16);
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
  sub_1C21DDC(
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
  sub_1C21DDC(
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
  sub_1C21DDC(v17, (int64_t)v18, v11, v12, v13, v14, v15, v16);
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
  sub_1C21DDC(
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
  sub_1C21DDC(v17, (int64_t)v18, v11, v12, v13, v14, v15, v16);
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
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 playCnt; // x9
  ServantVoiceData_o *v11; // x8
  int64_t id; // x1
  struct ServantVoiceData_array *v13; // x8
  __int64 v14; // x9
  int32_t asstName; // w20
  float FadeTime; // s0
  float v17; // s8
  struct ServantVoiceData_array *v18; // x8
  __int64 v19; // x9
  ServantVoiceData_o *v20; // x8
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  int32_t face; // w20
  struct ServantVoiceData_array *v23; // x8
  __int64 v24; // x9
  ServantVoiceData_o *v25; // x8
  System_String_o *v26; // x20
  System_String_o *vcName; // x21
  float volume; // s8
  System_Action_o *v29; // x22
  SePlayer_o *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  const MethodInfo *v37; // x5
  struct ServantVoiceData_array *v38; // x8
  __int64 v39; // x9
  ServantVoiceData_o *v40; // x8
  struct ServantVoiceData_array *v41; // x8
  __int64 v42; // x9
  ServantVoiceData_o *v43; // x8
  struct System_Int32_array *multiFace; // x23
  unsigned __int64 v45; // x21
  int32_t v46; // w22

  v8 = this;
  if ( (byte_4BE068C & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_1C21E38(&Method_EventSvtControl_EndPlay__);
    sub_1C21E38(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    this = (EventSvtControl_o *)sub_1C21E38(&SoundManager_TypeInfo);
    byte_4BE068C = 1;
  }
  randomVoiceList = v8->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_43;
  playCnt = v8->fields.playCnt;
  if ( (unsigned int)playCnt >= randomVoiceList->max_length )
    goto LABEL_44;
  v11 = randomVoiceList->m_Items[playCnt];
  if ( !v11 )
    goto LABEL_43;
  id = (int64_t)v11->fields.id;
  v8->fields.vcName = (struct System_String_o *)id;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.vcName, id, v2, v3, v4, v5, v6, v7);
  v13 = v8->fields.randomVoiceList;
  if ( !v13 )
    goto LABEL_43;
  v14 = v8->fields.playCnt;
  if ( (unsigned int)v14 >= v13->max_length )
    goto LABEL_44;
  this = (EventSvtControl_o *)v13->m_Items[v14];
  if ( !this )
    goto LABEL_43;
  v8->fields.isUnSkippable = BYTE4(this->fields.vcName);
  asstName = (int32_t)this->fields.asstName;
  FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0LL);
  this = (EventSvtControl_o *)v8->fields.standFigureCollectList;
  v17 = FadeTime;
  if ( !this
    || (this = (EventSvtControl_o *)System_Linq_Enumerable__Count_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                      (const MethodInfo_2FCAE0C *)Method_System_Linq_Enumerable_Count_StandFigureCollect___),
        (int)this < 2) )
  {
    v18 = v8->fields.randomVoiceList;
    if ( !v18 )
      goto LABEL_43;
    v19 = v8->fields.playCnt;
    if ( (unsigned int)v19 >= v18->max_length )
      goto LABEL_44;
    v20 = v18->m_Items[v19];
    if ( !v20 )
      goto LABEL_43;
    standFigureCollectList = (System_Collections_Generic_List_object__o *)v8->fields.standFigureCollectList;
    if ( standFigureCollectList )
    {
      face = v20->fields.face;
      this = (EventSvtControl_o *)System_Collections_Generic_List_object___get_Item(
                                    standFigureCollectList,
                                    0,
                                    (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( !this )
        goto LABEL_43;
      v23 = v8->fields.randomVoiceList;
      if ( !v23 )
        goto LABEL_43;
      v24 = v8->fields.playCnt;
      if ( (unsigned int)v24 >= v23->max_length )
        goto LABEL_44;
      v25 = v23->m_Items[v24];
      if ( !v25 )
        goto LABEL_43;
      this = (EventSvtControl_o *)this->fields.m_CancellationTokenSource;
      if ( !this )
        goto LABEL_43;
      UIStandFigureR__SetFace_42326132((UIStandFigureR_o *)this, face, v25->fields.form, 0LL, v17, 0LL);
    }
    goto LABEL_21;
  }
  v41 = v8->fields.randomVoiceList;
  if ( !v41 )
    goto LABEL_43;
  v42 = v8->fields.playCnt;
  if ( (unsigned int)v42 >= v41->max_length )
    goto LABEL_44;
  v43 = v41->m_Items[v42];
  if ( !v43 )
    goto LABEL_43;
  multiFace = v43->fields.multiFace;
  if ( multiFace )
  {
    this = (EventSvtControl_o *)System_Linq_Enumerable__Count_object_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.standFigureCollectList,
                                  (const MethodInfo_2FCAE0C *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    if ( (_DWORD)this == multiFace->max_length )
    {
      if ( (int)this >= 1 )
      {
        v45 = 0LL;
        while ( v45 < (unsigned int)this )
        {
          this = (EventSvtControl_o *)v8->fields.standFigureCollectList;
          if ( !this )
            goto LABEL_43;
          v46 = multiFace->m_Items[v45 + 1];
          this = (EventSvtControl_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v45,
                                        (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
          if ( !this )
            goto LABEL_43;
          this = (EventSvtControl_o *)this->fields.m_CancellationTokenSource;
          if ( !this )
            goto LABEL_43;
          UIStandFigureR__SetFace_42326132((UIStandFigureR_o *)this, v46, asstName, 0LL, v17, 0LL);
          this = *(EventSvtControl_o **)&multiFace->max_length;
          if ( (__int64)++v45 >= (int)this )
            goto LABEL_21;
        }
        goto LABEL_44;
      }
LABEL_21:
      v26 = v8->fields.asstName;
      vcName = v8->fields.vcName;
      volume = v8->fields.volume;
      v29 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v29, (Il2CppObject *)v8, Method_EventSvtControl_EndPlay__, 0LL);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      v30 = SoundManager__playVoice_39957484(v26, vcName, volume, v29, 0, 0LL);
      v8->fields.player = v30;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.player, (int64_t)v30, v31, v32, v33, v34, v35, v36);
      if ( v8->fields.isSkipPerformance )
        goto LABEL_28;
      v38 = v8->fields.randomVoiceList;
      if ( !v38 )
LABEL_43:
        sub_1C22094(this, method);
      v39 = v8->fields.playCnt;
      if ( (unsigned int)v39 < v38->max_length )
      {
        v40 = v38->m_Items[v39];
        if ( v40 )
        {
          EventSvtControl__PlayPerformance(v8, v40->fields.additionalPerformances, 1, 0, 0LL, v37);
LABEL_28:
          ++v8->fields.playCnt;
          return;
        }
        goto LABEL_43;
      }
LABEL_44:
      sub_1C2209C(this, method);
    }
  }
}


bool __fastcall EventSvtControl__TryGetPlayableVoiceInfoList(
        EventSvtControl_o *this,
        System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o **voiceInfoList,
        System_Collections_Generic_List_ServantVoiceData____o *servantVoiceGroupData,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x23
  System_Collections_Generic_List_T__o *v7; // x24
  System_Collections_Generic_List_T__o *v8; // x22
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  Il2CppObject *v15; // x0
  System_Collections_Generic_List_int__o *v16; // x1
  System_Collections_Generic_HashSet_T__o *v17; // x24
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x25
  Il2CppClass *klass; // x8
  EventSvtControl___c_c *v22; // x0
  System_String_o *v23; // x26
  System_Func_object__object__o *_9__64_0; // x27
  Il2CppObject *v25; // x28
  struct EventSvtControl___c_StaticFields *static_fields; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Collections_Generic_IEnumerable_string__o *v33; // x1
  Il2CppObject *v34; // x0
  __int64 v35; // x1
  Il2CppObject *v36; // x26
  Il2CppObject *Weight; // x2
  const MethodInfo_3586AD0 *v38; // x4
  __int64 v39; // x1
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  Il2CppObject *v45; // x0
  __int64 v46; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v47; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x26
  Il2CppObject *v49; // x0
  __int64 v50; // x1
  __int64 Item; // x0
  __int64 v52; // x1
  int32_t v53; // w25
  int32_t monitor; // w26
  _BOOL8 IsVoicePlayFlag; // x0
  System_Collections_Generic_List_T__o *v56; // x0
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  PartyOrganizationUtility_o *v60; // x8
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  PartyOrganizationUtility_o *v64; // x0
  __int64 v65; // x0
  __int64 v66; // x1
  struct System_Collections_Generic_List_int__o *voicePlayedValueList; // x0
  __int64 monitor_low; // x1
  struct System_Int32_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  System_Collections_Generic_List_T__o *v85; // [xsp+20h] [xbp-D0h]
  System_Collections_Generic_List_int__o *OriginalSvtId; // [xsp+28h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_object__o v88; // [xsp+38h] [xbp-B8h] BYREF
  Il2CppObject *entity; // [xsp+50h] [xbp-A0h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o v90; // [xsp+58h] [xbp-98h] BYREF
  VoicePlayCondEntity_o *condEntity; // [xsp+68h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v92; // [xsp+70h] [xbp-80h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o v93; // 0:x0.16
  System_Collections_Generic_KeyValuePair_object__int__o v94; // 0:x1.16
  System_Collections_Generic_KeyValuePair_object__int__o v95; // 0:x1.16

  if ( (byte_4BE0699 & 1) == 0 )
  {
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantVoiceRelationMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_VoiceMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string__TryGetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_ServantVoiceData__string___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C21E38(&System_Func_ServantVoiceData__string__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_string__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_HashSet_string__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int____ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C21E38(&Method_EventSvtControl___c__TryGetPlayableVoiceInfoList_b__64_0__);
    sub_1C21E38(&EventSvtControl___c_TypeInfo);
    sub_1C21E38(&StringLiteral_866/*","*/);
    sub_1C21E38(&StringLiteral_19870/*"forcePlayFirst"*/);
    byte_4BE0699 = 1;
  }
  memset(&v92, 0, sizeof(v92));
  condEntity = 0LL;
  v90.fields.key = 0LL;
  *(_QWORD *)&v90.fields.value = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v7 = (System_Collections_Generic_List_T__o *)sub_1C22084(System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___TypeInfo);
  System_Collections_Generic_List_KeyValuePair_object__int_____ctor(
    v7,
    (const MethodInfo_35A46F0 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int____ctor__);
  v8 = (System_Collections_Generic_List_T__o *)sub_1C22084(System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___TypeInfo);
  System_Collections_Generic_List_KeyValuePair_object__int_____ctor(
    v8,
    (const MethodInfo_35A46F0 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int____ctor__);
  *voiceInfoList = (System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *)v8;
  sub_1C21DDC((PartyOrganizationUtility_o *)voiceInfoList, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  v15 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantVoiceRelationMaster___);
  if ( !v15 )
    goto LABEL_65;
  v85 = v7;
  OriginalSvtId = ServantVoiceRelationMaster__GetOriginalSvtId(
                    (ServantVoiceRelationMaster_o *)v15,
                    this->fields.svtId,
                    0LL);
  v17 = (System_Collections_Generic_HashSet_T__o *)sub_1C22084(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v17,
    (const MethodInfo_3508BA4 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  if ( !servantVoiceGroupData )
    goto LABEL_65;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v88,
    (System_Collections_Generic_List_object__o *)servantVoiceGroupData,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v92 = v88;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v92,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v18 )
      break;
    current = v92.fields._current;
    if ( !v92.fields._current )
      sub_1C22094(v18, v19);
    if ( !LODWORD(v92.fields._current[1].monitor) )
      sub_1C2209C(v18, v19);
    klass = v92.fields._current[2].klass;
    if ( !klass )
      sub_1C22094(v18, v19);
    if ( !Master_object )
      sub_1C22094(v18, v19);
    if ( VoicePlayCondMaster__isVoicePlay_41584676(
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
      v22 = EventSvtControl___c_TypeInfo;
      if ( !EventSvtControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSvtControl___c_TypeInfo);
        v22 = EventSvtControl___c_TypeInfo;
      }
      v23 = (System_String_o *)StringLiteral_866/*","*/;
      _9__64_0 = (System_Func_object__object__o *)v22->static_fields->__9__64_0;
      if ( !_9__64_0 )
      {
        if ( !v22->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v22);
          v22 = EventSvtControl___c_TypeInfo;
        }
        v25 = (Il2CppObject *)v22->static_fields->__9;
        _9__64_0 = (System_Func_object__object__o *)sub_1C22084(System_Func_ServantVoiceData__string__TypeInfo);
        System_Func_object__object____ctor(
          _9__64_0,
          v25,
          Method_EventSvtControl___c__TryGetPlayableVoiceInfoList_b__64_0__,
          0LL);
        static_fields = EventSvtControl___c_TypeInfo->static_fields;
        static_fields->__9__64_0 = (struct System_Func_ServantVoiceData__string__o *)_9__64_0;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&static_fields->__9__64_0,
          (int64_t)_9__64_0,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
      }
      v33 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_object__object_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)current,
                                                                  (System_Func_TSource__TResult__o *)_9__64_0,
                                                                  (const MethodInfo_2FE15B8 *)Method_System_Linq_Enumerable_Select_ServantVoiceData__string___);
      v34 = (Il2CppObject *)System_String__Join_63131132(v23, v33, 0LL);
      if ( !v17 )
        sub_1C22094(v34, v35);
      v36 = v34;
      if ( !System_Collections_Generic_HashSet_object___Contains(
              v17,
              v34,
              (const MethodInfo_3509298 *)Method_System_Collections_Generic_HashSet_string__Contains__) )
      {
        System_Collections_Generic_HashSet_object___Add(
          v17,
          v36,
          (const MethodInfo_3509D88 *)Method_System_Collections_Generic_HashSet_string__Add__);
        Weight = (Il2CppObject *)(unsigned int)VoicePlayCondMaster__GetWeight(
                                                 (VoicePlayCondMaster_o *)Master_object,
                                                 condEntity,
                                                 10,
                                                 0LL);
        v93.fields.key = (Il2CppObject *)&v90;
        *(_QWORD *)&v93.fields.value = current;
        System_Collections_Generic_KeyValuePair_object__int____ctor(
          v93,
          Weight,
          Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__,
          v38);
        if ( !condEntity
          || VoicePlayCondEntity__GetScriptIntParam(condEntity, (System_String_o *)StringLiteral_19870/*"forcePlayFirst"*/, -1, 0LL) != 1 )
        {
          goto LABEL_36;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v45 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_VoiceMaster___);
        if ( !condEntity )
          sub_1C22094(v45, v46);
        v47 = (DataMasterBase_TMaster__TEntity__PKType__o *)v45;
        voiceId = condEntity->fields.voiceId;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v49 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47657208(voiceId, 0LL);
        if ( !v47 )
          sub_1C22094(v49, v50);
        if ( !DataMasterBase_object__object__object___TryGetEntity(
                v47,
                &entity,
                v49,
                (const MethodInfo_32608CC *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string__TryGetEntity__) )
          goto LABEL_36;
        if ( !OriginalSvtId )
          sub_1C22094(0LL, v39);
        Item = System_Collections_Generic_List_int___get_Item(
                 OriginalSvtId,
                 0,
                 (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !entity )
          sub_1C22094(Item, v52);
        v53 = Item;
        monitor = (int32_t)entity[3].monitor;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsVoicePlayFlag = CondType__IsVoicePlayFlag(v53, monitor, 0LL);
        if ( !IsVoicePlayFlag )
        {
          if ( !v85 )
            sub_1C22094(IsVoicePlayFlag, v39);
          v95 = v90;
          items = v85->fields._items;
          v62 = Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___Add__;
          ++v85->fields._version;
          if ( !items )
            sub_1C22094(IsVoicePlayFlag, v95.fields.key);
          size = v85->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_KeyValuePair_object__int____AddWithResize(
              v85,
              v95,
              *(const MethodInfo_35A4F70 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
          }
          else
          {
            v64 = (PartyOrganizationUtility_o *)(&items->obj + size);
            v85->fields._size = size + 1;
            *(_QWORD *)&v64->fields._SelectedNormalFollowerClassId_k__BackingField = v95.fields.key;
            v64 = (PartyOrganizationUtility_o *)((char *)v64 + 32);
            v64->monitor = *(void **)&v95.fields.value;
            sub_1C21DDC(v64, 0LL, *(int64_t *)&v95.fields.value, v40, v41, v42, v43, v44);
          }
          if ( !entity )
            sub_1C22094(v65, v66);
          voicePlayedValueList = this->fields.voicePlayedValueList;
          if ( !voicePlayedValueList )
            sub_1C22094(0LL, v66);
          monitor_low = LODWORD(entity[3].monitor);
          v69 = voicePlayedValueList->fields._items;
          v70 = Method_System_Collections_Generic_List_int__Add__;
          ++voicePlayedValueList->fields._version;
          if ( !v69 )
            sub_1C22094(voicePlayedValueList, monitor_low);
          v71 = voicePlayedValueList->fields._size;
          if ( (unsigned int)v71 >= v69->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              voicePlayedValueList,
              monitor_low,
              *(const MethodInfo_3632090 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
          }
          else
          {
            voicePlayedValueList->fields._size = v71 + 1;
            v69->m_Items[v71 + 1] = monitor_low;
          }
        }
        else
        {
LABEL_36:
          v56 = (System_Collections_Generic_List_T__o *)*voiceInfoList;
          if ( !*voiceInfoList )
            sub_1C22094(0LL, v39);
          v94 = v90;
          v57 = v56->fields._items;
          v58 = Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___Add__;
          ++v56->fields._version;
          if ( !v57 )
            sub_1C22094(v56, v94.fields.key);
          v59 = v56->fields._size;
          if ( (unsigned int)v59 >= v57->max_length )
          {
            System_Collections_Generic_List_KeyValuePair_object__int____AddWithResize(
              v56,
              v94,
              *(const MethodInfo_35A4F70 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
          }
          else
          {
            v60 = (PartyOrganizationUtility_o *)(&v57->obj + v59);
            v56->fields._size = v59 + 1;
            *(_QWORD *)&v60->fields._SelectedNormalFollowerClassId_k__BackingField = v94.fields.key;
            v60 = (PartyOrganizationUtility_o *)((char *)v60 + 32);
            v60->monitor = *(void **)&v94.fields.value;
            sub_1C21DDC(v60, 0LL, *(int64_t *)&v94.fields.value, v40, v41, v42, v43, v44);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v92,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  if ( !v85 )
    goto LABEL_65;
  v16 = OriginalSvtId;
  if ( v85->fields._size >= 1 )
  {
    this->fields.forcePlayVoiceSvtIdList = OriginalSvtId;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.forcePlayVoiceSvtIdList,
      (int64_t)OriginalSvtId,
      v72,
      v73,
      v74,
      v75,
      v76,
      v77);
    *voiceInfoList = (System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *)v85;
    sub_1C21DDC((PartyOrganizationUtility_o *)voiceInfoList, (int64_t)v85, v78, v79, v80, v81, v82, v83);
    return 1;
  }
  if ( !*voiceInfoList )
LABEL_65:
    sub_1C22094(v15, v16);
  return (*voiceInfoList)->fields._size > 0;
}


void __fastcall EventSvtControl__boxGachaPlayVoice(
        EventSvtControl_o *this,
        EventSvtControl_PlayBoxGachVoiceArg_o *arg,
        const MethodInfo *method)
{
  int64_t v5; // x20
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListBoxGacha; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int128 v14; // q1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  const MethodInfo *v21; // x1
  struct System_Action_o *v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct ServantVoiceData_array **p_randomVoiceList; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x22
  __int64 v37; // x0
  __int64 v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  __int64 v45; // x23
  Il2CppObject *current; // x1
  int64_t *v47; // x24
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  _BOOL8 v54; // x0
  __int64 v55; // x1
  __int64 v56; // x28
  int v57; // w8
  unsigned int v58; // w25
  __int64 v59; // x29
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x1
  __int64 v67; // x0
  const MethodInfo *v68; // x1
  __int64 v69; // x0
  __int64 v70; // x1
  __int64 v71; // x8
  Il2CppObject *Instance; // x0
  __int64 v73; // x1
  System_String_o *v74; // x20
  System_Action_o *v75; // x23
  CommonUI_o *v76; // x19
  System_String_o *v77; // x21
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  System_Collections_Generic_List_Enumerator_object__o v84; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v85; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4BE0691 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&EventSvtControl___c__DisplayClass56_0_TypeInfo);
    sub_1C21E38(&Method_EventSvtControl___c__DisplayClass56_1__boxGachaPlayVoice_b__0__);
    sub_1C21E38(&EventSvtControl___c__DisplayClass56_1_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BE0691 = 1;
  }
  memset(&v85, 0, sizeof(v85));
  v5 = sub_1C22084(EventSvtControl___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_35;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  v14 = *(_OWORD *)&arg->fields.targetVoiceId;
  *(_OWORD *)(v5 + 40) = *(_OWORD *)&arg->fields.callBackStartPlay;
  *(_OWORD *)(v5 + 24) = v14;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), 0LL, v15, v16, v17, v18, v19, v20);
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, v21);
  System_String__IsNullOrEmpty(*(System_String_o **)(v5 + 24), 0LL);
  v22 = *(struct System_Action_o **)(v5 + 48);
  this->fields.callbakEndPlay = v22;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.callbakEndPlay, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.randomVoiceList, 0LL, v30, v31, v32, v33, v34, v35);
  voiceListBoxGacha = this->fields.voiceListBoxGacha;
  if ( !voiceListBoxGacha )
LABEL_35:
    sub_1C22094(voiceListBoxGacha, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v84,
    (System_Collections_Generic_List_object__o *)voiceListBoxGacha,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v85 = v84;
LABEL_8:
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v85,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__) )
  {
    v36 = sub_1C22084(EventSvtControl___c__DisplayClass56_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v36, 0LL);
    if ( !v36 )
      sub_1C22094(v37, v38);
    *(_QWORD *)(v36 + 24) = v5;
    v45 = v36 + 24;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v36 + 24), v5, v39, v40, v41, v42, v43, v44);
    current = v85.fields._current;
    *(_QWORD *)(v36 + 16) = v85.fields._current;
    v47 = (int64_t *)(v36 + 16);
    sub_1C21DDC((PartyOrganizationUtility_o *)(v36 + 16), (int64_t)current, v48, v49, v50, v51, v52, v53);
    v56 = *(_QWORD *)(v36 + 16);
    if ( !v56 )
      sub_1C22094(v54, v55);
    v57 = *(_DWORD *)(v56 + 24);
    if ( v57 >= 1 )
    {
      v58 = 0;
      while ( 1 )
      {
        if ( v58 >= v57 )
          sub_1C2209C(v54, v55);
        v59 = *(_QWORD *)(v56 + 8LL * (int)v58 + 32);
        if ( !v59 )
          sub_1C22094(v54, v55);
        if ( !*(_QWORD *)v45 )
          sub_1C22094(v54, v55);
        v54 = System_String__op_Equality(
                *(System_String_o **)(v59 + 16),
                *(System_String_o **)(*(_QWORD *)v45 + 24LL),
                0LL);
        if ( v54 )
          break;
        v57 = *(_DWORD *)(v56 + 24);
        if ( (int)++v58 >= v57 )
          goto LABEL_8;
      }
      this->fields.isPlayBoxGachaVoice = 1;
      if ( System_String__IsNullOrEmpty(*(System_String_o **)(v59 + 72), 0LL) )
      {
        v66 = *v47;
        *p_randomVoiceList = (struct ServantVoiceData_array *)*v47;
        sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.randomVoiceList, v66, v60, v61, v62, v63, v64, v65);
        if ( !*p_randomVoiceList )
          sub_1C22094(v67, v68);
        this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
        if ( !*(_QWORD *)v45 )
          sub_1C22094(v67, v68);
        this->fields.isSkipPerformance = *(_BYTE *)(*(_QWORD *)v45 + 32LL);
        EventSvtControl__svtVoicePlay(this, v68);
        if ( !*(_QWORD *)v45 )
          sub_1C22094(v69, v70);
        v71 = *(_QWORD *)(*(_QWORD *)v45 + 40LL);
        if ( v71 )
          (*(void (__fastcall **)(_QWORD, _QWORD))(v71 + 24))(*(_QWORD *)(v71 + 64), *(_QWORD *)(v71 + 40));
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v74 = *(System_String_o **)(v59 + 72);
        v75 = *(System_Action_o **)(v36 + 32);
        v76 = (CommonUI_o *)Instance;
        v77 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !v75 )
        {
          v75 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(
            v75,
            (Il2CppObject *)v36,
            Method_EventSvtControl___c__DisplayClass56_1__boxGachaPlayVoice_b__0__,
            0LL);
          *(_QWORD *)(v36 + 32) = v75;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v36 + 32), (int64_t)v75, v78, v79, v80, v81, v82, v83);
        }
        if ( !v76 )
          sub_1C22094(Instance, v73);
        CommonUI__OpenNotificationDialog(v76, v77, v74, v75, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0.0, 0LL);
      }
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v85,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  PartyOrganizationUtility_o *p_randomVoiceList; // x21
  DataManager_o *Instance; // x0
  const MethodInfo *v13; // x1
  System_String_o **p_specialSvtVoice; // x23
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v16; // x1
  Il2CppObject *v17; // x24
  int v18; // w8
  unsigned int v19; // w27
  __int64 v20; // x28
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_String_o *v27; // x0
  System_String_array *v28; // x0
  __int64 v29; // x1
  System_String_o *v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  void *v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  VoicePlayCondMaster_o *v50; // x26
  System_Collections_Generic_List_object__o *v51; // x23
  System_Collections_Generic_List_object__o *v52; // x24
  __int64 size; // x20
  unsigned __int64 v54; // x28
  System_String_o *v55; // x27
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  Il2CppClass **v59; // x0
  int v60; // w29
  System_Random_o *v61; // x25
  il2cpp_array_size_t v62; // w25
  _BOOL8 v63; // x0
  __int64 v64; // x1
  Il2CppObject *current; // x26
  int monitor; // w8
  unsigned int v67; // w19
  __int64 v68; // x8
  System_String_o *v69; // x27
  Il2CppObject *Item; // x1
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  struct ServantVoiceData_array *randomVoiceList; // x8
  EventSvtControl_o *v79; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v80; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4BE068A & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor___77587776);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&System_Random_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_16399/*"_"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BE068A = 1;
  }
  memset(&v81, 0, sizeof(v81));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, (const MethodInfo *)voiceIds);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = (PartyOrganizationUtility_o *)&this->fields.randomVoiceList;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.randomVoiceList,
    0LL,
    *(int64_t *)&svtId,
    (int32_t)callbackEnds,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  if ( !voiceIds )
    goto LABEL_79;
  v79 = this;
  if ( (int)voiceIds->max_length >= 2 )
  {
    v50 = (VoicePlayCondMaster_o *)Instance;
    v51 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v51,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
    v52 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor_56944880(
      v52,
      voiceIds->max_length,
      (const MethodInfo_364E8F0 *)Method_System_Collections_Generic_List_string___ctor___77587776);
    if ( !v52 )
      goto LABEL_79;
    System_Collections_Generic_List_object___AddRange(
      v52,
      (System_Collections_Generic_IEnumerable_T__o *)voiceIds,
      (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_string__AddRange__);
    size = (unsigned int)v52->fields._size;
    if ( (int)size >= 1 )
    {
      v54 = 0LL;
      do
      {
        if ( v54 >= voiceIds->max_length )
LABEL_71:
          sub_1C2209C(Instance, v13);
        if ( !v50 )
          goto LABEL_79;
        v55 = voiceIds->m_Items[v54];
        Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v50, svtId, v55, 0LL, -1LL, -1, 0LL, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v51 )
            goto LABEL_79;
          items = v51->fields._items;
          v57 = Method_System_Collections_Generic_List_string__Add__;
          ++v51->fields._version;
          if ( !items )
            goto LABEL_79;
          v58 = v51->fields._size;
          if ( (unsigned int)v58 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v51,
              (Il2CppObject *)v55,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
          }
          else
          {
            v59 = &items->obj.klass + v58;
            v51->fields._size = v58 + 1;
            v59[4] = (Il2CppClass *)v55;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v59 + 4), (int64_t)v55, v44, v45, v46, v47, v48, v49);
          }
        }
      }
      while ( size != ++v54 );
    }
    if ( !v51 )
      goto LABEL_79;
    v60 = v51->fields._size - 1;
    if ( v60 >= 0 )
    {
      do
      {
        v61 = (System_Random_o *)sub_1C22084(System_Random_TypeInfo);
        System_Random___ctor(v61, 0LL);
        if ( !v61 )
          goto LABEL_79;
        Instance = (DataManager_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v61->klass->vtable._7_Next.method)(
                                      v61,
                                      (unsigned int)v51->fields._size,
                                      v61->klass->vtable._8_NextDouble.methodPtr);
        if ( !v79->fields.voiceListMission )
          goto LABEL_79;
        v62 = (unsigned int)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v80,
          (System_Collections_Generic_List_object__o *)v79->fields.voiceListMission,
          (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v81 = v80;
        do
        {
          v63 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v81,
                  (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !v63 )
            break;
          current = v81.fields._current;
          if ( !v81.fields._current )
            sub_1C22094(v63, v64);
          monitor = (int)v81.fields._current[1].monitor;
          if ( monitor >= 1 )
          {
            v67 = 0;
            while ( 1 )
            {
              if ( v67 >= monitor )
                sub_1C2209C(v63, v64);
              v68 = *((_QWORD *)&current[2].klass + (int)v67);
              if ( !v68 )
                sub_1C22094(v63, v64);
              v69 = *(System_String_o **)(v68 + 16);
              Item = System_Collections_Generic_List_object___get_Item(
                       v51,
                       v62,
                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_string__get_Item__);
              v63 = System_String__op_Equality(v69, (System_String_o *)Item, 0LL);
              if ( v63 )
                break;
              monitor = (int)current[1].monitor;
              if ( (int)++v67 >= monitor )
                goto LABEL_57;
            }
            p_randomVoiceList->klass = (PartyOrganizationUtility_c *)current;
            sub_1C21DDC(p_randomVoiceList, (int64_t)current, v71, v72, v73, v74, v75, v76);
          }
LABEL_57:
          ;
        }
        while ( !p_randomVoiceList->klass );
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v81,
          (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        if ( p_randomVoiceList->klass )
          goto LABEL_74;
        if ( v62 >= voiceIds->max_length )
          goto LABEL_71;
        System_Collections_Generic_List_object___Remove(
          v52,
          (Il2CppObject *)voiceIds->m_Items[v62],
          (const MethodInfo_36505DC *)Method_System_Collections_Generic_List_string__Remove__);
      }
      while ( --v60 >= 0 );
    }
  }
  else
  {
    Instance = (DataManager_o *)this->fields.voiceListMission;
    if ( !Instance )
      goto LABEL_79;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v80,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    v81 = v80;
    p_specialSvtVoice = &this->fields.specialSvtVoice;
    do
    {
      IsNullOrEmpty = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v81,
                        (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
      if ( !IsNullOrEmpty )
        break;
      v17 = v81.fields._current;
      if ( !v81.fields._current )
        sub_1C22094(IsNullOrEmpty, v16);
      v18 = (int)v81.fields._current[1].monitor;
      if ( v18 >= 1 )
      {
        v19 = 0;
        while ( 1 )
        {
          if ( v19 >= v18 )
            sub_1C2209C(IsNullOrEmpty, v16);
          v20 = *((_QWORD *)&v17[2].klass + (int)v19);
          if ( !v20 )
            sub_1C22094(IsNullOrEmpty, v16);
          if ( !voiceIds->max_length )
            sub_1C2209C(IsNullOrEmpty, v16);
          if ( System_String__op_Equality(*(System_String_o **)(v20 + 16), voiceIds->m_Items[0], 0LL)
            && System_String__IsNullOrEmpty(*p_specialSvtVoice, 0LL) )
          {
            p_randomVoiceList->klass = (PartyOrganizationUtility_c *)v17;
            sub_1C21DDC(p_randomVoiceList, (int64_t)v17, v21, v22, v23, v24, v25, v26);
            goto LABEL_28;
          }
          IsNullOrEmpty = System_String__IsNullOrEmpty(*p_specialSvtVoice, 0LL);
          if ( !IsNullOrEmpty )
          {
            v27 = *(System_String_o **)(v20 + 16);
            if ( !v27 )
              sub_1C22094(0LL, v16);
            v28 = System_String__Split(v27, 0x5Fu, 0, 0LL);
            if ( !v28 )
              sub_1C22094(0LL, v29);
            if ( !v28->max_length )
              sub_1C2209C(v28, v29);
            v30 = System_String__Concat_63126736(
                    v28->m_Items[0],
                    (System_String_o *)StringLiteral_16399/*"_"*/,
                    *p_specialSvtVoice,
                    0LL);
            IsNullOrEmpty = System_String__op_Equality(*(System_String_o **)(v20 + 16), v30, 0LL);
            if ( IsNullOrEmpty )
              break;
          }
          v18 = (int)v17[1].monitor;
          if ( (int)++v19 >= v18 )
            goto LABEL_28;
        }
        p_randomVoiceList->klass = (PartyOrganizationUtility_c *)v17;
        sub_1C21DDC(p_randomVoiceList, (int64_t)v17, v31, v32, v33, v34, v35, v36);
        v37 = StringLiteral_1/*""*/;
        *p_specialSvtVoice = (System_String_o *)StringLiteral_1/*""*/;
        sub_1C21DDC((PartyOrganizationUtility_o *)p_specialSvtVoice, (int64_t)v37, v38, v39, v40, v41, v42, v43);
      }
LABEL_28:
      ;
    }
    while ( !p_randomVoiceList->klass );
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v81,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  }
  if ( p_randomVoiceList->klass )
  {
LABEL_74:
    v79->fields.callbakEndPlay = callbackEnds;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v79->fields.callbakEndPlay,
      (int64_t)callbackEnds,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
    randomVoiceList = v79->fields.randomVoiceList;
    if ( randomVoiceList )
    {
      v79->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
      EventSvtControl__svtVoicePlay(v79, v13);
      return;
    }
LABEL_79:
    sub_1C22094(Instance, v13);
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
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListShop; // x8
  System_Collections_Generic_List_object__o *v12; // x20
  Il2CppObject *Instance; // x0
  const MethodInfo *v14; // x1
  VoicePlayCondMaster_o *v15; // x22
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x23
  Il2CppClass *klass; // x8
  _BOOL8 isVoicePlay; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Random_o *v34; // x21
  int v35; // w21
  struct ServantVoiceData_array *Item; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 v44; // x0
  System_Exception_o *v45; // x19
  System_String_o *v46; // x0
  __int64 v47; // x0
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BE0689 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C21E38(&System_Random_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BE0689 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  voiceListShop = this->fields.voiceListShop;
  if ( voiceListShop )
  {
    if ( voiceListShop->fields._size <= 0 )
    {
      v44 = sub_1C21E4C(&System_Exception_TypeInfo);
      v45 = (System_Exception_o *)sub_1C22084(v44);
      v46 = (System_String_o *)sub_1C21E4C(&StringLiteral_25740/*"イベントショップ購入時のSvtVoiceマスタが適切に設定されていません。"*/);
      System_Exception___ctor_64156844(v45, v46, 0LL);
      v47 = sub_1C21E4C(&Method_EventSvtControl_playPurchaseVoice__);
      sub_1C21F60(v45, v47);
    }
    this->fields.callbackStopVoice = callback;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.callbackStopVoice,
      (int64_t)callback,
      (int64_t)callback,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    v12 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v12,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !this->fields.voiceListShop )
      goto LABEL_35;
    v15 = (VoicePlayCondMaster_o *)Instance;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v48,
      (System_Collections_Generic_List_object__o *)this->fields.voiceListShop,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    v49 = v48;
    while ( 1 )
    {
      v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v49,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
      if ( !v16 )
        break;
      current = v49.fields._current;
      if ( !v49.fields._current )
        sub_1C22094(v16, v17);
      if ( !LODWORD(v49.fields._current[1].monitor) )
        sub_1C2209C(v16, v17);
      klass = v49.fields._current[2].klass;
      if ( !klass )
        sub_1C22094(v16, v17);
      if ( !v15 )
        sub_1C22094(v16, v17);
      isVoicePlay = VoicePlayCondMaster__isVoicePlay(
                      v15,
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
        if ( !v12 )
          sub_1C22094(isVoicePlay, v21);
        v22 = System_Collections_Generic_List_object___Contains(
                v12,
                current,
                (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
        if ( !v22 )
        {
          items = v12->fields._items;
          v31 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
          ++v12->fields._version;
          if ( !items )
            sub_1C22094(v22, v23);
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              current,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v33[4] = (Il2CppClass *)current;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)current, v24, v25, v26, v27, v28, v29);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v49,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    v34 = (System_Random_o *)sub_1C22084(System_Random_TypeInfo);
    System_Random___ctor(v34, 0LL);
    if ( !v12 || !v34 )
      goto LABEL_35;
    v35 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v34->klass->vtable._7_Next.method)(
            v34,
            (unsigned int)v12->fields._size,
            v34->klass->vtable._8_NextDouble.methodPtr);
    if ( this->fields.beforeVoiceIdx == v35 )
      v35 = (v35 + 1) % v12->fields._size;
    Item = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                              v12,
                                              v35,
                                              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    this->fields.randomVoiceList = Item;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.randomVoiceList,
      (int64_t)Item,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    randomVoiceList = this->fields.randomVoiceList;
    this->fields.beforeVoiceIdx = v35;
    if ( !randomVoiceList )
LABEL_35:
      sub_1C22094(Instance, v14);
    this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
    EventSvtControl__setVoiceForm(this, v14);
  }
}


void __fastcall EventSvtControl__playVoice(
        EventSvtControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  System_Collections_Generic_List_int__o **p_forcePlayVoiceSvtIdList; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Collections_Generic_List_int__o *v13; // x23
  struct System_Collections_Generic_List_int__o **p_voicePlayedValueList; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  const MethodInfo *v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  const MethodInfo *v28; // x3
  __int64 PlayableVoiceInfoList; // x0
  const MethodInfo *v30; // x1
  System_Collections_Generic_List_T__o *v31; // x23
  int32_t v32; // w22
  int32_t beforeVoiceIdx; // w9
  int v34; // w1
  const MethodInfo_3586AD0 *v35; // x4
  EventSvtControl___c_c *v36; // x0
  System_Func_T__TResult__o *_9__45_0; // x22
  Il2CppObject *v38; // x24
  struct EventSvtControl___c_StaticFields *static_fields; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  System_Int32_array *v47; // x0
  struct ServantVoiceData_array *key; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct ServantVoiceData_array *randomVoiceList; // x8
  struct System_Collections_Generic_List_int__o *forcePlayVoiceSvtIdList; // x8
  __int64 size; // x23
  System_Int32_array_array *v58; // x19
  unsigned __int64 v59; // x24
  PartyOrganizationUtility_o *m_Items; // x25
  PartyOrganizationUtility_c *v61; // x26
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  System_Collections_Generic_KeyValuePair_object__int__o v68; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *voiceInfoList; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o v70; // 0:x0.16
  System_Collections_Generic_KeyValuePair_object__int__o Item; // 0:x2.16

  if ( (byte_4BE0688 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_IndexValue_KeyValuePair_ServantVoiceData____int____);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_KeyValuePair_ServantVoiceData____int___int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&System_Func_KeyValuePair_ServantVoiceData____int___int__TypeInfo);
    sub_1C21E38(&int_____TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int__get_Key__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___set_Item__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&Method_NetworkManager_getRequest_TopMyRoomRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_EventSvtControl___c__playVoice_b__45_0__);
    sub_1C21E38(&EventSvtControl___c_TypeInfo);
    byte_4BE0688 = 1;
  }
  *(_QWORD *)&v68.fields.value = 0LL;
  voiceInfoList = 0LL;
  v68.fields.key = 0LL;
  v5 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.forcePlayVoiceSvtIdList = v5;
  p_forcePlayVoiceSvtIdList = &this->fields.forcePlayVoiceSvtIdList;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.forcePlayVoiceSvtIdList,
    (int64_t)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.voicePlayedValueList = v13;
  p_voicePlayedValueList = &this->fields.voicePlayedValueList;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.voicePlayedValueList,
    (int64_t)v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, v21);
  if ( this->fields.voiceListRand )
  {
    this->fields.callbackStopVoice = callback;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.callbackStopVoice,
      (int64_t)callback,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    PlayableVoiceInfoList = EventSvtControl__TryGetPlayableVoiceInfoList(
                              this,
                              &voiceInfoList,
                              this->fields.voiceListRand,
                              v28);
    if ( (PlayableVoiceInfoList & 1) != 0 )
    {
      v31 = (System_Collections_Generic_List_T__o *)voiceInfoList;
      if ( !voiceInfoList )
        goto LABEL_43;
      if ( voiceInfoList->fields._size == 1 )
      {
        v32 = 0;
      }
      else
      {
        beforeVoiceIdx = this->fields.beforeVoiceIdx;
        if ( (beforeVoiceIdx & 0x80000000) == 0 )
        {
          if ( beforeVoiceIdx <= voiceInfoList->fields._size - 1 )
            v34 = this->fields.beforeVoiceIdx;
          else
            v34 = voiceInfoList->fields._size - 1;
          this->fields.beforeVoiceIdx = v34;
          *(_QWORD *)&v70.fields.value = System_Collections_Generic_List_KeyValuePair_object__int____get_Item(
                                           v31,
                                           v34,
                                           (const MethodInfo_35A4C54 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Item__).fields.key;
          v70.fields.key = (Il2CppObject *)&v68;
          System_Collections_Generic_KeyValuePair_object__int____ctor(
            v70,
            0LL,
            Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__,
            v35);
          PlayableVoiceInfoList = (__int64)voiceInfoList;
          if ( !voiceInfoList )
            goto LABEL_43;
          System_Collections_Generic_List_KeyValuePair_object__int____set_Item(
            (System_Collections_Generic_List_T__o *)voiceInfoList,
            this->fields.beforeVoiceIdx,
            v68,
            (const MethodInfo_35A4CAC *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___set_Item__);
          v31 = (System_Collections_Generic_List_T__o *)voiceInfoList;
        }
        v36 = EventSvtControl___c_TypeInfo;
        if ( !EventSvtControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSvtControl___c_TypeInfo);
          v36 = EventSvtControl___c_TypeInfo;
        }
        _9__45_0 = (System_Func_T__TResult__o *)v36->static_fields->__9__45_0;
        if ( !_9__45_0 )
        {
          if ( !v36->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v36);
            v36 = EventSvtControl___c_TypeInfo;
          }
          v38 = (Il2CppObject *)v36->static_fields->__9;
          _9__45_0 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_KeyValuePair_ServantVoiceData____int___int__TypeInfo);
          System_Func_KeyValuePair_object__int___int____ctor(
            _9__45_0,
            v38,
            Method_EventSvtControl___c__playVoice_b__45_0__,
            0LL);
          static_fields = EventSvtControl___c_TypeInfo->static_fields;
          static_fields->__9__45_0 = (struct System_Func_KeyValuePair_ServantVoiceData____int___int__o *)_9__45_0;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&static_fields->__9__45_0,
            (int64_t)_9__45_0,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45);
        }
        v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_object__int___int_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)v31,
                                                                     (System_Func_TSource__TResult__o *)_9__45_0,
                                                                     (const MethodInfo_2FDAD68 *)Method_System_Linq_Enumerable_Select_KeyValuePair_ServantVoiceData____int___int___);
        v47 = System_Linq_Enumerable__ToArray_int_(
                v46,
                (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
        PlayableVoiceInfoList = RandomUtility__GetRandomRangeIndex(v47, 0, 0LL);
        v31 = (System_Collections_Generic_List_T__o *)voiceInfoList;
        if ( !voiceInfoList )
LABEL_43:
          sub_1C22094(PlayableVoiceInfoList, v30);
        v32 = PlayableVoiceInfoList;
      }
      Item = System_Collections_Generic_List_KeyValuePair_object__int____get_Item(
               v31,
               0,
               (const MethodInfo_35A4C54 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Item__);
      key = (struct ServantVoiceData_array *)BasicHelper__IndexValue_KeyValuePair_object__int__(
                                               v31,
                                               v32,
                                               Item,
                                               (const MethodInfo_2F9E774 *)Method_BasicHelper_IndexValue_KeyValuePair_ServantVoiceData____int____).fields.key;
      this->fields.randomVoiceList = key;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.randomVoiceList,
        (int64_t)key,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54);
      randomVoiceList = this->fields.randomVoiceList;
      this->fields.beforeVoiceIdx = v32;
      if ( randomVoiceList )
      {
        this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
        EventSvtControl__setVoiceForm(this, v30);
        forcePlayVoiceSvtIdList = this->fields.forcePlayVoiceSvtIdList;
        if ( forcePlayVoiceSvtIdList )
        {
          size = (unsigned int)forcePlayVoiceSvtIdList->fields._size;
          if ( (int)size < 1 )
            return;
          if ( *p_voicePlayedValueList )
          {
            if ( (*p_voicePlayedValueList)->fields._size <= v32 )
              return;
            v58 = (System_Int32_array_array *)sub_1C21EE0(int_____TypeInfo, (unsigned int)size);
            v59 = 0LL;
            m_Items = (PartyOrganizationUtility_o *)v58->m_Items;
            do
            {
              PlayableVoiceInfoList = sub_1C21EE0(int___TypeInfo, 2LL);
              if ( !*p_forcePlayVoiceSvtIdList )
                goto LABEL_43;
              v61 = (PartyOrganizationUtility_c *)PlayableVoiceInfoList;
              PlayableVoiceInfoList = System_Collections_Generic_List_int___get_Item(
                                        *p_forcePlayVoiceSvtIdList,
                                        v59,
                                        (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( !v61 )
                goto LABEL_43;
              if ( !LODWORD(v61->_1.namespaze) )
                goto LABEL_44;
              LODWORD(v61->_1.byval_arg.data) = PlayableVoiceInfoList;
              PlayableVoiceInfoList = (__int64)*p_voicePlayedValueList;
              if ( !*p_voicePlayedValueList )
                goto LABEL_43;
              PlayableVoiceInfoList = System_Collections_Generic_List_int___get_Item(
                                        (System_Collections_Generic_List_int__o *)PlayableVoiceInfoList,
                                        v32,
                                        (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( LODWORD(v61->_1.namespaze) <= 1 )
                goto LABEL_44;
              HIDWORD(v61->_1.byval_arg.data) = PlayableVoiceInfoList;
              if ( !v58 )
                goto LABEL_43;
              if ( v59 >= v58->max_length )
LABEL_44:
                sub_1C2209C(PlayableVoiceInfoList, v30);
              m_Items->klass = v61;
              sub_1C21DDC(m_Items, (int64_t)v61, v62, v63, v64, v65, v66, v67);
              ++v59;
              m_Items = (PartyOrganizationUtility_o *)((char *)m_Items + 8);
            }
            while ( size != v59 );
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            PlayableVoiceInfoList = (__int64)NetworkManager__getRequest_object_(
                                               0LL,
                                               (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_TopMyRoomRequest___);
            if ( PlayableVoiceInfoList )
            {
              TopMyRoomRequest__beginRequest((TopMyRoomRequest_o *)PlayableVoiceInfoList, v58, 0LL);
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
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.asstName,
    (int64_t)assetName,
    (int64_t)assetName,
    (int32_t)performanceRoot,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.performanceRoot = performanceRoot;
  sub_1C21DDC(
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
  sub_1C21DDC(p_voiceListBoxGacha, (int64_t)v24, v17, v18, v19, v20, v21, v22);
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
  sub_1C21DDC(
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
  sub_1C21DDC(v17, (int64_t)v18, v11, v12, v13, v14, v15, v16);
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

  if ( (byte_4BE0686 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    byte_4BE0686 = 1;
  }
  this->fields.asstName = assetName;
  this->fields.isDead = 0;
  this->fields.playCnt = 0;
  this->fields.svtId = svtId;
  sub_1C21DDC(
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
  sub_1C21DDC((PartyOrganizationUtility_o *)p_voiceListRand, (int64_t)v21, v14, v15, v16, v17, v18, v19);
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
  sub_1C21DDC(p_voiceListMission, (int64_t)v29, v22, v23, v24, v25, v26, v27);
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
  sub_1C21DDC(p_voiceListShop, (int64_t)v37, v30, v31, v32, v33, v34, v35);
  this->fields.voiceListOverwrite = 0LL;
  p_voiceListOverwrite = &this->fields.voiceListOverwrite;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_voiceListOverwrite, 0LL, v39, v40, v41, v42, v43, v44);
  *((_DWORD *)p_voiceListOverwrite - 26) = -1;
}


void __fastcall EventSvtControl__setVoiceForm(EventSvtControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  System_Collections_Generic_List_object__o *monitor; // x0
  __int64 v5; // x1
  struct ServantVoiceData_array *randomVoiceList; // x24
  unsigned __int64 v7; // x25
  __int64 v8; // x22
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x1
  __int64 v16; // x21
  System_Predicate_int__o *v17; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  UIStandFigureR_o *v21; // x21
  System_Action_o *v22; // x22
  Il2CppObject *v23; // [xsp+8h] [xbp-68h]

  if ( (byte_4BE0687 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_EventSvtControl_svtVoicePlay__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Exists__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&System_Predicate_int__TypeInfo);
    sub_1C21E38(&Method_EventSvtControl___c__DisplayClass44_0__setVoiceForm_b__0__);
    sub_1C21E38(&EventSvtControl___c__DisplayClass44_0_TypeInfo);
    byte_4BE0687 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  v23 = (Il2CppObject *)this;
  if ( !randomVoiceList )
    goto LABEL_20;
  if ( (int)randomVoiceList->max_length >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      v8 = sub_1C22084(EventSvtControl___c__DisplayClass44_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v8, 0LL);
      if ( v7 >= randomVoiceList->max_length )
        sub_1C2209C(monitor, v5);
      if ( !v8 )
        break;
      v15 = (int64_t)randomVoiceList->m_Items[v7];
      *(_QWORD *)(v8 + 16) = v15;
      v16 = v8 + 16;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v8 + 16), v15, v9, v10, v11, v12, v13, v14);
      v17 = (System_Predicate_int__o *)sub_1C22084(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v17,
        (Il2CppObject *)v8,
        Method_EventSvtControl___c__DisplayClass44_0__setVoiceForm_b__0__,
        0LL);
      if ( !v3 )
        break;
      monitor = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___Exists(
                                                               v3,
                                                               (System_Predicate_T__o *)v17,
                                                               (const MethodInfo_363269C *)Method_System_Collections_Generic_List_int__Exists__);
      if ( ((unsigned __int8)monitor & 1) == 0 )
      {
        if ( !*(_QWORD *)v16 )
          break;
        v5 = *(unsigned int *)(*(_QWORD *)v16 + 56LL);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_int__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            v5,
            *(const MethodInfo_3632090 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size + 1] = v5;
        }
      }
      if ( (__int64)++v7 >= (int)randomVoiceList->max_length )
        goto LABEL_16;
    }
LABEL_20:
    sub_1C22094(monitor, v5);
  }
LABEL_16:
  monitor = (System_Collections_Generic_List_object__o *)v23[5].monitor;
  if ( !monitor )
    goto LABEL_20;
  monitor = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                           monitor,
                                                           0,
                                                           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
  if ( !monitor )
    goto LABEL_20;
  v21 = *(UIStandFigureR_o **)&monitor->fields._size;
  v22 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v22, v23, Method_EventSvtControl_svtVoicePlay__, 0LL);
  if ( !v21 )
    goto LABEL_20;
  UIStandFigureR__PreloadFormAssets(v21, v3, v22, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventSvtControl__shopIndividualPlayVoice(
        EventSvtControl_o *this,
        int32_t svtId,
        System_String_array *targetVoiceIds,
        System_Action_o *callback,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  signed int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v19; // x23
  System_Collections_Generic_List_object__o *v20; // x24
  __int64 v21; // x26
  __int64 v22; // x27
  System_String_o *v23; // x25
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  int32_t v34; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  _BOOL8 v42; // x0
  __int64 v43; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v46; // w25
  __int64 v47; // x8
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 v54; // x0
  const MethodInfo *v55; // x1
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BE0690 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BE0690 = 1;
  }
  memset(&v57, 0, sizeof(v57));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  if ( !targetVoiceIds )
    goto LABEL_40;
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
LABEL_21:
      sub_1C2209C(Instance, v10);
    Item = targetVoiceIds->m_Items[0];
    goto LABEL_24;
  }
  v19 = (VoicePlayCondMaster_o *)Instance;
  v20 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)*(_QWORD *)&targetVoiceIds->max_length >= 1 )
  {
    v21 = 0LL;
    v22 = (unsigned int)*(_QWORD *)&targetVoiceIds->max_length - 1LL;
    while ( v19 )
    {
      v23 = targetVoiceIds->m_Items[v21];
      Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v19, svtId, v23, 0LL, -1LL, -1, 0LL, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v20 )
          break;
        items = v20->fields._items;
        v31 = Method_System_Collections_Generic_List_string__Add__;
        ++v20->fields._version;
        if ( !items )
          break;
        size = v20->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            (Il2CppObject *)v23,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v23;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v23, v24, v25, v26, v27, v28, v29);
        }
      }
      if ( v22 == v21 )
        goto LABEL_22;
      if ( ++v21 >= (unsigned __int64)targetVoiceIds->max_length )
        goto LABEL_21;
    }
LABEL_40:
    sub_1C22094(Instance, v10);
  }
LABEL_22:
  if ( !v20 )
    goto LABEL_40;
  v34 = UnityEngine_Random__Range_70829352(0, v20->fields._size, 0LL);
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v20,
                              v34,
                              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_24:
  this->fields.callbakEndPlay = callback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.callbakEndPlay,
    (int64_t)callback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.randomVoiceList = 0LL;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.randomVoiceList, 0LL, v36, v37, v38, v39, v40, v41);
  Instance = (DataManager_o *)this->fields.voiceIndividualShopList;
  if ( !Instance )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v56,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v57 = v56;
LABEL_26:
  while ( 1 )
  {
    v42 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v57,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v42 )
      break;
    current = v57.fields._current;
    if ( !v57.fields._current )
      sub_1C22094(v42, v43);
    monitor = (int)v57.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v46 = 0;
      while ( 1 )
      {
        if ( v46 >= monitor )
          sub_1C2209C(v42, v43);
        v47 = *((_QWORD *)&current[2].klass + (int)v46);
        if ( !v47 )
          sub_1C22094(v42, v43);
        v42 = System_String__op_Equality(*(System_String_o **)(v47 + 16), Item, 0LL);
        if ( v42 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v46 >= monitor )
          goto LABEL_26;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.randomVoiceList,
        (int64_t)current,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
      if ( !*p_randomVoiceList )
        sub_1C22094(v54, v55);
      this->fields.maxPlayCnt = *(_QWORD *)&(*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v55);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v57,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


void __fastcall EventSvtControl__stopVoice(EventSvtControl_o *this, const MethodInfo *method)
{
  SePlayer_o **p_player; // x20
  System_String_o *asstName; // x21
  System_String_o *vcName; // x22
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BE068F & 1) == 0 )
  {
    sub_1C21E38(&SoundManager_TypeInfo);
    sub_1C21E38(&StringLiteral_24143/*"svtVoicePlay"*/);
    byte_4BE068F = 1;
  }
  p_player = &this->fields.player;
  if ( this->fields.player )
  {
    asstName = this->fields.asstName;
    vcName = this->fields.vcName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoice(asstName, vcName, 0.0, 0LL);
    if ( !*p_player )
      sub_1C22094(0LL, v6);
    SePlayer__Destroy(*p_player, 0LL);
    this->fields.player = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.player, 0LL, v7, v8, v9, v10, v11, v12);
    this->fields.callbakEndPlay = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.callbakEndPlay, 0LL, v13, v14, v15, v16, v17, v18);
    *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_70854192(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_24143/*"svtVoicePlay"*/,
    0LL);
}


void __fastcall EventSvtControl__svtVoicePlay(EventSvtControl_o *this, const MethodInfo *method)
{
  EventSvtControl_o *v2; // x19
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  ServantVoiceData_o *v6; // x8
  ServantVoicePerformance_o *additionalPerformances; // x20
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x5

  v2 = this;
  if ( (byte_4BE068B & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (EventSvtControl_o *)sub_1C21E38(&Method_EventSvtControl_SvtVoicePlayProc__);
    byte_4BE068B = 1;
  }
  if ( v2->fields.asstName && v2->fields.maxPlayCnt )
  {
    randomVoiceList = v2->fields.randomVoiceList;
    if ( !randomVoiceList )
      goto LABEL_13;
    playCnt = v2->fields.playCnt;
    max_length = randomVoiceList->max_length;
    if ( (int)playCnt < max_length )
    {
      if ( v2->fields.isSkipPerformance )
      {
        EventSvtControl__SvtVoicePlayProc(v2, method);
        return;
      }
      if ( (unsigned int)playCnt >= max_length )
        sub_1C2209C(this, method);
      v6 = randomVoiceList->m_Items[playCnt];
      if ( v6 )
      {
        additionalPerformances = v6->fields.additionalPerformances;
        v8 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(v8, (Il2CppObject *)v2, Method_EventSvtControl_SvtVoicePlayProc__, 0LL);
        EventSvtControl__PlayPerformance(v2, additionalPerformances, 0, 1, v8, v9);
        return;
      }
LABEL_13:
      sub_1C22094(this, method);
    }
  }
}


void __fastcall EventSvtControl__welcomeVoicePlay(
        EventSvtControl_o *this,
        int32_t eventId,
        int32_t svtId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListOverwrite; // x8
  System_Collections_Generic_List_object__o *v13; // x21
  VoicePlayCondMaster_o *v14; // x23
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x24
  Il2CppClass *klass; // x8
  _BOOL8 isVoicePlay; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Random_o *v36; // x20
  int32_t v37; // w0
  struct ServantVoiceData_array *Item; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct ServantVoiceData_array *randomVoiceList; // x8
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BE0697 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C21E38(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C21E38(&System_Random_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BE0697 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_34;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               eventId,
               (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_34;
  if ( EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0LL) )
  {
    voiceListOverwrite = this->fields.voiceListOverwrite;
    if ( voiceListOverwrite )
    {
      if ( voiceListOverwrite->fields._size >= 1 )
      {
        v13 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v13,
          (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_34;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
        if ( !this->fields.voiceListOverwrite )
          goto LABEL_34;
        v14 = (VoicePlayCondMaster_o *)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v46,
          (System_Collections_Generic_List_object__o *)this->fields.voiceListOverwrite,
          (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v47 = v46;
        while ( 1 )
        {
          v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v47,
                  (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !v15 )
            break;
          current = v47.fields._current;
          if ( !v47.fields._current )
            sub_1C22094(v15, v16);
          if ( !LODWORD(v47.fields._current[1].monitor) )
            sub_1C2209C(v15, v16);
          klass = v47.fields._current[2].klass;
          if ( !klass )
            sub_1C22094(v15, v16);
          if ( !v14 )
            sub_1C22094(v15, v16);
          isVoicePlay = VoicePlayCondMaster__isVoicePlay(
                          v14,
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
            if ( !v13 )
              sub_1C22094(isVoicePlay, v20);
            items = v13->fields._items;
            v28 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v13->fields._version;
            if ( !items )
              sub_1C22094(isVoicePlay, v20);
            size = v13->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v13,
                current,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = &items->obj.klass + size;
              v13->fields._size = size + 1;
              v30[4] = (Il2CppClass *)current;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)current, v21, v22, v23, v24, v25, v26);
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v47,
          (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        if ( v13 )
        {
          if ( v13->fields._size >= 1 )
          {
            this->fields.callbackStopVoice = callback;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&this->fields.callbackStopVoice,
              (int64_t)callback,
              (int64_t)v11,
              v31,
              v32,
              v33,
              v34,
              v35);
            v36 = (System_Random_o *)sub_1C22084(System_Random_TypeInfo);
            System_Random___ctor(v36, 0LL);
            if ( v36 )
            {
              v37 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v36->klass->vtable._7_Next.method)(
                      v36,
                      (unsigned int)v13->fields._size,
                      v36->klass->vtable._8_NextDouble.methodPtr);
              Item = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                                        v13,
                                                        v37,
                                                        (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
              this->fields.randomVoiceList = Item;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)&this->fields.randomVoiceList,
                (int64_t)Item,
                v39,
                v40,
                v41,
                v42,
                v43,
                v44);
              randomVoiceList = this->fields.randomVoiceList;
              if ( randomVoiceList )
              {
                this->fields.maxPlayCnt = *(_QWORD *)&randomVoiceList->max_length;
                EventSvtControl__svtVoicePlay(this, v10);
                return;
              }
            }
LABEL_34:
            sub_1C22094(Instance, v10);
          }
        }
      }
    }
  }
  EventSvtControl__playVoice(this, callback, v11);
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
  EventSvtControl__PlayPerformanceProc_d__71_o *v2; // x19
  int32_t _1__state; // w8
  struct EventSvtControl_o *_4__this; // x22
  Il2CppObject *v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  Il2CppObject *animName; // x1
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v27; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  bool result; // w0
  struct EventSvtControl___c__DisplayClass71_0_o *_8__1; // x8
  Il2CppObject *v37; // x20
  System_Func_bool__o *v38; // x21
  UnityEngine_WaitUntil_o *v39; // x20
  PartyOrganizationUtility_o *v40; // x19
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct System_Action_o *playEndAction; // x8

  v2 = this;
  if ( (byte_4BE06A4 & 1) == 0 )
  {
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&Method_EventSvtControl___c__DisplayClass71_0__PlayPerformanceProc_b__0__);
    sub_1C21E38(&EventSvtControl___c__DisplayClass71_0_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (EventSvtControl__PlayPerformanceProc_d__71_o *)sub_1C21E38(&UnityEngine_WaitUntil_TypeInfo);
    byte_4BE06A4 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
LABEL_18:
    playEndAction = v2->fields.playEndAction;
    if ( playEndAction )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))playEndAction->fields.m_target)(
        playEndAction->fields.original_method_info,
        *(_QWORD *)&playEndAction->fields.extra_arg);
    return 0;
  }
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    goto LABEL_12;
  }
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v5 = (Il2CppObject *)sub_1C22084(EventSvtControl___c__DisplayClass71_0_TypeInfo);
    System_Object___ctor(v5, 0LL);
    v2->fields.__8__1 = (struct EventSvtControl___c__DisplayClass71_0_o *)v5;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.__8__1, (int64_t)v5, v6, v7, v8, v9, v10, v11);
    this = (EventSvtControl__PlayPerformanceProc_d__71_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_21;
    v18 = (int64_t)v2->fields.__4__this;
    *(_QWORD *)&this->fields.__1__state = v18;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, v18, v12, v13, v14, v15, v16, v17);
    this = (EventSvtControl__PlayPerformanceProc_d__71_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_21;
    animName = (Il2CppObject *)v2->fields.animName;
    this->fields.__2__current = animName;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.__2__current,
      (int64_t)animName,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    delay = v2->fields.delay;
    if ( delay > 0.0 )
    {
      v27 = (UnityEngine_WaitForSeconds_o *)sub_1C22084(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v27, delay, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v27;
      p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1C21DDC(p__2__current, (int64_t)v27, v29, v30, v31, v32, v33, v34);
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
        _8__1 = v2->fields.__8__1;
        if ( _8__1 )
        {
          this = (EventSvtControl__PlayPerformanceProc_d__71_o *)_4__this->fields.animationRef;
          if ( this )
          {
            UnityEngine_Animation__Play_70614020((UnityEngine_Animation_o *)this, _8__1->fields.animName, 0LL);
            if ( v2->fields.isWaitPerformance )
            {
              v37 = (Il2CppObject *)v2->fields.__8__1;
              v38 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                v38,
                v37,
                Method_EventSvtControl___c__DisplayClass71_0__PlayPerformanceProc_b__0__,
                0LL);
              v39 = (UnityEngine_WaitUntil_o *)sub_1C22084(UnityEngine_WaitUntil_TypeInfo);
              UnityEngine_WaitUntil___ctor(v39, v38, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v39;
              v40 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
              sub_1C21DDC(v40, (int64_t)v39, v41, v42, v43, v44, v45, v46);
              *(_DWORD *)&v40[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
              return 1;
            }
            goto LABEL_18;
          }
        }
      }
    }
LABEL_21:
    sub_1C22094(this, method);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_EventSvtControl__PlayPerformanceProc_d__71_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BE06A0 & 1) == 0 )
  {
    sub_1C21E38(&EventSvtControl___c_TypeInfo);
    byte_4BE06A0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(EventSvtControl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventSvtControl___c_TypeInfo->static_fields->__9 = (struct EventSvtControl___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)EventSvtControl___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, 0LL);
  return x->fields.id;
}


int32_t __fastcall EventSvtControl___c___playVoice_b__45_0(
        EventSvtControl___c_o *this,
        System_Collections_Generic_KeyValuePair_ServantVoiceData____int__o x,
        const MethodInfo *method)
{
  int32_t value; // w19

  value = x.fields.value;
  if ( (byte_4BE06A1 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int__get_Value__);
    byte_4BE06A1 = 1;
  }
  return value;
}


void __fastcall EventSvtControl___c__DisplayClass44_0___ctor(
        EventSvtControl___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


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
    sub_1C22094(this, a);
  return System_Int32__Equals_63920912((int32_t)&v5, voice->fields.form, 0LL);
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
  sub_1C21DDC((PartyOrganizationUtility_o *)&this[1].fields.__9__0, (int64_t)vdArray, v2, v3, v4, v5, v6, v7);
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
    sub_1C22094(this, method);
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
  struct System_Func_ServantVoiceData__bool__o *_9__1; // x22
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BE06A2 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_ServantVoiceData___);
    sub_1C21E38(&System_Func_ServantVoiceData__bool__TypeInfo);
    sub_1C21E38(&Method_EventSvtControl___c__DisplayClass60_0__PlayEventTradeVoice_b__1__);
    byte_4BE06A2 = 1;
  }
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Func_ServantVoiceData__bool__o *)sub_1C22084(System_Func_ServantVoiceData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      (System_Func_object__bool__o *)_9__1,
      (Il2CppObject *)this,
      Method_EventSvtControl___c__DisplayClass60_0__PlayEventTradeVoice_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v6, v7, v8, v9, v10, v11);
  }
  return BasicHelper__Any_object__49917468(
           (System_Object_array *)dataList,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_2F9AE1C *)Method_BasicHelper_Any_ServantVoiceData___);
}


bool __fastcall EventSvtControl___c__DisplayClass60_0___PlayEventTradeVoice_b__1(
        EventSvtControl___c__DisplayClass60_0_o *this,
        ServantVoiceData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C22094(this, 0LL);
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
  struct System_Func_ServantVoiceData__bool__o *_9__1; // x22
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BE06A3 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_ServantVoiceData___);
    sub_1C21E38(&System_Func_ServantVoiceData__bool__TypeInfo);
    sub_1C21E38(&Method_EventSvtControl___c__DisplayClass61_0__PlayEventCraftVoice_b__1__);
    byte_4BE06A3 = 1;
  }
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Func_ServantVoiceData__bool__o *)sub_1C22084(System_Func_ServantVoiceData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      (System_Func_object__bool__o *)_9__1,
      (Il2CppObject *)this,
      Method_EventSvtControl___c__DisplayClass61_0__PlayEventCraftVoice_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v6, v7, v8, v9, v10, v11);
  }
  return BasicHelper__Any_object__49917468(
           (System_Object_array *)dataList,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_2F9AE1C *)Method_BasicHelper_Any_ServantVoiceData___);
}


bool __fastcall EventSvtControl___c__DisplayClass61_0___PlayEventCraftVoice_b__1(
        EventSvtControl___c__DisplayClass61_0_o *this,
        ServantVoiceData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, method);
  return !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0LL);
}