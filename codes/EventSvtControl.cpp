void EventSvtControl___cctor(const MethodInfo *method)
{
  if ( (byte_596A7BC & 1) == 0 )
  {
    sub_2213A60(&EventSvtControl_TypeInfo);
    byte_596A7BC = 1;
  }
  LODWORD(EventSvtControl_TypeInfo->static_fields->BASE_MOVE_TIME) = (struct EventSvtControl_StaticFields)1053609165;
}


void EventSvtControl___ctor(EventSvtControl_o *this, const MethodInfo *method)
{
  this->fields.volume = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventSvtControl__AddEndCallBack(EventSvtControl_o *this, System_Action_o *callback, const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_callbakEndPlay; // x19
  System_Delegate_o *callbakEndPlay; // t1
  System_Delegate_o *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  int32_t v14; // w8
  System_Action_c *v15; // x1

  if ( (byte_596A7BB & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596A7BB = 1;
  }
  callbakEndPlay = (System_Delegate_o *)this->fields.callbakEndPlay;
  p_callbakEndPlay = (MissionNaviTransitionBoardItem_o *)&this->fields.callbakEndPlay;
  v7 = System_Delegate__Combine(callbakEndPlay, (System_Delegate_o *)callback, 0);
  v14 = (int)v7;
  if ( !v7 )
    goto LABEL_7;
  v15 = System_Action_TypeInfo;
  if ( (System_Action_c *)v7->klass != System_Action_TypeInfo
    || (p_callbakEndPlay->klass = (MissionNaviTransitionBoardItem_c *)v7, (System_Action_c *)v7->klass != v15) )
  {
    sub_221405C(v7, v15, v8, v9);
LABEL_7:
    p_callbakEndPlay->klass = 0;
  }
  sub_2213A04(p_callbakEndPlay, v14, v8, v9, v10, v11, v12, v13);
}


void EventSvtControl__CallPerformanceEndAction(EventSvtControl_o *this, const MethodInfo *method)
{
  struct System_Action_o *performanceEndAction; // x8

  performanceEndAction = this->fields.performanceEndAction;
  if ( performanceEndAction )
    ((void (__fastcall *)(intptr_t, intptr_t))performanceEndAction->fields.invoke_impl)(
      performanceEndAction->fields.method_code,
      performanceEndAction->fields.method);
}


void EventSvtControl__EndPerformance(
        EventSvtControl_o *this,
        System_Action_o *endAction,
        float speed,
        const MethodInfo *method)
{
  UnityEngine_Object_o *objectRef; // x21
  intptr_t method_code; // x0
  intptr_t v8; // x1
  void (__fastcall *invoke_impl)(intptr_t, intptr_t); // x2
  System_Action_o *v10; // x21
  struct System_Action_o *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Action_c *v18; // x1
  struct System_Action_o **p_performanceEndAction; // x20
  __int64 v20; // x1
  UnityEngine_GameObject_o *transform; // x0
  float x; // s10
  float y; // s8
  float z; // s9
  __int64 v25; // x1
  __int64 v26; // x2
  Il2CppObject *ComponentInChildren_object; // x21
  __int64 v28; // x2
  struct System_Action_o *v29; // x8
  UnityEngine_GameObject_o *v30; // x20
  EventSvtControl_c *v31; // x0
  float v32; // s10
  UnityEngine_GameObject_o *v33; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  int32_t v41; // w1
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  EventSvtControl_o *v48; // x0
  const MethodInfo *v49; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_596A7B9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventSvtControl_ReleasePerformance__);
    sub_2213A60(&EventSvtControl_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_4098/*"CallPerformanceEndAction"*/);
    byte_596A7B9 = 1;
  }
  objectRef = (UnityEngine_Object_o *)this->fields.objectRef;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, endAction, method);
  if ( UnityEngine_Object__op_Equality(objectRef, 0, 0) )
  {
    if ( endAction )
    {
      method_code = endAction->fields.method_code;
      v8 = endAction->fields.method;
      invoke_impl = (void (__fastcall *)(intptr_t, intptr_t))endAction->fields.invoke_impl;
LABEL_21:
      invoke_impl(method_code, v8);
      return;
    }
    return;
  }
  v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_EventSvtControl_ReleasePerformance__, 0);
  v11 = (struct System_Action_o *)System_Delegate__Combine((System_Delegate_o *)endAction, (System_Delegate_o *)v10, 0);
  if ( v11 )
  {
    v18 = System_Action_TypeInfo;
    if ( v11->klass != System_Action_TypeInfo || (this->fields.performanceEndAction = v11, v11->klass != v18) )
    {
      v48 = (EventSvtControl_o *)sub_221405C(v11, v18, v12, v13);
      EventSvtControl__CallPerformanceEndAction(v48, v49);
      return;
    }
    p_performanceEndAction = &this->fields.performanceEndAction;
  }
  else
  {
    p_performanceEndAction = &this->fields.performanceEndAction;
    this->fields.performanceEndAction = 0;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_performanceEndAction, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  transform = this->fields.objectRef;
  if ( !transform
    || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0)) == 0
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0),
        (transform = this->fields.objectRef) == 0) )
  {
LABEL_28:
    sub_2213CDC(transform, v20);
  }
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 transform,
                                 (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25, v26);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                            (UnityEngine_Object_o *)ComponentInChildren_object,
                                            0,
                                            0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( ComponentInChildren_object )
    {
      v30 = this->fields.objectRef;
      v31 = EventSvtControl_TypeInfo;
      v32 = x - (float)SLODWORD(ComponentInChildren_object[10].monitor);
      if ( !*(&EventSvtControl_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventSvtControl_TypeInfo, v20, v28);
        v31 = EventSvtControl_TypeInfo;
      }
      v51.fields.x = v32;
      v51.fields.y = y;
      v51.fields.z = z;
      transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v30, v31->static_fields->BASE_MOVE_TIME, v51, 0);
      if ( transform )
      {
        v33 = transform;
        LODWORD(transform[1].monitor) = 3;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        v33[3].monitor = gameObject;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v33[3].monitor,
          (int32_t)gameObject,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
        v41 = StringLiteral_4098/*"CallPerformanceEndAction"*/;
        v33[3].fields.m_CachedPtr = StringLiteral_4098/*"CallPerformanceEndAction"*/;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33[3].fields, v41, v42, v43, v44, v45, v46, v47);
        return;
      }
    }
    goto LABEL_28;
  }
  v29 = *p_performanceEndAction;
  if ( *p_performanceEndAction )
  {
    method_code = v29->fields.method_code;
    v8 = v29->fields.method;
    invoke_impl = (void (__fastcall *)(intptr_t, intptr_t))v29->fields.invoke_impl;
    goto LABEL_21;
  }
}


void EventSvtControl__EndPlay(EventSvtControl_o *this, const MethodInfo *method)
{
  EventSvtControl_o *v2; // x19
  struct ServantVoiceData_array *randomVoiceList; // x8
  int v4; // w9
  ServantVoiceData_o *v5; // x8
  ServantVoicePerformance_o *additionalPerformances; // x20
  System_Action_o *v7; // x21
  const MethodInfo *v8; // x5

  v2 = this;
  if ( (byte_596A7A8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (EventSvtControl_o *)sub_2213A60(&Method_EventSvtControl_EndPlayProc__);
    byte_596A7A8 = 1;
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
      if ( (unsigned int)v4 >= LODWORD(randomVoiceList->max_length) )
        sub_2213CE4(this);
      v5 = randomVoiceList->m_Items[v4];
      if ( !v5 )
LABEL_10:
        sub_2213CDC(this, method);
      additionalPerformances = v5->fields.additionalPerformances;
      v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)v2, Method_EventSvtControl_EndPlayProc__, 0);
      EventSvtControl__PlayPerformance(v2, additionalPerformances, 2, 1, v7, v8);
    }
  }
}


void EventSvtControl__EndPlayProc(EventSvtControl_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  EventSvtControl_o *v8; // x19
  __int64 playCnt; // x8
  struct ServantVoiceData_array *randomVoiceList; // x9
  ServantVoiceData_o *v11; // x8
  MissionNaviTransitionBoardItem_o *p_player; // x0
  MissionNaviTransitionBoardItem_o *p_callbakEndPlay; // x0
  System_Action_o *callbakEndPlay; // x20
  MissionNaviTransitionBoardItem_o *p_callbackStopVoice; // x0
  struct System_Action_o *callbackStopVoice; // x20

  v8 = this;
  if ( (byte_596A7A9 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25146/*"svtVoicePlay"*/);
    this = (EventSvtControl_o *)sub_2213A60(&StringLiteral_5655/*"END_PLAY"*/);
    byte_596A7A9 = 1;
  }
  playCnt = v8->fields.playCnt;
  if ( (int)playCnt < v8->fields.maxPlayCnt )
  {
    randomVoiceList = v8->fields.randomVoiceList;
    if ( randomVoiceList )
    {
      if ( (unsigned int)playCnt >= LODWORD(randomVoiceList->max_length) )
        sub_2213CE4(this);
      v11 = randomVoiceList->m_Items[playCnt];
      if ( v11 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v8,
          (System_String_o *)StringLiteral_25146/*"svtVoicePlay"*/,
          v11->fields.delay,
          0);
        return;
      }
    }
LABEL_16:
    sub_2213CDC(this, method);
  }
  p_player = (MissionNaviTransitionBoardItem_o *)&v8->fields.player;
  if ( v8->fields.player )
  {
    p_player->klass = 0;
    sub_2213A04(p_player, 0, v2, v3, v4, v5, v6, v7);
  }
  p_callbakEndPlay = (MissionNaviTransitionBoardItem_o *)&v8->fields.callbakEndPlay;
  callbakEndPlay = v8->fields.callbakEndPlay;
  v8->fields.playCnt = 0;
  *(_WORD *)&v8->fields.isUnSkippable = 0;
  v8->fields.isPlayBoxGachaVoice = 0;
  if ( callbakEndPlay )
  {
    p_callbakEndPlay->klass = 0;
    sub_2213A04(p_callbakEndPlay, 0, v2, v3, v4, v5, v6, v7);
    ActionExtensions__Call(callbakEndPlay, 0);
  }
  else
  {
    p_callbackStopVoice = (MissionNaviTransitionBoardItem_o *)&v8->fields.callbackStopVoice;
    callbackStopVoice = v8->fields.callbackStopVoice;
    if ( callbackStopVoice )
    {
      p_callbackStopVoice->klass = 0;
      sub_2213A04(p_callbackStopVoice, 0, v2, v3, v4, v5, v6, v7);
      ((void (__fastcall *)(intptr_t, intptr_t))callbackStopVoice->fields.invoke_impl)(
        callbackStopVoice->fields.method_code,
        callbackStopVoice->fields.method);
    }
    else
    {
      this = (EventSvtControl_o *)v8->fields.fsm;
      if ( !this )
        goto LABEL_16;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5655/*"END_PLAY"*/, 0);
    }
  }
}


bool EventSvtControl__GetIsUnSkippableByVoiceId(
        EventSvtControl_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListBoxGacha; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  bool v8; // w20
  Il2CppObject *current; // x23
  int monitor; // w8
  __int64 v11; // x24
  __int64 v12; // x26
  bool v13; // w19
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596A7B4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    byte_596A7B4 = 1;
  }
  voiceListBoxGacha = this->fields.voiceListBoxGacha;
  memset(&v16, 0, sizeof(v16));
  if ( !voiceListBoxGacha )
    sub_2213CDC(0, voiceId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)voiceListBoxGacha,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v16 = v15;
  v15.fields._list = 0;
  *(_QWORD *)&v15.fields._index = &v16;
  do
  {
LABEL_5:
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    v8 = v6;
    if ( !v6 )
    {
      v13 = 0;
      goto LABEL_15;
    }
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_2213CDC(v6, v7);
    monitor = (int)v16.fields._current[1].monitor;
  }
  while ( monitor < 1 );
  v11 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v11 >= monitor )
      sub_2213CE4(v6);
    v12 = *((_QWORD *)&current[2].klass + v11);
    if ( !v12 )
      sub_2213CDC(v6, v7);
    v6 = System_String__op_Equality(*(System_String_o **)(v12 + 16), voiceId, 0);
    if ( v6 )
      break;
    monitor = (int)current[1].monitor;
    if ( (int)++v11 >= monitor )
      goto LABEL_5;
  }
  v13 = *(_BYTE *)(v12 + 68) != 0;
LABEL_15:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  return v8 && v13;
}


bool EventSvtControl__HasPlayableVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *servantVoiceGroupData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantVoiceData____o *v3; // x20
  Il2CppObject *Master_object; // x21
  const MethodInfo *v6; // x4
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+18h] [xbp-48h] BYREF
  VoicePlayCondEntity_o *condEnt; // [xsp+38h] [xbp-28h] BYREF

  v3 = servantVoiceGroupData;
  if ( (byte_596A7B6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    byte_596A7B6 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  condEnt = 0;
  if ( v3 )
  {
    if ( v3->fields._size )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, servantVoiceGroupData, method);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v8,
        (System_Collections_Generic_List_object__o *)v3,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
      do
        LOBYTE(v3) = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &v8,
                       (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
      while ( ((unsigned __int8)v3 & 1) != 0
           && !EventSvtControl__IsPlayableVoice(
                 this,
                 (VoicePlayCondMaster_o *)Master_object,
                 (ServantVoiceData_array *)v8.fields._current,
                 &condEnt,
                 v6) );
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v8,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    }
    else
    {
      LOBYTE(v3) = 0;
    }
  }
  return (unsigned __int8)v3 & 1;
}


bool EventSvtControl__IsPlayableVoice(
        EventSvtControl_o *this,
        VoicePlayCondMaster_o *voicePlayCondMst,
        ServantVoiceData_array *voiceData,
        VoicePlayCondEntity_o **condEnt,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v12; // x0
  __int64 v13; // x1
  il2cpp_array_size_t max_length; // x8
  ServantVoiceData_o *v15; // x8

  *condEnt = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)condEnt,
    0,
    (System_String_o *)voiceData,
    (System_String_o *)condEnt,
    (int32_t)method,
    v5,
    v6,
    v7);
  if ( !voiceData )
    return 0;
  max_length = voiceData->max_length;
  if ( !max_length )
    return 0;
  if ( !(_DWORD)max_length )
    sub_2213CE4(v12);
  v15 = voiceData->m_Items[0];
  if ( !v15 || !voicePlayCondMst )
    sub_2213CDC(v12, v13);
  return VoicePlayCondMaster__isVoicePlay_50302056(
           voicePlayCondMst,
           this->fields.svtId,
           v15->fields.id,
           condEnt,
           0,
           -1,
           -1,
           0,
           0);
}


void EventSvtControl__OnDestroy(EventSvtControl_o *this, const MethodInfo *method)
{
  this->fields.isDead = 1;
}


