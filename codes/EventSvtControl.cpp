void EventSvtControl___cctor(const MethodInfo *method)
{
  if ( (byte_4C31EAD & 1) == 0 )
  {
    sub_1C32C20(&EventSvtControl_TypeInfo);
    byte_4C31EAD = 1;
  }
  LODWORD(EventSvtControl_TypeInfo->static_fields->BASE_MOVE_TIME) = (struct EventSvtControl_StaticFields)1053609165;
}


void EventSvtControl___ctor(EventSvtControl_o *this, const MethodInfo *method)
{
  this->fields.volume = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
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
  void (__fastcall *invoke_impl)(intptr_t, intptr_t); // x2
  intptr_t method_code; // x0
  intptr_t v9; // x1
  System_Action_o *v10; // x21
  struct System_Action_o *v11; // x0
  System_Action_c *v12; // x1
  struct System_Action_o **p_performanceEndAction; // x20
  UnityEngine_GameObject_o *transform; // x0
  float x; // s10
  float y; // s8
  float z; // s9
  Il2CppObject *ComponentInChildren_object; // x21
  struct System_Action_o *v19; // x8
  UnityEngine_GameObject_o *v20; // x20
  EventSvtControl_c *v21; // x0
  float v22; // s10
  UnityEngine_GameObject_o *v23; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v25; // x1
  EventSvtControl_o *v26; // x0
  const MethodInfo *v27; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4C31EAB & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_EventSvtControl_ReleasePerformance__);
    sub_1C32C20(&EventSvtControl_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_3954/*"CallPerformanceEndAction"*/);
    byte_4C31EAB = 1;
  }
  objectRef = (UnityEngine_Object_o *)this->fields.objectRef;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(objectRef, 0, 0) )
  {
    if ( endAction )
    {
      invoke_impl = (void (__fastcall *)(intptr_t, intptr_t))endAction->fields.invoke_impl;
      method_code = endAction->fields.method_code;
      v9 = endAction->fields.method;
LABEL_21:
      invoke_impl(method_code, v9);
      return;
    }
    return;
  }
  v10 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_EventSvtControl_ReleasePerformance__, 0);
  v11 = (struct System_Action_o *)System_Delegate__Combine((System_Delegate_o *)endAction, (System_Delegate_o *)v10, 0);
  if ( v11 )
  {
    v12 = System_Action_TypeInfo;
    if ( v11->klass != System_Action_TypeInfo || (this->fields.performanceEndAction = v11, v11->klass != v12) )
    {
      v26 = (EventSvtControl_o *)sub_1C3313C(v11);
      EventSvtControl__CallPerformanceEndAction(v26, v27);
      return;
    }
    p_performanceEndAction = &this->fields.performanceEndAction;
  }
  else
  {
    p_performanceEndAction = &this->fields.performanceEndAction;
    this->fields.performanceEndAction = 0;
  }
  sub_1C32BC4(p_performanceEndAction, v11);
  transform = this->fields.objectRef;
  if ( !transform
    || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0)) == 0
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0),
        (transform = this->fields.objectRef) == 0) )
  {
LABEL_28:
    sub_1C32E7C(transform);
  }
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 transform,
                                 (const MethodInfo_3134BD4 *)Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                            (UnityEngine_Object_o *)ComponentInChildren_object,
                                            0,
                                            0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( ComponentInChildren_object )
    {
      v20 = this->fields.objectRef;
      v21 = EventSvtControl_TypeInfo;
      v22 = x - (float)SLODWORD(ComponentInChildren_object[10].monitor);
      if ( !EventSvtControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSvtControl_TypeInfo);
        v21 = EventSvtControl_TypeInfo;
      }
      v29.fields.x = v22;
      v29.fields.y = y;
      v29.fields.z = z;
      transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v20, v21->static_fields->BASE_MOVE_TIME, v29, 0);
      if ( transform )
      {
        v23 = transform;
        LODWORD(transform[1].monitor) = 3;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        v23[3].monitor = gameObject;
        sub_1C32BC4(&v23[3].monitor, gameObject);
        v25 = StringLiteral_3954/*"CallPerformanceEndAction"*/;
        v23[3].fields.m_CachedPtr = StringLiteral_3954/*"CallPerformanceEndAction"*/;
        sub_1C32BC4(&v23[3].fields, v25);
        return;
      }
    }
    goto LABEL_28;
  }
  v19 = *p_performanceEndAction;
  if ( *p_performanceEndAction )
  {
    invoke_impl = (void (__fastcall *)(intptr_t, intptr_t))v19->fields.invoke_impl;
    method_code = v19->fields.method_code;
    v9 = v19->fields.method;
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
  if ( (byte_4C31E9B & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    this = (EventSvtControl_o *)sub_1C32C20(&Method_EventSvtControl_EndPlayProc__);
    byte_4C31E9B = 1;
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
        sub_1C32E84(this);
      v5 = randomVoiceList->m_Items[v4];
      if ( !v5 )
LABEL_10:
        sub_1C32E7C(this);
      additionalPerformances = v5->fields.additionalPerformances;
      v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)v2, Method_EventSvtControl_EndPlayProc__, 0);
      EventSvtControl__PlayPerformance(v2, additionalPerformances, 2, 1, v7, v8);
    }
  }
}


void EventSvtControl__EndPlayProc(EventSvtControl_o *this, const MethodInfo *method)
{
  EventSvtControl_o *v2; // x19
  __int64 playCnt; // x8
  struct ServantVoiceData_array *randomVoiceList; // x9
  ServantVoiceData_o *v5; // x8
  struct SePlayer_o **p_player; // x0
  struct System_Action_o **p_callbakEndPlay; // x0
  System_Action_o *callbakEndPlay; // x20
  struct System_Action_o **p_callbackStopVoice; // x0
  struct System_Action_o *callbackStopVoice; // x20

  v2 = this;
  if ( (byte_4C31E9C & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_23871/*"svtVoicePlay"*/);
    this = (EventSvtControl_o *)sub_1C32C20(&StringLiteral_5453/*"END_PLAY"*/);
    byte_4C31E9C = 1;
  }
  playCnt = v2->fields.playCnt;
  if ( (int)playCnt < v2->fields.maxPlayCnt )
  {
    randomVoiceList = v2->fields.randomVoiceList;
    if ( randomVoiceList )
    {
      if ( (unsigned int)playCnt >= LODWORD(randomVoiceList->max_length) )
        sub_1C32E84(this);
      v5 = randomVoiceList->m_Items[playCnt];
      if ( v5 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v2,
          (System_String_o *)StringLiteral_23871/*"svtVoicePlay"*/,
          v5->fields.delay,
          0);
        return;
      }
    }
LABEL_16:
    sub_1C32E7C(this);
  }
  p_player = &v2->fields.player;
  if ( v2->fields.player )
  {
    *p_player = 0;
    sub_1C32BC4(p_player, 0);
  }
  p_callbakEndPlay = &v2->fields.callbakEndPlay;
  callbakEndPlay = v2->fields.callbakEndPlay;
  v2->fields.playCnt = 0;
  *(_WORD *)&v2->fields.isUnSkippable = 0;
  v2->fields.isPlayBoxGachaVoice = 0;
  if ( callbakEndPlay )
  {
    *p_callbakEndPlay = 0;
    sub_1C32BC4(p_callbakEndPlay, 0);
    ActionExtensions__Call(callbakEndPlay, 0);
  }
  else
  {
    p_callbackStopVoice = &v2->fields.callbackStopVoice;
    callbackStopVoice = v2->fields.callbackStopVoice;
    if ( callbackStopVoice )
    {
      *p_callbackStopVoice = 0;
      sub_1C32BC4(p_callbackStopVoice, 0);
      ((void (__fastcall *)(intptr_t, intptr_t))callbackStopVoice->fields.invoke_impl)(
        callbackStopVoice->fields.method_code,
        callbackStopVoice->fields.method);
    }
    else
    {
      this = (EventSvtControl_o *)v2->fields.fsm;
      if ( !this )
        goto LABEL_16;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5453/*"END_PLAY"*/, 0);
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
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v9; // w23
  __int64 v10; // x24
  int v11; // w21
  bool v12; // w19
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C31EA7 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    byte_4C31EA7 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  voiceListBoxGacha = this->fields.voiceListBoxGacha;
  if ( !voiceListBoxGacha )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)voiceListBoxGacha,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v15 = v14;
  do
  {
LABEL_5:
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v6 )
    {
      v12 = 0;
      v11 = 8;
      goto LABEL_15;
    }
    current = v15.fields._current;
    if ( !v15.fields._current )
      sub_1C32E7C(v6);
    monitor = (int)v15.fields._current[1].monitor;
  }
  while ( monitor < 1 );
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= monitor )
      sub_1C32E84(v6);
    v10 = *((_QWORD *)&current[2].klass + (int)v9);
    if ( !v10 )
      sub_1C32E7C(v6);
    v6 = System_String__op_Equality(*(System_String_o **)(v10 + 16), voiceId, 0);
    if ( v6 )
      break;
    monitor = (int)current[1].monitor;
    if ( (int)++v9 >= monitor )
      goto LABEL_5;
  }
  v11 = 7;
  v12 = *(_BYTE *)(v10 + 68) != 0;
LABEL_15:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  return v12 && v11 == 7;
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
  int32_t v7; // w22
  __int64 Master_object; // x0
  int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v12; // x23
  unsigned __int64 v13; // x29
  __int64 v14; // x28
  System_String_o **m_Items; // x20
  EventSvtControl___c__DisplayClass62_0_o *v16; // x26
  struct System_String_o *v17; // x1
  System_String_o **p_id; // x25
  System_String_o **v19; // x23
  System_String_array *v20; // x20
  int32_t v21; // w21
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListCraft; // x22
  __int64 v23; // x19
  System_Func_object__bool__o *v24; // x28
  System_Collections_Generic_List_T__o *v25; // x0
  System_Func_T__bool__o *v26; // x1
  System_String_o *v27; // x1
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  int32_t v32; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  _BOOL8 v34; // x0
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v37; // w23
  __int64 v38; // x8
  __int64 v39; // x0
  const MethodInfo *v40; // x1
  System_Action_o *v41; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_object__o *v42; // [xsp+18h] [xbp-A8h]
  VoicePlayCondMaster_o *v43; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+40h] [xbp-80h] BYREF

  v7 = svtId;
  if ( (byte_4C31EA5 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_ServantVoiceData_____);
    sub_1C32C20(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C32C20(&System_Func_ServantVoiceData____bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&Method_EventSvtControl___c__DisplayClass62_0__PlayEventCraftVoice_b__0__);
    sub_1C32C20(&EventSvtControl___c__DisplayClass62_0_TypeInfo);
    byte_4C31EA5 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !targetVoiceIds->max_length )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( max_length )
    {
      Item = targetVoiceIds->m_Items[0];
      goto LABEL_27;
    }
LABEL_45:
    sub_1C32E84(Master_object);
  }
  v41 = callback;
  v12 = (VoicePlayCondMaster_o *)Master_object;
  v42 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v42,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)targetVoiceIds->max_length >= 1 )
  {
    v13 = 0;
    v14 = (unsigned int)targetVoiceIds->max_length;
    m_Items = targetVoiceIds->m_Items;
    v43 = v12;
    do
    {
      v16 = (EventSvtControl___c__DisplayClass62_0_o *)sub_1C32E6C(EventSvtControl___c__DisplayClass62_0_TypeInfo);
      EventSvtControl___c__DisplayClass62_0___ctor(v16, 0);
      if ( v13 >= LODWORD(targetVoiceIds->max_length) )
        goto LABEL_45;
      if ( !v16 )
        goto LABEL_44;
      v17 = m_Items[v13];
      v16->fields.id = v17;
      p_id = &v16->fields.id;
      Master_object = sub_1C32BC4(&v16->fields, v17);
      if ( !v12 )
        goto LABEL_44;
      Master_object = VoicePlayCondMaster__isVoicePlay(v12, v7, *p_id, 0, -1, -1, 0, 0, 0);
      if ( (Master_object & 1) != 0 )
      {
        v19 = m_Items;
        v20 = targetVoiceIds;
        v21 = v7;
        voiceListCraft = this->fields.voiceListCraft;
        v23 = v14;
        v24 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_ServantVoiceData____bool__TypeInfo);
        System_Func_object__bool____ctor(
          v24,
          (Il2CppObject *)v16,
          Method_EventSvtControl___c__DisplayClass62_0__PlayEventCraftVoice_b__0__,
          0);
        v25 = (System_Collections_Generic_List_T__o *)voiceListCraft;
        v7 = v21;
        targetVoiceIds = v20;
        m_Items = v19;
        v12 = v43;
        v26 = (System_Func_T__bool__o *)v24;
        v14 = v23;
        Master_object = BasicHelper__Any_object_(
                          v25,
                          v26,
                          (const MethodInfo_30C6790 *)Method_BasicHelper_Any_ServantVoiceData_____);
        if ( (Master_object & 1) != 0 )
        {
          if ( !v42 )
            goto LABEL_44;
          v27 = *p_id;
          items = v42->fields._items;
          v29 = Method_System_Collections_Generic_List_string__Add__;
          ++v42->fields._version;
          if ( !items )
            goto LABEL_44;
          size = v42->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v42,
              (Il2CppObject *)v27,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v31 = &items->obj.klass + size;
            v42->fields._size = size + 1;
            v31[4] = (Il2CppClass *)v27;
            Master_object = sub_1C32BC4(v31 + 4, v27);
          }
        }
      }
    }
    while ( v14 != ++v13 );
  }
  if ( !v42 )
    goto LABEL_44;
  v32 = UnityEngine_Random__Range_71183860(0, v42->fields._size, 0);
  callback = v41;
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v42,
                              v32,
                              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_27:
  this->fields.callbakEndPlay = callback;
  sub_1C32BC4(&this->fields.callbakEndPlay, callback);
  this->fields.randomVoiceList = 0;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1C32BC4(&this->fields.randomVoiceList, 0);
  Master_object = (__int64)this->fields.voiceListCraft;
  if ( !Master_object )
LABEL_44:
    sub_1C32E7C(Master_object);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v44,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v45 = v44;