// local variable allocation has failed, the output may be wrong!
void EventSvtControl__PlayEventCraftVoice(
        EventSvtControl_o *this,
        int32_t svtId,
        System_String_array *targetVoiceIds,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *v6; // x21
  int32_t v7; // w22
  struct SePlayer_o *player; // x8
  VoicePlayCondMaster_o *Master_object; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int max_length; // w8
  Il2CppObject *Item; // x21
  VoicePlayCondMaster_o *v19; // x24
  System_String_o *v20; // x1
  unsigned __int64 v21; // x29
  __int64 v22; // x19
  EventSvtControl___c__DisplayClass62_0_c **v23; // x20
  System_String_o **m_Items; // x23
  __int64 v25; // x26
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x1
  System_String_o **v33; // x25
  System_String_o **v34; // x24
  __int64 v35; // x23
  EventSvtControl___c__DisplayClass62_0_c **v36; // x19
  System_String_array *v37; // x20
  int32_t v38; // w21
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListCraft; // x22
  System_Func_object__bool__o *v40; // x28
  System_Collections_Generic_List_T__o *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  int32_t v52; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  _BOOL8 v60; // x0
  __int64 v61; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  __int64 v64; // x23
  __int64 v65; // x8
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  __int64 v72; // x0
  const MethodInfo *v73; // x1
  System_Action_o *v74; // [xsp+0h] [xbp-B0h]
  System_Collections_Generic_List_object__o *v75; // [xsp+8h] [xbp-A8h]
  VoicePlayCondMaster_o *v76; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+30h] [xbp-80h] BYREF

  v6 = targetVoiceIds;
  v7 = svtId;
  if ( (byte_596A7B2 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_ServantVoiceData_____);
    sub_2213A60(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_2213A60(&System_Func_ServantVoiceData____bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&Method_EventSvtControl___c__DisplayClass62_0__PlayEventCraftVoice_b__0__);
    sub_2213A60(&EventSvtControl___c__DisplayClass62_0_TypeInfo);
    byte_596A7B2 = 1;
  }
  player = this->fields.player;
  memset(&v78, 0, sizeof(v78));
  if ( player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !v6 || !v6->max_length )
    return;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId, targetVoiceIds);
  Master_object = (VoicePlayCondMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  max_length = v6->max_length;
  if ( max_length < 2 )
  {
    if ( max_length )
    {
      Item = (Il2CppObject *)v6->m_Items[0];
      goto LABEL_27;
    }
LABEL_45:
    sub_2213CE4(Master_object);
  }
  v74 = callback;
  v19 = Master_object;
  v75 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v75,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)v6->max_length >= 1 )
  {
    v21 = 0;
    v22 = (unsigned int)v6->max_length;
    v23 = &EventSvtControl___c__DisplayClass62_0_TypeInfo;
    m_Items = v6->m_Items;
    v76 = v19;
    do
    {
      v25 = sub_2213CCC(*v23);
      System_Object___ctor((Il2CppObject *)v25, 0);
      if ( v21 >= LODWORD(v6->max_length) )
        goto LABEL_45;
      if ( !v25 )
        goto LABEL_44;
      v32 = m_Items[v21];
      *(_QWORD *)(v25 + 16) = v32;
      v33 = (System_String_o **)(v25 + 16);
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 16), (int32_t)v32, v26, v27, v28, v29, v30, v31);
      if ( !v19 )
        goto LABEL_44;
      Master_object = (VoicePlayCondMaster_o *)VoicePlayCondMaster__isVoicePlay(v19, v7, *v33, 0, -1, -1, 0, 0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v34 = m_Items;
        v35 = v22;
        v36 = v23;
        v37 = v6;
        v38 = v7;
        voiceListCraft = this->fields.voiceListCraft;
        v40 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_ServantVoiceData____bool__TypeInfo);
        System_Func_object__bool____ctor(
          v40,
          (Il2CppObject *)v25,
          Method_EventSvtControl___c__DisplayClass62_0__PlayEventCraftVoice_b__0__,
          0);
        v41 = (System_Collections_Generic_List_T__o *)voiceListCraft;
        v7 = v38;
        v6 = v37;
        v23 = v36;
        v22 = v35;
        m_Items = v34;
        v19 = v76;
        Master_object = (VoicePlayCondMaster_o *)BasicHelper__Any_object_(
                                                   v41,
                                                   (System_Func_T__bool__o *)v40,
                                                   (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_ServantVoiceData_____);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !v75 )
            goto LABEL_44;
          items = v75->fields._items;
          v20 = *v33;
          v49 = Method_System_Collections_Generic_List_string__Add__;
          ++v75->fields._version;
          if ( !items )
            goto LABEL_44;
          size = v75->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v75,
              (Il2CppObject *)v20,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
          }
          else
          {
            v51 = &items->obj.klass + size;
            v75->fields._size = size + 1;
            v51[4] = (Il2CppClass *)v20;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v51 + 4), (int32_t)v20, v42, v43, v44, v45, v46, v47);
          }
        }
      }
    }
    while ( v22 != ++v21 );
  }
  if ( !v75 )
    goto LABEL_44;
  v52 = UnityEngine_Random__Range_83400680(0, v75->fields._size, 0);
  callback = v74;
  Item = System_Collections_Generic_List_object___get_Item(
           v75,
           v52,
           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_27:
  this->fields.callbakEndPlay = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbakEndPlay,
    (int32_t)callback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.randomVoiceList = 0;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.randomVoiceList, 0, v54, v55, v56, v57, v58, v59);
  Master_object = (VoicePlayCondMaster_o *)this->fields.voiceListCraft;
  if ( !Master_object )
LABEL_44:
    sub_2213CDC(Master_object, v20);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v77,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v78 = v77;
  v77.fields._list = 0;
  *(_QWORD *)&v77.fields._index = &v78;
LABEL_29:
  while ( 1 )
  {
    v60 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v78,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v60 )
      break;
    current = v78.fields._current;
    if ( !v78.fields._current )
      sub_2213CDC(v60, v61);
    monitor = (int)v78.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v64 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v64 >= monitor )
          sub_2213CE4(v60);
        v65 = *((_QWORD *)&current[2].klass + v64);
        if ( !v65 )
          sub_2213CDC(v60, v61);
        v60 = System_String__op_Equality(*(System_String_o **)(v65 + 16), (System_String_o *)Item, 0);
        if ( v60 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v64 >= monitor )
          goto LABEL_29;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.randomVoiceList,
        (int32_t)current,
        v66,
        v67,
        v68,
        v69,
        v70,
        v71);
      if ( !*p_randomVoiceList )
        sub_2213CDC(v72, v73);
      this->fields.maxPlayCnt = (*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v73);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v78,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void EventSvtControl__PlayEventRecipeVoice(
        EventSvtControl_o *this,
        int32_t svtId,
        System_String_array *targetVoiceIds,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct SePlayer_o *player; // x8
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v20; // x24
  System_Collections_Generic_List_object__o *v21; // x23
  unsigned __int64 v22; // x26
  __int64 v23; // x28
  System_String_o *v24; // x25
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  int32_t v35; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  _BOOL8 v43; // x0
  __int64 v44; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  __int64 v47; // x24
  __int64 v48; // x8
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  __int64 v55; // x0
  const MethodInfo *v56; // x1
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_596A7B0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A7B0 = 1;
  }
  player = this->fields.player;
  memset(&v58, 0, sizeof(v58));
  if ( player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !targetVoiceIds->max_length )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_41:
    sub_2213CDC(Instance, v11);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( max_length )
    {
      Item = targetVoiceIds->m_Items[0];
      goto LABEL_24;
    }
LABEL_42:
    sub_2213CE4(Instance);
  }
  v20 = (VoicePlayCondMaster_o *)Instance;
  v21 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)targetVoiceIds->max_length >= 1 )
  {
    v22 = 0;
    v23 = (unsigned int)targetVoiceIds->max_length;
    while ( v22 < LODWORD(targetVoiceIds->max_length) )
    {
      if ( !v20 )
        goto LABEL_41;
      v24 = targetVoiceIds->m_Items[v22];
      Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v20, svtId, v24, 0, -1, -1, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v21 )
          goto LABEL_41;
        items = v21->fields._items;
        v32 = Method_System_Collections_Generic_List_string__Add__;
        ++v21->fields._version;
        if ( !items )
          goto LABEL_41;
        size = v21->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            (Il2CppObject *)v24,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + size;
          v21->fields._size = size + 1;
          v34[4] = (Il2CppClass *)v24;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v34 + 4), (int32_t)v24, v25, v26, v27, v28, v29, v30);
        }
      }
      if ( v23 == ++v22 )
        goto LABEL_22;
    }
    goto LABEL_42;
  }
LABEL_22:
  if ( !v21 )
    goto LABEL_41;
  v35 = UnityEngine_Random__Range_83400680(0, v21->fields._size, 0);
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v21,
                              v35,
                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_24:
  this->fields.callbakEndPlay = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbakEndPlay,
    (int32_t)callback,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.randomVoiceList = 0;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.randomVoiceList, 0, v37, v38, v39, v40, v41, v42);
  Instance = (DataManager_o *)this->fields.voiceListRecipe;
  if ( !Instance )
    goto LABEL_41;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v57,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v58 = v57;
  v57.fields._list = 0;
  *(_QWORD *)&v57.fields._index = &v58;
LABEL_26:
  while ( 1 )
  {
    v43 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v58,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v43 )
      break;
    current = v58.fields._current;
    if ( !v58.fields._current )
      sub_2213CDC(v43, v44);
    monitor = (int)v58.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v47 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v47 >= monitor )
          sub_2213CE4(v43);
        v48 = *((_QWORD *)&current[2].klass + v47);
        if ( !v48 )
          sub_2213CDC(v43, v44);
        v43 = System_String__op_Equality(*(System_String_o **)(v48 + 16), Item, 0);
        if ( v43 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v47 >= monitor )
          goto LABEL_26;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.randomVoiceList,
        (int32_t)current,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54);
      if ( !*p_randomVoiceList )
        sub_2213CDC(v55, v56);
      this->fields.maxPlayCnt = (*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v56);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v58,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void EventSvtControl__PlayEventTradeVoice(
        EventSvtControl_o *this,
        int32_t svtId,
        System_String_array *targetVoiceIds,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *v6; // x21
  int32_t v7; // w22
  struct SePlayer_o *player; // x8
  VoicePlayCondMaster_o *Master_object; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int max_length; // w8
  Il2CppObject *Item; // x21
  VoicePlayCondMaster_o *v19; // x24
  System_String_o *v20; // x1
  unsigned __int64 v21; // x29
  __int64 v22; // x19
  EventSvtControl___c__DisplayClass61_0_c **v23; // x20
  System_String_o **m_Items; // x23
  __int64 v25; // x26
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x1
  System_String_o **v33; // x25
  System_String_o **v34; // x24
  __int64 v35; // x23
  EventSvtControl___c__DisplayClass61_0_c **v36; // x19
  System_String_array *v37; // x20
  int32_t v38; // w21
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListTrade; // x22
  System_Func_object__bool__o *v40; // x28
  System_Collections_Generic_List_T__o *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  int32_t v52; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  _BOOL8 v60; // x0
  __int64 v61; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  __int64 v64; // x23
  __int64 v65; // x8
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  __int64 v72; // x0
  const MethodInfo *v73; // x1
  System_Action_o *v74; // [xsp+0h] [xbp-B0h]
  System_Collections_Generic_List_object__o *v75; // [xsp+8h] [xbp-A8h]
  VoicePlayCondMaster_o *v76; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+30h] [xbp-80h] BYREF

  v6 = targetVoiceIds;
  v7 = svtId;
  if ( (byte_596A7B1 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_ServantVoiceData_____);
    sub_2213A60(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_2213A60(&System_Func_ServantVoiceData____bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&Method_EventSvtControl___c__DisplayClass61_0__PlayEventTradeVoice_b__0__);
    sub_2213A60(&EventSvtControl___c__DisplayClass61_0_TypeInfo);
    byte_596A7B1 = 1;
  }
  player = this->fields.player;
  memset(&v78, 0, sizeof(v78));
  if ( player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !v6 || !v6->max_length )
    return;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId, targetVoiceIds);
  Master_object = (VoicePlayCondMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  max_length = v6->max_length;
  if ( max_length < 2 )
  {
    if ( max_length )
    {
      Item = (Il2CppObject *)v6->m_Items[0];
      goto LABEL_27;
    }
LABEL_45:
    sub_2213CE4(Master_object);
  }
  v74 = callback;
  v19 = Master_object;
  v75 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v75,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)v6->max_length >= 1 )
  {
    v21 = 0;
    v22 = (unsigned int)v6->max_length;
    v23 = &EventSvtControl___c__DisplayClass61_0_TypeInfo;
    m_Items = v6->m_Items;
    v76 = v19;
    do
    {
      v25 = sub_2213CCC(*v23);
      System_Object___ctor((Il2CppObject *)v25, 0);
      if ( v21 >= LODWORD(v6->max_length) )
        goto LABEL_45;
      if ( !v25 )
        goto LABEL_44;
      v32 = m_Items[v21];
      *(_QWORD *)(v25 + 16) = v32;
      v33 = (System_String_o **)(v25 + 16);
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 16), (int32_t)v32, v26, v27, v28, v29, v30, v31);
      if ( !v19 )
        goto LABEL_44;
      Master_object = (VoicePlayCondMaster_o *)VoicePlayCondMaster__isVoicePlay(v19, v7, *v33, 0, -1, -1, 0, 0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v34 = m_Items;
        v35 = v22;
        v36 = v23;
        v37 = v6;
        v38 = v7;
        voiceListTrade = this->fields.voiceListTrade;
        v40 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_ServantVoiceData____bool__TypeInfo);
        System_Func_object__bool____ctor(
          v40,
          (Il2CppObject *)v25,
          Method_EventSvtControl___c__DisplayClass61_0__PlayEventTradeVoice_b__0__,
          0);
        v41 = (System_Collections_Generic_List_T__o *)voiceListTrade;
        v7 = v38;
        v6 = v37;
        v23 = v36;
        v22 = v35;
        m_Items = v34;
        v19 = v76;
        Master_object = (VoicePlayCondMaster_o *)BasicHelper__Any_object_(
                                                   v41,
                                                   (System_Func_T__bool__o *)v40,
                                                   (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_ServantVoiceData_____);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !v75 )
            goto LABEL_44;
          items = v75->fields._items;
          v20 = *v33;
          v49 = Method_System_Collections_Generic_List_string__Add__;
          ++v75->fields._version;
          if ( !items )
            goto LABEL_44;
          size = v75->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v75,
              (Il2CppObject *)v20,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
          }
          else
          {
            v51 = &items->obj.klass + size;
            v75->fields._size = size + 1;
            v51[4] = (Il2CppClass *)v20;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v51 + 4), (int32_t)v20, v42, v43, v44, v45, v46, v47);
          }
        }
      }
    }
    while ( v22 != ++v21 );
  }
  if ( !v75 )
    goto LABEL_44;
  v52 = UnityEngine_Random__Range_83400680(0, v75->fields._size, 0);
  callback = v74;
  Item = System_Collections_Generic_List_object___get_Item(
           v75,
           v52,
           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_27:
  this->fields.callbakEndPlay = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbakEndPlay,
    (int32_t)callback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.randomVoiceList = 0;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.randomVoiceList, 0, v54, v55, v56, v57, v58, v59);
  Master_object = (VoicePlayCondMaster_o *)this->fields.voiceListTrade;
  if ( !Master_object )
LABEL_44:
    sub_2213CDC(Master_object, v20);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v77,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v78 = v77;
  v77.fields._list = 0;
  *(_QWORD *)&v77.fields._index = &v78;
LABEL_29:
  while ( 1 )
  {
    v60 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v78,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v60 )
      break;
    current = v78.fields._current;
    if ( !v78.fields._current )
      sub_2213CDC(v60, v61);
    monitor = (int)v78.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v64 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v64 >= monitor )
          sub_2213CE4(v60);
        v65 = *((_QWORD *)&current[2].klass + v64);
        if ( !v65 )
          sub_2213CDC(v60, v61);
        v60 = System_String__op_Equality(*(System_String_o **)(v65 + 16), (System_String_o *)Item, 0);
        if ( v60 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v64 >= monitor )
          goto LABEL_29;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.randomVoiceList,
        (int32_t)current,
        v66,
        v67,
        v68,
        v69,
        v70,
        v71);
      if ( !*p_randomVoiceList )
        sub_2213CDC(v72, v73);
      this->fields.maxPlayCnt = (*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v73);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v78,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


void EventSvtControl__PlayPerformance(
        EventSvtControl_o *this,
        ServantVoicePerformance_o *performances,
        int32_t timing,
        bool isWaitPerformance,
        System_Action_o *playEndAction,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  struct UnityEngine_GameObject_o **p_objectRef; // x24
  UnityEngine_Object_o *objectRef; // x25
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_GameObject_o *performanceRoot; // x0
  System_String_o *assetName; // x25
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v20; // x2
  UnityEngine_GameObject_o *Effect; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  __int64 v29; // x2
  UnityEngine_Object_o *v30; // x25
  UnityEngine_Object_o *animationRef; // x25
  Il2CppObject *ComponentInChildren_object; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  __int64 v39; // x1
  __int64 v40; // x2
  UnityEngine_Object_o *v41; // x24
  struct ServantVoicePerformance_ServantVoicePerformanceDetail_o **p_afterPerformance; // x8
  struct ServantVoicePerformance_ServantVoicePerformanceDetail_o *v43; // x22
  const MethodInfo *v44; // x4
  System_Collections_IEnumerator_o *v45; // x1

  if ( (byte_596A7B7 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A7B7 = 1;
  }
  if ( !this->fields.isPlayBoxGachaVoice
    || !performances
    || System_String__IsNullOrEmpty(performances->fields.assetName, 0) )
  {
    goto LABEL_6;
  }
  p_objectRef = &this->fields.objectRef;
  objectRef = (UnityEngine_Object_o *)this->fields.objectRef;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
  if ( UnityEngine_Object__op_Equality(objectRef, 0, 0) )
  {
    performanceRoot = this->fields.performanceRoot;
    if ( !performanceRoot )
      goto LABEL_32;
    assetName = performances->fields.assetName;
    transform = UnityEngine_GameObject__get_transform(performanceRoot, 0);
    Effect = BoxGachaResultEffectComponent__getEffect(assetName, transform, v20);
    *p_objectRef = Effect;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.objectRef,
      (int32_t)Effect,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    v30 = (UnityEngine_Object_o *)*p_objectRef;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28, v29);
    if ( !UnityEngine_Object__op_Implicit(v30, 0) )
      goto LABEL_6;
  }
  animationRef = (UnityEngine_Object_o *)this->fields.animationRef;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
  if ( !UnityEngine_Object__op_Equality(animationRef, 0, 0) )
    goto LABEL_23;
  performanceRoot = *p_objectRef;
  if ( !*p_objectRef )
LABEL_32:
    sub_2213CDC(performanceRoot, v15);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 performanceRoot,
                                 (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
  this->fields.animationRef = (struct UnityEngine_Animation_o *)ComponentInChildren_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.animationRef,
    (int32_t)ComponentInChildren_object,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v41 = (UnityEngine_Object_o *)this->fields.animationRef;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39, v40);
  if ( !UnityEngine_Object__op_Implicit(v41, 0) )
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
  v43 = *p_afterPerformance;
  if ( *p_afterPerformance && !System_String__IsNullOrEmpty(v43->fields.name, 0) )
  {
    v45 = EventSvtControl__PlayPerformanceProc(
            this,
            v43->fields.name,
            v43->fields.delay,
            isWaitPerformance,
            playEndAction,
            v44);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v45, 0);
    return;
  }
LABEL_6:
  if ( playEndAction )
    ((void (__fastcall *)(intptr_t, intptr_t))playEndAction->fields.invoke_impl)(
      playEndAction->fields.method_code,
      playEndAction->fields.method);
}


System_Collections_IEnumerator_o *EventSvtControl__PlayPerformanceProc(
        EventSvtControl_o *this,
        System_String_o *animName,
        float delay,
        bool isWaitPerformance,
        System_Action_o *playEndAction,
        const MethodInfo *method)
{
  bool v11; // w23
  __int64 v12; // x22
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_596A7B8 & 1) == 0 )
  {
    sub_2213A60(&EventSvtControl__PlayPerformanceProc_d__74_TypeInfo);
    byte_596A7B8 = 1;
  }
  v11 = isWaitPerformance;
  v12 = sub_2213CCC(EventSvtControl__PlayPerformanceProc_d__74_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  *(_DWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 32), (int32_t)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v12 + 40) = animName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 40), (int32_t)animName, v19, v20, v21, v22, v23, v24);
  *(float *)(v12 + 48) = delay;
  *(_BYTE *)(v12 + 64) = v11;
  *(_QWORD *)(v12 + 72) = playEndAction;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 72), (int32_t)playEndAction, v25, v26, v27, v28, v29, v30);
  return (System_Collections_IEnumerator_o *)v12;
}


// local variable allocation has failed, the output may be wrong!
void EventSvtControl__PlayTreasureBoxVoice(
        EventSvtControl_o *this,
        int32_t svtId,
        System_String_array *targetVoiceIds,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct SePlayer_o *player; // x8
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v20; // x24
  System_Collections_Generic_List_object__o *v21; // x23
  unsigned __int64 v22; // x26
  __int64 v23; // x28
  System_String_o *v24; // x25
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  int32_t v35; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  _BOOL8 v43; // x0
  __int64 v44; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  __int64 v47; // x24
  __int64 v48; // x8
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  __int64 v55; // x0
  const MethodInfo *v56; // x1
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_596A7AF & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A7AF = 1;
  }
  player = this->fields.player;
  memset(&v58, 0, sizeof(v58));
  if ( player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !targetVoiceIds->max_length )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_41:
    sub_2213CDC(Instance, v11);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( max_length )
    {
      Item = targetVoiceIds->m_Items[0];
      goto LABEL_24;
    }
LABEL_42:
    sub_2213CE4(Instance);
  }
  v20 = (VoicePlayCondMaster_o *)Instance;
  v21 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)targetVoiceIds->max_length >= 1 )
  {
    v22 = 0;
    v23 = (unsigned int)targetVoiceIds->max_length;
    while ( v22 < LODWORD(targetVoiceIds->max_length) )
    {
      if ( !v20 )
        goto LABEL_41;
      v24 = targetVoiceIds->m_Items[v22];
      Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v20, svtId, v24, 0, -1, -1, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v21 )
          goto LABEL_41;
        items = v21->fields._items;
        v32 = Method_System_Collections_Generic_List_string__Add__;
        ++v21->fields._version;
        if ( !items )
          goto LABEL_41;
        size = v21->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            (Il2CppObject *)v24,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + size;
          v21->fields._size = size + 1;
          v34[4] = (Il2CppClass *)v24;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v34 + 4), (int32_t)v24, v25, v26, v27, v28, v29, v30);
        }
      }
      if ( v23 == ++v22 )
        goto LABEL_22;
    }
    goto LABEL_42;
  }
LABEL_22:
  if ( !v21 )
    goto LABEL_41;
  v35 = UnityEngine_Random__Range_83400680(0, v21->fields._size, 0);
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v21,
                              v35,
                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_24:
  this->fields.callbakEndPlay = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbakEndPlay,
    (int32_t)callback,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.randomVoiceList = 0;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.randomVoiceList, 0, v37, v38, v39, v40, v41, v42);
  Instance = (DataManager_o *)this->fields.voiceListTreasureBox;
  if ( !Instance )
    goto LABEL_41;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v57,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v58 = v57;
  v57.fields._list = 0;
  *(_QWORD *)&v57.fields._index = &v58;
LABEL_26:
  while ( 1 )
  {
    v43 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v58,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v43 )
      break;
    current = v58.fields._current;
    if ( !v58.fields._current )
      sub_2213CDC(v43, v44);
    monitor = (int)v58.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v47 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v47 >= monitor )
          sub_2213CE4(v43);
        v48 = *((_QWORD *)&current[2].klass + v47);
        if ( !v48 )
          sub_2213CDC(v43, v44);
        v43 = System_String__op_Equality(*(System_String_o **)(v48 + 16), Item, 0);
        if ( v43 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v47 >= monitor )
          goto LABEL_26;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.randomVoiceList,
        (int32_t)current,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54);
      if ( !*p_randomVoiceList )
        sub_2213CDC(v55, v56);
      this->fields.maxPlayCnt = (*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v56);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v58,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


void EventSvtControl__ReleasePerformance(EventSvtControl_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *objectRef; // x19

  if ( (byte_596A7BA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A7BA = 1;
  }
  this->fields.animationRef = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.animationRef, 0, v2, v3, v4, v5, v6, v7);
  objectRef = (UnityEngine_Object_o *)this->fields.objectRef;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  UnityEngine_Object__Destroy_83459800(objectRef, 0);
}