LABEL_29:
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v45,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v34 )
      break;
    current = v45.fields._current;
    if ( !v45.fields._current )
      sub_1C32E7C(v34);
    monitor = (int)v45.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v37 = 0;
      while ( 1 )
      {
        if ( v37 >= monitor )
          sub_1C32E84(v34);
        v38 = *((_QWORD *)&current[2].klass + (int)v37);
        if ( !v38 )
          sub_1C32E7C(v34);
        v34 = System_String__op_Equality(*(System_String_o **)(v38 + 16), Item, 0);
        if ( v34 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v37 >= monitor )
          goto LABEL_29;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      v39 = sub_1C32BC4(&this->fields.randomVoiceList, current);
      if ( !*p_randomVoiceList )
        sub_1C32E7C(v39);
      this->fields.maxPlayCnt = (*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v40);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v45,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void EventSvtControl__PlayEventRecipeVoice(
        EventSvtControl_o *this,
        int32_t svtId,
        System_String_array *targetVoiceIds,
        System_Action_o *callback,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v12; // x24
  System_Collections_Generic_List_object__o *v13; // x23
  __int64 v14; // x26
  __int64 v15; // x27
  System_String_o *v16; // x25
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  int32_t v21; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  _BOOL8 v23; // x0
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x0
  const MethodInfo *v29; // x1
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C31EA3 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C31EA3 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !targetVoiceIds->max_length )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_42:
    sub_1C32E7C(Instance);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
LABEL_22:
      sub_1C32E84(Instance);
    Item = targetVoiceIds->m_Items[0];
    goto LABEL_25;
  }
  v12 = (VoicePlayCondMaster_o *)Instance;
  v13 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)targetVoiceIds->max_length >= 1 )
  {
    v14 = 0;
    v15 = (unsigned int)targetVoiceIds->max_length - 1LL;
    while ( v12 )
    {
      v16 = targetVoiceIds->m_Items[v14];
      Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v12, svtId, v16, 0, -1, -1, 0, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v13 )
          goto LABEL_42;
        items = v13->fields._items;
        v18 = Method_System_Collections_Generic_List_string__Add__;
        ++v13->fields._version;
        if ( !items )
          goto LABEL_42;
        size = v13->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            (Il2CppObject *)v16,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v16;
          Instance = (DataManager_o *)sub_1C32BC4(v20 + 4, v16);
        }
      }
      if ( v15 == v14 )
        goto LABEL_23;
      if ( ++v14 >= (unsigned __int64)LODWORD(targetVoiceIds->max_length) )
        goto LABEL_22;
    }
    goto LABEL_42;
  }
LABEL_23:
  if ( !v13 )
    goto LABEL_42;
  v21 = UnityEngine_Random__Range_71183860(0, v13->fields._size, 0);
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v13,
                              v21,
                              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_25:
  this->fields.callbakEndPlay = callback;
  sub_1C32BC4(&this->fields.callbakEndPlay, callback);
  this->fields.randomVoiceList = 0;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1C32BC4(&this->fields.randomVoiceList, 0);
  Instance = (DataManager_o *)this->fields.voiceListRecipe;
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v31 = v30;
LABEL_27:
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v23 )
      break;
    current = v31.fields._current;
    if ( !v31.fields._current )
      sub_1C32E7C(v23);
    monitor = (int)v31.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v26 = 0;
      while ( 1 )
      {
        if ( v26 >= monitor )
          sub_1C32E84(v23);
        v27 = *((_QWORD *)&current[2].klass + (int)v26);
        if ( !v27 )
          sub_1C32E7C(v23);
        v23 = System_String__op_Equality(*(System_String_o **)(v27 + 16), Item, 0);
        if ( v23 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v26 >= monitor )
          goto LABEL_27;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      v28 = sub_1C32BC4(&this->fields.randomVoiceList, current);
      if ( !*p_randomVoiceList )
        sub_1C32E7C(v28);
      this->fields.maxPlayCnt = (*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v29);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void EventSvtControl__PlayEventTradeVoice(
        EventSvtControl_o *this,
        int32_t svtId,
        System_String_array *targetVoiceIds,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v7; // w22
  __int64 Master_object; // x0
  int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v12; // x23
  unsigned __int64 v13; // x29
  __int64 v14; // x28
  System_String_o **m_Items; // x20
  EventSvtControl___c__DisplayClass61_0_o *v16; // x26
  struct System_String_o *v17; // x1
  System_String_o **p_id; // x25
  System_String_o **v19; // x23
  System_String_array *v20; // x20
  int32_t v21; // w21
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListTrade; // x22
  __int64 v23; // x19
  System_Func_object__bool__o *v24; // x28
  System_Collections_Generic_List_T__o *v25; // x0
  System_Func_T__bool__o *v26; // x1
  System_String_o *v27; // x1
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  int32_t v32; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  _BOOL8 v34; // x0
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v37; // w23
  __int64 v38; // x8
  __int64 v39; // x0
  const MethodInfo *v40; // x1
  System_Action_o *v41; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_object__o *v42; // [xsp+18h] [xbp-A8h]
  VoicePlayCondMaster_o *v43; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+40h] [xbp-80h] BYREF

  v7 = svtId;
  if ( (byte_4C31EA4 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_ServantVoiceData_____);
    sub_1C32C20(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C32C20(&System_Func_ServantVoiceData____bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&Method_EventSvtControl___c__DisplayClass61_0__PlayEventTradeVoice_b__0__);
    sub_1C32C20(&EventSvtControl___c__DisplayClass61_0_TypeInfo);
    byte_4C31EA4 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !targetVoiceIds->max_length )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( max_length )
    {
      Item = targetVoiceIds->m_Items[0];
      goto LABEL_27;
    }
LABEL_45:
    sub_1C32E84(Master_object);
  }
  v41 = callback;
  v12 = (VoicePlayCondMaster_o *)Master_object;
  v42 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v42,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)targetVoiceIds->max_length >= 1 )
  {
    v13 = 0;
    v14 = (unsigned int)targetVoiceIds->max_length;
    m_Items = targetVoiceIds->m_Items;
    v43 = v12;
    do
    {
      v16 = (EventSvtControl___c__DisplayClass61_0_o *)sub_1C32E6C(EventSvtControl___c__DisplayClass61_0_TypeInfo);
      EventSvtControl___c__DisplayClass61_0___ctor(v16, 0);
      if ( v13 >= LODWORD(targetVoiceIds->max_length) )
        goto LABEL_45;
      if ( !v16 )
        goto LABEL_44;
      v17 = m_Items[v13];
      v16->fields.id = v17;
      p_id = &v16->fields.id;
      Master_object = sub_1C32BC4(&v16->fields, v17);
      if ( !v12 )
        goto LABEL_44;
      Master_object = VoicePlayCondMaster__isVoicePlay(v12, v7, *p_id, 0, -1, -1, 0, 0, 0);
      if ( (Master_object & 1) != 0 )
      {
        v19 = m_Items;
        v20 = targetVoiceIds;
        v21 = v7;
        voiceListTrade = this->fields.voiceListTrade;
        v23 = v14;
        v24 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_ServantVoiceData____bool__TypeInfo);
        System_Func_object__bool____ctor(
          v24,
          (Il2CppObject *)v16,
          Method_EventSvtControl___c__DisplayClass61_0__PlayEventTradeVoice_b__0__,
          0);
        v25 = (System_Collections_Generic_List_T__o *)voiceListTrade;
        v7 = v21;
        targetVoiceIds = v20;
        m_Items = v19;
        v12 = v43;
        v26 = (System_Func_T__bool__o *)v24;
        v14 = v23;
        Master_object = BasicHelper__Any_object_(
                          v25,
                          v26,
                          (const MethodInfo_30C6790 *)Method_BasicHelper_Any_ServantVoiceData_____);
        if ( (Master_object & 1) != 0 )
        {
          if ( !v42 )
            goto LABEL_44;
          v27 = *p_id;
          items = v42->fields._items;
          v29 = Method_System_Collections_Generic_List_string__Add__;
          ++v42->fields._version;
          if ( !items )
            goto LABEL_44;
          size = v42->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v42,
              (Il2CppObject *)v27,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v31 = &items->obj.klass + size;
            v42->fields._size = size + 1;
            v31[4] = (Il2CppClass *)v27;
            Master_object = sub_1C32BC4(v31 + 4, v27);
          }
        }
      }
    }
    while ( v14 != ++v13 );
  }
  if ( !v42 )
    goto LABEL_44;
  v32 = UnityEngine_Random__Range_71183860(0, v42->fields._size, 0);
  callback = v41;
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v42,
                              v32,
                              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_27:
  this->fields.callbakEndPlay = callback;
  sub_1C32BC4(&this->fields.callbakEndPlay, callback);
  this->fields.randomVoiceList = 0;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1C32BC4(&this->fields.randomVoiceList, 0);
  Master_object = (__int64)this->fields.voiceListTrade;
  if ( !Master_object )
LABEL_44:
    sub_1C32E7C(Master_object);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v44,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v45 = v44;
LABEL_29:
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v45,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v34 )
      break;
    current = v45.fields._current;
    if ( !v45.fields._current )
      sub_1C32E7C(v34);
    monitor = (int)v45.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v37 = 0;
      while ( 1 )
      {
        if ( v37 >= monitor )
          sub_1C32E84(v34);
        v38 = *((_QWORD *)&current[2].klass + (int)v37);
        if ( !v38 )
          sub_1C32E7C(v34);
        v34 = System_String__op_Equality(*(System_String_o **)(v38 + 16), Item, 0);
        if ( v34 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v37 >= monitor )
          goto LABEL_29;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      v39 = sub_1C32BC4(&this->fields.randomVoiceList, current);
      if ( !*p_randomVoiceList )
        sub_1C32E7C(v39);
      this->fields.maxPlayCnt = (*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v40);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v45,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


void EventSvtControl__PlayPerformance(
        EventSvtControl_o *this,
        ServantVoicePerformance_o *performances,
        int32_t timing,
        bool isWaitPerformance,
        System_Action_o *playEndAction,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_objectRef; // x24
  UnityEngine_Object_o *objectRef; // x25
  UnityEngine_GameObject_o *performanceRoot; // x0
  System_String_o *assetName; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Effect; // x0
  UnityEngine_Object_o *v17; // x25
  UnityEngine_Object_o *animationRef; // x25
  Il2CppObject *ComponentInChildren_object; // x0
  UnityEngine_Object_o *v20; // x24
  struct ServantVoicePerformance_ServantVoicePerformanceDetail_o **p_afterPerformance; // x8
  struct ServantVoicePerformance_ServantVoicePerformanceDetail_o *v22; // x22
  const MethodInfo *v23; // x4
  System_Collections_IEnumerator_o *v24; // x1

  if ( (byte_4C31EA9 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31EA9 = 1;
  }
  if ( !this->fields.isPlayBoxGachaVoice
    || !performances
    || System_String__IsNullOrEmpty(performances->fields.assetName, 0) )
  {
    goto LABEL_6;
  }
  p_objectRef = &this->fields.objectRef;
  objectRef = (UnityEngine_Object_o *)this->fields.objectRef;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(objectRef, 0, 0) )
  {
    performanceRoot = this->fields.performanceRoot;
    if ( !performanceRoot )
      goto LABEL_32;
    assetName = performances->fields.assetName;
    transform = UnityEngine_GameObject__get_transform(performanceRoot, 0);
    Effect = BoxGachaResultEffectComponent__getEffect(assetName, transform, 0);
    *p_objectRef = Effect;
    sub_1C32BC4(&this->fields.objectRef, Effect);
    v17 = (UnityEngine_Object_o *)*p_objectRef;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Implicit(v17, 0) )
      goto LABEL_6;
  }
  animationRef = (UnityEngine_Object_o *)this->fields.animationRef;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(animationRef, 0, 0) )
    goto LABEL_23;
  performanceRoot = *p_objectRef;
  if ( !*p_objectRef )
LABEL_32:
    sub_1C32E7C(performanceRoot);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 performanceRoot,
                                 (const MethodInfo_3134BD4 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
  this->fields.animationRef = (struct UnityEngine_Animation_o *)ComponentInChildren_object;
  sub_1C32BC4(&this->fields.animationRef, ComponentInChildren_object);
  v20 = (UnityEngine_Object_o *)this->fields.animationRef;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Implicit(v20, 0) )
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
  v22 = *p_afterPerformance;
  if ( *p_afterPerformance && !System_String__IsNullOrEmpty(v22->fields.name, 0) )
  {
    v24 = EventSvtControl__PlayPerformanceProc(
            this,
            v22->fields.name,
            v22->fields.delay,
            isWaitPerformance,
            playEndAction,
            v23);
    UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, v24, 0);
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
  EventSvtControl__PlayPerformanceProc_d__72_o *v11; // x22
  __int64 v12; // x0

  if ( (byte_4C31EAA & 1) == 0 )
  {
    sub_1C32C20(&EventSvtControl__PlayPerformanceProc_d__72_TypeInfo);
    byte_4C31EAA = 1;
  }
  v11 = (EventSvtControl__PlayPerformanceProc_d__72_o *)sub_1C32E6C(EventSvtControl__PlayPerformanceProc_d__72_TypeInfo);
  EventSvtControl__PlayPerformanceProc_d__72___ctor(v11, 0, 0);
  if ( !v11 )
    sub_1C32E7C(v12);
  v11->fields.__4__this = this;
  sub_1C32BC4(&v11->fields.__4__this, this);
  v11->fields.animName = animName;
  sub_1C32BC4(&v11->fields.animName, animName);
  v11->fields.delay = delay;
  v11->fields.isWaitPerformance = isWaitPerformance;
  v11->fields.playEndAction = playEndAction;
  sub_1C32BC4(&v11->fields.playEndAction, playEndAction);
  return (System_Collections_IEnumerator_o *)v11;
}


// local variable allocation has failed, the output may be wrong!
void EventSvtControl__PlayTreasureBoxVoice(
        EventSvtControl_o *this,
        int32_t svtId,
        System_String_array *targetVoiceIds,
        System_Action_o *callback,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  int max_length; // w8
  System_String_o *Item; // x21
  VoicePlayCondMaster_o *v12; // x24
  System_Collections_Generic_List_object__o *v13; // x23
  __int64 v14; // x26
  __int64 v15; // x27
  System_String_o *v16; // x25
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  int32_t v21; // w0
  struct ServantVoiceData_array **p_randomVoiceList; // x20
  _BOOL8 v23; // x0
  Il2CppObject *current; // x22
  int monitor; // w8
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x0
  const MethodInfo *v29; // x1
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C31EA2 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C31EA2 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( !targetVoiceIds || !targetVoiceIds->max_length )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_42:
    sub_1C32E7C(Instance);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  max_length = targetVoiceIds->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
LABEL_22:
      sub_1C32E84(Instance);
    Item = targetVoiceIds->m_Items[0];
    goto LABEL_25;
  }
  v12 = (VoicePlayCondMaster_o *)Instance;
  v13 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)targetVoiceIds->max_length >= 1 )
  {
    v14 = 0;
    v15 = (unsigned int)targetVoiceIds->max_length - 1LL;
    while ( v12 )
    {
      v16 = targetVoiceIds->m_Items[v14];
      Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v12, svtId, v16, 0, -1, -1, 0, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v13 )
          goto LABEL_42;
        items = v13->fields._items;
        v18 = Method_System_Collections_Generic_List_string__Add__;
        ++v13->fields._version;
        if ( !items )
          goto LABEL_42;
        size = v13->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            (Il2CppObject *)v16,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v16;
          Instance = (DataManager_o *)sub_1C32BC4(v20 + 4, v16);
        }
      }
      if ( v15 == v14 )
        goto LABEL_23;
      if ( ++v14 >= (unsigned __int64)LODWORD(targetVoiceIds->max_length) )
        goto LABEL_22;
    }
    goto LABEL_42;
  }
LABEL_23:
  if ( !v13 )
    goto LABEL_42;
  v21 = UnityEngine_Random__Range_71183860(0, v13->fields._size, 0);
  Item = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              v13,
                              v21,
                              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_string__get_Item__);