bool EventSvtControl__SetBoxGachaTalkInfo(
        EventSvtControl_o *this,
        int32_t svtId,
        BoxGachaTalkEntity_o *talkEntity,
        BoxGachaTalkInfo_o **info,
        const MethodInfo *method)
{
  BoxGachaTalkInfo_o *v8; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
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
  unsigned __int64 v31; // x24
  int32_t v32; // w22
  System_String_o *v33; // x23
  __int128 v34; // q0
  __int64 Item; // x0
  __int64 v36; // x1
  Il2CppObject *v37; // x20
  int v38; // w8
  int j; // w27
  __int64 v40; // x25
  struct System_Collections_Generic_List_string__o *beforeVoiceIdList; // x8
  il2cpp_array_size_t max_length; // [xsp+0h] [xbp-C0h]
  struct System_String_array *aftVoiceIds; // [xsp+8h] [xbp-B8h]
  struct System_String_array *v45; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_596A7AE & 1) == 0 )
  {
    sub_2213A60(&BoxGachaTalkInfo_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A7AE = 1;
  }
  memset(&v48, 0, sizeof(v48));
  v8 = (BoxGachaTalkInfo_o *)sub_2213CCC(BoxGachaTalkInfo_TypeInfo);
  BoxGachaTalkInfo___ctor(v8, 0);
  *info = v8;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)info, (int32_t)v8, v9, v10, v11, v12, v13, v14);
  if ( !this->fields.voiceListBoxGacha )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v18 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !talkEntity )
    goto LABEL_68;
  befVoiceIds = talkEntity->fields.befVoiceIds;
  if ( !befVoiceIds )
    goto LABEL_68;
  max_length = befVoiceIds->max_length;
  aftVoiceIds = talkEntity->fields.aftVoiceIds;
  if ( (int)max_length >= 1 )
  {
    v20 = 0;
    v45 = befVoiceIds;
    while ( v20 < LODWORD(befVoiceIds->max_length) )
    {
      Instance = (DataManager_o *)this->fields.voiceListBoxGacha;
      if ( !Instance )
        goto LABEL_68;
      v21 = befVoiceIds->m_Items[v20];
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v47,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
      v48 = v47;
      v47.fields._list = 0;
      *(_QWORD *)&v47.fields._index = &v48;
      while ( 1 )
      {
        isVoicePlay = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v48,
                        (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
        if ( !isVoicePlay )
          break;
        current = v48.fields._current;
        if ( !v48.fields._current )
          sub_2213CDC(isVoicePlay, v23);
        monitor = (int)v48.fields._current[1].monitor;
        if ( monitor >= 1 )
        {
          for ( i = 0; i < monitor; ++i )
          {
            if ( i >= (unsigned int)monitor )
              sub_2213CE4(isVoicePlay);
            v27 = *((_QWORD *)&current[2].klass + i);
            if ( !v27 )
              sub_2213CDC(isVoicePlay, v23);
            isVoicePlay = System_String__op_Equality(*(System_String_o **)(v27 + 16), v21, 0);
            if ( isVoicePlay )
            {
              if ( !MasterData_object )
                sub_2213CDC(isVoicePlay, v23);
              isVoicePlay = VoicePlayCondMaster__isVoicePlay(
                              (VoicePlayCondMaster_o *)MasterData_object,
                              svtId,
                              v21,
                              0,
                              -1,
                              -1,
                              0,
                              0);
              if ( isVoicePlay )
              {
                if ( !*info )
                  sub_2213CDC(0, v23);
                BoxGachaTalkInfo__SetBeforeGachaTalkInfo(
                  *info,
                  *(System_String_o **)(v27 + 16),
                  *(System_String_o **)(v27 + 48),
                  0);
                if ( !v18
                  || (items = v18->fields._items,
                      v29 = Method_System_Collections_Generic_List_int__Add__,
                      ++v18->fields._version,
                      !items) )
                {
                  sub_2213CDC(isVoicePlay, v23);
                }
                size = v18->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v18,
                    v20,
                    *(const MethodInfo_4467270 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
                }
                else
                {
                  v18->fields._size = size + 1;
                  items->m_Items[size] = v20;
                }
              }
            }
            monitor = (int)current[1].monitor;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v48,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
      befVoiceIds = v45;
      if ( ++v20 == (unsigned int)max_length )
        goto LABEL_37;
    }
LABEL_69:
    sub_2213CE4(Instance);
  }
LABEL_37:
  if ( !v18 || !v18->fields._size )
    return 0;
  if ( (int)max_length >= 1 )
  {
    if ( aftVoiceIds )
    {
      v31 = 0;
      v32 = 0;
      while ( v31 < LODWORD(aftVoiceIds->max_length) )
      {
        Instance = (DataManager_o *)this->fields.voiceListBoxGacha;
        if ( !Instance )
          goto LABEL_68;
        v33 = aftVoiceIds->m_Items[v31];
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v47,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v34 = *(_OWORD *)&v47.fields._list;
        v47.fields._list = 0;
        *(_QWORD *)&v47.fields._index = &v48;
        *(_OWORD *)&v48.fields._list = v34;
        v48.fields._current = v47.fields._current;
        while ( 1 )
        {
          Item = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v48,
                   (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( (Item & 1) == 0 )
            break;
          v37 = v48.fields._current;
          if ( !v48.fields._current )
            sub_2213CDC(Item, v36);
          v38 = (int)v48.fields._current[1].monitor;
          if ( v38 >= 1 )
          {
            for ( j = 0; j < v38; ++j )
            {
              if ( j >= (unsigned int)v38 )
                sub_2213CE4(Item);
              v40 = *((_QWORD *)&v37[2].klass + j);
              if ( !v40 )
                sub_2213CDC(Item, v36);
              Item = System_String__op_Equality(*(System_String_o **)(v40 + 16), v33, 0);
              if ( (Item & 1) != 0 )
              {
                Item = System_Collections_Generic_List_int___get_Item(
                         v18,
                         v32,
                         (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
                if ( v31 == (unsigned int)Item )
                {
                  if ( !*info )
                    sub_2213CDC(0, v36);
                  BoxGachaTalkInfo__SetAfterGachaTalkInfo(
                    *info,
                    *(System_String_o **)(v40 + 16),
                    *(System_String_o **)(v40 + 48),
                    0);
                  ++v32;
                }
              }
              v38 = (int)v37[1].monitor;
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v48,
          (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        if ( ++v31 == (unsigned int)max_length )
          goto LABEL_64;
      }
      goto LABEL_69;
    }
LABEL_68:
    sub_2213CDC(Instance, v16);
  }
LABEL_64:
  if ( !*info )
    goto LABEL_68;
  beforeVoiceIdList = (*info)->fields.beforeVoiceIdList;
  if ( !beforeVoiceIdList )
    goto LABEL_68;
  return beforeVoiceIdList->fields._size > 0;
}


void EventSvtControl__SetCraftSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listCraft,
        System_String_o *assetName,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o **p_asstName; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  MissionNaviTransitionBoardItem_o *v17; // x0
  int32_t v18; // w1

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.asstName,
    (int32_t)assetName,
    assetName,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  if ( listCraft )
  {
    p_asstName[17] = (struct System_String_o *)listCraft;
    v17 = (MissionNaviTransitionBoardItem_o *)(p_asstName + 17);
    v18 = (int)listCraft;
  }
  else
  {
    v17 = (MissionNaviTransitionBoardItem_o *)(p_asstName + 17);
    v18 = 0;
    p_asstName[17] = 0;
  }
  sub_2213A04(v17, v18, v11, v12, v13, v14, v15, v16);
  this->fields.beforeVoiceIdx = -1;
}


void EventSvtControl__SetDiggingSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listDigging,
        System_String_o *assetName,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o **p_asstName; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  MissionNaviTransitionBoardItem_o *v17; // x0
  int32_t v18; // w1

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.asstName,
    (int32_t)assetName,
    assetName,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  if ( listDigging )
  {
    p_asstName[14] = (struct System_String_o *)listDigging;
    v17 = (MissionNaviTransitionBoardItem_o *)(p_asstName + 14);
    v18 = (int)listDigging;
  }
  else
  {
    v17 = (MissionNaviTransitionBoardItem_o *)(p_asstName + 14);
    v18 = 0;
    p_asstName[14] = 0;
  }
  sub_2213A04(v17, v18, v11, v12, v13, v14, v15, v16);
  this->fields.beforeVoiceIdx = -1;
}


void EventSvtControl__SetOverwriteSpecialSvtVoiceId(
        EventSvtControl_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.specialSvtVoice = voiceId;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.specialSvtVoice,
    (int32_t)voiceId,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventSvtControl__SetOverwriteSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listOverwrite,
        System_String_o *assetName,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *v9; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  v9 = (MissionNaviTransitionBoardItem_o *)this;
  this->fields.playCnt = 0;
  this->fields.asstName = assetName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.asstName,
    (int32_t)assetName,
    assetName,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  v9[1].fields.sortValue0 = (int64_t)listOverwrite;
  v9 = (MissionNaviTransitionBoardItem_o *)((char *)v9 + 200);
  sub_2213A04(v9, (int32_t)listOverwrite, v10, v11, v12, v13, v14, v15);
  LODWORD(v9[-1].fields.sortValue1B) = -1;
}


void EventSvtControl__SetRecipeSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listRecipe,
        System_String_o *assetName,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o **p_asstName; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  MissionNaviTransitionBoardItem_o *v17; // x0
  int32_t v18; // w1

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.asstName,
    (int32_t)assetName,
    assetName,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  if ( listRecipe )
  {
    p_asstName[15] = (struct System_String_o *)listRecipe;
    v17 = (MissionNaviTransitionBoardItem_o *)(p_asstName + 15);
    v18 = (int)listRecipe;
  }
  else
  {
    v17 = (MissionNaviTransitionBoardItem_o *)(p_asstName + 15);
    v18 = 0;
    p_asstName[15] = 0;
  }
  sub_2213A04(v17, v18, v11, v12, v13, v14, v15, v16);
  this->fields.beforeVoiceIdx = -1;
}


void EventSvtControl__SetSvtFigureCollect(
        EventSvtControl_o *this,
        System_Collections_Generic_List_StandFigureCollect__o *collects,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.standFigureCollectList = collects;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.standFigureCollectList,
    (int32_t)collects,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventSvtControl__SetTradeSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listTrade,
        System_String_o *assetName,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o **p_asstName; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  MissionNaviTransitionBoardItem_o *v17; // x0
  int32_t v18; // w1

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.asstName,
    (int32_t)assetName,
    assetName,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  if ( listTrade )
  {
    p_asstName[16] = (struct System_String_o *)listTrade;
    v17 = (MissionNaviTransitionBoardItem_o *)(p_asstName + 16);
    v18 = (int)listTrade;
  }
  else
  {
    v17 = (MissionNaviTransitionBoardItem_o *)(p_asstName + 16);
    v18 = 0;
    p_asstName[16] = 0;
  }
  sub_2213A04(v17, v18, v11, v12, v13, v14, v15, v16);
  this->fields.beforeVoiceIdx = -1;
}


void EventSvtControl__SetTreasureBoxSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listTreasureBox,
        System_String_o *assetName,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o **p_asstName; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  MissionNaviTransitionBoardItem_o *v17; // x0
  int32_t v18; // w1

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.asstName,
    (int32_t)assetName,
    assetName,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  if ( listTreasureBox )
  {
    p_asstName[13] = (struct System_String_o *)listTreasureBox;
    v17 = (MissionNaviTransitionBoardItem_o *)(p_asstName + 13);
    v18 = (int)listTreasureBox;
  }
  else
  {
    v17 = (MissionNaviTransitionBoardItem_o *)(p_asstName + 13);
    v18 = 0;
    p_asstName[13] = 0;
  }
  sub_2213A04(v17, v18, v11, v12, v13, v14, v15, v16);
  this->fields.beforeVoiceIdx = -1;
}


void EventSvtControl__SvtVoicePlayProc(EventSvtControl_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  EventSvtControl_o *v8; // x19
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 playCnt; // x9
  ServantVoiceData_o *v11; // x8
  struct System_String_o *id; // x1
  struct ServantVoiceData_array *v13; // x8
  __int64 v14; // x9
  int32_t asstName; // w20
  float FadeTime; // s8
  struct ServantVoiceData_array *v17; // x8
  __int64 v18; // x9
  ServantVoiceData_o *v19; // x8
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  int32_t face; // w20
  struct ServantVoiceData_array *v22; // x8
  __int64 v23; // x9
  ServantVoiceData_o *v24; // x8
  System_String_o *v25; // x20
  System_String_o *vcName; // x21
  float volume; // s8
  System_Action_o *v28; // x22
  __int64 v29; // x1
  __int64 v30; // x2
  SePlayer_o *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  const MethodInfo *v38; // x5
  struct ServantVoiceData_array *v39; // x8
  __int64 v40; // x9
  ServantVoiceData_o *v41; // x8
  struct ServantVoiceData_array *v42; // x8
  __int64 v43; // x9
  ServantVoiceData_o *v44; // x8
  struct System_Int32_array *multiFace; // x23
  unsigned __int64 v46; // x21
  int32_t v47; // w22
  const MethodInfo_4483994 *v48; // x2
  int32_t v49; // w1

  v8 = this;
  if ( (byte_596A7A7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_2213A60(&Method_EventSvtControl_EndPlay__);
    sub_2213A60(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    this = (EventSvtControl_o *)sub_2213A60(&SoundManager_TypeInfo);
    byte_596A7A7 = 1;
  }
  randomVoiceList = v8->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_47;
  playCnt = v8->fields.playCnt;
  if ( (unsigned int)playCnt >= LODWORD(randomVoiceList->max_length) )
    goto LABEL_48;
  v11 = randomVoiceList->m_Items[playCnt];
  if ( !v11 )
    goto LABEL_47;
  id = v11->fields.id;
  v8->fields.vcName = id;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.vcName, (int32_t)id, v2, v3, v4, v5, v6, v7);
  v13 = v8->fields.randomVoiceList;
  if ( !v13 )
    goto LABEL_47;
  v14 = v8->fields.playCnt;
  if ( (unsigned int)v14 >= LODWORD(v13->max_length) )
    goto LABEL_48;
  this = (EventSvtControl_o *)v13->m_Items[v14];
  if ( !this )
    goto LABEL_47;
  asstName = (int32_t)this->fields.asstName;
  v8->fields.isUnSkippable = BYTE4(this->fields.vcName);
  FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0);
  this = (EventSvtControl_o *)v8->fields.standFigureCollectList;
  if ( !this
    || (this = (EventSvtControl_o *)System_Linq_Enumerable__Count_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                      (const MethodInfo_3879804 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___),
        (int)this < 2) )
  {
    v17 = v8->fields.randomVoiceList;
    if ( !v17 )
      goto LABEL_47;
    v18 = v8->fields.playCnt;
    if ( (unsigned int)v18 >= LODWORD(v17->max_length) )
      goto LABEL_48;
    v19 = v17->m_Items[v18];
    if ( !v19 )
      goto LABEL_47;
    standFigureCollectList = (System_Collections_Generic_List_object__o *)v8->fields.standFigureCollectList;
    if ( standFigureCollectList )
    {
      face = v19->fields.face;
      this = (EventSvtControl_o *)System_Collections_Generic_List_object___get_Item(
                                    standFigureCollectList,
                                    0,
                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( !this )
        goto LABEL_47;
      v22 = v8->fields.randomVoiceList;
      if ( !v22 )
        goto LABEL_47;
      v23 = v8->fields.playCnt;
      if ( (unsigned int)v23 >= LODWORD(v22->max_length) )
        goto LABEL_48;
      v24 = v22->m_Items[v23];
      if ( !v24 )
        goto LABEL_47;
      this = (EventSvtControl_o *)this->fields.m_CancellationTokenSource;
      if ( !this )
        goto LABEL_47;
      UIStandFigureR__SetFace_51076984((UIStandFigureR_o *)this, face, v24->fields.form, 0, FadeTime, 0);
    }
    goto LABEL_21;
  }
  v42 = v8->fields.randomVoiceList;
  if ( !v42 )
    goto LABEL_47;
  v43 = v8->fields.playCnt;
  if ( (unsigned int)v43 >= LODWORD(v42->max_length) )
    goto LABEL_48;
  v44 = v42->m_Items[v43];
  if ( !v44 )
    goto LABEL_47;
  multiFace = v44->fields.multiFace;
  if ( multiFace )
  {
    this = (EventSvtControl_o *)System_Linq_Enumerable__Count_object_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.standFigureCollectList,
                                  (const MethodInfo_3879804 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    if ( (_DWORD)this == LODWORD(multiFace->max_length) )
    {
      if ( (int)this >= 1 )
      {
        v46 = 0;
        while ( v46 < (unsigned int)this )
        {
          v47 = multiFace->m_Items[v46];
          this = (EventSvtControl_o *)v8->fields.standFigureCollectList;
          if ( v46 )
          {
            if ( !this )
              goto LABEL_47;
            v48 = (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__;
            v49 = v46;
          }
          else
          {
            if ( !this )
              goto LABEL_47;
            v48 = (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__;
            v49 = 0;
          }
          this = (EventSvtControl_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v49,
                                        v48);
          if ( !this )
            goto LABEL_47;
          this = (EventSvtControl_o *)this->fields.m_CancellationTokenSource;
          if ( !this )
            goto LABEL_47;
          UIStandFigureR__SetFace_51076984((UIStandFigureR_o *)this, v47, asstName, 0, FadeTime, 0);
          this = (EventSvtControl_o *)multiFace->max_length;
          if ( (__int64)++v46 >= (int)this )
            goto LABEL_21;
        }
        goto LABEL_48;
      }
LABEL_21:
      v25 = v8->fields.asstName;
      vcName = v8->fields.vcName;
      volume = v8->fields.volume;
      v28 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v28, (Il2CppObject *)v8, Method_EventSvtControl_EndPlay__, 0);
      if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v29, v30);
      v31 = SoundManager__playVoice_48511684(v25, vcName, volume, v28, 0, 0);
      v8->fields.player = v31;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.player, (int32_t)v31, v32, v33, v34, v35, v36, v37);
      if ( v8->fields.isSkipPerformance )
        goto LABEL_28;
      v39 = v8->fields.randomVoiceList;
      if ( !v39 )
LABEL_47:
        sub_2213CDC(this, method);
      v40 = v8->fields.playCnt;
      if ( (unsigned int)v40 < LODWORD(v39->max_length) )
      {
        v41 = v39->m_Items[v40];
        if ( v41 )
        {
          EventSvtControl__PlayPerformance(v8, v41->fields.additionalPerformances, 1, 0, 0, v38);
LABEL_28:
          ++v8->fields.playCnt;
          return;
        }
        goto LABEL_47;
      }
LABEL_48:
      sub_2213CE4(this);
    }
  }
}


bool EventSvtControl__TryGetPlayableVoiceInfoList(
        EventSvtControl_o *this,
        System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o **voiceInfoList,
        System_Collections_Generic_List_ServantVoiceData____o *servantVoiceGroupData,
        const MethodInfo *method)
{
  int v5; // w8
  Il2CppObject *Master_object; // x23
  System_Collections_Generic_List_T__o *v7; // x24
  System_Collections_Generic_List_T__o *v8; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  Il2CppObject *v15; // x0
  System_Collections_Generic_List_int__o *v16; // x1
  System_Collections_Generic_HashSet_object__o *v17; // x24
  System_String_o **v18; // x28
  const MethodInfo_38911C8 **v19; // x19
  const MethodInfo_42BA9D0 **v20; // x21
  const MethodInfo *v21; // x4
  Il2CppObject *current; // x25
  _BOOL8 IsPlayableVoice; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  EventSvtControl___c_c *v26; // x0
  struct EventSvtControl___c_StaticFields *static_fields; // x8
  System_String_o *v28; // x26
  System_Func_object__object__o *_9__65_0; // x27
  const MethodInfo_42BA9D0 **v30; // x29
  const MethodInfo_38911C8 **v31; // x21
  System_String_o **v32; // x19
  Il2CppObject *v33; // x28
  struct EventSvtControl___c_StaticFields *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_Collections_Generic_IEnumerable_string__o *v41; // x1
  Il2CppObject *v42; // x0
  __int64 v43; // x1
  Il2CppObject *v44; // x26
  _BOOL8 v45; // x0
  __int64 v46; // x1
  Il2CppObject *Weight; // x2
  const MethodInfo_43A099C *v48; // x4
  System_Collections_Generic_KeyValuePair_object__int__o v49; // x1 OVERLAPPED
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  Il2CppObject *v55; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v58; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x26
  Il2CppObject *v60; // x0
  __int64 v61; // x1
  __int64 Item; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  int32_t v65; // w25
  int32_t monitor; // w26
  _BOOL8 IsVoicePlayFlag; // x0
  System_Collections_Generic_List_T__o *v68; // x0
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  Il2CppObject *v72; // x8
  struct System_Object_array *items; // x8
  _QWORD *v74; // x9
  __int64 size; // x10
  Il2CppObject *v76; // x0
  __int64 v77; // x0
  __int64 monitor_low; // x1
  struct System_Collections_Generic_List_int__o *voicePlayedValueList; // x0
  struct System_Int32_array *v80; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  System_String_o *v89; // x2
  System_String_o *v90; // x3
  int32_t v91; // w4
  int32_t v92; // w5
  bool v93; // w6
  bool v94; // w7
  System_Collections_Generic_List_T__o *v96; // [xsp+8h] [xbp-D8h]
  System_Collections_Generic_List_int__o *OriginalSvtId; // [xsp+10h] [xbp-D0h]
  System_Collections_Generic_List_Enumerator_object__o v100; // [xsp+28h] [xbp-B8h] BYREF
  Il2CppObject *entity; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o v102; // [xsp+48h] [xbp-98h] BYREF
  VoicePlayCondEntity_o *condEnt; // [xsp+58h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v104; // [xsp+60h] [xbp-80h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o v105; // 0:x0.16

  if ( (byte_596A7B5 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantVoiceRelationMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_VoiceMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_ServantVoiceData__string___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_2213A60(&System_Func_ServantVoiceData__string__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_string__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_string__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_2213A60(&Method_EventSvtControl___c__TryGetPlayableVoiceInfoList_b__65_0__);
    sub_2213A60(&EventSvtControl___c_TypeInfo);
    sub_2213A60(&StringLiteral_869/*","*/);
    sub_2213A60(&StringLiteral_20486/*"forcePlayFirst"*/);
    byte_596A7B5 = 1;
  }
  memset(&v104, 0, sizeof(v104));
  *(_QWORD *)&v102.fields.value = 0;
  condEnt = 0;
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  v102.fields.key = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, voiceInfoList, servantVoiceGroupData);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v7 = (System_Collections_Generic_List_T__o *)sub_2213CCC(System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___TypeInfo);
  System_Collections_Generic_List_KeyValuePair_object__int_____ctor(
    v7,
    (const MethodInfo_43C3984 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int____ctor__);
  v8 = (System_Collections_Generic_List_T__o *)sub_2213CCC(System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___TypeInfo);
  System_Collections_Generic_List_KeyValuePair_object__int_____ctor(
    v8,
    (const MethodInfo_43C3984 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int____ctor__);
  *voiceInfoList = (System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *)v8;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)voiceInfoList, (int32_t)v8, v9, v10, v11, v12, v13, v14);
  v15 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantVoiceRelationMaster___);
  if ( !v15 )
    goto LABEL_64;
  v96 = v7;
  OriginalSvtId = ServantVoiceRelationMaster__GetOriginalSvtId(
                    (ServantVoiceRelationMaster_o *)v15,
                    this->fields.svtId,
                    0);
  v17 = (System_Collections_Generic_HashSet_object__o *)sub_2213CCC(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v17,
    (const MethodInfo_42BA2CC *)Method_System_Collections_Generic_HashSet_string___ctor__);
  if ( !servantVoiceGroupData )
    goto LABEL_64;
  v18 = (System_String_o **)&StringLiteral_869/*","*/;
  v19 = (const MethodInfo_38911C8 **)&Method_System_Linq_Enumerable_Select_ServantVoiceData__string___;
  v20 = (const MethodInfo_42BA9D0 **)&Method_System_Collections_Generic_HashSet_string__Contains__;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v100,
    (System_Collections_Generic_List_object__o *)servantVoiceGroupData,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v104 = v100;
  v100.fields._list = 0;
  *(_QWORD *)&v100.fields._index = &v104;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v104,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__) )
  {
    current = v104.fields._current;
    IsPlayableVoice = EventSvtControl__IsPlayableVoice(
                        this,
                        (VoicePlayCondMaster_o *)Master_object,
                        (ServantVoiceData_array *)v104.fields._current,
                        &condEnt,
                        v21);
    if ( IsPlayableVoice )
    {
      if ( !current )
        sub_2213CDC(IsPlayableVoice, v24);
      if ( !LODWORD(current[1].monitor) )
        sub_2213CE4(IsPlayableVoice);
      if ( !current[2].klass )
        sub_2213CDC(IsPlayableVoice, v24);
      v26 = EventSvtControl___c_TypeInfo;
      if ( !*(&EventSvtControl___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventSvtControl___c_TypeInfo, v24, v25);
        v26 = EventSvtControl___c_TypeInfo;
      }
      static_fields = v26->static_fields;
      v28 = *v18;
      _9__65_0 = (System_Func_object__object__o *)static_fields->__9__65_0;
      if ( !_9__65_0 )
      {
        if ( !*(&v26->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v26, v24, v25);
          static_fields = EventSvtControl___c_TypeInfo->static_fields;
        }
        v30 = v20;
        v31 = v19;
        v32 = v18;
        v33 = (Il2CppObject *)static_fields->__9;
        _9__65_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_ServantVoiceData__string__TypeInfo);
        System_Func_object__object____ctor(
          _9__65_0,
          v33,
          Method_EventSvtControl___c__TryGetPlayableVoiceInfoList_b__65_0__,
          0);
        v34 = EventSvtControl___c_TypeInfo->static_fields;
        v34->__9__65_0 = (struct System_Func_ServantVoiceData__string__o *)_9__65_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v34->__9__65_0,
          (int32_t)_9__65_0,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
        v18 = v32;
        v19 = v31;
        v20 = v30;
      }
      v41 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_object__object_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)current,
                                                                  (System_Func_TSource__TResult__o *)_9__65_0,
                                                                  *v19);
      v42 = (Il2CppObject *)System_String__Join_75699092(v28, v41, 0);
      if ( !v17 )
        sub_2213CDC(v42, v43);
      v44 = v42;
      if ( !System_Collections_Generic_HashSet_object___Contains(v17, v42, *v20) )
      {
        v45 = System_Collections_Generic_HashSet_object___Add(
                v17,
                v44,
                (const MethodInfo_42BB4C0 *)Method_System_Collections_Generic_HashSet_string__Add__);
        if ( !Master_object )
          sub_2213CDC(v45, v46);
        Weight = (Il2CppObject *)(unsigned int)VoicePlayCondMaster__GetWeight(
                                                 (VoicePlayCondMaster_o *)Master_object,
                                                 condEnt,
                                                 10,
                                                 0);
        v105.fields.key = (Il2CppObject *)&v102;
        *(_QWORD *)&v105.fields.value = current;
        System_Collections_Generic_KeyValuePair_object__int____ctor(
          v105,
          Weight,
          Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__,
          v48);
        if ( !condEnt
          || VoicePlayCondEntity__GetScriptIntParam(condEnt, (System_String_o *)StringLiteral_20486/*"forcePlayFirst"*/, -1, 0) != 1 )
        {
          goto LABEL_36;
        }
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v49.fields.key, *(_QWORD *)&v49.fields.value);
        v55 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_VoiceMaster___);
        if ( !condEnt )
          sub_2213CDC(v55, v56);
        v58 = (DataMasterBase_TMaster__TEntity__PKType__o *)v55;
        voiceId = condEnt->fields.voiceId;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v56, v57);
        v60 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_56033020(voiceId, 0);
        if ( !v58 )
          sub_2213CDC(v60, v61);
        if ( !DataMasterBase_object__object__object___TryGetEntity(
                v58,
                &entity,
                v60,
                (const MethodInfo_3F15838 *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string__TryGetEntity__) )
          goto LABEL_36;
        if ( !OriginalSvtId )
          sub_2213CDC(0, v49.fields.key);
        Item = System_Collections_Generic_List_int___get_Item(
                 OriginalSvtId,
                 0,
                 (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !entity )
          sub_2213CDC(Item, v63);
        v65 = Item;
        monitor = (int32_t)entity[3].monitor;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v63, v64);
        IsVoicePlayFlag = CondType__IsVoicePlayFlag(v65, monitor, 0);
        if ( !IsVoicePlayFlag )
        {
          if ( !v96
            || (items = v96->fields._items,
                v49 = v102,
                v74 = Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___Add__,
                ++v96->fields._version,
                !items) )
          {
            sub_2213CDC(IsVoicePlayFlag, v49.fields.key);
          }
          size = v96->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_KeyValuePair_object__int____AddWithResize(
              v96,
              v49,
              *(const MethodInfo_43C4230 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
          }
          else
          {
            v76 = &items->obj + size;
            v96->fields._size = size + 1;
            v76[2] = (Il2CppObject)v49;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v76[2],
              0,
              *(System_String_o **)&v49.fields.value,
              v50,
              v51,
              v52,
              v53,
              v54);
          }
          if ( !entity )
            sub_2213CDC(v77, monitor_low);
          voicePlayedValueList = this->fields.voicePlayedValueList;
          if ( !voicePlayedValueList
            || (monitor_low = LODWORD(entity[3].monitor),
                v80 = voicePlayedValueList->fields._items,
                v81 = Method_System_Collections_Generic_List_int__Add__,
                ++voicePlayedValueList->fields._version,
                !v80) )
          {
            sub_2213CDC(voicePlayedValueList, monitor_low);
          }
          v82 = voicePlayedValueList->fields._size;
          if ( (unsigned int)v82 >= LODWORD(v80->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              voicePlayedValueList,
              monitor_low,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
          }
          else
          {
            voicePlayedValueList->fields._size = v82 + 1;
            v80->m_Items[v82] = monitor_low;
          }
        }
        else
        {
LABEL_36:
          v68 = (System_Collections_Generic_List_T__o *)*voiceInfoList;
          if ( !*voiceInfoList
            || (v69 = v68->fields._items,
                v49 = v102,
                v70 = Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___Add__,
                ++v68->fields._version,
                !v69) )
          {
            sub_2213CDC(v68, v49.fields.key);
          }
          v71 = v68->fields._size;
          if ( (unsigned int)v71 >= LODWORD(v69->max_length) )
          {
            System_Collections_Generic_List_KeyValuePair_object__int____AddWithResize(
              v68,
              v49,
              *(const MethodInfo_43C4230 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
          }
          else
          {
            v72 = &v69->obj + v71;
            v68->fields._size = v71 + 1;
            v72[2] = (Il2CppObject)v49;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v72[2],
              0,
              *(System_String_o **)&v49.fields.value,
              v50,
              v51,
              v52,
              v53,
              v54);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v104,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  if ( !v96 )
    goto LABEL_64;
  v16 = OriginalSvtId;
  if ( v96->fields._size >= 1 )
  {
    this->fields.forcePlayVoiceSvtIdList = OriginalSvtId;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.forcePlayVoiceSvtIdList,
      (int32_t)OriginalSvtId,
      v83,
      v84,
      v85,
      v86,
      v87,
      v88);
    *voiceInfoList = (System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *)v96;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)voiceInfoList, (int32_t)v96, v89, v90, v91, v92, v93, v94);
    return 1;
  }
  if ( !*voiceInfoList )
LABEL_64:
    sub_2213CDC(v15, v16);
  return (*voiceInfoList)->fields._size > 0;
}


bool EventSvtControl__TryPlayVoiceInternal(
        EventSvtControl_o *this,
        int32_t svtId,
        System_Collections_Generic_IReadOnlyList_string__o *voiceIdCandidates,
        VoicePlayCondMaster_o *voicePlayCondMaster,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 Item; // x0
  __int64 v11; // x1
  System_Collections_Generic_IReadOnlyList_string__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  __int64 isVoicePlay; // x0
  __int64 v17; // x1
  __int64 v18; // x23
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x23
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  System_String_o *v28; // x0
  __int64 v29; // x1
  Il2CppObject *v30; // x23
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  __int64 v41; // x22
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  int32_t v46; // w1
  int32_t v47; // w0
  Il2CppObject *v48; // x21
  __int128 v49; // q0
  _BOOL8 v50; // x0
  __int64 v51; // x1
  Il2CppObject *current; // x22
  int monitor; // w8
  __int64 v54; // x29
  __int64 v55; // x8
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  __int64 v62; // x0
  const MethodInfo *v63; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  bool result; // w0
  System_Collections_Generic_List_Enumerator_T__o v66; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+20h] [xbp-80h] BYREF
  __int64 v68; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_596A7AC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    byte_596A7AC = 1;
  }
  v68 = 0;
  memset(&v67, 0, sizeof(v67));
  v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !voiceIdCandidates )
    goto LABEL_68;
  klass = voiceIdCandidates->klass;
  v13 = *(unsigned __int16 *)&voiceIdCandidates->klass->_2.rank;
  if ( *(_WORD *)&voiceIdCandidates->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v13;
      p_offset += 4;
      if ( !v13 )
        goto LABEL_8;
    }
    v15 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v15 = sub_224BC3C(voiceIdCandidates, System_Collections_Generic_IEnumerable_string__TypeInfo, 0);
  }
  isVoicePlay = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_string__o *, _QWORD))v15)(
                  voiceIdCandidates,
                  *(_QWORD *)(v15 + 8));
  v68 = isVoicePlay;
  v66.fields._list = 0;
  *(_QWORD *)&v66.fields._index = &v68;
  if ( !isVoicePlay )
LABEL_34:
    sub_2213CDC(isVoicePlay, v17);
  v18 = isVoicePlay;
  while ( 1 )
  {
    v19 = *(_QWORD *)v18;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
    {
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v21 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_16;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_16:
      v22 = sub_224BC3C(v18, System_Collections_IEnumerator_TypeInfo, 0);
    }
    Item = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v18, *(_QWORD *)(v22 + 8));
    if ( (Item & 1) == 0 )
      break;
    v23 = v68;
    if ( !v68 )
      sub_2213CDC(Item, v11);
    v24 = *(_QWORD *)v68;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v68 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v68 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v26 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_24;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_24:
      v27 = sub_224BC3C(v68, System_Collections_Generic_IEnumerator_string__TypeInfo, 0);
    }
    v28 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8));
    if ( !voicePlayCondMaster )
      sub_2213CDC(v28, v29);
    v30 = (Il2CppObject *)v28;
    isVoicePlay = VoicePlayCondMaster__isVoicePlay(voicePlayCondMaster, svtId, v28, 0, -1, -1, 0, 0);
    if ( (isVoicePlay & 1) != 0 )
    {
      if ( !v9
        || (items = v9->fields._items,
            v38 = Method_System_Collections_Generic_List_string__Add__,
            ++v9->fields._version,
            !items) )
      {
        sub_2213CDC(isVoicePlay, v17);
      }
      size = v9->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          v30,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v40[4] = (Il2CppClass *)v30;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v40 + 4), (int32_t)v30, v31, v32, v33, v34, v35, v36);
      }
    }
    v18 = v68;
    if ( !v68 )
      goto LABEL_34;
  }
  v41 = v68;
  if ( v68 )
  {
    v42 = *(_QWORD *)v68;
    v43 = *(unsigned __int16 *)(*(_QWORD *)v68 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v68 + 302LL) )
    {
      v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
      {
        --v43;
        v44 += 4;
        if ( !v43 )
          goto LABEL_40;
      }
      v45 = v42 + 16LL * *v44 + 312;
    }
    else
    {
LABEL_40:
      v45 = sub_224BC3C(v68, System_IDisposable_TypeInfo, 0);
    }
    Item = (*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v41, *(_QWORD *)(v45 + 8));
  }
  if ( !v9 )
LABEL_68:
    sub_2213CDC(Item, v11);
  v46 = v9->fields._size;
  if ( v46 < 1 )
    return 0;
LABEL_45:
  v47 = UnityEngine_Random__Range_83400680(0, v46, 0);
  Item = (__int64)System_Collections_Generic_List_object___get_Item(
                    v9,
                    v47,
                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !this->fields.voiceIndividualShopList )
    goto LABEL_68;
  v48 = (Il2CppObject *)Item;
  System_Collections_Generic_List_object___GetEnumerator(
    &v66,
    (System_Collections_Generic_List_object__o *)this->fields.voiceIndividualShopList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v49 = *(_OWORD *)&v66.fields._list;
  v66.fields._list = 0;
  *(_QWORD *)&v66.fields._index = &v67;
  *(_OWORD *)&v67.fields._list = v49;
  v67.fields._current = v66.fields._current;
  do
  {
LABEL_47:
    v50 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v67,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v50 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v67,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
      System_Collections_Generic_List_object___Remove(
        v9,
        v48,
        (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_string__Remove__);
      v46 = v9->fields._size;
      result = 0;
      if ( v46 <= 0 )
        return result;
      goto LABEL_45;
    }
    current = v67.fields._current;
    if ( !v67.fields._current )
      sub_2213CDC(v50, v51);
    monitor = (int)v67.fields._current[1].monitor;
  }
  while ( monitor < 1 );
  v54 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v54 >= monitor )
      sub_2213CE4(v50);
    v55 = *((_QWORD *)&current[2].klass + v54);
    if ( !v55 )
      sub_2213CDC(v50, v51);
    v50 = System_String__op_Equality(*(System_String_o **)(v55 + 16), (System_String_o *)v48, 0);
    if ( v50 )
      break;
    monitor = (int)current[1].monitor;
    if ( (int)++v54 >= monitor )
      goto LABEL_47;
  }
  this->fields.randomVoiceList = (struct ServantVoiceData_array *)current;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.randomVoiceList,
    (int32_t)current,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  randomVoiceList = this->fields.randomVoiceList;
  if ( !randomVoiceList )
    sub_2213CDC(v62, v63);
  this->fields.maxPlayCnt = randomVoiceList->max_length;
  EventSvtControl__svtVoicePlay(this, v63);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v67,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  return 1;
}


void EventSvtControl__boxGachaPlayVoice(
        EventSvtControl_o *this,
        EventSvtControl_PlayBoxGachVoiceArg_o *arg,
        const MethodInfo *method)
{
  __int64 v5; // x20
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListBoxGacha; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int128 v14; // q1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  const MethodInfo *v21; // x1
  struct System_Action_o *v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct ServantVoiceData_array **p_randomVoiceList; // x21
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  __int64 v36; // x22
  __int64 v37; // x0
  __int64 v38; // x1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  __int64 v45; // x23
  int32_t current; // w1
  struct ServantVoiceData_array **v47; // x24
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  _BOOL8 v54; // x0
  __int64 v55; // x1
  __int64 v56; // x28
  int v57; // w8
  __int64 v58; // x25
  __int64 v59; // x29
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  struct ServantVoiceData_array *v66; // x1
  __int64 v67; // x0
  const MethodInfo *v68; // x1
  __int64 v69; // x0
  __int64 v70; // x1
  __int64 v71; // x8
  Il2CppObject *Instance; // x0
  __int64 v73; // x1
  CommonUI_o *v74; // x19
  System_Action_o *v75; // x23
  System_String_o *v76; // x20
  System_String_o *v77; // x21
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  System_Collections_Generic_List_Enumerator_object__o v84; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v85; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_596A7AD & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&EventSvtControl___c__DisplayClass57_0_TypeInfo);
    sub_2213A60(&Method_EventSvtControl___c__DisplayClass57_1__boxGachaPlayVoice_b__0__);
    sub_2213A60(&EventSvtControl___c__DisplayClass57_1_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A7AD = 1;
  }
  memset(&v85, 0, sizeof(v85));
  v5 = sub_2213CCC(EventSvtControl___c__DisplayClass57_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_35;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  v14 = *(_OWORD *)&arg->fields.targetVoiceId;
  *(_OWORD *)(v5 + 40) = *(_OWORD *)&arg->fields.callBackStartPlay;
  *(_OWORD *)(v5 + 24) = v14;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), 0, v15, v16, v17, v18, v19, v20);
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, v21);
  System_String__IsNullOrEmpty(*(System_String_o **)(v5 + 24), 0);
  v22 = *(struct System_Action_o **)(v5 + 48);
  this->fields.callbakEndPlay = v22;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbakEndPlay,
    (int32_t)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.randomVoiceList = 0;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.randomVoiceList, 0, v30, v31, v32, v33, v34, v35);
  voiceListBoxGacha = this->fields.voiceListBoxGacha;
  if ( !voiceListBoxGacha )
LABEL_35:
    sub_2213CDC(voiceListBoxGacha, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v84,
    (System_Collections_Generic_List_object__o *)voiceListBoxGacha,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v85 = v84;
  v84.fields._list = 0;
  *(_QWORD *)&v84.fields._index = &v85;
LABEL_8:
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v85,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__) )
  {
    v36 = sub_2213CCC(EventSvtControl___c__DisplayClass57_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v36, 0);
    if ( !v36 )
      sub_2213CDC(v37, v38);
    *(_QWORD *)(v36 + 24) = v5;
    v45 = v36 + 24;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 24), v5, v39, v40, v41, v42, v43, v44);
    current = (int32_t)v85.fields._current;
    *(_QWORD *)(v36 + 16) = v85.fields._current;
    v47 = (struct ServantVoiceData_array **)(v36 + 16);
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 16), current, v48, v49, v50, v51, v52, v53);
    v56 = *(_QWORD *)(v36 + 16);
    if ( !v56 )
      sub_2213CDC(v54, v55);
    v57 = *(_DWORD *)(v56 + 24);
    if ( v57 >= 1 )
    {
      v58 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v58 >= v57 )
          sub_2213CE4(v54);
        v59 = *(_QWORD *)(v56 + 32 + 8 * v58);
        if ( !v59 )
          sub_2213CDC(v54, v55);
        if ( !*(_QWORD *)v45 )
          sub_2213CDC(v54, v55);
        v54 = System_String__op_Equality(
                *(System_String_o **)(v59 + 16),
                *(System_String_o **)(*(_QWORD *)v45 + 24LL),
                0);
        if ( v54 )
          break;
        v57 = *(_DWORD *)(v56 + 24);
        if ( (int)++v58 >= v57 )
          goto LABEL_8;
      }
      this->fields.isPlayBoxGachaVoice = 1;
      if ( System_String__IsNullOrEmpty(*(System_String_o **)(v59 + 72), 0) )
      {
        v66 = *v47;
        *p_randomVoiceList = *v47;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.randomVoiceList,
          (int32_t)v66,
          v60,
          v61,
          v62,
          v63,
          v64,
          v65);
        if ( !*p_randomVoiceList )
          sub_2213CDC(v67, v68);
        this->fields.maxPlayCnt = (*p_randomVoiceList)->max_length;
        if ( !*(_QWORD *)v45 )
          sub_2213CDC(v67, v68);
        this->fields.isSkipPerformance = *(_BYTE *)(*(_QWORD *)v45 + 32LL);
        EventSvtControl__svtVoicePlay(this, v68);
        if ( !*(_QWORD *)v45 )
          sub_2213CDC(v69, v70);
        v71 = *(_QWORD *)(*(_QWORD *)v45 + 40LL);
        if ( v71 )
          (*(void (__fastcall **)(_QWORD, _QWORD))(v71 + 24))(*(_QWORD *)(v71 + 64), *(_QWORD *)(v71 + 40));
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v74 = (CommonUI_o *)Instance;
        v75 = *(System_Action_o **)(v36 + 32);
        v76 = *(System_String_o **)(v59 + 72);
        v77 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !v75 )
        {
          v75 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(
            v75,
            (Il2CppObject *)v36,
            Method_EventSvtControl___c__DisplayClass57_1__boxGachaPlayVoice_b__0__,
            0);
          *(_QWORD *)(v36 + 32) = v75;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 32), (int32_t)v75, v78, v79, v80, v81, v82, v83);
        }
        if ( !v74 )
          sub_2213CDC(Instance, v73);
        CommonUI__OpenNotificationDialog(v74, v77, v76, v75, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0.0, 0, 0);
      }
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v85,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