LABEL_25:
  this->fields.callbakEndPlay = callback;
  sub_1C32BC4(&this->fields.callbakEndPlay, callback);
  this->fields.randomVoiceList = 0;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1C32BC4(&this->fields.randomVoiceList, 0);
  Instance = (DataManager_o *)this->fields.voiceListTreasureBox;
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v31 = v30;
LABEL_27:
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v23 )
      break;
    current = v31.fields._current;
    if ( !v31.fields._current )
      sub_1C32E7C(v23);
    monitor = (int)v31.fields._current[1].monitor;
    if ( monitor >= 1 )
    {
      v26 = 0;
      while ( 1 )
      {
        if ( v26 >= monitor )
          sub_1C32E84(v23);
        v27 = *((_QWORD *)&current[2].klass + (int)v26);
        if ( !v27 )
          sub_1C32E7C(v23);
        v23 = System_String__op_Equality(*(System_String_o **)(v27 + 16), Item, 0);
        if ( v23 )
          break;
        monitor = (int)current[1].monitor;
        if ( (int)++v26 >= monitor )
          goto LABEL_27;
      }
      *p_randomVoiceList = (struct ServantVoiceData_array *)current;
      v28 = sub_1C32BC4(&this->fields.randomVoiceList, current);
      if ( !*p_randomVoiceList )
        sub_1C32E7C(v28);
      this->fields.maxPlayCnt = (*p_randomVoiceList)->max_length;
      EventSvtControl__svtVoicePlay(this, v29);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


void EventSvtControl__ReleasePerformance(EventSvtControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *objectRef; // x19

  if ( (byte_4C31EAC & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31EAC = 1;
  }
  this->fields.animationRef = 0;
  sub_1C32BC4(&this->fields.animationRef, 0);
  objectRef = (UnityEngine_Object_o *)this->fields.objectRef;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71223640(objectRef, 0);
}


bool EventSvtControl__SetBoxGachaTalkInfo(
        EventSvtControl_o *this,
        int32_t svtId,
        BoxGachaTalkEntity_o *talkEntity,
        BoxGachaTalkInfo_o **info,
        const MethodInfo *method)
{
  BoxGachaTalkInfo_o *v8; // x21
  const MethodInfo *v9; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_int__o *v12; // x21
  struct System_String_array *befVoiceIds; // x9
  unsigned __int64 v14; // x24
  System_String_o *v15; // x25
  _BOOL8 isVoicePlay; // x0
  Il2CppObject *current; // x20
  int monitor; // w8
  int i; // w27
  __int64 v20; // x28
  const MethodInfo *v21; // x3
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  unsigned __int64 v25; // x25
  int32_t v26; // w22
  System_String_o *v27; // x23
  __int64 Item; // x0
  Il2CppObject *v29; // x20
  void *v30; // x8
  int v31; // w27
  __int64 v32; // x24
  const MethodInfo *v33; // x3
  struct System_Collections_Generic_List_string__o *beforeVoiceIdList; // x8
  il2cpp_array_size_t max_length; // [xsp+10h] [xbp-C0h]
  struct System_String_array *aftVoiceIds; // [xsp+18h] [xbp-B8h]
  struct System_String_array *v38; // [xsp+20h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4C31EA1 & 1) == 0 )
  {
    sub_1C32C20(&BoxGachaTalkInfo_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C31EA1 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  v8 = (BoxGachaTalkInfo_o *)sub_1C32E6C(BoxGachaTalkInfo_TypeInfo);
  BoxGachaTalkInfo___ctor(v8, v9);
  *info = v8;
  sub_1C32BC4(info, v8);
  if ( !this->fields.voiceListBoxGacha )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v12 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !talkEntity )
    goto LABEL_70;
  befVoiceIds = talkEntity->fields.befVoiceIds;
  if ( !befVoiceIds )
    goto LABEL_70;
  max_length = befVoiceIds->max_length;
  aftVoiceIds = talkEntity->fields.aftVoiceIds;
  if ( (int)max_length >= 1 )
  {
    if ( (unsigned int)befVoiceIds->max_length )
    {
      v14 = 0;
      v38 = befVoiceIds;
      while ( 1 )
      {
        Instance = (DataManager_o *)this->fields.voiceListBoxGacha;
        if ( !Instance )
          break;
        v15 = befVoiceIds->m_Items[v14];
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v40,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v41 = v40;
        while ( 1 )
        {
          isVoicePlay = System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v41,
                          (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !isVoicePlay )
            break;
          current = v41.fields._current;
          if ( !v41.fields._current )
            sub_1C32E7C(isVoicePlay);
          monitor = (int)v41.fields._current[1].monitor;
          if ( monitor >= 1 )
          {
            for ( i = 0; i < monitor; ++i )
            {
              if ( i >= (unsigned int)monitor )
                sub_1C32E84(isVoicePlay);
              v20 = *((_QWORD *)&current[2].klass + i);
              if ( !v20 )
                sub_1C32E7C(isVoicePlay);
              isVoicePlay = System_String__op_Equality(*(System_String_o **)(v20 + 16), v15, 0);
              if ( isVoicePlay )
              {
                if ( !MasterData_object )
                  sub_1C32E7C(isVoicePlay);
                isVoicePlay = VoicePlayCondMaster__isVoicePlay(
                                (VoicePlayCondMaster_o *)MasterData_object,
                                svtId,
                                v15,
                                0,
                                -1,
                                -1,
                                0,
                                0,
                                0);
                if ( isVoicePlay )
                {
                  if ( !*info )
                    sub_1C32E7C(0);
                  BoxGachaTalkInfo__SetBeforeGachaTalkInfo(
                    *info,
                    *(System_String_o **)(v20 + 16),
                    *(System_String_o **)(v20 + 48),
                    v21);
                  if ( !v12 )
                    sub_1C32E7C(isVoicePlay);
                  items = v12->fields._items;
                  v23 = Method_System_Collections_Generic_List_int__Add__;
                  ++v12->fields._version;
                  if ( !items )
                    sub_1C32E7C(isVoicePlay);
                  size = v12->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      v12,
                      v14,
                      *(const MethodInfo_377B798 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v12->fields._size = size + 1;
                    items->m_Items[size] = v14;
                  }
                }
              }
              monitor = (int)current[1].monitor;
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v41,
          (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        befVoiceIds = v38;
        if ( ++v14 == (unsigned int)max_length )
          goto LABEL_39;
        if ( v14 >= LODWORD(v38->max_length) )
          goto LABEL_71;
      }
LABEL_70:
      sub_1C32E7C(Instance);
    }
LABEL_71:
    sub_1C32E84(Instance);
  }
LABEL_39:
  if ( !v12 || !v12->fields._size )
    return 0;
  if ( (int)max_length >= 1 )
  {
    if ( !aftVoiceIds )
      goto LABEL_70;
    v25 = 0;
    v26 = 0;
    while ( v25 < LODWORD(aftVoiceIds->max_length) )
    {
      Instance = (DataManager_o *)this->fields.voiceListBoxGacha;
      if ( !Instance )
        goto LABEL_70;
      v27 = aftVoiceIds->m_Items[v25];
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v40,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
      v41 = v40;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v41,
                 (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
        if ( (Item & 1) == 0 )
          break;
        v29 = v41.fields._current;
        if ( !v41.fields._current )
          sub_1C32E7C(Item);
        v30 = v41.fields._current[1].monitor;
        if ( (int)v30 >= 1 )
        {
          v31 = 0;
          do
          {
            if ( v31 >= (unsigned int)v30 )
              sub_1C32E84(Item);
            v32 = *((_QWORD *)&v29[2].klass + v31);
            if ( !v32 )
              sub_1C32E7C(Item);
            Item = System_String__op_Equality(*(System_String_o **)(v32 + 16), v27, 0);
            if ( (Item & 1) != 0 )
            {
              Item = System_Collections_Generic_List_int___get_Item(
                       v12,
                       v26,
                       (const MethodInfo_377B4A8 *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( v25 == (unsigned int)Item )
              {
                if ( !*info )
                  sub_1C32E7C(0);
                BoxGachaTalkInfo__SetAfterGachaTalkInfo(
                  *info,
                  *(System_String_o **)(v32 + 16),
                  *(System_String_o **)(v32 + 48),
                  v33);
                ++v26;
              }
            }
            LODWORD(v30) = v29[1].monitor;
            ++v31;
          }
          while ( v31 < (int)v30 );
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v41,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
      if ( ++v25 == (unsigned int)max_length )
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


void EventSvtControl__SetCraftSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listCraft,
        System_String_o *assetName,
        const MethodInfo *method)
{
  struct System_String_o **p_asstName; // x21
  System_Collections_Generic_List_ServantVoiceData____o **v7; // x0
  System_Collections_Generic_List_ServantVoiceData____o *v8; // x1

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_1C32BC4(&this->fields.asstName, assetName);
  v7 = (System_Collections_Generic_List_ServantVoiceData____o **)(p_asstName + 17);
  if ( listCraft )
  {
    *v7 = listCraft;
    v8 = listCraft;
  }
  else
  {
    v8 = 0;
    *v7 = 0;
  }
  sub_1C32BC4(v7, v8);
  this->fields.beforeVoiceIdx = -1;
}


void EventSvtControl__SetDiggingSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listDigging,
        System_String_o *assetName,
        const MethodInfo *method)
{
  struct System_String_o **p_asstName; // x21
  System_Collections_Generic_List_ServantVoiceData____o **v7; // x0
  System_Collections_Generic_List_ServantVoiceData____o *v8; // x1

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_1C32BC4(&this->fields.asstName, assetName);
  v7 = (System_Collections_Generic_List_ServantVoiceData____o **)(p_asstName + 14);
  if ( listDigging )
  {
    *v7 = listDigging;
    v8 = listDigging;
  }
  else
  {
    v8 = 0;
    *v7 = 0;
  }
  sub_1C32BC4(v7, v8);
  this->fields.beforeVoiceIdx = -1;
}


void EventSvtControl__SetOverwriteSpecialSvtVoiceId(
        EventSvtControl_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  this->fields.specialSvtVoice = voiceId;
  sub_1C32BC4(&this->fields.specialSvtVoice, voiceId);
}


void EventSvtControl__SetOverwriteSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listOverwrite,
        System_String_o *assetName,
        const MethodInfo *method)
{
  EventSvtControl_o *v5; // x20

  v5 = this;
  this->fields.playCnt = 0;
  this->fields.asstName = assetName;
  sub_1C32BC4(&this->fields.asstName, assetName);
  v5->fields.voiceListOverwrite = listOverwrite;
  v5 = (EventSvtControl_o *)((char *)v5 + 200);
  sub_1C32BC4(v5, listOverwrite);
  LODWORD(v5[-1].fields.voiceListDigging) = -1;
}


void EventSvtControl__SetRecipeSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listRecipe,
        System_String_o *assetName,
        const MethodInfo *method)
{
  struct System_String_o **p_asstName; // x21
  System_Collections_Generic_List_ServantVoiceData____o **v7; // x0
  System_Collections_Generic_List_ServantVoiceData____o *v8; // x1

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_1C32BC4(&this->fields.asstName, assetName);
  v7 = (System_Collections_Generic_List_ServantVoiceData____o **)(p_asstName + 15);
  if ( listRecipe )
  {
    *v7 = listRecipe;
    v8 = listRecipe;
  }
  else
  {
    v8 = 0;
    *v7 = 0;
  }
  sub_1C32BC4(v7, v8);
  this->fields.beforeVoiceIdx = -1;
}


void EventSvtControl__SetSvtFigureCollect(
        EventSvtControl_o *this,
        System_Collections_Generic_List_StandFigureCollect__o *collects,
        const MethodInfo *method)
{
  this->fields.standFigureCollectList = collects;
  sub_1C32BC4(&this->fields.standFigureCollectList, collects);
}


void EventSvtControl__SetTradeSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listTrade,
        System_String_o *assetName,
        const MethodInfo *method)
{
  struct System_String_o **p_asstName; // x21
  System_Collections_Generic_List_ServantVoiceData____o **v7; // x0
  System_Collections_Generic_List_ServantVoiceData____o *v8; // x1

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_1C32BC4(&this->fields.asstName, assetName);
  v7 = (System_Collections_Generic_List_ServantVoiceData____o **)(p_asstName + 16);
  if ( listTrade )
  {
    *v7 = listTrade;
    v8 = listTrade;
  }
  else
  {
    v8 = 0;
    *v7 = 0;
  }
  sub_1C32BC4(v7, v8);
  this->fields.beforeVoiceIdx = -1;
}


void EventSvtControl__SetTreasureBoxSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listTreasureBox,
        System_String_o *assetName,
        const MethodInfo *method)
{
  struct System_String_o **p_asstName; // x21
  System_Collections_Generic_List_ServantVoiceData____o **v7; // x0
  System_Collections_Generic_List_ServantVoiceData____o *v8; // x1

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_1C32BC4(&this->fields.asstName, assetName);
  v7 = (System_Collections_Generic_List_ServantVoiceData____o **)(p_asstName + 13);
  if ( listTreasureBox )
  {
    *v7 = listTreasureBox;
    v8 = listTreasureBox;
  }
  else
  {
    v8 = 0;
    *v7 = 0;
  }
  sub_1C32BC4(v7, v8);
  this->fields.beforeVoiceIdx = -1;
}


void EventSvtControl__SvtVoicePlayProc(EventSvtControl_o *this, const MethodInfo *method)
{
  EventSvtControl_o *v2; // x19
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 playCnt; // x9
  ServantVoiceData_o *v5; // x8
  struct System_String_o *id; // x1
  struct ServantVoiceData_array *v7; // x8
  __int64 v8; // x9
  int32_t asstName; // w20
  float FadeTime; // s0
  float v11; // s8
  struct ServantVoiceData_array *v12; // x8
  __int64 v13; // x9
  ServantVoiceData_o *v14; // x8
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  int32_t face; // w20
  struct ServantVoiceData_array *v17; // x8
  __int64 v18; // x9
  ServantVoiceData_o *v19; // x8
  System_String_o *v20; // x20
  System_String_o *vcName; // x21
  float volume; // s8
  System_Action_o *v23; // x22
  SePlayer_o *v24; // x0
  const MethodInfo *v25; // x5
  struct ServantVoiceData_array *v26; // x8
  __int64 v27; // x9
  ServantVoiceData_o *v28; // x8
  struct ServantVoiceData_array *v29; // x8
  __int64 v30; // x9
  ServantVoiceData_o *v31; // x8
  struct System_Int32_array *multiFace; // x23
  unsigned __int64 v33; // x21
  int32_t v34; // w22

  v2 = this;
  if ( (byte_4C31E9A & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_1C32C20(&Method_EventSvtControl_EndPlay__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    this = (EventSvtControl_o *)sub_1C32C20(&SoundManager_TypeInfo);
    byte_4C31E9A = 1;
  }
  randomVoiceList = v2->fields.randomVoiceList;
  if ( !randomVoiceList )
    goto LABEL_43;
  playCnt = v2->fields.playCnt;
  if ( (unsigned int)playCnt >= LODWORD(randomVoiceList->max_length) )
    goto LABEL_44;
  v5 = randomVoiceList->m_Items[playCnt];
  if ( !v5 )
    goto LABEL_43;
  id = v5->fields.id;
  v2->fields.vcName = id;
  this = (EventSvtControl_o *)sub_1C32BC4(&v2->fields.vcName, id);
  v7 = v2->fields.randomVoiceList;
  if ( !v7 )
    goto LABEL_43;
  v8 = v2->fields.playCnt;
  if ( (unsigned int)v8 >= LODWORD(v7->max_length) )
    goto LABEL_44;
  this = (EventSvtControl_o *)v7->m_Items[v8];
  if ( !this )
    goto LABEL_43;
  v2->fields.isUnSkippable = BYTE4(this->fields.vcName);
  asstName = (int32_t)this->fields.asstName;
  FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0);
  this = (EventSvtControl_o *)v2->fields.standFigureCollectList;
  v11 = FadeTime;
  if ( !this
    || (this = (EventSvtControl_o *)System_Linq_Enumerable__Count_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)this,
                                      (const MethodInfo_30FD778 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___),
        (int)this < 2) )
  {
    v12 = v2->fields.randomVoiceList;
    if ( !v12 )
      goto LABEL_43;
    v13 = v2->fields.playCnt;
    if ( (unsigned int)v13 >= LODWORD(v12->max_length) )
      goto LABEL_44;
    v14 = v12->m_Items[v13];
    if ( !v14 )
      goto LABEL_43;
    standFigureCollectList = (System_Collections_Generic_List_object__o *)v2->fields.standFigureCollectList;
    if ( standFigureCollectList )
    {
      face = v14->fields.face;
      this = (EventSvtControl_o *)System_Collections_Generic_List_object___get_Item(
                                    standFigureCollectList,
                                    0,
                                    (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( !this )
        goto LABEL_43;
      v17 = v2->fields.randomVoiceList;
      if ( !v17 )
        goto LABEL_43;
      v18 = v2->fields.playCnt;
      if ( (unsigned int)v18 >= LODWORD(v17->max_length) )
        goto LABEL_44;
      v19 = v17->m_Items[v18];
      if ( !v19 )
        goto LABEL_43;
      this = (EventSvtControl_o *)this->fields.m_CancellationTokenSource;
      if ( !this )
        goto LABEL_43;
      UIStandFigureR__SetFace_43959868((UIStandFigureR_o *)this, face, v19->fields.form, 0, v11, 0);
    }
    goto LABEL_21;
  }
  v29 = v2->fields.randomVoiceList;
  if ( !v29 )
    goto LABEL_43;
  v30 = v2->fields.playCnt;
  if ( (unsigned int)v30 >= LODWORD(v29->max_length) )
    goto LABEL_44;
  v31 = v29->m_Items[v30];
  if ( !v31 )
    goto LABEL_43;
  multiFace = v31->fields.multiFace;
  if ( multiFace )
  {
    this = (EventSvtControl_o *)System_Linq_Enumerable__Count_object_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.standFigureCollectList,
                                  (const MethodInfo_30FD778 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    if ( (_DWORD)this == LODWORD(multiFace->max_length) )
    {
      if ( (int)this >= 1 )
      {
        v33 = 0;
        while ( v33 < (unsigned int)this )
        {
          this = (EventSvtControl_o *)v2->fields.standFigureCollectList;
          if ( !this )
            goto LABEL_43;
          v34 = multiFace->m_Items[v33];
          this = (EventSvtControl_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v33,
                                        (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
          if ( !this )
            goto LABEL_43;
          this = (EventSvtControl_o *)this->fields.m_CancellationTokenSource;
          if ( !this )
            goto LABEL_43;
          UIStandFigureR__SetFace_43959868((UIStandFigureR_o *)this, v34, asstName, 0, v11, 0);
          this = (EventSvtControl_o *)multiFace->max_length;
          if ( (__int64)++v33 >= (int)this )
            goto LABEL_21;
        }
        goto LABEL_44;
      }
LABEL_21:
      v20 = v2->fields.asstName;
      vcName = v2->fields.vcName;
      volume = v2->fields.volume;
      v23 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(v23, (Il2CppObject *)v2, Method_EventSvtControl_EndPlay__, 0);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      v24 = SoundManager__playVoice_41418932(v20, vcName, volume, v23, 0, 0);
      v2->fields.player = v24;
      this = (EventSvtControl_o *)sub_1C32BC4(&v2->fields.player, v24);
      if ( v2->fields.isSkipPerformance )
        goto LABEL_28;
      v26 = v2->fields.randomVoiceList;
      if ( !v26 )
LABEL_43:
        sub_1C32E7C(this);
      v27 = v2->fields.playCnt;
      if ( (unsigned int)v27 < LODWORD(v26->max_length) )
      {
        v28 = v26->m_Items[v27];
        if ( v28 )
        {
          EventSvtControl__PlayPerformance(v2, v28->fields.additionalPerformances, 1, 0, 0, v25);
LABEL_28:
          ++v2->fields.playCnt;
          return;
        }
        goto LABEL_43;
      }
LABEL_44:
      sub_1C32E84(this);
    }
  }
}


bool EventSvtControl__TryGetPlayableVoiceInfoList(
        EventSvtControl_o *this,
        System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o **voiceInfoList,
        System_Collections_Generic_List_ServantVoiceData____o *servantVoiceGroupData,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x23
  System_Collections_Generic_List_T__o *v7; // x24
  System_Collections_Generic_List_T__o *v8; // x22
  Il2CppObject *v9; // x0
  System_Collections_Generic_HashSet_T__o *v10; // x24
  _BOOL8 v11; // x0
  Il2CppObject *current; // x25
  Il2CppClass *klass; // x8
  EventSvtControl___c_c *v14; // x0
  System_String_o *v15; // x26
  System_Func_object__object__o *_9__65_0; // x27
  Il2CppObject *v17; // x28
  struct EventSvtControl___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_string__o *v19; // x1
  Il2CppObject *v20; // x0
  Il2CppObject *v21; // x26
  Il2CppObject *Weight; // x2
  const MethodInfo_36D0F24 *v23; // x4
  Il2CppObject *v24; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x26
  Il2CppObject *v27; // x0
  __int64 Item; // x0
  int32_t v29; // w25
  int32_t monitor; // w26
  _BOOL8 IsVoicePlayFlag; // x0
  System_Collections_Generic_List_T__o *v32; // x0
  System_Collections_Generic_KeyValuePair_object__int__o v33; // x1 OVERLAPPED
  struct System_Object_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppObject *v37; // x8
  System_Collections_Generic_KeyValuePair_object__int__o v38; // x1 OVERLAPPED
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppObject *v42; // x0
  __int64 v43; // x0
  struct System_Collections_Generic_List_int__o *voicePlayedValueList; // x0
  int32_t v45; // w1
  struct System_Int32_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  System_Collections_Generic_List_T__o *v50; // [xsp+20h] [xbp-D0h]
  System_Collections_Generic_List_int__o *OriginalSvtId; // [xsp+28h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+38h] [xbp-B8h] BYREF
  Il2CppObject *entity; // [xsp+50h] [xbp-A0h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o v55; // [xsp+58h] [xbp-98h] BYREF
  VoicePlayCondEntity_o *condEntity; // [xsp+68h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+70h] [xbp-80h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o v58; // 0:x0.16

  if ( (byte_4C31EA8 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantVoiceRelationMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_VoiceMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string__TryGetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_ServantVoiceData__string___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C32C20(&System_Func_ServantVoiceData__string__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_string__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1C32C20(&System_Collections_Generic_HashSet_string__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int____ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C32C20(&Method_EventSvtControl___c__TryGetPlayableVoiceInfoList_b__65_0__);
    sub_1C32C20(&EventSvtControl___c_TypeInfo);
    sub_1C32C20(&StringLiteral_811/*","*/);
    sub_1C32C20(&StringLiteral_19556/*"forcePlayFirst"*/);
    byte_4C31EA8 = 1;
  }
  memset(&v57, 0, sizeof(v57));
  condEntity = 0;
  v55.fields.key = 0;
  *(_QWORD *)&v55.fields.value = 0;
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v7 = (System_Collections_Generic_List_T__o *)sub_1C32E6C(System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___TypeInfo);
  System_Collections_Generic_List_KeyValuePair_object__int_____ctor(
    v7,
    (const MethodInfo_3715818 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int____ctor__);
  v8 = (System_Collections_Generic_List_T__o *)sub_1C32E6C(System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___TypeInfo);
  System_Collections_Generic_List_KeyValuePair_object__int_____ctor(
    v8,
    (const MethodInfo_3715818 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int____ctor__);
  *voiceInfoList = (System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *)v8;
  sub_1C32BC4(voiceInfoList, v8);
  v9 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantVoiceRelationMaster___);
  if ( !v9 )
    goto LABEL_65;
  v50 = v7;
  OriginalSvtId = ServantVoiceRelationMaster__GetOriginalSvtId(
                    (ServantVoiceRelationMaster_o *)v9,
                    this->fields.svtId,
                    0);
  v10 = (System_Collections_Generic_HashSet_T__o *)sub_1C32E6C(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v10,
    (const MethodInfo_364F828 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  if ( !servantVoiceGroupData )
    goto LABEL_65;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v53,
    (System_Collections_Generic_List_object__o *)servantVoiceGroupData,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v57 = v53;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v57,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v11 )
      break;
    current = v57.fields._current;
    if ( !v57.fields._current )
      sub_1C32E7C(v11);
    if ( !LODWORD(v57.fields._current[1].monitor) )
      sub_1C32E84(v11);
    klass = v57.fields._current[2].klass;
    if ( !klass )
      sub_1C32E7C(v11);
    if ( !Master_object )
      sub_1C32E7C(v11);
    if ( VoicePlayCondMaster__isVoicePlay_43184680(
           (VoicePlayCondMaster_o *)Master_object,
           this->fields.svtId,
           (System_String_o *)klass->_1.name,
           &condEntity,
           0,
           -1,
           -1,
           0,
           0,
           0,
           0) )
    {
      v14 = EventSvtControl___c_TypeInfo;
      if ( !EventSvtControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSvtControl___c_TypeInfo);
        v14 = EventSvtControl___c_TypeInfo;
      }
      v15 = (System_String_o *)StringLiteral_811/*","*/;
      _9__65_0 = (System_Func_object__object__o *)v14->static_fields->__9__65_0;
      if ( !_9__65_0 )
      {
        if ( !v14->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v14);
          v14 = EventSvtControl___c_TypeInfo;
        }
        v17 = (Il2CppObject *)v14->static_fields->__9;
        _9__65_0 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_ServantVoiceData__string__TypeInfo);
        System_Func_object__object____ctor(
          _9__65_0,
          v17,
          Method_EventSvtControl___c__TryGetPlayableVoiceInfoList_b__65_0__,
          0);
        static_fields = EventSvtControl___c_TypeInfo->static_fields;
        static_fields->__9__65_0 = (struct System_Func_ServantVoiceData__string__o *)_9__65_0;
        sub_1C32BC4(&static_fields->__9__65_0, _9__65_0);
      }
      v19 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_object__object_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)current,
                                                                  (System_Func_TSource__TResult__o *)_9__65_0,
                                                                  (const MethodInfo_3113ABC *)Method_System_Linq_Enumerable_Select_ServantVoiceData__string___);
      v20 = (Il2CppObject *)System_String__Join_63561120(v15, v19, 0);
      if ( !v10 )
        sub_1C32E7C(v20);
      v21 = v20;
      if ( !System_Collections_Generic_HashSet_object___Contains(
              v10,
              v20,
              (const MethodInfo_364FF1C *)Method_System_Collections_Generic_HashSet_string__Contains__) )
      {
        System_Collections_Generic_HashSet_object___Add(
          v10,
          v21,
          (const MethodInfo_3650A0C *)Method_System_Collections_Generic_HashSet_string__Add__);
        Weight = (Il2CppObject *)(unsigned int)VoicePlayCondMaster__GetWeight(
                                                 (VoicePlayCondMaster_o *)Master_object,
                                                 condEntity,
                                                 10,
                                                 0);
        v58.fields.key = (Il2CppObject *)&v55;
        *(_QWORD *)&v58.fields.value = current;
        System_Collections_Generic_KeyValuePair_object__int____ctor(
          v58,
          Weight,
          Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__,
          v23);
        if ( !condEntity
          || VoicePlayCondEntity__GetScriptIntParam(condEntity, (System_String_o *)StringLiteral_19556/*"forcePlayFirst"*/, -1, 0) != 1 )
        {
          goto LABEL_36;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v24 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_VoiceMaster___);
        if ( !condEntity )
          sub_1C32E7C(v24);
        v25 = (DataMasterBase_TMaster__TEntity__PKType__o *)v24;
        voiceId = condEntity->fields.voiceId;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v27 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48923628(voiceId, 0);
        if ( !v25 )
          sub_1C32E7C(v27);
        if ( !DataMasterBase_object__object__object___TryGetEntity(
                v25,
                &entity,
                v27,
                (const MethodInfo_339B33C *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string__TryGetEntity__) )
          goto LABEL_36;
        if ( !OriginalSvtId )
          sub_1C32E7C(0);
        Item = System_Collections_Generic_List_int___get_Item(
                 OriginalSvtId,
                 0,
                 (const MethodInfo_377B4A8 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !entity )
          sub_1C32E7C(Item);
        v29 = Item;
        monitor = (int32_t)entity[3].monitor;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsVoicePlayFlag = CondType__IsVoicePlayFlag(v29, monitor, 0);
        if ( !IsVoicePlayFlag )
        {
          if ( !v50 )
            sub_1C32E7C(IsVoicePlayFlag);
          v38 = v55;
          items = v50->fields._items;
          v40 = Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___Add__;
          ++v50->fields._version;
          if ( !items )
            sub_1C32E7C(IsVoicePlayFlag);
          size = v50->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_KeyValuePair_object__int____AddWithResize(
              v50,
              v38,
              *(const MethodInfo_3716098 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v42 = &items->obj + size;
            v50->fields._size = size + 1;
            v42[2].klass = (Il2CppClass *)v38.fields.key;
            v42 += 2;
            v42->monitor = *(void **)&v38.fields.value;
            v43 = sub_1C32BC4(v42, 0);
          }
          if ( !entity )
            sub_1C32E7C(v43);
          voicePlayedValueList = this->fields.voicePlayedValueList;
          if ( !voicePlayedValueList )
            sub_1C32E7C(0);
          v45 = (int32_t)entity[3].monitor;
          v46 = voicePlayedValueList->fields._items;
          v47 = Method_System_Collections_Generic_List_int__Add__;
          ++voicePlayedValueList->fields._version;
          if ( !v46 )
            sub_1C32E7C(voicePlayedValueList);
          v48 = voicePlayedValueList->fields._size;
          if ( (unsigned int)v48 >= LODWORD(v46->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              voicePlayedValueList,
              v45,
              *(const MethodInfo_377B798 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
          }
          else
          {
            voicePlayedValueList->fields._size = v48 + 1;
            v46->m_Items[v48] = v45;
          }
        }
        else
        {
LABEL_36:
          v32 = (System_Collections_Generic_List_T__o *)*voiceInfoList;
          if ( !*voiceInfoList )
            sub_1C32E7C(0);
          v33 = v55;
          v34 = v32->fields._items;
          v35 = Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___Add__;
          ++v32->fields._version;
          if ( !v34 )
            sub_1C32E7C(v32);
          v36 = v32->fields._size;
          if ( (unsigned int)v36 >= LODWORD(v34->max_length) )
          {
            System_Collections_Generic_List_KeyValuePair_object__int____AddWithResize(
              v32,
              v33,
              *(const MethodInfo_3716098 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = &v34->obj + v36;
            v32->fields._size = v36 + 1;
            v37[2].klass = (Il2CppClass *)v33.fields.key;
            v37 += 2;
            v37->monitor = *(void **)&v33.fields.value;
            sub_1C32BC4(v37, 0);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v57,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  if ( !v50 )
    goto LABEL_65;
  if ( v50->fields._size >= 1 )
  {
    this->fields.forcePlayVoiceSvtIdList = OriginalSvtId;
    sub_1C32BC4(&this->fields.forcePlayVoiceSvtIdList, OriginalSvtId);
    *voiceInfoList = (System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *)v50;
    sub_1C32BC4(voiceInfoList, v50);
    return 1;
  }
  if ( !*voiceInfoList )
LABEL_65:
    sub_1C32E7C(v9);
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
  Il2CppObject *Item; // x0
  System_Collections_Generic_IReadOnlyList_string__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x21
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  System_String_o *v24; // x0
  Il2CppObject *v25; // x24
  _BOOL8 isVoicePlay; // x0
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  int32_t v35; // w8
  struct ServantVoiceData_array **p_randomVoiceList; // x21
  int32_t v37; // w0
  Il2CppObject *v38; // x22
  _BOOL8 v39; // x0
  Il2CppObject *current; // x23
  int monitor; // w8
  unsigned int v42; // w24
  __int64 v43; // x8
  __int64 v44; // x0
  const MethodInfo *v45; // x1
  bool result; // w0
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C31E9F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    byte_4C31E9F = 1;
  }
  memset(&v48, 0, sizeof(v48));
  v9 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !voiceIdCandidates )
    goto LABEL_63;
  klass = voiceIdCandidates->klass;
  v12 = *(unsigned __int16 *)&voiceIdCandidates->klass->_2.rank;
  if ( *(_WORD *)&voiceIdCandidates->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_8;
    }
    v14 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v14 = sub_1C83438(voiceIdCandidates, System_Collections_Generic_IEnumerable_string__TypeInfo, 0);
  }
  v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_string__o *, _QWORD))v14)(
          voiceIdCandidates,
          *(_QWORD *)(v14 + 8));
  if ( !v15 )
    sub_1C32E7C(0);
  while ( 1 )
  {
    v16 = *(_QWORD *)v15;
    v17 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
    {
      v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v18 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_15;
      }
      v19 = v16 + 16LL * *v18 + 312;
    }
    else
    {
LABEL_15:
      v19 = sub_1C83438(v15, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v15, *(_QWORD *)(v19 + 8)) & 1) == 0 )
      break;
    v20 = *(_QWORD *)v15;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v22 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_22;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_22:
      v23 = sub_1C83438(v15, System_Collections_Generic_IEnumerator_string__TypeInfo, 0);
    }
    v24 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v15, *(_QWORD *)(v23 + 8));
    if ( !voicePlayCondMaster )
      sub_1C32E7C(v24);
    v25 = (Il2CppObject *)v24;
    isVoicePlay = VoicePlayCondMaster__isVoicePlay(voicePlayCondMaster, svtId, v24, 0, -1, -1, 0, 0, 0);
    if ( isVoicePlay )
    {
      if ( !v9 )
        sub_1C32E7C(isVoicePlay);
      items = v9->fields._items;
      v28 = Method_System_Collections_Generic_List_string__Add__;
      ++v9->fields._version;
      if ( !items )
        sub_1C32E7C(isVoicePlay);
      size = v9->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          v25,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v25;
        sub_1C32BC4(v30 + 4, v25);
      }
    }
  }
  v31 = *(_QWORD *)v15;
  v32 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
  {
    v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_35;
    }
    v34 = v31 + 16LL * *v33 + 312;
  }
  else
  {
LABEL_35:
    v34 = sub_1C83438(v15, System_IDisposable_TypeInfo, 0);
  }
  Item = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v15, *(_QWORD *)(v34 + 8));
  if ( !v9 )
LABEL_63:
    sub_1C32E7C(Item);
  v35 = v9->fields._size;
  if ( v35 < 1 )
    return 0;
  p_randomVoiceList = &this->fields.randomVoiceList;
LABEL_40:
  v37 = UnityEngine_Random__Range_71183860(0, v35, 0);
  Item = System_Collections_Generic_List_object___get_Item(
           v9,
           v37,
           (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !this->fields.voiceIndividualShopList )
    goto LABEL_63;
  v38 = Item;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    (System_Collections_Generic_List_object__o *)this->fields.voiceIndividualShopList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v48 = v47;
  do
  {
LABEL_42:
    v39 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v48,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v39 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v48,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
      System_Collections_Generic_List_object___Remove(
        v9,
        v38,
        (const MethodInfo_3799CE4 *)Method_System_Collections_Generic_List_string__Remove__);
      v35 = v9->fields._size;
      result = 0;
      if ( v35 <= 0 )
        return result;
      goto LABEL_40;
    }
    current = v48.fields._current;
    if ( !v48.fields._current )
      sub_1C32E7C(v39);
    monitor = (int)v48.fields._current[1].monitor;
  }
  while ( monitor < 1 );
  v42 = 0;
  while ( 1 )
  {
    if ( v42 >= monitor )
      sub_1C32E84(v39);
    v43 = *((_QWORD *)&current[2].klass + (int)v42);
    if ( !v43 )
      sub_1C32E7C(v39);
    v39 = System_String__op_Equality(*(System_String_o **)(v43 + 16), (System_String_o *)v38, 0);
    if ( v39 )
      break;
    monitor = (int)current[1].monitor;
    if ( (int)++v42 >= monitor )
      goto LABEL_42;
  }
  *p_randomVoiceList = (struct ServantVoiceData_array *)current;
  v44 = sub_1C32BC4(&this->fields.randomVoiceList, current);
  if ( !*p_randomVoiceList )
    sub_1C32E7C(v44);
  this->fields.maxPlayCnt = (*p_randomVoiceList)->max_length;
  EventSvtControl__svtVoicePlay(this, v45);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v48,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  return 1;
}


void EventSvtControl__boxGachaPlayVoice(
        EventSvtControl_o *this,
        EventSvtControl_PlayBoxGachVoiceArg_o *arg,
        const MethodInfo *method)
{
  __int64 v5; // x20
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListBoxGacha; // x0
  __int128 v7; // q1
  const MethodInfo *v8; // x1
  struct System_Action_o *v9; // x1
  struct ServantVoiceData_array **p_randomVoiceList; // x21
  EventSvtControl___c__DisplayClass57_1_o *v11; // x22
  __int64 v12; // x0
  struct EventSvtControl___c__DisplayClass57_0_o **p_CS___8__locals1; // x23
  Il2CppObject *current; // x1
  EventSvtControl___c__DisplayClass57_1_Fields *p_fields; // x24
  __int64 v16; // x0
  struct ServantVoiceData_array *vdArray; // x28
  int max_length; // w8
  unsigned int v19; // w25
  ServantVoiceData_o *v20; // x29
  struct ServantVoiceData_array *v21; // x1
  __int64 v22; // x0
  const MethodInfo *v23; // x1
  __int64 v24; // x0
  struct System_Action_o *callBackStartPlay; // x8
  Il2CppObject *Instance; // x0
  System_String_o *dialogText; // x20
  System_Action_o *_9__0; // x23
  CommonUI_o *v29; // x19
  System_String_o *v30; // x21
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4C31EA0 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&EventSvtControl___c__DisplayClass57_0_TypeInfo);
    sub_1C32C20(&Method_EventSvtControl___c__DisplayClass57_1__boxGachaPlayVoice_b__0__);
    sub_1C32C20(&EventSvtControl___c__DisplayClass57_1_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C31EA0 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v5 = sub_1C32E6C(EventSvtControl___c__DisplayClass57_0_TypeInfo);
  EventSvtControl___c__DisplayClass57_0___ctor((EventSvtControl___c__DisplayClass57_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_35;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C32BC4(v5 + 16, this);
  v7 = *(_OWORD *)&arg->fields.targetVoiceId;
  *(_OWORD *)(v5 + 40) = *(_OWORD *)&arg->fields.callBackStartPlay;
  *(_OWORD *)(v5 + 24) = v7;
  sub_1C32BC4(v5 + 24, 0);
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, v8);
  System_String__IsNullOrEmpty(*(System_String_o **)(v5 + 24), 0);
  v9 = *(struct System_Action_o **)(v5 + 48);
  this->fields.callbakEndPlay = v9;
  sub_1C32BC4(&this->fields.callbakEndPlay, v9);
  this->fields.randomVoiceList = 0;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1C32BC4(&this->fields.randomVoiceList, 0);
  voiceListBoxGacha = this->fields.voiceListBoxGacha;
  if ( !voiceListBoxGacha )
LABEL_35:
    sub_1C32E7C(voiceListBoxGacha);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)voiceListBoxGacha,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v32 = v31;
LABEL_8:
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__) )
  {
    v11 = (EventSvtControl___c__DisplayClass57_1_o *)sub_1C32E6C(EventSvtControl___c__DisplayClass57_1_TypeInfo);
    EventSvtControl___c__DisplayClass57_1___ctor(v11, 0);
    if ( !v11 )
      sub_1C32E7C(v12);
    v11->fields.CS___8__locals1 = (struct EventSvtControl___c__DisplayClass57_0_o *)v5;
    p_CS___8__locals1 = &v11->fields.CS___8__locals1;
    sub_1C32BC4(&v11->fields.CS___8__locals1, v5);
    current = v32.fields._current;
    v11->fields.vdArray = (struct ServantVoiceData_array *)v32.fields._current;
    p_fields = &v11->fields;
    v16 = sub_1C32BC4(&v11->fields, current);
    vdArray = v11->fields.vdArray;
    if ( !vdArray )
      sub_1C32E7C(v16);
    max_length = vdArray->max_length;
    if ( max_length >= 1 )
    {
      v19 = 0;
      while ( 1 )
      {
        if ( v19 >= max_length )
          sub_1C32E84(v16);
        v20 = vdArray->m_Items[v19];
        if ( !v20 )
          sub_1C32E7C(v16);
        if ( !*p_CS___8__locals1 )
          sub_1C32E7C(v16);
        v16 = System_String__op_Equality(v20->fields.id, (*p_CS___8__locals1)->fields.arg.fields.targetVoiceId, 0);
        if ( (v16 & 1) != 0 )
          break;
        max_length = vdArray->max_length;
        if ( (int)++v19 >= max_length )
          goto LABEL_8;
      }
      this->fields.isPlayBoxGachaVoice = 1;
      if ( System_String__IsNullOrEmpty(v20->fields.dialogText, 0) )
      {
        v21 = p_fields->vdArray;
        *p_randomVoiceList = p_fields->vdArray;
        v22 = sub_1C32BC4(&this->fields.randomVoiceList, v21);
        if ( !*p_randomVoiceList )
          sub_1C32E7C(v22);
        this->fields.maxPlayCnt = (*p_randomVoiceList)->max_length;
        if ( !*p_CS___8__locals1 )
          sub_1C32E7C(v22);
        this->fields.isSkipPerformance = (*p_CS___8__locals1)->fields.arg.fields.skipPerformance;
        EventSvtControl__svtVoicePlay(this, v23);
        if ( !*p_CS___8__locals1 )
          sub_1C32E7C(v24);
        callBackStartPlay = (*p_CS___8__locals1)->fields.arg.fields.callBackStartPlay;
        if ( callBackStartPlay )
          ((void (__fastcall *)(intptr_t, intptr_t))callBackStartPlay->fields.invoke_impl)(
            callBackStartPlay->fields.method_code,
            callBackStartPlay->fields.method);
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        dialogText = v20->fields.dialogText;
        _9__0 = v11->fields.__9__0;
        v29 = (CommonUI_o *)Instance;
        v30 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !_9__0 )
        {
          _9__0 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(
            _9__0,
            (Il2CppObject *)v11,
            Method_EventSvtControl___c__DisplayClass57_1__boxGachaPlayVoice_b__0__,
            0);
          v11->fields.__9__0 = _9__0;
          Instance = (Il2CppObject *)sub_1C32BC4(&v11->fields.__9__0, _9__0);
        }
        if ( !v29 )
          sub_1C32E7C(Instance);
        CommonUI__OpenNotificationDialog(v29, v30, dialogText, _9__0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0.0, 0, 0);
      }
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}


bool EventSvtControl__isUnskippable(EventSvtControl_o *this, const MethodInfo *method)
{
  return this->fields.player && this->fields.maxPlayCnt && this->fields.isUnSkippable;
}


void EventSvtControl__playMissionVoice(
        EventSvtControl_o *this,
        System_String_array *voiceIds,
        int32_t svtId,
        System_Action_o *callbackEnds,
        const MethodInfo *method)
{
  struct ServantVoiceData_array **p_randomVoiceList; // x21
  __int64 Instance; // x0
  System_String_o **p_specialSvtVoice; // x23
  _BOOL8 IsNullOrEmpty; // x0
  Il2CppObject *v12; // x24
  int v13; // w8
  unsigned int v14; // w27
  __int64 v15; // x28
  System_String_o *v16; // x0
  System_String_array *v17; // x0
  System_String_o *v18; // x1
  __int64 v19; // x1
  VoicePlayCondMaster_o *v20; // x26
  System_Collections_Generic_List_object__o *v21; // x23
  System_Collections_Generic_List_object__o *v22; // x24
  __int64 size; // x20
  unsigned __int64 v24; // x28
  System_String_o *v25; // x27
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  Il2CppClass **v29; // x0
  int v30; // w29
  System_Random_o *v31; // x25
  unsigned int v32; // w25
  _BOOL8 v33; // x0
  Il2CppObject *current; // x26
  int monitor; // w8
  unsigned int v36; // w19
  __int64 v37; // x8
  System_String_o *v38; // x27
  Il2CppObject *Item; // x1
  const MethodInfo *v40; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  EventSvtControl_o *v43; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4C31E98 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor___78021840);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&System_Random_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_16107/*"_"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C31E98 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, (const MethodInfo *)voiceIds);
  this->fields.randomVoiceList = 0;
  p_randomVoiceList = &this->fields.randomVoiceList;
  sub_1C32BC4(&this->fields.randomVoiceList, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  if ( !voiceIds )
    goto LABEL_79;
  v43 = this;
  if ( SLODWORD(voiceIds->max_length) >= 2 )
  {
    v20 = (VoicePlayCondMaster_o *)Instance;
    v21 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v21,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
    v22 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor_58294264(
      v22,
      voiceIds->max_length,
      (const MethodInfo_3797FF8 *)Method_System_Collections_Generic_List_string___ctor___78021840);
    if ( !v22 )
      goto LABEL_79;
    System_Collections_Generic_List_object___AddRange(
      v22,
      (System_Collections_Generic_IEnumerable_T__o *)voiceIds,
      (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_string__AddRange__);
    size = (unsigned int)v22->fields._size;
    if ( (int)size >= 1 )
    {
      v24 = 0;
      do
      {
        if ( v24 >= LODWORD(voiceIds->max_length) )
LABEL_71:
          sub_1C32E84(Instance);
        if ( !v20 )
          goto LABEL_79;
        v25 = voiceIds->m_Items[v24];
        Instance = VoicePlayCondMaster__isVoicePlay(v20, svtId, v25, 0, -1, -1, 0, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          if ( !v21 )
            goto LABEL_79;
          items = v21->fields._items;
          v27 = Method_System_Collections_Generic_List_string__Add__;
          ++v21->fields._version;
          if ( !items )
            goto LABEL_79;
          v28 = v21->fields._size;
          if ( (unsigned int)v28 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v21,
              (Il2CppObject *)v25,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + v28;
            v21->fields._size = v28 + 1;
            v29[4] = (Il2CppClass *)v25;
            Instance = sub_1C32BC4(v29 + 4, v25);
          }
        }
      }
      while ( size != ++v24 );
    }
    if ( !v21 )
      goto LABEL_79;
    v30 = v21->fields._size - 1;
    if ( v30 >= 0 )
    {
      do
      {
        v31 = (System_Random_o *)sub_1C32E6C(System_Random_TypeInfo);
        System_Random___ctor(v31, 0);
        if ( !v31 )
          goto LABEL_79;
        Instance = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, const MethodInfo *))v31->klass->vtable._7_Next.methodPtr)(
                     v31,
                     (unsigned int)v21->fields._size,
                     v31->klass->vtable._7_Next.method);
        if ( !v43->fields.voiceListMission )
          goto LABEL_79;
        v32 = Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v44,
          (System_Collections_Generic_List_object__o *)v43->fields.voiceListMission,
          (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v45 = v44;
        do
        {
          v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v45,
                  (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !v33 )
            break;
          current = v45.fields._current;
          if ( !v45.fields._current )
            sub_1C32E7C(v33);
          monitor = (int)v45.fields._current[1].monitor;
          if ( monitor >= 1 )
          {
            v36 = 0;
            while ( 1 )
            {
              if ( v36 >= monitor )
                sub_1C32E84(v33);
              v37 = *((_QWORD *)&current[2].klass + (int)v36);
              if ( !v37 )
                sub_1C32E7C(v33);
              v38 = *(System_String_o **)(v37 + 16);
              Item = System_Collections_Generic_List_object___get_Item(
                       v21,
                       v32,
                       (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_string__get_Item__);
              v33 = System_String__op_Equality(v38, (System_String_o *)Item, 0);
              if ( v33 )
                break;
              monitor = (int)current[1].monitor;
              if ( (int)++v36 >= monitor )
                goto LABEL_57;
            }
            *p_randomVoiceList = (struct ServantVoiceData_array *)current;
            sub_1C32BC4(p_randomVoiceList, current);
          }
LABEL_57:
          ;
        }
        while ( !*p_randomVoiceList );
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v45,
          (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        if ( *p_randomVoiceList )
          goto LABEL_74;
        if ( v32 >= LODWORD(voiceIds->max_length) )
          goto LABEL_71;
        System_Collections_Generic_List_object___Remove(
          v22,
          (Il2CppObject *)voiceIds->m_Items[v32],
          (const MethodInfo_3799CE4 *)Method_System_Collections_Generic_List_string__Remove__);
      }
      while ( --v30 >= 0 );
    }
  }
  else
  {
    Instance = (__int64)this->fields.voiceListMission;
    if ( !Instance )
      goto LABEL_79;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v44,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    v45 = v44;
    p_specialSvtVoice = &this->fields.specialSvtVoice;
    do
    {
      IsNullOrEmpty = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v45,
                        (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
      if ( !IsNullOrEmpty )
        break;
      v12 = v45.fields._current;
      if ( !v45.fields._current )
        sub_1C32E7C(IsNullOrEmpty);
      v13 = (int)v45.fields._current[1].monitor;
      if ( v13 >= 1 )
      {
        v14 = 0;
        while ( 1 )
        {
          if ( v14 >= v13 )
            sub_1C32E84(IsNullOrEmpty);
          v15 = *((_QWORD *)&v12[2].klass + (int)v14);
          if ( !v15 )
            sub_1C32E7C(IsNullOrEmpty);
          if ( !LODWORD(voiceIds->max_length) )
            sub_1C32E84(IsNullOrEmpty);
          if ( System_String__op_Equality(*(System_String_o **)(v15 + 16), voiceIds->m_Items[0], 0)
            && System_String__IsNullOrEmpty(*p_specialSvtVoice, 0) )
          {
            *p_randomVoiceList = (struct ServantVoiceData_array *)v12;
            sub_1C32BC4(p_randomVoiceList, v12);
            goto LABEL_28;
          }
          IsNullOrEmpty = System_String__IsNullOrEmpty(*p_specialSvtVoice, 0);
          if ( !IsNullOrEmpty )
          {
            v16 = *(System_String_o **)(v15 + 16);
            if ( !v16 )
              sub_1C32E7C(0);
            v17 = System_String__Split(v16, 0x5Fu, 0, 0);
            if ( !v17 )
              sub_1C32E7C(0);
            if ( !LODWORD(v17->max_length) )
              sub_1C32E84(v17);
            v18 = System_String__Concat_63556792(
                    v17->m_Items[0],
                    (System_String_o *)StringLiteral_16107/*"_"*/,
                    *p_specialSvtVoice,
                    0);
            IsNullOrEmpty = System_String__op_Equality(*(System_String_o **)(v15 + 16), v18, 0);
            if ( IsNullOrEmpty )
              break;
          }
          v13 = (int)v12[1].monitor;
          if ( (int)++v14 >= v13 )
            goto LABEL_28;
        }
        *p_randomVoiceList = (struct ServantVoiceData_array *)v12;
        sub_1C32BC4(p_randomVoiceList, v12);
        v19 = StringLiteral_1/*""*/;
        *p_specialSvtVoice = (System_String_o *)StringLiteral_1/*""*/;
        sub_1C32BC4(p_specialSvtVoice, v19);
      }
LABEL_28:
      ;
    }
    while ( !*p_randomVoiceList );
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v45,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  }
  if ( *p_randomVoiceList )
  {
LABEL_74:
    v43->fields.callbakEndPlay = callbackEnds;
    Instance = sub_1C32BC4(&v43->fields.callbakEndPlay, callbackEnds);
    randomVoiceList = v43->fields.randomVoiceList;
    if ( randomVoiceList )
    {
      v43->fields.maxPlayCnt = randomVoiceList->max_length;
      EventSvtControl__svtVoicePlay(v43, v40);
      return;
    }
LABEL_79:
    sub_1C32E7C(Instance);
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
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListShop; // x8
  System_Collections_Generic_List_object__o *v8; // x20
  Il2CppObject *Instance; // x0
  VoicePlayCondMaster_o *v10; // x22
  _BOOL8 v11; // x0
  Il2CppObject *current; // x23
  Il2CppClass *klass; // x8
  _BOOL8 isVoicePlay; // x0
  _BOOL8 v15; // x0
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  System_Random_o *v20; // x21
  int32_t v21; // w21
  struct ServantVoiceData_array *Item; // x0
  const MethodInfo *v23; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  __int64 v25; // x0
  System_Exception_o *v26; // x19
  System_String_o *v27; // x0
  __int64 v28; // x0
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C31E97 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C32C20(&System_Random_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C31E97 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  voiceListShop = this->fields.voiceListShop;
  if ( voiceListShop )
  {
    if ( voiceListShop->fields._size <= 0 )
    {
      v25 = sub_1C32C34(&System_Exception_TypeInfo);
      v26 = (System_Exception_o *)sub_1C32E6C(v25);
      v27 = (System_String_o *)sub_1C32C34(&StringLiteral_25395/*"イベントショップ購入時のSvtVoiceマスタが適切に設定されていません。"*/);
      System_Exception___ctor_65266192(v26, v27, 0);
      v28 = sub_1C32C34(&Method_EventSvtControl_playPurchaseVoice__);
      sub_1C32D48(v26, v28);
    }
    this->fields.callbackStopVoice = callback;
    sub_1C32BC4(&this->fields.callbackStopVoice, callback);
    v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !this->fields.voiceListShop )
      goto LABEL_35;
    v10 = (VoicePlayCondMaster_o *)Instance;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v29,
      (System_Collections_Generic_List_object__o *)this->fields.voiceListShop,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    v30 = v29;
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
      if ( !v11 )
        break;
      current = v30.fields._current;
      if ( !v30.fields._current )
        sub_1C32E7C(v11);
      if ( !LODWORD(v30.fields._current[1].monitor) )
        sub_1C32E84(v11);
      klass = v30.fields._current[2].klass;
      if ( !klass )
        sub_1C32E7C(v11);
      if ( !v10 )
        sub_1C32E7C(v11);
      isVoicePlay = VoicePlayCondMaster__isVoicePlay(v10, svtId, (System_String_o *)klass->_1.name, 0, -1, -1, 0, 0, 0);
      if ( isVoicePlay )
      {
        if ( !v8 )
          sub_1C32E7C(isVoicePlay);
        v15 = System_Collections_Generic_List_object___Contains(
                v8,
                current,
                (const MethodInfo_3798B4C *)Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
        if ( !v15 )
        {
          items = v8->fields._items;
          v17 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
          ++v8->fields._version;
          if ( !items )
            sub_1C32E7C(v15);
          size = v8->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              current,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v19[4] = (Il2CppClass *)current;
            sub_1C32BC4(v19 + 4, current);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    v20 = (System_Random_o *)sub_1C32E6C(System_Random_TypeInfo);
    System_Random___ctor(v20, 0);
    if ( !v8 || !v20 )
      goto LABEL_35;
    v21 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, const MethodInfo *))v20->klass->vtable._7_Next.methodPtr)(
            v20,
            (unsigned int)v8->fields._size,
            v20->klass->vtable._7_Next.method);
    if ( this->fields.beforeVoiceIdx == v21 )
      v21 = (v21 + 1) % v8->fields._size;
    Item = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                              v8,
                                              v21,
                                              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    this->fields.randomVoiceList = Item;
    Instance = (Il2CppObject *)sub_1C32BC4(&this->fields.randomVoiceList, Item);
    randomVoiceList = this->fields.randomVoiceList;
    this->fields.beforeVoiceIdx = v21;
    if ( !randomVoiceList )
LABEL_35:
      sub_1C32E7C(Instance);
    this->fields.maxPlayCnt = randomVoiceList->max_length;
    EventSvtControl__setVoiceForm(this, v23);
  }
}


void EventSvtControl__playVoice(EventSvtControl_o *this, System_Action_o *callback, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  System_Collections_Generic_List_int__o **p_forcePlayVoiceSvtIdList; // x20
  System_Collections_Generic_List_int__o *v7; // x23
  struct System_Collections_Generic_List_int__o **p_voicePlayedValueList; // x21
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x3
  __int64 PlayableVoiceInfoList; // x0
  System_Collections_Generic_List_T__o *v12; // x23
  int32_t v13; // w22
  int32_t beforeVoiceIdx; // w9
  int v15; // w1
  const MethodInfo_36D0F24 *v16; // x4
  EventSvtControl___c_c *v17; // x0
  System_Func_T__TResult__o *_9__45_0; // x22
  Il2CppObject *v19; // x24
  struct EventSvtControl___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Int32_array *v22; // x0
  struct ServantVoiceData_array *key; // x0
  const MethodInfo *v24; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  struct System_Collections_Generic_List_int__o *forcePlayVoiceSvtIdList; // x8
  __int64 size; // x23
  __int64 v28; // x19
  unsigned __int64 v29; // x24
  _QWORD *v30; // x25
  _DWORD *v31; // x26
  System_Collections_Generic_KeyValuePair_object__int__o v32; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___o *voiceInfoList; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o v34; // 0:x0.16
  System_Collections_Generic_KeyValuePair_object__int__o Item; // 0:x2.16

  if ( (byte_4C31E96 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_IndexValue_KeyValuePair_ServantVoiceData____int____);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_KeyValuePair_ServantVoiceData____int___int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&System_Func_KeyValuePair_ServantVoiceData____int___int__TypeInfo);
    sub_1C32C20(&int_____TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int__get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___set_Item__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&Method_NetworkManager_getRequest_TopMyRoomRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_EventSvtControl___c__playVoice_b__45_0__);
    sub_1C32C20(&EventSvtControl___c_TypeInfo);
    byte_4C31E96 = 1;
  }
  *(_QWORD *)&v32.fields.value = 0;
  voiceInfoList = 0;
  v32.fields.key = 0;
  v5 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.forcePlayVoiceSvtIdList = v5;
  p_forcePlayVoiceSvtIdList = &this->fields.forcePlayVoiceSvtIdList;
  sub_1C32BC4(&this->fields.forcePlayVoiceSvtIdList, v5);
  v7 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.voicePlayedValueList = v7;
  p_voicePlayedValueList = &this->fields.voicePlayedValueList;
  sub_1C32BC4(&this->fields.voicePlayedValueList, v7);
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, v9);
  if ( this->fields.voiceListRand )
  {
    this->fields.callbackStopVoice = callback;
    sub_1C32BC4(&this->fields.callbackStopVoice, callback);
    PlayableVoiceInfoList = EventSvtControl__TryGetPlayableVoiceInfoList(
                              this,
                              &voiceInfoList,
                              this->fields.voiceListRand,
                              v10);
    if ( (PlayableVoiceInfoList & 1) != 0 )
    {
      v12 = (System_Collections_Generic_List_T__o *)voiceInfoList;
      if ( !voiceInfoList )
        goto LABEL_43;
      if ( voiceInfoList->fields._size == 1 )
      {
        v13 = 0;
      }
      else
      {
        beforeVoiceIdx = this->fields.beforeVoiceIdx;
        if ( (beforeVoiceIdx & 0x80000000) == 0 )
        {
          if ( beforeVoiceIdx <= voiceInfoList->fields._size - 1 )
            v15 = this->fields.beforeVoiceIdx;
          else
            v15 = voiceInfoList->fields._size - 1;
          this->fields.beforeVoiceIdx = v15;
          *(_QWORD *)&v34.fields.value = System_Collections_Generic_List_KeyValuePair_object__int____get_Item(
                                           v12,
                                           v15,
                                           (const MethodInfo_3715D7C *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Item__).fields.key;
          v34.fields.key = (Il2CppObject *)&v32;
          System_Collections_Generic_KeyValuePair_object__int____ctor(
            v34,
            0,
            Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int___ctor__,
            v16);
          PlayableVoiceInfoList = (__int64)voiceInfoList;
          if ( !voiceInfoList )
            goto LABEL_43;
          System_Collections_Generic_List_KeyValuePair_object__int____set_Item(
            (System_Collections_Generic_List_T__o *)voiceInfoList,
            this->fields.beforeVoiceIdx,
            v32,
            (const MethodInfo_3715DD4 *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___set_Item__);
          v12 = (System_Collections_Generic_List_T__o *)voiceInfoList;
        }
        v17 = EventSvtControl___c_TypeInfo;
        if ( !EventSvtControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventSvtControl___c_TypeInfo);
          v17 = EventSvtControl___c_TypeInfo;
        }
        _9__45_0 = (System_Func_T__TResult__o *)v17->static_fields->__9__45_0;
        if ( !_9__45_0 )
        {
          if ( !v17->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v17);
            v17 = EventSvtControl___c_TypeInfo;
          }
          v19 = (Il2CppObject *)v17->static_fields->__9;
          _9__45_0 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_KeyValuePair_ServantVoiceData____int___int__TypeInfo);
          System_Func_KeyValuePair_object__int___int____ctor(
            _9__45_0,
            v19,
            Method_EventSvtControl___c__playVoice_b__45_0__,
            0);
          static_fields = EventSvtControl___c_TypeInfo->static_fields;
          static_fields->__9__45_0 = (struct System_Func_KeyValuePair_ServantVoiceData____int___int__o *)_9__45_0;
          sub_1C32BC4(&static_fields->__9__45_0, _9__45_0);
        }
        v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_object__int___int_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)v12,
                                                                     (System_Func_TSource__TResult__o *)_9__45_0,
                                                                     (const MethodInfo_310ED14 *)Method_System_Linq_Enumerable_Select_KeyValuePair_ServantVoiceData____int___int___);
        v22 = System_Linq_Enumerable__ToArray_int_(
                v21,
                (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
        PlayableVoiceInfoList = RandomUtility__GetRandomRangeIndex(v22, 0, 0);
        v12 = (System_Collections_Generic_List_T__o *)voiceInfoList;
        if ( !voiceInfoList )
LABEL_43:
          sub_1C32E7C(PlayableVoiceInfoList);
        v13 = PlayableVoiceInfoList;
      }
      Item = System_Collections_Generic_List_KeyValuePair_object__int____get_Item(
               v12,
               0,
               (const MethodInfo_3715D7C *)Method_System_Collections_Generic_List_KeyValuePair_ServantVoiceData____int___get_Item__);
      key = (struct ServantVoiceData_array *)BasicHelper__IndexValue_KeyValuePair_object__int__(
                                               v12,
                                               v13,
                                               Item,
                                               (const MethodInfo_30CB738 *)Method_BasicHelper_IndexValue_KeyValuePair_ServantVoiceData____int____).fields.key;
      this->fields.randomVoiceList = key;
      PlayableVoiceInfoList = sub_1C32BC4(&this->fields.randomVoiceList, key);
      randomVoiceList = this->fields.randomVoiceList;
      this->fields.beforeVoiceIdx = v13;
      if ( randomVoiceList )
      {
        this->fields.maxPlayCnt = randomVoiceList->max_length;
        EventSvtControl__setVoiceForm(this, v24);
        forcePlayVoiceSvtIdList = this->fields.forcePlayVoiceSvtIdList;
        if ( forcePlayVoiceSvtIdList )
        {
          size = (unsigned int)forcePlayVoiceSvtIdList->fields._size;
          if ( (int)size < 1 )
            return;
          if ( *p_voicePlayedValueList )
          {
            if ( (*p_voicePlayedValueList)->fields._size <= v13 )
              return;
            v28 = sub_1C32CC8(int_____TypeInfo, (unsigned int)size);
            v29 = 0;
            v30 = (_QWORD *)(v28 + 32);
            do
            {
              PlayableVoiceInfoList = sub_1C32CC8(int___TypeInfo, 2);
              if ( !*p_forcePlayVoiceSvtIdList )
                goto LABEL_43;
              v31 = (_DWORD *)PlayableVoiceInfoList;
              PlayableVoiceInfoList = System_Collections_Generic_List_int___get_Item(
                                        *p_forcePlayVoiceSvtIdList,
                                        v29,
                                        (const MethodInfo_377B4A8 *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( !v31 )
                goto LABEL_43;
              if ( !v31[6] )
                goto LABEL_44;
              v31[8] = PlayableVoiceInfoList;
              PlayableVoiceInfoList = (__int64)*p_voicePlayedValueList;
              if ( !*p_voicePlayedValueList )
                goto LABEL_43;
              PlayableVoiceInfoList = System_Collections_Generic_List_int___get_Item(
                                        (System_Collections_Generic_List_int__o *)PlayableVoiceInfoList,
                                        v13,
                                        (const MethodInfo_377B4A8 *)Method_System_Collections_Generic_List_int__get_Item__);
              if ( v31[6] <= 1u )
                goto LABEL_44;
              v31[9] = PlayableVoiceInfoList;
              if ( !v28 )
                goto LABEL_43;
              if ( v29 >= *(unsigned int *)(v28 + 24) )
LABEL_44:
                sub_1C32E84(PlayableVoiceInfoList);
              *v30 = v31;
              sub_1C32BC4(v30, v31);
              ++v29;
              ++v30;
            }
            while ( size != v29 );
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            PlayableVoiceInfoList = (__int64)NetworkManager__getRequest_object_(
                                               0,
                                               (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_TopMyRoomRequest___);
            if ( PlayableVoiceInfoList )
            {
              TopMyRoomRequest__beginRequest(
                (TopMyRoomRequest_o *)PlayableVoiceInfoList,
                (System_Int32_array_array *)v28,
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
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceListBoxGacha; // x0
  System_Collections_Generic_List_ServantVoiceData____o *v9; // x1

  this->fields.playCnt = 0;
  this->fields.asstName = assetName;
  sub_1C32BC4(&this->fields.asstName, assetName);
  this->fields.performanceRoot = performanceRoot;
  sub_1C32BC4(&this->fields.performanceRoot, performanceRoot);
  p_voiceListBoxGacha = &this->fields.voiceListBoxGacha;
  if ( listBoxGacha )
  {
    *p_voiceListBoxGacha = listBoxGacha;
    v9 = listBoxGacha;
  }
  else
  {
    v9 = 0;
    *p_voiceListBoxGacha = 0;
  }
  sub_1C32BC4(p_voiceListBoxGacha, v9);
  this->fields.beforeVoiceIdx = -1;
}


void EventSvtControl__setIndividualShopSvtVoice(
        EventSvtControl_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listIndividualShop,
        System_String_o *assetName,
        const MethodInfo *method)
{
  struct System_String_o **p_asstName; // x21
  System_Collections_Generic_List_ServantVoiceData____o **v7; // x0
  System_Collections_Generic_List_ServantVoiceData____o *v8; // x1

  this->fields.asstName = assetName;
  p_asstName = &this->fields.asstName;
  this->fields.playCnt = 0;
  sub_1C32BC4(&this->fields.asstName, assetName);
  v7 = (System_Collections_Generic_List_ServantVoiceData____o **)(p_asstName + 11);
  if ( listIndividualShop )
  {
    *v7 = listIndividualShop;
    v8 = listIndividualShop;
  }
  else
  {
    v8 = 0;
    *v7 = 0;
  }
  sub_1C32BC4(v7, v8);
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
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceListRand; // x0
  System_Collections_Generic_List_ServantVoiceData____o *v14; // x1
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceListMission; // x0
  System_Collections_Generic_List_ServantVoiceData____o *v16; // x1
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceListShop; // x0
  System_Collections_Generic_List_ServantVoiceData____o *v18; // x1
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceListOverwrite; // x19

  if ( (byte_4C31E94 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    byte_4C31E94 = 1;
  }
  this->fields.asstName = assetName;
  this->fields.isDead = 0;
  this->fields.playCnt = 0;
  this->fields.svtId = svtId;
  sub_1C32BC4(&this->fields.asstName, assetName);
  if ( listRand && listRand->fields._size >= 1 )
  {
    this->fields.voiceListRand = listRand;
    p_voiceListRand = &this->fields.voiceListRand;
    v14 = listRand;
  }
  else
  {
    this->fields.voiceListRand = 0;
    p_voiceListRand = &this->fields.voiceListRand;
    v14 = 0;
  }
  sub_1C32BC4(p_voiceListRand, v14);
  p_voiceListMission = &this->fields.voiceListMission;
  if ( listMission )
  {
    *p_voiceListMission = listMission;
    v16 = listMission;
  }
  else
  {
    v16 = 0;
    *p_voiceListMission = 0;
  }
  sub_1C32BC4(p_voiceListMission, v16);
  p_voiceListShop = &this->fields.voiceListShop;
  if ( listShop )
  {
    *p_voiceListShop = listShop;
    v18 = listShop;
  }
  else
  {
    v18 = 0;
    *p_voiceListShop = 0;
  }
  sub_1C32BC4(p_voiceListShop, v18);
  this->fields.voiceListOverwrite = 0;
  p_voiceListOverwrite = &this->fields.voiceListOverwrite;
  sub_1C32BC4(p_voiceListOverwrite, 0);
  *((_DWORD *)p_voiceListOverwrite - 26) = -1;
}


void EventSvtControl__setVoiceForm(EventSvtControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  System_Collections_Generic_List_object__o *monitor; // x0
  struct ServantVoiceData_array *randomVoiceList; // x24
  unsigned __int64 v6; // x25
  EventSvtControl___c__DisplayClass44_0_o *v7; // x22
  struct ServantVoiceData_o *v8; // x1
  EventSvtControl___c__DisplayClass44_0_Fields *p_fields; // x21
  System_Predicate_int__o *v10; // x23
  int32_t form; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  UIStandFigureR_o *v15; // x21
  System_Action_o *v16; // x22
  Il2CppObject *v17; // [xsp+8h] [xbp-68h]

  if ( (byte_4C31E95 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_EventSvtControl_svtVoicePlay__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Exists__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&System_Predicate_int__TypeInfo);
    sub_1C32C20(&Method_EventSvtControl___c__DisplayClass44_0__setVoiceForm_b__0__);
    sub_1C32C20(&EventSvtControl___c__DisplayClass44_0_TypeInfo);
    byte_4C31E95 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  randomVoiceList = this->fields.randomVoiceList;
  v17 = (Il2CppObject *)this;
  if ( !randomVoiceList )
    goto LABEL_20;
  if ( SLODWORD(randomVoiceList->max_length) >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = (EventSvtControl___c__DisplayClass44_0_o *)sub_1C32E6C(EventSvtControl___c__DisplayClass44_0_TypeInfo);
      EventSvtControl___c__DisplayClass44_0___ctor(v7, 0);
      if ( v6 >= LODWORD(randomVoiceList->max_length) )
        sub_1C32E84(monitor);
      if ( !v7 )
        break;
      v8 = randomVoiceList->m_Items[v6];
      v7->fields.voice = v8;
      p_fields = &v7->fields;
      sub_1C32BC4(&v7->fields, v8);
      v10 = (System_Predicate_int__o *)sub_1C32E6C(System_Predicate_int__TypeInfo);
      System_Predicate_int____ctor(
        v10,
        (Il2CppObject *)v7,
        Method_EventSvtControl___c__DisplayClass44_0__setVoiceForm_b__0__,
        0);
      if ( !v3 )
        break;
      monitor = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___Exists(
                                                               v3,
                                                               (System_Predicate_T__o *)v10,
                                                               (const MethodInfo_377BDA4 *)Method_System_Collections_Generic_List_int__Exists__);
      if ( ((unsigned __int8)monitor & 1) == 0 )
      {
        if ( !p_fields->voice )
          break;
        form = p_fields->voice->fields.form;
        items = v3->fields._items;
        v13 = Method_System_Collections_Generic_List_int__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            form,
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size] = form;
        }
      }
      if ( (__int64)++v6 >= SLODWORD(randomVoiceList->max_length) )
        goto LABEL_16;
    }
LABEL_20:
    sub_1C32E7C(monitor);
  }
LABEL_16:
  monitor = (System_Collections_Generic_List_object__o *)v17[5].monitor;
  if ( !monitor )
    goto LABEL_20;
  monitor = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                           monitor,
                                                           0,
                                                           (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
  if ( !monitor )
    goto LABEL_20;
  v15 = *(UIStandFigureR_o **)&monitor->fields._size;
  v16 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v16, v17, Method_EventSvtControl_svtVoicePlay__, 0);
  if ( !v15 )
    goto LABEL_20;
  UIStandFigureR__PreloadFormAssets(v15, v3, v16, 0);
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
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v11; // x4

  if ( (byte_4C31E9E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C31E9E = 1;
  }
  if ( this->fields.player )
    EventSvtControl__stopVoice(this, *(const MethodInfo **)&svtId);
  if ( targetVoiceIds )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C32E7C(0);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    this->fields.callbakEndPlay = callback;
    sub_1C32BC4(&this->fields.callbakEndPlay, callback);
    this->fields.randomVoiceList = 0;
    sub_1C32BC4(&this->fields.randomVoiceList, 0);
    EventSvtControl__TryPlayVoiceInternal(
      this,
      svtId,
      (System_Collections_Generic_IReadOnlyList_string__o *)targetVoiceIds,
      (VoicePlayCondMaster_o *)MasterData_object,
      v11);
  }
}


void EventSvtControl__stopVoice(EventSvtControl_o *this, const MethodInfo *method)
{
  SePlayer_o **p_player; // x20
  System_String_o *asstName; // x21
  System_String_o *vcName; // x22

  if ( (byte_4C31E9D & 1) == 0 )
  {
    sub_1C32C20(&SoundManager_TypeInfo);
    sub_1C32C20(&StringLiteral_23871/*"svtVoicePlay"*/);
    byte_4C31E9D = 1;
  }
  p_player = &this->fields.player;
  if ( this->fields.player )
  {
    asstName = this->fields.asstName;
    vcName = this->fields.vcName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoice(asstName, vcName, 0.0, 0);
    if ( !*p_player )
      sub_1C32E7C(0);
    SePlayer__Destroy(*p_player, 0);
    this->fields.player = 0;
    sub_1C32BC4(&this->fields.player, 0);
    this->fields.callbakEndPlay = 0;
    sub_1C32BC4(&this->fields.callbakEndPlay, 0);
    *(_QWORD *)&this->fields.maxPlayCnt = 0;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_71208520(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_23871/*"svtVoicePlay"*/,
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
  if ( (byte_4C31E99 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    this = (EventSvtControl_o *)sub_1C32C20(&Method_EventSvtControl_SvtVoicePlayProc__);
    byte_4C31E99 = 1;
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
        sub_1C32E84(this);
      v6 = randomVoiceList->m_Items[playCnt];
      if ( v6 )
      {
        additionalPerformances = v6->fields.additionalPerformances;
        v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(v8, (Il2CppObject *)v2, Method_EventSvtControl_SvtVoicePlayProc__, 0);
        EventSvtControl__PlayPerformance(v2, additionalPerformances, 0, 1, v8, v9);
        return;
      }
LABEL_13:
      sub_1C32E7C(this);
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
  const MethodInfo *v10; // x2
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListOverwrite; // x8
  System_Collections_Generic_List_object__o *v12; // x21
  VoicePlayCondMaster_o *v13; // x23
  _BOOL8 v14; // x0
  Il2CppObject *current; // x24
  Il2CppClass *klass; // x8
  _BOOL8 isVoicePlay; // x0
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Random_o *v22; // x20
  int32_t v23; // w0
  struct ServantVoiceData_array *Item; // x0
  const MethodInfo *v25; // x1
  struct ServantVoiceData_array *randomVoiceList; // x8
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C31EA6 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C32C20(&System_Random_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C31EA6 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_34;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               eventId,
               (const MethodInfo_3396838 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_34;
  if ( EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0) )
  {
    voiceListOverwrite = this->fields.voiceListOverwrite;
    if ( voiceListOverwrite )
    {
      if ( voiceListOverwrite->fields._size >= 1 )
      {
        v12 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v12,
          (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_34;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
        if ( !this->fields.voiceListOverwrite )
          goto LABEL_34;
        v13 = (VoicePlayCondMaster_o *)Instance;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v27,
          (System_Collections_Generic_List_object__o *)this->fields.voiceListOverwrite,
          (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
        v28 = v27;
        while ( 1 )
        {
          v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v28,
                  (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
          if ( !v14 )
            break;
          current = v28.fields._current;
          if ( !v28.fields._current )
            sub_1C32E7C(v14);
          if ( !LODWORD(v28.fields._current[1].monitor) )
            sub_1C32E84(v14);
          klass = v28.fields._current[2].klass;
          if ( !klass )
            sub_1C32E7C(v14);
          if ( !v13 )
            sub_1C32E7C(v14);
          isVoicePlay = VoicePlayCondMaster__isVoicePlay(
                          v13,
                          svtId,
                          (System_String_o *)klass->_1.name,
                          0,
                          -1,
                          -1,
                          0,
                          0,
                          0);
          if ( isVoicePlay )
          {
            if ( !v12 )
              sub_1C32E7C(isVoicePlay);
            items = v12->fields._items;
            v19 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v12->fields._version;
            if ( !items )
              sub_1C32E7C(isVoicePlay);
            size = v12->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v12,
                current,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
            }
            else
            {
              v21 = &items->obj.klass + size;
              v12->fields._size = size + 1;
              v21[4] = (Il2CppClass *)current;
              sub_1C32BC4(v21 + 4, current);
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v28,
          (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
        if ( v12 )
        {
          if ( v12->fields._size >= 1 )
          {
            this->fields.callbackStopVoice = callback;
            sub_1C32BC4(&this->fields.callbackStopVoice, callback);
            v22 = (System_Random_o *)sub_1C32E6C(System_Random_TypeInfo);
            System_Random___ctor(v22, 0);
            if ( v22 )
            {
              v23 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, const MethodInfo *))v22->klass->vtable._7_Next.methodPtr)(
                      v22,
                      (unsigned int)v12->fields._size,
                      v22->klass->vtable._7_Next.method);
              Item = (struct ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                                        v12,
                                                        v23,
                                                        (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
              this->fields.randomVoiceList = Item;
              Instance = (Il2CppObject *)sub_1C32BC4(&this->fields.randomVoiceList, Item);
              randomVoiceList = this->fields.randomVoiceList;
              if ( randomVoiceList )
              {
                this->fields.maxPlayCnt = randomVoiceList->max_length;
                EventSvtControl__svtVoicePlay(this, v25);
                return;
              }
            }
LABEL_34:
            sub_1C32E7C(Instance);
          }
        }
      }
    }
  }
  EventSvtControl__playVoice(this, callback, v10);
}


void EventSvtControl__PlayPerformanceProc_d__72___ctor(
        EventSvtControl__PlayPerformanceProc_d__72_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool EventSvtControl__PlayPerformanceProc_d__72__MoveNext(
        EventSvtControl__PlayPerformanceProc_d__72_o *this,
        const MethodInfo *method)
{
  EventSvtControl__PlayPerformanceProc_d__72_o *v2; // x19
  int32_t _1__state; // w8
  struct EventSvtControl_o *_4__this; // x22
  Il2CppObject *v5; // x21
  struct EventSvtControl_o *v6; // x1
  Il2CppObject *animName; // x1
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v9; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct EventSvtControl___c__DisplayClass72_0_o *_8__1; // x8
  Il2CppObject *v13; // x20
  System_Func_bool__o *v14; // x21
  UnityEngine_WaitUntil_o *v15; // x20
  Il2CppObject **v16; // x19
  struct System_Action_o *playEndAction; // x8

  v2 = this;
  if ( (byte_4C31ED2 & 1) == 0 )
  {
    sub_1C32C20(&System_Func_bool__TypeInfo);
    sub_1C32C20(&Method_EventSvtControl___c__DisplayClass72_0__PlayPerformanceProc_b__0__);
    sub_1C32C20(&EventSvtControl___c__DisplayClass72_0_TypeInfo);
    sub_1C32C20(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (EventSvtControl__PlayPerformanceProc_d__72_o *)sub_1C32C20(&UnityEngine_WaitUntil_TypeInfo);
    byte_4C31ED2 = 1;
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
    goto LABEL_12;
  }
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v5 = (Il2CppObject *)sub_1C32E6C(EventSvtControl___c__DisplayClass72_0_TypeInfo);
    System_Object___ctor(v5, 0);
    v2->fields.__8__1 = (struct EventSvtControl___c__DisplayClass72_0_o *)v5;
    sub_1C32BC4(&v2->fields.__8__1, v5);
    this = (EventSvtControl__PlayPerformanceProc_d__72_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_21;
    v6 = v2->fields.__4__this;
    *(_QWORD *)&this->fields.__1__state = v6;
    sub_1C32BC4(&this->fields, v6);
    this = (EventSvtControl__PlayPerformanceProc_d__72_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_21;
    animName = (Il2CppObject *)v2->fields.animName;
    this->fields.__2__current = animName;
    this = (EventSvtControl__PlayPerformanceProc_d__72_o *)sub_1C32BC4(&this->fields.__2__current, animName);
    delay = v2->fields.delay;
    if ( delay > 0.0 )
    {
      v9 = (UnityEngine_WaitForSeconds_o *)sub_1C32E6C(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v9, delay, 0);
      v2->fields.__2__current = (Il2CppObject *)v9;
      p__2__current = &v2->fields.__2__current;
      sub_1C32BC4(p__2__current, v9);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_12:
    if ( _4__this )
    {
      this = (EventSvtControl__PlayPerformanceProc_d__72_o *)_4__this->fields.animationRef;
      if ( this )
      {
        UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)this, 0);
        _8__1 = v2->fields.__8__1;
        if ( _8__1 )
        {
          this = (EventSvtControl__PlayPerformanceProc_d__72_o *)_4__this->fields.animationRef;
          if ( this )
          {
            UnityEngine_Animation__Play_70968924((UnityEngine_Animation_o *)this, _8__1->fields.animName, 0);
            if ( v2->fields.isWaitPerformance )
            {
              v13 = (Il2CppObject *)v2->fields.__8__1;
              v14 = (System_Func_bool__o *)sub_1C32E6C(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                v14,
                v13,
                Method_EventSvtControl___c__DisplayClass72_0__PlayPerformanceProc_b__0__,
                0);
              v15 = (UnityEngine_WaitUntil_o *)sub_1C32E6C(UnityEngine_WaitUntil_TypeInfo);
              UnityEngine_WaitUntil___ctor(v15, v14, 0);
              v2->fields.__2__current = (Il2CppObject *)v15;
              v16 = &v2->fields.__2__current;
              sub_1C32BC4(v16, v15);
              *((_DWORD *)v16 - 2) = 2;
              return 1;
            }
            goto LABEL_18;
          }
        }
      }
    }
LABEL_21:
    sub_1C32E7C(this);
  }
  return 0;
}


Il2CppObject *EventSvtControl__PlayPerformanceProc_d__72__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventSvtControl__PlayPerformanceProc_d__72_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn EventSvtControl__PlayPerformanceProc_d__72__System_Collections_IEnumerator_Reset(
        EventSvtControl__PlayPerformanceProc_d__72_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_EventSvtControl__PlayPerformanceProc_d__72_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *EventSvtControl__PlayPerformanceProc_d__72__System_Collections_IEnumerator_get_Current(
        EventSvtControl__PlayPerformanceProc_d__72_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void EventSvtControl__PlayPerformanceProc_d__72__System_IDisposable_Dispose(
        EventSvtControl__PlayPerformanceProc_d__72_o *this,
        const MethodInfo *method)
{
  ;
}


void EventSvtControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C31ECE & 1) == 0 )
  {
    sub_1C32C20(&EventSvtControl___c_TypeInfo);
    byte_4C31ECE = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(EventSvtControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventSvtControl___c_TypeInfo->static_fields->__9 = (struct EventSvtControl___c_o *)v1;
  sub_1C32BC4(EventSvtControl___c_TypeInfo->static_fields, v1);
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
    sub_1C32E7C(this);
  return x->fields.id;
}


int32_t EventSvtControl___c___playVoice_b__45_0(
        EventSvtControl___c_o *this,
        System_Collections_Generic_KeyValuePair_ServantVoiceData____int__o x,
        const MethodInfo *method)
{
  int32_t value; // w19

  value = x.fields.value;
  if ( (byte_4C31ECF & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_ServantVoiceData____int__get_Value__);
    byte_4C31ECF = 1;
  }
  return value;
}


void EventSvtControl___c__DisplayClass44_0___ctor(
        EventSvtControl___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventSvtControl___c__DisplayClass44_0___setVoiceForm_b__0(
        EventSvtControl___c__DisplayClass44_0_o *this,
        int32_t a,
        const MethodInfo *method)
{
  struct ServantVoiceData_o *voice; // x8
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  v5 = a;
  voice = this->fields.voice;
  if ( !voice )
    sub_1C32E7C(this);
  return System_Int32__Equals_65028480((int32_t)&v5, voice->fields.form, 0);
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
  struct EventSvtControl___c__DisplayClass57_0_o *CS___8__locals1; // x8
  EventSvtControl___c__DisplayClass57_1_o *v3; // x19
  struct System_Action_o *vdArray; // x1
  struct EventSvtControl___c__DisplayClass57_0_o *v5; // x8
  struct System_Action_o *_9__0; // x9
  struct EventSvtControl___c__DisplayClass57_0_o *v7; // x8
  struct System_Action_o *callBackStartPlay; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_10;
  v3 = this;
  this = (EventSvtControl___c__DisplayClass57_1_o *)CS___8__locals1->fields.__4__this;
  if ( !this )
    goto LABEL_10;
  vdArray = (struct System_Action_o *)v3->fields.vdArray;
  this[1].fields.__9__0 = vdArray;
  this = (EventSvtControl___c__DisplayClass57_1_o *)sub_1C32BC4(&this[1].fields.__9__0, vdArray);
  v5 = v3->fields.CS___8__locals1;
  if ( !v5
    || (this = (EventSvtControl___c__DisplayClass57_1_o *)v5->fields.__4__this) == 0
    || (_9__0 = this[1].fields.__9__0) == 0
    || (LODWORD(this[2].klass) = _9__0->fields.invoke_impl,
        BYTE2(this[5].fields.vdArray) = v5->fields.arg.fields.skipPerformance,
        EventSvtControl__svtVoicePlay((EventSvtControl_o *)this, 0),
        (v7 = v3->fields.CS___8__locals1) == 0) )
  {
LABEL_10:
    sub_1C32E7C(this);
  }
  callBackStartPlay = v7->fields.arg.fields.callBackStartPlay;
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

  if ( (byte_4C31ED0 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_ServantVoiceData___);
    sub_1C32C20(&System_Func_ServantVoiceData__bool__TypeInfo);
    sub_1C32C20(&Method_EventSvtControl___c__DisplayClass61_0__PlayEventTradeVoice_b__1__);
    byte_4C31ED0 = 1;
  }
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Func_ServantVoiceData__bool__o *)sub_1C32E6C(System_Func_ServantVoiceData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      (System_Func_object__bool__o *)_9__1,
      (Il2CppObject *)this,
      Method_EventSvtControl___c__DisplayClass61_0__PlayEventTradeVoice_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C32BC4(&this->fields.__9__1, _9__1);
  }
  return BasicHelper__Any_object__51144764(
           (System_Object_array *)dataList,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_30C683C *)Method_BasicHelper_Any_ServantVoiceData___);
}


bool EventSvtControl___c__DisplayClass61_0___PlayEventTradeVoice_b__1(
        EventSvtControl___c__DisplayClass61_0_o *this,
        ServantVoiceData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C32E7C(this);
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

  if ( (byte_4C31ED1 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_ServantVoiceData___);
    sub_1C32C20(&System_Func_ServantVoiceData__bool__TypeInfo);
    sub_1C32C20(&Method_EventSvtControl___c__DisplayClass62_0__PlayEventCraftVoice_b__1__);
    byte_4C31ED1 = 1;
  }
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Func_ServantVoiceData__bool__o *)sub_1C32E6C(System_Func_ServantVoiceData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      (System_Func_object__bool__o *)_9__1,
      (Il2CppObject *)this,
      Method_EventSvtControl___c__DisplayClass62_0__PlayEventCraftVoice_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C32BC4(&this->fields.__9__1, _9__1);
  }
  return BasicHelper__Any_object__51144764(
           (System_Object_array *)dataList,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_30C683C *)Method_BasicHelper_Any_ServantVoiceData___);
}


bool EventSvtControl___c__DisplayClass62_0___PlayEventCraftVoice_b__1(
        EventSvtControl___c__DisplayClass62_0_o *this,
        ServantVoiceData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C32E7C(this);
  return System_String__op_Equality(data->fields.id, this->fields.id, 0);
}


void EventSvtControl___c__DisplayClass72_0___ctor(
        EventSvtControl___c__DisplayClass72_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventSvtControl___c__DisplayClass72_0___PlayPerformanceProc_b__0(
        EventSvtControl___c__DisplayClass72_0_o *this,
        const MethodInfo *method)
{
  struct EventSvtControl_o *_4__this; // x8
  EventSvtControl___c__DisplayClass72_0_o *v3; // x19
  struct EventSvtControl_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  v3 = this;
  this = (EventSvtControl___c__DisplayClass72_0_o *)_4__this->fields.animationRef;
  if ( !this )
    goto LABEL_10;
  this = (EventSvtControl___c__DisplayClass72_0_o *)UnityEngine_Animation__get_Item(
                                                      (UnityEngine_Animation_o *)this,
                                                      v3->fields.animName,
                                                      0);
  if ( !this )
    goto LABEL_10;
  if ( UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0) >= 1.0 )
    return 1;
  v4 = v3->fields.__4__this;
  if ( !v4 || (this = (EventSvtControl___c__DisplayClass72_0_o *)v4->fields.animationRef) == 0 )
LABEL_10:
    sub_1C32E7C(this);
  return !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0);
}