bool EventSvtControl__isUnskippable(EventSvtControl_o *this, const MethodInfo *method)
{
  return this->fields.player && this->fields.maxPlayCnt && this->fields.isUnSkippable;
}


// local variable allocation has failed, the output may be wrong!
void EventSvtControl__playMissionVoice(
        EventSvtControl_o *this,
        System_String_array *voiceIds,
        int32_t svtId,
        System_Action_o *callbackEnds,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct SePlayer_o *player; // x8
  struct ServantVoiceData_array **p_randomVoiceList; // x21
  DataManager_o *Instance; // x0
  const MethodInfo *v14; // x1
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v16; // x1
  Il2CppObject *v17; // x23
  int v18; // w8
  unsigned int v19; // w26
  __int64 v20; // x27
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x0
  System_String_array *v28; // x0
  __int64 v29; // x1
  System_String_o *v30; // x1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  int32_t v37; // w1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  VoicePlayCondMaster_o *v50; // x26
  System_Collections_Generic_List_object__o *v51; // x23
  System_Collections_Generic_List_object__o *v52; // x19
  __int64 size; // x19
  unsigned __int64 v54; // x28
  System_String_o *v55; // x27
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  Il2CppClass **v59; // x0
  int v60; // w28
  System_Random_o *v61; // x25
  unsigned int v62; // w25
  _BOOL8 v63; // x0
  __int64 v64; // x1
  Il2CppObject *current; // x26
  int monitor; // w8
  __int64 v67; // x24
  __int64 v68; // x8
  System_String_o *v69; // x27
  Il2CppObject *Item; // x1
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  struct ServantVoiceData_array *randomVoiceList; // x8
  System_Collections_Generic_List_object__o *v80; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_596A7A5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor___91665496);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&System_Random_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A7A5 = 1;
  }
  player = this->fields.player;
  memset(&v82, 0, sizeof(v82));
  if ( player )
    EventSvtControl__stopVoice(this, (const MethodInfo *)voiceIds);
  this->fields.randomVoiceList = 0;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.randomVoiceList,
    0,
    *(System_String_o **)&svtId,
    (System_String_o *)callbackEnds,
    (int32_t)method,
    v5,
    v6,
    v7);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_80;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  if ( !voiceIds )
    goto LABEL_80;
  if ( SLODWORD(voiceIds->max_length) >= 2 )
  {
    v50 = (VoicePlayCondMaster_o *)Instance;
    v51 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v51,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
    v52 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor_71840884(
      v52,
      voiceIds->max_length,
      (const MethodInfo_4483474 *)Method_System_Collections_Generic_List_string___ctor___91665496);
    if ( !v52 )
      goto LABEL_80;
    System_Collections_Generic_List_object___AddRange(
      v52,
      (System_Collections_Generic_IEnumerable_T__o *)voiceIds,
      (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_string__AddRange__);
    v80 = v52;
    size = (unsigned int)v52->fields._size;
    if ( (int)size >= 1 )
    {
      v54 = 0;
      do
      {
        if ( v54 >= LODWORD(voiceIds->max_length) )
LABEL_72:
          sub_2213CE4(Instance);
        if ( !v50 )
          goto LABEL_80;
        v55 = voiceIds->m_Items[v54];
        Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v50, svtId, v55, 0, -1, -1, 0, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v51 )
            goto LABEL_80;
          items = v51->fields._items;
          v57 = Method_System_Collections_Generic_List_string__Add__;
          ++v51->fields._version;
          if ( !items )
            goto LABEL_80;
          v58 = v51->fields._size;
          if ( (unsigned int)v58 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v51,
              (Il2CppObject *)v55,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
          }
          else
          {
            v59 = &items->obj.klass + v58;
            v51->fields._size = v58 + 1;
            v59[4] = (Il2CppClass *)v55;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v59 + 4), (int32_t)v55, v44, v45, v46, v47, v48, v49);
          }
        }
      }
      while ( size != ++v54 );
    }
    if ( !v51 )
      goto LABEL_80;
    v60 = v51->fields._size - 1;
    if ( v60 >= 0 )
    {
      do
      {
        v61 = (System_Random_o *)sub_2213CCC(System_Random_TypeInfo);
        System_Random___ctor(v61, 0);
        if ( !v61 )
          goto LABEL_80;
        Instance = (DataManager_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, const MethodInfo *))v61->klass->vtable._7_Next.methodPtr)(
                                      v61,
                                      (unsigned int)v51->fields._size,
                                      v61->klass->vtable._7_Next.method);
        if ( !this->fields.voiceListMission )
          goto LABEL_80;
        v62 = (unsigned int)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v81,
          (System_Collections_Generic_List_object__o *)this->fields.voiceListMission,
          (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v82 = v81;
        v81.fields._list = 0;
        *(_QWORD *)&v81.fields._index = &v82;
        do
        {
          v63 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v82,
                  (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !v63 )
            break;
          current = v82.fields._current;
          if ( !v82.fields._current )
            sub_2213CDC(v63, v64);
          monitor = (int)v82.fields._current[1].monitor;
          if ( monitor >= 1 )
          {
            v67 = 0;
            while ( 1 )
            {
              if ( (unsigned int)v67 >= monitor )
                sub_2213CE4(v63);
              v68 = *((_QWORD *)&current[2].klass + v67);
              if ( !v68 )
                sub_2213CDC(v63, v64);
              v69 = *(System_String_o **)(v68 + 16);
              Item = System_Collections_Generic_List_object___get_Item(
                       v51,
                       v62,
                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
              v63 = System_String__op_Equality(v69, (System_String_o *)Item, 0);
              if ( v63 )
                break;
              monitor = (int)current[1].monitor;
              if ( (int)++v67 >= monitor )
                goto LABEL_57;
            }
            *p_randomVoiceList = (struct ServantVoiceData_array *)current;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.randomVoiceList,
              (int32_t)current,
              v71,
              v72,
              v73,
              v74,
              v75,
              v76);
          }
LABEL_57:
          ;
        }
        while ( !*p_randomVoiceList );
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v82,
          (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        if ( *p_randomVoiceList )
          goto LABEL_75;
        if ( v62 >= LODWORD(voiceIds->max_length) )
          goto LABEL_72;
        System_Collections_Generic_List_object___Remove(
          v80,
          (Il2CppObject *)voiceIds->m_Items[v62],
          (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_string__Remove__);
      }
      while ( v60-- > 0 );
    }
  }
  else
  {
    Instance = (DataManager_o *)this->fields.voiceListMission;
    if ( !Instance )
      goto LABEL_80;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v81,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    v82 = v81;
    v81.fields._list = 0;
    *(_QWORD *)&v81.fields._index = &v82;
    do
    {
      IsNullOrEmpty = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v82,
                        (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
      if ( !IsNullOrEmpty )
        break;
      v17 = v82.fields._current;
      if ( !v82.fields._current )
        sub_2213CDC(IsNullOrEmpty, v16);
      v18 = (int)v82.fields._current[1].monitor;
      if ( v18 >= 1 )
      {
        v19 = 0;
        while ( 1 )
        {
          if ( v19 >= v18 )
            sub_2213CE4(IsNullOrEmpty);
          v20 = *((_QWORD *)&v17[2].klass + (int)v19);
          if ( !v20 )
            sub_2213CDC(IsNullOrEmpty, v16);
          if ( !LODWORD(voiceIds->max_length) )
            sub_2213CE4(IsNullOrEmpty);
          if ( System_String__op_Equality(*(System_String_o **)(v20 + 16), voiceIds->m_Items[0], 0)
            && System_String__IsNullOrEmpty(this->fields.specialSvtVoice, 0) )
          {
            *p_randomVoiceList = (struct ServantVoiceData_array *)v17;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.randomVoiceList,
              (int32_t)v17,
              v21,
              v22,
              v23,
              v24,
              v25,
              v26);
            goto LABEL_28;
          }
          IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.specialSvtVoice, 0);
          if ( !IsNullOrEmpty )
          {
            v27 = *(System_String_o **)(v20 + 16);
            if ( !v27 )
              sub_2213CDC(0, v16);
            v28 = System_String__Split(v27, 0x5Fu, 0, 0);
            if ( !v28 )
              sub_2213CDC(0, v29);
            if ( !LODWORD(v28->max_length) )
              sub_2213CE4(v28);
            v30 = System_String__Concat_75694928(
                    v28->m_Items[0],
                    (System_String_o *)StringLiteral_16746/*"_"*/,
                    this->fields.specialSvtVoice,
                    0);
            IsNullOrEmpty = System_String__op_Equality(*(System_String_o **)(v20 + 16), v30, 0);
            if ( IsNullOrEmpty )
              break;
          }
          v18 = (int)v17[1].monitor;
          if ( (int)++v19 >= v18 )
            goto LABEL_28;
        }
        *p_randomVoiceList = (struct ServantVoiceData_array *)v17;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.randomVoiceList,
          (int32_t)v17,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
        v37 = (int)StringLiteral_1/*""*/;
        this->fields.specialSvtVoice = (struct System_String_o *)StringLiteral_1/*""*/;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.specialSvtVoice,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43);
      }
LABEL_28:
      ;
    }
    while ( !*p_randomVoiceList );
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v82,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  }
  if ( *p_randomVoiceList )
  {
LABEL_75:
    this->fields.callbakEndPlay = callbackEnds;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbakEndPlay,
      (int32_t)callbackEnds,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
    randomVoiceList = this->fields.randomVoiceList;
    if ( randomVoiceList )
    {
      this->fields.maxPlayCnt = randomVoiceList->max_length;
      EventSvtControl__svtVoicePlay(this, v14);
      return;
    }
LABEL_80:
    sub_2213CDC(Instance, v14);
  }
  if ( callbackEnds )
    ActionExtensions__Call(callbackEnds, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventSvtControl__playPurchaseVoice(
        EventSvtControl_o *this,
        int32_t svtId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct SePlayer_o *player; // x8
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListShop; // x8
  System_Collections_Generic_List_object__o *v13; // x20
  Il2CppObject *Instance; // x0
  const MethodInfo *v15; // x1
  VoicePlayCondMaster_o *v16; // x22
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x23
  Il2CppClass *klass; // x8
  _BOOL8 isVoicePlay; // x0
  __int64 v22; // x1
  _BOOL8 v23; // x0
  __int64 v24; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Random_o *v35; // x21
  int32_t v36; // w21
  struct ServantVoiceData_array *Item; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 v45; // x0
  System_Exception_o *v46; // x19
  System_String_o *v47; // x0
  __int64 v48; // x0
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_596A7A4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_2213A60(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_2213A60(&System_Random_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A7A4 = 1;
  }
  player = this->fields.player;
  memset(&v50, 0, sizeof(v50));
  if ( player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  voiceListShop = this->fields.voiceListShop;
  if ( voiceListShop )
  {
    if ( voiceListShop->fields._size <= 0 )
    {
      v45 = sub_2213A74(&System_Exception_TypeInfo);
      v46 = (System_Exception_o *)sub_2213CCC(v45);
      v47 = (System_String_o *)sub_2213A74(&StringLiteral_26801/*"イベントショップ購入時のSvtVoiceマスタが適切に設定されていません。"*/);
      System_Exception___ctor_77375268(v46, v47, 0);
      v48 = sub_2213A74(&Method_EventSvtControl_playPurchaseVoice__);
      sub_2213BA0(v46, v48);
    }
    this->fields.callbackStopVoice = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackStopVoice,
      (int32_t)callback,
      (System_String_o *)callback,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
    v13 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v13,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !this->fields.voiceListShop )
      goto LABEL_35;
    v16 = (VoicePlayCondMaster_o *)Instance;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v49,
      (System_Collections_Generic_List_object__o *)this->fields.voiceListShop,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    v50 = v49;
    v49.fields._list = 0;
    *(_QWORD *)&v49.fields._index = &v50;
    while ( 1 )
    {
      v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v50,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
      if ( !v17 )
        break;
      current = v50.fields._current;
      if ( !v50.fields._current )
        sub_2213CDC(v17, v18);
      if ( !LODWORD(v50.fields._current[1].monitor) )
        sub_2213CE4(v17);
      klass = v50.fields._current[2].klass;
      if ( !klass )
        sub_2213CDC(v17, v18);
      if ( !v16 )
        sub_2213CDC(v17, v18);
      isVoicePlay = VoicePlayCondMaster__isVoicePlay(v16, svtId, (System_String_o *)klass->_1.name, 0, -1, -1, 0, 0);
      if ( isVoicePlay )
      {
        if ( !v13 )
          sub_2213CDC(isVoicePlay, v22);
        v23 = System_Collections_Generic_List_object___Contains(
                v13,
                current,
                (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
        if ( !v23 )
        {
          items = v13->fields._items;
          v32 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
          ++v13->fields._version;
          if ( !items )
            sub_2213CDC(v23, v24);
          size = v13->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v13,
              current,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = &items->obj.klass + size;
            v13->fields._size = size + 1;
            v34[4] = (Il2CppClass *)current;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v34 + 4), (int32_t)current, v25, v26, v27, v28, v29, v30);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v50,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    v35 = (System_Random_o *)sub_2213CCC(System_Random_TypeInfo);
    System_Random___ctor(v35, 0);
    if ( !v13 || !v35 )
      goto LABEL_35;
    v36 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, const MethodInfo *))v35->klass->vtable._7_Next.methodPtr)(
            v35,
            (unsigned int)v13->fields._size,
            v35->klass->vtable._7_Next.method);
    if ( this->fields.beforeVoiceIdx == v36 )
      v36 = (v36 + 1) % v13->fields._size;
    Item = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                              v13,
                                              v36,
                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    this->fields.randomVoiceList = Item;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.randomVoiceList,
      (int32_t)Item,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    randomVoiceList = this->fields.randomVoiceList;
    this->fields.beforeVoiceIdx = v36;
    if ( !randomVoiceList )
LABEL_35:
      sub_2213CDC(Instance, v15);
    this->fields.maxPlayCnt = randomVoiceList->max_length;
    EventSvtControl__setVoiceForm(this, v15);
  }
}


void EventSvtControl__playVoice(EventSvtControl_o *this, System_Action_o *callback, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  System_Collections_Generic_List_int__o **p_forcePlayVoiceSvtIdList; // x19
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_Collections_Generic_List_int__o *v13; // x23
  struct System_Collections_Generic_List_int__o **p_voicePlayedValueList; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  const MethodInfo *v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  const MethodInfo *v28; // x3
  __int64 PlayableVoiceInfoList; // x0
  const MethodInfo *v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *v32; // x23
  int32_t v33; // w22
  int32_t beforeVoiceIdx; // w9
  System_Collections_Generic_List_T__o *v35; // x0
  int v36; // w1
  const MethodInfo_43A099C *v37; // x4
  EventSvtControl___c_c *v38; // x0
  struct EventSvtControl___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__45_0; // x22
  Il2CppObject *v41; // x24
  struct EventSvtControl___c_StaticFields *v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  System_Int32_array *v50; // x0
  struct ServantVoiceData_array *key; // x0
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  struct ServantVoiceData_array *randomVoiceList; // x8
  struct System_Collections_Generic_List_int__o *forcePlayVoiceSvtIdList; // x8
  __int64 size; // x23
  __int64 v61; // x20
  unsigned __int64 v62; // x24
  MissionNaviTransitionBoardItem_o *v63; // x25
  MissionNaviTransitionBoardItem_c *v64; // x26
  System_Collections_Generic_List_int__o *v65; // x8
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  __int64 v72; // x1
  __int64 v73; // x2
  System_Collections_Generic_KeyValuePair_object__int__o v74; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *voiceInfoList; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o v76; // 0:x0.16
  System_Collections_Generic_KeyValuePair_object__int__o Item; // 0:x2.16

  if ( (byte_596A7A3 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_KeyValuePair_ServantVoiceData____int____);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_KeyValuePair_ServantVoiceData____int___int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&System_Func_KeyValuePair_ServantVoiceData____int___int__TypeInfo);
    sub_2213A60(&int_____TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___set_Item__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_NetworkManager_getRequest_TopMyRoomRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_EventSvtControl___c__playVoice_b__45_0__);
    sub_2213A60(&EventSvtControl___c_TypeInfo);
    byte_596A7A3 = 1;
  }
  *(_QWORD *)&v74.fields.value = 0;
  voiceInfoList = 0;
  v74.fields.key = 0;
  v5 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.forcePlayVoiceSvtIdList = v5;
  p_forcePlayVoiceSvtIdList = &this->fields.forcePlayVoiceSvtIdList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.forcePlayVoiceSvtIdList,
    (int32_t)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.voicePlayedValueList = v13;
  p_voicePlayedValueList = &this->fields.voicePlayedValueList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.voicePlayedValueList,
    (int32_t)v13,
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
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackStopVoice,
      (int32_t)callback,
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
      v32 = voiceInfoList;
      if ( !voiceInfoList )
        goto LABEL_43;
      if ( voiceInfoList->fields._size == 1 )
      {
        v33 = 0;
      }
      else
      {
        beforeVoiceIdx = this->fields.beforeVoiceIdx;
        if ( (beforeVoiceIdx & 0x80000000) == 0 )
        {
          v35 = (System_Collections_Generic_List_T__o *)voiceInfoList;
          if ( beforeVoiceIdx >= voiceInfoList->fields._size - 1 )
            v36 = voiceInfoList->fields._size - 1;
          else
            v36 = this->fields.beforeVoiceIdx;
          this->fields.beforeVoiceIdx = v36;
          *(_QWORD *)&v76.fields.value = System_Collections_Generic_List_KeyValuePair_object__int____get_Item(
                                           v35,
                                           v36,
                                           (const MethodInfo_43C3F1C *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Item__).fields.key;
          v76.fields.key = (Il2CppObject *)&v74;
          System_Collections_Generic_KeyValuePair_object__int____ctor(
            v76,
            0,
            Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__,
            v37);
          PlayableVoiceInfoList = (__int64)voiceInfoList;
          if ( !voiceInfoList )
            goto LABEL_43;
          System_Collections_Generic_List_KeyValuePair_object__int____set_Item(
            (System_Collections_Generic_List_T__o *)voiceInfoList,
            this->fields.beforeVoiceIdx,
            v74,
            (const MethodInfo_43C3F70 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___set_Item__);
          v32 = voiceInfoList;
        }
        v38 = EventSvtControl___c_TypeInfo;
        if ( !*(&EventSvtControl___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(EventSvtControl___c_TypeInfo, v30, v31);
          v38 = EventSvtControl___c_TypeInfo;
        }
        static_fields = v38->static_fields;
        _9__45_0 = (System_Func_T__TResult__o *)static_fields->__9__45_0;
        if ( !_9__45_0 )
        {
          if ( !*(&v38->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v38, v30, v31);
            static_fields = EventSvtControl___c_TypeInfo->static_fields;
          }
          v41 = (Il2CppObject *)static_fields->__9;
          _9__45_0 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_KeyValuePair_ServantVoiceData____int___int__TypeInfo);
          System_Func_KeyValuePair_object__int___int____ctor(
            _9__45_0,
            v41,
            Method_EventSvtControl___c__playVoice_b__45_0__,
            0);
          v42 = EventSvtControl___c_TypeInfo->static_fields;
          v42->__9__45_0 = (struct System_Func_KeyValuePair_ServantVoiceData____int___int__o *)_9__45_0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v42->__9__45_0,
            (int32_t)_9__45_0,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48);
        }
        v49 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_object__int___int_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)v32,
                                                                     (System_Func_TSource__TResult__o *)_9__45_0,
                                                                     (const MethodInfo_388B888 *)Method_System_Linq_Enumerable_Select_KeyValuePair_ServantVoiceData____int___int___);
        v50 = System_Linq_Enumerable__ToArray_int_(
                v49,
                (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
        PlayableVoiceInfoList = RandomUtility__GetRandomRangeIndex(v50, 0, 0);
        v32 = voiceInfoList;
        if ( !voiceInfoList )
LABEL_43:
          sub_2213CDC(PlayableVoiceInfoList, v30);
        v33 = PlayableVoiceInfoList;
      }
      Item = System_Collections_Generic_List_KeyValuePair_object__int____get_Item(
               (System_Collections_Generic_List_T__o *)v32,
               0,
               (const MethodInfo_43C3F1C *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Item__);
      key = (struct ServantVoiceData_array *)BasicHelper__IndexValue_KeyValuePair_object__int__(
                                               (System_Collections_Generic_List_T__o *)v32,
                                               v33,
                                               Item,
                                               (const MethodInfo_3814A94 *)Method_BasicHelper_IndexValue_KeyValuePair_ServantVoiceData____int____).fields.key;
      this->fields.randomVoiceList = key;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.randomVoiceList,
        (int32_t)key,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
      randomVoiceList = this->fields.randomVoiceList;
      this->fields.beforeVoiceIdx = v33;
      if ( randomVoiceList )
      {
        this->fields.maxPlayCnt = randomVoiceList->max_length;
        EventSvtControl__setVoiceForm(this, v30);
        forcePlayVoiceSvtIdList = this->fields.forcePlayVoiceSvtIdList;
        if ( forcePlayVoiceSvtIdList )
        {
          size = (unsigned int)forcePlayVoiceSvtIdList->fields._size;
          if ( (int)size < 1 )
            return;
          if ( *p_voicePlayedValueList )
          {
            if ( (*p_voicePlayedValueList)->fields._size <= v33 )
              return;
            v61 = sub_2213B20(int_____TypeInfo, (unsigned int)size);
            v62 = 0;
            v63 = (MissionNaviTransitionBoardItem_o *)(v61 + 32);
            do
            {
              PlayableVoiceInfoList = sub_2213B20(int___TypeInfo, 2);
              if ( !*p_forcePlayVoiceSvtIdList )
                goto LABEL_43;
              v64 = (MissionNaviTransitionBoardItem_c *)PlayableVoiceInfoList;
              PlayableVoiceInfoList = System_Collections_Generic_List_int___get_Item(
                                        *p_forcePlayVoiceSvtIdList,
                                        v62,
                                        (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( !v64 )
                goto LABEL_43;
              if ( !LODWORD(v64->_1.namespaze) )
                goto LABEL_44;
              v65 = *p_voicePlayedValueList;
              LODWORD(v64->_1.byval_arg.data) = PlayableVoiceInfoList;
              if ( !v65 )
                goto LABEL_43;
              PlayableVoiceInfoList = System_Collections_Generic_List_int___get_Item(
                                        v65,
                                        v33,
                                        (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( ((__int64)v64->_1.namespaze & 0xFFFFFFFE) == 0 )
                goto LABEL_44;
              HIDWORD(v64->_1.byval_arg.data) = PlayableVoiceInfoList;
              if ( !v61 )
                goto LABEL_43;
              if ( v62 >= *(unsigned int *)(v61 + 24) )
LABEL_44:
                sub_2213CE4(PlayableVoiceInfoList);
              v63->klass = v64;
              sub_2213A04(v63, (int32_t)v64, v66, v67, v68, v69, v70, v71);
              ++v62;
              v63 = (MissionNaviTransitionBoardItem_o *)((char *)v63 + 8);
            }
            while ( size != v62 );
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v72, v73);
            PlayableVoiceInfoList = (__int64)NetworkManager__getRequest_object_(
                                               0,
                                               (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_TopMyRoomRequest___);
            if ( PlayableVoiceInfoList )
            {
              TopMyRoomRequest__beginRequest(
                (TopMyRoomRequest_o *)PlayableVoiceInfoList,
                (System_Int32_array_array *)v61,
                0);
              return;
            }
          }
        }
      }
      goto LABEL_43;
    }
  }
}


void EventSvtControl__setBoxGachaSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listBoxGacha,
        System_String_o *assetName,
        UnityEngine_GameObject_o *performanceRoot,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  MissionNaviTransitionBoardItem_o *p_voiceListBoxGacha; // x0
  int32_t v24; // w1

  this->fields.playCnt = 0;
  this->fields.asstName = assetName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.asstName,
    (int32_t)assetName,
    assetName,
    (System_String_o *)performanceRoot,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.performanceRoot = performanceRoot;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.performanceRoot,
    (int32_t)performanceRoot,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  p_voiceListBoxGacha = (MissionNaviTransitionBoardItem_o *)&this->fields.voiceListBoxGacha;
  if ( listBoxGacha )
  {
    p_voiceListBoxGacha->klass = (MissionNaviTransitionBoardItem_c *)listBoxGacha;
    v24 = (int)listBoxGacha;
  }
  else
  {
    v24 = 0;
    p_voiceListBoxGacha->klass = 0;
  }
  sub_2213A04(p_voiceListBoxGacha, v24, v17, v18, v19, v20, v21, v22);
  this->fields.beforeVoiceIdx = -1;
}


void EventSvtControl__setIndividualShopSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listIndividualShop,
        System_String_o *assetName,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o **p_asstName; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  MissionNaviTransitionBoardItem_o *v17; // x0
  int32_t v18; // w1

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.asstName,
    (int32_t)assetName,
    assetName,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  if ( listIndividualShop )
  {
    p_asstName[11] = (struct System_String_o *)listIndividualShop;
    v17 = (MissionNaviTransitionBoardItem_o *)(p_asstName + 11);
    v18 = (int)listIndividualShop;
  }
  else
  {
    v17 = (MissionNaviTransitionBoardItem_o *)(p_asstName + 11);
    v18 = 0;
    p_asstName[11] = 0;
  }
  sub_2213A04(v17, v18, v11, v12, v13, v14, v15, v16);
  this->fields.beforeVoiceIdx = -1;
}


void EventSvtControl__setSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listRand,
        System_Collections_Generic_List_ServantVoiceData____o *listMission,
        System_Collections_Generic_List_ServantVoiceData____o *listShop,
        System_String_o *assetName,
        int32_t svtId,
        const MethodInfo *method)
{
  bool v7; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int32_t v20; // w1
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceListRand; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceListMission; // x0
  int32_t v29; // w1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceListShop; // x0
  int32_t v37; // w1
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceListOverwrite; // x19
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7

  if ( (byte_596A7A1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    byte_596A7A1 = 1;
  }
  this->fields.asstName = assetName;
  this->fields.isDead = 0;
  this->fields.playCnt = 0;
  this->fields.svtId = svtId;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.asstName,
    (int32_t)assetName,
    (System_String_o *)listMission,
    (System_String_o *)listShop,
    (int32_t)assetName,
    svtId,
    (bool)method,
    v7);
  if ( listRand && listRand->fields._size >= 1 )
  {
    v20 = (int)listRand;
    this->fields.voiceListRand = listRand;
    p_voiceListRand = &this->fields.voiceListRand;
  }
  else
  {
    v20 = 0;
    this->fields.voiceListRand = 0;
    p_voiceListRand = &this->fields.voiceListRand;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_voiceListRand, v20, v14, v15, v16, v17, v18, v19);
  if ( listMission )
  {
    this->fields.voiceListMission = listMission;
    p_voiceListMission = &this->fields.voiceListMission;
    v29 = (int)listMission;
  }
  else
  {
    p_voiceListMission = &this->fields.voiceListMission;
    v29 = 0;
    this->fields.voiceListMission = 0;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_voiceListMission, v29, v22, v23, v24, v25, v26, v27);
  if ( listShop )
  {
    this->fields.voiceListShop = listShop;
    p_voiceListShop = &this->fields.voiceListShop;
    v37 = (int)listShop;
  }
  else
  {
    p_voiceListShop = &this->fields.voiceListShop;
    v37 = 0;
    this->fields.voiceListShop = 0;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_voiceListShop, v37, v30, v31, v32, v33, v34, v35);
  this->fields.voiceListOverwrite = 0;
  p_voiceListOverwrite = &this->fields.voiceListOverwrite;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_voiceListOverwrite, 0, v39, v40, v41, v42, v43, v44);
  *((_DWORD *)p_voiceListOverwrite - 26) = -1;
}


void EventSvtControl__setVoiceForm(EventSvtControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  System_Collections_Generic_List_object__o *monitor; // x0
  __int64 v5; // x1
  struct ServantVoiceData_array *randomVoiceList; // x24
  unsigned __int64 v7; // x25
  __int64 v8; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  ServantVoiceData_o *v15; // x1
  __int64 v16; // x21
  System_Predicate_int__o *v17; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  UIStandFigureR_o *v21; // x21
  System_Action_o *v22; // x22
  Il2CppObject *v23; // [xsp+8h] [xbp-68h]

  if ( (byte_596A7A2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventSvtControl_svtVoicePlay__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Exists__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Predicate_int__TypeInfo);
    sub_2213A60(&Method_EventSvtControl___c__DisplayClass44_0__setVoiceForm_b__0__);
    sub_2213A60(&EventSvtControl___c__DisplayClass44_0_TypeInfo);
    byte_596A7A2 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  v23 = (Il2CppObject *)this;
  if ( !randomVoiceList )
    goto LABEL_20;
  if ( SLODWORD(randomVoiceList->max_length) >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = sub_2213CCC(EventSvtControl___c__DisplayClass44_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v8, 0);
      if ( v7 >= LODWORD(randomVoiceList->max_length) )
        sub_2213CE4(monitor);
      if ( !v8 )
        break;
      v15 = randomVoiceList->m_Items[v7];
      *(_QWORD *)(v8 + 16) = v15;
      v16 = v8 + 16;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 16), (int32_t)v15, v9, v10, v11, v12, v13, v14);
      v17 = (System_Predicate_int__o *)sub_2213CCC(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v17,
        (Il2CppObject *)v8,
        Method_EventSvtControl___c__DisplayClass44_0__setVoiceForm_b__0__,
        0);
      if ( !v3 )
        break;
      monitor = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___Exists(
                                                               v3,
                                                               (System_Predicate_T__o *)v17,
                                                               (const MethodInfo_4467884 *)Method_System_Collections_Generic_List_int__Exists__);
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
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            v5,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size] = v5;
        }
      }
      if ( (__int64)++v7 >= SLODWORD(randomVoiceList->max_length) )
        goto LABEL_16;
    }
LABEL_20:
    sub_2213CDC(monitor, v5);
  }
LABEL_16:
  monitor = (System_Collections_Generic_List_object__o *)v23[5].monitor;
  if ( !monitor )
    goto LABEL_20;
  monitor = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                           monitor,
                                                           0,
                                                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
  if ( !monitor )
    goto LABEL_20;
  v21 = *(UIStandFigureR_o **)&monitor->fields._size;
  v22 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v22, v23, Method_EventSvtControl_svtVoicePlay__, 0);
  if ( !v21 )
    goto LABEL_20;
  UIStandFigureR__PreloadFormAssets(v21, v3, v22, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventSvtControl__shopIndividualPlayVoice(
        EventSvtControl_o *this,
        int32_t svtId,
        System_String_array *targetVoiceIds,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x23
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  const MethodInfo *v24; // x4

  if ( (byte_596A7AB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A7AB = 1;
  }
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( targetVoiceIds )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v10);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    this->fields.callbakEndPlay = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbakEndPlay,
      (int32_t)callback,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    this->fields.randomVoiceList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.randomVoiceList, 0, v18, v19, v20, v21, v22, v23);
    EventSvtControl__TryPlayVoiceInternal(
      this,
      svtId,
      (System_Collections_Generic_IReadOnlyList_string__o *)targetVoiceIds,
      (VoicePlayCondMaster_o *)MasterData_object,
      v24);
  }
}


void EventSvtControl__stopVoice(EventSvtControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SePlayer_o **p_player; // x20
  System_String_o *asstName; // x21
  System_String_o *vcName; // x22
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_596A7AA & 1) == 0 )
  {
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&StringLiteral_25146/*"svtVoicePlay"*/);
    byte_596A7AA = 1;
  }
  p_player = &this->fields.player;
  if ( this->fields.player )
  {
    asstName = this->fields.asstName;
    vcName = this->fields.vcName;
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method, v2);
    SoundManager__stopVoice(asstName, vcName, 0.0, 0);
    if ( !*p_player )
      sub_2213CDC(0, v7);
    SePlayer__Destroy(*p_player, 0);
    this->fields.player = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.player, 0, v8, v9, v10, v11, v12, v13);
    this->fields.callbakEndPlay = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbakEndPlay, 0, v14, v15, v16, v17, v18, v19);
    *(_QWORD *)&this->fields.maxPlayCnt = 0;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_83442996(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_25146/*"svtVoicePlay"*/,
    0);
}


void EventSvtControl__svtVoicePlay(EventSvtControl_o *this, const MethodInfo *method)
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
  if ( (byte_596A7A6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (EventSvtControl_o *)sub_2213A60(&Method_EventSvtControl_SvtVoicePlayProc__);
    byte_596A7A6 = 1;
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
        sub_2213CE4(this);
      v6 = randomVoiceList->m_Items[playCnt];
      if ( v6 )
      {
        additionalPerformances = v6->fields.additionalPerformances;
        v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(v8, (Il2CppObject *)v2, Method_EventSvtControl_SvtVoicePlayProc__, 0);
        EventSvtControl__PlayPerformance(v2, additionalPerformances, 0, 1, v8, v9);
        return;
      }
LABEL_13:
      sub_2213CDC(this, method);
    }
  }
}


void EventSvtControl__welcomeVoicePlay(
        EventSvtControl_o *this,
        int32_t eventId,
        int32_t svtId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v10; // x1
  System_String_o *v11; // x2
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListOverwrite; // x8
  System_Collections_Generic_List_object__o *v13; // x21
  VoicePlayCondMaster_o *v14; // x23
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x24
  Il2CppClass *klass; // x8
  _BOOL8 isVoicePlay; // x0
  __int64 v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Random_o *v36; // x20
  int32_t v37; // w0
  struct ServantVoiceData_array *Item; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  struct ServantVoiceData_array *randomVoiceList; // x8
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596A7B3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_2213A60(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_2213A60(&System_Random_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A7B3 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               eventId,
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_35;
  if ( EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0) )
  {
    voiceListOverwrite = this->fields.voiceListOverwrite;
    if ( voiceListOverwrite )
    {
      if ( voiceListOverwrite->fields._size >= 1 )
      {
        v13 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v13,
          (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_35;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
        if ( !this->fields.voiceListOverwrite )
          goto LABEL_35;
        v14 = (VoicePlayCondMaster_o *)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v46,
          (System_Collections_Generic_List_object__o *)this->fields.voiceListOverwrite,
          (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v47 = v46;
        v46.fields._list = 0;
        *(_QWORD *)&v46.fields._index = &v47;
        while ( 1 )
        {
          v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v47,
                  (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !v15 )
            break;
          current = v47.fields._current;
          if ( !v47.fields._current )
            sub_2213CDC(v15, v16);
          if ( !LODWORD(v47.fields._current[1].monitor) )
            sub_2213CE4(v15);
          klass = v47.fields._current[2].klass;
          if ( !klass )
            sub_2213CDC(v15, v16);
          if ( !v14 )
            sub_2213CDC(v15, v16);
          isVoicePlay = VoicePlayCondMaster__isVoicePlay(v14, svtId, (System_String_o *)klass->_1.name, 0, -1, -1, 0, 0);
          if ( isVoicePlay )
          {
            if ( !v13
              || (items = v13->fields._items,
                  v28 = Method_System_Collections_Generic_List_ServantVoiceData____Add__,
                  ++v13->fields._version,
                  !items) )
            {
              sub_2213CDC(isVoicePlay, v20);
            }
            size = v13->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v13,
                current,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = &items->obj.klass + size;
              v13->fields._size = size + 1;
              v30[4] = (Il2CppClass *)current;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v30 + 4), (int32_t)current, v21, v22, v23, v24, v25, v26);
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v47,
          (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        if ( v13 )
        {
          if ( v13->fields._size >= 1 )
          {
            this->fields.callbackStopVoice = callback;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.callbackStopVoice,
              (int32_t)callback,
              v11,
              v31,
              v32,
              v33,
              v34,
              v35);
            v36 = (System_Random_o *)sub_2213CCC(System_Random_TypeInfo);
            System_Random___ctor(v36, 0);
            if ( v36 )
            {
              v37 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, const MethodInfo *))v36->klass->vtable._7_Next.methodPtr)(
                      v36,
                      (unsigned int)v13->fields._size,
                      v36->klass->vtable._7_Next.method);
              Item = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                                        v13,
                                                        v37,
                                                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
              this->fields.randomVoiceList = Item;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&this->fields.randomVoiceList,
                (int32_t)Item,
                v39,
                v40,
                v41,
                v42,
                v43,
                v44);
              randomVoiceList = this->fields.randomVoiceList;
              if ( randomVoiceList )
              {
                this->fields.maxPlayCnt = randomVoiceList->max_length;
                EventSvtControl__svtVoicePlay(this, v10);
                return;
              }
            }
LABEL_35:
            sub_2213CDC(Instance, v10);
          }
        }
      }
    }
  }
  EventSvtControl__playVoice(this, callback, (const MethodInfo *)v11);
}


void EventSvtControl__PlayPerformanceProc_d__74___ctor(
        EventSvtControl__PlayPerformanceProc_d__74_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool EventSvtControl__PlayPerformanceProc_d__74__MoveNext(
        EventSvtControl__PlayPerformanceProc_d__74_o *this,
        const MethodInfo *method)
{
  EventSvtControl__PlayPerformanceProc_d__74_o *v2; // x19
  int32_t _1__state; // w8
  struct EventSvtControl_o *_4__this; // x22
  Il2CppObject *v5; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct EventSvtControl_o *v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  Il2CppObject *animName; // x1
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v27; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  bool result; // w0
  struct EventSvtControl___c__DisplayClass74_0_o *_8__1; // x8
  Il2CppObject *v37; // x20
  System_Func_bool__o *v38; // x21
  UnityEngine_WaitUntil_o *v39; // x20
  MissionNaviTransitionBoardItem_o *v40; // x19
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  struct System_Action_o *playEndAction; // x8

  v2 = this;
  if ( (byte_596A7C2 & 1) == 0 )
  {
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&Method_EventSvtControl___c__DisplayClass74_0__PlayPerformanceProc_b__0__);
    sub_2213A60(&EventSvtControl___c__DisplayClass74_0_TypeInfo);
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (EventSvtControl__PlayPerformanceProc_d__74_o *)sub_2213A60(&UnityEngine_WaitUntil_TypeInfo);
    byte_596A7C2 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
LABEL_18:
    playEndAction = v2->fields.playEndAction;
    if ( playEndAction )
      ((void (__fastcall *)(intptr_t, intptr_t))playEndAction->fields.invoke_impl)(
        playEndAction->fields.method_code,
        playEndAction->fields.method);
    return 0;
  }
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    goto LABEL_11;
  }
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v5 = (Il2CppObject *)sub_2213CCC(EventSvtControl___c__DisplayClass74_0_TypeInfo);
    System_Object___ctor(v5, 0);
    v2->fields.__8__1 = (struct EventSvtControl___c__DisplayClass74_0_o *)v5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__8__1, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    this = (EventSvtControl__PlayPerformanceProc_d__74_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_21;
    v18 = v2->fields.__4__this;
    *(_QWORD *)&this->fields.__1__state = v18;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v18, v12, v13, v14, v15, v16, v17);
    this = (EventSvtControl__PlayPerformanceProc_d__74_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_21;
    animName = (Il2CppObject *)v2->fields.animName;
    this->fields.__2__current = animName;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
      (int32_t)animName,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    delay = v2->fields.delay;
    if ( delay > 0.0 )
    {
      v27 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v27, delay, 0);
      v2->fields.__2__current = (Il2CppObject *)v27;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
      sub_2213A04(p__2__current, (int32_t)v27, v29, v30, v31, v32, v33, v34);
      result = 1;
      p__2__current[-1].fields._BoardType_k__BackingField = 1;
      return result;
    }
LABEL_11:
    if ( _4__this )
    {
      this = (EventSvtControl__PlayPerformanceProc_d__74_o *)_4__this->fields.animationRef;
      if ( this )
      {
        UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)this, 0);
        _8__1 = v2->fields.__8__1;
        if ( _8__1 )
        {
          this = (EventSvtControl__PlayPerformanceProc_d__74_o *)_4__this->fields.animationRef;
          if ( this )
          {
            UnityEngine_Animation__Play_83078544((UnityEngine_Animation_o *)this, _8__1->fields.animName, 0);
            if ( v2->fields.isWaitPerformance )
            {
              v37 = (Il2CppObject *)v2->fields.__8__1;
              v38 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                v38,
                v37,
                Method_EventSvtControl___c__DisplayClass74_0__PlayPerformanceProc_b__0__,
                0);
              v39 = (UnityEngine_WaitUntil_o *)sub_2213CCC(UnityEngine_WaitUntil_TypeInfo);
              UnityEngine_WaitUntil___ctor(v39, v38, 0);
              v2->fields.__2__current = (Il2CppObject *)v39;
              v40 = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
              sub_2213A04(v40, (int32_t)v39, v41, v42, v43, v44, v45, v46);
              result = 1;
              v40[-1].fields._BoardType_k__BackingField = 2;
              return result;
            }
            goto LABEL_18;
          }
        }
      }
    }
LABEL_21:
    sub_2213CDC(this, method);
  }
  return 0;
}


Il2CppObject *EventSvtControl__PlayPerformanceProc_d__74__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventSvtControl__PlayPerformanceProc_d__74_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn EventSvtControl__PlayPerformanceProc_d__74__System_Collections_IEnumerator_Reset(
        EventSvtControl__PlayPerformanceProc_d__74_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_EventSvtControl__PlayPerformanceProc_d__74_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *EventSvtControl__PlayPerformanceProc_d__74__System_Collections_IEnumerator_get_Current(
        EventSvtControl__PlayPerformanceProc_d__74_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void EventSvtControl__PlayPerformanceProc_d__74__System_IDisposable_Dispose(
        EventSvtControl__PlayPerformanceProc_d__74_o *this,
        const MethodInfo *method)
{
  ;
}


void EventSvtControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596A7BE & 1) == 0 )
  {
    sub_2213A60(&EventSvtControl___c_TypeInfo);
    byte_596A7BE = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventSvtControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventSvtControl___c_TypeInfo->static_fields->__9 = (struct EventSvtControl___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventSvtControl___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventSvtControl___c___ctor(EventSvtControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *EventSvtControl___c___TryGetPlayableVoiceInfoList_b__65_0(
        EventSvtControl___c_o *this,
        ServantVoiceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.id;
}


int32_t EventSvtControl___c___playVoice_b__45_0(
        EventSvtControl___c_o *this,
        System_Collections_Generic_KeyValuePair_ServantVoiceData____int__o x,
        const MethodInfo *method)
{
  int32_t value; // w19

  value = x.fields.value;
  if ( (byte_596A7BF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int__get_Value__);
    byte_596A7BF = 1;
  }
  return value;
}


void EventSvtControl___c__DisplayClass44_0___ctor(
        EventSvtControl___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool EventSvtControl___c__DisplayClass44_0___setVoiceForm_b__0(
        EventSvtControl___c__DisplayClass44_0_o *this,
        int32_t a,
        const MethodInfo *method)
{
  struct ServantVoiceData_o *voice; // x8
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  voice = this->fields.voice;
  v5 = a;
  if ( !voice )
    sub_2213CDC(this, *(_QWORD *)&a);
  return System_Int32__Equals_77138484((int32_t)&v5, voice->fields.form, 0);
}


void EventSvtControl___c__DisplayClass57_0___ctor(
        EventSvtControl___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventSvtControl___c__DisplayClass57_1___ctor(
        EventSvtControl___c__DisplayClass57_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventSvtControl___c__DisplayClass57_1___boxGachaPlayVoice_b__0(
        EventSvtControl___c__DisplayClass57_1_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct EventSvtControl___c__DisplayClass57_0_o *CS___8__locals1; // x8
  EventSvtControl___c__DisplayClass57_1_o *v9; // x19
  struct System_Action_o *vdArray; // x1
  struct EventSvtControl___c__DisplayClass57_0_o *v11; // x8
  struct System_Action_o *_9__0; // x9
  bool skipPerformance; // w8
  struct EventSvtControl___c__DisplayClass57_0_o *v14; // x8
  struct System_Action_o *callBackStartPlay; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_10;
  v9 = this;
  this = (EventSvtControl___c__DisplayClass57_1_o *)CS___8__locals1->fields.__4__this;
  if ( !this )
    goto LABEL_10;
  vdArray = (struct System_Action_o *)v9->fields.vdArray;
  this[1].fields.__9__0 = vdArray;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this[1].fields.__9__0, (int32_t)vdArray, v2, v3, v4, v5, v6, v7);
  v11 = v9->fields.CS___8__locals1;
  if ( !v11
    || (this = (EventSvtControl___c__DisplayClass57_1_o *)v11->fields.__4__this) == 0
    || (_9__0 = this[1].fields.__9__0) == 0
    || (skipPerformance = v11->fields.arg.fields.skipPerformance,
        LODWORD(this[2].klass) = _9__0->fields.invoke_impl,
        BYTE2(this[5].fields.vdArray) = skipPerformance,
        EventSvtControl__svtVoicePlay((EventSvtControl_o *)this, method),
        (v14 = v9->fields.CS___8__locals1) == 0) )
  {
LABEL_10:
    sub_2213CDC(this, method);
  }
  callBackStartPlay = v14->fields.arg.fields.callBackStartPlay;
  if ( callBackStartPlay )
    ((void (__fastcall *)(intptr_t, intptr_t))callBackStartPlay->fields.invoke_impl)(
      callBackStartPlay->fields.method_code,
      callBackStartPlay->fields.method);
}


void EventSvtControl___c__DisplayClass61_0___ctor(
        EventSvtControl___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventSvtControl___c__DisplayClass61_0___PlayEventTradeVoice_b__0(
        EventSvtControl___c__DisplayClass61_0_o *this,
        ServantVoiceData_array *dataList,
        const MethodInfo *method)
{
  struct System_Func_ServantVoiceData__bool__o *_9__1; // x22
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596A7C0 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_ServantVoiceData___);
    sub_2213A60(&System_Func_ServantVoiceData__bool__TypeInfo);
    sub_2213A60(&Method_EventSvtControl___c__DisplayClass61_0__PlayEventTradeVoice_b__1__);
    byte_596A7C0 = 1;
  }
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Func_ServantVoiceData__bool__o *)sub_2213CCC(System_Func_ServantVoiceData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      (System_Func_object__bool__o *)_9__1,
      (Il2CppObject *)this,
      Method_EventSvtControl___c__DisplayClass61_0__PlayEventTradeVoice_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v6, v7, v8, v9, v10, v11);
  }
  return BasicHelper__Any_object__58785420(
           (System_Object_array *)dataList,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_380FE8C *)Method_BasicHelper_Any_ServantVoiceData___);
}


bool EventSvtControl___c__DisplayClass61_0___PlayEventTradeVoice_b__1(
        EventSvtControl___c__DisplayClass61_0_o *this,
        ServantVoiceData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_2213CDC(this, 0);
  return System_String__op_Equality(data->fields.id, this->fields.id, 0);
}


void EventSvtControl___c__DisplayClass62_0___ctor(
        EventSvtControl___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventSvtControl___c__DisplayClass62_0___PlayEventCraftVoice_b__0(
        EventSvtControl___c__DisplayClass62_0_o *this,
        ServantVoiceData_array *dataList,
        const MethodInfo *method)
{
  struct System_Func_ServantVoiceData__bool__o *_9__1; // x22
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596A7C1 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_ServantVoiceData___);
    sub_2213A60(&System_Func_ServantVoiceData__bool__TypeInfo);
    sub_2213A60(&Method_EventSvtControl___c__DisplayClass62_0__PlayEventCraftVoice_b__1__);
    byte_596A7C1 = 1;
  }
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Func_ServantVoiceData__bool__o *)sub_2213CCC(System_Func_ServantVoiceData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      (System_Func_object__bool__o *)_9__1,
      (Il2CppObject *)this,
      Method_EventSvtControl___c__DisplayClass62_0__PlayEventCraftVoice_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v6, v7, v8, v9, v10, v11);
  }
  return BasicHelper__Any_object__58785420(
           (System_Object_array *)dataList,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_380FE8C *)Method_BasicHelper_Any_ServantVoiceData___);
}


bool EventSvtControl___c__DisplayClass62_0___PlayEventCraftVoice_b__1(
        EventSvtControl___c__DisplayClass62_0_o *this,
        ServantVoiceData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_2213CDC(this, 0);
  return System_String__op_Equality(data->fields.id, this->fields.id, 0);
}


void EventSvtControl___c__DisplayClass74_0___ctor(
        EventSvtControl___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventSvtControl___c__DisplayClass74_0___PlayPerformanceProc_b__0(
        EventSvtControl___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  struct EventSvtControl_o *_4__this; // x8
  EventSvtControl___c__DisplayClass74_0_o *v3; // x19
  struct EventSvtControl_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  v3 = this;
  this = (EventSvtControl___c__DisplayClass74_0_o *)_4__this->fields.animationRef;
  if ( !this )
    goto LABEL_10;
  this = (EventSvtControl___c__DisplayClass74_0_o *)UnityEngine_Animation__get_Item(
                                                      (UnityEngine_Animation_o *)this,
                                                      v3->fields.animName,
                                                      0);
  if ( !this )
    goto LABEL_10;
  if ( UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0) >= 1.0 )
    return 1;
  v4 = v3->fields.__4__this;
  if ( !v4 || (this = (EventSvtControl___c__DisplayClass74_0_o *)v4->fields.animationRef) == 0 )
LABEL_10:
    sub_2213CDC(this, method);
  return !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0);
}